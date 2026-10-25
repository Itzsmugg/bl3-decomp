// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141586010 FUN_141586010 body=325 status=ok
// SIG undefined FUN_141586010(void)

void FUN_141586010(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0xc0);
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0xb8);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0x78);
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x70);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  iVar5 = *(int *)(param_1 + 0x68);
  plVar4 = *(longlong **)(param_1 + 0x60);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x60);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  plVar4 = *(longlong **)(param_1 + 0x58);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141586160 FUN_141586160 body=619 status=ok
// SIG undefined FUN_141586160(void)

void FUN_141586160(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x790);
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
  plVar4 = *(longlong **)(param_1 + 0x778);
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
  plVar4 = *(longlong **)(param_1 + 0x760);
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
  plVar4 = *(longlong **)(param_1 + 0x748);
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
  plVar4 = *(longlong **)(param_1 + 0x730);
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
  plVar4 = *(longlong **)(param_1 + 0x718);
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
  plVar4 = *(longlong **)(param_1 + 0x700);
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
  plVar4 = *(longlong **)(param_1 + 0x6e8);
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
  plVar4 = *(longlong **)(param_1 + 0x6d0);
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
  plVar4 = *(longlong **)(param_1 + 0x6b8);
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
  FUN_140e9c5f0(param_1);
  return;
}



// FUNCTION 1415863d0 FUN_1415863d0 body=139 status=ok
// SIG undefined FUN_1415863d0(void)

void FUN_1415863d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x180);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x170);
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141586460 FUN_141586460 body=536 status=ok
// SIG undefined FUN_141586460(void)

void FUN_141586460(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x878);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x850);
  plVar4 = *(longlong **)(param_1 + 0x840);
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if ((*(uint *)(param_1 + 0x800) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x10))
              (*(longlong **)(param_1 + 0x7f8),param_1 + 0x7e8,*(undefined8 *)(param_1 + 0x808));
    *(undefined8 *)(param_1 + 0x7f8) = 0;
  }
  *(undefined4 *)(param_1 + 0x800) = 0;
  if ((*(uint *)(param_1 + 2000) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x10))
              (*(longlong **)(param_1 + 0x7c8),param_1 + 0x7b8,*(undefined8 *)(param_1 + 0x7d8));
    *(undefined8 *)(param_1 + 0x7c8) = 0;
  }
  *(undefined4 *)(param_1 + 2000) = 0;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x718);
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
  plVar4 = *(longlong **)(param_1 + 0x700);
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
  plVar4 = *(longlong **)(param_1 + 0x6e8);
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
  plVar4 = *(longlong **)(param_1 + 0x6d0);
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
  plVar4 = *(longlong **)(param_1 + 0x6b8);
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
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  return;
}



// FUNCTION 141586770 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ALandscapeStreamingProxy::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140a51170();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x668);
  }
  return param_1;
}



// FUNCTION 1415867b0 FUN_1415867b0 body=87 status=ok
// SIG undefined FUN_1415867b0(void)

longlong FUN_1415867b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b39a8;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x520);
  }
  return param_1;
}



// FUNCTION 141586810 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPlayer::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141586850 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTouchInterface::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141586890 FUN_141586890 body=64 status=ok
// SIG undefined FUN_141586890(void)

longlong FUN_141586890(longlong param_1,ulonglong param_2)

{
  FUN_141585d10(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1415868d0 FUN_1415868d0 body=193 status=ok
// SIG undefined FUN_1415868d0(void)

longlong FUN_1415868d0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x118);
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 1415869a0 FUN_1415869a0 body=79 status=ok
// SIG undefined FUN_1415869a0(void)

longlong FUN_1415869a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1415869f0 FUN_1415869f0 body=52 status=ok
// SIG undefined FUN_1415869f0(void)

undefined8 FUN_1415869f0(undefined8 param_1,ulonglong param_2)

{
  FUN_141586010();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 141586a30 FUN_141586a30 body=127 status=ok
// SIG undefined FUN_141586a30(void)

longlong FUN_141586a30(longlong param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0x368) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x360) + 0x10))
              (*(longlong **)(param_1 + 0x360),param_1 + 0x350,*(undefined8 *)(param_1 + 0x370));
    *(undefined8 *)(param_1 + 0x360) = 0;
  }
  *(undefined4 *)(param_1 + 0x368) = 0;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x390);
  }
  return param_1;
}



// FUNCTION 141586ab0 FUN_141586ab0 body=207 status=ok
// SIG undefined FUN_141586ab0(void)

longlong FUN_141586ab0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x6c0);
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
  plVar4 = *(longlong **)(param_1 + 0x6a8);
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
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x710);
  }
  return param_1;
}



// FUNCTION 141586b80 FUN_141586b80 body=52 status=ok
// SIG undefined FUN_141586b80(void)

undefined8 FUN_141586b80(undefined8 param_1,ulonglong param_2)

{
  FUN_1415863d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 141586bc0 FUN_141586bc0 body=67 status=ok
// SIG undefined FUN_141586bc0(void)

longlong FUN_141586bc0(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x6a0);
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x720);
  }
  return param_1;
}



// FUNCTION 141586c10 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FActiveSound::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141586160();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7b0);
  }
  return param_1;
}



// FUNCTION 141586c50 FUN_141586c50 body=172 status=ok
// SIG undefined FUN_141586c50(void)

longlong FUN_141586c50(longlong param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0x3a8) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x10))
              (*(longlong **)(param_1 + 0x3a0),param_1 + 0x390,*(undefined8 *)(param_1 + 0x3b0));
    *(undefined8 *)(param_1 + 0x3a0) = 0;
  }
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  if ((*(uint *)(param_1 + 0x378) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x370) + 0x10))
              (*(longlong **)(param_1 + 0x370),param_1 + 0x360,*(undefined8 *)(param_1 + 0x380));
    *(undefined8 *)(param_1 + 0x370) = 0;
  }
  *(undefined4 *)(param_1 + 0x378) = 0;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3d0);
  }
  return param_1;
}



// FUNCTION 141586d00 FUN_141586d00 body=73 status=ok
// SIG undefined FUN_141586d00(void)

longlong FUN_141586d00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6c0);
  }
  return param_1;
}



// FUNCTION 141586d50 FUN_141586d50 body=120 status=ok
// SIG undefined FUN_141586d50(void)

longlong FUN_141586d50(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x170);
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 141586dd0 FUN_141586dd0 body=285 status=ok
// SIG undefined FUN_141586dd0(void)

longlong FUN_141586dd0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x1a0);
  plVar2 = *(longlong **)(param_1 + 0x198);
  if (iVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = *(longlong **)(param_1 + 0x198);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  iVar3 = *(int *)(param_1 + 400);
  plVar2 = *(longlong **)(param_1 + 0x188);
  if (iVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = *(longlong **)(param_1 + 0x188);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x170);
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 141586ef0 FUN_141586ef0 body=193 status=ok
// SIG undefined FUN_141586ef0(void)

longlong FUN_141586ef0(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x178);
  plVar2 = *(longlong **)(param_1 + 0x170);
  if (iVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = *(longlong **)(param_1 + 0x170);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 141586fc0 FUN_141586fc0 body=102 status=ok
// SIG undefined FUN_141586fc0(void)

longlong FUN_141586fc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x6a0);
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x830);
  }
  return param_1;
}



// FUNCTION 141587030 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UTemplateSequencePlayer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141586460();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x890);
  }
  return param_1;
}



// FUNCTION 141587070 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AARSharedWorldPlayerController::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e9c5f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x680);
  }
  return param_1;
}



// FUNCTION 1415870b0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCableComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6a0);
  }
  return param_1;
}



// FUNCTION 141587100 FUN_141587100 body=222 status=ok
// SIG undefined FUN_141587100(void)

longlong FUN_141587100(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x208);
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
  FUN_141320a80(param_1 + 0x1d0);
  FUN_1413a2890(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 1415871e0 FUN_1415871e0 body=142 status=ok
// SIG undefined FUN_1415871e0(void)

longlong FUN_1415871e0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 141587270 FUN_141587270 body=150 status=ok
// SIG undefined FUN_141587270(void)

longlong FUN_141587270(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x708);
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x720);
  }
  return param_1;
}



// FUNCTION 141587310 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULogoutCallbackProxy::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141587370 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FOnlineProxyStoreOffer>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0xe8);
  FUN_141585850(param_2);
  return;
}



// FUNCTION 141587450 FUN_141587450 body=333 status=ok
// SIG undefined FUN_141587450(void)

undefined8 FUN_141587450(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x98);
    do {
      *(undefined8 *)(puVar1 + -0x26) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x98);
      FString::operator=(puVar1 + -0x24,param_3 + -0x90 + (longlong)puVar1);
      FString::operator=(puVar1 + -0x20,param_3 + -0x80 + (longlong)puVar1);
      FString::operator=(puVar1 + -0x1c,param_3 + -0x70 + (longlong)puVar1);
      FString::operator=(puVar1 + -0x18,param_3 + -0x60 + (longlong)puVar1);
      FText::operator=(puVar1 + -0x14,param_3 + -0x50 + (longlong)puVar1);
      FText::operator=(puVar1 + -0xe,param_3 + -0x38 + (longlong)puVar1);
      puVar1[-8] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x20);
      puVar1[-7] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x1c);
      puVar1[-6] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x18);
      puVar1[-5] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x14);
      puVar1[-4] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x10);
      puVar1[-3] = *(undefined4 *)((longlong)puVar1 + param_3 + -0xc);
      puVar1[-2] = *(undefined4 *)((longlong)puVar1 + param_3 + -8);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar1);
      FSoftObjectPath::operator=(puVar1 + 2,&local_28);
      FText::operator=(puVar1 + 8,param_3 + 0x20 + (longlong)puVar1);
      FText::operator=(puVar1 + 0xe,param_3 + 0x38 + (longlong)puVar1);
      puVar1 = puVar1 + 0x3a;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1415875a0 Copy body=140 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPlayerRankInfo>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x20);
    do {
      FString::operator=(puVar1 + -8,param_3 + -0x20 + (longlong)puVar1);
      FString::operator=(puVar1 + -4,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar1);
      puVar1[2] = *(undefined4 *)(param_3 + 8 + (longlong)puVar1);
      puVar1[3] = *(undefined4 *)(param_3 + 0xc + (longlong)puVar1);
      puVar1[4] = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar1);
      puVar1 = puVar1 + 0xe;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141587640 FUN_141587640 body=85 status=ok
// SIG undefined FUN_141587640(void)

void FUN_141587640(void)

{
  if (DAT_1468a6b60 == 0) {
    if (DAT_1468a7508 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468a7508,&PTR_s__Script_OakCS_144c91d08);
    }
    DAT_1468a6b60 = GetStaticEnum(FUN_141588550,DAT_1468a7508,L"ECSScoreCondition");
  }
  return;
}



// FUNCTION 1415876a0 FUN_1415876a0 body=85 status=ok
// SIG undefined FUN_1415876a0(void)

void FUN_1415876a0(void)

{
  if (DAT_1468a6b58 == 0) {
    if (DAT_1468a7508 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468a7508,&PTR_s__Script_OakCS_144c91d08);
    }
    DAT_1468a6b58 = GetStaticEnum(FUN_141588580,DAT_1468a7508,L"ECSTutorialElement");
  }
  return;
}



// FUNCTION 141587700 FUN_141587700 body=85 status=ok
// SIG undefined FUN_141587700(void)

void FUN_141587700(void)

{
  if (DAT_1468a6b68 == 0) {
    if (DAT_1468a7508 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468a7508,&PTR_s__Script_OakCS_144c91d08);
    }
    DAT_1468a6b68 = GetStaticEnum(FUN_1415885b0,DAT_1468a7508,L"ECSTweenEasingFunc");
  }
  return;
}



// FUNCTION 141587760 FUN_141587760 body=85 status=ok
// SIG undefined FUN_141587760(void)

void FUN_141587760(void)

{
  if (DAT_1468a6b50 == 0) {
    if (DAT_1468a7508 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468a7508,&PTR_s__Script_OakCS_144c91d08);
    }
    DAT_1468a6b50 = GetStaticEnum(FUN_1415885e0,DAT_1468a7508,L"ECitizenScienceManagerState");
  }
  return;
}



// FUNCTION 1415877c0 FUN_1415877c0 body=85 status=ok
// SIG undefined FUN_1415877c0(void)

void FUN_1415877c0(void)

{
  if (DAT_1468a6b70 == 0) {
    if (DAT_1468a7508 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468a7508,&PTR_s__Script_OakCS_144c91d08);
    }
    DAT_1468a6b70 = GetStaticEnum(FUN_141588610,DAT_1468a7508,L"EDialogEventEnum");
  }
  return;
}



// FUNCTION 141587830 FUN_141587830 body=47 status=ok
// SIG undefined FUN_141587830(void)

undefined8 FUN_141587830(undefined8 param_1,undefined8 param_2)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_2,L"QUIT",L"GFxCSMenuBase",L"QuitText");
  return param_2;
}



// FUNCTION 141587860 FUN_141587860 body=47 status=ok
// SIG undefined FUN_141587860(void)

undefined8 FUN_141587860(undefined8 param_1,undefined8 param_2)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_2,L"BOOSTER SHOP",L"GFxCSBoosterShopMenu",L"BoosterShopText");
  return param_2;
}



// FUNCTION 141587890 FUN_141587890 body=47 status=ok
// SIG undefined FUN_141587890(void)

undefined8 FUN_141587890(undefined8 param_1,undefined8 param_2)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_2,L"LEVEL SELECTOR",L"GFxCSLevelSelectorMenu",L"LevelSelectorText");
  return param_2;
}



// FUNCTION 1415878d0 FUN_1415878d0 body=6 status=ok
// SIG undefined FUN_1415878d0(void)

undefined8 FUN_1415878d0(void)

{
  return 0x56adae;
}



// FUNCTION 1415878e0 FUN_1415878e0 body=6 status=ok
// SIG undefined FUN_1415878e0(void)

undefined8 FUN_1415878e0(void)

{
  return 0xff55c9bd;
}



// FUNCTION 1415878f0 FUN_1415878f0 body=6 status=ok
// SIG undefined FUN_1415878f0(void)

undefined8 FUN_1415878f0(void)

{
  return 0xac201399;
}



// FUNCTION 141587900 FUN_141587900 body=6 status=ok
// SIG undefined FUN_141587900(void)

undefined8 FUN_141587900(void)

{
  return 0x78255e61;
}



// FUNCTION 141587910 FUN_141587910 body=6 status=ok
// SIG undefined FUN_141587910(void)

undefined8 FUN_141587910(void)

{
  return 0x329e895c;
}



// FUNCTION 141587930 FUN_141587930 body=57 status=ok
// SIG undefined FUN_141587930(void)

