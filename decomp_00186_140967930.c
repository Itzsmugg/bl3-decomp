// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140967930 FUN_140967930 body=204 status=ok
// SIG undefined FUN_140967930(void)

void FUN_140967930(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)(*param_1 + 0x20 + (longlong)param_2 * 0x38);
    iVar3 = param_3;
    do {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        FUN_1426e7010(lVar1);
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      plVar4 = plVar4 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar2 = (iVar3 - param_2) - param_3;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x38),
                 (void *)((longlong)(param_2 + param_3) * 0x38 + *param_1),(longlong)iVar2 * 0x38);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140967a00 FUN_140967a00 body=767 status=ok
// SIG undefined FUN_140967a00(void)

void FUN_140967a00(longlong param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  void *_Memory;
  int iVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar6 = FWeakObjectPtr::Get(param_2);
  plVar1 = (longlong *)(param_1 + 8);
  _Memory = *(void **)(lVar6 + 0x2a0);
  iVar5 = TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultAllocator>::Find
                    (plVar1,param_2);
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 != 0) {
    iVar11 = 0;
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(*plVar1,param_2);
    bVar12 = cVar3 == '\0';
    iVar10 = 0;
    do {
      iVar2 = iVar10;
      do {
        iVar2 = iVar2 + 1;
        if (iVar8 <= iVar2) break;
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*plVar1 + (longlong)iVar2 * 8,param_2);
      } while (bVar12 == (cVar3 == '\0'));
      if (bVar12 != false) {
        if (iVar11 != iVar10) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar11 * 8),
                     (void *)(*plVar1 + (longlong)iVar10 * 8),(longlong)(iVar2 - iVar10) << 3);
        }
        iVar11 = iVar11 + (iVar2 - iVar10);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar10 = iVar2;
    } while (iVar2 < iVar8);
    *(int *)(param_1 + 0x10) = iVar11;
  }
  lVar6 = (longlong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar10 = 0;
    bVar12 = (void *)**(undefined8 **)(param_1 + 0x18) != _Memory;
    lVar9 = 0;
    iVar8 = 0;
    do {
      lVar9 = lVar9 + 1;
      iVar11 = iVar8 + 1;
      if (lVar9 < lVar6) {
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8);
        do {
          if (bVar12 != ((void *)*puVar7 != _Memory)) break;
          iVar11 = iVar11 + 1;
          lVar9 = lVar9 + 1;
          puVar7 = puVar7 + 1;
        } while (lVar9 < lVar6);
      }
      if (bVar12 != false) {
        if (iVar10 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar10 * 8),
                     (void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8),
                     (longlong)(iVar11 - iVar8) << 3);
        }
        iVar10 = iVar10 + (iVar11 - iVar8);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar8 = iVar11;
    } while (lVar9 < lVar6);
    *(int *)(param_1 + 0x20) = iVar10;
  }
  lVar6 = (longlong)iVar5;
  FMemory::operator_delete(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar6 * 0x10));
  iVar8 = *(int *)(param_1 + 0x30);
  iVar10 = (iVar8 - iVar5) + -1;
  if (iVar10 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x28) + lVar6 * 0x10),
               (void *)((longlong)(iVar5 + 1) * 0x10 + *(longlong *)(param_1 + 0x28)),
               (longlong)iVar10 << 4);
    iVar8 = *(int *)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x30) = iVar8 + -1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x28);
  FMemory::operator_delete(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar6 * 0x10));
  iVar8 = *(int *)(param_1 + 0x40);
  iVar10 = (iVar8 - iVar5) + -1;
  if (iVar10 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x38) + lVar6 * 0x10),
               (void *)((longlong)(iVar5 + 1) * 0x10 + *(longlong *)(param_1 + 0x38)),
               (longlong)iVar10 << 4);
    iVar8 = *(int *)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x40) = iVar8 + -1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x38);
  FUN_140967820(param_1 + 0x58,iVar5,1,1);
  if (_Memory == *(void **)(param_1 + 0x98)) {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  cVar3 = *(char *)((longlong)_Memory + 0xad);
  if (cVar3 == '\0') {
    physx::PxVehicleWheels::free(_Memory);
  }
  else if (cVar3 == '\x01') {
    physx::PxVehicleWheels::free(_Memory);
  }
  else if (cVar3 == '\x02') {
    physx::PxVehicleWheels::free(_Memory);
  }
  else if (cVar3 == '\x03') {
    physx::PxVehicleWheels::free(_Memory);
  }
                    /* WARNING: Could not recover jumptable at 0x000140967cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 140967d00 FUN_140967d00 body=467 status=ok
// SIG undefined FUN_140967d00(void)

void FUN_140967d00(longlong param_1,float *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  short sVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_38;
  undefined4 local_30;
  float local_28;
  float local_24;
  float local_20;
  
  plVar2 = *(longlong **)(param_1 + 0x180);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*plVar2 + 0x6d0))(plVar2,0,1);
    plVar2 = *(longlong **)(lVar1 + 0x110);
    plVar4 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar1 + 0x118);
    }
    if (plVar4 != (longlong *)0x0) {
      if (plVar4 == plVar2) {
        sVar3 = *(short *)(lVar1 + 6);
      }
      else {
        sVar3 = *(short *)(lVar1 + 8);
      }
      plVar2 = (longlong *)FUN_1426e2550((int)sVar3);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x358))
                  (plVar2,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      plVar5 = (longlong *)0x0;
      if ((short)plVar4[1] == 6) {
        plVar5 = plVar4;
      }
      if (plVar5 != (longlong *)0x0) {
        if (*(float *)(param_1 + 0x448) == -3.4028235e+38) {
          (**(code **)(*plVar5 + 0x118))(plVar5,&local_38);
          *(undefined8 *)(param_1 + 0x448) = local_38;
          *(undefined4 *)(param_1 + 0x450) = local_30;
          *(float *)(param_1 + 0x448) = *(float *)(param_1 + 0x448) * *(float *)(param_1 + 0x25c);
          *(float *)(param_1 + 0x44c) = *(float *)(param_1 + 0x260) * *(float *)(param_1 + 0x44c);
          *(float *)(param_1 + 0x450) = *(float *)(param_1 + 0x264) * *(float *)(param_1 + 0x450);
        }
        local_28 = *param_2 * *(float *)(param_1 + 0x448);
        local_24 = param_2[1] * *(float *)(param_1 + 0x44c);
        local_20 = param_2[2] * *(float *)(param_1 + 0x450);
        *(float *)(param_1 + 0x448) = local_28;
        *(float *)(param_1 + 0x44c) = local_24;
        *(float *)(param_1 + 0x450) = local_20;
        (**(code **)(*plVar5 + 0x110))(plVar5,&local_28);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x360))(plVar2);
      }
    }
  }
  return;
}



// FUNCTION 140967ee0 FUN_140967ee0 body=315 status=ok
// SIG undefined FUN_140967ee0(void)

void FUN_140967ee0(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  
  FUN_1423760b0();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if (iVar2 < 0xe) {
    *(byte *)(param_1 + 0x218) = *(byte *)(param_1 + 0x218) | 1;
  }
  bVar1 = *(byte *)(param_2 + 0x28);
  if ((bVar1 & 1) != 0) {
    if (*(int *)(param_2 + 0x40) < 0x164) {
      if (*(float *)(param_1 + 0x4d0) == 5729.5776) {
        fVar3 = 5729.5776;
      }
      else {
        fVar3 = *(float *)(param_1 + 0x4d0) * 9.549296;
      }
      *(float *)(param_1 + 0x4d0) = fVar3;
      bVar1 = *(byte *)(param_2 + 0x28);
    }
    if (((bVar1 & 1) != 0) && (*(int *)(param_2 + 0x40) < 0x168)) {
      if (*(float *)(param_1 + 0x4d8) != 0.15) {
        *(float *)(param_1 + 0x4d8) = *(float *)(param_1 + 0x4d8) * 0.0001;
      }
      if (*(float *)(param_1 + 0x4e0) != 0.35) {
        *(float *)(param_1 + 0x4e0) = *(float *)(param_1 + 0x4e0) * 0.0001;
      }
      if (*(float *)(param_1 + 0x4dc) != 2.0) {
        *(float *)(param_1 + 0x4dc) = *(float *)(param_1 + 0x4dc) * 0.0001;
      }
      if (*(float *)(param_1 + 0x4d4) != 1.0) {
        *(float *)(param_1 + 0x4d4) = *(float *)(param_1 + 0x4d4) * 0.0001;
      }
      if (*(float *)(param_1 + 0x530) != 10.0) {
        *(float *)(param_1 + 0x530) = *(float *)(param_1 + 0x530) * 0.0001;
      }
    }
  }
  return;
}



// FUNCTION 140968020 FUN_140968020 body=74 status=ok
// SIG undefined FUN_140968020(void)

void FUN_140968020(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_1423760b0();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if (iVar1 < 0xe) {
    *(byte *)(param_1 + 0x218) = *(byte *)(param_1 + 0x218) | 1;
  }
  return;
}



// FUNCTION 140968120 FUN_140968120 body=45 status=ok
// SIG undefined FUN_140968120(void)

void FUN_140968120(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 != '\0') {
    FUN_142dafbc0();
    return;
  }
  FUN_142dbb5d0(param_1 + 0x388,local_res18);
  return;
}



// FUNCTION 140968150 FUN_140968150 body=118 status=ok
// SIG undefined FUN_140968150(void)

void FUN_140968150(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 0x2b0) & 1) != (uint)param_2) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(uint *)(param_1 + 0x2b0) = *(uint *)(param_1 + 0x2b0) & 0xfffffffe | (uint)param_2;
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    if ((*(longlong *)(lVar1 + 0x158) != 0) && (param_2 != 0)) {
      UAvoidanceManager::RegisterMovementComponent
                (*(longlong *)(lVar1 + 0x158),param_1,*(undefined4 *)(param_1 + 0x2d8));
    }
  }
  return;
}



// FUNCTION 1409681d0 FUN_1409681d0 body=7 status=ok
// SIG undefined FUN_1409681d0(void)

void FUN_1409681d0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2cc) = param_2;
  return;
}



// FUNCTION 1409681e0 FUN_1409681e0 body=9 status=ok
// SIG undefined FUN_1409681e0(void)

void FUN_1409681e0(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x2cc) = *param_2;
  return;
}



// FUNCTION 1409681f0 FUN_1409681f0 body=81 status=ok
// SIG undefined FUN_1409681f0(void)

void FUN_1409681f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_142237a80(param_2,*(undefined4 *)(param_1 + 0x2c8));
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x354);
  *(undefined4 *)(param_1 + 0x36c) = param_3;
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x35c);
  return;
}



// FUNCTION 140968250 FUN_140968250 body=39 status=ok
// SIG undefined FUN_140968250(void)

void FUN_140968250(longlong param_1,float param_2)

{
  if (param_2 < -1.0) {
    *(undefined4 *)(param_1 + 0x30c) = 0xbf800000;
    return;
  }
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  *(float *)(param_1 + 0x30c) = param_2;
  return;
}



// FUNCTION 140968280 FUN_140968280 body=276 status=ok
// SIG undefined FUN_140968280(void)

void FUN_140968280(longlong param_1,float param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  if ((((lVar1 != 0) && (plVar3 = *(longlong **)(param_1 + 0x180), plVar3 != (longlong *)0x0)) &&
      (-1 < param_3)) && (param_3 < *(int *)(param_1 + 0x228))) {
    lVar2 = (**(code **)(*plVar3 + 0x6d0))(plVar3,0,1);
    lVar5 = *(longlong *)(lVar2 + 0x110);
    lVar6 = lVar5;
    if (lVar5 == 0) {
      lVar6 = *(longlong *)(lVar2 + 0x118);
    }
    if (lVar6 != 0) {
      if (lVar6 == lVar5) {
        sVar4 = *(short *)(lVar2 + 6);
      }
      else {
        sVar4 = *(short *)(lVar2 + 8);
      }
      plVar3 = (longlong *)FUN_1426e2550((int)sVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x358))
                  (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      lVar5 = 0;
      if (*(short *)(lVar6 + 8) == 6) {
        lVar5 = lVar6;
      }
      if (lVar5 != 0) {
        physx::PxVehicleNoDrive::setBrakeTorque(lVar1,param_3,param_2 * 10000.0);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x360))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1409683a0 FUN_1409683a0 body=276 status=ok
// SIG undefined FUN_1409683a0(void)

void FUN_1409683a0(longlong param_1,float param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  if ((((lVar1 != 0) && (plVar3 = *(longlong **)(param_1 + 0x180), plVar3 != (longlong *)0x0)) &&
      (-1 < param_3)) && (param_3 < *(int *)(param_1 + 0x228))) {
    lVar2 = (**(code **)(*plVar3 + 0x6d0))(plVar3,0,1);
    lVar5 = *(longlong *)(lVar2 + 0x110);
    lVar6 = lVar5;
    if (lVar5 == 0) {
      lVar6 = *(longlong *)(lVar2 + 0x118);
    }
    if (lVar6 != 0) {
      if (lVar6 == lVar5) {
        sVar4 = *(short *)(lVar2 + 6);
      }
      else {
        sVar4 = *(short *)(lVar2 + 8);
      }
      plVar3 = (longlong *)FUN_1426e2550((int)sVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x358))
                  (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      lVar5 = 0;
      if (*(short *)(lVar6 + 8) == 6) {
        lVar5 = lVar6;
      }
      if (lVar5 != 0) {
        physx::PxVehicleNoDrive::setDriveTorque(lVar1,param_3,param_2 * 10000.0);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x360))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 1409684c0 FUN_1409684c0 body=20 status=ok
// SIG undefined FUN_1409684c0(void)

void FUN_1409684c0(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0xfffffffb;
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | (uint)param_2 << 2;
  return;
}



// FUNCTION 1409684e0 FUN_1409684e0 body=19 status=ok
// SIG undefined FUN_1409684e0(void)

void FUN_1409684e0(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0xfffffffd;
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | (uint)param_2 * 2;
  return;
}



// FUNCTION 140968500 SetNumPieces body=7 status=ok
// SIG undefined SetNumPieces(void)

void SCircularThrobber::SetNumPieces(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2d0) = param_2;
  return;
}



// FUNCTION 140968510 FUN_140968510 body=9 status=ok
// SIG undefined FUN_140968510(void)

void FUN_140968510(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x2d0) = *param_2;
  return;
}



// FUNCTION 140968520 UpdateWrestlerEnergy body=7 status=ok
// SIG undefined UpdateWrestlerEnergy(void)

void UWrestlerMoveAnimInstance_Code::UpdateWrestlerEnergy(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2d4) = param_2;
  return;
}



// FUNCTION 140968530 FUN_140968530 body=9 status=ok
// SIG undefined FUN_140968530(void)

void FUN_140968530(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x2d4) = *param_2;
  return;
}



// FUNCTION 140968540 FUN_140968540 body=17 status=ok
// SIG undefined FUN_140968540(void)

void FUN_140968540(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0xfffffffe;
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | (uint)param_2;
  return;
}



// FUNCTION 140968560 FUN_140968560 body=75 status=ok
// SIG undefined FUN_140968560(void)

void FUN_140968560(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x230) = param_2;
  plVar1 = *(longlong **)(param_1 + 0x180);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x6d0))(plVar1,0,1);
    FUN_14096b330(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 1409685c0 FUN_1409685c0 body=7 status=ok
// SIG undefined FUN_1409685c0(void)

void FUN_1409685c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  return;
}



// FUNCTION 1409685e0 FUN_1409685e0 body=531 status=ok
// SIG undefined FUN_1409685e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409685e0(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  longlong *local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  cVar5 = FUN_14044af00(param_2,0);
  if (cVar5 == '\0') {
    return;
  }
  lVar7 = FWeakObjectPtr::Get(param_2);
  if (*(longlong *)(lVar7 + 0x2a0) == 0) {
    return;
  }
  lVar7 = FWeakObjectPtr::Get(param_2);
  lVar7 = *(longlong *)(lVar7 + 0x2a0);
  if (param_3 == '\0') {
    if (lVar7 != param_1[0x13]) {
      return;
    }
    param_1[0x13] = 0;
    return;
  }
  iVar6 = TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultAllocator>::Find
                    (param_1 + 1,param_2);
  if (iVar6 == -1) {
    return;
  }
  plVar1 = param_1 + 0x12;
  lVar3 = *plVar1;
  param_1[0x13] = lVar7;
  iVar2 = *(int *)(lVar7 + 0x3c);
  if (lVar3 != 0) {
    if (iVar2 == *(int *)(lVar3 + 0x20)) {
      if (lVar3 != 0) goto LAB_1409687a1;
    }
    else {
      *plVar1 = 0;
    }
  }
  plVar4 = (longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x358))
              (plVar4,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\PhysXVehicleManager.cpp"
               ,0x2be);
  }
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  lVar7 = physx::PxVehicleTelemetryData::allocate(iVar2);
  if (plVar1 != &local_78) {
    lVar3 = *plVar1;
    *plVar1 = lVar7;
    lVar7 = 0;
    FUN_143978010(lVar3);
  }
  FUN_143978010(lVar7);
  local_80 = &local_78;
  local_88 = &local_68;
  local_78 = 0;
  local_90 = &local_5c;
  local_98 = &local_50;
  local_a0 = &local_50;
  local_a8 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_54 = 0;
  physx::PxVehicleTelemetryData::setup(*plVar1,0x3f800000,0x3f800000,0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x360))(plVar4);
  }
LAB_1409687a1:
  if (iVar6 != 0) {
    FUN_14096a9f0(param_1,0,iVar6);
  }
  return;
}



// FUNCTION 140968800 FUN_140968800 body=276 status=ok
// SIG undefined FUN_140968800(void)

void FUN_140968800(longlong param_1,float param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  if ((((lVar1 != 0) && (plVar3 = *(longlong **)(param_1 + 0x180), plVar3 != (longlong *)0x0)) &&
      (-1 < param_3)) && (param_3 < *(int *)(param_1 + 0x228))) {
    lVar2 = (**(code **)(*plVar3 + 0x6d0))(plVar3,0,1);
    lVar5 = *(longlong *)(lVar2 + 0x110);
    lVar6 = lVar5;
    if (lVar5 == 0) {
      lVar6 = *(longlong *)(lVar2 + 0x118);
    }
    if (lVar6 != 0) {
      if (lVar6 == lVar5) {
        sVar4 = *(short *)(lVar2 + 6);
      }
      else {
        sVar4 = *(short *)(lVar2 + 8);
      }
      plVar3 = (longlong *)FUN_1426e2550((int)sVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x358))
                  (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      lVar5 = 0;
      if (*(short *)(lVar6 + 8) == 6) {
        lVar5 = lVar6;
      }
      if (lVar5 != 0) {
        physx::PxVehicleNoDrive::setSteerAngle(lVar1,param_3,param_2 * 0.017453292);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x360))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 140968920 FUN_140968920 body=39 status=ok
// SIG undefined FUN_140968920(void)

void FUN_140968920(longlong param_1,float param_2)

{
  if (param_2 < -1.0) {
    *(undefined4 *)(param_1 + 0x304) = 0xbf800000;
    return;
  }
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  *(float *)(param_1 + 0x304) = param_2;
  return;
}



// FUNCTION 140968950 FUN_140968950 body=68 status=ok
// SIG undefined FUN_140968950(void)

void FUN_140968950(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else if (param_2 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0x1f;
    if (param_2 + 1 < 0x20) {
      iVar2 = param_2 + 1;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x2a8);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 0x108) != iVar2)) &&
     (*(int *)(lVar1 + 0x108) = iVar2, param_3 != '\0')) {
    *(int *)(lVar1 + 0x104) = iVar2;
  }
  return;
}



// FUNCTION 1409689a0 FUN_1409689a0 body=39 status=ok
// SIG undefined FUN_1409689a0(void)

void FUN_1409689a0(longlong param_1,float param_2)

{
  if (param_2 < -1.0) {
    *(undefined4 *)(param_1 + 0x308) = 0xbf800000;
    return;
  }
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  *(float *)(param_1 + 0x308) = param_2;
  return;
}



// FUNCTION 1409689d0 FUN_1409689d0 body=188 status=ok
// SIG undefined FUN_1409689d0(void)

void FUN_1409689d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142378a50();
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x118), lVar3 != 0)) {
    lVar2 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140968a33;
  }
  lVar3 = 0;
LAB_140968a33:
  *(longlong *)(param_1 + 0x208) = lVar3;
  if (param_2 != 0) {
    lVar3 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(byte *)(param_2 + 0xb1a) = *(byte *)(param_2 + 0xb1a) | 1;
    }
  }
  return;
}



// FUNCTION 140968a90 FUN_140968a90 body=19 status=ok
// SIG undefined FUN_140968a90(void)

void FUN_140968a90(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x2a8) + 0x100) = param_2;
  }
  return;
}



// FUNCTION 140968ab0 FUN_140968ab0 body=319 status=ok
// SIG undefined FUN_140968ab0(void)

void FUN_140968ab0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint *puVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 local_res8;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined8 local_48;
  ulonglong local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  
  uVar3 = (**(code **)(*(longlong *)param_1[0x23] + 0x6b8))();
  local_res8 = 0;
  puVar4 = (uint *)(**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  local_res8 = CONCAT71(local_res8._1_7_,6);
  uVar1 = *puVar4;
  local_40 = 0;
  local_48 = 0;
  uVar2 = *(undefined4 *)(param_1[0x23] + 0xc);
  FUN_1422ffde0(&local_58,&local_res8,uVar3,param_3);
  local_48 = CONCAT44(local_58,uVar2);
  local_40 = CONCAT44(local_50,local_54) | 0x300000000;
  (**(code **)(*param_2 + 0xa8))(param_2,&local_48);
  local_res8 = 0;
  lVar5 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar5 == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)(lVar5 + 0x10) & 1;
  }
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  local_res8 = CONCAT71(local_res8._1_7_,6);
  FUN_1422ffde0(&local_58,&local_res8,uVar3,param_4);
  if (bVar6 != 0) {
    local_50 = local_50 | 4;
  }
  local_38 = uVar1 & 0xffff;
  local_2c = local_50 | 0x2b;
  local_34 = local_58;
  local_30 = uVar2;
  (**(code **)(*param_2 + 0x98))(param_2,&local_38);
  return;
}



// FUNCTION 140968bf0 FUN_140968bf0 body=374 status=ok
// SIG undefined FUN_140968bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140968bf0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  lVar7 = param_1[4];
  param_1[0x166] = param_2;
  if (lVar7 != 0) {
    lVar6 = FUN_142a07000();
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_1423b2d70(param_1[4]);
    }
  }
  lVar7 = param_1[0x72];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar7;
  }
  *(longlong *)(lVar7 + 0x6c0) = param_2;
  plVar1 = (longlong *)(lVar7 + 0x6c8);
  iVar2 = *(int *)(param_2 + 0x228);
  uVar10 = 0;
  *(undefined4 *)(lVar7 + 0x6d0) = 0;
  if (*(int *)(lVar7 + 0x6d4) != iVar2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1);
  }
  if (0 < iVar2) {
    iVar3 = *(int *)(lVar7 + 0x6d0);
    iVar5 = iVar3 + iVar2;
    *(int *)(lVar7 + 0x6d0) = iVar5;
    if (*(int *)(lVar7 + 0x6d4) < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar3 * 0x20 + *plVar1),0,(longlong)iVar2 << 5)
    ;
    uVar11 = uVar10;
    uVar12 = uVar10;
    if (0 < *(int *)(lVar7 + 0x6d0)) {
      do {
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        puVar8 = (undefined8 *)(*plVar1 + uVar12);
        *puVar8 = *(undefined8 *)(uVar11 + 8 + *(longlong *)(param_2 + 0x220));
        *(undefined8 *)((longlong)puVar8 + 0x14) = _DAT_1468b5d90;
        *(undefined4 *)((longlong)puVar8 + 0x1c) = DAT_1468b5d98;
        puVar8[1] = DAT_1468b5da0;
        *(undefined4 *)(puVar8 + 2) = DAT_1468b5da8;
        uVar11 = uVar11 + 0x38;
        uVar12 = uVar12 + 0x20;
      } while ((int)uVar9 < *(int *)(lVar7 + 0x6d0));
    }
  }
  return;
}



// FUNCTION 140968d70 FUN_140968d70 body=1088 status=ok
// SIG undefined FUN_140968d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140968d70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  float local_298 [4];
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280 [30];
  undefined4 local_208;
  int local_204;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 local_188 [4];
  undefined4 local_184;
  undefined4 auStack_180 [30];
  undefined4 local_108;
  undefined4 auStack_100 [30];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  lVar12 = 0;
  local_2a0 = 0;
  switch(*(undefined1 *)(param_1 + 0x4e8)) {
  case 1:
    local_2a0 = 1;
    break;
  case 2:
    local_2a0 = 2;
    break;
  case 3:
    local_2a0 = 3;
    break;
  case 4:
    local_2a0 = 4;
    break;
  case 5:
    local_2a0 = 5;
  }
  local_2b8 = *(undefined8 *)(param_1 + 0x4ec);
  uStack_2b0 = *(undefined8 *)(param_1 + 0x4f4);
  local_2a4 = *(undefined4 *)(param_1 + 0x500);
  local_2a8 = *(undefined4 *)(param_1 + 0x4fc);
  physx::PxVehicleDriveSimData4W::setDiffData(param_3,&local_2b8);
  local_1a8 = 0x43fa00003f800000;
  uStack_1a0 = 0x3e19999a44160000;
  local_1f8 = 0x3f4ccccd00000000;
  uStack_1f0 = 0x3f8000003ea8f5c3;
  local_194 = 0x3eb33333;
  local_18c = 0x3ada740e;
  local_1e4 = 0x3f4ccccd;
  local_198 = 0x40000000;
  local_1e8 = 0x3f800000;
  local_1b8 = 3;
  local_190 = 0x3f800000;
  GetVehicleEngineSetup(param_1 + 0x458,&local_1f8);
  physx::PxVehicleDriveSimData::setEngineData(param_3,&local_1f8);
  local_298[0] = *(float *)(param_1 + 0x530) * 10000.0;
  local_298[1] = 1.4013e-45;
  local_298[2] = 7.00649e-45;
  physx::PxVehicleDriveSimData::setClutchData(param_3,local_298);
  pfVar8 = (float *)physx::PxVehicleWheelsSimData::getWheelCentreOffset(param_2,0);
  fVar1 = *pfVar8;
  fVar2 = pfVar8[1];
  lVar9 = physx::PxVehicleWheelsSimData::getWheelCentreOffset(param_2,1);
  fVar3 = *(float *)(lVar9 + 4);
  pfVar8 = (float *)physx::PxVehicleWheelsSimData::getWheelCentreOffset(param_2,2);
  fVar4 = *pfVar8;
  fVar5 = pfVar8[1];
  lVar9 = physx::PxVehicleWheelsSimData::getWheelCentreOffset(param_2,3);
  local_2c8 = *(undefined4 *)(param_1 + 0x5b0);
  local_2bc = ABS(fVar1 - fVar4);
  local_2c4 = ABS(fVar3 - fVar2);
  local_2c0 = ABS(*(float *)(lVar9 + 4) - fVar5);
  physx::PxVehicleDriveSimData4W::setAckermannGeometryData(param_3,&local_2c8);
  local_284 = 0;
  local_280[3] = 0x3f8ccccd;
  local_280[2] = 0x3fc00000;
  local_280[0] = 0x40800000;
  local_280[1] = 0x40000000;
  local_280[4] = 0x3f800000;
  iVar6 = *(int *)(param_1 + 0x520);
  lVar13 = (longlong)iVar6;
  local_200 = *(undefined4 *)(param_1 + 0x50c);
  local_288 = *(undefined4 *)(param_1 + 0x528);
  puVar10 = local_280 + 5;
  for (lVar9 = 0x19; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  lVar9 = lVar12;
  if (3 < lVar13) {
    puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + 0x18);
    do {
      local_280[lVar9] = puVar10[-6];
      local_280[lVar9 + 1] = puVar10[-3];
      local_280[lVar9 + 2] = *puVar10;
      local_280[lVar9 + 3] = puVar10[3];
      lVar9 = lVar9 + 4;
      puVar10 = puVar10 + 0xc;
    } while (lVar9 < lVar13 + -3);
  }
  if (lVar9 < lVar13) {
    puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + lVar9 * 0xc);
    do {
      uVar7 = *puVar10;
      puVar10 = puVar10 + 3;
      local_280[lVar9] = uVar7;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar13);
  }
  local_208 = *(undefined4 *)(param_1 + 0x514);
  local_204 = iVar6 + 2;
  physx::PxVehicleDriveSimData::setGearsData(param_3,&local_288);
  physx::PxVehicleAutoBoxData::PxVehicleAutoBoxData(local_188);
  lVar9 = (longlong)*(int *)(param_1 + 0x520);
  if (3 < lVar9) {
    puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + 4);
    puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + 0x1c);
    do {
      auStack_180[lVar12] = puVar10[1];
      auStack_100[lVar12] = *puVar10;
      auStack_180[lVar12 + 1] = puVar10[4];
      auStack_100[lVar12 + 1] = puVar10[3];
      auStack_180[lVar12 + 2] = puVar11[1];
      auStack_100[lVar12 + 2] = *puVar11;
      auStack_180[lVar12 + 3] = puVar11[4];
      auStack_100[lVar12 + 3] = puVar11[3];
      lVar12 = lVar12 + 4;
      puVar10 = puVar10 + 0xc;
      puVar11 = puVar11 + 0xc;
    } while (lVar12 < lVar9 + -3);
  }
  if (lVar12 < lVar9) {
    puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + (lVar12 * 3 + 1) * 4);
    do {
      auStack_180[lVar12] = puVar10[1];
      auStack_100[lVar12] = *puVar10;
      lVar12 = lVar12 + 1;
      puVar10 = puVar10 + 3;
    } while (lVar12 < lVar9);
  }
  local_184 = *(undefined4 *)(param_1 + 0x52c);
  local_108 = *(undefined4 *)(param_1 + 0x510);
  physx::PxVehicleDriveSimData::setAutoBoxData(param_3,local_188);
  return;
}



// FUNCTION 1409691d0 FUN_1409691d0 body=611 status=ok
// SIG undefined FUN_1409691d0(void)

void FUN_1409691d0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
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
          goto LAB_140969387;
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
LAB_140969387:
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



// FUNCTION 140969440 FUN_140969440 body=182 status=ok
// SIG undefined FUN_140969440(void)

void FUN_140969440(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_1[0x30] != 0) {
    iVar1 = (int)param_1[0x45];
    iVar4 = 0;
    if (iVar1 == 0) {
      param_1[0x54] = 0;
      param_1[0x55] = 0;
      return;
    }
    if (0 < iVar1) {
      plVar3 = (longlong *)(param_1[0x44] + 8);
      do {
        if (*plVar3 == 0) {
          return;
        }
        iVar4 = iVar4 + 1;
        plVar3 = plVar3 + 7;
      } while (iVar4 < iVar1);
    }
    (**(code **)(*param_1 + 0x658))(param_1);
    (**(code **)(*param_1 + 0x660))(param_1);
    uVar2 = physx::PxVehicleWheelsSimData::allocate((int)param_1[0x45]);
    (**(code **)(*param_1 + 0x670))(param_1,uVar2);
    (**(code **)(*param_1 + 0x648))(param_1,uVar2);
  }
  return;
}



// FUNCTION 140969500 FUN_140969500 body=272 status=ok
// SIG undefined FUN_140969500(void)

void FUN_140969500(longlong param_1,void *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = physx::PxVehicleNoDrive::allocate(*(undefined4 *)(param_1 + 0x228));
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                    (*(longlong **)(param_1 + 0x180),0,1);
  lVar6 = *(longlong *)(lVar2 + 0x110);
  lVar5 = lVar6;
  if (lVar6 == 0) {
    lVar5 = *(longlong *)(lVar2 + 0x118);
  }
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x2a0) = uVar1;
  }
  else {
    if (lVar5 == lVar6) {
      sVar4 = *(short *)(lVar2 + 6);
    }
    else {
      sVar4 = *(short *)(lVar2 + 8);
    }
    plVar3 = (longlong *)FUN_1426e2550((int)sVar4);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x358))
                (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                 0x136);
    }
    lVar6 = 0;
    if (*(short *)(lVar5 + 8) == 6) {
      lVar6 = lVar5;
    }
    if (lVar6 != 0) {
      physx::PxVehicleNoDrive::setup(uVar1,DAT_146b08400,lVar6,param_2);
      physx::PxVehicleNoDrive::setToRestState(uVar1);
      physx::PxVehicleWheelsSimData::free(param_2);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x360))(plVar3);
    }
    *(undefined8 *)(param_1 + 0x2a0) = uVar1;
  }
  return;
}



// FUNCTION 140969610 FUN_140969610 body=665 status=ok
// SIG undefined FUN_140969610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140969610(longlong param_1,void *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auStack_2b8 [32];
  undefined1 *local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined1 local_278 [112];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec [25];
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_168 [256];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if (*(int *)(param_1 + 0x228) == 4) {
    physx::PxVehicleEngineData::PxVehicleEngineData(local_278);
    local_188 = 0x40800000;
    local_180 = 0x3f000000;
    local_208 = 0xc0800000;
    uStack_200 = 0x4000000040800000;
    local_1f8 = 0x3fc00000;
    local_1f4 = 0x3f8ccccd;
    local_1f0 = 0x3f800000;
    local_184 = 7;
    puVar6 = local_1ec;
    for (lVar5 = 0x19; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_178 = 0x41200000;
    local_174 = 1;
    local_170 = 5;
    physx::PxVehicleAutoBoxData::PxVehicleAutoBoxData(local_168);
    local_68 = 0x3f0000003ee66666;
    uStack_60 = 0x3fa666663f000000;
    local_48 = 0x3f800000;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_58 = 0x3fa66666;
    local_54 = 0x3fa66666;
    FUN_140968d70(param_1,param_2,local_278);
    lVar1 = physx::PxVehicleDrive4W::allocate(4);
    local_288 = 0;
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                      (*(longlong **)(param_1 + 0x180),0,1);
    lVar5 = *(longlong *)(lVar2 + 0x110);
    lVar7 = lVar5;
    if (lVar5 == 0) {
      lVar7 = *(longlong *)(lVar2 + 0x118);
    }
    if (lVar7 != 0) {
      if (lVar7 == lVar5) {
        sVar4 = *(short *)(lVar2 + 6);
      }
      else {
        sVar4 = *(short *)(lVar2 + 8);
      }
      plVar3 = (longlong *)FUN_1426e2550((int)sVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x358))
                  (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      lVar5 = 0;
      if (*(short *)(lVar7 + 8) == 6) {
        lVar5 = lVar7;
      }
      if (lVar5 != 0) {
        local_298 = local_278;
        local_290 = 0;
        physx::PxVehicleDrive4W::setup(lVar1,DAT_146b08400,lVar5,param_2);
        physx::PxVehicleDrive::setToRestState(lVar1);
        physx::PxVehicleWheelsSimData::free(param_2);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x360))(plVar3);
      }
    }
    *(longlong *)(param_1 + 0x2a0) = lVar1;
    *(longlong *)(param_1 + 0x2a8) = lVar1;
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x100) = *(undefined1 *)(param_1 + 0x508);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  return;
}



// FUNCTION 1409698b0 FUN_1409698b0 body=667 status=ok
// SIG undefined FUN_1409698b0(void)

void FUN_1409698b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  short sVar8;
  longlong *plVar9;
  float fVar10;
  undefined8 local_res8;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar7 = *(longlong **)(param_1 + 0x180);
  if (plVar7 != (longlong *)0x0) {
    local_28 = FUN_14096b330;
    uStack_20 = 0;
    local_res8 = 0;
    lVar2 = (**(code **)(*plVar7 + 0x6d0))(plVar7,0,1);
    plVar7 = (longlong *)(lVar2 + 0x158);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_28._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_20;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_1c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_res8);
      iVar1 = *(int *)(lVar2 + 0x160);
      *(int *)(lVar2 + 0x160) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x164) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    local_res8 = 0;
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                      (*(longlong **)(param_1 + 0x180),0,1);
    FUN_14096b330(param_1,uVar6);
    local_res8 = 0;
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                      (*(longlong **)(param_1 + 0x180),0,1);
    plVar7 = *(longlong **)(lVar2 + 0x110);
    plVar3 = plVar7;
    if (plVar7 == (longlong *)0x0) {
      plVar3 = *(longlong **)(lVar2 + 0x118);
    }
    if (plVar3 != (longlong *)0x0) {
      if (plVar3 == plVar7) {
        sVar8 = *(short *)(lVar2 + 6);
      }
      else {
        sVar8 = *(short *)(lVar2 + 8);
      }
      plVar7 = (longlong *)FUN_1426e2550((int)sVar8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x358))
                  (plVar7,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      plVar9 = (longlong *)0x0;
      if ((short)plVar3[1] == 6) {
        plVar9 = plVar3;
      }
      if (plVar9 != (longlong *)0x0) {
        if (*(float *)(param_1 + 0x448) == -3.4028235e+38) {
          (**(code **)(*plVar9 + 0x118))(plVar9,&local_38);
          *(undefined8 *)(param_1 + 0x448) = local_38;
          *(undefined4 *)(param_1 + 0x450) = local_30;
          *(float *)(param_1 + 0x448) = *(float *)(param_1 + 0x25c) * *(float *)(param_1 + 0x448);
          fVar10 = *(float *)(param_1 + 0x260) * *(float *)(param_1 + 0x44c);
          *(float *)(param_1 + 0x44c) = fVar10;
          *(float *)(param_1 + 0x450) = *(float *)(param_1 + 0x264) * *(float *)(param_1 + 0x450);
        }
        else {
          fVar10 = *(float *)(param_1 + 0x44c);
        }
        uStack_20 = *(undefined4 *)(param_1 + 0x450);
        local_28 = (code *)CONCAT44(fVar10,*(undefined4 *)(param_1 + 0x448));
        (**(code **)(*plVar9 + 0x110))(plVar9,&local_28);
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))(plVar7);
      }
    }
  }
  return;
}



// FUNCTION 140969b50 FUN_140969b50 body=656 status=ok
// SIG undefined FUN_140969b50(void)

void FUN_140969b50(code *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  short sVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 local_res8;
  code *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 local_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146863e08) &&
       (_Init_thread_header(&DAT_146863e08), DAT_146863e08 == -1)) {
      DAT_146863e00 = (**(code **)(*DAT_146b08400 + 0x100))(DAT_146b08400,0,0,0);
      _Init_thread_footer(&DAT_146863e08);
    }
    FUN_1426d3dd0(local_78);
    FUN_1426d3dd0(local_38);
    (**(code **)(*(longlong *)param_1 + 0x6a8))(param_1,local_78,local_38);
    puVar3 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 0x180) + 0x4d0))();
    local_58 = *puVar3;
    uStack_54 = puVar3[1];
    uStack_50 = puVar3[2];
    uStack_4c = puVar3[3];
    local_48 = puVar3[4];
    uStack_44 = puVar3[5];
    uStack_40 = puVar3[6];
    uStack_3c = puVar3[7];
    FUN_1426db060(local_78,&local_58);
    puStack_90 = local_78;
    local_88 = local_38;
    local_res8 = 0;
    local_98 = param_1;
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                      (*(longlong **)(param_1 + 0x180),0,1);
    lVar6 = *(longlong *)(lVar4 + 0x110);
    lVar8 = lVar6;
    if (lVar6 == 0) {
      lVar8 = *(longlong *)(lVar4 + 0x118);
    }
    if (lVar8 != 0) {
      if (lVar8 == lVar6) {
        sVar7 = *(short *)(lVar4 + 6);
      }
      else {
        sVar7 = *(short *)(lVar4 + 8);
      }
      plVar5 = (longlong *)FUN_1426e2550((int)sVar7);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x358))
                  (plVar5,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      lVar6 = 0;
      if (*(short *)(lVar8 + 8) == 6) {
        lVar6 = lVar8;
      }
      if (lVar6 != 0) {
        FUN_14095e600(&local_98);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x360))(plVar5);
      }
    }
    param_1[0x444] = (code)0x1;
    local_res8 = 0;
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                      (*(longlong **)(param_1 + 0x180),0,1);
    if (lVar6 != 0) {
      plVar5 = *(longlong **)(lVar6 + 0x198);
      plVar9 = plVar5 + (longlong)*(int *)(lVar6 + 0x1a0) * 2;
      for (; plVar5 != plVar9; plVar5 = plVar5 + 2) {
        if ((((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) &&
           (cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1), cVar2 != '\0')) goto LAB_140969d49;
      }
      local_98 = FUN_1409665d0;
      puStack_90 = (undefined1 *)((ulonglong)puStack_90 & 0xffffffff00000000);
      FUN_140722860((longlong *)(lVar6 + 0x198),&local_res8,param_1,&local_98);
    }
LAB_140969d49:
    local_res8 = 0;
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                      (*(longlong **)(param_1 + 0x180),0,1);
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x10) = *(byte *)(lVar6 + 0x10) | 5;
      FUN_1426b0480(lVar6);
    }
  }
  return;
}



// FUNCTION 140969de0 FUN_140969de0 body=1522 status=ok
// SIG undefined FUN_140969de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140969de0(longlong *param_1,uint param_2,longlong param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float fStack_124;
  undefined8 uStack_120;
  ulonglong local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 local_104;
  ulonglong local_f8;
  
  if (param_3 != 0) {
    local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
    uVar12 = (ulonglong)param_2;
    if ((param_4 != (longlong *)0x0) && (param_2 - 1 < 0x20)) {
      local_188 = 0;
      local_180 = 0;
      local_178 = param_4;
      if (param_2 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (&local_188,uVar12);
      }
      lVar11 = local_188;
      if (0 < (int)param_2) {
        uVar13 = (undefined4)local_178;
        uVar10 = uVar12;
        do {
          uVar3 = local_180;
          lVar7 = (longlong)(int)local_180;
          iVar4 = (int)local_180 + 1;
          local_180 = CONCAT44(local_180._4_4_,iVar4);
          if (local_180._4_4_ < iVar4) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_188,uVar3 & 0xffffffff);
            lVar11 = local_188;
          }
          puVar5 = (undefined4 *)(lVar11 + lVar7 * 0xc);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = uVar13;
            puVar5[1] = uVar13;
            puVar5[2] = uVar13;
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      local_188 = 0;
      local_180 = 0;
      lVar7 = 0;
      if ((param_2 != 0) &&
         (TArray<float,FDefaultAllocator>::ResizeTo(&local_188,param_2), uVar10 = uVar12,
         lVar7 = local_188, 0 < (int)param_2)) {
        do {
          uVar3 = local_180;
          lVar8 = (longlong)(int)local_180;
          iVar4 = (int)local_180 + 1;
          local_180 = CONCAT44(local_180._4_4_,iVar4);
          if (local_180._4_4_ < iVar4) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_188,uVar3 & 0xffffffff);
            lVar7 = local_188;
          }
          puVar5 = (undefined4 *)(lVar8 * 4 + lVar7);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0;
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar9 = 0;
      if (param_2 != 0) {
        do {
          lVar8 = (longlong)(int)uVar9;
          puVar5 = (undefined4 *)
                   (**(code **)(*param_1 + 0x688))(param_1,&local_188,lVar8 * 0x38 + param_1[0x44]);
          uVar9 = uVar9 + 1;
          uVar13 = puVar5[1];
          uVar1 = puVar5[2];
          *(undefined4 *)(lVar11 + lVar8 * 0xc) = *puVar5;
          *(undefined4 *)(lVar11 + 4 + lVar8 * 0xc) = uVar13;
          *(undefined4 *)(lVar11 + 8 + lVar8 * 0xc) = uVar1;
        } while (uVar9 < param_2);
      }
      plVar2 = local_178;
      (**(code **)(*local_178 + 0xf0))(local_178,&local_148);
      uVar13 = (**(code **)(*plVar2 + 0x100))(plVar2);
      local_198 = 2;
      local_190 = lVar7;
      physx::computeSprungMasses(uVar12,lVar11,&local_138,uVar13);
      uVar9 = 0;
      if (param_2 != 0) {
        do {
          plVar2 = *(longlong **)((longlong)(int)uVar9 * 0x38 + param_1[0x44]);
          if (plVar2 == (longlong *)0x0) {
            lVar8 = 0;
          }
          else {
            lVar8 = plVar2[0x1f];
            if (lVar8 == 0) {
              (**(code **)(*plVar2 + 0x368))(plVar2);
              lVar8 = plVar2[0x1f];
            }
          }
          lVar6 = (longlong)(int)uVar9;
          local_108 = 0x3f800000;
          uStack_110 = 0;
          local_104 = 0x3f800000;
          fVar16 = *(float *)(lVar7 + lVar6 * 4);
          local_118 = (ulonglong)(uint)fVar16;
          uStack_120 = *(undefined8 *)(lVar8 + 0x80);
          fVar14 = *(float *)(lVar8 + 0x88) * *(float *)(lVar8 + 0x88) * fVar16;
          fVar19 = local_13c * local_13c - 0.5;
          fVar15 = local_140 * -2.0;
          _local_128 = CONCAT44(SQRT(fVar14 * fVar16) *
                                (*(float *)(lVar8 + 0x8c) + *(float *)(lVar8 + 0x8c)),fVar14);
          fVar18 = *(float *)(lVar11 + lVar6 * 0xc) - local_138;
          fVar17 = *(float *)(lVar11 + 4 + lVar6 * 0xc) - local_134;
          fVar14 = *(float *)(lVar11 + 8 + lVar6 * 0xc) - local_130;
          fVar18 = fVar18 + fVar18;
          fVar17 = fVar17 + fVar17;
          fVar14 = fVar14 + fVar14;
          local_178 = (longlong *)
                      CONCAT44(local_148 * 2.0 * local_13c + local_144 * fVar15,
                               local_148 * fVar15 - local_144 * 2.0 * local_13c);
          local_170 = local_140 * fVar15 - fVar19 * 2.0;
          fVar16 = local_144 * fVar17 + local_148 * fVar18 + local_140 * fVar14;
          local_168 = (fVar19 * fVar18 - (local_144 * fVar14 - local_140 * fVar17) * local_13c) +
                      local_148 * fVar16;
          local_164 = (fVar19 * fVar17 - (local_140 * fVar18 - local_148 * fVar14) * local_13c) +
                      local_144 * fVar16;
          local_160 = (fVar19 * fVar14 - (local_148 * fVar17 - local_144 * fVar18) * local_13c) +
                      local_140 * fVar16;
          local_150 = *(float *)(lVar8 + 0x7c);
          if ((*(byte *)(param_1 + 0x43) & 1) == 0) {
            local_150 = local_160 + local_150;
          }
          local_188 = CONCAT44(local_164,local_168);
          local_180 = CONCAT44(local_180._4_4_,local_150);
          local_158 = local_168;
          local_154 = local_164;
          physx::PxVehicleWheelsSimData::setSuspensionData(param_3,uVar9,&local_128);
          physx::PxVehicleWheelsSimData::setSuspTravelDirection(param_3,uVar9,&local_178);
          physx::PxVehicleWheelsSimData::setWheelCentreOffset(param_3,uVar9,&local_168);
          physx::PxVehicleWheelsSimData::setSuspForceAppPointOffset(param_3,uVar9,&local_158);
          physx::PxVehicleWheelsSimData::setTireForceAppPointOffset(param_3,uVar9,&local_188);
          uVar9 = uVar9 + 1;
        } while (uVar9 < param_2);
      }
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
      if (lVar11 != 0) {
        FMemory::Free(lVar11);
      }
    }
  }
  return;
}



// FUNCTION 14096a3e0 FUN_14096a3e0 body=231 status=ok
// SIG undefined FUN_14096a3e0(void)

void FUN_14096a3e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  
  plVar2 = *(longlong **)(param_1 + 0x180);
  if (plVar2 != (longlong *)0x0) {
    local_28 = &local_res10;
    local_18 = &local_res8;
    local_res8 = 0;
    local_res10 = param_2;
    local_20 = param_1;
    lVar1 = (**(code **)(*plVar2 + 0x6d0))(plVar2,0,1);
    lVar4 = *(longlong *)(lVar1 + 0x110);
    lVar5 = lVar4;
    if (lVar4 == 0) {
      lVar5 = *(longlong *)(lVar1 + 0x118);
    }
    if (lVar5 != 0) {
      if (lVar5 == lVar4) {
        sVar3 = *(short *)(lVar1 + 6);
      }
      else {
        sVar3 = *(short *)(lVar1 + 8);
      }
      plVar2 = (longlong *)FUN_1426e2550((int)sVar3);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x358))
                  (plVar2,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0x136);
      }
      lVar4 = 0;
      if (*(short *)(lVar5 + 8) == 6) {
        lVar4 = lVar5;
      }
      if (lVar4 != 0) {
        FUN_14095ec20(&local_28,lVar4);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x360))(plVar2);
      }
    }
  }
  return;
}



// FUNCTION 14096a4d0 FUN_14096a4d0 body=127 status=ok
// SIG undefined FUN_14096a4d0(void)

undefined8 FUN_14096a4d0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x17) & 1) != 0) && ((*(byte *)(param_1 + 0x19) & 0x40) == 0)) {
    lVar2 = param_1[0x24];
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
    }
    cVar1 = UWorld::IsGameWorld(lVar2);
    if ((cVar1 != '\0') && (*(longlong *)(lVar2 + 0x218) != 0)) {
      lVar2 = FPhysXVehicleManager::GetVehicleManagerFromScene();
      if (lVar2 != 0) {
        cVar1 = (**(code **)(*param_1 + 0x5b8))(param_1);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14096a550 FUN_14096a550 body=287 status=ok
// SIG undefined FUN_14096a550(void)

void FUN_14096a550(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146863de8) {
    _Init_thread_header(&DAT_146863de8);
    if (DAT_146863de8 == -1) {
      FName::FName(&DAT_146863de0,L"Vehicle",1);
      _Init_thread_footer(&DAT_146863de8);
    }
  }
  if (param_3 != 0) {
    cVar2 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146863de0);
    if (cVar2 != '\0') {
      plVar3 = (longlong *)FUN_140963bd0(param_1);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_1429e18b0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          cVar2 = (**(code **)(*plVar3 + 0x768))(plVar3);
          if (cVar2 != '\0') {
            (**(code **)(*param_1 + 0x5e0))(param_1,param_3,param_5,param_6);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14096a670 FUN_14096a670 body=209 status=ok
// SIG undefined FUN_14096a670(void)

void FUN_14096a670(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0xf8) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x10) != 0)) {
    lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,*(undefined8 *)(param_1 + 0xa0),1);
    if (lVar1 != 0) {
      plVar2 = (longlong *)
               FPhysXVehicleManager::GetVehicleManagerFromScene(*(undefined8 *)(lVar1 + 0x218));
      if (plVar2 != (longlong *)0x0) {
        plVar2 = (longlong *)*plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x358))
                    (plVar2,
                     "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\VehicleWheel.cpp"
                     ,0xa2);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x10) = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))(plVar2);
        }
        *(undefined8 *)(param_1 + 0xf8) = 0;
        return;
      }
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}



// FUNCTION 14096a750 FUN_14096a750 body=508 status=ok
// SIG undefined FUN_14096a750(void)

void FUN_14096a750(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong **pplVar13;
  undefined4 uVar14;
  longlong local_res8 [2];
  longlong *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 local_40 [40];
  
  uVar14 = (undefined4)param_2;
  uStack_50 = TMapBase<AActor_*,AActor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor_*,AActor_*,0>_>
              ::FindKey(&DAT_146289b00,param_1);
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      plVar6 = (longlong *)FWeakObjectPtr::Get(*(longlong *)(param_1 + 8) + (longlong)iVar12 * 8);
      (**(code **)(*plVar6 + 0x5d0))(plVar6,param_2);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 0x10));
  }
  plVar6 = (longlong *)(param_1 + 0x100);
  local_58 = param_1;
  local_48 = uVar14;
  if (*plVar6 != 0) {
    puVar1 = (ulonglong *)(*plVar6 + 8);
    LOCK();
    uVar7 = *puVar1;
    if (uVar7 == 0) {
      *puVar1 = 0;
      uVar7 = 0;
    }
    UNLOCK();
    if ((uVar7 >> 0x1a & 1) == 0) {
      uVar8 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar8,plVar6,0xff);
    }
  }
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_68[0] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = (undefined4)local_58;
    *(undefined4 *)((longlong)plVar9 + 0xc) = local_58._4_4_;
    *(undefined4 *)(plVar9 + 2) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)plVar9 + 0x14) = uStack_50._4_4_;
    *plVar9 = (longlong)&PTR_GetPoolName_14416c9d8;
    plVar9[3] = CONCAT44(uStack_44,local_48);
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar10;
    *plVar9 = (longlong)&PTR_GetPoolName_14416ca20;
  }
  plVar11 = (longlong *)FUN_140960ab0(local_40,0,0xff);
  lVar10 = *plVar11;
  pplVar13 = (longlong **)(lVar10 + 0x10);
  *pplVar13 = (longlong *)0x0;
  *(undefined4 *)(lVar10 + 0x18) = 0;
  if ((local_68 != pplVar13) && (plVar9 != (longlong *)0x0)) {
    (**(code **)(*plVar9 + 0x30))(plVar9,pplVar13);
  }
  *(undefined4 *)(lVar10 + 0x20) = 0xff;
  lVar10 = *plVar11;
  lVar5 = plVar11[2];
  lVar3 = plVar11[1];
  lVar4 = *(longlong *)(lVar10 + 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    UNLOCK();
    plVar9 = local_68[0];
  }
  local_res8[0] = lVar4;
  FUN_1409691d0(lVar10,lVar3,(int)lVar5,1);
  if (plVar6 == local_res8) {
    if (lVar4 == 0) goto LAB_14096a908;
    LOCK();
    piVar2 = (int *)(lVar4 + 0x48);
    iVar12 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    lVar10 = local_res8[0];
  }
  else {
    lVar10 = *plVar6;
    *plVar6 = lVar4;
    if (lVar10 == 0) goto LAB_14096a908;
    LOCK();
    piVar2 = (int *)(lVar10 + 0x48);
    iVar12 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  plVar9 = local_68[0];
  if (iVar12 == 1) {
    FGraphEvent::Recycle(lVar10);
    plVar9 = local_68[0];
  }
LAB_14096a908:
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    lVar10 = FMemory::Realloc(plVar9,0,0);
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  return;
}



// FUNCTION 14096a950 FUN_14096a950 body=64 status=ok
// SIG undefined FUN_14096a950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14096a950(longlong *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
  (**(code **)(*param_1 + 0x470))();
                    /* WARNING: Could not recover jumptable at 0x00014096a989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x518))(param_1);
  return;
}



// FUNCTION 14096a990 FUN_14096a990 body=88 status=ok
// SIG undefined FUN_14096a990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14096a990(longlong *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
  (**(code **)(*param_1 + 0x470))();
  (**(code **)(*param_1 + 0x518))(param_1);
  (**(code **)(*param_1 + 0x628))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014096a9e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x620))(param_1);
  return;
}



// FUNCTION 14096a9f0 FUN_14096a9f0 body=208 status=ok
// SIG undefined FUN_14096a9f0(void)

void FUN_14096a9f0(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 != param_3) {
    lVar6 = (longlong)param_2;
    lVar5 = (longlong)param_3;
    lVar3 = *(longlong *)(param_1 + 8);
    uVar4 = *(undefined8 *)(lVar3 + lVar6 * 8);
    *(undefined8 *)(lVar3 + lVar6 * 8) = *(undefined8 *)(lVar3 + lVar5 * 8);
    *(undefined8 *)(lVar3 + lVar5 * 8) = uVar4;
    lVar3 = *(longlong *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(lVar3 + lVar6 * 8);
    *(undefined8 *)(lVar3 + lVar6 * 8) = *(undefined8 *)(lVar3 + lVar5 * 8);
    *(undefined8 *)(lVar3 + lVar5 * 8) = uVar4;
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x10);
    puVar1 = (undefined8 *)(lVar3 + lVar6 * 0x10);
    puVar2 = (undefined8 *)(lVar3 + lVar5 * 0x10);
    *puVar1 = *(undefined8 *)(lVar3 + lVar5 * 0x10);
    *puVar2 = uVar4;
    uVar4 = puVar1[1];
    puVar1[1] = puVar2[1];
    puVar2[1] = uVar4;
    lVar3 = *(longlong *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x10);
    puVar1 = (undefined8 *)(lVar3 + lVar6 * 0x10);
    puVar2 = (undefined8 *)(lVar3 + lVar5 * 0x10);
    *puVar1 = *(undefined8 *)(lVar3 + lVar5 * 0x10);
    *puVar2 = uVar4;
    uVar4 = puVar1[1];
    puVar1[1] = puVar2[1];
    puVar2[1] = uVar4;
    FGenericPlatformMemory::MemswapGreaterThan8
              (lVar6 * 0x58 + *(longlong *)(param_1 + 0x58),
               lVar5 * 0x58 + *(longlong *)(param_1 + 0x58),0x58);
  }
  return;
}



// FUNCTION 14096aac0 FUN_14096aac0 body=189 status=ok
// SIG undefined FUN_14096aac0(void)

void FUN_14096aac0(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  undefined1 local_28 [32];
  
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xd4);
  puVar1 = (undefined8 *)FUN_140964380(*(undefined8 *)(param_1 + 0xcc),local_28);
  param_2 = 1.0 / param_2;
  *(undefined8 *)(param_1 + 0xcc) = *puVar1;
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(puVar1 + 1);
  *(ulonglong *)(param_1 + 0xe4) =
       CONCAT44((*(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0xdc)) * param_2,
                (*(float *)(param_1 + 0xcc) - *(float *)(param_1 + 0xd8)) * param_2);
  *(float *)(param_1 + 0xec) = (*(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xe0)) * param_2;
  return;
}



// FUNCTION 14096ab80 FUN_14096ab80 body=331 status=ok
// SIG undefined FUN_14096ab80(void)

void FUN_14096ab80(longlong *param_1,float param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *local_res18;
  code *local_28;
  longlong **pplStack_20;
  
  uVar5 = 0;
  lVar3 = 0;
  if (param_1[0x54] != 0) {
    pplStack_20 = &local_res18;
    local_28 = FUN_140960770;
    local_res18 = param_1;
    uVar2 = (**(code **)(*(longlong *)param_1[0x30] + 0x6d0))((longlong *)param_1[0x30],0,1);
    FUN_1426936b0(uVar2,&local_28);
    lVar3 = param_1[0x54];
  }
  if (0.0 < *(float *)((longlong)param_1 + 0x36c)) {
    *(float *)((longlong)param_1 + 0x36c) = *(float *)((longlong)param_1 + 0x36c) - param_2;
  }
  if (((lVar3 != 0) && (param_1[0x2f] != 0)) &&
     (lVar3 = *(longlong *)(param_1[0x2f] + 0x118), lVar3 != 0)) {
    lVar4 = FUN_1429d7ab0();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x638))(param_1,param_2);
    }
  }
  uVar7 = uVar5;
  if (0 < (int)param_1[0x52]) {
    do {
      (**(code **)(**(longlong **)(uVar5 + param_1[0x51]) + 0x288))
                (*(longlong **)(uVar5 + param_1[0x51]),param_2);
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < (int)param_1[0x52]);
  }
                    /* WARNING: Could not recover jumptable at 0x00014096acc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5d8))(param_1,param_2);
  return;
}



// FUNCTION 14096acd0 FUN_14096acd0 body=74 status=ok
// SIG undefined FUN_14096acd0(void)

void FUN_14096acd0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (((param_3 == 0) && (*(int *)(param_1 + 0x10) != 0)) && (*(longlong *)(param_1 + 0x100) != 0))
  {
    uVar1 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(uVar1,(longlong *)(param_1 + 0x100),0xff);
    return;
  }
  return;
}



// FUNCTION 14096ad20 FUN_14096ad20 body=1288 status=ok
// SIG undefined FUN_14096ad20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14096ad20(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  BOOL BVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 **ppuVar17;
  longlong lVar18;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 in_stack_fffffffffffffea8;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8 [2];
  undefined1 *local_d8;
  undefined4 *puStack_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int *local_b0;
  longlong *local_a8;
  longlong **local_a0;
  longlong *local_98;
  undefined4 *local_90;
  longlong *local_88;
  undefined4 *local_80;
  undefined8 **local_78;
  
  local_res20[0] = param_4;
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  }
  lVar9 = *(longlong *)(param_2 + 0x50);
  local_res10[0] = *(undefined4 *)(lVar9 + 0x790);
  plVar8 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  local_e8[0] = plVar8[0x1f];
  if (local_e8[0] == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    local_e8[0] = plVar8[0x1f];
  }
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  uVar16 = 0;
  iVar15 = 0;
  local_108 = 0;
  local_100 = 0;
  lVar9 = *(longlong *)(lVar9 + 0x148);
  if (lVar9 != 0) {
    iVar6 = *(int *)(lVar9 + 0x478);
    if (0 < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (&local_108,iVar6);
      iVar6 = *(int *)(lVar9 + 0x478);
    }
    uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
    puVar13 = *(undefined8 **)(lVar9 + 0x470);
    uVar11 = (longlong)iVar6 & 0x1fffffffffffffff;
    if (puVar13 + iVar6 < puVar13) {
      uVar11 = uVar16;
    }
    if (uVar11 != 0) {
      do {
        lVar9 = (**(code **)(*(longlong *)*puVar13 + 0x688))();
        uVar4 = local_100;
        if (lVar9 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x168);
          if (lVar9 == 0) {
            ppuVar17 = &local_d8;
            local_d8 = _DAT_1468b5d90;
            puStack_d0 = (undefined4 *)CONCAT44(puStack_d0._4_4_,DAT_1468b5d98);
          }
          else {
            ppuVar17 = (undefined1 **)&local_118;
            local_118._0_4_ = *(undefined4 *)(lVar9 + 0x220);
            local_110 = *(undefined4 *)(lVar9 + 0x228);
            local_118._4_4_ = *(undefined4 *)(lVar9 + 0x224);
          }
          lVar9 = (longlong)(int)local_100;
          iVar6 = (int)local_100 + 1;
          local_100 = CONCAT44(local_100._4_4_,iVar6);
          if (local_100._4_4_ < iVar6) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_108,uVar4 & 0xffffffff);
          }
          uVar7 = *(undefined4 *)(ppuVar17 + 1);
          *(undefined1 **)(local_108 + lVar9 * 0xc) = *ppuVar17;
          *(undefined4 *)(local_108 + 8 + lVar9 * 0xc) = uVar7;
        }
        uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
        puVar13 = puVar13 + 1;
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar11);
    }
  }
  plVar8 = (longlong *)*param_1;
  plVar12 = (longlong *)0x0;
  local_c8 = param_1;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x348))
              (plVar8,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\PhysXVehicleManager.cpp"
               ,0x422);
    plVar12 = (longlong *)*param_1;
  }
  (**(code **)(*plVar12 + 0x218))(plVar12,&local_118);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x350))(plVar8);
  }
  iVar6 = (int)param_1[2];
  if (iVar6 != 0) {
    local_f8 = (undefined8 *)0x0;
    local_ec = 0;
    local_f0 = iVar6;
    if (0 < iVar6) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    }
    uVar3 = local_110;
    uVar2 = local_118._4_4_;
    uVar1 = (undefined4)local_118;
    lVar9 = (longlong)local_f8 + 0x14;
    puVar13 = local_f8;
    iVar14 = iVar6;
    do {
      *puVar13 = 0;
      puVar13 = puVar13 + 5;
      *(undefined8 *)(lVar9 + -0xc) = 0;
      *(undefined8 *)(lVar9 + -4) = 0;
      *(undefined8 *)(lVar9 + 4) = 0;
      *(undefined4 *)(lVar9 + 0xc) = 0;
      *(undefined2 *)(lVar9 + 0x10) = 0;
      lVar9 = lVar9 + 0x28;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    local_res8[0] = 0;
    if (param_1[0x13] != 0) {
      plVar8 = (longlong *)param_1[3];
      for (plVar12 = plVar8; plVar12 != plVar8 + (int)param_1[4]; plVar12 = plVar12 + 1) {
        if (*plVar12 == param_1[0x13]) {
          uVar16 = (longlong)plVar12 - (longlong)plVar8 >> 3;
          if (1 < (int)uVar16 + 1U) {
            FUN_14096a9f0(param_1,0,uVar16 & 0xffffffff);
          }
          break;
        }
      }
      uVar10 = FWeakObjectPtr::Get(param_1[1]);
      lVar9 = param_1[0xb];
      uVar7 = FUN_14095f490(&local_c8,uVar10,lVar9,&local_108,CONCAT44(uVar7,local_res10[0]),
                            local_e8[0]);
      local_118._0_4_ = uVar1;
      local_118._4_4_ = uVar2;
      local_110 = uVar3;
      FUN_14096b530(local_res20[0],*param_1,uVar10,*(undefined8 *)param_1[3],lVar9,uVar7,local_f8,
                    &local_118,local_e8[0],param_1[5],param_1[7],param_1[0x12]);
      local_res8[0] = 1;
      iVar15 = 1;
    }
    local_b0 = local_res8;
    local_c0 = uVar1;
    local_a0 = &local_c8;
    local_bc = uVar2;
    local_98 = &local_108;
    local_b8 = uVar3;
    local_90 = local_res10;
    local_88 = local_e8;
    local_80 = local_res20;
    local_78 = &local_f8;
    puStack_d0 = &local_c0;
    local_d8 = &LAB_1409607c0;
    local_a8 = param_1;
    FUN_1406a7b10(iVar6 - iVar15,&local_d8,0);
    plVar8 = (longlong *)*param_1;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x358))
                (plVar8,
                 "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\PhysXVehicleManager.cpp"
                 ,0x465);
    }
    uVar16 = (ulonglong)local_res8[0];
    if ((longlong)uVar16 < (longlong)iVar6) {
      lVar9 = uVar16 * 0x28;
      lVar18 = (longlong)iVar6 - uVar16;
      do {
        if (*(longlong *)((longlong)local_f8 + lVar9) != 0) {
          physx::PxVehiclePostUpdates
                    ((longlong *)((longlong)local_f8 + lVar9),1,
                     param_1[3] + (longlong)(int)uVar16 * 8);
        }
        uVar16 = (ulonglong)((int)uVar16 + 1);
        lVar9 = lVar9 + 0x28;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x360))(plVar8);
    }
    if (local_f8 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  return;
}



// FUNCTION 14096b230 FUN_14096b230 body=253 status=ok
// SIG undefined FUN_14096b230(void)

void FUN_14096b230(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_38;
  float local_30;
  float local_20;
  
  if (((param_1[0x54] != 0) && (param_1[0x30] != 0)) &&
     (fVar1 = *(float *)((longlong)param_1 + 0x424), 1.0 < ABS(fVar1))) {
    FUN_142369f10(param_1[0x2f],&local_48);
    fVar2 = fVar1 * fVar1;
    if (fVar1 <= 0.0) {
      fVar2 = -fVar2;
    }
    fVar1 = *(float *)((longlong)param_1 + 0x23c) * *(float *)(param_1 + 0x47) *
            fVar2 * *(float *)((longlong)param_1 + 0x234) * 6.25e-07;
    local_30 = -local_40 * fVar1;
    *(float *)(param_1 + 0x4b) = fVar1;
    local_38 = CONCAT44(-local_44 * fVar1,-local_48 * fVar1);
    local_20 = local_30;
    (**(code **)(*param_1 + 0x6a0))(param_1,&local_38);
  }
  return;
}



// FUNCTION 14096b330 FUN_14096b330 body=373 status=ok
// SIG undefined FUN_14096b330(void)

void FUN_14096b330(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  short sVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [12];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  plVar3 = *(longlong **)(param_2 + 0x110);
  plVar6 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x118);
  }
  if (plVar6 != (longlong *)0x0) {
    if (plVar6 == plVar3) {
      sVar2 = *(short *)(param_2 + 6);
    }
    else {
      sVar2 = *(short *)(param_2 + 8);
    }
    plVar3 = (longlong *)FUN_1426e2550((int)sVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x358))
                (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                 0x136);
    }
    plVar5 = (longlong *)0x0;
    if ((short)plVar6[1] == 6) {
      plVar5 = plVar6;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0xf8))(plVar5,(int)param_1[0x46]);
      if (*(float *)(param_1 + 0x89) != -3.4028235e+38) {
        local_40 = (undefined4)param_1[0x8a];
        local_44 = *(undefined4 *)((longlong)param_1 + 0x44c);
        local_48 = *(float *)(param_1 + 0x89);
        (**(code **)(*plVar5 + 0x110))(plVar5,&local_48);
      }
      puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x690))(param_1,local_3c);
      local_30 = 0;
      uStack_28 = 0x3f80000000000000;
      local_20 = *puVar4;
      local_1c = puVar4[1];
      local_18 = puVar4[2];
      (**(code **)(*plVar5 + 0xe8))(plVar5,&local_30);
      lVar1 = param_1[0x54];
      if (lVar1 != 0) {
        (**(code **)(*param_1 + 0x668))(param_1,*(undefined4 *)(lVar1 + 0x3c),lVar1 + 0x10,plVar5);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x360))(plVar3);
    }
  }
  return;
}



// FUNCTION 14096b4c0 FUN_14096b4c0 body=112 status=ok
// SIG undefined FUN_14096b4c0(void)

void FUN_14096b4c0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_res10 [6];
  longlong local_28;
  undefined4 *local_20;
  undefined1 *local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    local_20 = local_res10;
    plStack_10 = &local_28;
    local_18 = &LAB_1409607d0;
    local_res10[0] = param_2;
    local_28 = param_1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                      (*(longlong **)(param_1 + 0x180),0,1);
    FUN_142693730(uVar1,&local_18);
  }
  return;
}



// FUNCTION 14096b530 FUN_14096b530 body=761 status=ok
// SIG undefined FUN_14096b530(void)

void FUN_14096b530(undefined4 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,int param_6,undefined8 *param_7,undefined8 param_8,
                  longlong param_9,longlong *param_10,longlong *param_11,longlong param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong local_res20;
  
  uVar1 = *(undefined4 *)(param_9 + 0x120);
  uVar2 = *(undefined4 *)(param_9 + 0x124);
  local_res20 = param_4;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x348))
              (param_2,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\PhysXVehicleManager.cpp"
               ,0x3a9);
  }
  pbVar5 = (byte *)(**(code **)(**(longlong **)(local_res20 + 0xa0) + 0x178))
                             (*(longlong **)(local_res20 + 0xa0),&param_9);
  if ((*pbVar5 & 1) == 0) {
    uVar9 = 0;
    if (param_6 == 1) {
      physx::PxVehicleSuspensionRaycasts
                (*(undefined8 *)(param_5 + 0x50),1,&local_res20,*(undefined4 *)(param_5 + 0x10),
                 *(undefined8 *)(param_5 + 8),0);
    }
    else if (param_6 == 2) {
      physx::PxVehicleSuspensionSweeps
                (*(undefined8 *)(param_5 + 0x48),1,&local_res20,*(undefined4 *)(param_5 + 0x20),
                 *(undefined8 *)(param_5 + 0x18),8,0,uVar2,uVar1);
    }
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x350))(param_2);
    }
    (**(code **)(*param_3 + 0x5c8))(param_3,param_1);
    *param_7 = *(undefined8 *)(param_5 + 0x38);
    *(undefined4 *)(param_7 + 1) = *(undefined4 *)(param_5 + 0x40);
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x348))
                (param_2,
                 "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\PhysXVehicles\\Source\\PhysXVehicles\\Private\\PhysXVehicleManager.cpp"
                 ,0x3d2);
    }
    plVar4 = param_10;
    if (param_12 == 0) {
      physx::PxVehicleUpdates(param_1,param_8,DAT_146863cd8,1,&local_res20,param_10,param_7);
    }
    else {
      physx::PxVehicleUpdateSingleVehicleAndStoreTelemetryData
                (param_1,param_8,DAT_146863cd8,local_res20,param_10,param_12);
    }
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x350))(param_2);
    }
    if ((param_6 != 0) && ((int)param_11[1] != 0)) {
      do {
        puVar7 = (undefined8 *)(*plVar4 + uVar9 * 0xa0);
        if ((*(char *)((longlong)puVar7 + 0x1c) != '\0') ||
           (*(float *)(puVar7 + 9) * *(float *)(puVar7 + 9) +
            *(float *)((longlong)puVar7 + 0x4c) * *(float *)((longlong)puVar7 + 0x4c) +
            *(float *)(puVar7 + 10) * *(float *)(puVar7 + 10) != 0.0)) {
          uVar3 = puVar7[1];
          puVar6 = (undefined8 *)(uVar9 * 0xa0 + *param_11);
          *puVar6 = *puVar7;
          puVar6[1] = uVar3;
          uVar3 = puVar7[3];
          puVar6[2] = puVar7[2];
          puVar6[3] = uVar3;
          uVar3 = puVar7[5];
          puVar6[4] = puVar7[4];
          puVar6[5] = uVar3;
          uVar3 = puVar7[7];
          puVar6[6] = puVar7[6];
          puVar6[7] = uVar3;
          uVar3 = puVar7[9];
          puVar6[8] = puVar7[8];
          puVar6[9] = uVar3;
          uVar3 = puVar7[0xb];
          puVar6[10] = puVar7[10];
          puVar6[0xb] = uVar3;
          uVar3 = puVar7[0xd];
          puVar6[0xc] = puVar7[0xc];
          puVar6[0xd] = uVar3;
          uVar3 = puVar7[0xf];
          puVar6[0xe] = puVar7[0xe];
          puVar6[0xf] = uVar3;
          uVar3 = puVar7[0x11];
          puVar6[0x10] = puVar7[0x10];
          puVar6[0x11] = uVar3;
          uVar3 = puVar7[0x13];
          puVar6[0x12] = puVar7[0x12];
          puVar6[0x13] = uVar3;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_11 + 1));
    }
  }
  else if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x350))(param_2);
  }
  return;
}



// FUNCTION 14096b830 FUN_14096b830 body=1811 status=ok
// SIG undefined FUN_14096b830(void)

void FUN_14096b830(longlong *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  plVar4 = (longlong *)FUN_140963bd0();
  if ((plVar4 == (longlong *)0x0) || (cVar1 = (**(code **)(*plVar4 + 0x768))(plVar4), cVar1 == '\0')
     ) {
    *(undefined4 *)((longlong)param_1 + 0x314) = *(undefined4 *)((longlong)param_1 + 0x2ec);
    *(int *)(param_1 + 99) = (int)param_1[0x5e];
    *(undefined4 *)((longlong)param_1 + 0x31c) = *(undefined4 *)((longlong)param_1 + 0x2f4);
    *(int *)(param_1 + 100) = (int)param_1[0x5f];
    iVar7 = *(int *)((longlong)param_1 + 0x2fc);
    if (iVar7 < 0) {
      iVar8 = 0;
    }
    else if (iVar7 == 0) {
      iVar8 = 1;
    }
    else {
      iVar8 = 0x1f;
      if (iVar7 + 1 < 0x20) {
        iVar8 = iVar7 + 1;
      }
    }
    lVar5 = param_1[0x55];
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x108) != iVar8)) {
      *(int *)(lVar5 + 0x108) = iVar8;
      *(int *)(lVar5 + 0x104) = iVar8;
    }
    if (((char)param_1[0x84] == '\0') && (cVar1 = FUN_1407c3030(param_1 + 0x71), cVar1 == '\0')) {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x421) != '\0') {
      return;
    }
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0x3f800000;
    return;
  }
  if (((*(byte *)(param_1 + 0x56) & 1) != 0) &&
     ((**(code **)(*param_1 + 0x600))(param_1,param_2), (*(byte *)(param_1 + 0x56) & 1) != 0)) {
    lVar5 = param_1[0x24];
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    lVar5 = *(longlong *)(lVar5 + 0x158);
    if ((lVar5 != 0) && ((*(byte *)(param_1 + 0x6a) & 1) == 0)) {
      UAvoidanceManager::UpdateRVO(lVar5,param_1);
      FUN_1409681f0(param_1,lVar5,*(undefined4 *)(lVar5 + 0x38));
    }
    *(uint *)(param_1 + 0x6a) = *(uint *)(param_1 + 0x6a) & 0xfffffffe;
  }
  fVar9 = (float)FUN_140960150(param_1);
  fVar12 = *(float *)((longlong)param_1 + 0x314);
  iVar8 = 0;
  iVar7 = 0;
  fVar9 = fVar9 - fVar12;
  if ((0.0 < fVar9 == 0.0 < fVar12) || ((fVar9 != 0.0 && (fVar12 == 0.0)))) {
    fVar11 = *(float *)(param_1 + 0x69);
  }
  else {
    fVar11 = *(float *)((longlong)param_1 + 0x34c);
  }
  fVar11 = fVar11 * param_2;
  fVar10 = -fVar11;
  if ((-fVar11 <= fVar9) && (fVar10 = fVar11, fVar9 <= fVar11)) {
    fVar10 = fVar9;
  }
  *(float *)((longlong)param_1 + 0x314) = fVar10 + fVar12;
  fVar9 = (float)(**(code **)(*param_1 + 0x618))(param_1);
  fVar12 = *(float *)(param_1 + 99);
  fVar9 = fVar9 - fVar12;
  if ((0.0 < fVar9 == 0.0 < fVar12) || ((fVar9 != 0.0 && (fVar12 == 0.0)))) {
    fVar11 = *(float *)(param_1 + 0x66);
  }
  else {
    fVar11 = *(float *)((longlong)param_1 + 0x334);
  }
  fVar11 = fVar11 * param_2;
  fVar10 = -fVar11;
  if ((-fVar11 <= fVar9) && (fVar10 = fVar11, fVar9 <= fVar11)) {
    fVar10 = fVar9;
  }
  *(float *)(param_1 + 99) = fVar10 + fVar12;
  if (*(char *)((longlong)param_1 + 0x421) != '\0') {
    fVar12 = 0.0;
    goto LAB_14096bb68;
  }
  if ((((char)param_1[0x84] != '\0') || (cVar1 = FUN_1407c3030(param_1 + 0x71), cVar1 != '\0')) ||
     (((char)param_1[0x49] != '\0' &&
      ((ABS(*(float *)(param_1 + 0x61)) <= 1e-08 && (iVar2 = FUN_1409649c0(param_1), iVar2 < 1))))))
  {
LAB_14096bb60:
    fVar12 = 1.0;
    goto LAB_14096bb68;
  }
  if ((char)param_1[0x48] == '\0') {
    fVar12 = ABS(*(float *)((longlong)param_1 + 0x30c));
    goto LAB_14096bb68;
  }
  fVar12 = 0.0;
  fVar9 = *(float *)((longlong)param_1 + 0x424);
  if (((param_1[0x55] == 0) ||
      ((iVar2 = *(int *)(param_1[0x55] + 0x104), iVar2 != 0 && (iVar2 == 1)))) &&
     (ABS(fVar9) < *(float *)((longlong)param_1 + 0x32c))) {
    lVar5 = param_1[0x24];
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    fVar11 = *(float *)(lVar5 + 0x7b0) + *(float *)(param_1 + 0x70);
    *(float *)(param_1 + 0x70) = fVar11;
    if (fVar11 < *(float *)((longlong)param_1 + 0x244)) goto LAB_14096bb60;
  }
  if (*(float *)(param_1 + 0x61) <= 0.0) {
    if (0.0 <= *(float *)(param_1 + 0x61)) {
      if ((fVar9 < *(float *)(param_1 + 0x65)) && (-*(float *)(param_1 + 0x65) < fVar9))
      goto LAB_14096bb04;
      fVar12 = *(float *)((longlong)param_1 + 0x324);
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
        goto LAB_14096bb68;
      }
    }
    else if (*(float *)((longlong)param_1 + 0x32c) <= fVar9 &&
             fVar9 != *(float *)((longlong)param_1 + 0x32c)) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      fVar12 = 1.0;
      goto LAB_14096bb68;
    }
  }
  else if (fVar9 < -*(float *)((longlong)param_1 + 0x32c)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
LAB_14096bb04:
    fVar12 = 1.0;
  }
  if (1.0 <= fVar12) {
    fVar12 = 1.0;
  }
LAB_14096bb68:
  fVar9 = *(float *)((longlong)param_1 + 0x31c);
  fVar12 = fVar12 - fVar9;
  if ((0.0 < fVar12 == 0.0 < fVar9) || ((fVar12 != 0.0 && (fVar9 == 0.0)))) {
    fVar11 = *(float *)(param_1 + 0x67);
  }
  else {
    fVar11 = *(float *)((longlong)param_1 + 0x33c);
  }
  fVar11 = fVar11 * param_2;
  fVar10 = -fVar11;
  if ((-fVar11 <= fVar12) && (fVar10 = fVar11, fVar12 <= fVar11)) {
    fVar10 = fVar12;
  }
  *(float *)((longlong)param_1 + 0x31c) = fVar10 + fVar9;
  fVar9 = (float)(**(code **)(*param_1 + 0x610))(param_1);
  fVar12 = *(float *)(param_1 + 100);
  fVar9 = fVar9 - fVar12;
  if ((0.0 < fVar9 == 0.0 < fVar12) || ((fVar9 != 0.0 && (fVar12 == 0.0)))) {
    fVar11 = *(float *)(param_1 + 0x68);
  }
  else {
    fVar11 = *(float *)((longlong)param_1 + 0x344);
  }
  fVar11 = fVar11 * param_2;
  fVar10 = -fVar11;
  if ((-fVar11 <= fVar9) && (fVar10 = fVar11, fVar9 <= fVar11)) {
    fVar10 = fVar9;
  }
  iVar2 = -1;
  *(float *)(param_1 + 100) = fVar10 + fVar12;
  if ((char)param_1[0x48] != '\0') {
    lVar5 = param_1[0x55];
    iVar6 = iVar7;
    if (lVar5 != 0) {
      iVar3 = *(int *)(lVar5 + 0x108);
      if (iVar3 == 0) {
        iVar8 = -1;
      }
      else if (iVar3 != 1) {
        iVar8 = iVar3 + -1;
      }
      iVar3 = *(int *)(lVar5 + 0x104);
      if (iVar3 == 0) {
        iVar6 = -1;
      }
      else if (iVar3 != 1) {
        iVar6 = iVar3 + -1;
      }
    }
    iVar3 = (**(code **)(*param_1 + 0x698))(param_1);
    if ((iVar3 != iVar6) || (iVar3 != iVar8)) {
      if (-1 < iVar3) {
        if (iVar3 == 0) {
          iVar7 = 1;
        }
        else {
          iVar7 = 0x1f;
          if (iVar3 + 1 < 0x20) {
            iVar7 = iVar3 + 1;
          }
        }
      }
      lVar5 = param_1[0x55];
      if ((lVar5 != 0) && (*(int *)(lVar5 + 0x108) != iVar7)) {
        *(int *)(lVar5 + 0x108) = iVar7;
        *(int *)(lVar5 + 0x104) = iVar7;
      }
    }
  }
  if ((*(byte *)(plVar4 + 0x83) & 1) == 0) {
    lVar5 = param_1[0x24];
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    if ((param_1[0x55] == 0) ||
       ((iVar7 = *(int *)(param_1[0x55] + 0x104), iVar7 != 0 && (iVar2 = iVar7 + -1, iVar7 == 1))))
    {
      iVar2 = 0;
    }
    fVar12 = *(float *)((longlong)param_1 + 0x314);
    fVar9 = *(float *)((longlong)param_1 + 0x31c);
    if (((((0.005 < ABS(*(float *)((longlong)param_1 + 0x42c) - fVar12)) ||
          (*(float *)(param_1 + 99) != *(float *)(param_1 + 0x86))) ||
         (fVar9 != *(float *)((longlong)param_1 + 0x434))) ||
        ((*(float *)(param_1 + 100) != *(float *)(param_1 + 0x87) ||
         (*(int *)((longlong)param_1 + 0x43c) != iVar2)))) ||
       ((0.2 < *(float *)(lVar5 + 0x790) - *(float *)(param_1 + 0x88) &&
        (((*(float *)((longlong)param_1 + 0x42c) != fVar12 ||
          (*(float *)(param_1 + 99) != *(float *)(param_1 + 0x86))) ||
         ((fVar9 != *(float *)((longlong)param_1 + 0x434) ||
          ((*(float *)(param_1 + 100) != *(float *)(param_1 + 0x87) ||
           (*(int *)((longlong)param_1 + 0x43c) != iVar2)))))))))) {
      *(float *)(param_1 + 0x88) = *(float *)(lVar5 + 0x790);
      *(undefined8 *)((longlong)param_1 + 0x42c) = *(undefined8 *)((longlong)param_1 + 0x314);
      *(undefined8 *)((longlong)param_1 + 0x434) = *(undefined8 *)((longlong)param_1 + 0x31c);
      *(int *)((longlong)param_1 + 0x43c) = iVar2;
      FUN_14096df20(param_1,*(undefined4 *)((longlong)param_1 + 0x42c),(int)param_1[0x86],
                    *(undefined4 *)((longlong)param_1 + 0x434),(int)param_1[0x87],iVar2);
    }
  }
  return;
}



// FUNCTION 14096bf50 FUN_14096bf50 body=712 status=ok
// SIG undefined FUN_14096bf50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14096bf50(void)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_6a8 [32];
  uint *local_688;
  uint local_678;
  longlong *local_670;
  longlong local_668;
  longlong lStack_660;
  uint local_658 [128];
  longlong local_458 [128];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_6a8;
  uVar5 = (**(code **)(*DAT_146b08400 + 0x110))(DAT_146b08400,local_458,0x80,0);
  uVar3 = DAT_146863d40;
  uVar7 = 0;
  if (uVar5 != 0) {
    puVar9 = local_658;
    do {
      *puVar9 = uVar7;
      puVar9 = puVar9 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  local_678 = uVar5;
  if (DAT_146863cd8 != 0) {
    FUN_143975070();
    DAT_146863cd8 = 0;
  }
  DAT_146863cd8 = physx::PxVehicleDrivableSurfaceToTireFrictionPairs::allocate(uVar3,uVar5);
  local_688 = local_658;
  physx::PxVehicleDrivableSurfaceToTireFrictionPairs::setup(DAT_146863cd8,uVar3,uVar5,local_458);
  uVar7 = 0;
  if (uVar5 != 0) {
    local_670 = local_458;
    uVar12 = (ulonglong)_tls_index;
    do {
      pvVar4 = ThreadLocalStoragePointer;
      piVar1 = *(int **)(*local_670 + 0x10);
      if ((((piVar1 != (int *)0x0) && (*piVar1 == 2)) &&
          (lVar2 = *(longlong *)(piVar1 + 2), lVar2 != 0)) && (uVar11 = 0, uVar3 != 0)) {
        do {
          lVar6 = FWeakObjectPtr::Get(DAT_146863d38 + (longlong)(int)uVar11 * 8);
          if (lVar6 != 0) {
            fVar13 = *(float *)(lVar2 + 0x28);
            if ((*(int *)(*(longlong *)((longlong)pvVar4 + uVar12 * 8) + 0x38) < DAT_146863db8) &&
               (_Init_thread_header(&DAT_146863db8), DAT_146863db8 == -1)) {
              FName::FName(&DAT_146863db0,"PM_Ice",1);
              _Init_thread_footer(&DAT_146863db8);
            }
            if (*(longlong *)(lVar2 + 0x18) == DAT_146863db0) {
              fVar13 = *(float *)(lVar6 + 0x30) * 0.5;
            }
            else {
              plVar8 = *(longlong **)(lVar6 + 0x38);
              plVar10 = plVar8 + (longlong)*(int *)(lVar6 + 0x40) * 2;
              fVar13 = fVar13 * *(float *)(lVar6 + 0x30);
              for (; plVar8 != plVar10; plVar8 = plVar8 + 2) {
                local_668 = *plVar8;
                lStack_660 = plVar8[1];
                if (local_668 == lVar2) {
                  fVar13 = fVar13 * (float)lStack_660;
                  break;
                }
              }
            }
            physx::PxVehicleDrivableSurfaceToTireFrictionPairs::setTypePairFriction
                      (DAT_146863cd8,uVar7,uVar11,fVar13);
          }
          uVar11 = uVar11 + 1;
          uVar5 = local_678;
        } while (uVar11 < uVar3);
      }
      local_670 = local_670 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return;
}



// FUNCTION 14096c310 FUN_14096c310 body=162 status=ok
// SIG undefined FUN_14096c310(void)

longlong FUN_14096c310(void)

{
  if (DAT_146863f60 == 0) {
    FUN_14171ccd0(L"/Script/PhysXVehicles",L"WheeledVehicle",&DAT_146863f60,FUN_140447710,0x4d0,
                  0x10000001,0,L"Game",&LAB_14096d2c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_14096dfa0,&LAB_140447700,0);
  }
  return DAT_146863f60;
}



// FUNCTION 14096c3d0 FUN_14096c3d0 body=47 status=ok
// SIG undefined FUN_14096c3d0(void)

longlong FUN_14096c3d0(void)

{
  if (DAT_146863ea8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
  }
  return DAT_146863ea8;
}



// FUNCTION 14096c400 FUN_14096c400 body=53 status=ok
// SIG undefined FUN_14096c400(void)

void FUN_14096c400(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x158;
    *puVar1 = &PTR_FUN_14416ffc0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14096c440 FUN_14096c440 body=47 status=ok
// SIG undefined FUN_14096c440(void)

longlong FUN_14096c440(void)

{
  if (DAT_146863f98 == 0) {
    FUN_141786a30(&DAT_146863f98,&PTR_FUN_14628ade0);
  }
  return DAT_146863f98;
}



// FUNCTION 14096c470 FUN_14096c470 body=47 status=ok
// SIG undefined FUN_14096c470(void)

longlong FUN_14096c470(void)

{
  if (DAT_146863fa0 == 0) {
    FUN_141786a30(&DAT_146863fa0,&PTR_FUN_14628ae60);
  }
  return DAT_146863fa0;
}



// FUNCTION 14096c4a0 FUN_14096c4a0 body=47 status=ok
// SIG undefined FUN_14096c4a0(void)

longlong FUN_14096c4a0(void)

{
  if (DAT_146863fa8 == 0) {
    FUN_141786a30(&DAT_146863fa8,&PTR_FUN_14628aee0);
  }
  return DAT_146863fa8;
}



// FUNCTION 14096c4d0 FUN_14096c4d0 body=47 status=ok
// SIG undefined FUN_14096c4d0(void)

longlong FUN_14096c4d0(void)

{
  if (DAT_146863fb0 == 0) {
    FUN_141786a30(&DAT_146863fb0,&PTR_FUN_14628af60);
  }
  return DAT_146863fb0;
}



// FUNCTION 14096c500 FUN_14096c500 body=47 status=ok
// SIG undefined FUN_14096c500(void)

longlong FUN_14096c500(void)

{
  if (DAT_146863fb8 == 0) {
    FUN_141786a30(&DAT_146863fb8,&PTR_FUN_14628afe0);
  }
  return DAT_146863fb8;
}



// FUNCTION 14096c530 FUN_14096c530 body=47 status=ok
// SIG undefined FUN_14096c530(void)

longlong FUN_14096c530(void)

{
  if (DAT_146863fc0 == 0) {
    FUN_141786a30(&DAT_146863fc0,&PTR_FUN_14628b060);
  }
  return DAT_146863fc0;
}



// FUNCTION 14096c560 FUN_14096c560 body=47 status=ok
// SIG undefined FUN_14096c560(void)

longlong FUN_14096c560(void)

{
  if (DAT_146863fc8 == 0) {
    FUN_141786a30(&DAT_146863fc8,&PTR_FUN_14628b0e0);
  }
  return DAT_146863fc8;
}



// FUNCTION 14096c590 FUN_14096c590 body=47 status=ok
// SIG undefined FUN_14096c590(void)

longlong FUN_14096c590(void)

{
  if (DAT_146863fd0 == 0) {
    FUN_141786a30(&DAT_146863fd0,&PTR_FUN_14628b160);
  }
  return DAT_146863fd0;
}



// FUNCTION 14096c5c0 FUN_14096c5c0 body=47 status=ok
// SIG undefined FUN_14096c5c0(void)

longlong FUN_14096c5c0(void)

{
  if (DAT_146863fd8 == 0) {
    FUN_141786a30(&DAT_146863fd8,&PTR_FUN_14628b1e0);
  }
  return DAT_146863fd8;
}



// FUNCTION 14096c5f0 FUN_14096c5f0 body=47 status=ok
// SIG undefined FUN_14096c5f0(void)

longlong FUN_14096c5f0(void)

{
  if (DAT_146863fe0 == 0) {
    FUN_141786a30(&DAT_146863fe0,&PTR_FUN_14628b260);
  }
  return DAT_146863fe0;
}



// FUNCTION 14096c620 FUN_14096c620 body=47 status=ok
// SIG undefined FUN_14096c620(void)

longlong FUN_14096c620(void)

{
  if (DAT_146863fe8 == 0) {
    FUN_141786a30(&DAT_146863fe8,&PTR_FUN_14628b2e0);
  }
  return DAT_146863fe8;
}



// FUNCTION 14096c650 FUN_14096c650 body=47 status=ok
// SIG undefined FUN_14096c650(void)

longlong FUN_14096c650(void)

{
  if (DAT_146863ff0 == 0) {
    FUN_141786a30(&DAT_146863ff0,&PTR_FUN_14628b370);
  }
  return DAT_146863ff0;
}



// FUNCTION 14096c680 FUN_14096c680 body=47 status=ok
// SIG undefined FUN_14096c680(void)

longlong FUN_14096c680(void)

{
  if (DAT_146863ff8 == 0) {
    FUN_141786a30(&DAT_146863ff8,&PTR_FUN_14628b400);
  }
  return DAT_146863ff8;
}



// FUNCTION 14096c6b0 FUN_14096c6b0 body=47 status=ok
// SIG undefined FUN_14096c6b0(void)

longlong FUN_14096c6b0(void)

{
  if (DAT_146864000 == 0) {
    FUN_141786a30(&DAT_146864000,&PTR_FUN_14628b560);
  }
  return DAT_146864000;
}



// FUNCTION 14096c6e0 FUN_14096c6e0 body=47 status=ok
// SIG undefined FUN_14096c6e0(void)

longlong FUN_14096c6e0(void)

{
  if (DAT_146864008 == 0) {
    FUN_141786a30(&DAT_146864008,&PTR_FUN_14628b630);
  }
  return DAT_146864008;
}



// FUNCTION 14096c710 FUN_14096c710 body=47 status=ok
// SIG undefined FUN_14096c710(void)

longlong FUN_14096c710(void)

{
  if (DAT_146864010 == 0) {
    FUN_141786a30(&DAT_146864010,&PTR_FUN_14628b6c0);
  }
  return DAT_146864010;
}



// FUNCTION 14096c740 FUN_14096c740 body=47 status=ok
// SIG undefined FUN_14096c740(void)

longlong FUN_14096c740(void)

{
  if (DAT_146864018 == 0) {
    FUN_141786a30(&DAT_146864018,&PTR_FUN_14628b740);
  }
  return DAT_146864018;
}



// FUNCTION 14096c770 FUN_14096c770 body=47 status=ok
// SIG undefined FUN_14096c770(void)

longlong FUN_14096c770(void)

{
  if (DAT_146864020 == 0) {
    FUN_141786a30(&DAT_146864020,&PTR_FUN_14628b7c0);
  }
  return DAT_146864020;
}



// FUNCTION 14096c7a0 FUN_14096c7a0 body=47 status=ok
// SIG undefined FUN_14096c7a0(void)

longlong FUN_14096c7a0(void)

{
  if (DAT_146864028 == 0) {
    FUN_141786a30(&DAT_146864028,&PTR_FUN_14628b840);
  }
  return DAT_146864028;
}



// FUNCTION 14096c7d0 FUN_14096c7d0 body=47 status=ok
// SIG undefined FUN_14096c7d0(void)

longlong FUN_14096c7d0(void)

{
  if (DAT_146864030 == 0) {
    FUN_141786a30(&DAT_146864030,&PTR_FUN_14628b8d0);
  }
  return DAT_146864030;
}



// FUNCTION 14096c800 FUN_14096c800 body=47 status=ok
// SIG undefined FUN_14096c800(void)

longlong FUN_14096c800(void)

{
  if (DAT_146864038 == 0) {
    FUN_141786a30(&DAT_146864038,&PTR_FUN_14628b960);
  }
  return DAT_146864038;
}



// FUNCTION 14096c830 FUN_14096c830 body=47 status=ok
// SIG undefined FUN_14096c830(void)

longlong FUN_14096c830(void)

{
  if (DAT_146864040 == 0) {
    FUN_141786a30(&DAT_146864040,&PTR_FUN_14628b9e0);
  }
  return DAT_146864040;
}



// FUNCTION 14096c860 FUN_14096c860 body=47 status=ok
// SIG undefined FUN_14096c860(void)

longlong FUN_14096c860(void)

{
  if (DAT_146864048 == 0) {
    FUN_141786a30(&DAT_146864048,&PTR_FUN_14628ba60);
  }
  return DAT_146864048;
}



// FUNCTION 14096c890 FUN_14096c890 body=47 status=ok
// SIG undefined FUN_14096c890(void)

longlong FUN_14096c890(void)

{
  if (DAT_146864050 == 0) {
    FUN_141786a30(&DAT_146864050,&PTR_FUN_14628bae0);
  }
  return DAT_146864050;
}



// FUNCTION 14096c8c0 FUN_14096c8c0 body=47 status=ok
// SIG undefined FUN_14096c8c0(void)

longlong FUN_14096c8c0(void)

{
  if (DAT_146864058 == 0) {
    FUN_141786a30(&DAT_146864058,&PTR_FUN_14628bb60);
  }
  return DAT_146864058;
}



// FUNCTION 14096c8f0 FUN_14096c8f0 body=47 status=ok
// SIG undefined FUN_14096c8f0(void)

longlong FUN_14096c8f0(void)

{
  if (DAT_146864060 == 0) {
    FUN_141786a30(&DAT_146864060,&PTR_FUN_14628bbf0);
  }
  return DAT_146864060;
}



// FUNCTION 14096c920 FUN_14096c920 body=47 status=ok
// SIG undefined FUN_14096c920(void)

longlong FUN_14096c920(void)

{
  if (DAT_146864068 == 0) {
    FUN_141786a30(&DAT_146864068,&PTR_FUN_14628bc70);
  }
  return DAT_146864068;
}



// FUNCTION 14096c950 FUN_14096c950 body=47 status=ok
// SIG undefined FUN_14096c950(void)

longlong FUN_14096c950(void)

{
  if (DAT_146864070 == 0) {
    FUN_141786a30(&DAT_146864070,&PTR_FUN_14628bd30);
  }
  return DAT_146864070;
}



// FUNCTION 14096c980 FUN_14096c980 body=47 status=ok
// SIG undefined FUN_14096c980(void)

longlong FUN_14096c980(void)

{
  if (DAT_146864078 == 0) {
    FUN_141786a30(&DAT_146864078,&PTR_FUN_14628bdb0);
  }
  return DAT_146864078;
}



// FUNCTION 14096c9b0 FUN_14096c9b0 body=47 status=ok
// SIG undefined FUN_14096c9b0(void)

longlong FUN_14096c9b0(void)

{
  if (DAT_146864080 == 0) {
    FUN_141786a30(&DAT_146864080,&PTR_FUN_14628be40);
  }
  return DAT_146864080;
}



// FUNCTION 14096c9e0 FUN_14096c9e0 body=53 status=ok
// SIG undefined FUN_14096c9e0(void)

void FUN_14096c9e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144170c80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14096ca20 FUN_14096ca20 body=53 status=ok
// SIG undefined FUN_14096ca20(void)

void FUN_14096ca20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_144170d98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14096ca60 FUN_14096ca60 body=53 status=ok
// SIG undefined FUN_14096ca60(void)

void FUN_14096ca60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144170eb0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14096caa0 FUN_14096caa0 body=151 status=ok
// SIG undefined FUN_14096caa0(void)

longlong FUN_14096caa0(void)

{
  if (DAT_146863f50 == 0) {
    FUN_14171ccd0(L"/Script/PhysXVehicles",L"VehicleWheel",&DAT_146863f50,FUN_14096e020,0x110,
                  0x10000000,0,L"Engine",&LAB_14096d360,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146863f50;
}



// FUNCTION 14096cb40 FUN_14096cb40 body=162 status=ok
// SIG undefined FUN_14096cb40(void)

longlong FUN_14096cb40(void)

{
  if (DAT_146864090 == 0) {
    FUN_14171ccd0(L"/Script/PhysXVehicles",L"WheeledVehicleMovementComponent",&DAT_146864090,
                  UARBlueprintLibrary::StaticRegisterNativesUARBlueprintLibrary,0x458,0x10000005,0,
                  L"Engine",&LAB_14096d3a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429d7b60,&LAB_140447700,0);
  }
  return DAT_146864090;
}



// FUNCTION 14096cc00 FUN_14096cc00 body=53 status=ok
// SIG undefined FUN_14096cc00(void)

void FUN_14096cc00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_144170110;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14096cc40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWheeledVehicleMovementComponent4W::GetPrivateStaticClass(void)

{
  if (DAT_146863ed0 == 0) {
    FUN_14171ccd0(L"/Script/PhysXVehicles",L"SimpleWheeledVehicleMovementComponent",&DAT_146863ed0,
                  FUN_14096dfc0,0x458,0x10000004,0,L"Engine",FUN_14096d2e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_14096cb40,&LAB_140447700,0);
  }
  return DAT_146863ed0;
}



// FUNCTION 14096ccf0 FUN_14096ccf0 body=47 status=ok
// SIG undefined FUN_14096ccf0(void)

longlong FUN_14096ccf0(void)

{
  if (DAT_146863ec8 == 0) {
    FUN_141786440(&DAT_146863ec8,&PTR_GetPrivateStaticClass_14416e980);
  }
  return DAT_146863ec8;
}



// FUNCTION 14096cd20 FUN_14096cd20 body=47 status=ok
// SIG undefined FUN_14096cd20(void)

longlong FUN_14096cd20(void)

{
  if (DAT_146864088 == 0) {
    FUN_141786440(&DAT_146864088,&PTR_FUN_14416def0);
  }
  return DAT_146864088;
}



// FUNCTION 14096cd50 FUN_14096cd50 body=47 status=ok
// SIG undefined FUN_14096cd50(void)

longlong FUN_14096cd50(void)

{
  if (DAT_146863eb0 == 0) {
    FUN_141786a30(&DAT_146863eb0,&PTR_FUN_146289c70);
  }
  return DAT_146863eb0;
}



// FUNCTION 14096cd80 FUN_14096cd80 body=47 status=ok
// SIG undefined FUN_14096cd80(void)

longlong FUN_14096cd80(void)

{
  if (DAT_146863eb8 == 0) {
    FUN_141786a30(&DAT_146863eb8,&PTR_FUN_146289d20);
  }
  return DAT_146863eb8;
}



// FUNCTION 14096cdb0 FUN_14096cdb0 body=47 status=ok
// SIG undefined FUN_14096cdb0(void)

longlong FUN_14096cdb0(void)

{
  if (DAT_146863ec0 == 0) {
    FUN_141786a30(&DAT_146863ec0,&PTR_FUN_146289dd0);
  }
  return DAT_146863ec0;
}



// FUNCTION 14096cdf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AFGConveyorPoleStackable::GetPrivateStaticClass(void)

{
  if (DAT_1468640e8 == 0) {
    FUN_14171ccd0(L"/Script/PhysXVehicles",L"WheeledVehicleMovementComponent4W",&DAT_1468640e8,
                  FUN_140447710,0x5b8,0x10000004,0,L"Engine",&LAB_14096d380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_14096cb40,&LAB_140447700,0);
  }
  return DAT_1468640e8;
}



// FUNCTION 14096cea0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTireConfig::GetPrivateStaticClass(void)

{
  if (DAT_146863ef0 == 0) {
    FUN_14171ccd0(L"/Script/PhysXVehicles",L"TireConfig",&DAT_146863ef0,FUN_140447710,0x50,
                  0x10000000,0,L"Engine",&LAB_14096d330,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146863ef0;
}



// FUNCTION 14096cf50 FUN_14096cf50 body=53 status=ok
// SIG undefined FUN_14096cf50(void)

void FUN_14096cf50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144171210;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14096cf90 FUN_14096cf90 body=53 status=ok
// SIG undefined FUN_14096cf90(void)

void FUN_14096cf90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1441709d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14096cfd0 FUN_14096cfd0 body=53 status=ok
// SIG undefined FUN_14096cfd0(void)

void FUN_14096cfd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_144171328;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14096d020 FUN_14096d020 body=47 status=ok
// SIG undefined FUN_14096d020(void)

longlong FUN_14096d020(void)

{
  if (DAT_146863f10 == 0) {
    FUN_141786440(&DAT_146863f10,&PTR_FUN_14416f640);
  }
  return DAT_146863f10;
}



// FUNCTION 14096d050 FUN_14096d050 body=47 status=ok
// SIG undefined FUN_14096d050(void)

longlong FUN_14096d050(void)

{
  if (DAT_146863f08 == 0) {
    FUN_141786a30(&DAT_146863f08,&PTR_FUN_14628a060);
  }
  return DAT_146863f08;
}



// FUNCTION 14096d080 FUN_14096d080 body=53 status=ok
// SIG undefined FUN_14096d080(void)

void FUN_14096d080(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &PTR_FUN_144171440;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14096d0c0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x6e0;
    *puVar1 = &PTR_FUN_144170ae8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 14096d120 FUN_14096d120 body=47 status=ok
// SIG undefined FUN_14096d120(void)

longlong FUN_14096d120(void)

{
  if (DAT_146863f48 == 0) {
    FUN_141786440(&DAT_146863f48,&PTR_FUN_14416fb60);
  }
  return DAT_146863f48;
}



// FUNCTION 14096d150 FUN_14096d150 body=47 status=ok
// SIG undefined FUN_14096d150(void)

longlong FUN_14096d150(void)

{
  if (DAT_146863f28 == 0) {
    FUN_141786a30(&DAT_146863f28,&PTR_FUN_14628a140);
  }
  return DAT_146863f28;
}



// FUNCTION 14096d180 FUN_14096d180 body=47 status=ok
// SIG undefined FUN_14096d180(void)

longlong FUN_14096d180(void)

{
  if (DAT_146863f30 == 0) {
    FUN_141786a30(&DAT_146863f30,&PTR_FUN_14628a1c0);
  }
  return DAT_146863f30;
}



// FUNCTION 14096d1b0 FUN_14096d1b0 body=47 status=ok
// SIG undefined FUN_14096d1b0(void)

longlong FUN_14096d1b0(void)

{
  if (DAT_146863f38 == 0) {
    FUN_141786a30(&DAT_146863f38,&PTR_FUN_14628a240);
  }
  return DAT_146863f38;
}



// FUNCTION 14096d1e0 FUN_14096d1e0 body=47 status=ok
// SIG undefined FUN_14096d1e0(void)

longlong FUN_14096d1e0(void)

{
  if (DAT_146863f40 == 0) {
    FUN_141786a30(&DAT_146863f40,&PTR_FUN_14628a2d0);
  }
  return DAT_146863f40;
}



// FUNCTION 14096d210 FUN_14096d210 body=162 status=ok
// SIG undefined FUN_14096d210(void)

longlong FUN_14096d210(void)

{
  if (DAT_146863f18 == 0) {
    FUN_14171ccd0(L"/Script/PhysXVehicles",L"VehicleAnimInstance",&DAT_146863f18,FUN_14096dff0,0xb40
                  ,0x10000008,0,L"Engine",&LAB_14096d340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_1428eccf0,
                  &LAB_14084f730,0);
  }
  return DAT_146863f18;
}



// FUNCTION 14096d2e0 FUN_14096d2e0 body=66 status=ok
// SIG undefined FUN_14096d2e0(void)

void FUN_14096d2e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14095df50(puVar1,param_1);
    *puVar1 = &PTR_FUN_144170250;
    puVar1[5] = &PTR_LAB_144170900;
    puVar1[0x42] = &PTR_LAB_144170930;
  }
  return;
}



// FUNCTION 14096d3c0 FUN_14096d3c0 body=154 status=ok
// SIG undefined FUN_14096d3c0(void)

void FUN_14096d3c0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x228);
  lVar1 = *(longlong *)(param_1 + 0x220);
  if (iVar3 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x20);
    do {
      FUN_14095f760(puVar2,*puVar2);
      puVar2 = puVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x220);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x210) = &PTR_FUN_14416af28;
  FUN_14095e400(param_1);
  return;
}



// FUNCTION 14096d460 FUN_14096d460 body=691 status=ok
// SIG undefined FUN_14096d460(void)

longlong FUN_14096d460(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  puVar8 = (undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  if (puVar8 != (undefined8 *)(param_2 + 0x10)) {
    iVar10 = *(int *)(param_2 + 0x18);
    pvVar2 = *(void **)(param_2 + 0x10);
    *(int *)(param_1 + 0x18) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    else {
      TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy(puVar8,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar2,(longlong)iVar10 * 0x68);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  uVar7 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar7 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar7;
  uVar4 = *(undefined4 *)(param_2 + 0xec);
  uVar5 = *(undefined4 *)(param_2 + 0xf0);
  uVar6 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar4;
  *(undefined4 *)(param_1 + 0xf0) = uVar5;
  *(undefined4 *)(param_1 + 0xf4) = uVar6;
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  if (plVar1 != (longlong *)(param_2 + 0x108)) {
    iVar10 = *(int *)(param_2 + 0x110);
    lVar3 = *(longlong *)(param_2 + 0x108);
    *(int *)(param_1 + 0x110) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x114) == 0)) {
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
    else {
      TArray<FPropChildSocketData,FDefaultAllocator>::ResizeForCopy(plVar1,iVar10);
      puVar11 = (undefined4 *)*plVar1;
      if (iVar10 != 0) {
        puVar8 = (undefined8 *)(lVar3 + 0x30);
        puVar9 = (undefined8 *)(puVar11 + 0xc);
        do {
          *puVar11 = *(undefined4 *)(puVar8 + -6);
          puVar11 = puVar11 + 0x10;
          uVar7 = puVar8[-3];
          puVar9[-4] = puVar8[-4];
          puVar9[-3] = uVar7;
          uVar7 = puVar8[-1];
          puVar9[-2] = puVar8[-2];
          puVar9[-1] = uVar7;
          uVar7 = puVar8[1];
          *puVar9 = *puVar8;
          puVar9[1] = uVar7;
          iVar10 = iVar10 + -1;
          puVar8 = puVar8 + 8;
          puVar9 = puVar9 + 8;
        } while (iVar10 != 0);
      }
    }
  }
  puVar8 = (undefined8 *)(param_1 + 0x140);
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x119) = *(undefined1 *)(param_2 + 0x119);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  uVar4 = *(undefined4 *)(param_2 + 0x124);
  uVar5 = *(undefined4 *)(param_2 + 0x128);
  uVar6 = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = uVar4;
  *(undefined4 *)(param_1 + 0x128) = uVar5;
  *(undefined4 *)(param_1 + 300) = uVar6;
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  if (puVar8 != (undefined8 *)(param_2 + 0x140)) {
    iVar10 = *(int *)(param_2 + 0x148);
    pvVar2 = *(void **)(param_2 + 0x140);
    *(int *)(param_1 + 0x148) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x14c) == 0)) {
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
    else {
      TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(puVar8,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar2,(longlong)iVar10 << 5);
    }
  }
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  return param_1;
}



// FUNCTION 14096d730 FUN_14096d730 body=52 status=ok
// SIG undefined FUN_14096d730(void)

undefined8 FUN_14096d730(undefined8 param_1,ulonglong param_2)

{
  FUN_14096d3c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x458);
  }
  return param_1;
}



// FUNCTION 14096d780 FUN_14096d780 body=47 status=ok
// SIG undefined FUN_14096d780(void)

void FUN_14096d780(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  FTickFunction::FTickFunction(param_2);
  *param_2 = &PTR__scalar_deleting_destructor__14416bf48;
  return;
}



// FUNCTION 14096d7c0 FUN_14096d7c0 body=49 status=ok
// SIG undefined FUN_14096d7c0(void)

void FUN_14096d7c0(undefined8 param_1,undefined8 *param_2)

{
  FUN_14084bd40(param_2);
  *param_2 = &PTR__scalar_deleting_destructor__14416a1a8;
  param_2[0xd9] = 0;
  param_2[0xda] = 0;
  return;
}



// FUNCTION 14096d800 FUN_14096d800 body=38 status=ok
// SIG undefined FUN_14096d800(void)

void FUN_14096d800(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x90);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_2);
  return;
}



// FUNCTION 14096d870 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FDonNavigationDynamicCollisionTask>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14096d460(param_2 + param_3,param_3);
      param_3 = param_3 + 0x158;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14096d8c0 FUN_14096d8c0 body=232 status=ok
// SIG undefined FUN_14096d8c0(void)

undefined8 FUN_14096d8c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_3 + 0x6b8);
    do {
      FUN_14084cff0(param_2,puVar3 + -0x1ae);
      *(undefined4 *)(param_2 + 0x6b8) = *puVar3;
      *(undefined8 *)(param_2 + 0x6c0) = *(undefined8 *)(puVar3 + 2);
      puVar2 = (undefined8 *)(param_2 + 0x6c8);
      if (puVar2 != (undefined8 *)(puVar3 + 4)) {
        iVar1 = puVar3[6];
        _Src = *(void **)(puVar3 + 4);
        *(int *)(param_2 + 0x6d0) = iVar1;
        if ((iVar1 == 0) && (*(int *)(param_2 + 0x6d4) == 0)) {
          *(undefined4 *)(param_2 + 0x6d4) = 0;
        }
        else {
          TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1);
          _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 << 5);
        }
      }
      puVar3 = puVar3 + 0x1b8;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x6e0;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14096da10 Copy body=265 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FVehicleEngineData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  undefined1 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined1 *)(param_3 + 0x58);
    do {
      *(undefined1 *)(param_2 + 0x58) = *puVar4;
      puVar1 = (undefined8 *)(param_2 + 0x60);
      *(undefined1 *)(param_2 + 0x59) = puVar4[1];
      *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(puVar4 + 4);
      if (puVar1 != (undefined8 *)(puVar4 + 8)) {
        iVar3 = *(int *)(puVar4 + 0x10);
        _Src = *(void **)(puVar4 + 8);
        *(int *)(param_2 + 0x68) = iVar3;
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x6c) == 0)) {
          *(undefined4 *)(param_2 + 0x6c) = 0;
        }
        else {
          TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 * 0x1c);
        }
      }
      *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(puVar4 + 0x18);
      *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(puVar4 + 0x20);
      *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(puVar4 + 0x24);
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(puVar4 + 0x28);
      *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(puVar4 + 0x2c);
      puVar2 = (undefined4 *)(puVar4 + 0x30);
      puVar4 = puVar4 + 0x90;
      *(undefined4 *)(param_2 + 0x88) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x90;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14096db20 Copy body=245 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FVehicleTransmissionData>::Copy
          (undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_3 + 4);
    do {
      *param_2 = *(undefined1 *)(puVar4 + -1);
      puVar1 = (undefined8 *)(param_2 + 0x10);
      *(undefined4 *)(param_2 + 4) = *puVar4;
      *(undefined4 *)(param_2 + 8) = puVar4[1];
      *(undefined4 *)(param_2 + 0xc) = puVar4[2];
      if (puVar1 != (undefined8 *)(puVar4 + 3)) {
        iVar3 = puVar4[5];
        _Src = *(void **)(puVar4 + 3);
        *(int *)(param_2 + 0x18) = iVar3;
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        else {
          TArray<FRotator,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 * 0xc);
        }
      }
      *(undefined4 *)(param_2 + 0x20) = puVar4[7];
      *(undefined4 *)(param_2 + 0x24) = puVar4[8];
      puVar2 = puVar4 + 9;
      puVar4 = puVar4 + 0xc;
      *(undefined4 *)(param_2 + 0x28) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x30;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14096dc40 EVehicleDifferential4W_StaticEnum body=85 status=ok
// SIG undefined EVehicleDifferential4W_StaticEnum(void)

void EVehicleDifferential4W_StaticEnum(void)

{
  if (DAT_146863e30 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    DAT_146863e30 = GetStaticEnum(FUN_14096e690,DAT_146863ea8,L"EVehicleDifferential4W");
  }
  return;
}



// FUNCTION 14096dca0 EWheelSweepType_StaticEnum body=85 status=ok
// SIG undefined EWheelSweepType_StaticEnum(void)

void EWheelSweepType_StaticEnum(void)

{
  if (DAT_146863e38 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    DAT_146863e38 = GetStaticEnum(FUN_14096e6c0,DAT_146863ea8,L"EWheelSweepType");
  }
  return;
}



// FUNCTION 14096dd00 Get_Z_Construct_UScriptStruct_FAnimNode_WheelHandler_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimNode_WheelHandler_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimNode_WheelHandler_CRC(void)

{
  return 0xe9711ed6;
}



// FUNCTION 14096dd10 FUN_14096dd10 body=6 status=ok
// SIG undefined FUN_14096dd10(void)

undefined8 FUN_14096dd10(void)

{
  return 0x4fad4453;
}



// FUNCTION 14096dd20 FUN_14096dd20 body=6 status=ok
// SIG undefined FUN_14096dd20(void)

undefined8 FUN_14096dd20(void)

{
  return 0xb0c58c8a;
}



// FUNCTION 14096dd30 Get_Z_Construct_UScriptStruct_FTireConfigMaterialFriction_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTireConfigMaterialFriction_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTireConfigMaterialFriction_CRC(void)

{
  return 0xa9830f7;
}



// FUNCTION 14096dd40 Get_Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_CRC(void)

{
  return 0xc4c99705;
}



// FUNCTION 14096dd50 Get_Z_Construct_UScriptStruct_FVehicleDifferential4WData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVehicleDifferential4WData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVehicleDifferential4WData_CRC(void)

{
  return 0x53413489;
}



// FUNCTION 14096dd60 FUN_14096dd60 body=6 status=ok
// SIG undefined FUN_14096dd60(void)

undefined8 FUN_14096dd60(void)

{
  return 0x596db1cb;
}



// FUNCTION 14096dd70 Get_Z_Construct_UScriptStruct_FVehicleGearData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVehicleGearData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVehicleGearData_CRC(void)

{
  return 0x674ddb02;
}



// FUNCTION 14096dd80 Get_Z_Construct_UScriptStruct_FVehicleInputRate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVehicleInputRate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVehicleInputRate_CRC(void)

{
  return 0x98abe4f1;
}



// FUNCTION 14096dd90 Get_Z_Construct_UScriptStruct_FVehicleTransmissionData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVehicleTransmissionData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVehicleTransmissionData_CRC(void)

{
  return 0x23ec49c0;
}



// FUNCTION 14096dda0 Get_Z_Construct_UScriptStruct_FWheelSetup_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FWheelSetup_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FWheelSetup_CRC(void)

{
  return 0x8ccd501b;
}



// FUNCTION 14096de40 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_140967ee0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 14096deb0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_140968020(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 14096df20 FUN_14096df20 body=121 status=ok
// SIG undefined FUN_14096df20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14096df20(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_2c = param_5;
  local_28 = param_6;
  local_38 = param_2;
  local_34 = param_3;
  local_30 = param_4;
  uVar2 = FUN_14178ac60(param_5,DAT_146863e78);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_38);
  return;
}



// FUNCTION 14096dfb0 thunk_FUN_1429d7b60 body=5 status=ok
// SIG undefined thunk_FUN_1429d7b60(void)

void thunk_FUN_1429d7b60(void)

{
  FUN_1429d7b60();
  return;
}



// FUNCTION 14096dfc0 FUN_14096dfc0 body=34 status=ok
// SIG undefined FUN_14096dfc0(void)

void FUN_14096dfc0(void)

{
  undefined8 uVar1;
  
  uVar1 = UWheeledVehicleMovementComponent4W::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetBrakeTorque_1441709a0,3);
  return;
}



// FUNCTION 14096dff0 FUN_14096dff0 body=34 status=ok
// SIG undefined FUN_14096dff0(void)

void FUN_14096dff0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14096d210();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetVehicle_144170c00,1);
  return;
}



// FUNCTION 14096e020 FUN_14096e020 body=34 status=ok
// SIG undefined FUN_14096e020(void)

void FUN_14096e020(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14096caa0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetRotationAngle_144170c40,4);
  return;
}



// FUNCTION 14096e050 StaticRegisterNativesUARBlueprintLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUARBlueprintLibrary(void)

void UARBlueprintLibrary::StaticRegisterNativesUARBlueprintLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14096cb40();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetBrakeInput_144170fd0,0x1e);
  return;
}



// FUNCTION 14096e080 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FClothLODDataCommon::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146863e88 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    lVar1 = DAT_146863ea8;
    uVar2 = Get_Z_Construct_UScriptStruct_FAnimNode_WheelHandler_CRC();
    DAT_146863e88 = GetStaticStruct(FUN_14096e6f0,lVar1,L"AnimNode_WheelHandler",0x158,uVar2);
  }
  return;
}



// FUNCTION 14096e100 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FReplicatedVehicleState::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146863f78 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    lVar1 = DAT_146863ea8;
    uVar2 = FUN_14096dd10();
    DAT_146863f78 = GetStaticStruct(FUN_14096e720,lVar1,L"ReplicatedVehicleState",0x14,uVar2);
  }
  return;
}



// FUNCTION 14096e180 FUN_14096e180 body=113 status=ok
// SIG undefined FUN_14096e180(void)

void FUN_14096e180(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146863e98 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    lVar1 = DAT_146863ea8;
    uVar2 = FUN_14096dd20();
    DAT_146863e98 =
         GetStaticStruct(FUN_14096e750,lVar1,L"StartVehicleUpdatesTickFunction",0x58,uVar2);
  }
  return;
}



// FUNCTION 14096e200 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FTireConfigMaterialFriction::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146863ed8 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    lVar1 = DAT_146863ea8;
    uVar2 = Get_Z_Construct_UScriptStruct_FTireConfigMaterialFriction_CRC();
    DAT_146863ed8 = GetStaticStruct(FUN_14096e780,lVar1,L"TireConfigMaterialFriction",0x10,uVar2);
  }
  return;
}



// FUNCTION 14096e280 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVehicleAnimInstanceProxy::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146863ef8 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    lVar1 = DAT_146863ea8;
    uVar2 = Get_Z_Construct_UScriptStruct_FVehicleAnimInstanceProxy_CRC();
    DAT_146863ef8 = GetStaticStruct(FUN_14096e7b0,lVar1,L"VehicleAnimInstanceProxy",0x6e0,uVar2);
  }
  return;
}



// FUNCTION 14096e300 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVehicleDifferential4WData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468640d0 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    lVar1 = DAT_146863ea8;
    uVar2 = Get_Z_Construct_UScriptStruct_FVehicleDifferential4WData_CRC();
    DAT_1468640d0 = GetStaticStruct(FUN_14096e7e0,lVar1,L"VehicleDifferential4WData",0x1c,uVar2);
  }
  return;
}



// FUNCTION 14096e380 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVehicleEngineData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468640c0 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    lVar1 = DAT_146863ea8;
    uVar2 = FUN_14096dd60();
    DAT_1468640c0 = GetStaticStruct(FUN_14096e810,lVar1,L"VehicleEngineData",0x90,uVar2);
  }
  return;
}



// FUNCTION 14096e400 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVehicleGearData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468640b0 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    lVar1 = DAT_146863ea8;
    uVar2 = Get_Z_Construct_UScriptStruct_FVehicleGearData_CRC();
    DAT_1468640b0 = GetStaticStruct(FUN_14096e840,lVar1,L"VehicleGearData",0xc,uVar2);
  }
  return;
}



// FUNCTION 14096e480 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVehicleInputRate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146863f68 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    lVar1 = DAT_146863ea8;
    uVar2 = Get_Z_Construct_UScriptStruct_FVehicleInputRate_CRC();
    DAT_146863f68 = GetStaticStruct(FUN_14096e870,lVar1,L"VehicleInputRate",8,uVar2);
  }
  return;
}



// FUNCTION 14096e500 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVehicleTransmissionData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468640a0 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    lVar1 = DAT_146863ea8;
    uVar2 = Get_Z_Construct_UScriptStruct_FVehicleTransmissionData_CRC();
    DAT_1468640a0 = GetStaticStruct(FUN_14096e8a0,lVar1,L"VehicleTransmissionData",0x30,uVar2);
  }
  return;
}



// FUNCTION 14096e580 FUN_14096e580 body=113 status=ok
// SIG undefined FUN_14096e580(void)

void FUN_14096e580(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146863f88 == 0) {
    if (DAT_146863ea8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863ea8,&PTR_s__Script_PhysXVehicles_144170228);
    }
    lVar1 = DAT_146863ea8;
    uVar2 = Get_Z_Construct_UScriptStruct_FWheelSetup_CRC();
    DAT_146863f88 = GetStaticStruct(FUN_14096e8d0,lVar1,L"WheelSetup",0x38,uVar2);
  }
  return;
}



// FUNCTION 14096e600 FUN_14096e600 body=47 status=ok
// SIG undefined FUN_14096e600(void)

longlong FUN_14096e600(void)

{
  if (DAT_146863f58 == 0) {
    FUN_141786440(&DAT_146863f58,&PTR_FUN_14416ce50);
  }
  return DAT_146863f58;
}



// FUNCTION 14096e630 FUN_14096e630 body=47 status=ok
// SIG undefined FUN_14096e630(void)

longlong FUN_14096e630(void)

{
  if (DAT_146863ee8 == 0) {
    FUN_141786440(&DAT_146863ee8,&PTR_GetPrivateStaticClass_14416f130);
  }
  return DAT_146863ee8;
}



// FUNCTION 14096e660 FUN_14096e660 body=47 status=ok
// SIG undefined FUN_14096e660(void)

longlong FUN_14096e660(void)

{
  if (DAT_1468640e0 == 0) {
    FUN_141786440(&DAT_1468640e0,&PTR_GetPrivateStaticClass_14416f530);
  }
  return DAT_1468640e0;
}



// FUNCTION 14096e690 FUN_14096e690 body=47 status=ok
// SIG undefined FUN_14096e690(void)

longlong FUN_14096e690(void)

{
  if (DAT_146864098 == 0) {
    FUN_1417866a0(&DAT_146864098,&PTR_FUN_14628d530);
  }
  return DAT_146864098;
}



// FUNCTION 14096e6c0 FUN_14096e6c0 body=47 status=ok
// SIG undefined FUN_14096e6c0(void)

longlong FUN_14096e6c0(void)

{
  if (DAT_146863f20 == 0) {
    FUN_1417866a0(&DAT_146863f20,&PTR_FUN_14628d4e0);
  }
  return DAT_146863f20;
}



// FUNCTION 14096e6f0 FUN_14096e6f0 body=47 status=ok
// SIG undefined FUN_14096e6f0(void)

longlong FUN_14096e6f0(void)

{
  if (DAT_146863e90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146863e90,&PTR_FUN_146289b60);
  }
  return DAT_146863e90;
}



// FUNCTION 14096e720 FUN_14096e720 body=47 status=ok
// SIG undefined FUN_14096e720(void)

longlong FUN_14096e720(void)

{
  if (DAT_146863f80 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146863f80,&PTR_FUN_14628abf0);
  }
  return DAT_146863f80;
}



// FUNCTION 14096e750 FUN_14096e750 body=47 status=ok
// SIG undefined FUN_14096e750(void)

longlong FUN_14096e750(void)

{
  if (DAT_146863ea0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146863ea0,&PTR_FUN_146289bb0);
  }
  return DAT_146863ea0;
}



// FUNCTION 14096e780 FUN_14096e780 body=47 status=ok
// SIG undefined FUN_14096e780(void)

longlong FUN_14096e780(void)

{
  if (DAT_146863ee0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146863ee0,&PTR_FUN_146289eb0);
  }
  return DAT_146863ee0;
}



// FUNCTION 14096e7b0 FUN_14096e7b0 body=47 status=ok
// SIG undefined FUN_14096e7b0(void)

longlong FUN_14096e7b0(void)

{
  if (DAT_146863f00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146863f00,&PTR_FUN_146289fd0);
  }
  return DAT_146863f00;
}



// FUNCTION 14096e7e0 FUN_14096e7e0 body=47 status=ok
// SIG undefined FUN_14096e7e0(void)

longlong FUN_14096e7e0(void)

{
  if (DAT_1468640d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468640d8,&PTR_FUN_14628d330);
  }
  return DAT_1468640d8;
}



// FUNCTION 14096e810 FUN_14096e810 body=47 status=ok
// SIG undefined FUN_14096e810(void)

longlong FUN_14096e810(void)

{
  if (DAT_1468640c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468640c8,&PTR_FUN_14628d150);
  }
  return DAT_1468640c8;
}



// FUNCTION 14096e840 FUN_14096e840 body=47 status=ok
// SIG undefined FUN_14096e840(void)

longlong FUN_14096e840(void)

{
  if (DAT_1468640b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468640b8,&PTR_FUN_14628cfb0);
  }
  return DAT_1468640b8;
}



// FUNCTION 14096e870 FUN_14096e870 body=47 status=ok
// SIG undefined FUN_14096e870(void)

longlong FUN_14096e870(void)

{
  if (DAT_146863f70 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146863f70,&PTR_FUN_14628aa90);
  }
  return DAT_146863f70;
}



// FUNCTION 14096e8a0 FUN_14096e8a0 body=47 status=ok
// SIG undefined FUN_14096e8a0(void)

longlong FUN_14096e8a0(void)

{
  if (DAT_1468640a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468640a8,&PTR_FUN_14628cec0);
  }
  return DAT_1468640a8;
}



// FUNCTION 14096e8d0 FUN_14096e8d0 body=47 status=ok
// SIG undefined FUN_14096e8d0(void)

longlong FUN_14096e8d0(void)

{
  if (DAT_146863f90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146863f90,&PTR_FUN_14628ad60);
  }
  return DAT_146863f90;
}



// FUNCTION 14096e900 FUN_14096e900 body=45 status=ok
// SIG undefined FUN_14096e900(void)

void FUN_14096e900(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140963880();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096e930 FUN_14096e930 body=43 status=ok
// SIG undefined FUN_14096e930(void)

void FUN_14096e930(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140963c50();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096e960 execGetFadeInStartDelay body=45 status=ok
// SIG undefined execGetFadeInStartDelay(void)

void UDecalComponent::execGetFadeInStartDelay
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetFadeInStartDelay();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096e990 FUN_14096e990 body=45 status=ok
// SIG undefined FUN_14096e990(void)

void FUN_14096e990(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140963d50();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096e9c0 execGetStartTimeOffset body=45 status=ok
// SIG undefined execGetStartTimeOffset(void)

void UGeometryCacheComponent::execGetStartTimeOffset
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetStartTimeOffset();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096e9f0 FUN_14096e9f0 body=45 status=ok
// SIG undefined FUN_14096e9f0(void)

void FUN_14096e9f0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140963e30();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096ea40 FUN_14096ea40 body=45 status=ok
// SIG undefined FUN_14096ea40(void)

void FUN_14096ea40(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140964620();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096ea70 FUN_14096ea70 body=45 status=ok
// SIG undefined FUN_14096ea70(void)

void FUN_14096ea70(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140964710();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096eaa0 FUN_14096eaa0 body=45 status=ok
// SIG undefined FUN_14096eaa0(void)

void FUN_14096eaa0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1409647e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096ead0 FUN_14096ead0 body=45 status=ok
// SIG undefined FUN_14096ead0(void)

void FUN_14096ead0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1409648d0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096eb00 FUN_14096eb00 body=45 status=ok
// SIG undefined FUN_14096eb00(void)

void FUN_14096eb00(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1409648e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096eb30 FUN_14096eb30 body=43 status=ok
// SIG undefined FUN_14096eb30(void)

void FUN_14096eb30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1409649c0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096eb60 execGetAnimRootMotionTranslationScale body=45 status=ok
// SIG undefined execGetAnimRootMotionTranslationScale(void)

void ACharacter::execGetAnimRootMotionTranslationScale
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetAnimRootMotionTranslationScale();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096eb90 FUN_14096eb90 body=43 status=ok
// SIG undefined FUN_14096eb90(void)

void FUN_14096eb90(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140964a00();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096ebc0 execGetVehicle body=44 status=ok
// SIG undefined execGetVehicle(void)

void UVehicleAnimInstance::execGetVehicle(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetVehicle();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096ebf0 FUN_14096ebf0 body=43 status=ok
// SIG undefined FUN_14096ebf0(void)

void FUN_14096ebf0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140966020();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096ec20 FUN_14096ec20 body=43 status=ok
// SIG undefined FUN_14096ec20(void)

void FUN_14096ec20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140966050();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14096ec50 FUN_14096ec50 body=463 status=ok
// SIG undefined FUN_14096ec50(void)

void FUN_14096ec50(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  local_24[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x598))
                    (param_1,local_24[0],local_28,local_res20[0],local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerUpdateState_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x5a0))
            (param_1,local_24[0],local_28,local_res20[0],local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 14096ee20 FUN_14096ee20 body=191 status=ok
// SIG undefined FUN_14096ee20(void)

void FUN_14096ee20(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140968120(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 14096eee0 FUN_14096eee0 body=130 status=ok
// SIG undefined FUN_14096eee0(void)

void FUN_14096eee0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
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
  FUN_140968150(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14096ef70 FUN_14096ef70 body=126 status=ok
// SIG undefined FUN_14096ef70(void)

void FUN_14096ef70(undefined8 param_1,longlong param_2)

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
  FUN_1409681d0(param_1,local_res10[0]);
  return;
}



// FUNCTION 14096eff0 execSetScrollbarThickness body=138 status=ok
// SIG undefined execSetScrollbarThickness(void)

void UScrollBox::execSetScrollbarThickness(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1409681e0(param_1,puVar1);
  return;
}



// FUNCTION 14096f080 FUN_14096f080 body=123 status=ok
// SIG undefined FUN_14096f080(void)

void FUN_14096f080(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  FUN_140968250(param_1,local_res10[0]);
  return;
}



// FUNCTION 14096f100 FUN_14096f100 body=196 status=ok
// SIG undefined FUN_14096f100(void)

void FUN_14096f100(undefined8 param_1,longlong param_2)

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
  FUN_140968280(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 14096f1d0 FUN_14096f1d0 body=196 status=ok
// SIG undefined FUN_14096f1d0(void)

void FUN_14096f1d0(undefined8 param_1,longlong param_2)

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
  FUN_1409683a0(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 14096f2a0 FUN_14096f2a0 body=130 status=ok
// SIG undefined FUN_14096f2a0(void)

void FUN_14096f2a0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
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
  FUN_1409684c0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14096f330 FUN_14096f330 body=130 status=ok
// SIG undefined FUN_14096f330(void)

void FUN_14096f330(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
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
  FUN_1409684e0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14096f3c0 FUN_14096f3c0 body=126 status=ok
// SIG undefined FUN_14096f3c0(void)

void FUN_14096f3c0(undefined8 param_1,longlong param_2)

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
  SCircularThrobber::SetNumPieces(param_1,local_res10[0]);
  return;
}



// FUNCTION 14096f440 execSetScrollbarThickness body=138 status=ok
// SIG undefined execSetScrollbarThickness(void)

void UScrollBox::execSetScrollbarThickness(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140968510(param_1,puVar1);
  return;
}



// FUNCTION 14096f4d0 execUpdateWrestlerEnergy body=126 status=ok
// SIG undefined execUpdateWrestlerEnergy(void)

void UWrestlerMoveAnimInstance_Code::execUpdateWrestlerEnergy(undefined8 param_1,longlong param_2)

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
  UpdateWrestlerEnergy(param_1,local_res10[0]);
  return;
}



// FUNCTION 14096f550 execSetScrollbarThickness body=138 status=ok
// SIG undefined execSetScrollbarThickness(void)

void UScrollBox::execSetScrollbarThickness(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140968530(param_1,puVar1);
  return;
}



// FUNCTION 14096f5e0 FUN_14096f5e0 body=130 status=ok
// SIG undefined FUN_14096f5e0(void)

void FUN_14096f5e0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
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
  FUN_140968540(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14096f670 FUN_14096f670 body=196 status=ok
// SIG undefined FUN_14096f670(void)

void FUN_14096f670(undefined8 param_1,longlong param_2)

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
  FUN_140968800(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 14096f740 FUN_14096f740 body=123 status=ok
// SIG undefined FUN_14096f740(void)

void FUN_14096f740(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  FUN_140968920(param_1,local_res10[0]);
  return;
}



// FUNCTION 14096f7c0 execOnControllerConnectionChanged body=192 status=ok
// SIG undefined execOnControllerConnectionChanged(void)

void UConsoleCompatGameInstance::execOnControllerConnectionChanged
               (undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
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
  FUN_140968950(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 14096f880 FUN_14096f880 body=123 status=ok
// SIG undefined FUN_14096f880(void)

void FUN_14096f880(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  FUN_1409689a0(param_1,local_res10[0]);
  return;
}



// FUNCTION 14096f900 FUN_14096f900 body=130 status=ok
// SIG undefined FUN_14096f900(void)

void FUN_14096f900(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
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
  FUN_140968a90(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14096f990 Emplace<int_const_&,int_const_&> body=202 status=ok
// SIG undefined Emplace<int_const_&,int_const_&>(void)

longlong TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>::
         Emplace<int_const_&,int_const_&>(longlong *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  int local_18 [2];
  uint *local_10;
  
  TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_18);
  *local_10 = *param_2;
  local_10[1] = *param_3;
  local_10[2] = 0xffffffff;
  cVar1 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar1 == '\0') {
    uVar3 = (int)param_1[9] - 1U & *local_10;
    local_10[3] = uVar3;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_10[2] = *(uint *)((longlong)plVar2 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         local_18[0];
  }
  return *param_1 + 4 + (longlong)local_18[0] * 0x10;
}



// FUNCTION 14096fa60 EmplaceUnique<int_const_&,int_const_&> body=264 status=ok
// SIG undefined EmplaceUnique<int_const_&,int_const_&>(void)

void TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>::
     EmplaceUnique<int_const_&,int_const_&>(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    iVar6 = iVar4;
    if (iVar4 != -1) {
      do {
        iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar6 * 0x10) == iVar1) break;
        iVar6 = iVar4;
      } while (iVar4 != -1);
    }
    if (iVar6 != -1) {
      lVar3 = *param_1;
      do {
        if (*(int *)(lVar3 + 4 + (longlong)iVar6 * 0x10) == iVar2) {
          if ((longlong)iVar6 * 0x10 + 4 + lVar3 != 0) {
            return;
          }
          break;
        }
        iVar6 = iVar4;
        if (iVar4 == -1) break;
        do {
          iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar6 * 0x10);
          if (*(int *)(lVar3 + (longlong)iVar6 * 0x10) == iVar1) break;
          iVar6 = iVar4;
        } while (iVar4 != -1);
      } while (iVar6 != -1);
    }
  }
  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>::
  Emplace<int_const_&,int_const_&>(param_1,param_2,param_3);
  return;
}



// FUNCTION 14096fb70 FUN_14096fb70 body=435 status=ok
// SIG undefined FUN_14096fb70(void)

undefined8 * FUN_14096fb70(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(param_1 + 1);
  FUN_1426f5920();
  param_1[0x3f] = 0;
  puVar2 = param_1 + 0x138;
  param_1[0x40] = 0;
  *(undefined2 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0x43) = 4;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x42] = &PTR_FUN_1441669d0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4d) = param_2;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0xb2] = 0;
  *(undefined1 *)(param_1 + 0xb3) = 1;
  *(undefined1 *)((longlong)param_1 + 0x59a) = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x4c] = &PTR_FUN_144165fb0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x135) = 0;
  param_1[0x137] = 0;
  lVar1 = 2;
  if (param_1 + 0x139 < puVar2) {
    lVar1 = 0;
  }
  param_1[0x136] = param_1 + 0x117;
  *(undefined1 *)((longlong)param_1 + 0x599) = 1;
  if (puVar2 <= param_1 + 0x139) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined4 *)puVar2 = 0xffffffff;
      puVar2 = (undefined8 *)((longlong)puVar2 + 4);
    }
  }
  *(undefined1 *)(param_1 + 0x13a) = 1;
  return param_1;
}



// FUNCTION 14096fd30 FProcMeshSection body=205 status=ok
// SIG undefined FProcMeshSection(void)

undefined8 * FProcMeshSection::FProcMeshSection(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140976d70(param_1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar1 * 0x4c);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
  *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x3d);
  return param_1;
}



// FUNCTION 14096fe00 FUN_14096fe00 body=803 status=ok
// SIG undefined FUN_14096fe00(void)

/* WARNING: Removing unreachable block (ram,0x00014096ff62) */

undefined8 * FUN_14096fe00(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *_Src;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong local_58;
  ulonglong local_50;
  
  FUN_14271d7c0(param_1,param_2,0);
  plVar1 = param_1 + 0x74;
  *param_1 = &PTR__scalar_deleting_destructor__144172540;
  *plVar1 = 0;
  param_1[0x75] = 0;
  uVar6 = (**(code **)(*param_2 + 0x6b8))(param_2);
  param_1[0x76] = uVar6;
  FUN_14236ce60(param_2,param_1 + 0x77,*(undefined4 *)(param_1[0x26] + 8));
  iVar2 = (int)param_2[0xe7];
  iVar3 = *(int *)(param_1 + 0x75);
  iVar5 = iVar3 + iVar2;
  *(int *)(param_1 + 0x75) = iVar5;
  if (*(int *)((longlong)param_1 + 0x3ac) < iVar5) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar3 * 8),0,(longlong)iVar2 * 8);
  if (0 < iVar2) {
    lVar10 = 0;
    lVar14 = 0;
    do {
      plVar15 = (longlong *)(param_2[0xe6] + lVar14);
      if ((0 < (int)plVar15[3]) && (0 < (int)plVar15[1])) {
        lVar7 = operator_new(0x9d8);
        if (lVar7 == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)FUN_14096fb70(lVar7);
        }
        uVar4 = *(uint *)(plVar15 + 1);
        uVar11 = (ulonglong)uVar4;
        local_58 = 0;
        local_50 = 0;
        if ((int)uVar4 < 1) {
          if (((int)uVar4 < 0) && (uVar4 != 0)) {
            local_50 = (ulonglong)uVar4;
            FUN_1407682b0(&local_58);
          }
        }
        else {
          local_50 = (ulonglong)uVar4;
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(&local_58,0);
        }
        if (0 < (int)uVar4) {
          lVar7 = 0;
          lVar12 = 0;
          do {
            FUN_140972dd0(local_58 + lVar7,*plVar15 + lVar12);
            lVar12 = lVar12 + 0x4c;
            lVar7 = lVar7 + 0x5c;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        plVar9 = plVar8 + 0x4a;
        if (plVar9 != plVar15 + 2) {
          iVar3 = (int)plVar15[3];
          _Src = (void *)plVar15[2];
          *(int *)(plVar8 + 0x4b) = iVar3;
          if ((iVar3 == 0) && (*(int *)((longlong)plVar8 + 0x25c) == 0)) {
            *(undefined4 *)((longlong)plVar8 + 0x25c) = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(plVar9,iVar3);
            _guard_xfg_dispatch_icall_nop((void *)*plVar9,_Src,(longlong)iVar3 << 2);
          }
        }
        FUN_1428208f0(plVar8 + 1,plVar8 + 0x4c,&local_58,4,0);
        FUN_141edf270(plVar8 + 0x1e);
        FUN_141edf270(plVar8 + 1);
        plVar9 = (longlong *)plVar8[0x3f];
        if ((longlong *)plVar8[0x3f] == (longlong *)0x0) {
          plVar9 = plVar8 + 0x29;
        }
        plVar13 = plVar9 + (longlong)(int)plVar8[0x40] * 0xb;
        for (; plVar9 != plVar13; plVar9 = plVar9 + 0xb) {
          FUN_141edf270(plVar9);
        }
        FUN_141edf270(plVar8 + 0x42);
        FUN_141edf270(plVar8 + 0x4c);
        lVar7 = (**(code **)(*param_2 + 0x560))(param_2);
        *plVar8 = lVar7;
        if (lVar7 == 0) {
          lVar7 = UMaterial::GetDefaultMaterial(0);
          *plVar8 = lVar7;
        }
        *(undefined1 *)(plVar8 + 0x13a) = *(undefined1 *)((longlong)plVar15 + 0x3d);
        *(longlong **)(*plVar1 + lVar10 * 8) = plVar8;
        if (local_58 != 0) {
          FMemory::Free();
        }
      }
      lVar10 = lVar10 + 1;
      lVar14 = lVar14 + 0x40;
    } while (lVar10 < iVar2);
  }
  return param_1;
}



