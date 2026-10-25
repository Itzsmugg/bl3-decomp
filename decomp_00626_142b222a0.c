// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142b222a0 FUN_142b222a0 body=152 status=ok
// SIG undefined FUN_142b222a0(void)

void FUN_142b222a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__1457b1688;
      if (puVar1[5] != 0) {
        FMemory::Free();
      }
      if (puVar1[3] != 0) {
        FMemory::Free();
      }
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142b22340 FUN_142b22340 body=208 status=ok
// SIG undefined FUN_142b22340(void)

void FUN_142b22340(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_1457b14c8;
      if (puVar1[0xe] != 0) {
        FMemory::Free();
      }
      if (puVar1[0xc] != 0) {
        FMemory::Free();
      }
      if (puVar1[10] != 0) {
        FMemory::Free();
      }
      if (puVar1[7] != 0) {
        FMemory::Free();
      }
      if (puVar1[5] != 0) {
        FMemory::Free();
      }
      if (puVar1[3] != 0) {
        FMemory::Free();
      }
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142b22410 FUN_142b22410 body=206 status=ok
// SIG undefined FUN_142b22410(void)

void FUN_142b22410(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  
  puVar6 = (undefined8 *)*param_1;
  iVar7 = *(int *)(param_1 + 1);
  if (iVar7 != 0) {
    do {
      *puVar6 = &PTR_FUN_143fc05b0;
      if (puVar6[5] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)puVar6[4];
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
      if (puVar6[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar6);
      puVar6 = puVar6 + 7;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    puVar6 = (undefined8 *)*param_1;
  }
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar6);
  return;
}



// FUNCTION 142b224e0 FUN_142b224e0 body=133 status=ok
// SIG undefined FUN_142b224e0(void)

void FUN_142b224e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1457b12e8;
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_1457b12c8;
  param_1[4] = &PTR__scalar_deleting_destructor__1457b12a8;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 4);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22570 ~FPBDRigidSpringConstraints body=88 status=ok
// SIG undefined ~FPBDRigidSpringConstraints(void)

void Chaos::FPBDRigidSpringConstraints::~FPBDRigidSpringConstraints(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c7de08;
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b225d0 FUN_142b225d0 body=200 status=ok
// SIG undefined FUN_142b225d0(void)

void FUN_142b225d0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1457b1588;
  iVar2 = *(int *)(param_1 + 10);
  plVar1 = (longlong *)param_1[9];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[9];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 8);
  plVar1 = (longlong *)param_1[7];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[7];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b226a0 FUN_142b226a0 body=171 status=ok
// SIG undefined FUN_142b226a0(void)

void FUN_142b226a0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1457b15a8;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 10);
  plVar1 = (longlong *)param_1[9];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[9];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22750 FUN_142b22750 body=165 status=ok
// SIG undefined FUN_142b22750(void)

void FUN_142b22750(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1457b15e8;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 4);
  plVar1 = (longlong *)param_1[3];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[3];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22800 FUN_142b22800 body=101 status=ok
// SIG undefined FUN_142b22800(void)

void FUN_142b22800(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144c7de28;
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22870 FUN_142b22870 body=103 status=ok
// SIG undefined FUN_142b22870(void)

void FUN_142b22870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1457b1448;
  param_1[1] = &PTR__scalar_deleting_destructor__1457b1428;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b228e0 FUN_142b228e0 body=74 status=ok
// SIG undefined FUN_142b228e0(void)

void FUN_142b228e0(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b1428;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22930 FUN_142b22930 body=46 status=ok
// SIG undefined FUN_142b22930(void)

void FUN_142b22930(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b1468;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22960 FUN_142b22960 body=106 status=ok
// SIG undefined FUN_142b22960(void)

void FUN_142b22960(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143fc0590;
  plVar4 = (longlong *)param_1[2];
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
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b229d0 FUN_142b229d0 body=15 status=ok
// SIG undefined FUN_142b229d0(void)

void FUN_142b229d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c7de48;
  FJsonSerializable::~FJsonSerializable();
  return;
}



// FUNCTION 142b229e0 FUN_142b229e0 body=135 status=ok
// SIG undefined FUN_142b229e0(void)

void FUN_142b229e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144c7de68;
  FUN_142b22230(param_1 + 0xe);
  FUN_142b220e0(param_1 + 0xb);
  param_1[1] = &PTR_FUN_144c7de08;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22a70 FUN_142b22a70 body=130 status=ok
// SIG undefined FUN_142b22a70(void)

void FUN_142b22a70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1457b14c8;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22b00 ~FSubsurfaceProfileTexture body=46 status=ok
// SIG undefined ~FSubsurfaceProfileTexture(void)

void FSubsurfaceProfileTexture::~FSubsurfaceProfileTexture(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b14e8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22b30 FUN_142b22b30 body=69 status=ok
// SIG undefined FUN_142b22b30(void)

void FUN_142b22b30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143fc05d0;
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  FUN_142b22410(param_1 + 3);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22b80 FUN_142b22b80 body=135 status=ok
// SIG undefined FUN_142b22b80(void)

void FUN_142b22b80(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143fc05b0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
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
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22c10 FUN_142b22c10 body=101 status=ok
// SIG undefined FUN_142b22c10(void)

void FUN_142b22c10(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1457b13a8;
  iVar2 = *(int *)(param_1 + 3);
  plVar1 = (longlong *)param_1[2];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[2];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22c80 FUN_142b22c80 body=238 status=ok
// SIG undefined FUN_142b22c80(void)

void FUN_142b22c80(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144c7e048;
  iVar2 = *(int *)(param_1 + 0x17);
  plVar1 = (longlong *)param_1[0x16];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x16];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x15);
  plVar1 = (longlong *)param_1[0x14];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x14];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_142b229e0(param_1 + 4);
  iVar2 = *(int *)(param_1 + 3);
  plVar1 = (longlong *)param_1[2];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[2];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22d70 FUN_142b22d70 body=172 status=ok
// SIG undefined FUN_142b22d70(void)

void FUN_142b22d70(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1457b13c8;
  FUN_142b22c10(param_1 + 0x1b);
  iVar2 = *(int *)(param_1 + 0x1a);
  plVar1 = (longlong *)param_1[0x19];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x19];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_142b229e0(param_1 + 9);
  param_1[1] = &PTR__scalar_deleting_destructor__1457b1348;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22e20 FUN_142b22e20 body=74 status=ok
// SIG undefined FUN_142b22e20(void)

void FUN_142b22e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143fc05f0;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22e70 FUN_142b22e70 body=129 status=ok
// SIG undefined FUN_142b22e70(void)

void FUN_142b22e70(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143fc0610;
  iVar2 = *(int *)(param_1 + 6);
  plVar1 = (longlong *)param_1[5];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[5];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22f00 FUN_142b22f00 body=74 status=ok
// SIG undefined FUN_142b22f00(void)

void FUN_142b22f00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1457b1248;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b22f50 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FInterstitialAdListener::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b1348;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142b22fa0 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNetworkReplayStartUploadingResponse::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b1268;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b22ff0 FUN_142b22ff0 body=108 status=ok
// SIG undefined FUN_142b22ff0(void)

undefined8 * FUN_142b22ff0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1288;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142b23060 FUN_142b23060 body=52 status=ok
// SIG undefined FUN_142b23060(void)

undefined8 FUN_142b23060(undefined8 param_1,ulonglong param_2)

{
  FUN_142b224e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142b230a0 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSubsurfaceProfileTexture::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b1408;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b230f0 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNetworkReplayStartUploadingResponse::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b1568;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b23140 FUN_142b23140 body=94 status=ok
// SIG undefined FUN_142b23140(void)

undefined8 * FUN_142b23140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1368;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b231a0 FUN_142b231a0 body=124 status=ok
// SIG undefined FUN_142b231a0(void)

undefined8 * FUN_142b231a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1668;
  param_1[1] = &PTR_FUN_1457b1648;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b23220 FUN_142b23220 body=94 status=ok
// SIG undefined FUN_142b23220(void)

undefined8 * FUN_142b23220(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1648;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b23280 FUN_142b23280 body=124 status=ok
// SIG undefined FUN_142b23280(void)

undefined8 * FUN_142b23280(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1388;
  param_1[1] = &PTR_FUN_1457b1368;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b23300 FUN_142b23300 body=230 status=ok
// SIG undefined FUN_142b23300(void)

undefined8 * FUN_142b23300(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1457b1588;
  iVar2 = *(int *)(param_1 + 10);
  plVar1 = (longlong *)param_1[9];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[9];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 8);
  plVar1 = (longlong *)param_1[7];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[7];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142b233f0 FUN_142b233f0 body=133 status=ok
// SIG undefined FUN_142b233f0(void)

undefined8 * FUN_142b233f0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1457b15c8;
  iVar2 = *(int *)(param_1 + 3);
  lVar1 = param_1[2];
  if (iVar2 != 0) {
    do {
      FUN_142b226a0(lVar1);
      lVar1 = lVar1 + 0x68;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b23480 FUN_142b23480 body=52 status=ok
// SIG undefined FUN_142b23480(void)

undefined8 FUN_142b23480(undefined8 param_1,ulonglong param_2)

{
  FUN_142b226a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142b234c0 FUN_142b234c0 body=204 status=ok
// SIG undefined FUN_142b234c0(void)

undefined8 * FUN_142b234c0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1457b15e8;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 4);
  plVar1 = (longlong *)param_1[3];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[3];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142b23590 FUN_142b23590 body=122 status=ok
// SIG undefined FUN_142b23590(void)

undefined8 * FUN_142b23590(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b11c8;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142b23610 FUN_142b23610 body=74 status=ok
// SIG undefined FUN_142b23610(void)

undefined8 * FUN_142b23610(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b13e8;
  FUN_142b22d70(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 142b23660 FUN_142b23660 body=138 status=ok
// SIG undefined FUN_142b23660(void)

undefined8 * FUN_142b23660(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1448;
  param_1[1] = &PTR__scalar_deleting_destructor__1457b1428;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142b236f0 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FReplayEventListItem::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b1428;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142b23760 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNetworkReplayStartUploadingResponse::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b1468;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b237b0 FUN_142b237b0 body=74 status=ok
// SIG undefined FUN_142b237b0(void)

undefined8 * FUN_142b237b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b16a8;
  FUN_142b222a0(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b23800 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNetworkReplayStartUploadingResponse::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b11e8;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b23850 FUN_142b23850 body=94 status=ok
// SIG undefined FUN_142b23850(void)

undefined8 * FUN_142b23850(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1208;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b238b0 FUN_142b238b0 body=124 status=ok
// SIG undefined FUN_142b238b0(void)

undefined8 * FUN_142b238b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b12c8;
  param_1[3] = &PTR__scalar_deleting_destructor__1457b12a8;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 3);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b23930 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNetworkReplayStartUploadingResponse::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b12a8;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b23980 FUN_142b23980 body=92 status=ok
// SIG undefined FUN_142b23980(void)

undefined8 * FUN_142b23980(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1308;
  FUN_142b21ff0(param_1 + 6);
  FUN_142b21f50(param_1 + 4);
  FUN_142b21ed0(param_1 + 2);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142b239e0 FUN_142b239e0 body=103 status=ok
// SIG undefined FUN_142b239e0(void)

undefined8 * FUN_142b239e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1328;
  FUN_142b221a0(param_1 + 6);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142b23a50 FUN_142b23a50 body=94 status=ok
// SIG undefined FUN_142b23a50(void)

undefined8 * FUN_142b23a50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1488;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b23ab0 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FReplayEventListItem::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b1688;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142b23b20 FUN_142b23b20 body=138 status=ok
// SIG undefined FUN_142b23b20(void)

undefined8 * FUN_142b23b20(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1457b14a8;
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b23bb0 FUN_142b23bb0 body=119 status=ok
// SIG undefined FUN_142b23bb0(void)

undefined8 * FUN_142b23bb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1508;
  param_1[3] = &PTR__scalar_deleting_destructor__1457b14e8;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 3);
  FUN_142b22340(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142b23c30 FUN_142b23c30 body=52 status=ok
// SIG undefined FUN_142b23c30(void)

undefined8 FUN_142b23c30(undefined8 param_1,ulonglong param_2)

{
  FUN_142b22a70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142b23c70 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSubsurfaceProfileTexture::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1457b14e8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b23cc0 FUN_142b23cc0 body=154 status=ok
// SIG undefined FUN_142b23cc0(void)

undefined8 * FUN_142b23cc0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1457b1228;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b23d60 FUN_142b23d60 body=124 status=ok
// SIG undefined FUN_142b23d60(void)

undefined8 * FUN_142b23d60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1548;
  param_1[1] = &PTR_FUN_1457b1528;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142b23de0 FUN_142b23de0 body=124 status=ok
// SIG undefined FUN_142b23de0(void)

undefined8 * FUN_142b23de0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1628;
  param_1[1] = &PTR_FUN_1457b1608;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b23e60 FUN_142b23e60 body=94 status=ok
// SIG undefined FUN_142b23e60(void)

undefined8 * FUN_142b23e60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1528;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b23ec0 FUN_142b23ec0 body=94 status=ok
// SIG undefined FUN_142b23ec0(void)

undefined8 * FUN_142b23ec0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1608;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b23f20 FUN_142b23f20 body=52 status=ok
// SIG undefined FUN_142b23f20(void)

undefined8 FUN_142b23f20(undefined8 param_1,ulonglong param_2)

{
  FUN_142b22c10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b23f60 FUN_142b23f60 body=52 status=ok
// SIG undefined FUN_142b23f60(void)

undefined8 FUN_142b23f60(undefined8 param_1,ulonglong param_2)

{
  FUN_142b22d70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142b23fa0 FUN_142b23fa0 body=108 status=ok
// SIG undefined FUN_142b23fa0(void)

undefined8 * FUN_142b23fa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457b1248;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142b24010 FUN_142b24010 body=766 status=ok
// SIG undefined FUN_142b24010(void)

undefined1 FUN_142b24010(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_28 [2];
  
  if (*param_2 != 0) {
    local_28[1] = 0x13;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0x13,"gap_length_penalty",0x13,0x3f);
    cVar1 = FUN_1416b3b00(*param_2,local_28,param_1 + 8);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_28[0] = 0;
      local_28[1] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0xc,"gap_penalty",0xc,0x3f);
      cVar1 = FUN_1416b3b00(*param_2,local_28,param_1 + 0xc);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        local_28[0] = 0;
        local_28[1] = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0xe,"max_gap_count",0xe,0x3f);
        cVar1 = FUN_1416b3b00(*param_2,local_28,param_1 + 0x10);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (cVar1 != '\0') {
          local_28[0] = 0;
          local_28[1] = 0x15;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
          FGenericPlatformString::Convert<char,wchar_t>
                    (local_28[0],0x15,"row_bonus_multiplier",0x15,0x3f);
          cVar1 = FUN_1416b3cc0(*param_2,local_28,param_1 + 0x18);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          if (cVar1 != '\0') {
            local_28[0] = 0;
            local_28[1] = 6;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
            FGenericPlatformString::Convert<char,wchar_t>(local_28[0],6,"match",6,0x3f);
            cVar1 = FUN_1416b3b00(*param_2,local_28,param_1 + 0x20);
            if (local_28[0] != 0) {
              FMemory::Free();
            }
            if (cVar1 != '\0') {
              local_28[0] = 0;
              local_28[1] = 9;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
              FGenericPlatformString::Convert<char,wchar_t>(local_28[0],9,"mismatch",9,0x3f);
              cVar1 = FUN_1416b3b00(*param_2,local_28,param_1 + 0x24);
              if (local_28[0] != 0) {
                FMemory::Free();
              }
              if (cVar1 != '\0') {
                local_28[0] = 0;
                local_28[1] = 8;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
                FGenericPlatformString::Convert<char,wchar_t>(local_28[0],8,"version",8,0x3f);
                cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 0x28);
                if (local_28[0] != 0) {
                  FMemory::Free();
                }
                if (cVar1 != '\0') {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b24310 FUN_142b24310 body=144 status=ok
// SIG undefined FUN_142b24310(void)

undefined8 FUN_142b24310(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 10;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],10,"startTime",10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b243a0 FUN_142b243a0 body=342 status=ok
// SIG undefined FUN_142b243a0(void)

undefined1 FUN_142b243a0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 7;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],7,"header",7,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"summary",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_1457aa8c4,5,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b24500 FUN_142b24500 body=252 status=ok
// SIG undefined FUN_142b24500(void)

undefined8 FUN_142b24500(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 9;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"meta_tag",0x12);
  cVar1 = FUN_1416b3e60(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10,param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],6,"value",6,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x38);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b24600 FUN_142b24600 body=469 status=ok
// SIG undefined FUN_142b24600(void)

undefined1 FUN_142b24600(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_28 [2];
  
  if (*param_2 != 0) {
    local_28[1] = 2;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_28[0],2,&DAT_145774a8c,2,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 8);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_28[0] = 0;
      local_28[1] = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_28[0],2,&DAT_145774c8c,2,0x3f);
      cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 0x18);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        local_28[0] = 0;
        local_28[1] = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_28[0],2,&DAT_145774d2c,2,0x3f);
        cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 0x28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (cVar1 != '\0') {
          local_28[0] = 0;
          local_28[1] = 2;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
          FGenericPlatformString::Convert<char,wchar_t>(local_28[0],2,&DAT_145774ecc,2,0x3f);
          cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 0x38);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b247e0 FUN_142b247e0 body=253 status=ok
// SIG undefined FUN_142b247e0(void)

undefined1 FUN_142b247e0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 10;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],10,"remaining",10,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],10,"wait_time",10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b248e0 FUN_142b248e0 body=144 status=ok
// SIG undefined FUN_142b248e0(void)

undefined8 FUN_142b248e0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0xb;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"event_guid",0xb,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b24970 FUN_142b24970 body=279 status=ok
// SIG undefined FUN_142b24970(void)

undefined8 FUN_142b24970(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[0] = 0;
    local_18[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_145775df4,5,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_18[0] = 0;
      local_18[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"message",8,0x3f);
      cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142b24a90 FUN_142b24a90 body=150 status=ok
// SIG undefined FUN_142b24a90(void)

undefined8 FUN_142b24a90(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"error",0xc);
  cVar1 = FUN_1416b3e60(*param_2,local_18,local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10[0],param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b24b30 FUN_142b24b30 body=253 status=ok
// SIG undefined FUN_142b24b30(void)

undefined1 FUN_142b24b30(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_1457912f0,5,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"message",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b24c30 FUN_142b24c30 body=168 status=ok
// SIG undefined FUN_142b24c30(void)

undefined8 FUN_142b24c30(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Error",0xc);
  cVar2 = FUN_1416b3e60(*param_2,local_18,local_res10);
  if ((cVar2 == '\0') ||
     (cVar2 = FLadderPlayerMode::Accept(local_res10[0],param_1 + 8), cVar2 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}



// FUNCTION 142b24ce0 FUN_142b24ce0 body=575 status=ok
// SIG undefined FUN_142b24ce0(void)

undefined1 FUN_142b24ce0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  longlong local_38 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_38[1] = 9;
  local_38[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],9,"category",9,0x3f);
  cVar2 = FUN_1416b40a0(*param_2,local_38,param_1 + 8);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (cVar2 == '\0') {
    return 0;
  }
  local_38[0] = 0;
  local_38[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],0xb,"event_guid",0xb,0x3f);
  cVar2 = FUN_1416b40a0(*param_2,local_38,param_1 + 0x18);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (cVar2 == '\0') {
    return 0;
  }
  local_38[0] = 0;
  local_38[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],8,"details",8,0x3f);
  cVar2 = FUN_1416b40a0(*param_2,local_38,param_1 + 0x28);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (cVar2 == '\0') {
    return 0;
  }
  local_38[0] = 0;
  local_38[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"associated_ids",0x1e);
  cVar2 = FUN_1416b3850(*param_2,local_38,&local_res10);
  if (cVar2 != '\0') {
    cVar2 = FUN_142b0c680(local_res10,param_1 + 0x38);
    bVar1 = false;
    if (cVar2 != '\0') goto LAB_142b24e8a;
  }
  bVar1 = true;
LAB_142b24e8a:
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    return 0;
  }
  local_38[0] = 0;
  local_38[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"audience",0x12);
  cVar2 = FUN_1416b3850(*param_2,local_38,local_res18);
  if (cVar2 != '\0') {
    FUN_142b0c680(local_res18[0],param_1 + 0x48);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b24f20 FUN_142b24f20 body=617 status=ok
// SIG undefined FUN_142b24f20(void)

undefined8 FUN_142b24f20(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *local_res10;
  longlong local_a8;
  undefined8 local_a0;
  undefined **local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  if (*param_2 == 0) {
    return 0;
  }
  local_a0 = 6;
  local_a8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_a8,6,"count",6,0x3f);
  FUN_1416b3b00(*param_2,&local_a8,param_1 + 8);
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"events",0xe);
  cVar1 = FUN_1416b3850(*param_2,&local_a8,&local_res10);
  if (cVar1 != '\0') {
    lVar3 = *local_res10;
    lVar5 = (longlong)(int)local_res10[1] * 0x10 + lVar3;
    for (; lVar3 != lVar5; lVar3 = lVar3 + 0x10) {
      FStatData::FStatData(&local_98);
      local_98 = &PTR_FUN_1457b15a8;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = (longlong *)0x0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      cVar1 = FUN_142af74a0(lVar3,&local_98);
      if (cVar1 != '\0') {
        iVar4 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar4 + 1;
        if (*(int *)(param_1 + 0x1c) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0x10,iVar4);
        }
        FUN_142b213e0((longlong)iVar4 * 0x68 + *(longlong *)(param_1 + 0x10),&local_98);
      }
      local_98 = &PTR_FUN_1457b15a8;
      if (local_40 != 0) {
        FMemory::Free();
      }
      plVar2 = local_50;
      for (iVar4 = (int)local_48; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 2;
      }
      if (local_50 != (longlong *)0x0) {
        FMemory::Free(local_50);
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_80 != 0) {
        FMemory::Free();
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(&local_98);
    }
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b25190 FUN_142b25190 body=583 status=ok
// SIG undefined FUN_142b25190(void)

undefined1 FUN_142b25190(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_28 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_28[0] = 0;
  local_28[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0xb,"event_guid",0xb,0x3f);
  FUN_1416b40a0(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],9,"category",9,0x3f);
  FUN_1416b40a0(*param_2,local_28,param_1 + 0x18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0xc,"time_posted",0xc,0x3f);
  FUN_1416b40a0(*param_2,local_28,param_1 + 0x28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],6,"owner",6,0x3f);
  FUN_1416b40a0(*param_2,local_28,param_1 + 0x38);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"associated_ids",0x1e);
  cVar1 = FUN_1416b3850(*param_2,local_28,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c680(local_res10,param_1 + 0x48);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],8,"details",8,0x3f);
  FUN_1416b40a0(*param_2,local_28,param_1 + 0x58);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b253e0 FUN_142b253e0 body=473 status=ok
// SIG undefined FUN_142b253e0(void)

undefined1 FUN_142b253e0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  longlong local_38 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_38[1] = 8;
  local_38[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"friends",0x10);
  cVar2 = FUN_1416b3850(*param_2,local_38,&local_res10);
  if ((cVar2 == '\0') || (cVar2 = FUN_142b0c680(local_res10,param_1 + 8), cVar2 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (!bVar1) {
    local_38[0] = 0;
    local_38[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"categories",0x16);
    cVar2 = FUN_1416b3850(*param_2,local_38,local_res18);
    if (cVar2 != '\0') {
      FUN_142b0c680(local_res18[0],param_1 + 0x18);
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    local_38[0] = 0;
    local_38[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_38[0],6,"after",6,0x3f);
    cVar2 = FUN_1416b40a0(*param_2,local_38,param_1 + 0x28);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') {
      local_38[0] = 0;
      local_38[1] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_38[0],0xb,"max_events",0xb,0x3f);
      cVar2 = FUN_1416b3b00(*param_2,local_38,param_1 + 0x38);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142b255c0 FUN_142b255c0 body=667 status=ok
// SIG undefined FUN_142b255c0(void)

undefined1 FUN_142b255c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_28 [2];
  
  if (*param_2 != 0) {
    local_28[1] = 10;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_28[0],10,"crossplay",10,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 8);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_28[0] = 0;
      local_28[1] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0xe,"max_occupants",0xe,0x3f);
      cVar1 = FUN_1416b3d70(*param_2,local_28,param_1 + 0x18);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        local_28[0] = 0;
        local_28[1] = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_28[0],9,"metadata",9,0x3f);
        cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 0x20);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (cVar1 != '\0') {
          local_28[0] = 0;
          local_28[1] = 0xf;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
          FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0xf,"occupant_count",0xf,0x3f);
          cVar1 = FUN_1416b3d70(*param_2,local_28,param_1 + 0x30);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          if (cVar1 != '\0') {
            local_28[0] = 0;
            local_28[1] = 8;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
            FGenericPlatformString::Convert<char,wchar_t>(local_28[0],8,"privacy",8,0x3f);
            cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 0x38);
            if (local_28[0] != 0) {
              FMemory::Free();
            }
            if (cVar1 != '\0') {
              local_28[0] = 0;
              local_28[1] = 6;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
              FGenericPlatformString::Convert<char,wchar_t>(local_28[0],6,"title",6,0x3f);
              cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 0x48);
              if (local_28[0] != 0) {
                FMemory::Free();
              }
              if (cVar1 != '\0') {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b25860 FUN_142b25860 body=168 status=ok
// SIG undefined FUN_142b25860(void)

undefined8 FUN_142b25860(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"task",10);
  cVar2 = FUN_1416b3e60(*param_2,local_18,local_res10);
  if ((cVar2 == '\0') ||
     (cVar2 = FLadderPlayerMode::Accept(local_res10[0],param_1 + 8), cVar2 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}



// FUNCTION 142b25910 FUN_142b25910 body=168 status=ok
// SIG undefined FUN_142b25910(void)

undefined8 FUN_142b25910(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"symbols",0x10);
  cVar2 = FUN_1416b3850(*param_2,local_18,local_res10);
  if ((cVar2 == '\0') || (cVar2 = FUN_142b0c680(local_res10[0],param_1 + 8), cVar2 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}



// FUNCTION 142b259c0 FUN_142b259c0 body=168 status=ok
// SIG undefined FUN_142b259c0(void)

undefined8 FUN_142b259c0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message",0x10);
  cVar2 = FUN_1416b3e60(*param_2,local_18,local_res10);
  if ((cVar2 == '\0') ||
     (cVar2 = FLadderPlayerMode::Accept(local_res10[0],param_1 + 8), cVar2 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}



// FUNCTION 142b25a70 FUN_142b25a70 body=469 status=ok
// SIG undefined FUN_142b25a70(void)

undefined1 FUN_142b25a70(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_28 [2];
  
  if (*param_2 != 0) {
    local_28[1] = 0xd;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0xd,"to_player_id",0xd,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 8);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_28[0] = 0;
      local_28[1] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0xd,"item_payload",0xd,0x3f);
      cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 0x18);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        local_28[0] = 0;
        local_28[1] = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0x10,"item_identifier",0x10,0x3f);
        cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 0x28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (cVar1 != '\0') {
          local_28[0] = 0;
          local_28[1] = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
          FGenericPlatformString::Convert<char,wchar_t>(local_28[0],9,"to_shift",9,0x3f);
          cVar1 = FUN_1416b3900(*param_2,local_28,param_1 + 0x38);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b25c50 FUN_142b25c50 body=153 status=ok
// SIG undefined FUN_142b25c50(void)

undefined8 FUN_142b25c50(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[1] = 0xe;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xe,"message_state",0xe,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142b25cf0 FUN_142b25cf0 body=832 status=ok
// SIG undefined FUN_142b25cf0(void)

undefined8 FUN_142b25cf0(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_res10;
  longlong local_78;
  undefined8 local_70;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*param_2 == 0) {
    return 0;
  }
  local_70 = 0xc;
  local_78 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"qos_servers",0x18);
  cVar2 = FUN_1416b3850(*param_2,&local_78,&local_res10);
  if (cVar2 != '\0') {
    lVar4 = *local_res10;
    lVar5 = (longlong)(int)local_res10[1] * 0x10 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
      FStatData::FStatData(&local_68);
      local_38 = 0;
      uStack_30 = 0xffffffffffffffff;
      local_68 = &PTR__scalar_deleting_destructor__1457b1688;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      cVar2 = FUN_142af74a0(lVar4,&local_68);
      if (cVar2 != '\0') {
        iVar1 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar1 + 1;
        if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 8,iVar1);
        }
        puVar3 = (undefined8 *)((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 8));
        *puVar3 = &PTR__scalar_deleting_destructor__1457b1688;
        FString::FString(puVar3 + 1,&local_60);
        FString::FString(puVar3 + 3,&local_50);
        FString::FString(puVar3 + 5,&local_40);
        *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_30._4_4_;
      }
      local_68 = &PTR__scalar_deleting_destructor__1457b1688;
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(&local_68);
    }
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_78,9,"attempts",9,0x3f);
  FUN_1416b3b00(*param_2,&local_78,param_1 + 0x18);
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_78,8,"timeout",8,0x3f);
  FUN_1416b3b00(*param_2,&local_78,param_1 + 0x1c);
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_78,5,&DAT_14579b514,5,0x3f);
  FUN_1416b3b00(*param_2,&local_78,param_1 + 0x20);
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_78,5,&DAT_14579cc78,5,0x3f);
  FUN_1416b3b00(*param_2,&local_78,param_1 + 0x24);
  if (local_78 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b26030 FUN_142b26030 body=428 status=ok
// SIG undefined FUN_142b26030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142b26030(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined1 auStack_a8 [32];
  undefined2 local_88;
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68 [4];
  undefined8 *local_48;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (*param_2 != 0) {
    local_68[1] = 9;
    local_48 = (undefined8 *)0x0;
    local_68[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    local_88 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_68[0],9,"metadata");
    cVar8 = FUN_1416b3e60(*param_2,local_68,&local_48);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (cVar8 != '\0') {
      puVar1 = (undefined8 *)(param_1 + 8);
      plVar5 = (longlong *)local_48[1];
      uVar6 = *local_48;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_78 = uVar6;
      plStack_70 = plVar5;
      if (&local_78 != puVar1) {
        local_78 = *puVar1;
        plStack_70 = *(longlong **)(param_1 + 0x10);
        *puVar1 = uVar6;
        *(longlong **)(param_1 + 0x10) = plVar5;
        local_40 = uVar6;
        plStack_38 = plVar5;
      }
      plVar5 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_70 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_70 + 8))(plStack_70,1);
          }
        }
      }
      local_68[2] = 0;
      local_68[3] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
      local_88 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_68[2],0xd,"time_to_live");
      FUN_1416b3d70(*param_2,local_68 + 2,param_1 + 0x18);
      if (local_68[2] != 0) {
        FMemory::Free();
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142b261e0 FUN_142b261e0 body=153 status=ok
// SIG undefined FUN_142b261e0(void)

undefined8 FUN_142b261e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[1] = 8;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"expires",8,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142b26280 FUN_142b26280 body=279 status=ok
// SIG undefined FUN_142b26280(void)

undefined8 FUN_142b26280(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[0] = 0;
    local_18[1] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x10,"friend_passcode",0x10,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_18[0] = 0;
      local_18[1] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"lobby_id",9,0x3f);
      cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142b263a0 FUN_142b263a0 body=254 status=ok
// SIG undefined FUN_142b263a0(void)

undefined8 FUN_142b263a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 4;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],4,&DAT_145779adc,4,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"meta_tag_type",0x1c);
  cVar1 = FUN_1416b3e60(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10,param_1 + 0x18);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b264a0 FUN_142b264a0 body=144 status=ok
// SIG undefined FUN_142b264a0(void)

undefined8 FUN_142b264a0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_1457ac624,5,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b26530 FUN_142b26530 body=1240 status=ok
// SIG undefined FUN_142b26530(void)

undefined8 FUN_142b26530(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined **local_a0;
  longlong local_98;
  longlong local_90;
  undefined **local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  
  if (*param_2 == 0) {
    return 0;
  }
  local_b0 = 3;
  local_b8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_b8,3,&DAT_145774fa4,3,0x3f);
  FUN_1416b3b00(*param_2,&local_b8,param_1 + 8);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_b8 = 0;
  local_b0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"availabilities",0x1e);
  cVar3 = FUN_1416b3850(*param_2,&local_b8,&local_res10);
  if (cVar3 != '\0') {
    lVar4 = *local_res10;
    lVar7 = (longlong)(int)local_res10[1] * 0x10 + lVar4;
    for (; lVar4 != lVar7; lVar4 = lVar4 + 0x10) {
      FStatData::FStatData(&local_58);
      local_58 = &PTR__scalar_deleting_destructor__1457b1268;
      local_50 = 0;
      local_48 = 0;
      cVar3 = FUN_142af74a0(lVar4,&local_58);
      if (cVar3 != '\0') {
        iVar1 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0x10,iVar1);
        }
        lVar2 = *(longlong *)(param_1 + 0x10);
        lVar6 = (longlong)iVar1 * 3 + 1;
        *(undefined ***)(lVar2 + -8 + lVar6 * 8) = &PTR__scalar_deleting_destructor__1457b1268;
        FString::FString(lVar2 + lVar6 * 8,&local_50);
      }
      local_58 = &PTR__scalar_deleting_destructor__1457b1268;
      if (local_50 != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(&local_58);
    }
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_b8 = 0;
  local_b0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"contents",0x12);
  cVar3 = FUN_1416b3850(*param_2,&local_b8,&local_res18);
  if (cVar3 != '\0') {
    lVar4 = *local_res18;
    lVar7 = (longlong)(int)local_res18[1] * 0x10 + lVar4;
    for (; lVar4 != lVar7; lVar4 = lVar4 + 0x10) {
      FStatData::FStatData(&local_a8);
      local_a8 = &PTR_FUN_1457b1288;
      local_a0 = (undefined **)0x0;
      local_98 = 0;
      local_90 = 0;
      local_88 = (undefined **)0x0;
      local_80 = 0;
      local_78 = 0;
      cVar3 = FUN_142af74a0(lVar4,&local_a8);
      if (cVar3 != '\0') {
        iVar1 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar1 + 1;
        if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0x20,iVar1);
        }
        puVar5 = (undefined8 *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x20));
        *puVar5 = &PTR_FUN_1457b1288;
        FString::FString(puVar5 + 1,&local_a0);
        FString::FString(puVar5 + 3,&local_90);
        FString::FString(puVar5 + 5,&local_80);
      }
      local_a8 = &PTR_FUN_1457b1288;
      if (local_80 != 0) {
        FMemory::Free();
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
      if (local_a0 != (undefined **)0x0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(&local_a8);
    }
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_b8 = 0;
  local_b0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"article_tags",0x1a);
  cVar3 = FUN_1416b3850(*param_2,&local_b8,&local_res20);
  if (cVar3 != '\0') {
    lVar4 = *local_res20;
    lVar7 = (longlong)(int)local_res20[1] * 0x10 + lVar4;
    for (; lVar4 != lVar7; lVar4 = lVar4 + 0x10) {
      FStatData::FStatData(&local_a8);
      local_a8 = &PTR_FUN_1457b12e8;
      FStatData::FStatData(&local_a0);
      local_a0 = &PTR_FUN_1457b12c8;
      local_98 = 0;
      local_90 = 0;
      FStatData::FStatData(&local_88);
      local_88 = &PTR__scalar_deleting_destructor__1457b12a8;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      cVar3 = FUN_142af74a0(lVar4,&local_a8);
      if (cVar3 != '\0') {
        iVar1 = *(int *)(param_1 + 0x38);
        lVar6 = (longlong)iVar1;
        *(int *)(param_1 + 0x38) = iVar1 + 1;
        if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow
                    ((longlong *)(param_1 + 0x30),iVar1);
        }
        lVar2 = *(longlong *)(param_1 + 0x30);
        *(undefined ***)(lVar2 + lVar6 * 0x48) = &PTR_FUN_1457b12e8;
        *(undefined ***)(lVar2 + 8 + lVar6 * 0x48) = &PTR_FUN_1457b12c8;
        lVar2 = lVar2 + lVar6 * 0x48;
        FString::FString(lVar2 + 0x10,&local_98);
        *(undefined ***)(lVar2 + 0x20) = &PTR__scalar_deleting_destructor__1457b12a8;
        FString::FString(lVar2 + 0x28,&local_80);
        FString::FString(lVar2 + 0x38,&local_70);
      }
      local_a8 = &PTR_FUN_1457b12e8;
      if (local_70 != 0) {
        FMemory::Free();
      }
      local_a0 = &PTR_FUN_1457b12c8;
      local_88 = &PTR__scalar_deleting_destructor__1457b12a8;
      if (local_80 != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(&local_88);
      if (local_98 != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(&local_a0);
      FJsonSerializable::~FJsonSerializable(&local_a8);
    }
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b26a10 FUN_142b26a10 body=650 status=ok
// SIG undefined FUN_142b26a10(void)

undefined8 FUN_142b26a10(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_res10;
  longlong local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (*param_2 == 0) {
    return 0;
  }
  local_70 = 8;
  local_78 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_78,8,"version",8,0x3f);
  FUN_1416b40a0(*param_2,&local_78,param_1 + 8);
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_78,7,"status",7,0x3f);
  FUN_1416b3b00(*param_2,&local_78,param_1 + 0x18);
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_78,8,"message",8,0x3f);
  FUN_1416b40a0(*param_2,&local_78,param_1 + 0x20);
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"data",10);
  cVar2 = FUN_1416b3850(*param_2,&local_78,&local_res10);
  if (cVar2 != '\0') {
    lVar3 = *local_res10;
    lVar4 = (longlong)(int)local_res10[1] * 0x10 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x10) {
      FStatData::FStatData(&local_68);
      local_68 = &PTR_FUN_1457b1308;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_60 = 0;
      cVar2 = FUN_142af74a0(lVar3,&local_68);
      if (cVar2 != '\0') {
        iVar1 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar1 + 1;
        if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow((longlong *)(param_1 + 0x30),iVar1);
        }
        FUN_142b218c0((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x30),&local_68);
      }
      local_68 = &PTR_FUN_1457b1308;
      FUN_142b21ff0(&local_38);
      FUN_142b21f50(&local_48);
      FUN_142b21ed0(&local_58);
      FJsonSerializable::~FJsonSerializable(&local_68);
    }
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b26ca0 FUN_142b26ca0 body=279 status=ok
// SIG undefined FUN_142b26ca0(void)

undefined8 FUN_142b26ca0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[0] = 0;
    local_18[1] = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],2,&DAT_14577574c,2,0x3f);
    cVar1 = FUN_1416b3b00(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_18[0] = 0;
      local_18[1] = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],2,&DAT_1457757f4,2,0x3f);
      cVar1 = FUN_1416b3b00(*param_2,local_18,param_1 + 0xc);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142b26dc0 FUN_142b26dc0 body=998 status=ok
// SIG undefined FUN_142b26dc0(void)

undefined8 FUN_142b26dc0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_res18;
  longlong *local_res20;
  longlong *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined **local_50;
  longlong *local_48;
  undefined8 local_40;
  
  if (*param_2 != 0) {
    local_58 = 7;
    local_60 = (undefined **)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    FGenericPlatformString::Memcpy(local_60,L"colors",0xe);
    cVar2 = FUN_1416b3e60(*param_2,&local_60,&local_res18);
    if ((cVar2 == '\0') ||
       (cVar2 = FLadderPlayerMode::Accept(local_res18,param_1 + 8), cVar2 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (local_60 != (undefined **)0x0) {
      FMemory::Free();
    }
    if (!bVar1) {
      local_60 = (undefined **)0x0;
      local_58 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_60,0xb,"difficulty",0xb,0x3f);
      FUN_1416b3b00(*param_2,&local_60,param_1 + 0x50);
      if (local_60 != (undefined **)0x0) {
        FMemory::Free();
      }
      local_60 = (undefined **)0x0;
      local_58 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
      FGenericPlatformString::Memcpy(local_60,L"guides",0xe);
      cVar2 = FUN_1416b3850(*param_2,&local_60,&local_res20);
      if (cVar2 != '\0') {
        lVar5 = *local_res20;
        lVar7 = (longlong)(int)local_res20[1] * 0x10 + lVar5;
        for (; lVar5 != lVar7; lVar5 = lVar5 + 0x10) {
          FStatData::FStatData(&local_50);
          local_50 = &PTR_FUN_144c7de28;
          local_48 = (longlong *)0x0;
          local_40 = 0;
          cVar2 = FUN_142af74a0(lVar5,&local_50);
          if (cVar2 != '\0') {
            iVar6 = *(int *)(param_1 + 0x60);
            *(int *)(param_1 + 0x60) = iVar6 + 1;
            if (*(int *)(param_1 + 100) < iVar6 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(param_1 + 0x58,iVar6);
            }
            FUN_142b21640(*(longlong *)(param_1 + 0x58) + (longlong)iVar6 * 0x18,&local_50);
          }
          local_50 = &PTR_FUN_144c7de28;
          plVar4 = local_48;
          for (iVar6 = (int)local_40; iVar6 != 0; iVar6 = iVar6 + -1) {
            if (*plVar4 != 0) {
              FMemory::Free();
            }
            plVar4 = plVar4 + 2;
          }
          if (local_48 != (longlong *)0x0) {
            FMemory::Free(local_48);
          }
          FJsonSerializable::~FJsonSerializable(&local_50);
        }
      }
      if (local_60 != (undefined **)0x0) {
        FMemory::Free();
      }
      local_60 = (undefined **)0x0;
      local_58 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_60,0xc,"joker_count",0xc,0x3f);
      FUN_1416b3b00(*param_2,&local_60,param_1 + 0x68);
      if (local_60 != (undefined **)0x0) {
        FMemory::Free();
      }
      local_60 = (undefined **)0x0;
      local_58 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_60,0xe,"left_to_right",0xe,0x3f);
      cVar2 = FUN_1416b3900(*param_2,&local_60,param_1 + 0x6c);
      if (local_60 != (undefined **)0x0) {
        FMemory::Free();
      }
      if (cVar2 != '\0') {
        local_50 = (undefined **)0x0;
        local_48 = (longlong *)0x8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
        FGenericPlatformString::Memcpy(local_50,L"shuffle",0x10);
        cVar2 = FUN_1416b3850(*param_2,&local_50,&local_68);
        if (cVar2 == '\0') {
          bVar1 = true;
        }
        else {
          lVar5 = *local_68;
          lVar7 = (longlong)(int)local_68[1] * 0x10 + lVar5;
          for (; lVar5 != lVar7; lVar5 = lVar5 + 0x10) {
            FStatData::FStatData(&local_60);
            local_60 = &PTR_FUN_144c7de48;
            local_58 = 0;
            cVar2 = FUN_142af74a0(lVar5,&local_60);
            if (cVar2 != '\0') {
              iVar6 = *(int *)(param_1 + 0x78);
              *(int *)(param_1 + 0x78) = iVar6 + 1;
              if (*(int *)(param_1 + 0x7c) < iVar6 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x70,iVar6);
              }
              puVar3 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x70));
              *puVar3 = &PTR_FUN_144c7de48;
              *(undefined4 *)(puVar3 + 1) = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar3 + 0xc) = local_58._4_4_;
            }
            local_60 = &PTR_FUN_144c7de48;
            FJsonSerializable::~FJsonSerializable(&local_60);
          }
          bVar1 = false;
        }
        if (local_50 != (undefined **)0x0) {
          FMemory::Free();
        }
        if (!bVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b271b0 FUN_142b271b0 body=253 status=ok
// SIG undefined FUN_142b271b0(void)

undefined1 FUN_142b271b0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 7;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],7,"status",7,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],7,"result",7,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b272b0 FUN_142b272b0 body=514 status=ok
// SIG undefined FUN_142b272b0(void)