void FUN_141587930(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a6b90);
                    /* WARNING: Could not recover jumptable at 0x000141587966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141587970 FUN_141587970 body=57 status=ok
// SIG undefined FUN_141587970(void)

void FUN_141587970(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a6b98);
                    /* WARNING: Could not recover jumptable at 0x0001415879a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1415879b0 FUN_1415879b0 body=57 status=ok
// SIG undefined FUN_1415879b0(void)

void FUN_1415879b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a6ba0);
                    /* WARNING: Could not recover jumptable at 0x0001415879e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1415879f0 FUN_1415879f0 body=57 status=ok
// SIG undefined FUN_1415879f0(void)

void FUN_1415879f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a6ba8);
                    /* WARNING: Could not recover jumptable at 0x000141587a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141587a30 FUN_141587a30 body=57 status=ok
// SIG undefined FUN_141587a30(void)

void FUN_141587a30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a6bb0);
                    /* WARNING: Could not recover jumptable at 0x000141587a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141587a70 FUN_141587a70 body=57 status=ok
// SIG undefined FUN_141587a70(void)

void FUN_141587a70(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a6bb8);
                    /* WARNING: Could not recover jumptable at 0x000141587aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141587ab0 FUN_141587ab0 body=60 status=ok
// SIG undefined FUN_141587ab0(void)

void FUN_141587ab0(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a6bc0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 141587af0 FUN_141587af0 body=57 status=ok
// SIG undefined FUN_141587af0(void)

void FUN_141587af0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a7068);
                    /* WARNING: Could not recover jumptable at 0x000141587b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141587b30 FUN_141587b30 body=57 status=ok
// SIG undefined FUN_141587b30(void)

void FUN_141587b30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a7070);
                    /* WARNING: Could not recover jumptable at 0x000141587b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141587b70 FUN_141587b70 body=57 status=ok
// SIG undefined FUN_141587b70(void)

void FUN_141587b70(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a6bc8);
                    /* WARNING: Could not recover jumptable at 0x000141587ba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141587bb0 StaticRegisterNativesUSlateBlueprintLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUSlateBlueprintLibrary(void)

void USlateBlueprintLibrary::StaticRegisterNativesUSlateBlueprintLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BlockCSPuzzleInputs_144c8a900,0xb);
  return;
}



// FUNCTION 141587be0 FUN_141587be0 body=34 status=ok
// SIG undefined FUN_141587be0(void)

void FUN_141587be0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141583990();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnBoosterItemClicked_144c8c770,3);
  return;
}



// FUNCTION 141587c10 FUN_141587c10 body=34 status=ok
// SIG undefined FUN_141587c10(void)

void FUN_141587c10(void)

{
  undefined8 uVar1;
  
  uVar1 = UGameInstanceGameParameters::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnInputDeviceChanged_144c8c7a0,1);
  return;
}



// FUNCTION 141587c40 FUN_141587c40 body=34 status=ok
// SIG undefined FUN_141587c40(void)

void FUN_141587c40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1415833c0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnBackClicked_144c8d5f0,3);
  return;
}



// FUNCTION 141587c70 StaticRegisterNativesAIntroSparrow body=34 status=ok
// SIG undefined StaticRegisterNativesAIntroSparrow(void)

void AIntroSparrow::StaticRegisterNativesAIntroSparrow(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnCloseClicked_144c8d5e0,1);
  return;
}



// FUNCTION 141587ca0 FUN_141587ca0 body=34 status=ok
// SIG undefined FUN_141587ca0(void)

void FUN_141587ca0(void)

{
  undefined8 uVar1;
  
  uVar1 = ARemnantWeaponMod::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnLevelItemClicked_144c8e498,1);
  return;
}



// FUNCTION 141587cd0 FUN_141587cd0 body=34 status=ok
// SIG undefined FUN_141587cd0(void)

void FUN_141587cd0(void)

{
  undefined8 uVar1;
  
  uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnBuyBoosterClicked_144c8ebe0,4);
  return;
}



// FUNCTION 141587d00 FUN_141587d00 body=34 status=ok
// SIG undefined FUN_141587d00(void)

void FUN_141587d00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141583770();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_extTokenTileTurnedOff_144c8fe00,9);
  return;
}



// FUNCTION 141587d30 FUN_141587d30 body=34 status=ok
// SIG undefined FUN_141587d30(void)

void FUN_141587d30(void)

{
  undefined8 uVar1;
  
  uVar1 = ACameraActor::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_extNumCompletedPuzzleAnimDone_144c90870,10);
  return;
}



// FUNCTION 141587d60 FUN_141587d60 body=34 status=ok
// SIG undefined FUN_141587d60(void)

void FUN_141587d60(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1415836c0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnMovieEndReached_144c91ca0,3);
  return;
}



// FUNCTION 141587d90 FUN_141587d90 body=34 status=ok
// SIG undefined FUN_141587d90(void)

void FUN_141587d90(void)

{
  undefined8 uVar1;
  
  uVar1 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetCitizenScienceManager_144c91cf0,1);
  return;
}



// FUNCTION 141587dc0 StaticRegisterNativesUAIAsyncTaskBlueprintProxy body=34 status=ok
// SIG undefined StaticRegisterNativesUAIAsyncTaskBlueprintProxy(void)

void UAIAsyncTaskBlueprintProxy::StaticRegisterNativesUAIAsyncTaskBlueprintProxy(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetTutorialWorld_144c91e98,1);
  return;
}



// FUNCTION 141587df0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FARFilter::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468a7140 == 0) {
    if (DAT_1468a7508 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468a7508,&PTR_s__Script_OakCS_144c91d08);
    }
    lVar1 = DAT_1468a7508;
    uVar2 = FUN_1415878d0();
    DAT_1468a7140 = GetStaticStruct(FUN_141588640,lVar1,L"CSLevelInfo",0xe8,uVar2);
  }
  return;
}



// FUNCTION 141587e70 FUN_141587e70 body=113 status=ok
// SIG undefined FUN_141587e70(void)

void FUN_141587e70(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468a7160 == 0) {
    if (DAT_1468a7508 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468a7508,&PTR_s__Script_OakCS_144c91d08);
    }
    lVar1 = DAT_1468a7508;
    uVar2 = FUN_1415878e0();
    DAT_1468a7160 = GetStaticStruct(FUN_141588670,lVar1,L"CSPuzzleFeedbackSettings",0x20,uVar2);
  }
  return;
}



// FUNCTION 141587ef0 FUN_141587ef0 body=113 status=ok
// SIG undefined FUN_141587ef0(void)

void FUN_141587ef0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468a7180 == 0) {
    if (DAT_1468a7508 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468a7508,&PTR_s__Script_OakCS_144c91d08);
    }
    lVar1 = DAT_1468a7508;
    uVar2 = FUN_1415878f0();
    DAT_1468a7180 = GetStaticStruct(FUN_1415886a0,lVar1,L"CSPuzzleIntroSettings",0x14,uVar2);
  }
  return;
}



// FUNCTION 141587f70 FUN_141587f70 body=113 status=ok
// SIG undefined FUN_141587f70(void)

void FUN_141587f70(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468a7518 == 0) {
    if (DAT_1468a7508 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468a7508,&PTR_s__Script_OakCS_144c91d08);
    }
    lVar1 = DAT_1468a7508;
    uVar2 = FUN_141587900();
    DAT_1468a7518 = GetStaticStruct(FUN_1415886d0,lVar1,L"DebugPuzzle",0x38,uVar2);
  }
  return;
}



// FUNCTION 141587ff0 FUN_141587ff0 body=113 status=ok
// SIG undefined FUN_141587ff0(void)

void FUN_141587ff0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468a74a0 == 0) {
    if (DAT_1468a7508 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468a7508,&PTR_s__Script_OakCS_144c91d08);
    }
    lVar1 = DAT_1468a7508;
    uVar2 = FUN_141587910();
    DAT_1468a74a0 = GetStaticStruct(FUN_141588700,lVar1,L"GFxCSTileArray",0x10,uVar2);
  }
  return;
}



// FUNCTION 141588070 FUN_141588070 body=47 status=ok
// SIG undefined FUN_141588070(void)

longlong FUN_141588070(void)

{
  if (DAT_1468a70d8 == 0) {
    FUN_141786440(&DAT_1468a70d8,&PTR_FUN_144c80ab0);
  }
  return DAT_1468a70d8;
}



// FUNCTION 1415880a0 FUN_1415880a0 body=47 status=ok
// SIG undefined FUN_1415880a0(void)

longlong FUN_1415880a0(void)

{
  if (DAT_1468a7078 == 0) {
    FUN_141786440(&DAT_1468a7078,&PTR_FUN_144c81f50);
  }
  return DAT_1468a7078;
}



// FUNCTION 1415880d0 FUN_1415880d0 body=47 status=ok
// SIG undefined FUN_1415880d0(void)

longlong FUN_1415880d0(void)

{
  if (DAT_1468a7088 == 0) {
    FUN_141786440(&DAT_1468a7088,&PTR_FUN_144c822f0);
  }
  return DAT_1468a7088;
}



// FUNCTION 141588100 FUN_141588100 body=47 status=ok
// SIG undefined FUN_141588100(void)

longlong FUN_141588100(void)

{
  if (DAT_1468a7098 == 0) {
    FUN_141786440(&DAT_1468a7098,&PTR_FUN_144c826a0);
  }
  return DAT_1468a7098;
}



// FUNCTION 141588130 Z_Construct_UClass_UGUnitToolDataAsset body=47 status=ok
// SIG undefined Z_Construct_UClass_UGUnitToolDataAsset(void)

longlong Z_Construct_UClass_UGUnitToolDataAsset(void)

{
  if (DAT_1468a70b8 == 0) {
    FUN_141786440(&DAT_1468a70b8,&PTR_FUN_144c82a40);
  }
  return DAT_1468a70b8;
}



// FUNCTION 141588160 FUN_141588160 body=47 status=ok
// SIG undefined FUN_141588160(void)

longlong FUN_141588160(void)

{
  if (DAT_1468a70c8 == 0) {
    FUN_141786440(&DAT_1468a70c8,&PTR_FUN_144c83f30);
  }
  return DAT_1468a70c8;
}



// FUNCTION 141588190 FUN_141588190 body=47 status=ok
// SIG undefined FUN_141588190(void)

longlong FUN_141588190(void)

{
  if (DAT_1468a7550 == 0) {
    FUN_141786440(&DAT_1468a7550,&PTR_FUN_144c800a0);
  }
  return DAT_1468a7550;
}



// FUNCTION 1415881c0 FUN_1415881c0 body=47 status=ok
// SIG undefined FUN_1415881c0(void)

longlong FUN_1415881c0(void)

{
  if (DAT_1468a7150 == 0) {
    FUN_141786440(&DAT_1468a7150,&PTR_FUN_144c86830);
  }
  return DAT_1468a7150;
}



// FUNCTION 1415881f0 FUN_1415881f0 body=47 status=ok
// SIG undefined FUN_1415881f0(void)

longlong FUN_1415881f0(void)

{
  if (DAT_1468a7170 == 0) {
    FUN_141786440(&DAT_1468a7170,&PTR_GetPrivateStaticClass_144c82f30);
  }
  return DAT_1468a7170;
}



// FUNCTION 141588220 FUN_141588220 body=47 status=ok
// SIG undefined FUN_141588220(void)

longlong FUN_141588220(void)

{
  if (DAT_1468a7190 == 0) {
    FUN_141786440(&DAT_1468a7190,&PTR_FUN_144c83870);
  }
  return DAT_1468a7190;
}



// FUNCTION 141588250 FUN_141588250 body=47 status=ok
// SIG undefined FUN_141588250(void)

longlong FUN_141588250(void)

{
  if (DAT_1468a71a0 == 0) {
    FUN_141786440(&DAT_1468a71a0,&PTR_GetPrivateStaticClass_144c84b70);
  }
  return DAT_1468a71a0;
}



// FUNCTION 141588280 FUN_141588280 body=47 status=ok
// SIG undefined FUN_141588280(void)

longlong FUN_141588280(void)

{
  if (DAT_1468a7228 == 0) {
    FUN_141786440(&DAT_1468a7228,&PTR_FUN_144c846f0);
  }
  return DAT_1468a7228;
}



// FUNCTION 1415882b0 FUN_1415882b0 body=47 status=ok
// SIG undefined FUN_1415882b0(void)

longlong FUN_1415882b0(void)

{
  if (DAT_1468a73e0 == 0) {
    FUN_141786440(&DAT_1468a73e0,&PTR_FUN_144c85a20);
  }
  return DAT_1468a73e0;
}



// FUNCTION 1415882e0 FUN_1415882e0 body=47 status=ok
// SIG undefined FUN_1415882e0(void)

longlong FUN_1415882e0(void)

{
  if (DAT_1468a73f0 == 0) {
    FUN_141786440(&DAT_1468a73f0,&PTR_FUN_144c85c10);
  }
  return DAT_1468a73f0;
}



// FUNCTION 141588310 FUN_141588310 body=47 status=ok
// SIG undefined FUN_141588310(void)

longlong FUN_141588310(void)

{
  if (DAT_1468a72c8 == 0) {
    FUN_141786440(&DAT_1468a72c8,&PTR_GetPrivateStaticClass_144c7fd40);
  }
  return DAT_1468a72c8;
}



// FUNCTION 141588340 FUN_141588340 body=47 status=ok
// SIG undefined FUN_141588340(void)

longlong FUN_141588340(void)

{
  if (DAT_1468a72d8 == 0) {
    FUN_141786440(&DAT_1468a72d8,&PTR_GetPrivateStaticClass_144c80180);
  }
  return DAT_1468a72d8;
}



// FUNCTION 141588370 FUN_141588370 body=47 status=ok
// SIG undefined FUN_141588370(void)

longlong FUN_141588370(void)

{
  if (DAT_1468a7330 == 0) {
    FUN_141786440(&DAT_1468a7330,&PTR_GetPrivateStaticClass_144c81a90);
  }
  return DAT_1468a7330;
}



// FUNCTION 1415883a0 FUN_1415883a0 body=47 status=ok
// SIG undefined FUN_1415883a0(void)

longlong FUN_1415883a0(void)

{
  if (DAT_1468a7340 == 0) {
    FUN_141786440(&DAT_1468a7340,&PTR_FUN_144c82970);
  }
  return DAT_1468a7340;
}



// FUNCTION 1415883d0 FUN_1415883d0 body=47 status=ok
// SIG undefined FUN_1415883d0(void)

longlong FUN_1415883d0(void)

{
  if (DAT_1468a7350 == 0) {
    FUN_141786440(&DAT_1468a7350,&PTR_FUN_144c83dc0);
  }
  return DAT_1468a7350;
}



// FUNCTION 141588400 FUN_141588400 body=47 status=ok
// SIG undefined FUN_141588400(void)

longlong FUN_141588400(void)

{
  if (DAT_1468a7360 == 0) {
    FUN_141786440(&DAT_1468a7360,&PTR_GetPrivateStaticClass_144c84070);
  }
  return DAT_1468a7360;
}



// FUNCTION 141588430 FUN_141588430 body=47 status=ok
// SIG undefined FUN_141588430(void)

longlong FUN_141588430(void)

{
  if (DAT_1468a7410 == 0) {
    FUN_141786440(&DAT_1468a7410,&PTR_GetPrivateStaticClass_144c7e850);
  }
  return DAT_1468a7410;
}



// FUNCTION 141588460 FUN_141588460 body=47 status=ok
// SIG undefined FUN_141588460(void)

longlong FUN_141588460(void)

{
  if (DAT_1468a7480 == 0) {
    FUN_141786440(&DAT_1468a7480,&PTR_GetPrivateStaticClass_144c80230);
  }
  return DAT_1468a7480;
}



// FUNCTION 141588490 FUN_141588490 body=47 status=ok
// SIG undefined FUN_141588490(void)

longlong FUN_141588490(void)

{
  if (DAT_1468a7490 == 0) {
    FUN_141786440(&DAT_1468a7490,&PTR_FUN_144c82e10);
  }
  return DAT_1468a7490;
}



// FUNCTION 1415884c0 FUN_1415884c0 body=47 status=ok
// SIG undefined FUN_1415884c0(void)

longlong FUN_1415884c0(void)

{
  if (DAT_1468a74b0 == 0) {
    FUN_141786440(&DAT_1468a74b0,&PTR_FUN_144c83cb0);
  }
  return DAT_1468a74b0;
}



// FUNCTION 1415884f0 FUN_1415884f0 body=47 status=ok
// SIG undefined FUN_1415884f0(void)

longlong FUN_1415884f0(void)

{
  if (DAT_1468a7400 == 0) {
    FUN_141786440(&DAT_1468a7400,&PTR_FUN_144c86770);
  }
  return DAT_1468a7400;
}



// FUNCTION 141588520 FUN_141588520 body=47 status=ok
// SIG undefined FUN_141588520(void)

longlong FUN_141588520(void)

{
  if (DAT_1468a7370 == 0) {
    FUN_141786a30(&DAT_1468a7370,&PTR_FUN_1464a4bd0);
  }
  return DAT_1468a7370;
}



// FUNCTION 141588550 FUN_141588550 body=47 status=ok
// SIG undefined FUN_141588550(void)

longlong FUN_141588550(void)

{
  if (DAT_1468a71b0 == 0) {
    FUN_1417866a0(&DAT_1468a71b0,&PTR_FUN_1464a80b0);
  }
  return DAT_1468a71b0;
}



// FUNCTION 141588580 FUN_141588580 body=47 status=ok
// SIG undefined FUN_141588580(void)

longlong FUN_141588580(void)

{
  if (DAT_1468a7510 == 0) {
    FUN_1417866a0(&DAT_1468a7510,&PTR_FUN_1464a81a0);
  }
  return DAT_1468a7510;
}



// FUNCTION 1415885b0 FUN_1415885b0 body=47 status=ok
// SIG undefined FUN_1415885b0(void)

longlong FUN_1415885b0(void)

{
  if (DAT_1468a7220 == 0) {
    FUN_1417866a0(&DAT_1468a7220,&PTR_FUN_1464a8100);
  }
  return DAT_1468a7220;
}



// FUNCTION 1415885e0 FUN_1415885e0 body=47 status=ok
// SIG undefined FUN_1415885e0(void)

longlong FUN_1415885e0(void)

{
  if (DAT_1468a74e8 == 0) {
    FUN_1417866a0(&DAT_1468a74e8,&PTR_FUN_1464a8150);
  }
  return DAT_1468a74e8;
}



// FUNCTION 141588610 FUN_141588610 body=47 status=ok
// SIG undefined FUN_141588610(void)

longlong FUN_141588610(void)

{
  if (DAT_1468a70e8 == 0) {
    FUN_1417866a0(&DAT_1468a70e8,&PTR_FUN_1464a8060);
  }
  return DAT_1468a70e8;
}



// FUNCTION 141588640 FUN_141588640 body=47 status=ok
// SIG undefined FUN_141588640(void)

longlong FUN_141588640(void)

{
  if (DAT_1468a7148 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468a7148,&PTR_FUN_1464a1d60);
  }
  return DAT_1468a7148;
}



// FUNCTION 141588670 FUN_141588670 body=47 status=ok
// SIG undefined FUN_141588670(void)

longlong FUN_141588670(void)

{
  if (DAT_1468a7168 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468a7168,&PTR_FUN_1464a2050);
  }
  return DAT_1468a7168;
}



// FUNCTION 1415886a0 FUN_1415886a0 body=47 status=ok
// SIG undefined FUN_1415886a0(void)

longlong FUN_1415886a0(void)

{
  if (DAT_1468a7188 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468a7188,&PTR_FUN_1464a27a0);
  }
  return DAT_1468a7188;
}



// FUNCTION 1415886d0 FUN_1415886d0 body=47 status=ok
// SIG undefined FUN_1415886d0(void)

longlong FUN_1415886d0(void)

{
  if (DAT_1468a7520 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468a7520,&PTR_FUN_1464a7680);
  }
  return DAT_1468a7520;
}



// FUNCTION 141588700 FUN_141588700 body=47 status=ok
// SIG undefined FUN_141588700(void)

longlong FUN_141588700(void)

{
  if (DAT_1468a74a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468a74a8,&PTR_FUN_1464a6dd0);
  }
  return DAT_1468a74a8;
}



// FUNCTION 141588770 FUN_141588770 body=280 status=ok
// SIG undefined FUN_141588770(void)

void FUN_141588770(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = local_38;
  FUN_141558850(local_res20,local_res10[0],&local_28);
  return;
}



// FUNCTION 141588890 FUN_141588890 body=42 status=ok
// SIG undefined FUN_141588890(void)

void FUN_141588890(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14155cd90();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141588960 FUN_141588960 body=103 status=ok
// SIG undefined FUN_141588960(void)

void FUN_141588960(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14155e860(local_res10[0]);
  return;
}



// FUNCTION 1415889d0 execCopyTextToClipboard body=207 status=ok
// SIG undefined execCopyTextToClipboard(void)

void UUGBPFunctionLibrary::execCopyTextToClipboard(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_14155e8b0(&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141588aa0 FUN_141588aa0 body=103 status=ok
// SIG undefined FUN_141588aa0(void)

void FUN_141588aa0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14155e910(local_res10[0]);
  return;
}



// FUNCTION 141588b10 FUN_141588b10 body=334 status=ok
// SIG undefined FUN_141588b10(void)

void FUN_141588b10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1415650e0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 141588c60 FUN_141588c60 body=334 status=ok
// SIG undefined FUN_141588c60(void)

void FUN_141588c60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141565150(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 141588db0 FUN_141588db0 body=334 status=ok
// SIG undefined FUN_141588db0(void)

void FUN_141588db0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141565420(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 141588f00 FUN_141588f00 body=126 status=ok
// SIG undefined FUN_141588f00(void)

void FUN_141588f00(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_14157ed70(param_1,local_res10[0]);
  return;
}



// FUNCTION 141588f80 FUN_141588f80 body=126 status=ok
// SIG undefined FUN_141588f80(void)

void FUN_141588f80(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_14157ef00(param_1,local_res10[0]);
  return;
}



// FUNCTION 141589000 FUN_141589000 body=334 status=ok
// SIG undefined FUN_141589000(void)

void FUN_141589000(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_142ebe4a0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 141589150 FUN_141589150 body=387 status=ok
// SIG undefined FUN_141589150(void)

void FUN_141589150(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FName::FName(local_48,&DAT_143f3eda8,1);
  local_3c = 0;
  local_40 = 0xffffffff;
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar6 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141565dc0(param_1,local_res20,local_res10[0],puVar6);
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
  return;
}



// FUNCTION 1415892e0 FUN_1415892e0 body=387 status=ok
// SIG undefined FUN_1415892e0(void)

void FUN_1415892e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FName::FName(local_48,&DAT_143f3eda8,1);
  local_3c = 0;
  local_40 = 0xffffffff;
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar6 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141565e00(param_1,local_res20,local_res10[0],puVar6);
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
  return;
}



// FUNCTION 141589470 FUN_141589470 body=387 status=ok
// SIG undefined FUN_141589470(void)

void FUN_141589470(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FName::FName(local_48,&DAT_143f3eda8,1);
  local_3c = 0;
  local_40 = 0xffffffff;
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar6 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_141576aa0(param_1,local_res20,local_res10[0],puVar6);
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
  return;
}



// FUNCTION 141589600 FUN_141589600 body=387 status=ok
// SIG undefined FUN_141589600(void)

void FUN_141589600(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FName::FName(local_48,&DAT_143f3eda8,1);
  local_3c = 0;
  local_40 = 0xffffffff;
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar6 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1415664f0(param_1,local_res20,local_res10[0],puVar6);
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
  return;
}



// FUNCTION 141589790 FUN_141589790 body=334 status=ok
// SIG undefined FUN_141589790(void)

void FUN_141589790(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141568470(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 1415898e0 FUN_1415898e0 body=118 status=ok
// SIG undefined FUN_1415898e0(void)

void FUN_1415898e0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14156b520(param_1,local_res10[0]);
  return;
}



// FUNCTION 141589960 FUN_141589960 body=334 status=ok
// SIG undefined FUN_141589960(void)

void FUN_141589960(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14156b870(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 141589ab0 FUN_141589ab0 body=334 status=ok
// SIG undefined FUN_141589ab0(void)

void FUN_141589ab0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14155dcb0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 141589c20 execHandleOnLoadoutChangedChanged body=223 status=ok
// SIG undefined execHandleOnLoadoutChangedChanged(void)

void URefinementWidget::execHandleOnLoadoutChangedChanged(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_14156bc80(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141589d20 FUN_141589d20 body=334 status=ok
// SIG undefined FUN_141589d20(void)

void FUN_141589d20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14155dcf0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 141589e70 FUN_141589e70 body=334 status=ok
// SIG undefined FUN_141589e70(void)

void FUN_141589e70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14156c260(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 141589fc0 FUN_141589fc0 body=334 status=ok
// SIG undefined FUN_141589fc0(void)

void FUN_141589fc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14156c3f0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 14158a110 FUN_14158a110 body=334 status=ok
// SIG undefined FUN_14158a110(void)

void FUN_14158a110(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14156ced0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 14158a260 FUN_14158a260 body=387 status=ok
// SIG undefined FUN_14158a260(void)

void FUN_14158a260(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FName::FName(local_48,&DAT_143f3eda8,1);
  local_3c = 0;
  local_40 = 0xffffffff;
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar6 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14156d050(param_1,local_res20,local_res10[0],puVar6);
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
  return;
}



// FUNCTION 14158a3f0 FUN_14158a3f0 body=334 status=ok
// SIG undefined FUN_14158a3f0(void)

void FUN_14158a3f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141574fd0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 14158a540 FUN_14158a540 body=334 status=ok
// SIG undefined FUN_14158a540(void)

void FUN_14158a540(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141575fa0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 14158a690 FUN_14158a690 body=103 status=ok
// SIG undefined FUN_14158a690(void)

void FUN_14158a690(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14157bf50(local_res10[0]);
  return;
}



// FUNCTION 14158a700 execCopyTextToClipboard body=207 status=ok
// SIG undefined execCopyTextToClipboard(void)

void UUGBPFunctionLibrary::execCopyTextToClipboard(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_14157bfa0(&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14158a7d0 FUN_14158a7d0 body=103 status=ok
// SIG undefined FUN_14158a7d0(void)

void FUN_14158a7d0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14157d020(local_res10[0]);
  return;
}



// FUNCTION 14158a960 GetBranchName body=8 status=ok
// SIG undefined GetBranchName(void)

wchar_t * BuildSettings::GetBranchName(void)

{
  return L"OAK-PATCHAWSWIN64-434";
}



// FUNCTION 14158a970 FUN_14158a970 body=8 status=ok
// SIG undefined FUN_14158a970(void)

wchar_t * FUN_14158a970(void)

{
  return L"OAK-PATCHAWSWIN64-434-CL-3758051";
}



// FUNCTION 14158a980 FUN_14158a980 body=6 status=ok
// SIG undefined FUN_14158a980(void)

undefined8 FUN_14158a980(void)

{
  return 0x3957e3;
}



// FUNCTION 14158a990 ExecuteTask body=1414 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FIncGraphTask>::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  int iVar15;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  uint uVar21;
  uint uVar22;
  undefined1 auVar17 [16];
  uint uVar23;
  uint uVar24;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auVar25 [16];
  uint uVar30;
  undefined1 auVar26 [16];
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  int local_e8;
  int iStack_e4;
  int local_d8;
  int iStack_d4;
  
  piVar1 = (int *)param_1[2];
  plVar11 = (longlong *)0x0;
  piVar2 = (int *)param_1[3];
  uVar9 = *(uint *)(param_1 + 4);
  uVar8 = 0;
  if ((int)uVar9 < 1) {
    if (uVar9 == 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    QueryPerformanceCounter(&local_res8);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar5 = plVar11;
    if ((3 < uVar9) && (plVar5 = (longlong *)0x0, 1 < DAT_1468387b0)) {
      uVar3 = uVar9 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      local_d8 = 0;
      iStack_d4 = 0;
      local_e8 = 0;
      iStack_e4 = 0;
      plVar5 = plVar11;
      do {
        iVar7 = (int)plVar5;
        iVar4 = iVar7 + 2;
        auVar16._4_4_ = iVar7 + 1;
        auVar16._0_4_ = iVar7;
        auVar16._8_4_ = iVar7;
        auVar16._12_4_ = iVar7;
        auVar16 = pmovsxdq(in_XMM2,auVar16);
        iVar15 = (int)((ulonglong)(param_1 + auVar16._0_8_ + 2) >> 4);
        uVar18 = (uint)((ulonglong)(param_1 + auVar16._0_8_ + 2) >> 0x24);
        iVar20 = (int)((ulonglong)(param_1 + auVar16._8_8_ + 2) >> 4);
        uVar22 = (uint)((ulonglong)(param_1 + auVar16._8_8_ + 2) >> 0x24);
        uVar24 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
        uVar27 = 0x9e3779b9U - iVar20 ^ iVar20 << 8;
        uVar28 = -uVar18 ^ uVar18 << 8;
        uVar29 = -uVar22 ^ uVar22 << 8;
        uVar8 = -iVar15 - uVar24 ^ uVar24 >> 0xd;
        uVar19 = -iVar20 - uVar27 ^ uVar27 >> 0xd;
        uVar21 = -uVar18 - uVar28 ^ uVar28 >> 0xd;
        uVar23 = -uVar22 - uVar29 ^ uVar29 >> 0xd;
        uVar30 = (iVar15 - uVar24) - uVar8 ^ uVar8 >> 0xc;
        uVar31 = (iVar20 - uVar27) - uVar19 ^ uVar19 >> 0xc;
        uVar32 = (uVar18 - uVar28) - uVar21 ^ uVar21 >> 0xc;
        uVar33 = (uVar22 - uVar29) - uVar23 ^ uVar23 >> 0xc;
        uVar22 = (uVar24 - uVar30) - uVar8 ^ uVar30 << 0x10;
        uVar24 = (uVar27 - uVar31) - uVar19 ^ uVar31 << 0x10;
        uVar27 = (uVar28 - uVar32) - uVar21 ^ uVar32 << 0x10;
        uVar28 = (uVar29 - uVar33) - uVar23 ^ uVar33 << 0x10;
        uVar8 = (uVar8 - uVar22) - uVar30 ^ uVar22 >> 5;
        uVar18 = (uVar19 - uVar24) - uVar31 ^ uVar24 >> 5;
        uVar19 = (uVar21 - uVar27) - uVar32 ^ uVar27 >> 5;
        uVar21 = (uVar23 - uVar28) - uVar33 ^ uVar28 >> 5;
        uVar29 = (uVar30 - uVar22) - uVar8 ^ uVar8 >> 3;
        uVar30 = (uVar31 - uVar24) - uVar18 ^ uVar18 >> 3;
        uVar31 = (uVar32 - uVar27) - uVar19 ^ uVar19 >> 3;
        uVar32 = (uVar33 - uVar28) - uVar21 ^ uVar21 >> 3;
        uVar22 = (uVar22 - uVar29) - uVar8 ^ uVar29 << 10;
        uVar23 = (uVar24 - uVar30) - uVar18 ^ uVar30 << 10;
        uVar24 = (uVar27 - uVar31) - uVar19 ^ uVar31 << 10;
        uVar27 = (uVar28 - uVar32) - uVar21 ^ uVar32 << 10;
        auVar17._0_4_ = (uVar8 - uVar22) - uVar29;
        auVar17._4_4_ = (uVar18 - uVar23) - uVar30;
        auVar17._8_4_ = (uVar19 - uVar24) - uVar31;
        auVar17._12_4_ = (uVar21 - uVar27) - uVar32;
        auVar25._0_4_ = uVar22 >> 0xf;
        auVar25._4_4_ = uVar23 >> 0xf;
        auVar25._8_4_ = uVar24 >> 0xf;
        auVar25._12_4_ = uVar27 >> 0xf;
        auVar17 = auVar17 ^ auVar25;
        auVar14._4_4_ = iVar7 + 3;
        auVar14._0_4_ = iVar4;
        auVar14._8_4_ = iVar4;
        auVar14._12_4_ = iVar4;
        local_d8 = local_d8 + auVar17._0_4_;
        iStack_d4 = iStack_d4 + auVar17._4_4_;
        auVar16 = pmovsxdq(auVar17,auVar14);
        iVar4 = (int)((ulonglong)(param_1 + auVar16._0_8_ + 2) >> 4);
        uVar19 = (uint)((ulonglong)(param_1 + auVar16._0_8_ + 2) >> 0x24);
        iVar15 = (int)((ulonglong)(param_1 + auVar16._8_8_ + 2) >> 4);
        uVar23 = (uint)((ulonglong)(param_1 + auVar16._8_8_ + 2) >> 0x24);
        uVar8 = iVar7 + 4;
        plVar5 = (longlong *)(ulonglong)uVar8;
        uVar27 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
        uVar28 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
        uVar29 = -uVar19 ^ uVar19 << 8;
        uVar30 = -uVar23 ^ uVar23 << 8;
        uVar18 = -iVar4 - uVar27 ^ uVar27 >> 0xd;
        uVar21 = -iVar15 - uVar28 ^ uVar28 >> 0xd;
        uVar22 = -uVar19 - uVar29 ^ uVar29 >> 0xd;
        uVar24 = -uVar23 - uVar30 ^ uVar30 >> 0xd;
        uVar31 = (iVar4 - uVar27) - uVar18 ^ uVar18 >> 0xc;
        uVar32 = (iVar15 - uVar28) - uVar21 ^ uVar21 >> 0xc;
        uVar33 = (uVar19 - uVar29) - uVar22 ^ uVar22 >> 0xc;
        uVar34 = (uVar23 - uVar30) - uVar24 ^ uVar24 >> 0xc;
        uVar23 = (uVar27 - uVar31) - uVar18 ^ uVar31 << 0x10;
        uVar27 = (uVar28 - uVar32) - uVar21 ^ uVar32 << 0x10;
        uVar28 = (uVar29 - uVar33) - uVar22 ^ uVar33 << 0x10;
        uVar29 = (uVar30 - uVar34) - uVar24 ^ uVar34 << 0x10;
        uVar18 = (uVar18 - uVar23) - uVar31 ^ uVar23 >> 5;
        uVar19 = (uVar21 - uVar27) - uVar32 ^ uVar27 >> 5;
        uVar21 = (uVar22 - uVar28) - uVar33 ^ uVar28 >> 5;
        uVar22 = (uVar24 - uVar29) - uVar34 ^ uVar29 >> 5;
        uVar30 = (uVar31 - uVar23) - uVar18 ^ uVar18 >> 3;
        uVar31 = (uVar32 - uVar27) - uVar19 ^ uVar19 >> 3;
        uVar32 = (uVar33 - uVar28) - uVar21 ^ uVar21 >> 3;
        uVar33 = (uVar34 - uVar29) - uVar22 ^ uVar22 >> 3;
        uVar23 = (uVar23 - uVar30) - uVar18 ^ uVar30 << 10;
        uVar24 = (uVar27 - uVar31) - uVar19 ^ uVar31 << 10;
        uVar27 = (uVar28 - uVar32) - uVar21 ^ uVar32 << 10;
        uVar28 = (uVar29 - uVar33) - uVar22 ^ uVar33 << 10;
        in_XMM2._0_4_ = (uVar18 - uVar23) - uVar30;
        in_XMM2._4_4_ = (uVar19 - uVar24) - uVar31;
        in_XMM2._8_4_ = (uVar21 - uVar27) - uVar32;
        in_XMM2._12_4_ = (uVar22 - uVar28) - uVar33;
        auVar26._0_4_ = uVar23 >> 0xf;
        auVar26._4_4_ = uVar24 >> 0xf;
        auVar26._8_4_ = uVar27 >> 0xf;
        auVar26._12_4_ = uVar28 >> 0xf;
        in_XMM2 = in_XMM2 ^ auVar26;
        local_e8 = local_e8 + in_XMM2._0_4_;
        iStack_e4 = iStack_e4 + in_XMM2._4_4_;
      } while ((int)uVar8 < (int)(uVar9 - uVar3));
      plVar5 = (longlong *)(ulonglong)(uint)(local_e8 + local_d8 + iStack_e4 + iStack_d4);
    }
    uVar3 = (uint)plVar5;
    if ((int)uVar8 < (int)uVar9) {
      uVar13 = (ulonglong)(uVar9 - uVar8);
      puVar12 = param_1 + (longlong)(int)uVar8 + 2;
      do {
        uVar10 = (ulonglong)puVar12 >> 4;
        puVar12 = puVar12 + 1;
        iVar4 = (int)uVar10;
        uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
        uVar9 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
        uVar8 = (iVar4 - uVar3) - uVar9 ^ uVar9 >> 0xc;
        uVar3 = (uVar3 - uVar8) - uVar9 ^ uVar8 << 0x10;
        uVar9 = (uVar9 - uVar3) - uVar8 ^ uVar3 >> 5;
        uVar8 = (uVar8 - uVar3) - uVar9 ^ uVar9 >> 3;
        uVar3 = (uVar3 - uVar8) - uVar9 ^ uVar8 << 10;
        uVar3 = (int)plVar5 + ((uVar9 - uVar3) - uVar8 ^ uVar3 >> 0xf);
        plVar5 = (longlong *)(ulonglong)uVar3;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    QueryPerformanceCounter(&local_res20);
    LOCK();
    *piVar2 = *piVar2 + ((uVar3 & 1) - local_res8._0_4_) + local_res20.s.LowPart;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_144c95488;
  *(undefined1 *)(param_1 + 5) = 0;
  if (param_1[6] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  plVar5 = TlsGetValue(DAT_1468a7c78);
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar11;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(DAT_1468a7c78,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar11 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_1468a7c80);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar11;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 14158af20 FUN_14158af20 body=82 status=ok
// SIG undefined FUN_14158af20(void)

undefined8 * FUN_14158af20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c95488;
  if (param_1[6] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14158af80 ExecuteTask body=1464 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FIncGraphTaskSub>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  int iVar15;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  uint uVar21;
  uint uVar22;
  undefined1 auVar17 [16];
  uint uVar23;
  uint uVar24;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auVar25 [16];
  uint uVar30;
  undefined1 auVar26 [16];
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  int local_f8;
  int iStack_f4;
  int local_e8;
  int iStack_e4;
  
  piVar1 = (int *)param_1[2];
  plVar11 = (longlong *)0x0;
  piVar2 = (int *)param_1[3];
  uVar9 = *(uint *)(param_1 + 4);
  uVar8 = 0;
  if ((int)uVar9 < 1) {
    if (uVar9 == 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    QueryPerformanceCounter(&local_res8);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar5 = plVar11;
    if ((3 < uVar9) && (plVar5 = (longlong *)0x0, 1 < DAT_1468387b0)) {
      uVar3 = uVar9 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      local_e8 = 0;
      iStack_e4 = 0;
      local_f8 = 0;
      iStack_f4 = 0;
      plVar5 = plVar11;
      do {
        iVar7 = (int)plVar5;
        iVar4 = iVar7 + 2;
        auVar16._4_4_ = iVar7 + 1;
        auVar16._0_4_ = iVar7;
        auVar16._8_4_ = iVar7;
        auVar16._12_4_ = iVar7;
        auVar16 = pmovsxdq(in_XMM2,auVar16);
        iVar15 = (int)((ulonglong)(param_1 + auVar16._0_8_ + 2) >> 4);
        uVar18 = (uint)((ulonglong)(param_1 + auVar16._0_8_ + 2) >> 0x24);
        iVar20 = (int)((ulonglong)(param_1 + auVar16._8_8_ + 2) >> 4);
        uVar22 = (uint)((ulonglong)(param_1 + auVar16._8_8_ + 2) >> 0x24);
        uVar24 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
        uVar27 = 0x9e3779b9U - iVar20 ^ iVar20 << 8;
        uVar28 = -uVar18 ^ uVar18 << 8;
        uVar29 = -uVar22 ^ uVar22 << 8;
        uVar8 = -iVar15 - uVar24 ^ uVar24 >> 0xd;
        uVar19 = -iVar20 - uVar27 ^ uVar27 >> 0xd;
        uVar21 = -uVar18 - uVar28 ^ uVar28 >> 0xd;
        uVar23 = -uVar22 - uVar29 ^ uVar29 >> 0xd;
        uVar30 = (iVar15 - uVar24) - uVar8 ^ uVar8 >> 0xc;
        uVar31 = (iVar20 - uVar27) - uVar19 ^ uVar19 >> 0xc;
        uVar32 = (uVar18 - uVar28) - uVar21 ^ uVar21 >> 0xc;
        uVar33 = (uVar22 - uVar29) - uVar23 ^ uVar23 >> 0xc;
        uVar22 = (uVar24 - uVar30) - uVar8 ^ uVar30 << 0x10;
        uVar24 = (uVar27 - uVar31) - uVar19 ^ uVar31 << 0x10;
        uVar27 = (uVar28 - uVar32) - uVar21 ^ uVar32 << 0x10;
        uVar28 = (uVar29 - uVar33) - uVar23 ^ uVar33 << 0x10;
        uVar8 = (uVar8 - uVar22) - uVar30 ^ uVar22 >> 5;
        uVar18 = (uVar19 - uVar24) - uVar31 ^ uVar24 >> 5;
        uVar19 = (uVar21 - uVar27) - uVar32 ^ uVar27 >> 5;
        uVar21 = (uVar23 - uVar28) - uVar33 ^ uVar28 >> 5;
        uVar29 = (uVar30 - uVar22) - uVar8 ^ uVar8 >> 3;
        uVar30 = (uVar31 - uVar24) - uVar18 ^ uVar18 >> 3;
        uVar31 = (uVar32 - uVar27) - uVar19 ^ uVar19 >> 3;
        uVar32 = (uVar33 - uVar28) - uVar21 ^ uVar21 >> 3;
        uVar22 = (uVar22 - uVar29) - uVar8 ^ uVar29 << 10;
        uVar23 = (uVar24 - uVar30) - uVar18 ^ uVar30 << 10;
        uVar24 = (uVar27 - uVar31) - uVar19 ^ uVar31 << 10;
        uVar27 = (uVar28 - uVar32) - uVar21 ^ uVar32 << 10;
        auVar17._0_4_ = (uVar8 - uVar22) - uVar29;
        auVar17._4_4_ = (uVar18 - uVar23) - uVar30;
        auVar17._8_4_ = (uVar19 - uVar24) - uVar31;
        auVar17._12_4_ = (uVar21 - uVar27) - uVar32;
        auVar25._0_4_ = uVar22 >> 0xf;
        auVar25._4_4_ = uVar23 >> 0xf;
        auVar25._8_4_ = uVar24 >> 0xf;
        auVar25._12_4_ = uVar27 >> 0xf;
        auVar17 = auVar17 ^ auVar25;
        auVar14._4_4_ = iVar7 + 3;
        auVar14._0_4_ = iVar4;
        auVar14._8_4_ = iVar4;
        auVar14._12_4_ = iVar4;
        local_e8 = local_e8 + auVar17._0_4_;
        iStack_e4 = iStack_e4 + auVar17._4_4_;
        auVar16 = pmovsxdq(auVar17,auVar14);
        iVar4 = (int)((ulonglong)(param_1 + auVar16._0_8_ + 2) >> 4);
        uVar19 = (uint)((ulonglong)(param_1 + auVar16._0_8_ + 2) >> 0x24);
        iVar15 = (int)((ulonglong)(param_1 + auVar16._8_8_ + 2) >> 4);
        uVar23 = (uint)((ulonglong)(param_1 + auVar16._8_8_ + 2) >> 0x24);
        uVar8 = iVar7 + 4;
        plVar5 = (longlong *)(ulonglong)uVar8;
        uVar27 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
        uVar28 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
        uVar29 = -uVar19 ^ uVar19 << 8;
        uVar30 = -uVar23 ^ uVar23 << 8;
        uVar18 = -iVar4 - uVar27 ^ uVar27 >> 0xd;
        uVar21 = -iVar15 - uVar28 ^ uVar28 >> 0xd;
        uVar22 = -uVar19 - uVar29 ^ uVar29 >> 0xd;
        uVar24 = -uVar23 - uVar30 ^ uVar30 >> 0xd;
        uVar31 = (iVar4 - uVar27) - uVar18 ^ uVar18 >> 0xc;
        uVar32 = (iVar15 - uVar28) - uVar21 ^ uVar21 >> 0xc;
        uVar33 = (uVar19 - uVar29) - uVar22 ^ uVar22 >> 0xc;
        uVar34 = (uVar23 - uVar30) - uVar24 ^ uVar24 >> 0xc;
        uVar23 = (uVar27 - uVar31) - uVar18 ^ uVar31 << 0x10;
        uVar27 = (uVar28 - uVar32) - uVar21 ^ uVar32 << 0x10;
        uVar28 = (uVar29 - uVar33) - uVar22 ^ uVar33 << 0x10;
        uVar29 = (uVar30 - uVar34) - uVar24 ^ uVar34 << 0x10;
        uVar18 = (uVar18 - uVar23) - uVar31 ^ uVar23 >> 5;
        uVar19 = (uVar21 - uVar27) - uVar32 ^ uVar27 >> 5;
        uVar21 = (uVar22 - uVar28) - uVar33 ^ uVar28 >> 5;
        uVar22 = (uVar24 - uVar29) - uVar34 ^ uVar29 >> 5;
        uVar30 = (uVar31 - uVar23) - uVar18 ^ uVar18 >> 3;
        uVar31 = (uVar32 - uVar27) - uVar19 ^ uVar19 >> 3;
        uVar32 = (uVar33 - uVar28) - uVar21 ^ uVar21 >> 3;
        uVar33 = (uVar34 - uVar29) - uVar22 ^ uVar22 >> 3;
        uVar23 = (uVar23 - uVar30) - uVar18 ^ uVar30 << 10;
        uVar24 = (uVar27 - uVar31) - uVar19 ^ uVar31 << 10;
        uVar27 = (uVar28 - uVar32) - uVar21 ^ uVar32 << 10;
        uVar28 = (uVar29 - uVar33) - uVar22 ^ uVar33 << 10;
        in_XMM2._0_4_ = (uVar18 - uVar23) - uVar30;
        in_XMM2._4_4_ = (uVar19 - uVar24) - uVar31;
        in_XMM2._8_4_ = (uVar21 - uVar27) - uVar32;
        in_XMM2._12_4_ = (uVar22 - uVar28) - uVar33;
        auVar26._0_4_ = uVar23 >> 0xf;
        auVar26._4_4_ = uVar24 >> 0xf;
        auVar26._8_4_ = uVar27 >> 0xf;
        auVar26._12_4_ = uVar28 >> 0xf;
        in_XMM2 = in_XMM2 ^ auVar26;
        local_f8 = local_f8 + in_XMM2._0_4_;
        iStack_f4 = iStack_f4 + in_XMM2._4_4_;
      } while ((int)uVar8 < (int)(uVar9 - uVar3));
      plVar5 = (longlong *)(ulonglong)(uint)(local_f8 + local_e8 + iStack_f4 + iStack_e4);
    }
    uVar3 = (uint)plVar5;
    if ((int)uVar8 < (int)uVar9) {
      uVar13 = (ulonglong)(uVar9 - uVar8);
      puVar12 = param_1 + (longlong)(int)uVar8 + 2;
      do {
        uVar10 = (ulonglong)puVar12 >> 4;
        puVar12 = puVar12 + 1;
        iVar4 = (int)uVar10;
        uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
        uVar9 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
        uVar8 = (iVar4 - uVar3) - uVar9 ^ uVar9 >> 0xc;
        uVar3 = (uVar3 - uVar8) - uVar9 ^ uVar8 << 0x10;
        uVar9 = (uVar9 - uVar3) - uVar8 ^ uVar3 >> 5;
        uVar8 = (uVar8 - uVar3) - uVar9 ^ uVar9 >> 3;
        uVar3 = (uVar3 - uVar8) - uVar9 ^ uVar8 << 10;
        uVar3 = (int)plVar5 + ((uVar9 - uVar3) - uVar8 ^ uVar3 >> 0xf);
        plVar5 = (longlong *)(ulonglong)uVar3;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    QueryPerformanceCounter(&local_res20);
    LOCK();
    *piVar2 = *piVar2 + ((uVar3 & 1) - local_res8._0_4_) + local_res20.s.LowPart;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_141591a60(param_1[6],param_2,param_3);
  *param_1 = &PTR_FUN_144c95498;
  if (param_1[6] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  plVar5 = TlsGetValue(DAT_1468a7c78);
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar11;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(DAT_1468a7c78,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar11 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_1468a7c80);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar11;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 14158b540 FUN_14158b540 body=82 status=ok
// SIG undefined FUN_14158b540(void)

undefined8 * FUN_14158b540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c95498;
  if (param_1[6] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14158b5a0 ExecuteTask body=203 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FBoolGraphTask>::ExecuteTask(undefined8 *param_1)

{
  longlong *lpTlsValue;
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined1 *)param_1[2] = 1;
  *param_1 = &PTR__scalar_deleting_destructor__144c954a8;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  lpTlsValue = TlsGetValue(DAT_1468a7c78);
  plVar2 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar1 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar2;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = 0;
      plVar1[1] = 0;
      *(undefined4 *)(plVar1 + 2) = 0;
      lpTlsValue = plVar1;
    }
    TlsSetValue(DAT_1468a7c78,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar2 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_1468a7c80);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar2;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14158b670 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLBaseVertexBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144c954a8;
  if (param_1[4] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14158b6d0 ExecuteTask body=212 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FForegroundGraphTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *lpTlsValue;
  longlong *plVar1;
  longlong *plVar2;
  
  FForegroundGraphTask::DoTask(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144c954e0;
  if (param_1[4] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  lpTlsValue = TlsGetValue(DAT_1468a7c78);
  plVar2 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar1 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar2;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = 0;
      plVar1[1] = 0;
      *(undefined4 *)(plVar1 + 2) = 0;
      lpTlsValue = plVar1;
    }
    TlsSetValue(DAT_1468a7c78,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar2 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_1468a7c80);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar2;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14158b7b0 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLBaseVertexBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144c954e0;
  if (param_1[4] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14158b810 ExecuteTask body=21 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FBackgroundGraphTask>::ExecuteTask
               (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  FBackgroundGraphTask::DoTask(param_1 + 0x10,param_3,param_1 + 0x18);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14158b830 FUN_14158b830 body=82 status=ok
// SIG undefined FUN_14158b830(void)

undefined8 * FUN_14158b830(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c954f0;
  if (param_1[3] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14158b890 FUN_14158b890 body=393 status=ok
// SIG undefined FUN_14158b890(void)

int * FUN_14158b890(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar2 = (undefined8 *)(*param_1 + (longlong)iVar8 * 0x18);
  puVar4 = (undefined8 *)param_3[1];
  *puVar2 = *(undefined8 *)*param_3;
  puVar2[1] = *puVar4;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  cVar5 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    uVar9 = (int)((ulonglong)*puVar2 >> 0x20) + (int)*puVar2 & (int)param_1[9] - 1U;
    *(uint *)((longlong)puVar2 + 0x14) = uVar9;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 14158ba20 EmplaceUnique<FName_const_&,IModularFeature_*_const_&> body=315 status=ok
// SIG undefined EmplaceUnique<FName_const_&,IModularFeature_*_const_&>(void)

longlong TMultiMap<FName,IModularFeature_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>_>
         ::EmplaceUnique<FName_const_&,IModularFeature_*_const_&>
                   (longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int local_res8 [2];
  longlong *local_38;
  longlong *local_30;
  
  lVar1 = *param_2;
  lVar2 = *param_3;
  local_30 = (longlong *)lVar1;
  TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)local_30) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    iVar6 = iVar4;
    if (iVar4 != -1) {
      do {
        iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar6 * 0x18);
        if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x18) == lVar1) break;
        iVar6 = iVar4;
      } while (iVar4 != -1);
    }
    if (iVar6 != -1) {
      lVar3 = *param_1;
      do {
        if (*(longlong *)(lVar3 + 8 + (longlong)iVar6 * 0x18) == lVar2) {
          lVar3 = lVar3 + ((longlong)iVar6 * 3 + 1) * 8;
          if (lVar3 != 0) {
            return lVar3;
          }
          break;
        }
        iVar6 = iVar4;
        if (iVar4 == -1) break;
        do {
          iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar6 * 0x18);
          if (*(longlong *)(lVar3 + (longlong)iVar6 * 0x18) == lVar1) break;
          iVar6 = iVar4;
        } while (iVar4 != -1);
      } while (iVar6 != -1);
    }
  }
  local_38 = param_2;
  local_30 = param_3;
  FUN_14158b890(param_1,local_res8,&local_38,0);
  return *param_1 + (longlong)local_res8[0] * 0x18 + 8;
}



// FUNCTION 14158bb60 FLockFreePointerFIFOBase<FBaseGraphTask,128,1> body=84 status=ok
// SIG undefined FLockFreePointerFIFOBase<FBaseGraphTask,128,1>(void)

longlong FLockFreePointerFIFOBase<FBaseGraphTask,128,1>::
         FLockFreePointerFIFOBase<FBaseGraphTask,128,1>(longlong param_1)

{
  uint uVar1;
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  uVar1 = FUN_141595030(&DAT_1468a7fd8);
  *(ulonglong *)(param_1 + 0x80) = *(ulonglong *)(param_1 + 0x80) & 0xfffffffffc000000;
  *(ulonglong *)(param_1 + 0x80) = *(ulonglong *)(param_1 + 0x80) | (ulonglong)uVar1;
  *(ulonglong *)(param_1 + 0x108) = *(ulonglong *)(param_1 + 0x108) & 0xfffffffffc000000;
  *(ulonglong *)(param_1 + 0x108) = *(ulonglong *)(param_1 + 0x108) | (ulonglong)uVar1;
  return param_1;
}



// FUNCTION 14158bbc0 FUN_14158bbc0 body=234 status=ok
// SIG undefined FUN_14158bbc0(void)

undefined8 * FUN_14158bbc0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_GetPoolName_144c958b8;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_2[6] == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 4,param_2 + 2,0x20);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  param_1[8] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_1 + 10) != 0) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 4;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      puVar2 = (undefined1 *)*param_2;
      goto LAB_14158bc5f;
    }
  }
  puVar2 = &LAB_141590d70;
LAB_14158bc5f:
  param_1[2] = puVar2;
  *param_2 = &LAB_141590d70;
  LOCK();
  UNLOCK();
  lVar3 = DAT_1464a8218 + 1;
  lVar1 = DAT_1464a8218 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_1464a8218 + 2;
    lVar1 = DAT_1464a8218 + 2;
  }
  DAT_1464a8218 = lVar1;
  param_1[0xd] = lVar3;
  return param_1;
}



// FUNCTION 14158bcb0 FUN_14158bcb0 body=158 status=ok
// SIG undefined FUN_14158bcb0(void)

undefined8 *
FUN_14158bcb0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar3 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar3 = param_2 + 2;
    }
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (longlong *)(**(code **)*puVar3)(puVar3,param_1 + 2);
      (**(code **)(*plVar1 + 8))(plVar1);
      pcVar2 = (code *)*param_2;
      goto LAB_14158bd11;
    }
  }
  pcVar2 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_14158bd11:
  *param_1 = pcVar2;
  param_1[0xb] = param_5;
  param_1[0xc] = param_6;
  param_1[0xd] = param_7;
  *(undefined4 *)(param_1 + 10) = param_3;
  *(undefined1 *)(param_1 + 0xe) = param_4;
  return param_1;
}



// FUNCTION 14158bd50 FUN_14158bd50 body=3137 status=ok
// SIG undefined FUN_14158bd50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14158bd50(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined2 *puVar19;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  puVar7 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_144c956f0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined1 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined1 *)(param_1 + 0xde) = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined1 *)(param_1 + 0xed) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  puVar12 = param_1 + 0xfd;
  param_1[0xf1] = 0;
  iVar11 = 3;
  param_1[0xf2] = 0;
  lVar14 = 3;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  *(undefined1 *)(param_1 + 0xf6) = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  do {
    _vector_constructor_iterator_
              (puVar12,400,3,
               FLockFreePointerFIFOBase<FBaseGraphTask,128,1>::
               FLockFreePointerFIFOBase<FBaseGraphTask,128,1>);
    puVar12[0x96] = 0;
    puVar12 = puVar12 + 0xa7;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  *(bool *)(param_1 + 0xf9) = DAT_1464a820c != 0;
  *(bool *)((longlong)param_1 + 0x7c9) = DAT_1464a8208 != 0;
  iVar3 = FUN_1416a58c0();
  cVar2 = FUN_1415bac00();
  if (cVar2 == '\0') {
    *(undefined4 *)((longlong)param_1 + 0x7cc) = 2;
    iVar3 = 1;
    *(undefined2 *)(param_1 + 0xf9) = 0;
    DAT_1464a8208 = 0;
    DAT_1464a820c = 0;
    iVar11 = *(int *)((longlong)param_1 + 0x7cc);
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x7cc) = 3;
  }
  iVar17 = iVar11 + 1;
  iVar16 = (uint)*(byte *)((longlong)param_1 + 0x7c9) + *(byte *)(param_1 + 0xf9) + 1;
  *(int *)((longlong)param_1 + 0x7bc) = iVar17;
  *(int *)(param_1 + 0xf8) = iVar16;
  iVar9 = iVar16 * iVar3 + iVar17;
  iVar3 = 0x52;
  if (iVar9 < 0x53) {
    iVar3 = iVar9;
  }
  iVar1 = iVar11 + 2;
  if (iVar11 + 2 <= iVar3) {
    iVar1 = iVar3;
  }
  if (iVar1 <= iVar9) {
    iVar9 = iVar1;
  }
  *(int *)(param_1 + 0xf7) = iVar9;
  *(int *)((longlong)param_1 + 0x7c4) = (iVar9 - iVar17) / iVar16;
  LOCK();
  *(int *)(param_1 + 0xfa) = *(int *)(param_1 + 0xfa) + 1;
  UNLOCK();
  DVar4 = TlsAlloc();
  *(DWORD *)((longlong)param_1 + 0x7d4) = DVar4;
  iVar11 = *(int *)(param_1 + 0xf7);
  puVar12 = puVar7;
  puVar15 = puVar7;
  if (0 < iVar11) {
    do {
      iVar3 = (int)puVar15;
      puVar15 = puVar7;
      if (iVar3 < *(int *)((longlong)param_1 + 0x7bc)) {
        puVar5 = (undefined8 *)operator_new(0x7a8);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &PTR_Init_144c95588;
          puVar5[1] = &PTR_LAB_144c955f0;
          *(undefined4 *)(puVar5 + 2) = 0xff;
          *(undefined4 *)((longlong)puVar5 + 0x14) = 0xffffffff;
          *(undefined4 *)(puVar5 + 3) = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          *(undefined4 *)(puVar5 + 5) = 0;
          if (*(int *)((longlong)puVar5 + 0x2c) < 0x80) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(puVar5 + 4,0x80);
          }
          lVar14 = 2;
          *puVar5 = &PTR_Init_144c95600;
          puVar13 = puVar5 + 7;
          puVar5[1] = &PTR_LAB_144c95668;
          do {
            _vector_constructor_iterator_
                      (puVar13,400,2,
                       FLockFreePointerFIFOBase<FBaseGraphTask,128,1>::
                       FLockFreePointerFIFOBase<FBaseGraphTask,128,1>);
            puVar13[100] = 0;
            *(undefined4 *)(puVar13 + 0x75) = 0;
            *(undefined2 *)((longlong)puVar13 + 0x3ac) = 0;
            uVar6 = FUN_1415ab270(0);
            puVar13[0x76] = uVar6;
            puVar13 = puVar13 + 0x77;
            lVar14 = lVar14 + -1;
            puVar15 = puVar5;
          } while (lVar14 != 0);
        }
      }
      else {
        puVar5 = (undefined8 *)operator_new(0x78);
        if (puVar5 != (undefined8 *)0x0) {
          iVar11 = *(int *)((longlong)param_1 + 0x7bc);
          iVar9 = *(int *)((longlong)param_1 + 0x7c4);
          *puVar5 = &PTR_Init_144c95588;
          *(undefined4 *)(puVar5 + 2) = 0xff;
          *(undefined4 *)((longlong)puVar5 + 0x14) = 0xffffffff;
          puVar5[1] = &PTR_LAB_144c955f0;
          *(undefined4 *)(puVar5 + 3) = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          *(undefined4 *)(puVar5 + 5) = 0;
          if (*(int *)((longlong)puVar5 + 0x2c) < 0x80) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(puVar5 + 4,0x80);
          }
          *puVar5 = &PTR_Init_144c95678;
          puVar5[1] = &PTR_LAB_144c956e0;
          uVar6 = FUN_1415ab270(0);
          puVar5[7] = uVar6;
          *(undefined4 *)(puVar5 + 8) = 0;
          *(undefined2 *)((longlong)puVar5 + 0x44) = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)(puVar5 + 9));
          SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar5 + 9),4000);
          *(int *)(puVar5 + 0xe) = (iVar3 - iVar11) / iVar9;
          puVar15 = puVar5;
        }
      }
      *(undefined8 **)((longlong)(puVar12 + 1) + (longlong)param_1) = puVar15;
      *(undefined4 *)((longlong)puVar15 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x7d4);
      *(int *)(puVar15 + 2) = iVar3;
      puVar15[6] = param_1 + (longlong)iVar3 * 3 + 1;
      iVar11 = *(int *)(param_1 + 0xf7);
      puVar12 = puVar12 + 3;
      puVar15 = (undefined8 *)(ulonglong)(iVar3 + 1U);
    } while ((int)(iVar3 + 1U) < iVar11);
  }
  iVar3 = *(int *)((longlong)param_1 + 0x7cc) + 1;
  DAT_1468a80e8 = param_1;
  if (iVar3 < iVar11) {
    puVar12 = param_1 + (longlong)iVar3 * 3 + 2;
    do {
      iVar11 = (iVar3 - *(int *)((longlong)param_1 + 0x7bc)) / *(int *)((longlong)param_1 + 0x7c4);
      iVar9 = (iVar3 - *(int *)((longlong)param_1 + 0x7cc)) + -1;
      if (iVar11 == 1) {
        FString::PrintfImpl(&local_e8,L"TaskGraphThreadHP %d",iVar9);
        puVar19 = local_e8;
        iVar9 = (int)local_e0;
        uVar18 = 5;
        local_e0 = 0;
        local_e8 = (undefined2 *)0x0;
      }
      else if (iVar11 == 2) {
        FString::PrintfImpl(&local_d8,L"TaskGraphThreadBP %d",iVar9);
        puVar19 = local_d8;
        iVar9 = (int)local_d0;
        uVar18 = 4;
        local_d0 = 0;
        local_d8 = (undefined2 *)0x0;
      }
      else {
        FString::PrintfImpl(&local_c8,L"TaskGraphThreadNP %d",iVar9);
        puVar19 = local_c8;
        iVar9 = (int)local_c0;
        uVar18 = 2;
        local_c0 = 0;
        local_c8 = (undefined2 *)0x0;
      }
      local_f8 = 0xffffffffffffffff;
      puVar10 = &DAT_143f3eda8;
      if (iVar9 != 0) {
        puVar10 = puVar19;
      }
      uVar6 = FUN_1415d42a0(puVar12[-1],puVar10,0x60000,uVar18);
      *puVar12 = uVar6;
      *(undefined1 *)(puVar12 + 1) = 1;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_78);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_CopyToEmptyStorage_144c95860;
        *(int *)(puVar7 + 1) = iVar11;
      }
      local_88[0] = &LAB_141590f60;
      plVar8 = (longlong *)FMemory::Realloc(0,0x70);
      if (plVar8 != (longlong *)0x0) {
        FUN_14158bbc0(plVar8,local_88);
      }
      local_b8 = 0;
      local_b0 = 2;
      local_a8 = 1;
      local_a0 = 0;
      local_98 = 0;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8,&local_a0);
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        lVar14 = FMemory::Realloc(plVar8,0,0);
        if (lVar14 != 0) {
          FMemory::Free(lVar14);
        }
      }
      FUN_1415b2830(*puVar12,&local_b8);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a0);
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
      if (puVar19 != (undefined2 *)0x0) {
        FMemory::Free(puVar19);
      }
      iVar3 = iVar3 + 1;
      puVar12 = puVar12 + 3;
    } while (iVar3 < *(int *)(param_1 + 0xf7));
  }
  return param_1;
}



// FUNCTION 14158c9a0 FUN_14158c9a0 body=47 status=ok
// SIG undefined FUN_14158c9a0(void)

undefined8 * FUN_14158c9a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 14158c9d0 FUN_14158c9d0 body=374 status=ok
// SIG undefined FUN_14158c9d0(void)

undefined8 * FUN_14158c9d0(undefined8 *param_1,undefined8 param_2,float param_3,undefined8 param_4)

{
  longlong **pplVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 local_res8 [8];
  longlong *local_48 [6];
  
  param_1[1] = param_4;
  *param_1 = &PTR__scalar_deleting_destructor__144c95578;
  uVar10 = 0;
  param_1[2] = 0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar7 != (longlong *)0x0) {
    plVar7[1] = (longlong)param_1;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar7[2] = (longlong)&LAB_140c67678;
    LOCK();
    UNLOCK();
    lVar9 = DAT_1464a8218 + 1;
    lVar6 = DAT_1464a8218 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_1464a8218 + 2;
      lVar6 = DAT_1464a8218 + 2;
    }
    DAT_1464a8218 = lVar6;
    plVar7[4] = lVar9;
  }
  pdVar4 = (double *)param_1[1];
  iVar3 = *(int *)(pdVar4 + 2);
  lVar9 = (longlong)iVar3;
  dVar2 = *pdVar4;
  *(int *)(pdVar4 + 2) = iVar3 + 1;
  local_48[0] = plVar7;
  if (*(int *)((longlong)pdVar4 + 0x14) < iVar3 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(pdVar4 + 1,iVar3);
  }
  dVar5 = pdVar4[1];
  *(double *)((longlong)dVar5 + lVar9 * 0x28) = (double)param_3 + dVar2;
  pplVar1 = (longlong **)((longlong)dVar5 + 0x10 + lVar9 * 0x28);
  *(float *)((longlong)dVar5 + 8 + lVar9 * 0x28) = param_3;
  *pplVar1 = (longlong *)0x0;
  *(undefined4 *)(pplVar1 + 1) = 0;
  if ((local_48 != pplVar1) && (plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x30))(plVar7);
  }
  *(undefined8 *)((longlong)dVar5 + 0x20 + lVar9 * 0x28) = param_2;
  if (plVar7 != (longlong *)0x0) {
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
    uVar10 = *puVar8;
  }
  param_1[2] = uVar10;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar9 = FMemory::Realloc(plVar7,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  return param_1;
}



// FUNCTION 14158cb50 FUN_14158cb50 body=95 status=ok
// SIG undefined FUN_14158cb50(void)

void FUN_14158cb50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar3 != 0) {
    do {
      FUN_14158cbb0(lVar2);
      lVar2 = lVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14158cbb0 FUN_14158cbb0 body=13 status=ok
// SIG undefined FUN_14158cbb0(void)

ulonglong FUN_14158cbb0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong *lpTlsValue;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 9);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    uVar4 = iVar2 - 1;
    if (uVar4 == 0) {
      FUN_14158cb50(param_1 + 3);
      lpTlsValue = TlsGetValue(DAT_1468a7e70);
      plVar5 = (longlong *)0x0;
      if (lpTlsValue == (longlong *)0x0) {
        plVar3 = (longlong *)operator_new(iVar2 + 0x17);
        lpTlsValue = plVar5;
        if (plVar3 != (longlong *)0x0) {
          *plVar3 = 0;
          plVar3[1] = 0;
          *(undefined4 *)(plVar3 + 2) = 0;
          lpTlsValue = plVar3;
        }
        TlsSetValue(DAT_1468a7e70,lpTlsValue);
      }
      if ((int)lpTlsValue[2] < 0x20) {
        plVar5 = (longlong *)lpTlsValue[1];
      }
      else {
        if (*lpTlsValue != 0) {
          TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_1468a7e78);
        }
        *lpTlsValue = lpTlsValue[1];
        lpTlsValue[1] = 0;
        *(undefined4 *)(lpTlsValue + 2) = 0;
      }
      *param_1 = plVar5;
      *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
      lpTlsValue[1] = (longlong)param_1;
    }
    return (ulonglong)uVar4;
  }
  return in_RAX;
}



// FUNCTION 14158cbc0 FUN_14158cbc0 body=488 status=ok
// SIG undefined FUN_14158cbc0(void)

void FUN_14158cbc0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  plVar1 = param_1 + 0xfb;
  uVar9 = 0;
  *param_1 = &PTR_FUN_144c956f0;
  uVar8 = (ulonglong)*(int *)(param_1 + 0xfc);
  puVar5 = (undefined8 *)*plVar1;
  puVar10 = puVar5 + uVar8 * 10;
  if (puVar5 != puVar10) {
    plVar4 = puVar5 + 6;
    do {
      uVar8 = uVar9;
      if ((int)plVar4[2] != 0) {
        plVar3 = (longlong *)*plVar4;
        if ((longlong *)*plVar4 == (longlong *)0x0) {
          plVar3 = plVar4 + -4;
        }
        if (plVar3 != (longlong *)0x0) {
          uVar8 = (**(code **)(*plVar3 + 8))();
        }
      }
      (*(code *)*puVar5)(uVar8);
      puVar5 = puVar5 + 10;
      plVar4 = plVar4 + 10;
    } while (puVar5 != puVar10);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0xfc);
  }
  if ((int)uVar8 != 0) {
    plVar4 = (longlong *)(*plVar1 + 0x30);
    do {
      if ((int)plVar4[2] != 0) {
        plVar3 = (longlong *)*plVar4;
        if ((longlong *)*plVar4 == (longlong *)0x0) {
          plVar3 = plVar4 + -4;
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,0);
        }
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 10;
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  if (*(int *)((longlong)param_1 + 0x7e4) != 0) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  iVar2 = *(int *)(param_1 + 0xf7);
  if (0 < iVar2) {
    puVar5 = param_1 + 1;
    uVar8 = uVar9;
    do {
      (**(code **)(*(longlong *)*puVar5 + 0x48))((longlong *)*puVar5,0xffffffff);
      iVar2 = *(int *)(param_1 + 0xf7);
      puVar5 = puVar5 + 3;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < iVar2);
  }
  if (0 < iVar2) {
    plVar4 = param_1 + 2;
    do {
      if (*(int *)((longlong)param_1 + 0x7cc) < (int)uVar9) {
        (**(code **)(*(longlong *)*plVar4 + 0x20))();
        plVar3 = (longlong *)*plVar4;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3,1);
        }
        *plVar4 = 0;
      }
      *(undefined1 *)(plVar4 + 1) = 0;
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
      plVar4 = plVar4 + 3;
    } while ((int)uVar7 < *(int *)(param_1 + 0xf7));
  }
  DAT_1468a80e8 = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0;
  TlsFree(*(DWORD *)((longlong)param_1 + 0x7d4));
  lVar6 = 3;
  puVar5 = param_1 + 0x2f2;
  do {
    puVar5 = puVar5 + -0xa7;
    _vector_destructor_iterator_(puVar5,400,3,AK::MemoryMgr::StartProfileThreadUsage);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (plVar1);
  *param_1 = &PTR__purecall_144c95500;
  return;
}



// FUNCTION 14158cdb0 FUN_14158cdb0 body=151 status=ok
// SIG undefined FUN_14158cdb0(void)

void FUN_14158cdb0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x10;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x18);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x10;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14158ce50 ~FTickerObjectBase body=53 status=ok
// SIG undefined ~FTickerObjectBase(void)

void FTickerObjectBase::~FTickerObjectBase(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144c95578;
  if (param_1[2] != 0) {
    FUN_141597530(param_1[1],param_1[2]);
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14158ce90 FUN_14158ce90 body=1004 status=ok
// SIG undefined FUN_14158ce90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14158ce90(longlong *param_1,longlong *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  short *psVar5;
  int iVar6;
  longlong lVar7;
  short *psVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  undefined1 auStack_118 [32];
  undefined2 local_f8;
  uint local_e8 [4];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  ulonglong local_38;
  longlong lVar8;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)(param_1 + 5) & 0x20) == 0) {
      if ((int)param_2[1] != 0) {
        puVar10 = (ushort *)*param_2;
        uVar2 = *puVar10;
        while (uVar2 != 0) {
          if (0x7f < uVar2) goto LAB_14158d138;
          puVar1 = puVar10 + 1;
          puVar10 = puVar10 + 1;
          uVar2 = *puVar1;
        }
      }
      bVar12 = false;
    }
    else {
LAB_14158d138:
      bVar12 = true;
    }
    uVar3 = *(uint *)(param_2 + 1);
    lVar7 = (longlong)(int)uVar3;
    plVar4 = (longlong *)param_1[1];
    local_e8[0] = -uVar3;
    if (!bVar12) {
      local_e8[0] = uVar3;
    }
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_e8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_e8,4);
      }
    }
    else {
      local_e8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    (**(code **)(*param_1 + 0x78))
              (param_1,(longlong)(int)param_2[1] * 2,(longlong)*(int *)((longlong)param_2 + 0xc) * 2
              );
    if (local_e8[0] != 0) {
      if (bVar12) {
        (**(code **)(*param_1 + 0x50))(param_1,*param_2,lVar7 * 2);
      }
      else {
        lVar8 = *param_2;
        local_58 = (undefined1 *)0x0;
        if (lVar8 == 0) {
          local_50 = (undefined1 *)0x0;
          local_48 = 0;
        }
        else {
          local_48 = uVar3;
          if ((0x80 < uVar3) && (uVar3 != 0)) {
            local_58 = (undefined1 *)FMemory::Realloc(0,lVar7,0);
          }
          local_f8 = CONCAT11(local_f8._1_1_,0x3f);
          local_50 = local_d8;
          if (local_58 != (undefined1 *)0x0) {
            local_50 = local_58;
          }
          FGenericPlatformString::Convert<wchar_t,char>(local_50,uVar3,lVar8,uVar3);
        }
        (**(code **)(*param_1 + 0x50))(param_1,local_50,lVar7);
        if (local_58 != (undefined1 *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  else {
    plVar4 = (longlong *)param_1[1];
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_e8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_e8,4);
      }
    }
    else {
      local_e8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    bVar12 = (int)local_e8[0] < 0;
    if ((((int)local_e8[0] < 0) && (local_e8[0] = -local_e8[0], (int)local_e8[0] < 0)) ||
       ((0 < param_1[7] && (param_1[7] < (longlong)(int)local_e8[0])))) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
      *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 1;
    }
    else {
      *(undefined4 *)(param_2 + 1) = 0;
      puVar11 = (undefined1 *)0x0;
      if (*(uint *)((longlong)param_2 + 0xc) != local_e8[0]) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,local_e8[0]);
        puVar11 = (undefined1 *)(ulonglong)*(uint *)(param_2 + 1);
      }
      iVar6 = (int)puVar11 + local_e8[0];
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      if (local_e8[0] != 0) {
        lVar7 = *param_2;
        if (bVar12) {
          (**(code **)(*param_1 + 0x50))(param_1,lVar7,(longlong)(int)local_e8[0] * 2);
          *(undefined2 *)(lVar7 + (longlong)(int)(local_e8[0] - 1) * 2) = 0;
          psVar5 = (short *)*param_2;
          for (psVar9 = psVar5; psVar9 != psVar5 + (int)param_2[1]; psVar9 = psVar9 + 1) {
            if (*psVar9 == -1) {
              iVar6 = (int)((longlong)psVar9 - (longlong)psVar5 >> 1);
              if (iVar6 != -1) {
                psVar5[iVar6] = 0;
                if ((int)param_2[1] != 0) {
                  lVar7 = -1;
                  do {
                    lVar8 = lVar7;
                    lVar7 = lVar8 + 1;
                  } while (*(short *)(*param_2 + lVar7 * 2) != 0);
                  iVar6 = (int)lVar8 + 2;
                  if ((int)lVar7 < 1) {
                    iVar6 = 0;
                  }
                  if ((int)param_2[1] != iVar6) {
                    *(int *)(param_2 + 1) = iVar6;
                    TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_2);
                  }
                }
              }
              break;
            }
          }
        }
        else {
          local_58 = (undefined1 *)0x0;
          local_50 = (undefined1 *)lVar7;
          local_48 = local_e8[0];
          local_44 = local_e8[0];
          if (0x80 < local_e8[0]) {
            local_58 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)local_e8[0],0);
          }
          puVar11 = local_d8;
          if (local_58 != (undefined1 *)0x0) {
            puVar11 = (undefined1 *)0x0;
          }
          (**(code **)(*param_1 + 0x50))
                    (param_1,(ulonglong)puVar11 | (ulonglong)local_58,(longlong)(int)local_e8[0]);
          puVar11 = local_d8;
          if (local_58 != (undefined1 *)0x0) {
            puVar11 = local_58;
          }
          puVar11[(int)(local_e8[0] - 1)] = 0;
          puVar11 = local_d8;
          if (local_58 != (undefined1 *)0x0) {
            puVar11 = local_58;
          }
          local_f8 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_50,local_48,puVar11,local_44);
          if (local_58 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        if ((local_e8[0] == 1) &&
           (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 14158d280 operator() body=875 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014158d464) */
