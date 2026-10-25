// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e6b4d0 FUN_140e6b4d0 body=448 status=ok
// SIG undefined FUN_140e6b4d0(void)

void FUN_140e6b4d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xb90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb30) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xb18);
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
  plVar4 = *(longlong **)(param_1 + 0xaf8);
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
  plVar4 = *(longlong **)(param_1 + 0xad8);
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
  plVar4 = *(longlong **)(param_1 + 0xab8);
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
  plVar4 = *(longlong **)(param_1 + 0xa98);
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
  FUN_140c64760(param_1);
  return;
}



// FUNCTION 140e6b690 FUN_140e6b690 body=581 status=ok
// SIG undefined FUN_140e6b690(void)

void FUN_140e6b690(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xbc8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 3000) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xba8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb68) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xb50);
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
  plVar4 = *(longlong **)(param_1 + 0xb30);
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
  plVar4 = *(longlong **)(param_1 + 0xb10);
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
  plVar4 = *(longlong **)(param_1 + 0xaf0);
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
  plVar4 = *(longlong **)(param_1 + 0xad0);
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
  plVar4 = *(longlong **)(param_1 + 0xab8);
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
  plVar4 = *(longlong **)(param_1 + 0xa98);
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
  if (*(longlong *)(param_1 + 0xa70) != 0) {
    FMemory::Free();
  }
  FUN_140c64760(param_1);
  return;
}



// FUNCTION 140e6b8e0 FUN_140e6b8e0 body=168 status=ok
// SIG undefined FUN_140e6b8e0(void)

void FUN_140e6b8e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_1445c8f60;
  FUN_140e81ce0(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x70))(local_18,param_1 + 8);
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
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_140e6bbd0(param_1);
  return;
}



// FUNCTION 140e6b990 FUN_140e6b990 body=146 status=ok
// SIG undefined FUN_140e6b990(void)

void FUN_140e6b990(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[2];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = &PTR_FUN_143f47c98;
    return;
  }
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
    *param_1 = &PTR_FUN_143f47c98;
    return;
  }
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 140e6ba30 FUN_140e6ba30 body=206 status=ok
// SIG undefined FUN_140e6ba30(void)

void FUN_140e6ba30(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *local_18;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_1445c8f70;
  FUN_140e81ce0(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x98))(local_18,param_1 + 8);
  }
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  iVar5 = *(int *)(param_1 + 7);
  plVar4 = (longlong *)param_1[6];
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = (longlong *)param_1[6];
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  FUN_140e6bbd0(param_1);
  return;
}



// FUNCTION 140e6bb00 FUN_140e6bb00 body=203 status=ok
// SIG undefined FUN_140e6bb00(void)

void FUN_140e6bb00(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_1445c8f40;
  FUN_140e81ce0(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0xc0))(local_18,param_1 + 10);
    (**(code **)(*local_18 + 0x20))(local_18,param_1 + 0xb);
    (**(code **)(*local_18 + 0xe8))(local_18,param_1 + 0xc);
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
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_140e6bbd0(param_1);
  return;
}



// FUNCTION 140e6bbd0 FUN_140e6bbd0 body=107 status=ok
// SIG undefined FUN_140e6bbd0(void)

void FUN_140e6bbd0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1445c8f30;
  plVar4 = (longlong *)param_1[4];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  return;
}



// FUNCTION 140e6bc40 FUN_140e6bc40 body=51 status=ok
// SIG undefined FUN_140e6bc40(void)

void FUN_140e6bc40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x20);
  return;
}



// FUNCTION 140e6bc80 FUN_140e6bc80 body=182 status=ok
// SIG undefined FUN_140e6bc80(void)

void FUN_140e6bc80(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_1445c8f50;
  FUN_140e81ce0(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x48))(local_18,param_1 + 10);
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
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_140e6bbd0(param_1);
  return;
}



// FUNCTION 140e6bd40 FUN_140e6bd40 body=150 status=ok
// SIG undefined FUN_140e6bd40(void)

longlong * FUN_140e6bd40(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      plVar1 = (longlong *)(*param_1 + 0x38);
      do {
        if (plVar1[2] != 0) {
          FMemory::Free();
        }
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        if (plVar1[-2] != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 0xb;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_140d1bf80(param_1,*param_2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  return param_1;
}



// FUNCTION 140e6bde0 FUN_140e6bde0 body=432 status=ok
// SIG undefined FUN_140e6bde0(void)

undefined8 * FUN_140e6bde0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 0x15) != '\0') {
      *(undefined1 *)(param_1 + 0x15) = 0;
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xf);
      if (param_1[0xd] != 0) {
        FMemory::Free();
      }
      if (param_1[8] != 0) {
        FMemory::Free();
      }
    }
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 5,param_2 + 5);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x74)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd,0);
    }
    if ((undefined2 *)param_1[0xd] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[0xd] = 0;
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    local_38 = param_2[0xc];
    FString::FString(local_30,param_2 + 0xd);
    FSoftObjectPath::operator=(param_1 + 0xc,&local_38);
    param_1[0xf] = 0;
    param_1[0xf] = param_2[0xf];
    param_2[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
    param_2[0x10] = 0;
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
    param_1[0x13] = param_2[0x13];
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return param_1;
}



// FUNCTION 140e6bf90 FUN_140e6bf90 body=714 status=ok
// SIG undefined FUN_140e6bf90(void)

longlong FUN_140e6bf90(longlong param_1,longlong param_2)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  FString::operator=();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  local_28 = *(undefined8 *)(param_2 + 0x20);
  FString::FString(local_20,param_2 + 0x28);
  FSoftObjectPath::operator=(param_1 + 0x20,&local_28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  local_28 = *(undefined8 *)(param_2 + 0x48);
  FString::FString(local_20,param_2 + 0x50);
  FSoftObjectPath::operator=(param_1 + 0x48,&local_28);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  local_28 = *(undefined8 *)(param_2 + 0x70);
  FString::FString(local_20,param_2 + 0x78);
  FSoftObjectPath::operator=(param_1 + 0x70,&local_28);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  local_28 = *(undefined8 *)(param_2 + 0x98);
  FString::FString(local_20,param_2 + 0xa0);
  FSoftObjectPath::operator=(param_1 + 0x98,&local_28);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  local_28 = *(undefined8 *)(param_2 + 0xc0);
  FString::FString(local_20,param_2 + 200);
  FSoftObjectPath::operator=(param_1 + 0xc0,&local_28);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  local_28 = *(undefined8 *)(param_2 + 0xe8);
  FString::FString(local_20,param_2 + 0xf0);
  FSoftObjectPath::operator=(param_1 + 0xe8,&local_28);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  local_28 = *(undefined8 *)(param_2 + 0x110);
  FString::FString(local_20,param_2 + 0x118);
  FSoftObjectPath::operator=(param_1 + 0x110,&local_28);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  local_28 = *(undefined8 *)(param_2 + 0x138);
  FString::FString(local_20,param_2 + 0x140);
  FSoftObjectPath::operator=(param_1 + 0x138,&local_28);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  local_28 = *(undefined8 *)(param_2 + 0x160);
  FString::FString(local_20,param_2 + 0x168);
  FSoftObjectPath::operator=(param_1 + 0x160,&local_28);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  return param_1;
}



// FUNCTION 140e6c260 FUN_140e6c260 body=6071 status=ok
// SIG undefined FUN_140e6c260(void)

uint * FUN_140e6c260(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  *param_1 = *param_1 ^ (*param_2 ^ *param_1) & 1;
  uVar4 = (*param_2 ^ *param_1) & 2 ^ *param_1;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 4 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 8 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x10 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x20 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x40 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x80 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x100 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x200 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x400 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x800 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x1000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x2000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x4000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x8000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x10000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x20000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x40000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x80000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x100000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x200000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x400000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x800000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x1000000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x2000000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x4000000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x8000000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x10000000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x20000000 ^ uVar4;
  *param_1 = uVar4;
  uVar4 = (uVar4 ^ *param_2) & 0x40000000 ^ uVar4;
  *param_1 = uVar4;
  *param_1 = (uVar4 ^ *param_2) & 0x7fffffff ^ *param_2;
  param_1[1] = param_1[1] ^ (param_1[1] ^ param_2[1]) & 1;
  uVar4 = (param_2[1] ^ param_1[1]) & 2 ^ param_1[1];
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 4 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 8 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x10 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x20 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x40 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x80 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x100 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x200 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x400 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x800 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x1000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x2000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x4000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x8000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x10000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x20000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x40000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x80000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x100000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x200000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x400000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x800000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x1000000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x2000000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x4000000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x8000000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x10000000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x20000000 ^ uVar4;
  param_1[1] = uVar4;
  uVar4 = (uVar4 ^ param_2[1]) & 0x40000000 ^ uVar4;
  param_1[1] = uVar4;
  param_1[1] = (uVar4 ^ param_2[1]) & 0x7fffffff ^ param_2[1];
  param_1[2] = param_1[2] ^ (param_1[2] ^ param_2[2]) & 1;
  uVar4 = (param_2[2] ^ param_1[2]) & 2 ^ param_1[2];
  param_1[2] = uVar4;
  uVar4 = (uVar4 ^ param_2[2]) & 4 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (uVar4 ^ param_2[2]) & 8 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (uVar4 ^ param_2[2]) & 0x10 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (uVar4 ^ param_2[2]) & 0x20 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (uVar4 ^ param_2[2]) & 0x40 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (uVar4 ^ param_2[2]) & 0x80 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (uVar4 ^ param_2[2]) & 0x100 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (uVar4 ^ param_2[2]) & 0x200 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x400 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x800 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x1000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x2000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x4000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x8000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x10000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x20000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x40000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x80000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x100000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x200000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x400000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x800000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x1000000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x2000000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x4000000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x8000000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x10000000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x20000000 ^ uVar4;
  param_1[2] = uVar4;
  uVar4 = (param_2[2] ^ uVar4) & 0x40000000 ^ uVar4;
  param_1[2] = uVar4;
  param_1[2] = (param_2[2] ^ uVar4) & 0x7fffffff ^ param_2[2];
  param_1[3] = param_1[3] ^ (param_1[3] ^ param_2[3]) & 1;
  uVar4 = (param_1[3] ^ param_2[3]) & 2 ^ param_1[3];
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 4 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 8 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x10 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x20 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x40 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x80 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x100 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x200 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x400 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x800 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x1000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x2000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x4000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x8000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x10000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x20000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x40000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x80000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x100000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x200000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x400000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x800000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x1000000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x2000000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x4000000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x8000000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x10000000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x20000000 ^ uVar4;
  param_1[3] = uVar4;
  uVar4 = (uVar4 ^ param_2[3]) & 0x40000000 ^ uVar4;
  param_1[3] = uVar4;
  param_1[3] = (uVar4 ^ param_2[3]) & 0x7fffffff ^ param_2[3];
  param_1[4] = param_1[4] ^ (param_1[4] ^ param_2[4]) & 1;
  uVar4 = (param_1[4] ^ param_2[4]) & 2 ^ param_1[4];
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 4 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 8 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x10 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x20 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x40 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x80 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x100 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x200 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x400 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x800 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x1000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x2000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x4000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x8000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x10000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x20000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x40000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x80000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x100000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x200000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x400000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x800000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x1000000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x2000000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x4000000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x8000000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x10000000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x20000000 ^ uVar4;
  param_1[4] = uVar4;
  uVar4 = (uVar4 ^ param_2[4]) & 0x40000000 ^ uVar4;
  param_1[4] = uVar4;
  param_1[4] = (uVar4 ^ param_2[4]) & 0x7fffffff ^ param_2[4];
  param_1[5] = param_1[5] ^ (param_1[5] ^ param_2[5]) & 1;
  uVar4 = (param_1[5] ^ param_2[5]) & 2 ^ param_1[5];
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 4 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 8 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x10 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x20 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x40 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x80 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x100 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x200 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x400 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x800 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x1000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x2000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x4000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x8000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x10000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x20000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x40000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (param_2[5] ^ uVar4) & 0x80000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x100000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x200000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x400000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x800000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x1000000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x2000000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x4000000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x8000000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x10000000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x20000000 ^ uVar4;
  param_1[5] = uVar4;
  uVar4 = (uVar4 ^ param_2[5]) & 0x40000000 ^ uVar4;
  param_1[5] = uVar4;
  param_1[5] = (uVar4 ^ param_2[5]) & 0x7fffffff ^ param_2[5];
  param_1[6] = param_1[6] ^ (param_1[6] ^ param_2[6]) & 1;
  uVar4 = (param_1[6] ^ param_2[6]) & 2 ^ param_1[6];
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 4 ^ uVar4;
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 8 ^ uVar4;
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 0x10 ^ uVar4;
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 0x20 ^ uVar4;
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 0x40 ^ uVar4;
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 0x80 ^ uVar4;
  param_1[6] = uVar4;
  uVar4 = (uVar4 ^ param_2[6]) & 0x100 ^ uVar4;
  param_1[6] = uVar4;
  param_1[6] = (uVar4 ^ param_2[6]) & 0x200 ^ uVar4;
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar3;
  param_1[0x34] = param_2[0x34];
  uVar3 = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3a) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x3e);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x3e) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x42) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x46);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x46) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4a) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x4e) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x52);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x52) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x56) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x5a);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x5a) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x5e) = uVar3;
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = param_2[0x61];
  param_1[0x62] = param_2[0x62];
  param_1[99] = param_2[99];
  param_1[100] = param_2[100];
  param_1[0x65] = param_2[0x65];
  param_1[0x66] = param_2[0x66];
  param_1[0x67] = param_2[0x67];
  uVar3 = *(undefined8 *)(param_2 + 0x6a);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x6a) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x6e);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x6e) = uVar3;
  param_1[0x70] = param_2[0x70];
  param_1[0x71] = param_2[0x71];
  param_1[0x72] = param_2[0x72];
  uVar3 = *(undefined8 *)(param_2 + 0x75);
  *(undefined8 *)(param_1 + 0x73) = *(undefined8 *)(param_2 + 0x73);
  *(undefined8 *)(param_1 + 0x75) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x79);
  *(undefined8 *)(param_1 + 0x77) = *(undefined8 *)(param_2 + 0x77);
  *(undefined8 *)(param_1 + 0x79) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x7d);
  *(undefined8 *)(param_1 + 0x7b) = *(undefined8 *)(param_2 + 0x7b);
  *(undefined8 *)(param_1 + 0x7d) = uVar3;
  param_1[0x7f] = param_2[0x7f];
  param_1[0x80] = param_2[0x80];
  param_1[0x81] = param_2[0x81];
  param_1[0x82] = param_2[0x82];
  uVar3 = *(undefined8 *)(param_2 + 0x85);
  *(undefined8 *)(param_1 + 0x83) = *(undefined8 *)(param_2 + 0x83);
  *(undefined8 *)(param_1 + 0x85) = uVar3;
  param_1[0x87] = param_2[0x87];
  param_1[0x88] = param_2[0x88];
  *(char *)(param_1 + 0x89) = (char)param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  param_1[0x8c] = param_2[0x8c];
  param_1[0x8d] = param_2[0x8d];
  param_1[0x8e] = param_2[0x8e];
  param_1[0x8f] = param_2[0x8f];
  param_1[0x90] = param_2[0x90];
  param_1[0x91] = param_2[0x91];
  param_1[0x92] = param_2[0x92];
  uVar3 = *(undefined8 *)(param_2 + 0x95);
  *(undefined8 *)(param_1 + 0x93) = *(undefined8 *)(param_2 + 0x93);
  *(undefined8 *)(param_1 + 0x95) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x99);
  *(undefined8 *)(param_1 + 0x97) = *(undefined8 *)(param_2 + 0x97);
  *(undefined8 *)(param_1 + 0x99) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x9d);
  *(undefined8 *)(param_1 + 0x9b) = *(undefined8 *)(param_2 + 0x9b);
  *(undefined8 *)(param_1 + 0x9d) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xa1);
  *(undefined8 *)(param_1 + 0x9f) = *(undefined8 *)(param_2 + 0x9f);
  *(undefined8 *)(param_1 + 0xa1) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0xa3) = *(undefined8 *)(param_2 + 0xa3);
  *(undefined8 *)(param_1 + 0xa5) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xa9);
  *(undefined8 *)(param_1 + 0xa7) = *(undefined8 *)(param_2 + 0xa7);
  *(undefined8 *)(param_1 + 0xa9) = uVar3;
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
  param_1[0xae] = param_2[0xae];
  *(undefined8 *)(param_1 + 0xaf) = *(undefined8 *)(param_2 + 0xaf);
  *(undefined8 *)(param_1 + 0xb1) = *(undefined8 *)(param_2 + 0xb1);
  param_1[0xb3] = param_2[0xb3];
  param_1[0xb4] = param_2[0xb4];
  param_1[0xb5] = param_2[0xb5];
  param_1[0xb6] = param_2[0xb6];
  param_1[0xb7] = param_2[0xb7];
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  param_1[0xba] = param_2[0xba];
  uVar3 = *(undefined8 *)(param_2 + 0xbd);
  *(undefined8 *)(param_1 + 0xbb) = *(undefined8 *)(param_2 + 0xbb);
  *(undefined8 *)(param_1 + 0xbd) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xc1);
  *(undefined8 *)(param_1 + 0xbf) = *(undefined8 *)(param_2 + 0xbf);
  *(undefined8 *)(param_1 + 0xc1) = uVar3;
  param_1[0xc3] = param_2[0xc3];
  param_1[0xc4] = param_2[0xc4];
  *(undefined8 *)(param_1 + 0xc6) = *(undefined8 *)(param_2 + 0xc6);
  param_1[200] = param_2[200];
  param_1[0xc9] = param_2[0xc9];
  param_1[0xca] = param_2[0xca];
  param_1[0xcb] = param_2[0xcb];
  param_1[0xcc] = param_2[0xcc];
  param_1[0xcd] = param_2[0xcd];
  param_1[0xce] = param_2[0xce];
  *(char *)(param_1 + 0xcf) = (char)param_2[0xcf];
  param_1[0xd0] = param_2[0xd0];
  param_1[0xd1] = param_2[0xd1];
  param_1[0xd2] = param_2[0xd2];
  param_1[0xd3] = param_2[0xd3];
  param_1[0xd4] = param_2[0xd4];
  param_1[0xd5] = param_2[0xd5];
  param_1[0xd6] = param_2[0xd6];
  param_1[0xd7] = param_2[0xd7];
  param_1[0xd8] = param_2[0xd8];
  param_1[0xd9] = param_2[0xd9];
  param_1[0xda] = param_2[0xda];
  param_1[0xdb] = param_2[0xdb];
  uVar3 = *(undefined8 *)(param_2 + 0xde);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
  *(undefined8 *)(param_1 + 0xde) = uVar3;
  param_1[0xe0] = param_2[0xe0];
  param_1[0xe1] = param_2[0xe1];
  *(undefined8 *)(param_1 + 0xe2) = *(undefined8 *)(param_2 + 0xe2);
  uVar3 = *(undefined8 *)(param_2 + 0xe6);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe6) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xea);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xea) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xee);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xee) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xf2);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf2) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xf6);
  *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0xf6) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xfa);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xfa) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xfe);
  *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0xfe) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x102);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x102) = uVar3;
  param_1[0x104] = param_2[0x104];
  param_1[0x105] = param_2[0x105];
  param_1[0x106] = param_2[0x106];
  param_1[0x107] = param_2[0x107];
  param_1[0x108] = param_2[0x108];
  param_1[0x109] = param_2[0x109];
  param_1[0x10a] = param_2[0x10a];
  param_1[0x10b] = param_1[0x10b] ^ (param_2[0x10b] ^ param_1[0x10b]) & 1;
  param_1[0x10c] = param_2[0x10c];
  param_1[0x10d] = param_2[0x10d];
  param_1[0x10e] = param_2[0x10e];
  param_1[0x10f] = param_2[0x10f];
  param_1[0x110] = param_2[0x110];
  param_1[0x111] = param_2[0x111];
  param_1[0x112] = param_2[0x112];
  param_1[0x113] = param_2[0x113];
  param_1[0x114] = param_2[0x114];
  param_1[0x115] = param_1[0x115] ^ (param_2[0x115] ^ param_1[0x115]) & 1;
  param_1[0x116] = param_2[0x116];
  param_1[0x117] = param_2[0x117];
  param_1[0x118] = param_2[0x118];
  param_1[0x119] = param_2[0x119];
  param_1[0x11a] = param_2[0x11a];
  param_1[0x11b] = param_2[0x11b];
  param_1[0x11c] = param_2[0x11c];
  param_1[0x11d] = param_2[0x11d];
  param_1[0x11e] = param_2[0x11e];
  param_1[0x11f] = param_2[0x11f];
  uVar3 = *(undefined8 *)(param_2 + 0x122);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x122) = uVar3;
  param_1[0x124] = param_2[0x124];
  uVar3 = *(undefined8 *)(param_2 + 0x127);
  *(undefined8 *)(param_1 + 0x125) = *(undefined8 *)(param_2 + 0x125);
  *(undefined8 *)(param_1 + 0x127) = uVar3;
  param_1[0x129] = param_2[0x129];
  uVar3 = *(undefined8 *)(param_2 + 300);
  *(undefined8 *)(param_1 + 0x12a) = *(undefined8 *)(param_2 + 0x12a);
  *(undefined8 *)(param_1 + 300) = uVar3;
  param_1[0x12e] = param_2[0x12e];
  param_1[0x12f] = param_2[0x12f];
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x132) = *(undefined8 *)(param_2 + 0x132);
  param_1[0x134] = param_2[0x134];
  *(char *)(param_1 + 0x135) = (char)param_2[0x135];
  param_1[0x136] = param_1[0x136] ^ (param_2[0x136] ^ param_1[0x136]) & 1;
  param_1[0x137] = param_2[0x137];
  param_1[0x138] = param_2[0x138];
  param_1[0x139] = param_2[0x139];
  param_1[0x13a] = param_2[0x13a];
  param_1[0x13b] = param_2[0x13b];
  param_1[0x13c] = param_2[0x13c];
  param_1[0x13d] = param_2[0x13d];
  param_1[0x13e] = param_2[0x13e];
  param_1[0x13f] = param_2[0x13f];
  param_1[0x140] = param_2[0x140];
  param_1[0x141] = param_2[0x141];
  param_1[0x142] = param_2[0x142];
  param_1[0x143] = param_2[0x143];
  *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(param_2 + 0x144);
  param_1[0x146] = param_2[0x146];
  param_1[0x147] = param_2[0x147];
  param_1[0x148] = param_2[0x148];
  param_1[0x149] = param_2[0x149];
  param_1[0x14a] = param_2[0x14a];
  param_1[0x14b] = param_2[0x14b];
  param_1[0x14c] = param_2[0x14c];
  param_1[0x14d] = param_2[0x14d];
  param_1[0x14e] = param_2[0x14e];
  param_1[0x14f] = param_2[0x14f];
  param_1[0x150] = param_2[0x150];
  param_1[0x151] = param_2[0x151];
  param_1[0x152] = param_2[0x152];
  param_1[0x153] = param_2[0x153];
  param_1[0x154] = param_2[0x154];
  param_1[0x155] = param_2[0x155];
  param_1[0x156] = param_2[0x156];
  param_1[0x157] = param_2[0x157];
  param_1[0x158] = param_2[0x158];
  param_1[0x159] = param_2[0x159];
  param_1[0x15a] = param_2[0x15a];
  param_1[0x15b] = param_2[0x15b];
  puVar1 = param_2 + 0x176;
  puVar2 = param_1 + 0x176;
  param_1[0x15c] = param_2[0x15c];
  param_1[0x15d] = param_2[0x15d];
  param_1[0x15e] = param_2[0x15e];
  param_1[0x15f] = param_2[0x15f];
  param_1[0x160] = param_2[0x160];
  param_1[0x161] = param_2[0x161];
  param_1[0x162] = param_2[0x162];
  param_1[0x163] = param_2[0x163];
  param_1[0x164] = param_2[0x164];
  param_1[0x165] = param_2[0x165];
  param_1[0x166] = param_1[0x166] ^ (param_2[0x166] ^ param_1[0x166]) & 1;
  param_1[0x167] = param_2[0x167];
  param_1[0x168] = param_2[0x168];
  param_1[0x169] = param_2[0x169];
  param_1[0x16a] = param_2[0x16a];
  param_1[0x16b] = param_2[0x16b];
  param_1[0x16c] = param_2[0x16c];
  param_1[0x16d] = param_2[0x16d];
  param_1[0x16e] = param_2[0x16e];
  param_1[0x16f] = param_2[0x16f];
  param_1[0x170] = param_2[0x170];
  param_1[0x171] = param_2[0x171];
  param_1[0x172] = param_2[0x172];
  *(undefined8 *)(param_1 + 0x173) = *(undefined8 *)(param_2 + 0x173);
  if (puVar2 != puVar1) {
    if (*(longlong *)puVar2 != 0) {
      FMemory::Free();
    }
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[0x178] = param_2[0x178];
    param_1[0x179] = param_2[0x179];
    param_2[0x178] = 0;
    param_2[0x179] = 0;
  }
  puVar1 = param_2 + 0x17a;
  puVar2 = param_1 + 0x17a;
  if (puVar2 != puVar1) {
    if (*(longlong *)puVar2 != 0) {
      FMemory::Free();
    }
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[0x17c] = param_2[0x17c];
    param_1[0x17d] = param_2[0x17d];
    param_2[0x17c] = 0;
    param_2[0x17d] = 0;
  }
  return param_1;
}



// FUNCTION 140e6da20 FUN_140e6da20 body=364 status=ok
// SIG undefined FUN_140e6da20(void)

longlong * FUN_140e6da20(undefined8 param_1,longlong *param_2,ulonglong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 local_48 [32];
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar4 = (int)param_3[1];
  if (0 < iVar4) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_2);
    iVar4 = (int)param_3[1];
  }
  uVar6 = 0;
  plVar7 = (longlong *)*param_3;
  uVar8 = (longlong)iVar4 & 0x1fffffffffffffff;
  if (plVar7 + iVar4 < plVar7) {
    uVar8 = uVar6;
  }
  if (uVar8 != 0) {
    do {
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        lVar3 = param_2[1];
        iVar4 = (int)lVar3 + 1;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2);
        }
        puVar1 = (undefined4 *)(*param_2 + (longlong)(int)lVar3 * 0x28);
        *(undefined8 *)(puVar1 + 6) = 0;
        *(undefined8 *)(puVar1 + 8) = 0;
        *puVar1 = 0xffffffff;
        puVar1[1] = 0;
        *(undefined8 *)(puVar1 + 4) = 0;
        puVar1[8] = 0;
        if (0x7fffffff < (uint)puVar1[9]) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 6);
        }
        if (*(undefined2 **)(puVar1 + 6) != (undefined2 *)0x0) {
          **(undefined2 **)(puVar1 + 6) = 0;
        }
        puVar1[2] = 0;
        uVar5 = FSoftObjectPath::FSoftObjectPath(local_48,lVar2);
        FSoftObjectPath::operator=(puVar1 + 4,uVar5);
        FWeakObjectPtr::operator=(puVar1);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        puVar1[2] = DAT_1464b56f4;
      }
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar8);
  }
  return param_2;
}



// FUNCTION 140e6db90 FUN_140e6db90 body=397 status=ok
// SIG undefined FUN_140e6db90(void)

void FUN_140e6db90(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 local_78 [32];
  code *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  *(undefined4 *)(*param_1 + 0x28) = 1;
  plVar7 = (longlong *)FUN_1415c3d50();
  puVar11 = &DAT_143f3eda8;
  if (*(int *)(*param_1 + 0x48) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = *(undefined2 **)(*param_1 + 0x40);
  }
  lVar8 = (**(code **)(*plVar7 + 0xe8))(plVar7,puVar10);
  lVar3 = *param_1;
  if (lVar8 < 0) {
    *(undefined4 *)(lVar3 + 0x28) = 4;
  }
  else {
    if (*(int *)(lVar3 + 0x48) != 0) {
      puVar11 = *(undefined2 **)(lVar3 + 0x40);
    }
    cVar6 = FUN_141676460(lVar3 + 0x50,puVar11,0);
    if (cVar6 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 2;
    }
  }
  lVar3 = *param_1;
  local_28 = (longlong *)0x0;
  local_18 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = lVar3;
    *puVar9 = &PTR_FUN_1444f8620;
  }
  local_58[0] = FUN_140e740e0;
  plVar7 = (longlong *)FUN_140596960(local_78,0,0xff);
  lVar3 = *plVar7;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar3 + 0x10,local_58);
  *(undefined4 *)(lVar3 + 0x60) = 2;
  lVar3 = *plVar7;
  lVar5 = plVar7[2];
  lVar8 = plVar7[1];
  lVar4 = *(longlong *)(lVar3 + 0x78);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    UNLOCK();
  }
  FUN_1405ab110(lVar3,lVar8,(int)lVar5,1);
  if (local_18 != 0) {
    plVar7 = local_48;
    if (local_28 != (longlong *)0x0) {
      plVar7 = local_28;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar4);
    }
  }
  return;
}



// FUNCTION 140e6dd20 FUN_140e6dd20 body=297 status=ok
// SIG undefined FUN_140e6dd20(void)

undefined8 FUN_140e6dd20(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)FUN_142dfdfe0();
    plVar3 = param_2;
    do {
      if (plVar3 == plVar1) {
        plVar1 = (longlong *)FUN_142dfdfe0();
        plVar3 = param_2;
        goto LAB_140e6ddc0;
      }
      plVar3 = (longlong *)plVar3[6];
    } while (plVar3 != (longlong *)0x0);
  }
  lVar4 = 0;
  goto LAB_140e6dd59;
  while (plVar1 = (longlong *)plVar1[6], plVar5 = plVar3, plVar1 != (longlong *)0x0) {
LAB_140e6de02:
    plVar5 = param_3;
    if (plVar1 == plVar2) break;
  }
  plVar3 = (longlong *)plVar5[0x1f];
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    plVar3 = (longlong *)plVar5[0x1f];
  }
  goto LAB_140e6dd85;
  while (plVar3 = (longlong *)plVar3[6], plVar2 = (longlong *)0x0, plVar3 != (longlong *)0x0) {
LAB_140e6ddc0:
    plVar2 = param_2;
    if (plVar3 == plVar1) break;
  }
  lVar4 = plVar2[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar4 = plVar2[0x1f];
  }
LAB_140e6dd59:
  plVar3 = (longlong *)0x0;
  if (param_3 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_142dfdfe0();
    plVar1 = param_3;
    do {
      if (plVar1 == plVar2) {
        plVar2 = (longlong *)FUN_142dfdfe0();
        plVar1 = param_3;
        goto LAB_140e6de02;
      }
      plVar1 = (longlong *)plVar1[6];
    } while (plVar1 != (longlong *)0x0);
  }
LAB_140e6dd85:
  if ((lVar4 != 0) && (plVar3 != (longlong *)0x0)) {
    return CONCAT71((int7)((ulonglong)plVar3 >> 8),*(uint *)(lVar4 + 600) < *(uint *)(plVar3 + 0x4b)
                   );
  }
  return 0;
}



// FUNCTION 140e6de50 FUN_140e6de50 body=188 status=ok
// SIG undefined FUN_140e6de50(void)

void FUN_140e6de50(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar3 = *(longlong *)(*param_1 + 0x118);
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
    if (bVar1) goto LAB_140e6deac;
  }
  lVar3 = lVar4;
LAB_140e6deac:
  lVar3 = FUN_140e7fe60(*param_1,lVar3);
  if (lVar3 != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
    }
    FUN_142fe44f0(lVar3,lVar4,*(undefined4 *)(*param_1 + 0x4a0));
  }
  return;
}



// FUNCTION 140e6df10 FUN_140e6df10 body=1163 status=ok
// SIG undefined FUN_140e6df10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e6df10(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  undefined4 *local_1f0;
  undefined4 local_1e8;
  undefined2 local_1e4;
  undefined1 local_1e2;
  undefined1 local_1d8 [8];
  longlong local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined1 local_198 [16];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158;
  longlong *local_128;
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8 [16];
  undefined8 *local_78;
  int local_70;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  cVar5 = FWeakObjectPtr::IsValid();
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get();
    *(undefined8 *)(lVar7 + 0x1d0) = 0;
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 8);
    if (cVar5 != '\0') {
      lVar7 = FWeakObjectPtr::Get(param_1);
      lVar7 = *(longlong *)(lVar7 + 0x118);
      if (lVar7 != 0) {
        lVar8 = FUN_14145f370();
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
          lVar9 = FWeakObjectPtr::Get(param_1);
          lVar8 = *(longlong *)(lVar9 + 0x120);
          if (lVar8 == 0) {
            lVar8 = FUN_1423407b0(lVar9);
          }
          lVar8 = FUN_14126dac0(lVar8);
          plVar2 = *(longlong **)(lVar7 + 0x990);
          lVar9 = FWeakObjectPtr::Get(param_1);
          cVar5 = FWeakObjectPtr::IsValid(lVar9 + 0x2d8);
          if (((cVar5 != '\0') && (lVar8 != 0)) && (plVar2 != (longlong *)0x0)) {
            lVar9 = FWeakObjectPtr::Get(param_1);
            uVar10 = FWeakObjectPtr::Get(lVar9 + 0x2d8);
            uVar10 = UCableComponent::GetAttachedActor(uVar10);
            lVar11 = FWeakObjectPtr::Get(param_1);
            lVar9 = *(longlong *)(lVar11 + 0x120);
            if (lVar9 == 0) {
              lVar9 = FUN_1423407b0(lVar11);
            }
            uVar12 = FUN_1407c74b0(lVar9);
            FUN_1407c8230(uVar10,local_f8);
            lVar9 = FWeakObjectPtr::Get(param_1 + 8);
            local_1f0 = (undefined4 *)((ulonglong)local_1f0 & 0xffffffffffffff00);
            local_1f8 = &local_1d0;
            (**(code **)(*(longlong *)(lVar9 + 0x660) + 0x20))
                      ((longlong *)(lVar9 + 0x660),local_68,lVar7,0);
            if (local_1d0 != 0) {
              FUN_1407cb6f0(uVar10,local_1d8);
              FUN_1407bc360(&local_178);
              local_178 = 0xffffffff;
              lVar9 = *(longlong *)(local_1d0 + 0x168);
              if (lVar9 == 0) {
                local_1b4 = DAT_1468b5d98;
                puVar13 = &local_1bc;
                local_1bc = _DAT_1468b5d90;
              }
              else {
                local_108 = *(undefined4 *)(lVar9 + 0x220);
                uStack_104 = *(undefined4 *)(lVar9 + 0x224);
                uStack_100 = *(undefined4 *)(lVar9 + 0x228);
                uStack_fc = *(undefined4 *)(lVar9 + 0x22c);
                puVar13 = (undefined8 *)&local_1c8;
                local_1c8 = local_108;
                local_1c0 = uStack_100;
                uStack_1c4 = uStack_104;
              }
              local_174 = *puVar13;
              local_16c = *(undefined4 *)(puVar13 + 1);
              lVar9 = *(longlong *)(local_1d0 + 0x168);
              if (lVar9 == 0) {
                local_19c = DAT_1468b5da8;
                puVar13 = &local_1a4;
                local_1a4 = DAT_1468b5da0;
              }
              else {
                local_188 = *(float *)(lVar9 + 0x210);
                fStack_184 = *(float *)(lVar9 + 0x214);
                fStack_180 = *(float *)(lVar9 + 0x218);
                fStack_17c = *(float *)(lVar9 + 0x21c);
                auVar3._4_4_ = -(uint)(fStack_184 != *(float *)(lVar9 + 0x254));
                auVar3._0_4_ = -(uint)(local_188 != *(float *)(lVar9 + 0x250));
                auVar3._8_4_ = -(uint)(fStack_180 != *(float *)(lVar9 + 600));
                auVar3._12_4_ = -(uint)(fStack_17c != *(float *)(lVar9 + 0x25c));
                iVar6 = movmskps(local_16c,auVar3);
                if (iVar6 != 0) {
                  *(float *)(lVar9 + 0x250) = local_188;
                  *(float *)(lVar9 + 0x254) = fStack_184;
                  *(float *)(lVar9 + 600) = fStack_180;
                  *(float *)(lVar9 + 0x25c) = fStack_17c;
                  puVar13 = (undefined8 *)FQuat::Rotator(&local_188,local_118);
                  *(undefined8 *)(lVar9 + 0x260) = *puVar13;
                  *(undefined4 *)(lVar9 + 0x268) = *(undefined4 *)(puVar13 + 1);
                }
                local_1a8 = *(undefined4 *)(lVar9 + 0x268);
                puVar13 = &local_1b0;
                local_1b0 = *(undefined8 *)(lVar9 + 0x260);
              }
              local_168 = *puVar13;
              local_160 = *(undefined4 *)(puVar13 + 1);
              lVar9 = FWeakObjectPtr::Get(param_1);
              local_158 = *(longlong *)(lVar9 + 0x120);
              if (local_158 == 0) {
                local_158 = FUN_1423407b0(lVar9);
              }
              if (0 < local_70) {
                puVar14 = (undefined4 *)FUN_1407bb9d0(local_198);
                local_1e8 = *puVar14;
                local_1e4 = *(undefined2 *)(puVar14 + 1);
                local_1e2 = *(undefined1 *)((longlong)puVar14 + 6);
                puVar13 = local_f8;
                if (local_78 != (undefined8 *)0x0) {
                  puVar13 = local_78;
                }
                local_1f0 = &local_1e8;
                local_1f8 = (longlong *)0x0;
                lVar9 = FUN_1407dbb40(uVar12,local_1d8,*puVar13,&local_178);
                if (lVar9 != 0) {
                  lVar11 = FUN_14148cad0();
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
                    FUN_141269380(lVar8,plVar2);
                    FUN_14120db40(lVar9,plVar2);
                    uVar10 = (**(code **)(*plVar2 + 0x148))(plVar2);
                    FUN_141269e20(lVar8,uVar10);
                    FUN_140c58a40(plVar2,lVar9);
                    *(undefined1 *)(lVar9 + 0x95b) = 1;
                    FUN_141242620(lVar9,lVar7);
                  }
                }
              }
              if (local_128 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_128 + 1;
                lVar7 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_128)(local_128);
                  LOCK();
                  piVar1 = (int *)((longlong)local_128 + 0xc);
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*local_128 + 8))(local_128,1);
                  }
                }
              }
            }
            if (local_78 != (undefined8 *)0x0) {
              FMemory::Free();
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e6e490 FUN_140e6e490 body=43 status=ok
// SIG undefined FUN_140e6e490(void)

undefined8 * FUN_140e6e490(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140e6e4c0 FUN_140e6e4c0 body=132 status=ok
// SIG undefined FUN_140e6e4c0(void)

undefined8 * FUN_140e6e4c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1445c6748;
  param_1[0x8b] = &PTR_LAB_1445c6e60;
  param_1[0xbd] = &PTR_LAB_1445c6e80;
  param_1[0xbe] = &PTR_LAB_1445c6ea8;
  param_1[0xbf] = &PTR_LAB_1445c6ef0;
  param_1[0xc6] = &PTR_FUN_143fce298;
  FUN_140e6b2d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x658);
  }
  return param_1;
}



// FUNCTION 140e6e550 FUN_140e6e550 body=182 status=ok
// SIG undefined FUN_140e6e550(void)

longlong FUN_140e6e550(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x16e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x16d8) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x10d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x10c0);
  if (*(longlong *)(param_1 + 0x1098) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1088) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa88) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,6000);
  }
  return param_1;
}



// FUNCTION 140e6e610 FUN_140e6e610 body=67 status=ok
// SIG undefined FUN_140e6e610(void)

longlong FUN_140e6e610(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4c8);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4f0);
  }
  return param_1;
}



// FUNCTION 140e6e660 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 Chaos::FPBDEvolution::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140ac7b70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x600);
  }
  return param_1;
}



// FUNCTION 140e6e6a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
USkeletalMeshComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e6b4d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xbb0);
  }
  return param_1;
}



// FUNCTION 140e6e6e0 FUN_140e6e6e0 body=94 status=ok
// SIG undefined FUN_140e6e6e0(void)

longlong FUN_140e6e6e0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x4c8) = &PTR_FUN_1441939c8;
  *(undefined ***)(param_1 + 0x4c0) = &PTR_FUN_144194f88;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x500);
  }
  return param_1;
}



// FUNCTION 140e6e740 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UTTLAIActionBaseBossLastComponent::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140ac7b70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5f8);
  }
  return param_1;
}



// FUNCTION 140e6e780 FUN_140e6e780 body=52 status=ok
// SIG undefined FUN_140e6e780(void)

undefined8 FUN_140e6e780(undefined8 param_1,ulonglong param_2)

{
  FUN_140e6b690();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xbe0);
  }
  return param_1;
}



// FUNCTION 140e6e7c0 FUN_140e6e7c0 body=52 status=ok
// SIG undefined FUN_140e6e7c0(void)

undefined8 FUN_140e6e7c0(undefined8 param_1,ulonglong param_2)

{
  FUN_140e6b8e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140e6e800 FUN_140e6e800 body=52 status=ok
// SIG undefined FUN_140e6e800(void)

undefined8 FUN_140e6e800(undefined8 param_1,ulonglong param_2)

{
  FUN_140e6b990();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140e6e840 FUN_140e6e840 body=52 status=ok
// SIG undefined FUN_140e6e840(void)

undefined8 FUN_140e6e840(undefined8 param_1,ulonglong param_2)

{
  FUN_140e6ba30();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140e6e880 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTTLPartsDevelopManager::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_140e6bbd0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 140e6e8f0 FUN_140e6e8f0 body=52 status=ok
// SIG undefined FUN_140e6e8f0(void)

undefined8 FUN_140e6e8f0(undefined8 param_1,ulonglong param_2)

{
  FUN_140e6bb00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140e6e930 FUN_140e6e930 body=52 status=ok
// SIG undefined FUN_140e6e930(void)

undefined8 FUN_140e6e930(undefined8 param_1,ulonglong param_2)

{
  FUN_140e6bbd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140e6e970 FUN_140e6e970 body=52 status=ok
// SIG undefined FUN_140e6e970(void)

undefined8 FUN_140e6e970(undefined8 param_1,ulonglong param_2)

{
  FUN_140e6bc80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140e6e9b0 FUN_140e6e9b0 body=212 status=ok
// SIG undefined FUN_140e6e9b0(void)

longlong FUN_140e6e9b0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 140e6ea90 FUN_140e6ea90 body=184 status=ok
// SIG undefined FUN_140e6ea90(void)

longlong FUN_140e6ea90(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x60);
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
  plVar4 = *(longlong **)(param_1 + 0x48);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140e6eb50 FUN_140e6eb50 body=79 status=ok
// SIG undefined FUN_140e6eb50(void)

longlong FUN_140e6eb50(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1b0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x198);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 140e6eba0 FUN_140e6eba0 body=79 status=ok
// SIG undefined FUN_140e6eba0(void)

longlong FUN_140e6eba0(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1b0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x198);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 140e6ebf0 FUN_140e6ebf0 body=182 status=ok
// SIG undefined FUN_140e6ebf0(void)

longlong FUN_140e6ebf0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x200) != 0) {
    if (*(longlong *)(param_1 + 0x1f0) == 0) {
      **(longlong **)(param_1 + 0x1f8) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x1f8) = *(longlong *)(param_1 + 0x1f0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 8) = *(undefined8 *)(param_1 + 0x1f8);
      *(undefined8 *)(param_1 + 0x1f0) = 0;
    }
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 140e6ecb0 FUN_140e6ecb0 body=121 status=ok
// SIG undefined FUN_140e6ecb0(void)

longlong FUN_140e6ecb0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_1441b3948;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140e6ed30 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPaperTerrainMaterial::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_140e6b180(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140e6ed70 FUN_140e6ed70 body=138 status=ok
// SIG undefined FUN_140e6ed70(void)

longlong FUN_140e6ed70(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x278) = &PTR_FUN_143fe0658;
  FUN_140e14d10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c8);
  }
  return param_1;
}



// FUNCTION 140e6ee00 FUN_140e6ee00 body=52 status=ok
// SIG undefined FUN_140e6ee00(void)

undefined8 FUN_140e6ee00(undefined8 param_1,ulonglong param_2)

{
  FUN_140a51cb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b0);
  }
  return param_1;
}



// FUNCTION 140e6ee40 FUN_140e6ee40 body=317 status=ok
// SIG undefined FUN_140e6ee40(void)

longlong FUN_140e6ee40(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x2d0);
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
  plVar4 = *(longlong **)(param_1 + 0x2c0);
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
  if (*(char *)(param_1 + 0x290) != '\0') {
    *(undefined1 *)(param_1 + 0x290) = 0;
    TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
    ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x260);
    if (*(longlong *)(param_1 + 0x250) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x228) != 0) {
      FMemory::Free();
    }
  }
  FUN_140e6b090(param_1 + 0x1b8);
  FUN_140b4e2b0(param_1 + 0x1a8);
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  FUN_140b4e2b0(param_1 + 0x188);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 140e6ef80 FUN_140e6ef80 body=52 status=ok
// SIG undefined FUN_140e6ef80(void)

undefined8 FUN_140e6ef80(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140e6efc0 FUN_140e6efc0 body=361 status=ok
// SIG undefined FUN_140e6efc0(void)

void FUN_140e6efc0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *local_18;
  undefined4 uStack_10;
  
  iVar3 = FUN_142235230();
  if ((((iVar3 != 3) && (*(char *)(param_1 + 0x1768) == '\0')) && (*(int *)(param_1 + 0x10e0) != 0))
     && ((*(longlong **)(param_1 + 0x10d8) != (longlong *)0x0 &&
         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10d8) + 0x18))(), cVar2 != '\0')))) {
    if ((*(int *)(param_1 + 0x10e0) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x10d8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(param_1 + 0x10d8) != 0) {
        uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x10d8),0,0);
        *(undefined8 *)(param_1 + 0x10d8) = uVar4;
      }
      *(undefined4 *)(param_1 + 0x10e0) = 0;
    }
    if (*(longlong *)(param_1 + 0x468) != 0) {
      if (((*(int *)(param_1 + 0x10c8) == 0) ||
          (*(longlong **)(param_1 + 0x10c0) == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10c0) + 8))(), cVar2 == '\0')) {
        local_18 = &LAB_140e6e39c;
        uStack_10 = 0;
        FUN_140e67b20(param_1 + 0x10c0,*(undefined8 *)(param_1 + 0x468),&local_18);
      }
      local_18 = (undefined1 *)0x0;
      uStack_10 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,param_1 + 0x10c0);
      (**(code **)(**(longlong **)(param_1 + 0x468) + 0xb68))
                (*(longlong **)(param_1 + 0x468),1,&local_18);
      if ((*(longlong *)(param_1 + 0x480) != 0) && (*(longlong *)(param_1 + 0x488) != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x488) + 0x20))
                  (*(longlong **)(param_1 + 0x488),*(undefined1 *)(param_1 + 0x10f2));
      }
      *(undefined1 *)(param_1 + 0x1768) = 1;
    }
  }
  return;
}



// FUNCTION 140e6f140 FUN_140e6f140 body=809 status=ok
// SIG undefined FUN_140e6f140(void)

longlong FUN_140e6f140(longlong param_1,wchar_t *param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar10;
  wchar_t *pwVar11;
  int *piVar12;
  wchar_t *pwVar13;
  longlong local_res18 [2];
  int local_68;
  int local_64;
  longlong local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_30;
  
  if (param_2 == (wchar_t *)0x0) {
    return 0;
  }
  pwVar5 = (wchar_t *)FUN_1414ca080();
  pwVar7 = param_2;
  while (pwVar7 != pwVar5) {
    pwVar7 = *(wchar_t **)(pwVar7 + 0x18);
    if (pwVar7 == (wchar_t *)0x0) {
      return 0;
    }
  }
  if (*(longlong *)(param_1 + 0x218) == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar6 = FUN_1423407b0(param_1), lVar6 == 0)) {
    return 0;
  }
  FActorSpawnParameters::FActorSpawnParameters(local_58);
  local_48 = *(undefined8 *)(param_1 + 0x218);
  local_30 = 1;
  pwVar5 = (wchar_t *)FUN_1414ca080();
  pwVar7 = param_2;
  do {
    pwVar13 = (wchar_t *)0x0;
    pwVar11 = param_2;
    if (pwVar7 == pwVar5) break;
    pwVar7 = *(wchar_t **)(pwVar7 + 0x18);
    pwVar11 = pwVar13;
  } while (pwVar7 != (wchar_t *)0x0);
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_1);
  }
  lVar6 = UWorld::SpawnActor(lVar6,pwVar11,0,0,local_58);
  if (lVar6 != 0) {
    iVar2 = *(int *)(lVar6 + 0xc);
    pwVar7 = pwVar13;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar9;
      pwVar7 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18);
    }
    if ((*(uint *)(pwVar7 + 4) >> 0x1d & 1) == 0) {
      if (*(longlong *)(lVar6 + 0x460) != 0) {
        FUN_142d1fad0(*(longlong *)(lVar6 + 0x460),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x2298));
      }
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x168);
      if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 400), lVar8 != 0)) {
        FUN_1422232e0(lVar6,lVar8,&DAT_146532188,0);
      }
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&UStandInCharacterComponent::OnAuxiliaryActorDestroyed",L"::");
      while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar13 = pwVar5;
      }
      FName::FName(local_res18,pwVar13 + 2,1);
      plVar1 = (longlong *)(lVar6 + 0x290);
      FWeakObjectPtr::operator=(&local_68,0);
      local_60 = 0;
      FWeakObjectPtr::operator=(&local_68,param_1);
      local_60 = local_res18[0];
      if ((local_res18[0] != 0) && (lVar8 = FWeakObjectPtr::Get(&local_68), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_60);
      }
      piVar10 = (int *)*plVar1;
      iVar2 = *(int *)(lVar6 + 0x298);
      piVar12 = piVar10;
      do {
        if (piVar12 == piVar10 + (longlong)iVar2 * 4) {
LAB_140e6f3cd:
          iVar2 = *(int *)(lVar6 + 0x298);
          *(int *)(lVar6 + 0x298) = iVar2 + 1;
          if (*(int *)(lVar6 + 0x29c) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          piVar10 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
          *piVar10 = local_68;
          piVar10[1] = local_64;
          *(longlong *)(piVar10 + 2) = local_60;
LAB_140e6f408:
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
          iVar2 = *(int *)(param_1 + 0x230);
          *(int *)(param_1 + 0x230) = iVar2 + 1;
          if (*(int *)(param_1 + 0x234) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x228,iVar2)
            ;
          }
          *(longlong *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar2 * 8) = lVar6;
          TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x178,lVar6);
          return lVar6;
        }
        if ((((*piVar12 == local_68) && (piVar12[1] == local_64)) ||
            ((cVar3 = FWeakObjectPtr::IsValid(piVar12), cVar3 == '\0' &&
             (cVar3 = FWeakObjectPtr::IsValid(&local_68), cVar3 == '\0')))) &&
           (*(longlong *)(piVar12 + 2) == local_60)) {
          if ((int)((longlong)piVar12 - (longlong)piVar10 >> 4) != -1) goto LAB_140e6f408;
          goto LAB_140e6f3cd;
        }
        piVar12 = piVar12 + 4;
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 140e6f470 FUN_140e6f470 body=518 status=ok
// SIG undefined FUN_140e6f470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140e6f470(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar7 = FUN_140e82830();
  uVar9 = 0;
  if (lVar7 != 0) {
    lVar8 = FUN_140e823b0(param_1);
    if (lVar8 != 0) {
      fVar12 = 1.0;
      iVar5 = FUN_140b5d0c0(param_1[0x22]);
      iVar5 = iVar5 + -1;
      if ((-1 < iVar5) && (iVar5 < *(int *)(lVar8 + 0x38))) {
        uVar9 = FUN_142caac20((longlong)iVar5 * 0x38 + *(longlong *)(lVar8 + 0x30),local_48,
                              param_1[0x22]);
        fVar12 = (float)FUN_142cc4350(uVar9,0);
      }
      uVar9 = FUN_142caac20(lVar8 + 0x40,local_48,param_1[0x22]);
      fVar11 = (float)FUN_142cc4350(uVar9,0);
      param_2 = (longlong)((float)param_2 * fVar11 * fVar12);
    }
    param_2 = *(longlong *)(lVar7 + 8) + param_2;
    if (param_2 < 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0x7fffffffffffffff;
      if (param_2 < 0x7fffffffffffffff) {
        lVar8 = param_2;
      }
    }
    *(longlong *)(lVar7 + 8) = lVar8;
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    uVar9 = 0;
    if (*(longlong *)(DAT_146b33f38 + 200) != 0) {
      iVar5 = FUN_140a2f370();
      if (iVar5 != *(int *)(lVar7 + 0x10)) {
        iVar6 = *(int *)(lVar7 + 0x14);
        iVar10 = (iVar6 - *(int *)(lVar7 + 0x10)) + iVar5;
        if ((iVar6 <= iVar10) && (iVar6 = 0x7fffffff, iVar10 < 0x7fffffff)) {
          iVar6 = iVar10;
        }
        *(int *)(lVar7 + 0x14) = iVar6;
        *(int *)(lVar7 + 0x10) = iVar5;
        uVar9 = 1;
        FUN_140e79a90(param_1,(int)param_1[0x19]);
      }
    }
    uVar1 = *(undefined8 *)(lVar7 + 8);
    bVar3 = false;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
    iVar5 = *(int *)((longlong)param_1 + 0x14);
    iVar6 = (int)param_1[1] + -1;
    lVar7 = (longlong)iVar6;
    if (-1 < iVar6) {
      lVar8 = lVar7 << 4;
      bVar3 = false;
      do {
        if ((*(int *)(lVar8 + 8 + *param_1) == 0) ||
           (plVar2 = *(longlong **)(lVar8 + *param_1), plVar2 == (longlong *)0x0)) {
LAB_140e6f624:
          bVar3 = true;
        }
        else {
          cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,uVar1,uVar9);
          if (cVar4 == '\0') goto LAB_140e6f624;
        }
        lVar8 = lVar8 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      iVar5 = *(int *)((longlong)param_1 + 0x14);
    }
    *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    }
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 140e6f680 FUN_140e6f680 body=193 status=ok
// SIG undefined FUN_140e6f680(void)

undefined8 FUN_140e6f680(undefined4 *param_1,int param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((param_4 == '\0') && (lVar4 = FUN_140e515c0(*param_1), lVar4 == 0)) {
    return 0;
  }
  piVar5 = *(int **)(param_1 + 0x12);
  iVar2 = param_1[0x14];
  lVar4 = (longlong)iVar2 * 8;
  piVar1 = piVar5 + (longlong)iVar2 * 2;
  while( true ) {
    if (piVar5 == piVar1) {
      param_1[0x14] = iVar2 + 1;
      if ((int)param_1[0x15] < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x12,iVar2);
      }
      lVar3 = *(longlong *)(param_1 + 0x12);
      *(int *)(lVar4 + lVar3) = param_2;
      *(undefined4 *)(lVar4 + 4 + lVar3) = param_3;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    if (*piVar5 == param_2) break;
    piVar5 = piVar5 + 2;
  }
  iVar2 = -1;
  if (piVar5[1] + 1 != -1) {
    iVar2 = piVar5[1] + 1;
  }
  piVar5[1] = iVar2;
  return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
}



// FUNCTION 140e6f750 FUN_140e6f750 body=384 status=ok
// SIG undefined FUN_140e6f750(void)

ulonglong FUN_140e6f750(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  byte bVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  
  uVar3 = 0;
  if ((param_4 == '\0') && (uVar3 = FUN_140e51670(*param_1), uVar3 == 0)) {
    return 0;
  }
  iVar1 = param_1[0xc];
  lVar6 = (longlong)iVar1;
  if (iVar1 != 0) {
    uVar3 = 0;
    uVar12 = uVar3;
    if ((**(int **)(param_1 + 10) == param_2) && ((*(int **)(param_1 + 10))[1] == param_3)) {
      bVar7 = 0;
      uVar10 = uVar3;
    }
    else {
      bVar7 = 1;
      uVar10 = uVar3;
    }
    do {
      iVar9 = (int)uVar10;
      uVar3 = uVar3 + 1;
      uVar10 = (ulonglong)(iVar9 + 1);
      if ((longlong)uVar3 < lVar6) {
        piVar4 = (int *)(*(longlong *)(param_1 + 10) + uVar3 * 8);
        do {
          if ((*piVar4 == param_2) && (piVar4[1] == param_3)) {
            bVar5 = 0;
          }
          else {
            bVar5 = 1;
          }
          if (bVar7 != bVar5) break;
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 2;
        } while ((longlong)uVar3 < lVar6);
      }
      iVar8 = (int)uVar10 - iVar9;
      if (bVar7 != 0) {
        iVar11 = (int)uVar12;
        if (iVar11 != iVar9) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 10) + (longlong)iVar11 * 8),
                     (void *)(*(longlong *)(param_1 + 10) + (longlong)iVar9 * 8),
                     (longlong)iVar8 << 3);
        }
        uVar12 = (ulonglong)(uint)(iVar11 + iVar8);
      }
      bVar7 = bVar7 ^ 1;
    } while ((longlong)uVar3 < lVar6);
    uVar2 = iVar1 - (int)uVar12;
    uVar3 = (ulonglong)uVar2;
    param_1[0xc] = (int)uVar12;
    if (uVar2 != 0) goto LAB_140e6f892;
  }
  if (param_4 == '\0') {
    return uVar3 & 0xffffffffffffff00;
  }
LAB_140e6f892:
  iVar1 = param_1[0x10];
  param_1[0x10] = iVar1 + 1;
  if ((int)param_1[0x11] < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe,iVar1);
  }
  lVar6 = *(longlong *)(param_1 + 0xe);
  *(int *)(lVar6 + (longlong)iVar1 * 8) = param_2;
  *(int *)(lVar6 + 4 + (longlong)iVar1 * 8) = param_3;
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
}



// FUNCTION 140e6f8d0 FUN_140e6f8d0 body=43 status=ok
// SIG undefined FUN_140e6f8d0(void)

void FUN_140e6f8d0(longlong param_1,int param_2)

{
  int iVar1;
  
  param_2 = *(int *)(param_1 + 0x31c) + param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x31c) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x318);
  if (param_2 < *(int *)(param_1 + 0x318)) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x31c) = iVar1;
  return;
}



// FUNCTION 140e6f900 FUN_140e6f900 body=235 status=ok
// SIG undefined FUN_140e6f900(void)

void FUN_140e6f900(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 local_18;
  undefined4 local_14;
  longlong local_10;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    FWeakObjectPtr::operator=(&local_18);
    plVar1 = (longlong *)(param_1 + 0x2b0);
    lVar5 = *plVar1;
    iVar7 = *(int *)(param_1 + 0x2b8);
    lVar6 = (longlong)iVar7 * 0x10 + lVar5;
    local_10 = param_3;
    if (lVar5 != lVar6) {
      do {
        lVar2 = FWeakObjectPtr::Get(lVar5);
        lVar3 = FWeakObjectPtr::Get(&local_18);
        if ((lVar2 == lVar3) && (*(longlong *)(lVar5 + 8) == local_10)) {
          return;
        }
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != lVar6);
      iVar7 = *(int *)(param_1 + 0x2b8);
    }
    *(int *)(param_1 + 0x2b8) = iVar7 + 1;
    if (*(int *)(param_1 + 700) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar7);
    }
    puVar4 = (undefined4 *)((longlong)iVar7 * 0x10 + *plVar1);
    *puVar4 = local_18;
    puVar4[1] = local_14;
    *(longlong *)(puVar4 + 2) = local_10;
    FUN_140e8c970(param_1);
  }
  return;
}



// FUNCTION 140e6fa10 FUN_140e6fa10 body=267 status=ok
// SIG undefined FUN_140e6fa10(void)

void FUN_140e6fa10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x128) == '\x03')) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    lVar4 = *plVar1;
    lVar5 = (longlong)*(int *)(param_1 + 0xb8) * 0x40;
    lVar2 = lVar5 + lVar4;
    for (; lVar4 != lVar2; lVar4 = lVar4 + 0x40) {
      if (*(longlong *)(lVar4 + 0x20) == param_2) {
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 0xb8) + 1;
    *(int *)(param_1 + 0xb8) = iVar3;
    if (*(int *)(param_1 + 0xbc) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                ();
    }
    lVar2 = *plVar1;
    *(undefined8 *)(lVar5 + 0x10 + lVar2) = 0;
    *(undefined8 *)(lVar5 + 0x28 + lVar2) = 0;
    *(undefined8 *)(lVar5 + 0x30 + lVar2) = 0;
    *(undefined8 *)(lVar5 + 0x38 + lVar2) = 0;
    *(undefined8 *)(lVar5 + lVar2) = 0xffffffffffffffff;
    *(undefined4 *)(lVar5 + 8 + lVar2) = 0xffffffff;
    *(undefined2 *)(lVar5 + 0x18 + lVar2) = 1;
    *(longlong *)(lVar5 + 0x20 + lVar2) = param_2;
    *(undefined1 *)((longlong)*(int *)(param_1 + 0xb8) * 0x40 + -0x28 + *plVar1) =
         *(undefined1 *)(param_2 + 0x39);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    if (*(int *)(param_1 + 0x54) == -1) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 140e6fb20 FUN_140e6fb20 body=487 status=ok
// SIG undefined FUN_140e6fb20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e6fb20(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130 [24];
  longlong local_118 [7];
  byte local_e0;
  undefined1 local_d8 [136];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  if ((param_2 != 0) && (local_20 = DAT_1468387a8 ^ (ulonglong)auStack_158, param_1[2] != 0)) {
    plVar5 = (longlong *)*param_1;
    iVar3 = (int)param_1[1];
    plVar8 = plVar5 + (longlong)iVar3 * 0x1f;
    for (; plVar5 != plVar8; plVar5 = plVar5 + 0x1f) {
      if (*plVar5 == param_2) {
        if (plVar5 != (longlong *)0x0) {
          return;
        }
        break;
      }
    }
    local_e0 = local_e0 & 0xf1 | 1;
    local_118[5] = 0;
    local_118[6] = 0;
    local_118[1] = 0;
    local_118[2] = 0;
    local_118[3] = 0;
    local_118[4] = 0;
    local_118[0] = param_2;
    _guard_xfg_dispatch_icall_nop(local_d8,0,0x98);
    local_d8[0] = 0;
    *(int *)(param_1 + 1) = iVar3 + 1;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0xff;
    local_30 = 0;
    local_28 = 0;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
      TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
    }
    lVar9 = (longlong)iVar3 * 0xf8;
    FUN_140e6a780(*param_1 + lVar9,local_118);
    if (local_50 != 0) {
      FMemory::Free();
    }
    pbVar1 = (byte *)(*param_1 + 0x38 + lVar9);
    *pbVar1 = *pbVar1 ^ (*(byte *)(param_2 + 0x38) ^ *(byte *)(*param_1 + 0x38 + lVar9)) & 1;
    if ((*(longlong *)(param_2 + 0x48) != 0) &&
       (plVar5 = (longlong *)param_1[2], (char)plVar5[0x25] == '\x03')) {
      uVar6 = FUN_142e1a5a0();
      local_138 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
      lVar4 = *param_1;
      puVar7 = (undefined8 *)
               FUN_142d61d40(local_130,&local_138,param_1[2],*(undefined8 *)(param_2 + 0x48));
      uVar6 = puVar7[1];
      puVar2 = (undefined8 *)(lVar9 + 0xe0 + lVar4);
      *puVar2 = *puVar7;
      puVar2[1] = uVar6;
      *(undefined8 *)(lVar9 + 0xf0 + lVar4) = puVar7[2];
    }
  }
  return;
}



// FUNCTION 140e6fd10 FUN_140e6fd10 body=218 status=ok
// SIG undefined FUN_140e6fd10(void)

ulonglong FUN_140e6fd10(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_4 == '\0') {
    lVar3 = FUN_140e51670(*param_1);
    piVar4 = (int *)0x0;
    if (lVar3 == 0) goto LAB_140e6fdd8;
  }
  piVar5 = *(int **)(param_1 + 10);
  iVar1 = param_1[0xc];
  lVar3 = (longlong)iVar1 * 8;
  piVar4 = piVar5 + (longlong)iVar1 * 2;
  for (; piVar5 != piVar4; piVar5 = piVar5 + 2) {
    if ((*piVar5 == param_2) && (piVar5[1] == param_3)) goto LAB_140e6fdd8;
  }
  piVar6 = *(int **)(param_1 + 0xe);
  piVar4 = (int *)(longlong)(int)param_1[0x10];
  piVar5 = piVar6 + (longlong)piVar4 * 2;
  while( true ) {
    if (piVar6 == piVar5) {
      param_1[0xc] = iVar1 + 1;
      if ((int)param_1[0xd] < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 10,iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 10);
      *(int *)(lVar3 + lVar2) = param_2;
      *(int *)(lVar3 + 4 + lVar2) = param_3;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    if ((*piVar6 == param_2) && (piVar6[1] == param_3)) break;
    piVar6 = piVar6 + 2;
  }
LAB_140e6fdd8:
  return (ulonglong)piVar4 & 0xffffffffffffff00;
}



// FUNCTION 140e6fdf0 FUN_140e6fdf0 body=288 status=ok
// SIG undefined FUN_140e6fdf0(void)

void FUN_140e6fdf0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res10 [2];
  longlong local_18;
  int local_10;
  
  iVar3 = FUN_140e80cd0();
  if (iVar3 == 0) {
    FUN_1414bbcb0();
    if (param_1[0xbf] != 0) {
      FUN_1414bb150();
      return;
    }
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar4,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar5 = FWeakObjectPtr::Get();
      if (lVar5 != 0) {
        lVar6 = FUN_14145f370();
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
          cVar2 = FUN_140cfdb70();
          if (cVar2 != '\0') {
            FUN_140cf9c50();
          }
        }
      }
      local_10 = local_10 + 1;
    }
    if (((char)param_1[0x25] == '\x03') && (lVar5 = param_1[0xbf], lVar5 != 0)) {
      *(int *)(lVar5 + 0xba4) = iVar3;
      local_res10[0] = iVar3;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar5 + 0xb90,local_res10);
    }
  }
  return;
}



// FUNCTION 140e6ff10 FUN_140e6ff10 body=654 status=ok
// SIG undefined FUN_140e6ff10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e6ff10(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar2 = FUN_142235230();
  if ((((iVar2 != 3) && (*(char *)((longlong)param_1 + 0x175c) != '\0')) &&
      (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) && (param_1[0x8d] != 0)) {
    FUN_140d12500(param_1[0x8d],*(undefined1 *)((longlong)param_1 + 0x10f2));
    if (((char)param_1[0x217] == '\0') || (*(char *)((longlong)param_1 + 0x10f2) == '\0')) {
      FUN_140e77bf0(param_1);
    }
    else if ((char)param_1[0x2ed] == '\0') {
      plVar7 = param_1 + 0x21b;
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        plVar4[2] = (longlong)FUN_140e6efc0;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar5;
        *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
      }
      if (local_a8 != plVar7) {
        if (plVar4 == (longlong *)0x0) {
          if (((int)param_1[0x21c] != 0) &&
             (plVar1 = (longlong *)*plVar7, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar7 != 0) {
              lVar5 = FMemory::Realloc(*plVar7,0,0);
              *plVar7 = lVar5;
            }
            *(undefined4 *)(param_1 + 0x21c) = 0;
          }
        }
        else {
          (**(code **)(*plVar4 + 0x30))(plVar4,plVar7);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar5 = FMemory::Realloc(plVar4,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      local_98 = 0;
      local_90 = 0;
      if (((plVar7 != &local_98) && ((int)param_1[0x21c] != 0)) &&
         (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_80 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      FUN_142880af0(uVar6,&local_98);
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
    }
  }
  return;
}



// FUNCTION 140e701a0 FUN_140e701a0 body=939 status=ok
// SIG undefined FUN_140e701a0(void)

void FUN_140e701a0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  longlong *local_28;
  undefined8 local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146871680) && (_Init_thread_header(&DAT_146871680), DAT_146871680 == -1))
  {
    FName::FName(&DAT_146871678,L"PhotoMode",1);
    _Init_thread_footer(&DAT_146871680);
  }
  plVar8 = *(longlong **)(param_1 + 0x468);
  if (plVar8 != (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    (**(code **)(*plVar8 + 0x1060))(plVar8,&local_28);
    plVar8 = local_28 + (int)local_20;
    for (plVar7 = local_28; plVar7 != plVar8; plVar7 = plVar7 + 1) {
      plVar5 = (longlong *)*plVar7;
      if (plVar5 != (longlong *)0x0) {
        lVar2 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
            lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_142cce120(plVar5,*(undefined1 *)(param_1 + 0x1730),DAT_146871678);
        }
        else {
          (**(code **)(*plVar5 + 0x310))(plVar5,*(undefined1 *)(param_1 + 0x1730));
        }
      }
    }
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x848);
    if (plVar8 != (longlong *)0x0) {
      lVar2 = FUN_1413f82e0();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar3 = FUN_1414add30();
        lVar2 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar3);
        if (lVar2 != 0) {
          lVar4 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
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
            uVar3 = AGFireballProjectile::GetPrivateStaticClass();
            lVar2 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar3);
            if (lVar2 != 0) {
              local_38 = (longlong *)0x0;
              local_2c = 0;
              plVar8 = plVar9;
              iVar6 = 0;
              if (&local_38 != (longlong **)(lVar2 + 0x550)) {
                local_30 = *(int *)(lVar2 + 0x558);
                lVar4 = (longlong)local_30;
                plVar7 = *(longlong **)(lVar2 + 0x550);
                iVar6 = local_30;
                if (local_30 != 0) {
                  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                            (&local_38,local_30,0);
                  plVar8 = local_38;
                  _guard_xfg_dispatch_icall_nop(local_38,plVar7,lVar4 << 3);
                  iVar6 = local_30;
                }
              }
              for (plVar7 = plVar8; plVar7 != plVar8 + iVar6; plVar7 = plVar7 + 1) {
                lVar2 = *plVar7;
                plVar5 = plVar9;
                if (lVar2 != 0) {
                  lVar4 = UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass();
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
                    plVar5 = *(longlong **)(lVar2 + 0x270);
                  }
                }
                if (plVar5 == (longlong *)0x0) {
                  plVar5 = plVar9;
                  if (lVar2 != 0) {
                    lVar4 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
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
                      plVar5 = *(longlong **)(lVar2 + 0x3b8);
                    }
                  }
                  if (plVar5 != (longlong *)0x0) goto LAB_140e704b0;
                  plVar5 = plVar9;
                  if (lVar2 != 0) {
                    lVar4 = USkeletalBodySetup::GetPrivateStaticClass();
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
                      plVar5 = *(longlong **)(lVar2 + 0x270);
                    }
                  }
                  if (plVar5 != (longlong *)0x0) goto LAB_140e704b0;
                }
                else {
LAB_140e704b0:
                  (**(code **)(*plVar5 + 0x310))(plVar5,*(undefined1 *)(param_1 + 0x1730));
                }
              }
              if (plVar8 != (longlong *)0x0) {
                FMemory::Free(plVar8);
              }
            }
          }
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140e70550 FUN_140e70550 body=159 status=ok
// SIG undefined FUN_140e70550(void)

void FUN_140e70550(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *local_18;
  undefined8 local_10;
  
  lVar1 = UCableComponent::GetAttachedActor(param_1 + -0x630);
  if (lVar1 != 0) {
    FUN_1407c6a60(lVar1);
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_1407c7b00(lVar1,&local_18,0,0);
    if ((local_18 != local_18 + (int)local_10) && (lVar1 = *local_18, lVar1 != 0)) {
      uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      }
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140e705f0 FUN_140e705f0 body=389 status=ok
// SIG undefined FUN_140e705f0(void)

void FUN_140e705f0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x80) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x88);
    iVar10 = 0;
    plVar1 = plVar9 + *(int *)(param_1 + 0x90);
    if (plVar9 != plVar1) {
      do {
        if (*plVar9 == **(longlong **)(param_1 + 0x78)) {
          bVar5 = 0;
          goto LAB_140e70665;
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
    bVar5 = 1;
LAB_140e70665:
    lVar4 = 0;
    iVar6 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar7 = iVar6 + 1;
      if (lVar4 < lVar8) {
        plVar1 = *(longlong **)(param_1 + 0x88);
        plVar9 = (longlong *)(lVar4 * 0x10 + *(longlong *)(param_1 + 0x78));
        do {
          if (plVar1 != plVar1 + *(int *)(param_1 + 0x90)) {
            plVar3 = plVar1;
            do {
              if (*plVar3 == *plVar9) {
                bVar2 = 0;
                goto LAB_140e706c4;
              }
              plVar3 = plVar3 + 1;
            } while (plVar3 != plVar1 + *(int *)(param_1 + 0x90));
          }
          bVar2 = 1;
LAB_140e706c4:
          if (bVar5 != bVar2) break;
          iVar7 = iVar7 + 1;
          lVar4 = lVar4 + 1;
          plVar9 = plVar9 + 2;
        } while (lVar4 < lVar8);
      }
      if (bVar5 != 0) {
        if (iVar10 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x78)),
                     (void *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x78)),
                     (longlong)(iVar7 - iVar6) << 4);
        }
        iVar10 = iVar10 + (iVar7 - iVar6);
      }
      bVar5 = bVar5 ^ 1;
      iVar6 = iVar7;
    } while (lVar4 < lVar8);
    *(int *)(param_1 + 0x80) = iVar10;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x94)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x88,0);
    return;
  }
  return;
}



// FUNCTION 140e70780 FUN_140e70780 body=88 status=ok
// SIG undefined FUN_140e70780(void)

void FUN_140e70780(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_140e7ab80(param_1 + 0xd0,0);
  FUN_140e6bd40(param_1 + 0xd0,param_2);
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  return;
}



// FUNCTION 140e707e0 FUN_140e707e0 body=192 status=ok
// SIG undefined FUN_140e707e0(void)

void FUN_140e707e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  plVar1 = (longlong *)(param_1 + 0x78);
  iVar2 = *(int *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != iVar2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
  }
  puVar7 = *(undefined4 **)(param_2 + 0x90);
  puVar8 = puVar7 + (longlong)*(int *)(param_2 + 0x98) * 0xe;
  for (; puVar7 != puVar8; puVar7 = puVar7 + 0xe) {
    if ((*(char *)(puVar7 + 0xd) == '\0') && (lVar5 = FUN_140d3b7b0(puVar7), lVar5 != 0)) {
      iVar2 = *(int *)(param_1 + 0x80);
      *(int *)(param_1 + 0x80) = iVar2 + 1;
      if (*(int *)(param_1 + 0x84) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      uVar3 = puVar7[1];
      uVar4 = *puVar7;
      plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *plVar1);
      *plVar6 = lVar5;
      *(undefined4 *)(plVar6 + 1) = uVar4;
      *(undefined4 *)((longlong)plVar6 + 0xc) = uVar3;
    }
  }
  return;
}



// FUNCTION 140e708a0 FUN_140e708a0 body=2418 status=ok
// SIG undefined FUN_140e708a0(void)

void FUN_140e708a0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  void *pvVar12;
  undefined8 *puVar13;
  void *local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  void *local_250;
  int local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined8 local_23c;
  undefined8 local_230;
  longlong local_228 [2];
  undefined1 local_218 [16];
  undefined1 local_208 [8];
  longlong local_200;
  char local_1f0;
  undefined8 *local_1e8;
  longlong *local_1e0;
  longlong local_1d8 [5];
  longlong local_1b0;
  longlong local_188;
  longlong local_160;
  longlong local_138;
  longlong local_110;
  longlong local_e8;
  longlong local_c0;
  longlong local_98;
  longlong local_70;
  
  plVar1 = (longlong *)(param_1 + 0x188);
  iVar11 = *(int *)(param_1 + 400);
  if (iVar11 != 0) {
    plVar6 = (longlong *)(*plVar1 + 0x18);
    do {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 6;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x194) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar1,0);
  }
  plVar6 = (longlong *)(param_1 + 0x1a8);
  iVar11 = *(int *)(param_1 + 0x1b0);
  local_1e0 = plVar6;
  if (iVar11 != 0) {
    plVar7 = (longlong *)(*plVar6 + 0x18);
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 6;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(int *)(param_1 + 0x1b4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar6,0);
  }
  plVar7 = (longlong *)UNavModifierComponent::GetPrivateStaticClass();
  lVar9 = plVar7[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar9 = plVar7[0x1f];
    if (lVar9 == 0) goto LAB_140e70c6e;
  }
  FUN_140e67840(plVar1,lVar9 + 0x118);
  FUN_140e67840(plVar6,lVar9 + 0xf8);
  puVar10 = *(undefined8 **)(lVar9 + 0x128);
  local_1e8 = puVar10 + (longlong)*(int *)(lVar9 + 0x130) * 2;
  if (puVar10 != local_1e8) {
    do {
      pvVar12 = (void *)0x0;
      iVar11 = *(int *)(puVar10 + 1);
      local_278 = (void *)0x0;
      pvVar2 = (void *)*puVar10;
      if (iVar11 == 0) {
        local_248 = iVar11;
        local_244 = 0;
      }
      else {
        local_270._0_4_ = iVar11;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_278,iVar11,0);
        pvVar12 = local_278;
        _guard_xfg_dispatch_icall_nop(local_278,pvVar2,(longlong)iVar11 * 2);
        local_248 = (int)local_270;
        local_244 = local_270._4_4_;
      }
      local_268 = 0;
      local_260 = 0;
      local_258 = 0;
      local_278 = (void *)0x0;
      local_270 = 0;
      local_250 = pvVar12;
      FUN_1417978e0(&local_268,&local_250);
      local_230 = local_268;
      local_240 = 0xffffffff;
      local_23c = 0;
      FString::FString(local_228,&local_260);
      if (local_260 != 0) {
        FMemory::Free();
      }
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_218,&local_240);
      local_1f0 = '\0';
      if (local_228[0] != 0) {
        FMemory::Free();
      }
      iVar11 = *(int *)(param_1 + 400);
      *(int *)(param_1 + 400) = iVar11 + 1;
      if (*(int *)(param_1 + 0x194) < iVar11 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar11);
      }
      lVar8 = (longlong)iVar11 * 0x30 + *plVar1;
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar8,local_218);
      *(char *)(lVar8 + 0x28) = local_1f0;
      if (local_200 != 0) {
        FMemory::Free();
      }
      puVar10 = puVar10 + 2;
    } while (puVar10 != local_1e8);
  }
  puVar10 = *(undefined8 **)(lVar9 + 0x108);
  puVar13 = puVar10 + (longlong)*(int *)(lVar9 + 0x110) * 2;
  for (; puVar10 != puVar13; puVar10 = puVar10 + 2) {
    pvVar12 = (void *)0x0;
    iVar11 = *(int *)(puVar10 + 1);
    local_278 = (void *)0x0;
    pvVar2 = (void *)*puVar10;
    local_270._4_4_ = (undefined4)((ulonglong)local_270 >> 0x20);
    if (iVar11 == 0) {
      local_248 = iVar11;
      local_244 = 0;
    }
    else {
      local_270._0_4_ = iVar11;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_278,iVar11,0);
      pvVar12 = local_278;
      _guard_xfg_dispatch_icall_nop(local_278,pvVar2,(longlong)iVar11 * 2);
      local_248 = (int)local_270;
      local_244 = local_270._4_4_;
    }
    local_268 = 0;
    local_260 = 0;
    local_258 = 0;
    local_278 = (void *)0x0;
    local_270 = 0;
    local_250 = pvVar12;
    FUN_1417978e0(&local_268,&local_250);
    local_230 = local_268;
    local_240 = 0xffffffff;
    local_23c = 0;
    FString::FString(local_228,&local_260);
    if (local_260 != 0) {
      FMemory::Free();
    }
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_218,&local_240);
    local_1f0 = '\0';
    if (local_228[0] != 0) {
      FMemory::Free();
    }
    iVar11 = *(int *)(param_1 + 0x1b0);
    *(int *)(param_1 + 0x1b0) = iVar11 + 1;
    if (*(int *)(param_1 + 0x1b4) < iVar11 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar6,iVar11);
    }
    lVar9 = (longlong)iVar11 * 0x30 + *plVar6;
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar9,local_218);
    *(char *)(lVar9 + 0x28) = local_1f0;
    if (local_200 != 0) {
      FMemory::Free();
    }
  }
LAB_140e70c6e:
  puVar13 = (undefined8 *)*param_2;
  puVar10 = puVar13 + (longlong)(int)param_2[1] * 3;
  for (; puVar13 != puVar10; puVar13 = puVar13 + 3) {
    pvVar12 = (void *)0x0;
    iVar11 = *(int *)(puVar13 + 1);
    local_278 = (void *)0x0;
    pvVar2 = (void *)*puVar13;
    local_270._4_4_ = (undefined4)((ulonglong)local_270 >> 0x20);
    if (iVar11 == 0) {
      local_248 = iVar11;
      local_244 = 0;
    }
    else {
      local_270._0_4_ = iVar11;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_278,iVar11,0);
      pvVar12 = local_278;
      _guard_xfg_dispatch_icall_nop(local_278,pvVar2,(longlong)iVar11 * 2);
      local_248 = (int)local_270;
      local_244 = local_270._4_4_;
    }
    local_268 = 0;
    local_260 = 0;
    local_258 = 0;
    local_278 = (void *)0x0;
    local_270 = 0;
    local_250 = pvVar12;
    FUN_1417978e0(&local_268,&local_250);
    local_230 = local_268;
    local_240 = 0xffffffff;
    local_23c = 0;
    FString::FString(local_228,&local_260);
    if (local_260 != 0) {
      FMemory::Free();
    }
    cVar4 = *(char *)(puVar13 + 2);
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_218,&local_240);
    local_1f0 = cVar4;
    if (local_228[0] != 0) {
      FMemory::Free();
    }
    lVar9 = *plVar1;
    iVar11 = *(int *)(param_1 + 400);
    for (lVar8 = lVar9; lVar8 != (longlong)iVar11 * 0x30 + lVar9; lVar8 = lVar8 + 0x30) {
      cVar4 = FSoftObjectPath::operator==(lVar8 + 0x10,local_208);
      if ((cVar4 != '\0') && (*(char *)(lVar8 + 0x28) == local_1f0)) {
        if ((int)((lVar8 - lVar9) / 0x30) != -1) goto LAB_140e70e28;
        break;
      }
    }
    iVar11 = *(int *)(param_1 + 400);
    *(int *)(param_1 + 400) = iVar11 + 1;
    if (*(int *)(param_1 + 0x194) < iVar11 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar11);
    }
    lVar9 = (longlong)iVar11 * 0x30 + *plVar1;
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar9,local_218);
    *(char *)(lVar9 + 0x28) = local_1f0;
LAB_140e70e28:
    if (local_200 != 0) {
      FMemory::Free();
    }
    plVar6 = local_1e0;
  }
  puVar10 = (undefined8 *)*param_3;
  puVar13 = puVar10 + (longlong)(int)param_3[1] * 2;
  if (puVar10 != puVar13) {
    do {
      iVar11 = *(int *)(puVar10 + 1);
      pvVar2 = (void *)*puVar10;
      local_278 = (void *)0x0;
      if (iVar11 == 0) {
        pvVar12 = (void *)0x0;
        local_248 = iVar11;
        local_244 = 0;
      }
      else {
        local_270._0_4_ = iVar11;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_278,iVar11,0);
        pvVar12 = local_278;
        _guard_xfg_dispatch_icall_nop(local_278,pvVar2,(longlong)iVar11 * 2);
        local_248 = (int)local_270;
        local_244 = local_270._4_4_;
      }
      local_268 = 0;
      local_260 = 0;
      local_258 = 0;
      local_278 = (void *)0x0;
      local_270 = 0;
      local_250 = pvVar12;
      FUN_1417978e0(&local_268,&local_250);
      local_230 = local_268;
      local_240 = 0xffffffff;
      local_23c = 0;
      FString::FString(local_228,&local_260);
      if (local_260 != 0) {
        FMemory::Free();
      }
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_218,&local_240);
      local_1f0 = '\0';
      if (local_228[0] != 0) {
        FMemory::Free();
      }
      lVar9 = *plVar6;
      lVar3 = plVar6[1];
      for (lVar8 = lVar9; lVar8 != (longlong)(int)lVar3 * 0x30 + lVar9; lVar8 = lVar8 + 0x30) {
        cVar4 = FSoftObjectPath::operator==(lVar8 + 0x10,local_208);
        if ((cVar4 != '\0') && (*(char *)(lVar8 + 0x28) == local_1f0)) {
          if ((int)((lVar8 - lVar9) / 0x30) != -1) goto LAB_140e70fe1;
          break;
        }
      }
      iVar11 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar11 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar11 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar6,iVar11);
      }
      lVar9 = (longlong)iVar11 * 0x30 + *plVar6;
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar9,local_218);
      *(char *)(lVar9 + 0x28) = local_1f0;
LAB_140e70fe1:
      if (local_200 != 0) {
        FMemory::Free();
      }
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar13);
  }
  plVar1 = (longlong *)(param_1 + 0x1b8);
  plVar6 = (longlong *)*plVar1;
  for (iVar11 = *(int *)(param_1 + 0x1c0); iVar11 != 0; iVar11 = iVar11 + -1) {
    if (plVar6[0x2d] != 0) {
      FMemory::Free();
    }
    if (plVar6[0x28] != 0) {
      FMemory::Free();
    }
    if (plVar6[0x23] != 0) {
      FMemory::Free();
    }
    if (plVar6[0x1e] != 0) {
      FMemory::Free();
    }
    if (plVar6[0x19] != 0) {
      FMemory::Free();
    }
    if (plVar6[0x14] != 0) {
      FMemory::Free();
    }
    if (plVar6[0xf] != 0) {
      FMemory::Free();
    }
    if (plVar6[10] != 0) {
      FMemory::Free();
    }
    if (plVar6[5] != 0) {
      FMemory::Free();
    }
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 0x31;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(int *)(param_1 + 0x1c4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<392,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar1,0);
  }
  lVar9 = *param_4;
  lVar8 = (longlong)(int)param_4[1] * 0xb0 + lVar9;
  for (; lVar9 != lVar8; lVar9 = lVar9 + 0xb0) {
    uVar5 = FUN_1410b5e90(lVar9,local_1d8);
    iVar11 = *(int *)(param_1 + 0x1c0);
    *(int *)(param_1 + 0x1c0) = iVar11 + 1;
    if (*(int *)(param_1 + 0x1c4) < iVar11 + 1) {
      TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow(plVar1,iVar11);
    }
    FUN_140e6a350((longlong)iVar11 * 0x188 + *plVar1,uVar5);
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if (local_c0 != 0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    if (local_160 != 0) {
      FMemory::Free();
    }
    if (local_188 != 0) {
      FMemory::Free();
    }
    if (local_1b0 != 0) {
      FMemory::Free();
    }
    if (local_1d8[0] != 0) {
      FMemory::Free();
    }
  }
  *(undefined4 *)(param_1 + 0x1c8) = *param_5;
  return;
}



// FUNCTION 140e71220 FUN_140e71220 body=108 status=ok
// SIG undefined FUN_140e71220(void)

void FUN_140e71220(longlong param_1)

{
  longlong lVar1;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  if ((*(longlong *)(param_1 + 0x468) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x528), lVar1 != 0)) {
    FUN_1426e1d20(lVar1,local_18);
    local_10 = *(undefined4 *)(param_1 + 0x174c);
    (**(code **)(**(longlong **)(param_1 + 0x468) + 0x838))
              (*(longlong **)(param_1 + 0x468),local_18);
    if (*(longlong *)(param_1 + 0x460) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x460) + 0x24cc) = *(undefined4 *)(param_1 + 0x174c);
    }
  }
  return;
}



// FUNCTION 140e71290 FUN_140e71290 body=74 status=ok
// SIG undefined FUN_140e71290(void)

undefined8 FUN_140e71290(longlong param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x2b0)) {
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    if (*(longlong *)(param_1 + 0x2a8) == 0) {
      lVar2 = param_1 + 0x48;
    }
    cVar1 = FUN_1407c3030(lVar2 + (ulonglong)param_2 * 0x98);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e712f0 GetPlaybackContext body=12 status=ok
// SIG undefined GetPlaybackContext(void)

void UUMGSequencePlayer::GetPlaybackContext(longlong param_1)

{
  FUN_1407c3030(param_1 + 1000);
  return;
}



// FUNCTION 140e71310 FUN_140e71310 body=55 status=ok
// SIG undefined FUN_140e71310(void)

undefined1 FUN_140e71310(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1407c3030(param_1 + 0x2b8);
  if (cVar1 == '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x350);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140e71350 GetRoutineManager body=12 status=ok
// SIG undefined GetRoutineManager(void)

void UEnemyUnit::GetRoutineManager(longlong param_1)

{
  FUN_1407c3030(param_1 + 0x350);
  return;
}



// FUNCTION 140e71360 OnTextChanged body=12 status=ok
// SIG undefined OnTextChanged(void)

void SEditableText::OnTextChanged(longlong param_1)

{
  FUN_1407c3030(param_1 + 0x480);
  return;
}



// FUNCTION 140e71370 FUN_140e71370 body=71 status=ok
// SIG undefined FUN_140e71370(void)

undefined8 FUN_140e71370(longlong *param_1,byte param_2)

{
  longlong lVar1;
  
  if ((param_1[2] != 0) && ((int)(uint)param_2 < (int)param_1[1])) {
    lVar1 = (ulonglong)param_2 * 0xf8;
    *(undefined8 *)(*param_1 + 8 + lVar1) = *(undefined8 *)(*param_1 + 0x10 + lVar1);
    *(undefined8 *)(lVar1 + 0x10 + *param_1) = 0;
    *(undefined8 *)(lVar1 + 0x18 + *param_1) = 0;
    return *(undefined8 *)(lVar1 + 8 + *param_1);
  }
  return 0;
}



// FUNCTION 140e713c0 FUN_140e713c0 body=126 status=ok
// SIG undefined FUN_140e713c0(void)

void FUN_140e713c0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_1[0x23] != 0) && (lVar2 = param_1[0x2d], lVar2 != 0)) {
    if (param_3 == 0) {
      param_3 = FUN_14222b250(param_1[0x23]);
      lVar2 = param_1[0x2d];
    }
    FUN_142382f60(lVar2,param_3,&DAT_146532180,param_2);
    uVar1 = URemnantQuestSubQuest::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_1430e2780(lVar2);
    }
  }
  return;
}



// FUNCTION 140e71440 FUN_140e71440 body=159 status=ok
// SIG undefined FUN_140e71440(void)

void FUN_140e71440(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = UWorld::GetGameState<APVPGameState>(uVar3);
    if (lVar2 != 0) {
      FUN_140483870(lVar2 + 0x5e0,param_1);
    }
  }
  FUN_140483870(&DAT_146535190,param_1);
  if (((int)param_1[0x219] != 0) && (plVar1 = (longlong *)param_1[0x218], plVar1 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (param_1[0x218] != 0) {
      lVar2 = FMemory::Realloc(param_1[0x218],0,0);
      param_1[0x218] = lVar2;
    }
    *(undefined4 *)(param_1 + 0x219) = 0;
  }
  FUN_1422235f0(param_1);
  return;
}



// FUNCTION 140e714e0 FUN_140e714e0 body=115 status=ok
// SIG undefined FUN_140e714e0(void)

void FUN_140e714e0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *local_18;
  undefined8 local_10;
  
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_142f6c9f0(uVar1);
    if (lVar2 != 0) {
      local_10 = 0;
      local_18 = param_1;
      uVar1 = FUN_142f768a0();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
      FUN_142f6e000(lVar2,&local_18);
    }
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 140e71560 FUN_140e71560 body=468 status=ok
// SIG undefined FUN_140e71560(void)

undefined8 FUN_140e71560(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar4 = (**(code **)(*param_1 + 0x148))();
  lVar5 = FUN_140aab5e0(uVar4);
  if (lVar5 == 0) {
    return 0;
  }
  if (param_1[0x8c] == 0) {
    return 0;
  }
  lVar9 = 0;
  lVar7 = param_1[0x23];
  if (lVar7 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140e715ef;
  }
  lVar7 = lVar9;
LAB_140e715ef:
  lVar7 = FUN_140e7fe60(param_1,lVar7);
  lVar6 = FUN_140e7fe60(param_1,param_1[0x8d]);
  if ((lVar7 != 0) && (lVar6 != 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar8 = lVar9;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar8 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
    }
    FUN_142fe44f0(lVar7,lVar8,-(int)param_1[0x94]);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar9 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
    }
    FUN_142fe44f0(lVar6,lVar9,-*(int *)((longlong)param_1 + 0x47c));
  }
  if ((char)param_1[0x8b] != '\x02') {
    (**(code **)(*param_1 + 0x600))(param_1);
    *(undefined1 *)(param_1 + 0x8b) = 2;
  }
  plVar1 = (longlong *)param_1[0x8c];
  if ((plVar1 != (longlong *)0x0) && ((char)plVar1[0x8b] != '\x02')) {
    (**(code **)(*plVar1 + 0x600))(plVar1);
    *(undefined1 *)(plVar1 + 0x8b) = 2;
  }
  uVar3 = FUN_140abdf40(lVar5,param_1);
  *(undefined4 *)((longlong)param_1 + 0x4ec) = uVar3;
  if (param_1[0x8c] != 0) {
    *(undefined4 *)(param_1[0x8c] + 0x4ec) = uVar3;
  }
  if (*(int *)((longlong)param_1 + 0x4ec) == -1) {
    return 0;
  }
  return 1;
}



// FUNCTION 140e71740 FUN_140e71740 body=363 status=ok
// SIG undefined FUN_140e71740(void)

void FUN_140e71740(longlong param_1)

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
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_142223710();
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ASeatPawn::SeatAttachStateChanged",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  lVar2 = *(longlong *)(param_1 + 0x4d8);
  plVar10 = (longlong *)(lVar2 + 0x3f0);
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_20);
  }
  piVar8 = (int *)*plVar10;
  iVar1 = *(int *)(lVar2 + 0x3f8);
  piVar9 = piVar8;
  do {
    if (piVar9 == piVar8 + (longlong)iVar1 * 4) {
LAB_140e7185d:
      iVar1 = *(int *)(lVar2 + 0x3f8);
      *(int *)(lVar2 + 0x3f8) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x3fc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
      *piVar8 = local_28;
      piVar8[1] = local_24;
      *(longlong *)(piVar8 + 2) = local_20;
LAB_140e71896:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      return;
    }
    if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_20)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140e71896;
      goto LAB_140e7185d;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 140e718b0 FUN_140e718b0 body=630 status=ok
// SIG undefined FUN_140e718b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e718b0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_142223710();
  FUN_142a07000();
  lVar5 = (**(code **)(*param_1 + 0x628))(param_1);
  lVar9 = param_1[0xa1];
  param_1[0x8d] = lVar5;
  if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 0x10c0))) {
    param_1[0xa2] = *(longlong *)(lVar9 + 400);
    plVar6 = (longlong *)FUN_14238d0c0();
    lVar9 = plVar6[1];
    param_1[0xa4] = *plVar6;
    param_1[0xa5] = lVar9;
    uVar1 = *(undefined4 *)((longlong)plVar6 + 0x14);
    lVar9 = plVar6[3];
    uVar2 = *(undefined4 *)((longlong)plVar6 + 0x1c);
    *(int *)(param_1 + 0xa6) = (int)plVar6[2];
    *(undefined4 *)((longlong)param_1 + 0x534) = uVar1;
    *(int *)(param_1 + 0xa7) = (int)lVar9;
    *(undefined4 *)((longlong)param_1 + 0x53c) = uVar2;
    uVar1 = *(undefined4 *)((longlong)plVar6 + 0x24);
    lVar9 = plVar6[5];
    uVar2 = *(undefined4 *)((longlong)plVar6 + 0x2c);
    *(int *)(param_1 + 0xa8) = (int)plVar6[4];
    *(undefined4 *)((longlong)param_1 + 0x544) = uVar1;
    *(int *)(param_1 + 0xa9) = (int)lVar9;
    *(undefined4 *)((longlong)param_1 + 0x54c) = uVar2;
    if (param_1[0x8c] != 0) {
      FUN_14044b020(param_1[0x8c] + 0x2d8,&local_98,param_1,FUN_140e89190);
      FUN_14044b020(param_1[0x8c] + 0x2f0,&local_98,param_1,FUN_140e89110);
    }
  }
  lVar9 = param_1[0xab];
  if (lVar9 == 0) {
    return;
  }
  _guard_xfg_dispatch_icall_nop(&local_78,0,0x60);
  local_60 = 100;
  local_70 = lVar9;
  local_78 = FUN_14057ade0(lVar9);
  if (0 < *(int *)(param_1[0xab] + 200)) {
    local_68 = **(undefined8 **)(param_1[0xab] + 0xc0);
  }
  uVar7 = FUN_1430b3b80();
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar6 = (longlong *)FUN_140e5fdc0(uVar8,&local_78,uVar7);
  if (plVar6 != (longlong *)0x0) {
    lVar9 = FUN_1430b3b80();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140e71a4a;
  }
  plVar6 = (longlong *)0x0;
LAB_140e71a4a:
  param_1[0xae] = (longlong)plVar6;
  if ((plVar6 != (longlong *)0x0) &&
     (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x900))(plVar6,0,0), plVar6 != (longlong *)0x0)) {
    FUN_142382f60(plVar6,param_1[0x8d],&DAT_146532188,param_1[0xac]);
    local_90 = (undefined4)param_1[0xad];
    local_98 = CONCAT44(local_90,local_90);
    local_80 = local_90;
    (**(code **)(*plVar6 + 0x3f8))(plVar6,&local_98);
  }
  lVar9 = *param_1;
  uVar4 = FUN_1407c3030(param_1 + 0x8e);
  (**(code **)(lVar9 + 0x310))(param_1,uVar4);
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (local_58);
  return;
}



// FUNCTION 140e71b30 FUN_140e71b30 body=54 status=ok
// SIG undefined FUN_140e71b30(void)

void FUN_140e71b30(longlong *param_1)

{
  FUN_142330a70();
  if (*(char *)((longlong)param_1 + 0x1d2) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140e71b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x408))(param_1,param_1[0x23]);
    return;
  }
  return;
}



// FUNCTION 140e71b70 FUN_140e71b70 body=1109 status=ok
// SIG undefined FUN_140e71b70(void)

void FUN_140e71b70(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  code *local_28;
  ulonglong uStack_20;
  
  FUN_142330a70();
  if (*(char *)((longlong)param_1 + 0x1d2) == '\0') {
    (**(code **)(*param_1 + 0x408))(param_1,param_1[0x23]);
  }
  pwVar8 = (wchar_t *)param_1[0x2f];
  pwVar9 = (wchar_t *)0x0;
  if (pwVar8 != (wchar_t *)0x0) {
    lVar4 = UMovieSceneIntegerSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140e71bea;
  }
  pwVar8 = pwVar9;
LAB_140e71bea:
  plVar1 = (longlong *)param_1[0x31];
  if ((plVar1 != (longlong *)0x0) && (param_1[0x39] != 0)) {
    local_res8 = 0;
    lVar4 = (**(code **)(*plVar1 + 0x5a8))(plVar1,0,*(undefined8 *)(pwVar8 + 0x1c),0);
    plVar1 = (longlong *)param_1[0x39];
    param_1[0x3b] = lVar4;
    uVar5 = FUN_1414dc610();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    param_1[0x3c] = lVar4;
    if (lVar4 != 0) {
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = (code *)&LAB_140e87fe0;
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UProjectedShield_Vehicle::OnEngineStart",L"::");
      pwVar8 = pwVar9;
      while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      FUN_1407260e0(param_1[0x3c] + 400,param_1,&local_28,local_res8);
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = FUN_140e88000;
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UProjectedShield_Vehicle::OnEngineStop",L"::");
      pwVar8 = pwVar9;
      while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      FUN_1407260e0(param_1[0x3c] + 0x1a0,param_1,&local_28,local_res8);
    }
    plVar1 = (longlong *)param_1[0x39];
    uVar5 = FUN_1430e4ad0();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    if (lVar4 != 0) {
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = FUN_140e87d10;
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&UProjectedShield_Vehicle::OnDigiThrustStarted",L"::");
      pwVar8 = pwVar9;
      while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      FUN_1407260e0(lVar4 + 0x178,param_1,&local_28,local_res8);
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = FUN_140e87ce0;
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&UProjectedShield_Vehicle::OnDigiThrustEndFinished",L"::");
      pwVar8 = pwVar9;
      while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      FUN_1407260e0(lVar4 + 0x1a8,param_1,&local_28,local_res8);
    }
    lVar4 = param_1[0x39];
    if (lVar4 != 0) {
      lVar7 = FUN_14148cad0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uStack_20 = uStack_20 & 0xffffffff00000000;
        local_28 = FUN_140e89210;
        pwVar6 = _guard_xfg_dispatch_icall_nop
                           (L"&UProjectedShield_Vehicle::OnPrimaryOccupantEnter",L"::");
        pwVar8 = pwVar9;
        while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar8 = pwVar3;
        }
        FName::FName(&local_res8,pwVar8 + 2,1);
        FUN_1407260e0(lVar4 + 0x9a8,param_1,&local_28,local_res8);
        uStack_20 = uStack_20 & 0xffffffff00000000;
        local_28 = FUN_140e89260;
        pwVar8 = _guard_xfg_dispatch_icall_nop
                           (L"&UProjectedShield_Vehicle::OnPrimaryOccupantExit",L"::");
        while (pwVar6 = pwVar8, pwVar6 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
          pwVar9 = pwVar6;
        }
        FName::FName(&local_res8,pwVar9 + 2,1);
        FUN_1407260e0(lVar4 + 0x9b8,param_1,&local_28,local_res8);
      }
    }
  }
  return;
}



// FUNCTION 140e71fd0 FUN_140e71fd0 body=273 status=ok
// SIG undefined FUN_140e71fd0(void)

void FUN_140e71fd0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  FUN_142cb7380();
  lVar3 = *(longlong *)(param_1 + 0x120);
  if ((((lVar3 != 0) || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)) &&
      (lVar3 = FUN_140c12480(lVar3), lVar3 != 0)) &&
     (lVar3 = AAIController::GetPerceptionComponent(lVar3), lVar3 != 0)) {
    plVar1 = (longlong *)(lVar3 + 0x30);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = 0x40e96030;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar2 = *(int *)(lVar3 + 0x38);
      *(int *)(lVar3 + 0x38) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x3c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 140e720f0 FUN_140e720f0 body=27 status=ok
// SIG undefined FUN_140e720f0(void)

void FUN_140e720f0(undefined8 param_1)

{
  FUN_140e45090();
  FUN_140e8d010(param_1);
  return;
}



// FUNCTION 140e72110 FUN_140e72110 body=530 status=ok
// SIG undefined FUN_140e72110(void)

void FUN_140e72110(longlong param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  int *piVar9;
  wchar_t *pwVar10;
  int *piVar11;
  longlong *plVar12;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_142330a70();
  pwVar10 = *(wchar_t **)(param_1 + 0x118);
  if (pwVar10 != (wchar_t *)0x0) {
    lVar5 = FUN_141404840();
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140e72167;
  }
  pwVar10 = (wchar_t *)0x0;
LAB_140e72167:
  *(wchar_t **)(param_1 + 0x218) = pwVar10;
  plVar12 = *(longlong **)(param_1 + 0x118);
  if (plVar12 != (longlong *)0x0) {
    uVar6 = FUN_142e43690();
    lVar5 = (**(code **)(*plVar12 + 0x628))(plVar12,uVar6);
    if (lVar5 != 0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&USirenStandInComponent::OnCustomizationApplied",L"::");
      pwVar10 = (wchar_t *)0x0;
      while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar10 = pwVar3;
      }
      FName::FName(&local_res10,pwVar10 + 2,1);
      plVar12 = (longlong *)(lVar5 + 800);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_28), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_20);
      }
      piVar9 = (int *)*plVar12;
      iVar1 = *(int *)(lVar5 + 0x328);
      for (piVar11 = piVar9; piVar11 != piVar9 + (longlong)iVar1 * 4; piVar11 = piVar11 + 4) {
        if (((*piVar11 == local_28) && (piVar11[1] == local_24)) ||
           ((cVar4 = FWeakObjectPtr::IsValid(piVar11), cVar4 == '\0' &&
            (cVar4 = FWeakObjectPtr::IsValid(&local_28), cVar4 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar11 + 2) == local_20)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar11 - (longlong)piVar9 >> 4) != -1) goto LAB_140e72301;
          break;
        }
      }
      iVar1 = *(int *)(lVar5 + 0x328);
      *(int *)(lVar5 + 0x328) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x32c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
      }
      piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar12);
      *piVar9 = local_28;
      piVar9[1] = local_24;
      *(longlong *)(piVar9 + 2) = local_20;
LAB_140e72301:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
    }
  }
  FUN_140e8d170(param_1);
  return;
}



// FUNCTION 140e72330 FUN_140e72330 body=124 status=ok
// SIG undefined FUN_140e72330(void)

void FUN_140e72330(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142330a70();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_141404840();
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
      *(longlong *)(param_1 + 0x218) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x218) = 0;
  return;
}



// FUNCTION 140e723b0 WinMainCRTStartup body=18 status=ok
// SIG undefined WinMainCRTStartup(void)

void WinMainCRTStartup(void)

{
  FUN_142330a70();
  FUN_140e7ebd0();
  return;
}



// FUNCTION 140e723d0 FUN_140e723d0 body=209 status=ok
// SIG undefined FUN_140e723d0(void)

void FUN_140e723d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_140e7244e:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4,param_5);
        if (cVar3 == '\0') goto LAB_140e7244e;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140e724b0 FUN_140e724b0 body=196 status=ok
// SIG undefined FUN_140e724b0(void)

void FUN_140e724b0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_140e72526:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_140e72526;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140e72580 FUN_140e72580 body=196 status=ok
// SIG undefined FUN_140e72580(void)

void FUN_140e72580(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_140e725f6:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_140e725f6;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140e72650 FUN_140e72650 body=320 status=ok
// SIG undefined FUN_140e72650(void)

void FUN_140e72650(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_28 [32];
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xb40,0);
  if ((*(char *)(param_1 + 0xba9) != '\0') && (*(char *)(param_1 + 0xba8) == '\0')) {
    plVar8 = *(longlong **)(param_1 + 0x470);
    plVar1 = plVar8 + *(int *)(param_1 + 0x478);
    if (plVar8 != plVar1) {
      lVar7 = 0;
      do {
        lVar5 = lVar7;
        if (((longlong *)*plVar8 != (longlong *)0x0) &&
           (lVar3 = (**(code **)(*(longlong *)*plVar8 + 0x670))(), lVar3 != 0)) {
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
          if (bVar2) {
            lVar5 = FUN_140cff1b0(lVar3);
          }
        }
        if (lVar5 != 0) {
          uVar6 = FUN_1404b03b0();
          uVar6 = FText::FText(local_28,uVar6);
          FUN_140c70350(lVar5,*(undefined8 *)(param_1 + 0xa60),*(undefined1 *)(param_1 + 0xa71),
                        uVar6,*(undefined4 *)(param_1 + 0xb08),0,1,0);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
    *(undefined1 *)(param_1 + 0xba9) = 0;
  }
  return;
}



// FUNCTION 140e72790 FUN_140e72790 body=493 status=ok
// SIG undefined FUN_140e72790(void)

void FUN_140e72790(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_48 [32];
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x16f,0);
  plVar7 = (longlong *)param_1[0x8e];
  plVar1 = plVar7 + (int)param_1[0x8f];
  if (plVar7 != plVar1) {
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      if (((longlong *)*plVar7 != (longlong *)0x0) &&
         (lVar4 = (**(code **)(*(longlong *)*plVar7 + 0x670))(), lVar4 != 0)) {
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
        if ((bVar3) && (lVar4 = FUN_140cff1b0(lVar4), lVar4 != 0)) {
          FUN_140c6cf20(lVar4);
          lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
          if (*(longlong *)(lVar5 + 400) == 0) {
            uVar6 = *(undefined8 *)(lVar5 + 0x3f8);
          }
          else {
            uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
          }
          FUN_142880530(uVar6,param_1 + 0x16c);
          lVar5 = *plVar2;
          param_1[0x16c] = 0;
          if ((*(int *)(lVar5 + 0x38) < DAT_146852c50) &&
             (_Init_thread_header(&DAT_146852c50), DAT_146852c50 == -1)) {
            FText::FText(&DAT_146852c38,0);
            atexit(FUN_143e3e8f0);
            _Init_thread_footer(&DAT_146852c50);
          }
          uVar6 = FText::FText(local_48,&DAT_146852c38);
          FUN_140c70350(lVar4,param_1[0x14d],8,uVar6,(int)param_1[0x164],0,0,0);
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  return;
}



// FUNCTION 140e72980 FUN_140e72980 body=17 status=ok
// SIG undefined FUN_140e72980(void)

void FUN_140e72980(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 auStackX_10 [6];
  
  plVar1 = *(longlong **)(param_1 + 0x5f8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar2 = *plVar1;
  auStackX_10[0] = param_2;
  uVar3 = FUN_14178ac60(plVar1,DAT_14689e788);
  (**(code **)(lVar2 + 0x208))(plVar1,uVar3,auStackX_10);
  return;
}



// FUNCTION 140e729a0 FUN_140e729a0 body=402 status=ok
// SIG undefined FUN_140e729a0(void)

void FUN_140e729a0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 local_res10 [2];
  undefined1 local_48 [32];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xb60,local_res10);
  plVar9 = *(longlong **)(param_1 + 0x470);
  plVar1 = plVar9 + *(int *)(param_1 + 0x478);
  if (plVar9 != plVar1) {
    lVar8 = 0;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      lVar6 = lVar8;
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (lVar4 = (**(code **)(*(longlong *)*plVar9 + 0x670))(), lVar4 != 0)) {
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
          lVar6 = FUN_140cff1b0(lVar4);
        }
      }
      if (lVar6 != 0) {
        if ((*(int *)(*plVar2 + 0x38) < DAT_146852c50) &&
           (_Init_thread_header(&DAT_146852c50), DAT_146852c50 == -1)) {
          FText::FText(&DAT_146852c38,0);
          atexit(FUN_143e3e8f0);
          _Init_thread_footer(&DAT_146852c50);
        }
        uVar7 = FText::FText(local_48,&DAT_146852c38);
        FUN_140c70350(lVar6,*(undefined8 *)(param_1 + 0xa50),2,uVar7,
                      *(undefined4 *)(param_1 + 0xb08),0,1,0);
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  return;
}



// FUNCTION 140e72b40 FUN_140e72b40 body=129 status=ok
// SIG undefined FUN_140e72b40(void)

void FUN_140e72b40(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x434) != '\0')) {
      FUN_140c6cc30(*(undefined8 *)(param_1 + 0x5f0),1,1,*(undefined4 *)(lVar1 + 0x438),
                    *(undefined4 *)(lVar1 + 0x43c));
    }
    FUN_1414c3940(*(undefined8 *)(param_1 + 0x5f0),param_2);
  }
  return;
}



// FUNCTION 140e72bd0 FUN_140e72bd0 body=674 status=ok
// SIG undefined FUN_140e72bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e72bd0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_110;
  int local_108 [2];
  undefined8 local_100;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [24];
  undefined1 local_88 [16];
  undefined4 local_78 [2];
  longlong local_70;
  longlong *local_60;
  char local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_108[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xb88,local_108);
  plVar11 = *(longlong **)(param_1 + 0x470);
  plVar3 = plVar11 + *(int *)(param_1 + 0x478);
  do {
    if (plVar11 == plVar3) {
      return;
    }
    if ((longlong *)*plVar11 == (longlong *)0x0) {
LAB_140e72c9a:
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(longlong *)*plVar11 + 0x670))();
      if (lVar7 == 0) goto LAB_140e72c9a;
      lVar8 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_140e72c9a;
      lVar7 = FUN_140cff1b0(lVar7);
    }
    if (lVar7 != 0) {
      local_100 = 0;
      puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_88,param_1 + 0xa90);
      local_78[0] = 0;
      local_f8 = local_78;
      local_50 = '\0';
      local_e0 = puVar9[1];
      local_e8 = *puVar9;
      if (local_e0 != 0) {
        LOCK();
        *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
        UNLOCK();
      }
      puStack_f0 = local_48;
      local_70 = (longlong)param_2;
      local_d8 = local_f8;
      uStack_d0 = local_48;
      uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_d8);
      uVar10 = FText::Format(local_b8,&local_e8,uVar10);
      FText::FText(local_a0,uVar10);
      plVar5 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_b0)(local_b0);
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8);
      plVar5 = local_60;
      if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_60)(local_60);
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
      plVar5 = (longlong *)puVar9[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      local_110 = 0;
      local_118 = 0;
      local_120 = local_100;
      local_128 = *(undefined4 *)(param_1 + 0xa88);
      FUN_140c70350(lVar7,*(undefined8 *)(param_1 + 0xa58),9,local_a0);
    }
    plVar11 = plVar11 + 1;
  } while( true );
}



// FUNCTION 140e72e80 FUN_140e72e80 body=17 status=ok
// SIG undefined FUN_140e72e80(void)

void FUN_140e72e80(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStackX_8 [4];
  undefined4 uStackX_c;
  
  plVar1 = *(longlong **)(param_1 + 0x5f0);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar2 = *plVar1;
  auStackX_8[0] = param_2;
  uStackX_c = param_3;
  uVar3 = FUN_14178ac60(plVar1,DAT_14689f510);
  (**(code **)(lVar2 + 0x208))(plVar1,uVar3,auStackX_8);
  return;
}



// FUNCTION 140e72ea0 FUN_140e72ea0 body=500 status=ok
// SIG undefined FUN_140e72ea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e72ea0(longlong *param_1,undefined1 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  int local_b8;
  int local_b4;
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
  *(undefined1 *)((longlong)param_1 + 0xbdc) = param_2;
  *(int *)(param_1 + 0x17b) = param_3 + 1;
  lVar1 = (**(code **)(*param_1 + 0x148))();
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
    plVar2[2] = (longlong)FUN_140e78270;
    lVar1 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar1;
    *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_a8 = 0;
  local_a0 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_c0 = 0xbf800000;
  local_c8 = 1;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar3,param_1 + 0x16c,&local_a8,0x3f800000);
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
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar1 = FMemory::Realloc(plVar2,0,0);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  local_b8 = CONCAT31(local_b8._1_3_,param_2);
  local_b4 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x173,&local_b8);
  local_b8 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x177,&local_b8);
  return;
}



// FUNCTION 140e730c0 FUN_140e730c0 body=271 status=ok
// SIG undefined FUN_140e730c0(void)

void FUN_140e730c0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_28 [32];
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xbc8,0);
  plVar8 = *(longlong **)(param_1 + 0x470);
  plVar1 = plVar8 + *(int *)(param_1 + 0x478);
  if (plVar8 != plVar1) {
    lVar7 = 0;
    do {
      lVar5 = lVar7;
      if (((longlong *)*plVar8 != (longlong *)0x0) &&
         (lVar3 = (**(code **)(*(longlong *)*plVar8 + 0x670))(), lVar3 != 0)) {
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
        if (bVar2) {
          lVar5 = FUN_140cff1b0(lVar3);
        }
      }
      if (lVar5 != 0) {
        uVar6 = FText::FText(local_28,param_1 + 0xb48);
        FUN_140c70350(lVar5,*(undefined8 *)(param_1 + 0xa80),10,uVar6,
                      *(undefined4 *)(param_1 + 0xb40),0,0,0);
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  return;
}



// FUNCTION 140e731d0 FUN_140e731d0 body=31 status=ok
// SIG undefined FUN_140e731d0(void)

void FUN_140e731d0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xb30,local_res8);
  return;
}



// FUNCTION 140e731f0 FUN_140e731f0 body=31 status=ok
// SIG undefined FUN_140e731f0(void)

void FUN_140e731f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xb68,local_res8);
  return;
}



// FUNCTION 140e73210 FUN_140e73210 body=17 status=ok
// SIG undefined FUN_140e73210(void)

void FUN_140e73210(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 auStackX_10 [6];
  
  plVar1 = *(longlong **)(param_1 + 0x5f8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar2 = *plVar1;
  auStackX_10[0] = param_2;
  uVar3 = FUN_14178ac60(plVar1,DAT_14689e798);
  (**(code **)(lVar2 + 0x208))(plVar1,uVar3,auStackX_10);
  return;
}



// FUNCTION 140e73230 FUN_140e73230 body=1264 status=ok
// SIG undefined FUN_140e73230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e73230(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_218 [32];
  int local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0 [2];
  longlong local_1c8;
  undefined8 local_1c0;
  undefined4 *local_1b8;
  undefined8 *puStack_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [16];
  undefined1 local_100 [24];
  undefined4 local_e8 [2];
  longlong local_e0;
  longlong *local_d0;
  char local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  *(undefined4 *)(param_1 + 0x174) = param_2;
  local_1d8 = param_2;
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar6 + 400) == 0) {
    uVar11 = *(undefined8 *)(lVar6 + 0x3f8);
  }
  else {
    uVar11 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_190 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar7 + 1,param_1);
    plVar7[2] = (longlong)FUN_140e77d70;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_143f4d1b8;
  }
  lVar6 = 0;
  local_b8 = 0;
  local_b0 = 0;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_b8);
  }
  FWeakObjectPtr::operator=(local_a8,0);
  local_1f0 = CONCAT44(local_1f0._4_4_,0xbf800000);
  local_1f8 = CONCAT31(local_1f8._1_3_,1);
  local_a0 = 0;
  local_68 = (longlong *)0x0;
  local_58 = 0;
  local_98 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar11,param_1 + 0x165,&local_b8,0x3f800000);
  if (local_58 != 0) {
    plVar13 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar13 = local_68;
    }
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x10))(plVar13,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_190 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_190 != (longlong *)0x0) {
      FMemory::Free(local_190);
    }
  }
  plVar13 = (longlong *)param_1[0x8e];
  plVar7 = plVar13 + (int)param_1[0x8f];
  for (; plVar13 != plVar7; plVar13 = plVar13 + 1) {
    lVar10 = lVar6;
    if ((longlong *)*plVar13 != (longlong *)0x0) {
      lVar8 = (**(code **)(*(longlong *)*plVar13 + 0x670))();
      if (lVar8 != 0) {
        lVar9 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          lVar10 = FUN_140cff1b0(lVar8);
        }
      }
    }
    if (lVar10 != 0) {
      local_1c8 = 0;
      local_1c0 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
      FGenericPlatformString::Memcpy(local_1c8,&DAT_1445b6818,8);
      lVar8 = param_1[0x174];
      uVar11 = FText::FromString(local_128,&local_1c8);
      puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_110,uVar11);
      local_e8[0] = 0;
      local_1b8 = local_e8;
      local_c0 = '\0';
      puStack_1b0 = &local_b8;
      local_1a0 = puVar12[1];
      local_1a8 = *puVar12;
      if (local_1a0 != 0) {
        LOCK();
        *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
        UNLOCK();
      }
      local_e0 = (longlong)(int)lVar8;
      local_178 = local_1b8;
      uStack_170 = puStack_1b0;
      uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_168,&local_178);
      uVar11 = FText::Format(local_140,&local_1a8,uVar11);
      FText::FText(local_158,uVar11);
      plVar4 = local_138;
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_138 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_138)(local_138);
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_168);
      plVar4 = local_d0;
      if ((local_c0 != '\0') && (local_c0 = '\0', local_d0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_d0 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_d0)(local_d0);
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
      plVar4 = (longlong *)puVar12[1];
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
      plVar4 = local_120;
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_120 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_120)(local_120);
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
      if (local_1c8 != 0) {
        FMemory::Free();
      }
      lVar8 = param_1[0x161];
      lVar9 = param_1[0x174];
      local_198 = 0;
      uVar11 = FText::FText(local_100,local_158);
      local_1e0 = 0;
      local_1e8 = 1;
      local_1f0 = 0;
      local_1f8 = (int)lVar8 - (int)lVar9;
      FUN_140c70350(lVar10,param_1[0x14d],*(undefined1 *)((longlong)param_1 + 0xa73),uVar11);
      plVar4 = local_150;
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_150 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_150)(local_150);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
    }
    param_2 = local_1d8;
  }
  local_1d4 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x16a,&local_1d4);
  local_1d0[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x170,local_1d0);
  *(undefined2 *)(param_1 + 0x175) = 0x100;
  return;
}



// FUNCTION 140e73740 FUN_140e73740 body=445 status=ok
// SIG undefined FUN_140e73740(void)

void FUN_140e73740(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_38 [32];
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xb70,0);
  *(undefined1 *)(param_1 + 0xba8) = 1;
  plVar9 = *(longlong **)(param_1 + 0x470);
  plVar1 = plVar9 + *(int *)(param_1 + 0x478);
  if (plVar9 != plVar1) {
    lVar8 = 0;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      lVar6 = lVar8;
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (lVar4 = (**(code **)(*(longlong *)*plVar9 + 0x670))(), lVar4 != 0)) {
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
          lVar6 = FUN_140cff1b0(lVar4);
        }
      }
      if (lVar6 != 0) {
        if ((*(int *)(*plVar2 + 0x38) < DAT_146852c50) &&
           (_Init_thread_header(&DAT_146852c50), DAT_146852c50 == -1)) {
          FText::FText(&DAT_146852c38,0);
          atexit(FUN_143e3e8f0);
          _Init_thread_footer(&DAT_146852c50);
        }
        uVar7 = FText::FText(local_38,&DAT_146852c38);
        FUN_140c70350(lVar6,*(undefined8 *)(param_1 + 0xa50),*(undefined1 *)(param_1 + 0xa70),uVar7,
                      *(undefined4 *)(param_1 + 0xb08),0,1,0);
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
    *(undefined1 *)(param_1 + 0xba9) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0xba9) = 0;
  return;
}



// FUNCTION 140e73900 FUN_140e73900 body=17 status=ok
// SIG undefined FUN_140e73900(void)

void FUN_140e73900(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 auStackX_10 [6];
  
  plVar1 = *(longlong **)(param_1 + 0x5f0);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar2 = *plVar1;
  auStackX_10[0] = param_2;
  uVar3 = FUN_14178ac60(plVar1,DAT_14689f528);
  (**(code **)(lVar2 + 0x208))(plVar1,uVar3,auStackX_10);
  return;
}



// FUNCTION 140e73920 FUN_140e73920 body=674 status=ok
// SIG undefined FUN_140e73920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e73920(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_110;
  int local_108 [2];
  undefined8 local_100;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [24];
  undefined1 local_88 [16];
  undefined4 local_78 [2];
  longlong local_70;
  longlong *local_60;
  char local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_108[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xba8,local_108);
  plVar11 = *(longlong **)(param_1 + 0x470);
  plVar3 = plVar11 + *(int *)(param_1 + 0x478);
  do {
    if (plVar11 == plVar3) {
      return;
    }
    if ((longlong *)*plVar11 == (longlong *)0x0) {
LAB_140e739ea:
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(longlong *)*plVar11 + 0x670))();
      if (lVar7 == 0) goto LAB_140e739ea;
      lVar8 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_140e739ea;
      lVar7 = FUN_140cff1b0(lVar7);
    }
    if (lVar7 != 0) {
      local_100 = 0;
      puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_88,param_1 + 0xa90);
      local_78[0] = 0;
      local_f8 = local_78;
      local_50 = '\0';
      local_e0 = puVar9[1];
      local_e8 = *puVar9;
      if (local_e0 != 0) {
        LOCK();
        *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
        UNLOCK();
      }
      puStack_f0 = local_48;
      local_70 = (longlong)param_2;
      local_d8 = local_f8;
      uStack_d0 = local_48;
      uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_d8);
      uVar10 = FText::Format(local_b8,&local_e8,uVar10);
      FText::FText(local_a0,uVar10);
      plVar5 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_b0)(local_b0);
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8);
      plVar5 = local_60;
      if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_60)(local_60);
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
      plVar5 = (longlong *)puVar9[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      local_110 = 0;
      local_118 = 0;
      local_120 = local_100;
      local_128 = *(undefined4 *)(param_1 + 0xa88);
      FUN_140c70350(lVar7,*(undefined8 *)(param_1 + 0xa60),7,local_a0);
    }
    plVar11 = plVar11 + 1;
  } while( true );
}



// FUNCTION 140e73bd0 FUN_140e73bd0 body=395 status=ok
// SIG undefined FUN_140e73bd0(void)

void FUN_140e73bd0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  short *_Src_00;
  int iVar3;
  void *local_38;
  int local_30;
  int local_2c;
  void *local_28;
  undefined8 local_20;
  
  local_20._4_4_ = 0;
  iVar3 = 0;
  local_30 = 0;
  local_38 = (void *)0x0;
  local_2c = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    _Src_00 = &DAT_143f3eda8;
  }
  else {
    _Src_00 = (short *)*param_3;
  }
  if (_Src_00 != (short *)0x0) {
    iVar1 = 0;
    if (*_Src_00 != 0) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (_Src_00[lVar2] != 0);
      iVar1 = (int)lVar2 + 1;
    }
    iVar3 = 0;
    if (iVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,iVar1);
      iVar3 = local_30;
    }
    local_30 = iVar1 + iVar3;
    iVar3 = local_20._4_4_;
    if (local_2c < local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
      iVar3 = local_20._4_4_;
    }
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop(local_38,_Src_00,(longlong)iVar1 * 2);
    }
  }
  if (&local_28 != (void **)(param_1 + 0x30)) {
    iVar1 = *(int *)(param_1 + 0x38);
    _Src = *(void **)(param_1 + 0x30);
    local_20 = CONCAT44(local_20._4_4_,iVar1);
    if ((iVar1 == 0) && (iVar3 == 0)) {
      local_20 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,iVar1,iVar3);
      _guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)iVar1 * 2);
    }
  }
  iVar3 = *(int *)(param_2 + 0x30);
  *(int *)(param_2 + 0x30) = iVar3 + 1;
  if (*(int *)(param_2 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2 + 0x28,iVar3);
  }
  lVar2 = (longlong)iVar3 * 0x20 + *(longlong *)(param_2 + 0x28);
  FString::FString(lVar2,&local_38);
  FString::FString(lVar2 + 0x10,&local_28);
  FString::operator=(param_2 + 0x38,param_1 + 0x40);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e73d70 FUN_140e73d70 body=72 status=ok
// SIG undefined FUN_140e73d70(void)

void FUN_140e73d70(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  FString::operator=(param_2 + 6,param_1 + 0x50);
  *param_2 = 2;
  FUN_140e73bd0(param_1,param_2,param_3);
  return;
}



// FUNCTION 140e73dc0 FUN_140e73dc0 body=72 status=ok
// SIG undefined FUN_140e73dc0(void)

void FUN_140e73dc0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  FString::operator=(param_2 + 2,param_1 + 0x50);
  *param_2 = 0;
  FUN_140e73bd0(param_1,param_2,param_3);
  return;
}



// FUNCTION 140e73e10 FUN_140e73e10 body=564 status=ok
// SIG undefined FUN_140e73e10(void)

uint FUN_140e73e10(longlong param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ushort *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  ushort *local_58;
  int local_50;
  
  puVar15 = (undefined8 *)(param_1 + 0x480);
  uVar12 = *(uint *)(param_1 + 0x4a0) ^ *(uint *)(param_1 + 0x47c);
  lVar13 = 4;
  do {
    plVar10 = (longlong *)puVar15[5];
    uVar4 = 0;
    if (plVar10 != (longlong *)0x0) {
      uVar6 = FUN_14301f8f0();
      lVar7 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar6);
      if (lVar7 != 0) {
        local_res10 = *(undefined8 *)(*(longlong *)(lVar7 + 0x208) + 0x18);
        FName::ToString(&local_res10,&local_78);
        puVar2 = local_78;
        puVar8 = &DAT_143f3eda8;
        if (local_70 != 0) {
          puVar8 = local_78;
        }
        uVar3 = FCrc::StrCrc32<wchar_t>(puVar8,0);
        if (puVar2 != (undefined2 *)0x0) {
          FMemory::Free(puVar2);
        }
        local_res18 = *(undefined8 *)(*(longlong *)(lVar7 + 0x210) + 0x18);
        FName::ToString(&local_res18,&local_68);
        puVar2 = local_68;
        puVar8 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar8 = local_68;
        }
        uVar4 = FCrc::StrCrc32<wchar_t>(puVar8,uVar3);
        if (puVar2 != (undefined2 *)0x0) {
          FMemory::Free(puVar2);
        }
        plVar10 = *(longlong **)(lVar7 + 0x220);
        uVar9 = 0;
        uVar14 = (longlong)*(int *)(lVar7 + 0x228) & 0x1fffffffffffffff;
        if (plVar10 + *(int *)(lVar7 + 0x228) < plVar10) {
          uVar14 = 0;
        }
        if (uVar14 != 0) {
          do {
            local_res20 = *(undefined8 *)(*plVar10 + 0x18);
            FName::ToString(&local_res20,&local_58);
            uVar4 = ~uVar4;
            puVar11 = &DAT_143f3eda8;
            if (local_50 != 0) {
              puVar11 = local_58;
            }
            uVar1 = *puVar11;
            while (uVar1 != 0) {
              puVar11 = puVar11 + 1;
              uVar4 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(byte)((byte)uVar4 ^ (byte)uVar1) * 4) ^
                      uVar4 >> 8;
              uVar4 = *(uint *)(&DAT_1464aaab0 + (ulonglong)((uVar1 >> 8 ^ uVar4) & 0xff) * 4) ^
                      uVar4 >> 8;
              uVar4 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8;
              uVar4 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8;
              uVar1 = *puVar11;
            }
            uVar4 = ~uVar4;
            if (local_58 != (ushort *)0x0) {
              FMemory::Free(local_58);
            }
            plVar10 = plVar10 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar14);
        }
      }
    }
    uVar5 = FUN_140e7fb50(param_1,*puVar15);
    puVar15 = puVar15 + 1;
    uVar12 = uVar12 ^ uVar5 ^ uVar4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return uVar12;
}



// FUNCTION 140e74050 FUN_140e74050 body=120 status=ok
// SIG undefined FUN_140e74050(void)

void FUN_140e74050(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 200);
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xd0);
    lVar4 = (longlong)*(int *)(param_1 + 0xd8) * 0x58 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x58) {
      uVar2 = FUN_140a2f370(lVar1,*(undefined8 *)(lVar3 + 8));
      *(undefined4 *)(lVar3 + 0x10) = uVar2;
    }
  }
  return;
}



// FUNCTION 140e740e0 FUN_140e740e0 body=76 status=ok
// SIG undefined FUN_140e740e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e740e0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if ((*(int *)(lVar1 + 0x10) != 0) && (*(longlong **)(lVar1 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e74114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(lVar1 + 8) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140e74122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 140e74130 FUN_140e74130 body=1407 status=ok
// SIG undefined FUN_140e74130(void)

undefined8 FUN_140e74130(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  plVar4 = (longlong *)*param_2;
  lVar13 = 0;
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  lVar10 = FUN_14145f370();
  if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
      lVar10 + 0x88)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    return 0;
  }
  if (param_2[1] == 0) {
    return 1;
  }
  plVar5 = *(longlong **)(param_2[1] + 0x118);
  if (plVar5 == (longlong *)0x0) {
    return 1;
  }
  lVar10 = FUN_1413f82e0();
  if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
      lVar10 + 0x88)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    return 1;
  }
  lVar10 = (**(code **)(*plVar5 + 0x680))(plVar5);
  if (lVar10 == 0) {
    return 1;
  }
  lVar11 = UInputKeySelector::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
      != lVar11 + 0x88)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    return 1;
  }
  if ((char)param_2[2] != '\0') {
    if ((char)param_2[2] != '\x01') {
      return 1;
    }
    lVar11 = *(longlong *)(param_1 + 0x120);
    if (lVar11 == 0) {
      lVar11 = FUN_1423407b0(param_1);
    }
    lVar11 = *(longlong *)(lVar11 + 400);
    if (lVar11 == 0) {
      return 1;
    }
    lVar12 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) {
      return 1;
    }
    lVar12 = *(longlong *)(lVar10 + 0x4b8);
    if (lVar12 != 0) {
      lVar13 = 0x10;
      local_40 = *(longlong **)(lVar10 + 0x4c0);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      local_48 = lVar12;
      cVar9 = FUN_140ba7eb0(lVar11,&local_48);
      if (cVar9 != '\0') {
        bVar8 = false;
        goto LAB_140e74662;
      }
    }
    bVar8 = true;
LAB_140e74662:
    plVar4 = local_40;
    if ((lVar13 != 0) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_40 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
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
    if (bVar8) {
      return 0;
    }
    return 1;
  }
  if (*(char *)(lVar10 + 0x5d5) == '\x02') {
    return 0;
  }
  if (*(char *)(lVar10 + 0x5d5) != '\x01') goto LAB_140e745a8;
  lVar11 = *(longlong *)(param_1 + 0x120);
  if (lVar11 == 0) {
    lVar11 = FUN_1423407b0(param_1);
  }
  lVar11 = *(longlong *)(lVar11 + 400);
  if (lVar11 == 0) {
LAB_140e742c1:
    lVar11 = lVar13;
  }
  else {
    lVar12 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_140e742c1;
  }
  if (*(longlong *)(lVar10 + 0x4b8) == 0) {
    return 0;
  }
  lVar13 = (**(code **)(*plVar4 + 0x680))(plVar4);
  if ((lVar11 == 0) || (lVar13 == 0)) goto LAB_140e745a8;
  if (*(longlong *)(lVar13 + 0x4b8) == 0) {
    return 0;
  }
  local_80 = *(longlong **)(lVar10 + 0x4c0);
  local_88 = *(undefined8 *)(lVar10 + 0x4b8);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  FUN_140bbc6f0(lVar11,&local_98,&local_88);
  plVar5 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_80)(local_80);
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
  local_58 = *(undefined8 *)(lVar10 + 0x4b8);
  bVar6 = false;
  bVar8 = false;
  local_50 = *(longlong **)(lVar10 + 0x4c0);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  local_68 = *(undefined8 *)(lVar13 + 0x4b8);
  local_60 = *(longlong **)(lVar13 + 0x4c0);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_140bb74b0(lVar11);
  cVar9 = FUN_140d89890(uVar14,&local_68,&local_58,0);
  if (cVar9 == '\0') {
    if (local_98 != 0) {
      bVar6 = true;
      bVar8 = true;
      local_38 = local_98;
      plStack_30 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
        UNLOCK();
      }
      local_78 = *(undefined8 *)(lVar13 + 0x4b8);
      local_70 = *(longlong **)(lVar13 + 0x4c0);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      uVar14 = FUN_140bb74b0(lVar11);
      cVar9 = FUN_140d89890(uVar14,&local_78,&local_38,0);
      if (cVar9 != '\0') goto LAB_140e74437;
    }
    bVar7 = true;
  }
  else {
LAB_140e74437:
    bVar7 = false;
  }
  plVar5 = local_70;
  if ((bVar8) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_70)(local_70);
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
  plVar5 = plStack_30;
  if ((bVar6) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_60)(local_60);
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
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_50)(local_50);
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
  if (bVar7) {
    if (plStack_90 == (longlong *)0x0) {
      return 0;
    }
    LOCK();
    plVar4 = plStack_90 + 1;
    lVar13 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar13 != 1) {
      return 0;
    }
    (**(code **)*plStack_90)(plStack_90);
    LOCK();
    piVar2 = (int *)((longlong)plStack_90 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return 0;
    }
    (**(code **)(*plStack_90 + 8))(plStack_90,1);
    return 0;
  }
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_90 + 1;
    lVar13 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plStack_90 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
LAB_140e745a8:
  cVar9 = FUN_140cef4d0(plVar4);
  if (cVar9 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 140e746b0 CanPlayerEnterSeat_Implementation body=26 status=ok
// SIG undefined CanPlayerEnterSeat_Implementation(void)

bool ASeatBase::CanPlayerEnterSeat_Implementation(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1409da3e0(param_1 + 0x2c0);
  return cVar1 == '\0';
}



// FUNCTION 140e746d0 FUN_140e746d0 body=250 status=ok
// SIG undefined FUN_140e746d0(void)

bool FUN_140e746d0(longlong param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 200);
  }
  lVar4 = FUN_140e822f0(param_1,param_3);
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUdpMessageTunnel::GetTotalInboundBytes(lVar4);
    if ((plVar5 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar5 + 0x280))(plVar5,*(undefined8 *)(param_1 + 0x110)),
       cVar1 != '\0')) {
      lVar4 = FUN_140e822f0(param_1,param_3);
      if (lVar4 != 0) {
        piVar6 = *(int **)(param_1 + 0xd0);
        piVar8 = piVar6 + (longlong)*(int *)(param_1 + 0xd8) * 0x16;
        do {
          if (piVar6 == piVar8) {
LAB_140e74774:
            iVar7 = 0;
LAB_140e74776:
            iVar2 = FUN_140aabba0(*(longlong *)(param_1 + 0x110) + 0x1a68,
                                  *(undefined8 *)(lVar4 + 0x68));
            iVar3 = FUN_140e51650(lVar4,param_2);
            return iVar3 <= iVar2 - iVar7;
          }
          if (*piVar6 == param_3) {
            if (piVar6 != (int *)0x0) {
              iVar7 = piVar6[8];
              goto LAB_140e74776;
            }
            goto LAB_140e74774;
          }
          piVar6 = piVar6 + 0x16;
        } while( true );
      }
    }
  }
  return false;
}



// FUNCTION 140e747d0 FUN_140e747d0 body=347 status=ok
// SIG undefined FUN_140e747d0(void)

undefined4 FUN_140e747d0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  iVar2 = 0;
  bVar7 = *(longlong *)(param_1 + 0x4a8) != 0;
  lVar4 = *(longlong *)(param_1 + 0x118);
  bVar8 = *(longlong *)(param_1 + 0x480) != 0;
  uVar6 = bVar7 + 1;
  if (*(longlong *)(param_1 + 0x4b0) == 0) {
    uVar6 = (uint)bVar7;
  }
  uVar1 = bVar8 + 1;
  if (*(longlong *)(param_1 + 0x488) == 0) {
    uVar1 = (uint)bVar8;
  }
  uVar5 = uVar6 + 1;
  if (*(longlong *)(param_1 + 0x4b8) == 0) {
    uVar5 = uVar6;
  }
  uVar6 = uVar1 + 1;
  if (*(longlong *)(param_1 + 0x490) == 0) {
    uVar6 = uVar1;
  }
  uVar1 = uVar5 + 1;
  if (*(longlong *)(param_1 + 0x4c0) == 0) {
    uVar1 = uVar5;
  }
  uVar5 = uVar6 + 1;
  if (*(longlong *)(param_1 + 0x498) == 0) {
    uVar5 = uVar6;
  }
  if (lVar4 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && (lVar4 = *(longlong *)(lVar4 + 0x848), lVar4 != 0)) {
      lVar3 = FUN_1413ffe00();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      iVar2 = 0;
      if (bVar7) {
        lVar4 = FUN_140c45020(param_1);
        lVar4 = (**(code **)(*(longlong *)(lVar4 + 0xd80) + 0x18))();
        if (lVar4 != 0) {
          iVar2 = FUN_142ffcba0(lVar4);
        }
      }
    }
  }
  return CONCAT31((int3)(uVar1 + iVar2 >> 8),(int)uVar5 < (int)(uVar1 + iVar2));
}



// FUNCTION 140e74930 FUN_140e74930 body=49 status=ok
// SIG undefined FUN_140e74930(void)

undefined1 FUN_140e74930(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x128) == '\x03')) {
    lVar1 = FUN_140e80570();
    if (param_2 == lVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e74970 FUN_140e74970 body=100 status=ok
// SIG undefined FUN_140e74970(void)

undefined8 FUN_140e74970(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if ((*(longlong *)(DAT_146b33f38 + 200) != 0) && (*(longlong *)(DAT_146b33f38 + 0xd0) != 0)) {
    iVar1 = *(int *)(*(longlong *)(DAT_146b33f38 + 0xd0) + 0x430);
    iVar2 = FUN_140a2f2a0(*(longlong *)(DAT_146b33f38 + 200),param_2);
    if (iVar1 <= iVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e749e0 FUN_140e749e0 body=190 status=ok
// SIG undefined FUN_140e749e0(void)

undefined4 FUN_140e749e0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = 0;
  bVar6 = *(longlong *)(param_1 + 0x4a8) != 0;
  bVar7 = *(longlong *)(param_1 + 0x480) != 0;
  uVar5 = bVar6 + 1;
  if (*(longlong *)(param_1 + 0x4b0) == 0) {
    uVar5 = (uint)bVar6;
  }
  uVar1 = bVar7 + 1;
  if (*(longlong *)(param_1 + 0x488) == 0) {
    uVar1 = (uint)bVar7;
  }
  uVar4 = uVar5 + 1;
  if (*(longlong *)(param_1 + 0x4b8) == 0) {
    uVar4 = uVar5;
  }
  uVar5 = uVar1 + 1;
  if (*(longlong *)(param_1 + 0x490) == 0) {
    uVar5 = uVar1;
  }
  uVar1 = uVar4 + 1;
  if (*(longlong *)(param_1 + 0x4c0) == 0) {
    uVar1 = uVar4;
  }
  uVar4 = uVar5 + 1;
  if (*(longlong *)(param_1 + 0x498) == 0) {
    uVar4 = uVar5;
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    lVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x470) + 0xd80) + 0x18))();
    if (lVar3 != 0) {
      iVar2 = FUN_142ffcba0(lVar3);
    }
  }
  return CONCAT31((int3)(iVar2 + uVar4 >> 8),(int)uVar1 < (int)(iVar2 + uVar4));
}



// FUNCTION 140e74aa0 FUN_140e74aa0 body=425 status=ok
// SIG undefined FUN_140e74aa0(void)

ulonglong FUN_140e74aa0(longlong param_1,int param_2,int param_3,char param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    uVar9 = 0;
    if (param_5 == 0) {
      param_5 = *(int *)(param_1 + 200);
    }
    lVar3 = FUN_140e822f0(param_1,param_5);
    in_RAX = 0;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUdpMessageTunnel::GetTotalInboundBytes(lVar3);
      in_RAX = 0;
      if ((plVar4 != (longlong *)0x0) &&
         (in_RAX = (**(code **)(*plVar4 + 0x280))(plVar4,*(undefined8 *)(param_1 + 0x110)),
         (char)in_RAX != '\0')) {
        lVar3 = FUN_140e822f0(param_1,param_5);
        if (lVar3 != 0) {
          piVar6 = *(int **)(param_1 + 0xd0);
          piVar5 = piVar6 + (longlong)*(int *)(param_1 + 0xd8) * 0x16;
          piVar7 = (int *)0x0;
          iVar8 = 0;
          for (; piVar6 != piVar5; piVar6 = piVar6 + 0x16) {
            if (*piVar6 == param_5) {
              piVar7 = piVar6;
              if (piVar6 != (int *)0x0) {
                iVar8 = piVar6[8];
              }
              break;
            }
          }
          if (param_4 != '\0') {
            iVar1 = FUN_140aabba0(*(longlong *)(param_1 + 0x110) + 0x1a68,
                                  *(undefined8 *)(lVar3 + 0x68));
            iVar2 = FUN_140e51730(lVar3,param_2,param_3);
            if (iVar1 - iVar8 < iVar2) {
              return 0;
            }
          }
          if (piVar7 != (int *)0x0) {
            piVar5 = *(int **)(piVar7 + 10);
            piVar6 = piVar5 + (longlong)piVar7[0xc] * 2;
            for (; piVar5 != piVar6; piVar5 = piVar5 + 2) {
              if ((*piVar5 == param_2) && (piVar5[1] == param_3)) {
                return 0;
              }
            }
            piVar5 = *(int **)(piVar7 + 0xe);
            piVar6 = piVar5 + (longlong)piVar7[0x10] * 2;
            for (; piVar5 != piVar6; piVar5 = piVar5 + 2) {
              if ((*piVar5 == param_2) && (piVar5[1] == param_3)) {
                return 0;
              }
            }
          }
          uVar9 = 1;
        }
        return uVar9;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140e74c70 thunk_FUN_1414b7270 body=5 status=ok
// SIG undefined thunk_FUN_1414b7270(void)

void thunk_FUN_1414b7270(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14689e218);
                    /* WARNING: Could not recover jumptable at 0x0001414b72a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 140e74c80 FUN_140e74c80 body=355 status=ok
// SIG undefined FUN_140e74c80(void)

void FUN_140e74c80(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  
  if (param_1[0x8c] == 0) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x459) != (char)param_1[0x8f]) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x459) == '\0') {
    return;
  }
  iVar4 = FUN_140e73e10();
  if ((*(int *)((longlong)param_1 + 0x45c) != iVar4) ||
     (lVar1 = param_1[0x8c], iVar4 = FUN_140e73e10(lVar1), *(int *)(lVar1 + 0x45c) != iVar4)) {
LAB_140e74dc4:
    FUN_140e85550(param_1);
    FUN_140e85550(param_1[0x8c]);
    return;
  }
  if (*(char *)((longlong)param_1 + 0x459) != '\x01') {
    if ((*(char *)((longlong)param_1 + 0x459) == '\x02') &&
       (cVar3 = FUN_140e71560(param_1), cVar3 != '\0')) {
      return;
    }
    goto LAB_140e74dc4;
  }
  if ((char)param_1[0x25] != '\x03') {
    return;
  }
  if ((char)param_1[0x8b] != '\x01') {
    return;
  }
  plVar2 = (longlong *)param_1[0x8c];
  if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0x8b] != '\x03')) {
    (**(code **)(*plVar2 + 0x600))(plVar2);
    *(undefined1 *)(plVar2 + 0x8b) = 3;
    if ((char)param_1[0x8b] == '\x03') goto LAB_140e74d4f;
  }
  (**(code **)(*param_1 + 0x600))(param_1);
  *(undefined1 *)(param_1 + 0x8b) = 3;
LAB_140e74d4f:
  if (param_1[0x8c] != 0) {
    FUN_140e943f0(param_1[0x8c],0);
  }
  FUN_140e943f0(param_1,0);
  if (param_1[0x8c] != 0) {
    FUN_1414b6190(param_1[0x8c],0);
  }
  FUN_1414b6190(param_1,0);
  FUN_140e83b10(param_1);
  if (param_1[0x8c] != 0) {
    FUN_140e93cd0();
  }
  FUN_140e93cd0(param_1);
  return;
}



// FUNCTION 140e74df0 FUN_140e74df0 body=1194 status=ok
// SIG undefined FUN_140e74df0(void)

void FUN_140e74df0(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong *local_res18;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 *local_70;
  undefined8 local_68;
  undefined1 local_60 [32];
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar14 = 0;
  local_res18 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  local_90 = *(int *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x1018);
  lVar11 = (longlong)local_90;
  _Src = *(void **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x1010);
  if (local_90 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_98,local_90,0);
    local_res18 = local_98;
    _guard_xfg_dispatch_icall_nop(local_98,_Src,lVar11 << 3);
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0xc98);
  }
  if (lVar14 != 0) {
    plVar1 = local_res18 + local_90;
    for (plVar12 = local_res18; plVar12 != plVar1; plVar12 = plVar12 + 1) {
      if (*plVar12 != 0) {
        puVar6 = (undefined8 *)UListView::OnItemSelectionChanged();
        puVar13 = (undefined4 *)*puVar6;
        local_70 = puVar13 + (longlong)*(int *)(puVar6 + 1) * 10;
        if (puVar13 != local_70) {
          puVar13 = puVar13 + 1;
LAB_140e74f10:
          lVar10 = 0;
          local_c8 = puVar13[-1];
          local_c4 = *puVar13;
          local_c0 = puVar13[1];
          local_68 = *(undefined8 *)(puVar13 + 3);
          local_b0 = 0;
          local_a8 = 0;
          local_b8 = 0;
          FString::FString(local_60,puVar13 + 5);
          FSoftObjectPath::operator=(&local_b8,&local_68);
          lVar7 = FWeakObjectPtr::Get(&local_c8);
          lVar11 = lVar10;
          if (lVar7 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != local_c0) && (local_a0 = 0, local_b8 != 0)) {
              lVar7 = FUN_141796df0(&local_b8);
              FWeakObjectPtr::operator=(&local_c8,lVar7);
              if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_c0 = DAT_1464b56f4;
              }
              lVar7 = FWeakObjectPtr::Get(&local_c8);
              if (lVar7 != 0) goto LAB_140e74fd9;
            }
          }
          else {
LAB_140e74fd9:
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
                lVar11 = lVar7;
                if (lVar8 == lVar9) break;
                lVar8 = *(longlong *)(lVar8 + 0x30);
                lVar11 = lVar10;
              } while (lVar8 != 0);
            }
          }
          local_78 = lVar11;
          if (lVar11 != 0) {
            lVar10 = FUN_142dfdfe0();
            lVar7 = lVar11;
            do {
              if (lVar7 == lVar10) {
                lVar10 = *(longlong *)(param_1 + 0x100);
                lVar7 = lVar10 + (longlong)*(int *)(param_1 + 0x108) * 0x48;
                lVar9 = lVar11;
                lVar8 = local_88;
                goto joined_r0x000140e7506c;
              }
              lVar7 = *(longlong *)(lVar7 + 0x30);
            } while (lVar7 != 0);
            goto LAB_140e750e8;
          }
          goto LAB_140e751d5;
        }
      }
LAB_140e75204:
      local_res18 = local_98;
    }
  }
  if (local_res18 != (longlong *)0x0) {
    FMemory::Free(local_res18);
  }
  return;
joined_r0x000140e7506c:
  local_88 = lVar9;
  if (lVar10 == lVar7) goto LAB_140e7508c;
  cVar4 = FUN_140e67c10(lVar10 + 8,&local_88);
  if (cVar4 != '\0') goto LAB_140e750e8;
  lVar10 = lVar10 + 0x48;
  lVar9 = local_88;
  lVar8 = local_88;
  goto joined_r0x000140e7506c;
LAB_140e7508c:
  local_88 = lVar8;
  lVar10 = FUN_142dfdfe0();
  lVar7 = lVar11;
  do {
    lVar8 = lVar11;
    if (lVar7 == lVar10) goto LAB_140e750b0;
    lVar7 = *(longlong *)(lVar7 + 0x30);
  } while (lVar7 != 0);
  lVar8 = 0;
LAB_140e750b0:
  cVar4 = FUN_142dd61f0(lVar14,lVar8);
  if (cVar4 == '\0') {
LAB_140e750e8:
    lVar10 = FUN_142dfdfe0();
    lVar7 = lVar11;
    do {
      if (lVar7 == lVar10) {
        lVar10 = FUN_142dfdfe0();
        lVar7 = lVar11;
        goto LAB_140e75110;
      }
      lVar7 = *(longlong *)(lVar7 + 0x30);
    } while (lVar7 != 0);
  }
  else {
    lVar10 = FUN_142dfdfe0();
    lVar7 = lVar11;
    do {
      lVar8 = lVar11;
      if (lVar7 == lVar10) break;
      lVar7 = *(longlong *)(lVar7 + 0x30);
      lVar8 = 0;
    } while (lVar7 != 0);
    FUN_142ddfad0(lVar14,lVar8);
  }
LAB_140e751d5:
  if (local_b0 != 0) {
    FMemory::Free();
  }
  puVar2 = puVar13 + 9;
  puVar13 = puVar13 + 10;
  if (puVar2 == local_70) goto LAB_140e75204;
  goto LAB_140e74f10;
  while (lVar7 = *(longlong *)(lVar7 + 0x30), lVar8 = 0, lVar7 != 0) {
LAB_140e75110:
    lVar8 = lVar11;
    if (lVar7 == lVar10) break;
  }
  cVar4 = FUN_142dd3360(lVar14,lVar8);
  if (cVar4 != '\0') {
    lVar7 = *(longlong *)(param_1 + 0x100);
    iVar5 = *(int *)(param_1 + 0x108);
    lVar9 = lVar11;
    lVar8 = local_80;
    for (lVar10 = lVar7; local_80 = lVar9, lVar10 != lVar7 + (longlong)iVar5 * 0x48;
        lVar10 = lVar10 + 0x48) {
      cVar4 = FUN_140e67c10(lVar10 + 8,&local_80);
      if (cVar4 != '\0') {
        iVar5 = (int)((lVar10 - lVar7) / 0x48);
        if ((iVar5 < 0) || (*(int *)(param_1 + 0x108) <= iVar5)) goto LAB_140e75183;
        bVar3 = true;
        goto LAB_140e75185;
      }
      lVar9 = local_80;
      lVar8 = local_80;
    }
    iVar5 = -1;
    local_80 = lVar8;
LAB_140e75183:
    bVar3 = false;
LAB_140e75185:
    if (bVar3) {
      lVar7 = *(longlong *)(param_1 + 0x100) + (longlong)iVar5 * 0x48;
      iVar5 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                        (lVar7 + 0x18,&local_78);
      if (iVar5 == -1) {
        iVar5 = *(int *)(lVar7 + 0x20);
        *(int *)(lVar7 + 0x20) = iVar5 + 1;
        if (*(int *)(lVar7 + 0x24) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 0x18,iVar5);
        }
        *(longlong *)(*(longlong *)(lVar7 + 0x18) + (longlong)iVar5 * 8) = lVar11;
      }
    }
  }
  goto LAB_140e751d5;
}



// FUNCTION 140e752a0 FUN_140e752a0 body=1093 status=ok
// SIG undefined FUN_140e752a0(void)

void FUN_140e752a0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 *puVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  longlong *local_res18;
  longlong *local_98;
  int local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  local_res18 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  local_90 = *(int *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x1018);
  lVar15 = (longlong)local_90;
  _Src = *(void **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x1010);
  if (local_90 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_98,local_90,0);
    local_res18 = local_98;
    _guard_xfg_dispatch_icall_nop(local_98,_Src,lVar15 << 3);
  }
  if (*(longlong *)(param_1 + 0x110) == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0xc98);
  }
  if (lVar15 != 0) {
    plVar12 = local_res18 + local_90;
    for (plVar17 = local_res18; plVar17 != plVar12; plVar17 = plVar17 + 1) {
      if (*plVar17 != 0) {
        puVar6 = (undefined8 *)UListView::OnItemSelectionChanged();
        puVar3 = (undefined4 *)*puVar6;
        iVar2 = *(int *)(puVar6 + 1);
        if (puVar3 != puVar3 + (longlong)iVar2 * 10) {
          plVar16 = (longlong *)0x0;
          puVar18 = puVar3 + 1;
LAB_140e753c0:
          local_70 = puVar18[-1];
          local_6c = *puVar18;
          local_68 = puVar18[1];
          local_88 = *(undefined8 *)(puVar18 + 3);
          local_58 = 0;
          local_50 = 0;
          local_60 = 0;
          FString::FString(local_80,puVar18 + 5);
          FSoftObjectPath::operator=(&local_60,&local_88);
          plVar7 = (longlong *)FWeakObjectPtr::Get(&local_70);
          if (plVar7 == (longlong *)0x0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != local_68) && (local_60 != 0)) {
              lVar8 = FUN_141796df0(&local_60);
              FWeakObjectPtr::operator=(&local_70,lVar8);
              if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_68 = DAT_1464b56f4;
              }
              plVar7 = (longlong *)FWeakObjectPtr::Get(&local_70);
              if (plVar7 != (longlong *)0x0) goto LAB_140e7547f;
            }
          }
          else {
LAB_140e7547f:
            lVar8 = FUN_14171bfe0();
            if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              plVar9 = (longlong *)FUN_142dfdfe0();
              plVar13 = plVar7;
              do {
                if (plVar13 == plVar9) {
                  plVar9 = (longlong *)FUN_142dfdfe0();
                  plVar13 = plVar7;
                  goto LAB_140e754e0;
                }
                plVar13 = (longlong *)plVar13[6];
              } while (plVar13 != (longlong *)0x0);
            }
          }
          goto LAB_140e75661;
        }
      }
LAB_140e75688:
      local_res18 = local_98;
    }
  }
  if (local_res18 != (longlong *)0x0) {
    FMemory::Free(local_res18);
  }
  return;
  while (plVar13 = (longlong *)plVar13[6], plVar13 != (longlong *)0x0) {
LAB_140e754e0:
    if (plVar13 == plVar9) {
      plVar9 = (longlong *)FUN_142dfdfe0();
      plVar13 = plVar7;
      goto LAB_140e75500;
    }
  }
  goto LAB_140e75661;
  while (plVar13 = (longlong *)plVar13[6], plVar14 = plVar16, plVar13 != (longlong *)0x0) {
LAB_140e75500:
    plVar14 = plVar7;
    if (plVar13 == plVar9) break;
  }
  cVar5 = FUN_142dd61f0(lVar15,plVar14);
  if (cVar5 != '\0') {
    plVar9 = (longlong *)FUN_142dfdfe0();
    plVar13 = plVar7;
    do {
      plVar14 = plVar7;
      if (plVar13 == plVar9) break;
      plVar13 = (longlong *)plVar13[6];
      plVar14 = plVar16;
    } while (plVar13 != (longlong *)0x0);
    lVar8 = plVar14[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar14 + 0x368))(plVar14);
      lVar8 = plVar14[0x1f];
    }
    lVar10 = FWeakObjectPtr::Get(&local_70);
    if (lVar10 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 == local_68) || (local_60 == 0)) goto LAB_140e75661;
      lVar10 = FUN_141796df0(&local_60);
      FWeakObjectPtr::operator=(&local_70,lVar10);
      if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_68 = DAT_1464b56f4;
      }
      lVar10 = FWeakObjectPtr::Get(&local_70);
      if (lVar10 == 0) goto LAB_140e75661;
    }
    lVar11 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar11 = FUN_142dfdfe0();
      do {
        if (lVar10 == lVar11) {
          if (*(char *)(lVar8 + 0x25c) == '\0') {
            plVar9 = (longlong *)FUN_142dfdfe0();
            plVar13 = plVar7;
            goto LAB_140e75641;
          }
          break;
        }
        lVar10 = *(longlong *)(lVar10 + 0x30);
      } while (lVar10 != 0);
    }
  }
  goto LAB_140e75661;
  while (plVar13 = (longlong *)plVar13[6], plVar14 = plVar16, plVar13 != (longlong *)0x0) {
LAB_140e75641:
    plVar14 = plVar7;
    if (plVar13 == plVar9) break;
  }
  FUN_142ddfad0(lVar15,plVar14);
LAB_140e75661:
  if (local_58 != 0) {
    FMemory::Free();
  }
  puVar1 = puVar18 + 9;
  puVar18 = puVar18 + 10;
  if (puVar1 == puVar3 + (longlong)iVar2 * 10) goto LAB_140e75688;
  goto LAB_140e753c0;
}



// FUNCTION 140e756f0 FUN_140e756f0 body=1074 status=ok
// SIG undefined FUN_140e756f0(void)

void FUN_140e756f0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 *puVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  undefined8 *local_res10;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  local_res10 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  local_90 = *(int *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x1018);
  lVar15 = (longlong)local_90;
  _Src = *(void **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x1010);
  if (local_90 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_98,local_90,0);
    local_res10 = local_98;
    _guard_xfg_dispatch_icall_nop(local_98,_Src,lVar15 << 3);
  }
  if (*(longlong *)(param_1 + 0x110) == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0xc98);
  }
  if (lVar15 != 0) {
    puVar6 = local_res10 + local_90;
    for (puVar17 = local_res10; puVar17 != puVar6; puVar17 = puVar17 + 1) {
      puVar7 = (undefined8 *)UListView::OnItemSelectionChanged(*puVar17);
      puVar3 = (undefined4 *)*puVar7;
      iVar2 = *(int *)(puVar7 + 1);
      if (puVar3 != puVar3 + (longlong)iVar2 * 10) {
        plVar16 = (longlong *)0x0;
        puVar18 = puVar3 + 1;
LAB_140e75800:
        local_70 = puVar18[-1];
        local_6c = *puVar18;
        local_68 = puVar18[1];
        local_88 = *(undefined8 *)(puVar18 + 3);
        local_58 = 0;
        local_50 = 0;
        local_60 = 0;
        FString::FString(local_80,puVar18 + 5);
        FSoftObjectPath::operator=(&local_60,&local_88);
        plVar8 = (longlong *)FWeakObjectPtr::Get(&local_70);
        if (plVar8 == (longlong *)0x0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != local_68) && (local_60 != 0)) {
            lVar9 = FUN_141796df0(&local_60);
            FWeakObjectPtr::operator=(&local_70,lVar9);
            if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              local_68 = DAT_1464b56f4;
            }
            plVar8 = (longlong *)FWeakObjectPtr::Get(&local_70);
            if (plVar8 != (longlong *)0x0) goto LAB_140e758bf;
          }
        }
        else {
LAB_140e758bf:
          lVar9 = FUN_14171bfe0();
          if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
              != lVar9 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            plVar10 = (longlong *)FUN_142dfdfe0();
            plVar13 = plVar8;
            do {
              if (plVar13 == plVar10) {
                plVar10 = (longlong *)FUN_142dfdfe0();
                plVar13 = plVar8;
                goto LAB_140e75920;
              }
              plVar13 = (longlong *)plVar13[6];
            } while (plVar13 != (longlong *)0x0);
          }
        }
        goto LAB_140e75aa1;
      }
LAB_140e75ac4:
      local_res10 = local_98;
    }
  }
  if (local_res10 != (undefined8 *)0x0) {
    FMemory::Free(local_res10);
  }
  return;
  while (plVar13 = (longlong *)plVar13[6], plVar13 != (longlong *)0x0) {
LAB_140e75920:
    if (plVar13 == plVar10) {
      plVar10 = (longlong *)FUN_142dfdfe0();
      plVar13 = plVar8;
      goto LAB_140e75940;
    }
  }
  goto LAB_140e75aa1;
  while (plVar13 = (longlong *)plVar13[6], plVar14 = plVar16, plVar13 != (longlong *)0x0) {
LAB_140e75940:
    plVar14 = plVar8;
    if (plVar13 == plVar10) break;
  }
  cVar5 = FUN_142dd61f0(lVar15,plVar14);
  if (cVar5 != '\0') {
    plVar10 = (longlong *)FUN_142dfdfe0();
    plVar13 = plVar8;
    do {
      plVar14 = plVar8;
      if (plVar13 == plVar10) break;
      plVar13 = (longlong *)plVar13[6];
      plVar14 = plVar16;
    } while (plVar13 != (longlong *)0x0);
    lVar9 = plVar14[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar14 + 0x368))(plVar14);
      lVar9 = plVar14[0x1f];
    }
    lVar11 = FWeakObjectPtr::Get(&local_70);
    if (lVar11 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 == local_68) || (local_60 == 0)) goto LAB_140e75aa1;
      lVar11 = FUN_141796df0(&local_60);
      FWeakObjectPtr::operator=(&local_70,lVar11);
      if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_68 = DAT_1464b56f4;
      }
      lVar11 = FWeakObjectPtr::Get(&local_70);
      if (lVar11 == 0) goto LAB_140e75aa1;
    }
    lVar12 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar12 = FUN_142dfdfe0();
      do {
        if (lVar11 == lVar12) {
          if (*(char *)(lVar9 + 0x25c) != '\0') {
            plVar10 = (longlong *)FUN_142dfdfe0();
            plVar13 = plVar8;
            goto LAB_140e75a81;
          }
          break;
        }
        lVar11 = *(longlong *)(lVar11 + 0x30);
      } while (lVar11 != 0);
    }
  }
  goto LAB_140e75aa1;
  while (plVar13 = (longlong *)plVar13[6], plVar14 = plVar16, plVar13 != (longlong *)0x0) {
LAB_140e75a81:
    plVar14 = plVar8;
    if (plVar13 == plVar10) break;
  }
  FUN_142ddfad0(lVar15,plVar14);
LAB_140e75aa1:
  if (local_58 != 0) {
    FMemory::Free();
  }
  puVar1 = puVar18 + 9;
  puVar18 = puVar18 + 10;
  if (puVar1 == puVar3 + (longlong)iVar2 * 10) goto LAB_140e75ac4;
  goto LAB_140e75800;
}



// FUNCTION 140e75b30 FUN_140e75b30 body=80 status=ok
// SIG undefined FUN_140e75b30(void)

void FUN_140e75b30(longlong *param_1,byte param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((int)(uint)param_2 < (int)param_1[1]) {
    pbVar1 = (byte *)((ulonglong)param_2 * 0xf8 + 0x38 + *param_1);
    *pbVar1 = *pbVar1 & 0xf7;
    lVar3 = *param_1 + (ulonglong)param_2 * 0xf8;
    uVar2 = AActor::GetWorldTimerManager(param_1[2]);
    FUN_142880530(uVar2,lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140e75b80 FUN_140e75b80 body=271 status=ok
// SIG undefined FUN_140e75b80(void)

void FUN_140e75b80(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = *(int **)(param_1 + 0xb0);
  piVar6 = piVar7 + (longlong)*(int *)(param_1 + 0xb8) * 0x10;
  if (piVar7 != piVar6) {
    do {
      lVar1 = *(longlong *)(piVar7 + 4);
      if (lVar1 != 0) {
        if (param_2 != '\0') {
          uVar2 = *(uint *)(lVar1 + 0xc);
          lVar4 = 0;
          if ((int)uVar2 < (int)DAT_1469e91c4) {
            uVar5 = uVar2 & 0xffff;
            if ((int)uVar2 < 0) {
              uVar2 = uVar2 + 0xffff;
              uVar5 = uVar5 - 0x10000;
            }
            lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                    (longlong)(int)uVar5 * 0x18;
          }
          if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
            FUN_142227350(lVar1,0,1);
          }
        }
        piVar7[4] = 0;
        piVar7[5] = 0;
      }
      if (*piVar7 == -1) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        *piVar7 = *(int *)(param_1 + 0x50);
        iVar3 = *(int *)(param_1 + 0x50);
        if (iVar3 == -1) {
          iVar3 = 0;
        }
        *(int *)(param_1 + 0x50) = iVar3;
      }
      piVar7[1] = piVar7[1] + 1;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                (param_1);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      if (*(int *)(param_1 + 0x54) == -1) {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      piVar7 = piVar7 + 0x10;
      *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
    } while (piVar7 != piVar6);
  }
  return;
}



// FUNCTION 140e75c90 FUN_140e75c90 body=38 status=ok
// SIG undefined FUN_140e75c90(void)

void FUN_140e75c90(longlong *param_1,byte param_2)

{
  if ((int)(uint)param_2 < (int)param_1[1]) {
    *(undefined8 *)((ulonglong)param_2 * 0xf8 + 0x10 + *param_1) = 0;
    *(undefined8 *)((ulonglong)param_2 * 0xf8 + 0x18 + *param_1) = 0;
  }
  return;
}



// FUNCTION 140e75cc0 FUN_140e75cc0 body=75 status=ok
// SIG undefined FUN_140e75cc0(void)

void FUN_140e75cc0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  if (*(longlong *)(lVar1 + 400) == 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
  }
  FUN_1428800b0(uVar2,param_1);
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  return;
}



// FUNCTION 140e75d10 FUN_140e75d10 body=47 status=ok
// SIG undefined FUN_140e75d10(void)

void FUN_140e75d10(longlong *param_1,byte param_2)

{
  byte *pbVar1;
  
  if ((int)(uint)param_2 < (int)param_1[1]) {
    pbVar1 = (byte *)((ulonglong)param_2 * 0xf8 + 0x38 + *param_1);
    *pbVar1 = *pbVar1 & 0xfd;
    *(undefined8 *)((ulonglong)param_2 * 0xf8 + 0x30 + *param_1) = 0;
  }
  return;
}



// FUNCTION 140e75d40 FUN_140e75d40 body=209 status=ok
// SIG undefined FUN_140e75d40(void)

void FUN_140e75d40(longlong *param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *param_1;
  lVar6 = (longlong)(int)param_1[1] * 0xf8 + lVar5;
  if (lVar5 != lVar6) {
    do {
      lVar1 = *(longlong *)(lVar5 + 8);
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      if (lVar1 != 0) {
        if (param_2 != '\0') {
          uVar2 = *(uint *)(lVar1 + 0xc);
          lVar3 = 0;
          if ((int)uVar2 < (int)DAT_1469e91c4) {
            uVar4 = uVar2 & 0xffff;
            if ((int)uVar2 < 0) {
              uVar2 = uVar2 + 0xffff;
              uVar4 = uVar4 - 0x10000;
            }
            lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                    (longlong)(int)uVar4 * 0x18;
          }
          if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
            FUN_142227350(lVar1,0,1);
          }
        }
        *(undefined8 *)(lVar5 + 8) = 0;
      }
      lVar5 = lVar5 + 0xf8;
    } while (lVar5 != lVar6);
  }
  return;
}



// FUNCTION 140e75e20 FUN_140e75e20 body=164 status=ok
// SIG undefined FUN_140e75e20(void)

void FUN_140e75e20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0xe0);
  cVar2 = FUN_140e96340(puVar1);
  if ((cVar2 != '\0') && (param_2 != (longlong *)0x0)) {
    uVar4 = FUN_14301f8f0();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x1e0) == *(int *)(param_1 + 0xe8))) {
      iVar3 = _guard_xfg_dispatch_icall_nop
                        (*(void **)(lVar5 + 0x1d8),(void *)*puVar1,(longlong)*(int *)(lVar5 + 0x1e0)
                        );
      if (iVar3 == 0) {
        FUN_140e96380(param_1,*(undefined4 *)(param_1 + 0xf0),param_2);
        *(undefined4 *)(param_1 + 0xf0) = 0;
        *(undefined4 *)(param_1 + 0xe8) = 0;
        if (*(int *)(param_1 + 0xec) != 0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e75ed0 FUN_140e75ed0 body=802 status=ok
// SIG undefined FUN_140e75ed0(void)

undefined8 FUN_140e75ed0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_78;
  longlong local_70 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  longlong local_48;
  char local_38;
  
  uVar9 = 0;
  local_b0 = (undefined4)*param_2;
  uStack_ac = (undefined4)((ulonglong)*param_2 >> 0x20);
  FString::FString(&local_a8,param_2 + 1);
  local_78 = CONCAT44(uStack_ac,local_b0);
  local_88 = 0xffffffff;
  local_84 = 0;
  FString::FString(local_70,&local_a8);
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FMemory::Free();
  }
  local_c0 = 0;
  local_c8 = 0;
  local_d8 = local_88;
  local_d4 = local_84;
  local_b0 = (undefined4)local_78;
  uStack_ac = (undefined4)((ulonglong)local_78 >> 0x20);
  local_b8 = 0;
  FString::FString(&local_a8,local_70);
  FSoftObjectPath::operator=(&local_c8,&local_b0);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_60,&local_d8);
  local_38 = '\x01';
  if (local_c0 != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)(param_1 + 0x1a8);
  iVar4 = FUN_140e68240(plVar1,local_60);
  if (iVar4 == -1) {
    iVar4 = *(int *)(param_1 + 0x1b0);
    uVar9 = 1;
    lVar8 = *plVar1;
    for (lVar7 = lVar8; lVar7 != (longlong)iVar4 * 0x30 + lVar8; lVar7 = lVar7 + 0x30) {
      cVar3 = FSoftObjectPath::operator==(lVar7 + 0x10,local_50);
      if ((cVar3 == '\0') || (*(char *)(lVar7 + 0x28) != local_38)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((int)((lVar7 - lVar8) / 0x30) != -1) goto LAB_140e7607c;
        break;
      }
    }
    iVar4 = *(int *)(param_1 + 0x1b0);
    *(int *)(param_1 + 0x1b0) = iVar4 + 1;
    if (*(int *)(param_1 + 0x1b4) < iVar4 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
    }
    lVar8 = (longlong)iVar4 * 0x30 + *plVar1;
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar8,local_60);
    *(char *)(lVar8 + 0x28) = local_38;
LAB_140e7607c:
    lVar8 = *(longlong *)(param_1 + 0x118);
    if (lVar8 == 0) goto LAB_140e76191;
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e76191;
    local_d8 = 0xffffffff;
    local_c0 = 0;
    local_b8 = 0;
    local_d4 = 0;
    local_c8 = 0;
    puVar5 = (undefined4 *)TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(&local_b0,&local_88);
    puVar6 = &local_d8;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x118);
    if (lVar8 == 0) goto LAB_140e76191;
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e76191;
    local_c8 = 0;
    puVar5 = &local_d8;
    local_a0 = 0;
    puVar6 = &local_b0;
    local_c0 = 0;
    local_b8 = 0;
    local_d8 = 0xffffffff;
    local_d4 = 0;
    local_98 = 0;
    local_90 = 0;
    local_b0 = 0xffffffff;
    uStack_ac = 0;
    local_a8 = 0;
  }
  FUN_140d03bf0(lVar8,puVar6,puVar5);
LAB_140e76191:
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  if (param_2[1] != 0) {
    FMemory::Free();
  }
  return uVar9;
}



// FUNCTION 140e76200 FUN_140e76200 body=745 status=ok
// SIG undefined FUN_140e76200(void)

void FUN_140e76200(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  ulonglong local_res8;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48 [4];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if ((*(longlong *)(param_1 + 0x110) != 0) &&
     (puVar5 = (undefined4 *)FUN_140e82830(), puVar5 != (undefined4 *)0x0)) {
    uVar2 = FUN_140e85eb0(param_1,param_3,param_2);
    local_res8 = CONCAT44(local_res8._4_4_,param_3);
    lVar6 = FUN_140e515c0(*puVar5,param_3);
    if (lVar6 != 0) {
      piVar9 = *(int **)(puVar5 + 0x12);
      iVar11 = puVar5[0x14];
      lVar6 = (longlong)iVar11 * 8;
      piVar1 = piVar9 + (longlong)iVar11 * 2;
      for (; piVar9 != piVar1; piVar9 = piVar9 + 2) {
        if (*piVar9 == (int)local_res8) {
          iVar11 = -1;
          if (piVar9[1] + 1 != -1) {
            iVar11 = piVar9[1] + 1;
          }
          piVar9[1] = iVar11;
          goto LAB_140e762f3;
        }
      }
      puVar5[0x14] = iVar11 + 1;
      if ((int)puVar5[0x15] < iVar11 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar5 + 0x12,iVar11);
      }
      lVar10 = *(longlong *)(puVar5 + 0x12);
      *(int *)(lVar10 + lVar6) = (int)local_res8;
      *(undefined4 *)(lVar10 + 4 + lVar6) = 0;
LAB_140e762f3:
      lVar6 = FUN_140e822f0(param_1,param_2);
      if (lVar6 != 0) {
        iVar4 = FUN_140e51650(lVar6,param_3);
        FUN_140aa27c0(*(longlong *)(param_1 + 0x110) + 0x1a68,*(undefined8 *)(lVar6 + 0x68),-iVar4);
        puVar5[8] = puVar5[8] - iVar4;
        iVar11 = -1;
        if (puVar5[7] + iVar4 != -1) {
          iVar11 = puVar5[7] + iVar4;
        }
        puVar5[7] = iVar11;
        lVar6 = FUN_140e515c0(param_2);
        if (lVar6 != 0) {
          bVar12 = *(longlong *)(lVar6 + 0x48) == 0;
          if (bVar12) {
            local_58 = 0;
            plVar8 = local_48;
            local_48[1] = 0;
          }
          else {
            local_res8 = *(ulonglong *)(*(longlong *)(lVar6 + 0x48) + 0x18);
            FName::ToString(&local_res8);
            plVar8 = local_48 + 2;
            local_58 = local_48[2];
          }
          *plVar8 = 0;
          local_50 = (undefined4)plVar8[1];
          local_4c = *(undefined4 *)((longlong)plVar8 + 0xc);
          plVar8[1] = 0;
          if ((bVar12) && (local_48[0] != 0)) {
            FMemory::Free();
          }
          if ((!bVar12) && (local_48[2] != 0)) {
            FMemory::Free();
          }
          uVar7 = FTextInspector::GetSourceString(lVar6);
          FUN_140e797e0(param_1,param_2,uVar7,&local_58,iVar4,param_3,0xffffffff,uVar2);
          if (local_58 != 0) {
            FMemory::Free();
          }
        }
      }
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      bVar12 = false;
      iVar11 = *(int *)(param_1 + 0x44);
      iVar4 = *(int *)(param_1 + 0x38) + -1;
      lVar6 = (longlong)iVar4;
      if (-1 < iVar4) {
        lVar10 = lVar6 << 4;
        bVar12 = false;
        do {
          if (((*(int *)(lVar10 + 8 + *(longlong *)(param_1 + 0x30)) == 0) ||
              (plVar8 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x30)),
              plVar8 == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(*plVar8 + 0x40))(plVar8,param_2,param_3), cVar3 == '\0')) {
            bVar12 = true;
          }
          lVar10 = lVar10 + -0x10;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
        iVar11 = *(int *)(param_1 + 0x44);
      }
      *(int *)(param_1 + 0x44) = iVar11 + -1;
      if (bVar12) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x30,0);
      }
      Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit
                (*(undefined8 *)(param_1 + 0x110));
    }
  }
  return;
}



// FUNCTION 140e764f0 FUN_140e764f0 body=103 status=ok
// SIG undefined FUN_140e764f0(void)

void FUN_140e764f0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
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
    if (bVar2) {
      FUN_140d15eb0(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 140e76570 FUN_140e76570 body=793 status=ok
// SIG undefined FUN_140e76570(void)

void FUN_140e76570(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [8];
  longlong local_78;
  char local_68;
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  
  FUN_1410c9b90();
  plVar2 = local_60 + local_58;
  plVar7 = local_60;
  do {
    if (plVar7 == plVar2) {
      if (local_60 != (longlong *)0x0) {
        FMemory::Free(local_60);
      }
      return;
    }
    lVar6 = *plVar7;
    if (lVar6 != 0) {
      local_a0 = 0;
      local_98 = 0;
      if (*(longlong *)(lVar6 + 0x50) == 0) {
        local_a8 = 0;
        local_b8 = *(undefined4 *)(lVar6 + 0x90);
        local_b4 = *(undefined8 *)(lVar6 + 0x94);
        local_50 = *(undefined8 *)(lVar6 + 0xa0);
        FString::FString(local_48,lVar6 + 0xa8);
        FSoftObjectPath::operator=(&local_a8,&local_50);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_90,&local_b8);
        local_68 = '\0';
        if (local_a0 != 0) {
          FMemory::Free();
        }
        plVar1 = (longlong *)(param_1 + 0x1a8);
        lVar6 = *plVar1;
        iVar3 = *(int *)(param_1 + 0x1b0);
        for (lVar5 = lVar6; lVar5 != (longlong)iVar3 * 0x30 + lVar6; lVar5 = lVar5 + 0x30) {
          cVar4 = FSoftObjectPath::operator==(lVar5 + 0x10,local_80);
          if ((cVar4 != '\0') && (*(char *)(lVar5 + 0x28) == local_68)) {
            if ((int)((lVar5 - lVar6) / 0x30) != -1) goto LAB_140e76820;
            break;
          }
        }
        iVar3 = *(int *)(param_1 + 0x1b0);
        *(int *)(param_1 + 0x1b0) = iVar3 + 1;
        if (*(int *)(param_1 + 0x1b4) < iVar3 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        lVar6 = (longlong)iVar3 * 0x30 + *plVar1;
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar6,local_90);
      }
      else {
        local_a8 = 0;
        local_b8 = *(undefined4 *)(lVar6 + 0x40);
        local_b4 = *(undefined8 *)(lVar6 + 0x44);
        local_50 = *(undefined8 *)(lVar6 + 0x50);
        FString::FString(local_48,lVar6 + 0x58);
        FSoftObjectPath::operator=(&local_a8,&local_50);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_90,&local_b8);
        local_68 = '\x01';
        if (local_a0 != 0) {
          FMemory::Free();
        }
        plVar1 = (longlong *)(param_1 + 0x188);
        lVar6 = *plVar1;
        iVar3 = *(int *)(param_1 + 400);
        for (lVar5 = lVar6; lVar5 != (longlong)iVar3 * 0x30 + lVar6; lVar5 = lVar5 + 0x30) {
          cVar4 = FSoftObjectPath::operator==(lVar5 + 0x10,local_80);
          if ((cVar4 != '\0') && (*(char *)(lVar5 + 0x28) == local_68)) {
            if ((int)((lVar5 - lVar6) / 0x30) != -1) goto LAB_140e76820;
            break;
          }
        }
        iVar3 = *(int *)(param_1 + 400);
        *(int *)(param_1 + 400) = iVar3 + 1;
        if (*(int *)(param_1 + 0x194) < iVar3 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        lVar6 = (longlong)iVar3 * 0x30 + *plVar1;
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar6,local_90);
      }
      *(char *)(lVar6 + 0x28) = local_68;
LAB_140e76820:
      if (local_78 != 0) {
        FMemory::Free();
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 140e76890 FUN_140e76890 body=1189 status=ok
// SIG undefined FUN_140e76890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e76890(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined4 local_118 [2];
  undefined4 local_110 [2];
  undefined4 local_108 [2];
  undefined4 local_100 [2];
  undefined4 local_f8 [4];
  longlong local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  longlong local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong local_b0 [2];
  longlong *local_a0;
  undefined8 local_98 [4];
  undefined8 local_78 [4];
  undefined8 local_58 [4];
  undefined1 local_38 [32];
  
  if ((*(longlong *)(param_1 + 0x110) != 0) && (param_3 != 0)) {
    lVar5 = FUN_140e82830();
    if (lVar5 != 0) {
      iVar4 = *(int *)(lVar5 + 0x14);
      if (iVar4 + -1 < iVar4) {
        iVar4 = iVar4 + -1;
      }
      *(int *)(lVar5 + 0x14) = iVar4;
      iVar9 = *(int *)(lVar5 + 0x18) + 1;
      iVar4 = -1;
      if (iVar9 != -1) {
        iVar4 = iVar9;
      }
      *(int *)(lVar5 + 0x18) = iVar4;
      Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit
                (*(undefined8 *)(param_1 + 0x110));
      FUN_140e72580(param_1 + 0x90,param_2,param_3,param_4);
      local_b8 = *(undefined8 *)(param_3 + 0x18);
      FName::ToString(&local_b8,local_b0);
      local_res8[0] = 0;
      local_100[0] = 0xffffffff;
      local_108[0] = 0xffffffff;
      local_110[0] = 1;
      local_f8[0] = param_4;
      uVar6 = FTextInspector::GetSourceString(param_3 + 0x40);
      local_d8 = DAT_146871010;
      local_118[0] = param_2;
      if (DAT_146871118 == '\0') {
        puVar7 = (undefined8 *)FUN_140e7e2d0();
        if (puVar7 != &DAT_1468710c0) {
          DAT_1468710c0 = *puVar7;
          _DAT_1468710c8 = puVar7[1];
          _DAT_1468710d0 = puVar7[2];
          DAT_1468710d8 = (longlong *)puVar7[3];
          _DAT_1468710e0 = puVar7[4];
          _DAT_1468710e8 = puVar7[5];
          _DAT_1468710f0 = puVar7[6];
          _DAT_1468710f8 = puVar7[7];
          _DAT_146871100 = puVar7[8];
          _DAT_146871108 = puVar7[9];
          _DAT_146871110 = puVar7[10];
          DAT_146871118 = '\x01';
        }
      }
      cVar3 = FUN_142190080(DAT_1468710c0);
      if (cVar3 != '\0') {
        cVar3 = FUN_142194620(DAT_1468710c0);
        if (cVar3 != '\0') {
          FUN_142190c10(&local_c8,DAT_1468710c0);
          lVar5 = *(longlong *)(local_c8 + 0xc0);
          if (*(longlong *)(local_c8 + 0xc0) == 0) {
            lVar5 = local_c8 + 0x20;
          }
          plVar8 = (longlong *)FUN_140aa2bd0(lVar5);
          FUN_14217e740(local_78);
          FUN_142194380(local_78,0x28,0,0,0);
          local_78[0] = *(undefined8 *)(param_1 + 0x110);
          FUN_1421923f0(local_38,DAT_146870fd0,local_78);
          FUN_140bfb300(plVar8,&DAT_1468710c8,local_38);
          FUN_14217f430(local_38);
          FUN_14217f430(local_78);
          FUN_140bfadf0(plVar8,&DAT_1468710d0,local_118);
          local_e8 = 0;
          if (*DAT_1468710d8 != 0) {
            cVar3 = FUN_1407ce010(DAT_1468710d8 + 1);
            if (cVar3 != '\0') {
              plVar10 = (longlong *)*plVar8;
              plVar2 = plVar10 + (longlong)(int)plVar8[1] * 5;
              if (plVar10 != plVar2) {
                do {
                  if ((*(longlong *)*plVar10 == *DAT_1468710d8) &&
                     (*(longlong *)(((longlong *)*plVar10)[1] + 0x28) ==
                      *(longlong *)(DAT_1468710d8[1] + 0x28))) {
                    FUN_14217e740(local_58);
                    FUN_142194380(local_58,0x13,0,0,0);
                    local_58[0] = local_d8;
                    FUN_14217f450(plVar10 + 1,local_58);
                    puVar7 = local_58;
                    goto LAB_140e76b97;
                  }
                  plVar10 = plVar10 + 5;
                } while (plVar10 != plVar2);
              }
              local_a0 = DAT_1468710d8;
              FUN_14217e740(local_98);
              FUN_142194380(local_98,0x13,0,0,0);
              iVar4 = (int)plVar8[1];
              local_98[0] = local_d8;
              *(int *)(plVar8 + 1) = iVar4 + 1;
              if (*(int *)((longlong)plVar8 + 0xc) < iVar4 + 1) {
                TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar4);
              }
              puVar7 = (undefined8 *)(*plVar8 + (longlong)iVar4 * 0x28);
              *puVar7 = local_a0;
              FUN_14217e5b0(puVar7 + 1,local_98);
              puVar7 = local_98;
LAB_140e76b97:
              FUN_14217f430(puVar7);
            }
          }
          FUN_140bfb1d0(plVar8,&DAT_1468710e0,uVar6);
          FUN_140bfb1d0(plVar8,&DAT_1468710e8,local_b0);
          FUN_140bfa9d0(plVar8,&DAT_1468710f0,local_110);
          FUN_140bfa9d0(plVar8,&DAT_1468710f8,local_108);
          FUN_140bfa9d0(plVar8,&DAT_146871100,local_100);
          FUN_140bfac90(plVar8,&DAT_146871108,local_res8);
          FUN_140bfa9d0(plVar8,&DAT_146871110,local_f8);
          cVar3 = FUN_14218a740(&local_c8,1);
          if (cVar3 != '\0') {
            local_e8 = local_c8;
            plStack_e0 = plStack_c0;
            if (plStack_c0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_e8);
            plVar8 = plStack_e0;
            if (plStack_e0 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_e0 + 1;
              lVar5 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plStack_e0)(plStack_e0);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
            }
          }
          if (plStack_c0 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_c0 + 1;
            lVar5 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_c0)(plStack_c0);
              LOCK();
              piVar1 = (int *)((longlong)plStack_c0 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
              }
            }
          }
        }
      }
      if (local_b0[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140e76d40 FUN_140e76d40 body=77 status=ok
// SIG undefined FUN_140e76d40(void)

void FUN_140e76d40(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    if (param_3 != 0) {
      FUN_140e96380();
      return;
    }
    TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_1 + 0xe0,param_4);
    *(undefined4 *)(param_1 + 0xf0) = param_2;
  }
  return;
}



// FUNCTION 140e76da0 FUN_140e76da0 body=165 status=ok
// SIG undefined FUN_140e76da0(void)

void FUN_140e76da0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if ((param_4 != 0) && (param_3 != 0)) {
    *(undefined1 *)(param_4 + 0x8f2) = 1;
  }
  plVar2 = (longlong *)0x0;
  if (param_2 != 0) {
    uVar1 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
  }
  *(longlong *)(param_1 + 0x2a8) = param_4;
  if (param_2 == 0) {
    plVar2 = (longlong *)0x0;
  }
  if ((plVar2 != (longlong *)0x0) && (param_4 != 0)) {
    (**(code **)(*plVar2 + 0x48))(plVar2,param_3,param_4);
  }
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x178,param_4);
  return;
}



// FUNCTION 140e76e50 FUN_140e76e50 body=653 status=ok
// SIG undefined FUN_140e76e50(void)

void FUN_140e76e50(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60 [2];
  undefined1 local_50 [24];
  longlong local_38;
  undefined1 local_28;
  
  local_a0 = (undefined4)*param_2;
  uStack_9c = (undefined4)((ulonglong)*param_2 >> 0x20);
  FString::FString(&local_98,param_2 + 1);
  local_68 = CONCAT44(uStack_9c,local_a0);
  local_78 = 0xffffffff;
  local_74 = 0;
  FString::FString(local_60,&local_98);
  if (CONCAT44(uStack_94,local_98) != 0) {
    FMemory::Free();
  }
  local_b0 = 0;
  local_b8 = 0;
  local_c8 = local_78;
  local_c4 = local_74;
  local_a0 = (undefined4)local_68;
  uStack_9c = (undefined4)((ulonglong)local_68 >> 0x20);
  local_a8 = 0;
  FString::FString(&local_98,local_60);
  FSoftObjectPath::operator=(&local_b8,&local_a0);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_50,&local_c8);
  local_28 = 1;
  if (local_b0 != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)(param_1 + 0x188);
  iVar3 = FUN_140e68240(plVar1,local_50);
  if (iVar3 == -1) {
    iVar3 = *(int *)(param_1 + 400);
    *(int *)(param_1 + 400) = iVar3 + 1;
    if (*(int *)(param_1 + 0x194) < iVar3 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    lVar6 = (longlong)iVar3 * 0x30 + *plVar1;
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar6,local_50);
    *(undefined1 *)(lVar6 + 0x28) = local_28;
    lVar6 = *(longlong *)(param_1 + 0x118);
    if (lVar6 == 0) goto LAB_140e7708b;
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e7708b;
    local_b0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    puVar5 = (undefined4 *)TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(&local_a0,&local_78);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x118);
    if (lVar6 == 0) goto LAB_140e7708b;
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e7708b;
    local_b8 = 0;
    puVar5 = &local_a0;
    local_90 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_88 = 0;
    local_80 = 0;
    local_a0 = 0xffffffff;
    uStack_9c = 0;
    local_98 = 0;
  }
  FUN_140d03bf0(lVar6,puVar5,&local_c8);
LAB_140e7708b:
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  if (param_2[1] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e770e0 FUN_140e770e0 body=23 status=ok
// SIG undefined FUN_140e770e0(void)

void FUN_140e770e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x31c);
  *(undefined4 *)(param_1 + 0x31c) = 0;
  return;
}



// FUNCTION 140e77100 FUN_140e77100 body=6 status=ok
// SIG undefined FUN_140e77100(void)

bool FUN_140e77100(undefined8 param_1,char param_2)

{
  return param_2 != '\0';
}



// FUNCTION 140e77110 FUN_140e77110 body=42 status=ok
// SIG undefined FUN_140e77110(void)

float FUN_140e77110(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x300) != 0) {
    return *(float *)(*(longlong *)(param_1 + 0x2f8) + 0x1700) /
           *(float *)(*(longlong *)(param_1 + 0x300) + 0x74);
  }
  return 1.0;
}



// FUNCTION 140e77140 FUN_140e77140 body=42 status=ok
// SIG undefined FUN_140e77140(void)

float FUN_140e77140(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    return *(float *)(*(longlong *)(param_1 + 0x2f8) + 0x1704) /
           *(float *)(*(longlong *)(param_1 + 0x300) + 0x5c);
  }
  return 1.0;
}



// FUNCTION 140e77170 FUN_140e77170 body=121 status=ok
// SIG undefined FUN_140e77170(void)

float FUN_140e77170(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  
  if (*(longlong *)(param_1 + 0x300) == 0) {
    return 1.0;
  }
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  if (((*(char *)(lVar1 + 0x10b9) != '\0') && (*(longlong *)(lVar1 + 0x468) != 0)) &&
     (plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x468) + 0x528), plVar2 != (longlong *)0x0)) {
    fVar3 = (float)(**(code **)(*plVar2 + 0x778))();
    return fVar3 / *(float *)(*(longlong *)(param_1 + 0x300) + 0x54);
  }
  return *(float *)(lVar1 + 0x1708) / *(float *)(*(longlong *)(param_1 + 0x300) + 0x54);
}



// FUNCTION 140e771f0 FUN_140e771f0 body=42 status=ok
// SIG undefined FUN_140e771f0(void)

float FUN_140e771f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x300) != 0) {
    return *(float *)(*(longlong *)(param_1 + 0x2f8) + 0x1718) /
           *(float *)(*(longlong *)(param_1 + 0x300) + 100);
  }
  return 1.0;
}



// FUNCTION 140e77220 FUN_140e77220 body=42 status=ok
// SIG undefined FUN_140e77220(void)

float FUN_140e77220(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x300) != 0) {
    return *(float *)(*(longlong *)(param_1 + 0x2f8) + 0x171c) /
           *(float *)(*(longlong *)(param_1 + 0x300) + 0x6c);
  }
  return 1.0;
}



// FUNCTION 140e77250 FUN_140e77250 body=45 status=ok
// SIG undefined FUN_140e77250(void)

float FUN_140e77250(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x300) != 0) {
    return *(float *)(*(longlong *)(param_1 + 0x2f8) + 0x1720) /
           *(float *)(*(longlong *)(param_1 + 0x300) + 0xd0);
  }
  return 1.0;
}



// FUNCTION 140e77280 FUN_140e77280 body=45 status=ok
// SIG undefined FUN_140e77280(void)

float FUN_140e77280(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x300) != 0) {
    return *(float *)(*(longlong *)(param_1 + 0x2f8) + 0x1724) /
           *(float *)(*(longlong *)(param_1 + 0x300) + 0x8c);
  }
  return 1.0;
}



// FUNCTION 140e772b0 FUN_140e772b0 body=45 status=ok
// SIG undefined FUN_140e772b0(void)

float FUN_140e772b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x300) != 0) {
    return *(float *)(*(longlong *)(param_1 + 0x2f8) + 0x1728) /
           *(float *)(*(longlong *)(param_1 + 0x300) + 0x84);
  }
  return 1.0;
}



// FUNCTION 140e772e0 FUN_140e772e0 body=45 status=ok
// SIG undefined FUN_140e772e0(void)

float FUN_140e772e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    return *(float *)(*(longlong *)(param_1 + 0x2f8) + 0x1734) /
           *(float *)(*(longlong *)(param_1 + 0x300) + 0x94);
  }
  return 1.0;
}



// FUNCTION 140e77310 FUN_140e77310 body=42 status=ok
// SIG undefined FUN_140e77310(void)

float FUN_140e77310(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x300) != 0) {
    return *(float *)(*(longlong *)(param_1 + 0x2f8) + 0x1738) /
           *(float *)(*(longlong *)(param_1 + 0x300) + 0x7c);
  }
  return 1.0;
}



// FUNCTION 140e77340 FUN_140e77340 body=65 status=ok
// SIG undefined FUN_140e77340(void)

float FUN_140e77340(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    return (*(float *)(*(longlong *)(param_1 + 0x2f8) + 0x174c) + 180.0) /
           (*(float *)(lVar1 + 0x9c) - *(float *)(lVar1 + 0x98));
  }
  return 1.0;
}



// FUNCTION 140e77390 FUN_140e77390 body=172 status=ok
// SIG undefined FUN_140e77390(void)

void FUN_140e77390(undefined8 param_1,int param_2,longlong *param_3)

{
  wchar_t *pwVar1;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  pwVar1 = L"%d:0%d";
  if (9 < param_2 % 0x3c) {
    pwVar1 = L"%d:%d";
  }
  FString::PrintfImpl(&local_18,pwVar1,(param_2 / 0x3c) % 0x18);
  if (param_3 != &local_18) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_18;
    *(undefined4 *)(param_3 + 1) = local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_c;
    return;
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e77440 FUN_140e77440 body=41 status=ok
// SIG undefined FUN_140e77440(void)

float FUN_140e77440(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    return (*(float *)(lVar1 + 0x74) - *(float *)(lVar1 + 0x70)) * param_2 +
           *(float *)(lVar1 + 0x70);
  }
  return 1.0;
}



// FUNCTION 140e77470 FUN_140e77470 body=41 status=ok
// SIG undefined FUN_140e77470(void)

float FUN_140e77470(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    return (*(float *)(lVar1 + 0x5c) - *(float *)(lVar1 + 0x58)) * param_2 +
           *(float *)(lVar1 + 0x58);
  }
  return 1.0;
}



// FUNCTION 140e774a0 FUN_140e774a0 body=41 status=ok
// SIG undefined FUN_140e774a0(void)

float FUN_140e774a0(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    return (*(float *)(lVar1 + 0x54) - *(float *)(lVar1 + 0x50)) * param_2 +
           *(float *)(lVar1 + 0x50);
  }
  return 1.0;
}



// FUNCTION 140e774d0 FUN_140e774d0 body=41 status=ok
// SIG undefined FUN_140e774d0(void)

float FUN_140e774d0(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    return (*(float *)(lVar1 + 100) - *(float *)(lVar1 + 0x60)) * param_2 + *(float *)(lVar1 + 0x60)
    ;
  }
  return 1.0;
}



// FUNCTION 140e77500 FUN_140e77500 body=41 status=ok
// SIG undefined FUN_140e77500(void)

float FUN_140e77500(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    return (*(float *)(lVar1 + 0x6c) - *(float *)(lVar1 + 0x68)) * param_2 +
           *(float *)(lVar1 + 0x68);
  }
  return 1.0;
}



// FUNCTION 140e77530 FUN_140e77530 body=50 status=ok
// SIG undefined FUN_140e77530(void)

float FUN_140e77530(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    return (*(float *)(lVar1 + 0xd0) - *(float *)(lVar1 + 0xcc)) * param_2 +
           *(float *)(lVar1 + 0xcc);
  }
  return 1.0;
}



// FUNCTION 140e77570 FUN_140e77570 body=50 status=ok
// SIG undefined FUN_140e77570(void)

float FUN_140e77570(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    return (*(float *)(lVar1 + 0x8c) - *(float *)(lVar1 + 0x88)) * param_2 +
           *(float *)(lVar1 + 0x88);
  }
  return 1.0;
}



// FUNCTION 140e775b0 FUN_140e775b0 body=50 status=ok
// SIG undefined FUN_140e775b0(void)

float FUN_140e775b0(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    return (*(float *)(lVar1 + 0x84) - *(float *)(lVar1 + 0x80)) * param_2 +
           *(float *)(lVar1 + 0x80);
  }
  return 1.0;
}



// FUNCTION 140e775f0 FUN_140e775f0 body=50 status=ok
// SIG undefined FUN_140e775f0(void)

float FUN_140e775f0(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    return (*(float *)(lVar1 + 0x94) - *(float *)(lVar1 + 0x90)) * param_2 +
           *(float *)(lVar1 + 0x90);
  }
  return 1.0;
}



// FUNCTION 140e77630 FUN_140e77630 body=41 status=ok
// SIG undefined FUN_140e77630(void)

float FUN_140e77630(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    return (*(float *)(lVar1 + 0x7c) - *(float *)(lVar1 + 0x78)) * param_2 +
           *(float *)(lVar1 + 0x78);
  }
  return 1.0;
}



// FUNCTION 140e77660 FUN_140e77660 body=12 status=ok
// SIG undefined FUN_140e77660(void)

float FUN_140e77660(undefined8 param_1,float param_2)

{
  return param_2 * 1440.0;
}



// FUNCTION 140e77670 FUN_140e77670 body=50 status=ok
// SIG undefined FUN_140e77670(void)

float FUN_140e77670(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    return (*(float *)(lVar1 + 0x9c) - *(float *)(lVar1 + 0x98)) * param_2 +
           *(float *)(lVar1 + 0x98);
  }
  return 1.0;
}



// FUNCTION 140e776b0 FUN_140e776b0 body=563 status=ok
// SIG undefined FUN_140e776b0(void)

void FUN_140e776b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1700);
  lVar5 = *(longlong *)(param_1 + 0x478);
  *(undefined4 *)(param_1 + 0xfa8) = *(undefined4 *)(param_1 + 0x1704);
  *(undefined4 *)(param_1 + 0xaf0) = uVar1;
  *(undefined4 *)(param_1 + 0xaf4) = uVar1;
  *(undefined4 *)(param_1 + 0xaf8) = uVar1;
  *(undefined4 *)(param_1 + 0xafc) = 0x3f800000;
  if (lVar5 != 0) {
    iVar4 = *(int *)(param_1 + 0x1710);
    if ((-1 < iVar4) && (iVar4 < *(int *)(lVar5 + 0xe0))) {
      *(undefined8 *)(param_1 + 0xf70) =
           *(undefined8 *)(*(longlong *)(lVar5 + 0xd8) + (longlong)iVar4 * 8);
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1724);
  *(uint *)(param_1 + 0xac0) = *(uint *)(param_1 + 0xac0) & 0xff7fffff;
  *(uint *)(param_1 + 0xac4) = *(uint *)(param_1 + 0xac4) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0xf6c) = *(undefined4 *)(param_1 + 0x1714);
  uVar7 = *(byte *)(param_1 + 0x175e) & 1;
  *(undefined4 *)(param_1 + 0xf90) = *(undefined4 *)(param_1 + 0x1718);
  *(undefined4 *)(param_1 + 0xf9c) = *(undefined4 *)(param_1 + 0x171c);
  *(undefined4 *)(param_1 + 0xccc) = *(undefined4 *)(param_1 + 0x1720);
  *(undefined4 *)(param_1 + 0xecc) = *(undefined4 *)(param_1 + 0x172c);
  *(undefined4 *)(param_1 + 0xec0) = *(undefined4 *)(param_1 + 0x1750);
  *(undefined4 *)(param_1 + 0xec4) = *(undefined4 *)(param_1 + 0x1754);
  *(uint *)(param_1 + 0xac0) =
       uVar7 << 0x17 | *(uint *)(param_1 + 0xac0) & 0xbfffffff | uVar7 << 0x1e;
  uVar3 = *(undefined4 *)(param_1 + 0x1728);
  *(uint *)(param_1 + 0xac4) = *(uint *)(param_1 + 0xac4) | uVar7 * 2;
  *(undefined4 *)(param_1 + 0xb10) = uVar2;
  *(undefined4 *)(param_1 + 0xb14) = uVar2;
  *(undefined4 *)(param_1 + 0xb18) = uVar2;
  *(undefined4 *)(param_1 + 0xb1c) = 0x3f800000;
  uVar2 = *(undefined4 *)(param_1 + 0x1738);
  *(undefined4 *)(param_1 + 0xb00) = uVar3;
  *(undefined4 *)(param_1 + 0xb04) = uVar3;
  *(undefined4 *)(param_1 + 0xb08) = uVar3;
  *(undefined4 *)(param_1 + 0xb0c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xae0) = uVar2;
  *(undefined4 *)(param_1 + 0xae4) = uVar2;
  *(undefined4 *)(param_1 + 0xae8) = uVar2;
  *(undefined4 *)(param_1 + 0xaec) = 0x3f800000;
  if (((*(char *)(param_1 + 0x10b9) == '\0') && (*(longlong *)(param_1 + 0x468) != 0)) &&
     (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x528), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x780))
              (plVar6,*(undefined4 *)(param_1 + 0x1708),uVar1,param_4,uVar3,uVar3);
  }
  FUN_140e701a0(param_1);
  FUN_140e71220(param_1);
  if ((*(longlong *)(param_1 + 0x468) != 0) &&
     (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x520), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x6e8))(plVar6,*(undefined1 *)(param_1 + 0x10f1));
  }
  FUN_140e6ff10(param_1);
  return;
}



// FUNCTION 140e778f0 FUN_140e778f0 body=89 status=ok
// SIG undefined FUN_140e778f0(void)

void FUN_140e778f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445cb6a0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1445cb6e8;
  }
  return;
}



// FUNCTION 140e77950 FUN_140e77950 body=89 status=ok
// SIG undefined FUN_140e77950(void)

void FUN_140e77950(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445cb730;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1445cb778;
  }
  return;
}



// FUNCTION 140e779b0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445cb8a0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1445cb8e8;
  }
  return;
}



// FUNCTION 140e77a00 FUN_140e77a00 body=66 status=ok
// SIG undefined FUN_140e77a00(void)

void FUN_140e77a00(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1445cb930;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_1445cb978;
  }
  return;
}



// FUNCTION 140e77a50 FUN_140e77a50 body=89 status=ok
// SIG undefined FUN_140e77a50(void)

void FUN_140e77a50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445cb610;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1445cb658;
  }
  return;
}



// FUNCTION 140e77ab0 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445cb7c0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1445cb808;
  }
  return;
}



// FUNCTION 140e77b00 FUN_140e77b00 body=240 status=ok
// SIG undefined FUN_140e77b00(void)

void FUN_140e77b00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    lVar2 = FUN_142956f50();
    lVar1 = *(longlong *)(param_1 + 0x4e0);
    for (lVar3 = lVar1; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar2) {
        if (lVar1 != 0) {
          lVar3 = 0;
          if (lVar1 != 0) {
            lVar2 = FUN_142956f50();
            for (lVar1 = *(longlong *)(param_1 + 0x4e0);
                (lVar3 = 0, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0x4e0), lVar1 != lVar2));
                lVar1 = *(longlong *)(lVar1 + 0x30)) {
            }
          }
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          FUN_1417985e0(lVar3,param_1,0,0,0,0,0,0,0);
          return;
        }
        break;
      }
    }
  }
  FUN_142690d70(param_1);
  return;
}



// FUNCTION 140e77bf0 FUN_140e77bf0 body=357 status=ok
// SIG undefined FUN_140e77bf0(void)

void FUN_140e77bf0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *local_18;
  undefined4 uStack_10;
  
  if ((*(int *)(param_1 + 0x10e0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x10d8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x10d8) != 0) {
      uVar5 = FMemory::Realloc(*(longlong *)(param_1 + 0x10d8),0,0);
      *(undefined8 *)(param_1 + 0x10d8) = uVar5;
    }
    *(undefined4 *)(param_1 + 0x10e0) = 0;
  }
  iVar4 = FUN_142235230(param_1);
  if (iVar4 == 3) {
    return;
  }
  if (*(char *)(param_1 + 0x1768) == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    plVar1 = (longlong *)(param_1 + 0x10c0);
    if (((*(int *)(param_1 + 0x10c8) == 0) || ((longlong *)*plVar1 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*(longlong *)*plVar1 + 8))(), cVar3 == '\0')) {
      local_18 = &LAB_140e6e39c;
      uStack_10 = 0;
      FUN_140e67b20(plVar1,*(undefined8 *)(param_1 + 0x468),&local_18);
    }
    local_18 = (undefined1 *)0x0;
    uStack_10 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,plVar1);
    (**(code **)(**(longlong **)(param_1 + 0x468) + 0xb68))
              (*(longlong **)(param_1 + 0x468),0,&local_18);
    if ((*(longlong *)(param_1 + 0x480) != 0) && (*(longlong *)(param_1 + 0x488) != 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x488) + 0x20))
                (*(longlong **)(param_1 + 0x488),*(undefined1 *)(param_1 + 0x10f2));
    }
    if ((*(int *)(param_1 + 0x10c8) != 0) &&
       (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar6 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar6;
      }
      *(undefined4 *)(param_1 + 0x10c8) = 0;
    }
    *(undefined1 *)(param_1 + 0x1768) = 0;
    return;
  }
  return;
}



// FUNCTION 140e77d70 FUN_140e77d70 body=1279 status=ok
// SIG undefined FUN_140e77d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e77d70(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_198 [32];
  int local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined1 local_160;
  undefined4 local_158 [2];
  longlong local_150 [3];
  undefined4 *local_138;
  ulonglong *puStack_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined4 local_60 [2];
  longlong local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  *(int *)(param_1 + 0x174) = (int)param_1[0x174] + -1;
  local_158[0] = (undefined4)param_1[0x174];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x170,local_158);
  if ((int)param_1[0x174] < 1) {
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar7 + 400) == 0) {
      uVar11 = *(undefined8 *)(lVar7 + 0x3f8);
    }
    else {
      uVar11 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
    }
    FUN_142880530(uVar11,param_1 + 0x165);
    lVar7 = 0;
    param_1[0x165] = 0;
    plVar13 = (longlong *)param_1[0x8e];
    plVar3 = plVar13 + (int)param_1[0x8f];
    if (plVar13 != plVar3) {
      plVar4 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        lVar10 = lVar7;
        if (((longlong *)*plVar13 != (longlong *)0x0) &&
           (lVar8 = (**(code **)(*(longlong *)*plVar13 + 0x670))(), lVar8 != 0)) {
          lVar9 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            lVar10 = FUN_140cff1b0(lVar8);
          }
        }
        if (lVar10 != 0) {
          if ((*(int *)(*plVar4 + 0x38) < DAT_146852c50) &&
             (_Init_thread_header(&DAT_146852c50), DAT_146852c50 == -1)) {
            FText::FText(&DAT_146852c38,0);
            atexit(FUN_143e3e8f0);
            _Init_thread_footer(&DAT_146852c50);
          }
          uVar11 = FText::FText(local_90,&DAT_146852c38);
          local_178 = (int)param_1[0x161];
          local_160 = 1;
          local_168 = 1;
          local_170 = 0;
          FUN_140c70350(lVar10,param_1[0x14b],*(undefined1 *)((longlong)param_1 + 0xa72),uVar11);
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar3);
    }
  }
  else {
    plVar13 = (longlong *)param_1[0x8e];
    plVar3 = plVar13 + (int)param_1[0x8f];
    if (plVar13 != plVar3) {
      lVar7 = 0;
      do {
        lVar10 = lVar7;
        if ((longlong *)*plVar13 != (longlong *)0x0) {
          lVar8 = (**(code **)(*(longlong *)*plVar13 + 0x670))();
          if (lVar8 != 0) {
            lVar9 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              lVar10 = FUN_140cff1b0(lVar8);
            }
          }
        }
        if (lVar10 != 0) {
          local_150[0] = 0;
          local_150[1] = 4;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_150,0);
          FGenericPlatformString::Memcpy(local_150[0],&DAT_1445b67e8,8);
          lVar8 = param_1[0x174];
          uVar11 = FText::FromString(local_b8,local_150);
          puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_a0,uVar11);
          local_60[0] = 0;
          local_138 = local_60;
          local_38 = '\0';
          puStack_130 = &local_30;
          local_120 = puVar12[1];
          local_128 = *puVar12;
          if (local_120 != 0) {
            LOCK();
            *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
            UNLOCK();
          }
          local_58 = (longlong)(int)lVar8;
          local_108 = local_138;
          uStack_100 = puStack_130;
          uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_f8,&local_108);
          uVar11 = FText::Format(local_d0,&local_128,uVar11);
          FText::FText(local_e8,uVar11);
          plVar4 = local_c8;
          if (local_c8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_c8 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_c8)(local_c8);
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
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_f8);
          plVar4 = local_48;
          if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
            LOCK();
            plVar1 = local_48 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_48)(local_48);
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
          plVar4 = (longlong *)puVar12[1];
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
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar4 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_b0 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_b0)(local_b0);
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
          if (local_150[0] != 0) {
            FMemory::Free();
          }
          lVar8 = param_1[0x161];
          lVar9 = param_1[0x174];
          local_118 = 0;
          uVar11 = FText::FText(local_78,local_e8);
          local_160 = 1;
          local_168 = 1;
          local_170 = 0;
          local_178 = (int)lVar8 - (int)lVar9;
          FUN_140c70350(lVar10,param_1[0x14d],*(undefined1 *)((longlong)param_1 + 0xa73),uVar11);
          plVar4 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_e0 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4);
              }
            }
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar3);
    }
  }
  return;
}



// FUNCTION 140e78270 FUN_140e78270 body=1275 status=ok
// SIG undefined FUN_140e78270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e78270(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1a8 [2];
  undefined8 local_1a0;
  undefined4 *local_198;
  undefined4 *puStack_190;
  undefined8 local_188;
  longlong local_180;
  undefined4 *local_178;
  ulonglong *puStack_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [24];
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined4 local_98 [2];
  longlong local_90;
  longlong *local_80;
  char local_70;
  undefined4 local_68 [2];
  longlong local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  *(int *)(param_1 + 0x17b) = (int)param_1[0x17b] + -1;
  local_1a8[0] = (undefined4)param_1[0x17b];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x177,local_1a8);
  if ((int)param_1[0x17b] < 1) {
    lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar8 + 400) == 0) {
      uVar12 = *(undefined8 *)(lVar8 + 0x3f8);
    }
    else {
      uVar12 = *(undefined8 *)(*(longlong *)(lVar8 + 400) + 0x90);
    }
    FUN_142880530(uVar12,param_1 + 0x16c);
    param_1[0x16c] = 0;
  }
  plVar13 = (longlong *)param_1[0x8e];
  plVar3 = plVar13 + (int)param_1[0x8f];
  for (; plVar13 != plVar3; plVar13 = plVar13 + 1) {
    lVar8 = 0;
    if ((longlong *)*plVar13 != (longlong *)0x0) {
      lVar9 = (**(code **)(*(longlong *)*plVar13 + 0x670))();
      if (lVar9 != 0) {
        lVar10 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          lVar8 = FUN_140cff1b0(lVar9);
        }
      }
    }
    if (lVar8 != 0) {
      lVar9 = param_1[0x17b];
      lVar10 = 0xac8;
      if (*(char *)((longlong)param_1 + 0xbdc) == '\0') {
        lVar10 = 0xab0;
      }
      puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_b8,lVar10 + (longlong)param_1);
      local_98[0] = 0;
      local_198 = local_98;
      local_70 = '\0';
      puStack_190 = local_68;
      local_180 = puVar11[1];
      local_188 = *puVar11;
      if (local_180 != 0) {
        LOCK();
        *(int *)(local_180 + 8) = *(int *)(local_180 + 8) + 1;
        UNLOCK();
      }
      local_90 = (longlong)(int)lVar9;
      local_158 = local_198;
      uStack_150 = puStack_190;
      uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_148,&local_158);
      uVar12 = FText::Format(local_118,&local_188,uVar12);
      FText::FText(local_d0,uVar12);
      plVar6 = local_110;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_110)(local_110);
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_148);
      plVar6 = local_80;
      if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_80)(local_80);
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
      plVar6 = (longlong *)puVar11[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
      iVar4 = (int)param_1[0x17b];
      if ((iVar4 + -1 < 0) || ((int)param_1[0x14f] <= iVar4 + -1)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        lVar9 = param_1[0x14e];
        local_1a0 = 0;
        lVar10 = 0xac8;
        if (*(char *)((longlong)param_1 + 0xbdc) == '\0') {
          lVar10 = 0xab0;
        }
        puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_a8,lVar10 + (longlong)param_1);
        local_68[0] = 0;
        local_178 = local_68;
        local_40 = '\0';
        puStack_170 = local_38;
        local_160 = puVar11[1];
        local_168 = *puVar11;
        if (local_160 != 0) {
          LOCK();
          *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
          UNLOCK();
        }
        local_60 = (longlong)iVar4;
        local_138 = local_178;
        uStack_130 = puStack_170;
        uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_128,&local_138);
        uVar12 = FText::Format(local_100,&local_168,uVar12);
        FText::FText(local_e8,uVar12);
        plVar6 = local_f8;
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_f8 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_128);
        plVar6 = local_50;
        if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        plVar6 = (longlong *)puVar11[1];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        local_1b0 = 0;
        local_1b8 = 0;
        local_1c0 = local_1a0;
        local_1c8 = *(undefined4 *)(*(longlong *)(lVar9 + (longlong)iVar4 * 8 + -8) + 0x48);
        FUN_140c70350(lVar8,*(undefined8 *)(param_1[0x14e] + -8 + (longlong)(int)param_1[0x17b] * 8)
                      ,9,local_e8);
      }
      plVar6 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c8 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_c8)(local_c8);
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
    }
  }
  return;
}



// FUNCTION 140e78770 FUN_140e78770 body=642 status=ok
// SIG undefined FUN_140e78770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e78770(longlong *param_1,longlong param_2,float param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar4 = (longlong *)*param_1;
  plVar1 = plVar4 + (longlong)(int)param_1[1] * 0x1f;
  while( true ) {
    if (plVar4 == plVar1) {
      return;
    }
    if ((plVar4[1] != 0) && ((param_2 == 0 || (*plVar4 == param_2)))) break;
    plVar4 = plVar4 + 0x1f;
  }
  uStack_c0 = *plVar4;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  local_c8 = param_1;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar1 == (longlong *)0x0) {
    if (((local_d0 != 0) && (local_d8 != (longlong *)0x0)) &&
       ((**(code **)(*local_d8 + 0x28))(local_d8,0), local_d8 != (longlong *)0x0)) {
      local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
    }
  }
  else {
    *plVar1 = (longlong)&PTR_GetPoolName_1445cb930;
    *(undefined4 *)(plVar1 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(plVar1 + 2) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)plVar1 + 0x14) = uStack_c0._4_4_;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1445cb978;
    FUN_140e77a00(plVar1,&local_d8);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    lVar2 = FMemory::Realloc(plVar1,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  if (param_3 < 0.0) {
    param_3 = *(float *)(plVar4[1] + 0x580);
  }
  *(byte *)(plVar4 + 7) = *(byte *)(plVar4 + 7) & 0xf7;
  *(byte *)(plVar4 + 7) = *(byte *)(plVar4 + 7) | param_4 << 3;
  uVar3 = AActor::GetWorldTimerManager(param_1[2]);
  local_b8 = 0;
  local_b0 = 0;
  if ((local_d0 != 0) && (local_d8 != (longlong *)0x0)) {
    (**(code **)(*local_d8 + 0x30))(local_d8,&local_b8);
  }
  FWeakObjectPtr::operator=(local_a8,0);
  local_e0 = 0xbf800000;
  local_e8 = 0;
  local_a0 = 0;
  local_68 = (longlong *)0x0;
  local_58 = 0;
  local_98 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar3,plVar4 + 5,&local_b8,param_3);
  if (local_58 != 0) {
    plVar4 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar4 = local_68;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
  if (local_d0 != 0) {
    if (local_d8 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_d8 + 0x28))(local_d8,0);
    if (local_d8 != (longlong *)0x0) {
      local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
    }
    local_d0 = 0;
  }
  if (local_d8 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(local_d8);
  return;
}



// FUNCTION 140e78a00 FUN_140e78a00 body=306 status=ok
// SIG undefined FUN_140e78a00(void)

void FUN_140e78a00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)FUN_140e68850(param_2,param_3);
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  FUN_1404b8b20(local_18 + 1,param_1,FUN_140e87b80);
  plVar3 = local_10;
  plVar1 = local_18;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar4 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x70,iVar4);
  }
  puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x70));
  *puVar6 = plVar1;
  puVar6[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  FUN_140e8c5f0(param_1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
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
  plVar1 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
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



// FUNCTION 140e78b40 FUN_140e78b40 body=486 status=ok
// SIG undefined FUN_140e78b40(void)

void FUN_140e78b40(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 local_90;
  byte local_88;
  undefined1 local_80 [56];
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_28 [32];
  
  if ((char)param_1[0x3a] != '\0') {
    plVar1 = (longlong *)param_1[0x39];
    uVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    if (lVar4 != 0) {
      local_88 = local_88 & 0xfd | 1;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      FUN_142c8c260(local_80,0x3f800000);
      local_48 = 0xff;
      local_40 = 0;
      local_38 = 0;
      FUN_140a95af0(lVar4,*(undefined8 *)(param_1[0x2f] + 0xe0),
                    *(undefined8 *)(param_1[0x2f] + 0xe8),&local_a8);
      FUN_1407665e0(lVar4 + 0x898,param_1);
      FUN_1407665e0(lVar4 + 0x8a8,param_1);
      FUN_1407665e0(lVar4 + 0x8b8,param_1);
      FUN_1407665e0(lVar4 + 0x200,param_1);
      if (local_98 != 0) {
        FMemory::Free();
      }
    }
    plVar1 = (longlong *)param_1[0x39];
    uVar3 = FUN_142e1a5a0();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    if (lVar4 != 0) {
      lVar4 = FUN_142d62010(lVar4,*(undefined8 *)(*(longlong *)(param_1[0x2f] + 0xe8) + 0x30));
      if (lVar4 != 0) {
        FUN_1407665e0(lVar4 + 8,param_1);
        FUN_1407665e0(lVar4 + 0x18,param_1);
      }
    }
    FUN_140b7e7c0(param_1[0x31]);
    if (param_1[0x32] != 0) {
      cVar2 = (**(code **)(*param_1 + 0x410))(param_1);
      if (cVar2 != '\0') {
        FUN_1405a3150(param_1[0x32],local_28,*(undefined8 *)(param_1[0x2f] + 0xa0),0);
        FUN_140591060(local_28);
      }
    }
    FUN_1414b6fc0(param_1);
    *(undefined1 *)(param_1 + 0x3a) = 0;
  }
  return;
}



// FUNCTION 140e78d40 FUN_140e78d40 body=9 status=ok
// SIG undefined FUN_140e78d40(void)

void FUN_140e78d40(longlong param_1)

{
  FUN_140e6ba30(param_1 + 0x10);
  return;
}



// FUNCTION 140e78d50 FUN_140e78d50 body=65 status=ok
// SIG undefined FUN_140e78d50(void)

void FUN_140e78d50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_140e6bbd0(param_1 + 0x10);
  return;
}



// FUNCTION 140e78dc0 FUN_140e78dc0 body=53 status=ok
// SIG undefined FUN_140e78dc0(void)

void FUN_140e78dc0(longlong param_1)

{
  FUN_142227880();
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x570),0,1);
    *(undefined8 *)(param_1 + 0x570) = 0;
  }
  return;
}



// FUNCTION 140e78e00 FUN_140e78e00 body=260 status=ok
// SIG undefined FUN_140e78e00(void)

void FUN_140e78e00(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_142693100();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146871660) && (_Init_thread_header(&DAT_146871660), DAT_146871660 == -1))
  {
    FName::FName(&DAT_146871658,L"GbxInput",1);
    _Init_thread_footer(&DAT_146871660);
  }
  plVar2 = *(longlong **)(param_1 + 0x130);
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)*param_3;
    plVar1 = plVar3 + (int)param_3[1];
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 == DAT_146871658) {
        (**(code **)(*plVar2 + 0x408))(plVar2,param_2,param_3,param_4,param_5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e78f10 FUN_140e78f10 body=129 status=ok
// SIG undefined FUN_140e78f10(void)

void FUN_140e78f10(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x460);
  *(int *)(param_1 + 0x4a0) = param_2;
  if (plVar1 != (longlong *)0x0) {
    if (*(int *)((longlong)plVar1 + 0x47c) != param_2) {
      (**(code **)(*plVar1 + 0x600))(plVar1);
      *(int *)((longlong)plVar1 + 0x47c) = param_2;
      plVar1 = *(longlong **)(param_1 + 0x460);
    }
    FUN_140e86ed0(plVar1);
  }
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_140e85550(param_1);
    if (*(longlong *)(param_1 + 0x460) != 0) {
      FUN_140e85550();
    }
  }
  return;
}



// FUNCTION 140e78fa0 FUN_140e78fa0 body=32 status=ok
// SIG undefined FUN_140e78fa0(void)

void FUN_140e78fa0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plStackX_8;
  longlong *plStack_18;
  int iStack_10;
  
  if ((((char)param_1[0x25] != '\x03') || ((char)param_1[0x8b] != '\x02')) ||
     (*(int *)((longlong)param_1 + 0x4ec) == -1)) {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x4ec) != -1) {
    uVar2 = (**(code **)(*param_1 + 0x148))();
    lVar3 = FUN_140aab5e0(uVar2);
    if (((lVar3 != 0) &&
        (lVar3 = FUN_140aab9d0(lVar3,*(undefined4 *)((longlong)param_1 + 0x4ec)), lVar3 != 0)) &&
       (param_1[0x8c] != 0)) {
      plStackX_8 = param_1;
      FUN_140aaea70(lVar3,&plStack_18);
      lVar3 = FUN_140c45020(param_1);
      plVar1 = plStack_18 + iStack_10;
      for (plVar4 = plStack_18; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 == lVar3) {
          FUN_140e943f0(param_1[0x8c],1);
          FUN_140e6de50(&plStackX_8);
          goto LAB_140e8fc6f;
        }
      }
      if (plStack_18 != plVar1) {
        plVar4 = plStack_18;
        do {
          if (*plVar4 == param_1[0x8e]) {
            FUN_140e943f0(param_1,1);
            lVar3 = FUN_140e7fe60(param_1,param_1[0x8d]);
            if (lVar3 != 0) {
              if (DAT_146b33f38 == 0) {
                FUN_142d7ebe0();
              }
              if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) {
                FUN_142fe44f0(lVar3,0,*(undefined4 *)((longlong)param_1 + 0x47c));
              }
              else {
                FUN_142fe44f0(lVar3,*(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0),
                              *(undefined4 *)((longlong)param_1 + 0x47c));
              }
            }
            goto LAB_140e8fc6f;
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar1);
      }
      lVar3 = FUN_140e7fe60(param_1,param_1[0x8d]);
      if (lVar3 != 0) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        uVar2 = 0;
        if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
          uVar2 = *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
        }
        FUN_142fe44f0(lVar3,uVar2,*(undefined4 *)((longlong)param_1 + 0x47c));
      }
      FUN_140e6de50(&plStackX_8);
LAB_140e8fc6f:
      if (plStack_18 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  FUN_140e83b10(param_1);
  if (param_1[0x8c] != 0) {
    FUN_140e93cd0();
  }
  FUN_140e93cd0(param_1);
  return;
}



// FUNCTION 140e78fc0 FUN_140e78fc0 body=588 status=ok
// SIG undefined FUN_140e78fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e78fc0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48 [4];
  undefined1 local_28 [32];
  
  if (((*(longlong **)(param_1 + 0x110) != (longlong *)0x0) &&
      (local_res10[0] = param_2, local_res18[0] = param_3,
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x148))(), lVar6 != 0)) &&
     (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x148))(),
     (*(byte *)(lVar6 + 0x830) & 4) == 0)) {
    if ((DAT_1468711d0 == '\0') &&
       (puVar7 = (undefined8 *)FUN_140e7dc40(), puVar7 != &DAT_1468711b0)) {
      DAT_1468711b0 = *puVar7;
      _DAT_1468711b8 = puVar7[1];
      _DAT_1468711c0 = puVar7[2];
      _DAT_1468711c8 = puVar7[3];
      DAT_1468711d0 = '\x01';
    }
    cVar5 = FUN_142190080(DAT_1468711b0);
    if ((cVar5 != '\0') && (cVar5 = FUN_142194620(DAT_1468711b0), cVar5 != '\0')) {
      FUN_142190c10(&local_68,DAT_1468711b0);
      lVar6 = *(longlong *)(local_68 + 0xc0);
      if (*(longlong *)(local_68 + 0xc0) == 0) {
        lVar6 = local_68 + 0x20;
      }
      uVar8 = FUN_140aa2bd0(lVar6);
      FUN_14217e740(local_48);
      FUN_142194380(local_48,0x28,0,0,0);
      local_48[0] = *(undefined8 *)(param_1 + 0x110);
      FUN_1421923f0(local_28,DAT_146870fd0,local_48);
      FUN_140bfb300(uVar8,&DAT_1468711b8,local_28);
      FUN_14217f430(local_28);
      FUN_14217f430(local_48);
      FUN_140bfadf0(uVar8,&DAT_1468711c0,local_res10);
      FUN_140bfadf0(uVar8,&DAT_1468711c8,local_res18);
      cVar5 = FUN_14218a740(&local_68,1);
      if (cVar5 != '\0') {
        local_58 = local_68;
        plStack_50 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
          UNLOCK();
        }
        FUN_142194040(&local_58);
        plVar3 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      }
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_60 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
    }
  }
  return;
}



// FUNCTION 140e79210 FUN_140e79210 body=623 status=ok
// SIG undefined FUN_140e79210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e79210(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78 [2];
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58 [4];
  undefined1 local_38 [32];
  
  if (param_3 != 0) {
    local_res10[0] = param_2;
    if ((DAT_146871208 == '\0') &&
       (puVar6 = (undefined8 *)FUN_140e7de10(), puVar6 != &DAT_1468711d8)) {
      DAT_1468711d8 = *puVar6;
      _DAT_1468711e0 = puVar6[1];
      _DAT_1468711e8 = puVar6[2];
      _DAT_1468711f0 = puVar6[3];
      _DAT_1468711f8 = puVar6[4];
      _DAT_146871200 = puVar6[5];
      DAT_146871208 = '\x01';
    }
    cVar5 = FUN_142190080(DAT_1468711d8);
    if ((cVar5 != '\0') && (cVar5 = FUN_142194620(DAT_1468711d8), cVar5 != '\0')) {
      FUN_142190c10(&local_88,DAT_1468711d8);
      lVar9 = *(longlong *)(local_88 + 0xc0);
      if (*(longlong *)(local_88 + 0xc0) == 0) {
        lVar9 = local_88 + 0x20;
      }
      uVar7 = FUN_140aa2bd0(lVar9);
      FUN_14217e740(local_58);
      FUN_142194380(local_58,0x28,0,0,0);
      local_58[0] = *(undefined8 *)(param_1 + 0x110);
      FUN_1421923f0(local_38,DAT_146870fd0,local_58);
      FUN_140bfb300(uVar7,&DAT_1468711e0,local_38);
      FUN_14217f430(local_38);
      FUN_14217f430(local_58);
      FUN_140bfadf0(uVar7,&DAT_1468711e8,local_res10);
      local_res20 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x18);
      FName::ToString(&local_res20,local_78);
      FUN_140bfb1d0(uVar7,&DAT_1468711f0,local_78);
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      uVar8 = FTextInspector::GetSourceString(param_3 + 0x58);
      FUN_140bfb1d0(uVar7,&DAT_1468711f8,uVar8);
      local_res18[0] = *(undefined1 *)(param_3 + 0x25c);
      FUN_140bfac90(uVar7,&DAT_146871200,local_res18);
      cVar5 = FUN_14218a740(&local_88,1);
      if (cVar5 != '\0') {
        local_68 = local_88;
        plStack_60 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
          UNLOCK();
        }
        FUN_142194040(&local_68);
        plVar3 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_60 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_60)(plStack_60);
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
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_80 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar2 = (int *)((longlong)plStack_80 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e79480 FUN_140e79480 body=853 status=ok
// SIG undefined FUN_140e79480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e79480(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8 [2];
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98 [4];
  undefined8 local_78 [4];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  if (((param_3 != 0) && (*(longlong *)(param_1 + 0x110) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0xa58) != 0)) {
    local_res10[0] = param_2;
    FUN_14217e740(local_98);
    FUN_142194380(local_98,0x28,0,0,0);
    local_98[0] = *(undefined8 *)(param_1 + 0x110);
    FUN_1421923f0(local_58,DAT_146870fd0,local_98);
    cVar6 = FUN_142190070(local_58);
    FUN_14217f430(local_58);
    FUN_14217f430(local_98);
    if ((cVar6 != '\0') &&
       (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x460), lVar11 != 0)) {
      lVar7 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (*(longlong *)(lVar11 + 0x570) != 0)) {
        if ((DAT_146871240 == '\0') &&
           (puVar8 = (undefined8 *)FUN_140e7e070(), puVar8 != &DAT_146871210)) {
          DAT_146871210 = *puVar8;
          _DAT_146871218 = puVar8[1];
          _DAT_146871220 = puVar8[2];
          _DAT_146871228 = puVar8[3];
          _DAT_146871230 = puVar8[4];
          _DAT_146871238 = puVar8[5];
          DAT_146871240 = '\x01';
        }
        cVar6 = FUN_142190080(DAT_146871210);
        if ((cVar6 != '\0') && (cVar6 = FUN_142194620(DAT_146871210), cVar6 != '\0')) {
          FUN_142190c10(&local_c8,DAT_146871210);
          lVar11 = *(longlong *)(local_c8 + 0xc0);
          if (*(longlong *)(local_c8 + 0xc0) == 0) {
            lVar11 = local_c8 + 0x20;
          }
          uVar9 = FUN_140aa2bd0(lVar11);
          FUN_14217e740(local_78);
          FUN_142194380(local_78,0x28,0,0,0);
          local_78[0] = *(undefined8 *)(param_1 + 0x110);
          FUN_1421923f0(local_38,DAT_146870fd0,local_78);
          FUN_140bfb300(uVar9,&DAT_146871218,local_38);
          FUN_14217f430(local_38);
          FUN_14217f430(local_78);
          FUN_140bfadf0(uVar9,&DAT_146871220,local_res10);
          local_res20 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x18);
          FName::ToString(&local_res20,local_b8);
          FUN_140bfb1d0(uVar9,&DAT_146871228,local_b8);
          if (local_b8[0] != 0) {
            FMemory::Free();
          }
          uVar10 = FTextInspector::GetSourceString(param_3 + 0x58);
          FUN_140bfb1d0(uVar9,&DAT_146871230,uVar10);
          local_res18[0] = *(undefined1 *)(param_3 + 0x25c);
          FUN_140bfac90(uVar9,&DAT_146871238,local_res18);
          cVar6 = FUN_14218a740(&local_c8,1);
          if (cVar6 != '\0') {
            local_a8 = local_c8;
            plStack_a0 = plStack_c0;
            if (plStack_c0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_a8);
            plVar3 = plStack_a0;
            if (plStack_a0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_a0 + 1;
              lVar11 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plStack_a0)(plStack_a0);
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
          if (plStack_c0 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_c0 + 1;
            lVar11 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_c0)(plStack_c0);
              LOCK();
              piVar2 = (int *)((longlong)plStack_c0 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e797e0 FUN_140e797e0 body=688 status=ok
// SIG undefined FUN_140e797e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e797e0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 local_res10 [2];
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48 [4];
  undefined1 local_28 [32];
  
  local_res10[0] = param_2;
  if ((DAT_146871168 == '\0') && (puVar6 = (undefined8 *)FUN_140e7e340(), puVar6 != &DAT_146871120))
  {
    DAT_146871120 = *puVar6;
    _DAT_146871128 = puVar6[1];
    _DAT_146871130 = puVar6[2];
    _DAT_146871138 = puVar6[3];
    _DAT_146871140 = puVar6[4];
    _DAT_146871148 = puVar6[5];
    _DAT_146871150 = puVar6[6];
    _DAT_146871158 = puVar6[7];
    _DAT_146871160 = puVar6[8];
    DAT_146871168 = '\x01';
  }
  cVar5 = FUN_142190080(DAT_146871120);
  if ((cVar5 != '\0') && (cVar5 = FUN_142194620(DAT_146871120), cVar5 != '\0')) {
    FUN_142190c10(&local_68,DAT_146871120);
    lVar8 = *(longlong *)(local_68 + 0xc0);
    if (*(longlong *)(local_68 + 0xc0) == 0) {
      lVar8 = local_68 + 0x20;
    }
    uVar7 = FUN_140aa2bd0(lVar8);
    FUN_14217e740(local_48);
    FUN_142194380(local_48,0x28,0,0,0);
    local_48[0] = *(undefined8 *)(param_1 + 0x110);
    FUN_1421923f0(local_28,DAT_146870fd0,local_48);
    FUN_140bfb300(uVar7,&DAT_146871128,local_28);
    FUN_14217f430(local_28);
    FUN_14217f430(local_48);
    FUN_140bfadf0(uVar7,&DAT_146871130,local_res10);
    FUN_140bfb1d0(uVar7,&DAT_146871138,param_3);
    FUN_140bfb1d0(uVar7,&DAT_146871140,param_4);
    FUN_140bfa9d0(uVar7,&DAT_146871148,&stack0x00000028);
    FUN_140bfa9d0(uVar7,&DAT_146871150,&stack0x00000030);
    FUN_140bfa9d0(uVar7,&DAT_146871158,&stack0x00000038);
    FUN_140bfac90(uVar7,&DAT_146871160,&stack0x00000040);
    cVar5 = FUN_14218a740(&local_68,1);
    if (cVar5 != '\0') {
      local_58 = local_68;
      plStack_50 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
      }
      FUN_142194040(&local_58);
      plVar3 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
    }
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_60 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  }
  return;
}



// FUNCTION 140e79a90 FUN_140e79a90 body=630 status=ok
// SIG undefined FUN_140e79a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e79a90(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  int local_res10 [2];
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48 [4];
  undefined1 local_28 [32];
  
  piVar8 = *(int **)(param_1 + 0xd0);
  piVar9 = piVar8 + (longlong)*(int *)(param_1 + 0xd8) * 0x16;
  if (piVar8 != piVar9) {
    while (*piVar8 != param_2) {
      piVar8 = piVar8 + 0x16;
      if (piVar8 == piVar9) {
        return;
      }
    }
    if (piVar8 != (int *)0x0) {
      local_res10[0] = param_2;
      if ((DAT_1468710b8 == '\0') &&
         (puVar5 = (undefined8 *)FUN_140e7e3b0(), puVar5 != &DAT_146871090)) {
        DAT_146871090 = *puVar5;
        _DAT_146871098 = puVar5[1];
        _DAT_1468710a0 = puVar5[2];
        _DAT_1468710a8 = puVar5[3];
        _DAT_1468710b0 = puVar5[4];
        DAT_1468710b8 = '\x01';
      }
      cVar4 = FUN_142190080(DAT_146871090);
      if ((cVar4 != '\0') && (cVar4 = FUN_142194620(DAT_146871090), cVar4 != '\0')) {
        FUN_142190c10(&local_68,DAT_146871090);
        lVar7 = *(longlong *)(local_68 + 0xc0);
        if (*(longlong *)(local_68 + 0xc0) == 0) {
          lVar7 = local_68 + 0x20;
        }
        uVar6 = FUN_140aa2bd0(lVar7);
        FUN_14217e740(local_48);
        FUN_142194380(local_48,0x28,0,0,0);
        local_48[0] = *(undefined8 *)(param_1 + 0x110);
        FUN_1421923f0(local_28,DAT_146870fd0,local_48);
        FUN_140bfb300(uVar6,&DAT_146871098,local_28);
        FUN_14217f430(local_28);
        FUN_14217f430(local_48);
        FUN_140bfadf0(uVar6,&DAT_1468710a0,local_res10);
        FUN_140e68c40(uVar6,&DAT_1468710a8,piVar8 + 2);
        FUN_140bfadf0(uVar6,&DAT_1468710b0,piVar8 + 4);
        cVar4 = FUN_14218a740(&local_68,1);
        if (cVar4 != '\0') {
          local_58 = local_68;
          plStack_50 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
            UNLOCK();
          }
          FUN_142194040(&local_58);
          plVar2 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_50 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar8 = (int *)((longlong)plVar2 + 0xc);
              iVar3 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
        }
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_60 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar8 = (int *)((longlong)plStack_60 + 0xc);
            iVar3 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_60 + 8))(plStack_60,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e79d10 FUN_140e79d10 body=631 status=ok
// SIG undefined FUN_140e79d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e79d10(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 local_res10 [2];
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48 [4];
  undefined1 local_28 [32];
  
  local_res10[0] = param_2;
  if ((DAT_1468711a8 == '\0') && (puVar6 = (undefined8 *)FUN_140e7e5d0(), puVar6 != &DAT_146871170))
  {
    DAT_146871170 = *puVar6;
    _DAT_146871178 = puVar6[1];
    _DAT_146871180 = puVar6[2];
    _DAT_146871188 = puVar6[3];
    _DAT_146871190 = puVar6[4];
    _DAT_146871198 = puVar6[5];
    _DAT_1468711a0 = puVar6[6];
    DAT_1468711a8 = '\x01';
  }
  cVar5 = FUN_142190080(DAT_146871170);
  if ((cVar5 != '\0') && (cVar5 = FUN_142194620(DAT_146871170), cVar5 != '\0')) {
    FUN_142190c10(&local_68,DAT_146871170);
    lVar8 = *(longlong *)(local_68 + 0xc0);
    if (*(longlong *)(local_68 + 0xc0) == 0) {
      lVar8 = local_68 + 0x20;
    }
    uVar7 = FUN_140aa2bd0(lVar8);
    FUN_14217e740(local_48);
    FUN_142194380(local_48,0x28,0,0,0);
    local_48[0] = *(undefined8 *)(param_1 + 0x110);
    FUN_1421923f0(local_28,DAT_146870fd0,local_48);
    FUN_140bfb300(uVar7,&DAT_146871178,local_28);
    FUN_14217f430(local_28);
    FUN_14217f430(local_48);
    FUN_140bfadf0(uVar7,&DAT_146871180,local_res10);
    FUN_140bfb1d0(uVar7,&DAT_146871188,param_3);
    FUN_140bfb1d0(uVar7,&DAT_146871190,param_4);
    FUN_140bfa9d0(uVar7,&DAT_146871198,&stack0x00000028);
    FUN_140bfa9d0(uVar7,&DAT_1468711a0,&stack0x00000030);
    cVar5 = FUN_14218a740(&local_68,1);
    if (cVar5 != '\0') {
      local_58 = local_68;
      plStack_50 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
      }
      FUN_142194040(&local_58);
      plVar3 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
    }
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_60 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  }
  return;
}



// FUNCTION 140e79f90 FUN_140e79f90 body=3046 status=ok
// SIG undefined FUN_140e79f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e79f90(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  int *piVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong local_res8;
  undefined4 local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int *local_248;
  int *local_240;
  uint local_238;
  uint local_234;
  int local_230;
  uint local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong *plStack_1e0;
  longlong local_1d8;
  longlong *plStack_1d0;
  uint local_1c8;
  longlong local_1b8;
  longlong *plStack_1b0;
  longlong local_1a8;
  longlong *plStack_1a0;
  longlong *local_198;
  int local_190 [8];
  longlong *local_170;
  uint local_168 [8];
  undefined8 local_148 [4];
  undefined8 local_128 [4];
  int local_108 [8];
  uint local_e8 [8];
  undefined8 local_c8 [4];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  
  if ((((*(char *)(param_1 + 0x120) == '\0') && (*(longlong **)(param_1 + 0x110) != (longlong *)0x0)
       ) && (local_res8 = param_1, lVar5 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x148))()
            , lVar5 != 0)) &&
     ((lVar5 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x148))(),
      (*(byte *)(lVar5 + 0x830) & 4) == 0 &&
      (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0xa58) != 0)))) {
    FUN_14217e740(local_148);
    FUN_142194380(local_148,0x28,0,0,0);
    local_148[0] = *(undefined8 *)(param_1 + 0x110);
    FUN_1421923f0(local_a8,DAT_146870fd0,local_148);
    cVar2 = FUN_142190070(local_a8);
    FUN_14217f430(local_a8);
    FUN_14217f430(local_148);
    if (cVar2 != '\0') {
      piVar12 = (int *)0x0;
      iVar14 = 0;
      *(undefined1 *)(param_1 + 0x120) = 1;
      local_248 = (int *)0x0;
      local_240 = (int *)0x0;
      local_238 = 0;
      local_234 = 0;
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar5 = *(longlong *)(DAT_146b33f38 + 0x58);
      if (lVar5 != 0) {
        plVar18 = *(longlong **)(lVar5 + 0x1118);
        uVar21 = 0;
        uVar20 = (longlong)*(int *)(lVar5 + 0x1120) & 0x1fffffffffffffff;
        if (plVar18 + *(int *)(lVar5 + 0x1120) < plVar18) {
          uVar20 = uVar21;
        }
        piVar15 = piVar12;
        piVar10 = piVar12;
        param_1 = local_res8;
        if (uVar20 != 0) {
          do {
            lVar5 = *plVar18;
            if (lVar5 != 0) {
              iVar14 = (int)piVar15;
              local_238 = iVar14 + 1;
              if ((int)piVar10 < (int)local_238) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_240,piVar15);
                piVar10 = (int *)(ulonglong)local_234;
                piVar12 = local_240;
              }
              piVar15 = (int *)(ulonglong)local_238;
              piVar12[iVar14] = *(int *)(lVar5 + 0xa0);
            }
            iVar14 = (int)piVar15;
            plVar18 = plVar18 + 1;
            uVar21 = uVar21 + 1;
            param_1 = local_res8;
            local_248 = piVar12;
          } while (uVar21 != uVar20);
        }
      }
      plVar18 = (longlong *)0x0;
      piVar12 = local_248 + iVar14;
      piVar15 = local_248;
      if (local_248 != piVar12) {
LAB_140e7a1a0:
        local_248 = piVar15;
        piVar15 = *(int **)(param_1 + 0xd0);
        local_res8 = CONCAT44(local_res8._4_4_,*local_248);
        piVar10 = piVar15 + (longlong)*(int *)(param_1 + 0xd8) * 0x16;
        uVar3 = 0;
        for (; piVar15 != piVar10; piVar15 = piVar15 + 0x16) {
          if (*piVar15 == *local_248) {
            if (piVar15 != (int *)0x0) {
              if ((DAT_146871088 == '\0') &&
                 (puVar6 = (undefined8 *)FUN_140e7e640(), puVar6 != &DAT_146871018)) {
                DAT_146871018 = *puVar6;
                _DAT_146871020 = puVar6[1];
                _DAT_146871028 = puVar6[2];
                _DAT_146871030 = puVar6[3];
                _DAT_146871038 = puVar6[4];
                DAT_146871040 = (longlong *)puVar6[5];
                _DAT_146871048 = puVar6[6];
                _DAT_146871050 = puVar6[7];
                _DAT_146871058 = puVar6[8];
                _DAT_146871060 = puVar6[9];
                _DAT_146871068 = puVar6[10];
                _DAT_146871070 = puVar6[0xb];
                DAT_146871078 = (longlong *)puVar6[0xc];
                _DAT_146871080 = puVar6[0xd];
                DAT_146871088 = '\x01';
              }
              cVar2 = FUN_142190080(DAT_146871018);
              if ((cVar2 == '\0') || (cVar2 = FUN_142194620(DAT_146871018), cVar2 == '\0'))
              goto LAB_140e7a4f4;
              FUN_142190c10(&local_1e8,DAT_146871018);
              lVar5 = *(longlong *)(local_1e8 + 0xc0);
              if (*(longlong *)(local_1e8 + 0xc0) == 0) {
                lVar5 = local_1e8 + 0x20;
              }
              plVar8 = (longlong *)FUN_140aa2bd0(lVar5);
              FUN_14217e740(local_128);
              FUN_142194380(local_128,0x28,0,0,0);
              local_128[0] = *(undefined8 *)(param_1 + 0x110);
              FUN_1421923f0(local_88,DAT_146870fd0,local_128);
              FUN_140bfb300(plVar8,&DAT_146871020,local_88);
              FUN_14217f430(local_88);
              FUN_14217f430(local_128);
              FUN_140bfadf0(plVar8,&DAT_146871028,&local_res8);
              FUN_140e68c40(plVar8,&DAT_146871030,piVar15 + 2);
              FUN_140bfadf0(plVar8,&DAT_146871038,piVar15 + 4);
              local_1f8 = 0;
              if ((*DAT_146871040 == 0) || (cVar2 = FUN_1407ce010(DAT_146871040 + 1), cVar2 == '\0')
                 ) goto LAB_140e7a7f6;
              plVar16 = (longlong *)*plVar8;
              plVar19 = plVar16 + (longlong)(int)plVar8[1] * 5;
              plVar17 = plVar18;
              if (plVar16 == plVar19) goto LAB_140e7a749;
              goto LAB_140e7a723;
            }
            break;
          }
        }
        if ((DAT_146871088 == '\0') &&
           (puVar6 = (undefined8 *)FUN_140e7e640(), puVar6 != &DAT_146871018)) {
          DAT_146871018 = *puVar6;
          _DAT_146871020 = puVar6[1];
          _DAT_146871028 = puVar6[2];
          _DAT_146871030 = puVar6[3];
          _DAT_146871038 = puVar6[4];
          DAT_146871040 = (longlong *)puVar6[5];
          _DAT_146871048 = puVar6[6];
          _DAT_146871050 = puVar6[7];
          _DAT_146871058 = puVar6[8];
          _DAT_146871060 = puVar6[9];
          _DAT_146871068 = puVar6[10];
          _DAT_146871070 = puVar6[0xb];
          DAT_146871078 = (longlong *)puVar6[0xc];
          _DAT_146871080 = puVar6[0xd];
          DAT_146871088 = '\x01';
        }
        cVar2 = FUN_142190080(DAT_146871018);
        if ((cVar2 != '\0') && (cVar2 = FUN_142194620(DAT_146871018), cVar2 != '\0')) {
          FUN_142190c10(&local_1d8,DAT_146871018);
          lVar5 = *(longlong *)(local_1d8 + 0xc0);
          if (*(longlong *)(local_1d8 + 0xc0) == 0) {
            lVar5 = local_1d8 + 0x20;
          }
          uVar7 = FUN_140aa2bd0(lVar5);
          FUN_14217e740(local_c8);
          FUN_142194380(local_c8,0x28,0,0,0);
          local_c8[0] = *(undefined8 *)(param_1 + 0x110);
          FUN_1421923f0(local_68,DAT_146870fd0,local_c8);
          FUN_140bfb300(uVar7,&DAT_146871020,local_68);
          FUN_14217f430(local_68);
          FUN_14217f430(local_c8);
          FUN_140bfadf0(uVar7,&DAT_146871028,&local_res8);
          local_228 = 0;
          FUN_140bfa9d0(uVar7,&DAT_146871030,&local_228);
          local_224 = 0;
          FUN_140bfa9d0(uVar7,&DAT_146871038,&local_224);
          local_220 = 0;
          FUN_140bfa9d0(uVar7,&DAT_146871040,&local_220);
          local_21c = 0;
          FUN_140bfa9d0(uVar7,&DAT_146871048,&local_21c);
          local_218 = 0;
          FUN_140bfa9d0(uVar7,&DAT_146871050,&local_218);
          local_214 = 0;
          FUN_140bfa9d0(uVar7,&DAT_146871058,&local_214);
          local_210 = 0;
          FUN_140bfa9d0(uVar7,&DAT_146871060,&local_210);
          local_20c = 0;
          FUN_140bfa9d0(uVar7,&DAT_146871068,&local_20c);
          local_208 = 0;
          FUN_140bfa9d0(uVar7,&DAT_146871070,&local_208);
          local_204 = 0;
          FUN_140bfa9d0(uVar7,&DAT_146871078,&local_204);
          local_200 = 0;
          FUN_140bfa9d0(uVar7,&DAT_146871080);
          cVar2 = FUN_14218a740(&local_1d8,1);
          plVar8 = plStack_1d0;
          if (cVar2 != '\0') {
            local_1a8 = local_1d8;
            plStack_1a0 = plStack_1d0;
            if (plStack_1d0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_1d0 + 1) = (int)plStack_1d0[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_1a8);
            plVar19 = plStack_1a0;
            plVar8 = plStack_1d0;
            if (plStack_1a0 != (longlong *)0x0) {
              LOCK();
              plVar16 = plStack_1a0 + 1;
              lVar5 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plStack_1a0)(plStack_1a0);
                LOCK();
                piVar15 = (int *)((longlong)plVar19 + 0xc);
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                plVar8 = plStack_1d0;
                if (iVar14 == 1) {
                  (**(code **)(*plVar19 + 8))(plVar19,1);
                  plVar8 = plStack_1d0;
                }
              }
            }
          }
          goto LAB_140e7a4bb;
        }
        goto LAB_140e7a4f4;
      }
LAB_140e7a510:
      if (local_248 != (int *)0x0) {
        FMemory::Free(local_248);
      }
    }
  }
  return;
  while (plVar16 = plVar16 + 5, plVar17 = plVar18, plVar16 != plVar19) {
LAB_140e7a723:
    if ((*(longlong *)*plVar16 == *DAT_146871040) &&
       (plVar17 = plVar16,
       *(longlong *)(((longlong *)*plVar16)[1] + 0x28) == *(longlong *)(DAT_146871040[1] + 0x28)))
    break;
  }
LAB_140e7a749:
  if (plVar17 == (longlong *)0x0) {
    local_198 = DAT_146871040;
    FUN_14217e740(local_190);
    FUN_142194380(local_190,0xe,0,1,0);
    local_190[0] = piVar15[5];
    iVar14 = (int)plVar8[1];
    *(int *)(plVar8 + 1) = iVar14 + 1;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar14 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar14);
    }
    puVar6 = (undefined8 *)(*plVar8 + (longlong)iVar14 * 0x28);
    *puVar6 = local_198;
    FUN_14217e5b0(puVar6 + 1,local_190);
    piVar10 = local_190;
  }
  else {
    FUN_14217e740(local_108);
    FUN_142194380(local_108,0xe,0,1,0);
    local_108[0] = piVar15[5];
    FUN_14217f450(plVar17 + 1,local_108);
    piVar10 = local_108;
  }
  FUN_14217f430(piVar10);
LAB_140e7a7f6:
  FUN_140bfadf0(plVar8,&DAT_146871048,piVar15 + 6);
  if (*(longlong *)(param_1 + 0x110) != 0) {
    iVar14 = (int)local_res8;
    if ((int)local_res8 == 0) {
      iVar14 = *(int *)(param_1 + 200);
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar5 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar5 != 0) {
      if (iVar14 == 0) {
        iVar14 = *(int *)(param_1 + 200);
      }
      plVar16 = *(longlong **)(lVar5 + 0x1118);
      plVar19 = plVar16 + *(int *)(lVar5 + 0x1120);
      for (; plVar16 != plVar19; plVar16 = plVar16 + 1) {
        lVar5 = *plVar16;
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0xa0) == iVar14)) {
          if (lVar5 != 0) {
            uVar3 = FUN_140aabba0(*(longlong *)(param_1 + 0x110) + 0x1a68,
                                  *(undefined8 *)(lVar5 + 0x68));
          }
          break;
        }
      }
    }
  }
  local_res10[0] = uVar3;
  FUN_140bfa9d0(plVar8,&DAT_146871050,local_res10);
  FUN_140bfadf0(plVar8,&DAT_146871058,piVar15 + 7);
  local_res18[0] = piVar15[0xc] + piVar15[0x10];
  FUN_140bfa9d0(plVar8,&DAT_146871060,local_res18);
  local_res20[0] = piVar15[0x10];
  FUN_140bfa9d0(plVar8,&DAT_146871068,local_res20);
  local_230 = piVar15[0x14];
  FUN_140bfa9d0(plVar8,&DAT_146871070,&local_230);
  lVar13 = *(longlong *)(piVar15 + 0x12);
  uVar4 = 0;
  lVar5 = lVar13 + (longlong)piVar15[0x14] * 8;
  plVar19 = plVar18;
  uVar1 = uVar4;
  for (; lVar13 != lVar5; lVar13 = lVar13 + 8) {
    uVar9 = *(int *)(lVar13 + 4) + (int)plVar19;
    uVar1 = 0xffffffff;
    if (uVar9 != 0xffffffff) {
      uVar1 = uVar9;
    }
    plVar19 = (longlong *)(ulonglong)uVar1;
  }
  local_1f0 = 0;
  local_1c8 = uVar1;
  if ((*DAT_146871078 != 0) && (cVar2 = FUN_1407ce010(DAT_146871078 + 1), cVar2 != '\0')) {
    plVar16 = (longlong *)*plVar8;
    plVar19 = plVar16 + (longlong)(int)plVar8[1] * 5;
    plVar17 = plVar18;
    if (plVar16 != plVar19) {
      do {
        if ((*(longlong *)*plVar16 == *DAT_146871078) &&
           (plVar17 = plVar16,
           *(longlong *)(((longlong *)*plVar16)[1] + 0x28) == *(longlong *)(DAT_146871078[1] + 0x28)
           )) break;
        plVar16 = plVar16 + 5;
        plVar17 = plVar18;
      } while (plVar16 != plVar19);
    }
    if (plVar17 == (longlong *)0x0) {
      local_170 = DAT_146871078;
      FUN_14217e740(local_168);
      FUN_142194380(local_168,0x1f,0,1,0);
      iVar14 = (int)plVar8[1];
      *(int *)(plVar8 + 1) = iVar14 + 1;
      local_168[0] = uVar1;
      if (*(int *)((longlong)plVar8 + 0xc) < iVar14 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar14);
      }
      puVar6 = (undefined8 *)(*plVar8 + (longlong)iVar14 * 0x28);
      *puVar6 = local_170;
      FUN_14217e5b0(puVar6 + 1,local_168);
      puVar11 = local_168;
    }
    else {
      FUN_14217e740(local_e8);
      FUN_142194380(local_e8,0x1f,0,1,0);
      local_e8[0] = uVar1;
      FUN_14217f450(plVar17 + 1,local_e8);
      puVar11 = local_e8;
    }
    FUN_14217f430(puVar11);
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      uVar4 = FUN_140aabba0(*(longlong *)(param_1 + 0x110) + 0x1a68,
                            *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2d8));
    }
  }
  local_22c = uVar4;
  FUN_140bfa9d0(plVar8,&DAT_146871080);
  cVar2 = FUN_14218a740(&local_1e8,1);
  plVar8 = plStack_1e0;
  if (cVar2 != '\0') {
    local_1b8 = local_1e8;
    plStack_1b0 = plStack_1e0;
    if (plStack_1e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_1e0 + 1) = (int)plStack_1e0[1] + 1;
      UNLOCK();
    }
    FUN_142194040(&local_1b8);
    plVar19 = plStack_1b0;
    plVar8 = plStack_1e0;
    if (plStack_1b0 != (longlong *)0x0) {
      LOCK();
      plVar16 = plStack_1b0 + 1;
      lVar5 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_1b0)(plStack_1b0);
        LOCK();
        piVar15 = (int *)((longlong)plVar19 + 0xc);
        iVar14 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        plVar8 = plStack_1e0;
        if (iVar14 == 1) {
          (**(code **)(*plVar19 + 8))(plVar19,1);
          plVar8 = plStack_1e0;
        }
      }
    }
  }
LAB_140e7a4bb:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar8 + 1;
    lVar5 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar15 = (int *)((longlong)plVar8 + 0xc);
      iVar14 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
LAB_140e7a4f4:
  piVar15 = local_248 + 1;
  local_248 = local_240;
  if (piVar15 == piVar12) goto LAB_140e7a510;
  goto LAB_140e7a1a0;
}



// FUNCTION 140e7ab80 FUN_140e7ab80 body=132 status=ok
// SIG undefined FUN_140e7ab80(void)

void FUN_140e7ab80(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x38);
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      if (plVar1[-2] != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xb;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140e7ac10 FUN_140e7ac10 body=131 status=ok
// SIG undefined FUN_140e7ac10(void)

void FUN_140e7ac10(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0xb0);
  piVar3 = piVar1 + (longlong)*(int *)(param_1 + 0xb8) * 0x10;
  if (piVar1 != piVar3) {
    while (*(longlong *)(piVar1 + 8) != param_2) {
      piVar1 = piVar1 + 0x10;
      if (piVar1 == piVar3) {
        return;
      }
    }
    *(undefined1 *)(piVar1 + 6) = param_3;
    if (*piVar1 == -1) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      *piVar1 = *(int *)(param_1 + 0x50);
      iVar2 = *(int *)(param_1 + 0x50);
      if (iVar2 == -1) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0x50) = iVar2;
    }
    piVar1[1] = piVar1[1] + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    if (*(int *)(param_1 + 0x54) == -1) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 140e7aca0 FUN_140e7aca0 body=277 status=ok
// SIG undefined FUN_140e7aca0(void)

void FUN_140e7aca0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int *piVar9;
  ulonglong uVar10;
  
  lVar5 = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0xc98);
  }
  if (lVar5 != 0) {
    piVar9 = *(int **)(param_1 + 0x100);
    piVar1 = piVar9 + (longlong)*(int *)(param_1 + 0x108) * 0x12;
    for (; piVar9 != piVar1; piVar9 = piVar9 + 0x12) {
      uVar7 = 0;
      plVar8 = *(longlong **)(piVar9 + 2);
      uVar10 = (longlong)piVar9[4] & 0x1fffffffffffffff;
      if (plVar8 + piVar9[4] < plVar8) {
        uVar10 = uVar7;
      }
      if (uVar10 != 0) {
        do {
          lVar2 = *plVar8;
          lVar6 = 0;
          if (lVar2 != 0) {
            lVar3 = FUN_142dfdfe0();
            lVar4 = lVar2;
            do {
              lVar6 = lVar2;
              if (lVar4 == lVar3) break;
              lVar4 = *(longlong *)(lVar4 + 0x30);
              lVar6 = 0;
            } while (lVar4 != 0);
          }
          FUN_142ddad60(lVar5,lVar6,*piVar9 == param_2);
          plVar8 = plVar8 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar10);
      }
    }
  }
  return;
}



// FUNCTION 140e7adc0 FUN_140e7adc0 body=207 status=ok
// SIG undefined FUN_140e7adc0(void)

void FUN_140e7adc0(longlong param_1)

{
  void *_Src;
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *local_18;
  int local_10;
  
  FUN_14233a670();
  local_10 = *(int *)(param_1 + 0x230);
  lVar3 = (longlong)local_10;
  puVar1 = (undefined8 *)0x0;
  _Src = *(void **)(param_1 + 0x228);
  local_18 = (undefined8 *)0x0;
  puVar5 = puVar1;
  if (local_10 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
    puVar5 = local_18;
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 << 3);
  }
  puVar2 = (undefined8 *)((ulonglong)((longlong)(puVar5 + local_10) + (7 - (longlong)puVar5)) >> 3);
  if (puVar5 + local_10 < puVar5) {
    puVar2 = puVar1;
  }
  puVar4 = puVar5;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      FUN_140e8e810(param_1,*puVar4);
      puVar1 = (undefined8 *)((longlong)puVar1 + 1);
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar2);
  }
  if (puVar5 != (undefined8 *)0x0) {
    FMemory::Free(puVar5);
  }
  return;
}



// FUNCTION 140e7ae90 FUN_140e7ae90 body=12 status=ok
// SIG undefined FUN_140e7ae90(void)

void FUN_140e7ae90(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140e7ae95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,1);
  return;
}



// FUNCTION 140e7aea0 FUN_140e7aea0 body=1778 status=ok
// SIG undefined FUN_140e7aea0(void)

void FUN_140e7aea0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 local_res8;
  undefined1 local_68 [16];
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  
  plVar5 = (longlong *)FUN_1422312c0();
  plVar11 = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
LAB_140e7af03:
    plVar5 = plVar11;
  }
  else {
    lVar6 = FUN_14141f270();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140e7af03;
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar6 == 0) || (lVar6 = UWorld::GetGameState<APVPGameState>(lVar6), lVar6 == 0)) {
    iVar10 = 1;
  }
  else {
    iVar10 = *(int *)(lVar6 + 0x6d4);
    *(bool *)(param_1 + 0x217) = iVar10 == 1;
    *(bool *)((longlong)param_1 + 0x175c) = iVar10 != 1;
  }
  FUN_140e88cd0(param_1,iVar10);
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = UWorld::GetGameState<APVPGameState>(uVar7);
    if (lVar6 != 0) {
      plVar1 = (longlong *)(lVar6 + 0x5e0);
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_1442e7fd8;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        plVar8[2] = (longlong)FUN_140e88cd0;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[4] = lVar9;
        *plVar8 = (longlong)&PTR_FUN_1442e8020;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_res8);
        iVar10 = *(int *)(lVar6 + 0x5e8);
        *(int *)(lVar6 + 0x5e8) = iVar10 + 1;
        if (*(int *)(lVar6 + 0x5ec) < iVar10 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar10);
        }
        lVar6 = *plVar1;
        *(longlong **)(lVar6 + (longlong)iVar10 * 0x10) = plVar8;
        *(undefined4 *)(lVar6 + 8 + (longlong)iVar10 * 0x10) = 3;
      }
    }
  }
  puVar12 = (undefined8 *)plVar5[0x1ac];
  puVar2 = puVar12 + (int)plVar5[0x1ad];
  for (; puVar12 != puVar2; puVar12 = puVar12 + 1) {
    local_res8 = *puVar12;
    cVar4 = FWeakObjectPtr::IsValid(&local_res8);
    if ((cVar4 != '\0') &&
       (lVar6 = FWeakObjectPtr::Get(&local_res8), *(char *)(lVar6 + 0x4a4) != '\0')) {
      uVar7 = FWeakObjectPtr::Get(&local_res8);
      FUN_140be2300(uVar7);
      *(undefined1 *)((longlong)param_1 + 0x10b9) = 1;
    }
  }
  if ((param_2 != 0) && (plVar5 = *(longlong **)(param_2 + 0x9c0), plVar5 != (longlong *)0x0)) {
    lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_140e7b147;
    }
  }
  plVar5 = plVar11;
LAB_140e7b147:
  param_1[0x8d] = (longlong)plVar5;
  if (param_1[0x8f] == 0) {
    lVar6 = FUN_140e20800();
    param_1[0x8f] = lVar6;
    if (lVar6 == 0) {
      return;
    }
  }
  if ((((param_1[0x8d] != 0) && (param_3 != 0)) && (param_1[0x8b] != 0)) &&
     ((param_1[0x90] != 0 && (param_1[0x91] != 0)))) {
    FUN_14145e530(param_1[0x8d],0);
    param_1[0x2ec] = *(longlong *)(param_1[0x8f] + 0xe8);
    param_1[0x8c] = param_2;
    FUN_140a296b0(param_1 + 0x156,param_1[0x8b] + 0x2e0);
    FUN_140a296b0(param_1 + 0x96,param_1 + 0x156);
    plVar5 = (longlong *)
             (**(code **)(*(longlong *)param_1[0x8d] + 0x720))((longlong *)param_1[0x8d],local_68);
    uVar13 = 0;
    param_1[0x93] = *plVar5;
    *(int *)(param_1 + 0x94) = (int)plVar5[1];
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar5 = (longlong *)FUN_142d5ecc0(uVar7);
    if ((plVar5 != (longlong *)0x0) &&
       (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b8))(plVar5), plVar5 != (longlong *)0x0)) {
      uVar13 = (**(code **)(*plVar5 + 8))(plVar5);
    }
    *(undefined4 *)((longlong)param_1 + 0x494) = uVar13;
    *(undefined4 *)(param_1[0x8b] + 0x8e8) = 0x3f800000;
    *(undefined4 *)(param_1[0x8b] + 0x8e0) = 0x461c4000;
    *(uint *)(param_1[0x8b] + 0x8ec) = *(uint *)(param_1[0x8b] + 0x8ec) | 1;
    FUN_142397540(param_1[0x8b],0,1);
    local_res8 = 0;
    FUN_142382f60(param_1[0x8b],param_3,&DAT_146532184,0);
    if (*(char *)((longlong)param_1 + 0x175f) == '\0') {
      FUN_140e776b0(param_1);
      if (param_1[0x8b] != 0) {
        FUN_140a296b0(param_1[0x8b] + 0x2e0,param_1 + 0x156);
        FUN_1423424e0(param_1[0x8b]);
        FUN_1423424c0(param_1[0x8b]);
      }
    }
    else {
      FUN_140e84fd0();
    }
    plVar5 = plVar11;
    if (param_1[0x90] != 0) {
      plVar5 = (longlong *)param_1[0x91];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
    local_58 = &PTR_FUN_1445c4dc0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0x100;
    (**(code **)(*(longlong *)param_1[0x8d] + 0xcc0))((longlong *)param_1[0x8d],&local_58);
    *(uint *)(param_1[0x8d] + 0x6a8) = *(uint *)(param_1[0x8d] + 0x6a8) | 1;
    FUN_140d13830(param_1[0x8d],1,DAT_146871358);
    *(undefined1 *)(param_1 + 0x92) = 1;
    FUN_1414a61e0(param_1);
    FUN_140e71220(param_1);
    *(undefined4 *)(param_1 + 0x216) = *(undefined4 *)(param_1[0x8d] + 0x6a0);
    *(undefined4 *)(param_1[0x8d] + 0x6a0) = *(undefined4 *)(param_1[0x8f] + 0xc4);
    *(undefined4 *)((longlong)param_1 + 0x10b4) = *(undefined4 *)(param_1[0x8d] + 0x69c);
    *(undefined4 *)(param_1[0x8d] + 0x69c) = *(undefined4 *)(param_1[0x8f] + 200);
    *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x20;
    *(undefined4 *)((longlong)param_1 + 300) = 500;
    (**(code **)(*param_1 + 0x2f8))(param_1,param_1[0x8d]);
    if ((param_1[0x26] != 0) && ((char)param_1[0x8e] != '\0')) {
      FUN_140e67950(param_1[0x26],DAT_146871360,param_1,&LAB_140e86af0);
      FUN_140e67950(param_1[0x26],DAT_146871368,param_1,&LAB_140e86af0);
      FUN_140e67950(param_1[0x26],DAT_146871370,param_1,&LAB_140e86b70);
      FUN_140e67950(param_1[0x26],DAT_146871378,param_1,&LAB_140e86b70);
      FUN_140e67950(param_1[0x26],DAT_146871380,param_1,&LAB_140e86bf0);
      FUN_140e67950(param_1[0x26],DAT_146871388,param_1,FUN_140e864f0);
      FUN_140e67950(param_1[0x26],DAT_146871390,param_1,FUN_140e864f0);
      FUN_140e67950(param_1[0x26],DAT_146871398,param_1,FUN_140e866b0);
      FUN_140e67950(param_1[0x26],DAT_1468713a0,param_1,FUN_140e86700);
      *(undefined1 *)(param_1 + 0x8e) = 0;
    }
    lVar6 = FUN_140a08d00();
    if ((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) {
      plVar11 = DAT_1468536c8;
    }
    if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x1e8) != 0)) && (plVar11 != (longlong *)0x0)) {
      FUN_1405a2690(plVar11);
    }
    FUN_140e6b990(&local_58);
  }
  return;
}



// FUNCTION 140e7b5a0 FUN_140e7b5a0 body=132 status=ok
// SIG undefined FUN_140e7b5a0(void)

void FUN_140e7b5a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  uVar2 = FUN_140e20800();
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  UUserWidget::AddToViewport(param_1 + -0x2f0,0);
  lVar1 = *(longlong *)(param_1 + 8);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x460) != 0)) && (*(longlong *)(lVar1 + 0x468) != 0))
  {
    (**(code **)(*(longlong *)(param_1 + -0x2f0) + 0x288))(param_1 + -0x2f0,0);
    FUN_1414a6220(param_1 + -0x2f0,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x460),
                  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x468));
  }
  return;
}



// FUNCTION 140e7b630 FUN_140e7b630 body=380 status=ok
// SIG undefined FUN_140e7b630(void)

ulonglong FUN_140e7b630(longlong param_1,longlong param_2,ulonglong param_3,char param_4,
                       char param_5)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  
  bVar2 = false;
  if ((*(longlong *)(param_1 + 0xc0) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x128) == '\x03')) {
    iVar3 = -1;
    if (0 < *(int *)(param_1 + 0xb8)) {
      lVar1 = *(longlong *)(param_1 + 0xb0);
      pcVar5 = (char *)(lVar1 + 0x18);
      uVar4 = 0;
      do {
        iVar8 = (int)uVar4;
        if (((*(longlong *)(pcVar5 + 8) != 0) && (*pcVar5 != '\0')) &&
           (param_2 == *(longlong *)(*(longlong *)(pcVar5 + 8) + 0x70))) {
          if (*(ulonglong *)(pcVar5 + -8) == param_3) {
            bVar2 = true;
            goto LAB_140e7b783;
          }
          if (iVar3 == -1) {
            iVar3 = iVar8;
            if (*(ulonglong *)(pcVar5 + -8) != 0) {
              iVar3 = -1;
            }
            if ((param_5 != '\0') && (iVar3 == -1)) {
              iVar3 = iVar8;
            }
          }
        }
        uVar4 = (ulonglong)(iVar8 + 1U);
        pcVar5 = pcVar5 + 0x40;
      } while ((int)(iVar8 + 1U) < *(int *)(param_1 + 0xb8));
      if (iVar3 != -1) {
        lVar7 = (longlong)iVar3 * 0x40;
        uVar4 = *(ulonglong *)(lVar7 + 0x10 + lVar1);
        *(ulonglong *)(lVar7 + 0x10 + lVar1) = param_3;
        piVar6 = (int *)(*(longlong *)(param_1 + 0xb0) + lVar7);
        if (*piVar6 == -1) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
          *piVar6 = *(int *)(param_1 + 0x50);
          iVar3 = *(int *)(param_1 + 0x50);
          if (iVar3 == -1) {
            iVar3 = 0;
          }
          *(int *)(param_1 + 0x50) = iVar3;
        }
        piVar6[1] = piVar6[1] + 1;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                  (param_1);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        if (*(int *)(param_1 + 0x54) == -1) {
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
        if (param_4 == '\0') {
          return uVar4;
        }
        FUN_140e96080(param_1,uVar4,param_3,
                      *(undefined8 *)(lVar7 + 0x20 + *(longlong *)(param_1 + 0xb0)));
        return uVar4;
      }
    }
  }
LAB_140e7b783:
  uVar4 = 0;
  if (bVar2) {
    uVar4 = param_3;
  }
  return uVar4;
}



// FUNCTION 140e7b7b0 FUN_140e7b7b0 body=482 status=ok
// SIG undefined FUN_140e7b7b0(void)

longlong FUN_140e7b7b0(longlong param_1,longlong param_2,longlong param_3,char param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  longlong local_38;
  undefined8 local_30;
  
  lVar7 = 0;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x128) != '\x03') {
    return 0;
  }
  piVar6 = *(int **)(param_1 + 0xb0);
  piVar4 = piVar6 + (longlong)*(int *)(param_1 + 0xb8) * 0x10;
  for (piVar5 = piVar6; piVar5 != piVar4; piVar5 = piVar5 + 0x10) {
    if (*(longlong *)(piVar5 + 4) == param_3) {
      lVar7 = *(longlong *)(piVar5 + 8);
      break;
    }
  }
  piVar5 = piVar6;
  if (lVar7 == param_2) {
    return 0;
  }
  while( true ) {
    if (piVar5 == piVar4) {
      return 0;
    }
    if (*(longlong *)(piVar5 + 8) == param_2) break;
    piVar5 = piVar5 + 0x10;
  }
  if ((char)piVar5[6] == '\0') {
    return 0;
  }
  lVar1 = *(longlong *)(piVar5 + 4);
  if (lVar7 != 0) {
    for (; piVar6 != piVar4; piVar6 = piVar6 + 0x10) {
      if (*(longlong *)(piVar6 + 8) == lVar7) {
        lVar2 = *(longlong *)(piVar6 + 4);
        piVar6[4] = 0;
        piVar6[5] = 0;
        if (*piVar6 == -1) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
          *piVar6 = *(int *)(param_1 + 0x50);
          iVar3 = *(int *)(param_1 + 0x50);
          if (iVar3 == -1) {
            iVar3 = 0;
          }
          *(int *)(param_1 + 0x50) = iVar3;
        }
        piVar6[1] = piVar6[1] + 1;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                  (param_1);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        if (*(int *)(param_1 + 0x54) == -1) {
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
        if ((((param_4 != '\0') && (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x128) == '\x03')) &&
            (*(longlong *)(param_1 + 0xd0) != 0)) && (lVar2 != 0)) {
          local_30 = *(undefined8 *)(piVar6 + 8);
          local_38 = lVar2;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (*(longlong *)(param_1 + 0xd0),&local_38);
        }
        break;
      }
    }
  }
  *(longlong *)(piVar5 + 4) = param_3;
  FFastArraySerializer::MarkItemDirty(param_1,piVar5);
  if (param_4 != '\0') {
    FUN_140e96080(param_1,lVar1,param_3,*(undefined8 *)(piVar5 + 8));
  }
  if (((param_5 != '\0') && (lVar7 != 0)) && (lVar1 != 0)) {
    FUN_140e7b7b0(param_1,lVar7,lVar1,param_4,0);
  }
  return lVar1;
}



// FUNCTION 140e7b9b0 FUN_140e7b9b0 body=69 status=ok
// SIG undefined FUN_140e7b9b0(void)

void FUN_140e7b9b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar3 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140e7ced0(uVar2,uVar1);
  }
  return;
}



// FUNCTION 140e7ba00 FUN_140e7ba00 body=69 status=ok
// SIG undefined FUN_140e7ba00(void)

void FUN_140e7ba00(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar3 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140e7c580(uVar2,uVar1);
  }
  return;
}



// FUNCTION 140e7ba50 FUN_140e7ba50 body=40 status=ok
// SIG undefined FUN_140e7ba50(void)

void FUN_140e7ba50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    FUN_142227350(lVar1,0,1);
    return;
  }
  return;
}



// FUNCTION 140e7ba80 FUN_140e7ba80 body=43 status=ok
// SIG undefined FUN_140e7ba80(void)

void FUN_140e7ba80(longlong param_1)

{
  undefined8 local_res8 [4];
  
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0) {
    local_res8[0] = *(undefined8 *)(param_1 + 0x10);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(param_1 + 8) + 0x38,local_res8);
  }
  return;
}



// FUNCTION 140e7bac0 FUN_140e7bac0 body=71 status=ok
// SIG undefined FUN_140e7bac0(void)

undefined1 FUN_140e7bac0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar3 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140e7ced0(uVar2,uVar1);
  }
  return 1;
}



// FUNCTION 140e7bb10 FUN_140e7bb10 body=71 status=ok
// SIG undefined FUN_140e7bb10(void)

undefined1 FUN_140e7bb10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar3 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140e7c580(uVar2,uVar1);
  }
  return 1;
}



// FUNCTION 140e7bb60 FUN_140e7bb60 body=38 status=ok
// SIG undefined FUN_140e7bb60(void)

undefined1 FUN_140e7bb60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    FUN_142227350(lVar1,0,1);
  }
  return 1;
}



// FUNCTION 140e7bb90 FUN_140e7bb90 body=45 status=ok
// SIG undefined FUN_140e7bb90(void)

undefined8 FUN_140e7bb90(longlong param_1)

{
  undefined8 local_res8 [4];
  
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0) {
    local_res8[0] = *(undefined8 *)(param_1 + 0x10);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(param_1 + 8) + 0x38,local_res8);
  }
  return 1;
}



// FUNCTION 140e7bbc0 FUN_140e7bbc0 body=20 status=ok
// SIG undefined FUN_140e7bbc0(void)

undefined1 FUN_140e7bbc0(longlong param_1)

{
  FUN_140e6df10(param_1 + 8);
  return 1;
}



// FUNCTION 140e7bbe0 ExecuteIfSafe body=32 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseRawMethodDelegateInstance<0,FOnlineAuthFlow,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&)>
::ExecuteIfSafe(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 140e7bc00 FUN_140e7bc00 body=2005 status=ok
// SIG undefined FUN_140e7bc00(void)

void FUN_140e7bc00(longlong *param_1)

{
  float *pfVar1;
  undefined1 uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float *pfVar9;
  longlong *plVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float local_res8;
  float local_resc;
  float local_res10;
  undefined1 local_128 [16];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined **local_108;
  undefined1 local_100;
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
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = UWorld::GetGameState<APVPGameState>(uVar7);
    if (lVar6 != 0) {
      FUN_140483870(lVar6 + 0x5e0,param_1);
    }
  }
  plVar10 = (longlong *)0x0;
  if (((int)param_1[0x219] != 0) && (plVar8 = (longlong *)param_1[0x218], plVar8 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    if (param_1[0x218] != 0) {
      lVar6 = FMemory::Realloc(param_1[0x218],0,0);
      param_1[0x218] = lVar6;
    }
    *(undefined4 *)(param_1 + 0x219) = 0;
  }
  if ((((param_1[0x8d] != 0) && (param_1[0x8b] != 0)) && (param_1[0x90] != 0)) &&
     (param_1[0x91] != 0)) {
    *(int *)(param_1[0x8d] + 0x6a0) = (int)param_1[0x216];
    *(undefined4 *)(param_1[0x8d] + 0x69c) = *(undefined4 *)((longlong)param_1 + 0x10b4);
    (**(code **)(*param_1 + 0x300))(param_1,param_1[0x8d]);
    param_1[0x26] = 0;
    *(undefined1 *)(param_1 + 0x8e) = 1;
    local_108 = &PTR_FUN_1445c4dd0;
    local_100 = 1;
    (**(code **)(*(longlong *)param_1[0x8d] + 0xcc0))((longlong *)param_1[0x8d],&local_108);
    *(uint *)(param_1[0x8d] + 0x6a8) = *(uint *)(param_1[0x8d] + 0x6a8) & 0xfffffffe;
    FUN_140d13830(param_1[0x8d],0,DAT_146871358);
    if (*(char *)((longlong)param_1 + 0x10b9) == '\0') {
      (**(code **)(*(longlong *)param_1[0x8d] + 0xef8))();
    }
    FUN_140e8f510(param_1);
    FUN_140a296b0(param_1[0x8b] + 0x2e0,param_1 + 0x96);
    plVar8 = plVar10;
    if (param_1[0x90] != 0) {
      plVar8 = (longlong *)param_1[0x91];
    }
    (**(code **)(*plVar8 + 0x18))();
    FUN_1414a6270(param_1);
    *(undefined1 *)(param_1 + 0x92) = 0;
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar6 == 0) {
      uVar11 = 0;
    }
    else {
      lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar11 = *(undefined4 *)(lVar6 + 0x790);
    }
    *(undefined4 *)(param_1 + 0x21a) = uVar11;
    *(uint *)(param_1[0x8b] + 0x8ec) = *(uint *)(param_1[0x8b] + 0x8ec) & 0xfffffffe;
    (**(code **)(*(longlong *)param_1[0x8b] + 0x418))((longlong *)param_1[0x8b],&DAT_14653218c);
    FUN_142397540(param_1[0x8b],1);
    cVar5 = *(char *)((longlong)param_1 + 0x10f1);
    uVar2 = *(undefined1 *)((longlong)param_1 + 0x10f2);
    cVar4 = cVar5;
    if ((char)param_1[0x2e6] != '\0') {
      *(undefined1 *)(param_1 + 0x2e6) = 0;
      FUN_140e701a0(param_1);
      cVar4 = *(char *)((longlong)param_1 + 0x10f1);
    }
    if (cVar4 != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x10f1) = 1;
      if ((param_1[0x8d] != 0) &&
         (plVar8 = *(longlong **)(param_1[0x8d] + 0x520), plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x6e8))(plVar8,1);
      }
    }
    if (*(char *)((longlong)param_1 + 0x10f2) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x10f2) = 0;
      FUN_140e6ff10(param_1);
    }
    *(char *)((longlong)param_1 + 0x10f1) = cVar5;
    *(undefined1 *)((longlong)param_1 + 0x10f2) = uVar2;
    if (1e-08 < ABS(*(float *)(param_1 + 0x94))) {
      FRotator::Quaternion(param_1 + 0x93,&local_118);
      fVar12 = local_118 + local_118;
      fVar13 = -local_110 + -local_110;
      fVar17 = local_10c * fVar13 + local_114 * fVar12;
      fVar16 = (local_110 * fVar13 - local_118 * fVar12) + 1.0;
      local_e0 = local_10c * fVar12 - local_114 * fVar13;
      fVar12 = fVar16 * fVar16 + fVar17 * fVar17;
      if (fVar12 == 1.0) {
        local_e4 = fVar16;
        local_e8 = fVar17;
        if (local_e0 != 0.0) {
LAB_140e7c07e:
          local_e4 = fVar16;
          local_e8 = fVar17;
          local_e0 = 0.0;
        }
      }
      else {
        local_e4 = DAT_1468b5d94;
        local_e8 = DAT_1468b5d90;
        local_e0 = DAT_1468b5d98;
        if (1e-08 <= fVar12) {
          auVar15 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
          fVar13 = auVar15._0_4_;
          fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
          fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
          fVar16 = fVar13 * fVar16;
          fVar17 = fVar17 * fVar13;
          goto LAB_140e7c07e;
        }
      }
      fVar12 = local_114 + local_114;
      fVar16 = -local_118 + -local_118;
      local_res10 = fVar12 * local_10c - local_110 * fVar16;
      local_d0 = (local_118 * fVar16 - fVar12 * local_114) + 1.0;
      local_res8 = fVar12 * local_110 + local_10c * fVar16;
      fVar17 = local_e8 * local_res8 - local_e4 * local_res10;
      fVar13 = local_e0 * local_res10 - local_e8 * local_d0;
      fVar12 = local_e4 * local_d0 - local_e0 * local_res8;
      fVar16 = fVar12 * fVar12 + fVar13 * fVar13 + fVar17 * fVar17;
      local_f8 = fVar12;
      local_f4 = fVar13;
      local_f0 = fVar17;
      if ((fVar16 != 1.0) &&
         (local_f8 = DAT_1468b5d90, local_f4 = DAT_1468b5d94, local_f0 = DAT_1468b5d98,
         1e-08 <= fVar16)) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
        fVar14 = auVar15._0_4_;
        fVar14 = fVar14 + fVar14 * (0.5 - fVar16 * 0.5 * fVar14 * fVar14);
        fVar14 = fVar14 + fVar14 * (0.5 - fVar16 * 0.5 * fVar14 * fVar14);
        local_f8 = fVar14 * fVar12;
        local_f4 = fVar14 * fVar13;
        local_f0 = fVar14 * fVar17;
      }
      local_c8 = DAT_1468b5d90;
      local_c4 = DAT_1468b5d94;
      local_c0 = DAT_1468b5d98;
      local_ec = 0;
      local_dc = 0;
      local_cc = 0;
      local_bc = 0x3f800000;
      local_d8 = local_res10;
      local_d4 = local_res8;
      plVar8 = (longlong *)FMatrix::Rotator(&local_f8,local_128);
      param_1[0x93] = *plVar8;
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    (**(code **)(*(longlong *)param_1[0x8d] + 0x728))((longlong *)param_1[0x8d],param_1 + 0x93,1);
    param_1[0x2ec] = 0;
    lVar6 = FUN_140a08d00();
    if ((DAT_1468536c6 != '\0') || (plVar8 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
      plVar8 = plVar10;
    }
    if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x38) != 0)) && (plVar8 != (longlong *)0x0)) {
      FUN_1405a2690();
    }
  }
  plVar8 = (longlong *)FUN_1422312c0(param_1);
  if (plVar8 != (longlong *)0x0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140e7c364;
  }
  plVar8 = plVar10;
LAB_140e7c364:
  pfVar9 = (float *)plVar8[0x1ac];
  pfVar1 = pfVar9 + (longlong)(int)plVar8[0x1ad] * 2;
  for (; pfVar9 != pfVar1; pfVar9 = pfVar9 + 2) {
    local_res8 = *pfVar9;
    local_resc = pfVar9[1];
    cVar5 = FWeakObjectPtr::IsValid(&local_res8);
    if (cVar5 != '\0') {
      uVar7 = FWeakObjectPtr::Get(&local_res8);
      FUN_140bf30f0(uVar7);
      *(undefined1 *)((longlong)param_1 + 0x10b9) = 0;
    }
  }
  return;
}



// FUNCTION 140e7c3e0 FUN_140e7c3e0 body=117 status=ok
// SIG undefined FUN_140e7c3e0(void)

void FUN_140e7c3e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x460) != 0)) && (*(longlong *)(lVar1 + 0x468) != 0))
  {
    (**(code **)(*(longlong *)(param_1 + -0x2f0) + 0x288))(param_1 + -0x2f0,2);
    FUN_1414a62b0(param_1 + -0x2f0,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x460),
                  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x468));
  }
  FUN_1406f9b00(param_1 + -0x2f0);
  return;
}



// FUNCTION 140e7c460 Find body=170 status=ok
// SIG undefined Find(void)

longlong TArray<FPermissionData,TSizedDefaultAllocator<32>_>::Find
                   (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined8 *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  puVar6 = puVar2;
  while( true ) {
    if (puVar6 == puVar2 + (longlong)iVar1 * 3) {
      return 0xffffffff;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar6 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar6;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if ((iVar3 == 0) && (*(char *)(puVar6 + 2) == *(char *)(param_2 + 2))) break;
    puVar6 = puVar6 + 3;
  }
  return ((longlong)puVar6 - (longlong)puVar2) / 0x18;
}



// FUNCTION 140e7c510 FUN_140e7c510 body=104 status=ok
// SIG undefined FUN_140e7c510(void)

void FUN_140e7c510(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar1 = FUN_1428e7a40();
    lVar2 = param_2;
    do {
      lVar3 = param_2;
      if (lVar2 == lVar1) goto LAB_140e7c542;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  lVar3 = 0;
LAB_140e7c542:
  lVar2 = FUN_142e7dfd0();
  if ((lVar3 != lVar2) || (*(longlong *)(param_1 + 0x650) == 0)) {
    AActor::FindComponentByClass(param_1,param_2);
  }
  return;
}



// FUNCTION 140e7c580 FUN_140e7c580 body=2371 status=ok
// SIG undefined FUN_140e7c580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140e7c79e) */

void FUN_140e7c580(longlong param_1,ulonglong param_2)

{
  undefined8 **ppuVar1;
  bool bVar2;
  undefined8 *_Src;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  undefined4 *local_430;
  undefined8 local_428;
  longlong *local_418;
  ulonglong local_410;
  undefined8 *local_408;
  int local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined8 *local_3e8;
  undefined1 *puStack_3e0;
  longlong local_3d8;
  longlong *local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined1 local_398;
  longlong local_390;
  undefined8 local_388;
  longlong local_380;
  undefined8 local_378;
  undefined2 local_370;
  undefined4 local_368 [2];
  undefined8 local_360;
  undefined8 local_358;
  longlong local_350;
  longlong *local_348;
  int local_340;
  int local_33c;
  longlong local_338;
  longlong local_328;
  longlong local_318;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e0 [8];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [16];
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  longlong local_2a8;
  undefined1 local_2a0;
  undefined8 *local_298;
  undefined1 *puStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [520];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  local_2a0 = 1;
  local_410 = param_2;
  local_2a8 = param_1;
  if (*(char *)(param_1 + 0x1e0) != '\0') goto LAB_140e7c90b;
  _guard_xfg_dispatch_icall_nop(local_368,0,0x68);
  local_360 = *(undefined8 *)(param_1 + 0x298);
  lVar15 = *(longlong *)(param_1 + 0x260);
  local_358 = *(undefined8 *)(param_1 + 0x2a0);
  lVar9 = lVar15 + (longlong)*(int *)(param_1 + 0x268) * 0x28;
  for (; lVar15 != lVar9; lVar15 = lVar15 + 0x28) {
    lVar6 = FWeakObjectPtr::Get(lVar15);
    if (lVar6 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar15 + 8)) &&
         (local_418 = (longlong *)0x0, *(longlong *)(lVar15 + 0x10) != 0)) {
        lVar6 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar15,lVar6);
        if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar15 + 8) = DAT_1464b56f4;
        }
        lVar6 = FWeakObjectPtr::Get(lVar15);
        if (lVar6 != 0) goto LAB_140e7c6a5;
      }
    }
    else {
LAB_140e7c6a5:
      lVar7 = FUN_14302b1c0();
      iVar3 = local_340;
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
        lVar7 = (longlong)local_340;
        for (plVar14 = local_348; plVar14 != local_348 + lVar7; plVar14 = plVar14 + 1) {
          if (*plVar14 == lVar6) {
            if ((int)((longlong)plVar14 - (longlong)local_348 >> 3) != -1) goto LAB_140e7c72f;
            break;
          }
        }
        local_340 = local_340 + 1;
        if (local_33c < local_340) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_348,iVar3);
        }
        local_348[lVar7] = lVar6;
      }
    }
LAB_140e7c72f:
  }
  plVar14 = *(longlong **)(param_1 + 0x118);
  plVar8 = (longlong *)0x0;
  if ((plVar14 == (longlong *)0x0) ||
     (plVar8 = (longlong *)(**(code **)(*plVar14 + 0x678))(plVar14), plVar8 == (longlong *)0x0)) {
    local_418 = (longlong *)0x0;
  }
  else {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (local_418 = plVar8,
       *(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
       lVar9 + 0x88)) {
      local_418 = (longlong *)0x0;
    }
  }
  if (plVar14 == (longlong *)0x0) {
LAB_140e7c7ef:
    plVar13 = (longlong *)0x0;
  }
  else {
    lVar9 = FUN_14145f370();
    if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar13 = plVar14;
    if (!bVar2) goto LAB_140e7c7ef;
  }
  lVar9 = param_1 + 0x270;
  cVar4 = FWeakObjectPtr::IsValid(lVar9);
  if (cVar4 == '\0') {
LAB_140e7c930:
    plVar12 = (longlong *)UNavModifierComponent::GetPrivateStaticClass();
    lVar15 = plVar12[0x1f];
    if (lVar15 == 0) {
      (**(code **)(*plVar12 + 0x368))(plVar12);
      lVar15 = plVar12[0x1f];
      if (lVar15 == 0) goto LAB_140e7c87b;
    }
    local_410 = CONCAT44(local_410._4_4_,1);
    if ((plVar13 != (longlong *)0x0) &&
       (plVar13 = (longlong *)FUN_140b823b0(plVar13), plVar13 != (longlong *)0x0)) {
      lVar6 = FUN_1414aa4c0();
      if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = (**(code **)(*plVar13 + 0x408))(plVar13);
        local_410 = CONCAT44(local_410._4_4_,uVar5);
        uVar5 = (**(code **)(*plVar13 + 0x400))(plVar13);
        *(undefined4 *)(param_1 + 0x200) = uVar5;
      }
    }
    local_368[0] = *(undefined4 *)(param_1 + 0x200);
    local_350 = FUN_141796df0(lVar15 + 0x40);
    if (local_350 == 0) {
LAB_140e7ca25:
      local_350 = 0;
    }
    else {
      lVar15 = FUN_14302d420();
      if ((*(int *)(*(longlong *)(local_350 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_350 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140e7ca25;
    }
    cVar4 = FUN_143003610(local_368);
    if (cVar4 == '\0') goto LAB_140e7c87b;
    local_3c8 = local_360;
    local_3c0 = local_358;
    local_3b8 = local_350;
    local_3b0 = local_368[0];
    local_3a8 = 0;
    local_3a0 = 0;
    local_398 = 0;
    local_390 = 0;
    local_388 = 0;
    local_380 = 0;
    local_378 = 0;
    local_370 = 1;
    FRotator::Quaternion(param_1 + 500,&local_3e8);
    lVar15 = *(longlong *)(param_1 + 0x120);
    local_298 = local_3e8;
    puStack_290 = puStack_3e0;
    local_288._12_4_ = 0;
    local_288._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1e8);
    local_278._4_4_ = DAT_1464aa788._4_4_;
    local_278._0_4_ = (undefined4)DAT_1464aa788;
    local_278._8_4_ = DAT_1464aa790;
    local_278._12_4_ = 0;
    if (lVar15 == 0) {
      lVar15 = FUN_1423407b0(param_1);
    }
    plVar13 = (longlong *)FUN_14301a2a0(lVar15,&local_3c8,&local_298,0);
    local_3d0 = plVar13;
    if (plVar13 == (longlong *)0x0) {
      uVar10 = FWeakObjectPtr::Get(lVar9);
      uVar11 = FWeakObjectPtr::Get(param_1 + 0x278);
      lVar6 = 0;
    }
    else {
      lVar15 = plVar13[0x23];
      lVar6 = 0;
      if (lVar15 != 0) {
        lVar7 = FUN_14148cad0();
        plVar12 = local_418;
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (local_418 != (longlong *)0x0) {
            FUN_1412403c0(lVar15,local_418);
            FUN_140c57510(plVar12,lVar15);
            if (DAT_146b33f38 == 0) {
              FUN_142d7ebe0();
            }
            local_3d8 = *(longlong *)(DAT_146b33f38 + 0xd8);
            if (local_3d8 != 0) {
              uVar10 = *(undefined8 *)(local_3d8 + 0x100);
              local_3f8 = 0;
              local_2f0 = FWeakObjectPtr::Get(param_1 + 0x278);
              local_3e8 = &local_2f8;
              puStack_3e0 = local_2e0;
              local_2f8 = uVar10;
              local_2d8 = local_3e8;
              uStack_2d0 = puStack_3e0;
              FUN_1405e1200(local_268,&local_2d8);
              lVar6 = *(longlong *)(param_1 + 0x120);
              local_3f4 = 0xffffffff;
              local_3f0 = 0;
              if (lVar6 == 0) {
                lVar6 = FUN_1423407b0(param_1);
              }
              local_430 = &local_3f8;
              local_428 = 0;
              local_438 = 0;
              FUN_1405f8040(local_2c8,lVar6,*(undefined8 *)(local_3d8 + 0x170),local_268);
              if (local_60 != 0) {
                FMemory::Free();
              }
            }
          }
          *(longlong *)(param_1 + 0x2a8) = lVar15;
          plVar13 = local_3d0;
          lVar6 = lVar15;
        }
      }
      (**(code **)(*plVar13 + 0x468))(plVar13,local_368,local_410 & 0xffffffff,1);
      UGameplayStatics::FinishSpawningActor(lVar15,&local_298);
      if (lVar6 != 0) {
        local_2b8 = *(undefined4 *)(param_1 + 0x204);
        uStack_2b4 = *(undefined4 *)(param_1 + 0x208);
        local_2b0 = *(undefined4 *)(param_1 + 0x20c);
        local_408 = (undefined8 *)0x0;
        local_400 = 3;
        TArray<int,FDefaultAllocator>::ResizeForCopy(&local_408,3);
        _Src = local_408;
        ppuVar1 = (undefined8 **)(lVar6 + 0x1098);
        *local_408 = CONCAT44(uStack_2b4,local_2b8);
        *(undefined4 *)(local_408 + 1) = local_2b0;
        if (ppuVar1 != &local_408) {
          *(int *)(lVar6 + 0x10a0) = local_400;
          if ((local_400 == 0) && (*(int *)(lVar6 + 0x10a4) == 0)) {
            *(undefined4 *)(lVar6 + 0x10a4) = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(ppuVar1,local_400);
            _guard_xfg_dispatch_icall_nop(*ppuVar1,_Src,(longlong)local_400 << 2);
          }
        }
        if (_Src != (undefined8 *)0x0) {
          FMemory::Free(_Src);
        }
        FUN_141210270(lVar6);
      }
      cVar4 = FWeakObjectPtr::IsValid(lVar9);
      if (cVar4 != '\0') {
        if (*(longlong *)(param_1 + 0x280) == 0) {
LAB_140e7cdd4:
          bVar2 = false;
        }
        else {
          cVar4 = FWeakObjectPtr::IsValid();
          if (cVar4 == '\0') goto LAB_140e7cdd4;
          bVar2 = true;
        }
        if (bVar2) {
          plVar13 = *(longlong **)(param_1 + 0x280);
          uVar10 = FWeakObjectPtr::Get(lVar9);
          (**(code **)(*plVar13 + 0x48))(plVar13,uVar10,lVar6);
        }
      }
      lVar15 = *(longlong *)(param_1 + 0x120);
      if (lVar15 == 0) {
        lVar15 = FUN_1423407b0(param_1);
      }
      lVar15 = FUN_14126dac0(lVar15);
      if (((lVar15 != 0) && (plVar14 != (longlong *)0x0)) && (plVar8 != (longlong *)0x0)) {
        FUN_141269380(lVar15,plVar8);
        FUN_14120db40(lVar6,plVar8);
        uVar10 = (**(code **)(*plVar8 + 0x148))(plVar8);
        FUN_141269e20(lVar15,uVar10);
        if (local_418 != (longlong *)0x0) {
          FUN_140c58a40(local_418,lVar6);
        }
      }
      uVar10 = FWeakObjectPtr::Get(lVar9);
      uVar11 = FWeakObjectPtr::Get(param_1 + 0x278);
    }
    FUN_140e86fd0(param_1,uVar11,uVar10,lVar6);
    if (local_380 != 0) {
      FMemory::Free();
    }
    if (local_390 != 0) {
      FMemory::Free();
    }
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (&local_3a8);
  }
  else {
    if ((*(longlong *)(param_1 + 0x280) == 0) ||
       (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x278), cVar4 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) || (plVar13 == (longlong *)0x0)) goto LAB_140e7c930;
    plVar12 = *(longlong **)(param_1 + 0x280);
    uVar10 = FWeakObjectPtr::Get(lVar9);
    cVar4 = (**(code **)(*plVar12 + 0x28))
                      (plVar12,uVar10,local_410,*(undefined1 *)(param_1 + 0x288));
    if (cVar4 != '\0') goto LAB_140e7c930;
    (**(code **)(**(longlong **)(param_1 + 0x280) + 0x50))(*(longlong **)(param_1 + 0x280),plVar13);
LAB_140e7c87b:
    uVar10 = FWeakObjectPtr::Get(lVar9);
    uVar11 = FWeakObjectPtr::Get(param_1 + 0x278);
    FUN_140e86fd0(param_1,uVar11,uVar10,0);
  }
  if (local_318 != 0) {
    FMemory::Free();
  }
  if (local_328 != 0) {
    FMemory::Free();
  }
  if (local_338 != 0) {
    FMemory::Free();
  }
  if (local_348 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_140e7c90b:
  FUN_140e6b220(&local_2a8);
  return;
}



// FUNCTION 140e7ced0 FUN_140e7ced0 body=1661 status=ok
// SIG undefined FUN_140e7ced0(void)

void FUN_140e7ced0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  int local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  lVar4 = param_1 + 0x210;
  lVar3 = FWeakObjectPtr::Get(lVar4);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x218)) && (*(longlong *)(param_1 + 0x220) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x218) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar4);
      if (lVar3 != 0) goto LAB_140e7cf75;
    }
LAB_140e7cfab:
    lVar3 = 0;
  }
  else {
LAB_140e7cf75:
    lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e7cfab;
  }
  lVar4 = param_1 + 0x238;
  *(longlong *)(param_1 + 0x298) = lVar3;
  lVar3 = FWeakObjectPtr::Get(lVar4);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x240)) && (*(longlong *)(param_1 + 0x248) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x240) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar4);
      if (lVar3 != 0) goto LAB_140e7d02b;
    }
LAB_140e7d061:
    lVar3 = 0;
  }
  else {
LAB_140e7d02b:
    lVar4 = FUN_14301f840();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e7d061;
  }
  *(longlong *)(param_1 + 0x2a0) = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x260);
  local_b8 = 0;
  local_b0 = 0;
  lVar4 = lVar3 + (longlong)*(int *)(param_1 + 0x268) * 0x28;
  if (lVar3 != lVar4) {
    do {
      lVar5 = FWeakObjectPtr::Get(lVar3);
      if (lVar5 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar3 + 8)) && (*(longlong *)(lVar3 + 0x10) != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar3,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar3 + 8) = DAT_1464b56f4;
          }
          lVar5 = FWeakObjectPtr::Get(lVar3);
          if (lVar5 != 0) goto LAB_140e7d11d;
        }
      }
      else {
LAB_140e7d11d:
        lVar6 = FUN_14302b1c0();
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
          lVar6 = FUN_1430e5bb0();
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
            plVar11 = *(longlong **)(lVar5 + 0x208);
            plVar10 = plVar11 + *(int *)(lVar5 + 0x210);
            for (; plVar11 != plVar10; plVar11 = plVar11 + 1) {
              plVar9 = (longlong *)*plVar11;
              if (plVar9 != (longlong *)0x0) {
                lVar5 = FUN_1414943e0();
                if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                    lVar5 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x2d0))(plVar9,&local_98);
                  iVar12 = *(int *)(puVar7 + 1);
                  if (iVar12 != 0) {
                    if (local_b0._4_4_ < (int)local_b0 + iVar12) {
                      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                      ::ResizeTo(&local_b8);
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)(local_b8 + (longlong)(int)local_b0 * 0x18),(void *)*puVar7,
                               (longlong)iVar12 * 0x18);
                    *(undefined4 *)(puVar7 + 1) = 0;
                    local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + iVar12);
                  }
                  if (local_90 != 0) {
                    plVar9 = (longlong *)(local_98 + 8);
                    iVar12 = local_90;
                    do {
                      if (*plVar9 != 0) {
                        FMemory::Free();
                      }
                      plVar9 = plVar9 + 3;
                      iVar12 = iVar12 + -1;
                    } while (iVar12 != 0);
                  }
                  if (local_98 != 0) {
                    FMemory::Free();
                  }
                }
              }
              lVar5 = *plVar11;
              if (lVar5 != 0) {
                lVar6 = FUN_141495ba0();
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
                  puVar7 = (undefined8 *)FUN_141223d20(lVar5,&local_88);
                  iVar12 = *(int *)(puVar7 + 1);
                  if (iVar12 != 0) {
                    if (local_b0._4_4_ < (int)local_b0 + iVar12) {
                      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                      ::ResizeTo(&local_b8);
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)(local_b8 + (longlong)(int)local_b0 * 0x18),(void *)*puVar7,
                               (longlong)iVar12 * 0x18);
                    *(undefined4 *)(puVar7 + 1) = 0;
                    local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + iVar12);
                  }
                  if (local_80 != 0) {
                    plVar9 = (longlong *)(local_88 + 8);
                    iVar12 = local_80;
                    do {
                      if (*plVar9 != 0) {
                        FMemory::Free();
                      }
                      plVar9 = plVar9 + 3;
                      iVar12 = iVar12 + -1;
                    } while (iVar12 != 0);
                  }
                  if (local_88 != 0) {
                    FMemory::Free();
                  }
                }
              }
            }
          }
        }
      }
      lVar3 = lVar3 + 0x28;
    } while (lVar3 != lVar4);
    if ((int)local_b0 != 0) {
      FWeakObjectPtr::operator=(&local_res20,param_2);
      FWeakObjectPtr::operator=(&local_res18,param_1);
      local_a8 = 0;
      local_78 = local_res18;
      local_74 = local_res1c;
      local_70 = local_res20;
      local_6c = local_res24;
      local_a0 = 0x1f;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      FGenericPlatformString::Memcpy(local_a8,L"RequestAsyncLoad ArrayDelegate",0x3e);
      local_68 = 0;
      local_60 = 0;
      puVar7 = (undefined8 *)operator_new(0x28,&local_68);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_GetPoolName_1445cb730;
        *(undefined4 *)(puVar7 + 1) = local_res18;
        *(undefined4 *)((longlong)puVar7 + 0xc) = local_res1c;
        *(undefined4 *)(puVar7 + 2) = local_res20;
        *(undefined4 *)((longlong)puVar7 + 0x14) = local_res24;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[4] = uVar8;
        *puVar7 = &PTR_GetPoolName_1445cb778;
      }
      lVar4 = FUN_1422ca050();
      puVar7 = (undefined8 *)
               FUN_142840b00(lVar4 + 0x178,local_58,&local_b8,&local_68,0,1,0,&local_a8);
      if ((undefined8 *)(param_1 + 0x2c8) != puVar7) {
        *(undefined8 *)(param_1 + 0x2c8) = *puVar7;
        *puVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2d0,puVar7 + 1);
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_50 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      if (local_a8 != 0) {
        FMemory::Free();
      }
      goto LAB_140e7d4d4;
    }
  }
  FUN_140e7c580(param_1,param_2);
LAB_140e7d4d4:
  if ((int)local_b0 != 0) {
    plVar10 = (longlong *)(local_b8 + 8);
    iVar12 = (int)local_b0;
    do {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 3;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e7d550 FUN_140e7d550 body=989 status=ok
// SIG undefined FUN_140e7d550(void)

longlong * FUN_140e7d550(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18 [2];
  ulonglong local_res20;
  longlong local_1b8 [2];
  undefined2 *local_1a8;
  undefined8 local_1a0;
  undefined **local_198;
  longlong *local_190;
  byte local_170;
  byte local_16f;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined **local_c8 [19];
  undefined1 local_30;
  
  if (*(int *)(param_1 + 8) == 0) {
    return (longlong *)0x0;
  }
  FArchive::FArchive(&local_198);
  local_198 = &PTR_FUN_143f4a3a0;
  plVar3 = (longlong *)0x0;
  local_f8 = 0x7fffffffffffffff;
  local_108 = 0;
  local_100 = param_1;
  FArchive::SetIsLoading(&local_198,1);
  FArchive::SetIsPersistent(&local_198,1);
  if ((int *)local_190[1] < (int *)*local_190 + 1) {
    (*(code *)local_198[10])(&local_198,local_res8,4);
    if ((local_16f & 0x10) != 0) {
      FArchive::ByteSwap(&local_198,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*local_190;
    *local_190 = *local_190 + 4;
  }
  if (local_res8[0] == 0x53415647) {
    if ((int *)local_190[1] < (int *)*local_190 + 1) {
      (*(code *)local_198[10])(&local_198,local_res18,4);
      if ((local_16f & 0x10) != 0) {
        FArchive::ByteSwap(&local_198,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(int *)*local_190;
      *local_190 = *local_190 + 4;
    }
    if ((undefined4 *)local_190[1] < (undefined4 *)*local_190 + 1) {
      (*(code *)local_198[10])(&local_198,local_res10,4);
      if ((local_16f & 0x10) != 0) {
        FArchive::ByteSwap(&local_198,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(undefined4 *)*local_190;
      *local_190 = *local_190 + 4;
    }
    FEngineVersion::FEngineVersion(local_e8);
    operator<<(&local_198,local_e8);
    UGameUserSettings::SetPostProcessingQuality(&local_198,local_res10[0]);
    FArchive::SetEngineVer(&local_198,local_e8);
    if (1 < local_res18[0]) {
      if ((undefined4 *)local_190[1] < (undefined4 *)*local_190 + 1) {
        (*(code *)local_198[10])(&local_198,&local_res20,4);
        if ((local_16f & 0x10) != 0) {
          FArchive::ByteSwap(&local_198,&local_res20,4);
        }
      }
      else {
        local_res20 = CONCAT44(local_res20._4_4_,*(undefined4 *)*local_190);
        *local_190 = *local_190 + 4;
      }
      local_1b8[0] = 0;
      local_1b8[1] = 0;
      FCustomVersionContainer::Serialize(local_1b8,&local_198,local_res20 & 0xffffffff);
      FUN_141695050(&local_198,local_1b8);
      if (local_1b8[0] != 0) {
        FMemory::Free();
      }
    }
    local_1a8 = (undefined2 *)0x0;
    local_1a0 = 0;
    FUN_14158ce90(&local_198,local_1b8 + 2);
    if ((local_170 & 0x80) == 0) {
      puVar4 = &DAT_143f3eda8;
      if ((int)local_1a0 != 0) {
        puVar4 = local_1a8;
      }
      uVar1 = FUN_14171bfe0();
      lVar2 = FUN_141799410(uVar1,0xffffffffffffffff,puVar4);
      if (lVar2 == 0) {
        puVar4 = &DAT_143f3eda8;
        if ((int)local_1a0 != 0) {
          puVar4 = local_1a8;
        }
        uVar1 = FUN_14171bfe0();
        lVar2 = FUN_141799c90(uVar1,0,puVar4,0,0,0,1);
      }
      if (lVar2 != 0) {
        local_res20 = 0;
        uVar1 = GetTransientPackage();
        local_1b8[0] = 0;
        FUN_1417846f0(uVar1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        plVar3 = (longlong *)FUN_1417985e0(lVar2,uVar1,0,0,0,0,0,0,0);
        FArchiveProxy::FArchiveProxy(local_c8,&local_198);
        local_30 = 1;
        local_c8[0] = &PTR_FUN_143f4a5b0;
        (**(code **)(*plVar3 + 0xa8))(plVar3,local_c8);
        FArchive::~FArchive(local_c8);
      }
    }
    if (local_1a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_d8 != 0) {
      FMemory::Free();
    }
  }
  FArchive::~FArchive(&local_198);
  return plVar3;
}



// FUNCTION 140e7d930 FUN_140e7d930 body=322 status=ok
// SIG undefined FUN_140e7d930(void)

int FUN_140e7d930(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong local_res20;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined1 local_10 [8];
  
  if ((int)param_2 < 0) {
    FTimespan::Assign(&local_28,-(int)param_2,0,0,0,0);
    FTimespan::Assign(&local_20,0,0x11,0,0,0);
    plVar2 = (longlong *)FDateTime::UtcNow(local_10);
    local_res20 = (*plVar2 - local_28) - local_20;
  }
  else {
    FTimespan::Assign(&local_28,param_2,0,0,0,0);
    FTimespan::Assign(&local_20,0,0x11,0,0,0);
    plVar2 = (longlong *)FDateTime::UtcNow(local_10);
    local_res20 = (*plVar2 - local_20) + local_28;
  }
  iVar1 = FDateTime::GetMonth(&local_res20);
  if (iVar1 - 3U < 9) {
    FTimespan::Assign(&local_20,0,1,0,0,0);
    local_res20 = local_res20 + local_20;
  }
  FDateTime::FDateTime(&local_18,1999,2,0x12,0xc,0,0,0);
  return (int)((double)(local_res20 / 864000000000) - (double)(local_18 / 864000000000));
}



// FUNCTION 140e7da80 FUN_140e7da80 body=337 status=ok
// SIG undefined FUN_140e7da80(void)

int FUN_140e7da80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong local_res20;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined1 local_10 [8];
  
  if ((int)param_2 < 0) {
    FTimespan::Assign(&local_28,-(int)param_2,0,0,0,0);
    FTimespan::Assign(&local_20,0,0x11,0,0,0);
    plVar2 = (longlong *)FDateTime::UtcNow(local_10);
    local_res20 = (*plVar2 - local_28) - local_20;
  }
  else {
    FTimespan::Assign(&local_28,param_2,0,0,0,0);
    FTimespan::Assign(&local_20,0,0x11,0,0,0);
    plVar2 = (longlong *)FDateTime::UtcNow(local_10);
    local_res20 = (*plVar2 - local_20) + local_28;
  }
  iVar1 = FDateTime::GetMonth(&local_res20);
  if (iVar1 - 3U < 9) {
    FTimespan::Assign(&local_20,0,1,0,0,0);
    local_res20 = local_res20 + local_20;
  }
  FDateTime::FDateTime(&local_18,1999,2,0x12,0,0,0,0);
  return (int)((double)(local_res20 / 864000000000) - (double)(local_18 / 864000000000)) / 7;
}



// FUNCTION 140e7dbe0 FUN_140e7dbe0 body=96 status=ok
// SIG undefined FUN_140e7dbe0(void)

undefined8 * FUN_140e7dbe0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0xb) == '\0') {
    puVar2 = (undefined8 *)FUN_140e7e2d0();
    if (puVar2 != param_1) {
      if (*(char *)(param_1 + 0xb) != '\0') {
        *(undefined1 *)(param_1 + 0xb) = 0;
      }
      uVar1 = puVar2[1];
      *param_1 = *puVar2;
      param_1[1] = uVar1;
      uVar1 = puVar2[3];
      param_1[2] = puVar2[2];
      param_1[3] = uVar1;
      uVar1 = puVar2[5];
      param_1[4] = puVar2[4];
      param_1[5] = uVar1;
      uVar1 = puVar2[7];
      param_1[6] = puVar2[6];
      param_1[7] = uVar1;
      uVar1 = puVar2[9];
      param_1[8] = puVar2[8];
      param_1[9] = uVar1;
      param_1[10] = puVar2[10];
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
  }
  return param_1;
}



// FUNCTION 140e7dc40 FUN_140e7dc40 body=459 status=ok
// SIG undefined FUN_140e7dc40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e7dc40(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  longlong local_28;
  longlong local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468715d0) {
    _Init_thread_header(&DAT_1468715d0);
    if (DAT_1468715d0 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"VaultCardActivated",1);
      uVar2 = FUN_14217c7e0(local_38,L"gbxtelemetry",L"VaultCardActivated",&DAT_1445b223c);
      FUN_14217c110(&DAT_1468715b0,*puVar1,uVar2);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_1468715b8);
      FUN_14217bd20(&DAT_1468715c0);
      FUN_14217bd20(&DAT_1468715c8);
      uVar2 = DAT_1468715b0;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_1468715b0;
      _DAT_1468715b8 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"vaultcard_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_1468715b0;
      _DAT_1468715c0 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"previous_vaultcard_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      _DAT_1468715c8 = *puVar1;
      _Init_thread_footer(&DAT_1468715d0);
      return &DAT_1468715b0;
    }
  }
  return &DAT_1468715b0;
}



// FUNCTION 140e7de10 FUN_140e7de10 body=601 status=ok
// SIG undefined FUN_140e7de10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e7de10(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  longlong local_28;
  longlong local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146871608) {
    _Init_thread_header(&DAT_146871608);
    if (DAT_146871608 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"VaultCardChallengeCompleted",1);
      uVar2 = FUN_14217c7e0(local_38,L"gbxtelemetry",L"VaultCardChallengeCompleted",&DAT_1445b2294);
      FUN_14217c110(&DAT_1468715d8,*puVar1,uVar2);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_1468715e0);
      FUN_14217bd20(&DAT_1468715e8);
      FUN_14217bd20(&DAT_1468715f0);
      FUN_14217bd20(&DAT_1468715f8);
      FUN_14217bd20(&DAT_146871600);
      uVar2 = DAT_1468715d8;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_1468715d8;
      _DAT_1468715e0 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"vaultcard_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_1468715d8;
      _DAT_1468715e8 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"challenge_name",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_1468715d8;
      _DAT_1468715f0 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"challenge_description",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_1468715d8;
      _DAT_1468715f8 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"weekly_challenge",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      _DAT_146871600 = *puVar1;
      _Init_thread_footer(&DAT_146871608);
      return &DAT_1468715d8;
    }
  }
  return &DAT_1468715d8;
}



// FUNCTION 140e7e070 FUN_140e7e070 body=601 status=ok
// SIG undefined FUN_140e7e070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e7e070(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  longlong local_28;
  longlong local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146871640) {
    _Init_thread_header(&DAT_146871640);
    if (DAT_146871640 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"VaultCardChallengeSelected",1);
      uVar2 = FUN_14217c7e0(local_38,L"gbxtelemetry",L"VaultCardChallengeSelected",&DAT_1445b234c);
      FUN_14217c110(&DAT_146871610,*puVar1,uVar2);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_146871618);
      FUN_14217bd20(&DAT_146871620);
      FUN_14217bd20(&DAT_146871628);
      FUN_14217bd20(&DAT_146871630);
      FUN_14217bd20(&DAT_146871638);
      uVar2 = DAT_146871610;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146871610;
      _DAT_146871618 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"vaultcard_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146871610;
      _DAT_146871620 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"challenge_name",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146871610;
      _DAT_146871628 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"challenge_description",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146871610;
      _DAT_146871630 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"weekly_challenge",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      _DAT_146871638 = *puVar1;
      _Init_thread_footer(&DAT_146871640);
      return &DAT_146871610;
    }
  }
  return &DAT_146871610;
}



// FUNCTION 140e7e2d0 FUN_140e7e2d0 body=111 status=ok
// SIG undefined FUN_140e7e2d0(void)

undefined * FUN_140e7e2d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146871518) {
    _Init_thread_header(&DAT_146871518);
    if (DAT_146871518 == -1) {
      FUN_140e69740(&DAT_1468714c0);
      _Init_thread_footer(&DAT_146871518);
      return &DAT_1468714c0;
    }
  }
  return &DAT_1468714c0;
}



// FUNCTION 140e7e340 FUN_140e7e340 body=111 status=ok
// SIG undefined FUN_140e7e340(void)

undefined * FUN_140e7e340(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146871568) {
    _Init_thread_header(&DAT_146871568);
    if (DAT_146871568 == -1) {
      FUN_140e69a50(&DAT_146871520);
      _Init_thread_footer(&DAT_146871568);
      return &DAT_146871520;
    }
  }
  return &DAT_146871520;
}



// FUNCTION 140e7e3b0 FUN_140e7e3b0 body=530 status=ok
// SIG undefined FUN_140e7e3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e7e3b0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  longlong local_28;
  longlong local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468714b0) {
    _Init_thread_header(&DAT_1468714b0);
    if (DAT_1468714b0 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"VaultCardLevelUp",1);
      uVar2 = FUN_14217c7e0(local_38,L"gbxtelemetry",L"VaultCardLevelUp",&DAT_1445b1fac);
      FUN_14217c110(&DAT_146871488,*puVar1,uVar2);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_146871490);
      FUN_14217bd20(&DAT_146871498);
      FUN_14217bd20(&DAT_1468714a0);
      FUN_14217bd20(&DAT_1468714a8);
      uVar2 = DAT_146871488;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146871488;
      _DAT_146871490 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"vaultcard_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146871488;
      _DAT_146871498 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"vaultcard_experience",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146871488;
      _DAT_1468714a0 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"vaultcard_level",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      _DAT_1468714a8 = *puVar1;
      _Init_thread_footer(&DAT_1468714b0);
      return &DAT_146871488;
    }
  }
  return &DAT_146871488;
}



// FUNCTION 140e7e5d0 FUN_140e7e5d0 body=111 status=ok
// SIG undefined FUN_140e7e5d0(void)

undefined * FUN_140e7e5d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468715a8) {
    _Init_thread_header(&DAT_1468715a8);
    if (DAT_1468715a8 == -1) {
      FUN_140e69d40(&DAT_146871570);
      _Init_thread_footer(&DAT_1468715a8);
      return &DAT_146871570;
    }
  }
  return &DAT_146871570;
}



// FUNCTION 140e7e640 FUN_140e7e640 body=111 status=ok
// SIG undefined FUN_140e7e640(void)

undefined * FUN_140e7e640(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146871480) {
    _Init_thread_header(&DAT_146871480);
    if (DAT_146871480 == -1) {
      FUN_140e69f90(&DAT_146871410);
      _Init_thread_footer(&DAT_146871480);
      return &DAT_146871410;
    }
  }
  return &DAT_146871410;
}



// FUNCTION 140e7e6b0 FUN_140e7e6b0 body=51 status=ok
// SIG undefined FUN_140e7e6b0(void)

longlong FUN_140e7e6b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UNavModifierComponent::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 140e7e6f0 FUN_140e7e6f0 body=38 status=ok
// SIG undefined FUN_140e7e6f0(void)

undefined8 FUN_140e7e6f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_140c12480();
    if (lVar1 != 0) {
      uVar2 = AAIController::GetPerceptionComponent(lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140e7e720 FUN_140e7e720 body=17 status=ok
// SIG undefined FUN_140e7e720(void)

undefined8 FUN_140e7e720(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 0;
  }
  lVar1 = FUN_140e7e760(*(longlong *)(param_1 + 0x20) + 0x228);
  if (lVar1 != 0) {
    uVar2 = FUN_142d52a20(lVar1);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d5fed0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140e7e760 FUN_140e7e760 body=230 status=ok
// SIG undefined FUN_140e7e760(void)

longlong * FUN_140e7e760(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_28 [32];
  
  if ((int)((uint)param_2 & 0xff) < (int)param_1[1]) {
    plVar10 = (longlong *)((param_2 & 0xff) * 0xf8 + *param_1);
    if ((*plVar10 != 0) && (*(longlong *)(*plVar10 + 0x48) != 0)) {
      plVar9 = plVar10 + 0x1c;
      cVar5 = FUN_142d52a00(plVar9);
      if (((cVar5 == '\0') && (plVar1 = (longlong *)param_1[2], plVar1 != (longlong *)0x0)) &&
         ((char)plVar1[0x25] != '\x03')) {
        uVar6 = FUN_142e1a5a0();
        lVar7 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
        if (lVar7 != 0) {
          puVar8 = (undefined4 *)FUN_142d62190(lVar7,local_28,*(undefined8 *)(*plVar10 + 0x48));
          uVar2 = puVar8[1];
          uVar3 = puVar8[2];
          uVar4 = puVar8[3];
          *(undefined4 *)plVar9 = *puVar8;
          *(undefined4 *)((longlong)plVar10 + 0xe4) = uVar2;
          *(undefined4 *)(plVar10 + 0x1d) = uVar3;
          *(undefined4 *)((longlong)plVar10 + 0xec) = uVar4;
          plVar10[0x1e] = *(longlong *)(puVar8 + 4);
          cVar5 = FUN_142d52a00(plVar9);
        }
      }
      if (cVar5 == '\0') {
        plVar9 = (longlong *)0x0;
      }
      return plVar9;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140e7e870 FUN_140e7e870 body=200 status=ok
// SIG undefined FUN_140e7e870(void)

void FUN_140e7e870(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)param_1[0x92];
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1429e18b0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x830))(plVar1,param_2,param_3);
      return;
    }
  }
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x790))(param_1,local_18);
  *param_2 = *puVar4;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar4 + 1);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x798))(param_1,local_18);
  *param_3 = *puVar4;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar4 + 1);
  return;
}



// FUNCTION 140e7e940 FUN_140e7e940 body=430 status=ok
// SIG undefined FUN_140e7e940(void)

float * FUN_140e7e940(longlong *param_1,float *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x840))();
  if (plVar1 == (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x798))(param_1,&local_48);
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x828))(plVar1,&local_48,param_3,param_4);
  }
  *(undefined8 *)param_2 = *puVar2;
  param_2[2] = *(float *)(puVar2 + 1);
  plVar1 = (longlong *)(**(code **)(param_1[0x99] + 0xf0))(param_1 + 0x99,param_4);
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x4f9) != '\0')) {
    (**(code **)(*plVar1 + 0x928))(plVar1,local_38,&local_48);
    if ((DAT_14629cdf0 == *param_2) &&
       ((DAT_14629cdf4 == param_2[1] && (DAT_14629cdf8 == param_2[2])))) {
      *(undefined8 *)param_2 = local_48;
    }
    else {
      puVar2 = (undefined8 *)FUN_1412604c0(local_28,&local_48,param_2,(int)param_1[0x9a]);
      *(undefined8 *)param_2 = *puVar2;
      local_40 = *(float *)(puVar2 + 1);
    }
    param_2[2] = local_40;
  }
  fVar4 = (float)(**(code **)(param_1[0x99] + 0x138))(param_1 + 0x99,param_4);
  if (plVar1 != (longlong *)0x0) {
    fVar5 = (float)FUN_143079090(plVar1);
    fVar4 = fVar4 * fVar5;
  }
  if (0.0 < fVar4) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    puVar2 = (undefined8 *)FUN_141262700(local_28,uVar3,plVar1,param_2,fVar4,0,0);
    *(undefined8 *)param_2 = *puVar2;
    param_2[2] = *(float *)(puVar2 + 1);
  }
  return param_2;
}



// FUNCTION 140e7eaf0 FUN_140e7eaf0 body=209 status=ok
// SIG undefined FUN_140e7eaf0(void)

void FUN_140e7eaf0(longlong param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  int *piVar3;
  int *piVar4;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 200);
  }
  param_3[2] = 0;
  if (param_3[3] != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  piVar3 = *(int **)(param_1 + 0x100);
  piVar1 = piVar3 + (longlong)*(int *)(param_1 + 0x108) * 0x12;
  if (piVar3 != piVar1) {
    piVar4 = piVar3 + 2;
    do {
      if ((*piVar3 == param_2) && (param_3 != piVar4)) {
        iVar2 = piVar4[2];
        _Src = *(void **)piVar4;
        param_3[2] = iVar2;
        if ((iVar2 == 0) && (param_3[3] == 0)) {
          param_3[3] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_3,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)param_3,_Src,(longlong)iVar2 << 3);
        }
      }
      piVar3 = piVar3 + 0x12;
      piVar4 = piVar4 + 0x12;
    } while (piVar3 != piVar1);
  }
  return;
}



// FUNCTION 140e7ebd0 FUN_140e7ebd0 body=473 status=ok
// SIG undefined FUN_140e7ebd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e7ebd0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong local_res8;
  longlong local_38 [2];
  
  if (DAT_146871250 != 0) {
    return &DAT_146871258;
  }
  puVar5 = (undefined8 *)FUN_1410c9b90(local_38);
  puVar10 = (undefined8 *)0x0;
  if ((longlong **)puVar5 != &DAT_146871258) {
    if (DAT_146871258 != (longlong *)0x0) {
      FMemory::Free();
    }
    DAT_146871258 = (longlong *)*puVar5;
    *puVar5 = 0;
    DAT_146871260 = *(int *)(puVar5 + 1);
    _DAT_146871264 = *(undefined4 *)((longlong)puVar5 + 0xc);
    puVar5[1] = 0;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (DAT_146871254 < DAT_146871260) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146871248,DAT_146871260);
  }
  puVar5 = (undefined8 *)((longlong)DAT_146871260 & 0x1fffffffffffffff);
  if (DAT_146871258 + DAT_146871260 < DAT_146871258) {
    puVar5 = puVar10;
  }
  puVar9 = puVar10;
  plVar11 = DAT_146871258;
  if (puVar5 != (undefined8 *)0x0) {
    do {
      iVar4 = DAT_146871250;
      lVar7 = (longlong)DAT_146871250;
      lVar2 = *plVar11;
      DAT_146871250 = DAT_146871250 + 1;
      if (DAT_146871254 < DAT_146871250) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146871248,iVar4);
      }
      lVar3 = DAT_146871248;
      *(undefined8 *)(DAT_146871248 + lVar7 * 8) = 0;
      plVar1 = (longlong *)(lVar3 + lVar7 * 8);
      if (lVar2 != 0) {
        puVar6 = (undefined8 *)operator_new(0x18);
        puVar8 = puVar10;
        if (puVar6 != (undefined8 *)0x0) {
          FGCObject::FGCObject(puVar6);
          *puVar6 = &PTR__scalar_deleting_destructor__1440f8f50;
          puVar6[2] = lVar2;
          puVar8 = puVar6;
        }
        if (plVar1 == &local_res8) {
          if (puVar8 != (undefined8 *)0x0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
        else {
          puVar6 = (undefined8 *)*plVar1;
          *plVar1 = (longlong)puVar8;
          if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6,1);
          }
        }
      }
      puVar9 = (undefined8 *)((longlong)puVar9 + 1);
      plVar11 = plVar11 + 1;
    } while (puVar9 != puVar5);
  }
  return &DAT_146871258;
}



// FUNCTION 140e7edb0 FUN_140e7edb0 body=235 status=ok
// SIG undefined FUN_140e7edb0(void)

longlong * FUN_140e7edb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 == 0) {
    return param_2;
  }
  plVar4 = *(longlong **)(lVar2 + 0x1118);
  uVar5 = (longlong)*(int *)(lVar2 + 0x1120) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(lVar2 + 0x1120) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 == 0) {
    return param_2;
  }
  do {
    lVar2 = *plVar4;
    if (lVar2 != 0) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + 0xa0);
    }
    plVar4 = plVar4 + 1;
    uVar3 = uVar3 + 1;
  } while (uVar3 != uVar5);
  return param_2;
}



// FUNCTION 140e7eeb0 FUN_140e7eeb0 body=59 status=ok
// SIG undefined FUN_140e7eeb0(void)

void FUN_140e7eeb0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_142ceeb40(*(undefined8 *)(param_1 + 0x4d8),1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e7eed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x678))(plVar1);
    return;
  }
  AK::MemoryMgr::GetPoolName((long)param_1);
  return;
}



// FUNCTION 140e7eef0 FUN_140e7eef0 body=29 status=ok
// SIG undefined FUN_140e7eef0(void)

undefined8 FUN_140e7eef0(longlong *param_1,byte param_2)

{
  if ((int)(uint)param_2 < (int)param_1[1]) {
    return *(undefined8 *)((ulonglong)param_2 * 0xf8 + *param_1);
  }
  return 0;
}



// FUNCTION 140e7ef10 FUN_140e7ef10 body=62 status=ok
// SIG undefined FUN_140e7ef10(void)

undefined8 FUN_140e7ef10(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)*param_1;
    puVar2 = puVar1 + (longlong)(int)param_1[1] * 0x1f;
    for (; puVar1 != puVar2; puVar1 = puVar1 + 0x1f) {
      if ((puVar1[1] == param_2) || (puVar1[2] == param_2)) {
        return *puVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140e7ef50 FUN_140e7ef50 body=42 status=ok
// SIG undefined FUN_140e7ef50(void)

ulonglong FUN_140e7ef50(longlong *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (0 < (int)param_1[1]) {
    do {
      if (*(longlong *)((longlong)(int)uVar2 * 0xf8 + *param_1) == param_2) {
        return uVar2;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while ((int)uVar1 < (int)param_1[1]);
  }
  return CONCAT71((int7)(uVar2 >> 8),0xff);
}



// FUNCTION 140e7ef80 FUN_140e7ef80 body=43 status=ok
// SIG undefined FUN_140e7ef80(void)

ulonglong FUN_140e7ef80(longlong *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (0 < (int)param_1[1]) {
    do {
      if (*(longlong *)((longlong)(int)uVar2 * 0xf8 + 8 + *param_1) == param_2) {
        return uVar2;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while ((int)uVar1 < (int)param_1[1]);
  }
  return CONCAT71((int7)(uVar2 >> 8),0xff);
}



// FUNCTION 140e7efb0 FUN_140e7efb0 body=8 status=ok
// SIG undefined FUN_140e7efb0(void)

undefined1 FUN_140e7efb0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x10f3);
}



// FUNCTION 140e7efc0 FUN_140e7efc0 body=1180 status=ok
// SIG undefined FUN_140e7efc0(void)

void FUN_140e7efc0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  bVar15 = 0;
  lVar16 = *(longlong *)(param_2 + 0x18);
  lVar9 = (longlong)*(int *)(param_2 + 0x20) * 0x50 + lVar16;
  for (; lVar16 != lVar9; lVar16 = lVar16 + 0x50) {
    lVar13 = *(longlong *)(param_1 + 0x1a8);
    lVar17 = (longlong)*(int *)(param_1 + 0x1b0) * 0x88 + lVar13;
    if (lVar13 != lVar17) {
      puVar14 = (undefined8 *)(lVar13 + 0x28);
      do {
        FSoftObjectPath::ToString(lVar16 + 0x10,&local_70);
        FSoftObjectPath::ToString(puVar14 + -3,&local_80);
        puVar12 = &DAT_143f3eda8;
        if (local_68 != 0) {
          puVar12 = local_70;
        }
        puVar11 = &DAT_143f3eda8;
        if (local_78 != 0) {
          puVar11 = local_80;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
        if (local_80 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_70 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (iVar8 == 0) {
          iVar8 = (int)param_4[1];
          *(int *)(param_4 + 1) = iVar8 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar8 + 1) {
            TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_4,iVar8);
          }
          uVar7 = puVar14[1];
          lVar3 = *param_4;
          lVar10 = (longlong)iVar8 * 0x58;
          *(undefined8 *)(lVar10 + lVar3) = *puVar14;
          ((undefined8 *)(lVar10 + lVar3))[1] = uVar7;
          uVar7 = puVar14[3];
          puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar3);
          *puVar1 = puVar14[2];
          puVar1[1] = uVar7;
          uVar7 = puVar14[5];
          puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar3);
          *puVar1 = puVar14[4];
          puVar1[1] = uVar7;
          uVar7 = puVar14[7];
          puVar1 = (undefined8 *)(lVar10 + 0x30 + lVar3);
          *puVar1 = puVar14[6];
          puVar1[1] = uVar7;
          uVar4 = *(undefined4 *)((longlong)puVar14 + 0x44);
          uVar5 = *(undefined4 *)(puVar14 + 9);
          uVar6 = *(undefined4 *)((longlong)puVar14 + 0x4c);
          puVar2 = (undefined4 *)(lVar10 + 0x40 + lVar3);
          *puVar2 = *(undefined4 *)(puVar14 + 8);
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          *(undefined8 *)(lVar10 + 0x50 + lVar3) = puVar14[10];
          bVar15 = bVar15 | *(byte *)(puVar14 + 0xb);
        }
        lVar13 = lVar13 + 0x88;
        puVar14 = puVar14 + 0x11;
      } while (lVar13 != lVar17);
    }
  }
  lVar16 = *(longlong *)(param_1 + 0x1b8);
  lVar9 = (longlong)*(int *)(param_1 + 0x1c0) * 0x88 + lVar16;
  if (lVar16 != lVar9) {
    puVar14 = (undefined8 *)(lVar16 + 0x28);
    do {
      lVar13 = *(longlong *)(param_2 + 0x28);
      lVar17 = (longlong)*(int *)(param_2 + 0x30) * 0x78 + lVar13;
      for (; lVar13 != lVar17; lVar13 = lVar13 + 0x78) {
        FSoftObjectPath::ToString(lVar13 + 0x60,&local_80);
        FSoftObjectPath::ToString(puVar14 + -3,&local_70);
        puVar12 = &DAT_143f3eda8;
        if (local_78 != 0) {
          puVar12 = local_80;
        }
        puVar11 = &DAT_143f3eda8;
        if (local_68 != 0) {
          puVar11 = local_70;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
        if (local_70 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_80 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (iVar8 == 0) {
          iVar8 = (int)param_4[1];
          *(int *)(param_4 + 1) = iVar8 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar8 + 1) {
            TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_4,iVar8);
          }
          uVar7 = puVar14[1];
          lVar3 = *param_4;
          lVar10 = (longlong)iVar8 * 0x58;
          *(undefined8 *)(lVar10 + lVar3) = *puVar14;
          ((undefined8 *)(lVar10 + lVar3))[1] = uVar7;
          uVar7 = puVar14[3];
          puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar3);
          *puVar1 = puVar14[2];
          puVar1[1] = uVar7;
          uVar7 = puVar14[5];
          puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar3);
          *puVar1 = puVar14[4];
          puVar1[1] = uVar7;
          uVar7 = puVar14[7];
          puVar1 = (undefined8 *)(lVar10 + 0x30 + lVar3);
          *puVar1 = puVar14[6];
          puVar1[1] = uVar7;
          uVar4 = *(undefined4 *)((longlong)puVar14 + 0x44);
          uVar5 = *(undefined4 *)(puVar14 + 9);
          uVar6 = *(undefined4 *)((longlong)puVar14 + 0x4c);
          puVar2 = (undefined4 *)(lVar10 + 0x40 + lVar3);
          *puVar2 = *(undefined4 *)(puVar14 + 8);
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          *(undefined8 *)(lVar10 + 0x50 + lVar3) = puVar14[10];
          bVar15 = bVar15 | *(byte *)(puVar14 + 0xb);
        }
      }
      lVar13 = *param_3;
      lVar17 = (longlong)(int)param_3[1] * 0x50 + lVar13;
      for (; lVar13 != lVar17; lVar13 = lVar13 + 0x50) {
        FSoftObjectPath::ToString(lVar13 + 0x38,&local_50);
        FSoftObjectPath::ToString(puVar14 + -3,&local_60);
        puVar12 = &DAT_143f3eda8;
        if (local_48 != 0) {
          puVar12 = local_50;
        }
        puVar11 = &DAT_143f3eda8;
        if (local_58 != 0) {
          puVar11 = local_60;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
        if (local_60 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_50 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (iVar8 == 0) {
          iVar8 = (int)param_4[1];
          *(int *)(param_4 + 1) = iVar8 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar8 + 1) {
            TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_4,iVar8);
          }
          uVar7 = puVar14[1];
          lVar3 = *param_4;
          lVar10 = (longlong)iVar8 * 0x58;
          *(undefined8 *)(lVar10 + lVar3) = *puVar14;
          ((undefined8 *)(lVar10 + lVar3))[1] = uVar7;
          uVar7 = puVar14[3];
          puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar3);
          *puVar1 = puVar14[2];
          puVar1[1] = uVar7;
          uVar7 = puVar14[5];
          puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar3);
          *puVar1 = puVar14[4];
          puVar1[1] = uVar7;
          uVar7 = puVar14[7];
          puVar1 = (undefined8 *)(lVar10 + 0x30 + lVar3);
          *puVar1 = puVar14[6];
          puVar1[1] = uVar7;
          uVar4 = *(undefined4 *)((longlong)puVar14 + 0x44);
          uVar5 = *(undefined4 *)(puVar14 + 9);
          uVar6 = *(undefined4 *)((longlong)puVar14 + 0x4c);
          puVar2 = (undefined4 *)(lVar10 + 0x40 + lVar3);
          *puVar2 = *(undefined4 *)(puVar14 + 8);
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          *(undefined8 *)(lVar10 + 0x50 + lVar3) = puVar14[10];
          bVar15 = bVar15 | *(byte *)(puVar14 + 0xb);
        }
      }
      lVar16 = lVar16 + 0x88;
      puVar14 = puVar14 + 0x11;
    } while (lVar16 != lVar9);
  }
  if ((bVar15 == 0) && (*(longlong *)(param_1 + 0x150) != 0)) {
    lVar13 = FUN_1414ca080();
    lVar16 = *(longlong *)(param_1 + 0x150);
    lVar9 = lVar16;
    if (lVar16 != 0) {
      while (lVar9 != lVar13) {
        lVar9 = *(longlong *)(lVar9 + 0x30);
        if (lVar9 == 0) {
          return;
        }
      }
      if (lVar16 != 0) {
        iVar8 = (int)param_4[1];
        *(int *)(param_4 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar8 + 1) {
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_4,iVar8);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x158);
        lVar16 = *param_4;
        lVar9 = (longlong)iVar8 * 0x58;
        *(undefined8 *)(lVar9 + lVar16) = *(undefined8 *)(param_1 + 0x150);
        ((undefined8 *)(lVar9 + lVar16))[1] = uVar7;
        uVar7 = *(undefined8 *)(param_1 + 0x168);
        puVar14 = (undefined8 *)(lVar9 + 0x10 + lVar16);
        *puVar14 = *(undefined8 *)(param_1 + 0x160);
        puVar14[1] = uVar7;
        uVar7 = *(undefined8 *)(param_1 + 0x178);
        puVar14 = (undefined8 *)(lVar9 + 0x20 + lVar16);
        *puVar14 = *(undefined8 *)(param_1 + 0x170);
        puVar14[1] = uVar7;
        uVar7 = *(undefined8 *)(param_1 + 0x188);
        puVar14 = (undefined8 *)(lVar9 + 0x30 + lVar16);
        *puVar14 = *(undefined8 *)(param_1 + 0x180);
        puVar14[1] = uVar7;
        uVar7 = *(undefined8 *)(param_1 + 0x198);
        puVar14 = (undefined8 *)(lVar9 + 0x40 + lVar16);
        *puVar14 = *(undefined8 *)(param_1 + 400);
        puVar14[1] = uVar7;
        *(undefined8 *)(lVar9 + 0x50 + lVar16) = *(undefined8 *)(param_1 + 0x1a0);
      }
    }
  }
  return;
}



// FUNCTION 140e7f460 FUN_140e7f460 body=348 status=ok
// SIG undefined FUN_140e7f460(void)

longlong FUN_140e7f460(longlong param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 != '\0') {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + -0x360);
  if (lVar5 != 0) {
    lVar2 = FUN_1429bed90();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar5;
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + -0x360) + 400);
    if (lVar5 != 0) {
      lVar2 = FUN_1429bed90();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar5;
      }
    }
    lVar5 = *(longlong *)(param_1 + -0x3b0);
    if (lVar5 != 0) {
      uVar3 = FUN_1430a8880();
      plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar3);
      if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e7f544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,0);
        return lVar5;
      }
      lVar5 = (**(code **)(**(longlong **)(param_1 + -0x3b0) + 0x3b8))();
      if (lVar5 != 0) {
        lVar2 = FUN_1429bed90();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return lVar5;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140e7f5c0 FUN_140e7f5c0 body=133 status=ok
// SIG undefined FUN_140e7f5c0(void)

undefined8 FUN_140e7f5c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if (param_3 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = *(char *)(param_3 + 0x688);
  }
  iVar1 = *(int *)(param_1 + 0x1c8);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1c0))) {
    lVar4 = (longlong)iVar1 * 0x188 + *(longlong *)(param_1 + 0x1b8);
    lVar2 = FUN_1410cac90(lVar4);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x30) == cVar3)) {
      FUN_140e6bf90(param_2,lVar4);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e7f650 FUN_140e7f650 body=369 status=ok
// SIG undefined FUN_140e7f650(void)

undefined8 FUN_140e7f650(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x30);
    plVar1 = plVar2 + *(int *)(param_1 + 0x38);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        return 0;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x40);
    plVar1 = plVar2 + *(int *)(param_1 + 0x48);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        return 1;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x50);
    plVar1 = plVar2 + *(int *)(param_1 + 0x58);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        return 2;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x60);
    plVar1 = plVar2 + *(int *)(param_1 + 0x68);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        return 3;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x70);
    plVar1 = plVar2 + *(int *)(param_1 + 0x78);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        return 4;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0xa0);
    plVar1 = plVar2 + *(int *)(param_1 + 0xa8);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        return 7;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x80);
    plVar1 = plVar2 + *(int *)(param_1 + 0x88);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        return 5;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x90);
    plVar1 = plVar2 + *(int *)(param_1 + 0x98);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        return 6;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 140e7f7d0 FUN_140e7f7d0 body=30 status=ok
// SIG undefined FUN_140e7f7d0(void)

undefined8 FUN_140e7f7d0(longlong *param_1,byte param_2)

{
  if ((int)(uint)param_2 < (int)param_1[1]) {
    return *(undefined8 *)((ulonglong)param_2 * 0xf8 + 0x18 + *param_1);
  }
  return 0;
}



// FUNCTION 140e7f7f0 get_HeldUseInputThreshold body=9 status=ok
// SIG undefined get_HeldUseInputThreshold(void)

undefined4 uhx::glues::AGCharacter_Glue_obj::get_HeldUseInputThreshold(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1700);
}



// FUNCTION 140e7f800 FUN_140e7f800 body=128 status=ok
// SIG undefined FUN_140e7f800(void)

undefined8 * FUN_140e7f800(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)(param_1 + -0x38);
  *(undefined4 *)param_2 = 0x3f000000;
  *(undefined4 *)((longlong)param_2 + 4) = 0x3f000000;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x1058))(plVar1,local_res8);
      *param_2 = *puVar4;
    }
  }
  return param_2;
}



// FUNCTION 140e7f880 FUN_140e7f880 body=62 status=ok
// SIG undefined FUN_140e7f880(void)

undefined8 FUN_140e7f880(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 200);
  }
  piVar1 = *(int **)(param_1 + 0xd0);
  piVar2 = piVar1 + (longlong)*(int *)(param_1 + 0xd8) * 0x16;
  while( true ) {
    if (piVar1 == piVar2) {
      return 0;
    }
    if (*piVar1 == param_2) break;
    piVar1 = piVar1 + 0x16;
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return *(undefined8 *)(piVar1 + 2);
}



// FUNCTION 140e7f8c0 FUN_140e7f8c0 body=9 status=ok
// SIG undefined FUN_140e7f8c0(void)

undefined4 FUN_140e7f8c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1704);
}


