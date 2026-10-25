// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14137b6f0 FUN_14137b6f0 body=725 status=ok
// SIG undefined FUN_14137b6f0(void)

void FUN_14137b6f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x838) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x7d8);
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
  plVar4 = *(longlong **)(param_1 + 0x7c0);
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
  plVar4 = *(longlong **)(param_1 + 0x7a8);
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
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x680) = &PTR_FUN_14483a858;
  FUN_140e9c5f0(param_1);
  return;
}



// FUNCTION 14137ba30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FAnimNode_RigidBody::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14137b0a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x830);
  }
  return param_1;
}



// FUNCTION 14137ba70 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSceneRenderTargets::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14137b350();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2b0);
  }
  return param_1;
}



// FUNCTION 14137bab0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 USteamNetDriver::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14137b520();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x770);
  }
  return param_1;
}



// FUNCTION 14137baf0 FUN_14137baf0 body=198 status=ok
// SIG undefined FUN_14137baf0(void)

longlong FUN_14137baf0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14137bbc0 FUN_14137bbc0 body=107 status=ok
// SIG undefined FUN_14137bbc0(void)

longlong FUN_14137bbc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x700) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x740);
  }
  return param_1;
}



// FUNCTION 14137bc30 FUN_14137bc30 body=307 status=ok
// SIG undefined FUN_14137bc30(void)

longlong FUN_14137bc30(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x2a0);
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
  plVar4 = *(longlong **)(param_1 + 0x178);
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
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 14137bd70 FUN_14137bd70 body=218 status=ok
// SIG undefined FUN_14137bd70(void)

longlong FUN_14137bd70(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xf8);
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0xf0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141330100(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 14137be50 FUN_14137be50 body=164 status=ok
// SIG undefined FUN_14137be50(void)

longlong FUN_14137be50(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 800);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 14137bf00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 Audio::FEpicSynth1::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e9c5f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6b0);
  }
  return param_1;
}



// FUNCTION 14137bf40 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UTemplateSequencePlayer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14137b6f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x890);
  }
  return param_1;
}



// FUNCTION 14137bf80 FUN_14137bf80 body=52 status=ok
// SIG undefined FUN_14137bf80(void)

undefined8 FUN_14137bf80(undefined8 param_1,ulonglong param_2)

{
  FUN_141320cb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 14137bff0 FUN_14137bff0 body=81 status=ok
// SIG undefined FUN_14137bff0(void)

void FUN_14137bff0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x80);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x68) = 0;
  return;
}



// FUNCTION 14137c070 FUN_14137c070 body=171 status=ok
// SIG undefined FUN_14137c070(void)

undefined8 FUN_14137c070(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined1 *)(param_2 + 0x18);
    do {
      FText::operator=(puVar5 + -0x18,puVar5 + param_3 + -0x18);
      *puVar5 = puVar5[param_3];
      *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar5 + param_3 + 0x10);
      puVar1 = (undefined4 *)(puVar5 + param_3 + 0x18);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar5 + 0x18) = *puVar1;
      *(undefined4 *)(puVar5 + 0x1c) = uVar2;
      *(undefined4 *)(puVar5 + 0x20) = uVar3;
      *(undefined4 *)(puVar5 + 0x24) = uVar4;
      *(undefined4 *)(puVar5 + 0x28) = *(undefined4 *)(puVar5 + param_3 + 0x28);
      *(undefined4 *)(puVar5 + 0x2c) = *(undefined4 *)(puVar5 + param_3 + 0x2c);
      *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(puVar5 + param_3 + 0x30);
      *(undefined8 *)(puVar5 + 0x38) = *(undefined8 *)(puVar5 + param_3 + 0x38);
      puVar5[0x40] = puVar5[param_3 + 0x40];
      puVar5[0x41] = puVar5[param_3 + 0x41];
      puVar5[0x42] = puVar5[param_3 + 0x42];
      puVar5 = puVar5 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14137c120 FUN_14137c120 body=325 status=ok
// SIG undefined FUN_14137c120(void)

undefined8 FUN_14137c120(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  
  if (param_4 != 0) {
    puVar10 = (undefined8 *)(param_3 + 0x10);
    do {
      *param_2 = *(undefined4 *)(puVar10 + -2);
      puVar1 = (undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_2 + 2) = puVar10[-1];
      if (puVar1 != puVar10) {
        plVar9 = (longlong *)*puVar1;
        for (iVar8 = param_2[6]; iVar8 != 0; iVar8 = iVar8 + -1) {
          plVar6 = (longlong *)plVar9[5];
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar6 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar3 = (int *)((longlong)plVar6 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          if (plVar9[2] != 0) {
            FMemory::Free();
          }
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 8;
        }
        FUN_140fe2130(puVar1,*puVar10,*(undefined4 *)(puVar10 + 1),param_2[7],0);
      }
      *(undefined8 *)(param_2 + 8) = puVar10[2];
      param_2[10] = *(undefined4 *)(puVar10 + 3);
      *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)((longlong)puVar10 + 0x1c);
      puVar4 = (undefined1 *)((longlong)puVar10 + 0x1d);
      puVar10 = puVar10 + 6;
      *(undefined1 *)((longlong)param_2 + 0x2d) = *puVar4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14137c270 FUN_14137c270 body=382 status=ok
// SIG undefined FUN_14137c270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14137c270(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_4 != 0) {
    plVar6 = (longlong *)(param_3 + 8);
    do {
      plVar3 = (longlong *)*plVar6;
      lVar4 = plVar6[-1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
      }
      local_68 = lVar4;
      plStack_60 = plVar3;
      if (&local_68 != param_2) {
        local_68 = *param_2;
        plStack_60 = (longlong *)param_2[1];
        *param_2 = lVar4;
        param_2[1] = (longlong)plVar3;
        local_48 = lVar4;
        plStack_40 = plVar3;
      }
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_60 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
      plVar5 = (longlong *)plVar6[2];
      plVar3 = param_2 + 2;
      lVar4 = plVar6[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
      }
      local_58 = lVar4;
      plStack_50 = plVar5;
      if (&local_58 != plVar3) {
        local_58 = *plVar3;
        plStack_50 = (longlong *)param_2[3];
        *plVar3 = lVar4;
        param_2[3] = (longlong)plVar5;
        local_38 = lVar4;
        plStack_30 = plVar5;
      }
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_50 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
      FUN_141337f90(param_2 + 4,plVar6 + 3);
      FUN_141337f90(param_2 + 7,plVar6 + 6);
      FUN_141337f90(param_2 + 10,plVar6 + 9);
      FUN_141337f90(param_2 + 0xd,plVar6 + 0xc);
      plVar6 = plVar6 + 0x10;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14137c440 FUN_14137c440 body=88 status=ok
// SIG undefined FUN_14137c440(void)

void FUN_14137c440(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined ***)(param_2 + 0x20) = &PTR_FUN_1441d26b8;
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



// FUNCTION 14137c4c0 FUN_14137c4c0 body=55 status=ok
// SIG undefined FUN_14137c4c0(void)

void FUN_14137c4c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146885570 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146885570 = GetStaticEnum(FUN_14137ca10,uVar1,L"EDLCMenuItemUsability");
  }
  return;
}



// FUNCTION 14137c500 FUN_14137c500 body=55 status=ok
// SIG undefined FUN_14137c500(void)

void FUN_14137c500(void)

{
  undefined8 uVar1;
  
  if (DAT_146885558 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146885558 = GetStaticEnum(FUN_14137ca40,uVar1,L"EGFxMissionTrackerAnimationType");
  }
  return;
}



// FUNCTION 14137c540 FUN_14137c540 body=55 status=ok
// SIG undefined FUN_14137c540(void)

void FUN_14137c540(void)

{
  undefined8 uVar1;
  
  if (DAT_146885568 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146885568 = GetStaticEnum(FUN_14137ca70,uVar1,L"ENameplateStyle");
  }
  return;
}



// FUNCTION 14137c580 FUN_14137c580 body=55 status=ok
// SIG undefined FUN_14137c580(void)

void FUN_14137c580(void)

{
  undefined8 uVar1;
  
  if (DAT_146885560 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146885560 = GetStaticEnum(FUN_14137caa0,uVar1,L"ETargetedNameplateState");
  }
  return;
}



// FUNCTION 14137c5c0 FUN_14137c5c0 body=6 status=ok
// SIG undefined FUN_14137c5c0(void)

undefined8 FUN_14137c5c0(void)

{
  return 0x56882a2c;
}



// FUNCTION 14137c5d0 FUN_14137c5d0 body=6 status=ok
// SIG undefined FUN_14137c5d0(void)

undefined8 FUN_14137c5d0(void)

{
  return 0x8903bc3f;
}



// FUNCTION 14137c5e0 FUN_14137c5e0 body=6 status=ok
// SIG undefined FUN_14137c5e0(void)

undefined8 FUN_14137c5e0(void)

{
  return 0x1b93d2bb;
}



// FUNCTION 14137c5f0 FUN_14137c5f0 body=6 status=ok
// SIG undefined FUN_14137c5f0(void)

undefined8 FUN_14137c5f0(void)

{
  return 0xeac668f8;
}



// FUNCTION 14137c620 FUN_14137c620 body=34 status=ok
// SIG undefined FUN_14137c620(void)

void FUN_14137c620(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141379110();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_extRewardPanelFadeOutFinished_1448fbbd0,6);
  return;
}



// FUNCTION 14137c650 FUN_14137c650 body=34 status=ok
// SIG undefined FUN_14137c650(void)

void FUN_14137c650(void)

{
  undefined8 uVar1;
  
  uVar1 = UCheckBox::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_extOnIntroComplete_1448fc598,3);
  return;
}



// FUNCTION 14137c680 FUN_14137c680 body=34 status=ok
// SIG undefined FUN_14137c680(void)

void FUN_14137c680(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGButton::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnLANBrowserClicked_1448fccb0,9);
  return;
}



// FUNCTION 14137c6b0 FUN_14137c6b0 body=34 status=ok
// SIG undefined FUN_14137c6b0(void)

void FUN_14137c6b0(void)

{
  undefined8 uVar1;
  
  uVar1 = UXGameInstance::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AnimateBar_1448fd190,9);
  return;
}



// FUNCTION 14137c6e0 FUN_14137c6e0 body=34 status=ok
// SIG undefined FUN_14137c6e0(void)

void FUN_14137c6e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413793a0();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_OnBadassEventCooldownChanged_1448fd500,0x11);
  return;
}



// FUNCTION 14137c710 FUN_14137c710 body=34 status=ok
// SIG undefined FUN_14137c710(void)

void FUN_14137c710(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141379b60();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnDLCListSelectionChanged_1448fe0e0,2);
  return;
}



// FUNCTION 14137c740 FUN_14137c740 body=34 status=ok
// SIG undefined FUN_14137c740(void)

void FUN_14137c740(void)

{
  undefined8 uVar1;
  
  uVar1 = ACameraActor::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_extClearTipsLabel_1448fef90,0xc);
  return;
}



// FUNCTION 14137c770 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468859c8 == 0) {
    uVar1 = FUN_14137c5c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468859c8 =
         GetStaticStruct(FUN_14137cad0,uVar2,L"GFxMissionTrackerAnimationData",0x60,uVar1);
  }
  return;
}



