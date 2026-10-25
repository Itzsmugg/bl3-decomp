// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140aedc10 UAssetImportData body=33 status=ok
// SIG undefined UAssetImportData(void)

undefined8 * UAssetImportData::UAssetImportData(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1442866e0;
  return param_1;
}



// FUNCTION 140aedc40 FUN_140aedc40 body=98 status=ok
// SIG undefined FUN_140aedc40(void)

undefined8 * FUN_140aedc40(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR_FUN_144279458;
  param_1[5] = &PTR_LAB_144279d40;
  param_1[0x5a] = &PTR_LAB_144279d70;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  FUN_1423974f0(param_1,0);
  return param_1;
}



// FUNCTION 140aedcb0 FUN_140aedcb0 body=78 status=ok
// SIG undefined FUN_140aedcb0(void)

undefined8 * FUN_140aedcb0(undefined8 *param_1)

{
  FUN_1423c48a0();
  *param_1 = &PTR_FUN_144284bd0;
  param_1[5] = &PTR_LAB_144285558;
  param_1[0x5a] = &PTR_LAB_144285588;
  *(undefined1 *)(param_1 + 0xf6) = 0;
  param_1[0xf5] = 0;
  return param_1;
}



// FUNCTION 140aedd00 FUN_140aedd00 body=224 status=ok
// SIG undefined FUN_140aedd00(void)

void FUN_140aedd00(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 8);
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



// FUNCTION 140aedde0 FUN_140aedde0 body=233 status=ok
// SIG undefined FUN_140aedde0(void)

void FUN_140aedde0(longlong *param_1)

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
      FUN_140aedd00(plVar7 + 3);
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
      plVar7 = plVar7 + 9;
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



// FUNCTION 140aeded0 FUN_140aeded0 body=233 status=ok
// SIG undefined FUN_140aeded0(void)

void FUN_140aeded0(longlong *param_1)

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
      FUN_140aedde0(plVar7 + 2);
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
      plVar7 = plVar7 + 8;
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



// FUNCTION 140aedfc0 FUN_140aedfc0 body=109 status=ok
// SIG undefined FUN_140aedfc0(void)

void FUN_140aedfc0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (plVar2[6] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 9;
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



// FUNCTION 140aee030 FUN_140aee030 body=95 status=ok
// SIG undefined FUN_140aee030(void)

void FUN_140aee030(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
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



// FUNCTION 140aee090 FUN_140aee090 body=399 status=ok
// SIG undefined FUN_140aee090(void)

void FUN_140aee090(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 2000) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    if (*(longlong *)(param_1 + 0x7a0) == 0) {
      **(longlong **)(param_1 + 0x7a8) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x7a8) = *(longlong *)(param_1 + 0x7a0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x7a0) + 8) = *(undefined8 *)(param_1 + 0x7a8);
      *(undefined8 *)(param_1 + 0x7a0) = 0;
    }
    *(undefined8 *)(param_1 + 0x7a8) = 0;
    *(undefined8 *)(param_1 + 0x7b0) = 0;
  }
  *(undefined ***)(param_1 + 0x680) = &PTR_FUN_144278ac0;
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x680) = &PTR_FUN_1441d26b8;
  *(undefined ***)(param_1 + 0x630) = &PTR_FUN_144278ac0;
  if (*(longlong *)(param_1 + 0x670) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x630) = &PTR_FUN_1441d26b8;
  if (*(longlong *)(param_1 + 0x618) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x5e8);
  plVar2 = *(longlong **)(param_1 + 0x5e0);
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 0x5e0);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x598) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x588) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x578);
  *(undefined ***)(param_1 + 0x550) = &PTR_FUN_143fce298;
  FUN_1409c4a20(param_1);
  return;
}



// FUNCTION 140aee220 FUN_140aee220 body=134 status=ok
// SIG undefined FUN_140aee220(void)

void FUN_140aee220(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x488);
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
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140aee2b0 ~FTTLHUDMissionCommandParams body=151 status=ok
// SIG undefined ~FTTLHUDMissionCommandParams(void)