// FUNCTION 140970130 FUN_140970130 body=123 status=ok
// SIG undefined FUN_140970130(void)

undefined8 * FUN_140970130(undefined8 *param_1)

{
  FUN_14235ed30();
  *param_1 = &PTR_FUN_144171b60;
  param_1[5] = &PTR_LAB_144172488;
  param_1[0x5a] = &PTR_LAB_1441724b8;
  param_1[0xe3] = &PTR_LAB_144172510;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined1 *)(param_1 + 0xe4) = 1;
  return param_1;
}



// FUNCTION 1409701b0 FUN_1409701b0 body=133 status=ok
// SIG undefined FUN_1409701b0(void)

void FUN_1409701b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      if (puVar1[0xc] != 0) {
        FMemory::Free();
      }
      *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
      if (puVar1[10] != 0) {
        FMemory::Free();
      }
      puVar1 = puVar1 + 0x1a;
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



// FUNCTION 140970240 ~TArray<FProcMeshSection,FDefaultAllocator> body=100 status=ok
// SIG undefined ~TArray<FProcMeshSection,FDefaultAllocator>(void)

void TArray<FProcMeshSection,FDefaultAllocator>::~TArray<FProcMeshSection,FDefaultAllocator>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
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



// FUNCTION 1409702b0 FUN_1409702b0 body=456 status=ok
// SIG undefined FUN_1409702b0(void)