/* WARNING: Removing unreachable block (ram,0x00014158d471) */

void <lambda_b8c9f3c5fec19407063c09732bd0f6df>::operator()(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong *puVar14;
  longlong lVar15;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  int local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 local_90 [24];
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar15 = 0;
  local_c8 = local_c8 & 0xffffffff00000000;
  local_58 = (longlong *)0x0;
  local_50 = 10;
  local_c0 = param_2;
  local_a8 = param_1;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_78);
  plVar12 = local_78;
  if (local_58 != (longlong *)0x0) {
    plVar12 = local_58;
  }
  ::_guard_xfg_dispatch_icall_nop(plVar12,0,0x50);
  uVar6 = (**(code **)(*DAT_1468a80e8 + 0x10))(DAT_1468a80e8,0);
  do {
    puVar8 = TlsGetValue(DAT_1468a7c78);
    if (puVar8 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)operator_new(0x18);
      puVar8 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 2) = 0;
        puVar8 = puVar9;
      }
      TlsSetValue(DAT_1468a7c78,puVar8);
    }
    puVar9 = (undefined8 *)puVar8[1];
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar8;
      if (puVar9 == (undefined8 *)0x0) {
        uVar7 = FUN_141594c40(&DAT_1468a7c80);
        puVar9 = (undefined8 *)0x0;
        if (uVar7 != 0) {
          puVar9 = *(undefined8 **)
                    ((&DAT_1468a81f8)[uVar7 >> 0xe] + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18);
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
        }
        puVar8[1] = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
          puVar8[1] = puVar9;
          lVar13 = 0x1f;
          do {
            puVar1 = puVar9 + 0x20;
            *puVar9 = puVar1;
            lVar13 = lVar13 + -1;
            puVar9 = puVar1;
          } while (lVar13 != 0);
          *puVar1 = 0;
          puVar9 = (undefined8 *)puVar8[1];
        }
        *(undefined4 *)(puVar8 + 2) = 0x20;
        iVar11 = 0x20;
      }
      else {
        puVar8[1] = puVar9;
        iVar11 = 0x20;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 2) = 0x20;
      }
    }
    else {
      iVar11 = *(int *)(puVar8 + 2);
    }
    puVar8[1] = *puVar9;
    *(int *)(puVar8 + 2) = iVar11 + -1;
    puVar8 = (undefined8 *)FUN_1415914c0(&local_b0);
    local_a0 = *puVar8;
    *puVar8 = 0;
    *puVar9 = &PTR_FUN_143f3edd8;
    *(undefined4 *)(puVar9 + 1) = 0xff;
    *(undefined4 *)((longlong)puVar9 + 0xc) = 1;
    *puVar9 = &PTR_FUN_144c95808;
    *(undefined1 *)((longlong)puVar9 + 0x14) = 0;
    puVar9[3] = local_a0;
    if (local_b0 != 0) {
      FGraphEvent::Release();
    }
    *(undefined4 *)(puVar9 + 2) = 0xff;
    uVar2 = puVar9[3];
    if (uVar2 != 0) {
      LOCK();
      *(int *)(uVar2 + 0x48) = *(int *)(uVar2 + 0x48) + 1;
      UNLOCK();
    }
    local_c8 = uVar2;
    FUN_141599db0(puVar9,0,uVar6,1);
    plVar12 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar12 = local_58;
    }
    puVar14 = (ulonglong *)((longlong)plVar12 + lVar15);
    if (puVar14 == &local_c8) {
      if (uVar2 != 0) {
        FGraphEvent::Release(uVar2);
      }
    }
    else {
      uVar3 = *puVar14;
      *puVar14 = uVar2;
      local_c8 = 0;
      if (uVar3 != 0) {
        FGraphEvent::Release();
      }
    }
    lVar15 = lVar15 + 8;
  } while (lVar15 < 0x50);
  plVar10 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_90,local_78,uVar6);
  plVar12 = local_a8;
  *(undefined4 *)(*plVar10 + 0x10) = 0xff;
  lVar15 = *plVar10;
  lVar5 = plVar10[2];
  lVar13 = plVar10[1];
  lVar4 = *(longlong *)(lVar15 + 0x18);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    UNLOCK();
  }
  local_b8 = lVar4;
  FUN_141599db0(lVar15,lVar13,(int)lVar5,1);
  lVar15 = *(longlong *)(*plVar12 + 0x20);
  if (lVar15 == 0) {
    lVar15 = *plVar12;
  }
  plVar12 = (longlong *)(lVar15 + (longlong)local_c0 * 8);
  if (plVar12 != &local_b8) {
    lVar15 = *plVar12;
    *plVar12 = lVar4;
    lVar4 = lVar15;
  }
  if (lVar4 != 0) {
    FGraphEvent::Release(lVar4);
  }
  plVar12 = local_78;
  iVar11 = (int)local_50;
  if (local_58 != (longlong *)0x0) {
    plVar12 = local_58;
  }
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar12 != 0) {
      FGraphEvent::Release();
    }
    plVar12 = plVar12 + 1;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14158d5f0 operator() body=877 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014158d7d4) */
/* WARNING: Removing unreachable block (ram,0x00014158d7e1) */

void <lambda_cb841597b53486a42dee4bfb76da4b43>::operator()(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong *puVar14;
  longlong lVar15;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  int local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 local_90 [24];
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar15 = 0;
  local_c8 = local_c8 & 0xffffffff00000000;
  local_58 = (longlong *)0x0;
  local_50 = 100;
  local_c0 = param_2;
  local_a8 = param_1;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_78);
  plVar12 = local_78;
  if (local_58 != (longlong *)0x0) {
    plVar12 = local_58;
  }
  ::_guard_xfg_dispatch_icall_nop(plVar12,0,800);
  uVar6 = (**(code **)(*DAT_1468a80e8 + 0x10))(DAT_1468a80e8,0);
  do {
    puVar8 = TlsGetValue(DAT_1468a7c78);
    if (puVar8 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)operator_new(0x18);
      puVar8 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 2) = 0;
        puVar8 = puVar9;
      }
      TlsSetValue(DAT_1468a7c78,puVar8);
    }
    puVar9 = (undefined8 *)puVar8[1];
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar8;
      if (puVar9 == (undefined8 *)0x0) {
        uVar7 = FUN_141594c40(&DAT_1468a7c80);
        puVar9 = (undefined8 *)0x0;
        if (uVar7 != 0) {
          puVar9 = *(undefined8 **)
                    ((&DAT_1468a81f8)[uVar7 >> 0xe] + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18);
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
        }
        puVar8[1] = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
          puVar8[1] = puVar9;
          lVar13 = 0x1f;
          do {
            puVar1 = puVar9 + 0x20;
            *puVar9 = puVar1;
            lVar13 = lVar13 + -1;
            puVar9 = puVar1;
          } while (lVar13 != 0);
          *puVar1 = 0;
          puVar9 = (undefined8 *)puVar8[1];
        }
        *(undefined4 *)(puVar8 + 2) = 0x20;
        iVar11 = 0x20;
      }
      else {
        puVar8[1] = puVar9;
        iVar11 = 0x20;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 2) = 0x20;
      }
    }
    else {
      iVar11 = *(int *)(puVar8 + 2);
    }
    puVar8[1] = *puVar9;
    *(int *)(puVar8 + 2) = iVar11 + -1;
    puVar8 = (undefined8 *)FUN_1415914c0(&local_b0);
    local_a0 = *puVar8;
    *puVar8 = 0;
    *puVar9 = &PTR_FUN_143f3edd8;
    *(undefined4 *)(puVar9 + 1) = 0xff;
    *(undefined4 *)((longlong)puVar9 + 0xc) = 1;
    *puVar9 = &PTR_FUN_144c95808;
    *(undefined1 *)((longlong)puVar9 + 0x14) = 0;
    puVar9[3] = local_a0;
    if (local_b0 != 0) {
      FGraphEvent::Release();
    }
    *(undefined4 *)(puVar9 + 2) = 0xff;
    uVar2 = puVar9[3];
    if (uVar2 != 0) {
      LOCK();
      *(int *)(uVar2 + 0x48) = *(int *)(uVar2 + 0x48) + 1;
      UNLOCK();
    }
    local_c8 = uVar2;
    FUN_141599db0(puVar9,0,uVar6,1);
    plVar12 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar12 = local_58;
    }
    puVar14 = (ulonglong *)((longlong)plVar12 + lVar15);
    if (puVar14 == &local_c8) {
      if (uVar2 != 0) {
        FGraphEvent::Release(uVar2);
      }
    }
    else {
      uVar3 = *puVar14;
      *puVar14 = uVar2;
      local_c8 = 0;
      if (uVar3 != 0) {
        FGraphEvent::Release();
      }
    }
    lVar15 = lVar15 + 8;
  } while (lVar15 < 800);
  plVar10 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_90,local_78,uVar6);
  plVar12 = local_a8;
  *(undefined4 *)(*plVar10 + 0x10) = 0xff;
  lVar15 = *plVar10;
  lVar5 = plVar10[2];
  lVar13 = plVar10[1];
  lVar4 = *(longlong *)(lVar15 + 0x18);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    UNLOCK();
  }
  local_b8 = lVar4;
  FUN_141599db0(lVar15,lVar13,(int)lVar5,1);
  lVar15 = *(longlong *)(*plVar12 + 0x20);
  if (lVar15 == 0) {
    lVar15 = *plVar12;
  }
  plVar12 = (longlong *)(lVar15 + (longlong)local_c0 * 8);
  if (plVar12 != &local_b8) {
    lVar15 = *plVar12;
    *plVar12 = lVar4;
    lVar4 = lVar15;
  }
  if (lVar4 != 0) {
    FGraphEvent::Release(lVar4);
  }
  plVar12 = local_78;
  iVar11 = (int)local_50;
  if (local_58 != (longlong *)0x0) {
    plVar12 = local_58;
  }
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar12 != 0) {
      FGraphEvent::Release();
    }
    plVar12 = plVar12 + 1;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14158d960 operator() body=352 status=ok