undefined1 FUN_142b272b0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_145775744,5,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"address",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_145776264,5,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_145777620,5,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 0x38);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_1457777c8,5,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 0x3c);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b274c0 FUN_142b274c0 body=150 status=ok
// SIG undefined FUN_142b274c0(void)

undefined8 FUN_142b274c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0x10;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"ignored_players",0x20);
  cVar1 = FUN_1416b3850(*param_2,local_18,local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c680(local_res10[0],param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b27560 FUN_142b27560 body=258 status=ok
// SIG undefined FUN_142b27560(void)

undefined1 FUN_142b27560(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 9;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"messages",0x12);
  cVar1 = FUN_1416b3850(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b208c0(local_res10,param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"status",0xe);
  cVar1 = FUN_1416b3e60(*param_2,local_18,&local_res18);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res18,param_1 + 0x18);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b27670 FUN_142b27670 body=766 status=ok
// SIG undefined FUN_142b27670(void)

undefined1 FUN_142b27670(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"trade_guid",0xb,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xf,"from_player_id",0xf,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"expires_at",0xb,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],10,"date_sent",10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x38);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"trade_type",0xb,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 0x48);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"item_payload",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x50);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x10,"item_identifier",0x10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x60);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"platform",9,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x70);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b27970 FUN_142b27970 body=342 status=ok
// SIG undefined FUN_142b27970(void)

undefined1 FUN_142b27970(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 9;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"can_send",9,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x10,"sends_remaining",0x10,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 0xc);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],10,"wait_time",10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b27ad0 FUN_142b27ad0 body=880 status=ok
// SIG undefined FUN_142b27ad0(void)