void FUN_1409702b0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144172540;
  plVar5 = (longlong *)param_1[0x74];
  plVar1 = plVar5 + *(int *)(param_1 + 0x75);
  if (plVar5 != plVar1) {
    do {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + 0xf0) + 0x30))();
        (**(code **)(*(longlong *)(lVar2 + 8) + 0x30))(lVar2 + 8);
        plVar3 = *(longlong **)(lVar2 + 0x1f8);
        if (*(longlong **)(lVar2 + 0x1f8) == (longlong *)0x0) {
          plVar3 = (longlong *)(lVar2 + 0x148);
        }
        plVar4 = plVar3 + (longlong)*(int *)(lVar2 + 0x200) * 0xb;
        for (; plVar3 != plVar4; plVar3 = plVar3 + 0xb) {
          (**(code **)(*plVar3 + 0x30))(plVar3);
        }
        plVar3 = (longlong *)(lVar2 + 0x210);
        (**(code **)(*plVar3 + 0x30))(plVar3);
        plVar4 = (longlong *)(lVar2 + 0x260);
        (**(code **)(*plVar4 + 0x30))(plVar4);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 0x9b8);
        if (*(longlong *)(lVar2 + 0x960) != 0) {
          FMemory::Free();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 0x8b0);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 0x8a8);
        FUN_141edd2d0(plVar4);
        if (*(longlong *)(lVar2 + 0x250) != 0) {
          FMemory::Free();
        }
        *plVar3 = (longlong)&PTR__scalar_deleting_destructor__143f48b30;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 0x248);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 0x240);
        FUN_141edd2d0(plVar3);
        FUN_140944f50(lVar2 + 0x148);
        FPositionVertexBuffer::~FPositionVertexBuffer(lVar2 + 0xf0);
        FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(lVar2 + 8);
        FMemory::operator_delete(lVar2,0x9d8);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    plVar5 = (longlong *)param_1[0x74];
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  FUN_14271e9f0(param_1);
  return;
}