void FTTLHUDMissionCommandParams::~FTTLHUDMissionCommandParams(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_140aedde0(param_1 + 0x30);
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 140aee350 FUN_140aee350 body=98 status=ok
// SIG undefined FUN_140aee350(void)

void FUN_140aee350(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_143fe0658;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140aee3c0 FUN_140aee3c0 body=784 status=ok
// SIG undefined FUN_140aee3c0(void)

void FUN_140aee3c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x330);
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  iVar9 = *(int *)(param_1 + 0x310);
  plVar6 = *(longlong **)(param_1 + 0x308);
  if (iVar9 != 0) {
    do {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 3;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    plVar6 = *(longlong **)(param_1 + 0x308);
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  iVar9 = *(int *)(param_1 + 0x300);
  lVar5 = *(longlong *)(param_1 + 0x2f8);
  if (iVar9 != 0) {
    plVar6 = (longlong *)(lVar5 + 8);
    do {
      iVar8 = (int)plVar6[1];
      lVar5 = *plVar6;
      if (iVar8 != 0) {
        plVar7 = (longlong *)(lVar5 + 0x10);
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
          plVar7 = plVar7 + 8;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        lVar5 = *plVar6;
      }
      if (lVar5 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 3;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    lVar5 = *(longlong *)(param_1 + 0x2f8);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FMemory::Free();
  }
  iVar9 = *(int *)(param_1 + 0x2c0);
  lVar5 = *(longlong *)(param_1 + 0x2b8);
  if (iVar9 != 0) {
    plVar6 = (longlong *)(lVar5 + 0x10);
    do {
      iVar8 = (int)plVar6[1];
      lVar5 = *plVar6;
      if (iVar8 != 0) {
        plVar7 = (longlong *)(lVar5 + 8);
        do {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 3;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        lVar5 = *plVar6;
      }
      if (lVar5 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    lVar5 = *(longlong *)(param_1 + 0x2b8);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x2a8);
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  plVar6 = *(longlong **)(param_1 + 0x270);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140aee6d0 FUN_140aee6d0 body=285 status=ok
// SIG undefined FUN_140aee6d0(void)

void FUN_140aee6d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
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
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_143fe0658;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140aee7f0 FUN_140aee7f0 body=782 status=ok
// SIG undefined FUN_140aee7f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140aee7f0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  int local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar5 = FWeakObjectPtr::Get();
  if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(param_1 + 2), lVar5 != 0)) {
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    uVar6 = FWeakObjectPtr::Get(param_1 + 2);
    puVar7 = (undefined8 *)FName::FName(local_b8,&DAT_143f3eda8,1);
    uVar6 = FUN_140b1a100(uVar6,*(undefined8 *)(*(longlong *)(param_1 + 4) + 0x40),*puVar7,0);
    FWeakObjectPtr::operator=(&local_c0,uVar6);
    uVar6 = FWeakObjectPtr::Get(&local_c0);
    FUN_140b3fd40(*(undefined8 *)(param_1 + 6),uVar6,DAT_146868978);
    uVar1 = *param_1;
    uVar2 = param_1[1];
    lVar5 = *(longlong *)(param_1 + 4);
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    local_c8 = local_c0;
    local_b8[0] = local_bc;
    plVar8 = (longlong *)FMemory::Realloc(0,0x40);
    if (plVar8 == (longlong *)0x0) {
      if (((local_d0 != 0) && (local_d8 != (longlong *)0x0)) &&
         ((**(code **)(*local_d8 + 0x28))(local_d8,0), local_d8 != (longlong *)0x0)) {
        local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
      }
    }
    else {
      *plVar8 = (longlong)&PTR_GetPoolName_14428b0c8;
      *(undefined4 *)(plVar8 + 1) = uVar1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
      plVar8[2] = lVar5;
      *(undefined4 *)(plVar8 + 3) = uVar3;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
      *(undefined4 *)(plVar8 + 4) = local_c8;
      *(undefined4 *)((longlong)plVar8 + 0x24) = local_b8[0];
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar8[6] = lVar5;
      *plVar8 = (longlong)&PTR_GetPoolName_14428b110;
      FUN_140af4bb0(plVar8,&local_d8);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      lVar5 = FMemory::Realloc(plVar8,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
    local_b0 = 0;
    lVar5 = (**(code **)(**(longlong **)(param_1 + 6) + 0x148))();
    if (*(longlong *)(lVar5 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar5 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
    }
    local_a8 = 0;
    local_a0 = 0;
    if ((local_d0 != 0) && (local_d8 != (longlong *)0x0)) {
      (**(code **)(*local_d8 + 0x30))(local_d8,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_e0 = 0xbf800000;
    local_e8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar6,&local_b0,&local_a8,0x3dcccccd);
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
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  return;
}



// FUNCTION 140aef130 FUN_140aef130 body=43 status=ok
// SIG undefined FUN_140aef130(void)

undefined8 * FUN_140aef130(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140aef160 FUN_140aef160 body=43 status=ok
// SIG undefined FUN_140aef160(void)

undefined8 * FUN_140aef160(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140aef190 FUN_140aef190 body=72 status=ok
// SIG undefined FUN_140aef190(void)

undefined8 * FUN_140aef190(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 140aef1e0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::`21'::<lambda_1>,1>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140aef230 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ADebugCameraController::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x678) != 0) {
    FMemory::Free();
  }
  FUN_140a51170(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x688);
  }
  return param_1;
}



// FUNCTION 140aef280 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ACameraVolumesPaperCharacter::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x660) = &PTR_FUN_143fe0658;
  FUN_140a51170();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x670);
  }
  return param_1;
}



// FUNCTION 140aef2d0 FUN_140aef2d0 body=134 status=ok
// SIG undefined FUN_140aef2d0(void)

longlong FUN_140aef2d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x560) != 0) {
    if (*(longlong *)(param_1 + 0x550) == 0) {
      **(longlong **)(param_1 + 0x558) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x558) = *(longlong *)(param_1 + 0x550);
      *(undefined8 *)(*(longlong *)(param_1 + 0x550) + 8) = *(undefined8 *)(param_1 + 0x558);
      *(undefined8 *)(param_1 + 0x550) = 0;
    }
    *(undefined8 *)(param_1 + 0x558) = 0;
    *(undefined8 *)(param_1 + 0x560) = 0;
  }
  FUN_1409c4a20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6b8);
  }
  return param_1;
}



// FUNCTION 140aef360 FUN_140aef360 body=90 status=ok
// SIG undefined FUN_140aef360(void)

longlong FUN_140aef360(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x550) != 0) {
    FMemory::Free();
  }
  FUN_1409c4a20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x588);
  }
  return param_1;
}



// FUNCTION 140aef3c0 FUN_140aef3c0 body=221 status=ok
// SIG undefined FUN_140aef3c0(void)

longlong FUN_140aef3c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x680) != 0) {
    FMemory::Free();
  }
  FUN_140591060(param_1 + 0x610);
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FMemory::Free();
  }
  FUN_1409c4a20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6f0);
  }
  return param_1;
}



// FUNCTION 140aef4a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AARSharedWorldPlayerController::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140a51170();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x680);
  }
  return param_1;
}



// FUNCTION 140aef4e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 ALandscape::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1409c4a20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x598);
  }
  return param_1;
}



// FUNCTION 140aef520 FUN_140aef520 body=73 status=ok
// SIG undefined FUN_140aef520(void)

longlong FUN_140aef520(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x498);
  }
  return param_1;
}



// FUNCTION 140aef570 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UMovieScene2DTransformSection::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1409c4a20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x550);
  }
  return param_1;
}



// FUNCTION 140aef5b0 FUN_140aef5b0 body=52 status=ok
// SIG undefined FUN_140aef5b0(void)

undefined8 FUN_140aef5b0(undefined8 param_1,ulonglong param_2)

{
  FUN_140aee090();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7e8);
  }
  return param_1;
}



// FUNCTION 140aef5f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 AFGBuildable::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1409c4a20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x558);
  }
  return param_1;
}



// FUNCTION 140aef630 FUN_140aef630 body=66 status=ok
// SIG undefined FUN_140aef630(void)

longlong FUN_140aef630(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x558) = &PTR_FUN_1441d26b8;
  FUN_1409c4a20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x608);
  }
  return param_1;
}



// FUNCTION 140aef680 FUN_140aef680 body=52 status=ok
// SIG undefined FUN_140aef680(void)

undefined8 FUN_140aef680(undefined8 param_1,ulonglong param_2)

{
  FUN_140aee220();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 140aef6c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FIoDispatcherImpl::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140aee220();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4f0);
  }
  return param_1;
}



// FUNCTION 140aef700 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FMovieScene2DTransformSectionTemplate::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140aee220();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b0);
  }
  return param_1;
}



// FUNCTION 140aef740 FUN_140aef740 body=66 status=ok
// SIG undefined FUN_140aef740(void)

longlong FUN_140aef740(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b39a8;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x508);
  }
  return param_1;
}



// FUNCTION 140aef790 FUN_140aef790 body=157 status=ok
// SIG undefined FUN_140aef790(void)

longlong FUN_140aef790(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x598) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x538) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x520);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x508);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4f0);
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b39a8;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5b8);
  }
  return param_1;
}



// FUNCTION 140aef830 FUN_140aef830 body=90 status=ok
// SIG undefined FUN_140aef830(void)

longlong FUN_140aef830(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x7f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    FMemory::Free();
  }
  FUN_140aee090(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x830);
  }
  return param_1;
}



// FUNCTION 140aef890 FUN_140aef890 body=189 status=ok
// SIG undefined FUN_140aef890(void)

longlong FUN_140aef890(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x6c0);
  plVar1 = *(longlong **)(param_1 + 0x6b8);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x6b8);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x660) = &PTR_FUN_143fcb7e0;
  FUN_140a51170(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6c8);
  }
  return param_1;
}



// FUNCTION 140aef950 FUN_140aef950 body=193 status=ok
// SIG undefined FUN_140aef950(void)

longlong FUN_140aef950(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x648) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x638) != 0) {
    FMemory::Free();
  }
  FTTLHUDMissionCommandParams::~FTTLHUDMissionCommandParams(param_1 + 0x5d8);
  FUN_140aeded0(param_1 + 0x578);
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x538);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x520);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x508);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4f0);
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b39a8;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x658);
  }
  return param_1;
}



// FUNCTION 140aefa20 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCustomMeshComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  FUN_1409c4a20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5b0);
  }
  return param_1;
}



// FUNCTION 140aefa70 FUN_140aefa70 body=82 status=ok
// SIG undefined FUN_140aefa70(void)

undefined8 * FUN_140aefa70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144278ac0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1441d26b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140aefad0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FCullObjectsForVolumeCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140aee350();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 140aefb10 FUN_140aefb10 body=52 status=ok
// SIG undefined FUN_140aefb10(void)

undefined8 FUN_140aefb10(undefined8 param_1,ulonglong param_2)

{
  FUN_140aee6d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 140aefb50 FUN_140aefb50 body=165 status=ok
// SIG undefined FUN_140aefb50(void)

longlong FUN_140aefb50(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xc0);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xa8);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x98);
  *(undefined ***)(param_1 + 0x60) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 140aefc00 FUN_140aefc00 body=95 status=ok
// SIG undefined FUN_140aefc00(void)

longlong FUN_140aefc00(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x68) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140aefc60 FUN_140aefc60 body=84 status=ok
// SIG undefined FUN_140aefc60(void)

longlong FUN_140aefc60(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140aefcc0 FUN_140aefcc0 body=84 status=ok
// SIG undefined FUN_140aefcc0(void)

longlong FUN_140aefcc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140aefd20 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAchievementQueryCallbackProxy::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 140aefd80 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAIAsyncTaskBlueprintProxy::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140aefde0 FUN_140aefde0 body=84 status=ok
// SIG undefined FUN_140aefde0(void)

longlong FUN_140aefde0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140aefe40 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UHoudiniAssetParameterMultiparm::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140aefeb0 FUN_140aefeb0 body=73 status=ok
// SIG undefined FUN_140aefeb0(void)

longlong FUN_140aefeb0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 140aeff00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UInputKeySelector::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14061f760();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6f0);
  }
  return param_1;
}



// FUNCTION 140aeff40 FUN_140aeff40 body=155 status=ok
// SIG undefined FUN_140aeff40(void)

longlong FUN_140aeff40(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x388) = &PTR_FUN_143fe0658;
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FMemory::Free();
  }
  FUN_140aee3c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c0);
  }
  return param_1;
}



// FUNCTION 140aeffe0 FUN_140aeffe0 body=73 status=ok
// SIG undefined FUN_140aeffe0(void)

longlong FUN_140aeffe0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x710);
  }
  return param_1;
}



// FUNCTION 140af0030 FUN_140af0030 body=52 status=ok
// SIG undefined FUN_140af0030(void)

undefined8 FUN_140af0030(undefined8 param_1,ulonglong param_2)

{
  FUN_1423c53e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7c0);
  }
  return param_1;
}



// FUNCTION 140af0070 FUN_140af0070 body=123 status=ok
// SIG undefined FUN_140af0070(void)

void FUN_140af0070(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_14232c410();
  puVar1 = *(undefined8 **)(param_1 + 0x178);
  uVar3 = 0;
  uVar2 = (longlong)*(int *)(param_1 + 0x180) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x180) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_142398ec0(*puVar1,1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 140af00f0 FUN_140af00f0 body=1204 status=ok
// SIG undefined FUN_140af00f0(void)

void FUN_140af00f0(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong in_stack_fffffffffffffee8;
  ulonglong uVar15;
  ulonglong in_stack_fffffffffffffef0;
  ulonglong in_stack_fffffffffffffef8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8 [2];
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  ulonglong *local_88;
  longlong *local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68 [2];
  undefined1 local_58 [32];
  
  bVar5 = false;
  bVar4 = false;
  if (param_1[0xb2] != 0) {
    local_a0 = 0;
    local_a8 = 0;
    local_98 = 0;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    uVar7 = FSoftObjectPath::FSoftObjectPath(local_58,param_1);
    FSoftObjectPath::operator=(&local_a8,uVar7);
    FWeakObjectPtr::operator=(&local_b8,param_1);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_b4 = CONCAT44(DAT_1464b56f4,(undefined4)local_b4);
    UObjectBaseUtility::GetPathName(param_1,&local_78,0);
    uVar7 = AArchVisCharacter::StaticClass();
    local_90 = (**(code **)(*param_1 + 0x628))(param_1,uVar7);
    plVar11 = (longlong *)*param_2;
    local_80 = plVar11 + (longlong)(int)param_2[1] * 4;
    if (plVar11 != local_80) {
      plVar11 = plVar11 + 2;
      do {
        if ((int)plVar11[-1] == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)plVar11[-2];
        }
        puVar9 = &DAT_143f3eda8;
        if (local_70 != 0) {
          puVar9 = local_78;
        }
        local_d0 = plVar11;
        iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
        plVar12 = plVar11;
        if (iVar6 == 0) {
          puVar13 = (ulonglong *)*plVar11;
          local_88 = puVar13 + (longlong)(int)plVar11[1] * 4;
          if (puVar13 != puVar13 + (longlong)(int)plVar11[1] * 4) {
            puVar13 = puVar13 + 2;
            do {
              lVar2 = param_1[0xb2];
              iVar6 = *(int *)(lVar2 + 0x720);
              *(int *)(lVar2 + 0x720) = iVar6 + 1;
              if (*(int *)(lVar2 + 0x724) < iVar6 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(lVar2 + 0x718,iVar6);
              }
              lVar2 = *(longlong *)(lVar2 + 0x718);
              lVar14 = (longlong)iVar6 * 0x30;
              *(undefined8 *)(lVar14 + lVar2) = 0;
              *(undefined8 *)(lVar14 + 8 + lVar2) = 0;
              *(undefined8 *)(lVar14 + 0x10 + lVar2) = 0;
              *(undefined8 *)(lVar14 + 0x18 + lVar2) = 0;
              *(undefined8 *)(lVar14 + 0x20 + lVar2) = 0;
              *(undefined8 *)(lVar14 + 0x28 + lVar2) = 0;
              if ((iVar6 < 0) || (*(int *)(param_1[0xb2] + 0x720) <= iVar6)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                if (puVar13[-2] == 0) {
                  bVar4 = true;
                  local_c8[0] = 0;
                  local_c8[1] = 0;
                  plVar11 = local_c8;
                }
                else {
                  local_e8 = *(undefined8 *)(puVar13[-2] + 0x18);
                  bVar5 = true;
                  FName::ToString(&local_e8,local_68);
                  plVar11 = local_68;
                }
                plVar12 = (longlong *)(*(longlong *)(param_1[0xb2] + 0x718) + lVar14);
                if (plVar12 != plVar11) {
                  if (*plVar12 != 0) {
                    FMemory::Free();
                  }
                  *plVar12 = *plVar11;
                  *plVar11 = 0;
                  *(int *)(plVar12 + 1) = (int)plVar11[1];
                  *(undefined4 *)((longlong)plVar12 + 0xc) =
                       *(undefined4 *)((longlong)plVar11 + 0xc);
                  plVar11[1] = 0;
                }
                if ((bVar4) && (bVar4 = false, local_c8[0] != 0)) {
                  FMemory::Free(local_c8[0]);
                }
                if ((bVar5) && (bVar5 = false, local_68[0] != 0)) {
                  FMemory::Free();
                }
                *(ulonglong *)(lVar14 + 0x10 + *(longlong *)(param_1[0xb2] + 0x718)) = puVar13[-2];
                *(int *)(lVar14 + 0x18 + *(longlong *)(param_1[0xb2] + 0x718)) = (int)puVar13[1];
                uVar15 = puVar13[-1];
                if (uVar15 != 0) {
                  local_e8 = *(undefined8 *)(uVar15 + 0x10);
                  lVar2 = param_1[0xb2];
                  FUN_1417846f0(lVar2,
                                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                               );
                  in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffffffffff00;
                  in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
                  uVar7 = FUN_1417985e0(local_e8,lVar2,0,0x41,in_stack_fffffffffffffee8,uVar15,
                                        in_stack_fffffffffffffef8,0,0);
                  *(undefined8 *)(lVar14 + 0x28 + *(longlong *)(param_1[0xb2] + 0x718)) = uVar7;
                  in_stack_fffffffffffffef0 = uVar15;
                }
                uVar15 = *puVar13;
                if (uVar15 != 0) {
                  local_e8 = *(undefined8 *)(uVar15 + 0x10);
                  lVar2 = param_1[0xb2];
                  local_e0 = 0;
                  FUN_1417846f0(lVar2,
                                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                               );
                  in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffffffffff00;
                  in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
                  uVar7 = FUN_1417985e0(local_e8,lVar2,0,0x41,in_stack_fffffffffffffee8,uVar15,
                                        in_stack_fffffffffffffef8,0,0);
                  *(undefined8 *)(lVar14 + 0x20 + *(longlong *)(param_1[0xb2] + 0x718)) = uVar7;
                  in_stack_fffffffffffffef0 = uVar15;
                }
              }
              lVar2 = local_90;
              if ((local_90 != 0) && (lVar14 = *(longlong *)(local_90 + 0x710), lVar14 != 0)) {
                lVar8 = UUGJournalKey::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if ((bVar3) && (uVar15 = *puVar13, uVar15 != 0)) {
                  in_stack_fffffffffffffef8 = 0;
                  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
                  local_d8 = 0;
                  uVar7 = NewObject<USaveGame>
                                    (*(undefined8 *)(lVar2 + 0x710),*(undefined8 *)(uVar15 + 0x10),0
                                     ,0x41,uVar15,in_stack_fffffffffffffef0,0);
                  FUN_142ce1000(lVar14,uVar7);
                  in_stack_fffffffffffffee8 = uVar15;
                }
              }
              puVar1 = puVar13 + 2;
              plVar12 = local_d0;
              puVar13 = puVar13 + 4;
            } while (puVar1 != local_88);
          }
        }
        plVar11 = plVar12 + 4;
        local_d0 = plVar11;
      } while (plVar12 + 2 != local_80);
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_a0 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140af05b0 FUN_140af05b0 body=151 status=ok
// SIG undefined FUN_140af05b0(void)

void FUN_140af05b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = FUN_142e49950();
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar4 = lVar3;
    if (lVar3 != 0) {
      while (lVar4 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if ((lVar3 != 0) && (param_2 != 0)) {
        lVar3 = FUN_1413b4d10();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_140b1a300(param_2,param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140af0650 FUN_140af0650 body=104 status=ok
// SIG undefined FUN_140af0650(void)

void FUN_140af0650(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) && (param_2 != 0)) {
    lVar2 = FUN_1413b4d10();
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
      FUN_140b1a590(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 140af06c0 FUN_140af06c0 body=104 status=ok
// SIG undefined FUN_140af06c0(void)

void FUN_140af06c0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) && (param_2 != 0)) {
    lVar2 = FUN_1413b4d10();
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
      FUN_140b1a5d0(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 140af0730 FUN_140af0730 body=245 status=ok
// SIG undefined FUN_140af0730(void)

void FUN_140af0730(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  undefined1 local_18 [16];
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_14140ff30();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x40)) {
        do {
          fVar5 = (float)FUN_142c98860((longlong)iVar4 * 0x108 +
                                       *(longlong *)(param_1 + 0x38) + 0xd0,param_2[0x23]);
          uVar3 = FPendingAutoReceiveInputActor::FPendingAutoReceiveInputActor
                            (local_18,param_1,iVar4);
          FUN_14099d100(param_2 + 0x74,uVar3,(int)fVar5);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x40));
      }
      lVar2 = *param_2;
      iVar4 = FUN_14233f450(param_2);
      (**(code **)(lVar2 + 0x508))(param_2,iVar4 == 3);
    }
  }
  return;
}



// FUNCTION 140af0830 FUN_140af0830 body=485 status=ok
// SIG undefined FUN_140af0830(void)

void FUN_140af0830(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 local_res10 [8];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*param_2 + 0x768))(param_2), cVar2 != '\0')) {
    FUN_140b0c6d0(param_1);
    lVar4 = FUN_140afe850(param_1);
    if (lVar4 == 0) {
      plVar1 = param_1 + 0xb7;
      lVar4 = param_1[0xb8];
      iVar3 = (int)lVar4 + 1;
      *(int *)(param_1 + 0xb8) = iVar3;
      if (*(int *)((longlong)param_1 + 0x5c4) < iVar3) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar1);
      }
      lVar8 = *plVar1;
      lVar4 = (longlong)(int)lVar4 * 0x20;
      *(undefined8 *)(lVar4 + lVar8) = 0;
      *(undefined8 *)(lVar4 + 8 + lVar8) = 0;
      *(undefined8 *)(lVar4 + 0x10 + lVar8) = 0;
      *(undefined8 *)(lVar4 + 0x18 + lVar8) = 0;
      lVar4 = *plVar1 + lVar4;
      FWeakObjectPtr::operator=(lVar4,param_2);
      uVar5 = FWeakObjectPtr::Get(lVar4);
      uVar6 = FUN_140afcba0(param_1,&local_28);
      FUN_140afd160(param_1,uVar5,uVar6,lVar4 + 0x10);
      if (local_28 != (code *)0x0) {
        FMemory::Free();
      }
      if (param_1[0xb9] == 0) {
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar4 = FUN_140aea640(uVar5);
        if (lVar4 != 0) {
          lVar8 = 0;
          local_28 = FUN_140b03560;
          uStack_20 = 0;
          lVar4 = FUN_140bb7440(lVar4);
          plVar1 = (longlong *)(lVar4 + 0xd8);
          plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
          if (plVar7 != (longlong *)0x0) {
            *plVar7 = (longlong)&PTR_FUN_14428ae88;
            FWeakObjectPtr::operator=(plVar7 + 1,param_1);
            *(undefined4 *)(plVar7 + 2) = (undefined4)local_28;
            *(undefined4 *)((longlong)plVar7 + 0x14) = local_28._4_4_;
            *(undefined4 *)(plVar7 + 3) = uStack_20;
            *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_1c;
            lVar8 = FDelegateHandle::GenerateNewID();
            plVar7[5] = lVar8;
            *plVar7 = (longlong)&PTR_FUN_14428aed0;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
            plVar9 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
            iVar3 = *(int *)(lVar4 + 0xe0);
            lVar8 = *plVar9;
            *(int *)(lVar4 + 0xe0) = iVar3 + 1;
            if (*(int *)(lVar4 + 0xe4) < iVar3 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
            }
            puVar10 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar1);
            *puVar10 = plVar7;
            *(undefined4 *)(puVar10 + 1) = 3;
          }
          param_1[0xb9] = lVar8;
        }
      }
      FUN_140b12730(param_1);
    }
  }
  return;
}



// FUNCTION 140af0a20 FUN_140af0a20 body=92 status=ok
// SIG undefined FUN_140af0a20(void)

void FUN_140af0a20(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x550) + 0x148))(param_1 + -0x550);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x26c) = *param_2;
    (**(code **)(*(longlong *)(param_1 + -0x550) + 0x730))(param_1 + -0x550,2);
  }
  return;
}



// FUNCTION 140af0a80 FUN_140af0a80 body=706 status=ok
// SIG undefined FUN_140af0a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af0a80(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  if (((char)param_1[0xbe] != '\0') && (cVar1 = (char)param_1[0xed], cVar1 != -1)) {
    *(int *)(param_1 + 0xeb) = (int)param_1[0xc1];
    *(undefined4 *)((longlong)param_1 + 0x75c) = *(undefined4 *)((longlong)param_1 + 0x60c);
    *(int *)(param_1 + 0xec) = (int)param_1[0xc2];
    *(undefined4 *)((longlong)param_1 + 0x764) = *(undefined4 *)((longlong)param_1 + 0x614);
    plVar4 = (longlong *)param_1[0xe7];
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x930))(plVar4,param_1[0xbf],1);
    }
    if ((char)param_1[0x25] == '\x03') {
      if (cVar1 == '\0') {
        FUN_140b0d1a0(param_1,param_1[0xeb],0);
        if ((longlong *)param_1[0xeb] == (longlong *)0x0) {
          uVar6 = 0x3c23d70a;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)param_1[0xeb] + 0x280))();
        }
        lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar2 != 0) {
          local_b8 = 0;
          uStack_a8 = 0;
          local_b0 = FUN_140afa4c0;
          uVar3 = AActor::GetWorldTimerManager(param_1);
          plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
          if (plVar4 != (longlong *)0x0) {
            *plVar4 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar4 + 1,param_1);
            *(undefined4 *)(plVar4 + 2) = (undefined4)local_b0;
            *(undefined4 *)((longlong)plVar4 + 0x14) = local_b0._4_4_;
            *(undefined4 *)(plVar4 + 3) = uStack_a8;
            *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_a4;
            lVar2 = FDelegateHandle::GenerateNewID();
            plVar4[5] = lVar2;
            *plVar4 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_98 = 0;
          local_90 = 0;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x30))(plVar4,&local_98);
          }
          FWeakObjectPtr::operator=(local_88,0);
          local_c0 = 0xbf800000;
          local_c8 = 0;
          local_80 = 0;
          local_48 = (longlong *)0x0;
          local_38 = 0;
          local_78 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar3,&local_b8,&local_98,uVar6);
          if (local_38 != 0) {
            plVar5 = local_68;
            if (local_48 != (longlong *)0x0) {
              plVar5 = local_48;
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          if (local_48 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x28))(plVar4);
            lVar2 = FMemory::Realloc(plVar4,0,0);
            if (lVar2 != 0) {
              FMemory::Free(lVar2);
            }
          }
        }
      }
      else if (cVar1 == '\x01') {
        FUN_140b0d1a0(param_1,param_1[0xec],1);
      }
    }
    FUN_140b0a750(param_1);
    uVar3 = 0;
    if (((*(char *)((longlong)param_1 + 0x4fb) - 1U & 0xfd) == 0) ||
       (((char)param_1[0xbe] != '\0' && ((char)param_1[0xed] == '\0')))) {
      uVar3 = 1;
    }
    FUN_14223f340(param_1,uVar3);
  }
  return;
}



// FUNCTION 140af0d50 FUN_140af0d50 body=455 status=ok
// SIG undefined FUN_140af0d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af0d50(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    uStack_90 = 0;
    local_98 = FUN_140af0a80;
    uVar2 = AActor::GetWorldTimerManager(param_1);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_8c;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar1;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
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
    FUN_142880850(uVar2,param_1 + 0xfc,&local_88,0x3c23d70a);
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
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar1 = FMemory::Realloc(plVar3,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 140af0f20 FUN_140af0f20 body=127 status=ok
// SIG undefined FUN_140af0f20(void)

void FUN_140af0f20(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && (plVar3 = (longlong *)FUN_1422312c0(param_1), plVar3 != (longlong *)0x0)) {
    lVar2 = FUN_142e4e4a0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar3 + 0x398))(plVar3,param_1);
    }
  }
  FUN_1422235f0(param_1);
  return;
}



// FUNCTION 140af0fa0 FUN_140af0fa0 body=575 status=ok
// SIG undefined FUN_140af0fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140af0fa0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_140af1d80();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x708) != 4)) {
    if ((char)param_1[0x25] == '\x03') {
      AActor::SetActorTickEnabled(param_1,1);
    }
    lVar2 = FUN_142df3510(param_1[0x2a]);
    if (lVar2 != 0) {
      FUN_142df2b50(param_1[0xd5],lVar2);
    }
    lVar2 = param_1[0xd4];
    local_18 = FUN_140af54f0;
    uStack_10 = 0;
    plVar6 = (longlong *)(lVar2 + 0x1e8);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_10;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar1 = *(int *)(lVar2 + 0x1f0);
      *(int *)(lVar2 + 0x1f0) = iVar1 + 1;
      if (*(int *)(lVar2 + 500) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
      plVar3 = param_1 + 0xaa;
      param_1[0xac] = (longlong)param_1;
      param_1[0xab] = (longlong)&DAT_146868888;
      *plVar3 = (longlong)DAT_146868888;
      DAT_146868888 = plVar3;
      if (*plVar3 != 0) {
        *(longlong **)(*plVar3 + 8) = plVar3;
      }
    }
    if (param_1[0xd1] != 0) {
      local_20 = (undefined4)param_1[0xd3];
      local_28 = param_1[0xd2];
      lVar2 = param_1[0x2d];
      if (lVar2 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined8 *)(lVar2 + 0x220);
        local_30 = *(undefined4 *)(lVar2 + 0x228);
      }
      local_18 = (code *)local_38;
      uStack_10 = local_30;
      FUN_142d40cc0(param_1[0xd1],&local_18,&local_28,0,param_1,param_1,0,0);
    }
  }
  return;
}



// FUNCTION 140af11e0 FUN_140af11e0 body=2499 status=ok
// SIG undefined FUN_140af11e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af11e0(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  byte bVar12;
  byte bVar14;
  undefined4 *puVar15;
  int *piVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  longlong *plVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  ulonglong local_48;
  wchar_t *pwVar13;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_140af1d80();
  uVar6 = UGNewsMenuItem::GetPrivateStaticClass();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  param_1[0xaf] = lVar7;
  if (lVar7 == 0) {
    cVar5 = *(char *)((longlong)param_1 + 0x5a5);
  }
  else {
    FUN_14288d660(param_1[0xad],1);
    cVar5 = '\x01';
    *(undefined1 *)((longlong)param_1 + 0x5a5) = 1;
  }
  lVar7 = param_1[0xaa];
  pwVar18 = (wchar_t *)0x0;
  pwVar10 = (wchar_t *)(ulonglong)(lVar7 != 0);
  if ((param_1[0xaf] == 0) && (pwVar10 = pwVar18, param_1[0xac] != 0)) {
    pwVar10 = (wchar_t *)(ulonglong)(param_1[0xab] != 0 && lVar7 != 0);
  }
  if (cVar5 == '\0') {
    fVar21 = *(float *)(param_1 + 0xb5);
  }
  else {
    fVar21 = *(float *)((longlong)param_1 + 0x5ac);
  }
  if (fVar21 <= 0.0) {
    pwVar10 = (wchar_t *)0x0;
  }
  pwVar13 = pwVar18;
  if (param_1[0xb3] != 0) {
    pwVar13 = pwVar10;
  }
  bVar12 = (byte)pwVar13;
  *(byte *)((longlong)param_1 + 0x601) = bVar12;
  if (lVar7 != 0) {
    plVar17 = (longlong *)param_1[0xb6];
    local_e8[0] = (longlong *)CONCAT44(local_e8[0]._4_4_,0x10101);
    plVar3 = plVar17 + (int)param_1[0xb7];
    if (plVar17 != plVar3) {
      do {
        if (*plVar17 != 0) {
          local_108 = 0;
          FUN_1422232e0(*plVar17,param_1[0xaa],local_e8,0);
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar3);
      bVar12 = *(byte *)((longlong)param_1 + 0x601);
    }
  }
  if (bVar12 != 0) {
    lVar7 = param_1[0xab];
    lVar11 = param_1[0xac];
    fVar22 = *(float *)(lVar7 + 0x1f0) - *(float *)(lVar11 + 0x1f0);
    fVar21 = *(float *)(lVar7 + 0x1ec) - *(float *)(lVar11 + 0x1ec);
    fVar23 = *(float *)(lVar7 + 500) - *(float *)(lVar11 + 500);
    fVar21 = SQRT(fVar22 * fVar22 + fVar21 * fVar21 + fVar23 * fVar23);
    *(float *)(param_1 + 0xc1) = fVar21;
    if ((0.0 < fVar21) || (*(char *)((longlong)param_1 + 0x5a5) != '\0')) {
      bVar14 = 1;
    }
    else {
      bVar14 = 0;
    }
    *(byte *)((longlong)param_1 + 0x601) = bVar12 & bVar14;
    if (*(char *)((longlong)param_1 + 0x5a5) == '\0') {
      fVar21 = fVar21 / *(float *)(param_1 + 0xb5);
    }
    else {
      fVar21 = *(float *)((longlong)param_1 + 0x5ac);
    }
    *(float *)(param_1 + 0xc5) = 1.0 / fVar21;
    FUN_142398ec0(lVar7,0,1);
    FUN_142398ec0(param_1[0xac],0,1);
    (**(code **)(*(longlong *)param_1[0xab] + 0x638))((longlong *)param_1[0xab],0);
    (**(code **)(*(longlong *)param_1[0xac] + 0x638))((longlong *)param_1[0xac],0);
    if ((char)param_1[0x25] == '\x03') {
      FUN_1423912d0(param_1[0xab],&local_a8);
      FUN_1423912d0(param_1[0xac],&local_78);
      *(undefined4 *)(param_1 + 0xc6) = local_98;
      *(undefined4 *)((longlong)param_1 + 0x634) = uStack_94;
      *(undefined4 *)((longlong)param_1 + 0x63c) = local_68;
      *(undefined4 *)(param_1 + 200) = uStack_64;
      *(undefined4 *)(param_1 + 0xca) = local_a8;
      *(undefined4 *)((longlong)param_1 + 0x654) = uStack_a4;
      *(undefined4 *)(param_1 + 0xcb) = uStack_a0;
      *(undefined4 *)((longlong)param_1 + 0x65c) = uStack_9c;
      *(undefined4 *)(param_1 + 199) = uStack_90;
      *(undefined4 *)((longlong)param_1 + 0x644) = uStack_60;
      *(undefined4 *)(param_1 + 0xcc) = local_78;
      *(undefined4 *)((longlong)param_1 + 0x664) = uStack_74;
      *(undefined4 *)(param_1 + 0xcd) = uStack_70;
      *(undefined4 *)((longlong)param_1 + 0x66c) = uStack_6c;
      local_118 = local_118 & 0xffffffffffffff00;
      if (*(char *)((longlong)param_1 + 0x5a4) == '\0') {
        local_108 = CONCAT44(uStack_94,local_98);
        local_100 = uStack_90;
        FUN_1423990b0(param_1[0xaa],&local_108,0,0);
        local_118 = local_118 & 0xffffffffffffff00;
        FUN_142399b10(param_1[0xaa],param_1 + 0xca,0,0);
        *(undefined1 *)((longlong)param_1 + 0x604) = 0;
        *(undefined4 *)(param_1 + 0xce) = 1;
      }
      else {
        local_100 = uStack_60;
        local_108 = CONCAT44(uStack_64,local_68);
        FUN_1423990b0(param_1[0xaa],&local_108);
        local_118 = local_118 & 0xffffffffffffff00;
        FUN_142399b10(param_1[0xaa],param_1 + 0xcc,0,0);
        *(undefined1 *)((longlong)param_1 + 0x604) = 1;
        *(undefined4 *)(param_1 + 0xce) = 2;
      }
    }
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_c0 = 0;
  puVar8 = (undefined8 *)FName::FName(&local_108,L"TimelineCallback",1);
  FWeakObjectPtr::operator=(local_c8,param_1);
  plStack_d0 = (longlong *)*puVar8;
  local_118 = 0;
  local_108 = 0;
  local_e8[0] = (longlong *)0x0;
  local_c0 = plStack_d0;
  FUN_142865210(param_1[0xad],param_1[0xb3],&local_d8,0);
  FWeakObjectPtr::operator=(&local_b8,0);
  local_b0 = 0;
  puVar9 = (ulonglong *)FName::FName(&local_108,L"TimelineFinishedCallback",1);
  FWeakObjectPtr::operator=(&local_b8,param_1);
  plStack_d0 = (longlong *)*puVar9;
  local_d8 = (code *)CONCAT44(local_b4,local_b8);
  local_b0 = (ulonglong)plStack_d0;
  FUN_14288e680(param_1[0xad],&local_d8);
  cVar5 = (char)param_1[0x25];
  if (cVar5 != '\x03') {
    FUN_140af4520(param_1);
    cVar5 = (char)param_1[0x25];
  }
  if ((cVar5 == '\x03') && (param_1[0xaa] != 0)) {
    plStack_d0 = (longlong *)((ulonglong)plStack_d0 & 0xffffffff00000000);
    local_d8 = FUN_140af7ff0;
    local_f8 = FUN_140af7ff0;
    plStack_f0 = plStack_d0;
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AElevator::ElevatorTouched",L"::");
    while (pwVar13 = pwVar10, pwVar13 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar18 = pwVar13;
    }
    FName::FName(&local_108,pwVar18 + 2,1);
    FUN_1407260e0(param_1[0xaa] + 0x570,param_1,&local_f8,local_108);
    local_d8 = (code *)0x0;
    plStack_d0 = (longlong *)0x0;
    FUN_14238b380(param_1[0xaa],1,&local_d8);
    plVar3 = (longlong *)((longlong)local_d8 + (longlong)(int)plStack_d0 * 8);
    for (plVar17 = (longlong *)local_d8; plVar17 != plVar3; plVar17 = plVar17 + 1) {
      lVar7 = *plVar17;
      if (lVar7 != 0) {
        lVar11 = FUN_142a232e0();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        if (bVar20) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AElevator::ElevatorTouched",L"::");
          pwVar18 = (wchar_t *)0x0;
          while (pwVar13 = pwVar10, pwVar13 != (wchar_t *)0x0) {
            pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
            pwVar18 = pwVar13;
          }
          FName::FName(local_e8,pwVar18 + 2,1);
          plVar4 = local_e8[0];
          plVar19 = (longlong *)(lVar7 + 0x570);
          FWeakObjectPtr::operator=(&local_f8,0);
          plStack_f0 = (longlong *)0x0;
          FWeakObjectPtr::operator=(&local_f8,param_1);
          local_108 = 0;
          plStack_f0 = plVar4;
          if ((plVar4 != (longlong *)0x0) && (lVar11 = FWeakObjectPtr::Get(&local_f8), lVar11 != 0))
          {
            UObject::FindFunction(lVar11,plStack_f0);
          }
          piVar2 = (int *)*plVar19;
          iVar1 = *(int *)(lVar7 + 0x578);
          for (piVar16 = piVar2; piVar16 != piVar2 + (longlong)iVar1 * 4; piVar16 = piVar16 + 4) {
            if (((*piVar16 == (int)local_f8) &&
                (local_f8._4_4_ = (int)((ulonglong)local_f8 >> 0x20),
                bVar20 = piVar16[1] == local_f8._4_4_, bVar20)) ||
               ((cVar5 = FWeakObjectPtr::IsValid(piVar16), cVar5 == '\0' &&
                (cVar5 = FWeakObjectPtr::IsValid(&local_f8), cVar5 == '\0')))) {
              bVar20 = true;
            }
            else {
              bVar20 = false;
            }
            if ((bVar20) && (*(longlong **)(piVar16 + 2) == plStack_f0)) {
              bVar20 = true;
            }
            else {
              bVar20 = false;
            }
            if (bVar20) {
              if ((int)((longlong)piVar16 - (longlong)piVar2 >> 4) != -1) goto LAB_140af18ee;
              break;
            }
          }
          iVar1 = *(int *)(lVar7 + 0x578);
          *(int *)(lVar7 + 0x578) = iVar1 + 1;
          if (*(int *)(lVar7 + 0x57c) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19,iVar1);
          }
          puVar15 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar19);
          *puVar15 = (int)local_f8;
          puVar15[1] = local_f8._4_4_;
          *(longlong **)(puVar15 + 2) = plStack_f0;
LAB_140af18ee:
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar19);
        }
      }
    }
    if (local_d8 != (code *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  if ((char)param_1[0xb0] == '\0') {
    plVar3 = (longlong *)param_1[0xb1];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
    }
    plVar3 = (longlong *)param_1[0xb2];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
    }
  }
  else if (param_1[0xb2] != 0) {
    FUN_1423974f0(param_1[0xb2],1);
    plStack_d0 = (longlong *)((ulonglong)plStack_d0 & 0xffffffff00000000);
    local_d8 = FUN_140b02210;
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AElevator::OnBeginBoundsOverlap",L"::");
    pwVar18 = (wchar_t *)0x0;
    while (pwVar13 = pwVar10, pwVar13 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar18 = pwVar13;
    }
    FName::FName(&local_108,pwVar18 + 2,1);
    FUN_1407260e0(param_1[0xb2] + 0x570,param_1,&local_d8,local_108);
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AElevator::OnEndBoundsOverlap",L"::");
    pwVar18 = (wchar_t *)0x0;
    while (pwVar13 = pwVar10, pwVar13 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar18 = pwVar13;
    }
    FName::FName(local_e8,pwVar18 + 2,1);
    plVar3 = local_e8[0];
    lVar7 = param_1[0xb2];
    plVar17 = (longlong *)(lVar7 + 0x580);
    FWeakObjectPtr::operator=(&local_f8,0);
    plStack_f0 = (longlong *)0x0;
    FWeakObjectPtr::operator=(&local_f8,param_1);
    local_108 = 0;
    plStack_f0 = plVar3;
    if ((plVar3 != (longlong *)0x0) && (lVar11 = FWeakObjectPtr::Get(&local_f8), lVar11 != 0)) {
      UObject::FindFunction(lVar11,plStack_f0);
    }
    piVar2 = (int *)*plVar17;
    iVar1 = *(int *)(lVar7 + 0x588);
    for (piVar16 = piVar2; piVar16 != piVar2 + (longlong)iVar1 * 4; piVar16 = piVar16 + 4) {
      if (((*piVar16 == (int)local_f8) &&
          (local_f8._4_4_ = (int)((ulonglong)local_f8 >> 0x20),
          bVar20 = piVar16[1] == local_f8._4_4_, bVar20)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar16), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_f8), cVar5 == '\0')))) {
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
      if ((bVar20) && (*(longlong **)(piVar16 + 2) == plStack_f0)) {
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
      if (bVar20) {
        if ((int)((longlong)piVar16 - (longlong)piVar2 >> 4) != -1) goto LAB_140af1b42;
        break;
      }
    }
    iVar1 = *(int *)(lVar7 + 0x588);
    *(int *)(lVar7 + 0x588) = iVar1 + 1;
    if (*(int *)(lVar7 + 0x58c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar1);
    }
    puVar15 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar17);
    *puVar15 = (int)local_f8;
    puVar15[1] = local_f8._4_4_;
    *(longlong **)(puVar15 + 2) = plStack_f0;
LAB_140af1b42:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar17);
  }
  return;
}



// FUNCTION 140af1bb0 FUN_140af1bb0 body=382 status=ok
// SIG undefined FUN_140af1bb0(void)

void FUN_140af1bb0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_res8 [8];
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_140acba80();
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar3 != 0) && (lVar3 = UWorld::GetGameState<APVPGameState>(lVar3), lVar3 != 0)) {
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    plVar4 = (longlong *)FName::FName(local_res8,L"OnTravelIDsChanged",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = *plVar4;
    plVar4 = (longlong *)(lVar3 + 0xa28);
    piVar6 = (int *)*plVar4;
    iVar1 = *(int *)(lVar3 + 0xa30);
    for (piVar7 = piVar6; piVar7 != piVar6 + (longlong)iVar1 * 4; piVar7 = piVar7 + 4) {
      if ((((*piVar7 == local_28) && (piVar7[1] == local_24)) ||
          ((cVar2 = FWeakObjectPtr::IsValid(piVar7), cVar2 == '\0' &&
           (cVar2 = FWeakObjectPtr::IsValid(&local_28), cVar2 == '\0')))) &&
         (*(longlong *)(piVar7 + 2) == local_20)) {
        if ((int)((longlong)piVar7 - (longlong)piVar6 >> 4) != -1) goto LAB_140af1ce6;
        break;
      }
    }
    iVar1 = *(int *)(lVar3 + 0xa30);
    *(int *)(lVar3 + 0xa30) = iVar1 + 1;
    if (*(int *)(lVar3 + 0xa34) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    piVar6 = (int *)((longlong)iVar1 * 0x10 + *plVar4);
    *piVar6 = local_28;
    piVar6[1] = local_24;
    *(longlong *)(piVar6 + 2) = local_20;
LAB_140af1ce6:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
    puVar5 = (undefined1 *)FUN_140cb7100(lVar3);
    lVar3 = FUN_141317410(param_1,*puVar5);
    param_1[0xcc] = lVar3;
    param_1[0xce] = lVar3;
  }
  return;
}



// FUNCTION 140af1d30 FUN_140af1d30 body=78 status=ok
// SIG undefined FUN_140af1d30(void)

void FUN_140af1d30(longlong param_1)

{
  undefined1 local_res8;
  char local_res9;
  
  FUN_142223710();
  FUN_142350b20(*(undefined8 *)(param_1 + 0x478),0);
  local_res9 = *(char *)(param_1 + 0x468);
  if (local_res9 != '\x01') {
    *(undefined1 *)(param_1 + 0x468) = 1;
    local_res8 = 1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x458,&local_res8);
  }
  return;
}



// FUNCTION 140af1d80 FUN_140af1d80 body=1124 status=ok
// SIG undefined FUN_140af1d80(void)

void FUN_140af1d80(longlong *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  int *piVar11;
  ulonglong local_res8;
  longlong local_res10;
  longlong *local_18;
  longlong local_10;
  
  lVar8 = param_1[2];
  if (lVar8 != 0) {
    lVar7 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1422e5a50(lVar8,param_1);
    }
  }
  if ((int)param_1[0x9a] == 0) {
    lVar8 = param_1[2];
    if (((lVar8 != 0) && (*(longlong *)(lVar8 + 0x18) == DAT_1468688c8)) &&
       (lVar8 = UStruct::FindPropertyByName(lVar8,DAT_1468688d0), lVar8 != 0)) {
      lVar7 = UBoolProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         ((*(byte *)((longlong)param_1 +
                    (longlong)*(int *)(lVar8 + 0x44) + (ulonglong)*(byte *)(lVar8 + 0x71)) &
          *(byte *)(lVar8 + 0x73)) != 0)) {
        *(byte *)((longlong)param_1 + 0x4fe) = *(byte *)((longlong)param_1 + 0x4fe) | 0x40;
      }
    }
    local_res8 = local_res8 & 0xffffffffffffff00;
    FUN_142dee0b0(param_1 + 0x90,&local_res8);
    if (((char)param_1[0x25] == '\x03') && ((char)local_res8 != '\0')) {
      FUN_140b12530(param_1);
    }
  }
  FUN_142223710(param_1);
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146868ad0) && (_Init_thread_header(&DAT_146868ad0), DAT_146868ad0 == -1)) {
    FName::FName(&DAT_146868ac8,L"BP_ExplodingObject_EridiumJar_C",1);
    _Init_thread_footer(&DAT_146868ad0);
  }
  if (*(longlong *)(param_1[2] + 0x18) == DAT_146868ac8) {
    local_res8 = 0;
    if (param_1[0x24] != 0) {
      local_res8 = 0x11a;
    }
    iVar6 = FUN_142235230(param_1);
    if (iVar6 == 3) {
      if ((*piVar11 < DAT_146868ae0) && (_Init_thread_header(&DAT_146868ae0), DAT_146868ae0 == -1))
      {
        FName::FName(&DAT_146868ad8,L"OnRep_DamageType",1);
        _Init_thread_footer(&DAT_146868ae0);
      }
      lVar8 = UObject::FindFunction(param_1,DAT_146868ad8);
      if (lVar8 != 0) {
        (**(code **)(*param_1 + 0x208))(param_1,lVar8,0);
      }
    }
  }
  lVar8 = (**(code **)(*param_1 + 0x768))(param_1);
  param_1[0xa3] = lVar8;
  if ((lVar8 != 0) && (lVar8 = FUN_1423ac7e0(lVar8), lVar8 == 0)) {
    FUN_1423b9af0(param_1[0xa3],1);
    FWeakObjectPtr::operator=(&local_18,0);
    local_10 = 0;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AInteractiveObject::OnAnimationEnded",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    FWeakObjectPtr::operator=(&local_18,param_1);
    local_10 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_18), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_10);
    }
    FUN_1423baf20(param_1[0xa3],&local_18);
  }
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar8 != 0) {
    uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar5 = FUN_1428cfb10(uVar10);
    if (cVar5 == '\0') {
      if ((char)param_1[0x25] == '\x03') {
        (**(code **)(*param_1 + 0x600))(param_1);
        uVar1 = *(undefined1 *)((longlong)param_1 + 0x4fb);
        *(undefined1 *)((longlong)param_1 + 0x4f9) = *(undefined1 *)((longlong)param_1 + 0x4fc);
        *(undefined1 *)((longlong)param_1 + 0x4fa) = *(undefined1 *)((longlong)param_1 + 0x4fd);
        *(undefined1 *)(param_1 + 0x9f) = uVar1;
      }
      else {
        uVar1 = *(undefined1 *)((longlong)param_1 + 0x4fb);
      }
      FUN_140af3fb0(param_1,uVar1);
    }
  }
  if ((char)param_1[0x9c] != '\0') {
    lVar8 = FUN_1422312c0(param_1);
    if (lVar8 != 0) {
      lVar7 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_10 = 0;
        local_18 = param_1;
        uVar10 = UGameplayTagAssetInterface::GetPrivateStaticClass();
        local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar10);
        FUN_140be6c80(lVar8,&local_18);
      }
    }
    uVar10 = AGFreezeCharacterCue::GetPrivateStaticClass();
    lVar8 = (**(code **)(*param_1 + 0x628))(param_1,uVar10);
    param_1[0x9d] = lVar8;
    uVar10 = FUN_142e79d90();
    lVar8 = (**(code **)(*param_1 + 0x628))(param_1,uVar10);
    param_1[0x9e] = lVar8;
  }
  FUN_142dee030(param_1 + 0x90);
  return;
}



// FUNCTION 140af21f0 FUN_140af21f0 body=1078 status=ok
// SIG undefined FUN_140af21f0(void)

/* WARNING: Removing unreachable block (ram,0x000140af2481) */

void FUN_140af21f0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  uint uVar13;
  uint *puVar14;
  wchar_t *pwVar15;
  longlong local_res10;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  FUN_140af1d80();
  pwVar15 = (wchar_t *)0x0;
  if (*(longlong *)(param_1 + 0x558) != 0x3a) {
    plVar11 = (longlong *)(param_1 + 0x2b0);
    uVar1 = *(uint *)(param_1 + 0x2d8);
    puVar9 = (uint *)(param_1 + 0x2c0);
    local_a8 = 0;
    uStack_a4 = 1;
    uStack_94 = 0;
    uStack_90 = 0;
    if (uVar1 != 0) {
      puVar14 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar14 = puVar9;
      }
      uVar2 = *puVar14;
      pwVar7 = pwVar15;
      pwVar12 = pwVar15;
      while (uVar2 == 0) {
        iVar5 = (int)pwVar7;
        uStack_90 = (int)pwVar12 + 0x20;
        pwVar12 = (wchar_t *)(ulonglong)uStack_90;
        local_a8 = iVar5 + 1;
        pwVar7 = (wchar_t *)(ulonglong)local_a8;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_140af22fd;
        uVar2 = puVar14[(longlong)iVar5 + 1];
      }
      uStack_a4 = uVar2 - 1 & uVar2 ^ uVar2;
      iVar5 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_94 = (uStack_90 - iVar5) + 0x1f;
      if ((int)uVar1 < (int)uStack_94) {
LAB_140af22fd:
        uStack_94 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 0x2d8);
    uStack_70 = 0xffffffff;
    uStack_6c = uStack_94;
    local_68 = CONCAT44(uStack_8c,uStack_90);
    uStack_58 = CONCAT44(uStack_a4,local_a8);
    local_98 = -1 << ((byte)uVar2 & 0x1f);
    uVar13 = uVar2 & 0xffffffe0;
    uStack_80 = local_a8;
    uStack_7c = uStack_a4;
    puStack_a0 = puVar9;
    uStack_94 = uVar2;
    local_78 = puVar9;
    local_60 = plVar11;
    puStack_50 = puVar9;
    uStack_40 = local_68;
    local_88 = plVar11;
    uStack_48 = uStack_70;
    uStack_44 = uStack_6c;
    if (uVar2 != uVar1) {
      puVar14 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar14 = puVar9;
      }
      uVar8 = puVar14[(int)uVar2 >> 5] & local_98;
      iVar5 = (int)uVar2 >> 5;
      while (uVar8 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_140af23d5;
        uVar8 = puVar14[(longlong)iVar5 + 1];
        local_98 = 0xffffffff;
        iVar5 = iVar5 + 1;
      }
      uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar8 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_94 = (uVar13 - iVar5) + 0x1f;
      uVar2 = uStack_94;
      if ((int)uVar1 < (int)uStack_94) {
LAB_140af23d5:
        uStack_94 = uVar1;
        uVar2 = uVar1;
      }
    }
    while( true ) {
      if ((uStack_6c == uVar2) && (local_78 == puVar9)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (local_88 == plVar11)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) {
        lVar10 = *(longlong *)(param_1 + 0x550);
        goto LAB_140af24a6;
      }
      lVar10 = *(longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x10);
      if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x18) == *(longlong *)(param_1 + 0x558))) break;
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    }
    lVar6 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      lVar10 = 0;
      *(undefined8 *)(param_1 + 0x550) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x550) = lVar10;
    }
LAB_140af24a6:
    if (lVar10 != 0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCharacterTouch",L"::");
      while (pwVar12 = pwVar7, pwVar12 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar12 + 1,L"::");
        pwVar15 = pwVar12;
      }
      FName::FName(&local_res10,pwVar15 + 2,1);
      lVar10 = *(longlong *)(param_1 + 0x550);
      plVar11 = (longlong *)(lVar10 + 0x570);
      FWeakObjectPtr::operator=(&local_a8,0);
      puStack_a0 = (uint *)0x0;
      FWeakObjectPtr::operator=(&local_a8,param_1);
      puStack_a0 = (uint *)local_res10;
      if (local_res10 != 0) {
        lVar6 = FWeakObjectPtr::Get(&local_a8);
        if (lVar6 != 0) {
          UObject::FindFunction(lVar6,puStack_a0);
        }
      }
      puVar9 = (uint *)*plVar11;
      iVar5 = *(int *)(lVar10 + 0x578);
      for (puVar14 = puVar9; puVar14 != puVar9 + (longlong)iVar5 * 4; puVar14 = puVar14 + 4) {
        if ((*puVar14 == local_a8) && (puVar14[1] == uStack_a4)) {
LAB_140af258f:
          bVar3 = true;
        }
        else {
          cVar4 = FWeakObjectPtr::IsValid(puVar14);
          if (cVar4 == '\0') {
            cVar4 = FWeakObjectPtr::IsValid(&local_a8);
            if (cVar4 == '\0') goto LAB_140af258f;
          }
          bVar3 = false;
        }
        if ((bVar3) && ((uint *)*(longlong *)(puVar14 + 2) == puStack_a0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)puVar14 - (longlong)puVar9 >> 4) != -1) goto LAB_140af25fa;
          break;
        }
      }
      iVar5 = *(int *)(lVar10 + 0x578);
      *(int *)(lVar10 + 0x578) = iVar5 + 1;
      if (*(int *)(lVar10 + 0x57c) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar5);
      }
      puVar9 = (uint *)((longlong)iVar5 * 0x10 + *plVar11);
      *puVar9 = local_a8;
      puVar9[1] = uStack_a4;
      *(uint **)(puVar9 + 2) = puStack_a0;
LAB_140af25fa:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    }
  }
  return;
}



// FUNCTION 140af2630 FUN_140af2630 body=620 status=ok
// SIG undefined FUN_140af2630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af2630(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 auStack_858 [32];
  int local_838 [2];
  undefined8 local_830;
  undefined8 local_828;
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_858;
  FUN_140af1d80();
  iVar8 = 0;
  if ((((*(char *)((longlong)param_1 + 0x62a) == '\0') &&
       ((*(byte *)((longlong)param_1 + 0x56c) & 1) == 0)) &&
      (cVar3 = UAbilityTask::IsWaitingOnRemotePlayerdata(param_1), cVar3 != '\0')) &&
     (*(char *)((longlong)param_1 + 0x562) != '\0')) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = FUN_140b80130(uVar4);
    if (lVar5 != 0) {
      local_828 = 0;
      local_830 = param_1;
      uVar4 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      local_828 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      FUN_140b8ae50(lVar5,&local_830);
    }
  }
  if ((((char)param_1[0xc5] != '\0') && (param_1[0xf6] == 0)) &&
     ((*(byte *)(param_1 + 1) & 0x30) == 0)) {
    plVar1 = param_1 + 0xf4;
    param_1[0xf6] = (longlong)param_1;
    param_1[0xf5] = (longlong)&DAT_1468688f8;
    *plVar1 = (longlong)DAT_1468688f8;
    DAT_1468688f8 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  if ((param_1[0xdc] != 0) || (param_1[0xdd] != 0)) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = FUN_142f6c9f0(uVar4);
    if (lVar5 != 0) {
      local_828 = 0;
      local_830 = param_1;
      uVar4 = FUN_142f768a0();
      local_828 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      FUN_142f690f0(lVar5,&local_830,0);
    }
  }
  if (param_1[2] != 0) {
    local_830 = *(longlong **)(param_1[2] + 0x18);
    pbVar6 = (byte *)FName::GetComparisonNameEntry(&local_830);
    if (pbVar6 != (byte *)0x0) {
      pwVar7 = L"BPIO_Lootable_Typhon_DeadDrop_C";
      local_838[0] = 0;
      cVar3 = FName::SplitNameWithCheck
                        (L"BPIO_Lootable_Typhon_DeadDrop_C",local_818,0x400,local_838);
      if (cVar3 != '\0') {
        pwVar7 = local_818;
        iVar8 = local_838[0] + 1;
      }
      if (iVar8 == local_830._4_4_) {
        if ((*pbVar6 & 1) == 0) {
          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(pwVar7,pbVar6 + 0x10);
        }
        else {
          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
        }
        if (((iVar8 == 0) && (lVar5 = (**(code **)(*param_1 + 0x148))(param_1), lVar5 != 0)) &&
           (plVar1 = (longlong *)param_1[0x2d], plVar1 != (longlong *)0x0)) {
          lVar5 = FUN_1429f11d0();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            (**(code **)(*plVar1 + 0x830))(plVar1,0x13,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140af28a0 FUN_140af28a0 body=342 status=ok
// SIG undefined FUN_140af28a0(void)

void FUN_140af28a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  FUN_140af1d80();
  plVar3 = (longlong *)param_1[0x23];
  if (plVar3 != (longlong *)0x0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      cVar5 = (**(code **)(*plVar3 + 0x768))(plVar3);
      if (cVar5 != '\0') {
        if ((char)param_1[0x25] == '\x03') {
          (**(code **)(*param_1 + 0x730))(param_1,4);
          FUN_1413c4b20(param_1,0);
        }
        FUN_140d01110(plVar3,param_1);
      }
      plVar1 = plVar3 + 0x27f;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = 0x40b079f0;
        *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
        *(undefined4 *)(plVar7 + 3) = 0;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar6;
        *plVar7 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
        iVar2 = (int)plVar3[0x280];
        *(int *)(plVar3 + 0x280) = iVar2 + 1;
        if (*(int *)((longlong)plVar3 + 0x1404) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar8 = plVar7;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 140af2a00 FUN_140af2a00 body=399 status=ok
// SIG undefined FUN_140af2a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140af2a00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FUN_140af2630();
  lVar1 = *(longlong *)(param_1 + 0x738);
  if (lVar1 != 0) {
    FUN_1417846f0(lVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_58 = 0;
    uVar2 = AArchVisCharacter::StaticClass();
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    uVar2 = FUN_1417985e0(uVar2,lVar1,0,0);
    *(undefined8 *)(param_1 + 0x810) = uVar2;
    local_58 = 0;
    FUN_142382f60(uVar2,*(undefined8 *)(param_1 + 0x738),&DAT_146532184,0);
    local_48 = _DAT_1468b5b70;
    uStack_40 = uRam00000001468b5b78;
    local_28 = _DAT_1468b5b90;
    uStack_20 = uRam00000001468b5b98;
    local_50 = *(float *)(*(longlong *)(param_1 + 0x738) + 0x1e4);
    fVar3 = local_50 + *(float *)(param_1 + 0x828);
    local_88 = local_88 & 0xffffff00;
    local_38 = _DAT_1468b5b80 + (float)DAT_1464aa798 * fVar3;
    fStack_34 = fRam00000001468b5b84 + DAT_1464aa798._4_4_ * fVar3;
    fStack_30 = fRam00000001468b5b88 + DAT_1464aa7a0 * fVar3;
    fStack_2c = fRam00000001468b5b8c + 0.0;
    FUN_142381650(*(undefined8 *)(param_1 + 0x810),&local_48,0,0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x810) + 0x7a8) = *(undefined8 *)(param_1 + 0x820);
    FUN_142f6c130(*(undefined8 *)(param_1 + 0x810),2);
  }
  return;
}



// FUNCTION 140af2b90 FUN_140af2b90 body=1119 status=ok
// SIG undefined FUN_140af2b90(void)

void FUN_140af2b90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined2 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 local_res18 [8];
  longlong *local_88;
  ulonglong local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  
  FUN_140af1d80();
  if ((param_1[2] != 0) && (*(longlong *)(param_1[2] + 0x18) == DAT_146868950)) {
    uVar5 = FUN_14290f3e0();
    lVar6 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x2d0) = 0x42700000;
    }
  }
  if (((char)param_1[0x25] == '\x03') && (FUN_140b12530(param_1), (char)param_1[0xb6] != '\0')) {
    FUN_140af4350(param_1);
  }
  puVar7 = (undefined8 *)FName::FName(local_res18,L"AssetRegistry",1);
  uVar5 = *puVar7;
  uVar8 = FUN_14168dc80();
  plVar9 = (longlong *)FUN_141690010(uVar8,uVar5);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  plVar10 = (longlong *)(**(code **)(*plVar9 + 0x48))(plVar9);
  lVar6 = FUN_141304350();
  (**(code **)(*plVar10 + 0x28))(plVar10,*(undefined8 *)(lVar6 + 0x18),&local_88,1);
  uVar14 = (ulonglong)(int)local_80;
  plVar15 = local_88 + uVar14 * 0xb;
  plVar10 = local_88;
  if (local_88 != plVar15) {
    do {
      if (*plVar10 != 0) {
        puVar7 = (undefined8 *)FName::ToString(plVar10,local_78);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar7;
        }
        uVar5 = UObject::GetPrivateStaticClass();
        lVar6 = FUN_141799410(uVar5,0,puVar12,0);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        if (lVar6 == 0) {
          puVar7 = (undefined8 *)FName::ToString(plVar10,local_68);
          if (*(int *)(puVar7 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar7;
          }
          uVar5 = UObject::GetPrivateStaticClass();
          lVar6 = FUN_141799c90(uVar5,0,puVar12,0,0,0,1);
          if (local_68[0] != 0) {
            FMemory::Free();
          }
          if (lVar6 == 0) goto LAB_140af2d8a;
        }
        lVar11 = FUN_141304350();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (*(int *)(lVar6 + 0xa0) != 0)) {
          FUN_140af00f0(param_1,lVar6 + 0x98);
        }
      }
LAB_140af2d8a:
      plVar10 = plVar10 + 0xb;
    } while (plVar10 != plVar15);
    uVar14 = local_80 & 0xffffffff;
  }
  if ((int)uVar14 != 0) {
    plVar10 = local_88 + 6;
    do {
      if (plVar10[1] != 0) {
        FMemory::Free();
      }
      plVar15 = (longlong *)*plVar10;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar10 = plVar10 + 0xb;
      uVar13 = (int)uVar14 - 1;
      uVar14 = (ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  uVar14 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar14 != 0) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(&local_88,0);
  }
  plVar10 = (longlong *)(**(code **)(*plVar9 + 0x48))(plVar9);
  lVar6 = FUN_1414a12b0();
  (**(code **)(*plVar10 + 0x28))(plVar10,*(undefined8 *)(lVar6 + 0x18),&local_88,1);
  uVar14 = (ulonglong)(int)local_80;
  plVar9 = local_88 + uVar14 * 0xb;
  plVar10 = local_88;
  if (local_88 != plVar9) {
    do {
      if (*plVar10 != 0) {
        puVar7 = (undefined8 *)FName::ToString(plVar10,local_58);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar7;
        }
        uVar5 = UObject::GetPrivateStaticClass();
        lVar6 = FUN_141799410(uVar5,0,puVar12,0);
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (lVar6 == 0) {
          puVar7 = (undefined8 *)FName::ToString(plVar10,local_48);
          if (*(int *)(puVar7 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar7;
          }
          uVar5 = UObject::GetPrivateStaticClass();
          lVar6 = FUN_141799c90(uVar5,0,puVar12,0,0,0,1);
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if (lVar6 == 0) goto LAB_140af2f4c;
        }
        lVar11 = FUN_1414a12b0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (*(int *)(lVar6 + 0x2c0) != 0)) {
          FUN_140af00f0(param_1,lVar6 + 0x2b8);
        }
      }
LAB_140af2f4c:
      plVar10 = plVar10 + 0xb;
    } while (plVar10 != plVar9);
    uVar14 = local_80 & 0xffffffff;
  }
  if ((int)uVar14 != 0) {
    plVar10 = local_88 + 6;
    do {
      if (plVar10[1] != 0) {
        FMemory::Free();
      }
      plVar9 = (longlong *)*plVar10;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar9 + 1;
        lVar6 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
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
      plVar10 = plVar10 + 0xb;
      uVar13 = (int)uVar14 - 1;
      uVar14 = (ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}



// FUNCTION 140af2ff0 FUN_140af2ff0 body=256 status=ok
// SIG undefined FUN_140af2ff0(void)

void FUN_140af2ff0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_140a58d60();
  if (((char)param_1[0x25] == '\x03') && (lVar3 = FUN_140ad60e0(param_1), lVar3 != 0)) {
    lVar4 = FUN_1414d3b80();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*param_1 + 0x600))(param_1);
      FUN_140b0aa80(lVar3,param_1 + 0xd7);
      plVar5 = (longlong *)param_1[199];
      plVar1 = plVar5 + (int)param_1[200];
      for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
        lVar3 = *plVar5;
        if (lVar3 != 0) {
          lVar4 = FUN_1414d3b80();
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
            FUN_140af5780(lVar3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140af3100 FUN_140af3100 body=1057 status=ok
// SIG undefined FUN_140af3100(void)

void FUN_140af3100(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  longlong local_res8;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  FUN_140af39e0();
  FUN_140aff620(param_1);
  FUN_140afedb0(param_1,&local_res8);
  lVar1 = local_res8;
  if (local_res8 != 0) {
    lVar9 = FUN_142f71d80();
    lVar11 = lVar1;
    do {
      if (lVar11 == lVar9) {
        if (*(longlong *)(param_1 + 0x550) != 0) {
          if (*(longlong *)(param_1 + 0x588) != 0) {
            cVar7 = FUN_142f638e0(*(longlong *)(param_1 + 0x550) + 0xb8,param_1);
            if (cVar7 == '\0') {
              FUN_142f51a60(*(undefined8 *)(param_1 + 0x588),lVar1);
            }
            else {
              lVar11 = *(longlong *)(param_1 + 0x588);
              lVar9 = *(longlong *)(param_1 + 0x550);
              iVar8 = *(int *)(lVar11 + 0x308);
              *(int *)(lVar11 + 0x308) = iVar8 + 1;
              if (*(int *)(lVar11 + 0x30c) < iVar8 + 1) {
                TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(lVar11 + 0x300,iVar8);
              }
              lVar11 = *(longlong *)(lVar11 + 0x300) + (longlong)iVar8 * 0x48;
              TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar11,lVar9 + 0xb8);
              *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar9 + 0xe0);
              uVar2 = *(undefined4 *)(lVar9 + 0xec);
              uVar3 = *(undefined4 *)(lVar9 + 0xf0);
              uVar4 = *(undefined4 *)(lVar9 + 0xf4);
              *(undefined4 *)(lVar11 + 0x30) = *(undefined4 *)(lVar9 + 0xe8);
              *(undefined4 *)(lVar11 + 0x34) = uVar2;
              *(undefined4 *)(lVar11 + 0x38) = uVar3;
              *(undefined4 *)(lVar11 + 0x3c) = uVar4;
              *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)(lVar9 + 0xf8);
              *(undefined4 *)(lVar11 + 0x44) = *(undefined4 *)(lVar9 + 0xfc);
            }
          }
          lVar11 = *(longlong *)(param_1 + 0x590);
          if (lVar11 != 0) {
            plVar14 = (longlong *)(lVar11 + 0x188);
            iVar8 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                              (plVar14,&local_res8);
            if (iVar8 == -1) {
              iVar8 = *(int *)(lVar11 + 400);
              *(int *)(lVar11 + 400) = iVar8 + 1;
              if (*(int *)(lVar11 + 0x194) < iVar8 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar8);
              }
              *(longlong *)(*plVar14 + (longlong)iVar8 * 8) = lVar1;
            }
          }
        }
        break;
      }
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  if (*(longlong *)(param_1 + 0x580) != 0) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AWantedPoster::OnNearbyPlayerBeginOverlap",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    lVar11 = local_res10;
    lVar1 = *(longlong *)(param_1 + 0x580);
    plVar14 = (longlong *)(lVar1 + 0x570);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = lVar11;
    local_res8 = 0;
    if ((lVar11 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_38), lVar11 != 0)) {
      UObject::FindFunction(lVar11,local_30);
    }
    piVar12 = (int *)*plVar14;
    iVar8 = *(int *)(lVar1 + 0x578);
    for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar8 * 4; piVar13 = piVar13 + 4) {
      if ((((*piVar13 == local_38) && (piVar13[1] == local_34)) ||
          ((cVar7 = FWeakObjectPtr::IsValid(piVar13), cVar7 == '\0' &&
           (cVar7 = FWeakObjectPtr::IsValid(&local_38), cVar7 == '\0')))) &&
         (*(longlong *)(piVar13 + 2) == local_30)) {
        if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140af33b6;
        break;
      }
    }
    iVar8 = *(int *)(lVar1 + 0x578);
    *(int *)(lVar1 + 0x578) = iVar8 + 1;
    if (*(int *)(lVar1 + 0x57c) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar8);
    }
    piVar12 = (int *)((longlong)iVar8 * 0x10 + *plVar14);
    *piVar12 = local_38;
    piVar12[1] = local_34;
    *(longlong *)(piVar12 + 2) = local_30;
LAB_140af33b6:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AWantedPoster::OnNearbyPlayerEndOverlap",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    lVar1 = *(longlong *)(param_1 + 0x580);
    plVar14 = (longlong *)(lVar1 + 0x580);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_res8 = 0;
    local_30 = local_res10;
    if ((local_res10 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_38), lVar11 != 0)) {
      UObject::FindFunction(lVar11,local_30);
    }
    piVar12 = (int *)*plVar14;
    iVar8 = *(int *)(lVar1 + 0x588);
    for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar8 * 4; piVar13 = piVar13 + 4) {
      if ((((*piVar13 == local_38) && (piVar13[1] == local_34)) ||
          ((cVar7 = FWeakObjectPtr::IsValid(piVar13), cVar7 == '\0' &&
           (cVar7 = FWeakObjectPtr::IsValid(&local_38), cVar7 == '\0')))) &&
         (*(longlong *)(piVar13 + 2) == local_30)) {
        if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140af3501;
        break;
      }
    }
    iVar8 = *(int *)(lVar1 + 0x588);
    *(int *)(lVar1 + 0x588) = iVar8 + 1;
    if (*(int *)(lVar1 + 0x58c) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar8);
    }
    piVar12 = (int *)((longlong)iVar8 * 0x10 + *plVar14);
    *piVar12 = local_38;
    piVar12[1] = local_34;
    *(longlong *)(piVar12 + 2) = local_30;
LAB_140af3501:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
  }
  FUN_140af1d80(param_1);
  return;
}



// FUNCTION 140af3530 FUN_140af3530 body=209 status=ok
// SIG undefined FUN_140af3530(void)

void FUN_140af3530(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

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
LAB_140af35ae:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4,param_5);
        if (cVar3 == '\0') goto LAB_140af35ae;
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



// FUNCTION 140af3610 FUN_140af3610 body=262 status=ok
// SIG undefined FUN_140af3610(void)

void FUN_140af3610(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

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
LAB_140af36b0:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))
                          (plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
        if (cVar3 == '\0') goto LAB_140af36b0;
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



// FUNCTION 140af3720 FUN_140af3720 body=119 status=ok
// SIG undefined FUN_140af3720(void)

void FUN_140af3720(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x568) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x568) + 8) != 0)) {
    lVar2 = FUN_140ad5f70();
    if (lVar2 != 0) {
      uVar1 = FUN_140e50ca0(lVar2 + 0x2950,*(undefined8 *)(*(longlong *)(param_1 + 0x568) + 8));
      FUN_1407fcc20(param_1 + 0x4f0,uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x568) + 8));
      return;
    }
    return;
  }
  FUN_1407fcc20(param_1 + 0x4f0,0,0);
  return;
}



// FUNCTION 140af37a0 FUN_140af37a0 body=561 status=ok
// SIG undefined FUN_140af37a0(void)

void FUN_140af37a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int local_res8 [2];
  int local_res10 [2];
  
  TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x4f0,*(undefined1 *)(param_1 + 0x550));
  iVar6 = *(int *)(param_1 + 0x554);
  if ((iVar6 < 0) || (*(int *)(param_1 + 0x580) <= iVar6)) {
    lVar3 = param_1 + 0x5d8;
  }
  else {
    lVar3 = (longlong)iVar6 * 0x40 + *(longlong *)(param_1 + 0x578);
  }
  lVar5 = param_1 + 0x5d8;
  lVar4 = *(longlong *)(lVar3 + 0x30);
  iVar6 = 0;
  iVar7 = 0;
  lVar2 = lVar4 + (longlong)*(int *)(lVar3 + 0x38) * 0x48;
  for (; lVar4 != lVar2; lVar4 = lVar4 + 0x48) {
    FUN_140afb6b0(param_1,lVar4,local_res8,local_res10);
    iVar6 = iVar6 + local_res8[0];
    iVar7 = iVar7 + local_res10[0];
  }
  FUN_140af3530(param_1 + 0x508,lVar3,lVar3 + 0x18,iVar6,iVar7);
  iVar6 = *(int *)(param_1 + 0x554);
  lVar3 = lVar5;
  if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x580))) {
    lVar3 = (longlong)iVar6 * 0x40 + *(longlong *)(param_1 + 0x578);
  }
  iVar6 = *(int *)(param_1 + 0x55c);
  if ((iVar6 < 0) || (*(int *)(lVar3 + 0x38) <= iVar6)) {
    lVar3 = *(longlong *)(lVar3 + 0x30);
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 0x48;
  }
  FUN_140afb6b0(param_1,lVar3,local_res10,local_res8);
  FUN_140af3530(param_1 + 0x520,lVar3,lVar3 + 0x18,local_res10[0],local_res8[0]);
  iVar6 = *(int *)(param_1 + 0x554);
  if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x580))) {
    lVar5 = (longlong)iVar6 * 0x40 + *(longlong *)(param_1 + 0x578);
  }
  iVar6 = *(int *)(param_1 + 0x55c);
  if ((iVar6 < 0) || (*(int *)(lVar5 + 0x38) <= iVar6)) {
    lVar3 = *(longlong *)(lVar5 + 0x30);
  }
  else {
    lVar3 = *(longlong *)(lVar5 + 0x30) + (longlong)iVar6 * 0x48;
  }
  iVar6 = *(int *)(param_1 + 0x560);
  if ((iVar6 < 0) || (*(int *)(lVar3 + 0x40) <= iVar6)) {
    lVar3 = *(longlong *)(lVar3 + 0x38);
  }
  else {
    lVar3 = (longlong)iVar6 * 0x50 + *(longlong *)(lVar3 + 0x38);
  }
  FUN_140afea80(param_1,lVar3,local_res8,local_res10);
  plVar1 = *(longlong **)(lVar3 + 0x38);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar2 = plVar1[0x1f];
    }
  }
  FUN_140af3610(param_1 + 0x538,lVar3,lVar3 + 0x18,local_res8[0] == 0,local_res8[0],local_res10[0],
                lVar2);
  return;
}



// FUNCTION 140af39e0 FUN_140af39e0 body=1266 status=ok
// SIG undefined FUN_140af39e0(void)

void FUN_140af39e0(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  uVar6 = FUN_142f71e20();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  param_1[0xb1] = lVar7;
  uVar6 = UBlindWidget::GetPrivateStaticClass();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  iVar10 = 0;
  uStack_94 = 1;
  plVar2 = param_1 + 0x56;
  param_1[0xb2] = lVar7;
  uVar3 = *(uint *)(param_1 + 0x5b);
  puVar1 = (uint *)(param_1 + 0x58);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = (uint *)param_1[0x5a];
    if ((uint *)param_1[0x5a] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar4 = *puVar13;
    iStack_80 = iVar10;
    local_98 = iVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar5) goto LAB_140af3aed;
      uVar4 = puVar13[lVar7 + 1];
    }
    uStack_94 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar9 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (iStack_80 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_140af3aed:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x5b);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar12 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = (uint *)param_1[0x5a];
    if ((uint *)param_1[0x5a] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar11 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_140af3bc8;
      uVar11 = puVar13[(longlong)iVar9 + 1];
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
    uStack_84 = (uVar12 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_140af3bc8:
      uStack_84 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) break;
    lVar7 = *(longlong *)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
    if (lVar7 != 0) {
      lVar8 = FUN_142e5c1e0();
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
        if (*(longlong *)(lVar7 + 0x18) == param_1[0xab]) {
          param_1[0xaf] = lVar7;
        }
        else if (*(longlong *)(lVar7 + 0x18) == param_1[0xac]) {
          param_1[0xae] = lVar7;
        }
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  uVar3 = *(uint *)(param_1 + 0x5b);
  puVar1 = (uint *)(param_1 + 0x58);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = (uint *)param_1[0x5a];
    if ((uint *)param_1[0x5a] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar4 = *puVar13;
    iStack_80 = iVar10;
    local_98 = iVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar10 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar10;
      if (bVar5) goto LAB_140af3d2e;
      uVar4 = puVar13[lVar7 + 1];
    }
    uStack_94 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar10 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_84 = (iStack_80 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_140af3d2e:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x5b);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar12 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = (uint *)param_1[0x5a];
    if ((uint *)param_1[0x5a] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar10 = (int)uVar4 >> 5;
    while (uVar11 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_140af3e08;
      uVar11 = puVar13[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
    iVar10 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_84 = (uVar12 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_140af3e08:
      uStack_84 = uVar3;
    }
  }
  do {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      return;
    }
    lVar7 = *(longlong *)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
    if (lVar7 != 0) {
      lVar8 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (*(longlong *)(lVar7 + 0x18) == param_1[0xad])) {
        param_1[0xb0] = lVar7;
        return;
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  } while( true );
}



// FUNCTION 140af3ee0 FUN_140af3ee0 body=195 status=ok
// SIG undefined FUN_140af3ee0(void)

void FUN_140af3ee0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = param_1[0xab];
  lVar2 = param_1[0xac];
  fVar3 = *(float *)(lVar1 + 500) - *(float *)(lVar2 + 500);
  fVar5 = *(float *)(lVar1 + 0x1f0) - *(float *)(lVar2 + 0x1f0);
  fVar4 = *(float *)(lVar1 + 0x1ec) - *(float *)(lVar2 + 0x1ec);
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  *(float *)(param_1 + 0xc1) = fVar3;
  if ((fVar3 == 0.0) && (*(char *)((longlong)param_1 + 0x5a5) == '\0')) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x5a5) == '\0') {
    *(float *)((longlong)param_1 + 0x5ac) = fVar3 / *(float *)(param_1 + 0xb5);
    fVar4 = 1.0 / (fVar3 / *(float *)(param_1 + 0xb5));
  }
  else {
    fVar4 = 1.0 / *(float *)((longlong)param_1 + 0x5ac);
    *(float *)(param_1 + 0xb5) = fVar4 * fVar3;
  }
  *(float *)(param_1 + 0xc5) = fVar4;
                    /* WARNING: Could not recover jumptable at 0x000140af3f9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x600))();
  return;
}



// FUNCTION 140af3fb0 FUN_140af3fb0 body=182 status=ok
// SIG undefined FUN_140af3fb0(void)

void FUN_140af3fb0(longlong *param_1,char param_2)

{
  (**(code **)(*param_1 + 0x748))();
  if (param_2 == '\x01') {
    FUN_1413c1480(param_1);
  }
  else {
    if (param_2 == '\x02') {
      FUN_1413c1440(param_1);
      FUN_140b0a750(param_1);
      return;
    }
    if (param_2 == '\x03') {
      FUN_1413c1400(param_1);
      FUN_140b0a750(param_1);
      return;
    }
    if (param_2 == '\x04') {
      FUN_1413c13c0(param_1);
      FUN_140b0a750(param_1);
      return;
    }
    if (param_2 == '\x05') {
      FUN_1413c15c0(param_1);
      FUN_140b0a750(param_1);
      return;
    }
  }
  FUN_140b0a750(param_1);
  return;
}



// FUNCTION 140af4070 FUN_140af4070 body=50 status=ok
// SIG undefined FUN_140af4070(void)

ulonglong FUN_140af4070(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = BuildSettings::IsPromotedBuild();
  if (((char)uVar1 != '\0') && ((param_2 == 0 || (2 < *(byte *)(param_2 + 0xec0))))) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  return uVar1;
}



// FUNCTION 140af40b0 FUN_140af40b0 body=64 status=ok
// SIG undefined FUN_140af40b0(void)

void FUN_140af40b0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_142dfdf30();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (lVar2 != 0) {
    UCharacterConfigComponent::SetAdditiveLootTable(lVar2,param_2);
  }
  return;
}



// FUNCTION 140af40f0 FUN_140af40f0 body=48 status=ok
// SIG undefined FUN_140af40f0(void)

void FUN_140af40f0(longlong param_1,float param_2)

{
  if (((*(char *)(param_1 + 0x603) == '\0') && (0.0 < param_2)) &&
     (*(longlong *)(param_1 + 0x578) == 0)) {
    *(float *)(param_1 + 0x5a8) = param_2;
    *(undefined1 *)(param_1 + 0x5a5) = 0;
    FUN_140af3ee0();
    return;
  }
  return;
}



// FUNCTION 140af4120 FUN_140af4120 body=38 status=ok
// SIG undefined FUN_140af4120(void)

void FUN_140af4120(longlong param_1,float param_2)

{
  if ((*(char *)(param_1 + 0x603) == '\0') && (0.0 < param_2)) {
    *(float *)(param_1 + 0x5ac) = param_2;
    *(undefined1 *)(param_1 + 0x5a5) = 1;
    FUN_140af3ee0();
    return;
  }
  return;
}



// FUNCTION 140af4150 FUN_140af4150 body=119 status=ok
// SIG undefined FUN_140af4150(void)

void FUN_140af4150(longlong *param_1,char param_2)

{
  if (((char)param_1[0x25] == '\x03') && (*(char *)((longlong)param_1 + 0x4fd) != param_2)) {
    (**(code **)(*param_1 + 0x600))();
    *(char *)((longlong)param_1 + 0x4fd) = param_2;
    *(char *)((longlong)param_1 + 0x4fa) = param_2;
    (**(code **)(*param_1 + 0x758))(param_1);
    if (param_2 == '\x01') {
      FUN_1413c14c0(param_1);
    }
    else if (param_2 == '\x02') {
      FUN_1413c1500(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140af41d0 FUN_140af41d0 body=119 status=ok
// SIG undefined FUN_140af41d0(void)

void FUN_140af41d0(longlong *param_1,char param_2)

{
  if (((char)param_1[0x25] == '\x03') && (*(char *)((longlong)param_1 + 0x4fc) != param_2)) {
    (**(code **)(*param_1 + 0x600))();
    *(char *)((longlong)param_1 + 0x4fc) = param_2;
    *(char *)((longlong)param_1 + 0x4f9) = param_2;
    (**(code **)(*param_1 + 0x750))(param_1);
    if (param_2 == '\x01') {
      FUN_1413c1580(param_1);
    }
    else if (param_2 == '\x02') {
      FUN_1413c1540(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140af4250 FUN_140af4250 body=79 status=ok
// SIG undefined FUN_140af4250(void)

void FUN_140af4250(longlong *param_1,char param_2)

{
  if (((char)param_1[0x25] == '\x03') && (*(char *)((longlong)param_1 + 0x4fb) != param_2)) {
    (**(code **)(*param_1 + 0x600))();
    *(char *)((longlong)param_1 + 0x4fb) = param_2;
    *(char *)(param_1 + 0x9f) = param_2;
    FUN_140af3fb0(param_1,param_2);
  }
  return;
}



// FUNCTION 140af42a0 FUN_140af42a0 body=163 status=ok
// SIG undefined FUN_140af42a0(void)

void FUN_140af42a0(longlong *param_1,char param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((*(byte *)(param_1 + 0xf7) & 4) == 0) {
    return;
  }
  if (param_1[0xdc] == 0) {
    if (param_1[0xdd] == 0) {
      return;
    }
  }
  else {
    cVar1 = FUN_142c48f60(param_1[0xdc],param_1,0);
    if (cVar1 != '\0') {
      if ((*(char *)((longlong)param_1 + 0x4fb) == '\x02') || (param_2 != '\0')) {
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
      goto LAB_140af4329;
    }
  }
  if ((param_1[0xdd] == 0) || (cVar1 = FUN_142c48f60(param_1[0xdd],param_1,0), cVar1 == '\0')) {
    uVar2 = 5;
  }
  else {
    if ((byte)(*(char *)((longlong)param_1 + 0x4fb) - 1U) < 2) {
      return;
    }
    uVar2 = 4;
  }
LAB_140af4329:
  (**(code **)(*param_1 + 0x730))(param_1,uVar2);
  return;
}



// FUNCTION 140af4350 FUN_140af4350 body=152 status=ok
// SIG undefined FUN_140af4350(void)

void FUN_140af4350(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((*(byte *)((longlong)param_1 + 0x94) & 0x18) != 0x10) {
    *(undefined1 *)(param_1 + 0xb6) = 1;
    return;
  }
  plVar2 = (longlong *)param_1[0xb1];
  if ((plVar2 != (longlong *)0x0) || (plVar2 = (longlong *)param_1[0xb2], plVar2 != (longlong *)0x0)
     ) {
    cVar1 = (**(code **)(*plVar2 + 0x908))();
    uVar3 = 5;
    if (cVar1 != '\0') {
      uVar3 = 2;
    }
    (**(code **)(*param_1 + 0x730))(param_1,uVar3);
    if (((char)param_1[0x25] == '\x03') &&
       (plVar2 = (longlong *)param_1[0xae], plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x290))(plVar2,cVar1,0);
    }
  }
  return;
}



// FUNCTION 140af4400 FUN_140af4400 body=276 status=ok
// SIG undefined FUN_140af4400(void)

void FUN_140af4400(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  if (param_1[0xb9] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_140aea640(uVar1);
    if (lVar2 != 0) {
      lVar4 = param_1[0xb9];
      lVar2 = FUN_140bb7440(lVar2);
      iVar5 = 0;
      if (0 < *(int *)(lVar2 + 0xe0)) {
        lVar6 = 0;
        do {
          plVar7 = (longlong *)(*(longlong *)(lVar2 + 0xd8) + lVar6);
          if ((((int)plVar7[1] != 0) && (plVar3 = (longlong *)*plVar7, plVar3 != (longlong *)0x0))
             && (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8),
                *plVar3 == lVar4)) {
            if (((int)plVar7[1] != 0) && (plVar3 = (longlong *)*plVar7, plVar3 != (longlong *)0x0))
            {
              (**(code **)(*plVar3 + 0x28))(plVar3,0);
              if (*plVar7 != 0) {
                lVar4 = FMemory::Realloc(*plVar7,0,0);
                *plVar7 = lVar4;
              }
              *(undefined4 *)(plVar7 + 1) = 0;
            }
            break;
          }
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 0x10;
        } while (iVar5 < *(int *)(lVar2 + 0xe0));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0xd8,0);
      param_1[0xb9] = 0;
    }
  }
  return;
}



// FUNCTION 140af4520 FUN_140af4520 body=130 status=ok
// SIG undefined FUN_140af4520(void)

void FUN_140af4520(longlong param_1)

{
  if ((((*(char *)(param_1 + 0x67c) != '\0') &&
       (0.0 < *(float *)(param_1 + 0x678) || *(float *)(param_1 + 0x678) == 0.0)) &&
      (0 < *(int *)(param_1 + 0x670))) && ((*(byte *)(param_1 + 0x94) & 0x18) == 0x10)) {
    if (*(char *)(param_1 + 0x674) == '\0') {
      if (*(int *)(param_1 + 0x670) == 1) {
        FUN_140af7a10();
      }
      else {
        FUN_140af7c60(param_1);
      }
    }
    if (*(longlong *)(param_1 + 0x568) != 0) {
      FUN_14288e120(*(longlong *)(param_1 + 0x568),*(undefined4 *)(param_1 + 0x678),1);
    }
    *(undefined4 *)(param_1 + 0x678) = 0xbf800000;
  }
  return;
}



// FUNCTION 140af45b0 FUN_140af45b0 body=303 status=ok
// SIG undefined FUN_140af45b0(void)

void FUN_140af45b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  uint local_10;
  
  plVar5 = DAT_1469e9878;
  local_20 = DAT_1469e9870;
  local_28 = DAT_1469e9868;
  lVar6 = *(longlong *)(param_1 + 0x130);
  if (lVar6 != 0) {
    if (DAT_1469e9878 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9878 + 1) = (int)DAT_1469e9878[1] + 1;
      UNLOCK();
      lVar6 = *(longlong *)(param_1 + 0x130);
    }
    local_38 = 0x40aff290;
    uStack_34 = 1;
    uStack_30 = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_18 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_10 = local_10 & 0xfffffff0;
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
    FUN_140ae96a0(lVar6,&local_28,0,param_1,&local_38);
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



// FUNCTION 140af46e0 FUN_140af46e0 body=78 status=ok
// SIG undefined FUN_140af46e0(void)

void FUN_140af46e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b428;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_14428b470;
  }
  return;
}



// FUNCTION 140af4730 FUN_140af4730 body=119 status=ok
// SIG undefined FUN_140af4730(void)

void FUN_140af4730(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428af18;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    puVar1[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar1 = &PTR_GetPoolName_14428af60;
  }
  return;
}



// FUNCTION 140af47b0 FUN_140af47b0 body=135 status=ok
// SIG undefined FUN_140af47b0(void)

void FUN_140af47b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b038;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_1 + 0x38);
    puVar1[9] = *(undefined8 *)(param_1 + 0x48);
    *puVar1 = &PTR_GetPoolName_14428b080;
  }
  return;
}



// FUNCTION 140af4840 FUN_140af4840 body=76 status=ok
// SIG undefined FUN_140af4840(void)

void FUN_140af4840(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b938;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14428b980;
  }
  return;
}



// FUNCTION 140af4890 FUN_140af4890 body=105 status=ok
// SIG undefined FUN_140af4890(void)

void FUN_140af4890(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b158;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar1 = &PTR_GetPoolName_14428b1a0;
  }
  return;
}



// FUNCTION 140af4900 FUN_140af4900 body=119 status=ok
// SIG undefined FUN_140af4900(void)

void FUN_140af4900(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b4b8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    puVar1[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar1 = &PTR_GetPoolName_14428b500;
  }
  return;
}



// FUNCTION 140af4980 FUN_140af4980 body=119 status=ok
// SIG undefined FUN_140af4980(void)

void FUN_140af4980(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b668;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    puVar1[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar1 = &PTR_GetPoolName_14428b6b0;
  }
  return;
}



// FUNCTION 140af4a00 FUN_140af4a00 body=111 status=ok
// SIG undefined FUN_140af4a00(void)

void FUN_140af4a00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428afa8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_14428aff0;
  }
  return;
}



// FUNCTION 140af4a70 FUN_140af4a70 body=147 status=ok
// SIG undefined FUN_140af4a70(void)

void FUN_140af4a70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x90);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b818;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    FUN_140aecad0(puVar1 + 6,param_1 + 0x30);
    *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(param_1 + 0x78);
    puVar1[0x11] = *(undefined8 *)(param_1 + 0x88);
    *puVar1 = &PTR_GetPoolName_14428b860;
  }
  return;
}



// FUNCTION 140af4b10 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b308;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14428b350;
  }
  return;
}



// FUNCTION 140af4b60 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b1e8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14428b230;
  }
  return;
}



// FUNCTION 140af4bb0 FUN_140af4bb0 body=111 status=ok
// SIG undefined FUN_140af4bb0(void)

void FUN_140af4bb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b0c8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar1 = &PTR_GetPoolName_14428b110;
  }
  return;
}



// FUNCTION 140af4c20 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b278;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14428b2c0;
  }
  return;
}



// FUNCTION 140af4c70 FUN_140af4c70 body=147 status=ok
// SIG undefined FUN_140af4c70(void)

void FUN_140af4c70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x90);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b6f8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    FUN_140aecad0(puVar1 + 6,param_1 + 0x30);
    *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(param_1 + 0x78);
    puVar1[0x11] = *(undefined8 *)(param_1 + 0x88);
    *puVar1 = &PTR_GetPoolName_14428b740;
  }
  return;
}



// FUNCTION 140af4d10 FUN_140af4d10 body=97 status=ok
// SIG undefined FUN_140af4d10(void)

void FUN_140af4d10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b788;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_14428b7d0;
  }
  return;
}



// FUNCTION 140af4d80 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b5d8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14428b620;
  }
  return;
}



// FUNCTION 140af4dd0 FUN_140af4dd0 body=97 status=ok
// SIG undefined FUN_140af4dd0(void)

void FUN_140af4dd0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b548;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_14428b590;
  }
  return;
}



// FUNCTION 140af4e40 FUN_140af4e40 body=115 status=ok
// SIG undefined FUN_140af4e40(void)

void FUN_140af4e40(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b8a8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    FUN_140aecad0(puVar1 + 4,param_1 + 0x20);
    puVar1[0xe] = *(undefined8 *)(param_1 + 0x70);
    *puVar1 = &PTR_GetPoolName_14428b8f0;
  }
  return;
}



// FUNCTION 140af4ec0 FUN_140af4ec0 body=97 status=ok
// SIG undefined FUN_140af4ec0(void)

void FUN_140af4ec0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14428b398;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_14428b3e0;
  }
  return;
}



// FUNCTION 140af4f30 FUN_140af4f30 body=92 status=ok
// SIG undefined FUN_140af4f30(void)

void FUN_140af4f30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14428adf8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_14428ae40;
  }
  return;
}



// FUNCTION 140af4f90 FUN_140af4f90 body=84 status=ok
// SIG undefined FUN_140af4f90(void)

void FUN_140af4f90(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14428ae88;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_14428aed0;
  }
  return;
}



// FUNCTION 140af4ff0 FUN_140af4ff0 body=553 status=ok
// SIG undefined FUN_140af4ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af4ff0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_138;
  undefined8 local_130;
  longlong *local_128;
  longlong local_120;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar9 = 0;
  puVar1 = (ulonglong *)(param_1 + 0x178);
  puVar6 = (undefined8 *)*puVar1;
  uVar8 = (longlong)*(int *)(param_1 + 0x180) & 0x1fffffffffffffff;
  if (puVar6 + *(int *)(param_1 + 0x180) < puVar6) {
    uVar8 = uVar9;
  }
  local_120 = param_1;
  if (uVar8 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar6 + 0x3b0))((longlong *)*puVar6,0);
      uVar9 = uVar9 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar9 != uVar8);
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(int *)(param_1 + 0x184) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
  }
  if ((*(longlong *)(param_1 + 0x118) != 0) && (param_2 != 0)) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
    FUN_140aea1c0(*(longlong *)(param_1 + 0x118),local_118,0);
    plVar10 = local_118;
    if (local_58 != (longlong *)0x0) {
      plVar10 = local_58;
    }
    local_128 = plVar10 + (int)local_50;
    if (plVar10 != local_128) {
      local_130 = 0;
      local_138 = 0;
      lVar11 = param_1;
      do {
        uVar3 = *(undefined8 *)(lVar11 + 0x118);
        lVar11 = *plVar10;
        FUN_1417846f0(uVar3,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar4 = FUN_142a232e0();
        local_148 = 0;
        local_150 = 0;
        local_158 = 0;
        local_160 = 0;
        local_168 = 0;
        plVar5 = (longlong *)FUN_1417985e0(uVar4,uVar3,0,0);
        FUN_14234b150(plVar5);
        FUN_142382f60(plVar5,lVar11,&DAT_146532188);
        lVar11 = *(longlong *)(lVar11 + 0x728);
        if (lVar11 != 0) {
          (**(code **)(*plVar5 + 0x928))(plVar5,lVar11);
          iVar2 = *(int *)(lVar11 + 0x78);
          iVar7 = 0;
          if (0 < iVar2) {
            do {
              (**(code **)(*plVar5 + 0x568))(plVar5,iVar7,param_2);
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar2);
          }
          iVar2 = *(int *)(param_1 + 0x180);
          *(int *)(param_1 + 0x180) = iVar2 + 1;
          if (*(int *)(param_1 + 0x184) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar1,iVar2);
          }
          *(longlong **)(*puVar1 + (longlong)iVar2 * 8) = plVar5;
        }
        plVar10 = plVar10 + 1;
        lVar11 = local_120;
      } while (plVar10 != local_128);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140af5220 FUN_140af5220 body=710 status=ok
// SIG undefined FUN_140af5220(void)

void FUN_140af5220(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res8;
  undefined8 local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined8 local_178;
  undefined **local_168;
  longlong local_160;
  longlong *local_158;
  longlong local_148;
  longlong *local_130;
  longlong local_120;
  uint local_108;
  longlong local_100;
  undefined4 local_f0;
  undefined4 local_8c;
  longlong local_80;
  undefined1 local_50 [8];
  undefined8 local_48;
  
  if ((char)param_1[0xd6] == '\0') {
    *(undefined1 *)(param_1 + 0xd6) = 1;
    lVar6 = (**(code **)(*param_1 + 0x148))();
    if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x708) != 4)) &&
        (lVar6 = FUN_14304c8c0(lVar6), lVar6 != 0)) &&
       (fVar10 = (float)FUN_142c98860(param_1 + 0xb0), 0.0 < fVar10)) {
      FUN_140aec950(&local_168);
      if (param_1[0xaf] != 0) {
        lVar7 = FUN_141432f80();
        local_160 = param_1[0xaf];
        for (lVar2 = local_160; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar7) goto LAB_140af5300;
        }
      }
      local_160 = 0;
LAB_140af5300:
      local_108 = local_108 | 2;
      local_148 = param_1[0xae];
      local_100 = param_1[0x2a];
      local_158 = param_1;
      if ((char)param_1[0xbe] != '\0') {
        local_f0 = FUN_142c98860(param_1 + 0xb7);
      }
      local_8c = *(undefined4 *)((longlong)param_1 + 0xcc);
      local_198 = (**(code **)(*param_1 + 0x148))(param_1);
      local_190 = &local_198;
      local_188 = FUN_14073d6c0(&local_198,DAT_146868888);
      puVar5 = local_190;
      local_180 = &local_198;
      local_178 = 0;
      puVar8 = (undefined8 *)FUN_14073d6c0(local_190,local_188);
      puVar9 = (undefined8 *)FUN_14073d6c0(local_180,local_178);
      for (; puVar8 != puVar9; puVar8 = (undefined8 *)FUN_14073d6c0(puVar5,*puVar8)) {
        plVar3 = (longlong *)puVar8[2];
        if ((((char)plVar3[0xad] != '\0') && (plVar3 != param_1)) && (plVar3[0x2a] == param_1[0x2a])
           ) {
          iVar1 = *(int *)(param_1[2] + 0x90);
          if ((*(int *)(plVar3[2] + 0x90) < iVar1) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)iVar1 * 8) !=
              param_1[2] + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (fVar11 = (float)FUN_142230c20(param_1,plVar3), fVar11 <= fVar10)) {
            local_120 = plVar3[0xae];
            local_130 = plVar3;
            FUN_14303ae50(lVar6,&local_res8,&local_168);
          }
        }
      }
      local_168 = &PTR_FUN_14422f7d8;
      FWeakObjectPtr::operator=(local_50,0);
      local_res8 = 0;
      local_48 = 0;
      if (local_80 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140af54f0 FUN_140af54f0 body=51 status=ok
// SIG undefined FUN_140af54f0(void)

void FUN_140af54f0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_142d1f310(param_1[0xd4]);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140af5516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6d0))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140af5530 FUN_140af5530 body=108 status=ok
// SIG undefined FUN_140af5530(void)

void FUN_140af5530(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_142338f40();
  puVar1 = *(undefined8 **)(param_1 + 0x178);
  uVar3 = 0;
  uVar2 = (longlong)*(int *)(param_1 + 0x180) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x180) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_142398ec0(*puVar1,0,1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 140af55a0 FUN_140af55a0 body=72 status=ok
// SIG undefined FUN_140af55a0(void)

void FUN_140af55a0(longlong *param_1)

{
  longlong lVar1;
  
  if ((char)param_1[0xd6] != '\0') {
    (**(code **)(*param_1 + 0x148))();
    lVar1 = FUN_14304c8c0();
    if (lVar1 != 0) {
      FUN_1430599f0(lVar1,param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140af55f0 FUN_140af55f0 body=105 status=ok
// SIG undefined FUN_140af55f0(void)

void FUN_140af55f0(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x178);
  uVar2 = (longlong)*(int *)(param_1 + 0x180) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x180) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_142398ec0(*puVar1,0,1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 140af5670 FUN_140af5670 body=268 status=ok
// SIG undefined FUN_140af5670(void)

void FUN_140af5670(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  param_1[0xcd] = 0;
  lVar4 = param_1[0xcf];
  lVar6 = lVar4 + (longlong)(int)param_1[0xd0] * 0x18;
  for (; lVar4 != lVar6; lVar4 = lVar4 + 0x18) {
    if (*(longlong *)(lVar4 + 8) != 0) {
      param_1[0xcd] = *(longlong *)(lVar4 + 8);
      if (*(longlong *)(lVar4 + 0x10) != 0) {
        plVar5 = (longlong *)param_1[199];
        plVar1 = plVar5 + (int)param_1[200];
        goto joined_r0x000140af56f8;
      }
      break;
    }
  }
LAB_140af5764:
                    /* WARNING: Could not recover jumptable at 0x000140af5775. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x600))(param_1);
  return;
joined_r0x000140af56f8:
  if (plVar5 == plVar1) goto LAB_140af5764;
  lVar6 = *plVar5;
  if (lVar6 == 0) {
LAB_140af573e:
    lVar6 = 0;
  }
  else {
    lVar3 = UFadeInOutViewportClient::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140af573e;
  }
  FUN_140b0df70(lVar6,*(undefined8 *)(lVar4 + 0x10));
  plVar5 = plVar5 + 1;
  goto joined_r0x000140af56f8;
}



// FUNCTION 140af5780 FUN_140af5780 body=633 status=ok
// SIG undefined FUN_140af5780(void)

void FUN_140af5780(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 uVar14;
  
  iVar2 = *(int *)(param_1 + 0x554);
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x580) <= iVar2)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (bVar7) {
    lVar8 = (longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x578);
  }
  else {
    lVar8 = param_1 + 0x5d8;
  }
  plVar4 = *(longlong **)(lVar8 + 0x30);
  iVar2 = *(int *)(lVar8 + 0x38);
  if (plVar4 != plVar4 + (longlong)iVar2 * 9) {
    plVar13 = plVar4 + 7;
    do {
      plVar5 = (longlong *)*plVar13;
      uVar14 = 0;
      lVar8 = plVar13[1];
      if (plVar5 != plVar5 + (longlong)(int)lVar8 * 10) {
        plVar12 = plVar5 + 9;
        do {
          if (*plVar12 != 0) {
            lVar6 = *(longlong *)(param_1 + 0x4e0);
            if (lVar6 != 0) {
              lVar9 = UFocusButtonWidget::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (bVar7) {
                iVar3 = *(int *)(param_1 + 0x554);
                if ((iVar3 < 0) || (*(int *)(lVar6 + 0x6c0) <= iVar3)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (bVar7) {
                  plVar11 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar6 + 0x6b8));
                  plVar10 = (longlong *)*plVar11;
                  plVar11 = plVar10 + (longlong)(int)plVar11[1] * 2;
                  for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
                    if (*plVar10 == plVar12[-1]) {
                      bVar1 = *(byte *)(plVar10 + 1);
                      if (bVar1 != 0) {
                        lVar6 = *plVar12;
                        uVar14 = 1;
                        *(undefined1 *)(lVar6 + 0x7b0) = 1;
                        FUN_142398ec0(lVar6,1,CONCAT71((int7)((ulonglong)plVar11 >> 8),2));
                        FUN_140ae3890(*plVar12,plVar12[-3]);
                        if (bVar1 == 1) {
                          FUN_140ae3820(*plVar12,*(undefined8 *)(param_1 + 0x590));
                        }
                        else if (bVar1 == 2) {
                          FUN_140ae3820(*plVar12,*(undefined8 *)(param_1 + 0x598));
                        }
                        else if (bVar1 == 3) {
                          FUN_140ae3820(*plVar12,*(undefined8 *)(param_1 + 0x5a0));
                        }
                        else if (bVar1 == 4) {
                          FUN_140ae3820(*plVar12,*(undefined8 *)(param_1 + 0x5a8));
                        }
                        else if ((bVar1 == 5) || (5 < bVar1)) {
                          FUN_140ae3820(*plVar12,*(undefined8 *)(param_1 + 0x5b0));
                        }
                        else {
                          FUN_140ae3820(*plVar12,0);
                        }
                        goto LAB_140af58d6;
                      }
                      break;
                    }
                  }
                }
              }
            }
            lVar6 = *plVar12;
            *(undefined1 *)(lVar6 + 0x7b0) = 0;
            FUN_142398ec0(lVar6,0,2);
            FUN_140ae3890(*plVar12);
          }
LAB_140af58d6:
          plVar10 = plVar12 + 1;
          plVar12 = plVar12 + 10;
        } while (plVar10 != plVar5 + (longlong)(int)lVar8 * 10);
      }
      lVar8 = plVar13[-1];
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + 0x7b0) = uVar14;
        FUN_142398ec0(lVar8,uVar14,2);
      }
      plVar5 = plVar13 + 2;
      plVar13 = plVar13 + 9;
    } while (plVar5 != plVar4 + (longlong)iVar2 * 9);
  }
  return;
}



// FUNCTION 140af5a00 FUN_140af5a00 body=685 status=ok
// SIG undefined FUN_140af5a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af5a00(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  uint local_d0;
  undefined8 local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
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
  if ((char)param_1[0xf2] == '\0') {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    uVar3 = 0;
    if (lVar1 != 0) {
      uStack_c0 = 0;
      local_c8 = FUN_140aff4c0;
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      plVar2 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        *(undefined4 *)(plVar2 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar2 + 0x14) = local_c8._4_4_;
        *(uint *)(plVar2 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_bc;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[5] = lVar1;
        *plVar2 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_b8 = 0;
      local_b0 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_b8);
      }
      FWeakObjectPtr::operator=(local_a8,0);
      local_e0 = 0xbf800000;
      local_e8 = 1;
      local_a0 = 0;
      local_68 = (longlong *)0x0;
      local_58 = 0;
      local_98 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,param_1 + 0xf3,&local_b8,0x40400000);
      if (local_58 != 0) {
        plVar5 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar5 = local_68;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar1 = FMemory::Realloc(plVar2,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
    }
    plVar2 = (longlong *)param_1[0xe7];
    *(undefined1 *)(param_1 + 0xf2) = 1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x5b8))(plVar2,1);
      local_d8 = 0;
      (**(code **)(*(longlong *)param_1[0xe7] + 0xa50))((longlong *)param_1[0xe7],1,0);
      local_d8 = 0;
      FUN_142db9430(param_1[0xe7],1,0);
      puVar4 = (undefined8 *)param_1[0xb8];
      uVar7 = (longlong)(int)param_1[0xb9] & 0x1fffffffffffffff;
      if (puVar4 + (int)param_1[0xb9] < puVar4) {
        uVar7 = uVar3;
      }
      if (uVar7 != 0) {
        do {
          uVar8 = param_2 ^ 0x80000000;
          local_d8 = CONCAT44(param_2,param_2) ^ 0x8000000080000000;
          local_d0 = uVar8;
          uStack_c0 = uVar8;
          (**(code **)(*(longlong *)param_1[0xe7] + 0x5d8))
                    ((longlong *)param_1[0xe7],&local_d8,*puVar4,0);
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 1;
          param_2 = uVar8;
        } while (uVar3 != uVar7);
      }
    }
  }
  return;
}



// FUNCTION 140af5cb0 FUN_140af5cb0 body=1582 status=ok
// SIG undefined FUN_140af5cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140af5cb0(longlong param_1,longlong *param_2,longlong param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined1 local_280;
  int local_278;
  int local_274;
  undefined8 local_270;
  float local_268;
  longlong *local_260;
  int local_258;
  int local_254;
  longlong *local_250;
  longlong local_248;
  undefined4 local_240;
  float local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 local_220;
  int *local_218;
  float local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e4;
  undefined1 local_1e0 [24];
  float local_1c8;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  undefined1 local_180 [24];
  undefined1 local_168 [20];
  undefined1 local_154 [124];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  ulonglong local_a8;
  
  if (param_2 != (longlong *)0x0) {
    local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
    local_248 = param_1;
    local_218 = param_4;
    lVar5 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar5 != 0) {
      iVar11 = *(int *)(param_1 + 0x30);
      if (iVar11 < 1) {
        fVar16 = 0.0;
      }
      else {
        iVar3 = *param_4 + -1;
        if ((iVar3 < 0) || (iVar11 <= iVar3)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          iVar3 = iVar11 + -1;
        }
        fVar16 = (float)FUN_142c98860((longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 0x28),0);
      }
      iVar11 = (int)fVar16;
      if (0 < iVar11) {
        local_274 = iVar11;
        (**(code **)(*param_2 + 0x308))(param_2,local_1e0);
        iVar4 = rand();
        local_234 = 0x3f800000;
        iVar3 = 0;
        plVar14 = (longlong *)0x0;
        local_260 = (longlong *)0x0;
        local_278 = 0;
        local_254 = 0;
        local_230 = 0;
        fVar16 = (float)iVar4 * 3.051851e-05 * (360.0 / (float)iVar11);
        local_250 = param_2;
        do {
          fVar17 = *(float *)(param_1 + 0x50);
          fVar18 = *(float *)(param_1 + 0x4c);
          iVar4 = rand();
          local_240 = 0;
          local_238 = 0;
          local_23c = (float)iVar4 * 3.051851e-05 * (fVar17 - fVar18) + fVar18;
          FRotator::Vector(&local_240,&local_270);
          puVar6 = (undefined8 *)FVector::RotateAngleAxis(&local_270,local_198,fVar16,&local_234);
          local_270 = *puVar6;
          local_268 = *(float *)(puVar6 + 1);
          fVar20 = (float)*puVar6;
          fVar21 = (float)((ulonglong)*puVar6 >> 0x20);
          local_200 = *(float *)(puVar6 + 1);
          uVar7 = FVector::Rotation(local_1e0,local_18c);
          FRotator::Quaternion(uVar7,&local_1b8);
          fVar17 = local_200 * fStack_1b4 - fVar21 * fStack_1b0;
          fVar18 = fVar20 * fStack_1b0 - local_200 * local_1b8;
          fVar19 = fVar21 * local_1b8 - fVar20 * fStack_1b4;
          fVar17 = fVar17 + fVar17;
          fVar18 = fVar18 + fVar18;
          fVar19 = fVar19 + fVar19;
          local_268 = (fVar18 * local_1b8 - fVar17 * fStack_1b4) + fVar19 * fStack_1ac + local_200;
          lVar5 = param_2[0x2d];
          local_270 = CONCAT44((fVar17 * fStack_1b0 - fVar19 * local_1b8) +
                               fVar18 * fStack_1ac + fVar21,
                               (fVar19 * fStack_1b4 - fVar18 * fStack_1b0) +
                               fVar17 * fStack_1ac + fVar20);
          if (lVar5 == 0) {
            local_1f0 = DAT_1468b5d98;
            puVar6 = &local_1f8;
            local_1f8 = _DAT_1468b5d90;
          }
          else {
            puVar6 = (undefined8 *)&local_228;
            local_228 = *(undefined4 *)(lVar5 + 0x220);
            local_220 = *(undefined4 *)(lVar5 + 0x228);
            uStack_224 = *(undefined4 *)(lVar5 + 0x224);
          }
          uVar7 = *puVar6;
          local_1e4 = *(undefined4 *)(puVar6 + 1);
          local_1c8 = local_268;
          uVar8 = FVector::Rotation(&local_270,local_180);
          FRotator::Quaternion(uVar8,&local_1a8);
          lVar5 = param_2[0x23];
          lVar10 = param_2[2];
          local_d8 = local_1a8;
          uStack_d0 = uStack_1a0;
          local_c8._8_4_ = local_1e4;
          local_c8._0_8_ = uVar7;
          local_c8._12_4_ = 0;
          local_b8._4_4_ = DAT_1464aa788._4_4_;
          local_b8._0_4_ = (undefined4)DAT_1464aa788;
          local_b8._8_4_ = DAT_1464aa790;
          local_b8._12_4_ = 0;
          uVar7 = FUN_140a63ba0(param_2);
          uVar8 = (**(code **)(*param_2 + 0x148))(param_2);
          local_280 = 0;
          local_288 = uVar7;
          plVar9 = (longlong *)FUN_140aea740(uVar8,lVar10,&local_d8,lVar5);
          if (plVar9 != (longlong *)0x0) {
            FUN_140b30220(plVar9,local_250,local_248);
            FUN_140b30a70(plVar9,param_3);
            FUN_14307e770(plVar9,param_2);
            uVar13 = 0;
            uVar15 = (ulonglong)((longlong)(plVar14 + iVar3) + (7 - (longlong)plVar14)) >> 3;
            if (plVar14 + iVar3 < plVar14) {
              uVar15 = uVar13;
            }
            plVar12 = plVar14;
            if (uVar15 != 0) {
              do {
                if (*plVar12 != 0) {
                  FUN_14307e770(plVar9);
                }
                plVar12 = plVar12 + 1;
                uVar13 = uVar13 + 1;
              } while (uVar13 != uVar15);
            }
            cVar2 = FUN_140b2f2f0(param_2);
            if (cVar2 == '\0') {
LAB_140af610c:
              if ((param_3 != 0) && (lVar5 = FUN_140b2a6c0(param_3), lVar5 != 0)) {
                lVar5 = FUN_140b2a6c0(param_3);
                lVar5 = *(longlong *)(lVar5 + 0x10);
                lVar10 = FUN_1413b1b90();
                if (lVar5 == lVar10) {
                  lVar5 = FUN_140b2a6c0(param_3);
                  if (lVar5 == 0) {
LAB_140af6182:
                    lVar5 = 0;
                  }
                  else {
                    lVar10 = FUN_1413b1b90();
                    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (!bVar1) goto LAB_140af6182;
                  }
                  if (lVar5 != 0) {
                    FUN_140afe1f0(lVar5,local_168,param_2,0);
                    FUN_140b401e0(plVar9,local_154);
                  }
                }
              }
            }
            else if (param_3 != 0) {
              lVar5 = FUN_140b2a6c0(param_3);
              if (lVar5 != 0) {
                lVar5 = FUN_140b2a6c0(param_3);
                lVar5 = *(longlong *)(lVar5 + 0x10);
                lVar10 = FUN_1413b1b90();
                if (lVar5 == lVar10) {
                  AMaiCharacter::AbortAttack_Implementation(plVar9);
                }
              }
              goto LAB_140af610c;
            }
            lVar5 = FUN_140b2a700(param_2);
            if ((lVar5 != 0) && (lVar10 = FUN_140b2a700(plVar9), lVar10 != 0)) {
              *(float *)(lVar10 + 0x1c0) =
                   SQRT(*(float *)(lVar5 + 0x18c) * *(float *)(lVar5 + 0x18c) +
                        *(float *)(lVar5 + 400) * *(float *)(lVar5 + 400) +
                        *(float *)(lVar5 + 0x194) * *(float *)(lVar5 + 0x194));
            }
            UGameplayStatics::FinishSpawningActor(plVar9,&local_d8);
            iVar3 = local_278;
            lVar5 = (longlong)local_278;
            local_278 = local_278 + 1;
            local_258 = local_278;
            local_250 = plVar9;
            if (local_254 < local_278) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_260,iVar3);
              plVar14 = local_260;
            }
            plVar14[lVar5] = (longlong)plVar9;
            iVar3 = local_258;
            local_278 = local_258;
          }
          fVar16 = fVar16 + 360.0 / (float)iVar11;
          local_274 = local_274 + -1;
          param_1 = local_248;
        } while (0 < local_274);
        local_218[10] = local_218[10] + 1;
        if (plVar14 != (longlong *)0x0) {
          FMemory::Free(plVar14);
        }
      }
    }
  }
  return;
}



// FUNCTION 140af62e0 FUN_140af62e0 body=1105 status=ok
// SIG undefined FUN_140af62e0(void)

void FUN_140af62e0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  wchar_t _C;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  bool bVar16;
  longlong *plVar17;
  float fVar18;
  ulonglong local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined2 *local_78;
  int local_70;
  longlong *local_68;
  int local_60;
  
  if (param_2 != 0) {
    bVar16 = false;
    local_res10 = local_res10 & 0xffffffff00000000;
    lVar8 = FUN_140b2a6f0(param_2);
    if (lVar8 != 0) {
      fVar18 = (float)USphereReflectionCaptureComponent::GetInfluenceBoundingRadius(param_2);
      if (((fVar18 <= 0.0) || (cVar4 = FUN_140b28450(param_2), cVar4 == '\0')) ||
         (cVar4 = SVirtualWindow::SupportsKeyboardFocus(param_2), cVar4 != '\0')) {
        fVar18 = (float)UPaperFlipbookComponent::GetPlayRate(param_2);
        if ((fVar18 == *(float *)(param_1 + 0x60)) &&
           (cVar4 = FUN_140b29400(param_2), cVar4 != '\0')) {
          *(undefined4 *)(param_2 + 0x488) = *(undefined4 *)(param_1 + 100);
          FUN_140b3ffb0(param_2,1);
          *(undefined4 *)(param_2 + 0x470) = 0;
        }
      }
      else {
        FUN_140b3ffb0(param_2,0);
        FUN_140b3d9f0(param_2);
        UPaperFlipbookComponent::SetPlayRate(param_2,*(undefined4 *)(param_1 + 0x60));
        FUN_140b26e10(param_2);
        SVirtualWindow::SetIsFocusable(param_2,1);
        plVar9 = (longlong *)FUN_140b2a700(param_2);
        if (plVar9 != (longlong *)0x0) {
          if ((*(longlong *)(param_2 + 0x168) != 0) &&
             (*(longlong *)(*(longlong *)(param_2 + 0x168) + 400) != 0)) {
            FUN_1422279d0(param_2,&DAT_146532190);
            uVar10 = FUN_140b2a880(param_2,param_1);
            FUN_140b0efd0(param_1,param_2,uVar10);
            (**(code **)(*plVar9 + 0x280))(plVar9,1);
            lVar8 = FUN_140b2a6f0(param_2);
            if (lVar8 != 0) {
              local_res20 = 0;
              uVar10 = UUGJournalKey::GetPrivateStaticClass();
              uVar11 = FUN_140b2a6f0(param_2);
              lVar8 = FUN_140b2c110(uVar11,uVar10,&local_res20);
              if (lVar8 != 0) {
                lVar12 = UUGJournalKey::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  FUN_140b3cb70(param_2,*(undefined8 *)(lVar8 + 0x50));
                  uVar10 = FUN_142a175e0();
                  AActor::GetComponentsByClass(param_2,&local_68,uVar10);
                  plVar15 = local_68 + local_60;
                  plVar17 = local_68;
                  local_res18 = plVar15;
                  if (local_68 != plVar15) {
LAB_140af64d3:
                    plVar2 = (longlong *)*plVar17;
                    if (plVar2 != (longlong *)0x0) {
                      local_res10 = plVar2[3];
                      bVar16 = true;
                      FName::ToString(&local_res10,&local_78);
                      pwVar13 = L"GrenadeTriggerSphere";
                      puVar14 = &DAT_143f3eda8;
                      if (local_70 != 0) {
                        puVar14 = local_78;
                      }
                      do {
                        _C = *(wchar_t *)((longlong)(puVar14 + -0xa2136960) + (longlong)pwVar13);
                        if ((_C == L'\0') && (*pwVar13 == L'\0')) goto LAB_140af655a;
                        if (_C != *pwVar13) {
                          wVar5 = towlower(_C);
                          wVar6 = towlower(*pwVar13);
                          if (wVar5 != wVar6) goto LAB_140af6550;
                        }
                        pwVar13 = pwVar13 + 1;
                      } while( true );
                    }
                    goto LAB_140af656e;
                  }
LAB_140af65bd:
                  if (local_68 != (longlong *)0x0) {
                    FMemory::Free(local_68);
                  }
                }
              }
            }
          }
          uVar1 = *(undefined4 *)(param_1 + 0x68);
          *(undefined8 *)((longlong)plVar9 + 0x18c) = 0;
          *(undefined4 *)((longlong)plVar9 + 0x194) = uVar1;
          (**(code **)(*plVar9 + 0x450))(plVar9,*(undefined8 *)(param_2 + 0x168));
          *(uint *)(plVar9 + 0x39) = *(uint *)(plVar9 + 0x39) | 2;
          *(undefined4 *)((longlong)plVar9 + 0x1e4) = *(undefined4 *)(param_1 + 0x6c);
          *(undefined4 *)(plVar9 + 0x3d) = *(undefined4 *)(param_1 + 0x70);
          *(undefined4 *)(plVar9 + 0x4d) = 0;
          *(undefined4 *)((longlong)plVar9 + 0x1dc) = 0x3f800000;
          iVar7 = FUN_140b28020(plVar9);
          if (0.0 < (float)iVar7) {
            iVar7 = FUN_140b2bf20(plVar9);
            FUN_140b40280(plVar9,iVar7 + 3);
          }
        }
        plVar9 = *(longlong **)(param_2 + 0x168);
        if (plVar9 != (longlong *)0x0) {
          lVar8 = FUN_1429f11d0();
          if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          if (bVar16) {
            (**(code **)(*plVar9 + 0x638))(plVar9,3);
            (**(code **)(*plVar9 + 0x838))(plVar9,2);
            (**(code **)(*plVar9 + 0x830))(plVar9,2,1);
          }
        }
      }
    }
  }
  return;
LAB_140af6550:
  plVar15 = local_res18;
  if (wVar5 == wVar6) {
LAB_140af655a:
    bVar3 = true;
    plVar15 = local_res18;
  }
  else {
LAB_140af656e:
    bVar3 = false;
  }
  if ((bVar16) && (bVar16 = false, local_78 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if (bVar3) {
    (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
  }
  plVar17 = plVar17 + 1;
  if (plVar17 == plVar15) goto LAB_140af65bd;
  goto LAB_140af64d3;
}



// FUNCTION 140af6740 FUN_140af6740 body=882 status=ok
// SIG undefined FUN_140af6740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af6740(longlong param_1,longlong *param_2,longlong param_3,undefined1 param_4,
                  float param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  longlong *local_108;
  int local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  if ((param_2 != (longlong *)0x0) &&
     (local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138, param_3 != 0)) {
    local_108 = (longlong *)0x0;
    local_100 = 0;
    FWeakObjectPtr::operator=(&local_e0);
    FWeakObjectPtr::operator=(&local_d8,param_3);
    FWeakObjectPtr::operator=(&local_d0,param_1);
    local_f8 = local_d8;
    local_f4 = local_d4;
    local_f0 = local_d0;
    local_e8 = CONCAT44(local_e8._4_4_,local_cc);
    plVar1 = (longlong *)FMemory::Realloc(0,0x50);
    if (plVar1 == (longlong *)0x0) {
      if (((local_100 != 0) && (local_108 != (longlong *)0x0)) &&
         ((**(code **)(*local_108 + 0x28))(local_108,0), local_108 != (longlong *)0x0)) {
        local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
      }
    }
    else {
      *plVar1 = (longlong)&PTR_GetPoolName_14428b038;
      *(undefined4 *)(plVar1 + 1) = local_e0;
      *(undefined4 *)((longlong)plVar1 + 0xc) = local_dc;
      *(undefined4 *)(plVar1 + 2) = local_f8;
      *(undefined4 *)((longlong)plVar1 + 0x14) = local_f4;
      *(undefined4 *)(plVar1 + 3) = local_f0;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = (undefined4)local_e8;
      plVar1[4] = param_1;
      plVar1[5] = (longlong)param_2;
      plVar1[6] = param_3;
      *(undefined1 *)(plVar1 + 7) = param_4;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[9] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_14428b080;
      FUN_140af47b0(plVar1,&local_108);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      lVar2 = FMemory::Realloc(plVar1,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    if (param_5 <= 0.0001) {
      lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      local_c8 = 0;
      local_c0 = 0;
      if ((local_100 != 0) && (local_108 != (longlong *)0x0)) {
        (**(code **)(*local_108 + 0x30))(local_108,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_b0 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      FUN_142880af0(uVar3,&local_c8);
    }
    else {
      local_e8 = 0;
      lVar2 = (**(code **)(*param_2 + 0x148))();
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      local_c8 = 0;
      local_c0 = 0;
      if ((local_100 != 0) && (local_108 != (longlong *)0x0)) {
        (**(code **)(*local_108 + 0x30))(local_108,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_110 = 0xbf800000;
      local_118 = 0;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,&local_e8,&local_c8,param_5);
    }
    if (local_68 != 0) {
      plVar1 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar1 = local_78;
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (local_100 != 0) {
      if (local_108 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_108 + 0x28))(local_108,0);
      if (local_108 != (longlong *)0x0) {
        local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
      }
      local_100 = 0;
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
  }
  return;
}



// FUNCTION 140af6ac0 FUN_140af6ac0 body=1637 status=ok
// SIG undefined FUN_140af6ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af6ac0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,int param_5
                  ,longlong *param_6)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_3b8 [32];
  undefined4 *local_398;
  undefined8 local_390;
  undefined8 local_388;
  longlong *local_378;
  int local_370;
  undefined8 local_368;
  float local_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined1 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  longlong *local_328 [2];
  float local_318;
  undefined1 local_314 [44];
  longlong *local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  code *local_2c8;
  undefined1 local_2c0 [8];
  longlong local_2b8 [4];
  longlong *local_298;
  int local_288;
  undefined4 uStack_284;
  int local_278;
  undefined1 local_268 [28];
  undefined1 local_24c [236];
  float local_160;
  undefined1 local_15c;
  float local_108;
  undefined1 local_104;
  ulonglong local_68;
  
  if (param_2 != (longlong *)0x0) {
    local_68 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
    if (param_6 != (longlong *)0x0) {
      (**(code **)(*param_6 + 0x280))(param_6,0);
    }
    lVar3 = FUN_140b2a700(param_2);
    if ((lVar3 != 0) &&
       (*(float *)(lVar3 + 0x18c) * *(float *)(lVar3 + 0x18c) +
        *(float *)(lVar3 + 400) * *(float *)(lVar3 + 400) +
        *(float *)(lVar3 + 0x194) * *(float *)(lVar3 + 0x194) < 1.0)) {
      *(undefined8 *)(lVar3 + 0x2cc) = 0x4234000000000000;
      local_360 = 0.0;
      *(undefined4 *)(lVar3 + 0x2d4) = 0;
    }
    if (*(longlong *)(param_4 + 0x20) != 0) {
      lVar4 = UCelLightData::GetPrivateStaticClass();
      for (lVar3 = *(longlong *)(param_4 + 0x20); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar4) {
          if (*(longlong *)(param_4 + 0x20) != 0) {
            FUN_142d0a300(local_268);
            pfVar1 = (float *)(param_4 + 0x2c);
            local_160 = *(float *)(param_2 + 0x8e) * *(float *)(param_4 + 0x28);
            local_15c = 1;
            if (pfVar1 != &local_108) {
              local_108 = *pfVar1;
              local_104 = 1;
            }
            lVar3 = FUN_140b27c50(param_2,local_314);
            if ((*(int *)(lVar3 + 8) < 1) &&
               (lVar3 = FUN_140b27c50(param_2,local_314), *(int *)(lVar3 + 4) < 1)) {
              lVar3 = FUN_140b27c50(param_2,local_314);
              if (1 < *(int *)(lVar3 + 0xc)) {
                pfVar5 = (float *)(param_4 + 0x34);
                goto LAB_140af6c6e;
              }
            }
            else {
              pfVar5 = (float *)(param_4 + 0x30);
LAB_140af6c6e:
              if (pfVar5 != &local_108) {
                local_108 = *pfVar5;
                local_104 = 1;
              }
            }
            if ((param_6 != (longlong *)0x0) && (0.0001 < *pfVar1)) {
              local_360 = local_108 / *pfVar1;
              local_368 = CONCAT44(local_360,local_360);
              local_318 = local_360;
              (**(code **)(*param_6 + 0x3f8))(param_6,&local_368);
            }
            plVar6 = (longlong *)UTBScriptedAnimInstance::GetCurrentAnimName(param_2,&local_368);
            plVar6 = (longlong *)*plVar6;
            if (plVar6 == (longlong *)0x0) {
              lVar3 = 0;
            }
            else {
              lVar3 = plVar6[0x1f];
              if (lVar3 == 0) {
                (**(code **)(*plVar6 + 0x368))(plVar6);
                lVar3 = plVar6[0x1f];
              }
            }
            FWeakObjectPtr::operator=(local_24c,lVar3);
            local_340 = *(undefined4 *)(param_4 + 0x28);
            local_398 = &local_348;
            local_348 = 0xbf800000;
            local_344 = 0xbf800000;
            local_338 = 0x3f800000;
            local_334 = 0x3f800000;
            local_330 = 0x3f800000;
            local_33c = 1;
            local_390 = 0;
            local_388 = 0;
            FUN_140a86fb0(param_2,*(undefined8 *)(param_4 + 0x20),0,local_268);
            FUN_1409c53c0(local_268);
          }
          break;
        }
      }
    }
    local_378 = (longlong *)0x0;
    local_370 = 0;
    FWeakObjectPtr::operator=(&local_350,param_2);
    FWeakObjectPtr::operator=(&local_358,param_1);
    if (param_5 + -1 < 1) {
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 == (longlong *)0x0) {
        if (((local_370 != 0) && (local_378 != (longlong *)0x0)) &&
           ((**(code **)(*local_378 + 0x28))(local_378,0), local_378 != (longlong *)0x0)) {
          local_378 = (longlong *)FMemory::Realloc(local_378,0,0);
        }
      }
      else {
        *plVar6 = (longlong)&PTR_GetPoolName_14428b788;
        *(undefined4 *)(plVar6 + 1) = local_358;
        *(undefined4 *)((longlong)plVar6 + 0xc) = local_354;
        *(undefined4 *)(plVar6 + 2) = local_350;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_34c;
        plVar6[3] = (longlong)param_1;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar3;
        *plVar6 = (longlong)&PTR_GetPoolName_14428b7d0;
        FUN_140af4d10(plVar6,&local_378);
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar3 = FMemory::Realloc(plVar6,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
    }
    else {
      FWeakObjectPtr::operator=(&local_368,param_6);
      local_2e0 = local_358;
      local_2dc = local_354;
      local_2d8 = local_350;
      local_2d4 = local_34c;
      local_2d0 = local_368;
      local_2e8 = param_1;
      local_2c8 = (code *)param_3;
      FUN_140aecad0(local_2c0,param_4);
      local_278 = param_5 + -1;
      plVar6 = (longlong *)FMemory::Realloc(0,0x90,0);
      if (plVar6 == (longlong *)0x0) {
        if (((local_370 != 0) && (local_378 != (longlong *)0x0)) &&
           ((**(code **)(*local_378 + 0x28))(local_378,0), local_378 != (longlong *)0x0)) {
          local_378 = (longlong *)FMemory::Realloc(local_378,0,0);
        }
      }
      else {
        *plVar6 = (longlong)&PTR_GetPoolName_14428b6f8;
        plVar6[1] = (longlong)local_2e8;
        *(int *)(plVar6 + 2) = local_2e0;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_2dc;
        *(undefined4 *)(plVar6 + 3) = local_2d8;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = local_2d4;
        *(undefined4 *)(plVar6 + 4) = (undefined4)local_2d0;
        *(undefined4 *)((longlong)plVar6 + 0x24) = local_2d0._4_4_;
        plVar6[5] = (longlong)local_2c8;
        FUN_140aecad0(plVar6 + 6,local_2c0);
        *(int *)(plVar6 + 0xf) = local_278;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar6[0x11] = lVar3;
        *plVar6 = (longlong)&PTR_GetPoolName_14428b740;
        FUN_140af4c70(plVar6,&local_378);
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar3 = FMemory::Realloc(plVar6,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
      if (CONCAT44(uStack_284,local_288) != 0) {
        FMemory::Free();
      }
    }
    plVar6 = (longlong *)0x0;
    local_328[0] = plVar6;
    lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar7 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    lVar3 = param_1[0x13];
    iVar8 = 0;
    local_2e8 = plVar6;
    local_2e0 = iVar8;
    if ((local_370 != 0) && (local_378 != (longlong *)0x0)) {
      (**(code **)(*local_378 + 0x30))(local_378,&local_2e8);
    }
    FWeakObjectPtr::operator=(&local_2d8,0);
    local_390 = CONCAT44(local_390._4_4_,0xbf800000);
    local_2c8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_2d0 = 0;
    local_398 = (undefined4 *)((ulonglong)local_398 & 0xffffffffffffff00);
    local_298 = plVar6;
    local_288 = iVar8;
    FUN_142880850(uVar7,local_328,&local_2e8,(int)lVar3);
    if (local_288 != 0) {
      plVar6 = local_2b8;
      if (local_298 != (longlong *)0x0) {
        plVar6 = local_298;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_298 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2e8);
    iVar2 = local_370;
    if (local_370 != 0) {
      if (local_378 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_378 + 0x28))(local_378,0);
      iVar2 = iVar8;
      if (local_378 != (longlong *)0x0) {
        local_378 = (longlong *)FMemory::Realloc(local_378,0,0);
      }
    }
    local_370 = iVar2;
    if (local_378 != (longlong *)0x0) {
      FMemory::Free(local_378);
    }
  }
  return;
}



// FUNCTION 140af7130 FUN_140af7130 body=75 status=ok
// SIG undefined FUN_140af7130(void)

void FUN_140af7130(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x7b8) & 2) == 0) && (*(longlong *)(param_1 + 0x740) != 0)) {
    if (*(char *)(param_1 + 0x561) != '\0') {
      FUN_143017e70();
      *(byte *)(param_1 + 0x7b8) = *(byte *)(param_1 + 0x7b8) | 2;
      return;
    }
    FUN_143018140();
    *(byte *)(param_1 + 0x7b8) = *(byte *)(param_1 + 0x7b8) | 2;
  }
  return;
}



// FUNCTION 140af7180 FUN_140af7180 body=157 status=ok
// SIG undefined FUN_140af7180(void)

void FUN_140af7180(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x5b0);
    plVar1 = plVar2 + *(int *)(param_1 + 0x5b8);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        FUN_140af7760(param_1);
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x5c0);
    plVar1 = plVar2 + *(int *)(param_1 + 0x5c8);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        FUN_140af7220(param_1);
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x5d0);
    plVar1 = plVar2 + *(int *)(param_1 + 0x5d8);
    if (plVar2 != plVar1) {
      do {
        if (*plVar2 == param_2) {
          FUN_140af74c0(param_1);
          return;
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140af7220 FUN_140af7220 body=672 status=ok
// SIG undefined FUN_140af7220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af7220(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x602) != '\0') {
    return;
  }
  if ((*(char *)(param_1 + 0x604) == '\0') && (*(char *)(param_1 + 0x674) == '\0')) {
    return;
  }
  plVar5 = *(longlong **)(param_1 + 0x5b0);
  plVar3 = plVar5 + *(int *)(param_1 + 0x5b8);
  if (plVar5 != plVar3) {
    do {
      if (*plVar5 != 0) {
        FUN_142df30b0(*plVar5 + 0x480,DAT_1468688a0,0);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar3);
    if (*(char *)(param_1 + 0x128) != '\x03') goto LAB_140af730e;
  }
  plVar5 = *(longlong **)(param_1 + 0x5d0);
  plVar3 = plVar5 + *(int *)(param_1 + 0x5d8);
  for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
    if (*plVar5 != 0) {
      FUN_142df30b0(*plVar5 + 0x480,DAT_1468688a0,0);
    }
  }
LAB_140af730e:
  fVar1 = *(float *)(param_1 + 0x5a0);
  *(undefined1 *)(param_1 + 0x602) = 1;
  if (fVar1 == 0.0) {
    FUN_140af7a10(param_1);
  }
  else {
    local_b0 = &LAB_140b124e0;
    local_b8 = 0;
    uStack_a8 = 0;
    uVar2 = AActor::GetWorldTimerManager();
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_b0;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_b0._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_a8;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_a4;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,&local_b8,&local_98,fVar1);
    if (local_38 != 0) {
      plVar5 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 140af74c0 FUN_140af74c0 body=672 status=ok
// SIG undefined FUN_140af74c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af74c0(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x602) != '\0') {
    return;
  }
  if ((*(char *)(param_1 + 0x604) != '\0') && (*(char *)(param_1 + 0x674) == '\0')) {
    return;
  }
  plVar5 = *(longlong **)(param_1 + 0x5b0);
  plVar3 = plVar5 + *(int *)(param_1 + 0x5b8);
  if (plVar5 != plVar3) {
    do {
      if (*plVar5 != 0) {
        FUN_142df30b0(*plVar5 + 0x480,DAT_1468688a0,0);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar3);
    if (*(char *)(param_1 + 0x128) != '\x03') goto LAB_140af75ae;
  }
  plVar5 = *(longlong **)(param_1 + 0x5c0);
  plVar3 = plVar5 + *(int *)(param_1 + 0x5c8);
  for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
    if (*plVar5 != 0) {
      FUN_142df30b0(*plVar5 + 0x480,DAT_1468688a0,0);
    }
  }
LAB_140af75ae:
  fVar1 = *(float *)(param_1 + 0x5a0);
  *(undefined1 *)(param_1 + 0x602) = 1;
  if (fVar1 == 0.0) {
    FUN_140af7c60(param_1);
  }
  else {
    local_b0 = &LAB_140b12500;
    local_b8 = 0;
    uStack_a8 = 0;
    uVar2 = AActor::GetWorldTimerManager();
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_b0;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_b0._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_a8;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_a4;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,&local_b8,&local_98,fVar1);
    if (local_38 != 0) {
      plVar5 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 140af7760 FUN_140af7760 body=680 status=ok
// SIG undefined FUN_140af7760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af7760(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x602) != '\0') {
    return;
  }
  plVar4 = *(longlong **)(param_1 + 0x5c0);
  plVar2 = plVar4 + *(int *)(param_1 + 0x5c8);
  if (plVar4 == plVar2) {
LAB_140af77f0:
    plVar4 = *(longlong **)(param_1 + 0x5d0);
    plVar2 = plVar4 + *(int *)(param_1 + 0x5d8);
    for (; plVar4 != plVar2; plVar4 = plVar4 + 1) {
      if (*plVar4 != 0) {
        FUN_142df30b0(*plVar4 + 0x480,DAT_1468688a0,0);
      }
    }
  }
  else {
    do {
      if (*plVar4 != 0) {
        FUN_142df30b0(*plVar4 + 0x480,DAT_1468688a0,0);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
    if (*(char *)(param_1 + 0x128) == '\x03') goto LAB_140af77f0;
  }
  *(undefined1 *)(param_1 + 0x602) = 1;
  local_c8 = 0;
  if (*(char *)(param_1 + 0x604) == '\0') {
    if (*(char *)(param_1 + 0x674) == '\0') goto LAB_140af7860;
  }
  else if (*(char *)(param_1 + 0x674) != '\0') {
LAB_140af7860:
    fVar5 = *(float *)(param_1 + 0x5a0);
    if (fVar5 <= 0.0) {
      FUN_140af7c60(param_1);
      return;
    }
    local_c0 = &LAB_140b12500;
    goto LAB_140af787e;
  }
  fVar5 = *(float *)(param_1 + 0x5a0);
  if (fVar5 <= 0.0) {
    FUN_140af7a10(param_1);
    return;
  }
  local_c0 = &LAB_140b124e0;
LAB_140af787e:
  uStack_b8 = 0;
  uVar1 = AActor::GetWorldTimerManager();
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_c0;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_c0._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_b8;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_b4;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_a0 = 0;
  local_a8 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_d0 = 0xbf800000;
  local_d8 = 0;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar1,&local_c8,&local_a8,fVar5);
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
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140af7a10 FUN_140af7a10 body=582 status=ok
// SIG undefined FUN_140af7a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af7a10(longlong *param_1,float param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  float fVar3;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 local_70;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((*(char *)((longlong)param_1 + 0x601) != '\0') &&
     ((*(char *)((longlong)param_1 + 0x603) == '\0' || ((char)param_1[0x25] != '\x03')))) {
    if ((char)param_1[0x25] == '\x03') {
      if ((*(char *)((longlong)param_1 + 0x604) == '\0') &&
         (*(char *)((longlong)param_1 + 0x674) == '\0')) {
        return;
      }
      FUN_140b0e3c0(param_1,0);
      FUN_140b0e130(param_1,0);
      FUN_140b0e230(param_1,0);
      if ((param_1[0xaa] != 0) && (param_1[0xbe] != 0)) {
        uStack_94 = 0;
        uStack_90 = 0;
        local_98 = local_98 & 0xffffff00;
        local_88 = (ulonglong)local_98;
        local_80 = 0;
        lVar2 = FUN_1423912d0(param_1[0xaa],local_68);
        auVar1 = *(undefined1 (*) [16])(lVar2 + 0x10);
        uStack_90 = auVar1._8_4_;
        local_a0 = 0;
        local_a8 = 0;
        local_98 = auVar1._0_4_;
        uStack_94 = auVar1._4_4_;
        local_b8 = param_1;
        local_b0 = param_1;
        local_70 = uStack_90;
        FUN_142d40cc0(param_1[0xbe],&local_98,&local_88,0);
      }
    }
    if ((char)param_1[0x25] == '\x03') {
      if ((param_2 <= 0.0) || (*(float *)(param_1 + 0xc1) <= 0.0)) {
        fVar3 = *(float *)(param_1 + 0xc5);
        lVar2 = param_1[0xad];
      }
      else {
        fVar3 = 1.0 / (*(float *)(param_1 + 0xc1) / param_2);
        *(float *)((longlong)param_1 + 0x62c) = fVar3;
        lVar2 = param_1[0xad];
      }
    }
    else {
      fVar3 = *(float *)((longlong)param_1 + 0x62c);
      lVar2 = param_1[0xad];
      if (fVar3 <= 0.0) {
        fVar3 = *(float *)(param_1 + 0xc5);
      }
    }
    UPhysicsHandleComponent::SetInterpolationSpeed(lVar2,fVar3);
    FUN_14130e9c0(param_1);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xd0,0);
    if (*(char *)((longlong)param_1 + 0x674) == '\0') {
      FUN_14288b670(param_1[0xad]);
    }
    else {
      FUN_14288b640();
    }
    *(undefined1 *)((longlong)param_1 + 0x603) = 1;
    if ((char)param_1[0x25] == '\x03') {
      *(undefined1 *)((longlong)param_1 + 0x67c) = 1;
      *(undefined1 *)((longlong)param_1 + 0x604) = 0;
      *(undefined4 *)(param_1 + 0xce) = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x674) = 0;
    (**(code **)(*param_1 + 0x600))(param_1);
    FUN_140b0a830(param_1);
  }
  return;
}



// FUNCTION 140af7c60 FUN_140af7c60 body=582 status=ok
// SIG undefined FUN_140af7c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af7c60(longlong *param_1,float param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  float fVar3;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 local_70;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((*(char *)((longlong)param_1 + 0x601) != '\0') &&
     ((*(char *)((longlong)param_1 + 0x603) == '\0' || ((char)param_1[0x25] != '\x03')))) {
    if ((char)param_1[0x25] == '\x03') {
      if ((*(char *)((longlong)param_1 + 0x604) != '\0') &&
         (*(char *)((longlong)param_1 + 0x674) == '\0')) {
        return;
      }
      FUN_140b0e3c0(param_1,0);
      FUN_140b0e130(param_1,0);
      FUN_140b0e230(param_1,0);
      if ((param_1[0xaa] != 0) && (param_1[0xbe] != 0)) {
        uStack_94 = 0;
        uStack_90 = 0;
        local_98 = local_98 & 0xffffff00;
        local_88 = (ulonglong)local_98;
        local_80 = 0;
        lVar2 = FUN_1423912d0(param_1[0xaa],local_68);
        auVar1 = *(undefined1 (*) [16])(lVar2 + 0x10);
        uStack_90 = auVar1._8_4_;
        local_a0 = 0;
        local_a8 = 0;
        local_98 = auVar1._0_4_;
        uStack_94 = auVar1._4_4_;
        local_b8 = param_1;
        local_b0 = param_1;
        local_70 = uStack_90;
        FUN_142d40cc0(param_1[0xbe],&local_98,&local_88,0);
      }
    }
    if ((char)param_1[0x25] == '\x03') {
      if ((param_2 <= 0.0) || (*(float *)(param_1 + 0xc1) <= 0.0)) {
        fVar3 = *(float *)(param_1 + 0xc5);
        lVar2 = param_1[0xad];
      }
      else {
        fVar3 = 1.0 / (*(float *)(param_1 + 0xc1) / param_2);
        *(float *)((longlong)param_1 + 0x62c) = fVar3;
        lVar2 = param_1[0xad];
      }
    }
    else {
      fVar3 = *(float *)((longlong)param_1 + 0x62c);
      lVar2 = param_1[0xad];
      if (fVar3 <= 0.0) {
        fVar3 = *(float *)(param_1 + 0xc5);
      }
    }
    UPhysicsHandleComponent::SetInterpolationSpeed(lVar2,fVar3);
    FUN_14130e9c0(param_1);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xd0,0);
    if (*(char *)((longlong)param_1 + 0x674) == '\0') {
      FUN_1428846d0(param_1[0xad]);
    }
    else {
      FUN_1428846a0();
    }
    *(undefined1 *)((longlong)param_1 + 0x603) = 1;
    if ((char)param_1[0x25] == '\x03') {
      *(undefined1 *)((longlong)param_1 + 0x67c) = 1;
      *(undefined1 *)((longlong)param_1 + 0x604) = 1;
      *(undefined4 *)(param_1 + 0xce) = 2;
      *(undefined1 *)((longlong)param_1 + 0x674) = 0;
    }
    (**(code **)(*param_1 + 0x600))(param_1);
    FUN_140b0a830(param_1);
  }
  return;
}



// FUNCTION 140af7eb0 FUN_140af7eb0 body=318 status=ok
// SIG undefined FUN_140af7eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af7eb0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined4 local_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (*(char *)((longlong)param_1 + 0x603) != '\0') {
    if ((char)param_1[0x25] == '\x03') {
      *(undefined1 *)((longlong)param_1 + 0x603) = 0;
      *(undefined1 *)((longlong)param_1 + 0x674) = 1;
      FUN_142890280(param_1[0xad]);
      if ((param_1[0xaa] != 0) && (param_1[0xbf] != 0)) {
        uStack_74 = 0;
        uStack_70 = 0;
        local_78 = local_78 & 0xffffff00;
        local_68 = (ulonglong)local_78;
        local_60 = 0;
        lVar1 = FUN_1423912d0(param_1[0xaa],local_48);
        local_78 = *(uint *)(lVar1 + 0x10);
        uStack_74 = *(undefined4 *)(lVar1 + 0x14);
        uStack_70 = *(undefined4 *)(lVar1 + 0x18);
        local_80 = 0;
        local_88 = 0;
        local_98 = param_1;
        local_90 = param_1;
        local_50 = uStack_70;
        FUN_142d40cc0(param_1[0xbf],&local_78,&local_68,0);
      }
      FUN_140b0c810(param_1);
      (**(code **)(*param_1 + 0x600))(param_1);
      FUN_140b108a0(param_1);
    }
    else {
      FUN_140b108a0();
      FUN_142890280(param_1[0xad]);
    }
  }
  return;
}



// FUNCTION 140af7ff0 FUN_140af7ff0 body=533 status=ok
// SIG undefined FUN_140af7ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140af7ff0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  float fVar7;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  float local_18;
  
  if ((((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x600) != '\0')) &&
      (*(longlong *)(param_1 + 0x550) != 0)) && (param_3 != (longlong *)0x0)) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      fVar7 = *(float *)(*(longlong *)(param_1 + 0x550) + 0x1d8) -
              *(float *)(*(longlong *)(param_1 + 0x550) + 0x1e4);
      lVar4 = param_3[0x2d];
      if (lVar4 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined8 *)(lVar4 + 0x220);
        local_30 = *(float *)(lVar4 + 0x228);
      }
      local_24 = local_30;
      fVar1 = local_30;
    }
    else {
      lVar4 = FUN_1413ffd50();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return;
      }
      fVar7 = *(float *)(*(longlong *)(param_1 + 0x550) + 0x1d8) -
              *(float *)(*(longlong *)(param_1 + 0x550) + 0x1e4);
      lVar4 = param_3[0x2d];
      if (lVar4 == 0) {
        local_24 = DAT_1468b5d98;
        puVar5 = &local_2c;
        local_2c = _DAT_1468b5d90;
      }
      else {
        local_38 = *(undefined8 *)(lVar4 + 0x220);
        puVar5 = &local_38;
        local_30 = *(float *)(lVar4 + 0x228);
      }
      fVar1 = *(float *)(puVar5 + 1);
      local_18 = fVar1;
    }
    if ((fVar1 < fVar7) &&
       (plVar6 = (longlong *)(**(code **)(*param_3 + 0x6e8))(param_3), plVar6 != (longlong *)0x0)) {
      lVar4 = UMediaSoundComponent::GetPrivateStaticClass();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (cVar3 = (**(code **)(*plVar6 + 0x560))(plVar6), cVar3 != '\0')) {
        (**(code **)(*param_3 + 0xbc8))(param_3,3);
      }
    }
  }
  return;
}



// FUNCTION 140af8210 FUN_140af8210 body=107 status=ok
// SIG undefined FUN_140af8210(void)

void FUN_140af8210(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x178);
  uVar2 = (longlong)*(int *)(param_1 + 0x180) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x180) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_142398ec0(*puVar1,1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 140af8280 FUN_140af8280 body=395 status=ok
// SIG undefined FUN_140af8280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140af8280(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_38 [16];
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_140af8460();
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x708) != 4)) {
    if ((char)param_1[0xd6] != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar3 = FUN_14304c8c0(uVar2);
      if (lVar3 != 0) {
        local_58 = 0;
        uStack_54 = 0;
        FUN_1430599f0(lVar3,param_1,0);
      }
    }
    if (param_1[0xd0] != 0) {
      (**(code **)(*(longlong *)param_1[0x2d] + 0x428))
                ((longlong *)param_1[0x2d],&local_58,param_1[0xae]);
      local_28 = _DAT_1468684a0 & _DAT_1468684b0;
      uStack_24 = uRam00000001468684a4 & uRam00000001468684b4;
      uStack_20 = uRam00000001468684a8 & uRam00000001468684b8;
      uStack_1c = uRam00000001468684ac & uRam00000001468684bc;
      local_38._4_4_ = uStack_54;
      local_38._0_4_ = local_58;
      local_38._8_4_ = local_50;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = uRam00000001468684ac;
      local_60 = 0;
      local_38._12_4_ = 0;
      local_68 = 0;
      FUN_14245f910(lVar1,param_1[0xd0],&local_48,1);
    }
    if (param_1[0xac] != 0) {
      if (param_1[0xaa] == 0) {
        *(longlong *)param_1[0xab] = 0;
      }
      else {
        *(longlong *)param_1[0xab] = param_1[0xaa];
        *(longlong *)(param_1[0xaa] + 8) = param_1[0xab];
        param_1[0xaa] = 0;
      }
      param_1[0xab] = 0;
      param_1[0xac] = 0;
    }
  }
  return;
}



// FUNCTION 140af8410 FUN_140af8410 body=77 status=ok
// SIG undefined FUN_140af8410(void)

void FUN_140af8410(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
    if (lVar1 != 0) {
      FUN_1407665e0(lVar1 + 0xa28,param_1);
    }
  }
  FUN_140ad2470(param_1,param_2);
  return;
}



// FUNCTION 140af8460 FUN_140af8460 body=118 status=ok
// SIG undefined FUN_140af8460(void)

void FUN_140af8460(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_14222a250();
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = FUN_142f6c9f0(uVar1);
  if (lVar2 != 0) {
    local_10 = 0;
    local_18 = param_1;
    uVar1 = FUN_142f768a0();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    FUN_142f6e000(lVar2,&local_18);
  }
                    /* WARNING: Could not recover jumptable at 0x000140af84d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x8e] + 0x10))();
  return;
}



// FUNCTION 140af84e0 FUN_140af84e0 body=127 status=ok
// SIG undefined FUN_140af84e0(void)

void FUN_140af84e0(longlong param_1,undefined4 param_2)

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
      FUN_140483870(lVar1 + 0x13f8,param_1);
    }
  }
  FUN_140af8460(param_1,param_2);
  return;
}



// FUNCTION 140af8560 FUN_140af8560 body=71 status=ok
// SIG undefined FUN_140af8560(void)

void FUN_140af8560(longlong param_1)

{
  FUN_140af8460();
  if (*(longlong *)(param_1 + 0x810) != 0) {
    FUN_142f6c130(*(longlong *)(param_1 + 0x810),1);
    (**(code **)(**(longlong **)(param_1 + 0x810) + 0x3b0))(*(longlong **)(param_1 + 0x810),0);
    *(undefined8 *)(param_1 + 0x810) = 0;
  }
  return;
}



// FUNCTION 140af85b0 FUN_140af85b0 body=76 status=ok
// SIG undefined FUN_140af85b0(void)

void FUN_140af85b0(longlong param_1)

{
  FUN_140af8460();
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x580) + 0x710,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x580) + 0x720,param_1);
  }
  FUN_140af4400(param_1);
  return;
}



// FUNCTION 140af8600 FUN_140af8600 body=843 status=ok
// SIG undefined FUN_140af8600(void)

void FUN_140af8600(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 *in_stack_fffffffffffffef8;
  ulonglong local_d8;
  void *local_d0;
  int local_c8;
  longlong local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined4 *local_90;
  code *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  local_58 = 0;
  local_48 = 0;
  local_c0 = param_1;
  if (*(int *)(param_2 + 8) != 0) {
    puVar4 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar4 = param_2 + 2;
    }
    if (puVar4 != (undefined8 *)0x0) {
      plVar3 = (longlong *)(**(code **)*puVar4)(puVar4,local_78);
      (**(code **)(*plVar3 + 8))(plVar3);
      local_88[0] = (code *)*param_2;
      goto LAB_140af8670;
    }
  }
  local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
LAB_140af8670:
  FUN_142ff2440(param_1,local_88);
  plVar3 = (longlong *)(param_1 + 0x3b0);
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  if (*(int *)(param_1 + 0x3bc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar3,0);
  }
  FName::FName(&local_d8,L"CharacterClassModInfo",1);
  puVar4 = (undefined8 *)FUN_142dec810(param_1 + 0x2f8,&local_d8);
  if (0 < *(int *)(puVar4 + 1)) {
    puVar4 = (undefined8 *)FUN_142dea7d0(*puVar4);
    local_d0 = (void *)0x0;
    local_c8 = *(int *)(puVar4 + 1);
    lVar9 = (longlong)local_c8;
    _Src = (void *)*puVar4;
    if (local_c8 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d0,local_c8,0);
      _guard_xfg_dispatch_icall_nop(local_d0,_Src,lVar9 * 2);
    }
    iVar1 = local_c8;
    puVar8 = *(undefined4 **)(param_1 + 0x3a0);
    local_90 = puVar8 + (longlong)*(int *)(param_1 + 0x3a8) * 4;
    if (puVar8 != local_90) {
      local_d8 = 0;
      lVar9 = param_1;
      do {
        FUN_1417846f0(lVar9,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar5 = UTextureRenderTarget2D::GetPrivateStaticClass();
        in_stack_fffffffffffffef8 =
             (undefined4 *)((ulonglong)in_stack_fffffffffffffef8 & 0xffffffff00000000);
        lVar9 = FUN_1417985e0(uVar5,lVar9,0,0,in_stack_fffffffffffffef8,0,0,0,0);
        if (lVar9 != 0) {
          local_a8 = *puVar8;
          local_a4 = puVar8[1];
          local_a0 = puVar8[2];
          local_9c = puVar8[3];
          local_b8 = (void *)0x0;
          local_b0 = iVar1;
          if (iVar1 == 0) {
            local_ac = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar1,0);
            _guard_xfg_dispatch_icall_nop(local_b8,local_d0,(longlong)iVar1 * 2);
          }
          in_stack_fffffffffffffef8 = &local_a8;
          FUN_1412403e0(lVar9,&local_b8,*(undefined4 *)(local_c0 + 0x398),
                        *(undefined8 *)(local_c0 + 0x390),in_stack_fffffffffffffef8,local_c0);
          plVar7 = (longlong *)*plVar3;
          local_d8 = (ulonglong)*(int *)(param_1 + 0x3b8);
          for (plVar6 = plVar7; plVar6 != plVar7 + local_d8; plVar6 = plVar6 + 1) {
            if (*plVar6 == lVar9) {
              if ((int)((longlong)plVar6 - (longlong)plVar7 >> 3) != -1) goto LAB_140af8873;
              break;
            }
          }
          iVar2 = *(int *)(param_1 + 0x3b8) + 1;
          *(int *)(param_1 + 0x3b8) = iVar2;
          if (*(int *)(param_1 + 0x3bc) < iVar2) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3);
          }
          *(longlong *)(*plVar3 + local_d8 * 8) = lVar9;
LAB_140af8873:
          local_d8 = local_d8 & 0xffffffff00000000;
          uVar5 = 0;
          local_98 = lVar9;
          if (*(int *)(param_2 + 8) != 0) {
            plVar7 = (longlong *)param_2[6];
            if ((longlong *)param_2[6] == (longlong *)0x0) {
              plVar7 = param_2 + 2;
            }
            if (plVar7 != (longlong *)0x0) {
              uVar5 = (**(code **)(*plVar7 + 8))();
            }
          }
          (*(code *)*param_2)(uVar5,&local_98,&local_d8);
        }
        puVar8 = puVar8 + 4;
        lVar9 = local_c0;
      } while (puVar8 != local_90);
    }
    if (local_d0 != (void *)0x0) {
      FMemory::Free(local_d0);
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = param_2 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140af8950 FUN_140af8950 body=255 status=ok
// SIG undefined FUN_140af8950(void)

bool FUN_140af8950(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    lVar2 = AWeaponBase::GetPrivateStaticClass();
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
      lVar2 = FUN_140b27930(param_2);
      if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_140b27930(param_2);
        if (*(longlong *)(param_1 + 0x88) != 0) {
          lVar4 = FUN_142e49950();
          lVar2 = *(longlong *)(param_1 + 0x88);
          for (lVar6 = lVar2; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
            if (lVar6 == lVar4) goto LAB_140af89f2;
          }
        }
        lVar2 = 0;
LAB_140af89f2:
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x470))(plVar3,local_res10);
        if (*plVar3 != 0) {
          lVar5 = FUN_142e49950();
          lVar6 = *plVar3;
          for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar5) goto LAB_140af8a31;
          }
        }
        lVar6 = 0;
LAB_140af8a31:
        return lVar6 == lVar2;
      }
    }
  }
  return false;
}



// FUNCTION 140af8a50 FUN_140af8a50 body=57 status=ok
// SIG undefined FUN_140af8a50(void)

undefined1 FUN_140af8a50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140b825a0(param_2);
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0xa48) != '\0') {
        return 1;
      }
      return *(undefined1 *)(lVar1 + 0x750);
    }
  }
  return 0;
}



// FUNCTION 140af8a90 FUN_140af8a90 body=66 status=ok
// SIG undefined FUN_140af8a90(void)

void FUN_140af8a90(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
    uVar3 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140b30020(uVar3,uVar1);
  }
  return;
}



// FUNCTION 140af8ae0 FUN_140af8ae0 body=117 status=ok
// SIG undefined FUN_140af8ae0(void)

void FUN_140af8ae0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if ((lVar1 != 0) &&
     ((lVar1 = FWeakObjectPtr::Get(param_1 + 0x10), lVar1 != 0 ||
      (lVar1 = FWeakObjectPtr::Get(param_1 + 0x18), lVar1 != 0)))) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
    FUN_1413b37d0(*(undefined8 *)(param_1 + 0x20),uVar3,uVar2,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 140af8b60 FUN_140af8b60 body=84 status=ok
// SIG undefined FUN_140af8b60(void)

void FUN_140af8b60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar1 != 0) {
      lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
      if (lVar1 != 0) {
        FUN_140af9ec0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140af8bc0 FUN_140af8bc0 body=58 status=ok
// SIG undefined FUN_140af8bc0(void)

void FUN_140af8bc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    *(float *)(lVar1 + 0x470) = *(float *)(lVar1 + 0x470) / *(float *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 140af8c10 FUN_140af8c10 body=151 status=ok
// SIG undefined FUN_140af8c10(void)

void FUN_140af8c10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      if (lVar3 == 0) {
        return;
      }
      lVar1 = FUN_140b2c2b0(lVar3,lVar1);
    }
    else {
      lVar1 = FUN_140b2a880(lVar2,lVar1);
    }
    if (lVar1 != 0) {
      FUN_1413b3820(*(undefined8 *)(param_1 + 8),lVar2,lVar3,lVar1,*(undefined8 *)(param_1 + 0x28));
    }
  }
  return;
}



// FUNCTION 140af8cb0 FUN_140af8cb0 body=79 status=ok
// SIG undefined FUN_140af8cb0(void)

void FUN_140af8cb0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x20);
    FUN_140af5cb0(*(undefined8 *)(param_1 + 8),uVar3,uVar2,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 140af8d00 FUN_140af8d00 body=137 status=ok
// SIG undefined FUN_140af8d00(void)

void FUN_140af8d00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if (((lVar1 != 0) && (lVar1 = FWeakObjectPtr::Get(param_1 + 8), lVar1 != 0)) &&
     (lVar1 = FWeakObjectPtr::Get(param_1 + 0x18), lVar1 != 0)) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
    FUN_140af9ec0(uVar4,uVar3,uVar2,*(undefined1 *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 140af8d90 FUN_140af8d90 body=116 status=ok
// SIG undefined FUN_140af8d90(void)

void FUN_140af8d90(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if ((lVar1 != 0) && (lVar1 = FWeakObjectPtr::Get(param_1 + 0x18), lVar1 != 0)) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
    FUN_140af6ac0(*(undefined8 *)(param_1 + 8),uVar3,*(undefined8 *)(param_1 + 0x28),param_1 + 0x30,
                  *(undefined4 *)(param_1 + 0x78),uVar2);
  }
  return;
}



// FUNCTION 140af8e10 Tick body=50 status=ok
// SIG undefined Tick(void)

void APaint_Particle::FUpdateParticleMovementTick::Tick(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    AMaiCharacter::AbortAttack_Implementation(uVar2);
    return;
  }
  return;
}



// FUNCTION 140af8e50 FUN_140af8e50 body=62 status=ok
// SIG undefined FUN_140af8e50(void)

void FUN_140af8e50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140b3ccc0(uVar2,1,0,DAT_146868978);
    return;
  }
  return;
}



// FUNCTION 140af8e90 FUN_140af8e90 body=62 status=ok
// SIG undefined FUN_140af8e90(void)

void FUN_140af8e90(longlong param_1)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [24];
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    local_res8 = *(undefined4 *)(param_1 + 0x18);
    local_resc = *(undefined4 *)(param_1 + 0x1c);
    FUN_140affe20(*(undefined8 *)(param_1 + 0x10),&local_res8,local_res10);
  }
  return;
}



// FUNCTION 140af8ed0 FUN_140af8ed0 body=85 status=ok
// SIG undefined FUN_140af8ed0(void)

void FUN_140af8ed0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  param_1 = param_1 + 8;
  lVar1 = FWeakObjectPtr::Get(param_1);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1);
    FUN_140b3ccc0(uVar2,1,0,DAT_146868978);
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140af8f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x6d0))(plVar3,0);
    return;
  }
  return;
}



// FUNCTION 140af8f30 FUN_140af8f30 body=116 status=ok
// SIG undefined FUN_140af8f30(void)

void FUN_140af8f30(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if ((lVar1 != 0) && (lVar1 = FWeakObjectPtr::Get(param_1 + 0x18), lVar1 != 0)) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
    FUN_140b0a410(*(undefined8 *)(param_1 + 8),uVar3,*(undefined8 *)(param_1 + 0x28),param_1 + 0x30,
                  *(undefined4 *)(param_1 + 0x78),uVar2);
  }
  return;
}



// FUNCTION 140af8fb0 FUN_140af8fb0 body=74 status=ok
// SIG undefined FUN_140af8fb0(void)

void FUN_140af8fb0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if ((lVar1 != 0) && (lVar1 = FWeakObjectPtr::Get(param_1 + 0x10), lVar1 != 0)) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
    FUN_140afa410(*(undefined8 *)(param_1 + 0x18),uVar2);
  }
  return;
}



// FUNCTION 140af9000 Tick body=50 status=ok
// SIG undefined Tick(void)

void APaint_Particle::FUpdateParticleMovementTick::Tick(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140b3d9f0(uVar2);
    return;
  }
  return;
}



// FUNCTION 140af9040 FUN_140af9040 body=83 status=ok
// SIG undefined FUN_140af9040(void)

void FUN_140af9040(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
      uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
      FUN_140b30020(uVar3,uVar1);
    }
  }
  return;
}



// FUNCTION 140af90a0 FUN_140af90a0 body=95 status=ok
// SIG undefined FUN_140af90a0(void)

void FUN_140af90a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if ((lVar1 != 0) && (lVar1 = FWeakObjectPtr::Get(param_1 + 0x10), lVar1 != 0)) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
    FUN_140afa410(*(undefined8 *)(param_1 + 0x18),uVar2);
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
    FUN_142d49d00(uVar2,*(undefined8 *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 140af9100 FUN_140af9100 body=127 status=ok
// SIG undefined FUN_140af9100(void)

void FUN_140af9100(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if ((lVar1 != 0) && (lVar1 = FWeakObjectPtr::Get(param_1 + 0x10), lVar1 != 0)) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    *(float *)(lVar1 + 0x470) =
         *(float *)(*(longlong *)(param_1 + 0x18) + 0xb8) * *(float *)(lVar1 + 0x470);
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    *(float *)(lVar1 + 0x488) =
         *(float *)(*(longlong *)(param_1 + 0x18) + 0xbc) * *(float *)(lVar1 + 0x488);
  }
  return;
}



// FUNCTION 140af9180 FUN_140af9180 body=90 status=ok
// SIG undefined FUN_140af9180(void)

void FUN_140af9180(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140af91d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 140af91e0 FUN_140af91e0 body=85 status=ok
// SIG undefined FUN_140af91e0(void)

void FUN_140af91e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140af9232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 140af9240 FUN_140af9240 body=68 status=ok
// SIG undefined FUN_140af9240(void)

undefined1 FUN_140af9240(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
    uVar3 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140b30020(uVar3,uVar1);
  }
  return 1;
}



// FUNCTION 140af9290 FUN_140af9290 body=127 status=ok
// SIG undefined FUN_140af9290(void)

undefined1 FUN_140af9290(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 == 0) {
    return 1;
  }
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if ((lVar1 == 0) && (lVar1 = FWeakObjectPtr::Get(param_1 + 0x18), lVar1 == 0)) {
    return 1;
  }
  uVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
  uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
  FUN_1413b37d0(*(undefined8 *)(param_1 + 0x20),uVar3,uVar2,*(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 140af9310 FUN_140af9310 body=81 status=ok
// SIG undefined FUN_140af9310(void)

undefined1 FUN_140af9310(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar1 != 0) {
      lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
      if (lVar1 != 0) {
        FUN_140af9ec0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38));
      }
    }
  }
  return 1;
}



// FUNCTION 140af9370 FUN_140af9370 body=60 status=ok
// SIG undefined FUN_140af9370(void)

undefined1 FUN_140af9370(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    *(float *)(lVar1 + 0x470) = *(float *)(lVar1 + 0x470) / *(float *)(param_1 + 0x10);
  }
  return 1;
}



// FUNCTION 140af93b0 FUN_140af93b0 body=20 status=ok
// SIG undefined FUN_140af93b0(void)

undefined1 FUN_140af93b0(longlong param_1)

{
  FUN_140aee7f0(param_1 + 8);
  return 1;
}



// FUNCTION 140af93d0 FUN_140af93d0 body=153 status=ok
// SIG undefined FUN_140af93d0(void)

undefined8 FUN_140af93d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      if (lVar3 == 0) {
        return 1;
      }
      lVar1 = FUN_140b2c2b0(lVar3,lVar1);
    }
    else {
      lVar1 = FUN_140b2a880(lVar2,lVar1);
    }
    if (lVar1 != 0) {
      FUN_1413b3820(*(undefined8 *)(param_1 + 8),lVar2,lVar3,lVar1,*(undefined8 *)(param_1 + 0x28));
    }
  }
  return 1;
}



// FUNCTION 140af9470 FUN_140af9470 body=81 status=ok
// SIG undefined FUN_140af9470(void)

undefined1 FUN_140af9470(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x20);
    FUN_140af5cb0(*(undefined8 *)(param_1 + 8),uVar3,uVar2,*(undefined8 *)(param_1 + 0x28));
  }
  return 1;
}



// FUNCTION 140af94d0 FUN_140af94d0 body=174 status=ok
// SIG undefined FUN_140af94d0(void)

undefined1 FUN_140af94d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    if (lVar1 != 0) {
      lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(param_1 + 8);
        uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
        uVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
        FUN_140af9ec0(uVar4,uVar3,uVar2,*(undefined1 *)(param_1 + 0x20));
        return 1;
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 140af9580 FUN_140af9580 body=139 status=ok
// SIG undefined FUN_140af9580(void)

undefined1 FUN_140af9580(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if (lVar1 == 0) {
    return 1;
  }
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
    FUN_140af6ac0(*(undefined8 *)(param_1 + 8),uVar3,*(undefined8 *)(param_1 + 0x28),param_1 + 0x30,
                  *(undefined4 *)(param_1 + 0x78),uVar2);
    return 1;
  }
  return 1;
}



// FUNCTION 140af9610 FUN_140af9610 body=47 status=ok
// SIG undefined FUN_140af9610(void)

undefined1 FUN_140af9610(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    AMaiCharacter::AbortAttack_Implementation(uVar2);
  }
  return 1;
}



// FUNCTION 140af9640 FUN_140af9640 body=59 status=ok
// SIG undefined FUN_140af9640(void)

undefined1 FUN_140af9640(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140b3ccc0(uVar2,1,0,DAT_146868978);
  }
  return 1;
}



// FUNCTION 140af9680 FUN_140af9680 body=64 status=ok
// SIG undefined FUN_140af9680(void)

undefined8 FUN_140af9680(longlong param_1)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [24];
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    local_res8 = *(undefined4 *)(param_1 + 0x18);
    local_resc = *(undefined4 *)(param_1 + 0x1c);
    FUN_140affe20(*(undefined8 *)(param_1 + 0x10),&local_res8,local_res10);
  }
  return 1;
}



// FUNCTION 140af96c0 FUN_140af96c0 body=82 status=ok
// SIG undefined FUN_140af96c0(void)

undefined1 FUN_140af96c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  param_1 = param_1 + 8;
  lVar1 = FWeakObjectPtr::Get(param_1);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1);
    FUN_140b3ccc0(uVar2,1,0,DAT_146868978);
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1);
    (**(code **)(*plVar3 + 0x6d0))(plVar3,0);
  }
  return 1;
}



// FUNCTION 140af9720 FUN_140af9720 body=139 status=ok
// SIG undefined FUN_140af9720(void)

undefined1 FUN_140af9720(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if (lVar1 == 0) {
    return 1;
  }
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
    FUN_140b0a410(*(undefined8 *)(param_1 + 8),uVar3,*(undefined8 *)(param_1 + 0x28),param_1 + 0x30,
                  *(undefined4 *)(param_1 + 0x78),uVar2);
    return 1;
  }
  return 1;
}



// FUNCTION 140af97b0 FUN_140af97b0 body=84 status=ok
// SIG undefined FUN_140af97b0(void)

undefined1 FUN_140af97b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar1 != 0) {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
      FUN_140afa410(*(undefined8 *)(param_1 + 0x18),uVar2);
    }
    return 1;
  }
  return 1;
}



// FUNCTION 140af9810 FUN_140af9810 body=47 status=ok
// SIG undefined FUN_140af9810(void)

undefined1 FUN_140af9810(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140b3d9f0(uVar2);
  }
  return 1;
}



// FUNCTION 140af9840 FUN_140af9840 body=93 status=ok
// SIG undefined FUN_140af9840(void)

undefined1 FUN_140af9840(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
      uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
      FUN_140b30020(uVar3,uVar1);
    }
    return 1;
  }
  return 1;
}



// FUNCTION 140af98a0 FUN_140af98a0 body=105 status=ok
// SIG undefined FUN_140af98a0(void)

undefined1 FUN_140af98a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar1 != 0) {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
      FUN_140afa410(*(undefined8 *)(param_1 + 0x18),uVar2);
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
      FUN_142d49d00(uVar2,*(undefined8 *)(param_1 + 0x40));
    }
    return 1;
  }
  return 1;
}



// FUNCTION 140af9910 FUN_140af9910 body=137 status=ok
// SIG undefined FUN_140af9910(void)

undefined1 FUN_140af9910(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar1 != 0) {
      lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
      *(float *)(lVar1 + 0x470) =
           *(float *)(*(longlong *)(param_1 + 0x18) + 0xb8) * *(float *)(lVar1 + 0x470);
      lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
      *(float *)(lVar1 + 0x488) =
           *(float *)(*(longlong *)(param_1 + 0x18) + 0xbc) * *(float *)(lVar1 + 0x488);
    }
    return 1;
  }
  return 1;
}



// FUNCTION 140af99a0 FUN_140af99a0 body=115 status=ok
// SIG undefined FUN_140af99a0(void)

bool FUN_140af99a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,
               *(undefined8 *)(param_1 + 0x20));
  }
  return lVar1 != 0;
}



// FUNCTION 140af9a20 FUN_140af9a20 body=111 status=ok
// SIG undefined FUN_140af9a20(void)

bool FUN_140af9a20(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3);
  }
  return lVar1 != 0;
}



// FUNCTION 140af9a90 FUN_140af9a90 body=308 status=ok
// SIG undefined FUN_140af9a90(void)

longlong FUN_140af9a90(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (param_2 != 0) {
    if (param_3 == '\0') {
      lVar1 = *(longlong *)(param_2 + 0x68);
    }
    else if (param_3 == '\x01') {
      lVar1 = *(longlong *)(param_2 + 0x70);
    }
    else if (param_3 == '\x02') {
      lVar1 = *(longlong *)(param_2 + 0x78);
    }
    else {
      lVar1 = lVar2;
      if (param_3 == '\x03') {
        lVar1 = *(longlong *)(param_2 + 0x80);
      }
    }
    if ((param_2 != lVar1) && (lVar1 != 0)) {
      if ((*(longlong *)(lVar1 + 0x40) != 0) && (*(longlong *)(lVar1 + 0x50) != 0)) {
        return lVar1;
      }
      if (param_3 == '\0') {
        lVar2 = *(longlong *)(lVar1 + 0x68);
      }
      else if (param_3 == '\x01') {
        lVar2 = *(longlong *)(lVar1 + 0x70);
      }
      else if (param_3 == '\x02') {
        lVar2 = *(longlong *)(lVar1 + 0x78);
      }
      else if (param_3 == '\x03') {
        lVar2 = *(longlong *)(lVar1 + 0x80);
      }
      while( true ) {
        if ((param_2 == lVar2) || (lVar2 == 0)) {
          return 0;
        }
        if ((*(longlong *)(lVar2 + 0x40) != 0) && (*(longlong *)(lVar2 + 0x50) != 0)) break;
        if (param_3 == '\0') {
          lVar2 = *(longlong *)(lVar2 + 0x68);
        }
        else if (param_3 == '\x01') {
          lVar2 = *(longlong *)(lVar2 + 0x70);
        }
        else if (param_3 == '\x02') {
          lVar2 = *(longlong *)(lVar2 + 0x78);
        }
        else if (param_3 == '\x03') {
          lVar2 = *(longlong *)(lVar2 + 0x80);
        }
        else {
          lVar2 = 0;
        }
      }
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140af9bd0 FUN_140af9bd0 body=367 status=ok
// SIG undefined FUN_140af9bd0(void)

int * FUN_140af9bd0(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
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
      lVar7 = *param_1;
      do {
        lVar2 = (longlong)iVar10;
        if (*(longlong *)(lVar7 + lVar2 * 0x18) != 0) {
          uVar3 = FUN_142e49950();
          uVar8 = *(ulonglong *)(lVar7 + lVar2 * 0x18);
          for (uVar6 = uVar8; uVar6 != 0; uVar6 = *(ulonglong *)(uVar6 + 0x30)) {
            if (uVar6 == uVar3) goto LAB_140af9ce0;
          }
        }
        uVar8 = 0;
LAB_140af9ce0:
        if (*param_3 != 0) {
          uVar4 = FUN_142e49950();
          uVar6 = *param_3;
          for (uVar3 = uVar6; uVar3 != 0; uVar3 = *(ulonglong *)(uVar3 + 0x30)) {
            if (uVar3 == uVar4) goto LAB_140af9d06;
          }
        }
        uVar6 = 0;
LAB_140af9d06:
        if (uVar8 == uVar6) {
          *param_2 = iVar10;
          return param_2;
        }
        lVar7 = *param_1;
        iVar10 = *(int *)(lVar7 + 0x10 + lVar2 * 0x18);
      } while (iVar10 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140af9d40 FUN_140af9d40 body=369 status=ok
// SIG undefined FUN_140af9d40(void)

int * FUN_140af9d40(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar10 = (int)(*param_3 >> 4);
    uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar4 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
    uVar11 = (iVar10 - uVar9) - uVar4 ^ uVar4 >> 0xc;
    uVar9 = (uVar9 - uVar11) - uVar4 ^ uVar11 << 0x10;
    uVar4 = (uVar4 - uVar9) - uVar11 ^ uVar9 >> 5;
    uVar11 = (uVar11 - uVar9) - uVar4 ^ uVar4 >> 3;
    uVar9 = (uVar9 - uVar11) - uVar4 ^ uVar11 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar10 = *(int *)((longlong)plVar1 +
                     (((longlong)(int)((uVar4 - uVar9) - uVar11) ^ (ulonglong)(uVar9 >> 0xf)) &
                     (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar10 != -1) {
      lVar5 = *param_1;
      do {
        lVar7 = (longlong)iVar10 * 0x58;
        if (*(longlong *)(lVar7 + lVar5) != 0) {
          uVar2 = FUN_142e49950();
          uVar8 = *(ulonglong *)(lVar7 + lVar5);
          for (uVar6 = uVar8; uVar6 != 0; uVar6 = *(ulonglong *)(uVar6 + 0x30)) {
            if (uVar6 == uVar2) goto LAB_140af9e52;
          }
        }
        uVar8 = 0;
LAB_140af9e52:
        if (*param_3 != 0) {
          uVar3 = FUN_142e49950();
          uVar6 = *param_3;
          for (uVar2 = uVar6; uVar2 != 0; uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
            if (uVar2 == uVar3) goto LAB_140af9e78;
          }
        }
        uVar6 = 0;
LAB_140af9e78:
        if (uVar8 == uVar6) {
          *param_2 = iVar10;
          return param_2;
        }
        lVar5 = *param_1;
        iVar10 = *(int *)(lVar7 + 0x50 + lVar5);
      } while (iVar10 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140af9ec0 FUN_140af9ec0 body=1288 status=ok
// SIG undefined FUN_140af9ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140af9ec0(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_168 [32];
  uint local_148;
  undefined4 local_140;
  char local_138;
  longlong *local_130;
  int local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  if (((param_2 != (longlong *)0x0) &&
      (local_68 = DAT_1468387a8 ^ (ulonglong)auStack_168, param_3 != 0)) &&
     (local_138 = param_4, lVar7 = FUN_140b2a730(param_2), lVar7 != 0)) {
    lVar8 = (**(code **)(*param_2 + 0x148))(param_2);
    if ((lVar8 == 0) ||
       (lVar8 = (**(code **)(*param_2 + 0x148))(param_2),
       *(float *)(param_1 + 0x1d0) <= *(float *)(lVar8 + 0x790) - *(float *)(lVar7 + 0x288))) {
      lVar8 = *(longlong *)(lVar7 + 0x1a0);
      uVar13 = 0;
      local_118 = (longlong *)0x0;
      local_110 = 0;
      lVar12 = 0x60;
      if (param_4 == '\0') {
        lVar12 = 0x118;
      }
      cVar6 = FUN_142d472a0(param_2,lVar12 + param_1,&local_118);
      if (cVar6 != '\0') {
        local_120 = param_2;
        AlgoImpl::
        IntroSortInternal<UMovieSceneSection_*,FIdentityFunctor,TDereferenceWrapper<UMovieSceneSection_*,<lambda_61750566fbb28c98eaf6df15c9240c34>_>_>
                  (local_118,(longlong)(int)(uint)local_110,local_138,&local_120);
        uVar14 = uVar13;
        if (0 < (int)(uint)local_110) {
          do {
            cVar6 = FUN_140b45fb0(param_3,*(undefined8 *)(uVar14 + (longlong)local_118));
            if (cVar6 != '\0') {
              lVar8 = local_118[(int)uVar13];
              break;
            }
            uVar10 = (int)uVar13 + 1;
            if (uVar10 == (uint)local_110) {
              lVar8 = *(longlong *)(uVar14 + (longlong)local_118);
            }
            uVar13 = (ulonglong)uVar10;
            uVar14 = uVar14 + 8;
          } while ((int)uVar10 < (int)(uint)local_110);
        }
      }
      lVar12 = (**(code **)(*param_2 + 0x148))(param_2);
      if ((lVar12 != 0) && (lVar12 = FUN_140b2a730(param_2), lVar12 != 0)) {
        lVar12 = (**(code **)(*param_2 + 0x148))(param_2);
        uVar4 = *(undefined4 *)(lVar12 + 0x790);
        lVar12 = FUN_140b2a730(param_2);
        *(undefined4 *)(lVar12 + 0x288) = uVar4;
      }
      if (lVar8 == 0) {
        lVar7 = (**(code **)(*param_2 + 0x148))(param_2);
        iVar5 = local_128;
        plVar9 = local_118;
        if (lVar7 != 0) {
          local_148 = *(uint *)(param_1 + 0x34);
          FUN_140af6740(param_1,param_2,param_3,0);
          iVar5 = local_128;
          plVar9 = local_118;
        }
      }
      else {
        FUN_140b2f9d0(lVar7,lVar8,0);
        FUN_1413b2c90(param_1,param_2,param_3,lVar8);
        iVar5 = local_128;
        plVar9 = local_118;
      }
    }
    else {
      lVar8 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar8 + 400) == 0) {
        uVar11 = *(undefined8 *)(lVar8 + 0x3f8);
      }
      else {
        uVar11 = *(undefined8 *)(*(longlong *)(lVar8 + 400) + 0x90);
      }
      local_120 = *(longlong **)(lVar7 + 0x290);
      lVar8 = FTimerManager::FindTimer(uVar11,&local_120,0);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 1) != '\x02')) {
        return;
      }
      local_130 = (longlong *)0x0;
      local_128 = 0;
      FWeakObjectPtr::operator=(&local_e8,param_2);
      FWeakObjectPtr::operator=(&local_f0,param_3);
      FWeakObjectPtr::operator=(&local_120,param_1);
      local_108 = local_ec;
      local_104 = local_e8;
      local_100 = local_e4;
      local_fc = (undefined4)local_120;
      local_f8 = local_120._4_4_;
      plVar9 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar9 == (longlong *)0x0) {
        if (((local_128 != 0) && (local_130 != (longlong *)0x0)) &&
           ((**(code **)(*local_130 + 0x28))(local_130,0), local_130 != (longlong *)0x0)) {
          local_130 = (longlong *)FMemory::Realloc(local_130,0,0);
        }
      }
      else {
        *plVar9 = (longlong)&PTR_GetPoolName_14428afa8;
        *(undefined4 *)((longlong)plVar9 + 0xc) = local_108;
        *(undefined4 *)(plVar9 + 1) = local_f0;
        *(undefined4 *)(plVar9 + 2) = local_104;
        *(undefined4 *)((longlong)plVar9 + 0x14) = local_100;
        *(undefined4 *)(plVar9 + 3) = local_fc;
        *(undefined4 *)((longlong)plVar9 + 0x1c) = local_f8;
        *(char *)(plVar9 + 4) = local_138;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar9[5] = lVar8;
        *plVar9 = (longlong)&PTR_GetPoolName_14428aff0;
        FUN_140af4a00(plVar9,&local_130);
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        lVar8 = FMemory::Realloc(plVar9,0,0);
        if (lVar8 != 0) {
          FMemory::Free(lVar8);
        }
      }
      lVar8 = (**(code **)(*param_2 + 0x148))(param_2);
      fVar1 = *(float *)(lVar8 + 0x790);
      lVar8 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar8 + 400) == 0) {
        uVar11 = *(undefined8 *)(lVar8 + 0x3f8);
      }
      else {
        uVar11 = *(undefined8 *)(*(longlong *)(lVar8 + 400) + 0x90);
      }
      fVar2 = *(float *)(lVar7 + 0x288);
      fVar3 = *(float *)(param_1 + 0x1d0);
      local_d8 = 0;
      local_d0 = 0;
      if ((local_128 != 0) && (local_130 != (longlong *)0x0)) {
        (**(code **)(*local_130 + 0x30))(local_130,&local_d8);
      }
      FWeakObjectPtr::operator=(local_c8,0);
      local_140 = 0xbf800000;
      local_148 = local_148 & 0xffffff00;
      local_c0 = 0;
      local_88 = (longlong *)0x0;
      local_78 = 0;
      local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar11,lVar7 + 0x290,&local_d8,fVar3 - (fVar1 - fVar2));
      if (local_78 != 0) {
        plVar9 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar9 = local_88;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
      iVar5 = 0;
      plVar9 = local_130;
      if (local_128 != 0) {
        if (local_130 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_130 + 0x28))(local_130,0);
        if (local_130 != (longlong *)0x0) {
          local_130 = (longlong *)FMemory::Realloc(local_130,0,0);
        }
        local_128 = 0;
        iVar5 = local_128;
        plVar9 = local_130;
      }
    }
    local_128 = iVar5;
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
  }
  return;
}



// FUNCTION 140afa3d0 FUN_140afa3d0 body=35 status=ok
// SIG undefined FUN_140afa3d0(void)

void FUN_140afa3d0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142a07000();
                    /* WARNING: Could not recover jumptable at 0x000140afa3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  return;
}



// FUNCTION 140afa410 FUN_140afa410 body=172 status=ok
// SIG undefined FUN_140afa410(void)

void FUN_140afa410(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 local_38 [48];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar1 = FUN_140b27c50(param_2,local_38);
  if (*(int *)(lVar1 + 8) < 1) {
    lVar1 = FUN_140b27c50(param_2,local_38);
    if (*(int *)(lVar1 + 4) < 1) {
      lVar1 = FUN_140b27c50(param_2,local_38);
      if (*(int *)(lVar1 + 0xc) < 2) {
        uVar2 = *(undefined4 *)(param_1 + 0xa0);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0xa8);
      }
      goto LAB_140afa47e;
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0xa4);
LAB_140afa47e:
  SScrollBox::SetWheelScrollMultiplier(param_2,uVar2);
  uhx::glues::AGEffectSphere_Glue_obj::set_SizeScale(param_2,0);
  FUN_140b3ffb0(param_2,1);
  FUN_140b3ffa0(param_2,1);
  (**(code **)(*param_2 + 0x6f8))(param_2);
  return;
}



// FUNCTION 140afa4c0 FUN_140afa4c0 body=56 status=ok
// SIG undefined FUN_140afa4c0(void)

void FUN_140afa4c0(longlong *param_1)

{
  if (((char)param_1[0x25] == '\x03') && ((char)param_1[0xed] != '\x01')) {
    (**(code **)(*param_1 + 0x600))();
    *(undefined1 *)(param_1 + 0xed) = 1;
  }
  FUN_140af0d50(param_1);
  return;
}



// FUNCTION 140afa500 FUN_140afa500 body=1103 status=ok
// SIG undefined FUN_140afa500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140afa500(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  undefined8 local_248;
  undefined4 local_240;
  longlong *local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 *local_220;
  undefined8 local_218;
  undefined8 *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0 [50];
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_230 = param_2;
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = FUN_1428dfc70();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    local_238 = plVar6;
    if (!bVar2) {
      lVar7 = FUN_1428e7a40();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return;
      }
      local_238 = (longlong *)plVar6[0x23];
      if ((longlong *)plVar6[0x23] == (longlong *)0x0) {
        return;
      }
    }
    if (*(char *)(param_1 + 0xf8) == '\0') {
      uVar8 = FUN_142c3f210();
      cVar4 = UObjectBaseUtility::IsIn(param_1,uVar8);
      if ((((cVar4 == '\0') &&
           (*(undefined1 *)(param_1 + 0xf8) = 1, (*(byte *)(param_1 + 0xb8) & 1) != 0)) &&
          (0 < *(int *)(param_1 + 0xb0))) && (*(int *)(param_1 + 0xe0) == 0)) {
        plVar1 = (longlong *)(param_1 + 0xd8);
        *(undefined4 *)(param_1 + 0xe0) = 0;
        if (*(int *)(param_1 + 0xe4) < *(int *)(param_1 + 0xb0)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
        }
        lVar15 = *(longlong *)(param_1 + 0xa8);
        lVar7 = lVar15 + (longlong)*(int *)(param_1 + 0xb0) * 0x28;
        for (; lVar15 != lVar7; lVar15 = lVar15 + 0x28) {
          lVar9 = FUN_141796df0(lVar15 + 0x10);
          if (lVar9 != 0) {
            lVar10 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iVar5 = *(int *)(param_1 + 0xe0);
              *(int *)(param_1 + 0xe0) = iVar5 + 1;
              if (*(int *)(param_1 + 0xe4) < iVar5 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
              }
              *(longlong *)(*plVar1 + (longlong)iVar5 * 8) = lVar9;
            }
          }
          param_2 = local_230;
        }
      }
    }
    uVar14 = 0;
    FAIDataProviderValue::BindData(param_1 + 0x60,plVar6,*(undefined4 *)(param_2 + 0x30));
    fVar17 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x60);
    plVar6 = local_238;
    lVar7 = local_238[0x2d];
    if (lVar7 == 0) {
      local_248 = _DAT_1468b5d90;
      local_240 = DAT_1468b5d98;
    }
    else {
      local_248 = *(undefined8 *)(lVar7 + 0x220);
      local_240 = *(undefined4 *)(lVar7 + 0x228);
    }
    local_60 = (undefined8 *)0x0;
    local_1f8 = local_240;
    local_58 = 0;
    local_200 = local_248;
    local_228 = (**(code **)(*local_238 + 0x148))(local_238);
    local_220 = &local_228;
    local_218 = FUN_14073d6c0(&local_228,DAT_1468688e0);
    puVar3 = local_220;
    local_210 = &local_228;
    local_208 = 0;
    puVar11 = (undefined8 *)FUN_14073d6c0(local_220,local_218);
    puVar12 = (undefined8 *)FUN_14073d6c0(local_210,local_208);
    while (puVar11 != puVar12) {
      uVar8 = puVar11[2];
      local_258 = &local_200;
      cVar4 = FUN_140affae0(param_1,uVar8,plVar6,fVar17 * fVar17);
      uVar16 = local_58;
      if (cVar4 != '\0') {
        lVar7 = (longlong)(int)local_58;
        iVar5 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar5);
        if (local_58._4_4_ < iVar5) {
          FUN_1407413c0(local_1f0,uVar16 & 0xffffffff);
        }
        puVar13 = local_1f0;
        if (local_60 != (undefined8 *)0x0) {
          puVar13 = local_60;
        }
        puVar13[lVar7] = uVar8;
        plVar6 = local_238;
      }
      puVar11 = (undefined8 *)FUN_14073d6c0(puVar3,*puVar11);
      param_2 = local_230;
    }
    FUN_142bef1a0(param_2,local_58 & 0xffffffff);
    puVar11 = local_1f0;
    if (local_60 != (undefined8 *)0x0) {
      puVar11 = local_60;
    }
    uVar16 = (longlong)(int)local_58 & 0x1fffffffffffffff;
    if (puVar11 + (int)local_58 < puVar11) {
      uVar16 = uVar14;
    }
    if (uVar16 != 0) {
      do {
        FWeakObjectPtr::operator=(&local_248,*puVar11);
        FUN_140ae9440(param_2,&local_248);
        uVar14 = uVar14 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar14 != uVar16);
    }
    if (local_60 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140afa950 FUN_140afa950 body=1028 status=ok
// SIG undefined FUN_140afa950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140afa950(longlong param_1,longlong param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  float local_280;
  undefined8 local_278;
  float local_270;
  undefined8 local_268;
  undefined8 *local_260;
  undefined8 local_258;
  undefined8 *local_250;
  undefined8 local_248;
  undefined8 *local_240;
  float local_238;
  float local_22c;
  undefined8 local_228 [50];
  undefined8 *local_98;
  undefined8 local_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = FUN_1428dfc70();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar13 = plVar6;
    if (!bVar1) {
      lVar7 = FUN_1428e7a40();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return;
      }
      plVar13 = (longlong *)plVar6[0x23];
      if ((longlong *)plVar6[0x23] == (longlong *)0x0) {
        return;
      }
    }
    FAIDataProviderValue::BindData(param_1 + 0x68,plVar6,*(undefined4 *)(param_2 + 0x30));
    fVar16 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x68);
    lVar7 = plVar13[0x2d];
    if (lVar7 == 0) {
      local_288 = _DAT_1468b5d90;
      local_280 = DAT_1468b5d98;
    }
    else {
      local_288 = *(undefined8 **)(lVar7 + 0x220);
      local_280 = *(float *)(lVar7 + 0x228);
    }
    uVar15 = 0;
    local_270 = local_280;
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    local_278 = local_288;
    local_268 = (**(code **)(*plVar13 + 0x148))(plVar13);
    local_260 = &local_268;
    local_258 = FUN_14073d6c0(&local_268,DAT_1468688f8);
    puVar12 = local_260;
    local_250 = &local_268;
    local_248 = 0;
    puVar8 = (undefined8 *)FUN_14073d6c0(local_260,local_258);
    local_288 = (undefined8 *)FUN_14073d6c0(local_250,local_248);
    fVar4 = local_270;
    if (puVar8 != local_288) {
      fVar3 = local_278._4_4_;
      fVar2 = (float)local_278;
      do {
        uVar14 = local_90;
        lVar7 = puVar8[2];
        if ((*(char *)(param_1 + 0x60) != '\0') || (*(char *)(lVar7 + 0x4fb) == '\x04')) {
          lVar11 = *(longlong *)(lVar7 + 0x168);
          if (lVar11 == 0) {
            local_238 = DAT_1468b5d98;
            ppuVar9 = &local_240;
            local_240 = _DAT_1468b5d90;
          }
          else {
            ppuVar9 = (undefined8 **)&local_278;
            local_270 = *(float *)(lVar11 + 0x228);
            local_278 = *(undefined8 **)(lVar11 + 0x220);
          }
          local_22c = *(float *)(ppuVar9 + 1);
          fVar17 = fVar2 - SUB84(*ppuVar9,0);
          fVar18 = fVar3 - (float)((ulonglong)*ppuVar9 >> 0x20);
          if (fVar18 * fVar18 + fVar17 * fVar17 + (fVar4 - local_22c) * (fVar4 - local_22c) <=
              fVar16 * fVar16) {
            lVar11 = (longlong)(int)local_90;
            iVar5 = (int)local_90 + 1;
            local_90 = CONCAT44(local_90._4_4_,iVar5);
            if (local_90._4_4_ < iVar5) {
              FUN_1407413c0(local_228,uVar14 & 0xffffffff);
            }
            puVar10 = local_228;
            if (local_98 != (undefined8 *)0x0) {
              puVar10 = local_98;
            }
            puVar10[lVar11] = lVar7;
          }
        }
        puVar8 = (undefined8 *)FUN_14073d6c0(puVar12,*puVar8);
      } while (puVar8 != local_288);
    }
    FUN_142bef1a0(param_2,local_90 & 0xffffffff);
    puVar12 = local_228;
    if (local_98 != (undefined8 *)0x0) {
      puVar12 = local_98;
    }
    uVar14 = (longlong)(int)local_90 & 0x1fffffffffffffff;
    if (puVar12 + (int)local_90 < puVar12) {
      uVar14 = uVar15;
    }
    if (uVar14 != 0) {
      do {
        FWeakObjectPtr::operator=(&local_288,*puVar12);
        FUN_140ae9440(param_2,&local_288);
        uVar15 = uVar15 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar15 != uVar14);
    }
    if (local_98 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140afade0 FUN_140afade0 body=71 status=ok
// SIG undefined FUN_140afade0(void)

void FUN_140afade0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *param_3 = *(undefined8 *)(param_1 + 0x730);
  *param_4 = *(undefined1 *)(param_1 + 0x728);
  plVar1 = *(longlong **)(param_1 + 0x730);
  if ((plVar1 != (longlong *)0x0) && (*(float *)((longlong)plVar1 + 0x94) <= 0.0)) {
    uVar2 = (**(code **)(*plVar1 + 0x280))();
  }
  *param_5 = uVar2;
  return;
}



// FUNCTION 140afae30 FUN_140afae30 body=97 status=ok
// SIG undefined FUN_140afae30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140afae30(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28 [2];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    local_18 = 0;
    puVar2 = local_28;
  }
  else {
    puVar2 = (undefined8 *)FUN_142d1a9e0(*(longlong *)(param_1 + 0x50),local_28);
  }
  *(undefined1 *)(param_2 + 2) = 0;
  if (*(char *)(puVar2 + 2) != '\0') {
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  return param_2;
}



// FUNCTION 140afaee0 FUN_140afaee0 body=63 status=ok
// SIG undefined FUN_140afaee0(void)

longlong FUN_140afaee0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x550) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x168);
  }
  else if (*(char *)(param_1 + 0x550) == '\x02') {
    lVar1 = FUN_140afb070();
  }
  else {
    lVar1 = FUN_140afafe0();
  }
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x168);
  }
  return lVar1;
}



// FUNCTION 140afaf20 FUN_140afaf20 body=56 status=ok
// SIG undefined FUN_140afaf20(void)

longlong FUN_140afaf20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + -0x470);
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2 + 0x4b8;
}



// FUNCTION 140afaf60 FUN_140afaf60 body=113 status=ok
// SIG undefined FUN_140afaf60(void)

longlong FUN_140afaf60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x554);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x580) <= iVar1)) {
    lVar2 = param_1 + 0x5d8;
  }
  else {
    lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x578);
  }
  iVar1 = *(int *)(param_1 + 0x55c);
  if ((iVar1 < 0) || (*(int *)(lVar2 + 0x38) <= iVar1)) {
    lVar2 = *(longlong *)(lVar2 + 0x30);
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 0x48;
  }
  iVar1 = *(int *)(param_1 + 0x560);
  if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x40))) {
    return (longlong)iVar1 * 0x50 + *(longlong *)(lVar2 + 0x38);
  }
  return *(longlong *)(lVar2 + 0x38);
}



// FUNCTION 140afafe0 FUN_140afafe0 body=143 status=ok
// SIG undefined FUN_140afafe0(void)

undefined8 FUN_140afafe0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = -1;
  if (*(char *)(param_1 + 0x550) == '\x02') {
    iVar3 = 0;
  }
  else if (*(char *)(param_1 + 0x550) == '\x03') {
    iVar3 = *(int *)(param_1 + 0x560);
  }
  iVar1 = *(int *)(param_1 + 0x554);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x580) <= iVar1)) {
    lVar2 = param_1 + 0x5d8;
  }
  else {
    lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x578);
  }
  iVar1 = *(int *)(param_1 + 0x55c);
  if ((iVar1 < 0) || (*(int *)(lVar2 + 0x38) <= iVar1)) {
    lVar2 = *(longlong *)(lVar2 + 0x30);
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 0x48;
  }
  if ((-1 < iVar3) && (iVar3 < *(int *)(lVar2 + 0x40))) {
    return *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x48 + (longlong)iVar3 * 0x50);
  }
  return 0;
}



// FUNCTION 140afb070 FUN_140afb070 body=245 status=ok
// SIG undefined FUN_140afb070(void)

longlong FUN_140afb070(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x554);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x580) <= iVar1)) {
    lVar4 = param_1 + 0x5d8;
  }
  else {
    lVar4 = (longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x578);
  }
  iVar2 = *(int *)(param_1 + 0x55c);
  if ((iVar2 < 0) || (*(int *)(lVar4 + 0x38) <= iVar2)) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 0x48;
  }
  lVar4 = *(longlong *)(lVar4 + 0x30);
  if (lVar4 == 0) {
    iVar5 = -1;
    lVar4 = 0;
    if (*(char *)(param_1 + 0x550) == '\x02') {
      iVar5 = 0;
    }
    else if (*(char *)(param_1 + 0x550) == '\x03') {
      iVar5 = *(int *)(param_1 + 0x560);
    }
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x580) <= iVar1)) {
      param_1 = param_1 + 0x5d8;
    }
    else {
      param_1 = (longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x578);
    }
    if ((iVar2 < 0) || (*(int *)(param_1 + 0x38) <= iVar2)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 0x48;
    }
    if ((-1 < iVar5) && (iVar5 < *(int *)(lVar3 + 0x40))) {
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x48 + (longlong)iVar5 * 0x50);
    }
  }
  return lVar4;
}



// FUNCTION 140afb190 FUN_140afb190 body=97 status=ok
// SIG undefined FUN_140afb190(void)

undefined8 FUN_140afb190(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x29;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Retrieves all allowed InteractiveObjects",0x52);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140afb200 FUN_140afb200 body=97 status=ok
// SIG undefined FUN_140afb200(void)

undefined8 FUN_140afb200(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x20;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Retrieves all allowed lootables",0x40);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140afb270 FUN_140afb270 body=97 status=ok
// SIG undefined FUN_140afb270(void)

undefined8 FUN_140afb270(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x13;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"InteractiveObjects",0x26);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140afb2e0 FUN_140afb2e0 body=97 status=ok
// SIG undefined FUN_140afb2e0(void)

undefined8 FUN_140afb2e0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 10;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Lootables",0x14);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140afb350 FUN_140afb350 body=132 status=ok
// SIG undefined FUN_140afb350(void)

longlong FUN_140afb350(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    lVar1 = *(longlong *)(param_1 + 0x118);
    if (lVar1 != 0) {
      lVar3 = AGImpulseWindProjectile::GetPrivateStaticClass();
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
        return lVar1;
      }
    }
    param_1 = *(longlong *)(param_1 + 400);
    if (param_1 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 140afb3e0 GetEndTangent body=25 status=ok
// SIG undefined GetEndTangent(void)

undefined8 * USplineMeshComponent::GetEndTangent(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x638);
  *param_2 = *(undefined8 *)(param_1 + 0x630);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140afb400 GetEndPosition body=25 status=ok
// SIG undefined GetEndPosition(void)

undefined8 * USplineMeshComponent::GetEndPosition(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x644);
  *param_2 = *(undefined8 *)(param_1 + 0x63c);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140afb420 FUN_140afb420 body=198 status=ok
// SIG undefined FUN_140afb420(void)

undefined8 FUN_140afb420(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined8 local_res8;
  undefined2 *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar3 = FUN_142e49950();
    lVar1 = *(longlong *)(param_1 + 0x38);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if (lVar1 != 0) {
          local_res8 = *(undefined8 *)(lVar1 + 0x18);
          FName::ToString(&local_res8,&local_18);
          goto LAB_140afb489;
        }
        break;
      }
    }
  }
  local_10 = 5;
  local_18 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
LAB_140afb489:
  puVar4 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar4 = local_18;
  }
  FString::PrintfImpl(param_2,L"Adds the damage type \'%ls\' to the balance state.",puVar4);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140afb4f0 FUN_140afb4f0 body=150 status=ok
// SIG undefined FUN_140afb4f0(void)

undefined8 FUN_140afb4f0(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 local_res8 [4];
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar1 = *(undefined2 **)(param_1 + 0x38);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 5;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
  }
  else {
    local_res8[0] = *(undefined8 *)(puVar1 + 0xc);
    FName::ToString(local_res8,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"Sets the override mesh \'%ls\' to the balance state.",puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140afb590 GetNotifyName_Implementation body=133 status=ok
// SIG undefined GetNotifyName_Implementation(void)

undefined8
UHMNotify_ForceFeedback::GetNotifyName_Implementation(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  ulonglong local_res8;
  wchar_t *local_18;
  int local_10;
  
  bVar1 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    pwVar2 = L"none";
  }
  else {
    local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    FName::ToString(&local_res8,&local_18);
    bVar1 = true;
    pwVar2 = L"";
    if (local_10 != 0) {
      pwVar2 = local_18;
    }
  }
  FString::PrintfImpl(param_2,L"Adds the payload \'%ls\' to the grenade\'s balance state.",pwVar2);
  if ((bVar1) && (local_18 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140afb620 FUN_140afb620 body=62 status=ok
// SIG undefined FUN_140afb620(void)

undefined8 * FUN_140afb620(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x45;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,L"Allows buffing one or more passive abilities on the inventory actor.",0x8a);
  return param_2;
}



// FUNCTION 140afb660 FUN_140afb660 body=62 status=ok
// SIG undefined FUN_140afb660(void)

undefined8 * FUN_140afb660(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Modifies character slide properties.",0x4a);
  return param_2;
}



// FUNCTION 140afb6a0 IsChosenOne body=8 status=ok
// SIG undefined IsChosenOne(void)

undefined1 AMagicLeapSharedWorldPlayerController::IsChosenOne(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x571);
}



// FUNCTION 140afb6b0 FUN_140afb6b0 body=302 status=ok
// SIG undefined FUN_140afb6b0(void)

void FUN_140afb6b0(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  *param_3 = 0;
  *param_4 = 0;
  lVar7 = *(longlong *)(param_2 + 0x38);
  lVar10 = (longlong)*(int *)(param_2 + 0x40) * 0x50 + lVar7;
  do {
    if (lVar7 == lVar10) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x4e0);
    if (lVar2 == 0) {
LAB_140afb7ac:
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      lVar4 = UFocusButtonWidget::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140afb7ac;
      iVar1 = *(int *)(param_1 + 0x554);
      if ((iVar1 < 0) || (*(int *)(lVar2 + 0x6c0) <= iVar1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140afb7ac;
      uVar8 = 0;
      plVar6 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x6b8));
      uVar9 = 0;
      plVar5 = (longlong *)*plVar6;
      plVar6 = plVar5 + (longlong)(int)plVar6[1] * 2;
      for (; plVar5 != plVar6; plVar5 = plVar5 + 2) {
        if (*plVar5 == *(longlong *)(lVar7 + 0x40)) {
          uVar9 = (uint)*(byte *)(plVar5 + 1);
          uVar8 = (uint)*(byte *)((longlong)plVar5 + 9);
          break;
        }
      }
    }
    *param_3 = *param_3 + uVar9;
    lVar7 = lVar7 + 0x50;
    *param_4 = *param_4 + uVar8;
  } while( true );
}



// FUNCTION 140afb7e0 FUN_140afb7e0 body=23 status=ok
// SIG undefined FUN_140afb7e0(void)

undefined8 FUN_140afb7e0(undefined8 param_1,undefined8 param_2)

{
  FUN_142ffaa30();
  return param_2;
}



// FUNCTION 140afb800 FUN_140afb800 body=115 status=ok
// SIG undefined FUN_140afb800(void)

ulonglong FUN_140afb800(longlong param_1,float *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0x550) + 0x148))();
  if (((uVar1 != 0) && ((byte)(*(char *)(param_1 + -0x55) - 1U) < 2)) &&
     (0.0 < *(float *)(param_1 + 0x26c) - *(float *)(uVar1 + 0x790))) {
    *param_2 = *(float *)(param_1 + 0x26c);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x18);
    return 1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140afb880 FUN_140afb880 body=232 status=ok
// SIG undefined FUN_140afb880(void)

void FUN_140afb880(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140ad4e60();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146868998) && (_Init_thread_header(&DAT_146868998), DAT_146868998 == -1))
  {
    uVar1 = FUN_1412faff0();
    FUN_1412faff0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SourceItemActor",1);
    DAT_146868990 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868998);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146868990 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146868990 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868990 + 0x30));
  }
  return;
}



// FUNCTION 140afb970 FUN_140afb970 body=1810 status=ok
// SIG undefined FUN_140afb970(void)

void FUN_140afb970(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_140afc270();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_1468689c8) && (_Init_thread_header(&DAT_1468689c8), DAT_1468689c8 == -1)) {
    uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
    AGImpulseWindProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DesiredFloor",1);
    DAT_1468689c0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468689c8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468689c0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468689c0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468689c0 + 0x30));
  }
  if ((*piVar5 < DAT_1468689d8) && (_Init_thread_header(&DAT_1468689d8), DAT_1468689d8 == -1)) {
    uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
    AGImpulseWindProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bStoppedBetweenFloor",1);
    DAT_1468689d0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468689d8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468689d0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468689d0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468689d0 + 0x30));
  }
  if ((*piVar5 < DAT_1468689e8) && (_Init_thread_header(&DAT_1468689e8), DAT_1468689e8 == -1)) {
    uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
    AGImpulseWindProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TimelinePlayRate",1);
    DAT_1468689e0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468689e8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468689e0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468689e0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468689e0 + 0x30));
  }
  if ((*piVar5 < DAT_1468689f8) && (_Init_thread_header(&DAT_1468689f8), DAT_1468689f8 == -1)) {
    uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
    AGImpulseWindProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RepOverrideTimelinePlayRate",1);
    DAT_1468689f0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468689f8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468689f0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468689f0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468689f0 + 0x30));
  }
  if ((*piVar5 < DAT_146868a08) && (_Init_thread_header(&DAT_146868a08), DAT_146868a08 == -1)) {
    uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
    AGImpulseWindProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Floor1Location",1);
    DAT_146868a00 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868a08);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868a00 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868a00 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868a00 + 0x30));
  }
  if ((*piVar5 < DAT_146868a18) && (_Init_thread_header(&DAT_146868a18), DAT_146868a18 == -1)) {
    uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
    AGImpulseWindProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Floor2Location",1);
    DAT_146868a10 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868a18);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868a10 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868a10 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868a10 + 0x30));
  }
  if ((*piVar5 < DAT_146868a28) && (_Init_thread_header(&DAT_146868a28), DAT_146868a28 == -1)) {
    uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
    AGImpulseWindProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Floor1Rotation",1);
    DAT_146868a20 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868a28);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868a20 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868a20 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868a20 + 0x30));
  }
  if ((*piVar5 < DAT_146868a38) && (_Init_thread_header(&DAT_146868a38), DAT_146868a38 == -1)) {
    uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
    AGImpulseWindProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Floor2Rotation",1);
    DAT_146868a30 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868a38);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868a30 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868a30 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868a30 + 0x30));
  }
  if ((*piVar5 < DAT_146868a48) && (_Init_thread_header(&DAT_146868a48), DAT_146868a48 == -1)) {
    uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
    AGImpulseWindProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentPercentage",1);
    DAT_146868a40 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868a48);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868a40 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868a40 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868a40 + 0x30));
  }
  if ((*piVar5 < DAT_146868a58) && (_Init_thread_header(&DAT_146868a58), DAT_146868a58 == -1)) {
    uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
    AGImpulseWindProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bHasEverMoved",1);
    DAT_146868a50 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868a58);
  }
  if (0 < *(int *)(DAT_146868a50 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868a50 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146868a50 + 0x30));
  }
  return;
}



// FUNCTION 140afc090 FUN_140afc090 body=232 status=ok
// SIG undefined FUN_140afc090(void)

void FUN_140afc090(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140ad4e60();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146868a70) && (_Init_thread_header(&DAT_146868a70), DAT_146868a70 == -1))
  {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentPlanetData",1);
    DAT_146868a68 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868a70);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146868a68 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146868a68 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868a68 + 0x30));
  }
  return;
}



// FUNCTION 140afc180 FUN_140afc180 body=232 status=ok
// SIG undefined FUN_140afc180(void)

void FUN_140afc180(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140afc270();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146868a80) && (_Init_thread_header(&DAT_146868a80), DAT_146868a80 == -1))
  {
    uVar1 = FUN_14131fa50();
    FUN_14131fa50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GeyserState",1);
    DAT_146868a78 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868a80);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146868a78 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146868a78 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868a78 + 0x30));
  }
  return;
}



// FUNCTION 140afc270 FUN_140afc270 body=785 status=ok
// SIG undefined FUN_140afc270(void)

void FUN_140afc270(undefined8 param_1,undefined8 param_2)

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
  if ((*piVar5 < DAT_146868a90) && (_Init_thread_header(&DAT_146868a90), DAT_146868a90 == -1)) {
    uVar1 = UMovieScene2DTransformSection::GetPrivateStaticClass();
    UMovieScene2DTransformSection::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedUserStatesData",1);
    DAT_146868a88 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868a90);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868a88 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146868a88 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868a88 + 0x30));
  }
  if ((*piVar5 < DAT_146868aa0) && (_Init_thread_header(&DAT_146868aa0), DAT_146868aa0 == -1)) {
    uVar1 = UMovieScene2DTransformSection::GetPrivateStaticClass();
    UMovieScene2DTransformSection::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RepCurrentState",1);
    DAT_146868a98 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868aa0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868a98 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146868a98 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868a98 + 0x30));
  }
  if ((*piVar5 < DAT_146868ab0) && (_Init_thread_header(&DAT_146868ab0), DAT_146868ab0 == -1)) {
    uVar1 = UMovieScene2DTransformSection::GetPrivateStaticClass();
    UMovieScene2DTransformSection::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RepCurrentLockState",1);
    DAT_146868aa8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868ab0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868aa8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146868aa8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868aa8 + 0x30));
  }
  if ((*piVar5 < DAT_146868ac0) && (_Init_thread_header(&DAT_146868ac0), DAT_146868ac0 == -1)) {
    uVar1 = UMovieScene2DTransformSection::GetPrivateStaticClass();
    UMovieScene2DTransformSection::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RepCurrentInteractiveState",1);
    DAT_146868ab8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868ac0);
  }
  if (0 < *(int *)(DAT_146868ab8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146868ab8 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146868ab8 + 0x30));
  }
  return;
}



// FUNCTION 140afc590 FUN_140afc590 body=433 status=ok
// SIG undefined FUN_140afc590(void)

void FUN_140afc590(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140afc270();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146868af0) && (_Init_thread_header(&DAT_146868af0), DAT_146868af0 == -1)) {
    uVar1 = FUN_1413c3a10();
    FUN_1413c3a10();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AnimState",1);
    DAT_146868ae8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868af0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868ae8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146868ae8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868ae8 + 0x30));
  }
  if ((*piVar5 < DAT_146868b00) && (_Init_thread_header(&DAT_146868b00), DAT_146868b00 == -1)) {
    uVar1 = FUN_1413c3a10();
    FUN_1413c3a10();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CustomResponseIdx",1);
    DAT_146868af8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868b00);
  }
  if (0 < *(int *)(DAT_146868af8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146868af8 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146868af8 + 0x30));
  }
  return;
}



// FUNCTION 140afc750 FUN_140afc750 body=623 status=ok
// SIG undefined FUN_140afc750(void)

void FUN_140afc750(undefined8 param_1,undefined8 param_2)

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
  if ((*piVar5 < DAT_146868b10) && (_Init_thread_header(&DAT_146868b10), DAT_146868b10 == -1)) {
    uVar1 = FUN_1414cfae0();
    FUN_1414cfae0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DonationTier",1);
    DAT_146868b08 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868b10);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868b08 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868b08 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868b08 + 0x30));
  }
  FUN_140afc270(param_1,param_2);
  if ((*piVar5 < DAT_146868af0) && (_Init_thread_header(&DAT_146868af0), DAT_146868af0 == -1)) {
    uVar1 = FUN_1413c3a10();
    FUN_1413c3a10();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AnimState",1);
    DAT_146868ae8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868af0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868ae8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868ae8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868ae8 + 0x30));
  }
  if ((*piVar5 < DAT_146868b00) && (_Init_thread_header(&DAT_146868b00), DAT_146868b00 == -1)) {
    uVar1 = FUN_1413c3a10();
    FUN_1413c3a10();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CustomResponseIdx",1);
    DAT_146868af8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868b00);
  }
  if (0 < *(int *)(DAT_146868af8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868af8 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146868af8 + 0x30));
  }
  return;
}



// FUNCTION 140afc9c0 FUN_140afc9c0 body=232 status=ok
// SIG undefined FUN_140afc9c0(void)

void FUN_140afc9c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140a64f20();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146868b20) && (_Init_thread_header(&DAT_146868b20), DAT_146868b20 == -1))
  {
    uVar1 = UFocusButtonWidget::GetPrivateStaticClass();
    UFocusButtonWidget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TrophyCaseReplicatedSets",1);
    DAT_146868b18 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868b20);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146868b18 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146868b18 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868b18 + 0x30));
  }
  return;
}



// FUNCTION 140afcab0 FUN_140afcab0 body=232 status=ok
// SIG undefined FUN_140afcab0(void)

void FUN_140afcab0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140afc270();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146868b30) && (_Init_thread_header(&DAT_146868b30), DAT_146868b30 == -1))
  {
    uVar1 = UCheckBoxWidgetStyle::StaticClass();
    UCheckBoxWidgetStyle::StaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bHologramActive",1);
    DAT_146868b28 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868b30);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146868b28 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146868b28 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868b28 + 0x30));
  }
  return;
}



// FUNCTION 140afcba0 FUN_140afcba0 body=462 status=ok
// SIG undefined FUN_140afcba0(void)

longlong * FUN_140afcba0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  longlong lVar7;
  
  lVar7 = 0;
  iVar6 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(longlong *)(param_1 + 0x590) != 0) && (lVar1 = FUN_142f41f60(), lVar1 != 0)) {
    lVar1 = FUN_142f41f60(*(undefined8 *)(param_1 + 0x590));
    plVar2 = (longlong *)FName::ToString(lVar1 + 0xd8,&local_28);
    if (param_2 != plVar2) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_2 + 1) = (int)plVar2[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    psVar5 = (short *)*param_2;
    iVar8 = (int)param_2[1];
    psVar4 = psVar5 + iVar8;
    if (psVar4 != psVar5) {
      while (psVar4 = psVar4 + -1, *psVar4 != 0x2f) {
        if (psVar4 == psVar5) {
          return param_2;
        }
      }
      iVar3 = (int)((longlong)psVar4 - (longlong)psVar5 >> 1);
      if (-1 < iVar3) {
        lVar1 = -1;
        if (iVar8 == 0) {
          psVar5 = &DAT_143f3eda8;
          iVar8 = iVar6;
        }
        else {
          iVar8 = iVar8 + -1;
        }
        iVar9 = iVar8 - (iVar3 + 1);
        iVar3 = iVar6;
        if ((-1 < iVar9) && (iVar3 = iVar8, iVar9 < iVar8)) {
          iVar3 = iVar9;
        }
        uVar10 = 0;
        local_28 = 0;
        local_1c = 0;
        psVar5 = psVar5 + ((longlong)iVar8 - (longlong)iVar3);
        if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
          do {
            lVar1 = lVar1 + 1;
          } while (psVar5[lVar1] != 0);
          iVar8 = (int)lVar1 + 1;
          local_20 = iVar8;
          if (0 < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
          }
          uVar10 = local_1c;
          iVar6 = local_20;
          lVar7 = local_28;
          FGenericPlatformString::Memcpy(local_28,psVar5,(longlong)iVar8 * 2);
        }
        if (param_2 == &local_28) {
          if (lVar7 != 0) {
            FMemory::Free(lVar7);
          }
        }
        else {
          if (*param_2 != 0) {
            FMemory::Free();
          }
          *param_2 = lVar7;
          *(int *)(param_2 + 1) = iVar6;
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140afcd70 FUN_140afcd70 body=208 status=ok
// SIG undefined FUN_140afcd70(void)

void FUN_140afcd70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0x70);
  lVar1 = lVar8 + (longlong)*(int *)(param_1 + 0x78) * 0x28;
  if (lVar8 != lVar1) {
    do {
      plVar6 = *(longlong **)(lVar8 + 0x10);
      uVar7 = (longlong)*(int *)(lVar8 + 0x18) & 0x1fffffffffffffff;
      if (plVar6 + *(int *)(lVar8 + 0x18) < plVar6) {
        uVar7 = 0;
      }
      uVar5 = 0;
      if (uVar7 != 0) {
        do {
          lVar2 = *plVar6;
          if (lVar2 != 0) {
            uVar3 = UNativeUserListEntry::GetPrivateStaticClass();
            lVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
            if (lVar4 != 0) {
              FUN_142f78e20(lVar2,param_2);
            }
          }
          plVar6 = plVar6 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar7);
      }
      lVar8 = lVar8 + 0x28;
    } while (lVar8 != lVar1);
  }
  return;
}



// FUNCTION 140afce40 FUN_140afce40 body=305 status=ok
// SIG undefined FUN_140afce40(void)

void FUN_140afce40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0x70);
  lVar4 = lVar8 + (longlong)*(int *)(param_1 + 0x78) * 0x28;
  for (; lVar8 != lVar4; lVar8 = lVar8 + 0x28) {
    uVar5 = 0;
    plVar6 = *(longlong **)(lVar8 + 0x10);
    uVar7 = (longlong)*(int *)(lVar8 + 0x18) & 0x1fffffffffffffff;
    if (plVar6 + *(int *)(lVar8 + 0x18) < plVar6) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) {
      do {
        lVar1 = *plVar6;
        if (lVar1 != 0) {
          uVar2 = UNativeUserListEntry::GetPrivateStaticClass();
          lVar3 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
          if (lVar3 != 0) {
            FUN_142f78e20(lVar1,param_2);
          }
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar7);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 != 0) {
    uVar2 = UNativeUserListEntry::GetPrivateStaticClass();
    lVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar2);
    if (lVar4 != 0) {
      FUN_142f78e20(*(undefined8 *)(param_1 + 0x288),param_2);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x290);
  if (lVar4 != 0) {
    uVar2 = UNativeUserListEntry::GetPrivateStaticClass();
    lVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar2);
    if (lVar4 != 0) {
      FUN_142f78e20(*(undefined8 *)(param_1 + 0x290),param_2);
    }
  }
  return;
}



// FUNCTION 140afcfa0 FUN_140afcfa0 body=446 status=ok
// SIG undefined FUN_140afcfa0(void)

ulonglong * FUN_140afcfa0(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_28;
  uint local_20;
  uint local_1c;
  
  uVar11 = 0;
  *param_2 = 0;
  param_2[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"? DESIGN FIX ME ?",0x24);
  if ((*(longlong *)(param_1 + 0x590) != 0) && (lVar5 = FUN_142f41f60(), lVar5 != 0)) {
    psVar8 = *(short **)(lVar5 + 0xe0);
    lVar9 = -1;
    iVar1 = *(int *)(lVar5 + 0xe8);
    psVar7 = psVar8 + iVar1;
    uVar3 = 0xffffffff;
    psVar6 = psVar7;
    do {
      if (psVar6 == psVar8) {
        iVar2 = -1;
        goto LAB_140afd025;
      }
      psVar6 = psVar6 + -1;
    } while (*psVar6 != 0x2e);
    iVar2 = (int)((longlong)psVar6 - (longlong)psVar8 >> 1);
LAB_140afd025:
    if (iVar2 < 0) {
      do {
        if (psVar7 == psVar8) {
          iVar2 = -1;
          goto LAB_140afd041;
        }
        psVar7 = psVar7 + -1;
      } while (*psVar7 != 0x2f);
      iVar2 = (int)((longlong)psVar7 - (longlong)psVar8 >> 1);
LAB_140afd041:
      if (iVar2 < 0) {
        return param_2;
      }
    }
    if (iVar1 == 0) {
      psVar8 = &DAT_143f3eda8;
    }
    else {
      uVar3 = iVar1 - 1;
    }
    uVar10 = 0;
    if (iVar1 == 0) {
      uVar3 = uVar10;
    }
    uVar4 = uVar3 - (iVar2 + 1);
    uVar12 = uVar11;
    if ((-1 < (int)uVar4) && (uVar12 = (ulonglong)uVar3, (int)uVar4 < (int)uVar3)) {
      uVar12 = (ulonglong)uVar4;
    }
    local_28 = 0;
    local_1c = 0;
    psVar8 = psVar8 + ((longlong)(int)uVar3 - (longlong)(int)uVar12);
    uVar3 = uVar10;
    if ((psVar8 != (short *)0x0) && (*psVar8 != 0)) {
      do {
        lVar9 = lVar9 + 1;
      } while (psVar8[lVar9] != 0);
      uVar4 = (int)lVar9 + 1;
      local_20 = uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      uVar3 = local_1c;
      uVar10 = local_20;
      uVar11 = local_28;
      FGenericPlatformString::Memcpy(local_28,psVar8,(longlong)(int)uVar4 * 2);
    }
    if (param_2 == &local_28) {
      if (uVar11 != 0) {
        FMemory::Free(uVar11);
      }
    }
    else {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = uVar11;
      *(uint *)(param_2 + 1) = uVar10;
      *(uint *)((longlong)param_2 + 0xc) = uVar3;
    }
  }
  return param_2;
}



// FUNCTION 140afd160 FUN_140afd160 body=704 status=ok
// SIG undefined FUN_140afd160(void)

void FUN_140afd160(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int local_res18;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  
  if (((1 < *(int *)(param_3 + 8)) && (param_2 != 0)) &&
     (lVar6 = FUN_1422312c0(param_2), lVar6 != 0)) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if ((bVar14) && (cVar5 = FUN_140bc2c90(lVar6), cVar5 == '\0')) {
      FUN_142dcf3a0(param_2,&local_58);
      if (local_58 != 0) {
        local_48 = local_58;
        plStack_40 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
        uVar8 = FUN_140bb7440(lVar6);
        FUN_140d83a50(uVar8,&local_48,param_3,param_4);
        plVar9 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_40 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        lVar6 = (longlong)(int)param_4[1];
        if ((int)param_4[1] != 0) {
          iVar10 = 0;
          local_res18 = 0;
          bVar14 = *(char *)(*(longlong *)*param_4 + 0x80) != '\0';
          lVar7 = 0;
          iVar12 = 0;
          do {
            lVar7 = lVar7 + 1;
            iVar13 = iVar12 + 1;
            if (lVar7 < lVar6) {
              plVar9 = (longlong *)(lVar7 * 0x10 + *param_4);
              do {
                if (bVar14 != (*(char *)(*plVar9 + 0x80) != '\0')) break;
                iVar13 = iVar13 + 1;
                lVar7 = lVar7 + 1;
                plVar9 = plVar9 + 2;
              } while (lVar7 < lVar6);
            }
            iVar11 = iVar13 - iVar12;
            if (bVar14 == false) {
              if (iVar11 != 0) {
                plVar9 = (longlong *)((longlong)iVar12 * 0x10 + 8 + *param_4);
                do {
                  plVar3 = (longlong *)*plVar9;
                  if (plVar3 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = plVar3 + 1;
                    lVar4 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar4 == 1) {
                      (**(code **)*plVar3)();
                      LOCK();
                      piVar1 = (int *)((longlong)plVar3 + 0xc);
                      iVar10 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar10 == 1) {
                        (**(code **)(*plVar3 + 8))(plVar3,1);
                      }
                    }
                  }
                  plVar9 = plVar9 + 2;
                  iVar11 = iVar11 + -1;
                  iVar10 = local_res18;
                } while (iVar11 != 0);
              }
            }
            else {
              if (iVar10 != iVar12) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar10 * 0x10 + *param_4),
                           (void *)((longlong)iVar12 * 0x10 + *param_4),(longlong)iVar11 << 4);
              }
              local_res18 = iVar10 + iVar11;
              iVar10 = local_res18;
            }
            bVar14 = (bool)(bVar14 ^ 1);
            iVar12 = iVar13;
          } while (lVar7 < lVar6);
          *(int *)(param_4 + 1) = iVar10;
        }
      }
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_50 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plStack_50 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140afd430 FUN_140afd430 body=30 status=ok
// SIG undefined FUN_140afd430(void)

undefined8 FUN_140afd430(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x38);
  return param_2;
}



// FUNCTION 140afd450 FUN_140afd450 body=368 status=ok
// SIG undefined FUN_140afd450(void)

void FUN_140afd450(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  
  cVar5 = *(char *)(param_1 + 0xd8);
  if (((cVar5 == '\x01') && (param_2 != 0)) && (lVar3 = FUN_1422312c0(param_2), lVar3 != 0)) {
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
    if ((bVar1) && (lVar3 = FUN_1424503b0(lVar3), lVar3 != 0)) {
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
      if ((bVar1) && (lVar3 = *(longlong *)(lVar3 + 0x848), lVar3 != 0)) {
        lVar4 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((((bVar1) && (*(longlong *)(lVar3 + 0x908) != 0)) &&
            (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x908) + 0x180), lVar3 != 0)) &&
           (lVar4 = FUN_142df3510(param_2), lVar4 != 0)) {
          iVar2 = FUN_142dec980(lVar4,lVar3);
          if (iVar2 == 0) {
            cVar5 = '\x02';
          }
          else if (iVar2 == 2) {
            cVar5 = '\x03';
          }
        }
      }
    }
  }
  FUN_140c154a0(param_1,param_2,cVar5);
  return;
}



// FUNCTION 140afd5c0 FUN_140afd5c0 body=102 status=ok
// SIG undefined FUN_140afd5c0(void)

undefined8 FUN_140afd5c0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(param_1 + -0x550);
  uVar1 = UUGButton::GetPrivateStaticClass();
  lVar2 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar1);
  if (lVar2 != 0) {
    return *(undefined8 *)(lVar2 + 0x710);
  }
  uVar1 = UUGHitTextureButton::GetPrivateStaticClass();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x628))(plVar3,uVar1);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140afd619. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar3 + 0x8e8))(plVar3);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140afd630 FUN_140afd630 body=185 status=ok
// SIG undefined FUN_140afd630(void)

undefined8 FUN_140afd630(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = UUGButton::GetPrivateStaticClass();
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x550) + 0x628))(param_1 + -0x550,uVar1);
  if (lVar2 == 0) {
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x8e8))();
      if (lVar2 != 0) {
        FText::FText(param_2,lVar2 + 0xb8);
        return param_2;
      }
    }
  }
  else if (*(longlong *)(lVar2 + 0x710) != 0) {
    FText::FText(param_2,*(longlong *)(lVar2 + 0x710) + 0xb8);
    return param_2;
  }
  FText::FText(param_2);
  return param_2;
}



// FUNCTION 140afd6f0 FUN_140afd6f0 body=185 status=ok
// SIG undefined FUN_140afd6f0(void)

undefined8 FUN_140afd6f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = UUGButton::GetPrivateStaticClass();
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x550) + 0x628))(param_1 + -0x550,uVar1);
  if (lVar2 == 0) {
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x8e8))();
      if (lVar2 != 0) {
        FText::FText(param_2,lVar2 + 0x98);
        return param_2;
      }
    }
  }
  else if (*(longlong *)(lVar2 + 0x710) != 0) {
    FText::FText(param_2,*(longlong *)(lVar2 + 0x710) + 0x98);
    return param_2;
  }
  FText::FText(param_2);
  return param_2;
}



// FUNCTION 140afd7b0 FUN_140afd7b0 body=721 status=ok
// SIG undefined FUN_140afd7b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140afd7b0(longlong param_1,float *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    local_98 = _DAT_1468b5d90;
    local_90 = DAT_1468b5d98;
  }
  else {
    local_98 = *(undefined8 *)(lVar1 + 0x220);
    local_90 = *(float *)(lVar1 + 0x228);
  }
  fVar10 = local_90;
  uVar2 = local_98;
  local_a0 = local_90;
  lVar1 = *(longlong *)(param_3 + 0x168);
  local_a8 = local_98;
  if (lVar1 == 0) {
    local_98 = _DAT_1468b5d90;
    local_90 = DAT_1468b5d98;
  }
  else {
    local_98 = *(undefined8 *)(lVar1 + 0x220);
    local_90 = *(float *)(lVar1 + 0x228);
  }
  lVar1 = *(longlong *)(param_1 + 0x580);
  local_a8._0_4_ = (float)uVar2;
  fVar9 = (float)local_98 - (float)local_a8;
  fVar10 = local_90 - fVar10;
  local_78 = *(float *)(lVar1 + 0x210);
  fStack_74 = *(float *)(lVar1 + 0x214);
  fStack_70 = *(float *)(lVar1 + 0x218);
  fStack_6c = *(float *)(lVar1 + 0x21c);
  auVar7._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_74);
  auVar7._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_78);
  auVar7._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_70);
  auVar7._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_6c);
  iVar3 = movmskps(local_90,auVar7);
  local_a8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  fVar8 = (float)((ulonglong)local_98 >> 0x20) - local_a8._4_4_;
  if (iVar3 != 0) {
    *(float *)(lVar1 + 0x250) = local_78;
    *(float *)(lVar1 + 0x254) = fStack_74;
    *(float *)(lVar1 + 600) = fStack_70;
    *(float *)(lVar1 + 0x25c) = fStack_6c;
    local_a8 = uVar2;
    puVar4 = (undefined8 *)FQuat::Rotator(&local_78,local_88);
    *(undefined8 *)(lVar1 + 0x260) = *puVar4;
    *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar4 + 1);
  }
  local_a8 = *(undefined8 *)(lVar1 + 0x260);
  local_a0 = *(float *)(lVar1 + 0x268);
  FRotator::Vector(&local_a8,&local_98);
  fVar6 = DAT_1468b5d98;
  fVar5 = fVar8 * local_98._4_4_ + fVar9 * (float)local_98 + fVar10 * local_90;
  fVar9 = (float)local_98 * fVar5 - fVar9;
  fVar10 = local_90 * fVar5 - fVar10;
  fVar8 = local_98._4_4_ * fVar5 - fVar8;
  local_a8 = CONCAT44(fVar8,fVar9);
  fVar5 = fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
  if (fVar5 == 1.0) {
    *(undefined8 *)param_2 = local_a8;
    param_2[2] = fVar10;
  }
  else if (1e-08 <= fVar5) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    *param_2 = fVar9 * fVar6;
    param_2[1] = fVar8 * fVar6;
    param_2[2] = fVar10 * fVar6;
  }
  else {
    *(undefined8 *)param_2 = _DAT_1468b5d90;
    param_2[2] = fVar6;
  }
  return param_2;
}



// FUNCTION 140afdab0 FUN_140afdab0 body=1010 status=ok
// SIG undefined FUN_140afdab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140afdab0(longlong *param_1,char param_2)

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
  undefined1 auStack_178 [32];
  uint local_158;
  undefined8 *local_150;
  undefined1 *local_148;
  char local_138;
  longlong local_130;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined8 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [40];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  longlong local_70;
  undefined8 local_68;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar1 = param_1[0x9b];
  local_138 = param_2;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  lVar9 = 0;
  lVar8 = lVar9;
  if ((lVar1 != 0) && (lVar6 = *(longlong *)(lVar1 + 0x508), lVar6 != 0)) {
    lVar5 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar9 = *(longlong *)(lVar6 + 0x70);
      lVar8 = lVar6;
    }
  }
  if ((((lVar4 != 0) && (lVar1 != 0)) && (lVar8 != 0)) &&
     ((lVar9 != 0 && (cVar3 = FUN_142480f40(lVar9,local_e8), cVar3 != '\0')))) {
    local_150 = (undefined8 *)CONCAT71(local_150._1_7_,1);
    local_158 = local_158 & 0xffffff00;
    cVar3 = FUN_14244a240(lVar1,local_e8,&local_120,&local_108);
    if (cVar3 != '\0') {
      local_b0 = 0;
      local_70 = 0;
      local_f0 = local_118 + local_100 * DAT_146296588;
      local_68 = 0;
      local_f8 = local_108 * DAT_146296588 + local_120;
      local_f4 = local_11c + local_104 * DAT_146296588;
      local_50 = 0;
      local_48 = 0;
      local_a8 = 0x10000;
      local_98 = 0;
      local_a0 = 0;
      local_b8 = 0;
      local_a4 = 0;
      local_94 = 0x101;
      local_9c = 0;
      local_a2 = 0;
      local_110 = 0;
      FCollisionQueryParams::AddIgnoredActor(&local_b8,*(undefined8 *)(lVar1 + 0x848));
      FUN_1426d3dd0(local_e0);
      FUN_1426ea8d0(local_e0,1);
      local_148 = local_e0;
      local_130 = 0;
      local_150 = &local_b8;
      local_128 = 0;
      local_158 = 0xf;
      UWorld::LineTraceMultiByChannel(lVar4,&local_130,&local_120,&local_f8);
      lVar9 = (longlong)(int)local_128 * 0x90 + local_130;
      if (local_130 != lVar9) {
        lVar8 = local_130 + 0x74;
        lVar4 = local_130;
        do {
          lVar6 = FWeakObjectPtr::Get(lVar8 + -8);
          if (lVar6 != 0) {
            lVar5 = FUN_1414b9a30();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) && (*(longlong *)(lVar6 + 0x4d8) == lVar1)) {
              if (local_138 != '\0') {
                lVar6 = FWeakObjectPtr::Get(lVar8);
                if (lVar6 == 0) {
LAB_140afdd6c:
                  lVar6 = 0;
                }
                else {
                  lVar5 = FUN_142a232e0();
                  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (!bVar2) goto LAB_140afdd6c;
                }
                lVar5 = param_1[0xa7];
                lVar7 = (longlong)(int)param_1[0xa8] * 0x88 + lVar5;
                for (; lVar5 != lVar7; lVar5 = lVar5 + 0x88) {
                  if (*(longlong *)(lVar5 + 0x50) == lVar6) goto LAB_140afde38;
                }
              }
              lVar6 = FWeakObjectPtr::Get(lVar8);
              if (lVar6 != 0) {
                lVar5 = FUN_14290f330();
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  lVar5 = param_1[0xa7];
                  lVar7 = (longlong)(int)param_1[0xa8] * 0x88 + lVar5;
                  for (; lVar5 != lVar7; lVar5 = lVar5 + 0x88) {
                    if (*(longlong *)(lVar5 + 0x60) == lVar6) goto LAB_140afde38;
                  }
                }
              }
            }
          }
          lVar4 = lVar4 + 0x90;
          lVar8 = lVar8 + 0x90;
        } while (lVar4 != lVar9);
      }
      lVar5 = 0;
LAB_140afde38:
      if (local_130 != 0) {
        FMemory::Free(local_130);
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_70 == 0) {
        return lVar5;
      }
      FMemory::Free();
      return lVar5;
    }
  }
  return 0;
}



// FUNCTION 140afdeb0 FUN_140afdeb0 body=59 status=ok
// SIG undefined FUN_140afdeb0(void)

byte FUN_140afdeb0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = AArchVisCharacter::StaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (lVar2 != 0) {
    return *(byte *)(lVar2 + 0xba) >> 2 & 1;
  }
  return 0;
}



// FUNCTION 140afdef0 FUN_140afdef0 body=102 status=ok
// SIG undefined FUN_140afdef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140afdef0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + -0x330);
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = local_10;
  return param_2;
}



// FUNCTION 140afdf60 FUN_140afdf60 body=318 status=ok
// SIG undefined FUN_140afdf60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140afdf60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_48 [32];
  uint local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_1 + -0x498);
  uVar5 = FUN_142dfdf30();
  plVar6 = (longlong *)(**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 1;
  }
  if (((*(byte *)(param_1 + 0x66) & 1) != 0) &&
     (lVar7 = (**(code **)(*plVar1 + 0x148))(plVar1), lVar7 != 0)) {
    uVar5 = (**(code **)(*plVar1 + 0x148))(plVar1);
    lVar7 = UWorld::GetGameState<APVPGameState>(uVar5);
    if ((lVar7 != 0) && (param_2 != 0)) {
      lVar2 = *(longlong *)(param_2 + 0x118);
      if (lVar2 != 0) {
        lVar8 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) &&
           (iVar4 = (**(code **)(*(longlong *)(lVar2 + 0x8b0) + 0x20))
                              ((longlong *)(lVar2 + 0x8b0),plVar1), iVar4 == 0)) goto LAB_140afe089;
      }
      FUN_140cd8d10(lVar7,&local_28,param_2,plVar6);
      if (local_24 != '\0') {
        return (ulonglong)local_28;
      }
    }
  }
LAB_140afe089:
  uVar9 = (**(code **)(*plVar6 + 0x408))(plVar6);
  return uVar9;
}



// FUNCTION 140afe0a0 FUN_140afe0a0 body=292 status=ok
// SIG undefined FUN_140afe0a0(void)

undefined8 FUN_140afe0a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  bVar6 = *(longlong *)(param_1 + 0x58) == 0;
  if (bVar6) {
    uVar5 = (**(code **)(*(longlong *)(param_1 + -0x498) + 0x5e0))
                      ((longlong *)(param_1 + -0x498),local_48);
    uVar5 = FText::FromString(local_38,uVar5);
  }
  else {
    uVar5 = FUN_142dd0500(*(longlong *)(param_1 + 0x58),local_20);
  }
  FText::FText(param_2,uVar5);
  if (bVar6) {
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
  }
  if (bVar6) {
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar6) && (local_18 != (longlong *)0x0)) {
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
  return param_2;
}



// FUNCTION 140afe1e0 GetXRTrackingSystem body=5 status=ok
// SIG undefined GetXRTrackingSystem(void)

undefined8 FARSupportInterface::GetXRTrackingSystem(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}