undefined8 FUN_142b27ad0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *local_res18 [2];
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8 [6];
  undefined **local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  longlong local_50;
  undefined8 local_48;
  
  if (*param_2 != 0) {
    local_c0 = 10;
    local_c8 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_c8,10,"crossplay",10,0x3f);
    FUN_1416b40a0(*param_2,&local_c8,param_1 + 8);
    if (local_c8 != 0) {
      FMemory::Free();
    }
    local_b8 = 0;
    local_b0 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"filters",0x10);
    cVar7 = FUN_1416b3850(*param_2,&local_b8,local_res18);
    if (cVar7 == '\0') {
      bVar4 = true;
    }
    else {
      lVar9 = *local_res18[0];
      lVar10 = (longlong)(int)local_res18[0][1] * 0x10 + lVar9;
      for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
        FStatData::FStatData(&local_78);
        local_78 = &PTR_FUN_143fc05b0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        plStack_58 = (longlong *)0x0;
        local_50 = 0;
        local_48 = 0;
        cVar7 = FUN_142af74a0(lVar9,&local_78);
        if (cVar7 != '\0') {
          iVar3 = *(int *)(param_1 + 0x20);
          *(int *)(param_1 + 0x20) = iVar3 + 1;
          if (*(int *)(param_1 + 0x24) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(param_1 + 0x18,iVar3);
          }
          puVar8 = (undefined8 *)((longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 0x18));
          *puVar8 = &PTR_FUN_143fc05b0;
          FString::FString(puVar8 + 1,&local_70);
          puVar8[3] = local_60;
          puVar8[4] = plStack_58;
          if (plStack_58 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
            UNLOCK();
          }
          FString::FString(puVar8 + 5,&local_50);
        }
        local_78 = &PTR_FUN_143fc05b0;
        if (local_50 != 0) {
          FMemory::Free();
        }
        plVar6 = plStack_58;
        if (plStack_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_58 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_58)(plStack_58);
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
        if (local_70 != 0) {
          FMemory::Free();
        }
        FJsonSerializable::~FJsonSerializable(&local_78);
      }
      bVar4 = false;
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
    if (!bVar4) {
      local_a8[0] = 0;
      local_a8[1] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_a8[0],0xc,"max_results",0xc,0x3f);
      cVar7 = FUN_1416b3d70(*param_2,local_a8,param_1 + 0x28);
      if (local_a8[0] != 0) {
        FMemory::Free();
      }
      if (cVar7 != '\0') {
        local_a8[2] = 0;
        local_a8[3] = 0xf;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_a8[2],0xf,"min_open_slots",0xf,0x3f);
        FUN_1416b3d70(*param_2,local_a8 + 2,param_1 + 0x30);
        if (local_a8[2] != 0) {
          FMemory::Free();
        }
        local_a8[4] = 0;
        local_a8[5] = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_a8[4],0xd,"result_group",0xd,0x3f);
        cVar7 = FUN_1416b40a0(*param_2,local_a8 + 4,param_1 + 0x38);
        if (local_a8[4] != 0) {
          FMemory::Free();
        }
        if (cVar7 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b27e40 FUN_142b27e40 body=280 status=ok
// SIG undefined FUN_142b27e40(void)

undefined8 FUN_142b27e40(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[1] = 8;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"lobbies",0x10);
    cVar2 = FUN_1416b3850(*param_2,local_18,&local_res10);
    if ((cVar2 == '\0') || (cVar2 = FUN_142b0c680(local_res10,param_1 + 8), cVar2 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (!bVar1) {
      local_18[0] = 0;
      local_18[1] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"next_group",0xb,0x3f);
      cVar2 = FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142b27f60 FUN_142b27f60 body=744 status=ok
// SIG undefined FUN_142b27f60(void)

undefined8 FUN_142b27f60(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int local_res10 [2];
  longlong *local_88;
  longlong *local_80;
  longlong local_78 [7];
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  plVar10 = (longlong *)0x0;
  local_res10[0] = 0;
  if (*param_2 != 0) {
    local_78[0] = 0;
    local_78[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_78[0],9,"operator",9,0x3f);
    cVar7 = FUN_1416b40a0(*param_2,local_78,param_1 + 8);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (cVar7 != '\0') {
      local_78[2] = 0;
      local_78[3] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 2,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_78[2],6,"value",6,0x3f);
      plVar8 = (longlong *)*param_2;
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId(plVar8,local_res10,local_78 + 2);
      plVar9 = plVar10;
      if (local_res10[0] != -1) {
        plVar9 = (longlong *)(*plVar8 + (longlong)local_res10[0] * 0x28);
      }
      plVar8 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        plVar8 = plVar10;
      }
      if ((plVar8 == (longlong *)0x0) || (plVar9 = (longlong *)*plVar8, plVar9 == (longlong *)0x0))
      {
        plVar8 = &local_38;
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
        bVar5 = false;
        bVar4 = true;
      }
      else {
        local_40 = (longlong *)plVar8[1];
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        plVar8 = local_78 + 6;
        bVar5 = true;
        bVar4 = false;
        plVar10 = plVar9;
        local_78[6] = (longlong)plVar9;
      }
      local_80 = (longlong *)plVar8[1];
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8 = plStack_30;
      local_88 = plVar10;
      if ((bVar4) && (plStack_30 != (longlong *)0x0)) {
        LOCK();
        plVar9 = plStack_30 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_30 + 8))(plStack_30,1);
          }
        }
      }
      plVar8 = local_40;
      if ((bVar5) && (local_40 != (longlong *)0x0)) {
        LOCK();
        plVar9 = local_40 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      pplVar2 = (longlong **)(param_1 + 0x18);
      if (pplVar2 != &local_88) {
        *pplVar2 = plVar10;
        local_88 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_80);
      }
      plVar10 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_80 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      if (local_78[2] != 0) {
        FMemory::Free();
      }
      if (*pplVar2 != (longlong *)0x0) {
        local_78[4] = 0;
        local_78[5] = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 4,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_78[4],9,"variable",9,0x3f);
        cVar7 = FUN_1416b40a0(*param_2,local_78 + 4,param_1 + 0x28);
        if (local_78[4] != 0) {
          FMemory::Free();
        }
        if (cVar7 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b28250 FUN_142b28250 body=150 status=ok
// SIG undefined FUN_142b28250(void)

undefined8 FUN_142b28250(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"error",0xc);
  cVar1 = FUN_1416b3e60(*param_2,local_18,local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10[0],param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b282f0 FUN_142b282f0 body=150 status=ok
// SIG undefined FUN_142b282f0(void)

undefined8 FUN_142b282f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"error",0xc);
  cVar1 = FUN_1416b3e60(*param_2,local_18,local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10[0],param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b28390 FUN_142b28390 body=342 status=ok
// SIG undefined FUN_142b28390(void)

undefined1 FUN_142b28390(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_14579fca4,5,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xe,"internal_code",0xe,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"message",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b284f0 FUN_142b284f0 body=253 status=ok
// SIG undefined FUN_142b284f0(void)

undefined1 FUN_142b284f0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_1457795e4,5,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"message",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b285f0 FUN_142b285f0 body=302 status=ok
// SIG undefined FUN_142b285f0(void)

undefined8 FUN_142b285f0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],6,"score",6,0x3f);
  cVar2 = FUN_1416b3cc0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    local_18[0] = 0;
    local_18[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"solution",0x12);
    cVar2 = FUN_1416b3850(*param_2,local_18,&local_res10);
    if ((cVar2 == '\0') || (cVar2 = FUN_142b0c680(local_res10,param_1 + 0x10), cVar2 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (bVar1) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142b28720 FUN_142b28720 body=903 status=ok
// SIG undefined FUN_142b28720(void)

undefined1 FUN_142b28720(longlong param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_48;
  longlong local_40 [3];
  
  if (*param_2 != 0) {
    local_40[1] = 3;
    local_40[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_40[0],3,&DAT_145775fec,3,0x3f);
    cVar1 = FUN_1416b3b00(*param_2,local_40,param_1 + 8);
    bVar2 = cVar1 == '\0';
    if (local_40[0] != 0) {
      FMemory::Free();
    }
    if (!bVar2) {
      local_40[0] = 0;
      local_40[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
      FGenericPlatformString::Memcpy(local_40[0],L"moves",0xc);
      cVar1 = FUN_1416b3850(*param_2,local_40,&local_res10);
      if ((cVar1 == '\0') || (cVar1 = FUN_142b0c680(local_res10,param_1 + 0x10), cVar1 == '\0')) {
        bVar2 = true;
      }
      if (local_40[0] != 0) {
        FMemory::Free();
      }
      if (!bVar2) {
        local_40[0] = 0;
        local_40[1] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
        FGenericPlatformString::Memcpy(local_40[0],L"params",0xe);
        cVar1 = FUN_1416b3e60(*param_2,local_40,&local_res18);
        if ((cVar1 == '\0') ||
           (cVar1 = FLadderPlayerMode::Accept(local_res18,param_1 + 0x20), cVar1 == '\0')) {
          bVar2 = true;
        }
        if (local_40[0] != 0) {
          FMemory::Free();
        }
        if (!bVar2) {
          local_40[0] = 0;
          local_40[1] = 7;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
          FGenericPlatformString::Memcpy(local_40[0],L"result",0xe);
          cVar1 = FUN_1416b3850(*param_2,local_40,&local_res20);
          if ((cVar1 == '\0') || (cVar1 = FUN_142b0c680(local_res20,param_1 + 0xa0), cVar1 == '\0'))
          {
            bVar2 = true;
          }
          if (local_40[0] != 0) {
            FMemory::Free();
          }
          if (!bVar2) {
            local_40[0] = 0;
            local_40[1] = 6;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
            FGenericPlatformString::Memcpy(local_40[0],L"start",0xc);
            cVar1 = FUN_1416b3850(*param_2,local_40,&local_48);
            if ((cVar1 == '\0') || (cVar1 = FUN_142b0c680(local_48,param_1 + 0xb0), cVar1 == '\0'))
            {
              bVar2 = true;
            }
            if (local_40[0] != 0) {
              FMemory::Free();
            }
            if (!bVar2) {
              local_40[0] = 0;
              local_40[1] = 5;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
              FGenericPlatformString::Convert<char,wchar_t>(local_40[0],5,&DAT_145786894,5,0x3f);
              cVar1 = FUN_1416b3b00(*param_2,local_40,param_1 + 0xc0);
              if (local_40[0] != 0) {
                FMemory::Free();
              }
              if (cVar1 != '\0') {
                local_40[0] = 0;
                local_40[1] = 6;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
                FGenericPlatformString::Convert<char,wchar_t>(local_40[0],6,"score",6,0x3f);
                cVar1 = FUN_1416b3cc0(*param_2,local_40,param_1 + 200);
                if (local_40[0] != 0) {
                  FMemory::Free();
                }
                if (cVar1 != '\0') {
                  local_40[0] = 0;
                  local_40[1] = 8;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
                  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],8,"skipped",8,0x3f);
                  cVar1 = FUN_1416b3900(*param_2,local_40,param_1 + 0xd0);
                  if (local_40[0] != 0) {
                    FMemory::Free();
                  }
                  if (cVar1 != '\0') {
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b28ab0 FUN_142b28ab0 body=702 status=ok
// SIG undefined FUN_142b28ab0(void)

undefined1 FUN_142b28ab0(longlong param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_48;
  longlong local_40 [3];
  
  if (*param_2 != 0) {
    local_40[1] = 5;
    local_40[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
    FGenericPlatformString::Memcpy(local_40[0],L"algo",10);
    cVar1 = FUN_1416b3e60(*param_2,local_40,&local_res10);
    if ((cVar1 == '\0') ||
       (cVar1 = FLadderPlayerMode::Accept(local_res10,param_1 + 8), cVar1 == '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (local_40[0] != 0) {
      FMemory::Free();
    }
    if (!bVar2) {
      local_40[0] = 0;
      local_40[1] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_40[0],3,&DAT_1457767f4,3,0x3f);
      cVar1 = FUN_1416b3b00(*param_2,local_40,param_1 + 0x40);
      bVar2 = cVar1 == '\0';
      if (local_40[0] != 0) {
        FMemory::Free();
      }
      if (!bVar2) {
        local_40[0] = 0;
        local_40[1] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
        FGenericPlatformString::Memcpy(local_40[0],L"params",0xe);
        cVar1 = FUN_1416b3e60(*param_2,local_40,&local_res18);
        if ((cVar1 == '\0') ||
           (cVar1 = FLadderPlayerMode::Accept(local_res18,param_1 + 0x48), cVar1 == '\0')) {
          bVar2 = true;
        }
        if (local_40[0] != 0) {
          FMemory::Free();
        }
        if (!bVar2) {
          local_40[0] = 0;
          local_40[1] = 7;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
          FGenericPlatformString::Memcpy(local_40[0],L"puzzle",0xe);
          cVar1 = FUN_1416b3850(*param_2,local_40,&local_res20);
          if ((cVar1 == '\0') || (cVar1 = FUN_142b0c680(local_res20,param_1 + 200), cVar1 == '\0'))
          {
            bVar2 = true;
          }
          if (local_40[0] != 0) {
            FMemory::Free();
          }
          if (!bVar2) {
            local_40[0] = 0;
            local_40[1] = 9;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
            FGenericPlatformString::Memcpy(local_40[0],L"solution",0x12);
            cVar1 = FUN_1416b3e60(*param_2,local_40,&local_48);
            if ((cVar1 == '\0') ||
               (cVar1 = FLadderPlayerMode::Accept(local_48,param_1 + 0xd8), cVar1 == '\0')) {
              bVar2 = true;
            }
            if (local_40[0] != 0) {
              FMemory::Free();
            }
            if (!bVar2) {
              local_40[0] = 0;
              local_40[1] = 10;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
              FGenericPlatformString::Convert<char,wchar_t>(local_40[0],10,"highscore",10,0x3f);
              cVar1 = FUN_1416b3cc0(*param_2,local_40,param_1 + 0xf8);
              if (local_40[0] != 0) {
                FMemory::Free();
              }
              if (cVar1 != '\0') {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b28d70 FUN_142b28d70 body=430 status=ok
// SIG undefined FUN_142b28d70(void)

undefined1 FUN_142b28d70(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],10,"crossplay",10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xe,"max_occupants",0xe,0x3f);
  FUN_1416b3d70(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"metadata",9,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"privacy",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b28f20 FUN_142b28f20 body=391 status=ok
// SIG undefined FUN_142b28f20(void)

undefined1 FUN_142b28f20(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x10,"friend_passcode",0x10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],7,"reason",7,0x3f);
  cVar2 = FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    local_18[0] = 0;
    local_18[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"users",0xc);
    cVar2 = FUN_1416b3850(*param_2,local_18,&local_res10);
    if ((cVar2 == '\0') || (cVar2 = FUN_142b0c680(local_res10,param_1 + 0x28), cVar2 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (bVar1) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142b290b0 FUN_142b290b0 body=384 status=ok
// SIG undefined FUN_142b290b0(void)

undefined8 FUN_142b290b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[1] = 0x11;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x11,"current_lobby_id",0x11,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_18[0] = 0;
      local_18[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_145798ae4,5,0x3f);
      cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        local_18[0] = 0;
        local_18[1] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_18[0],7,"status",7,0x3f);
        cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 0x28);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b29230 FUN_142b29230 body=746 status=ok
// SIG undefined FUN_142b29230(void)

undefined8 * FUN_142b29230(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"gap_length_penalty",0x26);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 8));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"gap_penalty",0x18);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0xc));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"max_gap_count",0x1c);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0x10));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"row_bonus_multiplier",0x2a);
  FUN_1416b32b0(*param_2,local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"match",0xc);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0x20));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"mismatch",0x12);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0x24));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"version",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b29520 FUN_142b29520 body=257 status=ok
// SIG undefined FUN_142b29520(void)

undefined8 * FUN_142b29520(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"startTime",0x14);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b29630 FUN_142b29630 body=419 status=ok
// SIG undefined FUN_142b29630(void)

undefined8 * FUN_142b29630(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"header",0xe);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"summary",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"body",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b297e0 FUN_142b297e0 body=418 status=ok
// SIG undefined FUN_142b297e0(void)

undefined8 * FUN_142b297e0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_38 [4];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_38[0] = 0;
  local_38[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"meta_tag",0x12);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_38,uVar8);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[2] = 0;
  local_38[3] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"value",0xc);
  FJsonObject::SetStringField(*param_2,local_38 + 2,param_1 + 0x38);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b29990 FUN_142b29990 body=489 status=ok
// SIG undefined FUN_142b29990(void)

undefined8 * FUN_142b29990(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_14577473c,4);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_14577492c,4);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_1457749cc,4);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_145774a7c,4);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x38);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b29b80 FUN_142b29b80 body=343 status=ok
// SIG undefined FUN_142b29b80(void)

undefined8 * FUN_142b29b80(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"remaining",0x14);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 8));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"wait_time",0x14);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b29ce0 FUN_142b29ce0 body=257 status=ok
// SIG undefined FUN_142b29ce0(void)

undefined8 * FUN_142b29ce0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"event_guid",0x16);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b29df0 FUN_142b29df0 body=338 status=ok
// SIG undefined FUN_142b29df0(void)

undefined8 * FUN_142b29df0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"code",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b29f50 FUN_142b29f50 body=337 status=ok
// SIG undefined FUN_142b29f50(void)

undefined8 * FUN_142b29f50(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"error",0xc);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_28,uVar8);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2a0b0 FUN_142b2a0b0 body=338 status=ok
// SIG undefined FUN_142b2a0b0(void)

undefined8 * FUN_142b2a0b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"code",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2a210 FUN_142b2a210 body=337 status=ok
// SIG undefined FUN_142b2a210(void)

undefined8 * FUN_142b2a210(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"Error",0xc);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_28,uVar8);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2a370 FUN_142b2a370 body=612 status=ok
// SIG undefined FUN_142b2a370(void)

undefined8 * FUN_142b2a370(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"category",0x12);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"event_guid",0x16);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"details",0x10);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"associated_ids",0x1e);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 0x38);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"audience",0x12);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 0x48);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2a5e0 FUN_142b2a5e0 body=369 status=ok
// SIG undefined FUN_142b2a5e0(void)

undefined8 * FUN_142b2a5e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"count",0xc);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"events",0xe);
  uVar1 = *param_2;
  uVar4 = FUN_142b20aa0(local_18,param_1 + 0x10);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2a760 FUN_142b2a760 body=663 status=ok
// SIG undefined FUN_142b2a760(void)

undefined8 * FUN_142b2a760(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"event_guid",0x16);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"category",0x12);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"time_posted",0x18);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"owner",0xc);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x38);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"associated_ids",0x1e);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 0x48);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"details",0x10);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x58);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2aa00 FUN_142b2aa00 body=543 status=ok
// SIG undefined FUN_142b2aa00(void)

undefined8 * FUN_142b2aa00(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"friends",0x10);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"categories",0x16);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 0x18);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"after",0xc);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"max_events",0x16);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 0x38));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2ac20 FUN_142b2ac20 body=649 status=ok
// SIG undefined FUN_142b2ac20(void)

undefined8 * FUN_142b2ac20(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"crossplay",0x14);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"max_occupants",0x1c);
  FUN_1416b32b0(*param_2,local_18,(double)*(longlong *)(param_1 + 0x18));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"metadata",0x12);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"occupant_count",0x1e);
  FUN_1416b32b0(*param_2,local_18,(double)*(longlong *)(param_1 + 0x30));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"privacy",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x38);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"title",0xc);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x48);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2aeb0 FUN_142b2aeb0 body=337 status=ok
// SIG undefined FUN_142b2aeb0(void)

undefined8 * FUN_142b2aeb0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_28[0] = 0;
  local_28[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"task",10);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_28,uVar8);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2b010 FUN_142b2b010 body=283 status=ok
// SIG undefined FUN_142b2b010(void)

undefined8 * FUN_142b2b010(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"symbols",0x10);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2b130 FUN_142b2b130 body=337 status=ok
// SIG undefined FUN_142b2b130(void)

undefined8 * FUN_142b2b130(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"message",0x10);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_28,uVar8);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2b290 FUN_142b2b290 body=490 status=ok
// SIG undefined FUN_142b2b290(void)

undefined8 * FUN_142b2b290(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"to_player_id",0x1a);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"item_payload",0x1a);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"item_identifier",0x20);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"to_shift",0x12);
  FUN_1416b3150(*param_2,local_18,*(undefined1 *)(param_1 + 0x38));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2b480 FUN_142b2b480 body=257 status=ok
// SIG undefined FUN_142b2b480(void)

undefined8 * FUN_142b2b480(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message_state",0x1c);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2b590 FUN_142b2b590 body=612 status=ok
// SIG undefined FUN_142b2b590(void)

undefined8 * FUN_142b2b590(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"qos_servers",0x18);
  uVar1 = *param_2;
  uVar4 = FUN_142b20c90(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"attempts",0x12);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 0x18));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"timeout",0x10);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 0x1c));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"port",10);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 0x20));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"size",10);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 0x24));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2b800 FUN_142b2b800 body=343 status=ok
// SIG undefined FUN_142b2b800(void)

undefined8 * FUN_142b2b800(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"metadata",0x12);
  FUN_1416b33f0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"time_to_live",0x1a);
  FUN_1416b32b0(*param_2,local_18,(double)*(longlong *)(param_1 + 0x18));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2b960 FUN_142b2b960 body=257 status=ok
// SIG undefined FUN_142b2b960(void)

undefined8 * FUN_142b2b960(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"expires",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2ba70 FUN_142b2ba70 body=338 status=ok
// SIG undefined FUN_142b2ba70(void)

undefined8 * FUN_142b2ba70(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"friend_passcode",0x20);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"lobby_id",0x12);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2bbd0 FUN_142b2bbd0 body=418 status=ok
// SIG undefined FUN_142b2bbd0(void)

undefined8 * FUN_142b2bbd0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_38 [4];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_38[0] = 0;
  local_38[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],&DAT_1457ac230,8);
  FJsonObject::SetStringField(*param_2,local_38,param_1 + 8);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[2] = 0;
  local_38[3] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"meta_tag_type",0x1c);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 0x18);
  FUN_1416b33f0(uVar4,local_38 + 2,uVar8);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2bd80 FUN_142b2bd80 body=257 status=ok
// SIG undefined FUN_142b2bd80(void)

undefined8 * FUN_142b2bd80(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"name",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2be90 FUN_142b2be90 body=567 status=ok
// SIG undefined FUN_142b2be90(void)

undefined8 * FUN_142b2be90(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],&DAT_145777f24,6);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"availabilities",0x1e);
  uVar1 = *param_2;
  uVar4 = FUN_142b0d1a0(local_18,param_1 + 0x10);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"contents",0x12);
  uVar1 = *param_2;
  uVar4 = FUN_142b1da20(local_18,param_1 + 0x20);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"article_tags",0x1a);
  uVar1 = *param_2;
  uVar4 = FUN_142b0d390(local_18,param_1 + 0x30);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2c0d0 FUN_142b2c0d0 body=519 status=ok
// SIG undefined FUN_142b2c0d0(void)

undefined8 * FUN_142b2c0d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"version",0x10);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"status",0xe);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 0x18));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"message",0x10);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x20);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"data",10);
  uVar1 = *param_2;
  uVar4 = FUN_142b20c90(local_18,param_1 + 0x30);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2c2e0 FUN_142b2c2e0 body=348 status=ok
// SIG undefined FUN_142b2c2e0(void)

undefined8 * FUN_142b2c2e0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_145775624,4);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 8));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_145775724,4);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0xc));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2c440 FUN_142b2c440 body=779 status=ok
// SIG undefined FUN_142b2c440(void)

undefined8 * FUN_142b2c440(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_a8 [12];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_a8[0] = 0;
  local_a8[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy(local_a8[0],L"colors",0xe);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_48,param_1 + 8);
  FUN_1416b33f0(uVar4,local_a8,uVar8);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_a8[2] = 0;
  local_a8[3] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy(local_a8[2],L"difficulty",0x16);
  FUN_1416b32b0(*param_2,local_a8 + 2,(double)*(int *)(param_1 + 0x50));
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  local_a8[4] = 0;
  local_a8[5] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy(local_a8[4],L"guides",0xe);
  uVar4 = *param_2;
  uVar8 = FUN_142b0d1a0(local_38,param_1 + 0x58);
  FJsonObject::SetArrayField(uVar4,local_a8 + 4,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_38);
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  local_a8[6] = 0;
  local_a8[7] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 6,0);
  FGenericPlatformString::Memcpy(local_a8[6],L"joker_count",0x18);
  FUN_1416b32b0(*param_2,local_a8 + 6,(double)*(int *)(param_1 + 0x68));
  if (local_a8[6] != 0) {
    FMemory::Free();
  }
  local_a8[8] = 0;
  local_a8[9] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 8,0);
  FGenericPlatformString::Memcpy(local_a8[8],L"left_to_right",0x1c);
  FUN_1416b3150(*param_2,local_a8 + 8,*(undefined1 *)(param_1 + 0x6c));
  if (local_a8[8] != 0) {
    FMemory::Free();
  }
  local_a8[10] = 0;
  local_a8[0xb] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 10,0);
  FGenericPlatformString::Memcpy(local_a8[10],L"shuffle",0x10);
  uVar4 = *param_2;
  uVar8 = FUN_142b20e80(local_28,param_1 + 0x70);
  FJsonObject::SetArrayField(uVar4,local_a8 + 10,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
  if (local_a8[10] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2c750 FUN_142b2c750 body=338 status=ok
// SIG undefined FUN_142b2c750(void)

undefined8 * FUN_142b2c750(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"status",0xe);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"result",0xe);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2c8b0 FUN_142b2c8b0 body=576 status=ok
// SIG undefined FUN_142b2c8b0(void)

undefined8 * FUN_142b2c8b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"name",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"address",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"type",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"ping",10);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0x38));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"loss",10);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0x3c));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2caf0 FUN_142b2caf0 body=283 status=ok
// SIG undefined FUN_142b2caf0(void)