// FUNCTION 140970480 FUN_140970480 body=198 status=ok
// SIG undefined FUN_140970480(void)

void FUN_140970480(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144171b00;
  plVar4 = (longlong *)param_1[9];
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
  plVar4 = (longlong *)param_1[6];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  plVar4 = (longlong *)param_1[2];
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
  return;
}



// FUNCTION 140970550 FUN_140970550 body=523 status=ok
// SIG undefined FUN_140970550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140970550(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  puVar6 = (undefined8 *)*param_1;
  for (iVar5 = (int)param_1[1]; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (puVar6[0xc] != 0) {
      FMemory::Free();
    }
    *puVar6 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (puVar6[10] != 0) {
      FMemory::Free();
    }
    puVar6 = puVar6 + 0x1a;
  }
  iVar5 = (int)param_2[1];
  lVar1 = *param_2;
  *(int *)(param_1 + 1) = iVar5;
  if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeForCopy(param_1,iVar5);
    puVar6 = (undefined8 *)*param_1;
    if (iVar5 != 0) {
      puVar3 = puVar6 + 5;
      puVar4 = (undefined8 *)(lVar1 + 0xb0);
      do {
        *(undefined4 *)(puVar3 + -4) = 0;
        puVar3[-3] = 0;
        *(byte *)((longlong)puVar3 + -0xc) = *(byte *)((longlong)puVar3 + -0xc) | 1;
        *(undefined4 *)(puVar3 + -2) = 5;
        *(undefined4 *)(puVar3 + -1) = 6;
        *puVar3 = puVar6;
        *(undefined1 *)(puVar3 + 1) = 3;
        puVar3[2] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        *puVar6 = &PTR_FUN_1440fbd68;
        puVar3[7] = 0;
        puVar3[8] = 0;
        uVar7 = uRam000000014686413c;
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
        *(undefined4 *)(puVar3 + 0xd) = 0;
        *(undefined4 *)((longlong)puVar3 + 0x6c) = 0;
        *(undefined4 *)(puVar3 + 0xe) = 0;
        *(uint *)((longlong)puVar3 + 0x74) = uVar7;
        uVar7 = uRam0000000146864134 & uRam0000000146864124;
        uVar8 = uRam0000000146864138 & uRam0000000146864128;
        uVar9 = uRam000000014686413c & uRam000000014686412c;
        *(uint *)(puVar3 + 0x11) = _DAT_146864130 & _DAT_146864120;
        *(uint *)((longlong)puVar3 + 0x8c) = uVar7;
        *(uint *)(puVar3 + 0x12) = uVar8;
        *(uint *)((longlong)puVar3 + 0x94) = uVar9;
        puVar3[0x13] = 0;
        puVar3[0x14] = 0;
        *(undefined4 *)(puVar3 + -2) = *(undefined4 *)(puVar4 + -0x13);
        puVar3[-3] = puVar4[-0x14];
        *(byte *)((longlong)puVar3 + -0xc) =
             *(byte *)((longlong)puVar3 + -0xc) ^
             (*(byte *)((longlong)puVar4 + -0x94) ^ *(byte *)((longlong)puVar3 + -0xc)) & 1;
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + -0x10);
        TArray<FVector,FDefaultAllocator>::operator=(puVar3 + 7,puVar4 + -10);
        uVar2 = puVar4[-7];
        puVar6 = puVar6 + 0x1a;
        puVar3[9] = puVar4[-8];
        puVar3[10] = uVar2;
        puVar3[0xb] = puVar4[-6];
        *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(puVar4 + -5);
        uVar2 = puVar4[-3];
        puVar3[0xd] = puVar4[-4];
        puVar3[0xe] = uVar2;
        uVar2 = puVar4[-1];
        puVar3[0xf] = puVar4[-2];
        puVar3[0x10] = uVar2;
        uVar2 = puVar4[1];
        puVar3[0x11] = *puVar4;
        puVar3[0x12] = uVar2;
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + 0x1a;
        puVar4 = puVar4 + 0x1a;
      } while (iVar5 != 0);
    }
  }
  return param_1;
}