// FUNCTION 14137c7d0 FUN_14137c7d0 body=82 status=ok
// SIG undefined FUN_14137c7d0(void)

void FUN_14137c7d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468859d8 == 0) {
    uVar1 = FUN_14137c5d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468859d8 =
         GetStaticStruct(FUN_14137cb00,uVar2,L"GFxMissionTrackerRewardQueueData",0x30,uVar1);
  }
  return;
}



// FUNCTION 14137c830 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneCameraCutSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468859e8 == 0) {
    uVar1 = FUN_14137c5e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468859e8 = GetStaticStruct(FUN_14137cb30,uVar2,L"GFxMissionTrackerRewardSlot",0x80,uVar1);
  }
  return;
}



// FUNCTION 14137c890 FUN_14137c890 body=82 status=ok
// SIG undefined FUN_14137c890(void)

void FUN_14137c890(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146885ae8 == 0) {
    uVar1 = FUN_14137c5f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146885ae8 = GetStaticStruct(FUN_14137cb60,uVar2,L"NameplateBarData",0x28,uVar1);
  }
  return;
}



// FUNCTION 14137c8f0 FUN_14137c8f0 body=47 status=ok
// SIG undefined FUN_14137c8f0(void)

longlong FUN_14137c8f0(void)

{
  if (DAT_146885a38 == 0) {
    FUN_141786440(&DAT_146885a38,&PTR_FUN_1448f8910);
  }
  return DAT_146885a38;
}



// FUNCTION 14137c920 FUN_14137c920 body=47 status=ok
// SIG undefined FUN_14137c920(void)

longlong FUN_14137c920(void)

{
  if (DAT_146885a48 == 0) {
    FUN_141786440(&DAT_146885a48,&PTR_FUN_1448f9d60);
  }
  return DAT_146885a48;
}



// FUNCTION 14137c950 FUN_14137c950 body=47 status=ok
// SIG undefined FUN_14137c950(void)

longlong FUN_14137c950(void)

{
  if (DAT_146885c00 == 0) {
    FUN_141786440(&DAT_146885c00,&PTR_GetPrivateStaticClass_1448fa8b0);
  }
  return DAT_146885c00;
}



// FUNCTION 14137c980 FUN_14137c980 body=47 status=ok
// SIG undefined FUN_14137c980(void)

longlong FUN_14137c980(void)

{
  if (DAT_146885bf0 == 0) {
    FUN_141786440(&DAT_146885bf0,&PTR_StaticClass_1448fa540);
  }
  return DAT_146885bf0;
}



// FUNCTION 14137c9b0 FUN_14137c9b0 body=47 status=ok
// SIG undefined FUN_14137c9b0(void)

longlong FUN_14137c9b0(void)

{
  if (DAT_146885cb0 == 0) {
    FUN_141786440(&DAT_146885cb0,&PTR_GetPrivateStaticClass_1448f4270);
  }
  return DAT_146885cb0;
}



// FUNCTION 14137c9e0 FUN_14137c9e0 body=47 status=ok
// SIG undefined FUN_14137c9e0(void)

longlong FUN_14137c9e0(void)

{
  if (DAT_146885c30 == 0) {
    FUN_141786440(&DAT_146885c30,&PTR_FUN_1448f07c0);
  }
  return DAT_146885c30;
}



// FUNCTION 14137ca10 FUN_14137ca10 body=47 status=ok
// SIG undefined FUN_14137ca10(void)

longlong FUN_14137ca10(void)

{
  if (DAT_146885be8 == 0) {
    FUN_1417866a0(&DAT_146885be8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463397c0);
  }
  return DAT_146885be8;
}



// FUNCTION 14137ca40 FUN_14137ca40 body=47 status=ok
// SIG undefined FUN_14137ca40(void)

longlong FUN_14137ca40(void)

{
  if (DAT_1468859c0 == 0) {
    FUN_1417866a0(&DAT_1468859c0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463396d0);
  }
  return DAT_1468859c0;
}



// FUNCTION 14137ca70 FUN_14137ca70 body=47 status=ok
// SIG undefined FUN_14137ca70(void)

longlong FUN_14137ca70(void)

{
  if (DAT_146885ae0 == 0) {
    FUN_1417866a0(&DAT_146885ae0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146339770);
  }
  return DAT_146885ae0;
}



// FUNCTION 14137caa0 FUN_14137caa0 body=47 status=ok
// SIG undefined FUN_14137caa0(void)

longlong FUN_14137caa0(void)

{
  if (DAT_146885ad8 == 0) {
    FUN_1417866a0(&DAT_146885ad8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146339720);
  }
  return DAT_146885ad8;
}



// FUNCTION 14137cad0 FUN_14137cad0 body=47 status=ok
// SIG undefined FUN_14137cad0(void)

longlong FUN_14137cad0(void)

{
  if (DAT_1468859d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468859d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146335270);
  }
  return DAT_1468859d0;
}



// FUNCTION 14137cb00 FUN_14137cb00 body=47 status=ok
// SIG undefined FUN_14137cb00(void)

longlong FUN_14137cb00(void)

{
  if (DAT_1468859e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468859e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146335750);
  }
  return DAT_1468859e0;
}



// FUNCTION 14137cb30 FUN_14137cb30 body=47 status=ok
// SIG undefined FUN_14137cb30(void)

longlong FUN_14137cb30(void)

{
  if (DAT_1468859f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468859f0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463357a0);
  }
  return DAT_1468859f0;
}



// FUNCTION 14137cb60 FUN_14137cb60 body=47 status=ok
// SIG undefined FUN_14137cb60(void)

longlong FUN_14137cb60(void)

{
  if (DAT_146885af0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146885af0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146336e60);
  }
  return DAT_146885af0;
}



// FUNCTION 14137cb90 FUN_14137cb90 body=284 status=ok
// SIG undefined FUN_14137cb90(void)

void FUN_14137cb90(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 local_res10 [2];
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
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
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_140ff0f50(param_1,local_res10[0],&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14137cd10 FUN_14137cd10 body=128 status=ok
// SIG undefined FUN_14137cd10(void)

void FUN_14137cd10(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411a2df0(param_1,local_res10);
  return;
}



// FUNCTION 14137cd90 FUN_14137cd90 body=128 status=ok
// SIG undefined FUN_14137cd90(void)

void FUN_14137cd90(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411a2e50(param_1,local_res10);
  return;
}



// FUNCTION 14137ce10 FUN_14137ce10 body=334 status=ok
// SIG undefined FUN_14137ce10(void)

void FUN_14137ce10(undefined8 param_1,longlong param_2)

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
  FUN_141157dd0(param_1,local_res10,puVar6);
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



// FUNCTION 14137cf60 FUN_14137cf60 body=128 status=ok
// SIG undefined FUN_14137cf60(void)

void FUN_14137cf60(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141157ea0(param_1,local_res10);
  return;
}



// FUNCTION 14137cfe0 FUN_14137cfe0 body=128 status=ok
// SIG undefined FUN_14137cfe0(void)

void FUN_14137cfe0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411a3ef0(param_1,local_res10);
  return;
}



// FUNCTION 14137d060 FUN_14137d060 body=128 status=ok
// SIG undefined FUN_14137d060(void)

void FUN_14137d060(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141113620(param_1,local_res10);
  return;
}



// FUNCTION 14137d0e0 FUN_14137d0e0 body=334 status=ok
// SIG undefined FUN_14137d0e0(void)

void FUN_14137d0e0(undefined8 param_1,longlong param_2)

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
  FUN_141113940(param_1,local_res10,puVar6);
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



// FUNCTION 14137d230 FUN_14137d230 body=128 status=ok
// SIG undefined FUN_14137d230(void)

void FUN_14137d230(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411a4da0(param_1,local_res10);
  return;
}



// FUNCTION 14137d2b0 FUN_14137d2b0 body=128 status=ok
// SIG undefined FUN_14137d2b0(void)

void FUN_14137d2b0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411a52a0(param_1,local_res10);
  return;
}



// FUNCTION 14137d330 FUN_14137d330 body=128 status=ok
// SIG undefined FUN_14137d330(void)

void FUN_14137d330(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411a5d50(param_1,local_res10);
  return;
}



// FUNCTION 14137d3b0 FUN_14137d3b0 body=128 status=ok
// SIG undefined FUN_14137d3b0(void)

void FUN_14137d3b0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411a5e20(param_1,local_res10);
  return;
}



// FUNCTION 14137d450 FUN_14137d450 body=334 status=ok
// SIG undefined FUN_14137d450(void)

void FUN_14137d450(undefined8 param_1,longlong param_2)

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
  FUN_141161210(param_1,local_res10,puVar6);
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



// FUNCTION 14137d5a0 FUN_14137d5a0 body=188 status=ok
// SIG undefined FUN_14137d5a0(void)

void FUN_14137d5a0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
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
  FUN_140ffdd40(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 14137d680 FUN_14137d680 body=334 status=ok
// SIG undefined FUN_14137d680(void)

void FUN_14137d680(undefined8 param_1,longlong param_2)

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
  FUN_141161a50(param_1,local_res10,puVar6);
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



// FUNCTION 14137d7d0 FUN_14137d7d0 body=334 status=ok
// SIG undefined FUN_14137d7d0(void)

void FUN_14137d7d0(undefined8 param_1,longlong param_2)

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
  FUN_141161d00(param_1,local_res10,puVar6);
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



// FUNCTION 14137d920 FUN_14137d920 body=128 status=ok
// SIG undefined FUN_14137d920(void)

void FUN_14137d920(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411aa380(param_1,local_res10);
  return;
}



// FUNCTION 14137d9a0 FUN_14137d9a0 body=128 status=ok
// SIG undefined FUN_14137d9a0(void)

void FUN_14137d9a0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411ac080(param_1,local_res10);
  return;
}



// FUNCTION 14137da20 FUN_14137da20 body=128 status=ok
// SIG undefined FUN_14137da20(void)

void FUN_14137da20(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411ac0d0(param_1,local_res10);
  return;
}



// FUNCTION 14137dac0 FUN_14137dac0 body=334 status=ok
// SIG undefined FUN_14137dac0(void)

void FUN_14137dac0(undefined8 param_1,longlong param_2)

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
  FUN_141163be0(param_1,local_res10,puVar6);
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



// FUNCTION 14137dc10 FUN_14137dc10 body=128 status=ok
// SIG undefined FUN_14137dc10(void)

void FUN_14137dc10(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411ac220(param_1,local_res10);
  return;
}



// FUNCTION 14137dc90 FUN_14137dc90 body=126 status=ok
// SIG undefined FUN_14137dc90(void)

void FUN_14137dc90(undefined8 param_1,longlong param_2)

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
  FUN_141006e60(param_1,local_res10[0]);
  return;
}



// FUNCTION 14137dd10 FUN_14137dd10 body=334 status=ok
// SIG undefined FUN_14137dd10(void)

void FUN_14137dd10(undefined8 param_1,longlong param_2)

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
  FUN_141163cd0(param_1,local_res10,puVar6);
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