undefined8 * FUN_142b2caf0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"ignored_players",0x20);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2cc10 FUN_142b2cc10 body=444 status=ok
// SIG undefined FUN_142b2cc10(void)

undefined8 * FUN_142b2cc10(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_48 [4];
  undefined1 local_28 [16];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_48[0] = 0;
  local_48[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"messages",0x12);
  uVar4 = *param_2;
  uVar8 = FUN_142b21070(local_28,param_1 + 8);
  FJsonObject::SetArrayField(uVar4,local_48,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[2] = 0;
  local_48[3] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
  FGenericPlatformString::Memcpy(local_48[2],L"status",0xe);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 0x18);
  FUN_1416b33f0(uVar4,local_48 + 2,uVar8);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2cdd0 FUN_142b2cdd0 body=795 status=ok
// SIG undefined FUN_142b2cdd0(void)

undefined8 * FUN_142b2cdd0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"trade_guid",0x16);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"from_player_id",0x1e);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"expires_at",0x16);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"date_sent",0x14);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x38);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"trade_type",0x16);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0x48));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"item_payload",0x1a);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x50);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"item_identifier",0x20);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x60);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"platform",0x12);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x70);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2d0f0 FUN_142b2d0f0 body=425 status=ok
// SIG undefined FUN_142b2d0f0(void)

undefined8 * FUN_142b2d0f0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"can_send",0x12);
  FUN_1416b3150(*param_2,local_18,*(undefined1 *)(param_1 + 8));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"sends_remaining",0x20);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0xc));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"wait_time",0x14);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2d2a0 FUN_142b2d2a0 body=598 status=ok
// SIG undefined FUN_142b2d2a0(void)

undefined8 * FUN_142b2d2a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"crossplay",0x14);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"filters",0x10);
  uVar1 = *param_2;
  uVar4 = FUN_142b1da20(local_18,param_1 + 0x18);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"max_results",0x18);
  FUN_1416b32b0(*param_2,local_28,(double)*(longlong *)(param_1 + 0x28));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"min_open_slots",0x1e);
  FUN_1416b32b0(*param_2,local_28,(double)*(longlong *)(param_1 + 0x30));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result_group",0x1a);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x38);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2d500 FUN_142b2d500 body=364 status=ok
// SIG undefined FUN_142b2d500(void)

undefined8 * FUN_142b2d500(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"lobbies",0x10);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"next_group",0x16);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2d670 FUN_142b2d670 body=419 status=ok
// SIG undefined FUN_142b2d670(void)

undefined8 * FUN_142b2d670(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"operator",0x12);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"value",0xc);
  FJsonObject::SetField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"variable",0x12);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2d820 FUN_142b2d820 body=337 status=ok
// SIG undefined FUN_142b2d820(void)

undefined8 * FUN_142b2d820(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"error",0xc);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_28,uVar8);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2d980 FUN_142b2d980 body=337 status=ok
// SIG undefined FUN_142b2d980(void)

undefined8 * FUN_142b2d980(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"error",0xc);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_28,uVar8);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2dae0 FUN_142b2dae0 body=424 status=ok
// SIG undefined FUN_142b2dae0(void)

undefined8 * FUN_142b2dae0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"code",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"internal_code",0x1c);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0x18));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2dc90 FUN_142b2dc90 body=338 status=ok
// SIG undefined FUN_142b2dc90(void)

undefined8 * FUN_142b2dc90(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"code",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2ddf0 FUN_142b2ddf0 body=365 status=ok
// SIG undefined FUN_142b2ddf0(void)

undefined8 * FUN_142b2ddf0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"score",0xc);
  FUN_1416b32b0(*param_2,local_28,*(undefined8 *)(param_1 + 8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"solution",0x12);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 0x10);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2df60 FUN_142b2df60 body=970 status=ok
// SIG undefined FUN_142b2df60(void)

undefined8 * FUN_142b2df60(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_d8 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_d8[0] = 0;
  local_d8[1] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
  FGenericPlatformString::Memcpy(local_d8[0],&DAT_1457848d4,6);
  FUN_1416b32b0(*param_2,local_d8,(double)*(int *)(param_1 + 8));
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  local_d8[2] = 0;
  local_d8[3] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 2,0);
  FGenericPlatformString::Memcpy(local_d8[2],L"moves",0xc);
  uVar4 = *param_2;
  uVar8 = FUN_142af81e0(local_58,param_1 + 0x10);
  FJsonObject::SetArrayField(uVar4,local_d8 + 2,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_58);
  if (local_d8[2] != 0) {
    FMemory::Free();
  }
  local_d8[4] = 0;
  local_d8[5] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 4,0);
  FGenericPlatformString::Memcpy(local_d8[4],L"params",0xe);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_48,param_1 + 0x20);
  FUN_1416b33f0(uVar4,local_d8 + 4,uVar8);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_d8[4] != 0) {
    FMemory::Free();
  }
  local_d8[6] = 0;
  local_d8[7] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 6,0);
  FGenericPlatformString::Memcpy(local_d8[6],L"result",0xe);
  uVar4 = *param_2;
  uVar8 = FUN_142af81e0(local_38,param_1 + 0xa0);
  FJsonObject::SetArrayField(uVar4,local_d8 + 6,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_38);
  if (local_d8[6] != 0) {
    FMemory::Free();
  }
  local_d8[8] = 0;
  local_d8[9] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 8,0);
  FGenericPlatformString::Memcpy(local_d8[8],L"start",0xc);
  uVar4 = *param_2;
  uVar8 = FUN_142af81e0(local_28,param_1 + 0xb0);
  FJsonObject::SetArrayField(uVar4,local_d8 + 8,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
  if (local_d8[8] != 0) {
    FMemory::Free();
  }
  local_d8[10] = 0;
  local_d8[0xb] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 10,0);
  FGenericPlatformString::Memcpy(local_d8[10],L"time",10);
  FUN_1416b32b0(*param_2,local_d8 + 10,(double)*(int *)(param_1 + 0xc0));
  if (local_d8[10] != 0) {
    FMemory::Free();
  }
  local_d8[0xc] = 0;
  local_d8[0xd] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 0xc,0);
  FGenericPlatformString::Memcpy(local_d8[0xc],L"score",0xc);
  FUN_1416b32b0(*param_2,local_d8 + 0xc,*(undefined8 *)(param_1 + 200));
  if (local_d8[0xc] != 0) {
    FMemory::Free();
  }
  local_d8[0xe] = 0;
  local_d8[0xf] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 0xe,0);
  FGenericPlatformString::Memcpy(local_d8[0xe],L"skipped",0x10);
  FUN_1416b3150(*param_2,local_d8 + 0xe,*(undefined1 *)(param_1 + 0xd0));
  if (local_d8[0xe] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2e330 FUN_142b2e330 body=893 status=ok
// SIG undefined FUN_142b2e330(void)

undefined8 * FUN_142b2e330(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_b8 [12];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_b8[0] = 0;
  local_b8[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
  FGenericPlatformString::Memcpy(local_b8[0],L"algo",10);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_58,param_1 + 8);
  FUN_1416b33f0(uVar4,local_b8,uVar8);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  local_b8[2] = 0;
  local_b8[3] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 2,0);
  FGenericPlatformString::Memcpy(local_b8[2],&DAT_145788a0c,6);
  FUN_1416b32b0(*param_2,local_b8 + 2,(double)*(int *)(param_1 + 0x40));
  if (local_b8[2] != 0) {
    FMemory::Free();
  }
  local_b8[4] = 0;
  local_b8[5] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 4,0);
  FGenericPlatformString::Memcpy(local_b8[4],L"params",0xe);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_48,param_1 + 0x48);
  FUN_1416b33f0(uVar4,local_b8 + 4,uVar8);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_b8[4] != 0) {
    FMemory::Free();
  }
  local_b8[6] = 0;
  local_b8[7] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 6,0);
  FGenericPlatformString::Memcpy(local_b8[6],L"puzzle",0xe);
  uVar4 = *param_2;
  uVar8 = FUN_142af81e0(local_38,param_1 + 200);
  FJsonObject::SetArrayField(uVar4,local_b8 + 6,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_38);
  if (local_b8[6] != 0) {
    FMemory::Free();
  }
  local_b8[8] = 0;
  local_b8[9] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 8,0);
  FGenericPlatformString::Memcpy(local_b8[8],L"solution",0x12);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_28,param_1 + 0xd8);
  FUN_1416b33f0(uVar4,local_b8 + 8,uVar8);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_b8[8] != 0) {
    FMemory::Free();
  }
  local_b8[10] = 0;
  local_b8[0xb] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 10,0);
  FGenericPlatformString::Memcpy(local_b8[10],L"highscore",0x14);
  FUN_1416b32b0(*param_2,local_b8 + 10,*(undefined8 *)(param_1 + 0xf8));
  if (local_b8[10] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2e6b0 FUN_142b2e6b0 body=494 status=ok
// SIG undefined FUN_142b2e6b0(void)

undefined8 * FUN_142b2e6b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"crossplay",0x14);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"max_occupants",0x1c);
  FUN_1416b32b0(*param_2,local_18,(double)*(longlong *)(param_1 + 0x18));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"metadata",0x12);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"privacy",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2e8a0 FUN_142b2e8a0 body=445 status=ok
// SIG undefined FUN_142b2e8a0(void)

undefined8 * FUN_142b2e8a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"friend_passcode",0x20);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"reason",0xe);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"users",0xc);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 0x28);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2ea60 FUN_142b2ea60 body=419 status=ok
// SIG undefined FUN_142b2ea60(void)

undefined8 * FUN_142b2ea60(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"current_lobby_id",0x22);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"show",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"status",0xe);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b2ec10 FUN_142b2ec10 body=20 status=ok
// SIG undefined FUN_142b2ec10(void)

undefined1 FUN_142b2ec10(longlong param_1)

{
  FUN_142b3b820(param_1 + 8);
  return 1;
}



// FUNCTION 142b2ec30 FUN_142b2ec30 body=58 status=ok
// SIG undefined FUN_142b2ec30(void)

void FUN_142b2ec30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457c46d8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457c4720;
  }
  return;
}



// FUNCTION 142b2ec80 FUN_142b2ec80 body=20 status=ok
// SIG undefined FUN_142b2ec80(void)

undefined1 FUN_142b2ec80(longlong param_1)

{
  FUN_142b39550(param_1 + 8);
  return 1;
}



// FUNCTION 142b2eca0 FUN_142b2eca0 body=58 status=ok
// SIG undefined FUN_142b2eca0(void)

void FUN_142b2eca0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457c4768;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457c47b0;
  }
  return;
}



// FUNCTION 142b2ecf0 FUN_142b2ecf0 body=20 status=ok
// SIG undefined FUN_142b2ecf0(void)

undefined1 FUN_142b2ecf0(longlong param_1)

{
  FUN_142b3be50(param_1 + 8);
  return 1;
}



// FUNCTION 142b2ed10 FUN_142b2ed10 body=58 status=ok
// SIG undefined FUN_142b2ed10(void)

void FUN_142b2ed10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457c47f8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457c4840;
  }
  return;
}



// FUNCTION 142b2ed50 FUN_142b2ed50 body=70 status=ok
// SIG undefined FUN_142b2ed50(void)

void FUN_142b2ed50(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  if (*(short *)(param_4 + 0x18) == 0x28) {
    uVar1 = FUN_1407ba9a0(param_4);
    uVar1 = FUN_14218ddc0(local_18,uVar1);
    FUN_140643170(param_2,uVar1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142b2eda0 FUN_142b2eda0 body=72 status=ok
// SIG undefined FUN_142b2eda0(void)

undefined1 FUN_142b2eda0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  if (*(short *)(param_4 + 0x18) == 0x28) {
    uVar1 = FUN_1407ba9a0(param_4);
    uVar1 = FUN_14218ddc0(local_18,uVar1);
    FUN_140643170(param_2,uVar1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 142b2edf0 FUN_142b2edf0 body=58 status=ok
// SIG undefined FUN_142b2edf0(void)

void FUN_142b2edf0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457c4888;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457c48d0;
  }
  return;
}



// FUNCTION 142b2ee40 FUN_142b2ee40 body=20 status=ok
// SIG undefined FUN_142b2ee40(void)

undefined1 FUN_142b2ee40(longlong param_1)

{
  FUN_142b3bf20(param_1 + 8);
  return 1;
}



// FUNCTION 142b2ee60 FUN_142b2ee60 body=58 status=ok
// SIG undefined FUN_142b2ee60(void)

void FUN_142b2ee60(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457c4918;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457c4960;
  }
  return;
}



// FUNCTION 142b2eeb0 Serialize body=22 status=ok
// SIG undefined Serialize(void)

undefined1
UScriptStruct::TCppStructOps<FSectionEvaluationDataTree>::Serialize
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b675b0(param_2,param_3);
  return 1;
}



// FUNCTION 142b2eed0 FUN_142b2eed0 body=66 status=ok
// SIG undefined FUN_142b2eed0(void)

void FUN_142b2eed0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457c49a8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1457c49f0;
  }
  return;
}



// FUNCTION 142b2ef30 FUN_142b2ef30 body=26 status=ok
// SIG undefined FUN_142b2ef30(void)

undefined1 FUN_142b2ef30(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 1) == '\0') {
    FUN_142b53ee0();
  }
  return 1;
}



// FUNCTION 142b2ef50 FUN_142b2ef50 body=66 status=ok
// SIG undefined FUN_142b2ef50(void)

void FUN_142b2ef50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457c4a38;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1457c4a80;
  }
  return;
}



// FUNCTION 142b2efa0 FUN_142b2efa0 body=40 status=ok
// SIG undefined FUN_142b2efa0(void)

void FUN_142b2efa0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x740) == '\0') {
    FUN_142b34e70(lVar1);
    *(undefined1 *)(lVar1 + 0x740) = 1;
  }
  return;
}



// FUNCTION 142b2efd0 FUN_142b2efd0 body=42 status=ok
// SIG undefined FUN_142b2efd0(void)

undefined1 FUN_142b2efd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x740) == '\0') {
    FUN_142b34e70(lVar1);
    *(undefined1 *)(lVar1 + 0x740) = 1;
  }
  return 1;
}



// FUNCTION 142b2f000 FUN_142b2f000 body=176 status=ok
// SIG undefined FUN_142b2f000(void)

void FUN_142b2f000(longlong param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18 [2];
  
  DAT_146b2ade0 = param_1;
  puVar1 = (undefined8 *)FPaths::GeneratedConfigDir(local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FConfigCacheIni::LoadGlobalIniFile(param_1 + 8,L"Spark",0,0,0,1,puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  lVar3 = operator_new(0x3e0);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = FUN_142b35a60(lVar3);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  FUN_142b51360(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (DAT_146b2b7a9 == '\0') {
    FUN_142b53ee0(&DAT_146b2b7a8);
  }
  FUN_142b6f160(&DAT_146b2b7a8,uVar4);
  return;
}



// FUNCTION 142b2f0b0 FUN_142b2f0b0 body=47 status=ok
// SIG undefined FUN_142b2f0b0(void)

void FUN_142b2f0b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  DAT_146b2ade0 = 0;
  return;
}



// FUNCTION 142b2f0e0 FUN_142b2f0e0 body=72 status=ok
// SIG undefined FUN_142b2f0e0(void)

undefined8 * FUN_142b2f0e0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b2f130 FUN_142b2f130 body=597 status=ok
// SIG undefined FUN_142b2f130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142b2f130(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_348 [32];
  undefined1 local_328 [744];
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  *(float *)(param_1 + 0x72c) = DAT_146686110 + *(float *)(param_1 + 0x72c);
  cVar1 = FUN_142194620();
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x6e8) != 0) {
      iVar7 = *(int *)(param_1 + 0x6e8);
      lVar2 = *(longlong *)(param_1 + 0x6e0);
      if (*(longlong *)(param_1 + 0x6e0) == 0) {
        lVar2 = param_1 + 0x40;
      }
      if (iVar7 != 0) {
        piVar8 = (int *)(lVar2 + 0x1a0);
        do {
          iVar3 = *piVar8;
          piVar4 = *(int **)(piVar8 + -2);
          if (*(int **)(piVar8 + -2) == (int *)0x0) {
            piVar4 = piVar8 + -0x62;
          }
          if (iVar3 != 0) {
            plVar5 = (longlong *)(piVar4 + 4);
            do {
              iVar6 = (int)plVar5[1];
              lVar2 = *plVar5;
              if (iVar6 != 0) {
                lVar2 = lVar2 + 8;
                do {
                  FUN_14217f430(lVar2);
                  lVar2 = lVar2 + 0x28;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                lVar2 = *plVar5;
              }
              if (lVar2 != 0) {
                FMemory::Free();
              }
              plVar5 = plVar5 + 6;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          if (*(longlong *)(piVar8 + -2) != 0) {
            FMemory::Free();
          }
          iVar3 = piVar8[-100];
          lVar2 = *(longlong *)(piVar8 + -0x66);
          if (iVar3 != 0) {
            lVar2 = lVar2 + 8;
            do {
              FUN_14217f430(lVar2);
              lVar2 = lVar2 + 0x28;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            lVar2 = *(longlong *)(piVar8 + -0x66);
          }
          if (lVar2 != 0) {
            FMemory::Free();
          }
          piVar8 = piVar8 + 0x6a;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      *(undefined4 *)(param_1 + 0x6e8) = 0;
      if (*(int *)(param_1 + 0x6ec) != 0) {
        FUN_142b694a0(param_1 + 0x40,0);
      }
    }
  }
  else {
    cVar1 = FUN_142b75e80(param_1 + -0x10);
    if ((cVar1 == '\0') &&
       ((*(float *)(param_1 + 0x728) == 0.0 ||
        (*(float *)(param_1 + 0x728) + *(float *)(*(longlong *)(param_1 + 0x720) + 0x10) <
         *(float *)(param_1 + 0x72c))))) {
      FUN_142178380(local_328,L"Heartbeat",**(undefined8 **)(param_1 + 0x18));
      local_40 = 0;
      local_38 = 1;
      FUN_14217f3d0(local_328);
    }
  }
  return 1;
}



// FUNCTION 142b2f390 FUN_142b2f390 body=1037 status=ok
// SIG undefined FUN_142b2f390(void)

void FUN_142b2f390(longlong param_1,undefined8 param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  BOOL BVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int *piVar17;
  int *piVar18;
  
  lVar14 = **(longlong **)(param_1 + 0x28);
  cVar4 = FUN_142190080(lVar14);
  if (cVar4 == '\0') {
    return;
  }
  if (*(longlong *)(lVar14 + 0x28) != 0xd3) {
    if (*(int *)(lVar14 + 0x88) == 0) {
      return;
    }
    if (*(int *)(lVar14 + 0x88) == 1) {
      return;
    }
    iVar7 = *(int *)(lVar14 + 0x98) + -1;
    if (*(int *)(lVar14 + 0x98) == 0) {
      iVar7 = 0;
    }
    if (iVar7 == 0) {
      return;
    }
  }
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
    FUN_142b75e80(param_1);
  }
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x700);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)(param_1 + 0x6f8) == 0) {
    FUN_142b5df10(param_1,0,param_1 + 0x30);
    uVar8 = FUN_142192200();
    TBaseMulticastDelegate<void,TSharedRef<ISessionInfo,0>_const_&,TSharedRef<ISessionInstanceInfo,0>_const_&,TSharedRef<FSessionLogMessage,0>_const_&>
    ::Broadcast(uVar8,*(undefined8 *)(param_1 + 0x28),0,param_1 + 0x40);
    uVar9 = FUN_140c15a40(uVar9,**(undefined8 **)(param_1 + 0x28));
    uVar9 = FUN_140aa2bd0(uVar9);
    FUN_142b33c00(uVar9,param_1 + 0x30);
    FUN_142b33c00(uVar9,param_1 + 0x40);
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x6f0);
    if (*(longlong *)(param_1 + 0x6f0) == 0) {
      lVar14 = param_1 + 0x50;
    }
    lVar10 = (longlong)*(int *)(param_1 + 0x6f8) * 0x1a8 + lVar14;
    if (lVar14 != lVar10) {
      piVar17 = (int *)(lVar14 + 0x1a0);
      do {
        if (*piVar17 == 0) {
          uVar8 = FUN_142192200();
          TBaseMulticastDelegate<void,TSharedRef<ISessionInfo,0>_const_&,TSharedRef<ISessionInstanceInfo,0>_const_&,TSharedRef<FSessionLogMessage,0>_const_&>
          ::Broadcast(uVar8,*(undefined8 *)(param_1 + 0x28),0,param_1 + 0x40);
          uVar8 = FUN_140c15a40(uVar9,**(undefined8 **)(param_1 + 0x28));
          uVar8 = FUN_140aa2bd0(uVar8);
          FUN_142b33c00(uVar8,piVar17 + -0x66);
          FUN_142b33c00(uVar8,param_1 + 0x40);
        }
        else {
          piVar18 = *(int **)(piVar17 + -2);
          if (*(int **)(piVar17 + -2) == (int *)0x0) {
            piVar18 = piVar17 + -0x62;
          }
          piVar11 = piVar18 + (longlong)*piVar17 * 0xc;
          for (; piVar18 != piVar11; piVar18 = piVar18 + 0xc) {
            *(undefined1 *)(piVar18 + 0xb) = 0;
            uVar8 = FUN_140c15a40(uVar9,**(undefined8 **)(param_1 + 0x28));
            plVar12 = (longlong *)FUN_140aa2bd0(uVar8);
            plVar15 = *(longlong **)(piVar17 + -0x66);
            plVar1 = plVar15 + (longlong)piVar17[-100] * 5;
            for (; plVar15 != plVar1; plVar15 = plVar15 + 5) {
              plVar16 = (longlong *)*plVar12;
              lVar13 = (longlong)(int)plVar12[1];
              plVar2 = plVar16 + lVar13 * 5;
              if (plVar16 != plVar2) {
                do {
                  if ((*(longlong *)*plVar16 == *(longlong *)*plVar15) &&
                     (*(longlong *)(((longlong *)*plVar16)[1] + 0x28) ==
                      *(longlong *)(((longlong *)*plVar15)[1] + 0x28))) goto LAB_142b2f681;
                  plVar16 = plVar16 + 5;
                } while (plVar16 != plVar2);
              }
              iVar7 = (int)plVar12[1] + 1;
              *(int *)(plVar12 + 1) = iVar7;
              if (*(int *)((longlong)plVar12 + 0xc) < iVar7) {
                TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar12);
              }
              lVar3 = *plVar12;
              *(longlong *)(lVar3 + lVar13 * 0x28) = *plVar15;
              FUN_14217e5e0(lVar3 + lVar13 * 0x28 + 8,plVar15 + 1);
LAB_142b2f681:
            }
            plVar15 = *(longlong **)(piVar18 + 4);
            plVar1 = plVar15 + (longlong)piVar18[6] * 5;
            for (; plVar15 != plVar1; plVar15 = plVar15 + 5) {
              plVar16 = (longlong *)*plVar12;
              lVar13 = (longlong)(int)plVar12[1];
              plVar2 = plVar16 + lVar13 * 5;
              if (plVar16 != plVar2) {
                do {
                  if ((*(longlong *)*plVar16 == *(longlong *)*plVar15) &&
                     (*(longlong *)(((longlong *)*plVar16)[1] + 0x28) ==
                      *(longlong *)(((longlong *)*plVar15)[1] + 0x28))) goto LAB_142b2f711;
                  plVar16 = plVar16 + 5;
                } while (plVar16 != plVar2);
              }
              iVar7 = (int)plVar12[1] + 1;
              *(int *)(plVar12 + 1) = iVar7;
              if (*(int *)((longlong)plVar12 + 0xc) < iVar7) {
                TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar12);
              }
              lVar3 = *plVar12;
              *(longlong *)(lVar3 + lVar13 * 0x28) = *plVar15;
              FUN_14217e5e0(lVar3 + lVar13 * 0x28 + 8,plVar15 + 1);
LAB_142b2f711:
            }
          }
        }
        lVar14 = lVar14 + 0x1a8;
        piVar17 = piVar17 + 0x6a;
      } while (lVar14 != lVar10);
    }
  }
  *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(param_1 + 0x73c);
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 142b2f7a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 APaperCharacter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142b376e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x740);
  }
  return param_1;
}