// FUNCTION 140970760 FUN_140970760 body=110 status=ok
// SIG undefined FUN_140970760(void)

undefined8 * FUN_140970760(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    FUN_140976d70(param_1,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x4c);
  }
  return param_1;
}



// FUNCTION 140970800 FUN_140970800 body=97 status=ok
// SIG undefined FUN_140970800(void)

undefined8 * FUN_140970800(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1441726b8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140970870 FUN_140970870 body=97 status=ok
// SIG undefined FUN_140970870(void)

undefined8 * FUN_140970870(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1441726c8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1409708e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Audio::FEarlyReflections::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1409702b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c0);
  }
  return param_1;
}



// FUNCTION 140970920 FUN_140970920 body=52 status=ok
// SIG undefined FUN_140970920(void)

undefined8 FUN_140970920(undefined8 param_1,ulonglong param_2)

{
  FUN_140970480();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140970960 FUN_140970960 body=111 status=ok
// SIG undefined FUN_140970960(void)

longlong FUN_140970960(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x770) != 0) {
    FMemory::Free();
  }
  FUN_1409701b0(param_1 + 0x740);
  TArray<FProcMeshSection,FDefaultAllocator>::~TArray<FProcMeshSection,FDefaultAllocator>
            (param_1 + 0x730);
  *(undefined ***)(param_1 + 0x718) = &PTR_FUN_1440facf0;
  FUN_14080d1e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x780);
  }
  return param_1;
}