// SIG undefined operator()(void)

void <lambda_6d49fc3988beee0df1b6f5d02d917cdd>::operator()(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  
  plVar2 = TlsGetValue(DAT_1468a7c78);
  plVar5 = (longlong *)0x0;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)operator_new(0x18);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      plVar5 = plVar2;
    }
    TlsSetValue(DAT_1468a7c78,plVar5);
    plVar2 = plVar5;
  }
  plVar5 = (longlong *)plVar2[1];
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)*plVar2;
    if (plVar5 == (longlong *)0x0) {
      lVar3 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7c80);
      plVar2[1] = lVar3;
      if (lVar3 == 0) {
        puVar4 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar2[1] = (longlong)puVar4;
        lVar3 = 0x1f;
        do {
          puVar1 = puVar4 + 0x20;
          *puVar4 = puVar1;
          lVar3 = lVar3 + -1;
          puVar4 = puVar1;
        } while (lVar3 != 0);
        *puVar1 = 0;
      }
      plVar5 = (longlong *)plVar2[1];
      iVar6 = 0x20;
      *(undefined4 *)(plVar2 + 2) = 0x20;
    }
    else {
      iVar6 = 0x20;
      plVar2[1] = (longlong)plVar5;
      *(undefined4 *)(plVar2 + 2) = 0x20;
      *plVar2 = 0;
    }
  }
  else {
    iVar6 = (int)plVar2[2];
  }
  plVar2[1] = *plVar5;
  *(int *)(plVar2 + 2) = iVar6 + -1;
  *plVar5 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar5 + 1) = 0xff;
  *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
  *plVar5 = (longlong)&PTR__scalar_deleting_destructor__144c954a8;
  *(undefined1 *)(plVar5 + 3) = 0;
  plVar5[4] = 0;
  plVar5[2] = (longlong)(&DAT_1468a7880 + param_2);
  lVar3 = plVar5[4];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
  }
  FUN_141598e50(plVar5,0,0xff,1,0);
  if (lVar3 != 0) {
    FGraphEvent::Release(lVar3);
  }
  return;
}



// FUNCTION 14158dac0 FUN_14158dac0 body=1134 status=ok
// SIG undefined FUN_14158dac0(void)

void FUN_14158dac0(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  int iVar11;
  int iVar14;
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar13 [16];
  uint uVar18;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18;
  int local_c8;
  int iStack_c4;
  int local_b8;
  int iStack_b4;
  
  piVar7 = (int *)*param_1;
  piVar1 = (int *)param_1[1];
  QueryPerformanceCounter(&local_res8);
  LOCK();
  *piVar7 = *piVar7 + 1;
  UNLOCK();
  uVar6 = 0;
  lVar9 = 1000;
  if (DAT_1468387b0 < 2) {
    do {
      uVar5 = (ulonglong)piVar7 >> 4;
      piVar7 = piVar7 + 2;
      iVar3 = (int)uVar5;
      uVar8 = 0x9e3779b9U - iVar3 ^ iVar3 << 8;
      uVar2 = -(uVar8 + iVar3) ^ uVar8 >> 0xd;
      uVar4 = (iVar3 - uVar8) - uVar2 ^ uVar2 >> 0xc;
      uVar8 = (uVar8 - uVar4) - uVar2 ^ uVar4 << 0x10;
      uVar2 = (uVar2 - uVar8) - uVar4 ^ uVar8 >> 5;
      uVar4 = (uVar4 - uVar8) - uVar2 ^ uVar2 >> 3;
      uVar8 = (uVar8 - uVar4) - uVar2 ^ uVar4 << 10;
      uVar6 = uVar6 + ((uVar2 - uVar8) - uVar4 ^ uVar8 >> 0xf);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  else {
    local_b8 = 0;
    iStack_b4 = 0;
    local_c8 = 0;
    iStack_c4 = 0;
    do {
      iVar3 = uVar6 + 2;
      auVar12._4_4_ = uVar6 + 1;
      auVar12._0_4_ = uVar6;
      auVar12._8_4_ = uVar6;
      auVar12._12_4_ = uVar6;
      auVar12 = pmovsxdq(in_XMM2,auVar12);
      iVar11 = (int)((ulonglong)(piVar7 + auVar12._0_8_ * 2) >> 4);
      uVar4 = (uint)((ulonglong)(piVar7 + auVar12._0_8_ * 2) >> 0x24);
      iVar14 = (int)((ulonglong)(piVar7 + auVar12._8_8_ * 2) >> 4);
      uVar16 = (uint)((ulonglong)(piVar7 + auVar12._8_8_ * 2) >> 0x24);
      uVar18 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
      uVar21 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
      uVar22 = -uVar4 ^ uVar4 << 8;
      uVar23 = -uVar16 ^ uVar16 << 8;
      uVar2 = -iVar11 - uVar18 ^ uVar18 >> 0xd;
      uVar8 = -iVar14 - uVar21 ^ uVar21 >> 0xd;
      uVar15 = -uVar4 - uVar22 ^ uVar22 >> 0xd;
      uVar17 = -uVar16 - uVar23 ^ uVar23 >> 0xd;
      uVar24 = (iVar11 - uVar18) - uVar2 ^ uVar2 >> 0xc;
      uVar25 = (iVar14 - uVar21) - uVar8 ^ uVar8 >> 0xc;
      uVar26 = (uVar4 - uVar22) - uVar15 ^ uVar15 >> 0xc;
      uVar27 = (uVar16 - uVar23) - uVar17 ^ uVar17 >> 0xc;
      uVar16 = (uVar18 - uVar24) - uVar2 ^ uVar24 << 0x10;
      uVar18 = (uVar21 - uVar25) - uVar8 ^ uVar25 << 0x10;
      uVar21 = (uVar22 - uVar26) - uVar15 ^ uVar26 << 0x10;
      uVar22 = (uVar23 - uVar27) - uVar17 ^ uVar27 << 0x10;
      uVar2 = (uVar2 - uVar16) - uVar24 ^ uVar16 >> 5;
      uVar4 = (uVar8 - uVar18) - uVar25 ^ uVar18 >> 5;
      uVar8 = (uVar15 - uVar21) - uVar26 ^ uVar21 >> 5;
      uVar15 = (uVar17 - uVar22) - uVar27 ^ uVar22 >> 5;
      uVar23 = (uVar24 - uVar16) - uVar2 ^ uVar2 >> 3;
      uVar24 = (uVar25 - uVar18) - uVar4 ^ uVar4 >> 3;
      uVar25 = (uVar26 - uVar21) - uVar8 ^ uVar8 >> 3;
      uVar26 = (uVar27 - uVar22) - uVar15 ^ uVar15 >> 3;
      uVar16 = (uVar16 - uVar23) - uVar2 ^ uVar23 << 10;
      uVar17 = (uVar18 - uVar24) - uVar4 ^ uVar24 << 10;
      uVar18 = (uVar21 - uVar25) - uVar8 ^ uVar25 << 10;
      uVar21 = (uVar22 - uVar26) - uVar15 ^ uVar26 << 10;
      auVar13._0_4_ = (uVar2 - uVar16) - uVar23;
      auVar13._4_4_ = (uVar4 - uVar17) - uVar24;
      auVar13._8_4_ = (uVar8 - uVar18) - uVar25;
      auVar13._12_4_ = (uVar15 - uVar21) - uVar26;
      auVar19._0_4_ = uVar16 >> 0xf;
      auVar19._4_4_ = uVar17 >> 0xf;
      auVar19._8_4_ = uVar18 >> 0xf;
      auVar19._12_4_ = uVar21 >> 0xf;
      auVar13 = auVar13 ^ auVar19;
      auVar10._4_4_ = uVar6 + 3;
      auVar10._0_4_ = iVar3;
      auVar10._8_4_ = iVar3;
      auVar10._12_4_ = iVar3;
      local_b8 = local_b8 + auVar13._0_4_;
      iStack_b4 = iStack_b4 + auVar13._4_4_;
      auVar12 = pmovsxdq(auVar13,auVar10);
      iVar3 = (int)((ulonglong)(piVar7 + auVar12._0_8_ * 2) >> 4);
      uVar4 = (uint)((ulonglong)(piVar7 + auVar12._0_8_ * 2) >> 0x24);
      iVar11 = (int)((ulonglong)(piVar7 + auVar12._8_8_ * 2) >> 4);
      uVar16 = (uint)((ulonglong)(piVar7 + auVar12._8_8_ * 2) >> 0x24);
      uVar6 = uVar6 + 4;
      uVar18 = 0x9e3779b9U - iVar3 ^ iVar3 << 8;
      uVar21 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
      uVar22 = -uVar4 ^ uVar4 << 8;
      uVar23 = -uVar16 ^ uVar16 << 8;
      uVar2 = -iVar3 - uVar18 ^ uVar18 >> 0xd;
      uVar8 = -iVar11 - uVar21 ^ uVar21 >> 0xd;
      uVar15 = -uVar4 - uVar22 ^ uVar22 >> 0xd;
      uVar17 = -uVar16 - uVar23 ^ uVar23 >> 0xd;
      uVar24 = (iVar3 - uVar18) - uVar2 ^ uVar2 >> 0xc;
      uVar25 = (iVar11 - uVar21) - uVar8 ^ uVar8 >> 0xc;
      uVar26 = (uVar4 - uVar22) - uVar15 ^ uVar15 >> 0xc;
      uVar27 = (uVar16 - uVar23) - uVar17 ^ uVar17 >> 0xc;
      uVar16 = (uVar18 - uVar24) - uVar2 ^ uVar24 << 0x10;
      uVar18 = (uVar21 - uVar25) - uVar8 ^ uVar25 << 0x10;
      uVar21 = (uVar22 - uVar26) - uVar15 ^ uVar26 << 0x10;
      uVar22 = (uVar23 - uVar27) - uVar17 ^ uVar27 << 0x10;
      uVar2 = (uVar2 - uVar16) - uVar24 ^ uVar16 >> 5;
      uVar4 = (uVar8 - uVar18) - uVar25 ^ uVar18 >> 5;
      uVar8 = (uVar15 - uVar21) - uVar26 ^ uVar21 >> 5;
      uVar15 = (uVar17 - uVar22) - uVar27 ^ uVar22 >> 5;
      uVar23 = (uVar24 - uVar16) - uVar2 ^ uVar2 >> 3;
      uVar24 = (uVar25 - uVar18) - uVar4 ^ uVar4 >> 3;
      uVar25 = (uVar26 - uVar21) - uVar8 ^ uVar8 >> 3;
      uVar26 = (uVar27 - uVar22) - uVar15 ^ uVar15 >> 3;
      uVar16 = (uVar16 - uVar23) - uVar2 ^ uVar23 << 10;
      uVar17 = (uVar18 - uVar24) - uVar4 ^ uVar24 << 10;
      uVar18 = (uVar21 - uVar25) - uVar8 ^ uVar25 << 10;
      uVar21 = (uVar22 - uVar26) - uVar15 ^ uVar26 << 10;
      in_XMM2._0_4_ = (uVar2 - uVar16) - uVar23;
      in_XMM2._4_4_ = (uVar4 - uVar17) - uVar24;
      in_XMM2._8_4_ = (uVar8 - uVar18) - uVar25;
      in_XMM2._12_4_ = (uVar15 - uVar21) - uVar26;
      auVar20._0_4_ = uVar16 >> 0xf;
      auVar20._4_4_ = uVar17 >> 0xf;
      auVar20._8_4_ = uVar18 >> 0xf;
      auVar20._12_4_ = uVar21 >> 0xf;
      in_XMM2 = in_XMM2 ^ auVar20;
      local_c8 = local_c8 + in_XMM2._0_4_;
      iStack_c4 = iStack_c4 + in_XMM2._4_4_;
    } while ((int)uVar6 < 1000);
    uVar6 = local_c8 + local_b8 + iStack_c4 + iStack_b4;
  }
  QueryPerformanceCounter(&local_res18);
  LOCK();
  *piVar1 = *piVar1 + ((uVar6 & 1) - local_res8._0_4_) + local_res18.s.LowPart;
  UNLOCK();
  return;
}



// FUNCTION 14158df30 FUN_14158df30 body=2761 status=ok
// SIG undefined FUN_14158df30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14158df30(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  float fVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  bool bVar19;
  int local_res10;
  ulonglong local_c0;
  undefined8 *local_b0;
  undefined8 local_a8;
  
  uVar17 = param_2 * 7 + 0xd;
  local_res10 = 0;
  do {
    lVar6 = *param_1;
    fVar3 = (float)(uVar17 * 0xbb38435 + 0x19636b & 0x7fffff | 0x3f800000);
    uVar17 = uVar17 * -0x4b9b4d07 + 0x9d6f2492;
    fVar10 = (float)(uVar17 & 0x7fffff | 0x3f800000);
    fVar10 = fVar10 - (float)(int)fVar10;
    if (fVar3 - (float)(int)fVar3 < 0.03) {
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      if (fVar10 < 0.33) {
        while( true ) {
          while( true ) {
            do {
              LOCK();
              uVar14 = *(ulonglong *)(lVar6 + 0x80);
              if (uVar14 == 0) {
                *(ulonglong *)(lVar6 + 0x80) = 0;
                uVar14 = 0;
              }
              UNLOCK();
              puVar8 = (ulonglong *)0x0;
              LOCK();
              uVar7 = *(ulonglong *)(lVar6 + 0x108);
              if (uVar7 == 0) {
                *(ulonglong *)(lVar6 + 0x108) = 0;
                uVar7 = 0;
              }
              UNLOCK();
              uVar5 = (uint)uVar14 & 0x3ffffff;
              puVar9 = puVar8;
              if ((uVar14 & 0x3ffffff) != 0) {
                puVar9 = (ulonglong *)
                         ((&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)((uint)uVar14 & 0x3fff) * 0x18
                         );
              }
              LOCK();
              uVar16 = *puVar9;
              if (uVar16 == 0) {
                *puVar9 = 0;
                uVar16 = 0;
              }
              UNLOCK();
              LOCK();
              uVar13 = *(ulonglong *)(lVar6 + 0x80);
              if (uVar13 == 0) {
                *(ulonglong *)(lVar6 + 0x80) = 0;
                uVar13 = 0;
              }
              UNLOCK();
            } while (uVar14 != uVar13);
            uVar11 = (uint)uVar16;
            if (uVar5 == ((uint)uVar7 & 0x3ffffff)) break;
            if ((uVar16 & 0x3ffffff) != 0) {
              puVar8 = (ulonglong *)
                       ((&DAT_1468a81f8)[(uVar11 & 0x3ffffff) >> 0xe] +
                       (ulonglong)(uVar11 & 0x3fff) * 0x18);
            }
            uVar7 = puVar8[1];
            uVar16 = (uVar14 & 0xfffffffffc000000) + 0x4000000;
            if (uVar16 < (uVar14 & 0xfffffffffc000000)) {
              FUN_1416b1760();
            }
            LOCK();
            bVar19 = uVar14 == *(ulonglong *)(lVar6 + 0x80);
            if (bVar19) {
              *(ulonglong *)(lVar6 + 0x80) = uVar11 & 0x3ffffff | uVar16;
            }
            UNLOCK();
            if (bVar19) {
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar5);
              if (uVar7 == 0) goto LAB_14158e230;
              lVar12 = (longlong)(int)local_a8;
              iVar4 = (int)local_a8 + 1;
              local_a8 = CONCAT44(local_a8._4_4_,iVar4);
              if (local_a8._4_4_ < iVar4) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b0);
              }
              local_b0[lVar12] = uVar7;
            }
          }
          if ((uVar16 & 0x3ffffff) == 0) break;
          uVar14 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar14 < (uVar7 & 0xfffffffffc000000)) {
            FUN_1416b1760();
          }
          LOCK();
          if (uVar7 == *(ulonglong *)(lVar6 + 0x108)) {
            *(ulonglong *)(lVar6 + 0x108) = uVar11 & 0x3ffffff | uVar14;
          }
          UNLOCK();
        }
      }
      else if (0.66 <= fVar10) {
        FLockFreePointerFIFOBase<FTestStruct,1,16>::PopAll(lVar6 + 0x1b8,&local_b0);
      }
      else {
        FLockFreePointerFIFOBase<FTestStruct,1,1>::PopAll(lVar6 + 400);
      }
LAB_14158e230:
      local_c0 = 0;
      uVar14 = (ulonglong)((longlong)(local_b0 + (int)local_a8) + (7 - (longlong)local_b0)) >> 3;
      if (local_b0 + (int)local_a8 < local_b0) {
        uVar14 = 0;
      }
      puVar18 = local_b0;
      if (uVar14 != 0) {
        do {
          lVar6 = 0;
          uVar2 = *puVar18;
          lVar12 = *param_1;
          uVar17 = uVar17 * 0xbb38435 + 0x3619636b;
          fVar3 = (float)(uVar17 & 0x7fffff | 0x3f800000);
          fVar3 = fVar3 - (float)(int)fVar3;
          uVar5 = FUN_141595030(&DAT_1468a7fd8);
          uVar7 = (ulonglong)uVar5;
          if (fVar3 < 0.33) {
            if (uVar5 != 0) {
              *(undefined8 *)
               ((&DAT_1468a81f8)[uVar5 >> 0xe] + 8 + (ulonglong)(uVar5 & 0x3fff) * 0x18) = uVar2;
              uVar2 = _DAT_00000008;
            }
            do {
              while( true ) {
                do {
                  _DAT_00000008 = uVar2;
                  puVar8 = (ulonglong *)0x0;
                  LOCK();
                  uVar16 = *(ulonglong *)(lVar12 + 0x108);
                  if (uVar16 == 0) {
                    *(ulonglong *)(lVar12 + 0x108) = 0;
                    uVar16 = 0;
                  }
                  UNLOCK();
                  if ((uVar16 & 0x3ffffff) != 0) {
                    puVar8 = (ulonglong *)
                             ((&DAT_1468a81f8)[((uint)uVar16 & 0x3ffffff) >> 0xe] +
                             (ulonglong)((uint)uVar16 & 0x3fff) * 0x18);
                  }
                  LOCK();
                  uVar13 = *puVar8;
                  if (uVar13 == 0) {
                    *puVar8 = 0;
                    uVar13 = 0;
                  }
                  UNLOCK();
                  LOCK();
                  uVar15 = *(ulonglong *)(lVar12 + 0x108);
                  if (uVar15 == 0) {
                    *(ulonglong *)(lVar12 + 0x108) = 0;
                    uVar15 = 0;
                  }
                  UNLOCK();
                  uVar2 = _DAT_00000008;
                } while (uVar15 != uVar16);
                if ((uVar13 & 0x3ffffff) == 0) break;
                uVar15 = (uVar16 & 0xfffffffffc000000) + 0x4000000;
                if (uVar15 < (uVar16 & 0xfffffffffc000000)) {
                  FUN_1416b1760();
                }
                LOCK();
                if (uVar16 == *(ulonglong *)(lVar12 + 0x108)) {
                  *(ulonglong *)(lVar12 + 0x108) = (uint)uVar13 & 0x3ffffff | uVar15;
                }
                UNLOCK();
                uVar2 = _DAT_00000008;
              }
              uVar15 = (uVar13 & 0xfffffffffc000000) + 0x4000000;
              if (uVar15 < (uVar13 & 0xfffffffffc000000)) {
                FUN_1416b1760();
              }
              LOCK();
              uVar1 = *puVar8;
              if (uVar13 == uVar1) {
                *puVar8 = uVar7 | uVar15;
              }
              UNLOCK();
              uVar2 = _DAT_00000008;
            } while (uVar13 != uVar1);
            uVar13 = (uVar16 & 0xfffffffffc000000) + 0x4000000;
            if (uVar13 < (uVar16 & 0xfffffffffc000000)) {
              FUN_1416b1760();
            }
            LOCK();
            if (uVar16 == *(ulonglong *)(lVar12 + 0x108)) {
              *(ulonglong *)(lVar12 + 0x108) = uVar7 | uVar13;
            }
            UNLOCK();
          }
          else if (fVar3 < 0.66) {
            if (uVar5 != 0) {
              *(undefined8 *)
               ((&DAT_1468a81f8)[uVar5 >> 0xe] + 8 + (ulonglong)(uVar5 & 0x3fff) * 0x18) = uVar2;
              uVar2 = _DAT_00000008;
            }
            do {
              while( true ) {
                do {
                  _DAT_00000008 = uVar2;
                  puVar8 = (ulonglong *)0x0;
                  LOCK();
                  uVar16 = *(ulonglong *)(lVar12 + 0x1a8);
                  if (uVar16 == 0) {
                    *(ulonglong *)(lVar12 + 0x1a8) = 0;
                    uVar16 = 0;
                  }
                  UNLOCK();
                  if ((uVar16 & 0x3ffffff) != 0) {
                    puVar8 = (ulonglong *)
                             ((&DAT_1468a81f8)[((uint)uVar16 & 0x3ffffff) >> 0xe] +
                             (ulonglong)((uint)uVar16 & 0x3fff) * 0x18);
                  }
                  LOCK();
                  uVar13 = *puVar8;
                  if (uVar13 == 0) {
                    *puVar8 = 0;
                    uVar13 = 0;
                  }
                  UNLOCK();
                  LOCK();
                  uVar15 = *(ulonglong *)(lVar12 + 0x1a8);
                  if (uVar15 == 0) {
                    *(ulonglong *)(lVar12 + 0x1a8) = 0;
                    uVar15 = 0;
                  }
                  UNLOCK();
                  uVar2 = _DAT_00000008;
                } while (uVar15 != uVar16);
                if ((uVar13 & 0x3ffffff) == 0) break;
                uVar15 = (uVar16 & 0xfffffffffc000000) + 0x4000000;
                if (uVar15 < (uVar16 & 0xfffffffffc000000)) {
                  FUN_1416b1760();
                }
                LOCK();
                if (uVar16 == *(ulonglong *)(lVar12 + 0x1a8)) {
                  *(ulonglong *)(lVar12 + 0x1a8) = (uint)uVar13 & 0x3ffffff | uVar15;
                }
                UNLOCK();
                uVar2 = _DAT_00000008;
              }
              uVar15 = (uVar13 & 0xfffffffffc000000) + 0x4000000;
              if (uVar15 < (uVar13 & 0xfffffffffc000000)) {
                FUN_1416b1760();
              }
              LOCK();
              uVar1 = *puVar8;
              if (uVar13 == uVar1) {
                *puVar8 = uVar7 | uVar15;
              }
              UNLOCK();
              uVar2 = _DAT_00000008;
            } while (uVar13 != uVar1);
            uVar13 = (uVar16 & 0xfffffffffc000000) + 0x4000000;
            if (uVar13 < (uVar16 & 0xfffffffffc000000)) {
              FUN_1416b1760();
            }
            LOCK();
            if (uVar16 == *(ulonglong *)(lVar12 + 0x1a8)) {
              *(ulonglong *)(lVar12 + 0x1a8) = uVar7 | uVar13;
            }
            UNLOCK();
          }
          else {
            if (uVar5 != 0) {
              lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 *)(lVar6 + 8) = uVar2;
            do {
              while( true ) {
                do {
                  puVar8 = (ulonglong *)0x0;
                  LOCK();
                  uVar16 = *(ulonglong *)(lVar12 + 0x1d0);
                  if (uVar16 == 0) {
                    *(ulonglong *)(lVar12 + 0x1d0) = 0;
                    uVar16 = 0;
                  }
                  UNLOCK();
                  if ((uVar16 & 0x3ffffff) != 0) {
                    puVar8 = (ulonglong *)
                             ((&DAT_1468a81f8)[((uint)uVar16 & 0x3ffffff) >> 0xe] +
                             (ulonglong)((uint)uVar16 & 0x3fff) * 0x18);
                  }
                  LOCK();
                  uVar13 = *puVar8;
                  if (uVar13 == 0) {
                    *puVar8 = 0;
                    uVar13 = 0;
                  }
                  UNLOCK();
                  LOCK();
                  uVar15 = *(ulonglong *)(lVar12 + 0x1d0);
                  if (uVar15 == 0) {
                    *(ulonglong *)(lVar12 + 0x1d0) = 0;
                    uVar15 = 0;
                  }
                  UNLOCK();
                } while (uVar15 != uVar16);
                if ((uVar13 & 0x3ffffff) == 0) break;
                uVar15 = (uVar16 & 0xfffffffffc000000) + 0x40000000;
                if (uVar15 < (uVar16 & 0xfffffffffc000000)) {
                  FUN_1416b1760();
                }
                LOCK();
                if (uVar16 == *(ulonglong *)(lVar12 + 0x1d0)) {
                  *(ulonglong *)(lVar12 + 0x1d0) = (uint)uVar13 & 0x3ffffff | uVar15;
                }
                UNLOCK();
              }
              uVar15 = (uVar13 & 0xfffffffffc000000) + 0x40000000;
              if (uVar15 < (uVar13 & 0xfffffffffc000000)) {
                FUN_1416b1760();
              }
              LOCK();
              uVar1 = *puVar8;
              if (uVar13 == uVar1) {
                *puVar8 = uVar15 | uVar7;
              }
              UNLOCK();
            } while (uVar13 != uVar1);
            uVar13 = (uVar16 & 0xfffffffffc000000) + 0x40000000;
            if (uVar13 < (uVar16 & 0xfffffffffc000000)) {
              FUN_1416b1760();
            }
            LOCK();
            if (uVar16 == *(ulonglong *)(lVar12 + 0x1d0)) {
              *(ulonglong *)(lVar12 + 0x1d0) = uVar13 | uVar7;
            }
            UNLOCK();
          }
          puVar18 = puVar18 + 1;
          local_c0 = local_c0 + 1;
        } while (local_c0 != uVar14);
      }
      if (local_b0 != (undefined8 *)0x0) {
        FMemory::Free(local_b0);
      }
    }
    else {
      if (fVar10 < 0.33) {
        do {
          while( true ) {
            do {
              LOCK();
              uVar14 = *(ulonglong *)(lVar6 + 0x80);
              if (uVar14 == 0) {
                *(ulonglong *)(lVar6 + 0x80) = 0;
                uVar14 = 0;
              }
              UNLOCK();
              puVar8 = (ulonglong *)0x0;
              LOCK();
              uVar7 = *(ulonglong *)(lVar6 + 0x108);
              if (uVar7 == 0) {
                *(ulonglong *)(lVar6 + 0x108) = 0;
                uVar7 = 0;
              }
              UNLOCK();
              uVar5 = (uint)uVar14 & 0x3ffffff;
              puVar9 = puVar8;
              if ((uVar14 & 0x3ffffff) != 0) {
                puVar9 = (ulonglong *)
                         ((&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)((uint)uVar14 & 0x3fff) * 0x18
                         );
              }
              LOCK();
              uVar16 = *puVar9;
              if (uVar16 == 0) {
                *puVar9 = 0;
                uVar16 = 0;
              }
              UNLOCK();
              LOCK();
              uVar13 = *(ulonglong *)(lVar6 + 0x80);
              if (uVar13 == 0) {
                *(ulonglong *)(lVar6 + 0x80) = 0;
                uVar13 = 0;
              }
              UNLOCK();
            } while (uVar14 != uVar13);
            uVar11 = (uint)uVar16;
            if (uVar5 != ((uint)uVar7 & 0x3ffffff)) break;
            if ((uVar16 & 0x3ffffff) == 0) goto LAB_14158e789;
            uVar14 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
            if (uVar14 < (uVar7 & 0xfffffffffc000000)) {
              FUN_1416b1760();
            }
            LOCK();
            if (uVar7 == *(ulonglong *)(lVar6 + 0x108)) {
              *(ulonglong *)(lVar6 + 0x108) = uVar11 & 0x3ffffff | uVar14;
            }
            UNLOCK();
          }
          if ((uVar16 & 0x3ffffff) != 0) {
            puVar8 = (ulonglong *)
                     ((&DAT_1468a81f8)[(uVar11 & 0x3ffffff) >> 0xe] +
                     (ulonglong)(uVar11 & 0x3fff) * 0x18);
          }
          uVar7 = puVar8[1];
          uVar16 = (uVar14 & 0xfffffffffc000000) + 0x4000000;
          if (uVar16 < (uVar14 & 0xfffffffffc000000)) {
            FUN_1416b1760();
          }
          LOCK();
          bVar19 = uVar14 == *(ulonglong *)(lVar6 + 0x80);
          if (bVar19) {
            *(ulonglong *)(lVar6 + 0x80) = uVar11 & 0x3ffffff | uVar16;
          }
          UNLOCK();
        } while (!bVar19);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar5);
      }
      else if (0.66 <= fVar10) {
        uVar7 = FLockFreePointerFIFOBase<FTestStruct,1,16>::Pop(lVar6 + 0x1b8);
      }
      else {
        uVar7 = FLockFreePointerFIFOBase<FTestStruct,1,1>::Pop(lVar6 + 400);
      }
      if (uVar7 != 0) {
        uVar17 = uVar17 * 0xbb38435 + 0x3619636b;
        fVar3 = (float)(uVar17 & 0x7fffff | 0x3f800000);
        fVar3 = fVar3 - (float)(int)fVar3;
        if (0.33 <= fVar3) {
          if (0.66 <= fVar3) {
            FUN_141596730(*param_1 + 0x1b8,uVar7);
          }
          else {
            FUN_141596560(*param_1 + 400);
          }
        }
        else {
          FUN_141596900();
        }
      }
    }
LAB_14158e789:
    local_res10 = local_res10 + 1;
    if (999999 < local_res10) {
      return;
    }
  } while( true );
}