// FUNCTION 14137de60 FUN_14137de60 body=334 status=ok
// SIG undefined FUN_14137de60(void)

void FUN_14137de60(undefined8 param_1,longlong param_2)

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
  FUN_141163d60(param_1,local_res10,puVar6);
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



// FUNCTION 14137dfb0 FUN_14137dfb0 body=334 status=ok
// SIG undefined FUN_14137dfb0(void)

void FUN_14137dfb0(undefined8 param_1,longlong param_2)

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
  FUN_141163e90(param_1,local_res10,puVar6);
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



// FUNCTION 14137e100 FUN_14137e100 body=334 status=ok
// SIG undefined FUN_14137e100(void)

void FUN_14137e100(undefined8 param_1,longlong param_2)

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
  FUN_141163f20(param_1,local_res10,puVar6);
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



// FUNCTION 14137e250 FUN_14137e250 body=188 status=ok
// SIG undefined FUN_14137e250(void)

void FUN_14137e250(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
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
  FUN_141007180(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 14137e310 FUN_14137e310 body=128 status=ok
// SIG undefined FUN_14137e310(void)

void FUN_14137e310(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411ac510(param_1,local_res10);
  return;
}



// FUNCTION 14137e390 FUN_14137e390 body=128 status=ok
// SIG undefined FUN_14137e390(void)

void FUN_14137e390(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141007af0(param_1,local_res10);
  return;
}



// FUNCTION 14137e410 FUN_14137e410 body=128 status=ok
// SIG undefined FUN_14137e410(void)

void FUN_14137e410(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411ad720(param_1,local_res10);
  return;
}



// FUNCTION 14137e490 FUN_14137e490 body=334 status=ok
// SIG undefined FUN_14137e490(void)

void FUN_14137e490(undefined8 param_1,longlong param_2)

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
  FUN_141164430(param_1,local_res10,puVar6);
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



// FUNCTION 14137e5e0 FUN_14137e5e0 body=334 status=ok
// SIG undefined FUN_14137e5e0(void)

void FUN_14137e5e0(undefined8 param_1,longlong param_2)

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
  FUN_1411649c0(param_1,local_res10,puVar6);
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



// FUNCTION 14137e730 FUN_14137e730 body=334 status=ok
// SIG undefined FUN_14137e730(void)

void FUN_14137e730(undefined8 param_1,longlong param_2)

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
  FUN_141164ca0(param_1,local_res10,puVar6);
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



// FUNCTION 14137e880 FUN_14137e880 body=387 status=ok
// SIG undefined FUN_14137e880(void)

void FUN_14137e880(undefined8 param_1,longlong param_2)

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
  FUN_141165100(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 14137ea10 FUN_14137ea10 body=334 status=ok
// SIG undefined FUN_14137ea10(void)

void FUN_14137ea10(undefined8 param_1,longlong param_2)

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
  FUN_141169f40(param_1,local_res10,puVar6);
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



// FUNCTION 14137eb60 FUN_14137eb60 body=128 status=ok
// SIG undefined FUN_14137eb60(void)

void FUN_14137eb60(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411b0ce0(param_1,local_res10);
  return;
}



// FUNCTION 14137ebe0 FUN_14137ebe0 body=334 status=ok
// SIG undefined FUN_14137ebe0(void)

void FUN_14137ebe0(undefined8 param_1,longlong param_2)

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
  FUN_14116a760(param_1,local_res10,puVar6);
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



// FUNCTION 14137ed30 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14100e460(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 14137edf0 FUN_14137edf0 body=128 status=ok
// SIG undefined FUN_14137edf0(void)

void FUN_14137edf0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411b1420(param_1,local_res10);
  return;
}



// FUNCTION 14137ee70 FUN_14137ee70 body=128 status=ok
// SIG undefined FUN_14137ee70(void)

void FUN_14137ee70(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411b1450(param_1,local_res10);
  return;
}



// FUNCTION 14137eef0 FUN_14137eef0 body=128 status=ok
// SIG undefined FUN_14137eef0(void)

void FUN_14137eef0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411b1480(param_1,local_res10);
  return;
}



// FUNCTION 14137ef90 FUN_14137ef90 body=128 status=ok
// SIG undefined FUN_14137ef90(void)

void FUN_14137ef90(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14101e0c0(param_1,local_res10);
  return;
}



// FUNCTION 14137f110 FUN_14137f110 body=162 status=ok
// SIG undefined FUN_14137f110(void)

longlong FUN_14137f110(void)

{
  if (DAT_146886118 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxNewsMenuItemDataAsset",&DAT_146886118,FUN_140447710,0x78,
                  0x10000000,0,L"Engine",FUN_141380e30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146886118;
}



// FUNCTION 14137f1c0 FUN_14137f1c0 body=162 status=ok
// SIG undefined FUN_14137f1c0(void)

longlong FUN_14137f1c0(void)

{
  if (DAT_146886128 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxNewsMenu",&DAT_146886128,FUN_140447710,0x6b0,0x10000000,0,
                  L"Engine",FUN_141380de0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146886128;
}



// FUNCTION 14137f280 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGImpulseWindProjectile::GetPrivateStaticClass(void)

{
  if (DAT_146886248 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOakLegalScreenMenu",&DAT_146886248,
                  StaticRegisterNativesAGImpulseWindProjectile,0x6f0,0x10000000,0,L"Engine",
                  FUN_1413810f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146886248;
}



// FUNCTION 14137f350 FUN_14137f350 body=47 status=ok
// SIG undefined FUN_14137f350(void)

longlong FUN_14137f350(void)

{
  if (DAT_146886240 == 0) {
    FUN_141786440(&DAT_146886240,&PTR_GetPrivateStaticClass_1448ffc00);
  }
  return DAT_146886240;
}



// FUNCTION 14137f380 FUN_14137f380 body=47 status=ok
// SIG undefined FUN_14137f380(void)

longlong FUN_14137f380(void)

{
  if (DAT_146886230 == 0) {
    FUN_141786a30(&DAT_146886230,&PTR_FUN_14633b7a0);
  }
  return DAT_146886230;
}



// FUNCTION 14137f3b0 FUN_14137f3b0 body=47 status=ok
// SIG undefined FUN_14137f3b0(void)

longlong FUN_14137f3b0(void)

{
  if (DAT_146886238 == 0) {
    FUN_141786a30(&DAT_146886238,&PTR_FUN_14633b7e0);
  }
  return DAT_146886238;
}



// FUNCTION 14137f3f0 FUN_14137f3f0 body=162 status=ok
// SIG undefined FUN_14137f3f0(void)

longlong FUN_14137f3f0(void)

{
  if (DAT_146886350 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOakMainMenu",&DAT_146886350,FUN_141383170,0xb60,0x10000000
                  ,0,L"Game",FUN_141381190,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  AGMeshParameterCue::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146886350;
}



// FUNCTION 14137f4a0 FUN_14137f4a0 body=162 status=ok
// SIG undefined FUN_14137f4a0(void)

longlong FUN_14137f4a0(void)

{
  if (DAT_1468863c0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOperativeSkillScreenTree",&DAT_1468863c0,FUN_140447710,
                  0xfb0,0x10000000,0,L"Engine",FUN_1413815d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14139c4f0,&LAB_140447700,0);
  }
  return DAT_1468863c0;
}



// FUNCTION 14137f560 FUN_14137f560 body=162 status=ok
// SIG undefined FUN_14137f560(void)

longlong FUN_14137f560(void)

{
  if (DAT_146886150 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxNewsWidget",&DAT_146886150,FUN_141383080,0x390,0x10000008,
                  0,L"Engine",FUN_141380e70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f18d50,&LAB_140447700,0);
  }
  return DAT_146886150;
}



// FUNCTION 14137f610 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UEditableTextBox::GetPrivateStaticClass(void)

{
  if (DAT_1468863b0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOnlineMessageAnimationWidget",&DAT_1468863b0,FUN_140447710
                  ,0xa30,0x10000000,0,L"Engine",FUN_141381480,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  AXActionCue::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468863b0;
}



// FUNCTION 14137f6c0 FUN_14137f6c0 body=47 status=ok
// SIG undefined FUN_14137f6c0(void)

longlong FUN_14137f6c0(void)

{
  if (DAT_146886348 == 0) {
    FUN_141786440(&DAT_146886348,&PTR_FUN_144904a30);
  }
  return DAT_146886348;
}



// FUNCTION 14137f6f0 FUN_14137f6f0 body=47 status=ok
// SIG undefined FUN_14137f6f0(void)

longlong FUN_14137f6f0(void)

{
  if (DAT_146886250 == 0) {
    FUN_141786a30(&DAT_146886250,&PTR_FUN_14633ba30);
  }
  return DAT_146886250;
}



// FUNCTION 14137f720 FUN_14137f720 body=47 status=ok
// SIG undefined FUN_14137f720(void)

longlong FUN_14137f720(void)

{
  if (DAT_146886258 == 0) {
    FUN_141786a30(&DAT_146886258,&PTR_FUN_14633baf0);
  }
  return DAT_146886258;
}



// FUNCTION 14137f750 FUN_14137f750 body=47 status=ok
// SIG undefined FUN_14137f750(void)

longlong FUN_14137f750(void)

{
  if (DAT_146886260 == 0) {
    FUN_141786a30(&DAT_146886260,&PTR_FUN_14633bbb0);
  }
  return DAT_146886260;
}



// FUNCTION 14137f780 FUN_14137f780 body=47 status=ok
// SIG undefined FUN_14137f780(void)

longlong FUN_14137f780(void)

{
  if (DAT_146886268 == 0) {
    FUN_141786a30(&DAT_146886268,&PTR_FUN_14633bcb0);
  }
  return DAT_146886268;
}



// FUNCTION 14137f7b0 FUN_14137f7b0 body=47 status=ok
// SIG undefined FUN_14137f7b0(void)

longlong FUN_14137f7b0(void)

{
  if (DAT_146886270 == 0) {
    FUN_141786a30(&DAT_146886270,&PTR_FUN_14633bdb0);
  }
  return DAT_146886270;
}



// FUNCTION 14137f7e0 FUN_14137f7e0 body=47 status=ok
// SIG undefined FUN_14137f7e0(void)

longlong FUN_14137f7e0(void)

{
  if (DAT_146886278 == 0) {
    FUN_141786a30(&DAT_146886278,&PTR_FUN_14633be70);
  }
  return DAT_146886278;
}



// FUNCTION 14137f810 FUN_14137f810 body=47 status=ok
// SIG undefined FUN_14137f810(void)

longlong FUN_14137f810(void)

{
  if (DAT_146886280 == 0) {
    FUN_141786a30(&DAT_146886280,&PTR_FUN_14633bf30);
  }
  return DAT_146886280;
}



// FUNCTION 14137f840 FUN_14137f840 body=47 status=ok
// SIG undefined FUN_14137f840(void)

longlong FUN_14137f840(void)

{
  if (DAT_146886288 == 0) {
    FUN_141786a30(&DAT_146886288,&PTR_FUN_14633bff0);
  }
  return DAT_146886288;
}



// FUNCTION 14137f870 FUN_14137f870 body=47 status=ok
// SIG undefined FUN_14137f870(void)

longlong FUN_14137f870(void)

{
  if (DAT_146886290 == 0) {
    FUN_141786a30(&DAT_146886290,&PTR_FUN_14633c0b0);
  }
  return DAT_146886290;
}



// FUNCTION 14137f8a0 FUN_14137f8a0 body=47 status=ok
// SIG undefined FUN_14137f8a0(void)

longlong FUN_14137f8a0(void)

{
  if (DAT_146886298 == 0) {
    FUN_141786a30(&DAT_146886298,&PTR_FUN_14633c170);
  }
  return DAT_146886298;
}



// FUNCTION 14137f8d0 FUN_14137f8d0 body=47 status=ok
// SIG undefined FUN_14137f8d0(void)

longlong FUN_14137f8d0(void)

{
  if (DAT_1468862a0 == 0) {
    FUN_141786a30(&DAT_1468862a0,&PTR_FUN_14633c230);
  }
  return DAT_1468862a0;
}



// FUNCTION 14137f900 FUN_14137f900 body=47 status=ok
// SIG undefined FUN_14137f900(void)

longlong FUN_14137f900(void)

{
  if (DAT_1468862a8 == 0) {
    FUN_141786a30(&DAT_1468862a8,&PTR_FUN_14633c2f0);
  }
  return DAT_1468862a8;
}



// FUNCTION 14137f930 FUN_14137f930 body=47 status=ok
// SIG undefined FUN_14137f930(void)

longlong FUN_14137f930(void)

{
  if (DAT_1468862b0 == 0) {
    FUN_141786a30(&DAT_1468862b0,&PTR_FUN_14633c3b0);
  }
  return DAT_1468862b0;
}



// FUNCTION 14137f960 FUN_14137f960 body=47 status=ok
// SIG undefined FUN_14137f960(void)

longlong FUN_14137f960(void)

{
  if (DAT_1468862b8 == 0) {
    FUN_141786a30(&DAT_1468862b8,&PTR_FUN_14633c470);
  }
  return DAT_1468862b8;
}



// FUNCTION 14137f990 FUN_14137f990 body=47 status=ok
// SIG undefined FUN_14137f990(void)

longlong FUN_14137f990(void)

{
  if (DAT_1468862c0 == 0) {
    FUN_141786a30(&DAT_1468862c0,&PTR_FUN_14633c530);
  }
  return DAT_1468862c0;
}



// FUNCTION 14137f9c0 FUN_14137f9c0 body=47 status=ok
// SIG undefined FUN_14137f9c0(void)

longlong FUN_14137f9c0(void)

{
  if (DAT_1468862c8 == 0) {
    FUN_141786a30(&DAT_1468862c8,&PTR_FUN_14633c5f0);
  }
  return DAT_1468862c8;
}



// FUNCTION 14137f9f0 FUN_14137f9f0 body=47 status=ok
// SIG undefined FUN_14137f9f0(void)

longlong FUN_14137f9f0(void)

{
  if (DAT_1468862d0 == 0) {
    FUN_141786a30(&DAT_1468862d0,&PTR_FUN_14633c6b0);
  }
  return DAT_1468862d0;
}



// FUNCTION 14137fa20 FUN_14137fa20 body=47 status=ok
// SIG undefined FUN_14137fa20(void)

longlong FUN_14137fa20(void)

{
  if (DAT_1468862d8 == 0) {
    FUN_141786a30(&DAT_1468862d8,&PTR_FUN_14633c770);
  }
  return DAT_1468862d8;
}



// FUNCTION 14137fa50 FUN_14137fa50 body=47 status=ok
// SIG undefined FUN_14137fa50(void)

longlong FUN_14137fa50(void)

{
  if (DAT_1468862e0 == 0) {
    FUN_141786a30(&DAT_1468862e0,&PTR_FUN_14633c830);
  }
  return DAT_1468862e0;
}



// FUNCTION 14137fa80 FUN_14137fa80 body=47 status=ok
// SIG undefined FUN_14137fa80(void)

longlong FUN_14137fa80(void)

{
  if (DAT_1468862e8 == 0) {
    FUN_141786a30(&DAT_1468862e8,&PTR_FUN_14633c930);
  }
  return DAT_1468862e8;
}



// FUNCTION 14137fab0 FUN_14137fab0 body=47 status=ok
// SIG undefined FUN_14137fab0(void)

longlong FUN_14137fab0(void)

{
  if (DAT_1468862f0 == 0) {
    FUN_141786a30(&DAT_1468862f0,&PTR_FUN_14633c9f0);
  }
  return DAT_1468862f0;
}



// FUNCTION 14137fae0 FUN_14137fae0 body=47 status=ok
// SIG undefined FUN_14137fae0(void)

longlong FUN_14137fae0(void)

{
  if (DAT_1468862f8 == 0) {
    FUN_141786a30(&DAT_1468862f8,&PTR_FUN_14633ca70);
  }
  return DAT_1468862f8;
}



// FUNCTION 14137fb10 FUN_14137fb10 body=47 status=ok
// SIG undefined FUN_14137fb10(void)

longlong FUN_14137fb10(void)

{
  if (DAT_146886300 == 0) {
    FUN_141786a30(&DAT_146886300,&PTR_FUN_14633cb30);
  }
  return DAT_146886300;
}



// FUNCTION 14137fb40 FUN_14137fb40 body=47 status=ok
// SIG undefined FUN_14137fb40(void)

longlong FUN_14137fb40(void)

{
  if (DAT_146886308 == 0) {
    FUN_141786a30(&DAT_146886308,&PTR_FUN_14633cbf0);
  }
  return DAT_146886308;
}



// FUNCTION 14137fb70 FUN_14137fb70 body=47 status=ok
// SIG undefined FUN_14137fb70(void)

longlong FUN_14137fb70(void)

{
  if (DAT_146886310 == 0) {
    FUN_141786a30(&DAT_146886310,&PTR_FUN_14633ccb0);
  }
  return DAT_146886310;
}



// FUNCTION 14137fba0 FUN_14137fba0 body=47 status=ok
// SIG undefined FUN_14137fba0(void)

longlong FUN_14137fba0(void)

{
  if (DAT_146886318 == 0) {
    FUN_141786a30(&DAT_146886318,&PTR_FUN_14633cd70);
  }
  return DAT_146886318;
}



// FUNCTION 14137fbd0 FUN_14137fbd0 body=47 status=ok
// SIG undefined FUN_14137fbd0(void)

longlong FUN_14137fbd0(void)

{
  if (DAT_146886320 == 0) {
    FUN_141786a30(&DAT_146886320,&PTR_FUN_14633ce30);
  }
  return DAT_146886320;
}



// FUNCTION 14137fc00 FUN_14137fc00 body=47 status=ok
// SIG undefined FUN_14137fc00(void)

longlong FUN_14137fc00(void)

{
  if (DAT_146886328 == 0) {
    FUN_141786a30(&DAT_146886328,&PTR_FUN_14633cef0);
  }
  return DAT_146886328;
}



// FUNCTION 14137fc30 FUN_14137fc30 body=47 status=ok
// SIG undefined FUN_14137fc30(void)

longlong FUN_14137fc30(void)

{
  if (DAT_146886330 == 0) {
    FUN_141786a30(&DAT_146886330,&PTR_FUN_14633cfb0);
  }
  return DAT_146886330;
}



// FUNCTION 14137fc60 FUN_14137fc60 body=47 status=ok
// SIG undefined FUN_14137fc60(void)

longlong FUN_14137fc60(void)

{
  if (DAT_146886338 == 0) {
    FUN_141786a30(&DAT_146886338,&PTR_FUN_14633d070);
  }
  return DAT_146886338;
}



// FUNCTION 14137fc90 FUN_14137fc90 body=47 status=ok
// SIG undefined FUN_14137fc90(void)

longlong FUN_14137fc90(void)

{
  if (DAT_146886340 == 0) {
    FUN_141786a30(&DAT_146886340,&PTR_FUN_14633d130);
  }
  return DAT_146886340;
}



// FUNCTION 14137fcd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGameModeBase::GetPrivateStaticClass(void)

{
  if (DAT_146886160 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxNewsItem",&DAT_146886160,FUN_140447710,0x3d0,0x10000008,0,
                  L"Engine",FUN_141380cc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f18d50,&LAB_140447700,0);
  }
  return DAT_146886160;
}



// FUNCTION 14137fd80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_146886188 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxNewsWidgetWrapper",&DAT_146886188,FUN_1413830e0,400,
                  0x10000008,0,L"Engine",FUN_141380fd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146886188;
}



// FUNCTION 14137fe30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_1468861a0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxNewsWidgetNavCircles",&DAT_1468861a0,FUN_1413830b0,400,
                  0x10000008,0,L"Engine",FUN_141380f90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468861a0;
}



// FUNCTION 14137fee0 FUN_14137fee0 body=162 status=ok
// SIG undefined FUN_14137fee0(void)

longlong FUN_14137fee0(void)

{
  if (DAT_1468861b8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLoadedNewsImage",&DAT_1468861b8,FUN_141382ff0,0x1b0,
                  0x10000008,0,L"Engine",FUN_141380990,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141360350,&LAB_140447700,0);
  }
  return DAT_1468861b8;
}