// FUNCTION 142b2f7e0 FUN_142b2f7e0 body=64 status=ok
// SIG undefined FUN_142b2f7e0(void)

void FUN_142b2f7e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457c4be8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 142b2f820 FUN_142b2f820 body=58 status=ok
// SIG undefined FUN_142b2f820(void)

void FUN_142b2f820(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457c4c28;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457c4c70;
  }
  return;
}



// FUNCTION 142b2f870 FUN_142b2f870 body=25 status=ok
// SIG undefined FUN_142b2f870(void)

undefined1 FUN_142b2f870(void)

{
  FUN_142b456f0(&DAT_146b2b728,1);
  return 1;
}



// FUNCTION 142b2f890 FUN_142b2f890 body=58 status=ok
// SIG undefined FUN_142b2f890(void)

void FUN_142b2f890(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457c4cd8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457c4d20;
  }
  return;
}



// FUNCTION 142b2f8e0 FUN_142b2f8e0 body=20 status=ok
// SIG undefined FUN_142b2f8e0(void)

undefined1 FUN_142b2f8e0(longlong param_1)

{
  FUN_142b3c470(param_1 + 8);
  return 1;
}



// FUNCTION 142b2f900 FUN_142b2f900 body=58 status=ok
// SIG undefined FUN_142b2f900(void)

void FUN_142b2f900(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457c4648;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1457c4690;
  }
  return;
}



// FUNCTION 142b2f950 FUN_142b2f950 body=13 status=ok
// SIG undefined FUN_142b2f950(void)

void FUN_142b2f950(undefined8 param_1,undefined8 param_2)

{
  FUN_142b39310(0,param_1,param_2);
  return;
}



// FUNCTION 142b2f970 FUN_142b2f970 body=13 status=ok
// SIG undefined FUN_142b2f970(void)

void FUN_142b2f970(undefined8 param_1,undefined8 param_2)

{
  FUN_142b393d0(0,param_1,param_2);
  return;
}



// FUNCTION 142b2f980 FUN_142b2f980 body=27 status=ok
// SIG undefined FUN_142b2f980(void)

void FUN_142b2f980(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_142b3c130(local_18,&local_18);
  return;
}



// FUNCTION 142b2f9d0 FUN_142b2f9d0 body=45 status=ok
// SIG undefined FUN_142b2f9d0(void)

void FUN_142b2f9d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_28 = *(undefined4 *)(param_2 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_20 = *(undefined4 *)(param_2 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_18 = *(undefined4 *)(param_2 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_10 = *(undefined4 *)(param_2 + 5);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x2c);
  FUN_142b3cf70(local_18,&local_38);
  return;
}



// FUNCTION 142b2fa10 FUN_142b2fa10 body=81 status=ok
// SIG undefined FUN_142b2fa10(void)

void FUN_142b2fa10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uStack_10;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    FUN_142b61c00(lVar1);
    return;
  }
  uStack_10 = (char)*(undefined4 *)(param_2 + 8);
  if (uStack_10 != '\0') {
    *(undefined4 *)(lVar1 + 0xd0) = 2;
    return;
  }
  *(undefined4 *)(lVar1 + 200) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0xd0) = 3;
  return;
}



// FUNCTION 142b2faa0 FUN_142b2faa0 body=47 status=ok
// SIG undefined FUN_142b2faa0(void)

void FUN_142b2faa0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_28 = *(undefined4 *)(param_2 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_20 = *(undefined4 *)(param_2 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_18 = param_2[4];
  FUN_142b3a010((int)local_18,&local_38);
  return;
}



// FUNCTION 142b2fad0 FUN_142b2fad0 body=33 status=ok
// SIG undefined FUN_142b2fad0(void)

void FUN_142b2fad0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_142b3af60(local_18,*param_2,&local_18,*param_4);
  return;
}



// FUNCTION 142b2fb20 FUN_142b2fb20 body=60 status=ok
// SIG undefined FUN_142b2fb20(void)

void FUN_142b2fb20(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (((param_2 != param_1) && ((int)param_2[1] != 0)) &&
     (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 142b2fb60 FUN_142b2fb60 body=16 status=ok
// SIG undefined FUN_142b2fb60(void)

void FUN_142b2fb60(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FString::FString(param_1 + 1,param_2 + 1);
  if (param_2[1] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142b2fb70 FUN_142b2fb70 body=36 status=ok
// SIG undefined FUN_142b2fb70(void)

void FUN_142b2fb70(longlong param_1)

{
  longlong *unaff_RBX;
  
  FString::FString(param_1 + 8);
  if (*unaff_RBX != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142b2fbd0 FUN_142b2fbd0 body=80 status=ok
// SIG undefined FUN_142b2fbd0(void)

void FUN_142b2fbd0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_28 = param_2[2];
  uStack_20 = param_2[3];
  local_18 = param_2[4];
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_142b3d460(0,&local_48,&local_38,&local_58,param_4);
  return;
}



// FUNCTION 142b2fc30 FUN_142b2fc30 body=104 status=ok
// SIG undefined FUN_142b2fc30(void)

undefined8 * FUN_142b2fc30(longlong *param_1,undefined8 *param_2)

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
  FUN_140ce1bb0(&local_18);
  return param_2;
}



// FUNCTION 142b2fca0 FUN_142b2fca0 body=104 status=ok
// SIG undefined FUN_142b2fca0(void)

undefined8 * FUN_142b2fca0(longlong *param_1,undefined8 *param_2)

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
  FUN_1404bebc0(&local_18);
  return param_2;
}



// FUNCTION 142b2fd10 FUN_142b2fd10 body=116 status=ok
// SIG undefined FUN_142b2fd10(void)

longlong FUN_142b2fd10(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  FString::FString(param_2,*param_1);
  FString::FString(param_2 + 0x10,lVar1);
  FString::FString(param_2 + 0x20,lVar1 + 0x10);
  FString::FString(param_2 + 0x30,lVar1 + 0x20);
  FString::FString(param_2 + 0x40,lVar1 + 0x30);
  FString::FString(param_2 + 0x50,lVar1 + 0x40);
  return param_2;
}



// FUNCTION 142b2fd90 FUN_142b2fd90 body=495 status=ok
// SIG undefined FUN_142b2fd90(void)

void FUN_142b2fd90(longlong param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 local_res8 [4];
  wchar_t *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  int local_40;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)*param_2;
  }
  local_58 = (wchar_t *)0x0;
  iVar5 = 0;
  local_4c = 0;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar5;
  }
  if (0x40 < iVar7) {
    iVar7 = 0x40;
  }
  local_50 = iVar7 + 1;
  if (iVar7 == 0) {
    local_50 = 0;
  }
  if (0 < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    pwVar3 = local_58;
    if (0 < local_50) {
      wcsncpy(local_58,pwVar4,(longlong)iVar7);
      pwVar3[iVar7] = L'\0';
    }
  }
  iVar1 = local_50;
  _Src = (void *)*param_3;
  iVar7 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar7 = iVar5;
  }
  if (iVar7 != 0) {
    local_50 = (uint)(local_50 == 0) + iVar7 + local_50;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar1);
    }
    pwVar4 = local_58 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0));
    _guard_xfg_dispatch_icall_nop(pwVar4,_Src,(longlong)iVar7 * 2);
    pwVar4[iVar7] = L'\0';
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if ((((int)plVar2[4] - 2U & 0xfffffff5) != 0) || ((int)plVar2[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_58);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  FString::PrintfImpl(&local_48,L"%lld",(longlong)param_4);
  puVar6 = &DAT_143f3eda8;
  if (local_40 != 0) {
    iVar5 = local_40 + -1;
    puVar6 = local_48;
  }
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],puVar6,(longlong)iVar5 * 2);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(plVar2 + 4) = 8;
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b2ff80 FUN_142b2ff80 body=515 status=ok
// SIG undefined FUN_142b2ff80(void)

void FUN_142b2ff80(longlong param_1,undefined8 *param_2,undefined8 *param_3,float param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  undefined2 local_res20 [4];
  wchar_t *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  int local_40;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*param_2;
  }
  local_58 = (wchar_t *)0x0;
  iVar5 = 0;
  local_4c = 0;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = iVar5;
  }
  if (0x40 < iVar4) {
    iVar4 = 0x40;
  }
  local_50 = iVar4 + 1;
  if (iVar4 == 0) {
    local_50 = 0;
  }
  if (0 < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    pwVar3 = local_58;
    if (0 < local_50) {
      wcsncpy(local_58,pwVar7,(longlong)iVar4);
      pwVar3[iVar4] = L'\0';
    }
  }
  iVar1 = local_50;
  _Src = (void *)*param_3;
  iVar4 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar4 = iVar5;
  }
  if (iVar4 != 0) {
    local_50 = (uint)(local_50 == 0) + iVar4 + local_50;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar1);
    }
    pwVar7 = local_58 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0));
    _guard_xfg_dispatch_icall_nop(pwVar7,_Src,(longlong)iVar4 * 2);
    pwVar7[iVar4] = L'\0';
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if ((((int)plVar2[4] - 2U & 0xfffffff5) != 0) || ((int)plVar2[4] == 10)) {
    local_res20[0] = 0x2c;
    (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res20,2);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_58);
  local_res20[0] = 0x3a;
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res20,2);
  FString::PrintfImpl(&local_48,&DAT_144050d74,(double)param_4);
  puVar6 = &DAT_143f3eda8;
  if (local_40 != 0) {
    iVar5 = local_40 + -1;
    puVar6 = local_48;
  }
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],puVar6,(longlong)iVar5 * 2);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(plVar2 + 4) = 8;
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b30190 FUN_142b30190 body=473 status=ok
// SIG undefined FUN_142b30190(void)

void FUN_142b30190(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined2 local_res8 [4];
  wchar_t *local_48;
  int local_40;
  int local_3c;
  undefined1 local_38 [16];
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*param_2;
  }
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (0x40 < iVar5) {
    iVar5 = 0x40;
  }
  local_40 = iVar5 + 1;
  if (iVar5 == 0) {
    local_40 = 0;
  }
  if (0 < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pwVar3 = local_48;
    if (0 < local_40) {
      wcsncpy(local_48,pwVar6,(longlong)iVar5);
      pwVar3[iVar5] = L'\0';
    }
  }
  iVar1 = local_40;
  _Src = (void *)*param_3;
  iVar5 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    local_40 = (uint)(local_40 == 0) + iVar5 + local_40;
    if (local_3c < local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
    }
    pwVar6 = local_48 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0));
    _guard_xfg_dispatch_icall_nop(pwVar6,_Src,(longlong)iVar5 * 2);
    pwVar6[iVar5] = L'\0';
  }
  plVar2 = *(longlong **)(param_1 + 8);
  plVar4 = (longlong *)FString::FString(local_38,param_4);
  if ((((int)plVar2[4] - 2U & 0xfffffff5) != 0) || ((int)plVar2[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_48);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  (**(code **)(*plVar2 + 0x18))(plVar2,plVar4);
  *(undefined4 *)(plVar2 + 4) = 7;
  if (*plVar4 != 0) {
    FMemory::Free();
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b30370 FUN_142b30370 body=495 status=ok
// SIG undefined FUN_142b30370(void)

void FUN_142b30370(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 local_res8 [4];
  wchar_t *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  int local_40;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)*param_2;
  }
  local_58 = (wchar_t *)0x0;
  iVar5 = 0;
  local_4c = 0;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar5;
  }
  if (0x40 < iVar7) {
    iVar7 = 0x40;
  }
  local_50 = iVar7 + 1;
  if (iVar7 == 0) {
    local_50 = 0;
  }
  if (0 < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    pwVar3 = local_58;
    if (0 < local_50) {
      wcsncpy(local_58,pwVar4,(longlong)iVar7);
      pwVar3[iVar7] = L'\0';
    }
  }
  iVar1 = local_50;
  _Src = (void *)*param_3;
  iVar7 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar7 = iVar5;
  }
  if (iVar7 != 0) {
    local_50 = (uint)(local_50 == 0) + iVar7 + local_50;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar1);
    }
    pwVar4 = local_58 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0));
    _guard_xfg_dispatch_icall_nop(pwVar4,_Src,(longlong)iVar7 * 2);
    pwVar4[iVar7] = L'\0';
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if ((((int)plVar2[4] - 2U & 0xfffffff5) != 0) || ((int)plVar2[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_58);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],local_res8,2);
  FString::PrintfImpl(&local_48,L"%lld",param_4);
  puVar6 = &DAT_143f3eda8;
  if (local_40 != 0) {
    iVar5 = local_40 + -1;
    puVar6 = local_48;
  }
  (**(code **)(*(longlong *)plVar2[1] + 0x50))((longlong *)plVar2[1],puVar6,(longlong)iVar5 * 2);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(plVar2 + 4) = 8;
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b30560 AddSP<SMenuAnchor> body=294 status=ok
// SIG undefined AddSP<SMenuAnchor>(void)

undefined8 *
TBaseMulticastDelegate<void,TSharedRef<IMenu,0>_>::AddSP<SMenuAnchor>
          (longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_res10 [8];
  longlong *local_38;
  int local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  plVar2 = (longlong *)FUN_142b31150(&local_38,param_3,&local_28);
  *param_2 = 0;
  if (((int)plVar2[1] != 0) && (*plVar2 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    uVar5 = 0;
    if (((int)plVar2[1] != 0) &&
       (plVar4 = (longlong *)*plVar2, uVar5 = 0, plVar4 != (longlong *)0x0)) {
      puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
      uVar5 = *puVar3;
    }
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar5;
    plVar4 = (longlong *)((longlong)iVar1 * 0x10 + *param_1);
    *plVar4 = 0;
    *plVar4 = *plVar2;
    *plVar2 = 0;
    *(int *)(plVar4 + 1) = (int)plVar2[1];
    *(undefined4 *)(plVar2 + 1) = 0;
  }
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return param_2;
}



// FUNCTION 142b30690 FUN_142b30690 body=231 status=ok
// SIG undefined FUN_142b30690(void)

void FUN_142b30690(longlong *param_1,longlong param_2,undefined4 *param_3)

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
    *plVar2 = (longlong)&PTR_GetPoolName_1457c5828;
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    plVar2[1] = param_2;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_1457c5870;
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



// FUNCTION 142b30780 FUN_142b30780 body=231 status=ok
// SIG undefined FUN_142b30780(void)

void FUN_142b30780(longlong *param_1,longlong param_2,undefined4 *param_3)

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
    *plVar2 = (longlong)&PTR_GetPoolName_1457c58b8;
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    plVar2[1] = param_2;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_1457c5900;
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



// FUNCTION 142b30870 FUN_142b30870 body=332 status=ok
// SIG undefined FUN_142b30870(void)

void FUN_142b30870(longlong **param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_28 [2];
  
  plVar5 = (longlong *)param_2[1];
  lVar4 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_28[0] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144553e70;
    plVar3[1] = lVar4;
    plVar3[2] = (longlong)plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
    }
    plVar3[3] = param_3;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144553eb8;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plVar3 = local_28[0];
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar3 = local_28[0];
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
        plVar3 = local_28[0];
      }
    }
  }
  if (local_28 != param_1) {
    if (plVar3 == (longlong *)0x0) {
      if (*(int *)(param_1 + 1) == 0) {
        return;
      }
      plVar5 = *param_1;
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      if (*param_1 != (longlong *)0x0) {
        plVar5 = (longlong *)FMemory::Realloc(*param_1,0,0);
        *param_1 = plVar5;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 142b309c0 FUN_142b309c0 body=347 status=ok
// SIG undefined FUN_142b309c0(void)

void FUN_142b309c0(longlong **param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_28 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  plVar5 = (longlong *)param_2[1];
  lVar4 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x40);
  local_28[0] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143f9e980;
    plVar3[1] = lVar4;
    plVar3[2] = (longlong)plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar3 + 3) = local_18;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_14;
    *(undefined4 *)(plVar3 + 4) = uStack_10;
    *(undefined4 *)((longlong)plVar3 + 0x24) = uStack_c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[6] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f9e9c8;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plVar3 = local_28[0];
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar3 = local_28[0];
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
        plVar3 = local_28[0];
      }
    }
  }
  if (local_28 != param_1) {
    if (plVar3 == (longlong *)0x0) {
      if (*(int *)(param_1 + 1) == 0) {
        return;
      }
      plVar5 = *param_1;
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      if (*param_1 != (longlong *)0x0) {
        plVar5 = (longlong *)FMemory::Realloc(*param_1,0,0);
        *param_1 = plVar5;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 142b30b20 FUN_142b30b20 body=273 status=ok
// SIG undefined FUN_142b30b20(void)

void FUN_142b30b20(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar2 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 8;
    do {
      *puVar2 = *(undefined4 *)(param_2 + -8);
      FString::FString(puVar2 + 2,param_2);
      FString::FString(puVar2 + 6,param_2 + 0x10);
      FString::FString(puVar2 + 10,param_2 + 0x20);
      FString::FString(puVar2 + 0xe,param_2 + 0x30);
      FString::FString(puVar2 + 0x12,param_2 + 0x40);
      FString::FString(puVar2 + 0x16,param_2 + 0x50);
      puVar2[0x1a] = *(undefined4 *)(param_2 + 0x60);
      *(undefined8 *)(puVar2 + 0x1c) = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(puVar2 + 0x1e) = *(undefined8 *)(param_2 + 0x70);
      *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(param_2 + 0x78);
      lVar1 = *(longlong *)(param_2 + 0x80);
      *(longlong *)(puVar2 + 0x22) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 0x24;
      param_2 = param_2 + 0x90;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142b30c40 FUN_142b30c40 body=180 status=ok
// SIG undefined FUN_142b30c40(void)

void FUN_142b30c40(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 0x10;
    do {
      *param_1 = &PTR_FUN_14571ea90;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + -8);
      FString::FString(param_1 + 2,param_2);
      FString::FString(param_1 + 4,param_2 + 0x10);
      param_2 = param_2 + 0x30;
      param_1 = param_1 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142b30d00 FUN_142b30d00 body=396 status=ok
// SIG undefined FUN_142b30d00(void)

void FUN_142b30d00(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  puVar2 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 8;
    puVar5 = (undefined4 *)((longlong)puVar2 + 0x54);
    do {
      *puVar2 = &PTR_FUN_1457b15a8;
      FString::FString(puVar5 + -0x13,param_2);
      FString::FString(puVar5 + -0xf,param_2 + 0x10);
      FString::FString(puVar5 + -0xb,param_2 + 0x20);
      FString::FString(puVar5 + -7,param_2 + 0x30);
      *(undefined8 *)(puVar5 + -3) = 0;
      iVar6 = *(int *)(param_2 + 0x48);
      puVar4 = *(undefined8 **)(param_2 + 0x40);
      puVar5[-1] = iVar6;
      if (iVar6 == 0) {
        *puVar5 = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar5 + -3,iVar6,0);
        puVar3 = *(undefined8 **)(puVar5 + -3);
        do {
          *puVar3 = 0;
          iVar1 = *(int *)(puVar4 + 1);
          _Src = (void *)*puVar4;
          *(int *)(puVar3 + 1) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
          }
          puVar3 = puVar3 + 2;
          puVar4 = puVar4 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      FString::FString(puVar5 + 1,param_2 + 0x50);
      puVar2 = puVar2 + 0xd;
      puVar5 = puVar5 + 0x1a;
      param_2 = param_2 + 0x68;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142b30e90 FUN_142b30e90 body=340 status=ok
// SIG undefined FUN_142b30e90(void)

void FUN_142b30e90(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FAnimLegIKData,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar2 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar1 = puVar2 + 10;
    param_2 = param_2 + 0x18;
    do {
      *puVar2 = &PTR_FUN_14571ee90;
      FString::FString(puVar1 + -9,param_2 + -0x10);
      FString::FString(puVar1 + -7,param_2);
      FString::FString(puVar1 + -5,param_2 + 0x10);
      puVar1[-3] = &PTR_FUN_14571ee50;
      FString::FString(puVar1 + -2,param_2 + 0x28);
      FString::FString(puVar1,param_2 + 0x38);
      puVar1[2] = &PTR_FUN_14571ee30;
      FString::FString(puVar1 + 3,param_2 + 0x50);
      FString::FString(puVar1 + 5,param_2 + 0x60);
      puVar1[7] = &PTR_FUN_14571ee70;
      FString::FString(puVar1 + 8,param_2 + 0x78);
      FString::FString(puVar1 + 10,param_2 + 0x88);
      puVar1 = puVar1 + 0x16;
      puVar2 = puVar2 + 0x16;
      param_2 = param_2 + 0xb0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142b30ff0 FUN_142b30ff0 body=348 status=ok
// SIG undefined FUN_142b30ff0(void)

undefined8 * FUN_142b30ff0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x60,local_18);
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
    *puVar10 = &PTR_GetPoolName_143f9e980;
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
    *puVar10 = &PTR_GetPoolName_143f9e9c8;
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



// FUNCTION 142b31150 FUN_142b31150 body=348 status=ok
// SIG undefined FUN_142b31150(void)

undefined8 * FUN_142b31150(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x60,local_18);
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



// FUNCTION 142b312b0 FUN_142b312b0 body=622 status=ok
// SIG undefined FUN_142b312b0(void)

undefined8 FUN_142b312b0(undefined8 param_1,longlong **param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  int local_58 [2];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong *local_28;
  
  plVar7 = (longlong *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = (longlong *)0x0;
  cVar3 = FUN_1404a6f40(param_1,local_58);
  lVar5 = local_30;
  if (cVar3 == '\0') {
LAB_142b3149e:
    uVar8 = 0;
  }
  else {
    if (local_58[0] == 5) {
      lVar5 = operator_new(0x20);
      plVar6 = plVar7;
      if (lVar5 != 0) {
        plVar6 = (longlong *)FUN_1406905f0(lVar5,&local_40);
      }
      plVar4 = (longlong *)operator_new(0x18);
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f60d18;
        plVar4[2] = (longlong)plVar6;
        plVar7 = plVar4;
      }
      local_68 = plVar6;
      local_60 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_68,plVar6,plVar6);
      if (param_2 != &local_68) {
        *param_2 = plVar6;
        local_68 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_60);
        plVar7 = local_60;
      }
    }
    else {
      if ((local_58[0] != 6) || (local_30 == 0)) goto LAB_142b3149e;
      plVar4 = (longlong *)operator_new(0x20);
      plVar6 = plVar7;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 0;
        *plVar4 = (longlong)&PTR_AsObject_143f606d8;
        plVar4[2] = lVar5;
        plVar4[3] = (longlong)local_28;
        if (local_28 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_28 + 1) = (int)local_28[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar4 + 1) = 6;
        plVar6 = plVar4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f60d18;
        plVar4[2] = (longlong)plVar6;
        plVar7 = plVar4;
      }
      local_78 = plVar6;
      local_70 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_78,plVar6,plVar6);
      if (param_2 != &local_78) {
        *param_2 = plVar6;
        local_78 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_70);
        plVar7 = local_70;
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    uVar8 = 1;
  }
  plVar7 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_28 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_40);
  if (local_50 != 0) {
    FMemory::Free();
  }
  return uVar8;
}



// FUNCTION 142b31520 FUN_142b31520 body=717 status=ok
// SIG undefined FUN_142b31520(void)

int * FUN_142b31520(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  void *_Dst;
  uint uVar10;
  undefined8 *_Src;
  bool bVar11;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar5 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
  lVar7 = *param_3;
  _Src = (undefined8 *)((longlong)iVar5 * 0x40 + *param_1);
  *_Src = &PTR_FUN_143f73d18;
  _Src[1] = *(undefined8 *)(lVar7 + 8);
  lVar7 = *(longlong *)(lVar7 + 0x10);
  _Src[2] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  bVar11 = false;
  *_Src = &PTR_FUN_143f740c8;
  _Src[3] = 0;
  _Src[4] = 0;
  *(undefined4 *)(_Src + 5) = 0;
  *(undefined4 *)((longlong)_Src + 0x2c) = 0;
  *(undefined4 *)(_Src + 6) = 0;
  *(undefined4 *)((longlong)_Src + 0x34) = 0;
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = GetTypeHash(_Src);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar7 = *param_1;
        do {
          cVar4 = FUniqueNetIdWrapper::operator==((longlong)iVar5 * 0x40 + lVar7,_Src);
          if (cVar4 != '\0') goto LAB_142b316b8;
          lVar7 = *param_1;
          iVar5 = *(int *)((longlong)iVar5 * 0x40 + 0x38 + lVar7);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_142b316b8:
    bVar11 = iVar5 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar5 * 0x40 + *param_1);
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_142b317c0;
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
    iVar5 = 0x20;
    cVar4 = '\0';
    if (uVar6 != 0) {
      iVar5 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar4 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar4 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = *param_2;
    uVar10 = GetTypeHash(_Src);
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
    FUN_142b655c0(param_1);
  }
LAB_142b317c0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 142b317f0 FUN_142b317f0 body=665 status=ok
// SIG undefined FUN_142b317f0(void)

int * FUN_142b317f0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  void *_Dst;
  uint uVar10;
  void *_Src;
  bool bVar11;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar5 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
  _Src = (void *)((longlong)iVar5 * 0x40 + *param_1);
  FUN_142b2fc30(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x38) = 0xffffffff;
  bVar11 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = GetTypeHash(_Src);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar7 = *param_1;
        do {
          cVar4 = FUniqueNetIdWrapper::operator==((longlong)iVar5 * 0x40 + lVar7,_Src);
          if (cVar4 != '\0') goto LAB_142b31948;
          lVar7 = *param_1;
          iVar5 = *(int *)((longlong)iVar5 * 0x40 + 0x38 + lVar7);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_142b31948:
    bVar11 = iVar5 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar5 * 0x40 + *param_1);
      FUN_140ce1bb0((longlong)_Dst + 0x28);
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_142b31a60;
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
    iVar5 = 0x20;
    cVar4 = '\0';
    if (uVar6 != 0) {
      iVar5 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar4 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar4 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = *param_2;
    uVar10 = GetTypeHash(_Src);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    *(uint *)((longlong)_Src + 0x3c) = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x38) =
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
    FUN_142b655c0(param_1);
  }
LAB_142b31a60:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 142b31a90 FUN_142b31a90 body=665 status=ok
// SIG undefined FUN_142b31a90(void)

int * FUN_142b31a90(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  void *_Dst;
  uint uVar10;
  void *_Src;
  bool bVar11;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar5 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
  _Src = (void *)((longlong)iVar5 * 0x40 + *param_1);
  FUN_142b2fca0(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x38) = 0xffffffff;
  bVar11 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = GetTypeHash(_Src);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar7 = *param_1;
        do {
          cVar4 = FUniqueNetIdWrapper::operator==((longlong)iVar5 * 0x40 + lVar7,_Src);
          if (cVar4 != '\0') goto LAB_142b31be8;
          lVar7 = *param_1;
          iVar5 = *(int *)((longlong)iVar5 * 0x40 + 0x38 + lVar7);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_142b31be8:
    bVar11 = iVar5 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar5 * 0x40 + *param_1);
      FUN_1404bebc0((longlong)_Dst + 0x28);
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_142b31d00;
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
    iVar5 = 0x20;
    cVar4 = '\0';
    if (uVar6 != 0) {
      iVar5 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar4 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar4 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = *param_2;
    uVar10 = GetTypeHash(_Src);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    *(uint *)((longlong)_Src + 0x3c) = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x38) =
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
    FUN_142b655c0(param_1);
  }
LAB_142b31d00:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 142b31d30 FUN_142b31d30 body=511 status=ok
// SIG undefined FUN_142b31d30(void)

int * FUN_142b31d30(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  void *_Dst;
  bool bVar6;
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  lVar4 = *param_3;
  *param_2 = local_38[0];
  *local_30 = &PTR_FUN_143f73d18;
  local_30[1] = *(undefined8 *)(lVar4 + 8);
  lVar4 = *(longlong *)(lVar4 + 0x10);
  local_30[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  bVar6 = false;
  *local_30 = &PTR_FUN_143f740c8;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  *(undefined4 *)(local_30 + 7) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar2 = GetTypeHash(local_30);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar2 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
      if (iVar2 != -1) {
        lVar4 = *param_1;
        do {
          cVar1 = FUniqueNetIdWrapper::operator==((longlong)iVar2 * 0x40 + lVar4,local_30);
          if (cVar1 != '\0') goto LAB_142b31e39;
          lVar4 = *param_1;
          iVar2 = *(int *)((longlong)iVar2 * 0x40 + 0x38 + lVar4);
        } while (iVar2 != -1);
      }
    }
    iVar2 = -1;
LAB_142b31e39:
    bVar6 = iVar2 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar2 * 0x40 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar2;
      goto LAB_142b31f00;
    }
  }
  cVar1 = FUN_142b420c0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar1 == '\0') {
    iVar2 = *param_2;
    uVar3 = GetTypeHash(local_30);
    uVar3 = (int)param_1[9] - 1U & uVar3;
    *(uint *)((longlong)local_30 + 0x3c) = uVar3;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 7) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) = iVar2
    ;
  }
LAB_142b31f00:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 142b31f30 FUN_142b31f30 body=542 status=ok
// SIG undefined FUN_142b31f30(void)

int * FUN_142b31f30(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  void *_Dst;
  bool bVar7;
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  lVar5 = *param_3;
  puVar1 = (undefined8 *)param_3[1];
  *param_2 = local_38[0];
  *local_30 = &PTR_FUN_143f73d18;
  local_30[1] = *(undefined8 *)(lVar5 + 8);
  lVar5 = *(longlong *)(lVar5 + 0x10);
  local_30[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  bVar7 = false;
  *local_30 = &PTR_FUN_143f740c8;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[5] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_30 + 6) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_30 + 0x34) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_30 + 7) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar3 = GetTypeHash(local_30);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
      if (iVar3 != -1) {
        lVar5 = *param_1;
        do {
          cVar2 = FUniqueNetIdWrapper::operator==((longlong)iVar3 * 0x40 + lVar5,local_30);
          if (cVar2 != '\0') goto LAB_142b32058;
          lVar5 = *param_1;
          iVar3 = *(int *)((longlong)iVar3 * 0x40 + 0x38 + lVar5);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_142b32058:
    bVar7 = iVar3 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar3 * 0x40 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_142b3211f;
    }
  }
  cVar2 = FUN_142b420c0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar2 == '\0') {
    iVar3 = *param_2;
    uVar4 = GetTypeHash(local_30);
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)local_30 + 0x3c) = uVar4;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 7) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) = iVar3
    ;
  }