// FUNCTION 14158ea20 FUN_14158ea20 body=2099 status=ok
// SIG undefined FUN_14158ea20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14158ea20(longlong *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  uint local_res10;
  int local_res18;
  ulonglong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  
  local_res10 = param_2 * 7 + 0xd;
  local_res18 = 0;
  do {
    lVar7 = 0;
    lVar5 = *param_1;
    fVar1 = (float)(local_res10 * 0xbb38435 + 0x19636b & 0x7fffff | 0x3f800000);
    local_res10 = local_res10 * -0x4b9b4d07 + 0x9d6f2492;
    if (0.03 <= fVar1 - (float)(int)fVar1) {
      fVar1 = (float)(local_res10 & 0x7fffff | 0x3f800000);
      fVar1 = fVar1 - (float)(int)fVar1;
      if (0.33 <= fVar1) {
        if (0.66 <= fVar1) {
          LOCK();
          uVar10 = *(ulonglong *)(lVar5 + 0x128);
          if (uVar10 == 0) {
            *(ulonglong *)(lVar5 + 0x128) = 0;
            uVar10 = 0;
          }
          UNLOCK();
          uVar3 = (uint)uVar10;
          while (uVar4 = uVar3 & 0x3ffffff, (uVar10 & 0x3ffffff) != 0) {
            if ((uVar10 + 0x40000000 & 0xfffffffffc000000) < (uVar10 & 0xfffffffffc000000)) {
              FUN_1416b1760();
            }
            lVar6 = lVar7;
            if (uVar4 != 0) {
              lVar6 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
            }
            LOCK();
            bVar13 = uVar10 == *(ulonglong *)(lVar5 + 0x128);
            if (bVar13) {
              *(ulonglong *)(lVar5 + 0x128) =
                   (ulonglong)*(uint *)(lVar6 + 0x10) | uVar10 + 0x40000000 & 0xfffffffffc000000;
            }
            UNLOCK();
            if (bVar13) {
              *(undefined4 *)(lVar6 + 0x10) = 0;
              break;
            }
            LOCK();
            uVar10 = *(ulonglong *)(lVar5 + 0x128);
            if (uVar10 == 0) {
              *(ulonglong *)(lVar5 + 0x128) = 0;
              uVar10 = 0;
            }
            UNLOCK();
            uVar3 = (uint)uVar10;
          }
        }
        else {
          LOCK();
          uVar10 = *(ulonglong *)(lVar5 + 0x110);
          if (uVar10 == 0) {
            *(ulonglong *)(lVar5 + 0x110) = 0;
            uVar10 = 0;
          }
          UNLOCK();
          uVar3 = (uint)uVar10;
          while (uVar4 = uVar3 & 0x3ffffff, (uVar10 & 0x3ffffff) != 0) {
            uVar8 = (uVar10 & 0xfffffffffc000000) + 0x4000000;
            if (uVar8 < (uVar10 & 0xfffffffffc000000)) {
              FUN_1416b1760();
            }
            lVar6 = lVar7;
            if (uVar4 != 0) {
              lVar6 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
            }
            LOCK();
            bVar13 = uVar10 == *(ulonglong *)(lVar5 + 0x110);
            if (bVar13) {
              *(ulonglong *)(lVar5 + 0x110) = *(uint *)(lVar6 + 0x10) | uVar8;
            }
            UNLOCK();
            if (bVar13) {
              *(undefined4 *)(lVar6 + 0x10) = 0;
              break;
            }
            LOCK();
            uVar10 = *(ulonglong *)(lVar5 + 0x110);
            if (uVar10 == 0) {
              *(ulonglong *)(lVar5 + 0x110) = 0;
              uVar10 = 0;
            }
            UNLOCK();
            uVar3 = (uint)uVar10;
          }
        }
        lVar7 = 0;
        if (uVar4 != 0) {
          lVar7 = *(longlong *)
                   ((&DAT_1468a81f8)[uVar4 >> 0xe] + 8 + (ulonglong)(uVar4 & 0x3fff) * 0x18);
          goto LAB_14158f173;
        }
      }
      else {
        uVar4 = FUN_141594c40(lVar5);
        if (uVar4 != 0) {
          lVar7 = *(longlong *)
                   ((&DAT_1468a81f8)[uVar4 >> 0xe] + 8 + (ulonglong)(uVar4 & 0x3fff) * 0x18);
LAB_14158f173:
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
        }
      }
      if (lVar7 != 0) {
        lVar5 = *param_1;
        local_res10 = local_res10 * 0xbb38435 + 0x3619636b;
        fVar1 = (float)(local_res10 & 0x7fffff | 0x3f800000);
        fVar1 = fVar1 - (float)(int)fVar1;
        if (0.33 <= fVar1) {
          if (0.66 <= fVar1) {
            FUN_141596be0(lVar5 + 0x120,lVar7);
          }
          else {
            FUN_141596ad0(lVar5 + 0x108);
          }
        }
        else {
          uVar3 = FUN_141595030(&DAT_1468a7fd8);
          if (uVar3 == 0) {
            _DAT_00000008 = lVar7;
            FLockFreePointerListLIFORoot<128,1>::Push(lVar5,0);
          }
          else {
            *(longlong *)((&DAT_1468a81f8)[uVar3 >> 0xe] + 8 + (ulonglong)(uVar3 & 0x3fff) * 0x18) =
                 lVar7;
            FLockFreePointerListLIFORoot<128,1>::Push(lVar5,uVar3);
          }
        }
      }
    }
    else {
      local_a8 = (longlong *)0x0;
      fVar1 = (float)(local_res10 & 0x7fffff | 0x3f800000);
      local_a0 = 0;
      fVar1 = fVar1 - (float)(int)fVar1;
      if (0.33 <= fVar1) {
        if (0.66 <= fVar1) {
          FLockFreePointerListLIFOBase<FTestStruct,1,16>::PopAll(lVar5 + 0x120);
          plVar11 = local_a8;
        }
        else {
          FLockFreePointerListLIFOBase<FTestStruct,1,1>::PopAll(lVar5 + 0x108);
          plVar11 = local_a8;
        }
      }
      else {
        LOCK();
        uVar10 = *(ulonglong *)(lVar5 + 0x80);
        if (uVar10 == 0) {
          *(ulonglong *)(lVar5 + 0x80) = 0;
          uVar10 = 0;
        }
        UNLOCK();
        uVar3 = (uint)uVar10;
        while (uVar3 = uVar3 & 0x3ffffff, plVar11 = local_a8, (uVar10 & 0x3ffffff) != 0) {
          uVar8 = (uVar10 & 0xfffffffffc000000) + 0x4000000;
          if (uVar8 < (uVar10 & 0xfffffffffc000000)) {
            FUN_1416b1760();
          }
          LOCK();
          bVar13 = uVar10 == *(ulonglong *)(lVar5 + 0x80);
          if (bVar13) {
            *(ulonglong *)(lVar5 + 0x80) = uVar8;
          }
          UNLOCK();
          plVar11 = local_a8;
          if (bVar13) break;
          LOCK();
          uVar10 = *(ulonglong *)(lVar5 + 0x80);
          if (uVar10 == 0) {
            *(ulonglong *)(lVar5 + 0x80) = 0;
            uVar10 = 0;
          }
          UNLOCK();
          uVar3 = (uint)uVar10;
        }
        while (uVar3 != 0) {
          lVar6 = (longlong)(int)local_a0;
          lVar5 = (&DAT_1468a81f8)[uVar3 >> 0xe];
          lVar7 = *(longlong *)(lVar5 + 8 + (ulonglong)(uVar3 & 0x3fff) * 0x18);
          iVar2 = (int)local_a0 + 1;
          local_a0._4_4_ = (int)((ulonglong)local_a0 >> 0x20);
          local_a0 = CONCAT44(local_a0._4_4_,iVar2);
          if (local_a0._4_4_ < iVar2) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8);
            plVar11 = local_a8;
          }
          plVar11[lVar6] = lVar7;
          uVar4 = *(uint *)(lVar5 + (ulonglong)(uVar3 & 0x3fff) * 0x18 + 0x10);
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar3);
          uVar3 = uVar4;
        }
      }
      local_b0 = 0;
      uVar10 = (ulonglong)((longlong)(plVar11 + (int)local_a0) + (7 - (longlong)plVar11)) >> 3;
      if (plVar11 + (int)local_a0 < plVar11) {
        uVar10 = 0;
      }
      plVar12 = plVar11;
      if (uVar10 != 0) {
        do {
          lVar5 = *plVar11;
          lVar7 = *param_1;
          local_res10 = local_res10 * 0xbb38435 + 0x3619636b;
          fVar1 = (float)(local_res10 & 0x7fffff | 0x3f800000);
          fVar1 = fVar1 - (float)(int)fVar1;
          uVar3 = FUN_141595030(&DAT_1468a7fd8);
          if (0.33 <= fVar1) {
            if (0.66 <= fVar1) {
              if (uVar3 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
              }
              *(longlong *)(lVar6 + 8) = lVar5;
              do {
                LOCK();
                uVar8 = *(ulonglong *)(lVar7 + 0x128);
                if (uVar8 == 0) {
                  *(ulonglong *)(lVar7 + 0x128) = 0;
                  uVar8 = 0;
                }
                UNLOCK();
                uVar9 = (uVar8 & 0xfffffffffc000000) + 0x40000000;
                if (uVar9 < (uVar8 & 0xfffffffffc000000)) {
                  FUN_1416b1760();
                }
                lVar5 = 0;
                if (uVar3 != 0) {
                  lVar5 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
                }
                *(uint *)(lVar5 + 0x10) = (uint)uVar8 & 0x3ffffff;
                LOCK();
                bVar13 = uVar8 == *(ulonglong *)(lVar7 + 0x128);
                if (bVar13) {
                  *(ulonglong *)(lVar7 + 0x128) = uVar3 | uVar9;
                }
                UNLOCK();
              } while (!bVar13);
            }
            else {
              if (uVar3 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
              }
              *(longlong *)(lVar6 + 8) = lVar5;
              do {
                LOCK();
                uVar8 = *(ulonglong *)(lVar7 + 0x110);
                if (uVar8 == 0) {
                  *(ulonglong *)(lVar7 + 0x110) = 0;
                  uVar8 = 0;
                }
                UNLOCK();
                uVar9 = (uVar8 & 0xfffffffffc000000) + 0x4000000;
                if (uVar9 < (uVar8 & 0xfffffffffc000000)) {
                  FUN_1416b1760();
                }
                lVar5 = 0;
                if (uVar3 != 0) {
                  lVar5 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
                }
                *(uint *)(lVar5 + 0x10) = (uint)uVar8 & 0x3ffffff;
                LOCK();
                bVar13 = uVar8 == *(ulonglong *)(lVar7 + 0x110);
                if (bVar13) {
                  *(ulonglong *)(lVar7 + 0x110) = uVar9 | uVar3;
                }
                UNLOCK();
              } while (!bVar13);
            }
          }
          else if (uVar3 == 0) {
            _DAT_00000008 = lVar5;
            FLockFreePointerListLIFORoot<128,1>::Push(lVar7);
          }
          else {
            *(longlong *)((&DAT_1468a81f8)[uVar3 >> 0xe] + 8 + (ulonglong)(uVar3 & 0x3fff) * 0x18) =
                 lVar5;
            FLockFreePointerListLIFORoot<128,1>::Push(lVar7);
          }
          local_b0 = local_b0 + 1;
          plVar11 = plVar11 + 1;
          plVar12 = local_a8;
        } while (local_b0 != uVar10);
      }
      if (plVar12 != (longlong *)0x0) {
        FMemory::Free(plVar12);
      }
    }
    local_res18 = local_res18 + 1;
    if (999999 < local_res18) {
      return;
    }
  } while( true );
}



// FUNCTION 14158f260 operator() body=182 status=ok
// SIG undefined operator()(void)

void <lambda_5f3fd55176f0a7d7cc5c1f78873c86f5>::operator()(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res8;
  undefined1 local_28 [32];
  
  plVar4 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_28,0,0xff);
  *(undefined4 *)(*plVar4 + 0x10) = 0xff;
  lVar5 = *plVar4;
  lVar3 = plVar4[2];
  lVar1 = plVar4[1];
  lVar2 = *(longlong *)(lVar5 + 0x18);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
    UNLOCK();
  }
  local_res8 = lVar2;
  FUN_141599db0(lVar5,lVar1,(int)lVar3,1);
  lVar5 = *(longlong *)(*param_1 + 0x20);
  if (lVar5 == 0) {
    lVar5 = *param_1;
  }
  plVar4 = (longlong *)(lVar5 + (longlong)param_2 * 8);
  if (plVar4 != &local_res8) {
    lVar5 = *plVar4;
    *plVar4 = lVar2;
    lVar2 = lVar5;
  }
  if (lVar2 != 0) {
    FGraphEvent::Release(lVar2);
  }
  return;
}