// FUNCTION 1409709d0 FUN_1409709d0 body=495 status=ok
// SIG undefined FUN_1409709d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409709d0(longlong param_1,void **param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [32];
  undefined **local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  byte local_dc;
  undefined4 local_d8;
  undefined ***local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  void *local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar1 = *(uint *)(param_2 + 1);
  if (3 < (int)uVar1) {
    local_d0 = &local_f8;
    local_dc = local_dc | 1;
    local_f0 = 0;
    local_f8 = &PTR_FUN_1440fbd68;
    uStack_7c = (undefined4)_DAT_1468b5d90;
    uStack_78 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    local_88 = _DAT_1468b5d90;
    uStack_74 = DAT_1468b5d98;
    uStack_80 = DAT_1468b5d98;
    local_68 = _DAT_1468b5b70;
    uStack_60 = uRam00000001468b5b78;
    local_58 = _DAT_1468b5b80;
    uStack_50 = uRam00000001468b5b88;
    local_48 = _DAT_1468b5b90;
    uStack_44 = uRam00000001468b5b94;
    uStack_40 = uRam00000001468b5b98;
    uStack_3c = uRam00000001468b5b9c;
    local_e8 = 0;
    local_e0 = 3;
    local_d8 = 6;
    local_c8 = 3;
    local_c0 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_70 = local_70 & 0xffffff00;
    local_38 = 0;
    uStack_30 = 0;
    if (&local_98 != param_2) {
      _Src = *param_2;
      local_90 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_98,uVar1,0);
        _guard_xfg_dispatch_icall_nop(local_98,_Src,(longlong)(int)uVar1 * 0xc);
      }
    }
    puVar3 = (undefined8 *)FBox::FBox(local_118,&local_98);
    iVar2 = *(int *)(param_1 + 0x748);
    local_88 = *puVar3;
    uStack_80 = *(undefined4 *)(puVar3 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
    uStack_78 = (undefined4)puVar3[2];
    uStack_74 = (undefined4)((ulonglong)puVar3[2] >> 0x20);
    local_70 = *(uint *)(puVar3 + 3);
    *(int *)(param_1 + 0x748) = iVar2 + 1;
    if (*(int *)(param_1 + 0x74c) < iVar2 + 1) {
      TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(param_1 + 0x740,iVar2);
    }
    FUN_14080b9e0((longlong)iVar2 * 0xd0 + *(longlong *)(param_1 + 0x740),&local_f8);
    FUN_140979fa0(param_1);
    if (local_98 != (void *)0x0) {
      FMemory::Free();
    }
    local_f8 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (local_a8 != 0) {
      FMemory::Free();
    }
  }
  if (*param_2 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140970bc0 BoxPlaneCompare body=243 status=ok
// SIG undefined BoxPlaneCompare(void)

int BoxPlaneCompare(float *param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (param_1[4] - param_1[1]) * 0.5;
  fVar3 = (param_1[5] - param_1[2]) * 0.5;
  fVar4 = (param_1[3] - *param_1) * 0.5;
  fVar5 = ABS(fVar4 * *param_2) + ABS(fVar2 * param_2[1]) + ABS(fVar3 * param_2[2]);
  fVar2 = ((fVar2 + param_1[1]) * param_2[1] + (fVar4 + *param_1) * *param_2 +
          (fVar3 + param_1[2]) * param_2[2]) - param_2[3];
  if (fVar2 <= fVar5) {
    iVar1 = (-fVar5 <= fVar2) - 1;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



// FUNCTION 140970cc0 FUN_140970cc0 body=104 status=ok
// SIG undefined FUN_140970cc0(void)

longlong FUN_140970cc0(longlong param_1,longlong param_2)

{
  float fVar1;
  
  FBoxSphereBounds::TransformBy(param_1 + 0x750);
  fVar1 = *(float *)(param_1 + 0x364);
  *(float *)(param_2 + 0xc) = fVar1 * *(float *)(param_2 + 0xc);
  *(float *)(param_2 + 0x10) = fVar1 * *(float *)(param_2 + 0x10);
  *(float *)(param_2 + 0x14) = fVar1 * *(float *)(param_2 + 0x14);
  *(float *)(param_2 + 0x18) = *(float *)(param_1 + 0x364) * *(float *)(param_2 + 0x18);
  return param_2;
}



// FUNCTION 140970d30 FUN_140970d30 body=7190 status=ok
// SIG undefined FUN_140970d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140970d30(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  undefined1 *puVar12;
  float *pfVar13;
  void *pvVar14;
  size_t _Size;
  float *pfVar15;
  longlong *plVar16;
  float *pfVar17;
  void *pvVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  ulonglong uVar22;
  longlong lVar23;
  void *pvVar24;
  longlong lVar25;
  uint uVar26;
  float fVar28;
  undefined1 auVar29 [16];
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStack_3a8 [32];
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float *local_378;
  float local_370;
  uint local_36c;
  float local_368;
  float *local_360;
  float *local_358;
  float local_350;
  int local_34c;
  void *local_348;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float local_334;
  float fStack_330;
  float local_32c;
  float local_328;
  float fStack_324;
  float local_320;
  float local_318;
  float fStack_314;
  float local_310;
  float *local_308;
  undefined4 uStack_300;
  float fStack_2fc;
  float local_2f8;
  longlong *local_2f0;
  float *local_2e8;
  void *local_2e0;
  float *local_2d8;
  longlong *local_2d0;
  ulonglong local_2c8;
  float *local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  float local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  float local_288;
  float fStack_284;
  float fStack_280;
  undefined4 uStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  undefined4 uStack_25c;
  float local_248;
  float local_244;
  undefined8 local_240;
  float local_238;
  float local_234;
  undefined8 local_230;
  float local_228;
  float local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208 [2];
  float *local_200;
  undefined4 local_1f8 [2];
  float *local_1f0;
  float local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  int local_1a4;
  undefined1 local_1a0 [8];
  undefined1 *local_198;
  int local_190;
  longlong local_188;
  undefined8 local_180;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  int local_154;
  undefined1 local_150 [8];
  undefined1 *local_148;
  int local_140;
  float local_138;
  int local_134;
  int local_130;
  float local_128;
  float fStack_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  ulonglong local_e8;
  float *pfVar27;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  fVar32 = *(float *)(param_1 + 1);
  local_2a0 = param_5;
  if (fVar32 != 0.0) {
    fVar21 = (float)((int)param_2[1] / 3);
    local_1d8 = 0;
    local_1d0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0xffffffff;
    local_1a4 = 0;
    local_198 = (undefined1 *)0x0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0xffffffff;
    local_154 = 0;
    local_148 = (undefined1 *)0x0;
    local_140 = 0;
    local_2e0 = (void *)0x0;
    local_348 = (void *)0x0;
    fStack_33c = 0.0;
    local_2e8 = (float *)0x0;
    local_378 = (float *)0x0;
    local_36c = 0;
    local_2c0 = (float *)0x0;
    local_358 = (float *)0x0;
    local_34c = 0;
    local_370 = fVar21;
    local_368 = fVar21;
    local_350 = fVar21;
    pvVar18 = local_2e0;
    fStack_340 = fVar21;
    local_2f8 = fVar32;
    local_2f0 = param_1;
    local_2d0 = param_2;
    local_2b8 = param_3;
    local_298 = param_4;
    if (0 < (int)fVar21) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow();
      local_2e0 = local_348;
      TArray<FRotator,FDefaultAllocator>::ResizeGrow();
      local_2e8 = local_378;
      TArray<FRotator,FDefaultAllocator>::ResizeGrow();
      local_2c0 = local_358;
      pvVar18 = local_348;
    }
    local_348 = pvVar18;
    local_384 = 0.0;
    if (0 < (int)fVar21) {
      local_380 = (float)((int)fVar32 - 1);
      local_358 = local_2c0;
      do {
        local_2d8 = (float *)0x0;
        local_308 = &local_128;
        local_388 = 0.0;
        fVar32 = local_384;
        do {
          pfVar10 = (float *)0x0;
          local_378 = (float *)0x0;
          lVar9 = (longlong)((int)local_388 + (int)fVar32 * 3);
          uVar26 = 0;
          local_36c = 0;
          fVar21 = local_380;
          if (*(int *)(*param_2 + lVar9 * 4) <= (int)local_380) {
            fVar21 = *(float *)(*param_2 + lVar9 * 4);
          }
          (&local_138)[(longlong)local_2d8] = fVar21;
          uVar2 = *(undefined8 *)(*local_2f0 + (longlong)(int)fVar21 * 0xc);
          fVar20 = *(float *)(*local_2f0 + 8 + (longlong)(int)fVar21 * 0xc);
          *(undefined8 *)local_308 = uVar2;
          local_308[2] = fVar20;
          local_338 = fVar21;
          if ((int)fVar21 < (int)local_2f0[1]) {
            pfVar15 = pfVar10;
            local_2b0 = uVar2;
            local_2a8 = fVar20;
            if (0 < (int)local_2f0[1]) {
              local_2b0._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
              fVar28 = local_2b0._4_4_;
              local_2b0._0_4_ = (float)uVar2;
              fVar30 = (float)local_2b0;
              pfVar13 = pfVar10;
              pfVar17 = pfVar10;
              plVar19 = local_2f0;
              pfVar27 = pfVar10;
              do {
                lVar9 = *plVar19;
                if (((0.0001 < ABS(fVar30 - *(float *)(lVar9 + (longlong)pfVar17))) ||
                    (0.0001 < ABS(fVar28 - *(float *)(lVar9 + 4 + (longlong)pfVar17)))) ||
                   (0.0001 < ABS(fVar20 - *(float *)(lVar9 + 8 + (longlong)pfVar17)))) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  iVar8 = (int)pfVar15;
                  local_370 = (float)(iVar8 + 1);
                  if ((int)pfVar10 < (int)local_370) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_378,pfVar15);
                    pfVar10 = (float *)(ulonglong)local_36c;
                    pfVar13 = local_378;
                    plVar19 = local_2f0;
                  }
                  pfVar15 = (float *)(ulonglong)(uint)local_370;
                  pfVar13[iVar8] = SUB84(pfVar27,0);
                }
                uVar26 = (int)SUB84(pfVar27,0) + 1;
                pfVar27 = (float *)(ulonglong)uVar26;
                pfVar17 = pfVar17 + 3;
              } while ((int)uVar26 < (int)plVar19[1]);
            }
            uVar26 = (uint)pfVar15;
          }
          pfVar10 = local_378;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(&local_1d8,(int)local_1d0 - local_1a4,0);
          if (local_190 == 0) {
LAB_140971174:
            TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::AddUninitialized(&local_1d8,local_208);
            pfVar15 = local_200;
            *local_200 = fVar21;
            local_200[1] = fVar32;
            local_200[2] = -NAN;
            cVar7 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                    ::ConditionalRehash(&local_1d8,(int)local_1d0 - local_1a4,0);
            if (cVar7 == '\0') {
              fVar20 = (float)(local_190 - 1U & (uint)*pfVar15);
              pfVar15[3] = fVar20;
              puVar12 = local_1a0;
              if (local_198 != (undefined1 *)0x0) {
                puVar12 = local_198;
              }
              pfVar15[2] = *(float *)(puVar12 + (longlong)(int)(local_190 - 1U & (uint)fVar20) * 4);
              puVar12 = local_1a0;
              if (local_198 != (undefined1 *)0x0) {
                puVar12 = local_198;
              }
              *(undefined4 *)(puVar12 + (longlong)(int)(local_190 - 1U & (uint)fVar20) * 4) =
                   local_208[0];
            }
          }
          else {
            puVar12 = local_1a0;
            if (local_198 != (undefined1 *)0x0) {
              puVar12 = local_198;
            }
            iVar8 = *(int *)(puVar12 + (longlong)(int)(local_190 - 1U & (uint)fVar21) * 4);
            do {
              iVar11 = iVar8;
              if (iVar11 == -1) goto LAB_140971174;
              iVar8 = *(int *)(local_1d8 + 8 + (longlong)iVar11 * 0x10);
            } while (*(float *)(local_1d8 + (longlong)iVar11 * 0x10) != fVar21);
            if (iVar11 == -1) goto LAB_140971174;
            while (*(float *)(local_1d8 + 4 + (longlong)iVar11 * 0x10) != fVar32) {
              do {
                iVar11 = iVar8;
                if (iVar11 == -1) goto LAB_140971174;
                iVar8 = *(int *)(local_1d8 + 8 + (longlong)iVar11 * 0x10);
              } while (*(float *)(local_1d8 + (longlong)iVar11 * 0x10) != fVar21);
            }
            if ((longlong)iVar11 * 0x10 + 4 + local_1d8 == 0) goto LAB_140971174;
          }
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(&local_188,(int)local_180 - local_154,0);
          if (local_140 == 0) {
LAB_140971304:
            TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::AddUninitialized(&local_188,local_1f8);
            pfVar15 = local_1f0;
            *local_1f0 = fVar21;
            local_1f0[1] = fVar32;
            local_1f0[2] = -NAN;
            cVar7 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                    ::ConditionalRehash(&local_188,(int)local_180 - local_154,0);
            if (cVar7 == '\0') {
              fVar21 = (float)(local_140 - 1U & (uint)*pfVar15);
              pfVar15[3] = fVar21;
              puVar12 = local_150;
              if (local_148 != (undefined1 *)0x0) {
                puVar12 = local_148;
              }
              pfVar15[2] = *(float *)(puVar12 + (longlong)(int)(local_140 - 1U & (uint)fVar21) * 4);
              puVar12 = local_150;
              if (local_148 != (undefined1 *)0x0) {
                puVar12 = local_148;
              }
              *(undefined4 *)(puVar12 + (longlong)(int)(local_140 - 1U & (uint)fVar21) * 4) =
                   local_1f8[0];
            }
          }
          else {
            puVar12 = local_150;
            if (local_148 != (undefined1 *)0x0) {
              puVar12 = local_148;
            }
            iVar8 = *(int *)(puVar12 + (longlong)(int)(local_140 - 1U & (uint)fVar21) * 4);
            do {
              iVar11 = iVar8;
              if (iVar11 == -1) goto LAB_140971304;
              iVar8 = *(int *)(local_188 + 8 + (longlong)iVar11 * 0x10);
            } while (*(float *)(local_188 + (longlong)iVar11 * 0x10) != fVar21);
            if (iVar11 == -1) goto LAB_140971304;
            while (*(float *)(local_188 + 4 + (longlong)iVar11 * 0x10) != fVar32) {
              do {
                iVar11 = iVar8;
                if (iVar11 == -1) goto LAB_140971304;
                iVar8 = *(int *)(local_188 + 8 + (longlong)iVar11 * 0x10);
              } while (*(float *)(local_188 + (longlong)iVar11 * 0x10) != fVar21);
            }
            if ((longlong)iVar11 * 0x10 + 4 + local_188 == 0) goto LAB_140971304;
          }
          if (0 < (int)uVar26) {
            local_2c8 = (ulonglong)uVar26;
            do {
              pvVar18 = (void *)0x0;
              local_37c = *pfVar10;
              local_360 = pfVar10;
              TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>::
              EmplaceUnique<int_const_&,int_const_&>(&local_188,&local_37c,&local_384);
              local_348 = (void *)0x0;
              fStack_33c = 0.0;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
              ConditionalRehash(&local_1d8,(int)local_1d0 - local_1a4,0);
              fVar32 = local_37c;
              if (local_190 != 0) {
                puVar12 = local_1a0;
                if (local_198 != (undefined1 *)0x0) {
                  puVar12 = local_198;
                }
                fVar21 = *(float *)(puVar12 + (longlong)(int)(local_190 - 1U & (uint)local_37c) * 4)
                ;
                do {
                  fVar20 = fVar21;
                  if (fVar20 == -NAN) goto LAB_14097156e;
                  fVar21 = *(float *)(local_1d8 + 8 + (longlong)(int)fVar20 * 0x10);
                } while (*(float *)(local_1d8 + (longlong)(int)fVar20 * 0x10) != local_37c);
                lVar9 = local_1d8;
                pvVar24 = pvVar18;
                fVar30 = fStack_33c;
                if (fVar20 != -NAN) {
LAB_1409714b0:
                  iVar8 = (int)pvVar18;
                  fStack_340 = (float)(iVar8 + 1);
                  local_37c = fVar21;
                  if ((int)fVar30 < (int)fStack_340) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_348,pvVar18);
                    lVar9 = local_1d8;
                    pvVar24 = local_348;
                    fVar30 = fStack_33c;
                  }
                  pvVar18 = (void *)(ulonglong)(uint)fStack_340;
                  puVar1 = (undefined4 *)((longlong)pvVar24 + (longlong)iVar8 * 4);
                  fVar28 = fVar21;
                  if (puVar1 != (undefined4 *)0x0) {
                    *puVar1 = *(undefined4 *)(lVar9 + 4 + (longlong)(int)fVar20 * 0x10);
                    fVar28 = local_37c;
                    lVar9 = local_1d8;
                  }
joined_r0x00014097150f:
                  fVar20 = fVar28;
                  if (fVar21 != -NAN) goto LAB_140971511;
                  pvVar14 = pvVar24;
                  if (0 < (int)fStack_340) {
                    do {
                      TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>
                      ::EmplaceUnique<int_const_&,int_const_&>(&local_188,&local_338,pvVar14);
                      pvVar18 = (void *)((longlong)pvVar18 - 1);
                      pvVar14 = (void *)((longlong)pvVar14 + 4);
                    } while (pvVar18 != (void *)0x0);
                  }
                  if (pvVar24 != (void *)0x0) {
                    FMemory::Free(pvVar24);
                  }
                }
              }
LAB_14097156e:
              pfVar10 = local_360 + 1;
              local_2c8 = local_2c8 - 1;
            } while (local_2c8 != 0);
            local_2c8 = 0;
            fVar32 = local_384;
            local_360 = pfVar10;
          }
          if (local_378 != (float *)0x0) {
            FMemory::Free(local_378);
          }
          fVar30 = local_120;
          fVar20 = fStack_124;
          fVar21 = local_128;
          param_2 = local_2d0;
          local_388 = (float)((int)local_388 + 1);
          local_2d8 = (float *)((longlong)local_2d8 + 1);
          local_308 = local_308 + 3;
        } while ((longlong)local_2d8 < 3);
        fVar34 = local_128 - local_110;
        local_37c = local_11c;
        local_384 = local_118;
        local_338 = local_10c;
        fVar38 = fStack_124 - local_10c;
        local_2c8 = CONCAT44(local_2c8._4_4_,local_114);
        local_388 = local_108;
        fVar42 = local_120 - local_108;
        local_318 = (local_118 - local_10c) * fVar42 - (local_114 - local_108) * fVar38;
        fStack_314 = (local_114 - local_108) * fVar34 - (local_11c - local_110) * fVar42;
        local_310 = (local_11c - local_110) * fVar38 - (local_118 - local_10c) * fVar34;
        fVar28 = local_318 * local_318 + fStack_314 * fStack_314 + local_310 * local_310;
        if (fVar28 != 1.0) {
          if (1e-08 <= fVar28) {
            auVar29 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
            fVar31 = auVar29._0_4_;
            fVar31 = fVar31 + fVar31 * (0.5 - fVar28 * 0.5 * fVar31 * fVar31);
            fVar31 = fVar31 + fVar31 * (0.5 - fVar28 * 0.5 * fVar31 * fVar31);
            local_360 = (float *)CONCAT44(local_360._4_4_,fVar31);
            local_318 = fVar31 * local_318;
            fStack_314 = fVar31 * fStack_314;
            local_310 = fVar31 * local_310;
          }
          else {
            local_318 = DAT_1468b5d90;
            fStack_314 = DAT_1468b5d94;
            local_310 = DAT_1468b5d98;
          }
        }
        if ((int)local_2b8[1] == (int)local_2f0[1]) {
          lVar9 = *local_2b8;
          fVar48 = local_110 - local_128;
          local_228 = *(float *)(lVar9 + (longlong)(int)local_138 * 8);
          local_224 = *(float *)(lVar9 + 4 + (longlong)(int)local_138 * 8);
          fVar31 = local_10c - fStack_124;
          fVar33 = local_108 - local_120;
          local_248 = *(float *)(lVar9 + (longlong)local_134 * 8) - local_228;
          local_244 = *(float *)(lVar9 + 4 + (longlong)local_134 * 8) - local_224;
          fVar45 = local_11c - local_128;
          fVar46 = local_118 - fStack_124;
          fVar47 = local_114 - local_120;
          local_238 = *(float *)(lVar9 + (longlong)local_130 * 8) - local_228;
          local_234 = *(float *)(lVar9 + 4 + (longlong)local_130 * 8) - local_224;
          uStack_27c = 0;
          uStack_26c = 0;
          uStack_25c = 0;
          local_240 = 0;
          local_230 = 0;
          local_220 = 0x3f800000;
          local_218 = 0;
          uStack_214 = 0;
          uStack_210 = 0;
          uStack_20c = 0x3f800000;
          pfVar10 = (float *)FMatrix::Inverse(0,&local_128);
          fVar28 = *pfVar10;
          fStack_2fc = pfVar10[1];
          fVar34 = pfVar10[2];
          fVar38 = pfVar10[3];
          local_268 = fVar21;
          fStack_264 = fVar20;
          fStack_260 = fVar30;
          fVar49 = fStack_2fc * fVar48 + fVar28 * fVar45 + fVar34 * fVar21 + fVar38 * 0.0;
          fVar50 = fStack_2fc * fVar31 + fVar28 * fVar46 + fVar34 * fVar20 + fVar38 * 0.0;
          fVar51 = fStack_2fc * fVar33 + fVar28 * fVar47 + fVar34 * fVar30 + fVar38 * 0.0;
          fVar28 = pfVar10[4];
          fVar34 = pfVar10[5];
          fVar38 = pfVar10[6];
          fVar42 = pfVar10[7];
          fVar35 = fVar34 * fVar48 + fVar28 * fVar45 + fVar38 * fVar21 + fVar42 * 0.0;
          fVar36 = fVar34 * fVar31 + fVar28 * fVar46 + fVar38 * fVar20 + fVar42 * 0.0;
          fVar37 = fVar34 * fVar33 + fVar28 * fVar47 + fVar38 * fVar30 + fVar42 * 0.0;
          fVar28 = pfVar10[8];
          fVar34 = pfVar10[9];
          fVar38 = pfVar10[10];
          fVar42 = pfVar10[0xb];
          fVar39 = fVar34 * fVar48 + fVar28 * fVar45 + fVar38 * fVar21 + fVar42 * 0.0;
          fVar40 = fVar34 * fVar31 + fVar28 * fVar46 + fVar38 * fVar20 + fVar42 * 0.0;
          fVar41 = fVar34 * fVar33 + fVar28 * fVar47 + fVar38 * fVar30 + fVar42 * 0.0;
          fVar28 = pfVar10[0xc];
          fVar34 = pfVar10[0xd];
          fVar38 = pfVar10[0xe];
          fVar42 = pfVar10[0xf];
          fVar43 = fVar34 * fVar48 + fVar28 * fVar45 + fVar38 * fVar21 + fVar42 * 0.0;
          fVar44 = fVar34 * fVar31 + fVar28 * fVar46 + fVar38 * fVar20 + fVar42 * 0.0;
          fVar28 = fVar34 * fVar33 + fVar28 * fVar47 + fVar38 * fVar30 + fVar42 * 0.0;
          fVar20 = fVar43 * 0.0 + fVar39 * 0.0 + fVar35 * 0.0 + fVar49 * 1.0;
          fVar30 = fVar44 * 0.0 + fVar40 * 0.0 + fVar36 * 0.0 + fVar50 * 1.0;
          local_1e0 = fVar28 * 0.0 + fVar41 * 0.0 + fVar37 * 0.0 + fVar51 * 1.0;
          fVar21 = fVar30 * fVar30 + fVar20 * fVar20 + local_1e0 * local_1e0;
          if (fVar21 <= 1e-08) {
            fVar20 = 0.0;
            fVar30 = 0.0;
            local_1e0 = 0.0;
          }
          else {
            auVar29 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
            fVar34 = auVar29._0_4_;
            fVar34 = fVar34 + fVar34 * (0.5 - fVar21 * 0.5 * fVar34 * fVar34);
            fVar34 = fVar34 + fVar34 * (0.5 - fVar21 * 0.5 * fVar34 * fVar34);
            local_360 = (float *)CONCAT44(local_360._4_4_,fVar34);
            fVar20 = fVar20 * fVar34;
            fVar30 = fVar30 * fVar34;
            local_1e0 = local_1e0 * fVar34;
          }
          uStack_300 = 0;
          lVar9 = (longlong)(int)fVar32 * 0xc;
          *(ulonglong *)((longlong)local_2e0 + lVar9) = CONCAT44(fVar30,fVar20);
          *(float *)((longlong)local_2e0 + lVar9 + 8) = local_1e0;
          fVar20 = fVar43 * 0.0 + fVar39 * 0.0 + fVar35 * 1.0 + fVar49 * 0.0;
          fVar30 = fVar44 * 0.0 + fVar40 * 0.0 + fVar36 * 1.0 + fVar50 * 0.0;
          local_350 = fVar28 * 0.0 + fVar41 * 0.0 + fVar37 * 1.0 + fVar51 * 0.0;
          fVar21 = fVar30 * fVar30 + fVar20 * fVar20 + local_350 * local_350;
          local_288 = fVar45;
          fStack_284 = fVar46;
          fStack_280 = fVar47;
          local_278 = fVar48;
          fStack_274 = fVar31;
          fStack_270 = fVar33;
          if (fVar21 <= 1e-08) {
            local_350 = 0.0;
            fVar21 = 0.0;
            fVar20 = 0.0;
            fVar30 = 0.0;
          }
          else {
            auVar29 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
            fVar28 = auVar29._0_4_;
            fVar28 = fVar28 + fVar28 * (0.5 - fVar21 * 0.5 * fVar28 * fVar28);
            fVar28 = fVar28 + fVar28 * (0.5 - fVar21 * 0.5 * fVar28 * fVar28);
            local_360 = (float *)CONCAT44(local_360._4_4_,fVar28);
            local_350 = fVar28 * local_350;
            fVar21 = fVar28 * fVar20;
            fVar20 = fVar28 * fVar30;
            fVar30 = local_350;
          }
        }
        else {
          fVar21 = fVar34 * fVar34 + fVar38 * fVar38 + fVar42 * fVar42;
          local_334 = fVar34;
          fStack_330 = fVar38;
          local_32c = fVar42;
          if (fVar21 != 1.0) {
            if (1e-08 <= fVar21) {
              auVar29 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
              fVar20 = auVar29._0_4_;
              fVar20 = fVar20 + fVar20 * (0.5 - fVar21 * 0.5 * fVar20 * fVar20);
              fVar20 = fVar20 + fVar20 * (0.5 - fVar21 * 0.5 * fVar20 * fVar20);
              local_360 = (float *)CONCAT44(local_360._4_4_,fVar20);
              local_334 = fVar20 * fVar34;
              fStack_330 = fVar20 * fVar38;
              local_32c = fVar20 * fVar42;
            }
            else {
              local_32c = DAT_1468b5d98;
              local_334 = DAT_1468b5d90;
              fStack_330 = DAT_1468b5d94;
            }
          }
          *(ulonglong *)((longlong)local_2e0 + (longlong)(int)fVar32 * 0xc) =
               CONCAT44(fStack_330,local_334);
          lVar9 = (longlong)(int)fVar32 * 0xc;
          *(float *)((longlong)local_2e0 + lVar9 + 8) = local_32c;
          fVar30 = *(float *)((longlong)local_2e0 + lVar9 + 4);
          fVar20 = *(float *)((longlong)local_2e0 + lVar9 + 8);
          fVar21 = fVar30 * local_310 - fVar20 * fStack_314;
          fVar20 = fVar20 * local_318 - *(float *)((longlong)local_2e0 + lVar9) * local_310;
          fVar30 = *(float *)((longlong)local_2e0 + lVar9) * fStack_314 - fVar30 * local_318;
          fVar28 = fVar21 * fVar21 + fVar20 * fVar20 + fVar30 * fVar30;
          local_328 = fVar21;
          fStack_324 = fVar20;
          local_320 = fVar30;
          if (fVar28 != 1.0) {
            if (1e-08 <= fVar28) {
              auVar29 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
              fVar34 = auVar29._0_4_;
              fVar34 = fVar34 + fVar34 * (0.5 - fVar28 * 0.5 * fVar34 * fVar34);
              fVar34 = fVar34 + fVar34 * (0.5 - fVar28 * 0.5 * fVar34 * fVar34);
              local_360 = (float *)CONCAT44(local_360._4_4_,fVar34);
              fVar21 = fVar21 * fVar34;
              fVar20 = fVar20 * fVar34;
              fVar30 = fVar30 * fVar34;
              local_328 = fVar21;
              fStack_324 = fVar20;
              local_320 = fVar30;
            }
            else {
              local_328 = DAT_1468b5d90;
              local_320 = DAT_1468b5d98;
              fStack_324 = DAT_1468b5d94;
              fVar21 = DAT_1468b5d90;
              fVar20 = DAT_1468b5d94;
              fVar30 = DAT_1468b5d98;
            }
          }
        }
        local_384 = (float)((int)fVar32 + 1);
        *(ulonglong *)((longlong)local_2e8 + lVar9) = CONCAT44(fVar20,fVar21);
        *(float *)((longlong)local_2e8 + lVar9 + 8) = fVar30;
        *(ulonglong *)((longlong)local_2c0 + lVar9) = CONCAT44(fStack_314,local_318);
        *(float *)((longlong)local_2c0 + lVar9 + 8) = local_310;
        fVar32 = local_2f8;
        if ((int)local_368 <= (int)local_384) break;
      } while( true );
    }
    local_2d0 = (void *)0x0;
    local_348 = (void *)0x0;
    fStack_33c = 0.0;
    local_2d8 = (float *)0x0;
    local_378 = (float *)0x0;
    local_36c = 0;
    local_308 = (float *)0x0;
    local_358 = (float *)0x0;
    local_34c = 0;
    fStack_340 = fVar32;
    if (0 < (int)fVar32) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_348);
      local_2d0 = local_348;
    }
    plVar19 = local_2d0;
    plVar16 = (longlong *)(longlong)(int)fVar32;
    _Size = (longlong)plVar16 * 0xc;
    local_348 = local_2d0;
    local_2b8 = plVar16;
    _guard_xfg_dispatch_icall_nop(local_2d0,0,_Size);
    pfVar10 = (float *)0x0;
    local_370 = fVar32;
    if (0 < (int)fVar32) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_378);
      local_2d8 = local_378;
      pfVar10 = local_378;
    }
    _guard_xfg_dispatch_icall_nop(pfVar10,0,_Size);
    pfVar15 = (float *)0x0;
    local_350 = fVar32;
    if (0 < (int)fVar32) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_358);
      local_308 = local_358;
      pfVar15 = local_358;
    }
    _guard_xfg_dispatch_icall_nop(pfVar15,0,_Size);
    local_384 = 0.0;
    if (0 < (int)local_2f0[1]) {
      pfVar13 = pfVar15 + 2;
      lVar9 = (longlong)plVar19 - (longlong)pfVar15;
      lVar25 = (longlong)pfVar10 - (longlong)pfVar15;
      do {
        fVar32 = local_384;
        uVar22 = 0;
        local_358 = (float *)0x0;
        local_34c = 0;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
        ConditionalRehash(&local_188,(int)local_180 - local_154,0);
        if (local_140 != 0) {
          puVar12 = local_150;
          if (local_148 != (undefined1 *)0x0) {
            puVar12 = local_148;
          }
          fVar21 = *(float *)(puVar12 + (longlong)(int)(local_140 - 1U & (uint)fVar32) * 4);
          do {
            fVar20 = fVar21;
            if (fVar20 == -NAN) goto LAB_1409721f8;
            fVar21 = *(float *)(local_188 + 8 + (longlong)(int)fVar20 * 0x10);
          } while (*(float *)(local_188 + (longlong)(int)fVar20 * 0x10) != fVar32);
          lVar23 = local_188;
          pfVar10 = local_358;
          iVar8 = local_34c;
          if (fVar20 != -NAN) {
            do {
              local_368 = (float)uVar22;
              local_350 = (float)((int)local_368 + 1);
              local_388 = fVar21;
              local_380 = fVar21;
              if (iVar8 < (int)local_350) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_358,uVar22);
                lVar23 = local_188;
                pfVar10 = local_358;
                iVar8 = local_34c;
              }
              uVar22 = (ulonglong)(uint)local_350;
              fVar30 = local_380;
              if (pfVar10 + (int)local_368 != (float *)0x0) {
                pfVar10[(int)local_368] = *(float *)(lVar23 + 4 + (longlong)(int)fVar20 * 0x10);
                fVar30 = local_388;
                lVar23 = local_188;
              }
              do {
                fVar20 = fVar30;
                if (fVar21 == -NAN) {
                  if (0 < (int)local_350) {
                    do {
                      lVar23 = (longlong)(int)*pfVar10;
                      pfVar10 = pfVar10 + 1;
                      pfVar13[-2] = pfVar13[-2] + local_2c0[lVar23 * 3];
                      pfVar13[-1] = local_2c0[lVar23 * 3 + 1] + pfVar13[-1];
                      *pfVar13 = local_2c0[lVar23 * 3 + 2] + *pfVar13;
                      uVar22 = uVar22 - 1;
                      fVar32 = local_384;
                    } while (uVar22 != 0);
                  }
                  goto LAB_1409721f8;
                }
                fVar21 = *(float *)(lVar23 + 8 + (longlong)(int)fVar21 * 0x10);
                fVar30 = fVar21;
              } while (*(float *)(lVar23 + (longlong)(int)fVar20 * 0x10) != fVar32);
            } while( true );
          }
        }