// FUNCTION 14137ff90 FUN_14137ff90 body=47 status=ok
// SIG undefined FUN_14137ff90(void)

longlong FUN_14137ff90(void)

{
  if (DAT_146886148 == 0) {
    FUN_141786440(&DAT_146886148,&PTR_FUN_144903d00);
  }
  return DAT_146886148;
}



// FUNCTION 14137ffc0 FUN_14137ffc0 body=47 status=ok
// SIG undefined FUN_14137ffc0(void)

longlong FUN_14137ffc0(void)

{
  if (DAT_146886140 == 0) {
    FUN_141786a30(&DAT_146886140,&PTR_FUN_146339ea0);
  }
  return DAT_146886140;
}



// FUNCTION 14137fff0 FUN_14137fff0 body=47 status=ok
// SIG undefined FUN_14137fff0(void)

longlong FUN_14137fff0(void)

{
  if (DAT_146886180 == 0) {
    FUN_141786440(&DAT_146886180,&PTR_GetPrivateStaticClass_144906830);
  }
  return DAT_146886180;
}



// FUNCTION 141380020 FUN_141380020 body=47 status=ok
// SIG undefined FUN_141380020(void)

longlong FUN_141380020(void)

{
  if (DAT_146886168 == 0) {
    FUN_141786a30(&DAT_146886168,&PTR_FUN_14633a580);
  }
  return DAT_146886168;
}



// FUNCTION 141380050 FUN_141380050 body=47 status=ok
// SIG undefined FUN_141380050(void)

longlong FUN_141380050(void)

{
  if (DAT_146886170 == 0) {
    FUN_141786a30(&DAT_146886170,&PTR_FUN_14633a640);
  }
  return DAT_146886170;
}



// FUNCTION 141380080 FUN_141380080 body=47 status=ok
// SIG undefined FUN_141380080(void)

longlong FUN_141380080(void)

{
  if (DAT_146886178 == 0) {
    FUN_141786a30(&DAT_146886178,&PTR_FUN_14633a700);
  }
  return DAT_146886178;
}