LAB_142b3211f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 142b32150 FUN_142b32150 body=738 status=ok
// SIG undefined FUN_142b32150(void)

uint * FUN_142b32150(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  char cVar11;
  undefined4 uVar12;
  void *_Src;
  bool bVar13;
  uint local_res8 [2];
  
  iVar8 = 1;
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar10 * 0x40 + 4 + *param_1);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = uVar10;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (void *)((longlong)(int)uVar10 * 0x40 + *param_1);
  lVar7 = *param_3;
  puVar6 = (undefined4 *)param_3[1];
  FString::FString(_Src,lVar7);
  FString::FString((longlong)_Src + 0x10,lVar7 + 0x10);
  FString::FString((longlong)_Src + 0x20,lVar7 + 0x20);
  *(undefined4 *)((longlong)_Src + 0x30) = *puVar6;
  *(undefined4 *)((longlong)_Src + 0x38) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_142b452a0(param_1,local_res8,_Src);
    uVar10 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      plVar9 = (longlong *)(lVar7 * 0x40 + *param_1);
      if (plVar9[4] != 0) {
        FMemory::Free();
      }
      if (plVar9[2] != 0) {
        FMemory::Free();
      }
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar9,_Src,0x38);
      uVar4 = *param_2;
      bVar3 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x40 + *param_1) = uVar4;
      }
      puVar6 = (undefined4 *)((longlong)(int)uVar4 * 0x40 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar4;
      plVar9 = (longlong *)param_1[4];
      *param_2 = uVar10;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142b32409;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar5 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = *param_2;
    uVar4 = FUN_142b4b2f0(_Src);
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)_Src + 0x3c) = uVar4;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x38) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(uint *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_142b657d0(param_1);
  }
LAB_142b32409:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142b32440 FUN_142b32440 body=575 status=ok
// SIG undefined FUN_142b32440(void)

int * FUN_142b32440(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  char cVar10;
  undefined8 *_Src;
  bool bVar11;
  int local_res8 [2];
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar6 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar6 * 0x68 + *param_1);
  FUN_142b2fd10(param_3,_Src);
  *(undefined4 *)(_Src + 0xc) = 0xffffffff;
  bVar11 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)local_res8[0] * 0x68 + *param_1);
      FUN_1406ad7a0(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x60);
      TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142b32656;
    }
  }
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar9) {
    uVar4 = (uVar9 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar10 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar9 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar10 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar8 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*_Src;
    }
    uVar9 = FUN_140438070(puVar7);
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)((longlong)_Src + 100) = uVar9;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xc) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) = iVar8
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142b32656:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 142b32680 FUN_142b32680 body=609 status=ok
// SIG undefined FUN_142b32680(void)

int * FUN_142b32680(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  int local_res8 [2];
  
  iVar11 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  _Src = (undefined8 *)(*param_1 + (longlong)iVar8 * 0x28);
  FString::FString(_Src,*param_3);
  _Src[2] = *puVar3;
  lVar4 = puVar3[1];
  _Src[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  bVar13 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar13 = local_res8[0] != -1;
    if (bVar13) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142b328b8;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar6 = (uVar10 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar11;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*_Src;
    }
    uVar10 = FUN_140438070(puVar9);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    *(uint *)((longlong)_Src + 0x24) = uVar10;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142b328b8:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 142b328f0 FUN_142b328f0 body=684 status=ok
// SIG undefined FUN_142b328f0(void)

uint * FUN_142b328f0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  void *_Src;
  longlong *plVar12;
  bool bVar13;
  uint local_res8 [2];
  
  iVar9 = 1;
  uVar8 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar10 * 0x20 + 4 + *param_1);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = uVar10;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (void *)((longlong)(int)uVar10 * 0x20 + *param_1);
  puVar6 = (undefined4 *)param_3[1];
  FString::FString(_Src,*param_3);
  *(undefined4 *)((longlong)_Src + 0x10) = *puVar6;
  *(undefined4 *)((longlong)_Src + 0x18) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_142b45370(param_1,local_res8,_Src);
    uVar10 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      plVar12 = (longlong *)(lVar7 * 0x20 + *param_1);
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar12,_Src,0x18);
      uVar4 = *param_2;
      bVar3 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar4;
      }
      puVar6 = (undefined4 *)((longlong)(int)uVar4 * 0x20 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar8 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar8;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar4;
      plVar12 = (longlong *)param_1[4];
      *param_2 = uVar10;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142b32b77;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar5 = 0x1f - iVar9;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar10 = *param_2;
    uVar4 = FUN_142b4b2f0(_Src);
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)_Src + 0x1c) = uVar4;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x18) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(uint *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FEDCItemSlot,AActor_*>,TDefaultMapHashableKeyFuncs<FEDCItemSlot,AActor_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142b32b77:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142b32ba0 FUN_142b32ba0 body=122 status=ok
// SIG undefined FUN_142b32ba0(void)

ulonglong FUN_142b32ba0(longlong *param_1,undefined8 param_2,int param_3)

{
  wint_t _C;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = lVar1 + (longlong)param_3 * 2;
  do {
    if (lVar3 == lVar1) {
      return 0xffffffff;
    }
    _C = *(wint_t *)(lVar3 + -2);
    lVar3 = lVar3 + -2;
    iVar2 = iswalnum(_C);
  } while (((iVar2 != 0) || (_C == 0x5f)) && (iVar2 = iswspace(_C), iVar2 == 0));
  return lVar3 - lVar1 >> 1 & 0xffffffff;
}



// FUNCTION 142b32c20 FUN_142b32c20 body=179 status=ok
// SIG undefined FUN_142b32c20(void)

undefined8 * FUN_142b32c20(undefined8 param_1,undefined8 *param_2)

{
  undefined **local_b8 [18];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_143f740c8;
  param_2[3] = 0;
  param_2[4] = 0;
  FArchive::FArchive(local_b8);
  local_28 = 0;
  local_b8[0] = &PTR_FUN_143f4a3a0;
  local_18 = 0x7fffffffffffffff;
  local_20 = param_1;
  FArchive::SetIsLoading(local_b8,1);
  FArchive::SetIsPersistent(local_b8,1);
  FUN_1425da060(local_b8,param_2);
  FArchive::~FArchive(local_b8);
  return param_2;
}



// FUNCTION 142b32ce0 FUN_142b32ce0 body=1563 status=ok
// SIG undefined FUN_142b32ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b32ce0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  undefined8 local_278 [37];
  undefined8 local_150 [37];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)local_278;
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar7 = iVar6 * 2 + 1;
    iVar2 = iVar7;
    iVar12 = iVar6;