// FUNCTION 14158f340 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<FAsyncGraphTask>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144c95568;
  if (param_1[0xf] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14158f3a0 FUN_14158f3a0 body=85 status=ok
// SIG undefined FUN_14158f3a0(void)

undefined8 * FUN_14158f3a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c95818;
  if (param_1[0x13] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14158f400 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<FTriggerEventGraphTask>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144c957f8;
  if (param_1[5] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14158f460 FUN_14158f460 body=82 status=ok
// SIG undefined FUN_14158f460(void)

undefined8 * FUN_14158f460(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c95808;
  if (param_1[3] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14158f4c0 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLBaseVertexBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144c957e8;
  if (param_1[4] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14158f520 `scalar_deleting_destructor' body=116 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FModularFeatures::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR_FUN_143f48658;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14158f5a0 `scalar_deleting_destructor' body=187 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FNamedTaskThread::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = 2;
  puVar2 = param_1 + 0xf5;
  do {
    FUN_1415b5910(puVar2[-1]);
    puVar2[-1] = 0;
    _vector_destructor_iterator_(puVar2 + -0x77,400,2,AK::MemoryMgr::StartProfileThreadUsage);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + -0x77;
  } while (lVar1 != 0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7a8);
  }
  return param_1;
}



// FUNCTION 14158f660 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 AORXSPlayerCharacter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14158cbc0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1790);
  }
  return param_1;
}



// FUNCTION 14158f6a0 FUN_14158f6a0 body=43 status=ok
// SIG undefined FUN_14158f6a0(void)

undefined8 * FUN_14158f6a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144c95500;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14158f6d0 `scalar_deleting_destructor' body=110 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTaskThreadAnyThread::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_1415b5910(param_1[7]);
  param_1[7] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14158f740 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FTaskThreadBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14158f7a0 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FTickerObjectBase::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144c95578;
  if (param_1[2] != 0) {
    FUN_141597530(param_1[1],param_1[2]);
    param_1[2] = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14158f800 AddShutdownCallback body=84 status=ok
// SIG undefined AddShutdownCallback(void)

void FTaskGraphImplementation::AddShutdownCallback(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x7e0);
  *(int *)(param_1 + 0x7e0) = iVar1 + 1;
  if (*(int *)(param_1 + 0x7e4) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x7d8),iVar1);
  }
  ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x7d8),param_2);
  return;
}



// FUNCTION 14158f860 FUN_14158f860 body=224 status=ok
// SIG undefined FUN_14158f860(void)

undefined8 *
FUN_14158f860(double *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,float param_5
             )

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  iVar3 = *(int *)(param_1 + 2);
  lVar6 = (longlong)iVar3;
  dVar2 = *param_1;
  *(int *)(param_1 + 2) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x14) < iVar3 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar3);
  }
  dVar4 = param_1[1];
  *(double *)((longlong)dVar4 + lVar6 * 0x28) = (double)param_5 + dVar2;
  plVar1 = (longlong *)((longlong)dVar4 + 0x10 + lVar6 * 0x28);
  *(float *)((longlong)dVar4 + 8 + lVar6 * 0x28) = param_5;
  *plVar1 = 0;
  *(undefined4 *)(plVar1 + 1) = 0;
  if (((param_3 != plVar1) && ((int)param_3[1] != 0)) && ((longlong *)*param_3 != (longlong *)0x0))
  {
    (**(code **)(*(longlong *)*param_3 + 0x30))();
  }
  *(undefined8 *)((longlong)dVar4 + 0x20 + lVar6 * 0x28) = param_4;
  lVar6 = param_3[1];
  *param_2 = 0;
  if (((int)lVar6 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar5 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar5;
  }
  return param_2;
}



// FUNCTION 14158f940 FUN_14158f940 body=402 status=ok
// SIG undefined FUN_14158f940(void)

undefined8 *
FUN_14158f940(double *param_1,undefined8 *param_2,undefined8 param_3,float param_4,longlong param_5)

{
  longlong **pplVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *local_68 [2];
  undefined1 local_58 [48];
  
  plVar6 = (longlong *)FMemory::Realloc(0,0x70);
  local_68[0] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_GetPoolName_144c95878;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(plVar6 + 2,param_5);
    LOCK();
    UNLOCK();
    lVar7 = DAT_1464a8218 + 1;
    lVar5 = DAT_1464a8218 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_1464a8218 + 2;
      lVar5 = DAT_1464a8218 + 2;
    }
    DAT_1464a8218 = lVar5;
    plVar6[0xd] = lVar7;
  }
  plVar6 = local_68[0];
  iVar3 = *(int *)(param_1 + 2);
  lVar7 = (longlong)iVar3;
  dVar2 = *param_1;
  *(int *)(param_1 + 2) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x14) < iVar3 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar3);
  }
  dVar4 = param_1[1];
  *(double *)((longlong)dVar4 + lVar7 * 0x28) = (double)param_4 + dVar2;
  pplVar1 = (longlong **)((longlong)dVar4 + 0x10 + lVar7 * 0x28);
  *(float *)((longlong)dVar4 + 8 + lVar7 * 0x28) = param_4;
  *pplVar1 = (longlong *)0x0;
  *(undefined4 *)(pplVar1 + 1) = 0;
  if ((local_68 != pplVar1) && (plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x30))(plVar6);
  }
  *(undefined8 *)((longlong)dVar4 + 0x20 + lVar7 * 0x28) = param_3;
  *param_2 = 0;
  if (plVar6 != (longlong *)0x0) {
    puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_58);
    *param_2 = *puVar8;
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar7 = FMemory::Realloc(plVar6,0,0);
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
  }
  if (*(int *)(param_5 + 0x40) != 0) {
    plVar6 = *(longlong **)(param_5 + 0x30);
    if (*(longlong **)(param_5 + 0x30) == (longlong *)0x0) {
      plVar6 = (longlong *)(param_5 + 0x10);
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (*(longlong *)(param_5 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14158fae0 AllocLockFreeLink body=12 status=ok
// SIG undefined AllocLockFreeLink(void)

void FLockFreeLinkPolicy::AllocLockFreeLink(void)

{
  FUN_141595030(&DAT_1468a7fd8);
  return;
}



// FUNCTION 14158faf0 AppendInt body=473 status=ok
// SIG undefined AppendInt(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FString::AppendInt(longlong *param_1,int param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [32];
  undefined *local_a8 [4];
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  short local_48 [14];
  undefined2 local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8[0] = &DAT_144c92144;
  puVar7 = local_2c + 1;
  local_2c[1] = 0;
  local_a8[1] = &DAT_144c92148;
  local_a8[2] = &DAT_144c9214c;
  local_a8[3] = &DAT_144c92150;
  local_88 = &DAT_144c92154;
  local_80 = &DAT_144c92158;
  local_78 = &DAT_144c9215c;
  local_70 = &DAT_144c92160;
  local_68 = &DAT_144c92164;
  local_60 = &DAT_144c92168;
  local_58 = &DAT_144c9216c;
  lVar5 = -(longlong)param_2;
  iVar6 = 0xf;
  if (-1 < param_2) {
    lVar5 = (longlong)param_2;
  }
  do {
    iVar4 = iVar6;
    puVar7 = puVar7 + -1;
    iVar6 = iVar4 + -1;
    lVar2 = lVar5 / 10;
    *puVar7 = *(undefined2 *)local_a8[lVar5 % 10];
    lVar5 = lVar2;
  } while (lVar2 != 0);
  if (param_2 < 0) {
    iVar6 = iVar4 + -2;
    local_48[iVar6] = 0x2d;
  }
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while ((local_48 + iVar6)[lVar5] != 0);
  iVar4 = (int)lVar5;
  if (iVar4 != 0) {
    iVar1 = (int)param_1[1];
    iVar3 = (uint)(iVar1 == 0) + iVar1 + iVar4;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    _Dst = (void *)(*param_1 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(_Dst,local_48 + iVar6,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
  }
  return;
}



// FUNCTION 14158fcd0 FUN_14158fcd0 body=539 status=ok
// SIG undefined FUN_14158fcd0(void)

void FUN_14158fcd0(undefined4 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  plVar2 = TlsGetValue(DAT_1468a7c78);
  plVar7 = (longlong *)0x0;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)operator_new(0x18);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      plVar7 = plVar2;
    }
    TlsSetValue(DAT_1468a7c78,plVar7);
    plVar2 = plVar7;
  }
  plVar7 = (longlong *)plVar2[1];
  if (plVar7 == (longlong *)0x0) {
    if (*plVar2 == 0) {
      lVar3 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7c80);
      plVar2[1] = lVar3;
      if (lVar3 == 0) {
        puVar4 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar2[1] = (longlong)puVar4;
        lVar3 = 0x1f;
        do {
          puVar1 = puVar4 + 0x20;
          *puVar4 = puVar1;
          lVar3 = lVar3 + -1;
          puVar4 = puVar1;
        } while (lVar3 != 0);
        *puVar1 = 0;
      }
    }
    else {
      plVar2[1] = *plVar2;
      *plVar2 = 0;
    }
    plVar7 = (longlong *)plVar2[1];
    iVar6 = 0x20;
    *(undefined4 *)(plVar2 + 2) = 0x20;
  }
  else {
    iVar6 = (int)plVar2[2];
  }
  plVar2[1] = *plVar7;
  *(int *)(plVar2 + 2) = iVar6 + -1;
  *plVar7 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar7 + 1) = 0xff;
  uVar8 = 0;
  uVar9 = 0;
  *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
  *plVar7 = (longlong)&PTR__scalar_deleting_destructor__144c95568;
  *(undefined1 *)(plVar7 + 0xe) = 0;
  plVar7[0xf] = 0;
  *(undefined4 *)(plVar7 + 2) = param_1;
  plVar7[10] = 0;
  *(undefined4 *)(plVar7 + 0xc) = 0;
  if (param_2[6] == 0) {
    _guard_xfg_dispatch_icall_nop(plVar7 + 6,param_2 + 2,0x20);
  }
  if (plVar7[10] != 0) {
    FMemory::Free();
  }
  plVar7[10] = param_2[6];
  param_2[6] = 0;
  *(int *)(plVar7 + 0xc) = (int)param_2[8];
  *(undefined4 *)(param_2 + 8) = 0;
  if ((int)plVar7[0xc] != 0) {
    plVar2 = (longlong *)plVar7[10];
    if ((longlong *)plVar7[10] == (longlong *)0x0) {
      plVar2 = plVar7 + 6;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
      pcVar5 = (code *)*param_2;
      goto LAB_14158fe65;
    }
  }
  pcVar5 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_14158fe65:
  plVar7[4] = (longlong)pcVar5;
  *param_2 = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
  lVar3 = plVar7[0xf];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
  }
  FUN_141598920(plVar7,0,0xff,1,lVar3,uVar8,uVar9);
  if (lVar3 != 0) {
    FGraphEvent::Release(lVar3);
  }
  if ((int)param_2[8] != 0) {
    plVar7 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar7 = param_2 + 2;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14158ff20 Broadcast body=269 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,FName_const_&,IModularFeature_*>::Broadcast
               (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar6 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar9 = lVar7 << 4;
    bVar2 = false;
    do {
      if (((*(int *)(lVar9 + 8 + *param_1) == 0) ||
          (plVar1 = *(longlong **)(lVar9 + *param_1), plVar1 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3), cVar3 == '\0')) {
        bVar2 = true;
      }
      lVar9 = lVar9 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar6 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar6 + -1;
  if ((bVar2) && (iVar6 + -1 < 1)) {
    iVar6 = (int)param_1[1];
    uVar8 = 0;
    uVar10 = uVar8;
    iVar4 = iVar6;
    if (0 < iVar6) {
      do {
        if (((*(int *)(uVar8 + 8 + *param_1) == 0) ||
            (plVar1 = *(longlong **)(uVar8 + *param_1), plVar1 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar1 + 0x10))(), cVar3 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(param_1,uVar10,1,1);
        }
        else {
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar8 = uVar8 + 0x10;
        }
        iVar4 = (int)param_1[1];
      } while ((int)uVar10 < iVar4);
    }
    iVar5 = iVar4 * 2;
    if (iVar5 < 3) {
      iVar5 = 2;
    }
    *(int *)(param_1 + 2) = iVar5;
    if ((iVar5 < iVar6) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1);
    }
  }
  return;
}



// FUNCTION 141590030 FUN_141590030 body=3363 status=ok
// SIG undefined FUN_141590030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141590566) */
/* WARNING: Removing unreachable block (ram,0x000141590573) */
/* WARNING: Removing unreachable block (ram,0x0001415902dc) */
/* WARNING: Removing unreachable block (ram,0x0001415902e9) */
/* WARNING: Removing unreachable block (ram,0x0001415907e5) */
/* WARNING: Removing unreachable block (ram,0x0001415907f3) */

void FUN_141590030(char param_1,char param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_218 [32];
  int *local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined1 local_1d8;
  char local_1d7;
  char local_1d6;
  int local_1d4;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  longlong *local_1b8;
  uint local_1b0;
  undefined4 local_1a8 [2];
  longlong local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_138;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  longlong local_90 [4];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60 [4];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  plVar8 = (longlong *)0x0;
  local_1a8[0] = 0;
  local_1d8 = param_3;
  local_1d7 = param_2;
  local_1d6 = param_1;
  local_1c0 = param_4;
  if (DAT_1468a80e8 == (longlong *)0x0) {
    local_1a8[0] = 2;
    if (*(int *)(param_4 + 8) != 0) {
      plVar10 = (longlong *)param_4[6];
      if ((longlong *)param_4[6] == (longlong *)0x0) {
        plVar10 = param_4 + 2;
      }
      if (plVar10 != (longlong *)0x0) {
        plVar8 = (longlong *)(**(code **)(*plVar10 + 8))();
      }
    }
    (*(code *)*param_4)(plVar8,local_1a8);
  }
  else {
    local_1d0 = (undefined8 *)0x0;
    local_1c8 = 0;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    local_1d4 = 0;
    plVar10 = plVar8;
    if (param_1 != '\0') {
      local_1b8 = (longlong *)FUN_1415ab270(0);
      uVar7 = (**(code **)(*DAT_1468a80e8 + 0x18))();
      uVar18 = (ulonglong)uVar7;
      if ((param_2 == '\0') || (iVar15 = 2, DAT_1464a8208 == 0)) {
        iVar15 = 1;
      }
      LOCK();
      local_1d4 = local_1d4 + ((uint)(DAT_1464a820c != 0) + iVar15) * uVar7;
      UNLOCK();
      LOCK();
      if (local_1d4 == 0) {
        local_1d4 = 0;
      }
      UNLOCK();
      local_1b0 = uVar7;
      if (0 < local_1d4) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_1d0,local_1d4);
      }
      if (0 < (int)uVar7) {
        do {
          uVar9 = FUN_1415ab270(0);
          uVar5 = local_1c8;
          lVar16 = (longlong)(int)local_1c8;
          iVar15 = (int)local_1c8 + 1;
          local_1c8 = CONCAT44(local_1c8._4_4_,iVar15);
          if (local_1c8._4_4_ < iVar15) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_1d0,uVar5 & 0xffffffff);
          }
          local_1d0[lVar16] = uVar9;
          plVar10 = TlsGetValue(DAT_1468a7c78);
          if (plVar10 == (longlong *)0x0) {
            plVar11 = (longlong *)operator_new(0x18);
            plVar10 = plVar8;
            if (plVar11 != (longlong *)0x0) {
              *plVar11 = 0;
              plVar11[1] = 0;
              *(undefined4 *)(plVar11 + 2) = 0;
              plVar10 = plVar11;
            }
            TlsSetValue(DAT_1468a7c78,plVar10);
          }
          plVar11 = (longlong *)plVar10[1];
          if (plVar11 == (longlong *)0x0) {
            if (*plVar10 == 0) {
              lVar16 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7c80);
              plVar10[1] = lVar16;
              if (lVar16 == 0) {
                puVar14 = (undefined8 *)FMemory::Malloc(0x2000,0);
                plVar10[1] = (longlong)puVar14;
                lVar16 = 0x1f;
                do {
                  puVar12 = puVar14 + 0x20;
                  *puVar14 = puVar12;
                  lVar16 = lVar16 + -1;
                  puVar14 = puVar12;
                } while (lVar16 != 0);
                *puVar12 = 0;
              }
            }
            else {
              plVar10[1] = *plVar10;
              *plVar10 = 0;
            }
            plVar11 = (longlong *)plVar10[1];
            iVar15 = 0x20;
            *(undefined4 *)(plVar10 + 2) = 0x20;
          }
          else {
            iVar15 = (int)plVar10[2];
          }
          plVar10[1] = *plVar11;
          *(int *)(plVar10 + 2) = iVar15 + -1;
          plVar10 = (longlong *)FUN_1415914c0(&local_1a0);
          local_118 = 0;
          local_110 = 0xff;
          lVar16 = *plVar10;
          *plVar10 = 0;
          *plVar11 = (longlong)&PTR_FUN_143f3edd8;
          *(undefined4 *)(plVar11 + 1) = 0xff;
          *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
          *plVar11 = (longlong)&PTR_FUN_144c95818;
          *(undefined1 *)(plVar11 + 0x12) = 0;
          plVar11[0x13] = lVar16;
          local_148 = 0;
          local_120 = plVar11;
          if (local_1a0 != 0) {
            FGraphEvent::Release();
          }
          local_1e8 = local_1b8;
          local_1f8 = &local_1d4;
          local_1f0 = uVar9;
          FUN_14158bcb0(plVar11 + 2,param_4,0x2ff,local_1d8);
          lVar16 = plVar11[0x13];
          if (lVar16 != 0) {
            LOCK();
            *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
            UNLOCK();
          }
          local_198 = lVar16;
          FUN_1415990e0(plVar11,0,0xff,1);
          lVar17 = (longlong)(int)local_38;
          iVar15 = (int)local_38 + 1;
          local_38 = CONCAT44(local_38._4_4_,iVar15);
          if (local_38._4_4_ < iVar15) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_60);
          }
          plVar10 = local_60;
          if (local_40 != (longlong *)0x0) {
            plVar10 = local_40;
          }
          plVar10[lVar17] = lVar16;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        uVar18 = (ulonglong)local_1b0;
      }
      puVar14 = local_1c0;
      uVar7 = (uint)uVar18;
      if ((DAT_1464a820c != 0) && (0 < (int)uVar7)) {
        do {
          uVar9 = FUN_1415ab270(0);
          uVar5 = local_1c8;
          lVar16 = (longlong)(int)local_1c8;
          iVar15 = (int)local_1c8 + 1;
          local_1c8 = CONCAT44(local_1c8._4_4_,iVar15);
          if (local_1c8._4_4_ < iVar15) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_1d0,uVar5 & 0xffffffff);
          }
          local_1d0[lVar16] = uVar9;
          plVar10 = TlsGetValue(DAT_1468a7c78);
          if (plVar10 == (longlong *)0x0) {
            plVar11 = (longlong *)operator_new(0x18);
            plVar10 = plVar8;
            if (plVar11 != (longlong *)0x0) {
              *plVar11 = 0;
              plVar11[1] = 0;
              *(undefined4 *)(plVar11 + 2) = 0;
              plVar10 = plVar11;
            }
            TlsSetValue(DAT_1468a7c78,plVar10);
          }
          plVar11 = (longlong *)plVar10[1];
          if (plVar11 == (longlong *)0x0) {
            plVar11 = (longlong *)*plVar10;
            if (plVar11 == (longlong *)0x0) {
              uVar7 = FUN_141594c40(&DAT_1468a7c80);
              plVar11 = plVar8;
              if (uVar7 != 0) {
                plVar11 = *(longlong **)
                           ((&DAT_1468a81f8)[uVar7 >> 0xe] + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18)
                ;
                FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
              }
              plVar10[1] = (longlong)plVar11;
              if (plVar11 == (longlong *)0x0) {
                puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
                plVar10[1] = (longlong)puVar12;
                lVar16 = 0x1f;
                do {
                  puVar1 = puVar12 + 0x20;
                  *puVar12 = puVar1;
                  lVar16 = lVar16 + -1;
                  puVar12 = puVar1;
                } while (lVar16 != 0);
                *puVar1 = 0;
                plVar11 = (longlong *)plVar10[1];
              }
              *(undefined4 *)(plVar10 + 2) = 0x20;
              iVar15 = 0x20;
            }
            else {
              plVar10[1] = (longlong)plVar11;
              iVar15 = 0x20;
              *plVar10 = 0;
              *(undefined4 *)(plVar10 + 2) = 0x20;
            }
          }
          else {
            iVar15 = (int)plVar10[2];
          }
          plVar10[1] = *plVar11;
          *(int *)(plVar10 + 2) = iVar15 + -1;
          plVar10 = (longlong *)FUN_1415914c0(&local_188);
          local_100 = 0;
          local_f8 = 0xff;
          lVar16 = *plVar10;
          *plVar10 = 0;
          *plVar11 = (longlong)&PTR_FUN_143f3edd8;
          *(undefined4 *)(plVar11 + 1) = 0xff;
          *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
          *plVar11 = (longlong)&PTR_FUN_144c95818;
          *(undefined1 *)(plVar11 + 0x12) = 0;
          plVar11[0x13] = lVar16;
          local_190 = 0;
          local_108 = plVar11;
          if (local_188 != 0) {
            FGraphEvent::Release();
          }
          local_1e8 = local_1b8;
          local_1f8 = &local_1d4;
          local_1f0 = uVar9;
          FUN_14158bcb0(plVar11 + 2,puVar14,0xaff,local_1d8);
          lVar16 = plVar11[0x13];
          if (lVar16 != 0) {
            LOCK();
            *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
            UNLOCK();
          }
          local_180 = lVar16;
          FUN_1415990e0(plVar11,0,0xff,1);
          lVar17 = (longlong)(int)local_38;
          iVar15 = (int)local_38 + 1;
          local_38 = CONCAT44(local_38._4_4_,iVar15);
          if (local_38._4_4_ < iVar15) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_60);
          }
          plVar10 = local_60;
          if (local_40 != (longlong *)0x0) {
            plVar10 = local_40;
          }
          plVar10[lVar17] = lVar16;
          uVar18 = uVar18 - 1;
          uVar7 = local_1b0;
        } while (uVar18 != 0);
      }
      plVar10 = local_1b8;
      param_4 = local_1c0;
      if (((local_1d7 != '\0') && (DAT_1464a8208 != 0)) && (0 < (int)uVar7)) {
        uVar18 = (ulonglong)uVar7;
        do {
          uVar9 = FUN_1415ab270(0);
          uVar5 = local_1c8;
          lVar16 = (longlong)(int)local_1c8;
          iVar15 = (int)local_1c8 + 1;
          local_1c8 = CONCAT44(local_1c8._4_4_,iVar15);
          if (local_1c8._4_4_ < iVar15) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_1d0,uVar5 & 0xffffffff);
          }
          local_1d0[lVar16] = uVar9;
          plVar11 = TlsGetValue(DAT_1468a7c78);
          if (plVar11 == (longlong *)0x0) {
            plVar13 = (longlong *)operator_new(0x18);
            plVar11 = plVar8;
            if (plVar13 != (longlong *)0x0) {
              *plVar13 = 0;
              plVar13[1] = 0;
              *(undefined4 *)(plVar13 + 2) = 0;
              plVar11 = plVar13;
            }
            TlsSetValue(DAT_1468a7c78,plVar11);
          }
          plVar13 = (longlong *)plVar11[1];
          if (plVar13 == (longlong *)0x0) {
            plVar13 = (longlong *)*plVar11;
            if (plVar13 == (longlong *)0x0) {
              uVar7 = FUN_141594c40(&DAT_1468a7c80);
              plVar13 = plVar8;
              if (uVar7 != 0) {
                plVar13 = *(longlong **)
                           ((&DAT_1468a81f8)[uVar7 >> 0xe] + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18)
                ;
                FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
              }
              plVar11[1] = (longlong)plVar13;
              if (plVar13 == (longlong *)0x0) {
                puVar14 = (undefined8 *)FMemory::Malloc(0x2000,0);
                plVar11[1] = (longlong)puVar14;
                lVar16 = 0x1f;
                do {
                  puVar12 = puVar14 + 0x20;
                  *puVar14 = puVar12;
                  lVar16 = lVar16 + -1;
                  puVar14 = puVar12;
                } while (lVar16 != 0);
                *puVar12 = 0;
                plVar13 = (longlong *)plVar11[1];
              }
              *(undefined4 *)(plVar11 + 2) = 0x20;
              iVar15 = 0x20;
            }
            else {
              plVar11[1] = (longlong)plVar13;
              iVar15 = 0x20;
              *plVar11 = 0;
              *(undefined4 *)(plVar11 + 2) = 0x20;
            }
          }
          else {
            iVar15 = (int)plVar11[2];
          }
          plVar11[1] = *plVar13;
          *(int *)(plVar11 + 2) = iVar15 + -1;
          plVar11 = (longlong *)FUN_1415914c0(&local_178);
          local_138 = *plVar11;
          *plVar11 = 0;
          *plVar13 = (longlong)&PTR_FUN_143f3edd8;
          *(undefined4 *)(plVar13 + 1) = 0xff;
          *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
          *plVar13 = (longlong)&PTR_FUN_144c95818;
          *(undefined1 *)(plVar13 + 0x12) = 0;
          plVar13[0x13] = local_138;
          if (local_178 != 0) {
            FGraphEvent::Release();
          }
          param_4 = local_1c0;
          local_1f8 = &local_1d4;
          local_1e8 = plVar10;
          local_1f0 = uVar9;
          FUN_14158bcb0(plVar13 + 2,local_1c0,0x12ff,local_1d8);
          lVar16 = plVar13[0x13];
          if (lVar16 != 0) {
            LOCK();
            *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
            UNLOCK();
          }
          local_170 = lVar16;
          FUN_1415990e0(plVar13,0,0xff,1);
          lVar17 = (longlong)(int)local_38;
          iVar15 = (int)local_38 + 1;
          local_38 = CONCAT44(local_38._4_4_,iVar15);
          if (local_38._4_4_ < iVar15) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_60);
          }
          plVar11 = local_60;
          if (local_40 != (longlong *)0x0) {
            plVar11 = local_40;
          }
          plVar11[lVar17] = lVar16;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
    uVar4 = local_1d8;
    local_70 = (longlong *)0x0;
    local_68 = 0;
    if (DAT_1468b5000 != 0) {
      plVar11 = (longlong *)FUN_1415915e0(local_f0,0,0xff);
      local_1e8 = (longlong *)0x0;
      local_1f0 = 0;
      local_1f8 = (int *)0x0;
      FUN_14158bcb0(*plVar11 + 0x10,param_4,0x200,uVar4);
      lVar16 = *plVar11;
      lVar3 = plVar11[2];
      lVar17 = plVar11[1];
      lVar2 = *(longlong *)(lVar16 + 0x98);
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
        UNLOCK();
      }
      local_168 = lVar2;
      FUN_1415990e0(lVar16,lVar17,(int)lVar3,1);
      uVar18 = local_68;
      lVar16 = (longlong)(int)local_68;
      iVar15 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar15);
      if (local_68._4_4_ < iVar15) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_90,uVar18 & 0xffffffff);
      }
      plVar11 = local_90;
      if (local_70 != (longlong *)0x0) {
        plVar11 = local_70;
      }
      plVar11[lVar16] = lVar2;
    }
    uVar7 = DAT_1464a8210;
    if (DAT_1464a8210 != 2) {
      plVar11 = (longlong *)FUN_1415915e0(local_d8,0,0xff);
      local_1e8 = (longlong *)0x0;
      local_1f0 = 0;
      local_1f8 = (int *)0x0;
      FUN_14158bcb0(*plVar11 + 0x10,param_4,uVar7 | 0x200,uVar4);
      lVar16 = *plVar11;
      lVar3 = plVar11[2];
      lVar17 = plVar11[1];
      lVar2 = *(longlong *)(lVar16 + 0x98);
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
        UNLOCK();
      }
      local_160 = lVar2;
      FUN_1415990e0(lVar16,lVar17,(int)lVar3,1);
      uVar18 = local_68;
      lVar16 = (longlong)(int)local_68;
      iVar15 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar15);
      if (local_68._4_4_ < iVar15) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_90,uVar18 & 0xffffffff);
      }
      plVar11 = local_90;
      if (local_70 != (longlong *)0x0) {
        plVar11 = local_70;
      }
      plVar11[lVar16] = lVar2;
    }
    cVar6 = (**(code **)(*DAT_1468a80e8 + 0x20))(DAT_1468a80e8,1);
    if (cVar6 != '\0') {
      plVar11 = (longlong *)FUN_1415915e0(local_c0,0,0xff);
      local_1e8 = (longlong *)0x0;
      local_1f0 = 0;
      local_1f8 = (int *)0x0;
      FUN_14158bcb0(*plVar11 + 0x10,param_4,0x201,uVar4);
      lVar16 = *plVar11;
      lVar3 = plVar11[2];
      lVar17 = plVar11[1];
      lVar2 = *(longlong *)(lVar16 + 0x98);
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
        UNLOCK();
      }
      local_158 = lVar2;
      FUN_1415990e0(lVar16,lVar17,(int)lVar3,1);
      uVar18 = local_68;
      lVar16 = (longlong)(int)local_68;
      iVar15 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar15);
      if (local_68._4_4_ < iVar15) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_90,uVar18 & 0xffffffff);
      }
      plVar11 = local_90;
      if (local_70 != (longlong *)0x0) {
        plVar11 = local_70;
      }
      plVar11[lVar16] = lVar2;
    }
    plVar11 = (longlong *)FUN_1415915e0(local_a8,0,0xff);
    local_1e8 = (longlong *)0x0;
    local_1f0 = 0;
    local_1f8 = (int *)0x0;
    FUN_14158bcb0(*plVar11 + 0x10,param_4,0x102,uVar4);
    lVar16 = *plVar11;
    lVar3 = plVar11[2];
    lVar17 = plVar11[1];
    lVar2 = *(longlong *)(lVar16 + 0x98);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
      UNLOCK();
    }
    local_150 = lVar2;
    FUN_1415990e0(lVar16,lVar17,(int)lVar3,1);
    uVar18 = local_68;
    lVar16 = (longlong)(int)local_68;
    iVar15 = (int)local_68 + 1;
    local_68 = CONCAT44(local_68._4_4_,iVar15);
    if (local_68._4_4_ < iVar15) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_90,uVar18 & 0xffffffff);
    }
    puVar14 = local_1d0;
    lVar17 = (longlong)(int)local_1c8;
    plVar11 = local_90;
    if (local_70 != (longlong *)0x0) {
      plVar11 = local_70;
    }
    plVar11[lVar16] = lVar2;
    if (local_1d6 != '\0') {
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10,3000,0);
      }
      plVar11 = (longlong *)
                ((ulonglong)((longlong)(puVar14 + lVar17) + (7 - (longlong)puVar14)) >> 3);
      if (puVar14 + lVar17 < puVar14) {
        plVar11 = plVar8;
      }
      plVar13 = plVar8;
      puVar12 = puVar14;
      if (plVar11 != (longlong *)0x0) {
        do {
          (**(code **)(*(longlong *)*puVar12 + 0x10))();
          plVar13 = (longlong *)((longlong)plVar13 + 1);
          puVar12 = puVar12 + 1;
        } while (plVar13 != plVar11);
      }
      (**(code **)(*DAT_1468a80e8 + 0x48))(DAT_1468a80e8,local_60,0x102);
    }
    (**(code **)(*DAT_1468a80e8 + 0x48))(DAT_1468a80e8,local_90,0x102);
    plVar11 = (longlong *)((ulonglong)((longlong)(puVar14 + lVar17) + (7 - (longlong)puVar14)) >> 3)
    ;
    if (puVar14 + lVar17 < puVar14) {
      plVar11 = plVar8;
    }
    puVar12 = puVar14;
    if (plVar11 != (longlong *)0x0) {
      do {
        FUN_1415b5910(*puVar12);
        plVar8 = (longlong *)((longlong)plVar8 + 1);
        puVar12 = puVar12 + 1;
      } while (plVar8 != plVar11);
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_1415b5910(plVar10);
    }
    plVar8 = local_90;
    iVar15 = (int)local_68;
    if (local_70 != (longlong *)0x0) {
      plVar8 = local_70;
    }
    for (; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar8 != 0) {
        FGraphEvent::Release();
      }
      plVar8 = plVar8 + 1;
    }
    if (local_70 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar8 = local_60;
    iVar15 = (int)local_38;
    if (local_40 != (longlong *)0x0) {
      plVar8 = local_40;
    }
    for (; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar8 != 0) {
        FGraphEvent::Release();
      }
      plVar8 = plVar8 + 1;
    }
    if (local_40 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (puVar14 != (undefined8 *)0x0) {
      FMemory::Free(puVar14);
    }
  }
  return;
}



// FUNCTION 141590d60 FUN_141590d60 body=11 status=ok
// SIG undefined FUN_141590d60(void)

void FUN_141590d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141590030(param_1,param_2,0,param_3);
  return;
}



// FUNCTION 141590db0 Call body=124 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_eeb6078671a6e13d6c21bc5017366713>,void___cdecl(int)>::Call
               (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_28 [32];
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  plVar7 = (longlong *)TGraphTask<FIncGraphTask>::CreateTask(local_28,0,0xff);
  lVar3 = *plVar7;
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 1000;
  lVar3 = *plVar7;
  lVar6 = plVar7[2];
  lVar4 = plVar7[1];
  lVar5 = *(longlong *)(lVar3 + 0x30);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  FUN_141599890(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    FGraphEvent::Release(lVar5);
  }
  return;
}



// FUNCTION 141590e30 FUN_141590e30 body=7 status=ok
// SIG undefined FUN_141590e30(void)

void FUN_141590e30(undefined8 param_1,undefined4 *param_2)

{
  FUN_14158dac0(param_1,*param_2);
  return;
}



// FUNCTION 141590e40 Call body=124 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_80d8c48f91200a07e34c550365bb5c93>,void___cdecl(int)>::Call
               (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_28 [32];
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  plVar7 = (longlong *)TGraphTask<FIncGraphTask>::CreateTask(local_28,0,0xff);
  lVar3 = *plVar7;
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = *plVar7;
  lVar6 = plVar7[2];
  lVar4 = plVar7[1];
  lVar5 = *(longlong *)(lVar3 + 0x30);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  FUN_141599890(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    FGraphEvent::Release(lVar5);
  }
  return;
}



// FUNCTION 141590ec0 Call body=124 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_3ad33dfaaba89c9916be9600dca62930>,void___cdecl(int)>::Call
               (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_28 [32];
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  plVar7 = (longlong *)TGraphTask<FIncGraphTask>::CreateTask(local_28,0,0xff);
  lVar3 = *plVar7;
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0xffffffff;
  lVar3 = *plVar7;
  lVar6 = plVar7[2];
  lVar4 = plVar7[1];
  lVar5 = *(longlong *)(lVar3 + 0x30);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  FUN_141599b20(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    FGraphEvent::Release(lVar5);
  }
  return;
}



// FUNCTION 141590fa0 FUN_141590fa0 body=8 status=ok
// SIG undefined FUN_141590fa0(void)

ulonglong FUN_141590fa0(undefined8 param_1,ulonglong *param_2)

{
  return *param_2 | 1;
}



// FUNCTION 141590fb0 Chr body=109 status=ok
// SIG undefined Chr(void)

undefined8 * FString::Chr(undefined8 *param_1,short param_2)

{
  int iVar1;
  longlong lVar2;
  short local_res10 [12];
  
  local_res10[0] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  local_res10[1] = 0;
  if (param_2 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (local_res10[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_1 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,local_res10,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 141591020 FUN_141591020 body=895 status=ok
// SIG undefined FUN_141591020(void)

void FUN_141591020(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *local_28;
  undefined8 local_20;
  
  puVar5 = &DAT_143f3eda8;
  if (0 < (int)param_2[1]) {
    local_28 = (undefined2 *)0x0;
    local_20 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar1 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"Normal",0xe);
    puVar4 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar4 = puVar1;
    }
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)*param_2;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else {
      local_28 = (undefined2 *)0x0;
      local_20 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      puVar1 = local_28;
      FGenericPlatformString::Memcpy(local_28,L"High",10);
      puVar4 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar4 = puVar1;
      }
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = *(undefined2 **)*param_2;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (puVar1 != (undefined2 *)0x0) {
        FMemory::Free(puVar1);
      }
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x20) = 0x800;
      }
      else {
        local_28 = (undefined2 *)0x0;
        local_20 = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        puVar1 = local_28;
        FGenericPlatformString::Memcpy(local_28,L"Background",0x16);
        puVar4 = &DAT_143f3eda8;
        if ((int)local_20 != 0) {
          puVar4 = puVar1;
        }
        if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = *(undefined2 **)*param_2;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
        if (puVar1 != (undefined2 *)0x0) {
          FMemory::Free(puVar1);
        }
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x20) = 0x1000;
        }
      }
    }
  }
  if (1 < (int)param_2[1]) {
    local_28 = (undefined2 *)0x0;
    local_20 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar1 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"Normal",0xe);
    puVar4 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar4 = puVar1;
    }
    if (*(int *)(*param_2 + 0x18) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(*param_2 + 0x10);
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      local_28 = (undefined2 *)0x0;
      local_20 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      puVar1 = local_28;
      FGenericPlatformString::Memcpy(local_28,L"High",10);
      puVar4 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar4 = puVar1;
      }
      if (*(int *)(*param_2 + 0x18) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = *(undefined2 **)(*param_2 + 0x10);
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (puVar1 != (undefined2 *)0x0) {
        FMemory::Free(puVar1);
      }
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x24) = 0x200;
      }
    }
  }
  if (2 < (int)param_2[1]) {
    local_28 = (undefined2 *)0x0;
    local_20 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar1 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"Normal",0xe);
    puVar4 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar4 = puVar1;
    }
    if (*(int *)(*param_2 + 0x28) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(*param_2 + 0x20);
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    else {
      local_28 = (undefined2 *)0x0;
      local_20 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      puVar1 = local_28;
      FGenericPlatformString::Memcpy(local_28,L"High",10);
      puVar4 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar4 = puVar1;
      }
      if (*(int *)(*param_2 + 0x28) != 0) {
        puVar5 = *(undefined2 **)(*param_2 + 0x20);
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar4);
      if (puVar1 != (undefined2 *)0x0) {
        FMemory::Free(puVar1);
      }
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x28) = 0x200;
      }
    }
  }
  return;
}



// FUNCTION 1415913a0 CopyToEmptyStorage body=52 status=ok
// SIG undefined CopyToEmptyStorage(void)

void UE4Function_Private::TFunction_OwnedObject<<lambda_3d5d47135c039d13df68ed07cfe6582f>_>::
     CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144c95860;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 1415913e0 FUN_1415913e0 body=129 status=ok
// SIG undefined FUN_1415913e0(void)

void FUN_1415913e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *puVar1 = &PTR_GetPoolName_144c958b8;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x40) == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)(param_1 + 0x20);
    }
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (longlong *)(**(code **)*puVar4)();
      (**(code **)(*plVar2 + 8))(plVar2);
      puVar3 = *(undefined1 **)(param_1 + 0x10);
      goto LAB_14159144a;
    }
  }
  puVar3 = &LAB_141590d70;
LAB_14159144a:
  puVar1[2] = puVar3;
  puVar1[0xd] = *(undefined8 *)(param_1 + 0x68);
  return;
}



// FUNCTION 141591470 CreateCopy body=73 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<bool___cdecl(float),TFunction<bool___cdecl(float)>_>::CreateCopy
               (longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144c95878;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    puVar1[0xd] = *(undefined8 *)(param_1 + 0x68);
  }
  return;
}



// FUNCTION 1415914c0 FUN_1415914c0 body=273 status=ok
// SIG undefined FUN_1415914c0(void)

undefined8 * FUN_1415914c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  
  plVar2 = TlsGetValue(DAT_1468a7e70);
  plVar5 = (longlong *)0x0;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)operator_new(0x18);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      plVar5 = plVar2;
    }
    TlsSetValue(DAT_1468a7e70,plVar5);
    plVar2 = plVar5;
  }
  plVar5 = (longlong *)plVar2[1];
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)*plVar2;
    if (plVar5 == (longlong *)0x0) {
      lVar3 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7e78);
      plVar2[1] = lVar3;
      if (lVar3 == 0) {
        puVar4 = (undefined8 *)FMemory::Malloc(0xa00,0);
        plVar2[1] = (longlong)puVar4;
        lVar3 = 0x1f;
        do {
          puVar1 = puVar4 + 10;
          *puVar4 = puVar1;
          lVar3 = lVar3 + -1;
          puVar4 = puVar1;
        } while (lVar3 != 0);
        *puVar1 = 0;
      }
      plVar5 = (longlong *)plVar2[1];
      iVar6 = 0x20;
      *(undefined4 *)(plVar2 + 2) = 0x20;
    }
    else {
      iVar6 = 0x20;
      plVar2[1] = (longlong)plVar5;
      *(undefined4 *)(plVar2 + 2) = 0x20;
      *plVar2 = 0;
    }
  }
  else {
    iVar6 = (int)plVar2[2];
  }
  plVar2[1] = *plVar5;
  *(int *)(plVar2 + 2) = iVar6 + -1;
  plVar5[1] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  *(undefined4 *)(plVar5 + 9) = 0;
  *(undefined4 *)((longlong)plVar5 + 0x4c) = 0xaff;
  *param_1 = plVar5;
  LOCK();
  *(int *)(plVar5 + 9) = (int)plVar5[9] + 1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1415915e0 FUN_1415915e0 body=367 status=ok
// SIG undefined FUN_1415915e0(void)

undefined8 * FUN_1415915e0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong local_res8;
  longlong local_res10;
  
  plVar6 = (longlong *)0x0;
  iVar7 = 0;
  if (param_2 != 0) {
    iVar7 = *(int *)(param_2 + 0x28);
  }
  plVar2 = TlsGetValue(DAT_1468a7c78);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)operator_new(0x18);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      plVar6 = plVar2;
    }
    TlsSetValue(DAT_1468a7c78,plVar6);
    plVar2 = plVar6;
  }
  plVar6 = (longlong *)plVar2[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar2;
    if (plVar6 == (longlong *)0x0) {
      lVar3 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7c80);
      plVar2[1] = lVar3;
      if (lVar3 == 0) {
        puVar4 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar2[1] = (longlong)puVar4;
        lVar3 = 0x1f;
        do {
          puVar1 = puVar4 + 0x20;
          *puVar4 = puVar1;
          lVar3 = lVar3 + -1;
          puVar4 = puVar1;
        } while (lVar3 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar2[1];
      iVar5 = 0x20;
      *(undefined4 *)(plVar2 + 2) = 0x20;
    }
    else {
      iVar5 = 0x20;
      plVar2[1] = (longlong)plVar6;
      *(undefined4 *)(plVar2 + 2) = 0x20;
      *plVar2 = 0;
    }
  }
  else {
    iVar5 = (int)plVar2[2];
  }
  plVar2[1] = *plVar6;
  *(int *)(plVar2 + 2) = iVar5 + -1;
  plVar2 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar2;
  *plVar2 = 0;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar7 + 1;
  *plVar6 = (longlong)&PTR_FUN_144c95818;
  *(undefined1 *)(plVar6 + 0x12) = 0;
  plVar6[0x13] = local_res10;
  if (local_res8 != 0) {
    FGraphEvent::Release();
  }
  return param_1;
}



// FUNCTION 141591750 CreateTask body=326 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FIncGraphTask>::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  plVar5 = (longlong *)0x0;
  iVar7 = 0;
  if (param_2 != 0) {
    iVar7 = *(int *)(param_2 + 0x28);
  }
  plVar2 = TlsGetValue(DAT_1468a7c78);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)operator_new(0x18);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      plVar5 = plVar2;
    }
    TlsSetValue(DAT_1468a7c78,plVar5);
    plVar2 = plVar5;
  }
  plVar5 = (longlong *)plVar2[1];
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)*plVar2;
    if (plVar5 == (longlong *)0x0) {
      lVar3 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7c80);
      plVar2[1] = lVar3;
      if (lVar3 == 0) {
        puVar4 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar2[1] = (longlong)puVar4;
        lVar3 = 0x1f;
        do {
          puVar1 = puVar4 + 0x20;
          *puVar4 = puVar1;
          lVar3 = lVar3 + -1;
          puVar4 = puVar1;
        } while (lVar3 != 0);
        *puVar1 = 0;
      }
      plVar5 = (longlong *)plVar2[1];
      iVar6 = 0x20;
      *(undefined4 *)(plVar2 + 2) = 0x20;
    }
    else {
      iVar6 = 0x20;
      plVar2[1] = (longlong)plVar5;
      *(undefined4 *)(plVar2 + 2) = 0x20;
      *plVar2 = 0;
    }
  }
  else {
    iVar6 = (int)plVar2[2];
  }
  plVar2[1] = *plVar5;
  *(int *)(plVar2 + 2) = iVar6 + -1;
  *plVar5 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar5 + 1) = 0xff;
  *(int *)((longlong)plVar5 + 0xc) = iVar7 + 1;
  *plVar5 = (longlong)&PTR_FUN_144c95488;
  *(undefined1 *)(plVar5 + 5) = 0;
  plVar5[6] = 0;
  *param_1 = plVar5;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1415918a0 CreateTask body=361 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FNullGraphTask>::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong local_res8;
  longlong local_res10;
  
  plVar6 = (longlong *)0x0;
  iVar7 = 0;
  if (param_2 != 0) {
    iVar7 = *(int *)(param_2 + 0x28);
  }
  plVar2 = TlsGetValue(DAT_1468a7c78);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)operator_new(0x18);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      plVar6 = plVar2;
    }
    TlsSetValue(DAT_1468a7c78,plVar6);
    plVar2 = plVar6;
  }
  plVar6 = (longlong *)plVar2[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar2;
    if (plVar6 == (longlong *)0x0) {
      lVar3 = TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7c80);
      plVar2[1] = lVar3;
      if (lVar3 == 0) {
        puVar4 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar2[1] = (longlong)puVar4;
        lVar3 = 0x1f;
        do {
          puVar1 = puVar4 + 0x20;
          *puVar4 = puVar1;
          lVar3 = lVar3 + -1;
          puVar4 = puVar1;
        } while (lVar3 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar2[1];
      iVar5 = 0x20;
      *(undefined4 *)(plVar2 + 2) = 0x20;
    }
    else {
      iVar5 = 0x20;
      plVar2[1] = (longlong)plVar6;
      *(undefined4 *)(plVar2 + 2) = 0x20;
      *plVar2 = 0;
    }
  }
  else {
    iVar5 = (int)plVar2[2];
  }
  plVar2[1] = *plVar6;
  *(int *)(plVar2 + 2) = iVar5 + -1;
  plVar2 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar2;
  *plVar2 = 0;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar7 + 1;
  *plVar6 = (longlong)&PTR_FUN_144c95808;
  *(undefined1 *)((longlong)plVar6 + 0x14) = 0;
  plVar6[3] = local_res10;
  if (local_res8 != 0) {
    FGraphEvent::Release();
  }
  return param_1;
}



// FUNCTION 141591a10 CullArray body=67 status=ok
// SIG undefined CullArray(void)

undefined4 FString::CullArray(longlong param_1)

{
  undefined4 uVar1;
  longlong *local_res8 [4];
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_res8[0] = local_18;
  TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
            (param_1,local_res8);
  uVar1 = *(undefined4 *)(param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 141591a60 FUN_141591a60 body=1087 status=ok
// SIG undefined FUN_141591a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141591a60(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar10 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar12 = (longlong *)(param_1 + 0x18);
    uStack_90 = 0;
    local_98 = (longlong *)0x0;
    plVar15 = plVar10;
    if (plVar12 != &local_b8) {
      local_88 = *plVar12;
      uStack_80 = *(undefined8 *)(param_1 + 0x20);
      local_78 = *(undefined4 *)(param_1 + 0x28);
      uStack_74 = *(undefined4 *)(param_1 + 0x2c);
      uStack_70 = *(undefined4 *)(param_1 + 0x30);
      uStack_6c = *(undefined4 *)(param_1 + 0x34);
      local_68 = *(undefined4 *)(param_1 + 0x38);
      uStack_64 = *(undefined4 *)(param_1 + 0x3c);
      uStack_60 = *(uint *)(param_1 + 0x40);
      uStack_5c = *(undefined4 *)(param_1 + 0x44);
      *plVar12 = local_b8;
      *(undefined8 *)(param_1 + 0x20) = uStack_b0;
      local_98 = *(longlong **)(param_1 + 0x38);
      uStack_90 = *(ulonglong *)(param_1 + 0x40);
      plVar15 = (longlong *)(ulonglong)uStack_60;
      *(undefined4 *)(param_1 + 0x28) = local_a8;
      *(undefined4 *)(param_1 + 0x2c) = uStack_a4;
      *(undefined4 *)(param_1 + 0x30) = uStack_a0;
      *(undefined4 *)(param_1 + 0x34) = uStack_9c;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      local_b8 = local_88;
      uStack_b0 = uStack_80;
      local_a8 = local_78;
      uStack_a4 = uStack_74;
      uStack_a0 = uStack_70;
      uStack_9c = uStack_6c;
    }
    if (DAT_1464a8204 == 0) {
LAB_141591cfa:
      uVar14 = 0xaff;
      if (DAT_1468a7c74 == 0) {
        uVar14 = *(undefined4 *)(param_1 + 0x4c);
      }
      LOCK();
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      UNLOCK();
      local_d0 = param_1;
      plVar12 = TlsGetValue(DAT_1468a7c78);
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)operator_new(0x18);
        if (plVar12 != (longlong *)0x0) {
          *plVar12 = 0;
          plVar12[1] = 0;
          *(undefined4 *)(plVar12 + 2) = 0;
          plVar10 = plVar12;
        }
        TlsSetValue(DAT_1468a7c78,plVar10);
        plVar12 = plVar10;
      }
      plVar10 = (longlong *)plVar12[1];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)*plVar12;
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468a7c80);
          plVar12[1] = (longlong)plVar10;
          if (plVar10 == (longlong *)0x0) {
            puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar12[1] = (longlong)puVar11;
            lVar9 = 0x1f;
            do {
              puVar2 = puVar11 + 0x20;
              *puVar11 = puVar2;
              lVar9 = lVar9 + -1;
              puVar11 = puVar2;
            } while (lVar9 != 0);
            *puVar2 = 0;
            plVar10 = (longlong *)plVar12[1];
          }
          iVar7 = 0x20;
          *(undefined4 *)(plVar12 + 2) = 0x20;
        }
        else {
          iVar7 = 0x20;
          plVar12[1] = (longlong)plVar10;
          *(undefined4 *)(plVar12 + 2) = 0x20;
          *plVar12 = 0;
        }
      }
      else {
        iVar7 = (int)plVar12[2];
      }
      plVar12[1] = *plVar10;
      *(int *)(plVar12 + 2) = iVar7 + -1;
      LOCK();
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      UNLOCK();
      *(undefined4 *)(plVar10 + 1) = 0xff;
      *plVar10 = (longlong)&PTR_FUN_143f3edd8;
      *(int *)((longlong)plVar10 + 0xc) = (int)uStack_90 + 1;
      *plVar10 = (longlong)&PTR_FUN_144c95808;
      *(undefined1 *)((longlong)plVar10 + 0x14) = 0;
      plVar10[3] = param_1;
      local_c8 = param_1;
      FGraphEvent::Release(param_1);
      *(undefined4 *)(plVar10 + 2) = uVar14;
      lVar9 = plVar10[3];
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
        UNLOCK();
      }
      local_e0 = lVar9;
      FUN_141599db0(plVar10,&local_b8,param_3,1);
      if (lVar9 != 0) {
        FGraphEvent::Release(lVar9);
      }
      plVar10 = &local_b8;
      iVar7 = (int)uStack_90;
      if (local_98 != (longlong *)0x0) {
        plVar10 = local_98;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar10 != 0) {
          FGraphEvent::Release();
        }
        plVar10 = plVar10 + 1;
      }
      if (local_98 == (longlong *)0x0) {
        return;
      }
      FMemory::Free();
      return;
    }
    plVar12 = &local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar12 = plVar10;
    }
    plVar12 = (longlong *)((ulonglong)plVar12 | (ulonglong)local_98);
    plVar3 = plVar12 + (int)plVar15;
    if (plVar12 != plVar3) {
      do {
        LOCK();
        uVar8 = *(ulonglong *)(*plVar12 + 8);
        if (uVar8 == 0) {
          *(ulonglong *)(*plVar12 + 8) = 0;
          uVar8 = 0;
        }
        UNLOCK();
        if ((uVar8 >> 0x1a & 1) == 0) goto LAB_141591cfa;
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar3);
      plVar15 = (longlong *)(uStack_90 & 0xffffffff);
    }
    plVar10 = &local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar10 = local_98;
    }
    uVar13 = (uint)plVar15;
    while (uVar13 != 0) {
      if (*plVar10 != 0) {
        FGraphEvent::Release();
      }
      plVar10 = plVar10 + 1;
      uVar13 = (int)plVar15 - 1;
      plVar15 = (longlong *)(ulonglong)uVar13;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  do {
    LOCK();
    uVar8 = *(ulonglong *)(param_1 + 8);
    if (uVar8 == 0) {
      *(ulonglong *)(param_1 + 8) = 0;
      uVar8 = 0;
    }
    UNLOCK();
    uVar16 = (uVar8 & 0xfffffffffc000000) + 0x8000000;
    uVar13 = (uint)uVar8 & 0x3ffffff;
    if (uVar16 >> 0x1a < uVar8 >> 0x1a) {
      FUN_1416b1760(0x3a83126f);
    }
    local_d8 = (ulonglong)((uint)(uVar8 >> 0x1a) & 1);
    lVar9 = FUN_141590fa0(local_e8,&local_d8);
    LOCK();
    bVar17 = uVar8 == *(ulonglong *)(param_1 + 8);
    if (bVar17) {
      *(ulonglong *)(param_1 + 8) = lVar9 << 0x1a | uVar16 & 0xfffffffff8000000;
    }
    UNLOCK();
  } while (!bVar17);
  if ((uVar8 & 0x3ffffff) != 0) {
    do {
      iVar7 = (int)param_2[1];
      lVar9 = (&DAT_1468a81f8)[uVar13 >> 0xe];
      uVar5 = *(undefined8 *)(lVar9 + 8 + (ulonglong)(uVar13 & 0x3fff) * 0x18);
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar7 * 8) = uVar5;
      uVar4 = *(uint *)(lVar9 + (ulonglong)(uVar13 & 0x3fff) * 0x18 + 0x10);
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar13);
      uVar13 = uVar4;
    } while (uVar4 != 0);
  }
  iVar7 = (int)param_2[1] + -1;
  lVar9 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      lVar6 = *(longlong *)(*param_2 + lVar9 * 8);
      LOCK();
      piVar1 = (int *)(lVar6 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)*DAT_1468a80e8)(DAT_1468a80e8,lVar6,*(undefined4 *)(lVar6 + 8),param_3);
      }
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if ((*(int *)((longlong)param_2 + 0xc) < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  return;
}



// FUNCTION 141591ea0 DoTask body=507 status=ok
// SIG undefined DoTask(void)

/* WARNING: Removing unreachable block (ram,0x00014159203a) */
/* WARNING: Removing unreachable block (ram,0x000141592047) */

void FBackgroundGraphTask::DoTask(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *lpTlsValue;
  undefined8 *puVar4;
  longlong lVar5;
  LARGE_INTEGER local_res20;
  
  local_res20.s.LowPart = 0;
  do {
    lVar5 = 1000000;
    do {
      FCrc::MemCrc32(param_1,1);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    QueryPerformanceCounter(&local_res20);
    lpTlsValue = TlsGetValue(DAT_1468a7c78);
    if (lpTlsValue == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)operator_new(0x18);
      lpTlsValue = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(puVar4 + 2) = 0;
        lpTlsValue = puVar4;
      }
      TlsSetValue(DAT_1468a7c78,lpTlsValue);
    }
    puVar4 = (undefined8 *)lpTlsValue[1];
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*lpTlsValue;
      if (puVar4 == (undefined8 *)0x0) {
        uVar3 = FUN_141594c40(&DAT_1468a7c80);
        puVar4 = (undefined8 *)0x0;
        if (uVar3 != 0) {
          puVar4 = *(undefined8 **)
                    ((&DAT_1468a81f8)[uVar3 >> 0xe] + 8 + (ulonglong)(uVar3 & 0x3fff) * 0x18);
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar3);
        }
        lpTlsValue[1] = puVar4;
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)FMemory::Malloc(0x2000,0);
          lpTlsValue[1] = puVar4;
          lVar5 = 0x1f;
          do {
            puVar1 = puVar4 + 0x20;
            *puVar4 = puVar1;
            lVar5 = lVar5 + -1;
            puVar4 = puVar1;
          } while (lVar5 != 0);
          *puVar1 = 0;
          puVar4 = (undefined8 *)lpTlsValue[1];
        }
      }
      else {
        lpTlsValue[1] = puVar4;
        *lpTlsValue = 0;
      }
      *(undefined4 *)(lpTlsValue + 2) = 0x20;
    }
    uVar2 = *puVar4;
    *(int *)(lpTlsValue + 2) = *(int *)(lpTlsValue + 2) + -1;
    lpTlsValue[1] = uVar2;
    *puVar4 = &PTR_FUN_143f3edd8;
    *(undefined4 *)(puVar4 + 1) = 0xff;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    *puVar4 = &PTR__scalar_deleting_destructor__144c954e0;
    *(undefined1 *)(puVar4 + 3) = 0;
    puVar4[4] = 0;
    puVar4[2] = CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart);
    lVar5 = puVar4[4];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
      UNLOCK();
    }
    FUN_141599370(puVar4,0,0xff,1,lVar5,0,0);
    if (lVar5 != 0) {
      FGraphEvent::Release(lVar5);
    }
  } while( true );
}



// FUNCTION 1415920a0 DoTask body=105 status=ok
// SIG undefined DoTask(void)

void FForegroundGraphTask::DoTask(longlong *param_1)

{
  double dVar1;
  double dVar2;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar2 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
  dVar1 = (double)(local_res8.QuadPart - *param_1);
  if (local_res8.QuadPart - *param_1 < 0) {
    dVar1 = dVar1 + 1.8446744073709552e+19;
  }
  FGenericPlatformMisc::LowLevelOutputDebugStringf
            (L"Latency %6.2fus\r\n",(double)(float)(dVar2 * dVar1 * 1000000.0));
  return;
}



// FUNCTION 141592110 EndsWith body=216 status=ok
// SIG undefined EndsWith(void)

undefined8 FString::EndsWith(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_2 + 1);
  iVar2 = iVar1 + -1;
  if (param_3 == 1) {
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (iVar2 < 1) {
      return 0;
    }
    iVar4 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar4 = 0;
    }
    if (iVar4 < iVar2) {
      return 0;
    }
    if (iVar1 == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>
                      (*param_1 + (longlong)(iVar4 - iVar2) * 2,puVar6);
  }
  else {
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (iVar2 < 1) {
      return 0;
    }
    iVar4 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar4 = 0;
    }
    if (iVar4 < iVar2) {
      return 0;
    }
    if (iVar1 == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    puVar5 = (ushort *)(*param_1 + (longlong)(iVar4 - iVar2) * 2);
    lVar7 = (longlong)puVar6 - (longlong)puVar5;
    do {
      uVar3 = (uint)*(ushort *)((longlong)puVar5 + lVar7);
      iVar2 = *puVar5 - uVar3;
      if (iVar2 != 0) break;
      puVar5 = puVar5 + 1;
    } while (uVar3 != 0);
  }
  if (iVar2 != 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 1415921f0 EndsWith body=149 status=ok
// SIG undefined EndsWith(void)

bool FString::EndsWith(longlong *param_1,short *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    iVar3 = (int)param_1[1] + -1;
    lVar4 = -1;
    if ((int)param_1[1] == 0) {
      iVar3 = 0;
    }
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    if ((int)lVar4 <= iVar3) {
      psVar5 = (short *)(*param_1 + ((longlong)iVar3 - (longlong)(int)lVar4) * 2);
      if (param_3 == 1) {
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(psVar5,param_2);
        return iVar3 == 0;
      }
      lVar4 = (longlong)param_2 - (longlong)psVar5;
      do {
        sVar1 = *psVar5;
        sVar2 = *(short *)((longlong)psVar5 + lVar4);
        if (sVar1 != sVar2) break;
        psVar5 = psVar5 + 1;
      } while (sVar2 != 0);
      return sVar1 == sVar2;
    }
  }
  return false;
}



// FUNCTION 141592290 FUN_141592290 body=85 status=ok
// SIG undefined FUN_141592290(void)

undefined8 FUN_141592290(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  
  param_1 = (longlong)param_2 * 0x3b8 + param_1;
  iVar1 = FStallingTaskQueue<FBaseGraphTask,128,2>::Push
                    (param_1 + 0x38,param_3,(*(uint *)(param_3 + 8) & 0x600) == 0);
  if (-1 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 1000) + 0x10))();
    return 1;
  }
  return 0;
}



// FUNCTION 141592320 FUN_141592320 body=82 status=ok
// SIG undefined FUN_141592320(void)

undefined8 * FUN_141592320(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 local_18 [16];
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
      plVar3 = (longlong *)(param_1 + 0x20);
    }
    if (plVar3 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 8))();
    }
  }
  puVar2 = (undefined8 *)(**(code **)(param_1 + 0x10))(local_18,uVar1);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141592380 Execute body=73 status=ok
// SIG undefined Execute(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(float),TFunction<void___cdecl(float)>_>
     ::Execute(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 local_res10 [6];
  
  uVar1 = 0;
  local_res10[0] = param_2;
  if (*(int *)(param_1 + 0x50) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_1 + 0x20);
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
  (**(code **)(param_1 + 0x10))(uVar1,local_res10);
  return;
}



// FUNCTION 1415923d0 ExecuteTask body=290 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FAsyncGraphTask>::ExecuteTask(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  plVar1 = plVar3;
  if (*(int *)(param_1 + 0xc) != 0) {
    plVar2 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar2 = param_1 + 6;
    }
    if (plVar2 != (longlong *)0x0) {
      plVar1 = (longlong *)(**(code **)(*plVar2 + 8))();
    }
  }
  (*(code *)param_1[4])(plVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    plVar1 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar1 = param_1 + 6;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144c95568;
  if (param_1[0xf] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  plVar1 = TlsGetValue(DAT_1468a7c78);
  if (plVar1 == (longlong *)0x0) {
    plVar2 = (longlong *)operator_new(0x18);
    plVar1 = plVar3;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      plVar1 = plVar2;
    }
    TlsSetValue(DAT_1468a7c78,plVar1);
  }
  if ((int)plVar1[2] < 0x20) {
    plVar3 = (longlong *)plVar1[1];
  }
  else {
    if (*plVar1 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_1468a7c80);
    }
    *plVar1 = plVar1[1];
    plVar1[1] = 0;
    *(undefined4 *)(plVar1 + 2) = 0;
  }
  *param_1 = plVar3;
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  plVar1[1] = (longlong)param_1;
  return;
}



// FUNCTION 141592500 FUN_141592500 body=403 status=ok
// SIG undefined FUN_141592500(void)

void FUN_141592500(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 local_res8 [2];
  
  local_res8[0] = param_3;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_res8[0] = *(undefined4 *)(param_1 + 0xc);
  }
  plVar5 = (longlong *)0x0;
  plVar3 = plVar5;
  if (*(int *)(param_1 + 10) != 0) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 4;
    }
    if (plVar4 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar4 + 8))();
    }
  }
  (*(code *)param_1[2])(plVar3,local_res8);
  piVar2 = (int *)param_1[0xd];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
    }
    else {
      (**(code **)(*(longlong *)param_1[0xe] + 0x20))((longlong *)param_1[0xe],0xffffffff,0);
    }
  }
  if (*(int *)(param_1 + 10) != 0) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 4;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_141591a60(param_1[0x13],param_2,param_3);
  *param_1 = &PTR_FUN_144c95818;
  if (param_1[0x13] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  plVar3 = TlsGetValue(DAT_1468a7c78);
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    plVar3 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar3 = plVar4;
    }
    TlsSetValue(DAT_1468a7c78,plVar3);
  }
  if ((int)plVar3[2] < 0x20) {
    plVar5 = (longlong *)plVar3[1];
  }
  else {
    if (*plVar3 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_1468a7c80);
    }
    *plVar3 = plVar3[1];
    plVar3[1] = 0;
    *(undefined4 *)(plVar3 + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  plVar3[1] = (longlong)param_1;
  return;
}



// FUNCTION 1415926a0 ExecuteTask body=230 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FTriggerEventGraphTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *lpTlsValue;
  longlong *plVar1;
  longlong *plVar2;
  
  (**(code **)(*(longlong *)param_1[2] + 0x10))();
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_141591a60(param_1[5],param_2,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__144c957f8;
  if (param_1[5] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  lpTlsValue = TlsGetValue(DAT_1468a7c78);
  plVar2 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar1 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar2;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = 0;
      plVar1[1] = 0;
      *(undefined4 *)(plVar1 + 2) = 0;
      lpTlsValue = plVar1;
    }
    TlsSetValue(DAT_1468a7c78,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar2 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_1468a7c80);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar2;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141592790 ExecuteTask body=208 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FNullGraphTask>::ExecuteTask(undefined8 *param_1)

{
  longlong *lpTlsValue;
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  FUN_141591a60(param_1[3]);
  *param_1 = &PTR_FUN_144c95808;
  if (param_1[3] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  lpTlsValue = TlsGetValue(DAT_1468a7c78);
  plVar2 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar1 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar2;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = 0;
      plVar1[1] = 0;
      *(undefined4 *)(plVar1 + 2) = 0;
      lpTlsValue = plVar1;
    }
    TlsSetValue(DAT_1468a7c78,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar2 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_1468a7c80);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar2;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141592860 ExecuteTask body=230 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FTriggerEventGraphTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *lpTlsValue;
  longlong *plVar1;
  longlong *plVar2;
  
  (**(code **)(*(longlong *)param_1[2] + 0x10))();
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__144c957e8;
  if (param_1[4] != 0) {
    FGraphEvent::Release();
  }
  *param_1 = &PTR_FUN_143f3edd8;
  lpTlsValue = TlsGetValue(DAT_1468a7c78);
  plVar2 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar1 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar2;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = 0;
      plVar1[1] = 0;
      *(undefined4 *)(plVar1 + 2) = 0;
      lpTlsValue = plVar1;
    }
    TlsSetValue(DAT_1468a7c78,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar2 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(&DAT_1468a7c80);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar2;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141592950 FUN_141592950 body=711 status=ok
// SIG undefined FUN_141592950(void)

ulonglong FUN_141592950(longlong *param_1,wchar_t *param_2,int param_3,int param_4,int param_5)

{
  void *pvVar1;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t wVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  lVar12 = -1;
  if (param_2 == (wchar_t *)0x0) {
    return 0xffffffff;
  }
  if (param_4 == 0) {
    iVar8 = (int)param_1[1];
    puVar10 = &DAT_143f3eda8;
    if (iVar8 == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)*param_1;
    }
    if (param_5 != -1) {
      iVar3 = iVar8 + -2;
      if (iVar8 == 0) {
        iVar3 = -1;
      }
      if (param_5 < 0) {
        iVar3 = 0;
      }
      else if (param_5 < iVar3) {
        iVar3 = param_5;
      }
      pwVar5 = pwVar5 + iVar3;
    }
    if (param_3 == 1) {
      pwVar5 = (wchar_t *)TCString<wchar_t>::Stristr();
    }
    else {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar5,param_2);
    }
    if (pwVar5 == (wchar_t *)0x0) {
      return 0xffffffffffffffff;
    }
    if ((int)param_1[1] != 0) {
      puVar10 = (undefined2 *)*param_1;
    }
    return (longlong)pwVar5 - (longlong)puVar10 >> 1;
  }
  if (param_3 == 1) {
    puVar13 = (undefined2 *)0x0;
    iVar8 = 0;
    iVar3 = 0;
    local_38 = (undefined2 *)0x0;
    local_2c = 0;
    puVar10 = puVar13;
    if (*param_2 != L'\0') {
      do {
        lVar12 = lVar12 + 1;
      } while (param_2[lVar12] != L'\0');
      iVar11 = (int)lVar12 + 1;
      local_30 = iVar11;
      if (0 < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      iVar8 = local_30;
      puVar10 = local_38;
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)iVar11 * 2);
      iVar11 = iVar8 + -1;
      if (iVar8 != 0) goto LAB_141592a78;
    }
    iVar11 = iVar3;
LAB_141592a78:
    puVar9 = puVar13;
    if (0 < iVar11) {
      do {
        wVar2 = towupper(puVar10[(longlong)puVar9]);
        puVar10[(longlong)puVar9] = wVar2;
        puVar9 = (undefined2 *)((longlong)puVar9 + 1);
      } while ((longlong)puVar9 < (longlong)iVar11);
    }
    local_40 = (int)param_1[1];
    lVar12 = (longlong)local_40;
    pvVar1 = (void *)*param_1;
    local_48 = (void *)0x0;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
      _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar12 * 2);
    }
    pvVar1 = local_48;
    if (local_40 != 0) {
      iVar3 = local_40 + -1;
    }
    if (0 < (longlong)iVar3) {
      do {
        wVar2 = towupper(*(wint_t *)((longlong)pvVar1 + (longlong)puVar13 * 2));
        *(wint_t *)((longlong)pvVar1 + (longlong)puVar13 * 2) = wVar2;
        puVar13 = (undefined2 *)((longlong)puVar13 + 1);
      } while ((longlong)puVar13 < (longlong)iVar3);
    }
    puVar13 = &DAT_143f3eda8;
    if (iVar8 != 0) {
      puVar13 = puVar10;
    }
    uVar4 = FUN_141592950(&local_48,puVar13,0,param_4,param_5);
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
    if (puVar10 != (undefined2 *)0x0) {
      FMemory::Free(puVar10);
    }
    return (ulonglong)uVar4;
  }
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (param_2[lVar12] != L'\0');
  iVar8 = (int)lVar12;
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  if (param_5 != -1) {
    iVar3 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar3 = 0;
    }
    if (param_5 < iVar3) goto LAB_141592bb5;
  }
  param_5 = 0;
  if ((int)param_1[1] != 0) {
    param_5 = (int)param_1[1] + -1;
  }
LAB_141592bb5:
  uVar4 = param_5 - iVar8;
  if (-1 < (int)uVar4) {
    lVar12 = (longlong)(int)uVar4;
    do {
      lVar6 = 0;
      if (*param_2 != L'\0') {
        pwVar5 = (wchar_t *)(*param_1 + lVar12 * 2);
        wVar7 = *param_2;
        do {
          if (*pwVar5 != wVar7) break;
          wVar7 = param_2[lVar6 + 1];
          lVar6 = lVar6 + 1;
          pwVar5 = pwVar5 + 1;
        } while (wVar7 != L'\0');
      }
      if (param_2[lVar6] == L'\0') {
        return (ulonglong)uVar4;
      }
      uVar4 = uVar4 - 1;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  return 0xffffffff;
}



// FUNCTION 141592c20 FUN_141592c20 body=715 status=ok
// SIG undefined FUN_141592c20(void)

undefined8 * FUN_141592c20(undefined8 *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  wchar_t *_Src;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  uint uVar14;
  int iVar15;
  wchar_t *pwVar16;
  int local_res18;
  void *local_68;
  int local_60;
  int local_5c;
  undefined2 *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  
  local_58 = (undefined2 *)0x0;
  local_50 = 0;
  FString::AppendInt(&local_58);
  iVar4 = (int)local_50;
  iVar6 = 0;
  local_68 = (void *)0x0;
  iVar7 = 0;
  local_5c = 0;
  local_res18 = 0;
  iVar10 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar10 = 0;
  }
  uVar14 = iVar10 - 1;
  if (-1 < (int)uVar14) {
    do {
      _Src = (wchar_t *)0x0;
      uVar1 = uVar14 + 1;
      uVar11 = iVar4 - 1;
      if (iVar4 == 0) {
        uVar11 = 0;
      }
      uVar8 = iVar4 - 1;
      if (uVar14 < uVar11) {
        uVar11 = uVar14;
      }
      if (iVar4 == 0) {
        uVar8 = 0;
      }
      uVar9 = uVar11;
      if ((uVar11 <= uVar1) && (uVar9 = uVar8, uVar1 < uVar8)) {
        uVar9 = uVar1;
      }
      local_48 = (wchar_t *)0x0;
      local_3c = 0;
      puVar5 = &DAT_143f3eda8;
      if (iVar4 != 0) {
        puVar5 = local_58;
      }
      iVar10 = uVar9 - uVar11;
      pwVar16 = (wchar_t *)(ulonglong)(iVar10 + 1);
      if (iVar10 == 0) {
        pwVar16 = _Src;
      }
      iVar15 = (int)pwVar16;
      local_40 = iVar15;
      if ((0 < iVar15) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48), iVar15 = local_40,
         _Src = local_48, 0 < local_40)) {
        wcsncpy(local_48,puVar5 + (int)uVar11,(longlong)iVar10);
        _Src[iVar10] = L'\0';
      }
      iVar7 = iVar6;
      if ((iVar15 != 0) && (iVar15 = iVar15 + -1, iVar15 != 0)) {
        local_60 = iVar6 + (uint)(iVar6 == 0) + iVar15;
        if (local_5c < local_60) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar6);
        }
        iVar7 = local_60;
        pvVar2 = (void *)((longlong)local_68 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,_Src,(longlong)iVar15 * 2);
        *(undefined2 *)((longlong)iVar15 * 2 + (longlong)pvVar2) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
      local_res18 = local_res18 + 1;
      if ((local_res18 == 3) && (0 < (int)uVar14)) {
        local_60 = (2 - (uint)(iVar7 != 0)) + iVar7;
        if (local_5c < local_60) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
        }
        local_res18 = 0;
        puVar5 = (undefined2 *)
                 ((longlong)local_68 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
        *puVar5 = 0x2c;
        puVar5[1] = 0;
        iVar7 = local_60;
      }
      uVar14 = uVar14 - 1;
      iVar6 = iVar7;
    } while (uVar14 < 0x80000000);
  }
  puVar5 = local_58;
  pvVar2 = local_68;
  *param_1 = 0;
  *(int *)(param_1 + 1) = iVar7;
  if (iVar7 == 0) {
    iVar10 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    iVar7 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar7,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar7 * 2);
    iVar10 = *(int *)(param_1 + 1);
    iVar7 = iVar10;
    if (iVar10 == 0) {
      iVar7 = 0;
    }
  }
  iVar4 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    puVar12 = (undefined2 *)*param_1;
    iVar10 = iVar7 + -2;
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    puVar13 = puVar12 + iVar10;
    do {
      uVar3 = *puVar12;
      *puVar12 = *puVar13;
      puVar12 = puVar12 + 1;
      *puVar13 = uVar3;
      puVar13 = puVar13 + -1;
    } while (puVar12 < puVar13);
  }
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  return param_1;
}



// FUNCTION 141592ef0 FreeLockFreeLink body=197 status=ok
// SIG undefined FreeLockFreeLink(void)

void FLockFreeLinkPolicy::FreeLockFreeLink(uint param_1)

{
  ulonglong *lpTlsValue;
  ulonglong *puVar1;
  ulonglong *puVar2;
  
  lpTlsValue = TlsGetValue(DAT_1468a7fd8);
  puVar2 = (ulonglong *)0x0;
  if (lpTlsValue == (ulonglong *)0x0) {
    puVar1 = (ulonglong *)operator_new(0xc);
    lpTlsValue = puVar2;
    if (puVar1 != (ulonglong *)0x0) {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      lpTlsValue = puVar1;
    }
    TlsSetValue(DAT_1468a7fd8,lpTlsValue);
  }
  if (0x3f < (int)lpTlsValue[1]) {
    if ((int)*lpTlsValue != 0) {
      FLockFreePointerListLIFORoot<128,1>::Push(&DAT_1468a7fe0);
    }
    *(undefined4 *)lpTlsValue = *(undefined4 *)((longlong)lpTlsValue + 4);
    *(undefined8 *)((longlong)lpTlsValue + 4) = 0;
  }
  if (param_1 != 0) {
    puVar2 = (ulonglong *)((&DAT_1468a81f8)[param_1 >> 0xe] + (ulonglong)(param_1 & 0x3fff) * 0x18);
  }
  *puVar2 = *puVar2 & 0xfffffffffc000000;
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[1] = (ulonglong)*(uint *)((longlong)lpTlsValue + 4);
  *(int *)(lpTlsValue + 1) = (int)lpTlsValue[1] + 1;
  *(uint *)((longlong)lpTlsValue + 4) = param_1;
  return;
}



// FUNCTION 141592fc0 FromHexBlob body=264 status=ok
// SIG undefined FromHexBlob(void)

longlong * FString::FromHexBlob(longlong *param_1,undefined1 *param_2,uint param_3)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  void *local_38;
  int local_30;
  
  uVar3 = (ulonglong)param_3;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)(param_3 * 2 + 1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
  }
  if (param_3 != 0) {
    do {
      PrintfImpl(&local_38,L"%02X",*param_2);
      _Src = local_38;
      if ((local_30 != 0) && (iVar4 = local_30 + -1, iVar4 != 0)) {
        iVar1 = (int)param_1[1];
        iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar4;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return param_1;
}



// FUNCTION 1415930d0 GenerateNewID body=35 status=ok
// SIG undefined GenerateNewID(void)

longlong FDelegateHandle::GenerateNewID(void)

{
  longlong lVar1;
  longlong lVar2;
  
  LOCK();
  UNLOCK();
  lVar2 = DAT_1464a8218 + 1;
  lVar1 = DAT_1464a8218 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_1464a8218 + 2;
    lVar1 = DAT_1464a8218 + 2;
  }
  DAT_1464a8218 = lVar1;
  return lVar2;
}



// FUNCTION 141593100 Get body=8 status=ok
// SIG undefined Get(void)

undefined8 FTaskGraphInterface::Get(void)

{
  return DAT_1468a80e8;
}



// FUNCTION 141593110 FUN_141593110 body=108 status=ok
// SIG undefined FUN_141593110(void)

undefined ** FUN_141593110(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b0278) {
    _Init_thread_header(&DAT_1468b0278);
    if (DAT_1468b0278 == -1) {
      atexit(`IModularFeatures::Get'::`2'::_dynamic_atexit_destructor_for__ModularFeatures__);
      _Init_thread_footer(&DAT_1468b0278);
      return &PTR_PTR_1464a82a0;
    }
  }
  return &PTR_PTR_1464a82a0;
}