// FUNCTION 1413800b0 FUN_1413800b0 body=47 status=ok
// SIG undefined FUN_1413800b0(void)

longlong FUN_1413800b0(void)

{
  if (DAT_146886198 == 0) {
    FUN_141786440(&DAT_146886198,&PTR_GetPrivateStaticClass_144906d60);
  }
  return DAT_146886198;
}



// FUNCTION 1413800e0 FUN_1413800e0 body=47 status=ok
// SIG undefined FUN_1413800e0(void)

longlong FUN_1413800e0(void)

{
  if (DAT_146886190 == 0) {
    FUN_141786a30(&DAT_146886190,&PTR_FUN_14633a8b0);
  }
  return DAT_146886190;
}



// FUNCTION 141380110 FUN_141380110 body=47 status=ok
// SIG undefined FUN_141380110(void)

longlong FUN_141380110(void)

{
  if (DAT_1468861b0 == 0) {
    FUN_141786440(&DAT_1468861b0,&PTR_FUN_144907080);
  }
  return DAT_1468861b0;
}



// FUNCTION 141380140 FUN_141380140 body=47 status=ok
// SIG undefined FUN_141380140(void)

longlong FUN_141380140(void)

{
  if (DAT_1468861a8 == 0) {
    FUN_141786a30(&DAT_1468861a8,&PTR_FUN_14633aa20);
  }
  return DAT_1468861a8;
}



// FUNCTION 141380170 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong ARemnantMeleeWeapon::StaticClass(void)

{
  if (DAT_146886108 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxNewMissionNotificationWidget",&DAT_146886108,FUN_141383020
                  ,0x5e0,0x10000000,0,L"Engine",FUN_1413809f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  AXAnimatedUsable::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146886108;
}



// FUNCTION 141380220 FUN_141380220 body=53 status=ok
// SIG undefined FUN_141380220(void)

void FUN_141380220(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14490b5c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141380260 FUN_141380260 body=47 status=ok
// SIG undefined FUN_141380260(void)

longlong FUN_141380260(void)

{
  if (DAT_146886100 == 0) {
    FUN_141786440(&DAT_146886100,&PTR_StaticClass_144903d70);
  }
  return DAT_146886100;
}



// FUNCTION 141380290 FUN_141380290 body=47 status=ok
// SIG undefined FUN_141380290(void)

longlong FUN_141380290(void)

{
  if (DAT_1468860f0 == 0) {
    FUN_141786a30(&DAT_1468860f0,&PTR_FUN_1463398c0);
  }
  return DAT_1468860f0;
}



// FUNCTION 1413802c0 FUN_1413802c0 body=47 status=ok
// SIG undefined FUN_1413802c0(void)

longlong FUN_1413802c0(void)

{
  if (DAT_1468860f8 == 0) {
    FUN_141786a30(&DAT_1468860f8,&PTR_FUN_146339900);
  }
  return DAT_1468860f8;
}



// FUNCTION 141380340 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameInstanceGameParameters::GetPrivateStaticClass(void)

{
  if (DAT_146886370 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOakMenuScrollingList",&DAT_146886370,FUN_140447710,800,
                  0x10000008,0,L"Engine",FUN_141381350,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146886370;
}



// FUNCTION 141380420 FUN_141380420 body=162 status=ok
// SIG undefined FUN_141380420(void)

longlong FUN_141380420(void)

{
  if (DAT_1468861d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxNewUWidget",&DAT_1468861d0,FUN_141383050,0x710,0x10000000,
                  0,L"Engine",FUN_141380b60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468861d0;
}



// FUNCTION 1413804d0 FUN_1413804d0 body=47 status=ok
// SIG undefined FUN_1413804d0(void)

longlong FUN_1413804d0(void)

{
  if (DAT_1468861c8 == 0) {
    FUN_141786440(&DAT_1468861c8,&PTR_FUN_144908de0);
  }
  return DAT_1468861c8;
}



// FUNCTION 141380500 FUN_141380500 body=47 status=ok
// SIG undefined FUN_141380500(void)

longlong FUN_141380500(void)

{
  if (DAT_1468861c0 == 0) {
    FUN_141786a30(&DAT_1468861c0,&PTR_FUN_14633ab40);
  }
  return DAT_1468861c0;
}



// FUNCTION 141380540 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGNewsMenuItem::GetPrivateStaticClass(void)

{
  if (DAT_146886228 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxNotificationWidget",&DAT_146886228,FUN_141383110,0x7e0,
                  0x10000000,0,L"Engine",FUN_141381000,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146886228;
}



// FUNCTION 1413805f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UARTrackedObject::GetPrivateStaticClass(void)

{
  if (DAT_146886388 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOakTitleScreenMenuData",&DAT_146886388,FUN_140447710,0xd0,
                  0x10000000,0,L"Engine",FUN_141381440,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14131be10,&LAB_140447700,0);
  }
  return DAT_146886388;
}



// FUNCTION 1413806a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGImpulseWindProjectile::GetPrivateStaticClass(void)

{
  if (DAT_1468863a0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOakTitleScreenMenu",&DAT_1468863a0,FUN_1413831a0,0x6f0,
                  0x10000000,0,L"Engine",FUN_141381390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_1468863a0;
}



// FUNCTION 141380750 FUN_141380750 body=47 status=ok
// SIG undefined FUN_141380750(void)

longlong FUN_141380750(void)

{
  if (DAT_146886398 == 0) {
    FUN_141786440(&DAT_146886398,&PTR_GetPrivateStaticClass_1449092b0);
  }
  return DAT_146886398;
}



// FUNCTION 141380780 FUN_141380780 body=47 status=ok
// SIG undefined FUN_141380780(void)

longlong FUN_141380780(void)

{
  if (DAT_146886390 == 0) {
    FUN_141786a30(&DAT_146886390,&PTR_FUN_14633d710);
  }
  return DAT_146886390;
}



// FUNCTION 1413807c0 FUN_1413807c0 body=47 status=ok
// SIG undefined FUN_1413807c0(void)

longlong FUN_1413807c0(void)

{
  if (DAT_146886220 == 0) {
    FUN_141786440(&DAT_146886220,&PTR_GetPrivateStaticClass_1448ff5c0);
  }
  return DAT_146886220;
}



// FUNCTION 1413807f0 FUN_1413807f0 body=47 status=ok
// SIG undefined FUN_1413807f0(void)

longlong FUN_1413807f0(void)

{
  if (DAT_1468861e8 == 0) {
    FUN_141786a30(&DAT_1468861e8,&PTR_FUN_14633b010);
  }
  return DAT_1468861e8;
}



// FUNCTION 141380820 FUN_141380820 body=47 status=ok
// SIG undefined FUN_141380820(void)

longlong FUN_141380820(void)

{
  if (DAT_1468861f0 == 0) {
    FUN_141786a30(&DAT_1468861f0,&PTR_FUN_14633b090);
  }
  return DAT_1468861f0;
}



// FUNCTION 141380850 FUN_141380850 body=47 status=ok
// SIG undefined FUN_141380850(void)

longlong FUN_141380850(void)

{
  if (DAT_1468861f8 == 0) {
    FUN_141786a30(&DAT_1468861f8,&PTR_FUN_14633b220);
  }
  return DAT_1468861f8;
}



// FUNCTION 141380880 FUN_141380880 body=47 status=ok
// SIG undefined FUN_141380880(void)

longlong FUN_141380880(void)

{
  if (DAT_146886200 == 0) {
    FUN_141786a30(&DAT_146886200,&PTR_FUN_14633b440);
  }
  return DAT_146886200;
}



// FUNCTION 1413808b0 FUN_1413808b0 body=47 status=ok
// SIG undefined FUN_1413808b0(void)

longlong FUN_1413808b0(void)

{
  if (DAT_146886208 == 0) {
    FUN_141786a30(&DAT_146886208,&PTR_FUN_14633b500);
  }
  return DAT_146886208;
}



// FUNCTION 1413808e0 FUN_1413808e0 body=47 status=ok
// SIG undefined FUN_1413808e0(void)

longlong FUN_1413808e0(void)

{
  if (DAT_146886210 == 0) {
    FUN_141786a30(&DAT_146886210,&PTR_FUN_14633b580);
  }
  return DAT_146886210;
}



// FUNCTION 141380910 FUN_141380910 body=47 status=ok
// SIG undefined FUN_141380910(void)

longlong FUN_141380910(void)

{
  if (DAT_146886218 == 0) {
    FUN_141786a30(&DAT_146886218,&PTR_FUN_14633b600);
  }
  return DAT_146886218;
}



// FUNCTION 141380950 FUN_141380950 body=53 status=ok
// SIG undefined FUN_141380950(void)

void FUN_141380950(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_14490c338;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141380990 FUN_141380990 body=92 status=ok
// SIG undefined FUN_141380990(void)

void FUN_141380990(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    *puVar1 = &PTR_FUN_14490b320;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
  }
  return;
}



// FUNCTION 1413809f0 FUN_1413809f0 body=355 status=ok
// SIG undefined FUN_1413809f0(void)

void FUN_1413809f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9ac50(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144839ce0;
    puVar1[0x9b] = 0;
    puVar1[0x9c] = 0;
    puVar1[0x9d] = 0;
    puVar1[0x9e] = 0;
    puVar1[0xa1] = 0;
    puVar1[0xa2] = 0;
    *(undefined4 *)(puVar1 + 0xa3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x51c) = 0;
    puVar1[0xa5] = 0;
    *(undefined4 *)(puVar1 + 0xa6) = 0;
    uVar2 = FUN_1404b03b0();
    FText::FText(puVar1 + 0xa7,uVar2);
    puVar1[0xac] = 0;
    puVar1[0xad] = 0;
    puVar1[0xae] = 0;
    puVar1[0xaf] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0xae,0);
    FGenericPlatformString::Convert<char,wchar_t>(puVar1[0xae],0xc,"Linked Menu",0xc,0x3f);
    puVar1[0xb0] = 0;
    puVar1[0xb1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0xb0,0);
    FGenericPlatformString::Convert<char,wchar_t>(puVar1[0xb0],9,"HintText",9,0x3f);
    *puVar1 = &PTR_FUN_144909820;
    FText::FText(puVar1 + 0xb3);
    puVar1[0xb6] = 0;
    *(undefined2 *)(puVar1 + 0xbb) = 0x100;
  }
  return;
}



// FUNCTION 141380b60 FUN_141380b60 body=352 status=ok
// SIG undefined FUN_141380b60(void)

void FUN_141380b60(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *puVar1 = &PTR_FUN_14490b740;
    puVar1[0xc6] = 0;
    puVar1[199] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0xc6,0);
    FGenericPlatformString::Memcpy(puVar1[0xc6],L"titleField",0x16);
    puVar1[200] = 0;
    puVar1[0xc9] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 200,0);
    FGenericPlatformString::Memcpy(puVar1[200],L"descriptionField",0x22);
    puVar1[0xca] = 0;
    puVar1[0xcb] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0xca,0);
    FGenericPlatformString::Memcpy(puVar1[0xca],L"feeField",0x12);
    FText::FText(puVar1 + 0xcc);
    FText::FText(puVar1 + 0xcf);
    FText::FText(puVar1 + 0xd2);
    puVar1[0xd5] = 0;
    puVar1[0xd6] = 0;
    *(undefined4 *)(puVar1 + 0xd7) = 0x41200000;
    puVar1[0xd9] = 0;
    puVar1[0xda] = 0;
    puVar1[0xdc] = 0;
    puVar1[0xdd] = 0;
    *(undefined4 *)(puVar1 + 0xd8) = 0;
    puVar1[0xdf] = 0;
    *(undefined4 *)(puVar1 + 0xdb) = 0;
    puVar1[0xe0] = 0;
    *(undefined4 *)(puVar1 + 0xde) = 0;
  }
  return;
}