joined_r0x000142b32d27:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar6 * 2;
        iVar16 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          if (*(int *)((longlong)iVar7 * 0x128 + 0x354 + (longlong)param_1) <
              *(int *)((longlong)iVar16 * 0x128 + 0x104 + (longlong)param_1)) {
            iVar16 = iVar7;
          }
          iVar16 = iVar16 + 1;
        }
        puVar14 = param_1 + (longlong)iVar6 * 0x25;
        puVar13 = param_1 + (longlong)iVar16 * 0x25;
        if (*(int *)((longlong)puVar14 + 0x104) < *(int *)((longlong)puVar13 + 0x104)) {
          if (puVar14 != puVar13) {
            lVar17 = 2;
            puVar15 = puVar14;
            puVar10 = local_278;
            do {
              puVar8 = puVar10;
              puVar9 = puVar15;
              uVar1 = puVar9[1];
              uVar3 = puVar9[2];
              uVar4 = puVar9[3];
              *puVar8 = *puVar9;
              puVar8[1] = uVar1;
              uVar1 = puVar9[4];
              uVar5 = puVar9[5];
              puVar8[2] = uVar3;
              puVar8[3] = uVar4;
              uVar3 = puVar9[6];
              uVar4 = puVar9[7];
              puVar8[4] = uVar1;
              puVar8[5] = uVar5;
              uVar1 = puVar9[8];
              uVar5 = puVar9[9];
              puVar8[6] = uVar3;
              puVar8[7] = uVar4;
              uVar3 = puVar9[10];
              uVar4 = puVar9[0xb];
              puVar8[8] = uVar1;
              puVar8[9] = uVar5;
              uVar1 = puVar9[0xc];
              uVar5 = puVar9[0xd];
              puVar8[10] = uVar3;
              puVar8[0xb] = uVar4;
              uVar3 = puVar9[0xe];
              uVar4 = puVar9[0xf];
              puVar8[0xc] = uVar1;
              puVar8[0xd] = uVar5;
              puVar8[0xe] = uVar3;
              puVar8[0xf] = uVar4;
              lVar17 = lVar17 + -1;
              puVar15 = puVar9 + 0x10;
              puVar10 = puVar8 + 0x10;
            } while (lVar17 != 0);
            uVar3 = puVar9[0x11];
            uVar4 = puVar9[0x12];
            uVar5 = puVar9[0x13];
            uVar1 = puVar9[0x14];
            puVar8[0x10] = puVar9[0x10];
            puVar8[0x11] = uVar3;
            puVar8[0x12] = uVar4;
            puVar8[0x13] = uVar5;
            puVar8[0x14] = uVar1;
            lVar17 = 2;
            puVar15 = puVar13;
            do {
              puVar9 = puVar14;
              puVar10 = puVar15;
              uVar1 = puVar10[1];
              *puVar9 = *puVar10;
              puVar9[1] = uVar1;
              uVar1 = puVar10[3];
              puVar9[2] = puVar10[2];
              puVar9[3] = uVar1;
              uVar1 = puVar10[5];
              puVar9[4] = puVar10[4];
              puVar9[5] = uVar1;
              uVar1 = puVar10[7];
              puVar9[6] = puVar10[6];
              puVar9[7] = uVar1;
              uVar1 = puVar10[9];
              puVar9[8] = puVar10[8];
              puVar9[9] = uVar1;
              uVar1 = puVar10[0xb];
              puVar9[10] = puVar10[10];
              puVar9[0xb] = uVar1;
              uVar1 = puVar10[0xd];
              puVar9[0xc] = puVar10[0xc];
              puVar9[0xd] = uVar1;
              uVar1 = puVar10[0xf];
              puVar9[0xe] = puVar10[0xe];
              puVar9[0xf] = uVar1;
              lVar17 = lVar17 + -1;
              puVar15 = puVar10 + 0x10;
              puVar14 = puVar9 + 0x10;
            } while (lVar17 != 0);
            uVar1 = puVar10[0x11];
            lVar17 = 2;
            puVar9[0x10] = puVar10[0x10];
            puVar9[0x11] = uVar1;
            uVar1 = puVar10[0x13];
            puVar9[0x12] = puVar10[0x12];
            puVar9[0x13] = uVar1;
            puVar9[0x14] = puVar10[0x14];
            puVar14 = local_278;
            do {
              puVar10 = puVar14;
              puVar15 = puVar13;
              uVar1 = puVar10[1];
              uVar3 = puVar10[2];
              uVar4 = puVar10[3];
              *puVar15 = *puVar10;
              puVar15[1] = uVar1;
              uVar1 = puVar10[4];
              uVar5 = puVar10[5];
              puVar15[2] = uVar3;
              puVar15[3] = uVar4;
              uVar3 = puVar10[6];
              uVar4 = puVar10[7];
              puVar15[4] = uVar1;
              puVar15[5] = uVar5;
              uVar1 = puVar10[8];
              uVar5 = puVar10[9];
              puVar15[6] = uVar3;
              puVar15[7] = uVar4;
              uVar3 = puVar10[10];
              uVar4 = puVar10[0xb];
              puVar15[8] = uVar1;
              puVar15[9] = uVar5;
              uVar1 = puVar10[0xc];
              uVar5 = puVar10[0xd];
              puVar15[10] = uVar3;
              puVar15[0xb] = uVar4;
              uVar3 = puVar10[0xe];
              uVar4 = puVar10[0xf];
              puVar15[0xc] = uVar1;
              puVar15[0xd] = uVar5;
              puVar15[0xe] = uVar3;
              puVar15[0xf] = uVar4;
              lVar17 = lVar17 + -1;
              puVar13 = puVar15 + 0x10;
              puVar14 = puVar10 + 0x10;
            } while (lVar17 != 0);
            uVar3 = puVar10[0x11];
            uVar4 = puVar10[0x12];
            uVar5 = puVar10[0x13];
            uVar1 = puVar10[0x14];
            puVar15[0x10] = puVar10[0x10];
            puVar15[0x11] = uVar3;
            puVar15[0x12] = uVar4;
            puVar15[0x13] = uVar5;
            puVar15[0x14] = uVar1;
          }
          iVar7 = iVar16 * 2 + 1;
          iVar6 = iVar16;
          goto joined_r0x000142b32d27;
        }
      }
      iVar7 = iVar2 + -2;
      iVar6 = iVar12 + -1;
      iVar2 = iVar7;
      iVar12 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar13 = param_1 + (longlong)param_2 * 0x25;
    do {
      if (param_1 != puVar13) {
        lVar17 = 2;
        puVar14 = param_1;
        puVar15 = local_278;
        do {
          puVar9 = puVar15;
          puVar10 = puVar14;
          uVar1 = puVar10[1];
          uVar3 = puVar10[2];
          uVar4 = puVar10[3];
          *puVar9 = *puVar10;
          puVar9[1] = uVar1;
          uVar1 = puVar10[4];
          uVar5 = puVar10[5];
          puVar9[2] = uVar3;
          puVar9[3] = uVar4;
          uVar3 = puVar10[6];
          uVar4 = puVar10[7];
          puVar9[4] = uVar1;
          puVar9[5] = uVar5;
          uVar1 = puVar10[8];
          uVar5 = puVar10[9];
          puVar9[6] = uVar3;
          puVar9[7] = uVar4;
          uVar3 = puVar10[10];
          uVar4 = puVar10[0xb];
          puVar9[8] = uVar1;
          puVar9[9] = uVar5;
          uVar1 = puVar10[0xc];
          uVar5 = puVar10[0xd];
          puVar9[10] = uVar3;
          puVar9[0xb] = uVar4;
          uVar3 = puVar10[0xe];
          uVar4 = puVar10[0xf];
          puVar9[0xc] = uVar1;
          puVar9[0xd] = uVar5;
          puVar9[0xe] = uVar3;
          puVar9[0xf] = uVar4;
          lVar17 = lVar17 + -1;
          puVar14 = puVar10 + 0x10;
          puVar15 = puVar9 + 0x10;
        } while (lVar17 != 0);
        uVar3 = puVar10[0x11];
        lVar17 = 2;
        uVar4 = puVar10[0x12];
        uVar5 = puVar10[0x13];
        uVar1 = puVar10[0x14];
        puVar9[0x10] = puVar10[0x10];
        puVar9[0x11] = uVar3;
        puVar9[0x12] = uVar4;
        puVar9[0x13] = uVar5;
        puVar9[0x14] = uVar1;
        puVar14 = puVar13;
        puVar15 = param_1;
        do {
          puVar9 = puVar15;
          puVar10 = puVar14;
          uVar1 = puVar10[1];
          *puVar9 = *puVar10;
          puVar9[1] = uVar1;
          uVar1 = puVar10[3];
          puVar9[2] = puVar10[2];
          puVar9[3] = uVar1;
          uVar1 = puVar10[5];
          puVar9[4] = puVar10[4];
          puVar9[5] = uVar1;
          uVar1 = puVar10[7];
          puVar9[6] = puVar10[6];
          puVar9[7] = uVar1;
          uVar1 = puVar10[9];
          puVar9[8] = puVar10[8];
          puVar9[9] = uVar1;
          uVar1 = puVar10[0xb];
          puVar9[10] = puVar10[10];
          puVar9[0xb] = uVar1;
          uVar1 = puVar10[0xd];
          puVar9[0xc] = puVar10[0xc];
          puVar9[0xd] = uVar1;
          uVar1 = puVar10[0xf];
          puVar9[0xe] = puVar10[0xe];
          puVar9[0xf] = uVar1;
          lVar17 = lVar17 + -1;
          puVar14 = puVar10 + 0x10;
          puVar15 = puVar9 + 0x10;
        } while (lVar17 != 0);
        uVar1 = puVar10[0x11];
        lVar17 = 2;
        puVar9[0x10] = puVar10[0x10];
        puVar9[0x11] = uVar1;
        uVar1 = puVar10[0x13];
        puVar9[0x12] = puVar10[0x12];
        puVar9[0x13] = uVar1;
        puVar9[0x14] = puVar10[0x14];
        puVar14 = local_278;
        puVar15 = puVar13;
        do {
          puVar9 = puVar15;
          puVar10 = puVar14;
          uVar1 = puVar10[1];
          uVar3 = puVar10[2];
          uVar4 = puVar10[3];
          *puVar9 = *puVar10;
          puVar9[1] = uVar1;
          uVar1 = puVar10[4];
          uVar5 = puVar10[5];
          puVar9[2] = uVar3;
          puVar9[3] = uVar4;
          uVar3 = puVar10[6];
          uVar4 = puVar10[7];
          puVar9[4] = uVar1;
          puVar9[5] = uVar5;
          uVar1 = puVar10[8];
          uVar5 = puVar10[9];
          puVar9[6] = uVar3;
          puVar9[7] = uVar4;
          uVar3 = puVar10[10];
          uVar4 = puVar10[0xb];
          puVar9[8] = uVar1;
          puVar9[9] = uVar5;
          uVar1 = puVar10[0xc];
          uVar5 = puVar10[0xd];
          puVar9[10] = uVar3;
          puVar9[0xb] = uVar4;
          uVar3 = puVar10[0xe];
          uVar4 = puVar10[0xf];
          puVar9[0xc] = uVar1;
          puVar9[0xd] = uVar5;
          puVar9[0xe] = uVar3;
          puVar9[0xf] = uVar4;
          lVar17 = lVar17 + -1;
          puVar14 = puVar10 + 0x10;
          puVar15 = puVar9 + 0x10;
        } while (lVar17 != 0);
        uVar3 = puVar10[0x11];
        uVar4 = puVar10[0x12];
        uVar5 = puVar10[0x13];
        uVar1 = puVar10[0x14];
        puVar9[0x10] = puVar10[0x10];
        puVar9[0x11] = uVar3;
        puVar9[0x12] = uVar4;
        puVar9[0x13] = uVar5;
        puVar9[0x14] = uVar1;
      }
      iVar6 = 0;
      if (1 < param_2) {
        do {
          iVar2 = iVar6 * 2;
          iVar7 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            if (*(int *)((longlong)iVar2 * 0x128 + 0x354 + (longlong)param_1) <
                *(int *)((longlong)iVar7 * 0x128 + 0x104 + (longlong)param_1)) {
              iVar7 = iVar2;
            }
            iVar7 = iVar7 + 1;
          }
          puVar14 = param_1 + (longlong)iVar7 * 0x25;
          puVar15 = param_1 + (longlong)iVar6 * 0x25;
          if (*(int *)((longlong)puVar14 + 0x104) <= *(int *)((longlong)puVar15 + 0x104)) break;
          if (puVar15 != puVar14) {
            lVar17 = 2;
            puVar10 = puVar15;
            puVar9 = local_150;
            do {
              puVar11 = puVar9;
              puVar8 = puVar10;
              uVar1 = puVar8[1];
              uVar3 = puVar8[2];
              uVar4 = puVar8[3];
              *puVar11 = *puVar8;
              puVar11[1] = uVar1;
              uVar1 = puVar8[4];
              uVar5 = puVar8[5];
              puVar11[2] = uVar3;
              puVar11[3] = uVar4;
              uVar3 = puVar8[6];
              uVar4 = puVar8[7];
              puVar11[4] = uVar1;
              puVar11[5] = uVar5;
              uVar1 = puVar8[8];
              uVar5 = puVar8[9];
              puVar11[6] = uVar3;
              puVar11[7] = uVar4;
              uVar3 = puVar8[10];
              uVar4 = puVar8[0xb];
              puVar11[8] = uVar1;
              puVar11[9] = uVar5;
              uVar1 = puVar8[0xc];
              uVar5 = puVar8[0xd];
              puVar11[10] = uVar3;
              puVar11[0xb] = uVar4;
              uVar3 = puVar8[0xe];
              uVar4 = puVar8[0xf];
              puVar11[0xc] = uVar1;
              puVar11[0xd] = uVar5;
              puVar11[0xe] = uVar3;
              puVar11[0xf] = uVar4;
              lVar17 = lVar17 + -1;
              puVar10 = puVar8 + 0x10;
              puVar9 = puVar11 + 0x10;
            } while (lVar17 != 0);
            uVar3 = puVar8[0x11];
            uVar4 = puVar8[0x12];
            uVar5 = puVar8[0x13];
            uVar1 = puVar8[0x14];
            puVar11[0x10] = puVar8[0x10];
            puVar11[0x11] = uVar3;
            puVar11[0x12] = uVar4;
            puVar11[0x13] = uVar5;
            puVar11[0x14] = uVar1;
            lVar17 = 2;
            puVar10 = puVar14;
            do {
              puVar8 = puVar15;
              puVar9 = puVar10;
              uVar1 = puVar9[1];
              *puVar8 = *puVar9;
              puVar8[1] = uVar1;
              uVar1 = puVar9[3];
              puVar8[2] = puVar9[2];
              puVar8[3] = uVar1;
              uVar1 = puVar9[5];
              puVar8[4] = puVar9[4];
              puVar8[5] = uVar1;
              uVar1 = puVar9[7];
              puVar8[6] = puVar9[6];
              puVar8[7] = uVar1;
              uVar1 = puVar9[9];
              puVar8[8] = puVar9[8];
              puVar8[9] = uVar1;
              uVar1 = puVar9[0xb];
              puVar8[10] = puVar9[10];
              puVar8[0xb] = uVar1;
              uVar1 = puVar9[0xd];
              puVar8[0xc] = puVar9[0xc];
              puVar8[0xd] = uVar1;
              uVar1 = puVar9[0xf];
              puVar8[0xe] = puVar9[0xe];
              puVar8[0xf] = uVar1;
              lVar17 = lVar17 + -1;
              puVar10 = puVar9 + 0x10;
              puVar15 = puVar8 + 0x10;
            } while (lVar17 != 0);
            uVar1 = puVar9[0x11];
            lVar17 = 2;
            puVar8[0x10] = puVar9[0x10];
            puVar8[0x11] = uVar1;
            uVar1 = puVar9[0x13];
            puVar8[0x12] = puVar9[0x12];
            puVar8[0x13] = uVar1;
            puVar8[0x14] = puVar9[0x14];
            puVar15 = local_150;
            do {
              puVar9 = puVar14;
              puVar10 = puVar15;
              uVar1 = puVar10[1];
              uVar3 = puVar10[2];
              uVar4 = puVar10[3];
              *puVar9 = *puVar10;
              puVar9[1] = uVar1;
              uVar1 = puVar10[4];
              uVar5 = puVar10[5];
              puVar9[2] = uVar3;
              puVar9[3] = uVar4;
              uVar3 = puVar10[6];
              uVar4 = puVar10[7];
              puVar9[4] = uVar1;
              puVar9[5] = uVar5;
              uVar1 = puVar10[8];
              uVar5 = puVar10[9];
              puVar9[6] = uVar3;
              puVar9[7] = uVar4;
              uVar3 = puVar10[10];
              uVar4 = puVar10[0xb];
              puVar9[8] = uVar1;
              puVar9[9] = uVar5;
              uVar1 = puVar10[0xc];
              uVar5 = puVar10[0xd];
              puVar9[10] = uVar3;
              puVar9[0xb] = uVar4;
              uVar3 = puVar10[0xe];
              uVar4 = puVar10[0xf];
              puVar9[0xc] = uVar1;
              puVar9[0xd] = uVar5;
              puVar9[0xe] = uVar3;
              puVar9[0xf] = uVar4;
              lVar17 = lVar17 + -1;
              puVar15 = puVar10 + 0x10;
              puVar14 = puVar9 + 0x10;
            } while (lVar17 != 0);
            uVar3 = puVar10[0x11];
            uVar4 = puVar10[0x12];
            uVar5 = puVar10[0x13];
            uVar1 = puVar10[0x14];
            puVar9[0x10] = puVar10[0x10];
            puVar9[0x11] = uVar3;
            puVar9[0x12] = uVar4;
            puVar9[0x13] = uVar5;
            puVar9[0x14] = uVar1;
          }
          iVar6 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar13 = puVar13 + -0x25;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142b33300 FUN_142b33300 body=2238 status=ok
// SIG undefined FUN_142b33300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b33300(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  float fVar21;
  undefined1 auStack_818 [48];
  longlong local_7e8;
  undefined8 local_7e0 [37];
  undefined8 local_6b8 [37];
  undefined8 local_590 [37];
  undefined8 local_468 [38];
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_818;
    fVar21 = (float)(longlong)param_2;
    lStack_330 = param_1 + -0x128 + param_2 * 0x128;
    if ((longlong)param_2 < 0) {
      fVar21 = fVar21 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar21 = _guard_xfg_dispatch_icall_nop(fVar21);
    local_328 = (undefined4)(longlong)(fVar21 + fVar21);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar20 = &local_338;
    do {
      puVar19 = (undefined8 *)*plVar20;
      puVar14 = (undefined8 *)plVar20[1];
      lVar15 = plVar20[2];
      local_7e8._0_4_ = (int)lVar15;
      lVar13 = ((longlong)puVar14 - (longlong)puVar19) / 0x128 + 1;
      puVar18 = puVar19;
      if ((int)local_7e8 != 0) {
LAB_142b33400:
        if (8 < lVar13) {
          puVar19 = puVar18 + (lVar13 / 2) * 0x25;
          if (puVar19 != puVar18) {
            lVar13 = 2;
            puVar17 = puVar19;
            puVar16 = local_7e0;
            do {
              puVar9 = puVar16;
              puVar11 = puVar17;
              uVar2 = puVar11[1];
              uVar6 = puVar11[2];
              uVar7 = puVar11[3];
              *puVar9 = *puVar11;
              puVar9[1] = uVar2;
              uVar2 = puVar11[4];
              uVar8 = puVar11[5];
              puVar9[2] = uVar6;
              puVar9[3] = uVar7;
              uVar6 = puVar11[6];
              uVar7 = puVar11[7];
              puVar9[4] = uVar2;
              puVar9[5] = uVar8;
              uVar2 = puVar11[8];
              uVar8 = puVar11[9];
              puVar9[6] = uVar6;
              puVar9[7] = uVar7;
              uVar6 = puVar11[10];
              uVar7 = puVar11[0xb];
              puVar9[8] = uVar2;
              puVar9[9] = uVar8;
              uVar2 = puVar11[0xc];
              uVar8 = puVar11[0xd];
              puVar9[10] = uVar6;
              puVar9[0xb] = uVar7;
              uVar6 = puVar11[0xe];
              uVar7 = puVar11[0xf];
              puVar9[0xc] = uVar2;
              puVar9[0xd] = uVar8;
              puVar9[0xe] = uVar6;
              puVar9[0xf] = uVar7;
              lVar13 = lVar13 + -1;
              puVar17 = puVar11 + 0x10;
              puVar16 = puVar9 + 0x10;
            } while (lVar13 != 0);
            uVar6 = puVar11[0x11];
            uVar7 = puVar11[0x12];
            uVar8 = puVar11[0x13];
            uVar2 = puVar11[0x14];
            puVar9[0x10] = puVar11[0x10];
            puVar9[0x11] = uVar6;
            puVar9[0x12] = uVar7;
            puVar9[0x13] = uVar8;
            puVar9[0x14] = uVar2;
            lVar13 = 2;
            puVar17 = puVar18;
            do {
              puVar11 = puVar19;
              puVar16 = puVar17;
              uVar2 = puVar16[1];
              *puVar11 = *puVar16;
              puVar11[1] = uVar2;
              uVar2 = puVar16[3];
              puVar11[2] = puVar16[2];
              puVar11[3] = uVar2;
              uVar2 = puVar16[5];
              puVar11[4] = puVar16[4];
              puVar11[5] = uVar2;
              uVar2 = puVar16[7];
              puVar11[6] = puVar16[6];
              puVar11[7] = uVar2;
              uVar2 = puVar16[9];
              puVar11[8] = puVar16[8];
              puVar11[9] = uVar2;
              uVar2 = puVar16[0xb];
              puVar11[10] = puVar16[10];
              puVar11[0xb] = uVar2;
              uVar2 = puVar16[0xd];
              puVar11[0xc] = puVar16[0xc];
              puVar11[0xd] = uVar2;
              uVar2 = puVar16[0xf];
              puVar11[0xe] = puVar16[0xe];
              puVar11[0xf] = uVar2;
              lVar13 = lVar13 + -1;
              puVar17 = puVar16 + 0x10;
              puVar19 = puVar11 + 0x10;
            } while (lVar13 != 0);
            uVar2 = puVar16[0x11];
            lVar13 = 2;
            puVar11[0x10] = puVar16[0x10];
            puVar11[0x11] = uVar2;
            uVar2 = puVar16[0x13];
            puVar11[0x12] = puVar16[0x12];
            puVar11[0x13] = uVar2;
            puVar11[0x14] = puVar16[0x14];
            puVar19 = local_7e0;
            puVar17 = puVar18;
            do {
              puVar11 = puVar17;
              puVar16 = puVar19;
              uVar2 = puVar16[1];
              uVar6 = puVar16[2];
              uVar7 = puVar16[3];
              *puVar11 = *puVar16;
              puVar11[1] = uVar2;
              uVar2 = puVar16[4];
              uVar8 = puVar16[5];
              puVar11[2] = uVar6;
              puVar11[3] = uVar7;
              uVar6 = puVar16[6];
              uVar7 = puVar16[7];
              puVar11[4] = uVar2;
              puVar11[5] = uVar8;
              uVar2 = puVar16[8];
              uVar8 = puVar16[9];
              puVar11[6] = uVar6;
              puVar11[7] = uVar7;
              uVar6 = puVar16[10];
              uVar7 = puVar16[0xb];
              puVar11[8] = uVar2;
              puVar11[9] = uVar8;
              uVar2 = puVar16[0xc];
              uVar8 = puVar16[0xd];
              puVar11[10] = uVar6;
              puVar11[0xb] = uVar7;
              uVar6 = puVar16[0xe];
              uVar7 = puVar16[0xf];
              puVar11[0xc] = uVar2;
              puVar11[0xd] = uVar8;
              puVar11[0xe] = uVar6;
              puVar11[0xf] = uVar7;
              lVar13 = lVar13 + -1;
              puVar19 = puVar16 + 0x10;
              puVar17 = puVar11 + 0x10;
            } while (lVar13 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar16 + 0x84);
            uVar4 = *(undefined4 *)(puVar16 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar16 + 0x8c);
            uVar6 = puVar16[0x12];
            uVar7 = puVar16[0x13];
            uVar2 = puVar16[0x14];
            *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(puVar16 + 0x10);
            *(undefined4 *)((longlong)puVar11 + 0x84) = uVar3;
            *(undefined4 *)(puVar11 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar11 + 0x8c) = uVar5;
            puVar11[0x12] = uVar6;
            puVar11[0x13] = uVar7;
            puVar11[0x14] = uVar2;
          }
          puVar17 = puVar14 + 0x25;
          puVar16 = puVar18;
LAB_142b335a3:
          puVar19 = puVar16 + 0x25;
          if (puVar19 <= puVar14) goto code_r0x000142b335af;
          goto LAB_142b335c0;
        }
        for (; puVar19 = puVar18, puVar17 = puVar18, puVar18 < puVar14; puVar14 = puVar14 + -0x25) {
          while (puVar16 = puVar19, puVar19 = puVar17 + 0x25, puVar19 <= puVar14) {
            piVar1 = (int *)((longlong)puVar17 + 0x22c);
            puVar17 = puVar19;
            if (*piVar1 <= *(int *)((longlong)puVar16 + 0x104)) {
              puVar19 = puVar16;
            }
          }
          if (puVar16 != puVar14) {
            lVar15 = 2;
            puVar19 = puVar16;
            puVar17 = local_468;
            do {
              puVar9 = puVar17;
              puVar11 = puVar19;
              uVar2 = puVar11[1];
              uVar6 = puVar11[2];
              uVar7 = puVar11[3];
              *puVar9 = *puVar11;
              puVar9[1] = uVar2;
              uVar2 = puVar11[4];
              uVar8 = puVar11[5];
              puVar9[2] = uVar6;
              puVar9[3] = uVar7;
              uVar6 = puVar11[6];
              uVar7 = puVar11[7];
              puVar9[4] = uVar2;
              puVar9[5] = uVar8;
              uVar2 = puVar11[8];
              uVar8 = puVar11[9];
              puVar9[6] = uVar6;
              puVar9[7] = uVar7;
              uVar6 = puVar11[10];
              uVar7 = puVar11[0xb];
              puVar9[8] = uVar2;
              puVar9[9] = uVar8;
              uVar2 = puVar11[0xc];
              uVar8 = puVar11[0xd];
              puVar9[10] = uVar6;
              puVar9[0xb] = uVar7;
              uVar6 = puVar11[0xe];
              uVar7 = puVar11[0xf];
              puVar9[0xc] = uVar2;
              puVar9[0xd] = uVar8;
              puVar9[0xe] = uVar6;
              puVar9[0xf] = uVar7;
              lVar15 = lVar15 + -1;
              puVar19 = puVar11 + 0x10;
              puVar17 = puVar9 + 0x10;
            } while (lVar15 != 0);
            uVar6 = puVar11[0x11];
            uVar7 = puVar11[0x12];
            uVar8 = puVar11[0x13];
            uVar2 = puVar11[0x14];
            puVar9[0x10] = puVar11[0x10];
            puVar9[0x11] = uVar6;
            puVar9[0x12] = uVar7;
            puVar9[0x13] = uVar8;
            puVar9[0x14] = uVar2;
            lVar15 = 2;
            puVar19 = puVar14;
            do {
              puVar11 = puVar16;
              puVar17 = puVar19;
              uVar2 = puVar17[1];
              *puVar11 = *puVar17;
              puVar11[1] = uVar2;
              uVar2 = puVar17[3];
              puVar11[2] = puVar17[2];
              puVar11[3] = uVar2;
              uVar2 = puVar17[5];
              puVar11[4] = puVar17[4];
              puVar11[5] = uVar2;
              uVar2 = puVar17[7];
              puVar11[6] = puVar17[6];
              puVar11[7] = uVar2;
              uVar2 = puVar17[9];
              puVar11[8] = puVar17[8];
              puVar11[9] = uVar2;
              uVar2 = puVar17[0xb];
              puVar11[10] = puVar17[10];
              puVar11[0xb] = uVar2;
              uVar2 = puVar17[0xd];
              puVar11[0xc] = puVar17[0xc];
              puVar11[0xd] = uVar2;
              uVar2 = puVar17[0xf];
              puVar11[0xe] = puVar17[0xe];
              puVar11[0xf] = uVar2;
              lVar15 = lVar15 + -1;
              puVar19 = puVar17 + 0x10;
              puVar16 = puVar11 + 0x10;
            } while (lVar15 != 0);
            uVar2 = puVar17[0x11];
            puVar11[0x10] = puVar17[0x10];
            puVar11[0x11] = uVar2;
            uVar2 = puVar17[0x13];
            puVar11[0x12] = puVar17[0x12];
            puVar11[0x13] = uVar2;
            puVar11[0x14] = puVar17[0x14];
            lVar15 = 2;
            puVar19 = local_468;
            puVar17 = puVar14;
            do {
              puVar11 = puVar17;
              puVar16 = puVar19;
              uVar2 = puVar16[1];
              uVar6 = puVar16[2];
              uVar7 = puVar16[3];
              *puVar11 = *puVar16;
              puVar11[1] = uVar2;
              uVar2 = puVar16[4];
              uVar8 = puVar16[5];
              puVar11[2] = uVar6;
              puVar11[3] = uVar7;
              uVar6 = puVar16[6];
              uVar7 = puVar16[7];
              puVar11[4] = uVar2;
              puVar11[5] = uVar8;
              uVar2 = puVar16[8];
              uVar8 = puVar16[9];
              puVar11[6] = uVar6;
              puVar11[7] = uVar7;
              uVar6 = puVar16[10];
              uVar7 = puVar16[0xb];
              puVar11[8] = uVar2;
              puVar11[9] = uVar8;
              uVar2 = puVar16[0xc];
              uVar8 = puVar16[0xd];
              puVar11[10] = uVar6;
              puVar11[0xb] = uVar7;
              uVar6 = puVar16[0xe];
              uVar7 = puVar16[0xf];
              puVar11[0xc] = uVar2;
              puVar11[0xd] = uVar8;
              puVar11[0xe] = uVar6;
              puVar11[0xf] = uVar7;
              lVar15 = lVar15 + -1;
              puVar19 = puVar16 + 0x10;
              puVar17 = puVar11 + 0x10;
            } while (lVar15 != 0);
            uVar8 = puVar16[0x11];
            uVar6 = puVar16[0x12];
            uVar7 = puVar16[0x13];
            uVar2 = puVar16[0x14];
            puVar11[0x10] = puVar16[0x10];
            puVar11[0x11] = uVar8;
            puVar11[0x12] = uVar6;
            puVar11[0x13] = uVar7;
            puVar11[0x14] = uVar2;
          }
        }
        goto LAB_142b339a5;
      }
LAB_142b33996:
      local_7e8 = lVar15;
      FUN_142b32ce0(puVar19,lVar13,param_3,param_4);
LAB_142b339a5:
      plVar20 = plVar20 + -3;
    } while (&local_338 <= plVar20);
  }
  return;
code_r0x000142b335af:
  piVar1 = (int *)((longlong)puVar16 + 0x22c);
  puVar16 = puVar19;
  if (*piVar1 <= *(int *)((longlong)puVar18 + 0x104)) goto LAB_142b335a3;
LAB_142b335c0:
  do {
    puVar16 = puVar17;
    puVar17 = puVar16 + -0x25;
    if (puVar17 <= puVar18) break;
  } while (*(int *)((longlong)puVar18 + 0x104) <= *(int *)((longlong)puVar16 + -0x24));
  if (puVar19 <= puVar17) {
    puVar16 = puVar19;
    if (puVar19 != puVar17) {
      lVar13 = 2;
      puVar11 = local_6b8;
      do {
        puVar10 = puVar11;
        puVar9 = puVar16;
        uVar2 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        *puVar10 = *puVar9;
        puVar10[1] = uVar2;
        uVar2 = puVar9[4];
        uVar8 = puVar9[5];
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        uVar6 = puVar9[6];
        uVar7 = puVar9[7];
        puVar10[4] = uVar2;
        puVar10[5] = uVar8;
        uVar2 = puVar9[8];
        uVar8 = puVar9[9];
        puVar10[6] = uVar6;
        puVar10[7] = uVar7;
        uVar6 = puVar9[10];
        uVar7 = puVar9[0xb];
        puVar10[8] = uVar2;
        puVar10[9] = uVar8;
        uVar2 = puVar9[0xc];
        uVar8 = puVar9[0xd];
        puVar10[10] = uVar6;
        puVar10[0xb] = uVar7;
        uVar6 = puVar9[0xe];
        uVar7 = puVar9[0xf];
        puVar10[0xc] = uVar2;
        puVar10[0xd] = uVar8;
        puVar10[0xe] = uVar6;
        puVar10[0xf] = uVar7;
        lVar13 = lVar13 + -1;
        puVar16 = puVar9 + 0x10;
        puVar11 = puVar10 + 0x10;
      } while (lVar13 != 0);
      uVar6 = puVar9[0x11];
      lVar13 = 2;
      uVar7 = puVar9[0x12];
      uVar8 = puVar9[0x13];
      uVar2 = puVar9[0x14];
      puVar10[0x10] = puVar9[0x10];
      puVar10[0x11] = uVar6;
      puVar10[0x12] = uVar7;
      puVar10[0x13] = uVar8;
      puVar10[0x14] = uVar2;
      puVar16 = puVar17;
      puVar11 = puVar19;
      do {
        puVar10 = puVar11;
        puVar9 = puVar16;
        uVar2 = puVar9[1];
        *puVar10 = *puVar9;
        puVar10[1] = uVar2;
        uVar2 = puVar9[3];
        puVar10[2] = puVar9[2];
        puVar10[3] = uVar2;
        uVar2 = puVar9[5];
        puVar10[4] = puVar9[4];
        puVar10[5] = uVar2;
        uVar2 = puVar9[7];
        puVar10[6] = puVar9[6];
        puVar10[7] = uVar2;
        uVar2 = puVar9[9];
        puVar10[8] = puVar9[8];
        puVar10[9] = uVar2;
        uVar2 = puVar9[0xb];
        puVar10[10] = puVar9[10];
        puVar10[0xb] = uVar2;
        uVar2 = puVar9[0xd];
        puVar10[0xc] = puVar9[0xc];
        puVar10[0xd] = uVar2;
        uVar2 = puVar9[0xf];
        puVar10[0xe] = puVar9[0xe];
        puVar10[0xf] = uVar2;
        lVar13 = lVar13 + -1;
        puVar16 = puVar9 + 0x10;
        puVar11 = puVar10 + 0x10;
      } while (lVar13 != 0);
      uVar2 = puVar9[0x11];
      lVar13 = 2;
      puVar10[0x10] = puVar9[0x10];
      puVar10[0x11] = uVar2;
      uVar2 = puVar9[0x13];
      puVar10[0x12] = puVar9[0x12];
      puVar10[0x13] = uVar2;
      puVar10[0x14] = puVar9[0x14];
      puVar16 = local_6b8;
      puVar11 = puVar17;
      do {
        puVar10 = puVar11;
        puVar9 = puVar16;
        uVar2 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        *puVar10 = *puVar9;
        puVar10[1] = uVar2;
        uVar2 = puVar9[4];
        uVar8 = puVar9[5];
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        uVar6 = puVar9[6];
        uVar7 = puVar9[7];
        puVar10[4] = uVar2;
        puVar10[5] = uVar8;
        uVar2 = puVar9[8];
        uVar8 = puVar9[9];
        puVar10[6] = uVar6;
        puVar10[7] = uVar7;
        uVar6 = puVar9[10];
        uVar7 = puVar9[0xb];
        puVar10[8] = uVar2;
        puVar10[9] = uVar8;
        uVar2 = puVar9[0xc];
        uVar8 = puVar9[0xd];
        puVar10[10] = uVar6;
        puVar10[0xb] = uVar7;
        uVar6 = puVar9[0xe];
        uVar7 = puVar9[0xf];
        puVar10[0xc] = uVar2;
        puVar10[0xd] = uVar8;
        puVar10[0xe] = uVar6;
        puVar10[0xf] = uVar7;
        lVar13 = lVar13 + -1;
        puVar16 = puVar9 + 0x10;
        puVar11 = puVar10 + 0x10;
      } while (lVar13 != 0);
      uVar3 = *(undefined4 *)((longlong)puVar9 + 0x84);
      uVar4 = *(undefined4 *)(puVar9 + 0x11);
      uVar5 = *(undefined4 *)((longlong)puVar9 + 0x8c);
      uVar6 = puVar9[0x12];
      uVar7 = puVar9[0x13];
      uVar2 = puVar9[0x14];
      *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar9 + 0x10);
      *(undefined4 *)((longlong)puVar10 + 0x84) = uVar3;
      *(undefined4 *)(puVar10 + 0x11) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar5;
      puVar10[0x12] = uVar6;
      puVar10[0x13] = uVar7;
      puVar10[0x14] = uVar2;
      puVar16 = puVar19;
    }
    goto LAB_142b335a3;
  }
  if (puVar18 != puVar17) {
    lVar13 = 2;
    puVar11 = puVar18;
    puVar9 = local_590;
    do {
      puVar12 = puVar9;
      puVar10 = puVar11;
      uVar2 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      *puVar12 = *puVar10;
      puVar12[1] = uVar2;
      uVar2 = puVar10[4];
      uVar8 = puVar10[5];
      puVar12[2] = uVar6;
      puVar12[3] = uVar7;
      uVar6 = puVar10[6];
      uVar7 = puVar10[7];
      puVar12[4] = uVar2;
      puVar12[5] = uVar8;
      uVar2 = puVar10[8];
      uVar8 = puVar10[9];
      puVar12[6] = uVar6;
      puVar12[7] = uVar7;
      uVar6 = puVar10[10];
      uVar7 = puVar10[0xb];
      puVar12[8] = uVar2;
      puVar12[9] = uVar8;
      uVar2 = puVar10[0xc];
      uVar8 = puVar10[0xd];
      puVar12[10] = uVar6;
      puVar12[0xb] = uVar7;
      uVar6 = puVar10[0xe];
      uVar7 = puVar10[0xf];
      puVar12[0xc] = uVar2;
      puVar12[0xd] = uVar8;
      puVar12[0xe] = uVar6;
      puVar12[0xf] = uVar7;
      lVar13 = lVar13 + -1;
      puVar11 = puVar10 + 0x10;
      puVar9 = puVar12 + 0x10;
    } while (lVar13 != 0);
    uVar6 = puVar10[0x11];
    lVar13 = 2;
    uVar7 = puVar10[0x12];
    uVar8 = puVar10[0x13];
    uVar2 = puVar10[0x14];
    puVar12[0x10] = puVar10[0x10];
    puVar12[0x11] = uVar6;
    puVar12[0x12] = uVar7;
    puVar12[0x13] = uVar8;
    puVar12[0x14] = uVar2;
    puVar11 = puVar17;
    puVar9 = puVar18;
    do {
      puVar12 = puVar9;
      puVar10 = puVar11;
      uVar2 = puVar10[1];
      *puVar12 = *puVar10;
      puVar12[1] = uVar2;
      uVar2 = puVar10[3];
      puVar12[2] = puVar10[2];
      puVar12[3] = uVar2;
      uVar2 = puVar10[5];
      puVar12[4] = puVar10[4];
      puVar12[5] = uVar2;
      uVar2 = puVar10[7];
      puVar12[6] = puVar10[6];
      puVar12[7] = uVar2;
      uVar2 = puVar10[9];
      puVar12[8] = puVar10[8];
      puVar12[9] = uVar2;
      uVar2 = puVar10[0xb];
      puVar12[10] = puVar10[10];
      puVar12[0xb] = uVar2;
      uVar2 = puVar10[0xd];
      puVar12[0xc] = puVar10[0xc];
      puVar12[0xd] = uVar2;
      uVar2 = puVar10[0xf];
      puVar12[0xe] = puVar10[0xe];
      puVar12[0xf] = uVar2;
      lVar13 = lVar13 + -1;
      puVar11 = puVar10 + 0x10;
      puVar9 = puVar12 + 0x10;
    } while (lVar13 != 0);
    uVar2 = puVar10[0x11];
    lVar13 = 2;
    puVar12[0x10] = puVar10[0x10];
    puVar12[0x11] = uVar2;
    uVar2 = puVar10[0x13];
    puVar12[0x12] = puVar10[0x12];
    puVar12[0x13] = uVar2;
    puVar12[0x14] = puVar10[0x14];
    puVar11 = local_590;
    puVar9 = puVar17;
    do {
      puVar12 = puVar9;
      puVar10 = puVar11;
      uVar2 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      *puVar12 = *puVar10;
      puVar12[1] = uVar2;
      uVar2 = puVar10[4];
      uVar8 = puVar10[5];
      puVar12[2] = uVar6;
      puVar12[3] = uVar7;
      uVar6 = puVar10[6];
      uVar7 = puVar10[7];
      puVar12[4] = uVar2;
      puVar12[5] = uVar8;
      uVar2 = puVar10[8];
      uVar8 = puVar10[9];
      puVar12[6] = uVar6;
      puVar12[7] = uVar7;
      uVar6 = puVar10[10];
      uVar7 = puVar10[0xb];
      puVar12[8] = uVar2;
      puVar12[9] = uVar8;
      uVar2 = puVar10[0xc];
      uVar8 = puVar10[0xd];
      puVar12[10] = uVar6;
      puVar12[0xb] = uVar7;
      uVar6 = puVar10[0xe];
      uVar7 = puVar10[0xf];
      puVar12[0xc] = uVar2;
      puVar12[0xd] = uVar8;
      puVar12[0xe] = uVar6;
      puVar12[0xf] = uVar7;
      lVar13 = lVar13 + -1;
      puVar11 = puVar10 + 0x10;
      puVar9 = puVar12 + 0x10;
    } while (lVar13 != 0);
    uVar3 = *(undefined4 *)((longlong)puVar10 + 0x84);
    uVar4 = *(undefined4 *)(puVar10 + 0x11);
    uVar5 = *(undefined4 *)((longlong)puVar10 + 0x8c);
    uVar6 = puVar10[0x12];
    uVar7 = puVar10[0x13];
    uVar2 = puVar10[0x14];
    *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)(puVar10 + 0x10);
    *(undefined4 *)((longlong)puVar12 + 0x84) = uVar3;
    *(undefined4 *)(puVar12 + 0x11) = uVar4;
    *(undefined4 *)((longlong)puVar12 + 0x8c) = uVar5;
    puVar12[0x12] = uVar6;
    puVar12[0x13] = uVar7;
    puVar12[0x14] = uVar2;
  }
  local_7e8._0_4_ = (int)local_7e8 + -1;
  if (((longlong)puVar17 + (-0x128 - (longlong)puVar18)) / 0x128 <
      ((longlong)puVar14 - (longlong)puVar19) / 0x128) {
    if (puVar19 < puVar14) {
      *plVar20 = (longlong)puVar19;
      plVar20[1] = (longlong)puVar14;
      *(int *)(plVar20 + 2) = (int)local_7e8;
      plVar20 = plVar20 + 3;
    }
    if (puVar17 <= puVar18 + 0x25) goto LAB_142b339a5;
    puVar14 = puVar16 + -0x4a;
    puVar19 = puVar18;
  }
  else {
    if (puVar18 + 0x25 < puVar17) {
      *plVar20 = (longlong)puVar18;
      plVar20[1] = (longlong)(puVar16 + -0x4a);
      *(int *)(plVar20 + 2) = (int)local_7e8;
      plVar20 = plVar20 + 3;
    }
    if (puVar14 <= puVar19) goto LAB_142b339a5;
  }
  lVar13 = ((longlong)puVar14 - (longlong)puVar19) / 0x128 + 1;
  puVar18 = puVar19;
  if ((int)local_7e8 == 0) goto LAB_142b33996;
  goto LAB_142b33400;
}