LAB_1409721f8:
        uVar22 = 0;
        local_378 = (float *)0x0;
        local_36c = 0;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
        ConditionalRehash(&local_1d8,(int)local_1d0 - local_1a4,0);
        if (local_190 != 0) {
          puVar12 = local_1a0;
          if (local_198 != (undefined1 *)0x0) {
            puVar12 = local_198;
          }
          fVar21 = *(float *)(puVar12 + (longlong)(int)(local_190 - 1U & (uint)fVar32) * 4);
          do {
            fVar20 = fVar21;
            if (fVar20 == -NAN) goto LAB_140972416;
            fVar21 = *(float *)(local_1d8 + 8 + (longlong)(int)fVar20 * 0x10);
          } while (*(float *)(local_1d8 + (longlong)(int)fVar20 * 0x10) != fVar32);
          lVar23 = local_1d8;
          pfVar10 = local_378;
          uVar26 = local_36c;
          if (fVar20 != -NAN) {
LAB_1409722c0:
            local_368 = (float)uVar22;
            local_370 = (float)((int)local_368 + 1);
            local_388 = fVar21;
            local_380 = fVar21;
            if ((int)uVar26 < (int)local_370) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_378,uVar22);
              lVar23 = local_1d8;
              pfVar10 = local_378;
              uVar26 = local_36c;
            }
            uVar22 = (ulonglong)(uint)local_370;
            fVar30 = local_380;
            if (pfVar10 + (int)local_368 != (float *)0x0) {
              pfVar10[(int)local_368] = *(float *)(lVar23 + 4 + (longlong)(int)fVar20 * 0x10);
              fVar30 = local_388;
              lVar23 = local_1d8;
            }
joined_r0x00014097232a:
            fVar20 = fVar30;
            if (fVar21 != -NAN) goto LAB_140972330;
            pfVar15 = pfVar10;
            if (0 < (int)local_370) {
              do {
                lVar23 = (longlong)(int)*pfVar10;
                pfVar10 = pfVar10 + 1;
                *(float *)(lVar9 + -8 + (longlong)pfVar13) =
                     *(float *)((longlong)local_2e0 + lVar23 * 0xc) +
                     *(float *)(lVar9 + -8 + (longlong)pfVar13);
                *(float *)(lVar9 + -4 + (longlong)pfVar13) =
                     *(float *)((longlong)local_2e0 + lVar23 * 0xc + 4) +
                     *(float *)(lVar9 + -4 + (longlong)pfVar13);
                *(float *)(lVar9 + (longlong)pfVar13) =
                     *(float *)((longlong)local_2e0 + lVar23 * 0xc + 8) +
                     *(float *)(lVar9 + (longlong)pfVar13);
                *(float *)((longlong)pfVar13 + lVar25 + -8) =
                     local_2e8[lVar23 * 3] + *(float *)((longlong)pfVar13 + lVar25 + -8);
                *(float *)((longlong)pfVar13 + lVar25 + -4) =
                     local_2e8[lVar23 * 3 + 1] + *(float *)((longlong)pfVar13 + lVar25 + -4);
                *(float *)((longlong)pfVar13 + lVar25) =
                     local_2e8[lVar23 * 3 + 2] + *(float *)((longlong)pfVar13 + lVar25);
                uVar22 = uVar22 - 1;
                pfVar15 = local_378;
                fVar32 = local_384;
              } while (uVar22 != 0);
            }
            if (pfVar15 != (float *)0x0) {
              FMemory::Free(pfVar15);
            }
          }
        }
LAB_140972416:
        if (local_358 != (float *)0x0) {
          FMemory::Free(local_358);
        }
        local_384 = (float)((int)fVar32 + 1);
        pfVar13 = pfVar13 + 3;
        plVar16 = local_2b8;
        plVar19 = local_2d0;
        pfVar10 = local_2d8;
        pfVar15 = local_308;
      } while ((int)local_384 < (int)local_2f0[1]);
    }
    plVar6 = local_298;
    iVar11 = 0;
    iVar8 = *(int *)((longlong)local_298 + 0xc);
    if ((iVar8 < 0) && (*(undefined4 *)(local_298 + 1) = 0, iVar8 != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (local_298,0);
      iVar11 = (int)plVar6[1];
      iVar8 = *(int *)((longlong)plVar6 + 0xc);
    }
    fVar32 = local_2f8;
    *(int *)(plVar6 + 1) = iVar11 + (int)local_2f8;
    if (iVar8 < iVar11 + (int)local_2f8) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow();
    }
    plVar5 = local_2a0;
    *(undefined4 *)(local_2a0 + 1) = 0;
    if (0x7fffffff < *(uint *)((longlong)local_2a0 + 0xc)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(local_2a0,0);
    }
    iVar8 = (int)plVar5[1] + (int)fVar32;
    *(int *)(plVar5 + 1) = iVar8;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5);
    }
    if (0 < (longlong)plVar16) {
      pfVar13 = (float *)((longlong)plVar19 + 8);
      lVar9 = (longlong)pfVar15 - (longlong)plVar19;
      lVar25 = (longlong)pfVar10 - (longlong)plVar19;
      lVar23 = 0;
      do {
        fVar32 = pfVar13[-1];
        fVar21 = pfVar13[-2];
        fVar20 = *pfVar13;
        fVar30 = fVar21 * fVar21 + fVar32 * fVar32 + fVar20 * fVar20;
        if (1e-08 < fVar30) {
          auVar29 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
          fVar28 = auVar29._0_4_;
          fVar28 = fVar28 + fVar28 * (0.5 - fVar30 * 0.5 * fVar28 * fVar28);
          fVar28 = fVar28 + fVar28 * (0.5 - fVar30 * 0.5 * fVar28 * fVar28);
          pfVar13[-2] = fVar21 * fVar28;
          pfVar13[-1] = fVar32 * fVar28;
          *pfVar13 = fVar20 * fVar28;
        }
        fVar32 = *(float *)(lVar9 + -4 + (longlong)pfVar13);
        fVar21 = *(float *)(lVar9 + -8 + (longlong)pfVar13);
        fVar20 = *(float *)(lVar9 + (longlong)pfVar13);
        fVar30 = fVar21 * fVar21 + fVar32 * fVar32 + fVar20 * fVar20;
        if (1e-08 < fVar30) {
          auVar29 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
          fVar28 = auVar29._0_4_;
          fVar28 = fVar28 + fVar28 * (0.5 - fVar30 * 0.5 * fVar28 * fVar28);
          fVar28 = fVar28 + fVar28 * (0.5 - fVar30 * 0.5 * fVar28 * fVar28);
          *(float *)(lVar9 + -8 + (longlong)pfVar13) = fVar21 * fVar28;
          *(float *)(lVar9 + -4 + (longlong)pfVar13) = fVar32 * fVar28;
          *(float *)(lVar9 + (longlong)pfVar13) = fVar20 * fVar28;
        }
        lVar3 = *plVar6;
        *(undefined8 *)((longlong)pfVar13 + lVar3 + -(longlong)plVar19 + -8) =
             *(undefined8 *)(lVar9 + -8 + (longlong)pfVar13);
        *(undefined4 *)((longlong)pfVar13 + lVar3 + -(longlong)plVar19) =
             *(undefined4 *)(lVar9 + (longlong)pfVar13);
        fVar32 = *(float *)(lVar9 + -4 + (longlong)pfVar13);
        fVar21 = *(float *)(lVar9 + -8 + (longlong)pfVar13);
        fVar20 = fVar21 * pfVar13[-2] + fVar32 * pfVar13[-1] +
                 *(float *)(lVar9 + (longlong)pfVar13) * *pfVar13;
        fVar21 = pfVar13[-2] - fVar21 * fVar20;
        fVar32 = pfVar13[-1] - fVar32 * fVar20;
        fVar30 = *pfVar13 - *(float *)(lVar9 + (longlong)pfVar13) * fVar20;
        pfVar13[-2] = fVar21;
        pfVar13[-1] = fVar32;
        *pfVar13 = fVar30;
        fVar20 = fVar32 * fVar32 + fVar21 * fVar21 + fVar30 * fVar30;
        if (1e-08 < fVar20) {
          auVar29 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
          fVar28 = auVar29._0_4_;
          fVar28 = fVar28 + fVar28 * (0.5 - fVar20 * 0.5 * fVar28 * fVar28);
          fVar28 = fVar28 + fVar28 * (0.5 - fVar20 * 0.5 * fVar28 * fVar28);
          fVar21 = fVar28 * fVar21;
          fVar32 = fVar28 * fVar32;
          fVar30 = fVar28 * fVar30;
          pfVar13[-2] = fVar21;
          pfVar13[-1] = fVar32;
          *pfVar13 = fVar30;
        }
        fVar20 = *(float *)(lVar9 + -4 + (longlong)pfVar13);
        fVar28 = *(float *)(lVar9 + -8 + (longlong)pfVar13);
        fStack_340 = *pfVar13;
        pfVar17 = pfVar13 + -2;
        fVar34 = pfVar13[-1];
        local_348 = *(void **)pfVar17;
        fStack_33c = (float)CONCAT31(fStack_33c._1_3_,
                                     (fVar20 * fVar30 -
                                     *(float *)(lVar9 + (longlong)pfVar13) * fVar32) *
                                     *(float *)(lVar25 + -8 + (longlong)pfVar13) +
                                     (*(float *)(lVar9 + (longlong)pfVar13) * fVar21 -
                                     fVar28 * fVar30) * *(float *)(lVar25 + -4 + (longlong)pfVar13)
                                     + (fVar28 * fVar32 - fVar20 * fVar21) *
                                       *(float *)(lVar25 + (longlong)pfVar13) < 0.0);
        pfVar13 = pfVar13 + 3;
        pfVar27 = (float *)(lVar23 + *plVar5);
        *pfVar27 = *pfVar17;
        pfVar27[1] = fVar34;
        pfVar27[2] = fStack_340;
        pfVar27[3] = fStack_33c;
        lVar23 = lVar23 + 0x10;
        plVar16 = (longlong *)((longlong)plVar16 + -1);
      } while (plVar16 != (longlong *)0x0);
    }
    if (pfVar15 != (float *)0x0) {
      FMemory::Free(pfVar15);
    }
    if (pfVar10 != (float *)0x0) {
      FMemory::Free(pfVar10);
    }
    if (plVar19 != (void *)0x0) {
      FMemory::Free(plVar19);
    }
    if (local_2c0 != (float *)0x0) {
      FMemory::Free(local_2c0);
    }
    if (local_2e8 != (float *)0x0) {
      FMemory::Free(local_2e8);
    }
    if (local_2e0 != (void *)0x0) {
      FMemory::Free(local_2e0);
    }
    local_140 = 0;
    if (local_148 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_188);
    local_190 = 0;
    if (local_198 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_1d8);
  }
  return;
LAB_140971511:
  fVar21 = *(float *)(lVar9 + 8 + (longlong)(int)fVar21 * 0x10);
  fVar28 = fVar21;
  if (*(float *)(lVar9 + (longlong)(int)fVar20 * 0x10) == fVar32) goto LAB_1409714b0;
  goto joined_r0x00014097150f;
LAB_140972330:
  fVar21 = *(float *)(lVar23 + 8 + (longlong)(int)fVar21 * 0x10);
  fVar30 = fVar21;
  if (*(float *)(lVar23 + (longlong)(int)fVar20 * 0x10) == fVar32) goto LAB_1409722c0;
  goto joined_r0x00014097232a;
}



// FUNCTION 140972960 FUN_140972960 body=161 status=ok
// SIG undefined FUN_140972960(void)

void FUN_140972960(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x730);
  for (iVar2 = *(int *)(param_1 + 0x738); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 8;
  }
  *(undefined4 *)(param_1 + 0x738) = 0;
  if (*(int *)(param_1 + 0x73c) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0x730,0);
  }
  FUN_14097a170(param_1);
  FUN_140979fa0(param_1);
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 140972a10 FUN_140972a10 body=36 status=ok
// SIG undefined FUN_140972a10(void)

void FUN_140972a10(longlong param_1)

{
  FUN_140973e50(param_1 + 0x740,0);
  FUN_140979fa0(param_1);
  return;
}



// FUNCTION 140972a40 FUN_140972a40 body=71 status=ok
// SIG undefined FUN_140972a40(void)

void FUN_140972a40(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x738)) {
    FProcMeshSection::Reset((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x730));
    FUN_14097a170(param_1);
    FUN_140979fa0(param_1);
    FUN_1423424e0(param_1);
    return;
  }
  return;
}



// FUNCTION 140972a90 FUN_140972a90 body=769 status=ok
// SIG undefined FUN_140972a90(void)