// FUNCTION 141380cc0 FUN_141380cc0 body=278 status=ok
// SIG undefined FUN_141380cc0(void)

void FUN_141380cc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14490aa60;
    puVar1[0x2e] = &PTR_LAB_14490ad80;
    puVar1[0x59] = 0;
    puVar1[0x5d] = 0;
    puVar1[0x5e] = 0;
    *(undefined4 *)(puVar1 + 0x5f) = 0;
    puVar1[0x60] = 0;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0;
    puVar1[0x6a] = 0;
    puVar1[0x6b] = 0;
    puVar1[0x6c] = 0;
    puVar1[0x6d] = 0;
    puVar1[0x6e] = 0;
    puVar1[0x6f] = 0;
    puVar1[0x70] = 0;
    puVar1[0x71] = 0;
    puVar1[0x72] = 0;
    puVar1[0x73] = 0;
    puVar1[0x74] = 0;
    puVar1[0x75] = 0;
    *(undefined4 *)(puVar1 + 0x76) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x3b4) = 0;
    puVar1[0x77] = 0;
    puVar1[0x78] = 0;
    *(undefined4 *)(puVar1 + 0x79) = 0xffffffff;
  }
  return;
}



// FUNCTION 141380de0 FUN_141380de0 body=78 status=ok
// SIG undefined FUN_141380de0(void)

void FUN_141380de0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14490a008;
    puVar1[0x9b] = &PTR_LAB_14490a570;
    puVar1[0xd0] = 0;
    puVar1[0xd1] = 0;
    puVar1[0xd2] = 0;
  }
  return;
}



// FUNCTION 141380e30 FUN_141380e30 body=63 status=ok
// SIG undefined FUN_141380e30(void)

void FUN_141380e30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144909d88;
    FText::FText(puVar1 + 6);
    FText::FText(puVar1 + 9);
    *(undefined1 *)(puVar1 + 0xe) = 0;
  }
  return;
}



// FUNCTION 141380e70 FUN_141380e70 body=283 status=ok
// SIG undefined FUN_141380e70(void)

void FUN_141380e70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined2 *)(puVar1 + 0x59) = 0;
    *puVar1 = &PTR_FUN_14490a6f0;
    puVar1[0x2e] = &PTR_LAB_14490aa10;
    *(undefined4 *)((longlong)puVar1 + 0x2cc) = 0x3e4ccccd;
    puVar1[0x5a] = 0;
    *(undefined2 *)(puVar1 + 0x5b) = 0;
    puVar1[0x5d] = 0;
    puVar1[0x5e] = 0;
    puVar1[0x5f] = 0;
    puVar1[0x60] = 0;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    *(undefined4 *)(puVar1 + 0x69) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34c) = 0;
    *(undefined4 *)(puVar1 + 0x6a) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x354) = 0;
    *(undefined4 *)(puVar1 + 0x6b) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x35c) = 0;
    *(undefined1 *)(puVar1 + 0x6c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x361) = 0;
    puVar1[0x6d] = 0;
    puVar1[0x6e] = 0;
    puVar1[0x6f] = 0;
    *(undefined4 *)(puVar1 + 0x70) = 0xffffffff;
    *(undefined1 *)((longlong)puVar1 + 900) = 1;
    puVar1[0x71] = 0;
  }
  return;
}



// FUNCTION 141380f90 FUN_141380f90 body=57 status=ok
// SIG undefined FUN_141380f90(void)

void FUN_141380f90(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14490b078;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
  }
  return;
}



// FUNCTION 141380fd0 FUN_141380fd0 body=41 status=ok
// SIG undefined FUN_141380fd0(void)

void FUN_141380fd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14490add0;
  }
  return;
}



// FUNCTION 141381000 FUN_141381000 body=233 status=ok
// SIG undefined FUN_141381000(void)

void FUN_141381000(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0xc6) = 0x41200000;
    *puVar1 = &PTR_FUN_14490bd70;
    puVar1[199] = 0;
    puVar1[200] = 0;
    InitializeSRWLock((PSRWLOCK)(puVar1 + 0xc9));
    puVar1[0xca] = 0;
    puVar1[0xcb] = 0;
    FText::FText(puVar1 + 0xcd);
    puVar1[0xd0] = 0;
    puVar1[0xd1] = 0;
    puVar1[0xd3] = 0;
    InitializeSRWLock((PSRWLOCK)(puVar1 + 0xd4));
    puVar1[0xd5] = 0;
    puVar1[0xd6] = 0;
    FText::FText(puVar1 + 0xd8);
    puVar1[0xdb] = 0;
    puVar1[0xdc] = 0;
    puVar1[0xde] = 0;
    InitializeSRWLock((PSRWLOCK)(puVar1 + 0xdf));
    puVar1[0xe0] = 0;
    FUN_14106d7a0(puVar1 + 0xe2);
  }
  return;
}



// FUNCTION 1413810f0 FUN_1413810f0 body=145 status=ok
// SIG undefined FUN_1413810f0(void)

void FUN_1413810f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR_FUN_14490c4c0;
    puVar1[0x9b] = &PTR_LAB_14490ca28;
    puVar1[0xd0] = 0;
    *(undefined4 *)(puVar1 + 0xd1) = 0;
    *(undefined4 *)(puVar1 + 0xd2) = 0x40400000;
    *(undefined4 *)((longlong)puVar1 + 0x694) = 0x41200000;
    FText::FText(puVar1 + 0xd3);
    FText::FText(puVar1 + 0xd6);
    *(undefined1 *)(puVar1 + 0xda) = 0;
    puVar1[0xdb] = 0;
    puVar1[0xdc] = 0;
  }
  return;
}



// FUNCTION 141381190 FUN_141381190 body=444 status=ok
// SIG undefined FUN_141381190(void)

void FUN_141381190(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_14178c940();
    FUN_14136bc70(puVar1,uVar2);
    *(undefined4 *)(puVar1 + 0x13c) = 0x3f800000;
    *puVar1 = &PTR__scalar_deleting_destructor__14490cbc8;
    puVar1[0x9b] = &PTR_LAB_14490d138;
    puVar1[0x13a] = &PTR_LAB_14490d2b8;
    uVar2 = FUN_1404b03b0();
    FText::FText(puVar1 + 0x13d,uVar2);
    uVar2 = FUN_1404b03b0();
    FText::FText(puVar1 + 0x140,uVar2);
    *(undefined4 *)(puVar1 + 0x143) = 0x41700000;
    puVar1[0x145] = 0;
    puVar1[0x146] = 0;
    *(undefined2 *)(puVar1 + 0x147) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xa3a) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xa1c) = 0x41200000;
    *(undefined4 *)(puVar1 + 0x144) = 0x3e800000;
    *(undefined1 *)((longlong)puVar1 + 0xa24) = 1;
    puVar1[0x149] = 0;
    puVar1[0x14a] = 0;
    puVar1[0x14c] = 0;
    *(undefined4 *)(puVar1 + 0x148) = 0;
    puVar1[0x14d] = 0;
    *(undefined4 *)(puVar1 + 0x14b) = 0;
    FText::FText(puVar1 + 0x14e);
    puVar1[0x151] = 0;
    puVar1[0x152] = 0;
    puVar1[0x154] = 0;
    puVar1[0x155] = 0;
    puVar1[0x156] = 0;
    puVar1[0x157] = 0;
    puVar1[0x158] = 0;
    puVar1[0x159] = 0;
    puVar1[0x15a] = 0;
    puVar1[0x15b] = 0;
    puVar1[0x15c] = 0;
    puVar1[0x15d] = 0;
    puVar1[0x15e] = 0;
    puVar1[0x15f] = 0;
    puVar1[0x160] = 0;
    puVar1[0x161] = 0;
    puVar1[0x162] = 0;
    puVar1[0x163] = 0;
    *(undefined4 *)(puVar1 + 0x164) = 0xffffffff;
    puVar1[0x165] = 0;
    *(undefined4 *)(puVar1 + 0x166) = 0;
    *(undefined1 *)(puVar1 + 0x167) = 0;
    puVar1[0x168] = 0;
    puVar1[0x169] = 0;
    *(undefined1 *)(puVar1 + 0x16b) = 0;
    *(undefined4 *)(puVar1 + 0x113) = 1;
  }
  return;
}



// FUNCTION 141381350 FUN_141381350 body=55 status=ok
// SIG undefined FUN_141381350(void)

void FUN_141381350(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141363e50(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1448c22f0;
    puVar1[0x2e] = &PTR_LAB_14490d500;
  }
  return;
}



// FUNCTION 141381390 FUN_141381390 body=166 status=ok
// SIG undefined FUN_141381390(void)

void FUN_141381390(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR_FUN_14490d550;
    puVar1[0x9b] = &PTR_LAB_14490dab8;
    *(undefined4 *)(puVar1 + 0xd0) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x684) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0xd1) = 0;
    puVar1[0xd2] = 0;
    puVar1[0xd3] = 0;
    puVar1[0xd4] = 0;
    puVar1[0xd5] = 0;
    puVar1[0xd6] = 0;
    puVar1[0xd7] = 0;
    puVar1[0xd8] = 0;
    puVar1[0xd9] = 0;
    puVar1[0xda] = 0;
    puVar1[0xdb] = 0;
    puVar1[0xdc] = 0;
    *(undefined4 *)(puVar1 + 0xdd) = 0;
  }
  return;
}



// FUNCTION 141381440 FUN_141381440 body=57 status=ok
// SIG undefined FUN_141381440(void)

void FUN_141381440(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141325970(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448c2050;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
  }
  return;
}



// FUNCTION 141381480 FUN_141381480 body=329 status=ok
// SIG undefined FUN_141381480(void)

void FUN_141381480(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141381670(puVar1,param_1);
    *puVar1 = &PTR_FUN_14490e278;
    puVar1[0x133] = 0;
    puVar1[0x134] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0x133,0);
    FGenericPlatformString::Memcpy(puVar1[0x133],L"PlayerProfileImage",0x26);
    puVar1[0x135] = 0;
    puVar1[0x136] = 0;
    *(undefined4 *)(puVar1 + 0x137) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x9bc) = 0;
    puVar1[0x138] = 0;
    puVar1[0x139] = 0;
    puVar1[0x13a] = 0;
    *(undefined1 *)(puVar1 + 0x13b) = 1;
    puVar1[0x13c] = 0;
    puVar1[0x13d] = 0;
    puVar1[0x13e] = 0;
    puVar1[0x13f] = 0;
    puVar1[0x140] = 0;
    puVar1[0x141] = 0;
    puVar1[0x142] = 0;
    puVar1[0x143] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0x142,0);
    FGenericPlatformString::Memcpy(puVar1[0x142],L"onlineMessageMenu",0x24);
    puVar1[0x144] = 0;
    puVar1[0x145] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0x144,0);
    FGenericPlatformString::Memcpy(puVar1[0x144],L"onlineMessageHud",0x22);
  }
  return;
}