// FUNCTION 142b33bc0 FUN_142b33bc0 body=64 status=ok
// SIG undefined FUN_142b33bc0(void)

void FUN_142b33bc0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_1455345e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = param_1;
    return;
  }
  return;
}



// FUNCTION 142b33c00 FUN_142b33c00 body=230 status=ok
// SIG undefined FUN_142b33c00(void)

void FUN_142b33c00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_2;
  plVar1 = plVar5 + (longlong)(int)param_2[1] * 5;
  do {
    if (plVar5 == plVar1) {
      return;
    }
    iVar2 = (int)param_1[1];
    plVar3 = (longlong *)*param_1;
    plVar4 = plVar3 + (longlong)iVar2 * 5;
    if (plVar3 != plVar4) {
      do {
        if ((*(longlong *)*plVar3 == *(longlong *)*plVar5) &&
           (*(longlong *)(((longlong *)*plVar3)[1] + 0x28) ==
            *(longlong *)(((longlong *)*plVar5)[1] + 0x28))) goto LAB_142b33cc1;
        plVar3 = plVar3 + 5;
      } while (plVar3 != plVar4);
    }
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    plVar4 = (longlong *)(*param_1 + (longlong)iVar2 * 0x28);
    *plVar4 = *plVar5;
    FUN_14217e5e0(plVar4 + 1,plVar5 + 1);
LAB_142b33cc1:
    plVar5 = plVar5 + 5;
  } while( true );
}



// FUNCTION 142b33cf0 FUN_142b33cf0 body=398 status=ok
// SIG undefined FUN_142b33cf0(void)

int FUN_142b33cf0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar3 = (int)param_1[1];
  lVar6 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = *(longlong *)(*param_1 + 8) != 0;
  lVar9 = 0;
  iVar11 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar12 = iVar11 + 1;
    if (lVar9 < lVar6) {
      plVar7 = (longlong *)(*param_1 + lVar9 * 0x18 + 8);
      do {
        if (bVar13 != (*plVar7 != 0)) break;
        iVar12 = iVar12 + 1;
        lVar9 = lVar9 + 1;
        plVar7 = plVar7 + 3;
      } while (lVar9 < lVar6);
    }
    iVar8 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar8 != 0) {
        plVar7 = (longlong *)(*param_1 + (longlong)iVar11 * 0x18 + 0x10);
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
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar7 = plVar7 + 3;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar10 * 0x18),
                   (void *)(*param_1 + (longlong)iVar11 * 0x18),(longlong)iVar8 * 0x18);
      }
      iVar10 = iVar10 + iVar8;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar6 <= lVar9) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar3 - iVar10;
    }
  } while( true );
}



// FUNCTION 142b33e80 FUN_142b33e80 body=442 status=ok
// SIG undefined FUN_142b33e80(void)

int FUN_142b33e80(longlong *param_1,undefined8 *param_2)

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
  if ((*(longlong *)(*(longlong *)*param_1 + 0x38) == 0) ||
     (cVar5 = (**(code **)**(undefined8 **)*param_2)(), cVar5 == '\0')) {
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
      lVar8 = uVar10 * 0x10;
      do {
        if ((*(longlong *)(*(longlong *)(lVar8 + *param_1) + 0x38) == 0) ||
           (cVar5 = (**(code **)**(undefined8 **)*param_2)(), cVar5 == '\0')) {
          bVar6 = 1;
        }
        else {
          bVar6 = 0;
        }
        if (bVar15 != bVar6) break;
        uVar14 = (ulonglong)((int)uVar14 + 1);
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)uVar10 < lVar11);
    }
    iVar9 = (int)uVar14 - iVar13;
    if (bVar15 == 0) {
      if (iVar9 != 0) {
        plVar12 = (longlong *)((longlong)iVar13 * 0x10 + 8 + *param_1);
        do {
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
          plVar12 = plVar12 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      if (iVar7 != iVar13) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x10 + *param_1),
                   (void *)((longlong)iVar13 * 0x10 + *param_1),(longlong)iVar9 << 4);
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



// FUNCTION 142b34040 FUN_142b34040 body=415 status=ok
// SIG undefined FUN_142b34040(void)

int FUN_142b34040(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar2 = (int)param_1[1];
  lVar9 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = *(int *)(*param_1 + 0x10) != *(int *)*param_2;
  lVar7 = 0;
  iVar11 = 0;
  do {
    lVar8 = lVar7 + 1;
    iVar12 = iVar11 + 1;
    if (lVar8 < lVar9) {
      piVar4 = (int *)(*param_1 + (lVar8 + (lVar7 + 2) * 2) * 8);
      do {
        if (bVar13 != (*piVar4 != *(int *)*param_2)) break;
        iVar12 = iVar12 + 1;
        lVar8 = lVar8 + 1;
        piVar4 = piVar4 + 6;
      } while (lVar8 < lVar9);
    }
    iVar5 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar5 != 0) {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar11 * 0x18 + 8);
        do {
          plVar3 = (longlong *)*plVar6;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar4 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar4;
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar6 = plVar6 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar10 * 0x18),
                   (void *)(*param_1 + (longlong)iVar11 * 0x18),(longlong)iVar5 * 0x18);
      }
      iVar10 = iVar10 + iVar5;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    lVar7 = lVar8;
    iVar11 = iVar12;
    if (lVar9 <= lVar8) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar2 - iVar10;
    }
  } while( true );
}



// FUNCTION 142b341e0 FUN_142b341e0 body=406 status=ok
// SIG undefined FUN_142b341e0(void)

int FUN_142b341e0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar3 = (int)param_1[1];
  lVar9 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = *(int *)(*(longlong *)*param_1 + 8) != *(int *)*param_2;
  lVar8 = 0;
  iVar11 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar12 = iVar11 + 1;
    if (lVar8 < lVar9) {
      plVar6 = (longlong *)(lVar8 * 0x10 + *param_1);
      do {
        if (bVar13 != (*(int *)(*plVar6 + 8) != *(int *)*param_2)) break;
        iVar12 = iVar12 + 1;
        lVar8 = lVar8 + 1;
        plVar6 = plVar6 + 2;
      } while (lVar8 < lVar9);
    }
    iVar7 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar7 != 0) {
        plVar6 = (longlong *)((longlong)iVar11 * 0x10 + 8 + *param_1);
        do {
          plVar4 = (longlong *)*plVar6;
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
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar6 = plVar6 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar10 * 0x10 + *param_1),
                   (void *)((longlong)iVar11 * 0x10 + *param_1),(longlong)iVar7 << 4);
      }
      iVar10 = iVar10 + iVar7;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar9 <= lVar8) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar3 - iVar10;
    }
  } while( true );
}



// FUNCTION 142b34380 FUN_142b34380 body=496 status=ok
// SIG undefined FUN_142b34380(void)

int FUN_142b34380(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  ulonglong uVar15;
  
  iVar3 = (int)param_1[1];
  lVar12 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar9 = 0;
  iVar6 = 0;
  if ((*(longlong *)*param_1 == 0) ||
     (cVar4 = (**(code **)**(undefined8 **)*param_2)(), cVar4 == '\0')) {
    bVar13 = 1;
    uVar15 = uVar9;
  }
  else {
    bVar13 = 0;
    uVar15 = uVar9;
  }
  do {
    iVar11 = (int)uVar15;
    uVar9 = uVar9 + 1;
    uVar15 = (ulonglong)(iVar11 + 1);
    if ((longlong)uVar9 < lVar12) {
      lVar7 = uVar9 * 0x38;
      do {
        if ((*(longlong *)(lVar7 + *param_1) == 0) ||
           (cVar4 = (**(code **)**(undefined8 **)*param_2)(), cVar4 == '\0')) {
          bVar5 = 1;
        }
        else {
          bVar5 = 0;
        }
        if (bVar13 != bVar5) break;
        uVar15 = (ulonglong)((int)uVar15 + 1);
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x38;
      } while ((longlong)uVar9 < lVar12);
    }
    iVar14 = (int)uVar15 - iVar11;
    if (bVar13 == 0) {
      if (iVar14 != 0) {
        puVar10 = (undefined8 *)((longlong)iVar11 * 0x38 + 0x18 + *param_1);
        do {
          FUN_140b9c2f0(puVar10 + 2);
          iVar11 = *(int *)(puVar10 + 1);
          plVar8 = (longlong *)*puVar10;
          if (iVar11 != 0) {
            do {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              plVar8 = plVar8 + 3;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
            plVar8 = (longlong *)*puVar10;
          }
          if (plVar8 != (longlong *)0x0) {
            FMemory::Free(plVar8);
          }
          plVar8 = (longlong *)puVar10[-2];
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          puVar10 = puVar10 + 7;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    else {
      if (iVar6 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar6 * 0x38 + *param_1),
                   (void *)((longlong)iVar11 * 0x38 + *param_1),(longlong)iVar14 * 0x38);
      }
      iVar6 = iVar6 + iVar14;
    }
    bVar13 = bVar13 ^ 1;
    if (lVar12 <= (longlong)uVar9) {
      *(int *)(param_1 + 1) = iVar6;
      return iVar3 - iVar6;
    }
  } while( true );
}



// FUNCTION 142b34570 FUN_142b34570 body=442 status=ok
// SIG undefined FUN_142b34570(void)

int FUN_142b34570(longlong *param_1,undefined8 *param_2)

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
     (cVar5 = (**(code **)**(undefined8 **)*param_2)(), cVar5 == '\0')) {
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
      lVar8 = uVar10 * 0x30;
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
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x30;
      } while ((longlong)uVar10 < lVar11);
    }
    iVar9 = (int)uVar14 - iVar13;
    if (bVar15 == 0) {
      if (iVar9 != 0) {
        plVar12 = (longlong *)((longlong)iVar13 * 0x30 + 8 + *param_1);
        do {
          if (plVar12[3] != 0) {
            FMemory::Free();
          }
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
          plVar12 = plVar12 + 6;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      if (iVar7 != iVar13) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x30 + *param_1),
                   (void *)((longlong)iVar13 * 0x30 + *param_1),(longlong)iVar9 * 0x30);
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



// FUNCTION 142b34730 FUN_142b34730 body=429 status=ok
// SIG undefined FUN_142b34730(void)

int FUN_142b34730(longlong *param_1,undefined8 *param_2)

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
     (cVar5 = (**(code **)**(undefined8 **)*param_2)(), cVar5 == '\0')) {
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
      lVar8 = uVar10 * 0x20;
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
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x20;
      } while ((longlong)uVar10 < lVar11);
    }
    iVar9 = (int)uVar14 - iVar13;
    if (bVar15 == 0) {
      if (iVar9 != 0) {
        plVar12 = (longlong *)((longlong)iVar13 * 0x20 + 8 + *param_1);
        do {
          if (plVar12[1] != 0) {
            FMemory::Free();
          }
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
          plVar12 = plVar12 + 4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      if (iVar7 != iVar13) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x20 + *param_1),
                   (void *)((longlong)iVar13 * 0x20 + *param_1),(longlong)iVar9 << 5);
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



// FUNCTION 142b348e0 FUN_142b348e0 body=426 status=ok
// SIG undefined FUN_142b348e0(void)

int FUN_142b348e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  
  iVar3 = (int)param_1[1];
  lVar8 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)*param_1;
  uVar10 = 0;
  uVar12 = uVar10;
  if (((*(char *)(lVar4 + 0xc0) == '\0') || (*(int *)(lVar4 + 0xd0) == 4)) ||
     (*(int *)(lVar4 + 0xcc) == 0)) {
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
    if ((longlong)uVar10 < lVar8) {
      plVar7 = (longlong *)(uVar10 * 0x10 + *param_1);
      do {
        lVar4 = *plVar7;
        if (((*(char *)(lVar4 + 0xc0) == '\0') || (*(int *)(lVar4 + 0xd0) == 4)) ||
           (*(int *)(lVar4 + 0xcc) == 0)) {
          bVar6 = 1;
        }
        else {
          bVar6 = 0;
        }
        if (bVar15 != bVar6) break;
        uVar14 = (ulonglong)((int)uVar14 + 1);
        uVar10 = uVar10 + 1;
        plVar7 = plVar7 + 2;
      } while ((longlong)uVar10 < lVar8);
    }
    iVar9 = (int)uVar14 - iVar13;
    if (bVar15 == 0) {
      if (iVar9 != 0) {
        plVar7 = (longlong *)((longlong)iVar13 * 0x10 + 8 + *param_1);
        do {
          plVar5 = (longlong *)*plVar7;
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
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar7 = plVar7 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      iVar11 = (int)uVar12;
      if (iVar11 != iVar13) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x10 + *param_1),
                   (void *)((longlong)iVar13 * 0x10 + *param_1),(longlong)iVar9 << 4);
      }
      uVar12 = (ulonglong)(uint)(iVar11 + iVar9);
    }
    bVar15 = bVar15 ^ 1;
    if (lVar8 <= (longlong)uVar10) {
      *(int *)(param_1 + 1) = (int)uVar12;
      return iVar3 - (int)uVar12;
    }
  } while( true );
}



// FUNCTION 142b34a90 FUN_142b34a90 body=150 status=ok
// SIG undefined FUN_142b34a90(void)

undefined1 FUN_142b34a90(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)FUN_1404a9830();
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  uVar6 = FUN_1404a9a60(&local_18,param_2,param_3);
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142b34b30 FUN_142b34b30 body=27 status=ok
// SIG undefined FUN_142b34b30(void)

void FUN_142b34b30(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_142b39a70(local_18,&local_18);
  return;
}



// FUNCTION 142b34b50 FUN_142b34b50 body=27 status=ok
// SIG undefined FUN_142b34b50(void)

void FUN_142b34b50(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_142b3aae0(local_18,&local_18);
  return;
}