// FUNCTION 141593180 FUN_141593180 body=109 status=ok
// SIG undefined FUN_141593180(void)

ulonglong FUN_141593180(longlong param_1)

{
  LPVOID pvVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  pvVar1 = TlsGetValue(*(DWORD *)(param_1 + 0x7d4));
  if (pvVar1 == (LPVOID)0x0) {
    uVar3 = 0xff;
  }
  else {
    lVar4 = (longlong)pvVar1 + (-8 - param_1);
    lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
    uVar3 = (lVar4 >> 2) - (lVar4 >> 0x3f);
    uVar2 = (uint)uVar3;
    uVar3 = uVar3 & 0xffffffff;
    if (*(int *)(param_1 + 0x7bc) <= (int)uVar2) {
      return (ulonglong)
             ((int)(uVar2 - *(int *)(param_1 + 0x7bc)) / *(int *)(param_1 + 0x7c4) << 0xb | uVar2);
    }
  }
  return uVar3;
}



// FUNCTION 1415931f0 GetCurrentThreadIfKnown body=64 status=ok
// SIG undefined GetCurrentThreadIfKnown(void)

ulonglong FTaskGraphImplementation::GetCurrentThreadIfKnown(longlong param_1,char param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_141593180();
  if (param_2 != '\0') {
    uVar3 = (uint)uVar1 & 0xff;
    uVar2 = 0xff;
    if (uVar3 != 0xff) {
      uVar2 = uVar3;
    }
    if ((int)uVar2 < *(int *)(param_1 + 0x7bc)) {
      uVar1 = (ulonglong)((uint)uVar1 | 0x100);
    }
  }
  return uVar1;
}



// FUNCTION 141593230 GetModularFeatureImplementation body=349 status=ok
// SIG undefined GetModularFeatureImplementation(void)

undefined8
FModularFeatures::GetModularFeatureImplementation(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int local_38;
  int iStack_34;
  
  plVar1 = (longlong *)(param_1 + 8);
  local_38 = -1;
  iVar3 = 0;
  iStack_34 = -1;
  TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
  ::ConditionalRehash(plVar1,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c),0);
  if (*(int *)(param_1 + 0x50) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar2 = param_1 + 0x40;
    }
    iStack_34 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                                 (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    local_38 = iStack_34;
    if (iStack_34 != -1) {
      do {
        iStack_34 = *(int *)(*plVar1 + 0x10 + (longlong)local_38 * 0x18);
        if (*(longlong *)(*plVar1 + (longlong)local_38 * 0x18) == param_2) break;
        local_38 = iStack_34;
      } while (iStack_34 != -1);
    }
  }
  do {
    if (local_38 == -1) {
      return 0;
    }
    if (param_3 == iVar3) {
      return *(undefined8 *)(*plVar1 + 8 + (longlong)local_38 * 0x18);
    }
    iVar3 = iVar3 + 1;
    if (iStack_34 == -1) {
      return 0;
    }
    local_38 = iStack_34;
    do {
      iStack_34 = *(int *)(*plVar1 + 0x10 + (longlong)local_38 * 0x18);
      if (*(longlong *)(*plVar1 + (longlong)local_38 * 0x18) == param_2) break;
      local_38 = iStack_34;
    } while (iStack_34 != -1);
  } while( true );
}



// FUNCTION 141593390 GetModularFeatureImplementationCount body=213 status=ok
// SIG undefined GetModularFeatureImplementationCount(void)

int FModularFeatures::GetModularFeatureImplementationCount(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1 + 8,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c),0);
  if (*(int *)(param_1 + 0x50) == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar2 = param_1 + 0x40;
  }
  iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                           (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
  iVar3 = iVar1;
  if (iVar1 != -1) {
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar3 * 0x18);
      if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x18) == param_2) break;
      iVar3 = iVar1;
    } while (iVar1 != -1);
  }
  do {
    if (iVar3 == -1) {
      return iVar4;
    }
    iVar4 = iVar4 + 1;
    if (iVar1 == -1) {
      return iVar4;
    }
    iVar3 = iVar1;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar3 * 0x18);
      if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x18) == param_2) break;
      iVar3 = iVar1;
    } while (iVar1 != -1);
  } while( true );
}



// FUNCTION 141593490 GetSmallTaskAllocator body=8 status=ok
// SIG undefined GetSmallTaskAllocator(void)

undefined4 * FBaseGraphTask::GetSmallTaskAllocator(void)

{
  return &DAT_1468a7c78;
}



// FUNCTION 1415934a0 HandleNumWorkerThreadsToIgnore body=393 status=ok
// SIG undefined HandleNumWorkerThreadsToIgnore(void)

void HandleNumWorkerThreadsToIgnore(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  wchar_t *_Str;
  int iVar7;
  int iVar8;
  
  iVar3 = DAT_1468a7c70;
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar4 = _wtoi(_Str);
    iVar5 = (**(code **)(*DAT_1468a80e8 + 0x18))();
    iVar5 = DAT_1468a7c70 + iVar5;
    iVar3 = DAT_1468a7c70;
    if (((iVar4 < iVar5) && (-1 < iVar4)) && (iVar4 != DAT_1468a7c70)) {
      iVar3 = iVar4;
      if (DAT_1468a7c70 < iVar4) {
        iVar8 = iVar5 - DAT_1468a7c70;
        while (plVar2 = DAT_1468a80e8, iVar8 = iVar8 + -1, DAT_1468a80e8 = plVar2,
              iVar5 - iVar4 <= iVar8) {
          iVar7 = 0;
          do {
            lVar1 = plVar2[(longlong)
                           (*(int *)((longlong)plVar2 + 0x7c4) * iVar7 +
                            *(int *)((longlong)plVar2 + 0x7bc) + iVar8) * 3 + 1];
            BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x48));
            if (BVar6 == 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x48));
            }
            iVar7 = iVar7 + 1;
            *(undefined1 *)(lVar1 + 0x45) = 1;
          } while (iVar7 < 3);
        }
      }
      else {
        iVar4 = (iVar5 - iVar4) + -1;
        if (iVar5 - DAT_1468a7c70 <= iVar4) {
          do {
            plVar2 = DAT_1468a80e8;
            iVar8 = 0;
            do {
              lVar1 = plVar2[(longlong)
                             (*(int *)((longlong)plVar2 + 0x7c4) * iVar8 +
                              *(int *)((longlong)plVar2 + 0x7bc) + iVar4) * 3 + 1];
              *(undefined1 *)(lVar1 + 0x45) = 0;
              LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x48));
              iVar8 = iVar8 + 1;
            } while (iVar8 < 3);
            iVar4 = iVar4 + -1;
          } while (iVar5 - DAT_1468a7c70 <= iVar4);
        }
      }
    }
  }
  DAT_1468a7c70 = iVar3;
  return;
}



// FUNCTION 141593630 Init body=24 status=ok
// SIG undefined Init(void)

undefined1 FTaskThreadBase::Init(longlong param_1)

{
  TlsSetValue(*(DWORD *)(param_1 + 0x14),*(LPVOID *)(param_1 + 0x30));
  return 1;
}



// FUNCTION 141593650 IsNumeric body=140 status=ok
// SIG undefined IsNumeric(void)

ulonglong FString::IsNumeric(undefined8 *param_1)

{
  wint_t _C;
  bool bVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar3;
  wint_t *pwVar4;
  
  if (*(int *)(param_1 + 1) < 2) {
    return in_RAX & 0xffffffffffffff00;
  }
  pwVar4 = (wint_t *)*param_1;
  _C = *pwVar4;
  if ((_C == 0x2d) || (_C == 0x2b)) {
    _C = pwVar4[1];
    pwVar4 = pwVar4 + 1;
  }
  bVar1 = false;
  do {
    if (_C == 0) {
      return 1;
    }
    if (_C == 0x2e) {
      uVar3 = 0;
      if (bVar1) {
LAB_1415936cb:
        return uVar3 & 0xffffffffffffff00;
      }
      bVar1 = true;
    }
    else {
      iVar2 = iswdigit(_C);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) goto LAB_1415936cb;
    }
    _C = pwVar4[1];
    pwVar4 = pwVar4 + 1;
  } while( true );
}



// FUNCTION 141593710 FUN_141593710 body=12 status=ok
// SIG undefined FUN_141593710(void)

bool FUN_141593710(void)

{
  return DAT_1468a80e8 != 0;
}



// FUNCTION 141593750 LeftPad body=450 status=ok
// SIG undefined LeftPad(void)

undefined8 * FString::LeftPad(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *local_38;
  int local_30;
  int local_2c;
  
  iVar6 = 0;
  iVar4 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    iVar4 = iVar6;
  }
  param_3 = param_3 - iVar4;
  if (0 < param_3) {
    local_30 = param_3 + 1;
    local_38 = (undefined2 *)0x0;
    local_2c = 0;
    if (0 < local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    puVar7 = local_38;
    if (0 < param_3) {
      puVar5 = local_38;
      for (lVar1 = (longlong)param_3; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar5 = 0x20;
        puVar5 = puVar5 + 1;
      }
    }
    local_38[param_3] = 0;
    if (local_30 < 2) {
      FString(param_2,param_1);
      if (puVar7 != (undefined2 *)0x0) {
        FMemory::Free(puVar7);
        return param_2;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 1) + -1;
      if (*(int *)(param_1 + 1) == 0) {
        iVar4 = iVar6;
      }
      if ((local_30 != 0) || (iVar3 = 1, iVar4 == 0)) {
        iVar3 = iVar6;
      }
      iVar6 = local_30;
      if (local_2c < iVar4 + iVar3 + local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
        iVar6 = local_30;
      }
      _Src = (void *)*param_1;
      puVar7 = local_38;
      iVar3 = iVar6;
      iVar2 = local_2c;
      if (iVar4 != 0) {
        local_30 = iVar6 + (uint)(iVar6 == 0) + iVar4;
        if (local_2c < local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar6);
        }
        iVar2 = local_2c;
        iVar3 = local_30;
        puVar7 = local_38;
        puVar5 = local_38 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0));
        ::_guard_xfg_dispatch_icall_nop(puVar5,_Src,(longlong)iVar4 * 2);
        puVar5[iVar4] = 0;
      }
      *param_2 = puVar7;
      *(int *)(param_2 + 1) = iVar3;
      *(int *)((longlong)param_2 + 0xc) = iVar2;
    }
    return param_2;
  }
  FString(param_2,param_1);
  return param_2;
}



// FUNCTION 141593920 LockFreeTagCounterHasOverflowed body=13 status=ok
// SIG undefined LockFreeTagCounterHasOverflowed(void)

void LockFreeTagCounterHasOverflowed(void)

{
  FUN_1416b1760(0x3a83126f);
  return;
}



// FUNCTION 141593930 FUN_141593930 body=2477 status=ok
// SIG undefined FUN_141593930(void)

bool FUN_141593930(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  wchar_t wVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t wVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  wchar_t *pwVar17;
  int iVar18;
  wchar_t *pwVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  wchar_t *pwVar23;
  longlong lVar24;
  bool bVar25;
  wchar_t *local_res10;
  wchar_t *local_res20;
  wchar_t *local_78;
  uint local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  uint local_50;
  undefined4 local_4c;
  
  local_70 = *(uint *)(param_2 + 1);
  lVar24 = (longlong)(int)local_70;
  pvVar2 = (void *)*param_2;
  local_78 = (wchar_t *)0x0;
  iVar4 = 0;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
    _guard_xfg_dispatch_icall_nop(local_78,pvVar2,lVar24 * 2);
  }
  local_50 = *(uint *)(param_1 + 1);
  lVar24 = (longlong)(int)local_50;
  pvVar2 = (void *)*param_1;
  local_res10 = (wchar_t *)0x0;
  local_58 = (wchar_t *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    local_res10 = local_58;
    _guard_xfg_dispatch_icall_nop(local_58,pvVar2,lVar24 * 2);
  }
  uVar16 = local_50;
  lVar24 = -1;
  do {
    lVar24 = lVar24 + 1;
  } while ((&DAT_144c9217c)[lVar24] != 0);
  iVar14 = (int)lVar24;
  if (iVar14 < 2) {
    iVar14 = 1;
  }
  iVar20 = local_70 - 1;
  if (local_70 == 0) {
    iVar20 = iVar4;
  }
  iVar20 = iVar20 - iVar14;
  lVar24 = (longlong)iVar20;
  if (-1 < iVar20) {
    pwVar6 = local_78 + lVar24;
    do {
      wVar7 = L'*';
      lVar5 = 0;
      pwVar19 = pwVar6;
      do {
        if (*pwVar19 != wVar7) break;
        wVar7 = (&DAT_144c9217e)[lVar5];
        lVar5 = lVar5 + 1;
        pwVar19 = pwVar19 + 1;
      } while (wVar7 != L'\0');
      if ((&DAT_144c9217c)[lVar5] == 0) goto LAB_141593a60;
      iVar20 = iVar20 + -1;
      pwVar6 = pwVar6 + -1;
      lVar24 = lVar24 + -1;
    } while (-1 < lVar24);
  }
  iVar20 = -1;
LAB_141593a60:
  lVar24 = -1;
  do {
    lVar24 = lVar24 + 1;
  } while ((&DAT_144c92194)[lVar24] != 0);
  iVar14 = (int)lVar24;
  if (iVar14 < 2) {
    iVar14 = 1;
  }
  iVar18 = local_70 - 1;
  if (local_70 == 0) {
    iVar18 = iVar4;
  }
  iVar18 = iVar18 - iVar14;
  lVar24 = (longlong)iVar18;
  if (-1 < iVar18) {
    pwVar6 = local_78 + lVar24;
    do {
      wVar7 = L'?';
      lVar5 = 0;
      pwVar19 = pwVar6;
      do {
        if (*pwVar19 != wVar7) break;
        wVar7 = (&DAT_144c92196)[lVar5];
        lVar5 = lVar5 + 1;
        pwVar19 = pwVar19 + 1;
      } while (wVar7 != L'\0');
      if ((&DAT_144c92194)[lVar5] == 0) goto LAB_141593adf;
      iVar18 = iVar18 + -1;
      pwVar6 = pwVar6 + -1;
      lVar24 = lVar24 + -1;
    } while (-1 < lVar24);
  }
  iVar18 = -1;