// FUNCTION 1413815d0 FUN_1413815d0 body=156 status=ok
// SIG undefined FUN_1413815d0(void)

void FUN_1413815d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1410229d0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14490e8e8;
    puVar1[0x9b] = &PTR_LAB_14490eeb0;
    puVar1[0xd5] = &PTR_LAB_14490f030;
    puVar1[0x1e2] = 0;
    puVar1[0x1e3] = 0;
    puVar1[0x1e4] = 0;
    puVar1[0x1e7] = 0;
    FText::FText(puVar1 + 0x1ea);
    FText::FText(puVar1 + 0x1ed);
    FText::FText(puVar1 + 0x1f0);
    FText::FText(puVar1 + 499);
    return;
  }
  return;
}



// FUNCTION 141381670 FUN_141381670 body=919 status=ok
// SIG undefined FUN_141381670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141381670(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_c;
  
  FUN_140f5a170();
  *(undefined2 *)(param_1 + 0xc6) = 0;
  *param_1 = &PTR_FUN_14490dc48;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0;
  FText::FText(param_1 + 200);
  FText::FText(param_1 + 0xcb);
  FText::FText(param_1 + 0xce);
  FText::FText(param_1 + 0xd1);
  FText::FText(param_1 + 0xd4);
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *(undefined2 *)(param_1 + 0xdb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6dc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6e4) = 1;
  param_1[0xdd] = 0;
  param_1[0xde] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0xdf) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70c) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0xe2] = _DAT_1464aa6c0;
  param_1[0xe3] = uVar1;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xea) = uVar2;
  *(undefined4 *)(param_1 + 0xe9) = uVar2;
  *(undefined1 *)(param_1 + 0xeb) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x754) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x74c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x75c) = 3;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(byte *)(param_1 + 0xee) = *(byte *)(param_1 + 0xee) & 0xfc;
  *(undefined1 *)(param_1 + 0xef) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 4;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0;
  param_1[0x10a] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x10b] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0;
  param_1[0x10c] = 0;
  *(undefined1 *)(param_1 + 0x10d) = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined4 *)(param_1 + 0x112) = 0x40800000;
  param_1[0x113] = 0;
  param_1[0x114] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x113,0);
  FGenericPlatformString::Memcpy(param_1[0x113],L"onlineMessageMC",0x20);
  param_1[0x115] = 0;
  param_1[0x116] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x115,0);
  FGenericPlatformString::Memcpy(param_1[0x115],L"eventIconMC",0x18);
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 0;
  *(undefined4 *)(param_1 + 0x12d) = 0xffffffff;
  param_1[0x12f] = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x131) = 0;
  param_1[0x132] = 0;
  return param_1;
}



// FUNCTION 141381a10 FUN_141381a10 body=159 status=ok
// SIG undefined FUN_141381a10(void)

void FUN_141381a10(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x20);
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
      plVar7 = plVar7 + 10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141381ab0 FUN_141381ab0 body=121 status=ok
// SIG undefined FUN_141381ab0(void)

void FUN_141381ab0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0xc0);
    do {
      FUN_1416f8340((int)plVar2[2]);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FUN_1411ca660(plVar2 + -0x17);
      plVar2 = plVar2 + 0x1b;
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



// FUNCTION 141381b30 FUN_141381b30 body=284 status=ok
// SIG undefined FUN_141381b30(void)

void FUN_141381b30(longlong param_1)

{
  FUN_140b9cb20(param_1 + 0x9b8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x9a8);
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x850) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x828) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x800) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x698) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  return;
}



// FUNCTION 141381c50 FUN_141381c50 body=384 status=ok
// SIG undefined FUN_141381c50(void)

void FUN_141381c50(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x700);
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
  plVar4 = *(longlong **)(param_1 + 0x6e8);
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
  plVar4 = *(longlong **)(param_1 + 0x6d0);
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
  plVar4 = *(longlong **)(param_1 + 0x698);
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
  plVar4 = *(longlong **)(param_1 + 0x680);
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
  plVar4 = *(longlong **)(param_1 + 0x668);
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
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FMemory::Free();
  }
  FUN_140f5a560(param_1);
  return;
}



// FUNCTION 141381dd0 FUN_141381dd0 body=382 status=ok
// SIG undefined FUN_141381dd0(void)

void FUN_141381dd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  if (*(longlong *)(param_1 + 0xa88) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xa78);
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
  plVar4 = *(longlong **)(param_1 + 0xa68);
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
  plVar4 = *(longlong **)(param_1 + 0xa50);
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
  plVar4 = *(longlong **)(param_1 + 0xa08);
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
  plVar4 = *(longlong **)(param_1 + 0x9f0);
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
  *(undefined ***)(param_1 + 0x9d0) = &PTR_FUN_14483a858;
  FUN_141381b30(param_1);
  return;
}



// FUNCTION 141381f50 FUN_141381f50 body=680 status=ok
// SIG undefined FUN_141381f50(void)

void FUN_141381f50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x980) = 0;
  if (*(longlong *)(param_1 + 0x978) != 0) {
    FMemory::Free();
  }
  FUN_141382d10(param_1 + 0x938,0);
  if (*(longlong *)(param_1 + 0x958) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x938) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x928) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x918) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x908) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x898) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x870) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x858);
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
  plVar3 = *(longlong **)(param_1 + 0x840);
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
  plVar3 = *(longlong **)(param_1 + 0x828);
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
  plVar3 = *(longlong **)(param_1 + 0x810);
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
  plVar3 = *(longlong **)(param_1 + 0x7f8);
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
  plVar3 = *(longlong **)(param_1 + 0x7e0);
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
  plVar3 = *(longlong **)(param_1 + 2000);
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
  plVar3 = *(longlong **)(param_1 + 0x7c0);
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
  plVar3 = *(longlong **)(param_1 + 0x7b0);
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
  FUN_1411ca750(param_1 + 0x640);
  FUN_140f5a560(param_1);
  return;
}



// FUNCTION 141382260 FUN_141382260 body=142 status=ok
// SIG undefined FUN_141382260(void)

longlong FUN_141382260(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
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
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 1413822f0 FUN_1413822f0 body=135 status=ok
// SIG undefined FUN_1413822f0(void)

longlong FUN_1413822f0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x5a0);
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
  FUN_141325a80(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5e0);
  }
  return param_1;
}



// FUNCTION 141382380 FUN_141382380 body=52 status=ok
// SIG undefined FUN_141382380(void)

undefined8 FUN_141382380(undefined8 param_1,ulonglong param_2)

{
  FUN_141381c50();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x710);
  }
  return param_1;
}



// FUNCTION 1413823c0 FUN_1413823c0 body=113 status=ok
// SIG undefined FUN_1413823c0(void)

longlong FUN_1413823c0(longlong param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 0x3c8));
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FMemory::Free();
  }
  FUN_1411ca660(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3d0);
  }
  return param_1;
}



// FUNCTION 141382440 FUN_141382440 body=184 status=ok
// SIG undefined FUN_141382440(void)

longlong FUN_141382440(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 141382500 FUN_141382500 body=119 status=ok
// SIG undefined FUN_141382500(void)

longlong FUN_141382500(longlong param_1,ulonglong param_2)

{
  FUN_141381ab0(param_1 + 0x370);
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x390);
  }
  return param_1;
}



// FUNCTION 141382580 FUN_141382580 body=125 status=ok
// SIG undefined FUN_141382580(void)

longlong FUN_141382580(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
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
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 141382600 FUN_141382600 body=214 status=ok
// SIG undefined FUN_141382600(void)

longlong FUN_141382600(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_140ce1dc0(param_1 + 0x710);
  plVar4 = *(longlong **)(param_1 + 0x6c8);
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
  plVar4 = *(longlong **)(param_1 + 0x670);
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
  FUN_141381a10(param_1 + 0x638);
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7e0);
  }
  return param_1;
}



// FUNCTION 1413826e0 FUN_1413826e0 body=202 status=ok
// SIG undefined FUN_1413826e0(void)

longlong FUN_1413826e0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  plVar4 = *(longlong **)(param_1 + 0x6a0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x680);
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6f0);
  }
  return param_1;
}



// FUNCTION 1413827b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UCharacterMovementComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141381dd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb60);
  }
  return param_1;
}



// FUNCTION 1413827f0 FUN_1413827f0 body=152 status=ok
// SIG undefined FUN_1413827f0(void)

longlong FUN_1413827f0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x6b0);
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
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6f0);
  }
  return param_1;
}



// FUNCTION 141382890 FUN_141382890 body=320 status=ok
// SIG undefined FUN_141382890(void)

longlong FUN_141382890(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xa20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa10) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xa08);
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
  plVar4 = *(longlong **)(param_1 + 0x9f8);
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
  plVar4 = *(longlong **)(param_1 + 0x9e8);
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
  plVar4 = *(longlong **)(param_1 + 0x9d0);
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
  if (*(longlong *)(param_1 + 0x9a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x998) != 0) {
    FMemory::Free();
  }
  FUN_141381f50(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa30);
  }
  return param_1;
}



// FUNCTION 1413829d0 FUN_1413829d0 body=306 status=ok
// SIG undefined FUN_1413829d0(void)

longlong FUN_1413829d0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 4000);
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
  plVar4 = *(longlong **)(param_1 + 0xf88);
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
  plVar4 = *(longlong **)(param_1 + 0xf70);
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
  plVar4 = *(longlong **)(param_1 + 0xf58);
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
  FUN_1410238b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xfb0);
  }
  return param_1;
}



// FUNCTION 141382b10 FUN_141382b10 body=52 status=ok
// SIG undefined FUN_141382b10(void)

undefined8 FUN_141382b10(undefined8 param_1,ulonglong param_2)

{
  FUN_141381f50();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9a0);
  }
  return param_1;
}



// FUNCTION 141382b50 FUN_141382b50 body=86 status=ok
// SIG undefined FUN_141382b50(void)

void FUN_141382b50(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FText::FText(param_2 + 3);
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[9] = 0;
  return;
}



// FUNCTION 141382bb0 FUN_141382bb0 body=149 status=ok
// SIG undefined FUN_141382bb0(void)