float FUN_140972a90(longlong param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  fVar29 = 0.0;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x738))) {
    plVar11 = (longlong *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x730));
    fVar2 = *(float *)(param_1 + 0x210);
    fVar3 = *(float *)(param_1 + 0x214);
    fVar4 = *(float *)(param_1 + 0x218);
    fVar5 = *(float *)(param_1 + 0x21c);
    fVar6 = *(float *)(param_1 + 0x230);
    fVar7 = *(float *)(param_1 + 0x234);
    fVar8 = *(float *)(param_1 + 0x238);
    if ((longlong)(int)plVar11[3] < 1) {
      fVar29 = 0.0;
    }
    else {
      lVar1 = *plVar11;
      piVar13 = (int *)(plVar11[2] + 8);
      lVar12 = ((longlong)(int)plVar11[3] - 1U) / 3 + 1;
      do {
        lVar9 = (longlong)piVar13[-2] * 0x4c;
        fVar17 = *(float *)(lVar9 + lVar1) * fVar6;
        fVar20 = *(float *)(lVar9 + 4 + lVar1) * fVar7;
        fVar23 = *(float *)(lVar9 + 8 + lVar1) * fVar8;
        lVar9 = (longlong)piVar13[-1] * 0x4c;
        fVar14 = fVar23 * fVar3 - fVar20 * fVar4;
        fVar15 = fVar17 * fVar4 - fVar23 * fVar2;
        fVar16 = fVar20 * fVar2 - fVar17 * fVar3;
        fVar14 = fVar14 + fVar14;
        fVar15 = fVar15 + fVar15;
        fVar16 = fVar16 + fVar16;
        lVar10 = (longlong)*piVar13 * 0x4c;
        fVar26 = (fVar16 * fVar3 - fVar15 * fVar4) + fVar14 * fVar5 + fVar17;
        fVar27 = (fVar14 * fVar4 - fVar16 * fVar2) + fVar15 * fVar5 + fVar20;
        fVar28 = (fVar15 * fVar2 - fVar14 * fVar3) + fVar16 * fVar5 + fVar23;
        fVar18 = *(float *)(lVar9 + lVar1) * fVar6;
        fVar21 = *(float *)(lVar9 + 4 + lVar1) * fVar7;
        fVar24 = *(float *)(lVar9 + 8 + lVar1) * fVar8;
        fVar14 = fVar24 * fVar3 - fVar21 * fVar4;
        fVar16 = fVar18 * fVar4 - fVar24 * fVar2;
        fVar20 = fVar21 * fVar2 - fVar18 * fVar3;
        fVar14 = fVar14 + fVar14;
        fVar16 = fVar16 + fVar16;
        fVar20 = fVar20 + fVar20;
        fVar19 = *(float *)(lVar10 + lVar1) * fVar6;
        fVar22 = *(float *)(lVar10 + 4 + lVar1) * fVar7;
        fVar25 = *(float *)(lVar10 + 8 + lVar1) * fVar8;
        fVar15 = fVar25 * fVar3 - fVar22 * fVar4;
        fVar17 = fVar19 * fVar4 - fVar25 * fVar2;
        fVar23 = fVar22 * fVar2 - fVar19 * fVar3;
        fVar15 = fVar15 + fVar15;
        fVar17 = fVar17 + fVar17;
        fVar23 = fVar23 + fVar23;
        piVar13 = piVar13 + 3;
        fVar18 = ((fVar20 * fVar3 - fVar16 * fVar4) + fVar14 * fVar5 + fVar18) - fVar26;
        fVar24 = ((fVar16 * fVar2 - fVar14 * fVar3) + fVar20 * fVar5 + fVar24) - fVar28;
        fVar16 = ((fVar14 * fVar4 - fVar20 * fVar2) + fVar16 * fVar5 + fVar21) - fVar27;
        fVar26 = ((fVar23 * fVar3 - fVar17 * fVar4) + fVar15 * fVar5 + fVar19) - fVar26;
        fVar27 = ((fVar15 * fVar4 - fVar23 * fVar2) + fVar17 * fVar5 + fVar22) - fVar27;
        fVar28 = ((fVar17 * fVar2 - fVar15 * fVar3) + fVar23 * fVar5 + fVar25) - fVar28;
        fVar14 = fVar16 * fVar28 - fVar24 * fVar27;
        fVar17 = fVar24 * fVar26 - fVar28 * fVar18;
        fVar15 = fVar27 * fVar18 - fVar16 * fVar26;
        fVar29 = fVar29 + SQRT(fVar17 * fVar17 + fVar14 * fVar14 + fVar15 * fVar15) * 0.5;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    return fVar29;
  }
  return 0.0;
}



// FUNCTION 140972dd0 FUN_140972dd0 body=408 status=ok
// SIG undefined FUN_140972dd0(void)

void FUN_140972dd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  FUN_1408de720((longlong)param_1 + 0x54,(longlong)param_1 + 0x5c,param_2 + 5);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0x2c);
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x3c);
  *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x44);
  iVar4 = (int)ROUND(*(float *)(param_2 + 3) * 127.0 + *(float *)(param_2 + 3) * 127.0 + 0.5) >> 1;
  iVar3 = -0x80;
  if ((-0x81 < iVar4) && (iVar3 = 0x7f, iVar4 < 0x7f)) {
    iVar3 = iVar4;
  }
  *(char *)((longlong)param_1 + 0x4c) = (char)iVar3;
  fVar5 = *(float *)((longlong)param_2 + 0x1c) * 127.0;
  iVar2 = (int)ROUND(fVar5 + fVar5 + 0.5) >> 1;
  iVar4 = -0x80;
  iVar3 = iVar4;
  if ((-0x81 < iVar2) && (iVar3 = 0x7f, iVar2 < 0x7f)) {
    iVar3 = iVar2;
  }
  *(char *)((longlong)param_1 + 0x4d) = (char)iVar3;
  iVar3 = (int)ROUND(*(float *)(param_2 + 4) * 127.0 + *(float *)(param_2 + 4) * 127.0 + 0.5) >> 1;
  if ((-0x81 < iVar3) && (iVar4 = 0x7f, iVar3 < 0x7f)) {
    iVar4 = iVar3;
  }
  *(char *)((longlong)param_1 + 0x4e) = (char)iVar4;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0x7f;
  fVar5 = *(float *)((longlong)param_2 + 0xc) * 127.0;
  iVar2 = (int)ROUND(fVar5 + fVar5 + 0.5) >> 1;
  iVar4 = -0x80;
  iVar3 = iVar4;
  if ((-0x81 < iVar2) && (iVar3 = 0x7f, iVar2 < 0x7f)) {
    iVar3 = iVar2;
  }
  *(char *)(param_1 + 10) = (char)iVar3;
  iVar3 = (int)ROUND(*(float *)(param_2 + 2) * 127.0 + *(float *)(param_2 + 2) * 127.0 + 0.5) >> 1;
  if ((-0x81 < iVar3) && (iVar4 = 0x7f, iVar3 < 0x7f)) {
    iVar4 = iVar3;
  }
  *(char *)((longlong)param_1 + 0x51) = (char)iVar4;
  fVar5 = *(float *)((longlong)param_2 + 0x14) * 127.0;
  iVar4 = (int)ROUND(fVar5 + fVar5 + 0.5) >> 1;
  iVar3 = -0x80;
  if ((-0x81 < iVar4) && (iVar3 = 0x7f, iVar4 < 0x7f)) {
    iVar3 = iVar4;
  }
  *(char *)((longlong)param_1 + 0x52) = (char)iVar3;
  *(undefined1 *)((longlong)param_1 + 0x53) = 0x7f;
  uVar1 = 0x7f;
  if (*(char *)((longlong)param_2 + 0x24) != '\0') {
    uVar1 = 0x81;
  }
  *(undefined1 *)((longlong)param_1 + 0x53) = uVar1;
  return;
}



// FUNCTION 140972f70 ConvertQuadToTriangles body=252 status=ok
// SIG undefined ConvertQuadToTriangles(void)

void UKismetProceduralMeshLibrary::ConvertQuadToTriangles
               (longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_2;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_3;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_5;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_3;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_4;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_5;
  return;
}



// FUNCTION 140973070 FUN_140973070 body=1177 status=ok
// SIG undefined FUN_140973070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140973070(longlong *param_1,undefined4 param_2,longlong *param_3,undefined1 param_4)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  void *_Src;
  void *pvVar10;
  undefined1 auStack_238 [32];
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  void *local_1d0;
  undefined8 local_1c8;
  void *local_1c0;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_1a0 [17];
  undefined **local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  byte local_fc;
  undefined4 local_f8;
  undefined ***local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  void *pvVar9;
  
  if (param_1 != (longlong *)0x0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
    pvVar2 = (void *)param_1[0xe5];
    if ((pvVar2 != (void *)0x0) && (param_3 != (longlong *)0x0)) {
      local_1d8 = param_4;
      local_1c0 = pvVar2;
      local_1a8 = param_1;
      iVar5 = FUN_14281e7d0(pvVar2);
      uVar4 = local_1d8;
      pvVar10 = (void *)0x0;
      if (0 < iVar5) {
        local_1a0[0xc] = 0;
        local_1a0[0xd] = 0;
        local_1a0[10] = 0;
        local_1a0[0xb] = 0;
        local_1a0[8] = 0;
        local_1a0[9] = 0;
        local_1a0[6] = 0;
        local_1a0[7] = 0;
        pvVar9 = pvVar10;
        do {
          local_200 = local_1b8;
          local_1d0 = (void *)0x0;
          local_208 = local_1a0;
          local_1c8 = 0;
          local_210 = local_1a0 + 2;
          local_1a0[4] = 0;
          local_218 = local_1a0 + 4;
          local_1a0[5] = 0;
          local_1a0[2] = 0;
          local_1a0[3] = 0;
          local_1a0[0] = 0;
          local_1a0[1] = 0;
          local_1b8[0] = 0;
          local_1b8[1] = 0;
          FUN_140975e60(pvVar2,param_2,pvVar9,&local_1d0);
          local_1e0 = uVar4;
          local_1e8 = local_1b8;
          local_1f0 = local_1a0 + 6;
          local_1f8 = local_1a0 + 8;
          local_200 = local_1a0 + 10;
          local_208 = local_1a0 + 0xc;
          local_210 = local_1a0;
          local_218 = local_1a0 + 2;
          FUN_140973900(param_3,pvVar9,&local_1d0,local_1a0 + 4);
          if (local_1b8[0] != 0) {
            FMemory::Free();
          }
          if (local_1a0[0] != 0) {
            FMemory::Free();
          }
          if (local_1a0[2] != 0) {
            FMemory::Free();
          }
          if (local_1a0[4] != 0) {
            FMemory::Free();
          }
          if (local_1d0 != (void *)0x0) {
            FMemory::Free();
          }
          uVar8 = (int)pvVar9 + 1;
          pvVar9 = (void *)(ulonglong)uVar8;
          param_1 = local_1a8;
        } while ((int)uVar8 < iVar5);
      }
      plVar1 = param_3 + 0xe8;
      FUN_140973e50(plVar1,0);
      FUN_140979fa0(param_3);
      pvVar2 = local_1c0;
      if ((*(longlong *)((longlong)local_1c0 + 0xa0) != 0) &&
         (local_1b8[0] = (longlong)*(int *)(*(longlong *)((longlong)local_1c0 + 0xa0) + 0x60),
         pvVar9 = pvVar10, 0 < local_1b8[0])) {
        do {
          local_1d0 = (void *)0x0;
          lVar3 = *(longlong *)(*(longlong *)((longlong)pvVar2 + 0xa0) + 0x58);
          iVar5 = *(int *)(lVar3 + 0x68 + (longlong)pvVar9);
          local_1c0 = *(void **)(lVar3 + 0x60 + (longlong)pvVar9);
          local_1c8 = CONCAT44(local_1c8._4_4_,iVar5);
          if (iVar5 == 0) {
            local_1c8 = 0;
            _Src = pvVar10;
            iVar5 = 0;
          }
          else {
            TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_1d0,iVar5,0);
            _Src = local_1d0;
            _guard_xfg_dispatch_icall_nop(local_1d0,local_1c0,(longlong)iVar5 * 0xc);
            iVar5 = (int)local_1c8;
          }
          if (3 < iVar5) {
            local_f0 = &local_118;
            local_fc = local_fc | 1;
            uStack_9c = (undefined4)_DAT_1468b5d90;
            uStack_98 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
            local_a8 = _DAT_1468b5d90;
            local_88 = _DAT_1468b5b70;
            uStack_80 = uRam00000001468b5b78;
            local_78 = _DAT_1468b5b80;
            uStack_70 = uRam00000001468b5b88;
            local_68 = _DAT_1468b5b90;
            uStack_64 = uRam00000001468b5b94;
            uStack_60 = uRam00000001468b5b98;
            uStack_5c = uRam00000001468b5b9c;
            local_110 = 0;
            local_108 = 0;
            local_100 = 3;
            local_f8 = 6;
            local_e8 = 3;
            local_e0 = 0;
            local_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            local_118 = &PTR_FUN_1440fbd68;
            local_b8 = (void *)0x0;
            local_ac = 0;
            uStack_94 = DAT_1468b5d98;
            uStack_a0 = DAT_1468b5d98;
            local_90 = local_90 & 0xffffff00;
            local_58 = 0;
            uStack_50 = 0;
            local_b0 = iVar5;
            if (iVar5 != 0) {
              TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar5,0);
              _guard_xfg_dispatch_icall_nop(local_b8,_Src,(longlong)iVar5 * 0xc);
            }
            puVar6 = (undefined8 *)FBox::FBox(local_1a0 + 0xc,&local_b8);
            iVar5 = (int)param_3[0xe9];
            local_a8 = *puVar6;
            uStack_a0 = *(undefined4 *)(puVar6 + 1);
            uStack_9c = *(undefined4 *)((longlong)puVar6 + 0xc);
            uStack_98 = (undefined4)puVar6[2];
            uStack_94 = (undefined4)((ulonglong)puVar6[2] >> 0x20);
            local_90 = *(uint *)(puVar6 + 3);
            *(int *)(param_3 + 0xe9) = iVar5 + 1;
            if (*(int *)((longlong)param_3 + 0x74c) < iVar5 + 1) {
              TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
            }
            FUN_14080b9e0((longlong)iVar5 * 0xd0 + *plVar1,&local_118);
            FUN_140979fa0(param_3);
            if (local_b8 != (void *)0x0) {
              FMemory::Free();
            }
            local_118 = &PTR__scalar_deleting_destructor__1440fbd58;
            if (local_c8 != 0) {
              FMemory::Free();
            }
          }
          if (_Src != (void *)0x0) {
            FMemory::Free(_Src);
          }
          local_1b8[0] = local_1b8[0] + -1;
          pvVar9 = (void *)((longlong)pvVar9 + 0xd0);
        } while (local_1b8[0] != 0);
        local_1b8[0] = 0;
        param_1 = local_1a8;
      }
      iVar5 = (**(code **)(*param_1 + 0x6c8))(param_1);
      if (0 < iVar5) {
        do {
          lVar3 = *param_3;
          uVar7 = (**(code **)(*param_1 + 0x560))(param_1,pvVar10);
          (**(code **)(lVar3 + 0x568))(param_3,pvVar10,uVar7);
          uVar8 = (int)pvVar10 + 1;
          pvVar10 = (void *)(ulonglong)uVar8;
          iVar5 = (**(code **)(*param_1 + 0x6c8))(param_1);
        } while ((int)uVar8 < iVar5);
      }
    }
  }
  return;
}



// FUNCTION 140973510 FUN_140973510 body=377 status=ok
// SIG undefined FUN_140973510(void)

undefined8 * FUN_140973510(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x58);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (longlong)&PTR_FUN_144171b00;
    plVar4[3] = 0;
    *(undefined4 *)(plVar4 + 4) = 0;
    FText::FText(plVar4 + 5);
    FText::FText(plVar4 + 8);
    *plVar4 = (longlong)&PTR_FUN_144171b30;
    FText::operator=(plVar4 + 5,param_2);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
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
  }
  return param_1;
}



// FUNCTION 140973690 FUN_140973690 body=193 status=ok
// SIG undefined FUN_140973690(void)

longlong FUN_140973690(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_28 [16];
  
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_142909590();
  lVar4 = FUN_1417985e0(uVar3,param_1,0,cVar2 != '\0',0,0,0,0,0);
  puVar5 = (undefined8 *)FGuid::NewGuid(local_28);
  uVar3 = *puVar5;
  uVar1 = puVar5[1];
  *(byte *)(lVar4 + 0x99) = *(byte *)(lVar4 + 0x99) & 0xbf;
  *(byte *)(lVar4 + 0x99) = *(byte *)(lVar4 + 0x99) | 8;
  *(undefined8 *)(lVar4 + 0xf0) = uVar3;
  *(undefined8 *)(lVar4 + 0xf8) = uVar1;
  *(byte *)(lVar4 + 0x9c) = -(*(char *)(param_1 + 0x720) != '\0') & 3;
  return lVar4;
}



// FUNCTION 140973760 FUN_140973760 body=92 status=ok
// SIG undefined FUN_140973760(void)

void FUN_140973760(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1441726d8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144172720;
  }
  return;
}



// FUNCTION 1409737c0 CreateGridMeshTriangles body=315 status=ok
// SIG undefined CreateGridMeshTriangles(void)

void UKismetProceduralMeshLibrary::CreateGridMeshTriangles
               (int param_1,int param_2,char param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int local_res20;
  
  *(undefined4 *)(param_4 + 8) = 0;
  local_res20 = 0;
  if (0x7fffffff < *(uint *)(param_4 + 0xc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_4,0);
  }
  if (((1 < param_1) && (1 < param_2)) && (0 < param_1 + -1)) {
    uVar2 = param_2 - 1;
    iVar4 = 1;
    do {
      if (0 < (int)uVar2) {
        if (param_3 == '\0') {
          lVar3 = (longlong)(int)uVar2;
          iVar1 = iVar4;
          do {
            ConvertQuadToTriangles(param_4,iVar1 + -1,iVar1,iVar1 + param_2,iVar1 + uVar2);
            iVar1 = iVar1 + 1;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        else {
          uVar5 = (ulonglong)uVar2;
          iVar1 = iVar4 + param_2;
          do {
            ConvertQuadToTriangles(param_4,iVar1 + -param_2 + -1,iVar1 + -1,iVar1,-param_2 + iVar1);
            iVar1 = iVar1 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      local_res20 = local_res20 + 1;
      iVar4 = iVar4 + param_2;
    } while (local_res20 < param_1 + -1);
  }
  return;
}



// FUNCTION 140973900 FUN_140973900 body=947 status=ok
// SIG undefined FUN_140973900(void)

void FUN_140973900(longlong param_1,int param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,longlong *param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  undefined4 local_res10;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(int *)(param_1 + 0x738) <= param_2) {
    TArray<FProcMeshSection,FDefaultAllocator>::SetNum(param_1 + 0x730,param_2 + 1,0);
  }
  plVar10 = (longlong *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x730));
  FProcMeshSection::Reset(plVar10);
  iVar2 = (int)param_3[1];
  uVar9 = 0;
  *(undefined4 *)(plVar10 + 1) = 0;
  uVar12 = uVar9;
  if ((*(int *)((longlong)plVar10 + 0xc) < 0) &&
     (uVar12 = 0, *(int *)((longlong)plVar10 + 0xc) != 0)) {
    TArray<FProcMeshVertex,FDefaultAllocator>::ResizeTo(plVar10);
    uVar12 = (ulonglong)*(uint *)(plVar10 + 1);
  }
  iVar6 = (int)uVar12 + iVar2;
  *(int *)(plVar10 + 1) = iVar6;
  if (*(int *)((longlong)plVar10 + 0xc) < iVar6) {
    TArray<FProcMeshVertex,FDefaultAllocator>::ResizeGrow(plVar10);
  }
  uVar12 = uVar9;
  uVar13 = uVar9;
  uVar14 = uVar9;
  if (0 < iVar2) {
    do {
      lVar11 = *plVar10;
      lVar4 = *param_3;
      *(undefined8 *)(uVar9 + lVar11) = *(undefined8 *)(lVar4 + uVar13);
      *(undefined4 *)(uVar9 + 8 + lVar11) = *(undefined4 *)(lVar4 + 8 + uVar13);
      if ((int)param_5[1] == iVar2) {
        local_64 = *(undefined4 *)(*param_5 + 8 + uVar13);
        puVar8 = &local_6c;
        local_6c = *(undefined8 *)(*param_5 + uVar13);
      }
      else {
        local_a8 = 0;
        puVar8 = &local_a8;
        local_a0 = 0x3f800000;
      }
      uVar3 = *(undefined4 *)(puVar8 + 1);
      *(undefined8 *)(uVar9 + 0xc + lVar11) = *puVar8;
      *(undefined4 *)(uVar9 + 0x14 + lVar11) = uVar3;
      if ((int)param_6[1] == iVar2) {
        puVar8 = &local_8c;
        local_8c = *(undefined8 *)(*param_6 + uVar12 * 8);
      }
      else {
        local_c8 = 0;
        puVar8 = &local_c8;
      }
      *(undefined8 *)(uVar9 + 0x2c + lVar11) = *puVar8;
      if ((int)param_7[1] == iVar2) {
        puVar8 = &local_84;
        local_84 = *(undefined8 *)(*param_7 + uVar12 * 8);
      }
      else {
        local_c0 = 0;
        puVar8 = &local_c0;
      }
      *(undefined8 *)(uVar9 + 0x34 + lVar11) = *puVar8;
      if ((int)param_8[1] == iVar2) {
        puVar8 = &local_7c;
        local_7c = *(undefined8 *)(*param_8 + uVar12 * 8);
      }
      else {
        local_b8 = 0;
        puVar8 = &local_b8;
      }
      *(undefined8 *)(uVar9 + 0x3c + lVar11) = *puVar8;
      if ((int)param_9[1] == iVar2) {
        puVar8 = &local_74;
        local_74 = *(undefined8 *)(*param_9 + uVar12 * 8);
      }
      else {
        local_b0 = 0;
        puVar8 = &local_b0;
      }
      *(undefined8 *)(uVar9 + 0x44 + lVar11) = *puVar8;
      if ((int)param_10[1] == iVar2) {
        local_res10 = *(undefined4 *)(*param_10 + uVar12 * 4);
      }
      else {
        local_res10 = 0xffffffff;
      }
      *(undefined4 *)(uVar9 + 0x28 + lVar11) = local_res10;
      if ((int)param_11[1] == iVar2) {
        puVar8 = &local_60;
        local_60 = *(undefined8 *)(*param_11 + uVar14);
        uStack_58 = ((undefined8 *)(*param_11 + uVar14))[1];
      }
      else {
        local_9c = 0x3f800000;
        puVar8 = &local_9c;
        local_94 = 0;
        local_90 = 0;
      }
      uVar5 = puVar8[1];
      puVar1 = (undefined8 *)(uVar9 + 0x18 + lVar11);
      *puVar1 = *puVar8;
      puVar1[1] = uVar5;
      if ((char)plVar10[7] == '\0') {
        *(undefined8 *)((longlong)plVar10 + 0x2c) = *(undefined8 *)(uVar9 + lVar11);
        uVar3 = *(undefined4 *)(uVar9 + 8 + lVar11);
        *(undefined4 *)((longlong)plVar10 + 0x34) = uVar3;
        plVar10[4] = *(longlong *)((longlong)plVar10 + 0x2c);
        *(undefined4 *)(plVar10 + 5) = uVar3;
        *(undefined1 *)(plVar10 + 7) = 1;
      }
      else {
        fVar16 = *(float *)(uVar9 + lVar11);
        if (*(float *)(plVar10 + 4) <= *(float *)(uVar9 + lVar11)) {
          fVar16 = *(float *)(plVar10 + 4);
        }
        *(float *)(plVar10 + 4) = fVar16;
        fVar16 = *(float *)(uVar9 + 4 + lVar11);
        fVar15 = *(float *)((longlong)plVar10 + 0x24);
        if (fVar16 <= *(float *)((longlong)plVar10 + 0x24)) {
          fVar15 = fVar16;
        }
        *(float *)((longlong)plVar10 + 0x24) = fVar15;
        fVar16 = *(float *)(uVar9 + 8 + lVar11);
        if (*(float *)(plVar10 + 5) <= fVar16) {
          fVar16 = *(float *)(plVar10 + 5);
        }
        *(float *)(plVar10 + 5) = fVar16;
        fVar16 = *(float *)((longlong)plVar10 + 0x2c);
        if (*(float *)((longlong)plVar10 + 0x2c) <= *(float *)(uVar9 + lVar11)) {
          fVar16 = *(float *)(uVar9 + lVar11);
        }
        *(float *)((longlong)plVar10 + 0x2c) = fVar16;
        fVar16 = *(float *)(uVar9 + 4 + lVar11);
        if (fVar16 <= *(float *)(plVar10 + 6)) {
          fVar16 = *(float *)(plVar10 + 6);
        }
        *(float *)(plVar10 + 6) = fVar16;
        fVar16 = *(float *)(uVar9 + 8 + lVar11);
        if (fVar16 <= *(float *)((longlong)plVar10 + 0x34)) {
          fVar16 = *(float *)((longlong)plVar10 + 0x34);
        }
        *(float *)((longlong)plVar10 + 0x34) = fVar16;
      }
      uVar12 = uVar12 + 1;
      uVar9 = uVar9 + 0x4c;
      uVar13 = uVar13 + 0xc;
      uVar14 = uVar14 + 0x10;
    } while ((longlong)uVar12 < (longlong)iVar2);
  }
  lVar11 = 0;
  iVar6 = (int)param_4[1];
  *(undefined4 *)(plVar10 + 3) = 0;
  iVar6 = (iVar6 / 3 + (iVar6 >> 0x1f) +
          (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3;
  if ((*(int *)((longlong)plVar10 + 0x1c) < 0) && (*(int *)((longlong)plVar10 + 0x1c) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar10 + 2,0);
  }
  iVar7 = (int)plVar10[3] + iVar6;
  *(int *)(plVar10 + 3) = iVar7;
  if (*(int *)((longlong)plVar10 + 0x1c) < iVar7) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10 + 2);
  }
  if (0 < iVar6) {
    do {
      iVar7 = iVar2 + -1;
      if (*(int *)(*param_4 + lVar11 * 4) <= iVar2 + -1) {
        iVar7 = *(int *)(*param_4 + lVar11 * 4);
      }
      *(int *)(plVar10[2] + lVar11 * 4) = iVar7;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar6);
  }
  *(undefined1 *)((longlong)plVar10 + 0x3c) = param_12;
  FUN_14097a170(param_1);
  FUN_140979fa0(param_1);
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 140973cc0 CreateMeshSection_LinearColor body=344 status=ok
// SIG undefined CreateMeshSection_LinearColor(void)

void UProceduralMeshComponent::CreateMeshSection_LinearColor
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,longlong *param_10,undefined8 param_11,undefined1 param_12)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *local_38;
  ulonglong local_30;
  
  plVar1 = param_10;
  puVar3 = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_30 = 0;
  puVar4 = puVar3;
  if (0 < (int)*(uint *)(param_10 + 1)) {
    local_30 = (ulonglong)*(uint *)(param_10 + 1);
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_38,0);
    puVar4 = local_38;
    puVar5 = local_38;
    if (0 < (int)plVar1[1]) {
      do {
        puVar2 = (undefined4 *)
                 FLinearColor::ToFColor((longlong)(int)puVar3 * 0x10 + *plVar1,&param_10,0);
        uVar6 = (int)puVar3 + 1;
        puVar3 = (undefined4 *)(ulonglong)uVar6;
        *puVar5 = *puVar2;
        puVar5 = puVar5 + 1;
      } while ((int)uVar6 < (int)plVar1[1]);
    }
  }
  FUN_140973900(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,&local_38,
                param_11,param_12);
  if (puVar4 != (undefined4 *)0x0) {
    FMemory::Free(puVar4);
  }
  return;
}



// FUNCTION 140973e20 CreateAnimInstanceProxy body=46 status=ok
// SIG undefined CreateAnimInstanceProxy(void)

void UAnimInstance::CreateAnimInstanceProxy(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x3c0);
  if (lVar1 != 0) {
    FUN_14096fe00(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 140973e50 FUN_140973e50 body=139 status=ok
// SIG undefined FUN_140973e50(void)

void FUN_140973e50(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1[0xc] != 0) {
      FMemory::Free();
    }
    *puVar1 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    puVar1 = puVar1 + 0x1a;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140973ee0 FUN_140973ee0 body=58 status=ok
// SIG undefined FUN_140973ee0(void)

void FUN_140973ee0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140973f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,*(undefined8 *)(param_1 + 0x20));
  return;
}