LAB_141593adf:
  if (iVar18 <= iVar20) {
    iVar18 = iVar20;
  }
  if (iVar18 == -1) {
    if (param_3 == 1) {
      pwVar6 = L"";
      if (local_70 != 0) {
        pwVar6 = local_78;
      }
      pwVar19 = L"";
      if (local_50 != 0) {
        pwVar19 = local_res10;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar19,pwVar6);
      bVar25 = iVar4 == 0;
    }
    else {
      pwVar6 = L"";
      if (local_70 != 0) {
        pwVar6 = local_78;
      }
      pwVar19 = L"";
      if (local_50 != 0) {
        pwVar19 = local_res10;
      }
      lVar24 = (longlong)pwVar6 - (longlong)pwVar19;
      do {
        wVar7 = *pwVar19;
        wVar1 = *(wchar_t *)((longlong)pwVar19 + lVar24);
        if (wVar7 != wVar1) break;
        pwVar19 = pwVar19 + 1;
      } while (wVar1 != L'\0');
      bVar25 = wVar7 == wVar1;
    }
    goto LAB_1415942ae;
  }
  iVar14 = local_70 - 1;
  if (local_70 == 0) {
    iVar14 = iVar4;
  }
  uVar21 = iVar18 + 1;
  if ((int)uVar21 < iVar14) {
    pwVar6 = (wchar_t *)0x0;
    uVar15 = iVar18 + 0x80000000;
    uVar10 = 0;
    uVar13 = local_70 - 1;
    if (local_70 == 0) {
      uVar13 = uVar10;
    }
    if (uVar21 < uVar13) {
      uVar13 = uVar21;
    }
    uVar11 = local_70 - 1;
    if (local_70 == 0) {
      uVar11 = uVar10;
    }
    uVar12 = uVar13;
    if ((uVar13 <= uVar15) && (uVar12 = uVar11, uVar15 < uVar11)) {
      uVar12 = uVar15;
    }
    local_68 = (wchar_t *)0x0;
    pwVar19 = L"";
    if (local_70 != 0) {
      pwVar19 = local_78;
    }
    iVar4 = uVar12 - uVar13;
    uVar15 = iVar4 + 1;
    if (iVar4 == 0) {
      uVar15 = uVar10;
    }
    local_60 = (ulonglong)uVar15;
    if (0 < (int)uVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      pwVar6 = local_68;
      uVar15 = (uint)local_60;
      if (0 < (int)(uint)local_60) {
        wcsncpy(local_68,pwVar19 + (int)uVar13,(longlong)iVar4);
        pwVar6[iVar4] = L'\0';
      }
    }
    cVar3 = FString::EndsWith(&local_58,&local_68,param_3);
    if (cVar3 != '\0') {
      if (local_70 == 0) {
        local_res20 = L"";
        uVar13 = 0;
      }
      else {
        uVar13 = local_70 - 1;
        local_res20 = local_78;
      }
      pwVar19 = (wchar_t *)0x0;
      uVar10 = 0;
      if ((-1 < (int)uVar21) && (uVar10 = uVar13, (int)uVar21 < (int)uVar13)) {
        uVar10 = uVar21;
      }
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      pwVar9 = (wchar_t *)(ulonglong)(uVar10 + 1);
      if (uVar10 == 0) {
        pwVar9 = pwVar19;
      }
      uVar21 = (uint)pwVar9;
      uVar22 = 0;
      local_50 = uVar21;
      if ((0 < (int)uVar21) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58), uVar22 = local_4c,
         uVar21 = local_50, pwVar19 = local_58, 0 < (int)local_50)) {
        wcsncpy(local_58,local_res20,(longlong)(int)uVar10);
        pwVar19[(int)uVar10] = L'\0';
      }
      if (local_78 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      pwVar9 = (wchar_t *)0x0;
      iVar14 = 0;
      iVar4 = uVar16 - 1;
      if (uVar16 == 0) {
        iVar4 = iVar14;
      }
      iVar20 = iVar14;
      if (uVar15 != 0) {
        iVar20 = uVar15 - 1;
      }
      iVar4 = iVar4 - iVar20;
      if (uVar16 == 0) {
        pwVar23 = L"";
      }
      else {
        iVar14 = uVar16 - 1;
        pwVar23 = local_res10;
      }
      if (iVar4 < 0) {
        iVar14 = 0;
      }
      else if (iVar4 < iVar14) {
        iVar14 = iVar4;
      }
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      pwVar17 = (wchar_t *)(ulonglong)(iVar14 + 1);
      if (iVar14 == 0) {
        pwVar17 = pwVar9;
      }
      uVar16 = (uint)pwVar17;
      local_78 = pwVar19;
      local_70 = uVar21;
      local_6c = uVar22;
      local_50 = uVar16;
      if ((0 < (int)uVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), uVar16 = local_50,
         pwVar9 = local_58, 0 < (int)local_50)) {
        wcsncpy(local_58,pwVar23,(longlong)iVar14);
        pwVar9[iVar14] = L'\0';
      }
      if (local_res10 != (wchar_t *)0x0) {
        FMemory::Free(local_res10);
      }
      local_res10 = pwVar9;
      if (pwVar6 != (wchar_t *)0x0) {
        FMemory::Free(pwVar6);
      }
      goto LAB_141593d91;
    }
    if (pwVar6 != (wchar_t *)0x0) {
      FMemory::Free(pwVar6);
      bVar25 = false;
      goto LAB_1415942ae;
    }
  }
  else {
LAB_141593d91:
    pwVar6 = L"";
    if (local_70 != 0) {
      pwVar6 = local_78;
    }
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar6,L"*");
    if (pwVar6 == (wchar_t *)0x0) {
      uVar21 = 0xffffffff;
    }
    else {
      pwVar19 = L"";
      if (local_70 != 0) {
        pwVar19 = local_78;
      }
      uVar21 = (uint)((longlong)pwVar6 - (longlong)pwVar19 >> 1);
    }
    pwVar6 = L"";
    if (local_70 != 0) {
      pwVar6 = local_78;
    }
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar6,L"?");
    if (pwVar6 == (wchar_t *)0x0) {
      uVar15 = 0xffffffff;
    }
    else {
      pwVar19 = L"";
      if (local_70 != 0) {
        pwVar19 = local_78;
      }
      uVar15 = (uint)((longlong)pwVar6 - (longlong)pwVar19 >> 1);
    }
    if ((int)uVar15 < 0) {
      uVar15 = 0x7fffffff;
    }
    if ((int)uVar21 < 0) {
      uVar21 = 0x7fffffff;
    }
    if ((int)uVar21 <= (int)uVar15) {
      uVar15 = uVar21;
    }
    if ((int)uVar15 < 1) {
LAB_141594094:
      pwVar6 = (wchar_t *)0x0;
      wVar7 = *local_78;
      iVar14 = 0;
      iVar4 = local_70 - 1;
      if (local_70 == 0) {
        iVar4 = iVar14;
      }
      if (local_70 == 0) {
        pwVar19 = L"";
      }
      else {
        iVar14 = local_70 - 1;
        pwVar19 = local_78;
      }
      iVar20 = 0;
      if ((-1 < iVar4 + -1) && (iVar20 = iVar14, iVar4 <= iVar14)) {
        iVar20 = iVar4 + -1;
      }
      local_58 = (wchar_t *)0x0;
      uVar21 = 0;
      local_4c = 0;
      pwVar19 = pwVar19 + ((longlong)iVar14 - (longlong)iVar20);
      if ((pwVar19 != (wchar_t *)0x0) && (*pwVar19 != L'\0')) {
        lVar24 = -1;
        do {
          lVar24 = lVar24 + 1;
        } while (pwVar19[lVar24] != L'\0');
        uVar15 = (int)lVar24 + 1;
        local_50 = uVar15;
        if (0 < (int)uVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        }
        uVar21 = local_50;
        pwVar6 = local_58;
        FGenericPlatformString::Memcpy(local_58,pwVar19,(longlong)(int)uVar15 * 2);
      }
      uVar22 = local_4c;
      if (local_78 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_78 = pwVar6;
      local_70 = uVar21;
      local_6c = uVar22;
      if ((wVar7 != L'*') && (wVar7 != L'?')) {
        bVar25 = false;
        goto LAB_1415942ae;
      }
      if (((uVar21 == 0) || (uVar21 == 1)) &&
         (((wVar7 == L'*' || (uVar16 == 0)) || ((int)(uVar16 - 1) < 2)))) {
LAB_1415942a8:
        bVar25 = true;
        goto LAB_1415942ae;
      }
      iVar14 = 0;
      iVar4 = uVar16 - 1;
      if (uVar16 == 0) {
        iVar4 = 0;
      }
      iVar20 = 0x7fffffff;
      if (wVar7 == L'?') {
        iVar20 = 1;
      }
      if (iVar4 <= iVar20) {
        iVar20 = iVar4;
      }
      if (-1 < iVar20) {
        do {
          iVar18 = 0;
          iVar4 = uVar16 - 1;
          if (uVar16 == 0) {
            iVar4 = iVar18;
          }
          iVar4 = iVar4 - iVar14;
          if (uVar16 == 0) {
            pwVar6 = L"";
            iVar8 = iVar18;
          }
          else {
            pwVar6 = local_res10;
            iVar8 = uVar16 - 1;
          }
          if ((-1 < iVar4) && (iVar18 = iVar8, iVar4 < iVar8)) {
            iVar18 = iVar4;
          }
          local_60 = 0;
          pwVar6 = pwVar6 + ((longlong)iVar8 - (longlong)iVar18);
          local_68 = (wchar_t *)0x0;
          if ((pwVar6 != (wchar_t *)0x0) && (*pwVar6 != L'\0')) {
            lVar24 = -1;
            do {
              lVar5 = lVar24 + 1;
              lVar24 = lVar24 + 1;
            } while (pwVar6[lVar5] != L'\0');
            uVar21 = (int)lVar24 + 1;
            local_60 = (ulonglong)uVar21;
            if (0 < (int)uVar21) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
            }
            FGenericPlatformString::Memcpy(local_68,pwVar6,(longlong)(int)uVar21 * 2);
          }
          cVar3 = FUN_141593930(&local_68,&local_78,param_3);
          if (local_68 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          if (cVar3 != '\0') goto LAB_1415942a8;
          iVar14 = iVar14 + 1;
        } while (iVar14 <= iVar20);
        bVar25 = false;
        goto LAB_1415942ae;
      }
    }
    else {
      pwVar6 = (wchar_t *)0x0;
      uVar21 = 0;
      if (local_70 == 0) {
        pwVar19 = L"";
      }
      else {
        uVar21 = local_70 - 1;
        pwVar19 = local_78;
      }
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      if ((int)uVar15 < (int)uVar21) {
        uVar21 = uVar15;
      }
      uVar13 = uVar21 + 1;
      if (uVar21 == 0) {
        uVar13 = 0;
      }
      local_50 = uVar13;
      if ((0 < (int)uVar13) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), uVar13 = local_50,
         pwVar6 = local_58, 0 < (int)local_50)) {
        wcsncpy(local_58,pwVar19,(longlong)(int)uVar21);
        pwVar6[(int)uVar21] = L'\0';
      }
      if (param_3 == 1) {
        if ((uVar13 != 0) && (0 < (int)(uVar13 - 1))) {
          pwVar19 = L"";
          if (uVar16 != 0) {
            pwVar19 = local_res10;
          }
          iVar4 = _wcsnicmp(pwVar19,pwVar6,(longlong)(int)(uVar13 - 1));
joined_r0x000141593efe:
          if (iVar4 == 0) {
            uVar13 = uVar15 + 0x7fffffff;
            uVar21 = local_70 - 1;
            if (local_70 == 0) {
              uVar21 = 0;
            }
            uVar10 = local_70 - 1;
            if (uVar15 < uVar21) {
              uVar21 = uVar15;
            }
            if (local_70 == 0) {
              uVar10 = 0;
            }
            uVar11 = uVar21;
            if ((uVar21 <= uVar13) && (uVar11 = uVar10, uVar13 < uVar10)) {
              uVar11 = uVar13;
            }
            local_68 = (wchar_t *)0x0;
            pwVar19 = L"";
            if (local_70 != 0) {
              pwVar19 = local_78;
            }
            iVar4 = uVar11 - uVar21;
            uVar10 = iVar4 + 1;
            if (iVar4 == 0) {
              uVar10 = 0;
            }
            local_60 = (ulonglong)uVar10;
            if (0 < (int)uVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
              uVar10 = (uint)local_60;
              if (0 < (int)(uint)local_60) {
                wcsncpy(local_68,pwVar19 + (int)uVar21,(longlong)iVar4);
                local_68[iVar4] = L'\0';
              }
            }
            if (local_78 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            pwVar19 = (wchar_t *)0x0;
            local_6c = local_60._4_4_;
            uVar21 = uVar16 - 1;
            if (uVar16 == 0) {
              uVar21 = 0;
            }
            if (uVar15 < uVar21) {
              uVar21 = uVar15;
            }
            uVar15 = uVar16 - 1;
            if (uVar16 == 0) {
              uVar15 = 0;
            }
            uVar11 = uVar21;
            if ((uVar21 <= uVar13) && (uVar11 = uVar15, uVar13 < uVar15)) {
              uVar11 = uVar13;
            }
            local_58 = (wchar_t *)0x0;
            local_4c = 0;
            pwVar9 = L"";
            if (uVar16 != 0) {
              pwVar9 = local_res10;
            }
            iVar4 = uVar11 - uVar21;
            pwVar23 = (wchar_t *)(ulonglong)(iVar4 + 1);
            if (iVar4 == 0) {
              pwVar23 = pwVar19;
            }
            uVar16 = (uint)pwVar23;
            local_78 = local_68;
            local_70 = uVar10;
            local_50 = uVar16;
            if ((0 < (int)uVar16) &&
               (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), uVar16 = local_50,
               pwVar19 = local_58, 0 < (int)local_50)) {
              wcsncpy(local_58,pwVar9 + (int)uVar21,(longlong)iVar4);
              pwVar19[iVar4] = L'\0';
            }
            if (local_res10 != (wchar_t *)0x0) {
              FMemory::Free(local_res10);
            }
            local_res10 = pwVar19;
            if (pwVar6 != (wchar_t *)0x0) {
              FMemory::Free(pwVar6);
            }
            goto LAB_141594094;
          }
        }
      }
      else if ((uVar13 != 0) && (0 < (int)(uVar13 - 1))) {
        pwVar19 = L"";
        if (uVar16 != 0) {
          pwVar19 = local_res10;
        }
        iVar4 = wcsncmp(pwVar19,pwVar6,(longlong)(int)(uVar13 - 1));
        goto joined_r0x000141593efe;
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FMemory::Free(pwVar6);
      }
    }
  }
  bVar25 = false;
LAB_1415942ae:
  if (local_res10 != (wchar_t *)0x0) {
    FMemory::Free(local_res10);
  }
  if (local_78 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return bVar25;
}



// FUNCTION 1415942e0 FUN_1415942e0 body=609 status=ok
// SIG undefined FUN_1415942e0(void)

undefined4
FUN_1415942e0(longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,char param_5)

{
  short *psVar1;
  longlong lVar2;
  wchar_t *_Dest;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  FUN_140d4b2c0(param_2,0);
  iVar5 = 0;
  lVar2 = *param_1;
  iVar9 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    iVar9 = 0;
  }
  if (lVar2 == 0) {
    return (int)param_2[1];
  }
  lVar10 = -1;
  iVar8 = iVar5;
LAB_141594351:
  do {
    iVar7 = 0;
    iVar3 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar3 = 0;
    }
    if (iVar3 <= iVar5) {
      if ((param_5 == '\0') || (iVar9 != iVar8)) {
        iVar9 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
        }
        puVar6 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          psVar1 = (short *)(lVar2 + (longlong)iVar8 * 2);
          if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
            do {
              lVar10 = lVar10 + 1;
            } while (psVar1[lVar10] != 0);
            iVar9 = (int)lVar10 + 1;
            *(int *)(puVar6 + 1) = iVar9;
            if (0 < iVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar6,0);
            }
            FGenericPlatformString::Memcpy(*puVar6,psVar1,(longlong)iVar9 * 2);
          }
        }
      }
      return (int)param_2[1];
    }
    if (0 < param_4) {
      puVar6 = param_3;
      do {
        lVar4 = lVar10;
        do {
          lVar4 = lVar4 + 1;
        } while (((wchar_t *)*puVar6)[lVar4] != L'\0');
        iVar3 = wcsncmp((wchar_t *)(lVar2 + (longlong)iVar5 * 2),(wchar_t *)*puVar6,
                        (longlong)(int)lVar4);
        if (iVar3 == 0) {
          if (iVar5 != -1) {
            if ((param_5 == '\0') || (iVar5 != iVar8)) {
              iVar3 = (int)param_2[1];
              *(int *)(param_2 + 1) = iVar3 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
              }
              puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
              if (puVar6 != (undefined8 *)0x0) {
                iVar7 = iVar5 - iVar8;
                *puVar6 = 0;
                *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
                iVar3 = iVar7 + 1;
                if (iVar7 == 0) {
                  iVar3 = 0;
                }
                *(int *)(puVar6 + 1) = iVar3;
                if ((0 < iVar3) &&
                   (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar6,0),
                   0 < *(int *)(puVar6 + 1))) {
                  _Dest = (wchar_t *)*puVar6;
                  wcsncpy(_Dest,(wchar_t *)(lVar2 + (longlong)iVar8 * 2),(longlong)iVar7);
                  _Dest[iVar7] = L'\0';
                }
              }
            }
            iVar5 = (int)lVar4 + iVar5;
            iVar8 = iVar5;
            goto LAB_141594351;
          }
          break;
        }
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar7 < param_4);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



// FUNCTION 141594550 FUN_141594550 body=451 status=ok
// SIG undefined FUN_141594550(void)

undefined4 FUN_141594550(undefined8 *param_1,longlong *param_2,wchar_t *param_3,char param_4)

{
  wchar_t *_Dest;
  int iVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *_Str;
  undefined8 *puVar5;
  int iVar6;
  
  FUN_140d4b2c0(param_2,0);
  _Str = (wchar_t *)*param_1;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (param_3[lVar3] != L'\0');
  if (((_Str != (wchar_t *)0x0) && (*_Str != L'\0')) && ((int)lVar3 != 0)) {
    pwVar2 = _guard_xfg_dispatch_icall_nop(_Str,param_3);
    if (pwVar2 != (wchar_t *)0x0) {
      do {
        lVar4 = (longlong)pwVar2 - (longlong)_Str >> 1;
        if ((param_4 == '\0') || (lVar4 != 0)) {
          iVar6 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar6 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar6);
          }
          iVar1 = (int)lVar4;
          puVar5 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_2);
          iVar6 = iVar1 + 1;
          if (iVar1 == 0) {
            iVar6 = 0;
          }
          *puVar5 = 0;
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *(int *)(puVar5 + 1) = iVar6;
          if ((0 < iVar6) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar5,0), 0 < *(int *)(puVar5 + 1))) {
            _Dest = (wchar_t *)*puVar5;
            wcsncpy(_Dest,_Str,(longlong)iVar1);
            _Dest[iVar1] = L'\0';
          }
        }
        _Str = pwVar2 + (int)lVar3;
        pwVar2 = _guard_xfg_dispatch_icall_nop(_Str,param_3);
      } while (pwVar2 != (wchar_t *)0x0);
    }
    lVar3 = -1;
    if ((param_4 == '\0') || (*_Str != L'\0')) {
      iVar6 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar6);
      }
      puVar5 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_2);
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((_Str != (wchar_t *)0x0) && (*_Str != L'\0')) {
        do {
          lVar3 = lVar3 + 1;
        } while (_Str[lVar3] != L'\0');
        iVar6 = (int)lVar3 + 1;
        *(int *)(puVar5 + 1) = iVar6;
        if (0 < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar5,0);
        }
        FGenericPlatformString::Memcpy(*puVar5,_Str,(longlong)iVar6 * 2);
      }
    }
  }
  return (int)param_2[1];
}



// FUNCTION 141594720 ParseIntoArrayLines body=32 status=ok
// SIG undefined ParseIntoArrayLines(void)

void FString::ParseIntoArrayLines(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_1415942e0(param_1,param_2,&PTR_DAT_1464a8280,3,param_3);
  return;
}



// FUNCTION 141594740 ParseIntoArrayWS body=144 status=ok
// SIG undefined ParseIntoArrayWS(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FString::ParseIntoArrayWS
               (undefined8 param_1,undefined8 param_2,short *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  short *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38 = &DAT_144c921a0;
  local_30 = &DAT_144c921a4;
  local_28 = &DAT_144c921a8;
  local_20 = &DAT_144c921ac;
  local_18 = (short *)&DAT_144c921b0;
  uVar1 = 4;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    uVar1 = 5;
    local_18 = param_3;
  }
  local_48 = param_4;
  FUN_1415942e0(param_1,param_2,&local_38,uVar1);
  return;
}



// FUNCTION 1415947d0 PathAppend body=268 status=ok
// SIG undefined PathAppend(void)

void FString::PathAppend(longlong *param_1,short *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)param_1[1];
  lVar3 = (longlong)iVar2;
  if (param_3 == 0) {
    if (iVar2 < 2) {
      return;
    }
    sVar1 = *(short *)(*param_1 + -4 + lVar3 * 2);
    if (sVar1 == 0x2f) {
      return;
    }
    if (sVar1 == 0x5c) {
      return;
    }
    *(undefined2 *)(*param_1 + -2 + lVar3 * 2) = 0x2f;
    goto LAB_1415948aa;
  }
  if (0 < iVar2) {
    if (1 < iVar2) {
      sVar1 = *(short *)(*param_1 + -4 + lVar3 * 2);
      if (((sVar1 != 0x2f) && (sVar1 != 0x5c)) && (*param_2 != 0x2f)) {
        *(undefined2 *)(*param_1 + -2 + lVar3 * 2) = 0x2f;
        goto LAB_141594865;
      }
    }
    iVar2 = iVar2 + -1;
    *(int *)(param_1 + 1) = iVar2;
  }
LAB_141594865:
  if (*(int *)((longlong)param_1 + 0xc) < param_3 + 1 + iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1);
  }
  iVar2 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar2 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + param_3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + (longlong)iVar2 * 2),param_2,(longlong)param_3 * 2);
LAB_1415948aa:
  lVar3 = param_1[1];
  iVar2 = (int)lVar3 + 1;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
  }
  *(undefined2 *)(*param_1 + (longlong)(int)lVar3 * 2) = 0;
  return;
}



// FUNCTION 1415948e0 Pop body=421 status=ok
// SIG undefined Pop(void)

ulonglong FLockFreePointerFIFOBase<FTestStruct,1,1>::Pop(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  do {
    while( true ) {
      do {
        LOCK();
        uVar5 = *(ulonglong *)(param_1 + 8);
        if (uVar5 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar5 = 0;
        }
        UNLOCK();
        LOCK();
        uVar1 = *(ulonglong *)(param_1 + 0x18);
        if (uVar1 == 0) {
          *(ulonglong *)(param_1 + 0x18) = 0;
          uVar1 = 0;
        }
        UNLOCK();
        uVar7 = (uint)uVar5 & 0x3ffffff;
        puVar3 = (ulonglong *)0x0;
        if ((uVar5 & 0x3ffffff) != 0) {
          puVar3 = (ulonglong *)
                   ((&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)((uint)uVar5 & 0x3fff) * 0x18);
        }
        LOCK();
        uVar6 = *puVar3;
        if (uVar6 == 0) {
          *puVar3 = 0;
          uVar6 = 0;
        }
        UNLOCK();
        LOCK();
        uVar2 = *(ulonglong *)(param_1 + 8);
        if (uVar2 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar2 = 0;
        }
        UNLOCK();
      } while (uVar5 != uVar2);
      uVar4 = (uint)uVar6;
      if (uVar7 != ((uint)uVar1 & 0x3ffffff)) break;
      if ((uVar6 & 0x3ffffff) == 0) {
        return 0;
      }
      uVar5 = (uVar1 & 0xfffffffffc000000) + 0x4000000;
      if (uVar5 < (uVar1 & 0xfffffffffc000000)) {
        FUN_1416b1760(0x3a83126f);
      }
      LOCK();
      if (uVar1 == *(ulonglong *)(param_1 + 0x18)) {
        *(ulonglong *)(param_1 + 0x18) = uVar4 & 0x3ffffff | uVar5;
      }
      UNLOCK();
    }
    puVar3 = (ulonglong *)0x0;
    if ((uVar6 & 0x3ffffff) != 0) {
      puVar3 = (ulonglong *)
               ((&DAT_1468a81f8)[(uVar4 & 0x3ffffff) >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18);
    }
    uVar1 = puVar3[1];
    uVar6 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar6 < (uVar5 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    LOCK();
    bVar8 = uVar5 == *(ulonglong *)(param_1 + 8);
    if (bVar8) {
      *(ulonglong *)(param_1 + 8) = uVar4 & 0x3ffffff | uVar6;
    }
    UNLOCK();
  } while (!bVar8);
  FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
  return uVar1;
}



// FUNCTION 141594a90 Pop body=421 status=ok
// SIG undefined Pop(void)

ulonglong FLockFreePointerFIFOBase<FTestStruct,1,16>::Pop(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  do {
    while( true ) {
      do {
        LOCK();
        uVar5 = *(ulonglong *)(param_1 + 8);
        if (uVar5 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar5 = 0;
        }
        UNLOCK();
        LOCK();
        uVar1 = *(ulonglong *)(param_1 + 0x18);
        if (uVar1 == 0) {
          *(ulonglong *)(param_1 + 0x18) = 0;
          uVar1 = 0;
        }
        UNLOCK();
        uVar7 = (uint)uVar5 & 0x3ffffff;
        puVar3 = (ulonglong *)0x0;
        if ((uVar5 & 0x3ffffff) != 0) {
          puVar3 = (ulonglong *)
                   ((&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)((uint)uVar5 & 0x3fff) * 0x18);
        }
        LOCK();
        uVar6 = *puVar3;
        if (uVar6 == 0) {
          *puVar3 = 0;
          uVar6 = 0;
        }
        UNLOCK();
        LOCK();
        uVar2 = *(ulonglong *)(param_1 + 8);
        if (uVar2 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar2 = 0;
        }
        UNLOCK();
      } while (uVar5 != uVar2);
      uVar4 = (uint)uVar6;
      if (uVar7 != ((uint)uVar1 & 0x3ffffff)) break;
      if ((uVar6 & 0x3ffffff) == 0) {
        return 0;
      }
      uVar5 = (uVar1 & 0xfffffffffc000000) + 0x40000000;
      if (uVar5 < (uVar1 & 0xfffffffffc000000)) {
        FUN_1416b1760(0x3a83126f);
      }
      LOCK();
      if (uVar1 == *(ulonglong *)(param_1 + 0x18)) {
        *(ulonglong *)(param_1 + 0x18) = uVar4 & 0x3ffffff | uVar5;
      }
      UNLOCK();
    }
    puVar3 = (ulonglong *)0x0;
    if ((uVar6 & 0x3ffffff) != 0) {
      puVar3 = (ulonglong *)
               ((&DAT_1468a81f8)[(uVar4 & 0x3ffffff) >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18);
    }
    uVar1 = puVar3[1];
    uVar6 = (uVar5 & 0xfffffffffc000000) + 0x40000000;
    if (uVar6 < (uVar5 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    LOCK();
    bVar8 = uVar5 == *(ulonglong *)(param_1 + 8);
    if (bVar8) {
      *(ulonglong *)(param_1 + 8) = uVar4 & 0x3ffffff | uVar6;
    }
    UNLOCK();
  } while (!bVar8);
  FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
  return uVar1;
}



// FUNCTION 141594c40 FUN_141594c40 body=245 status=ok
// SIG undefined FUN_141594c40(void)

uint FUN_141594c40(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  LOCK();
  uVar2 = *(ulonglong *)(param_1 + 0x80);
  if (uVar2 == 0) {
    *(ulonglong *)(param_1 + 0x80) = 0;
    uVar2 = 0;
  }
  UNLOCK();
  uVar5 = (uint)uVar2;
  while( true ) {
    uVar1 = uVar5 & 0x3ffffff;
    if ((uVar2 & 0x3ffffff) == 0) {
      return uVar1;
    }
    uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 < (uVar2 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    lVar3 = 0;
    if (uVar1 != 0) {
      lVar3 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
    }
    LOCK();
    bVar6 = uVar2 == *(ulonglong *)(param_1 + 0x80);
    if (bVar6) {
      *(ulonglong *)(param_1 + 0x80) = *(uint *)(lVar3 + 0x10) | uVar4;
    }
    UNLOCK();
    if (bVar6) break;
    LOCK();
    uVar2 = *(ulonglong *)(param_1 + 0x80);
    if (uVar2 == 0) {
      *(ulonglong *)(param_1 + 0x80) = 0;
      uVar2 = 0;
    }
    UNLOCK();
    uVar5 = (uint)uVar2;
  }
  *(undefined4 *)(lVar3 + 0x10) = 0;
  return uVar1;
}



// FUNCTION 141594d40 FUN_141594d40 body=742 status=ok
// SIG undefined FUN_141594d40(void)

ulonglong FUN_141594d40(longlong param_1,int param_2,char param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  
  do {
    iVar9 = 0;
    LOCK();
    uVar4 = *(ulonglong *)(param_1 + 0x4b0);
    if (uVar4 == 0) {
      *(ulonglong *)(param_1 + 0x4b0) = 0;
      uVar4 = 0;
    }
    UNLOCK();
    do {
      lVar10 = (longlong)iVar9 * 400 + param_1;
      do {
        while( true ) {
          do {
            puVar3 = (ulonglong *)0x0;
            LOCK();
            uVar7 = *(ulonglong *)(lVar10 + 0x80);
            if (uVar7 == 0) {
              *(ulonglong *)(lVar10 + 0x80) = 0;
              uVar7 = 0;
            }
            UNLOCK();
            LOCK();
            uVar1 = *(ulonglong *)(lVar10 + 0x108);
            if (uVar1 == 0) {
              *(ulonglong *)(lVar10 + 0x108) = 0;
              uVar1 = 0;
            }
            UNLOCK();
            uVar11 = (uint)uVar7 & 0x3ffffff;
            puVar5 = puVar3;
            if ((uVar7 & 0x3ffffff) != 0) {
              puVar5 = (ulonglong *)
                       ((&DAT_1468a81f8)[uVar11 >> 0xe] + (ulonglong)((uint)uVar7 & 0x3fff) * 0x18);
            }
            LOCK();
            uVar8 = *puVar5;
            if (uVar8 == 0) {
              *puVar5 = 0;
              uVar8 = 0;
            }
            UNLOCK();
            LOCK();
            uVar2 = *(ulonglong *)(lVar10 + 0x80);
            if (uVar2 == 0) {
              *(ulonglong *)(lVar10 + 0x80) = 0;
              uVar2 = 0;
            }
            UNLOCK();
          } while (uVar7 != uVar2);
          uVar6 = (uint)uVar8;
          if (uVar11 != ((uint)uVar1 & 0x3ffffff)) break;
          if ((uVar8 & 0x3ffffff) == 0) goto LAB_141594f13;
          uVar7 = (uVar1 & 0xfffffffffc000000) + 0x4000000;
          if (uVar7 < (uVar1 & 0xfffffffffc000000)) {
            FUN_1416b1760(0x3a83126f);
          }
          LOCK();
          if (uVar1 == *(ulonglong *)(lVar10 + 0x108)) {
            *(ulonglong *)(lVar10 + 0x108) = uVar6 & 0x3ffffff | uVar7;
          }
          UNLOCK();
        }
        if ((uVar8 & 0x3ffffff) != 0) {
          puVar3 = (ulonglong *)
                   ((&DAT_1468a81f8)[(uVar6 & 0x3ffffff) >> 0xe] +
                   (ulonglong)(uVar6 & 0x3fff) * 0x18);
        }
        uVar1 = puVar3[1];
        uVar8 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
        if (uVar8 < (uVar7 & 0xfffffffffc000000)) {
          FUN_1416b1760(0x3a83126f);
        }
        LOCK();
        bVar12 = uVar7 == *(ulonglong *)(lVar10 + 0x80);
        if (bVar12) {
          *(ulonglong *)(lVar10 + 0x80) = uVar6 & 0x3ffffff | uVar8;
        }
        UNLOCK();
      } while (!bVar12);
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar11);
      if (uVar1 != 0) {
        while( true ) {
          uVar7 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
          if (uVar7 < (uVar4 & 0xfffffffffc000000)) {
            FUN_1416b1760(0x3a83126f);
          }
          LOCK();
          bVar12 = uVar4 == *(ulonglong *)(param_1 + 0x4b0);
          if (bVar12) {
            *(ulonglong *)(param_1 + 0x4b0) = (uint)uVar4 & 0x3ffffff | uVar7;
          }
          UNLOCK();
          if (bVar12) break;
          LOCK();
          uVar4 = *(ulonglong *)(param_1 + 0x4b0);
          if (uVar4 == 0) {
            *(ulonglong *)(param_1 + 0x4b0) = 0;
            uVar4 = 0;
          }
          UNLOCK();
        }
        return uVar1;
      }
LAB_141594f13:
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    if (param_3 == '\0') {
      return 0;
    }
    uVar7 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
    if (uVar7 < (uVar4 & 0xfffffffffc000000)) {
      FUN_1416b1760(0x3a83126f);
    }
    LOCK();
    bVar12 = uVar4 == *(ulonglong *)(param_1 + 0x4b0);
    if (bVar12) {
      *(ulonglong *)(param_1 + 0x4b0) =
           ((uint)uVar4 & 0x3ffffff | (uint)(1L << ((longlong)param_2 & 0x3fU))) | uVar7;
    }
    UNLOCK();
    if (bVar12) {
      return 0;
    }
  } while( true );
}