undefined8 FUN_141382bb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = *(undefined8 *)(param_3 + -0x10 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + -2) = *(undefined8 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      FText::operator=(puVar1 + 2,param_3 + 8 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 0x20 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(param_3 + 0x28 + (longlong)puVar1);
      puVar1[0xc] = *(undefined4 *)(param_3 + 0x30 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 0xd) = *(undefined1 *)(param_3 + 0x34 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + 0x35) = *(undefined1 *)(param_3 + 0x35 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(param_3 + 0x38 + (longlong)puVar1);
      puVar1 = puVar1 + 0x14;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141382c50 Copy body=105 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FBehaviorInfo>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10 + param_2);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141382cc0 FUN_141382cc0 body=77 status=ok
// SIG undefined FUN_141382cc0(void)

void FUN_141382cc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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



// FUNCTION 141382d10 FUN_141382d10 body=637 status=ok
// SIG undefined FUN_141382d10(void)

void FUN_141382d10(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar4 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = *puVar11;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar8 == 0) {
      lVar9 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar6) goto LAB_141382de4;
      uVar8 = puVar11[lVar9 + 1];
    }
    uStack_74 = -uVar8 & uVar8;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar4 < iStack_64) {
LAB_141382de4:
      iStack_64 = iVar4;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar4) {
    do {
      lVar9 = (longlong)iStack_3c * 0x60 + *param_1;
      plVar5 = *(longlong **)(lVar9 + 0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = *(longlong **)(lVar9 + 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = *(longlong **)(lVar9 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar8 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar8) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141382f90 FUN_141382f90 body=6 status=ok
// SIG undefined FUN_141382f90(void)

undefined8 FUN_141382f90(void)

{
  return 0x20965fa;
}



// FUNCTION 141382fa0 FUN_141382fa0 body=6 status=ok
// SIG undefined FUN_141382fa0(void)

undefined8 FUN_141382fa0(void)

{
  return 0xffefa5ea;
}



// FUNCTION 141382fb0 FUN_141382fb0 body=6 status=ok
// SIG undefined FUN_141382fb0(void)

undefined8 FUN_141382fb0(void)

{
  return 0xa7c8ac89;
}



// FUNCTION 141382fe0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void AXActionCue::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 141382ff0 FUN_141382ff0 body=34 status=ok
// SIG undefined FUN_141382ff0(void)

void FUN_141382ff0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14137fee0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnNewsImageLoadComplete_14490b730,1);
  return;
}



// FUNCTION 141383020 FUN_141383020 body=34 status=ok
// SIG undefined FUN_141383020(void)

void FUN_141383020(void)

{
  undefined8 uVar1;
  
  uVar1 = ARemnantMeleeWeapon::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnInputDeviceChanged_144909d68,2);
  return;
}



// FUNCTION 141383050 FUN_141383050 body=34 status=ok
// SIG undefined FUN_141383050(void)

void FUN_141383050(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141380420();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnOwnerResurrected_14490bd60,1);
  return;
}



// FUNCTION 141383080 FUN_141383080 body=34 status=ok
// SIG undefined FUN_141383080(void)

void FUN_141383080(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14137f560();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnUnhoverTimeout_14490b6e0,1);
  return;
}



// FUNCTION 1413830b0 FUN_1413830b0 body=34 status=ok
// SIG undefined FUN_1413830b0(void)

void FUN_1413830b0(void)

{
  undefined8 uVar1;
  
  uVar1 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnCircleButtonClicked_14490b720,1);
  return;
}



// FUNCTION 1413830e0 FUN_1413830e0 body=34 status=ok
// SIG undefined FUN_1413830e0(void)

void FUN_1413830e0(void)

{
  undefined8 uVar1;
  
  uVar1 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnNavigationButtonClicked_14490b6f0,3);
  return;
}



// FUNCTION 141383110 FUN_141383110 body=34 status=ok
// SIG undefined FUN_141383110(void)

void FUN_141383110(void)

{
  undefined8 uVar1;
  
  uVar1 = UGNewsMenuItem::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearNotifications_14490c450,7);
  return;
}



// FUNCTION 141383140 StaticRegisterNativesAGImpulseWindProjectile body=34 status=ok
// SIG undefined StaticRegisterNativesAGImpulseWindProjectile(void)

void AGImpulseWindProjectile::StaticRegisterNativesAGImpulseWindProjectile(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnableInputToSkipScreen_14490cba8,2);
  return;
}



// FUNCTION 141383170 FUN_141383170 body=34 status=ok
// SIG undefined FUN_141383170(void)

void FUN_141383170(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14137f3f0();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_OnBackOutToTitleChoiceMade_14490d310,0x1f);
  return;
}



// FUNCTION 1413831a0 FUN_1413831a0 body=34 status=ok
// SIG undefined FUN_1413831a0(void)

void FUN_1413831a0(void)

{
  undefined8 uVar1;
  
  uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnQuitChoiceMade_14490dc38,1);
  return;
}



// FUNCTION 1413831d0 FUN_1413831d0 body=82 status=ok
// SIG undefined FUN_1413831d0(void)

void FUN_1413831d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468861d8 == 0) {
    uVar1 = FUN_141382f90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468861d8 = GetStaticStruct(FUN_141383470,uVar2,L"GFxNotificationQueueListItem",0x50,uVar1);
  }
  return;
}



// FUNCTION 141383230 FUN_141383230 body=82 status=ok
// SIG undefined FUN_141383230(void)

void FUN_141383230(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146886358 == 0) {
    uVar1 = FUN_141382fa0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146886358 = GetStaticStruct(FUN_1413834a0,uVar2,L"GFxOakMenuHelpers",1,uVar1);
  }
  return;
}



// FUNCTION 141383290 FUN_141383290 body=82 status=ok
// SIG undefined FUN_141383290(void)

void FUN_141383290(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146886130 == 0) {
    uVar1 = FUN_141382fb0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146886130 = GetStaticStruct(FUN_1413834d0,uVar2,L"Transition",0x20,uVar1);
  }
  return;
}



// FUNCTION 1413832f0 FUN_1413832f0 body=47 status=ok
// SIG undefined FUN_1413832f0(void)

longlong FUN_1413832f0(void)

{
  if (DAT_146886158 == 0) {
    FUN_141786440(&DAT_146886158,&PTR_GetPrivateStaticClass_1449042a0);
  }
  return DAT_146886158;
}



// FUNCTION 141383320 FUN_141383320 body=47 status=ok
// SIG undefined FUN_141383320(void)

longlong FUN_141383320(void)

{
  if (DAT_146886120 == 0) {
    FUN_141786440(&DAT_146886120,&PTR_FUN_1448ff9d0);
  }
  return DAT_146886120;
}



// FUNCTION 141383350 FUN_141383350 body=47 status=ok
// SIG undefined FUN_141383350(void)

longlong FUN_141383350(void)

{
  if (DAT_146886110 == 0) {
    FUN_141786440(&DAT_146886110,&PTR_FUN_1448ff820);
  }
  return DAT_146886110;
}



// FUNCTION 141383380 FUN_141383380 body=47 status=ok
// SIG undefined FUN_141383380(void)

longlong FUN_141383380(void)

{
  if (DAT_146886368 == 0) {
    FUN_141786440(&DAT_146886368,&PTR_GetPrivateStaticClass_144906e40);
  }
  return DAT_146886368;
}



// FUNCTION 1413833b0 FUN_1413833b0 body=47 status=ok
// SIG undefined FUN_1413833b0(void)

longlong FUN_1413833b0(void)

{
  if (DAT_146886380 == 0) {
    FUN_141786440(&DAT_146886380,&PTR_GetPrivateStaticClass_144909060);
  }
  return DAT_146886380;
}



// FUNCTION 1413833e0 FUN_1413833e0 body=47 status=ok
// SIG undefined FUN_1413833e0(void)

longlong FUN_1413833e0(void)

{
  if (DAT_1468863a8 == 0) {
    FUN_141786440(&DAT_1468863a8,&PTR_GetPrivateStaticClass_144900a70);
  }
  return DAT_1468863a8;
}



// FUNCTION 141383410 FUN_141383410 body=47 status=ok
// SIG undefined FUN_141383410(void)

longlong FUN_141383410(void)

{
  if (DAT_1468863b8 == 0) {
    FUN_141786440(&DAT_1468863b8,&PTR_FUN_1448fff70);
  }
  return DAT_1468863b8;
}



// FUNCTION 141383440 FUN_141383440 body=47 status=ok
// SIG undefined FUN_141383440(void)

longlong FUN_141383440(void)

{
  if (DAT_146886378 == 0) {
    FUN_141786a30(&DAT_146886378,&PTR_Z_Construct_UPackage__Script_MechWarrior_14633d560);
  }
  return DAT_146886378;
}



// FUNCTION 141383470 FUN_141383470 body=47 status=ok
// SIG undefined FUN_141383470(void)

longlong FUN_141383470(void)

{
  if (DAT_1468861e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468861e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14633afc0);
  }
  return DAT_1468861e0;
}



// FUNCTION 1413834a0 FUN_1413834a0 body=47 status=ok
// SIG undefined FUN_1413834a0(void)

longlong FUN_1413834a0(void)

{
  if (DAT_146886360 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146886360,&PTR_Z_Construct_UPackage__Script_MechWarrior_14633d4b0);
  }
  return DAT_146886360;
}



// FUNCTION 1413834d0 FUN_1413834d0 body=47 status=ok
// SIG undefined FUN_1413834d0(void)

longlong FUN_1413834d0(void)

{
  if (DAT_146886138 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146886138,&PTR_Z_Construct_UPackage__Script_MechWarrior_146339e50);
  }
  return DAT_146886138;
}



// FUNCTION 141383530 FUN_141383530 body=204 status=ok
// SIG undefined FUN_141383530(void)

void FUN_141383530(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar5 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140ff3570(param_1,puVar5);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 141383600 FUN_141383600 body=490 status=ok
// SIG undefined FUN_141383600(void)

void FUN_141383600(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FText::FText(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res20[0] = 0;
  puVar5 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
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
  FUN_140ff3910(param_1,local_40,puVar5,local_res20[0],local_48,local_res10[0] != 0);
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
  return;
}



// FUNCTION 1413837f0 FUN_1413837f0 body=585 status=ok
// SIG undefined FUN_1413837f0(void)

void FUN_1413837f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 local_res10 [16];
  int local_res20 [2];
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FText::FText(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_54 = 0;
  puVar5 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_54);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar6 = local_res20[0] != 0;
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140ff3af0(param_1,local_48,local_res10[0],puVar5,local_54,local_50,bVar6,local_58 != 0);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  return;
}



// FUNCTION 141383a60 FUN_141383a60 body=387 status=ok
// SIG undefined FUN_141383a60(void)

void FUN_141383a60(undefined8 param_1,longlong param_2)

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
  FUN_141112540(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 141383bf0 FUN_141383bf0 body=334 status=ok
// SIG undefined FUN_141383bf0(void)

void FUN_141383bf0(undefined8 param_1,longlong param_2)

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
  FUN_141112770(param_1,local_res10,puVar6);
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



// FUNCTION 141383d40 FUN_141383d40 body=334 status=ok
// SIG undefined FUN_141383d40(void)

void FUN_141383d40(undefined8 param_1,longlong param_2)

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
  FUN_141112a80(param_1,local_res10,puVar6);
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



// FUNCTION 141383e90 FUN_141383e90 body=387 status=ok
// SIG undefined FUN_141383e90(void)

void FUN_141383e90(undefined8 param_1,longlong param_2)

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
  FUN_1411130e0(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 141384020 FUN_141384020 body=387 status=ok
// SIG undefined FUN_141384020(void)

void FUN_141384020(undefined8 param_1,longlong param_2)

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
  FUN_141113170(param_1,local_res20,local_res10[0],puVar6);
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


