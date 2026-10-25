// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1439749c0 setup body=5 status=ok
// SIG undefined setup(void)

void physx::PxVehicleDrive::setup
               (longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5,undefined4 param_6)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plStackX_8;
  longlong *plStackX_10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  
  *(undefined4 *)(param_1 + 0xa8) = param_6;
  plStackX_10 = param_2;
  PxVehicleWheelsSimData::operator=(param_1 + 0x10,param_4);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  uVar9 = 0;
  uVar10 = *(uint *)(param_4 + 0x28);
  uVar11 = (ulonglong)uVar10;
  if (uVar10 != 0) {
    uVar7 = (ulonglong)uVar10;
    uVar6 = uVar9;
    do {
      uVar6 = uVar6 + 0x220;
      *(undefined8 *)(*(longlong *)(param_1 + 0x70) + -0x48 + uVar6) = 0;
      *(undefined8 *)(*(longlong *)(param_1 + 0x70) + -0x40 + uVar6) = 0;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar6 = uVar9;
  uVar7 = uVar9;
  if (uVar10 != 0) {
    do {
      lVar3 = *(longlong *)(param_4 + 0x20);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x1d0 + uVar7);
      *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(lVar3 + 0x2b0 + uVar6);
      *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(lVar3 + 0x2b4 + uVar6);
      *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar3 + 0x2b8 + uVar6);
      lVar3 = *(longlong *)(param_4 + 0x20);
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar3 + 0x280 + uVar6);
      *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(lVar3 + 0x284 + uVar6);
      *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(lVar3 + 0x288 + uVar6);
      *(undefined4 *)(lVar4 + 0x68) = 0;
      *(undefined1 *)(lVar4 + 0x78) = 0;
      *(undefined8 *)(lVar4 + 0x7c) = 0;
      *(undefined4 *)(lVar4 + 0x84) = 0;
      *(undefined8 *)(lVar4 + 0xac) = 0;
      *(undefined4 *)(lVar4 + 0xb4) = 0;
      *(undefined4 *)(lVar4 + 0xdc) = 0;
      *(undefined1 *)(lVar4 + 0xec) = 0;
      *(undefined8 *)(lVar4 + 0xf0) = 0;
      *(undefined4 *)(lVar4 + 0xf8) = 0;
      *(undefined8 *)(lVar4 + 0x120) = 0;
      *(undefined4 *)(lVar4 + 0x128) = 0;
      *(undefined4 *)(lVar4 + 0x150) = 0;
      *(undefined1 *)(lVar4 + 0x160) = 0;
      lVar3 = *(longlong *)(param_4 + 0x20);
      *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(lVar3 + 700 + uVar6);
      *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(lVar3 + 0x2c0 + uVar6);
      *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)(lVar3 + 0x2c4 + uVar6);
      lVar3 = *(longlong *)(param_4 + 0x20);
      *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(lVar3 + 0x28c + uVar6);
      *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(lVar3 + 0x290 + uVar6);
      *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(lVar3 + 0x294 + uVar6);
      *(undefined4 *)(lVar4 + 0x6c) = 0;
      *(undefined1 *)(lVar4 + 0x79) = 0;
      *(undefined8 *)(lVar4 + 0x88) = 0;
      *(undefined4 *)(lVar4 + 0x90) = 0;
      *(undefined8 *)(lVar4 + 0xb8) = 0;
      *(undefined4 *)(lVar4 + 0xc0) = 0;
      *(undefined4 *)(lVar4 + 0xe0) = 0;
      *(undefined1 *)(lVar4 + 0xed) = 0;
      *(undefined8 *)(lVar4 + 0xfc) = 0;
      *(undefined4 *)(lVar4 + 0x104) = 0;
      *(undefined8 *)(lVar4 + 300) = 0;
      *(undefined4 *)(lVar4 + 0x134) = 0;
      *(undefined4 *)(lVar4 + 0x154) = 0;
      *(undefined1 *)(lVar4 + 0x161) = 0;
      lVar3 = *(longlong *)(param_4 + 0x20);
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar3 + 0x2c8 + uVar6);
      *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(lVar3 + 0x2cc + uVar6);
      *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar3 + 0x2d0 + uVar6);
      lVar3 = *(longlong *)(param_4 + 0x20);
      *(undefined4 *)(lVar4 + 0x50) = *(undefined4 *)(lVar3 + 0x298 + uVar6);
      *(undefined4 *)(lVar4 + 0x54) = *(undefined4 *)(lVar3 + 0x29c + uVar6);
      *(undefined4 *)(lVar4 + 0x58) = *(undefined4 *)(lVar3 + 0x2a0 + uVar6);
      *(undefined4 *)(lVar4 + 0x70) = 0;
      *(undefined1 *)(lVar4 + 0x7a) = 0;
      *(undefined8 *)(lVar4 + 0x94) = 0;
      *(undefined4 *)(lVar4 + 0x9c) = 0;
      *(undefined8 *)(lVar4 + 0xc4) = 0;
      *(undefined4 *)(lVar4 + 0xcc) = 0;
      *(undefined4 *)(lVar4 + 0xe4) = 0;
      *(undefined1 *)(lVar4 + 0xee) = 0;
      *(undefined8 *)(lVar4 + 0x108) = 0;
      *(undefined4 *)(lVar4 + 0x110) = 0;
      *(undefined8 *)(lVar4 + 0x138) = 0;
      *(undefined4 *)(lVar4 + 0x140) = 0;
      *(undefined4 *)(lVar4 + 0x158) = 0;
      *(undefined1 *)(lVar4 + 0x162) = 0;
      lVar3 = *(longlong *)(param_4 + 0x20);
      *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(lVar3 + 0x2d4 + uVar6);
      *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar3 + 0x2d8 + uVar6);
      *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(lVar3 + 0x2dc + uVar6);
      lVar3 = *(longlong *)(param_4 + 0x20);
      *(undefined4 *)(lVar4 + 0x5c) = *(undefined4 *)(lVar3 + 0x2a4 + uVar6);
      *(undefined4 *)(lVar4 + 0x60) = *(undefined4 *)(lVar3 + 0x2a8 + uVar6);
      *(undefined4 *)(lVar4 + 100) = *(undefined4 *)(lVar3 + 0x2ac + uVar6);
      *(undefined4 *)(lVar4 + 0x74) = 0;
      *(undefined1 *)(lVar4 + 0x7b) = 0;
      *(undefined8 *)(lVar4 + 0xa0) = 0;
      *(undefined4 *)(lVar4 + 0xa8) = 0;
      *(undefined8 *)(lVar4 + 0xd0) = 0;
      *(undefined4 *)(lVar4 + 0xd8) = 0;
      *(undefined4 *)(lVar4 + 0xe8) = 0;
      *(undefined1 *)(lVar4 + 0xef) = 0;
      *(undefined8 *)(lVar4 + 0x114) = 0;
      *(undefined4 *)(lVar4 + 0x11c) = 0;
      *(undefined8 *)(lVar4 + 0x144) = 0;
      *(undefined4 *)(lVar4 + 0x14c) = 0;
      *(undefined4 *)(lVar4 + 0x15c) = 0;
      *(undefined1 *)(lVar4 + 0x163) = 0;
      plVar5 = (longlong *)
               (**(code **)(*plStackX_10 + 0xf0))
                         (plStackX_10,param_3,0,lVar4,
                          &PTR_vehicleSuspLimitConstraintSolverPrep_14682e340,0x15c);
      *(longlong **)(lVar4 + 0x168) = plVar5;
      (**(code **)(*plVar5 + 0x40))(plVar5);
      uVar11 = uVar11 - 1;
      uVar6 = uVar6 + 0x3b0;
      uVar7 = uVar7 + 0x220;
    } while (uVar11 != 0);
  }
  uVar11 = uVar9;
  if (*(int *)(param_4 + 0x2c) != 0) {
    do {
      uVar10 = (uint)uVar11 + 1;
      *(ulonglong *)(**(longlong **)(param_1 + 0x78) + uVar11 * 8) =
           (uVar11 >> 2) * 0x3b0 + ((ulonglong)((uint)uVar11 & 3) + 6) * 0x40 +
           *(longlong *)(param_1 + 0x30);
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_4 + 0x2c));
  }
  uVar10 = *(uint *)(param_4 + 0x2c);
  if (uVar10 < (uint)(*(int *)(param_1 + 0x38) << 2)) {
    do {
      bVar2 = (byte)uVar10;
      uVar8 = uVar10 >> 5;
      uVar10 = uVar10 + 1;
      puVar1 = (uint *)(param_1 + 0x50 + (ulonglong)uVar8 * 4);
      *puVar1 = *puVar1 & ~(1 << (bVar2 & 0x1f));
    } while (uVar10 < (uint)(*(int *)(param_1 + 0x38) << 2));
  }
  if (*(int *)(param_4 + 0x2c) != 0) {
    do {
      uVar10 = (uint)uVar9;
      bVar2 = *(byte *)((ulonglong)(uVar10 & 3) + 0x3a0 +
                       (uVar9 >> 2) * 0x3b0 + *(longlong *)(param_1 + 0x30));
      if (bVar2 == 0xff) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (uint)bVar2;
      }
      if (uVar8 != 0xffffffff) {
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0xf0))
                  (*(longlong **)(param_1 + 0xa0),&uStack_58);
        uStack_78 = uStack_58;
        uStack_70 = uStack_50;
        lVar3 = (uVar9 >> 2) * 0x3b0 + (ulonglong)(uVar10 & 3) * 0xc;
        lVar4 = *(longlong *)(param_1 + 0x30);
        fStack_68 = fStack_48 + *(float *)(lVar3 + 0x310 + lVar4);
        fStack_64 = fStack_44 + *(float *)(lVar3 + 0x314 + lVar4);
        fStack_60 = fStack_40 + *(float *)(lVar3 + 0x318 + lVar4);
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0xd0))
                  (*(longlong **)(param_1 + 0xa0),&plStackX_8,1,uVar8);
        (**(code **)(*plStackX_8 + 0x88))(plStackX_8,&uStack_78);
      }
      uVar9 = (ulonglong)(uVar10 + 1);
    } while (uVar10 + 1 < *(uint *)(param_4 + 0x2c));
  }
  return;
}



// FUNCTION 1439749d0 setDiffData body=22 status=ok
// SIG undefined setDiffData(void)

void physx::PxVehicleDriveSimData4W::setDiffData(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x210) = *param_2;
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x220) = param_2[2];
  *(undefined8 *)(param_1 + 0x228) = uVar1;
  return;
}



// FUNCTION 1439749f0 setAckermannGeometryData body=11 status=ok
// SIG undefined setAckermannGeometryData(void)

void physx::PxVehicleDriveSimData4W::setAckermannGeometryData(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x230) = *param_2;
  *(undefined8 *)(param_1 + 0x238) = uVar1;
  return;
}



// FUNCTION 143974a20 allocate body=137 status=ok
// SIG undefined allocate(void)

longlong * physx::PxVehicleDrive4W::allocate(undefined4 param_1)

{
  int iVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  
  iVar1 = thunk_FUN_1439738a0();
  if (iVar1 + 0x360 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)
             (**(code **)(*(longlong *)pPVar2 + 8))
                       (pPVar2,iVar1 + 0x360,"NonTrackedAlloc",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleDrive4W.cpp"
                        ,0x5f);
    if (plVar3 != (longlong *)0x0) {
      PxVehicleDrive4W(plVar3);
    }
  }
  FUN_143974990(param_1,plVar3,plVar3 + 0x6c);
  (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
  *(undefined1 *)((longlong)plVar3 + 0xad) = 0;
  return plVar3;
}



// FUNCTION 143974ab0 free body=5 status=ok
// SIG void free(void * _Memory)

void __cdecl physx::PxVehicleWheels::free(void *_Memory)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(uint *)((longlong)_Memory + 0x38) != 0) {
    lVar2 = 0;
    uVar3 = (ulonglong)*(uint *)((longlong)_Memory + 0x38);
    do {
      puVar1 = *(undefined8 **)
                (*(longlong *)(*(longlong *)((longlong)_Memory + 0x70) + 0x1d0 + lVar2) + 0x168);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)();
      }
      lVar2 = lVar2 + 0x220;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 143974ac0 setup body=107 status=ok
// SIG undefined setup(void)

void physx::PxVehicleDrive4W::setup
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  PxVehicleDrive::setup(param_1,param_2,param_3,param_4,4,param_6);
  PxVehicleDriveSimData::PxVehicleDriveSimData(param_1 + 0x120,param_5);
  uVar1 = *(undefined8 *)(param_5 + 0x218);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_5 + 0x210);
  *(undefined8 *)(param_1 + 0x338) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x228);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_5 + 0x220);
  *(undefined8 *)(param_1 + 0x348) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x238);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_5 + 0x230);
  *(undefined8 *)(param_1 + 0x358) = uVar1;
  return;
}



// FUNCTION 143974b40 create body=171 status=ok
// SIG undefined create(void)

longlong physx::PxVehicleDrive4W::create
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                   int param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = allocate(param_5 + 4);
  PxVehicleDrive::setup(lVar2,param_1,param_2,param_3,4,param_5);
  PxVehicleDriveSimData::PxVehicleDriveSimData(lVar2 + 0x120,param_4);
  uVar1 = *(undefined8 *)(param_4 + 0x218);
  *(undefined8 *)(lVar2 + 0x330) = *(undefined8 *)(param_4 + 0x210);
  *(undefined8 *)(lVar2 + 0x338) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x228);
  *(undefined8 *)(lVar2 + 0x340) = *(undefined8 *)(param_4 + 0x220);
  *(undefined8 *)(lVar2 + 0x348) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x238);
  *(undefined8 *)(lVar2 + 0x350) = *(undefined8 *)(param_4 + 0x230);
  *(undefined8 *)(lVar2 + 0x358) = uVar1;
  return lVar2;
}



// FUNCTION 143974c00 setToRestState body=5 status=ok
// SIG undefined setToRestState(void)

void physx::PxVehicleDrive::setToRestState(longlong param_1)

{
  PxVehicleWheels::setToRestState();
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0x101) = 0;
  *(undefined4 *)(param_1 + 0x104) = 1;
  *(undefined8 *)(param_1 + 0x108) = 1;
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}



// FUNCTION 143974c20 allocate body=147 status=ok
// SIG undefined allocate(void)

longlong * physx::PxVehicleDriveTank::allocate(undefined4 param_1)

{
  int iVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  
  iVar1 = thunk_FUN_1439738a0();
  if (iVar1 + 0x340 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)
             (**(code **)(*(longlong *)pPVar2 + 8))
                       (pPVar2,iVar1 + 0x340,"NonTrackedAlloc",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleDriveTank.cpp"
                        ,0x3d);
    if (plVar3 != (longlong *)0x0) {
      PxVehicleDriveTank(plVar3);
    }
  }
  FUN_143974990(param_1,plVar3,plVar3 + 0x68);
  (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
  *(undefined1 *)((longlong)plVar3 + 0xad) = 2;
  *(undefined4 *)(plVar3 + 0x66) = 0;
  return plVar3;
}



// FUNCTION 143974cc0 free body=5 status=ok
// SIG void free(void * _Memory)

void __cdecl physx::PxVehicleWheels::free(void *_Memory)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(uint *)((longlong)_Memory + 0x38) != 0) {
    lVar2 = 0;
    uVar3 = (ulonglong)*(uint *)((longlong)_Memory + 0x38);
    do {
      puVar1 = *(undefined8 **)
                (*(longlong *)(*(longlong *)((longlong)_Memory + 0x70) + 0x1d0 + lVar2) + 0x168);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)();
      }
      lVar2 = lVar2 + 0x220;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 143974cd0 setup body=52 status=ok
// SIG undefined setup(void)

void physx::PxVehicleDriveTank::setup(longlong param_1)

{
  undefined8 in_stack_00000028;
  
  PxVehicleDrive::setup();
  PxVehicleDriveSimData::PxVehicleDriveSimData(param_1 + 0x120,in_stack_00000028);
  return;
}



// FUNCTION 143974d10 create body=122 status=ok
// SIG undefined create(void)

longlong physx::PxVehicleDriveTank::create
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = allocate(param_5);
  PxVehicleDrive::setup(lVar1,param_1,param_2,param_3,param_5,0);
  PxVehicleDriveSimData::PxVehicleDriveSimData(lVar1 + 0x120,param_4);
  return lVar1;
}



// FUNCTION 143974d90 setToRestState body=5 status=ok
// SIG undefined setToRestState(void)

void physx::PxVehicleDrive::setToRestState(longlong param_1)

{
  PxVehicleWheels::setToRestState();
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0x101) = 0;
  *(undefined4 *)(param_1 + 0x104) = 1;
  *(undefined8 *)(param_1 + 0x108) = 1;
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}



// FUNCTION 143974db0 allocate body=198 status=ok
// SIG undefined allocate(void)

undefined8 * physx::PxVehicleDrivableSurfaceToTireFrictionPairs::allocate(int param_1,int param_2)

{
  PxAllocatorCallback *pPVar1;
  undefined8 *_Dst;
  uint uVar2;
  
  _Dst = (undefined8 *)0x0;
  uVar2 = (param_2 * 4 + 0xfU & 0xfffffff0) + 0x30 +
          (param_1 * param_2 * 4 + 0xfU & 0xfffffff0) + (param_2 * 8 + 0xfU & 0xfffffff0);
  if (uVar2 != 0) {
    pPVar1 = physx::shdfnd::getAllocator();
    _Dst = (undefined8 *)
           (**(code **)(*(longlong *)pPVar1 + 8))
                     (pPVar1,(ulonglong)uVar2,"NonTrackedAlloc",
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleTireFriction.cpp"
                      ,0x35);
  }
  ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar2);
  *(int *)((longlong)_Dst + 0x24) = param_1;
  *(int *)((longlong)_Dst + 0x1c) = param_2;
  *_Dst = 0;
  _Dst[1] = 0;
  _Dst[2] = 0;
  *(undefined4 *)(_Dst + 4) = 0;
  *(undefined4 *)(_Dst + 3) = 0;
  return _Dst;
}



// FUNCTION 143974e80 setup body=487 status=ok
// SIG undefined setup(void)

void physx::PxVehicleDrivableSurfaceToTireFrictionPairs::setup
               (longlong *param_1,int param_2,uint param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  iVar1 = *(int *)((longlong)param_1 + 0x1c);
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  ::_guard_xfg_dispatch_icall_nop
            (param_1,0,
             (ulonglong)
             ((iVar1 * 4 + 0xfU & 0xfffffff0) + 0x30 +
             (iVar2 * iVar1 * 4 + 0xfU & 0xfffffff0) + (iVar1 * 8 + 0xfU & 0xfffffff0)));
  *(int *)((longlong)param_1 + 0x24) = iVar2;
  uVar3 = param_2 * param_3;
  *param_1 = (longlong)(param_1 + 6);
  *(int *)((longlong)param_1 + 0x1c) = iVar1;
  uVar10 = (ulonglong)param_3;
  lVar5 = (longlong)(param_1 + 6) + ((ulonglong)uVar3 * 4 + 0xf & 0xfffffffffffffff0);
  param_1[1] = lVar5;
  param_1[2] = ((ulonglong)param_3 * 8 + 0xf & 0xfffffffffffffff0) + lVar5;
  if (param_3 != 0) {
    lVar5 = 0;
    lVar9 = 0;
    do {
      *(undefined4 *)(lVar9 + param_1[2]) = *(undefined4 *)(lVar9 + param_5);
      *(undefined8 *)(lVar5 + param_1[1]) = *(undefined8 *)(lVar5 + param_4);
      uVar10 = uVar10 - 1;
      lVar5 = lVar5 + 8;
      lVar9 = lVar9 + 4;
    } while (uVar10 != 0);
  }
  if (uVar3 != 0) {
    uVar6 = 0;
    if (3 < uVar3) {
      plVar7 = (longlong *)*param_1;
      if ((param_1 < plVar7) ||
         (uVar6 = 0, (longlong *)((longlong)plVar7 + (ulonglong)(uVar3 - 1) * 4) < param_1)) {
        uVar6 = 0;
        do {
          uVar6 = uVar6 + 4;
        } while (uVar6 < (uVar3 & 0xfffffffc));
        for (lVar5 = (ulonglong)((uVar3 & 0xfffffffc) + 3 >> 2) << 2; lVar5 != 0; lVar5 = lVar5 + -1
            ) {
          *(undefined4 *)plVar7 = 0x3f800000;
          plVar7 = (longlong *)((longlong)plVar7 + 4);
        }
      }
    }
    if (uVar6 < uVar3) {
      if (3 < uVar3 - uVar6) {
        uVar10 = (ulonglong)uVar6;
        uVar4 = ((uVar3 - uVar6) - 4 >> 2) + 1;
        uVar8 = (ulonglong)uVar4;
        uVar6 = uVar6 + uVar4 * 4;
        lVar5 = uVar10 * 4;
        do {
          *(undefined4 *)(lVar5 + *param_1) = 0x3f800000;
          *(undefined4 *)(lVar5 + 4 + *param_1) = 0x3f800000;
          *(undefined4 *)(lVar5 + 8 + *param_1) = 0x3f800000;
          *(undefined4 *)(lVar5 + 0xc + *param_1) = 0x3f800000;
          uVar8 = uVar8 - 1;
          lVar5 = lVar5 + 0x10;
        } while (uVar8 != 0);
      }
      if (uVar6 < uVar3) {
        uVar10 = (ulonglong)(uVar3 - uVar6);
        lVar5 = (ulonglong)uVar6 * 4;
        do {
          *(undefined4 *)(lVar5 + *param_1) = 0x3f800000;
          uVar10 = uVar10 - 1;
          lVar5 = lVar5 + 4;
        } while (uVar10 != 0);
      }
    }
  }
  *(uint *)(param_1 + 3) = param_3;
  *(int *)(param_1 + 4) = param_2;
  return;
}



// FUNCTION 143975070 FUN_143975070 body=38 status=ok
// SIG undefined FUN_143975070(void)

void FUN_143975070(longlong param_1)

{
  PxAllocatorCallback *pPVar1;
  
  if (param_1 != 0) {
    pPVar1 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
  }
  return;
}



// FUNCTION 1439750a0 setTypePairFriction body=19 status=ok
// SIG undefined setTypePairFriction(void)

void physx::PxVehicleDrivableSurfaceToTireFrictionPairs::setTypePairFriction
               (longlong *param_1,int param_2,uint param_3,undefined4 param_4)

{
  *(undefined4 *)
   (*param_1 + ((ulonglong)(uint)(param_2 * (int)param_1[4]) + (ulonglong)param_3) * 4) = param_4;
  return;
}



// FUNCTION 1439750c0 getTypePairFriction body=19 status=ok
// SIG undefined getTypePairFriction(void)

undefined4
physx::PxVehicleDrivableSurfaceToTireFrictionPairs::getTypePairFriction
          (longlong *param_1,int param_2,uint param_3)

{
  return *(undefined4 *)
          (*param_1 + ((ulonglong)(uint)(param_2 * (int)param_1[4]) + (ulonglong)param_3) * 4);
}



// FUNCTION 1439750e0 setDiffData body=11 status=ok
// SIG undefined setDiffData(void)

void physx::PxVehicleDriveSimDataNW::setDiffData(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x210) = *param_2;
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  return;
}



// FUNCTION 143975110 allocate body=137 status=ok
// SIG undefined allocate(void)

longlong * physx::PxVehicleDriveNW::allocate(undefined4 param_1)

{
  int iVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  
  iVar1 = thunk_FUN_1439738a0();
  if (iVar1 + 0x340 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)
             (**(code **)(*(longlong *)pPVar2 + 8))
                       (pPVar2,iVar1 + 0x340,"NonTrackedAlloc",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleDriveNW.cpp"
                        ,0x51);
    if (plVar3 != (longlong *)0x0) {
      PxVehicleDriveNW(plVar3);
    }
  }
  FUN_143974990(param_1,plVar3,plVar3 + 0x68);
  (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
  *(undefined1 *)((longlong)plVar3 + 0xad) = 1;
  return plVar3;
}



// FUNCTION 1439751a0 free body=5 status=ok
// SIG void free(void * _Memory)

void __cdecl physx::PxVehicleWheels::free(void *_Memory)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(uint *)((longlong)_Memory + 0x38) != 0) {
    lVar2 = 0;
    uVar3 = (ulonglong)*(uint *)((longlong)_Memory + 0x38);
    do {
      puVar1 = *(undefined8 **)
                (*(longlong *)(*(longlong *)((longlong)_Memory + 0x70) + 0x1d0 + lVar2) + 0x168);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)();
      }
      lVar2 = lVar2 + 0x220;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 1439751b0 setup body=79 status=ok
// SIG undefined setup(void)

void physx::PxVehicleDriveNW::setup
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  PxVehicleDrive::setup();
  PxVehicleDriveSimData::PxVehicleDriveSimData
            (param_1 + 0x120,param_5,param_3,param_4,param_6,uVar2);
  uVar1 = *(undefined8 *)(param_5 + 0x218);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_5 + 0x210);
  *(undefined8 *)(param_1 + 0x338) = uVar1;
  return;
}



// FUNCTION 143975210 create body=138 status=ok
// SIG undefined create(void)

longlong physx::PxVehicleDriveNW::create
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                   undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = allocate(param_5);
  PxVehicleDrive::setup(lVar2,param_1,param_2,param_3,param_5,0);
  PxVehicleDriveSimData::PxVehicleDriveSimData(lVar2 + 0x120,param_4);
  uVar1 = *(undefined8 *)(param_4 + 0x218);
  *(undefined8 *)(lVar2 + 0x330) = *(undefined8 *)(param_4 + 0x210);
  *(undefined8 *)(lVar2 + 0x338) = uVar1;
  return lVar2;
}



// FUNCTION 1439752a0 setToRestState body=5 status=ok
// SIG undefined setToRestState(void)

void physx::PxVehicleDrive::setToRestState(longlong param_1)

{
  PxVehicleWheels::setToRestState();
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0x101) = 0;
  *(undefined4 *)(param_1 + 0x104) = 1;
  *(undefined8 *)(param_1 + 0x108) = 1;
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}



// FUNCTION 1439752c0 FUN_1439752c0 body=45 status=ok
// SIG undefined FUN_1439752c0(void)

void FUN_1439752c0(void)

{
  FUN_143975ce0();
  return;
}



// FUNCTION 143975300 FUN_143975300 body=45 status=ok
// SIG undefined FUN_143975300(void)

void FUN_143975300(void)

{
  FUN_143975fc0();
  return;
}



// FUNCTION 143975340 FUN_143975340 body=45 status=ok
// SIG undefined FUN_143975340(void)

void FUN_143975340(void)

{
  FUN_143975ce0();
  return;
}



// FUNCTION 143975380 FUN_143975380 body=45 status=ok
// SIG undefined FUN_143975380(void)

void FUN_143975380(void)

{
  FUN_143975fc0();
  return;
}



// FUNCTION 1439753c0 PxVehicleDriveTankSmoothDigitalRawInputsAndSetAnalogInputs body=808 status=ok
// SIG undefined PxVehicleDriveTankSmoothDigitalRawInputsAndSetAnalogInputs(void)

void physx::PxVehicleDriveTankSmoothDigitalRawInputsAndSetAnalogInputs
               (float *param_1,int *param_2,float param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar3 = param_2[6];
  lVar1 = param_4 + 0xc0;
  fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,0);
  if ((char)iVar3 == '\0') {
    fVar4 = fVar4 - param_3 * param_1[0x10];
  }
  else {
    fVar4 = fVar4 + param_3 * *param_1;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  PxVehicleDriveDynData::setAnalogInput(lVar1,0,fVar4);
  cVar2 = *(char *)((longlong)param_2 + 0x1b);
  fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,3);
  if (cVar2 == '\0') {
    fVar4 = fVar4 - param_3 * param_1[0x13];
  }
  else {
    fVar4 = fVar4 + param_3 * param_1[3];
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  PxVehicleDriveDynData::setAnalogInput(lVar1,3,fVar4);
  iVar3 = param_2[7];
  fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,4);
  if ((char)iVar3 == '\0') {
    fVar4 = fVar4 - param_3 * param_1[0x14];
  }
  else {
    fVar4 = fVar4 + param_3 * param_1[4];
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  PxVehicleDriveDynData::setAnalogInput(lVar1,4,fVar4);
  cVar2 = *(char *)((longlong)param_2 + 0x19);
  fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,1);
  if (cVar2 == '\0') {
    fVar4 = fVar4 - param_3 * param_1[0x11];
  }
  else {
    fVar4 = fVar4 + param_3 * param_1[1];
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  PxVehicleDriveDynData::setAnalogInput(lVar1,1,fVar4);
  cVar2 = *(char *)((longlong)param_2 + 0x1a);
  fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,2);
  if (cVar2 == '\0') {
    fVar4 = fVar4 - param_3 * param_1[0x12];
  }
  else {
    fVar4 = fVar4 + param_3 * param_1[2];
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  PxVehicleDriveDynData::setAnalogInput(lVar1,2,fVar4);
  *(undefined1 *)(param_4 + 0x101) = *(undefined1 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)(param_4 + 0x102) = *(undefined1 *)((longlong)param_2 + 0x1e);
  if (*param_2 == 0) {
    fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,3);
    fVar5 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,1);
    fVar4 = fVar4 - fVar5;
    if (fVar4 <= 0.0) {
      PxVehicleDriveDynData::setAnalogInput(lVar1,3,0);
      fVar4 = -fVar4;
    }
    else {
      PxVehicleDriveDynData::setAnalogInput(lVar1,3,fVar4);
      fVar4 = 0.0;
    }
    PxVehicleDriveDynData::setAnalogInput(lVar1,1,fVar4);
    fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,4);
    fVar5 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,2);
    fVar4 = fVar4 - fVar5;
    if (fVar4 <= 0.0) {
      PxVehicleDriveDynData::setAnalogInput(lVar1,4,0);
      fVar4 = -fVar4;
    }
    else {
      PxVehicleDriveDynData::setAnalogInput(lVar1,4,fVar4);
      fVar4 = 0.0;
    }
  }
  else {
    if (*param_2 != 1) {
      return;
    }
    fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,3);
    fVar5 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,1);
    PxVehicleDriveDynData::setAnalogInput(lVar1,3,fVar4 - fVar5);
    PxVehicleDriveDynData::setAnalogInput(lVar1,1,0);
    fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,4);
    fVar5 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,2);
    PxVehicleDriveDynData::setAnalogInput(lVar1,4,fVar4 - fVar5);
    fVar4 = 0.0;
  }
  PxVehicleDriveDynData::setAnalogInput(lVar1,2,fVar4);
  return;
}



// FUNCTION 1439756f0 PxVehicleDriveTankSmoothAnalogRawInputsAndSetAnalogInputs body=1404 status=ok
// SIG undefined PxVehicleDriveTankSmoothAnalogRawInputsAndSetAnalogInputs(void)

void physx::PxVehicleDriveTankSmoothAnalogRawInputsAndSetAnalogInputs
               (float *param_1,int *param_2,float param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = *(undefined1 *)((longlong)param_2 + 0x1e);
  lVar1 = param_4 + 0xc0;
  *(undefined1 *)(param_4 + 0x101) = *(undefined1 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)(param_4 + 0x102) = uVar3;
  fVar2 = *param_1;
  fVar7 = param_1[0x10];
  fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,0);
  fVar6 = (float)param_2[1];
  if (fVar6 <= fVar4) {
    fVar4 = fVar4 - fVar7 * param_3;
    if (fVar4 <= fVar6) goto LAB_143975778;
  }
  else {
    fVar4 = fVar2 * param_3 + fVar4;
    if (fVar6 <= fVar4) {
LAB_143975778:
      fVar4 = fVar6;
    }
  }
  PxVehicleDriveDynData::setAnalogInput(lVar1,0,fVar4);
  if (*param_2 != 0) {
    if (*param_2 != 1) {
      return;
    }
    fVar2 = param_1[1];
    fVar7 = param_1[0x11];
    fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,1);
    fVar6 = (float)param_2[2];
    if (fVar6 <= fVar4) {
      fVar4 = fVar4 - fVar7 * param_3;
      if (fVar4 <= fVar6) goto LAB_1439757e1;
    }
    else {
      fVar4 = fVar2 * param_3 + fVar4;
      if (fVar6 <= fVar4) {
LAB_1439757e1:
        fVar4 = fVar6;
      }
    }
    PxVehicleDriveDynData::setAnalogInput(lVar1,1,fVar4);
    fVar2 = param_1[2];
    fVar7 = param_1[0x12];
    fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,2);
    fVar6 = (float)param_2[3];
    if (fVar6 <= fVar4) {
      fVar4 = fVar4 - fVar7 * param_3;
      if (fVar4 <= fVar6) goto LAB_143975837;
    }
    else {
      fVar4 = fVar2 * param_3 + fVar4;
      if (fVar6 <= fVar4) {
LAB_143975837:
        fVar4 = fVar6;
      }
    }
    PxVehicleDriveDynData::setAnalogInput(lVar1,2,fVar4);
    fVar6 = param_1[3];
    fVar2 = param_1[0x13];
    fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,3);
    fVar7 = (float)param_2[4];
    if (fVar7 == 0.0) {
      if (fVar4 <= 0.0) {
        fVar6 = 0.0;
        if ((fVar4 < 0.0) && (fVar6 = fVar2 * param_3 + fVar4, 0.0 <= fVar6)) {
          fVar6 = 0.0;
        }
      }
      else {
        fVar6 = fVar4 - fVar2 * param_3;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
      }
    }
    else if (fVar7 <= fVar4) {
      if (0.0 < fVar4) {
        fVar6 = fVar2;
      }
      fVar6 = fVar4 - fVar6 * param_3;
      if (fVar6 <= fVar7) goto LAB_1439758ed;
    }
    else {
      if (fVar4 < 0.0) {
        fVar6 = fVar2;
      }
      fVar6 = fVar6 * param_3 + fVar4;
      if (fVar7 <= fVar6) {
LAB_1439758ed:
        fVar6 = fVar7;
      }
    }
    PxVehicleDriveDynData::setAnalogInput(lVar1,3,fVar6);
    fVar6 = param_1[4];
    fVar2 = param_1[0x14];
    fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,4);
    fVar7 = (float)param_2[5];
    if (fVar7 == 0.0) {
      if (fVar4 <= 0.0) {
        fVar6 = 0.0;
        if ((fVar4 < 0.0) && (fVar6 = fVar2 * param_3 + fVar4, 0.0 <= fVar6)) {
          PxVehicleDriveDynData::setAnalogInput(lVar1,4,0);
          return;
        }
      }
      else {
        fVar6 = fVar4 - fVar2 * param_3;
        if (fVar6 <= 0.0) {
          PxVehicleDriveDynData::setAnalogInput(lVar1,4,0);
          return;
        }
      }
    }
    else {
      if (fVar7 <= fVar4) {
        if (0.0 < fVar4) {
          fVar6 = fVar2;
        }
        fVar6 = fVar4 - fVar6 * param_3;
        if (fVar7 < fVar6) goto LAB_1439759c4;
      }
      else {
        if (fVar4 < 0.0) {
          fVar6 = fVar2;
        }
        fVar6 = fVar6 * param_3 + fVar4;
        if (fVar6 < fVar7) goto LAB_1439759c4;
      }
      fVar6 = fVar7;
    }
LAB_1439759c4:
    PxVehicleDriveDynData::setAnalogInput(lVar1,4,fVar6);
    return;
  }
  fVar2 = param_1[0x14];
  fVar7 = param_1[4];
  fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,4);
  fVar6 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,2);
  fVar4 = fVar4 - fVar6;
  fVar5 = (float)param_2[5] - (float)param_2[3];
  fVar6 = 0.0;
  if (fVar5 == 0.0) {
    if (fVar4 <= 0.0) {
      if ((0.0 <= fVar4) || (fVar6 = fVar2 * param_3 + fVar4, fVar6 < 0.0)) goto LAB_143975a53;
    }
    else {
      fVar6 = fVar4 - fVar2 * param_3;
      if (0.0 < fVar6) goto LAB_143975bc0;
    }
    fVar6 = 0.0;
LAB_143975a53:
    PxVehicleDriveDynData::setAnalogInput(lVar1,4,0);
    fVar6 = -fVar6;
  }
  else {
    if (fVar5 <= fVar4) {
      if (0.0 < fVar4) {
        fVar7 = fVar2;
      }
      fVar6 = fVar4 - fVar7 * param_3;
      if (fVar6 <= fVar5) goto LAB_143975bb3;
    }
    else {
      if (fVar4 < 0.0) {
        fVar7 = fVar2;
      }
      fVar6 = fVar7 * param_3 + fVar4;
      if (fVar5 <= fVar6) {
LAB_143975bb3:
        fVar6 = fVar5;
      }
    }
    if (fVar6 <= 0.0) goto LAB_143975a53;
LAB_143975bc0:
    PxVehicleDriveDynData::setAnalogInput(lVar1,4,fVar6);
    fVar6 = 0.0;
  }
  PxVehicleDriveDynData::setAnalogInput(lVar1,2,fVar6);
  fVar7 = param_1[3];
  fVar2 = param_1[0x13];
  fVar4 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,3);
  fVar6 = (float)PxVehicleDriveDynData::getAnalogInput(lVar1,1);
  fVar4 = fVar4 - fVar6;
  fVar5 = (float)param_2[4] - (float)param_2[2];
  fVar6 = 0.0;
  if (fVar5 == 0.0) {
    if (fVar4 <= 0.0) {
      if ((0.0 <= fVar4) || (fVar6 = fVar2 * param_3 + fVar4, fVar6 < 0.0)) goto LAB_143975ae8;
    }
    else {
      fVar6 = fVar4 - fVar2 * param_3;
      if (0.0 < fVar6) goto LAB_143975c53;
    }
    fVar6 = 0.0;
  }
  else {
    if (fVar5 <= fVar4) {
      if (0.0 < fVar4) {
        fVar7 = fVar2;
      }
      fVar6 = fVar4 - fVar7 * param_3;
      if (fVar6 <= fVar5) goto LAB_143975c46;
    }
    else {
      if (fVar4 < 0.0) {
        fVar7 = fVar2;
      }
      fVar6 = fVar7 * param_3 + fVar4;
      if (fVar5 <= fVar6) {
LAB_143975c46:
        fVar6 = fVar5;
      }
    }
    if (0.0 < fVar6) {
LAB_143975c53:
      PxVehicleDriveDynData::setAnalogInput(lVar1,3,fVar6);
      fVar6 = 0.0;
      goto LAB_143975b03;
    }
  }
LAB_143975ae8:
  PxVehicleDriveDynData::setAnalogInput(lVar1,3,0);
  fVar6 = -fVar6;
LAB_143975b03:
  PxVehicleDriveDynData::setAnalogInput(lVar1,1,fVar6);
  return;
}



// FUNCTION 143975ce0 FUN_143975ce0 body=726 status=ok
// SIG undefined FUN_143975ce0(void)

void FUN_143975ce0(float *param_1,float *param_2,longlong param_3,float param_4,char param_5,
                  undefined8 param_6,longlong param_7)

{
  float fVar1;
  undefined1 uVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = *(undefined1 *)(param_3 + 0x24);
  *(undefined1 *)(param_7 + 0x42) = *(undefined1 *)(param_3 + 0x25);
  *(undefined1 *)(param_7 + 0x41) = uVar2;
  cVar3 = *(char *)(param_3 + 8);
  fVar7 = (float)physx::PxVehicleDriveDynData::getAnalogInput(param_7,0);
  if (cVar3 == '\0') {
    fVar7 = fVar7 - param_4 * param_1[0x10];
  }
  else {
    fVar7 = fVar7 + param_4 * *param_1;
  }
  fVar12 = 1.0;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
  physx::PxVehicleDriveDynData::setAnalogInput(param_7,0,fVar7);
  cVar3 = *(char *)(param_3 + 9);
  fVar7 = 1.4013e-45;
  fVar8 = (float)physx::PxVehicleDriveDynData::getAnalogInput(param_7,1);
  if (cVar3 == '\0') {
    fVar8 = fVar8 - param_4 * param_1[0x11];
  }
  else {
    fVar8 = fVar8 + param_4 * param_1[1];
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  physx::PxVehicleDriveDynData::setAnalogInput(param_7,1,fVar8);
  cVar3 = *(char *)(param_3 + 10);
  uVar6 = 2;
  fVar8 = (float)physx::PxVehicleDriveDynData::getAnalogInput(param_7,2);
  if (cVar3 == '\0') {
    fVar8 = fVar8 - param_4 * param_1[0x12];
  }
  else {
    fVar8 = fVar8 + param_4 * param_1[2];
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  physx::PxVehicleDriveDynData::setAnalogInput(param_7,2,fVar8);
  cVar3 = *(char *)(param_3 + 0xb);
  fVar8 = (float)physx::PxVehicleDriveDynData::getAnalogInput(param_7,3);
  if (cVar3 == '\0') {
    fVar8 = fVar8 - param_4 * param_1[0x13];
  }
  else {
    fVar8 = fVar8 + param_4 * param_1[3];
  }
  cVar3 = *(char *)(param_3 + 0xc);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  fVar9 = (float)physx::PxVehicleDriveDynData::getAnalogInput(param_7,4);
  if (cVar3 == '\0') {
    fVar9 = fVar9 - param_4 * param_1[0x14];
  }
  else {
    fVar9 = fVar9 + param_4 * param_1[4];
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
  fVar10 = (float)FUN_1439733e0(param_6);
  if (param_5 == '\0') {
    fVar4 = param_2[0x10];
    if (fVar4 == 0.0) {
      fVar12 = 0.0;
    }
    else if ((fVar4 == 1.4013e-45) || (fVar11 = *param_2, fVar10 < fVar11)) {
      fVar12 = param_2[1];
    }
    else {
      fVar12 = param_2[1];
      if (1 < (uint)fVar4) {
        do {
          iVar5 = (int)uVar6;
          fVar1 = param_2[uVar6];
          if ((fVar11 <= fVar10) && (fVar10 < fVar1)) {
            fVar12 = ((param_2[iVar5 + 1] - fVar12) * (fVar10 - fVar11)) / (fVar1 - fVar11) + fVar12
            ;
            goto LAB_143975f3a;
          }
          fVar7 = (float)((int)fVar7 + 1);
          uVar6 = (ulonglong)(iVar5 + 2);
          fVar11 = fVar1;
          fVar12 = param_2[iVar5 + 1];
        } while ((uint)fVar7 < (uint)fVar4);
      }
      fVar12 = param_2[(int)fVar4 * 2 - 1];
    }
  }
LAB_143975f3a:
  if (fVar12 < ABS(fVar9 - fVar8)) {
    fVar12 = fVar12 / ABS(fVar9 - fVar8);
    fVar8 = fVar8 * fVar12;
    fVar9 = fVar9 * fVar12;
  }
  physx::PxVehicleDriveDynData::setAnalogInput(param_7,3,fVar8);
  physx::PxVehicleDriveDynData::setAnalogInput(param_7,4,fVar9);
  return;
}



// FUNCTION 143975fc0 FUN_143975fc0 body=769 status=ok
// SIG undefined FUN_143975fc0(void)

void FUN_143975fc0(float *param_1,float *param_2,longlong param_3,float param_4,char param_5,
                  undefined8 param_6,longlong param_7)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar3 = *(undefined1 *)(param_3 + 0x25);
  *(undefined1 *)(param_7 + 0x41) = *(undefined1 *)(param_3 + 0x24);
  *(undefined1 *)(param_7 + 0x42) = uVar3;
  fVar1 = *param_1;
  fVar12 = param_1[0x10];
  fVar7 = (float)physx::PxVehicleDriveDynData::getAnalogInput(param_7,0);
  fVar8 = *(float *)(param_3 + 0x10);
  if (fVar8 <= fVar7) {
    fVar7 = fVar7 - fVar12 * param_4;
    if (fVar7 <= fVar8) goto LAB_143976055;
  }
  else {
    fVar7 = fVar1 * param_4 + fVar7;
    if (fVar8 <= fVar7) {
LAB_143976055:
      fVar7 = fVar8;
    }
  }
  physx::PxVehicleDriveDynData::setAnalogInput(param_7,0,fVar7);
  fVar1 = param_1[1];
  fVar6 = 1.4013e-45;
  fVar12 = param_1[0x11];
  fVar7 = (float)physx::PxVehicleDriveDynData::getAnalogInput(param_7,1);
  fVar8 = *(float *)(param_3 + 0x14);
  if (fVar8 <= fVar7) {
    fVar7 = fVar7 - fVar12 * param_4;
    if (fVar7 <= fVar8) goto LAB_1439760aa;
  }
  else {
    fVar7 = fVar1 * param_4 + fVar7;
    if (fVar8 <= fVar7) {
LAB_1439760aa:
      fVar7 = fVar8;
    }
  }
  physx::PxVehicleDriveDynData::setAnalogInput(param_7,1,fVar7);
  uVar5 = 2;
  physx::PxVehicleDriveDynData::getAnalogInput(param_7,2);
  physx::PxVehicleDriveDynData::setAnalogInput(param_7,2);
  fVar8 = (float)FUN_1439733e0(param_6);
  fVar12 = param_1[4];
  fVar1 = param_1[0x14];
  fVar7 = (float)physx::PxVehicleDriveDynData::getAnalogInput(param_7,4);
  fVar9 = (float)physx::PxVehicleDriveDynData::getAnalogInput(param_7,3);
  fVar7 = fVar7 - fVar9;
  if (param_5 == '\0') {
    fVar9 = param_2[0x10];
    if (fVar9 == 0.0) {
      fVar10 = 0.0;
    }
    else if ((fVar9 == 1.4013e-45) || (fVar11 = *param_2, fVar8 < fVar11)) {
      fVar10 = param_2[1];
    }
    else {
      fVar10 = param_2[1];
      if (1 < (uint)fVar9) {
        do {
          iVar4 = (int)uVar5;
          fVar2 = param_2[uVar5];
          if ((fVar11 <= fVar8) && (fVar8 < fVar2)) {
            fVar10 = ((param_2[iVar4 + 1] - fVar10) * (fVar8 - fVar11)) / (fVar2 - fVar11) + fVar10;
            goto LAB_1439761e5;
          }
          fVar6 = (float)((int)fVar6 + 1);
          uVar5 = (ulonglong)(iVar4 + 2);
          fVar11 = fVar2;
          fVar10 = param_2[iVar4 + 1];
        } while ((uint)fVar6 < (uint)fVar9);
      }
      fVar10 = param_2[(int)fVar9 * 2 - 1];
    }
  }
  else {
    fVar10 = 1.0;
  }
LAB_1439761e5:
  fVar10 = fVar10 * *(float *)(param_3 + 0x20);
  if (fVar10 == 0.0) {
    if (fVar7 <= 0.0) {
      fVar12 = 0.0;
      if ((fVar7 < 0.0) && (fVar12 = fVar1 * param_4 + fVar7, 0.0 <= fVar12)) {
        fVar12 = 0.0;
      }
    }
    else {
      fVar12 = fVar7 - fVar1 * param_4;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
    }
  }
  else {
    if (fVar10 <= fVar7) {
      if (0.0 < fVar7) {
        fVar12 = fVar1;
      }
      fVar12 = fVar7 - fVar12 * param_4;
      if (fVar10 < fVar12) goto LAB_143976272;
    }
    else {
      if (fVar7 < 0.0) {
        fVar12 = fVar1;
      }
      fVar12 = fVar12 * param_4 + fVar7;
      if (fVar12 < fVar10) goto LAB_143976272;
    }
    fVar12 = fVar10;
  }
LAB_143976272:
  physx::PxVehicleDriveDynData::setAnalogInput(param_7,3);
  physx::PxVehicleDriveDynData::setAnalogInput(param_7,4,fVar12);
  return;
}



// FUNCTION 1439762d0 PxVehicle4WEnable3WTadpoleMode body=100 status=ok
// SIG undefined PxVehicle4WEnable3WTadpoleMode(void)

void physx::PxVehicle4WEnable3WTadpoleMode(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_res20 [2];
  undefined4 local_18 [4];
  
  local_18[0] = 0xffffffff;
  local_res20[0] = 0xffffffff;
  computeDirection(local_18,local_res20);
  enable3WMode(local_18[0],local_res20[0],0,param_1,param_2,param_3);
  return;
}



// FUNCTION 143976340 PxVehicle4WEnable3WDeltaMode body=100 status=ok
// SIG undefined PxVehicle4WEnable3WDeltaMode(void)

void physx::PxVehicle4WEnable3WDeltaMode(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_res20 [2];
  undefined4 local_18 [4];
  
  local_18[0] = 0xffffffff;
  local_res20[0] = 0xffffffff;
  computeDirection(local_18,local_res20);
  enable3WMode(local_18[0],local_res20[0],1,param_1,param_2,param_3);
  return;
}



// FUNCTION 1439763b0 computeSprungMasses body=5 status=ok
// SIG undefined computeSprungMasses(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void physx::computeSprungMasses
               (uint param_1,float *param_2,float *param_3,float param_4,uint param_5,float *param_6
               )

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  float *pfVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_1308;
  float fStack_1300;
  undefined8 uStack_12f8;
  float fStack_12f0;
  ulonglong uStack_12e8;
  float fStack_12d8;
  float fStack_12d4;
  float fStack_12d0;
  float afStack_12cc [20];
  uint uStack_127c;
  float fStack_1278;
  float fStack_1274;
  float fStack_1270;
  uint uStack_121c;
  float afStack_1218 [23];
  float afStack_11bc [23];
  float afStack_1160 [23];
  float afStack_1104 [460];
  uint uStack_9d4;
  undefined1 auStack_9c8 [2116];
  undefined4 uStack_184;
  
  uVar3 = (ulonglong)param_1;
  if (param_1 == 1) {
    *param_6 = param_4;
  }
  else if (param_1 == 2) {
    uVar3 = (ulonglong)param_5;
    fVar14 = *param_2;
    uStack_1308._0_4_ = param_2[3] - fVar14;
    fVar16 = param_2[1];
    uStack_1308._4_4_ = param_2[4] - fVar16;
    fVar17 = param_2[2];
    fStack_1300 = param_2[5] - fVar17;
    fStack_12f0 = fVar17;
    uStack_12f8._0_4_ = fVar14;
    uStack_12f8._4_4_ = fVar16;
    *(undefined4 *)((longlong)&uStack_12f8 + uVar3 * 4) = 0;
    *(undefined4 *)((longlong)&uStack_1308 + uVar3 * 4) = 0;
    fVar15 = SQRT(uStack_1308._4_4_ * uStack_1308._4_4_ + (float)uStack_1308 * (float)uStack_1308 +
                  fStack_1300 * fStack_1300);
    fVar18 = uStack_1308._4_4_;
    fVar19 = (float)uStack_1308;
    fVar20 = fStack_1300;
    if (0.0 < fVar15) {
      fVar15 = 1.0 / fVar15;
      fVar19 = (float)uStack_1308 * fVar15;
      fVar18 = uStack_1308._4_4_ * fVar15;
      fVar20 = fStack_1300 * fVar15;
    }
    uStack_1308._0_4_ = *param_3;
    uStack_1308._4_4_ = param_3[1];
    fStack_1300 = param_3[2];
    *(undefined4 *)((longlong)&uStack_1308 + uVar3 * 4) = 0;
    fVar15 = param_2[4];
    fVar13 = (uStack_1308._4_4_ - uStack_12f8._4_4_) * fVar18 +
             ((float)uStack_1308 - (float)uStack_12f8) * fVar19 +
             (fStack_1300 - fStack_12f0) * fVar20;
    fVar1 = param_2[3];
    fStack_1300 = fVar17;
    uStack_1308._0_4_ = fVar14;
    uStack_1308._4_4_ = fVar16;
    *(undefined4 *)((longlong)&uStack_1308 + uVar3 * 4) = 0;
    fVar16 = fVar19 * fVar13 + (float)uStack_12f8;
    fVar17 = fVar18 * fVar13 + uStack_12f8._4_4_;
    fVar13 = fVar20 * fVar13 + fStack_12f0;
    fStack_12f0 = param_2[5];
    uStack_12f8._0_4_ = fVar1;
    uStack_12f8._4_4_ = fVar15;
    *(undefined4 *)((longlong)&uStack_12f8 + uVar3 * 4) = 0;
    fVar14 = (uStack_12f8._4_4_ - fVar17) * fVar18 + ((float)uStack_12f8 - fVar16) * fVar19 +
             (fStack_12f0 - fVar13) * fVar20;
    fVar14 = (fVar14 * param_4) /
             (fVar14 - ((uStack_1308._4_4_ - fVar17) * fVar18 +
                        ((float)uStack_1308 - fVar16) * fVar19 + (fStack_1300 - fVar13) * fVar20));
    *param_6 = fVar14;
    param_6[1] = param_4 - fVar14;
  }
  else {
    fStack_12d0 = param_4;
    if (param_1 == 3) {
      afStack_1160[0] = 1.0;
      afStack_1160[1] = 1.0;
      afStack_1160[2] = 1.0;
      uVar8 = (ulonglong)((param_5 + 1) % 3);
      afStack_1218[0] = param_2[uVar8];
      afStack_1218[1] = param_2[uVar8 + 3];
      afStack_1218[2] = param_2[uVar8 + 6];
      uStack_184 = 0;
      uVar3 = (ulonglong)((param_5 + 2) % 3);
      afStack_11bc[0] = param_2[uVar3];
      afStack_11bc[1] = param_2[uVar3 + 3];
      afStack_11bc[2] = param_2[uVar3 + 6];
      fStack_12d8 = param_4 * param_3[uVar8];
      fStack_12d4 = param_4 * param_3[uVar3];
      uStack_127c = param_1;
      uStack_121c = param_1;
      uStack_9d4 = param_1;
      MatrixNNLUSolver::decomposeLU(auStack_9c8,afStack_1218);
      MatrixNNLUSolver::solve(auStack_9c8,&fStack_12d8,&fStack_1278);
      *param_6 = fStack_1278;
      param_6[2] = fStack_1270;
      param_6[1] = fStack_1274;
    }
    else if (3 < param_1) {
      uStack_127c = param_1 + 3;
      uVar8 = (ulonglong)((param_5 + 1) % 3);
      uStack_12e8 = (ulonglong)((param_5 + 2) % 3);
      uStack_9d4 = uStack_127c;
      if (param_1 != 0) {
        pfVar4 = afStack_11bc;
        pfVar6 = param_2 + uStack_12e8;
        uVar9 = uVar3;
        do {
          pfVar4[-0x17] = pfVar6[uVar8 - uStack_12e8];
          *pfVar4 = *pfVar6;
          pfVar4[0x17] = 1.0;
          pfVar4 = pfVar4 + 1;
          uVar9 = uVar9 - 1;
          pfVar6 = pfVar6 + 3;
        } while (uVar9 != 0);
      }
      lVar11 = 0;
      if (param_1 < uStack_127c) {
        pfVar4 = afStack_11bc + uVar3;
        uVar9 = (ulonglong)(uStack_127c - param_1);
        do {
          pfVar4[-0x17] = 0.0;
          *pfVar4 = 0.0;
          pfVar4[0x17] = 0.0;
          pfVar4 = pfVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      fStack_12d8 = param_4 * param_3[uVar8];
      fStack_12d4 = param_4 * param_3[uStack_12e8];
      if (param_1 != 0) {
        uVar2 = param_1 + 1;
        uStack_1308 = uVar3 * 4;
        pfVar4 = afStack_12cc;
        for (uVar9 = uVar3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pfVar4 = (param_4 / (float)uVar3) * 2.0;
          pfVar4 = pfVar4 + 1;
        }
        uStack_12f8 = (ulonglong)(param_1 + 2) - (ulonglong)uVar2;
        lVar7 = 0x45;
        pfVar4 = afStack_1104 + uVar2;
        pfVar6 = param_2 + uStack_12e8;
        pfVar12 = afStack_1104;
        uVar9 = uVar3;
        do {
          pfVar10 = pfVar12;
          for (uVar5 = uVar3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pfVar10 = 0.0;
            pfVar10 = pfVar10 + 1;
          }
          afStack_1218[lVar7 + lVar11] = 2.0;
          lVar7 = lVar7 + 0x17;
          lVar11 = lVar11 + 1;
          pfVar4[uVar3 - uVar2] = pfVar6[uVar8 - uStack_12e8];
          *pfVar4 = *pfVar6;
          pfVar4[uStack_12f8] = 1.0;
          uVar9 = uVar9 - 1;
          pfVar4 = pfVar4 + 0x17;
          pfVar6 = pfVar6 + 3;
          pfVar12 = pfVar12 + 0x17;
        } while (uVar9 != 0);
      }
      uStack_121c = param_1 + 3;
      uStack_184 = 0;
      MatrixNNLUSolver::decomposeLU(auStack_9c8,afStack_1218);
      MatrixNNLUSolver::solve(auStack_9c8,&fStack_12d8,&fStack_1278);
      if (param_1 != 0) {
        ::_guard_xfg_dispatch_icall_nop(param_6,&fStack_1278,uVar3 << 2);
      }
    }
  }
  return;
}



// FUNCTION 1439763c0 PxVehicleUpdateCMassLocalPose body=681 status=ok
// SIG undefined PxVehicleUpdateCMassLocalPose(void)

void physx::PxVehicleUpdateCMassLocalPose
               (longlong param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  float local_168 [20];
  undefined1 local_118 [8];
  float local_110 [58];
  
  uVar7 = *(uint *)(param_4 + 0x3c);
  uVar10 = 0;
  if (uVar7 != 0) {
    pfVar9 = local_110;
    do {
      pfVar8 = (float *)PxVehicleWheelsSimData::getWheelCentreOffset(param_4 + 0x10,uVar10);
      fVar1 = *(float *)(param_1 + 0x14);
      fVar2 = *(float *)(param_1 + 0x18);
      fVar3 = pfVar8[1];
      fVar4 = pfVar8[2];
      fVar5 = *(float *)(param_2 + 0x14);
      fVar6 = *(float *)(param_2 + 0x18);
      pfVar9[-2] = (*(float *)(param_1 + 0x10) + *pfVar8) - *(float *)(param_2 + 0x10);
      pfVar9[-1] = (fVar1 + fVar3) - fVar5;
      *pfVar9 = (fVar2 + fVar4) - fVar6;
      pfVar8 = (float *)PxVehicleWheelsSimData::getWheelCentreOffset(param_4 + 0x10,uVar10);
      local_1b8 = (*(float *)(param_1 + 0x14) + pfVar8[1]) - *(float *)(param_2 + 0x14);
      local_1b4 = (*(float *)(param_1 + 0x18) + pfVar8[2]) - *(float *)(param_2 + 0x18);
      local_1bc = (*pfVar8 + *(float *)(param_1 + 0x10)) - *(float *)(param_2 + 0x10);
      PxVehicleWheelsSimData::setWheelCentreOffset(param_4 + 0x10,uVar10,&local_1bc);
      pfVar8 = (float *)PxVehicleWheelsSimData::getSuspForceAppPointOffset(param_4 + 0x10,uVar10);
      local_1b0 = (*pfVar8 + *(float *)(param_1 + 0x10)) - *(float *)(param_2 + 0x10);
      local_1ac = (pfVar8[1] + *(float *)(param_1 + 0x14)) - *(float *)(param_2 + 0x14);
      local_1a8 = (pfVar8[2] + *(float *)(param_1 + 0x18)) - *(float *)(param_2 + 0x18);
      PxVehicleWheelsSimData::setSuspForceAppPointOffset(param_4 + 0x10,uVar10,&local_1b0);
      pfVar8 = (float *)PxVehicleWheelsSimData::getTireForceAppPointOffset(param_4 + 0x10,uVar10);
      local_1c0 = (pfVar8[2] + *(float *)(param_1 + 0x18)) - *(float *)(param_2 + 0x18);
      local_1c8 = CONCAT44((pfVar8[1] + *(float *)(param_1 + 0x14)) - *(float *)(param_2 + 0x14),
                           (*(float *)(param_1 + 0x10) + *pfVar8) - *(float *)(param_2 + 0x10));
      PxVehicleWheelsSimData::setTireForceAppPointOffset(param_4 + 0x10,uVar10,&local_1c8);
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 3;
    } while (uVar10 < uVar7);
  }
  uVar10 = 0;
  local_1c8 = 0;
  local_1c0 = 0.0;
  uVar11 = (**(code **)(**(longlong **)(param_4 + 0xa0) + 0x100))();
  computeSprungMasses(uVar7,local_118,&local_1c8,uVar11,param_3,local_168);
  if (uVar7 != 0) {
    pfVar9 = local_168;
    do {
      pfVar8 = (float *)PxVehicleWheelsSimData::getSuspensionData(param_4 + 0x10,uVar10);
      local_190 = *pfVar9;
      fStack_198 = pfVar8[2];
      fStack_194 = pfVar8[3];
      fStack_18c = pfVar8[5];
      fStack_188 = pfVar8[6];
      fStack_184 = pfVar8[7];
      local_180 = *(undefined8 *)(pfVar8 + 8);
      uStack_178 = *(undefined8 *)(pfVar8 + 10);
      local_1a0 = *pfVar8 * (local_190 / pfVar8[4]);
      fStack_19c = pfVar8[1] * (local_190 / pfVar8[4]);
      PxVehicleWheelsSimData::setSuspensionData(param_4 + 0x10,uVar10,&local_1a0);
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 1;
    } while (uVar10 < uVar7);
  }
  return;
}



// FUNCTION 143976670 PxVehicleCopyDynamicsData body=601 status=ok
// SIG undefined PxVehicleCopyDynamicsData(void)

void physx::PxVehicleCopyDynamicsData(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  char local_78 [64];
  
  plVar4 = *(longlong **)(param_3 + 0xa0);
  uVar10 = *(uint *)(param_2 + 0x3c);
  uVar3 = *(uint *)(param_3 + 0x3c);
  (**(code **)(*plVar4 + 0x128))(plVar4,local_98);
  (**(code **)(*plVar4 + 0x138))(plVar4,local_88);
  cVar6 = *(char *)(param_2 + 0xad);
  if (cVar6 == '\0') {
    PxVehicleDrive::setToRestState(param_3);
  }
  else if (cVar6 == '\x01') {
    PxVehicleDrive::setToRestState(param_3);
  }
  else if (cVar6 == '\x02') {
    PxVehicleDrive::setToRestState(param_3);
  }
  else if (cVar6 == '\x03') {
    PxVehicleNoDrive::setToRestState(param_3);
  }
  (**(code **)(*plVar4 + 0x130))(plVar4,local_98,1);
  (**(code **)(*plVar4 + 0x140))(plVar4,local_88,1);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  uVar9 = uVar3;
  if (uVar10 < uVar3) {
    uVar9 = uVar10;
  }
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  fVar13 = 0.0;
  uVar10 = 0;
  fVar14 = 0.0;
  if (uVar9 != 0) {
    pbVar8 = (byte *)(param_1 + 0x14);
    uVar11 = (ulonglong)uVar9;
    do {
      bVar1 = pbVar8[-0x14];
      bVar2 = *pbVar8;
      PxVehicleWheelsDynData::copy(param_3 + 0x70,param_2 + 0x70,bVar1,bVar2);
      local_78[bVar2] = '\x01';
      cVar6 = PxVehicleWheelsSimData::getIsWheelDisabled(param_2 + 0x10,bVar1);
      if (cVar6 == '\0') {
        uVar10 = uVar10 + 1;
        fVar12 = (float)PxVehicleWheelsDynData::getWheelRotationSpeed(param_2 + 0x70,bVar1);
        fVar14 = fVar14 + fVar12;
      }
      pbVar8 = pbVar8 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar9 = 0;
  if (uVar10 != 0) {
    fVar13 = fVar14 / (float)uVar10;
  }
  if (uVar3 != 0) {
    pcVar7 = local_78;
    do {
      if ((*pcVar7 == '\0') &&
         (cVar6 = PxVehicleWheelsSimData::getIsWheelDisabled(param_3 + 0x10,uVar9), cVar6 == '\0'))
      {
        PxVehicleWheelsDynData::setWheelRotationSpeed(param_3 + 0x70,uVar9,fVar13);
      }
      uVar9 = uVar9 + 1;
      pcVar7 = pcVar7 + 1;
    } while (uVar9 < uVar3);
  }
  if (*(byte *)(param_2 + 0xad) < 3) {
    uVar5 = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_3 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_3 + 200) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(param_3 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_3 + 0xd8) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_3 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_3 + 0xe8) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(param_3 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_3 + 0xf8) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x108);
    *(undefined8 *)(param_3 + 0x100) = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(param_3 + 0x108) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(param_3 + 0x110) = *(undefined8 *)(param_2 + 0x110);
    *(undefined8 *)(param_3 + 0x118) = uVar5;
  }
  return;
}



// FUNCTION 143976aa0 computeGraphChannel body=899 status=ok
// SIG undefined computeGraphChannel(void)

void physx::PxVehicleGraph::computeGraphChannel
               (longlong param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  pfVar11 = (float *)(param_3 + 8);
  uVar9 = 0;
  fVar16 = *(float *)(param_1 + 0x3dc4) - *(float *)(param_1 + 0x3dc0);
  fVar17 = *(float *)(param_1 + 0x3dcc) - *(float *)(param_1 + 0x3dc8);
  uVar13 = (ulonglong)param_2;
  uVar10 = 6;
  fVar1 = *(float *)(param_1 + 0x30 + uVar13 * 4);
  fVar2 = *(float *)(param_1 + uVar13 * 4);
  fVar3 = *(float *)(param_1 + 0x60 + uVar13 * 4);
  local_58 = *(undefined4 *)(param_1 + 0x90 + uVar13 * 0xc);
  local_54 = *(undefined4 *)(param_1 + 0x94 + uVar13 * 0xc);
  local_44 = *(undefined4 *)(param_1 + 0x124 + uVar13 * 0xc);
  local_50 = *(undefined4 *)(param_1 + 0x98 + uVar13 * 0xc);
  local_48 = *(undefined4 *)(param_1 + 0x120 + uVar13 * 0xc);
  lVar14 = uVar13 * 0x100;
  fVar18 = 1.0 / (fVar1 - fVar2);
  puVar12 = (undefined4 *)(param_4 + 0x14);
  local_40 = *(undefined4 *)(param_1 + 0x128 + uVar13 * 0xc);
  do {
    iVar5 = *(int *)(param_1 + 0x3dd0);
    pfVar11[-2] = (float)uVar9 * fVar16 * 0.00390625 + *(float *)(param_1 + 0x3dc0);
    fVar15 = *(float *)(param_1 + 0xdb0 + (lVar14 + (ulonglong)(iVar5 + 1 + uVar9 & 0xff)) * 4);
    if (fVar15 <= fVar2) {
      fVar15 = fVar2;
    }
    if (fVar1 <= fVar15) {
      fVar15 = fVar1;
    }
    puVar7 = &local_58;
    if (fVar3 <= fVar15) {
      puVar7 = &local_48;
    }
    uVar6 = *puVar7;
    pfVar11[-1] = (fVar15 - fVar2) * fVar18 * fVar17 + *(float *)(param_1 + 0x3dc8);
    puVar12[-5] = uVar6;
    puVar12[-4] = puVar7[1];
    puVar12[-3] = puVar7[2];
    iVar5 = *(int *)(param_1 + 0x3dd0);
    *pfVar11 = (float)(uVar9 + 1) * fVar16 * 0.00390625 + *(float *)(param_1 + 0x3dc0);
    fVar15 = *(float *)(param_1 + 0xdb0 + ((ulonglong)(iVar5 + 2 + uVar9 & 0xff) + lVar14) * 4);
    if (fVar15 <= fVar2) {
      fVar15 = fVar2;
    }
    if (fVar1 <= fVar15) {
      fVar15 = fVar1;
    }
    puVar7 = &local_58;
    if (fVar3 <= fVar15) {
      puVar7 = &local_48;
    }
    uVar6 = *puVar7;
    pfVar11[1] = (fVar15 - fVar2) * fVar18 * fVar17 + *(float *)(param_1 + 0x3dc8);
    puVar12[-2] = uVar6;
    puVar12[-1] = puVar7[1];
    *puVar12 = puVar7[2];
    iVar5 = *(int *)(param_1 + 0x3dd0);
    *(float *)(param_3 + (ulonglong)(uVar10 - 2) * 4) =
         (float)(uVar9 + 2) * fVar16 * 0.00390625 + *(float *)(param_1 + 0x3dc0);
    fVar15 = *(float *)(param_1 + 0xdb0 + (lVar14 + (ulonglong)(iVar5 + 3 + uVar9 & 0xff)) * 4);
    if (fVar15 <= fVar2) {
      fVar15 = fVar2;
    }
    if (fVar1 <= fVar15) {
      fVar15 = fVar1;
    }
    puVar7 = &local_58;
    if (fVar3 <= fVar15) {
      puVar7 = &local_48;
    }
    uVar6 = *puVar7;
    pfVar11[3] = (fVar15 - fVar2) * fVar18 * fVar17 + *(float *)(param_1 + 0x3dc8);
    puVar12[1] = uVar6;
    puVar12[2] = puVar7[1];
    puVar12[3] = puVar7[2];
    iVar5 = *(int *)(param_1 + 0x3dd0);
    *(float *)(param_3 + (ulonglong)uVar10 * 4) =
         (float)(uVar9 + 3) * fVar16 * 0.00390625 + *(float *)(param_1 + 0x3dc0);
    fVar15 = *(float *)(param_1 + 0xdb0 + (lVar14 + (ulonglong)(iVar5 + 4 + uVar9 & 0xff)) * 4);
    if (fVar15 <= fVar2) {
      fVar15 = fVar2;
    }
    if (fVar1 <= fVar15) {
      fVar15 = fVar1;
    }
    puVar7 = &local_58;
    if (fVar3 <= fVar15) {
      puVar7 = &local_48;
    }
    uVar9 = uVar9 + 4;
    uVar10 = uVar10 + 8;
    uVar6 = *puVar7;
    pfVar11[5] = (fVar15 - fVar2) * fVar18 * fVar17 + *(float *)(param_1 + 0x3dc8);
    pfVar11 = pfVar11 + 8;
    puVar12[4] = uVar6;
    puVar12[5] = puVar7[1];
    puVar12[6] = puVar7[2];
    puVar12 = puVar12 + 0xc;
  } while (uVar10 < 0x206);
  pcVar8 = (char *)(param_1 + 0x1b0 + lVar14);
  param_5 = param_5 - (longlong)pcVar8;
  do {
    cVar4 = *pcVar8;
    pcVar8[param_5] = cVar4;
    pcVar8 = pcVar8 + 1;
  } while (cVar4 != '\0');
  return;
}



// FUNCTION 143976e60 updateTimeSlice body=74 status=ok
// SIG undefined updateTimeSlice(void)

void physx::PxVehicleGraph::updateTimeSlice(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  *(uint *)(param_1 + 0x3dd0) = *(int *)(param_1 + 0x3dd0) + 1U & 0xff;
  if (*(int *)(param_1 + 0x3dd4) != 0) {
    do {
      lVar2 = uVar4 * 0x100;
      lVar1 = uVar4 * 4;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      *(undefined4 *)(param_1 + 0xdb0 + (lVar2 + (ulonglong)*(uint *)(param_1 + 0x3dd0)) * 4) =
           *(undefined4 *)(param_2 + lVar1);
    } while (uVar3 < *(uint *)(param_1 + 0x3dd4));
  }
  return;
}



// FUNCTION 143976f50 setupEngineGraph body=1709 status=ok
// SIG undefined setupEngineGraph(void)

void physx::PxVehicleGraph::setupEngineGraph
               (undefined4 *param_1,float param_2,float param_3,float param_4,float param_5,
               undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  char *pcVar8;
  char local_e8 [64];
  char local_a8 [160];
  
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = *param_6;
  param_1[0xf70] = param_4 - param_2 * 0.5;
  param_1[0xf71] = param_2 * 0.5 + param_4;
  param_1[0xf72] = param_5 - param_3 * 0.5;
  param_1[0xf73] = param_3 * 0.5 + param_5;
  param_1[0xf6c] = uVar3;
  param_1[0xf6d] = uVar1;
  param_1[0xf6e] = uVar2;
  param_1[0xf6f] = 0x3f000000;
  param_1[0xf75] = 9;
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_e8,"engineRevs");
  param_1[0xc] = 0x44480000;
  param_1[0x18] = 0x43c80000;
  pcVar8 = local_e8;
  *param_1 = 0;
  param_1[0x24] = uVar4;
  param_1[0x25] = uVar5;
  param_1[0x26] = uVar6;
  param_1[0x48] = uVar1;
  param_1[0x49] = uVar2;
  param_1[0x4a] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x1b0 - (longlong)local_e8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_a8,"engineDriveTorque");
  param_1[1] = 0;
  param_1[0xd] = 0x447a0000;
  pcVar8 = local_a8;
  param_1[0x19] = 0;
  param_1[0x27] = uVar4;
  param_1[0x28] = uVar5;
  param_1[0x29] = uVar6;
  param_1[0x4b] = uVar1;
  param_1[0x4c] = uVar2;
  param_1[0x4d] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x2b0 - (longlong)local_a8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_e8,"clutchSlip");
  param_1[2] = 0xc3480000;
  param_1[0xe] = 0x43480000;
  pcVar8 = local_e8;
  param_1[0x1a] = 0;
  param_1[0x2a] = uVar4;
  param_1[0x2b] = uVar5;
  param_1[0x2c] = uVar6;
  param_1[0x4e] = uVar1;
  param_1[0x4f] = uVar2;
  param_1[0x50] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x3b0 - (longlong)local_e8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_a8,"accel");
  param_1[3] = 0;
  param_1[0xf] = 0x3f8ccccd;
  pcVar8 = local_a8;
  param_1[0x1b] = 0;
  param_1[0x2d] = uVar4;
  param_1[0x2e] = uVar5;
  param_1[0x2f] = uVar6;
  param_1[0x51] = uVar1;
  param_1[0x52] = uVar2;
  param_1[0x53] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x4b0 - (longlong)local_a8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_e8,"brake/tank brake left");
  param_1[4] = 0;
  param_1[0x10] = 0x3f8ccccd;
  pcVar8 = local_e8;
  param_1[0x1c] = 0;
  param_1[0x30] = uVar4;
  param_1[0x31] = uVar5;
  param_1[0x32] = uVar6;
  param_1[0x54] = uVar1;
  param_1[0x55] = uVar2;
  param_1[0x56] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x5b0 - (longlong)local_e8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_a8,"handbrake/tank brake right");
  param_1[5] = 0;
  param_1[0x11] = 0x3f8ccccd;
  pcVar8 = local_a8;
  param_1[0x1d] = 0;
  param_1[0x33] = uVar4;
  param_1[0x34] = uVar5;
  param_1[0x35] = uVar6;
  param_1[0x57] = uVar1;
  param_1[0x58] = uVar2;
  param_1[0x59] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x6b0 - (longlong)local_a8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_e8,"steerLeft/tank thrust left");
  param_1[6] = 0xbf8ccccd;
  param_1[0x12] = 0x3f8ccccd;
  pcVar8 = local_e8;
  param_1[0x1e] = 0;
  param_1[0x36] = uVar4;
  param_1[0x37] = uVar5;
  param_1[0x38] = uVar6;
  param_1[0x5a] = uVar1;
  param_1[0x5b] = uVar2;
  param_1[0x5c] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x7b0 - (longlong)local_e8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_a8,"steerRight/tank thrust right");
  param_1[7] = 0xbf8ccccd;
  param_1[0x13] = 0x3f8ccccd;
  pcVar8 = local_a8;
  param_1[0x1f] = 0;
  param_1[0x39] = uVar4;
  param_1[0x3a] = uVar5;
  param_1[0x3b] = uVar6;
  param_1[0x5d] = uVar1;
  param_1[0x5e] = uVar2;
  param_1[0x5f] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x8b0 - (longlong)local_a8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_e8,"gearRatio");
  param_1[8] = 0xc0800000;
  param_1[0x14] = 0x41a00000;
  pcVar8 = local_e8;
  param_1[0x20] = 0;
  param_1[0x3c] = uVar4;
  param_1[0x3d] = uVar5;
  param_1[0x3e] = uVar6;
  param_1[0x60] = uVar1;
  param_1[0x61] = uVar2;
  param_1[0x62] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x9b0 - (longlong)local_e8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  return;
}



// FUNCTION 143977610 setupWheelGraph body=2029 status=ok
// SIG undefined setupWheelGraph(void)

void physx::PxVehicleGraph::setupWheelGraph
               (undefined4 *param_1,float param_2,float param_3,float param_4,float param_5,
               undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  char *pcVar8;
  char local_e8 [64];
  char local_a8 [160];
  
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = *param_6;
  param_1[0xf70] = param_4 - param_2 * 0.5;
  param_1[0xf71] = param_2 * 0.5 + param_4;
  param_1[0xf72] = param_5 - param_3 * 0.5;
  param_1[0xf73] = param_3 * 0.5 + param_5;
  param_1[0xf6c] = uVar3;
  param_1[0xf6d] = uVar1;
  param_1[0xf6e] = uVar2;
  param_1[0xf6f] = 0x3f000000;
  param_1[0xf75] = 0xb;
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_e8,"suspJounce");
  *param_1 = 0xbe4ccccd;
  param_1[0xc] = 0x3ecccccd;
  pcVar8 = local_e8;
  param_1[0x18] = 0;
  param_1[0x24] = uVar4;
  param_1[0x25] = uVar5;
  param_1[0x26] = uVar6;
  param_1[0x48] = uVar1;
  param_1[0x49] = uVar2;
  param_1[0x4a] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x1b0 - (longlong)local_e8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_a8,"suspForce");
  param_1[1] = 0;
  param_1[0xd] = 0x469c4000;
  pcVar8 = local_a8;
  param_1[0x19] = 0;
  param_1[0x27] = uVar4;
  param_1[0x28] = uVar5;
  param_1[0x29] = uVar6;
  param_1[0x4b] = uVar1;
  param_1[0x4c] = uVar2;
  param_1[0x4d] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x2b0 - (longlong)local_a8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_e8,"tireLoad");
  param_1[2] = 0;
  param_1[0xe] = 0x469c4000;
  pcVar8 = local_e8;
  param_1[0x1a] = 0;
  param_1[0x2a] = uVar4;
  param_1[0x2b] = uVar5;
  param_1[0x2c] = uVar6;
  param_1[0x4e] = uVar1;
  param_1[0x4f] = uVar2;
  param_1[0x50] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x3b0 - (longlong)local_e8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_a8,"normTireLoad");
  param_1[3] = 0;
  param_1[0xf] = 0x40400000;
  pcVar8 = local_a8;
  param_1[0x1b] = 0x3f800000;
  param_1[0x2d] = uVar4;
  param_1[0x2e] = uVar5;
  param_1[0x2f] = uVar6;
  param_1[0x51] = uVar1;
  param_1[0x52] = uVar2;
  param_1[0x53] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x4b0 - (longlong)local_a8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_e8,"wheelOmega");
  param_1[4] = 0xc2480000;
  param_1[0x10] = 0x437a0000;
  pcVar8 = local_e8;
  param_1[0x1c] = 0;
  param_1[0x30] = uVar4;
  param_1[0x31] = uVar5;
  param_1[0x32] = uVar6;
  param_1[0x54] = uVar1;
  param_1[0x55] = uVar2;
  param_1[0x56] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x5b0 - (longlong)local_e8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_a8,"friction");
  param_1[5] = 0;
  param_1[0x11] = 0x3f8ccccd;
  pcVar8 = local_a8;
  param_1[0x1d] = 0x3f800000;
  param_1[0x33] = uVar4;
  param_1[0x34] = uVar5;
  param_1[0x35] = uVar6;
  param_1[0x57] = uVar1;
  param_1[0x58] = uVar2;
  param_1[0x59] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x6b0 - (longlong)local_a8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_e8,"tireLongSlip");
  param_1[6] = 0xbe4ccccd;
  param_1[0x12] = 0x3e4ccccd;
  pcVar8 = local_e8;
  param_1[0x1e] = 0;
  param_1[0x36] = uVar4;
  param_1[0x37] = uVar5;
  param_1[0x38] = uVar6;
  param_1[0x5a] = uVar1;
  param_1[0x5b] = uVar2;
  param_1[0x5c] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x7b0 - (longlong)local_e8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_a8,"normTireLongForce");
  param_1[7] = 0;
  param_1[0x13] = 0x40000000;
  pcVar8 = local_a8;
  param_1[0x1f] = 0x3f800000;
  param_1[0x39] = uVar4;
  param_1[0x3a] = uVar5;
  param_1[0x3b] = uVar6;
  param_1[0x5d] = uVar1;
  param_1[0x5e] = uVar2;
  param_1[0x5f] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x8b0 - (longlong)local_a8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_e8,"tireLatSlip");
  param_1[8] = 0xbf800000;
  param_1[0x14] = 0x3f800000;
  pcVar8 = local_e8;
  param_1[0x20] = 0;
  param_1[0x3c] = uVar4;
  param_1[0x3d] = uVar5;
  param_1[0x3e] = uVar6;
  param_1[0x60] = uVar1;
  param_1[0x61] = uVar2;
  param_1[0x62] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0x9b0 - (longlong)local_e8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_a8,"normTireLatForce");
  param_1[9] = 0;
  param_1[0x15] = 0x40000000;
  pcVar8 = local_a8;
  param_1[0x21] = 0x3f800000;
  param_1[0x3f] = uVar4;
  param_1[0x40] = uVar5;
  param_1[0x41] = uVar6;
  param_1[99] = uVar1;
  param_1[100] = uVar2;
  param_1[0x65] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0xab0 - (longlong)local_a8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = *param_8;
  uVar5 = param_8[1];
  uVar6 = param_8[2];
  sprintf(local_e8,"normTireAlignMoment");
  param_1[10] = 0;
  param_1[0x16] = 0x40000000;
  pcVar8 = local_e8;
  param_1[0x22] = 0x3f800000;
  param_1[0x42] = uVar4;
  param_1[0x43] = uVar5;
  param_1[0x44] = uVar6;
  param_1[0x66] = uVar1;
  param_1[0x67] = uVar2;
  param_1[0x68] = uVar3;
  do {
    cVar7 = *pcVar8;
    pcVar8[(longlong)param_1 + (0xbb0 - (longlong)local_e8)] = cVar7;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  return;
}



// FUNCTION 143977e10 PxVehicleGraph body=239 status=ok
// SIG undefined PxVehicleGraph(void)

longlong physx::PxVehicleGraph::PxVehicleGraph(longlong param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x3dc0) = 0;
  _Dst = (void *)(param_1 + 0xdb0);
  *(undefined8 *)(param_1 + 0x3dc8) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x3dd0) = 0;
  *(undefined4 *)(param_1 + 0x3db0) = 0x437f0000;
  lVar3 = 0xc;
  *(undefined4 *)(param_1 + 0x3db4) = 0x437f0000;
  *(undefined4 *)(param_1 + 0x3db8) = 0x437f0000;
  *(undefined4 *)(param_1 + 0x3dbc) = 0x3f800000;
  do {
    puVar2[-0x18] = 0;
    puVar2[-0xc] = 0;
    *puVar2 = 0;
    *(undefined8 *)(puVar1 + -2) = 0;
    *puVar1 = 0x437f0000;
    *(undefined8 *)(puVar1 + 0x22) = 0x437f0000;
    puVar1[0x24] = 0;
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x400);
    _Dst = (void *)((longlong)_Dst + 0x400);
    puVar1 = puVar1 + 3;
    puVar2 = puVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x3dd4) = 0;
  return param_1;
}



// FUNCTION 143977f20 allocate body=219 status=ok
// SIG undefined allocate(void)

longlong * physx::PxVehicleTelemetryData::allocate(uint param_1)

{
  PxAllocatorCallback *pPVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  
  plVar3 = (longlong *)0x0;
  uVar7 = (ulonglong)param_1;
  iVar6 = param_1 * 0x3df8 + 0x3e10;
  plVar2 = plVar3;
  if (iVar6 != 0) {
    pPVar1 = physx::shdfnd::getAllocator();
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)pPVar1 + 8))
                       (pPVar1,iVar6,"NonTrackedAlloc",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\VehicleUtilTelemetry.cpp"
                        ,0x1fa);
  }
  plVar5 = plVar2 + 6;
  *plVar2 = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    PxVehicleGraph::PxVehicleGraph(plVar5);
  }
  plVar5 = plVar2 + 0x7c2;
  plVar2[1] = (longlong)plVar5;
  uVar4 = uVar7;
  if (param_1 != 0) {
    do {
      if (plVar2[1] + (longlong)plVar3 != 0) {
        PxVehicleGraph::PxVehicleGraph();
      }
      plVar3 = plVar3 + 0x7bc;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(uint *)(plVar2 + 4) = param_1;
  plVar2[3] = (longlong)(plVar5 + uVar7 * 0x7bc);
  plVar2[2] = (longlong)(plVar5 + uVar7 * 0x7bc) + uVar7 * 0xc;
  return plVar2;
}



// FUNCTION 143978010 FUN_143978010 body=38 status=ok
// SIG undefined FUN_143978010(void)

void FUN_143978010(longlong param_1)

{
  PxAllocatorCallback *pPVar1;
  
  if (param_1 != 0) {
    pPVar1 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
  }
  return;
}



// FUNCTION 143978040 setup body=335 status=ok
// SIG undefined setup(void)

void physx::PxVehicleTelemetryData::setup
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 *param_6,longlong param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  PxVehicleGraph::setupEngineGraph(*param_1);
  if (*(uint *)(param_1 + 4) != 0) {
    lVar3 = 0;
    param_7 = param_7 - (longlong)param_6;
    uVar4 = (ulonglong)*(uint *)(param_1 + 4);
    lVar2 = 0;
    do {
      PxVehicleGraph::setupWheelGraph
                (param_1[1] + lVar3,param_2,param_3,*param_6,
                 *(undefined4 *)((longlong)param_6 + param_7),param_8,param_9,param_10);
      lVar1 = param_1[2];
      param_6 = param_6 + 1;
      lVar3 = lVar3 + 0x3de0;
      *(undefined8 *)(lVar2 + lVar1) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar1) = 0;
      lVar1 = param_1[3];
      *(undefined8 *)(lVar2 + lVar1) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar1) = 0;
      uVar4 = uVar4 - 1;
      lVar2 = lVar2 + 0xc;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 1439781a0 clear body=187 status=ok
// SIG undefined clear(void)

void physx::PxVehicleTelemetryData::clear(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  lVar4 = 0;
  *(undefined4 *)(lVar2 + 0x3dd0) = 0;
  ::_guard_xfg_dispatch_icall_nop((void *)(lVar2 + 0xdb0),0,0x3000);
  if (*(uint *)(param_1 + 4) != 0) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 4);
    lVar2 = lVar4;
    do {
      lVar1 = param_1[1];
      *(undefined4 *)(lVar4 + 0x3dd0 + lVar1) = 0;
      ::_guard_xfg_dispatch_icall_nop((void *)(lVar1 + 0xdb0 + lVar4),0,0x3000);
      lVar1 = param_1[2];
      lVar4 = lVar4 + 0x3de0;
      *(undefined8 *)(lVar2 + lVar1) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar1) = 0;
      lVar1 = param_1[3];
      *(undefined8 *)(lVar2 + lVar1) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar1) = 0;
      uVar3 = uVar3 - 1;
      lVar2 = lVar2 + 0xc;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 143978260 allocate body=241 status=ok
// SIG undefined allocate(void)

longlong * physx::PxVehicleNoDrive::allocate(int param_1)

{
  int iVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong _Size;
  
  uVar5 = param_1 + 3U >> 2;
  _Size = (ulonglong)(uVar5 * 0x10);
  iVar1 = FUN_1439738a0();
  iVar1 = iVar1 + 0xe0 + uVar5 * 0x30;
  if (iVar1 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)
             (**(code **)(*(longlong *)pPVar2 + 8))
                       (pPVar2,iVar1,"NonTrackedAlloc",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleNoDrive.cpp"
                        ,0x3d);
    if (plVar3 != (longlong *)0x0) {
      PxVehicleNoDrive(plVar3);
    }
  }
  plVar3[0x18] = (longlong)(plVar3 + 0x1c);
  lVar4 = (longlong)(plVar3 + 0x1c) + _Size;
  plVar3[0x19] = lVar4;
  lVar4 = lVar4 + _Size;
  plVar3[0x1a] = lVar4;
  PxVehicleWheels::patchupPointers(param_1,plVar3,_Size + lVar4);
  ::_guard_xfg_dispatch_icall_nop((void *)plVar3[0x18],0,_Size);
  ::_guard_xfg_dispatch_icall_nop((void *)plVar3[0x19],0,_Size);
  ::_guard_xfg_dispatch_icall_nop((void *)plVar3[0x1a],0,_Size);
  (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
  *(undefined1 *)((longlong)plVar3 + 0xad) = 3;
  return plVar3;
}



// FUNCTION 143978360 free body=5 status=ok
// SIG void free(void * _Memory)

void __cdecl physx::PxVehicleWheels::free(void *_Memory)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(uint *)((longlong)_Memory + 0x38) != 0) {
    lVar2 = 0;
    uVar3 = (ulonglong)*(uint *)((longlong)_Memory + 0x38);
    do {
      puVar1 = *(undefined8 **)
                (*(longlong *)(*(longlong *)((longlong)_Memory + 0x70) + 0x1d0 + lVar2) + 0x168);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)();
      }
      lVar2 = lVar2 + 0x220;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 143978370 setup body=30 status=ok
// SIG undefined setup(void)

void physx::PxVehicleNoDrive::setup(void)

{
  PxVehicleWheels::setup();
  return;
}



// FUNCTION 1439783a0 create body=99 status=ok
// SIG undefined create(void)

undefined8 physx::PxVehicleNoDrive::create(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = allocate(*(undefined4 *)(param_3 + 0x2c));
  PxVehicleWheels::setup(uVar1,param_1,param_2,param_3,0,*(undefined4 *)(param_3 + 0x2c));
  return uVar1;
}



// FUNCTION 143978410 setToRestState body=58 status=ok
// SIG undefined setToRestState(void)

void physx::PxVehicleNoDrive::setToRestState(longlong param_1)

{
  ::_guard_xfg_dispatch_icall_nop
            (*(void **)(param_1 + 0xc0),0,(ulonglong)((*(int *)(param_1 + 0x3c) + 3U >> 2) * 0x30));
  PxVehicleWheels::setToRestState(param_1);
  return;
}



// FUNCTION 143978450 setBrakeTorque body=15 status=ok
// SIG undefined setBrakeTorque(void)

void physx::PxVehicleNoDrive::setBrakeTorque(longlong param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)param_2 * 4) = param_3;
  return;
}



// FUNCTION 143978470 setDriveTorque body=15 status=ok
// SIG undefined setDriveTorque(void)

void physx::PxVehicleNoDrive::setDriveTorque(longlong param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(*(longlong *)(param_1 + 200) + (ulonglong)param_2 * 4) = param_3;
  return;
}



// FUNCTION 143978490 setSteerAngle body=15 status=ok
// SIG undefined setSteerAngle(void)

void physx::PxVehicleNoDrive::setSteerAngle(longlong param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)param_2 * 4) = param_3;
  return;
}



// FUNCTION 1439784d0 getDriveTorque body=15 status=ok
// SIG undefined getDriveTorque(void)

undefined4 physx::PxVehicleNoDrive::getDriveTorque(longlong param_1,uint param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 200) + (ulonglong)param_2 * 4);
}



// FUNCTION 1439784f0 getSteerAngle body=15 status=ok
// SIG undefined getSteerAngle(void)

undefined4 physx::PxVehicleNoDrive::getSteerAngle(longlong param_1,uint param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)param_2 * 4);
}



// FUNCTION 143978570 setDrivenWheel body=158 status=ok
// SIG undefined setDrivenWheel(void)

void physx::PxVehicleDifferentialNWData::setDrivenWheel(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = *(uint *)(param_1 + 4);
  if (param_3 == '\0') {
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    uVar1 = *(uint *)(param_1 + (ulonglong)(param_2 >> 5) * 4);
    if ((uVar2 & uVar1) != 0) {
      uVar3 = uVar3 - 1;
      *(uint *)(param_1 + (ulonglong)(param_2 >> 5) * 4) = ~uVar2 & uVar1;
      fVar4 = 0.0;
      if (0.0 < (float)uVar3) {
        fVar4 = 1.0 / (float)uVar3;
      }
      *(float *)(param_1 + 8) = fVar4;
    }
  }
  else {
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    uVar1 = *(uint *)(param_1 + (ulonglong)(param_2 >> 5) * 4);
    if ((uVar2 & uVar1) == 0) {
      *(uint *)(param_1 + (ulonglong)(param_2 >> 5) * 4) = uVar1 | uVar2;
      *(uint *)(param_1 + 4) = uVar3 + 1;
      *(float *)(param_1 + 8) = 1.0 / (float)(uVar3 + 1);
      return;
    }
  }
  *(uint *)(param_1 + 4) = uVar3;
  return;
}



// FUNCTION 143978620 getIsDrivenWheel body=24 status=ok
// SIG undefined getIsDrivenWheel(void)

undefined4 physx::PxVehicleDifferentialNWData::getIsDrivenWheel(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + (ulonglong)(param_2 >> 5) * 4);
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_2 & 0x1f) & 1) != 0);
}



// FUNCTION 143978650 getDrivenWheelStatus body=3 status=ok
// SIG undefined getDrivenWheelStatus(void)

undefined4 physx::PxVehicleDifferentialNWData::getDrivenWheelStatus(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 143978660 setDrivenWheelStatus body=189 status=ok
// SIG undefined setDrivenWheelStatus(void)

void physx::PxVehicleDifferentialNWData::setDrivenWheelStatus(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  uint local_res10 [6];
  
  local_res10[0] = param_2;
  uVar2 = 1;
  uVar6 = 0;
  lVar3 = 0x14;
  do {
    uVar5 = *(uint *)(param_1 + 4);
    uVar4 = uVar6 >> 5;
    if ((local_res10[uVar4] & uVar2) == 0) {
      uVar1 = *(uint *)(param_1 + uVar4 * 4);
      if ((uVar2 & uVar1) != 0) {
        uVar5 = uVar5 - 1;
        *(uint *)(param_1 + uVar4 * 4) = ~uVar2 & uVar1;
        if ((float)uVar5 <= 0.0) {
          fVar7 = 0.0;
        }
        else {
          fVar7 = 1.0 / (float)uVar5;
        }
        *(float *)(param_1 + 8) = fVar7;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + uVar4 * 4);
      if ((uVar2 & uVar1) == 0) {
        uVar5 = uVar5 + 1;
        *(uint *)(param_1 + uVar4 * 4) = uVar1 | uVar2;
        *(float *)(param_1 + 8) = 1.0 / (float)uVar5;
      }
    }
    uVar6 = uVar6 + 1;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    *(uint *)(param_1 + 4) = uVar5;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1439787a0 getBinaryMetaData body=1686 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleWheelsSimData::getBinaryMetaData(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  PxVehicleWheels4SimData::getBinaryMetaData();
  local_58 = "PxVehicleTireLoadFilterData";
  local_50 = (char *)0x0;
  local_48 = 0;
  local_44 = 0x20;
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0;
  local_50 = "mMinNormalisedLoad";
  local_58 = "PxReal";
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mMinFilteredNormalisedLoad";
  local_48 = 4;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mMaxNormalisedLoad";
  local_48 = 8;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mMaxFilteredNormalisedLoad";
  local_48 = 0xc;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mDenominator";
  local_48 = 0x10;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0x14;
  local_58 = "PxU32";
  local_50 = "mPad";
  local_44 = 0xc;
  uStack_40 = 3;
  local_3c = 0;
  local_38 = 0x200;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleAntiRollBarData";
  local_50 = (char *)0x0;
  local_48 = 0;
  local_44 = 0x10;
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mWheel0";
  local_48 = 0;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mWheel1";
  local_48 = 4;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mStiffness";
  local_48 = 8;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mPad";
  local_48 = 0xc;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0x200;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_50 = (char *)0x0;
  local_58 = "PxVehicleWheelsSimData";
  local_48 = 0;
  local_44 = 0x60;
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleTireLoadFilterData";
  local_50 = "mNormalisedLoadFilter";
  local_48 = 0;
  local_44 = 0x20;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0x20;
  local_50 = "mWheels4SimData";
  local_58 = "PxVehicleWheels4SimData";
  local_44 = 8;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 8;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mNbWheels4";
  local_48 = 0x28;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mNbActiveWheels";
  local_48 = 0x2c;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleAntiRollBarData";
  local_50 = "mAntiRollBars";
  local_48 = 0x30;
  local_44 = 8;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 8;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mNbAntiRollBars4";
  local_48 = 0x38;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mNbActiveAntiRollBars";
  local_48 = 0x3c;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mActiveWheelsBitmapBuffer";
  local_48 = 0x40;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mThresholdLongitudinalSpeed";
  local_48 = 0x44;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mLowForwardSpeedSubStepCount";
  local_48 = 0x48;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mHighForwardSpeedSubStepCount";
  local_48 = 0x4c;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mMinLongSlipDenominator";
  local_48 = 0x50;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mPad";
  local_48 = 0x54;
  local_44 = 8;
  uStack_40 = 2;
  local_3c = 0;
  local_38 = 0x200;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleWheels4SimData";
  local_50 = (char *)0x0;
  local_48 = 0x20;
  local_44 = 8;
  uStack_40 = 0x28;
  local_3c = 4;
  local_38 = 0x50;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleAntiRollBarData";
  local_50 = (char *)0x0;
  local_48 = 0x30;
  local_44 = 8;
  uStack_40 = 0x38;
  local_3c = 4;
  local_38 = 0x50;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}



// FUNCTION 143978e40 FUN_143978e40 body=1341 status=ok
// SIG undefined FUN_143978e40(void)

void FUN_143978e40(undefined8 *param_1)

{
  char *local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  physx::PxVehicleWheels4DynData::getBinaryMetaData();
  physx::PxVehicleConstraintShader::getBinaryMetaData(param_1);
  local_48 = "PxVehicleTireForceCalculator";
  local_40 = (char *)0x0;
  local_38 = 0;
  local_34 = 0x20;
  uStack_30 = 0;
  local_2c = 0;
  local_28 = 1;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0;
  local_48 = "void*";
  local_34 = 8;
  local_40 = "mShaderData";
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 8;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 8;
  local_40 = "mShader";
  local_48 = "PxU32";
  local_34 = 8;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 8;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_40 = (char *)0x0;
  local_48 = "PxVehicleWheelsDynData";
  local_38 = 0;
  local_34 = 0x30;
  uStack_30 = 0;
  local_2c = 0;
  local_28 = 1;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0;
  local_40 = "mWheels4DynData";
  local_48 = "PxVehicleWheels4DynData";
  local_34 = 8;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 8;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxVehicleTireForceCalculator";
  local_40 = "mTireForceCalculators";
  local_38 = 8;
  local_34 = 8;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 8;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxU32";
  local_38 = 0x10;
  local_40 = "mUserDatas";
  local_34 = 8;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 8;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxU32";
  local_40 = "mNbWheels4";
  local_38 = 0x18;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxU32";
  local_40 = "mNbActiveWheels";
  local_38 = 0x1c;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxU32";
  local_40 = "mPad";
  local_38 = 0x20;
  local_34 = 0xc;
  uStack_30 = 3;
  local_2c = 0;
  local_28 = 0x200;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxVehicleWheels4DynData";
  local_40 = (char *)0x0;
  local_38 = 0;
  local_34 = 8;
  uStack_30 = 0x18;
  local_2c = 4;
  local_28 = 0x50;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxVehicleTireForceCalculator";
  local_40 = (char *)0x0;
  local_38 = 8;
  local_34 = 0x20;
  uStack_30 = 0;
  local_2c = 8;
  local_28 = 0x30;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "void";
  local_40 = (char *)0x0;
  local_38 = 8;
  local_34 = 8;
  uStack_30 = 0x18;
  local_2c = 4;
  local_28 = 0x58;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "void";
  local_40 = (char *)0x0;
  local_38 = 8;
  local_34 = 8;
  uStack_30 = 0x18;
  local_2c = 4;
  local_28 = 0x58;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "void";
  local_40 = (char *)0x0;
  local_38 = 8;
  local_34 = 8;
  uStack_30 = 0x18;
  local_2c = 4;
  local_28 = 0x58;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "void";
  local_40 = (char *)0x0;
  local_38 = 8;
  local_34 = 8;
  uStack_30 = 0x18;
  local_2c = 4;
  local_28 = 0x58;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "void";
  local_40 = (char *)0x0;
  local_38 = 0x10;
  local_34 = 8;
  uStack_30 = 0x18;
  local_2c = 4;
  local_28 = 0x58;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "void";
  local_40 = (char *)0x0;
  local_38 = 0x10;
  local_34 = 8;
  uStack_30 = 0x18;
  local_2c = 4;
  local_28 = 0x58;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "void";
  local_40 = (char *)0x0;
  local_38 = 0x10;
  local_34 = 8;
  uStack_30 = 0x18;
  local_2c = 4;
  local_28 = 0x58;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "void";
  local_40 = (char *)0x0;
  local_38 = 0x10;
  local_34 = 8;
  uStack_30 = 0x18;
  local_2c = 4;
  local_28 = 0x58;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_40 = (char *)0x0;
  local_48 = "PxVehicleConstraintShader";
  local_38 = 0;
  local_34 = 8;
  uStack_30 = 0x18;
  local_2c = 4;
  local_28 = 0x50;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  return;
}



// FUNCTION 143979390 exportExtraData body=78 status=ok
// SIG undefined exportExtraData(void)

void physx::PxVehicleWheels::exportExtraData(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1439738a0(*(undefined4 *)(param_1 + 0x3c));
  (**(code **)(*param_2 + 0x18))(param_2,0x10);
                    /* WARNING: Could not recover jumptable at 0x0001439793da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x30),uVar1);
  return;
}



// FUNCTION 1439793f0 importExtraData body=66 status=ok
// SIG undefined importExtraData(void)

void physx::PxVehicleWheels::importExtraData(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1439738a0(*(undefined4 *)(param_1 + 0x3c));
  *(ulonglong *)(param_2 + 8) =
       (ulonglong)uVar1 + (*(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0);
  patchupPointers(*(undefined4 *)(param_1 + 0x3c),param_1);
  return;
}



// FUNCTION 143979440 getBinaryMetaData body=610 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleWheels::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  PxVehicleWheelsSimData::getBinaryMetaData();
  FUN_143978e40(param_1);
  local_38 = "PxVehicleWheels";
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0xc0;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 3;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxVehicleWheels";
  local_30 = "PxBase";
  local_28 = 0;
  local_24 = 0xc0;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x10;
  local_38 = "PxVehicleWheelsSimData";
  local_24 = 0x60;
  local_30 = "mWheelsSimData";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x70;
  local_38 = "PxVehicleWheelsDynData";
  local_24 = 0x30;
  local_30 = "mWheelsDynData";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0xa0;
  local_38 = "PxRigidDynamic";
  local_24 = 8;
  local_30 = "mActor";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0xa8;
  local_38 = "PxU32";
  local_24 = 4;
  local_30 = "mNbNonDrivenWheels";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0xac;
  local_30 = "mOnConstraintReleaseCounter";
  local_38 = "PxU8";
  local_24 = 1;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxU8";
  local_30 = "mType";
  local_28 = 0xad;
  local_24 = 1;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxU8";
  local_30 = "mPad";
  local_28 = 0xae;
  local_24 = 0xe;
  uStack_20 = 0xe;
  local_1c = 0;
  local_18 = 0x200;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 1439796b0 getBinaryMetaData body=1831 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleDriveSimData::getBinaryMetaData(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  `anonymous_namespace'::ShadowLookupTable::getBinaryMetaData();
  local_38 = 4;
  local_48 = 0;
  uStack_44 = 0;
  local_58 = "PxFixedSizeLookupTable<PxVehicleEngineData::eMAX_NB_ENGINE_TORQUE_CURVE_ENTRIES>";
  local_50 = "ShadowLookupTable";
  local_40 = 0;
  uStack_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleClutchAccuracyMode::Enum";
  local_50 = "PxU32";
  local_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 4;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_50 = (char *)0x0;
  local_58 = "PxVehicleEngineData";
  local_48 = 0;
  uStack_44 = 0x70;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "ShadowLookupTable";
  local_50 = "mTorqueCurve";
  local_48 = 0;
  uStack_44 = 0x50;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0x50;
  local_50 = "mMOI";
  local_58 = "PxReal";
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mPeakTorque";
  local_48 = 0x54;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mMaxOmega";
  local_48 = 0x58;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mDampingRateFullThrottle";
  local_48 = 0x5c;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mDampingRateZeroThrottleClutchEngaged";
  local_48 = 0x60;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mDampingRateZeroThrottleClutchDisengaged";
  local_48 = 100;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mRecipMOI";
  local_48 = 0x68;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mRecipMaxOmega";
  local_48 = 0x6c;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleGearsData";
  local_50 = (char *)0x0;
  local_48 = 0;
  uStack_44 = 0x90;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mRatios";
  local_48 = 0;
  uStack_44 = 0x80;
  local_40 = 0x20;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mFinalRatio";
  local_48 = 0x80;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mNbRatios";
  local_48 = 0x84;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mSwitchTime";
  local_48 = 0x88;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mPad";
  local_48 = 0x8c;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0x200;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  uStack_44 = 0x10;
  local_40 = 0;
  local_50 = (char *)0x0;
  local_48 = 0;
  uStack_3c = 0;
  local_58 = "PxVehicleClutchData";
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mStrength";
  uStack_44 = 4;
  local_48 = 0;
  local_38 = 0;
  local_40 = 1;
  uStack_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleClutchAccuracyMode::Enum";
  local_50 = "mAccuracyMode";
  local_48 = 4;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mEstimateIterations";
  local_48 = 8;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_50 = "mPad";
  local_58 = "PxU8";
  local_48 = 0xc;
  uStack_44 = 4;
  local_40 = 4;
  uStack_3c = 0;
  local_38 = 0x200;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleAutoBoxData";
  local_50 = (char *)0x0;
  local_48 = 0;
  uStack_44 = 0x100;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mUpRatios";
  local_48 = 0;
  uStack_44 = 0x80;
  local_40 = 0x20;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mDownRatios";
  local_48 = 0x80;
  uStack_44 = 0x80;
  local_40 = 0x20;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_50 = (char *)0x0;
  local_58 = "PxVehicleDriveSimData";
  local_48 = 0;
  uStack_44 = 0x210;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0;
  local_58 = "PxVehicleEngineData";
  uStack_44 = 0x70;
  local_50 = "mEngine";
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleGearsData";
  local_50 = "mGears";
  local_48 = 0x70;
  uStack_44 = 0x90;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleClutchData";
  local_50 = "mClutch";
  local_48 = 0x100;
  uStack_44 = 0x10;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleAutoBoxData";
  local_50 = "mAutoBox";
  local_48 = 0x110;
  uStack_44 = 0x100;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}



// FUNCTION 143979de0 getBinaryMetaData body=872 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleDrive::getBinaryMetaData(undefined8 *param_1)

{
  char *local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_48 = "PxVehicleDriveDynData";
  local_40 = (char *)0x0;
  local_38 = 0;
  local_34 = 0x60;
  uStack_30 = 0;
  local_2c = 0;
  local_28 = 1;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0;
  local_40 = "mControlAnalogVals";
  local_48 = "PxReal";
  local_34 = 0x40;
  uStack_30 = 0x10;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0x40;
  local_40 = "mUseAutoGears";
  local_48 = "bool";
  local_34 = 1;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "bool";
  local_40 = "mGearUpPressed";
  local_38 = 0x41;
  local_34 = 1;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "bool";
  local_40 = "mGearDownPressed";
  local_38 = 0x42;
  local_34 = 1;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0x44;
  local_40 = "mCurrentGear";
  local_48 = "PxU32";
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxU32";
  local_40 = "mTargetGear";
  local_38 = 0x48;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mEnginespeed";
  local_38 = 0x4c;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mGearSwitchTime";
  local_38 = 0x50;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mAutoBoxSwitchTime";
  local_38 = 0x54;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxU32";
  local_40 = "mPad";
  local_38 = 0x58;
  local_34 = 8;
  uStack_30 = 2;
  local_2c = 0;
  local_28 = 0x200;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxVehicleDrive";
  local_40 = (char *)0x0;
  local_38 = 0;
  local_34 = 0x120;
  uStack_30 = 0;
  local_2c = 0;
  local_28 = 3;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxVehicleDrive";
  local_40 = "PxVehicleWheels";
  local_38 = 0;
  local_34 = 0x120;
  uStack_30 = 0;
  local_2c = 0;
  local_28 = 1;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxVehicleDriveDynData";
  local_40 = "mDriveDynData";
  local_38 = 0xc0;
  local_34 = 0x60;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  return;
}



// FUNCTION 14397a150 exportExtraData body=156 status=ok
// SIG undefined exportExtraData(void)

void physx::PxVehicleNoDrive::exportExtraData(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_1439738a0(*(undefined4 *)(param_1 + 0x3c));
  (**(code **)(*param_2 + 0x18))(param_2,0x10);
  (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x30),uVar1);
  iVar2 = *(int *)(param_1 + 0x38) << 4;
  (**(code **)(*param_2 + 0x18))(param_2,0x10);
  (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0xc0),iVar2);
  (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 200),iVar2);
                    /* WARNING: Could not recover jumptable at 0x00014397a1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0xd0),iVar2);
  return;
}



// FUNCTION 14397a200 importExtraData body=154 status=ok
// SIG undefined importExtraData(void)

void physx::PxVehicleNoDrive::importExtraData(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_1439738a0(*(undefined4 *)(param_1 + 0x3c));
  *(ulonglong *)(param_2 + 8) =
       (ulonglong)uVar2 + (*(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0);
  PxVehicleWheels::patchupPointers(*(undefined4 *)(param_1 + 0x3c),param_1);
  uVar3 = *(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
  *(ulonglong *)(param_2 + 8) = uVar3;
  *(ulonglong *)(param_2 + 8) = uVar3 + (ulonglong)(uint)(*(int *)(param_1 + 0x38) << 2) * 4;
  *(ulonglong *)(param_1 + 0xc0) = uVar3;
  lVar1 = *(longlong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = lVar1 + (ulonglong)(uint)(*(int *)(param_1 + 0x38) << 2) * 4;
  *(longlong *)(param_1 + 200) = lVar1;
  lVar1 = *(longlong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = lVar1 + (ulonglong)(uint)(*(int *)(param_1 + 0x38) << 2) * 4;
  *(longlong *)(param_1 + 0xd0) = lVar1;
  return;
}



// FUNCTION 14397a2a0 createObject body=80 status=ok
// SIG undefined createObject(void)

undefined8 * physx::PxVehicleNoDrive::createObject(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)((longlong)puVar1 + 10) = 2;
    *puVar1 = &PTR_LAB_145ca7710;
  }
  *param_1 = *param_1 + 0xe0;
  importExtraData(puVar1);
  PxVehicleWheels::resolveReferences(puVar1,param_2);
  return puVar1;
}



// FUNCTION 14397a300 getBinaryMetaData body=1160 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleNoDrive::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  PxVehicleDrive::getBinaryMetaData();
  PxVehicleWheels::getBinaryMetaData(param_1);
  PxVehicleDriveSimData::getBinaryMetaData(param_1);
  local_38 = "PxVehicleNoDrive";
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0xe0;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 3;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxVehicleNoDrive";
  local_30 = "PxVehicleWheels";
  local_28 = 0;
  local_24 = 0xe0;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0xc0;
  local_30 = "mSteerAngles";
  local_38 = "PxReal";
  local_24 = 8;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "mDriveTorques";
  local_28 = 200;
  local_24 = 8;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "mBrakeTorques";
  local_28 = 0xd0;
  local_24 = 8;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0xd8;
  local_38 = "PxU32";
  local_24 = 8;
  local_30 = "mPad";
  uStack_20 = 2;
  local_1c = 0;
  local_18 = 0x200;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = (char *)0x0;
  local_28 = 0xc0;
  local_24 = 8;
  uStack_20 = 0x38;
  local_1c = 4;
  local_18 = 0x1000000050;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = (char *)0x0;
  local_28 = 0xc0;
  local_24 = 8;
  uStack_20 = 0x38;
  local_1c = 4;
  local_18 = 0x50;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = (char *)0x0;
  local_28 = 0xc0;
  local_24 = 8;
  uStack_20 = 0x38;
  local_1c = 4;
  local_18 = 0x50;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = (char *)0x0;
  local_28 = 0xc0;
  local_24 = 8;
  uStack_20 = 0x38;
  local_1c = 4;
  local_18 = 0x50;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = (char *)0x0;
  local_28 = 200;
  local_24 = 8;
  uStack_20 = 0x38;
  local_1c = 4;
  local_18 = 0x50;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = (char *)0x0;
  local_28 = 200;
  local_24 = 8;
  uStack_20 = 0x38;
  local_1c = 4;
  local_18 = 0x50;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = (char *)0x0;
  local_28 = 200;
  local_24 = 8;
  uStack_20 = 0x38;
  local_1c = 4;
  local_18 = 0x50;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = (char *)0x0;
  local_28 = 200;
  local_24 = 8;
  uStack_20 = 0x38;
  local_1c = 4;
  local_18 = 0x50;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = (char *)0x0;
  local_28 = 0xd0;
  local_24 = 8;
  uStack_20 = 0x38;
  local_1c = 4;
  local_18 = 0x50;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = (char *)0x0;
  local_28 = 0xd0;
  local_24 = 8;
  uStack_20 = 0x38;
  local_1c = 4;
  local_18 = 0x50;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = (char *)0x0;
  local_28 = 0xd0;
  local_24 = 8;
  uStack_20 = 0x38;
  local_1c = 4;
  local_18 = 0x50;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = (char *)0x0;
  local_28 = 0xd0;
  local_24 = 8;
  uStack_20 = 0x38;
  local_1c = 4;
  local_18 = 0x50;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 14397a790 getBinaryMetaData body=1088 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleDriveSimData4W::getBinaryMetaData(undefined8 *param_1)

{
  char *local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_48 = "PxVehicleDifferential4WData";
  local_40 = (char *)0x0;
  local_38 = 0;
  local_34 = 0x20;
  uStack_30 = 0;
  local_2c = 0;
  local_28 = 1;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0;
  local_40 = "mFrontRearSplit";
  local_48 = "PxReal";
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mFrontLeftRightSplit";
  local_38 = 4;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mRearLeftRightSplit";
  local_38 = 8;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mCentreBias";
  local_38 = 0xc;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mFrontBias";
  local_38 = 0x10;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mRearBias";
  local_38 = 0x14;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0x18;
  local_48 = "PxU32";
  local_34 = 4;
  local_40 = "mType";
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mPad";
  local_38 = 0x1c;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0x200;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxVehicleAckermannGeometryData";
  local_40 = (char *)0x0;
  local_38 = 0;
  local_34 = 0x10;
  uStack_30 = 0;
  local_2c = 0;
  local_28 = 1;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mAccuracy";
  local_38 = 0;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mFrontWidth";
  local_38 = 4;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mRearWidth";
  local_38 = 8;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "mAxleSeparation";
  local_38 = 0xc;
  local_34 = 4;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxVehicleDriveSimData4W";
  local_40 = (char *)0x0;
  local_38 = 0;
  local_34 = 0x240;
  uStack_30 = 0;
  local_2c = 0;
  local_28 = 1;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxVehicleDriveSimData4W";
  local_40 = "PxVehicleDriveSimData";
  local_38 = 0;
  local_34 = 0x240;
  uStack_30 = 0;
  local_2c = 0;
  local_28 = 1;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxVehicleDifferential4WData";
  local_40 = "mDiff";
  local_38 = 0x210;
  local_34 = 0x20;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxVehicleAckermannGeometryData";
  local_40 = "mAckermannGeometry";
  local_38 = 0x230;
  local_34 = 0x10;
  uStack_30 = 1;
  local_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  return;
}



// FUNCTION 14397abe0 createObject body=112 status=ok
// SIG undefined createObject(void)

undefined8 * physx::PxVehicleDrive4W::createObject(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)((longlong)puVar1 + 10) = 2;
    *puVar1 = &PTR_LAB_145ca7750;
  }
  *param_1 = *param_1 + 0x360;
  uVar2 = FUN_1439738a0(*(undefined4 *)((longlong)puVar1 + 0x3c));
  *(ulonglong *)(param_2 + 8) =
       (ulonglong)uVar2 + (*(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0);
  PxVehicleWheels::patchupPointers(*(undefined4 *)((longlong)puVar1 + 0x3c),puVar1);
  PxVehicleWheels::resolveReferences(puVar1,param_2);
  return puVar1;
}



// FUNCTION 14397ac60 getBinaryMetaData body=248 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleDrive4W::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  PxVehicleDrive::getBinaryMetaData();
  PxVehicleWheels::getBinaryMetaData(param_1);
  PxVehicleDriveSimData::getBinaryMetaData(param_1);
  PxVehicleDriveSimData4W::getBinaryMetaData(param_1);
  local_38 = "PxVehicleDrive4W";
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0x360;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 3;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxVehicleDrive4W";
  local_30 = "PxVehicleDrive";
  local_28 = 0;
  local_24 = 0x360;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x120;
  local_38 = "PxVehicleDriveSimData4W";
  local_24 = 0x240;
  local_30 = "mDriveSimData";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 14397ad60 getBinaryMetaData body=518 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleDriveSimDataNW::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_38 = "PxVehicleDifferentialNWData";
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0x10;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0;
  local_30 = "mBitmapBuffer";
  local_38 = "PxU32";
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxU32";
  local_30 = "mNbDrivenWheels";
  local_28 = 4;
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 8;
  local_38 = "PxReal";
  local_24 = 4;
  local_30 = "mInvNbDrivenWheels";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxU32";
  local_30 = "mPad";
  local_28 = 0xc;
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxVehicleDriveSimDataNW";
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0x220;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxVehicleDriveSimDataNW";
  local_30 = "PxVehicleDriveSimData";
  local_28 = 0;
  local_24 = 0x220;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxVehicleDifferentialNWData";
  local_30 = "mDiff";
  local_28 = 0x210;
  local_24 = 0x10;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 14397af70 createObject body=112 status=ok
// SIG undefined createObject(void)

undefined8 * physx::PxVehicleDriveNW::createObject(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)((longlong)puVar1 + 10) = 2;
    *puVar1 = &PTR_LAB_145ca7790;
  }
  *param_1 = *param_1 + 0x340;
  uVar2 = FUN_1439738a0(*(undefined4 *)((longlong)puVar1 + 0x3c));
  *(ulonglong *)(param_2 + 8) =
       (ulonglong)uVar2 + (*(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0);
  PxVehicleWheels::patchupPointers(*(undefined4 *)((longlong)puVar1 + 0x3c),puVar1);
  PxVehicleWheels::resolveReferences(puVar1,param_2);
  return puVar1;
}



// FUNCTION 14397aff0 getBinaryMetaData body=224 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleDriveNW::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  PxVehicleDriveSimDataNW::getBinaryMetaData();
  local_38 = "PxVehicleDriveNW";
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0x340;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 3;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxVehicleDriveNW";
  local_30 = "PxVehicleDrive";
  local_28 = 0;
  local_24 = 0x340;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x120;
  local_38 = "PxVehicleDriveSimDataNW";
  local_24 = 0x220;
  local_30 = "mDriveSimData";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 14397b0e0 createObject body=137 status=ok
// SIG undefined createObject(void)

undefined8 * physx::PxVehicleDriveTank::createObject(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)((longlong)puVar1 + 10) = 2;
    *puVar1 = &PTR_LAB_145ca77d0;
    FUN_1430c8370(puVar1 + 0x24);
  }
  *param_1 = *param_1 + 0x340;
  uVar2 = FUN_1439738a0(*(undefined4 *)((longlong)puVar1 + 0x3c));
  *(ulonglong *)(param_2 + 8) =
       (ulonglong)uVar2 + (*(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0);
  PxVehicleWheels::patchupPointers(*(undefined4 *)((longlong)puVar1 + 0x3c),puVar1);
  PxVehicleWheels::resolveReferences(puVar1,param_2);
  return puVar1;
}



// FUNCTION 14397b170 getBinaryMetaData body=341 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleDriveTank::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_38 = "PxVehicleDriveTank";
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0x340;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 3;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxVehicleDriveTank";
  local_30 = "PxVehicleDrive";
  local_28 = 0;
  local_24 = 0x340;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x120;
  local_38 = "PxVehicleDriveSimData";
  local_24 = 0x210;
  local_30 = "mDriveSimData";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x330;
  local_30 = "mDriveModel";
  local_38 = "PxU32";
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxU32";
  local_30 = "mPad";
  local_28 = 0x334;
  local_24 = 0xc;
  uStack_20 = 3;
  local_1c = 0;
  local_18 = 0x200;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 14397b2d0 getBinaryMetaData body=2916 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleWheels4SimData::getBinaryMetaData(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_58 = "PxVehicleSuspensionData";
  local_50 = (char *)0x0;
  local_48 = 0;
  local_44 = 0x30;
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0;
  local_50 = "mSpringStrength";
  local_58 = "PxReal";
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mSpringDamperRate";
  local_48 = 4;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mMaxCompression";
  local_48 = 8;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mMaxDroop";
  local_48 = 0xc;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mSprungMass";
  local_48 = 0x10;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mCamberAtRest";
  local_48 = 0x14;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mCamberAtMaxCompression";
  local_48 = 0x18;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mCamberAtMaxDroop";
  local_48 = 0x1c;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mRecipMaxCompression";
  local_48 = 0x20;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mRecipMaxDroop";
  local_48 = 0x24;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mPad";
  local_48 = 0x28;
  local_44 = 8;
  uStack_40 = 2;
  local_3c = 0;
  local_38 = 0x200;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleWheelData";
  local_50 = (char *)0x0;
  local_48 = 0;
  local_44 = 0x30;
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mRadius";
  local_48 = 0;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mWidth";
  local_48 = 4;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mMass";
  local_48 = 8;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mMOI";
  local_48 = 0xc;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mDampingRate";
  local_48 = 0x10;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mMaxBrakeTorque";
  local_48 = 0x14;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mMaxHandBrakeTorque";
  local_48 = 0x18;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mMaxSteer";
  local_48 = 0x1c;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mToeAngle";
  local_48 = 0x20;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mRecipRadius";
  local_48 = 0x24;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mRecipMOI";
  local_48 = 0x28;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mPad";
  local_48 = 0x2c;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0x200;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_44 = 0x40;
  uStack_40 = 0;
  local_50 = (char *)0x0;
  local_48 = 0;
  local_3c = 0;
  local_58 = "PxVehicleTireData";
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mLatStiffX";
  local_48 = 0;
  local_38 = 0;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mLatStiffY";
  local_48 = 4;
  local_38 = 0;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mLongitudinalStiffnessPerUnitGravity";
  local_48 = 8;
  local_38 = 0;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mCamberStiffnessPerUnitGravity";
  local_48 = 0xc;
  local_38 = 0;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mFrictionVsSlipGraph";
  local_48 = 0x10;
  local_38 = 0;
  local_44 = 0x18;
  uStack_40 = 6;
  local_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mType";
  local_48 = 0x28;
  local_38 = 0;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mRecipLongitudinalStiffnessPerUnitGravity";
  local_48 = 0x2c;
  local_38 = 0;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mFrictionVsSlipGraphRecipx1Minusx0";
  local_48 = 0x30;
  local_38 = 0;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mFrictionVsSlipGraphRecipx2Minusx1";
  local_48 = 0x34;
  local_38 = 0;
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mPad";
  local_48 = 0x38;
  local_44 = 8;
  uStack_40 = 2;
  local_3c = 0;
  local_38 = 0x200;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_44 = 0x3b0;
  uStack_40 = 0;
  local_58 = "PxVehicleWheels4SimData";
  local_38 = 1;
  local_50 = (char *)0x0;
  local_48 = 0;
  local_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleSuspensionData";
  local_50 = "mSuspensions";
  local_48 = 0;
  local_44 = 0xc0;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleWheelData";
  local_50 = "mWheels";
  local_48 = 0xc0;
  local_44 = 0xc0;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleTireData";
  local_50 = "mTires";
  local_48 = 0x180;
  local_44 = 0x100;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0x280;
  local_50 = "mSuspDownwardTravelDirections";
  local_58 = "PxVec3";
  local_44 = 0x30;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVec3";
  local_50 = "mSuspForceAppPointOffsets";
  local_48 = 0x2b0;
  local_44 = 0x30;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVec3";
  local_50 = "mTireForceAppPointOffsets";
  local_48 = 0x2e0;
  local_44 = 0x30;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVec3";
  local_50 = "mWheelCentreOffsets";
  local_48 = 0x310;
  local_44 = 0x30;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mTireRestLoads";
  local_48 = 0x340;
  local_44 = 0x10;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mRecipTireRestLoads";
  local_48 = 0x350;
  local_44 = 0x10;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxFilterData";
  local_48 = 0x360;
  local_50 = "mSqFilterData";
  local_44 = 0x40;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0x3a0;
  local_58 = "PxU8";
  local_44 = 4;
  local_50 = "mWheelShapeMap";
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mPad";
  local_48 = 0x3a4;
  local_44 = 0xc;
  uStack_40 = 3;
  local_3c = 0;
  local_38 = 0x200;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}



// FUNCTION 14397be40 getBinaryMetaData body=844 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleWheels4DynData::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_24 = 0x220;
  uStack_20 = 0;
  local_30 = (char *)0x0;
  local_38 = "PxVehicleWheels4DynData";
  local_28 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0;
  local_30 = "mWheelSpeeds";
  local_38 = "PxReal";
  local_24 = 0x10;
  uStack_20 = 4;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "mCorrectedWheelSpeeds";
  local_28 = 0x10;
  local_24 = 0x10;
  uStack_20 = 4;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "mWheelRotationAngles";
  local_28 = 0x20;
  local_24 = 0x10;
  uStack_20 = 4;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "mTireLowForwardSpeedTimers";
  local_28 = 0x30;
  local_24 = 0x10;
  uStack_20 = 4;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "mTireLowSideSpeedTimers";
  local_28 = 0x40;
  local_24 = 0x10;
  uStack_20 = 4;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x60;
  local_38 = "PxU8";
  local_30 = "mQueryOrCachedHitResults";
  local_24 = 0x170;
  uStack_20 = 0x170;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "mJounces";
  local_28 = 0x50;
  local_24 = 0x10;
  uStack_20 = 4;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x1d0;
  local_38 = "PxVehicleConstraintShader";
  local_24 = 8;
  local_30 = "mVehicleConstraints";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x1d8;
  local_38 = "PxRaycastQueryResult";
  local_24 = 8;
  local_30 = "mRaycastResults";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x1e0;
  local_38 = "PxSweepQueryResult";
  local_24 = 8;
  local_30 = "mSweepResults";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x1e8;
  local_38 = "bool";
  local_24 = 1;
  local_30 = "mHasCachedRaycastHitPlane";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x1ec;
  local_38 = "PxU32";
  local_24 = 0x30;
  local_30 = "mPad";
  uStack_20 = 0xc;
  local_1c = 0;
  local_18 = 0x200;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 14397c1a0 getBinaryMetaData body=1251 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxVehicleConstraintShader::getBinaryMetaData(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_44 = 0x74;
  uStack_40 = 0;
  local_50 = (char *)0x0;
  local_58 = "SuspLimitConstraintData";
  local_48 = 0;
  local_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVec3";
  local_50 = "mCMOffsets";
  local_48 = 0;
  local_44 = 0x30;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVec3";
  local_50 = "mDirs";
  local_48 = 0x30;
  local_44 = 0x30;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0x60;
  local_50 = "mErrors";
  local_58 = "PxReal";
  local_44 = 0x10;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0x70;
  local_38 = 0;
  local_58 = "bool";
  local_50 = "mActiveFlags";
  local_44 = 4;
  uStack_40 = 4;
  local_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_44 = 0x74;
  uStack_40 = 0;
  local_58 = "StickyTireConstraintData";
  local_38 = 1;
  local_50 = (char *)0x0;
  local_48 = 0;
  local_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_50 = "mCMOffsets";
  local_58 = "PxVec3";
  local_48 = 0;
  local_44 = 0x30;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVec3";
  local_50 = "mDirs";
  local_48 = 0x30;
  local_44 = 0x30;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mTargetSpeeds";
  local_48 = 0x60;
  local_44 = 0x10;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "bool";
  local_50 = "mActiveFlags";
  local_48 = 0x70;
  local_44 = 4;
  uStack_40 = 4;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "VehicleConstraintData";
  local_50 = (char *)0x0;
  local_48 = 0;
  local_44 = 0x15c;
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0;
  local_58 = "SuspLimitConstraintData";
  local_44 = 0x74;
  local_50 = "mSuspLimitData";
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0x74;
  local_50 = "mStickyTireForwardData";
  local_58 = "StickyTireConstraintData";
  local_44 = 0x74;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "StickyTireConstraintData";
  local_50 = "mStickyTireSideData";
  local_48 = 0xe8;
  local_44 = 0x74;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleConstraintShader";
  local_50 = (char *)0x0;
  local_48 = 0;
  local_44 = 0x180;
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 3;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVehicleConstraintShader";
  local_50 = "PxConstraintConnector";
  local_48 = 0;
  local_44 = 0x180;
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "VehicleConstraintData";
  local_50 = "mData";
  local_48 = 8;
  local_44 = 0x15c;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0x168;
  local_58 = "PxConstraint";
  local_44 = 8;
  local_50 = "mConstraint";
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 8;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0x170;
  local_58 = "PxVehicleWheels";
  local_44 = 8;
  local_50 = "mVehicle";
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 8;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0x178;
  local_58 = "PxU32";
  local_50 = "mPad";
  local_44 = 4;
  uStack_40 = 1;
  local_3c = 0;
  local_38 = 0x200;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}



// FUNCTION 14397c690 FUN_14397c690 body=43 status=ok
// SIG undefined FUN_14397c690(void)

undefined8 * FUN_14397c690(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145af1560;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 14397c6c0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FCanvas>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145af1560;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 14397c6f0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SToolBarButtonBlock>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145af1560;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 14397c720 FUN_14397c720 body=43 status=ok
// SIG undefined FUN_14397c720(void)

undefined8 * FUN_14397c720(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145af1560;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14397c750 getBinaryMetaData body=284 status=ok
// SIG undefined getBinaryMetaData(void)

void `anonymous_namespace'::ShadowLookupTable::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_24 = 0x50;
  uStack_20 = 0;
  local_30 = (char *)0x0;
  local_38 = "ShadowLookupTable";
  local_28 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0;
  local_38 = "PxReal";
  local_24 = 0x40;
  local_30 = "mDataPairs";
  uStack_20 = 0x10;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x40;
  local_30 = "mNbDataPairs";
  local_38 = "PxU32";
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxU32";
  local_30 = "mPad";
  local_28 = 0x44;
  local_24 = 0xc;
  uStack_20 = 3;
  local_1c = 0;
  local_18 = 0x200;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 14397c880 isKindOf body=69 status=ok
// SIG undefined isKindOf(void)

ulonglong physx::PxVehicleDrive4W::isKindOf(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop("PxVehicleDrive4W",param_2);
  uVar3 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 + 1;
      if (param_2[uVar2] != (&DAT_145af1548)[uVar2]) {
        return uVar3 & 0xffffffffffffff00;
      }
      uVar2 = uVar3;
    } while (uVar3 != 7);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 14397c8d0 isKindOf body=69 status=ok
// SIG undefined isKindOf(void)

ulonglong physx::PxVehicleDrive::isKindOf(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop("PxVehicleDrive",param_2);
  uVar3 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 + 1;
      if (param_2[uVar2] != (&DAT_145af1548)[uVar2]) {
        return uVar3 & 0xffffffffffffff00;
      }
      uVar2 = uVar3;
    } while (uVar3 != 7);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 14397c920 isKindOf body=69 status=ok
// SIG undefined isKindOf(void)

ulonglong physx::PxVehicleDriveNW::isKindOf(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop("PxVehicleDriveNW",param_2);
  uVar3 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 + 1;
      if (param_2[uVar2] != (&DAT_145af1548)[uVar2]) {
        return uVar3 & 0xffffffffffffff00;
      }
      uVar2 = uVar3;
    } while (uVar3 != 7);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 14397c970 isKindOf body=69 status=ok
// SIG undefined isKindOf(void)

ulonglong physx::PxVehicleDriveTank::isKindOf(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop("PxVehicleDriveTank",param_2);
  uVar3 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 + 1;
      if (param_2[uVar2] != (&DAT_145af1548)[uVar2]) {
        return uVar3 & 0xffffffffffffff00;
      }
      uVar2 = uVar3;
    } while (uVar3 != 7);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 14397c9c0 isKindOf body=69 status=ok
// SIG undefined isKindOf(void)

ulonglong physx::PxVehicleNoDrive::isKindOf(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop("PxVehicleNoDrive",param_2);
  uVar3 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 + 1;
      if (param_2[uVar2] != (&DAT_145af1548)[uVar2]) {
        return uVar3 & 0xffffffffffffff00;
      }
      uVar2 = uVar3;
    } while (uVar3 != 7);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 14397cb30 PxVehicleEngineDataGeneratedInfo body=387 status=ok
// SIG undefined PxVehicleEngineDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleEngineDataGeneratedInfo::PxVehicleEngineDataGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x222;
  *param_1 = "RecipMOI";
  param_1[2] = &LAB_14397f090;
  param_1[3] = "RecipMaxOmega";
  param_1[5] = &LAB_14397f0a0;
  *(undefined4 *)(param_1 + 4) = 0x223;
  MTorqueCurveProperty::MTorqueCurveProperty(param_1 + 6);
  *(undefined4 *)(param_1 + 0xe) = 0x225;
  param_1[0xd] = &DAT_145ca867c;
  param_1[0xf] = FUN_14256bd80;
  param_1[0x10] = FUN_142cc97a0;
  param_1[0x11] = "MPeakTorque";
  param_1[0x13] = &LAB_140e4cd50;
  param_1[0x14] = UCameraAnimInst::SetScale;
  *(undefined4 *)(param_1 + 0x12) = 0x226;
  param_1[0x15] = "MMaxOmega";
  param_1[0x17] = &LAB_14397fd70;
  param_1[0x18] = &LAB_14397ffb0;
  *(undefined4 *)(param_1 + 0x16) = 0x227;
  param_1[0x19] = "MDampingRateFullThrottle";
  param_1[0x1b] = &LAB_140e50a10;
  param_1[0x1c] = &LAB_14397ff90;
  *(undefined4 *)(param_1 + 0x1a) = 0x228;
  param_1[0x1d] = "MDampingRateZeroThrottleClutchEngaged";
  param_1[0x1f] = &LAB_14397fd60;
  param_1[0x20] = setPxVehicleEngineDataMDampingRateZeroThrottleClutchEngaged;
  *(undefined4 *)(param_1 + 0x1e) = 0x229;
  param_1[0x21] = "MDampingRateZeroThrottleClutchDisengaged";
  param_1[0x23] = FUN_142531cc0;
  param_1[0x24] = &LAB_14397ffa0;
  *(undefined4 *)(param_1 + 0x22) = 0x22a;
  return param_1;
}



// FUNCTION 14397cd90 PxVehicleGearsDataGeneratedInfo body=163 status=ok
// SIG undefined PxVehicleGearsDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleGearsDataGeneratedInfo::PxVehicleGearsDataGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x22d;
  *param_1 = "GearRatio";
  param_1[2] = &LAB_14397f0b0;
  param_1[3] = &LAB_14397f0c0;
  param_1[4] = "MFinalRatio";
  param_1[6] = &LAB_14397fd80;
  param_1[7] = &LAB_14397ffc0;
  *(undefined4 *)(param_1 + 5) = 0x22e;
  param_1[8] = "MNbRatios";
  param_1[10] = FUN_1411e2310;
  param_1[0xb] = FUN_1431af380;
  *(undefined4 *)(param_1 + 9) = 0x22f;
  param_1[0xc] = "MSwitchTime";
  param_1[0xe] = &LAB_14397fd90;
  param_1[0xf] = &LAB_14397ffd0;
  *(undefined4 *)(param_1 + 0xd) = 0x230;
  return param_1;
}



// FUNCTION 14397ce40 PxVehicleAutoBoxDataGeneratedValues body=355 status=ok
// SIG undefined PxVehicleAutoBoxDataGeneratedValues(void)

undefined4 *
physx::PxVehicleAutoBoxDataGeneratedValues::PxVehicleAutoBoxDataGeneratedValues
          (undefined4 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 2;
  *param_1 = *(undefined4 *)(param_2 + 0x80);
  lVar3 = 4;
  iVar6 = 2;
  lVar2 = 4;
  puVar4 = param_1 + 2;
  do {
    puVar4[-1] = *(undefined4 *)(param_2 + (longlong)(iVar6 + -2) * 4);
    *puVar4 = *(undefined4 *)(param_2 + (longlong)(iVar6 + -1) * 4);
    puVar4[1] = *(undefined4 *)(param_2 + (longlong)iVar6 * 4);
    puVar4[2] = *(undefined4 *)(param_2 + (longlong)(iVar6 + 1) * 4);
    puVar4[3] = *(undefined4 *)(param_2 + (longlong)(iVar6 + 2) * 4);
    puVar4[4] = *(undefined4 *)(param_2 + (longlong)(iVar6 + 3) * 4);
    puVar4[5] = *(undefined4 *)(param_2 + (longlong)(iVar6 + 4) * 4);
    iVar1 = iVar6 + 5;
    iVar6 = iVar6 + 8;
    puVar4[6] = *(undefined4 *)(param_2 + (longlong)iVar1 * 4);
    lVar2 = lVar2 + -1;
    puVar4 = puVar4 + 8;
  } while (lVar2 != 0);
  puVar4 = param_1 + 0x22;
  do {
    puVar4[-1] = *(undefined4 *)(param_2 + 0x80 + (longlong)(iVar5 + -2) * 4);
    *puVar4 = *(undefined4 *)(param_2 + 0x80 + (longlong)(iVar5 + -1) * 4);
    puVar4[1] = *(undefined4 *)(param_2 + 0x80 + (longlong)iVar5 * 4);
    puVar4[2] = *(undefined4 *)(param_2 + 0x80 + (longlong)(iVar5 + 1) * 4);
    puVar4[3] = *(undefined4 *)(param_2 + 0x80 + (longlong)(iVar5 + 2) * 4);
    puVar4[4] = *(undefined4 *)(param_2 + 0x80 + (longlong)(iVar5 + 3) * 4);
    puVar4[5] = *(undefined4 *)(param_2 + 0x80 + (longlong)(iVar5 + 4) * 4);
    iVar6 = iVar5 + 5;
    iVar5 = iVar5 + 8;
    puVar4[6] = *(undefined4 *)(param_2 + 0x80 + (longlong)iVar6 * 4);
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 8;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 14397cfb0 PxVehicleAutoBoxDataGeneratedInfo body=123 status=ok
// SIG undefined PxVehicleAutoBoxDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleAutoBoxDataGeneratedInfo::PxVehicleAutoBoxDataGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x233;
  *param_1 = "Latency";
  param_1[2] = &LAB_14397f0e0;
  param_1[3] = &LAB_14397f0d0;
  param_1[4] = "UpRatios";
  param_1[6] = &LAB_14397f0f0;
  param_1[7] = &LAB_14397f100;
  *(undefined4 *)(param_1 + 5) = 0x234;
  param_1[8] = "DownRatios";
  param_1[10] = &LAB_14397f110;
  param_1[0xb] = &LAB_14397f130;
  *(undefined4 *)(param_1 + 9) = 0x235;
  return param_1;
}



// FUNCTION 14397d080 PxVehicleDifferential4WDataGeneratedInfo body=319 status=ok
// SIG undefined PxVehicleDifferential4WDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleDifferential4WDataGeneratedInfo::PxVehicleDifferential4WDataGeneratedInfo
          (undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x238;
  *param_1 = "MFrontRearSplit";
  param_1[2] = FUN_1406a5e50;
  param_1[3] = &LAB_1432aae60;
  param_1[4] = "MFrontLeftRightSplit";
  param_1[6] = FUN_140a32860;
  param_1[7] = setPxJointLimitParametersBounceThreshold;
  *(undefined4 *)(param_1 + 5) = 0x239;
  param_1[8] = "MRearLeftRightSplit";
  param_1[10] = FUN_14247f5a0;
  param_1[0xb] = setPxD6JointDriveForceLimit;
  *(undefined4 *)(param_1 + 9) = 0x23a;
  param_1[0xc] = "MCentreBias";
  param_1[0xe] = &LAB_1432aae10;
  param_1[0xf] = &LAB_1432aae50;
  *(undefined4 *)(param_1 + 0xd) = 0x23b;
  param_1[0x10] = "MFrontBias";
  param_1[0x12] = FUN_1408d8930;
  param_1[0x13] = &LAB_1432aae40;
  *(undefined4 *)(param_1 + 0x11) = 0x23c;
  param_1[0x14] = "MRearBias";
  param_1[0x16] = &LAB_1432aae00;
  param_1[0x17] = &LAB_1412cf010;
  *(undefined4 *)(param_1 + 0x15) = 0x23d;
  param_1[0x18] = "MType";
  param_1[0x1a] = AK::WriteBytesMem::Count;
  param_1[0x1b] = AK::WriteBytesMem::SetCount;
  *(undefined4 *)(param_1 + 0x19) = 0x23e;
  return param_1;
}



// FUNCTION 14397d1d0 PxVehicleDifferentialNWDataGeneratedValues body=28 status=ok
// SIG undefined PxVehicleDifferentialNWDataGeneratedValues(void)

undefined4 *
physx::PxVehicleDifferentialNWDataGeneratedValues::PxVehicleDifferentialNWDataGeneratedValues
          (undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = PxVehicleDifferentialNWData::getDrivenWheelStatus(param_2);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 14397d200 PxVehicleDifferentialNWDataGeneratedInfo body=43 status=ok
// SIG undefined PxVehicleDifferentialNWDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleDifferentialNWDataGeneratedInfo::PxVehicleDifferentialNWDataGeneratedInfo
          (undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x241;
  *param_1 = "DrivenWheelStatus";
  param_1[2] = &LAB_14397f160;
  param_1[3] = &LAB_14397f150;
  return param_1;
}



// FUNCTION 14397d260 PxVehicleAckermannGeometryDataGeneratedInfo body=163 status=ok
// SIG undefined PxVehicleAckermannGeometryDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleAckermannGeometryDataGeneratedInfo::PxVehicleAckermannGeometryDataGeneratedInfo
          (undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x244;
  *param_1 = "MAccuracy";
  param_1[2] = FUN_1406a5e50;
  param_1[3] = &LAB_1432aae60;
  param_1[4] = "MFrontWidth";
  param_1[6] = FUN_140a32860;
  param_1[7] = setPxJointLimitParametersBounceThreshold;
  *(undefined4 *)(param_1 + 5) = 0x245;
  param_1[8] = "MRearWidth";
  param_1[10] = FUN_14247f5a0;
  param_1[0xb] = setPxD6JointDriveForceLimit;
  *(undefined4 *)(param_1 + 9) = 0x246;
  param_1[0xc] = "MAxleSeparation";
  param_1[0xe] = &LAB_1432aae10;
  param_1[0xf] = &LAB_1432aae50;
  *(undefined4 *)(param_1 + 0xd) = 0x247;
  return param_1;
}



// FUNCTION 14397d330 PxVehicleClutchDataGeneratedInfo body=123 status=ok
// SIG undefined PxVehicleClutchDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleClutchDataGeneratedInfo::PxVehicleClutchDataGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x24a;
  *param_1 = "MStrength";
  param_1[2] = FUN_1406a5e50;
  param_1[3] = &LAB_1432aae60;
  param_1[4] = "MAccuracyMode";
  param_1[6] = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey;
  param_1[7] = FUN_14393c830;
  *(undefined4 *)(param_1 + 5) = 0x24b;
  param_1[8] = "MEstimateIterations";
  param_1[10] = IStreamingManager::GetNumWantingResources;
  param_1[0xb] = &LAB_142ba3360;
  *(undefined4 *)(param_1 + 9) = 0x24c;
  return param_1;
}



// FUNCTION 14397d3f0 PxVehicleTireLoadFilterDataGeneratedInfo body=201 status=ok
// SIG undefined PxVehicleTireLoadFilterDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleTireLoadFilterDataGeneratedInfo::PxVehicleTireLoadFilterDataGeneratedInfo
          (undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x24f;
  *param_1 = "Denominator";
  param_1[2] = &LAB_14397f170;
  param_1[3] = "MMinNormalisedLoad";
  param_1[5] = FUN_1406a5e50;
  param_1[6] = &LAB_1432aae60;
  *(undefined4 *)(param_1 + 4) = 0x250;
  param_1[7] = "MMinFilteredNormalisedLoad";
  param_1[9] = FUN_140a32860;
  param_1[10] = setPxJointLimitParametersBounceThreshold;
  *(undefined4 *)(param_1 + 8) = 0x251;
  param_1[0xb] = "MMaxNormalisedLoad";
  param_1[0xd] = FUN_14247f5a0;
  param_1[0xe] = setPxD6JointDriveForceLimit;
  *(undefined4 *)(param_1 + 0xc) = 0x252;
  param_1[0xf] = "MMaxFilteredNormalisedLoad";
  param_1[0x11] = &LAB_1432aae10;
  param_1[0x12] = &LAB_1432aae50;
  *(undefined4 *)(param_1 + 0x10) = 0x253;
  return param_1;
}



// FUNCTION 14397d510 PxVehicleWheelDataGeneratedInfo body=499 status=ok
// SIG undefined PxVehicleWheelDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleWheelDataGeneratedInfo::PxVehicleWheelDataGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x256;
  *param_1 = "RecipRadius";
  param_1[2] = &LAB_14397f180;
  param_1[3] = "RecipMOI";
  param_1[5] = &LAB_14397f190;
  *(undefined4 *)(param_1 + 4) = 599;
  param_1[6] = "MRadius";
  param_1[8] = FUN_1406a5e50;
  param_1[9] = &LAB_1432aae60;
  *(undefined4 *)(param_1 + 7) = 600;
  param_1[10] = "MWidth";
  param_1[0xc] = FUN_140a32860;
  param_1[0xd] = setPxJointLimitParametersBounceThreshold;
  *(undefined4 *)(param_1 + 0xb) = 0x259;
  param_1[0xe] = "MMass";
  param_1[0x10] = FUN_14247f5a0;
  param_1[0x11] = setPxD6JointDriveForceLimit;
  *(undefined4 *)(param_1 + 0xf) = 0x25a;
  param_1[0x12] = &DAT_145ca867c;
  param_1[0x14] = &LAB_1432aae10;
  param_1[0x15] = &LAB_1432aae50;
  *(undefined4 *)(param_1 + 0x13) = 0x25b;
  param_1[0x16] = "MDampingRate";
  param_1[0x18] = FUN_1408d8930;
  param_1[0x19] = &LAB_1432aae40;
  *(undefined4 *)(param_1 + 0x17) = 0x25c;
  param_1[0x1a] = "MMaxBrakeTorque";
  param_1[0x1c] = &LAB_1432aae00;
  param_1[0x1d] = &LAB_1412cf010;
  *(undefined4 *)(param_1 + 0x1b) = 0x25d;
  param_1[0x1e] = "MMaxHandBrakeTorque";
  param_1[0x20] = FUN_142eedeb0;
  param_1[0x21] = &LAB_1432aae30;
  *(undefined4 *)(param_1 + 0x1f) = 0x25e;
  param_1[0x22] = "MMaxSteer";
  param_1[0x24] = &LAB_143332760;
  param_1[0x25] = &LAB_14397ffe0;
  *(undefined4 *)(param_1 + 0x23) = 0x25f;
  param_1[0x26] = "MToeAngle";
  param_1[0x28] = FUN_1408e43d0;
  param_1[0x29] = &LAB_14397fff0;
  *(undefined4 *)(param_1 + 0x27) = 0x260;
  return param_1;
}



// FUNCTION 14397d760 PxVehicleSuspensionDataGeneratedInfo body=485 status=ok
// SIG undefined PxVehicleSuspensionDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleSuspensionDataGeneratedInfo::PxVehicleSuspensionDataGeneratedInfo
          (undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x263;
  *param_1 = "RecipMaxCompression";
  param_1[2] = &LAB_14397f1a0;
  param_1[3] = "RecipMaxDroop";
  param_1[5] = &LAB_14397f1b0;
  *(undefined4 *)(param_1 + 4) = 0x264;
  param_1[6] = "MassAndPreserveNaturalFrequency";
  param_1[8] = &LAB_14397f1c0;
  *(undefined4 *)(param_1 + 7) = 0x265;
  param_1[9] = "MSpringStrength";
  param_1[0xb] = FUN_1406a5e50;
  param_1[0xc] = &LAB_1432aae60;
  *(undefined4 *)(param_1 + 10) = 0x266;
  param_1[0xd] = "MSpringDamperRate";
  param_1[0xf] = FUN_140a32860;
  param_1[0x10] = setPxJointLimitParametersBounceThreshold;
  *(undefined4 *)(param_1 + 0xe) = 0x267;
  param_1[0x11] = "MMaxCompression";
  param_1[0x13] = FUN_14247f5a0;
  param_1[0x14] = setPxD6JointDriveForceLimit;
  *(undefined4 *)(param_1 + 0x12) = 0x268;
  param_1[0x15] = "MMaxDroop";
  param_1[0x17] = &LAB_1432aae10;
  param_1[0x18] = &LAB_1432aae50;
  *(undefined4 *)(param_1 + 0x16) = 0x269;
  param_1[0x19] = "MSprungMass";
  param_1[0x1b] = FUN_1408d8930;
  param_1[0x1c] = &LAB_1432aae40;
  *(undefined4 *)(param_1 + 0x1a) = 0x26a;
  param_1[0x1d] = "MCamberAtRest";
  param_1[0x1f] = &LAB_1432aae00;
  param_1[0x20] = &LAB_1412cf010;
  *(undefined4 *)(param_1 + 0x1e) = 0x26b;
  param_1[0x21] = "MCamberAtMaxCompression";
  param_1[0x23] = FUN_142eedeb0;
  param_1[0x24] = &LAB_1432aae30;
  *(undefined4 *)(param_1 + 0x22) = 0x26c;
  param_1[0x25] = "MCamberAtMaxDroop";
  param_1[0x27] = &LAB_143332760;
  param_1[0x28] = &LAB_14397ffe0;
  *(undefined4 *)(param_1 + 0x26) = 0x26d;
  return param_1;
}



// FUNCTION 14397d970 PxVehicleAntiRollBarDataGeneratedInfo body=123 status=ok
// SIG undefined PxVehicleAntiRollBarDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleAntiRollBarDataGeneratedInfo::PxVehicleAntiRollBarDataGeneratedInfo
          (undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x270;
  *param_1 = "MWheel0";
  param_1[2] = FRollingHash::GetWindowSize;
  param_1[3] = FUN_1409baf50;
  param_1[4] = "MWheel1";
  param_1[6] = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey;
  param_1[7] = FUN_14393c830;
  *(undefined4 *)(param_1 + 5) = 0x271;
  param_1[8] = "MStiffness";
  param_1[10] = FUN_14247f5a0;
  param_1[0xb] = setPxD6JointDriveForceLimit;
  *(undefined4 *)(param_1 + 9) = 0x272;
  return param_1;
}



// FUNCTION 14397da50 PxVehicleTireDataGeneratedInfo body=355 status=ok
// SIG undefined PxVehicleTireDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleTireDataGeneratedInfo::PxVehicleTireDataGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x275;
  *param_1 = "RecipLongitudinalStiffnessPerUnitGravity";
  param_1[2] = &LAB_14397f1e0;
  param_1[3] = "FrictionVsSlipGraphRecipx1Minusx0";
  param_1[5] = &LAB_14397f1f0;
  *(undefined4 *)(param_1 + 4) = 0x276;
  param_1[6] = "FrictionVsSlipGraphRecipx2Minusx1";
  param_1[8] = &LAB_14397f200;
  *(undefined4 *)(param_1 + 7) = 0x277;
  param_1[9] = "MLatStiffX";
  param_1[0xb] = FUN_1406a5e50;
  param_1[0xc] = &LAB_1432aae60;
  *(undefined4 *)(param_1 + 10) = 0x278;
  param_1[0xd] = "MLatStiffY";
  param_1[0xf] = FUN_140a32860;
  param_1[0x10] = setPxJointLimitParametersBounceThreshold;
  *(undefined4 *)(param_1 + 0xe) = 0x279;
  param_1[0x11] = "MLongitudinalStiffnessPerUnitGravity";
  param_1[0x13] = FUN_14247f5a0;
  param_1[0x14] = setPxD6JointDriveForceLimit;
  *(undefined4 *)(param_1 + 0x12) = 0x27a;
  param_1[0x15] = "MCamberStiffnessPerUnitGravity";
  param_1[0x17] = &LAB_1432aae10;
  param_1[0x18] = &LAB_1432aae50;
  *(undefined4 *)(param_1 + 0x16) = 0x27b;
  param_1[0x19] = "MType";
  param_1[0x1b] = FWmfMediaTextureSample::GetFormat;
  param_1[0x1c] = EC_GROUP_set_point_conversion_form;
  *(undefined4 *)(param_1 + 0x1a) = 0x27c;
  MFrictionVsSlipGraphProperty::MFrictionVsSlipGraphProperty(param_1 + 0x1d);
  return param_1;
}



// FUNCTION 14397dc60 PxVehicleWheelsSimDataGeneratedInfo body=985 status=ok
// SIG undefined PxVehicleWheelsSimDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleWheelsSimDataGeneratedInfo::PxVehicleWheelsSimDataGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x284;
  *param_1 = "ChassisMass";
  param_1[2] = &LAB_14397f230;
  param_1[3] = "SuspensionData";
  param_1[5] = &LAB_14397f290;
  param_1[6] = getPxVehicleWheelsSimData_SuspensionData;
  param_1[8] = &LAB_14397f280;
  *(undefined4 *)(param_1 + 4) = 0x285;
  param_1[9] = "WheelData";
  param_1[0xb] = &LAB_14397f2f0;
  param_1[0xc] = getPxVehicleWheelsSimData_WheelData;
  param_1[0xe] = &LAB_14397f2e0;
  *(undefined4 *)(param_1 + 10) = 0x286;
  param_1[0xf] = "TireData";
  param_1[0x11] = &LAB_14397f360;
  param_1[0x12] = getPxVehicleWheelsSimData_TireData;
  param_1[0x14] = &LAB_14397f350;
  *(undefined4 *)(param_1 + 0x10) = 0x287;
  param_1[0x15] = "SuspTravelDirection";
  param_1[0x17] = &LAB_14397f3c0;
  param_1[0x18] = getPxVehicleWheelsSimData_SuspTravelDirection;
  param_1[0x1a] = &LAB_14397f3b0;
  *(undefined4 *)(param_1 + 0x16) = 0x288;
  param_1[0x1b] = "SuspForceAppPointOffset";
  param_1[0x1d] = &LAB_14397f420;
  param_1[0x1e] = getPxVehicleWheelsSimData_SuspForceAppPointOffset;
  param_1[0x20] = &LAB_14397f410;
  *(undefined4 *)(param_1 + 0x1c) = 0x289;
  param_1[0x21] = "TireForceAppPointOffset";
  param_1[0x23] = &LAB_14397f480;
  param_1[0x24] = getPxVehicleWheelsSimData_TireForceAppPointOffset;
  param_1[0x26] = &LAB_14397f470;
  *(undefined4 *)(param_1 + 0x22) = 0x28a;
  param_1[0x27] = "WheelCentreOffset";
  param_1[0x29] = &LAB_14397f4e0;
  param_1[0x2a] = getPxVehicleWheelsSimData_WheelCentreOffset;
  param_1[0x2c] = &LAB_14397f4d0;
  *(undefined4 *)(param_1 + 0x28) = 0x28b;
  param_1[0x2d] = "WheelShapeMapping";
  param_1[0x2f] = &LAB_14397f510;
  param_1[0x30] = &LAB_14397f4f0;
  param_1[0x32] = &LAB_14397f500;
  *(undefined4 *)(param_1 + 0x2e) = 0x28c;
  param_1[0x33] = "SceneQueryFilterData";
  *(undefined4 *)(param_1 + 0x34) = 0x28d;
  param_1[0x35] = &LAB_14397f560;
  param_1[0x36] = getPxVehicleWheelsSimData_SceneQueryFilterData;
  param_1[0x38] = &LAB_14397f550;
  param_1[0x39] = "AntiRollBarData";
  param_1[0x3b] = &LAB_14397f5b0;
  param_1[0x3c] = getPxVehicleWheelsSimData_AntiRollBarData;
  param_1[0x3e] = &LAB_14397f5a0;
  *(undefined4 *)(param_1 + 0x3a) = 0x28e;
  param_1[0x3f] = "TireLoadFilterData";
  param_1[0x41] = &LAB_14397f5d0;
  param_1[0x42] = &LAB_14397f5c0;
  *(undefined4 *)(param_1 + 0x40) = 0x28f;
  param_1[0x43] = "MinLongSlipDenominator";
  param_1[0x45] = &LAB_14397f600;
  param_1[0x46] = &LAB_14397f5f0;
  *(undefined4 *)(param_1 + 0x44) = 0x290;
  param_1[0x47] = "ThresholdLongSpeed";
  param_1[0x49] = &LAB_14397f620;
  param_1[0x4a] = &LAB_14397f610;
  *(undefined4 *)(param_1 + 0x48) = 0x291;
  param_1[0x4b] = "LowForwardSpeedSubStepCount";
  param_1[0x4d] = &LAB_14397f640;
  param_1[0x4e] = &LAB_14397f630;
  *(undefined4 *)(param_1 + 0x4c) = 0x292;
  param_1[0x4f] = "HighForwardSpeedSubStepCount";
  param_1[0x51] = &LAB_14397f660;
  param_1[0x52] = &LAB_14397f650;
  *(undefined4 *)(param_1 + 0x50) = 0x293;
  param_1[0x53] = "WheelEnabledState";
  param_1[0x55] = &LAB_14397f6a0;
  param_1[0x56] = getPxVehicleWheelsSimData_WheelEnabledState;
  param_1[0x58] = &LAB_14397f690;
  *(undefined4 *)(param_1 + 0x54) = 0x294;
  return param_1;
}



// FUNCTION 14397e050 PxVehicleWheelsDynDataGeneratedInfo body=169 status=ok
// SIG undefined PxVehicleWheelsDynDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleWheelsDynDataGeneratedInfo::PxVehicleWheelsDynDataGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x297;
  *param_1 = "TireForceShaderFunction";
  param_1[2] = &LAB_14397f6c0;
  param_1[3] = "WheelRotationSpeed";
  param_1[5] = &LAB_14397f6f0;
  param_1[6] = &LAB_14397f6d0;
  param_1[8] = &LAB_14397f6e0;
  *(undefined4 *)(param_1 + 4) = 0x298;
  param_1[9] = "WheelRotationAngle";
  param_1[0xb] = &LAB_14397f720;
  param_1[0xc] = &LAB_14397f700;
  param_1[0xe] = &LAB_14397f710;
  *(undefined4 *)(param_1 + 10) = 0x299;
  param_1[0xf] = "Wheel4DynData";
  param_1[0x11] = &LAB_14397f730;
  *(undefined4 *)(param_1 + 0x10) = 0x29a;
  return param_1;
}



// FUNCTION 14397e100 PxVehicleWheelsGeneratedValues body=147 status=ok
// SIG undefined PxVehicleWheelsGeneratedValues(void)

uint * physx::PxVehicleWheelsGeneratedValues::PxVehicleWheelsGeneratedValues
                 (uint *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = (uint)*(byte *)((longlong)param_2 + 0xad);
  *(longlong *)(param_1 + 2) = param_2[0x14];
  uVar2 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 4) = uVar2;
  lVar1 = param_2[3];
  *(longlong *)(param_1 + 6) = param_2[2];
  *(longlong *)(param_1 + 8) = lVar1;
  lVar1 = param_2[5];
  *(longlong *)(param_1 + 10) = param_2[4];
  *(longlong *)(param_1 + 0xc) = lVar1;
  lVar1 = param_2[7];
  *(longlong *)(param_1 + 0xe) = param_2[6];
  *(longlong *)(param_1 + 0x10) = lVar1;
  lVar1 = param_2[9];
  *(longlong *)(param_1 + 0x12) = param_2[8];
  *(longlong *)(param_1 + 0x14) = lVar1;
  lVar1 = param_2[0xb];
  *(longlong *)(param_1 + 0x16) = param_2[10];
  *(longlong *)(param_1 + 0x18) = lVar1;
  lVar1 = param_2[0xd];
  *(longlong *)(param_1 + 0x1a) = param_2[0xc];
  *(longlong *)(param_1 + 0x1c) = lVar1;
  lVar1 = param_2[0xf];
  *(longlong *)(param_1 + 0x1e) = param_2[0xe];
  *(longlong *)(param_1 + 0x20) = lVar1;
  lVar1 = param_2[0x11];
  *(longlong *)(param_1 + 0x22) = param_2[0x10];
  *(longlong *)(param_1 + 0x24) = lVar1;
  lVar1 = param_2[0x13];
  *(longlong *)(param_1 + 0x26) = param_2[0x12];
  *(longlong *)(param_1 + 0x28) = lVar1;
  return param_1;
}



// FUNCTION 14397e1a0 PxVehicleWheelsGeneratedInfo body=173 status=ok
// SIG undefined PxVehicleWheelsGeneratedInfo(void)

undefined8 * physx::PxVehicleWheelsGeneratedInfo::PxVehicleWheelsGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x29d;
  *param_1 = "VehicleType";
  param_1[2] = &LAB_14397f740;
  param_1[3] = "RigidDynamicActor";
  param_1[5] = &LAB_14397f750;
  *(undefined4 *)(param_1 + 4) = 0x29e;
  param_1[6] = "ConcreteTypeName";
  param_1[8] = &LAB_14397f760;
  *(undefined4 *)(param_1 + 7) = 0x29f;
  param_1[9] = "MWheelsSimData";
  param_1[0xb] = &LAB_14397fdd0;
  param_1[0xc] = &LAB_143980020;
  *(undefined4 *)(param_1 + 10) = 0x2a0;
  param_1[0xd] = "MWheelsDynData";
  param_1[0xf] = &LAB_14397fda0;
  param_1[0x10] = &LAB_143980000;
  *(undefined4 *)(param_1 + 0xe) = 0x2a1;
  return param_1;
}



// FUNCTION 14397e2e0 PxVehicleDriveDynDataGeneratedInfo body=908 status=ok
// SIG undefined PxVehicleDriveDynDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleDriveDynDataGeneratedInfo::PxVehicleDriveDynDataGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x2a4;
  *param_1 = "AnalogInput";
  param_1[2] = &LAB_14397f790;
  param_1[3] = &LAB_14397f770;
  param_1[5] = &LAB_14397f780;
  param_1[6] = "GearUp";
  param_1[8] = &LAB_14397f7b0;
  param_1[9] = &LAB_14397f7a0;
  *(undefined4 *)(param_1 + 7) = 0x2a5;
  param_1[10] = "GearDown";
  param_1[0xc] = &LAB_14397f7d0;
  param_1[0xd] = &LAB_14397f7c0;
  *(undefined4 *)(param_1 + 0xb) = 0x2a6;
  param_1[0xe] = "UseAutoGears";
  param_1[0x10] = &LAB_14397f7f0;
  param_1[0x11] = &LAB_14397f7e0;
  *(undefined4 *)(param_1 + 0xf) = 0x2a7;
  param_1[0x12] = "CurrentGear";
  param_1[0x14] = &LAB_14397f810;
  param_1[0x15] = &LAB_14397f800;
  *(undefined4 *)(param_1 + 0x13) = 0x2a8;
  param_1[0x16] = "TargetGear";
  param_1[0x18] = &LAB_14397f830;
  param_1[0x19] = &LAB_14397f820;
  *(undefined4 *)(param_1 + 0x17) = 0x2a9;
  param_1[0x1a] = "EngineRotationSpeed";
  param_1[0x1c] = &LAB_14397f850;
  param_1[0x1d] = &LAB_14397f840;
  *(undefined4 *)(param_1 + 0x1b) = 0x2aa;
  param_1[0x1e] = "GearChange";
  param_1[0x20] = &LAB_14397f870;
  param_1[0x21] = &LAB_14397f860;
  *(undefined4 *)(param_1 + 0x1f) = 0x2ab;
  param_1[0x22] = "GearSwitchTime";
  param_1[0x24] = &LAB_14397f890;
  param_1[0x25] = &LAB_14397f880;
  *(undefined4 *)(param_1 + 0x23) = 0x2ac;
  param_1[0x26] = "AutoBoxSwitchTime";
  param_1[0x28] = &LAB_14397f8b0;
  param_1[0x29] = &LAB_14397f8a0;
  *(undefined4 *)(param_1 + 0x27) = 0x2ad;
  param_1[0x2a] = "MUseAutoGears";
  param_1[0x2c] = &LAB_140acdf00;
  param_1[0x2d] = &LAB_14397fee0;
  *(undefined4 *)(param_1 + 0x2b) = 0x2ae;
  param_1[0x2e] = "MGearUpPressed";
  *(undefined4 *)(param_1 + 0x2f) = 0x2af;
  param_1[0x30] = &LAB_1409a07c0;
  param_1[0x31] = &LAB_14397fed0;
  param_1[0x32] = "MGearDownPressed";
  param_1[0x34] = &LAB_141153e00;
  param_1[0x35] = &LAB_14397fec0;
  *(undefined4 *)(param_1 + 0x33) = 0x2b0;
  param_1[0x36] = "MCurrentGear";
  param_1[0x38] = FUN_1422092a0;
  param_1[0x39] = FArchive::SetLicenseeUE4Ver;
  *(undefined4 *)(param_1 + 0x37) = 0x2b1;
  param_1[0x3a] = "MTargetGear";
  param_1[0x3c] = FUN_140953d20;
  param_1[0x3d] = UGameUserSettings::SetVisualEffectQuality;
  *(undefined4 *)(param_1 + 0x3b) = 0x2b2;
  param_1[0x3e] = "MEnginespeed";
  param_1[0x40] = &LAB_14256be20;
  param_1[0x41] = &LAB_14397feb0;
  *(undefined4 *)(param_1 + 0x3f) = 0x2b3;
  param_1[0x42] = "MGearSwitchTime";
  param_1[0x44] = FUN_14256bd80;
  param_1[0x45] = FUN_142cc97a0;
  *(undefined4 *)(param_1 + 0x43) = 0x2b4;
  param_1[0x46] = "MAutoBoxSwitchTime";
  param_1[0x48] = &LAB_140e4cd50;
  param_1[0x49] = UCameraAnimInst::SetScale;
  *(undefined4 *)(param_1 + 0x47) = 0x2b5;
  return param_1;
}



// FUNCTION 14397e680 PxVehicleDriveSimDataGeneratedValues body=337 status=ok
// SIG undefined PxVehicleDriveSimDataGeneratedValues(void)

void * physx::PxVehicleDriveSimDataGeneratedValues::PxVehicleDriveSimDataGeneratedValues
                 (void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  ::_guard_xfg_dispatch_icall_nop
            (param_1,param_2,(ulonglong)(uint)(*(int *)((longlong)param_2 + 0x40) << 3));
  lVar3 = 2;
  *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)((longlong)param_1 + 0x58) = *(undefined4 *)((longlong)param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)((longlong)param_1 + 0x68) = *(undefined4 *)((longlong)param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x78);
  *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x88);
  *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
  *(undefined8 *)((longlong)param_1 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x98);
  *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xa8);
  *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
  *(undefined8 *)((longlong)param_1 + 0xa8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xb8);
  *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_2 + 0xb0);
  *(undefined8 *)((longlong)param_1 + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 200);
  *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
  *(undefined8 *)((longlong)param_1 + 200) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xd8);
  *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)((longlong)param_2 + 0xd0);
  *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xe8);
  *(undefined8 *)((longlong)param_1 + 0xe0) = *(undefined8 *)((longlong)param_2 + 0xe0);
  *(undefined8 *)((longlong)param_1 + 0xe8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xf8);
  *(undefined8 *)((longlong)param_1 + 0xf0) = *(undefined8 *)((longlong)param_2 + 0xf0);
  *(undefined8 *)((longlong)param_1 + 0xf8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x108);
  *(undefined8 *)((longlong)param_1 + 0x100) = *(undefined8 *)((longlong)param_2 + 0x100);
  *(undefined8 *)((longlong)param_1 + 0x108) = uVar1;
  puVar2 = (undefined8 *)((longlong)param_1 + 0x110);
  puVar4 = (undefined8 *)((longlong)param_2 + 0x110);
  do {
    uVar1 = puVar4[1];
    *puVar2 = *puVar4;
    puVar2[1] = uVar1;
    uVar1 = puVar4[3];
    puVar2[2] = puVar4[2];
    puVar2[3] = uVar1;
    uVar1 = puVar4[5];
    puVar2[4] = puVar4[4];
    puVar2[5] = uVar1;
    uVar1 = puVar4[7];
    puVar2[6] = puVar4[6];
    puVar2[7] = uVar1;
    uVar1 = puVar4[9];
    puVar2[8] = puVar4[8];
    puVar2[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar2[10] = puVar4[10];
    puVar2[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar2[0xc] = puVar4[0xc];
    puVar2[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar2[0xe] = puVar4[0xe];
    puVar2[0xf] = uVar1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x10;
    puVar4 = puVar4 + 0x10;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 14397e7e0 PxVehicleDriveSimDataGeneratedInfo body=163 status=ok
// SIG undefined PxVehicleDriveSimDataGeneratedInfo(void)

undefined8 *
physx::PxVehicleDriveSimDataGeneratedInfo::PxVehicleDriveSimDataGeneratedInfo(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x2b8;
  *param_1 = "EngineData";
  param_1[2] = getPxVehicleDriveSimData_EngineData;
  param_1[3] = &LAB_14397f8c0;
  param_1[4] = "GearsData";
  param_1[6] = &LAB_14397f950;
  param_1[7] = &LAB_14397f940;
  *(undefined4 *)(param_1 + 5) = 0x2b9;
  param_1[8] = "ClutchData";
  param_1[10] = &LAB_14397f9d0;
  param_1[0xb] = &LAB_14397f9c0;
  *(undefined4 *)(param_1 + 9) = 0x2ba;
  param_1[0xc] = "AutoBoxData";
  param_1[0xe] = &LAB_14397fa00;
  param_1[0xf] = &LAB_14397f9f0;
  *(undefined4 *)(param_1 + 0xd) = 699;
  return param_1;
}



// FUNCTION 14397e890 PxVehicleDriveSimData4WGeneratedValues body=77 status=ok
// SIG undefined PxVehicleDriveSimData4WGeneratedValues(void)

longlong physx::PxVehicleDriveSimData4WGeneratedValues::PxVehicleDriveSimData4WGeneratedValues
                   (longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  PxVehicleDriveSimDataGeneratedValues::PxVehicleDriveSimDataGeneratedValues();
  uVar1 = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x228) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x238) = uVar1;
  return param_1;
}



// FUNCTION 14397e8f0 PxVehicleDriveSimData4WGeneratedInfo body=267 status=ok
// SIG undefined PxVehicleDriveSimData4WGeneratedInfo(void)

undefined8 *
physx::PxVehicleDriveSimData4WGeneratedInfo::PxVehicleDriveSimData4WGeneratedInfo
          (undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x2b8;
  *param_1 = "EngineData";
  param_1[2] = getPxVehicleDriveSimData_EngineData;
  param_1[3] = &LAB_14397f8c0;
  param_1[4] = "GearsData";
  param_1[6] = &LAB_14397f950;
  param_1[7] = &LAB_14397f940;
  *(undefined4 *)(param_1 + 5) = 0x2b9;
  param_1[8] = "ClutchData";
  param_1[10] = &LAB_14397f9d0;
  param_1[0xb] = &LAB_14397f9c0;
  *(undefined4 *)(param_1 + 9) = 0x2ba;
  param_1[0xc] = "AutoBoxData";
  param_1[0xe] = &LAB_14397fa00;
  param_1[0xf] = &LAB_14397f9f0;
  *(undefined4 *)(param_1 + 0xd) = 699;
  param_1[0x10] = "DiffData";
  param_1[0x12] = &LAB_14397fa90;
  param_1[0x13] = &LAB_14397fa80;
  *(undefined4 *)(param_1 + 0x11) = 0x2be;
  param_1[0x14] = "AckermannGeometryData";
  param_1[0x16] = &LAB_14397fac0;
  param_1[0x17] = &LAB_14397fab0;
  *(undefined4 *)(param_1 + 0x15) = 0x2bf;
  return param_1;
}



// FUNCTION 14397ea10 PxVehicleDriveGeneratedValues body=135 status=ok
// SIG undefined PxVehicleDriveGeneratedValues(void)

longlong physx::PxVehicleDriveGeneratedValues::PxVehicleDriveGeneratedValues
                   (longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  PxVehicleWheelsGeneratedValues::PxVehicleWheelsGeneratedValues();
  uVar2 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  lVar1 = param_2[0x19];
  *(longlong *)(param_1 + 0xb0) = param_2[0x18];
  *(longlong *)(param_1 + 0xb8) = lVar1;
  lVar1 = param_2[0x1b];
  *(longlong *)(param_1 + 0xc0) = param_2[0x1a];
  *(longlong *)(param_1 + 200) = lVar1;
  lVar1 = param_2[0x1d];
  *(longlong *)(param_1 + 0xd0) = param_2[0x1c];
  *(longlong *)(param_1 + 0xd8) = lVar1;
  lVar1 = param_2[0x1f];
  *(longlong *)(param_1 + 0xe0) = param_2[0x1e];
  *(longlong *)(param_1 + 0xe8) = lVar1;
  lVar1 = param_2[0x21];
  *(longlong *)(param_1 + 0xf0) = param_2[0x20];
  *(longlong *)(param_1 + 0xf8) = lVar1;
  lVar1 = param_2[0x23];
  *(longlong *)(param_1 + 0x100) = param_2[0x22];
  *(longlong *)(param_1 + 0x108) = lVar1;
  return param_1;
}



// FUNCTION 14397eaa0 PxVehicleDriveGeneratedInfo body=113 status=ok
// SIG undefined PxVehicleDriveGeneratedInfo(void)

longlong physx::PxVehicleDriveGeneratedInfo::PxVehicleDriveGeneratedInfo(longlong param_1)

{
  PxVehicleWheelsGeneratedInfo::PxVehicleWheelsGeneratedInfo();
  *(undefined4 *)(param_1 + 0x90) = 0x2c2;
  *(char **)(param_1 + 0x88) = "ConcreteTypeName";
  *(undefined1 **)(param_1 + 0x98) = &LAB_14397fae0;
  *(char **)(param_1 + 0xa0) = "MDriveDynData";
  *(undefined1 **)(param_1 + 0xb0) = &LAB_14397fcb0;
  *(undefined1 **)(param_1 + 0xb8) = &LAB_14397fef0;
  *(undefined4 *)(param_1 + 0xa8) = 0x2c3;
  return param_1;
}



// FUNCTION 14397eb20 PxVehicleDrive4WGeneratedValues body=122 status=ok
// SIG undefined PxVehicleDrive4WGeneratedValues(void)

longlong physx::PxVehicleDrive4WGeneratedValues::PxVehicleDrive4WGeneratedValues
                   (longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  PxVehicleDriveGeneratedValues::PxVehicleDriveGeneratedValues();
  uVar2 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  PxVehicleDriveSimData::PxVehicleDriveSimData(param_1 + 0x118,param_2 + 0x24);
  lVar1 = param_2[0x67];
  *(longlong *)(param_1 + 0x328) = param_2[0x66];
  *(longlong *)(param_1 + 0x330) = lVar1;
  lVar1 = param_2[0x69];
  *(longlong *)(param_1 + 0x338) = param_2[0x68];
  *(longlong *)(param_1 + 0x340) = lVar1;
  lVar1 = param_2[0x6b];
  *(longlong *)(param_1 + 0x348) = param_2[0x6a];
  *(longlong *)(param_1 + 0x350) = lVar1;
  return param_1;
}



// FUNCTION 14397eba0 PxVehicleDrive4WGeneratedInfo body=113 status=ok
// SIG undefined PxVehicleDrive4WGeneratedInfo(void)

longlong physx::PxVehicleDrive4WGeneratedInfo::PxVehicleDrive4WGeneratedInfo(longlong param_1)

{
  PxVehicleDriveGeneratedInfo::PxVehicleDriveGeneratedInfo();
  *(undefined4 *)(param_1 + 200) = 0x2c6;
  *(char **)(param_1 + 0xc0) = "ConcreteTypeName";
  *(undefined1 **)(param_1 + 0xd0) = &LAB_14397faf0;
  *(char **)(param_1 + 0xd8) = "MDriveSimData";
  *(code **)(param_1 + 0xe8) = getPxVehicleDrive4WMDriveSimData;
  *(code **)(param_1 + 0xf0) = setPxVehicleDrive4WMDriveSimData;
  *(undefined4 *)(param_1 + 0xe0) = 0x2c7;
  return param_1;
}



// FUNCTION 14397ec20 PxVehicleDriveTankGeneratedValues body=82 status=ok
// SIG undefined PxVehicleDriveTankGeneratedValues(void)

longlong physx::PxVehicleDriveTankGeneratedValues::PxVehicleDriveTankGeneratedValues
                   (longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  PxVehicleDriveGeneratedValues::PxVehicleDriveGeneratedValues();
  *(int *)(param_1 + 0x110) = (int)param_2[0x66];
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  PxVehicleDriveSimData::PxVehicleDriveSimData(param_1 + 0x120,param_2 + 0x24);
  return param_1;
}



// FUNCTION 14397ec80 PxVehicleDriveTankGeneratedInfo body=165 status=ok
// SIG undefined PxVehicleDriveTankGeneratedInfo(void)

longlong physx::PxVehicleDriveTankGeneratedInfo::PxVehicleDriveTankGeneratedInfo(longlong param_1)

{
  PxVehicleDriveGeneratedInfo::PxVehicleDriveGeneratedInfo();
  *(undefined4 *)(param_1 + 200) = 0x2ca;
  *(char **)(param_1 + 0xc0) = "DriveModel";
  *(undefined1 **)(param_1 + 0xd0) = &LAB_14397fb10;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_14397fb00;
  *(char **)(param_1 + 0xe0) = "ConcreteTypeName";
  *(undefined1 **)(param_1 + 0xf0) = &LAB_14397fb20;
  *(undefined4 *)(param_1 + 0xe8) = 0x2cb;
  *(char **)(param_1 + 0xf8) = "MDriveSimData";
  *(code **)(param_1 + 0x108) = getPxVehicleDriveTankMDriveSimData;
  *(undefined1 **)(param_1 + 0x110) = &LAB_14397ff80;
  *(undefined4 *)(param_1 + 0x100) = 0x2cc;
  return param_1;
}



// FUNCTION 14397ed30 PxVehicleDriveSimDataNWGeneratedValues body=49 status=ok
// SIG undefined PxVehicleDriveSimDataNWGeneratedValues(void)

longlong physx::PxVehicleDriveSimDataNWGeneratedValues::PxVehicleDriveSimDataNWGeneratedValues
                   (longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  PxVehicleDriveSimDataGeneratedValues::PxVehicleDriveSimDataGeneratedValues();
  uVar1 = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  return param_1;
}



// FUNCTION 14397ed70 PxVehicleDriveSimDataNWGeneratedInfo body=215 status=ok
// SIG undefined PxVehicleDriveSimDataNWGeneratedInfo(void)

undefined8 *
physx::PxVehicleDriveSimDataNWGeneratedInfo::PxVehicleDriveSimDataNWGeneratedInfo
          (undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x2b8;
  *param_1 = "EngineData";
  param_1[2] = getPxVehicleDriveSimData_EngineData;
  param_1[3] = &LAB_14397f8c0;
  param_1[4] = "GearsData";
  param_1[6] = &LAB_14397f950;
  param_1[7] = &LAB_14397f940;
  *(undefined4 *)(param_1 + 5) = 0x2b9;
  param_1[8] = "ClutchData";
  param_1[10] = &LAB_14397f9d0;
  param_1[0xb] = &LAB_14397f9c0;
  *(undefined4 *)(param_1 + 9) = 0x2ba;
  param_1[0xc] = "AutoBoxData";
  param_1[0xe] = &LAB_14397fa00;
  param_1[0xf] = &LAB_14397f9f0;
  *(undefined4 *)(param_1 + 0xd) = 699;
  param_1[0x10] = "DiffData";
  param_1[0x12] = &LAB_14397fb40;
  param_1[0x13] = &LAB_14397fb30;
  *(undefined4 *)(param_1 + 0x11) = 0x2cf;
  return param_1;
}



// FUNCTION 14397ee50 PxVehicleDriveNWGeneratedValues body=94 status=ok
// SIG undefined PxVehicleDriveNWGeneratedValues(void)

longlong physx::PxVehicleDriveNWGeneratedValues::PxVehicleDriveNWGeneratedValues
                   (longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  PxVehicleDriveGeneratedValues::PxVehicleDriveGeneratedValues();
  uVar2 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  PxVehicleDriveSimData::PxVehicleDriveSimData(param_1 + 0x118,param_2 + 0x24);
  lVar1 = param_2[0x67];
  *(longlong *)(param_1 + 0x328) = param_2[0x66];
  *(longlong *)(param_1 + 0x330) = lVar1;
  return param_1;
}



// FUNCTION 14397eec0 PxVehicleDriveNWGeneratedInfo body=113 status=ok
// SIG undefined PxVehicleDriveNWGeneratedInfo(void)

longlong physx::PxVehicleDriveNWGeneratedInfo::PxVehicleDriveNWGeneratedInfo(longlong param_1)

{
  PxVehicleDriveGeneratedInfo::PxVehicleDriveGeneratedInfo();
  *(undefined4 *)(param_1 + 200) = 0x2d2;
  *(char **)(param_1 + 0xc0) = "ConcreteTypeName";
  *(undefined1 **)(param_1 + 0xd0) = &LAB_14397fb60;
  *(char **)(param_1 + 0xd8) = "MDriveSimData";
  *(code **)(param_1 + 0xe8) = getPxVehicleDriveNWMDriveSimData;
  *(code **)(param_1 + 0xf0) = setPxVehicleDriveNWMDriveSimData;
  *(undefined4 *)(param_1 + 0xe0) = 0x2d3;
  return param_1;
}



// FUNCTION 14397ef40 PxVehicleNoDriveGeneratedValues body=51 status=ok
// SIG undefined PxVehicleNoDriveGeneratedValues(void)

longlong physx::PxVehicleNoDriveGeneratedValues::PxVehicleNoDriveGeneratedValues
                   (longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  PxVehicleWheelsGeneratedValues::PxVehicleWheelsGeneratedValues();
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  return param_1;
}



// FUNCTION 14397ef80 PxVehicleNoDriveGeneratedInfo body=259 status=ok
// SIG undefined PxVehicleNoDriveGeneratedInfo(void)

longlong physx::PxVehicleNoDriveGeneratedInfo::PxVehicleNoDriveGeneratedInfo(longlong param_1)

{
  PxVehicleWheelsGeneratedInfo::PxVehicleWheelsGeneratedInfo();
  *(undefined4 *)(param_1 + 0x90) = 0x2d6;
  *(char **)(param_1 + 0x88) = "BrakeTorque";
  *(undefined1 **)(param_1 + 0x98) = &LAB_14397fb90;
  *(undefined1 **)(param_1 + 0xa0) = &LAB_14397fb70;
  *(undefined1 **)(param_1 + 0xb0) = &LAB_14397fb80;
  *(char **)(param_1 + 0xb8) = "DriveTorque";
  *(undefined1 **)(param_1 + 200) = &LAB_14397fbc0;
  *(undefined1 **)(param_1 + 0xd0) = &LAB_14397fba0;
  *(undefined1 **)(param_1 + 0xe0) = &LAB_14397fbb0;
  *(undefined4 *)(param_1 + 0xc0) = 0x2d7;
  *(char **)(param_1 + 0xe8) = "SteerAngle";
  *(undefined1 **)(param_1 + 0xf8) = &LAB_14397fbf0;
  *(undefined1 **)(param_1 + 0x100) = &LAB_14397fbd0;
  *(undefined1 **)(param_1 + 0x110) = &LAB_14397fbe0;
  *(undefined4 *)(param_1 + 0xf0) = 0x2d8;
  *(char **)(param_1 + 0x118) = "ConcreteTypeName";
  *(undefined1 **)(param_1 + 0x128) = &LAB_14397fc00;
  *(undefined4 *)(param_1 + 0x120) = 0x2d9;
  return param_1;
}



// FUNCTION 14397f240 getPxVehicleWheelsSimData_SuspensionData body=54 status=ok
// SIG undefined getPxVehicleWheelsSimData_SuspensionData(void)

undefined8 *
getPxVehicleWheelsSimData_SuspensionData(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)physx::PxVehicleWheelsSimData::getSuspensionData(param_2,param_3);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_1 = *puVar5;
  param_1[1] = uVar1;
  uVar1 = puVar5[4];
  uVar4 = puVar5[5];
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  return param_1;
}



// FUNCTION 14397f2a0 getPxVehicleWheelsSimData_WheelData body=54 status=ok
// SIG undefined getPxVehicleWheelsSimData_WheelData(void)

undefined8 *
getPxVehicleWheelsSimData_WheelData(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)physx::PxVehicleWheelsSimData::getWheelData(param_2,param_3);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_1 = *puVar5;
  param_1[1] = uVar1;
  uVar1 = puVar5[4];
  uVar4 = puVar5[5];
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  return param_1;
}



// FUNCTION 14397f300 getPxVehicleWheelsSimData_TireData body=62 status=ok
// SIG undefined getPxVehicleWheelsSimData_TireData(void)

undefined8 *
getPxVehicleWheelsSimData_TireData(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)physx::PxVehicleWheelsSimData::getTireData(param_2,param_3);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_1 = *puVar5;
  param_1[1] = uVar1;
  uVar1 = puVar5[4];
  uVar4 = puVar5[5];
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar2 = puVar5[6];
  uVar3 = puVar5[7];
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return param_1;
}



// FUNCTION 14397f370 getPxVehicleWheelsSimData_SuspTravelDirection body=48 status=ok
// SIG undefined getPxVehicleWheelsSimData_SuspTravelDirection(void)

undefined4 *
getPxVehicleWheelsSimData_SuspTravelDirection
          (undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)physx::PxVehicleWheelsSimData::getSuspTravelDirection(param_2,param_3);
  *param_1 = *puVar2;
  uVar1 = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 14397f3d0 getPxVehicleWheelsSimData_SuspForceAppPointOffset body=48 status=ok
// SIG undefined getPxVehicleWheelsSimData_SuspForceAppPointOffset(void)

undefined4 *
getPxVehicleWheelsSimData_SuspForceAppPointOffset
          (undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)physx::PxVehicleWheelsSimData::getSuspForceAppPointOffset(param_2,param_3);
  *param_1 = *puVar2;
  uVar1 = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 14397f430 getPxVehicleWheelsSimData_TireForceAppPointOffset body=48 status=ok
// SIG undefined getPxVehicleWheelsSimData_TireForceAppPointOffset(void)

undefined4 *
getPxVehicleWheelsSimData_TireForceAppPointOffset
          (undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)physx::PxVehicleWheelsSimData::getTireForceAppPointOffset(param_2,param_3);
  *param_1 = *puVar2;
  uVar1 = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 14397f490 getPxVehicleWheelsSimData_WheelCentreOffset body=48 status=ok
// SIG undefined getPxVehicleWheelsSimData_WheelCentreOffset(void)

undefined4 *
getPxVehicleWheelsSimData_WheelCentreOffset
          (undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)physx::PxVehicleWheelsSimData::getWheelCentreOffset(param_2,param_3);
  *param_1 = *puVar2;
  uVar1 = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 14397f520 getPxVehicleWheelsSimData_SceneQueryFilterData body=38 status=ok
// SIG undefined getPxVehicleWheelsSimData_SceneQueryFilterData(void)

undefined8 *
getPxVehicleWheelsSimData_SceneQueryFilterData
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)physx::PxVehicleWheelsSimData::getSceneQueryFilterData(param_2,param_3);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 14397f570 getPxVehicleWheelsSimData_AntiRollBarData body=38 status=ok
// SIG undefined getPxVehicleWheelsSimData_AntiRollBarData(void)

undefined8 *
getPxVehicleWheelsSimData_AntiRollBarData(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)physx::PxVehicleWheelsSimData::getAntiRollBarData(param_2,param_3);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 14397f670 getPxVehicleWheelsSimData_WheelEnabledState body=19 status=ok
// SIG undefined getPxVehicleWheelsSimData_WheelEnabledState(void)

bool getPxVehicleWheelsSimData_WheelEnabledState(void)

{
  char cVar1;
  
  cVar1 = physx::PxVehicleWheelsSimData::getIsWheelDisabled();
  return cVar1 == '\0';
}



// FUNCTION 14397f8d0 getPxVehicleDriveSimData_EngineData body=97 status=ok
// SIG undefined getPxVehicleDriveSimData_EngineData(void)

void * getPxVehicleDriveSimData_EngineData(void *param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop
            (param_1,param_2,(ulonglong)(uint)(*(int *)((longlong)param_2 + 0x40) << 3));
  *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)((longlong)param_1 + 0x58) = *(undefined4 *)((longlong)param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)((longlong)param_1 + 0x68) = *(undefined4 *)((longlong)param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  return param_1;
}



// FUNCTION 14397fc50 getPxVehicleDrive4WMDriveSimData body=84 status=ok
// SIG undefined getPxVehicleDrive4WMDriveSimData(void)

longlong getPxVehicleDrive4WMDriveSimData(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  physx::PxVehicleDriveSimData::PxVehicleDriveSimData(param_1,param_2 + 0x120);
  uVar1 = *(undefined8 *)(param_2 + 0x338);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x330);
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x348);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x228) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x358);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x238) = uVar1;
  return param_1;
}



// FUNCTION 14397fd00 getPxVehicleDriveNWMDriveSimData body=56 status=ok
// SIG undefined getPxVehicleDriveNWMDriveSimData(void)

longlong getPxVehicleDriveNWMDriveSimData(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  physx::PxVehicleDriveSimData::PxVehicleDriveSimData(param_1,param_2 + 0x120);
  uVar1 = *(undefined8 *)(param_2 + 0x338);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x330);
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  return param_1;
}



// FUNCTION 14397fd40 getPxVehicleDriveTankMDriveSimData body=30 status=ok
// SIG undefined getPxVehicleDriveTankMDriveSimData(void)

undefined8 getPxVehicleDriveTankMDriveSimData(undefined8 param_1,longlong param_2)

{
  physx::PxVehicleDriveSimData::PxVehicleDriveSimData(param_1,param_2 + 0x120);
  return param_1;
}



// FUNCTION 14397fe50 setPxVehicleDrive4WMDriveSimData body=81 status=ok
// SIG undefined setPxVehicleDrive4WMDriveSimData(void)

void setPxVehicleDrive4WMDriveSimData(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  physx::PxVehicleDriveSimData::PxVehicleDriveSimData(param_1 + 0x120);
  uVar1 = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x338) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x348) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x358) = uVar1;
  return;
}



// FUNCTION 14397ff40 setPxVehicleDriveNWMDriveSimData body=53 status=ok
// SIG undefined setPxVehicleDriveNWMDriveSimData(void)

void setPxVehicleDriveNWMDriveSimData(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  physx::PxVehicleDriveSimData::PxVehicleDriveSimData(param_1 + 0x120);
  uVar1 = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x338) = uVar1;
  return;
}



// FUNCTION 143980030 PxVehicleDrive4W body=104 status=ok
// SIG undefined PxVehicleDrive4W(void)

undefined8 * physx::PxVehicleDrive4W::PxVehicleDrive4W(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x30201;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3e6c56d6;
  *(undefined4 *)(param_1 + 3) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x40400000;
  *(undefined4 *)(param_1 + 4) = 0x3eaaaaab;
  *param_1 = &PTR_LAB_145ca76c0;
  PxVehicleDriveDynData::PxVehicleDriveDynData(param_1 + 0x18);
  *param_1 = &PTR_LAB_145ca7750;
  PxVehicleDriveSimData4W::PxVehicleDriveSimData4W(param_1 + 0x24);
  return param_1;
}



// FUNCTION 1439800a0 PxVehicleDriveTank body=114 status=ok
// SIG undefined PxVehicleDriveTank(void)

undefined8 * physx::PxVehicleDriveTank::PxVehicleDriveTank(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x30203;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3e6c56d6;
  *(undefined4 *)(param_1 + 3) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x40400000;
  *(undefined4 *)(param_1 + 4) = 0x3eaaaaab;
  *param_1 = &PTR_LAB_145ca76c0;
  PxVehicleDriveDynData::PxVehicleDriveDynData(param_1 + 0x18);
  *param_1 = &PTR_LAB_145ca77d0;
  FUN_1430c8370(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x66) = 0;
  return param_1;
}



// FUNCTION 143980120 PxVehicleDriveNW body=128 status=ok
// SIG undefined PxVehicleDriveNW(void)

undefined8 * physx::PxVehicleDriveNW::PxVehicleDriveNW(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x30202;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3e6c56d6;
  *(undefined4 *)(param_1 + 3) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x40400000;
  *(undefined4 *)(param_1 + 4) = 0x3eaaaaab;
  *param_1 = &PTR_LAB_145ca76c0;
  PxVehicleDriveDynData::PxVehicleDriveDynData(param_1 + 0x18);
  *param_1 = &PTR_LAB_145ca7790;
  FUN_1430c8370(param_1 + 0x24);
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  return param_1;
}



// FUNCTION 1439801b0 PxVehicleNoDrive body=56 status=ok
// SIG undefined PxVehicleNoDrive(void)

undefined8 * physx::PxVehicleNoDrive::PxVehicleNoDrive(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x30200;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3e6c56d6;
  *(undefined4 *)(param_1 + 3) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x40400000;
  *(undefined4 *)(param_1 + 4) = 0x3eaaaaab;
  *param_1 = &PTR_LAB_145ca7710;
  return param_1;
}



// FUNCTION 1439801f0 readAllProperties<physx::PxVehicleDriveSimData4W> body=464 status=ok
// SIG undefined readAllProperties<physx::PxVehicleDriveSimData4W>(void)

bool physx::Sn::readAllProperties<physx::PxVehicleDriveSimData4W>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_198;
  longlong local_190;
  ulonglong local_188;
  undefined8 *local_180;
  longlong local_178;
  ulonglong local_170;
  undefined8 **local_168;
  undefined8 **local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined1 local_120;
  char *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8 [128];
  undefined1 local_78 [32];
  undefined1 local_58 [64];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_180 = &local_res10;
  local_178 = 0;
  local_198 = &local_res10;
  local_170 = 0;
  local_190 = 0;
  local_188 = 0;
  PxVehicleDriveSimData4WGeneratedInfo::PxVehicleDriveSimData4WGeneratedInfo(local_f8);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_168 = &local_180;
  uVar1 = param_1[2];
  local_160 = &local_198;
  local_res8[0] = '\0';
  local_118 = local_res8;
  local_128 = param_5;
  local_120 = 1;
  local_110 = 0;
  uStack_108 = 0;
  local_158 = uVar2;
  uStack_150 = uVar3;
  local_148 = uVar1;
  local_140 = param_2;
  local_138 = param_3;
  local_130 = param_4;
  PxVehicleDriveSimData4WGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>_>
            (local_f8,&local_168,0);
  local_168 = &local_180;
  local_160 = &local_198;
  local_118 = local_res8;
  local_128 = param_5;
  local_120 = 1;
  local_110 = 0;
  uStack_108 = 0;
  local_158 = uVar2;
  uStack_150 = uVar3;
  local_148 = uVar1;
  local_140 = param_2;
  local_138 = param_3;
  local_130 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
  operator()<702,physx::PxVehicleDriveSimData4W,physx::PxVehicleDifferential4WData_const_&___ptr64,physx::PxVehicleDifferential4WData>
            (&local_168,local_78,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
  operator()<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData>
            (&local_168,local_58,1);
  bVar4 = local_res8[0] == '\0';
  if ((((local_188 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_188)) && (local_190 != 0)) {
    (**(code **)(*(longlong *)*local_198 + 0x10))();
  }
  if ((((local_170 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_170)) && (local_178 != 0)) {
    (**(code **)(*(longlong *)*local_180 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 1439803c0 readAllProperties<physx::PxVehicleWheelsSimData> body=338 status=ok
// SIG undefined readAllProperties<physx::PxVehicleWheelsSimData>(void)

bool physx::Sn::readAllProperties<physx::PxVehicleWheelsSimData>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  bool bVar1;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_388;
  longlong local_380;
  ulonglong local_378;
  undefined8 *local_370;
  longlong local_368;
  ulonglong local_360;
  undefined8 **local_358;
  undefined8 **local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  longlong *local_320;
  undefined8 local_318;
  undefined1 local_310;
  char *local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 local_2e8 [720];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_370 = &local_res10;
  local_368 = 0;
  local_388 = &local_res10;
  local_360 = 0;
  local_380 = 0;
  local_378 = 0;
  PxVehicleWheelsSimDataGeneratedInfo::PxVehicleWheelsSimDataGeneratedInfo(local_2e8);
  local_348 = *param_1;
  uStack_340 = param_1[1];
  local_358 = &local_370;
  local_338 = param_1[2];
  local_350 = &local_388;
  local_res8[0] = '\0';
  local_318 = param_5;
  local_308 = local_res8;
  local_310 = 1;
  local_300 = 0;
  uStack_2f8 = 0;
  local_330 = param_2;
  local_328 = param_3;
  local_320 = param_4;
  PxVehicleWheelsSimDataGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>_>
            (local_2e8,&local_358,0);
  bVar1 = local_res8[0] == '\0';
  if ((((local_378 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_378)) && (local_380 != 0)) {
    (**(code **)(*(longlong *)*local_388 + 0x10))();
  }
  if ((((local_360 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_360)) && (local_368 != 0)) {
    (**(code **)(*(longlong *)*local_370 + 0x10))();
  }
  return bVar1;
}



// FUNCTION 143980520 writeReference<physx::PxRigidDynamic> body=190 status=ok
// SIG undefined writeReference<physx::PxRigidDynamic>(void)

void physx::Sn::writeReference<physx::PxRigidDynamic>
               (longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  Foundation *this;
  char *local_28;
  longlong local_20;
  longlong local_18;
  
  if (param_4 != 0) {
    cVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_4);
    if (cVar1 == '\0') {
      this = physx::shdfnd::Foundation::getInstance();
      physx::shdfnd::Foundation::error
                (this,0x20,
                 "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\serialization\\xml\\SnXmlVisitorWriter.h"
                 ,0x31,
                 "PxSerialization::serializeCollectionToXml: Reference \"%s\" could not be resolved."
                 ,param_3);
    }
  }
  local_18 = 0;
  if (param_4 != 0) {
    local_18 = (**(code **)(*param_2 + 0x68))(param_2,param_4);
    if (local_18 == 0) {
      local_18 = param_4;
    }
  }
  local_28 = "PxRigidDynamic";
  local_20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,param_3,&local_28);
  return;
}



// FUNCTION 1439805e0 PxVehicleDriveSimData4W body=104 status=ok
// SIG undefined PxVehicleDriveSimData4W(void)

longlong physx::PxVehicleDriveSimData4W::PxVehicleDriveSimData4W(longlong param_1)

{
  FUN_1430c8370();
  *(undefined4 *)(param_1 + 0x210) = 0x3ee66666;
  *(undefined4 *)(param_1 + 0x214) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x218) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x21c) = 0x3fa66666;
  *(undefined4 *)(param_1 + 0x220) = 0x3fa66666;
  *(undefined8 *)(param_1 + 0x224) = 0x3fa66666;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0x3f800000;
  return param_1;
}



// FUNCTION 143980650 fileToObject body=1053 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxVehicleRepXSerializer<physx::PxVehicleDrive4W>::fileToObject
          (undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5,longlong *param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulong uVar5;
  ulonglong uVar6;
  void *_Memory;
  longlong lVar7;
  Foundation *this;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulong local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  char *local_4e8;
  ulonglong local_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 local_4c8;
  char *local_4b8;
  char *local_4b0;
  undefined1 local_4a8 [528];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_258 [544];
  
  local_res20 = param_4;
  cVar4 = (**(code **)(*param_3 + 0x10))(param_3,"PxRigidDynamicRef",&local_res18);
  if ((((cVar4 != '\0') &&
       (local_4e8 = (char *)CONCAT44(uStackX_1c,local_res18), local_4e8 != (char *)0x0)) &&
      (*local_4e8 != '\0')) &&
     ((uVar6 = _strtoui64(local_4e8,&local_4e8,10), uVar6 != 0 &&
      (local_4e0 = Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar6), local_4e0 != 0))))
  {
    cVar4 = (**(code **)(*param_3 + 0x10))(param_3,"NumWheels",&local_res18);
    if (((cVar4 != '\0') &&
        (local_4e8 = (char *)CONCAT44(uStackX_1c,local_res18), local_4e8 != (char *)0x0)) &&
       (*local_4e8 != '\0')) {
      uVar5 = strtoul(local_4e8,&local_4e8,10);
      local_4e8 = (char *)CONCAT44(local_4e8._4_4_,uVar5);
      if (uVar5 != 0) {
        uVar6 = 0;
        local_res18 = 0;
        cVar4 = (**(code **)(*param_3 + 0x10))(param_3,"NumNonDrivenWheels",&local_4b8);
        if (((cVar4 != '\0') && (local_4b0 = local_4b8, local_4b8 != (char *)0x0)) &&
           (*local_4b8 != '\0')) {
          local_res18 = strtoul(local_4b8,&local_4b0,10);
        }
        _Memory = (void *)PxVehicleWheelsSimData::allocate(uVar5);
        (**(code **)(*param_3 + 0x58))(param_3);
        cVar4 = (**(code **)(*param_3 + 0x18))(param_3,"MWheelsSimData");
        if (cVar4 != '\0') {
          local_4d8 = *(undefined4 *)param_5;
          uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
          uStack_4d0 = *(undefined4 *)(param_5 + 1);
          uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
          local_4c8 = param_5[2];
          Sn::readAllProperties<physx::PxVehicleWheelsSimData>
                    (&local_4d8,param_3,_Memory,param_4,param_6);
        }
        (**(code **)(*param_3 + 0x60))(param_3);
        FUN_1430c8370(local_4a8);
        local_298 = 0x3f0000003ee66666;
        uStack_290 = 0x3fa666663f000000;
        local_278 = 0x3f800000;
        uStack_274 = 0;
        uStack_270 = 0;
        uStack_26c = 0;
        local_288 = 0x3fa66666;
        local_284 = 0x3fa66666;
        (**(code **)(*param_3 + 0x58))(param_3);
        cVar4 = (**(code **)(*param_3 + 0x18))(param_3,"MDriveSimData");
        if (cVar4 != '\0') {
          local_4d8 = *(undefined4 *)param_5;
          uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
          uStack_4d0 = *(undefined4 *)(param_5 + 1);
          uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
          local_4c8 = param_5[2];
          Sn::readAllProperties<physx::PxVehicleDriveSimData4W>
                    (&local_4d8,param_3,local_4a8,param_4,param_6);
        }
        (**(code **)(*param_3 + 0x60))(param_3);
        FUN_1430c8370(local_258);
        (**(code **)(*param_3 + 0x58))(param_3);
        cVar4 = (**(code **)(*param_3 + 0x18))(param_3,"MDriveSimDataNW");
        if (cVar4 != '\0') {
          local_4d8 = *(undefined4 *)param_5;
          uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
          uStack_4d0 = *(undefined4 *)(param_5 + 1);
          uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
          local_4c8 = param_5[2];
          Sn::readAllProperties<physx::PxVehicleDriveSimData4W>
                    (&local_4d8,param_3,local_4a8,param_4,param_6);
        }
        (**(code **)(*param_3 + 0x60))(param_3);
        uVar1 = *param_5;
        uVar8 = uVar6;
        if (*(short *)(local_4e0 + 8) == 6) {
          uVar8 = local_4e0;
        }
        lVar7 = PxVehicleDrive4W::allocate((ulonglong)local_4e8 & 0xffffffff);
        uVar10 = uVar6;
        if (*(short *)(uVar8 + 8) == 6) {
          uVar10 = uVar8;
        }
        local_4e0 = lVar7;
        PxVehicleDrive4W::setup(lVar7,uVar1,uVar10,_Memory,local_4a8,local_res18);
        local_4d8 = *(undefined4 *)param_5;
        uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_4d0 = *(undefined4 *)(param_5 + 1);
        uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
        local_4c8 = param_5[2];
        Sn::readAllProperties<physx::PxVehicleDrive4W>(&local_4d8,param_3,lVar7,local_res20,param_6)
        ;
        lVar2 = *(longlong *)(lVar7 + 0x70);
        if (*(int *)((longlong)_Memory + 0x28) != 0) {
          do {
            lVar3 = *(longlong *)(*(longlong *)(uVar6 * 0x220 + 0x1d0 + lVar2) + 0x168);
            if (lVar3 != 0) {
              (**(code **)(*param_6 + 8))(param_6,lVar3,0);
            }
            uVar9 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar9;
          } while (uVar9 < *(uint *)((longlong)_Memory + 0x28));
        }
        PxVehicleWheelsSimData::free(_Memory);
        *param_2 = "PxVehicleDrive4W";
        param_2[1] = lVar7;
        param_2[2] = lVar7;
        return param_2;
      }
    }
    this = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (this,4,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSerialization.cpp"
               ,0x70,
               "PxSerialization::createCollectionFromXml: PxVehicleRepXSerializer: Xml field NumWheels is zero!"
              );
    *param_2 = &DAT_145af3922;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  *param_2 = &DAT_145af3922;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 143980a70 fileToObject body=1073 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxVehicleRepXSerializer<physx::PxVehicleDriveNW>::fileToObject
          (undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5,longlong *param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  char *_String;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  ulonglong uVar7;
  void *_Memory;
  longlong lVar8;
  Foundation *this;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulong local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  char *local_4e8;
  ulonglong local_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 local_4c8;
  char *local_4b8;
  char *local_4b0;
  undefined1 local_4a8 [528];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_258 [528];
  undefined8 local_48;
  undefined4 local_40;
  
  local_res20 = param_4;
  cVar4 = (**(code **)(*param_3 + 0x10))(param_3,"PxRigidDynamicRef",&local_res18);
  if ((((cVar4 != '\0') &&
       (_String = (char *)CONCAT44(uStackX_1c,local_res18), _String != (char *)0x0)) &&
      (*_String != '\0')) &&
     ((uVar7 = _strtoui64(_String,&local_4e8,10), uVar7 != 0 &&
      (local_4e0 = Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar7), local_4e0 != 0))))
  {
    cVar4 = (**(code **)(*param_3 + 0x10))(param_3,"NumWheels",&local_res18);
    if (((cVar4 != '\0') &&
        (local_4e8 = (char *)CONCAT44(uStackX_1c,local_res18), local_4e8 != (char *)0x0)) &&
       ((*local_4e8 != '\0' &&
        (uVar5 = strtoul(local_4e8,&local_4e8,10), local_res18 = uVar5, uVar5 != 0)))) {
      uVar7 = 0;
      local_4e8 = (char *)((ulonglong)local_4e8 & 0xffffffff00000000);
      cVar4 = (**(code **)(*param_3 + 0x10))(param_3,"NumNonDrivenWheels",&local_4b8);
      if (((cVar4 != '\0') && (local_4b0 = local_4b8, local_4b8 != (char *)0x0)) &&
         (*local_4b8 != '\0')) {
        uVar6 = strtoul(local_4b8,&local_4b0,10);
        local_4e8 = (char *)CONCAT44(local_4e8._4_4_,uVar6);
      }
      _Memory = (void *)PxVehicleWheelsSimData::allocate(uVar5);
      (**(code **)(*param_3 + 0x58))(param_3);
      cVar4 = (**(code **)(*param_3 + 0x18))(param_3,"MWheelsSimData");
      if (cVar4 != '\0') {
        local_4d8 = *(undefined4 *)param_5;
        uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_4d0 = *(undefined4 *)(param_5 + 1);
        uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
        local_4c8 = param_5[2];
        Sn::readAllProperties<physx::PxVehicleWheelsSimData>
                  (&local_4d8,param_3,_Memory,param_4,param_6);
      }
      (**(code **)(*param_3 + 0x60))(param_3);
      FUN_1430c8370(local_4a8);
      local_298 = 0x3f0000003ee66666;
      uStack_290 = 0x3fa666663f000000;
      local_278 = 0x3f800000;
      uStack_274 = 0;
      uStack_270 = 0;
      uStack_26c = 0;
      local_288 = 0x3fa66666;
      local_284 = 0x3fa66666;
      (**(code **)(*param_3 + 0x58))(param_3);
      cVar4 = (**(code **)(*param_3 + 0x18))(param_3,"MDriveSimData");
      if (cVar4 != '\0') {
        local_4d8 = *(undefined4 *)param_5;
        uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_4d0 = *(undefined4 *)(param_5 + 1);
        uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
        local_4c8 = param_5[2];
        Sn::readAllProperties<physx::PxVehicleDriveSimData4W>
                  (&local_4d8,param_3,local_4a8,param_4,param_6);
      }
      (**(code **)(*param_3 + 0x60))(param_3);
      FUN_1430c8370(local_258);
      local_48 = 0;
      local_40 = 0;
      (**(code **)(*param_3 + 0x58))(param_3);
      cVar4 = (**(code **)(*param_3 + 0x18))(param_3,"MDriveSimDataNW");
      if (cVar4 != '\0') {
        local_4d8 = *(undefined4 *)param_5;
        uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_4d0 = *(undefined4 *)(param_5 + 1);
        uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
        local_4c8 = param_5[2];
        Sn::readAllProperties<physx::PxVehicleDriveSimData4W>
                  (&local_4d8,param_3,local_4a8,param_4,param_6);
      }
      (**(code **)(*param_3 + 0x60))(param_3);
      uVar1 = *param_5;
      uVar9 = uVar7;
      if (*(short *)(local_4e0 + 8) == 6) {
        uVar9 = local_4e0;
      }
      lVar8 = PxVehicleDriveNW::allocate(local_res18);
      uVar11 = uVar7;
      if (*(short *)(uVar9 + 8) == 6) {
        uVar11 = uVar9;
      }
      local_4e0 = lVar8;
      PxVehicleDriveNW::setup(lVar8,uVar1,uVar11,_Memory,local_258,local_res18 - (int)local_4e8);
      local_4d8 = *(undefined4 *)param_5;
      uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
      uStack_4d0 = *(undefined4 *)(param_5 + 1);
      uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
      local_4c8 = param_5[2];
      Sn::readAllProperties<physx::PxVehicleDriveNW>(&local_4d8,param_3,lVar8,local_res20,param_6);
      lVar2 = *(longlong *)(lVar8 + 0x70);
      if (*(int *)((longlong)_Memory + 0x28) != 0) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(uVar7 * 0x220 + 0x1d0 + lVar2) + 0x168);
          if (lVar3 != 0) {
            (**(code **)(*param_6 + 8))(param_6,lVar3,0);
          }
          uVar10 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)((longlong)_Memory + 0x28));
      }
      PxVehicleWheelsSimData::free(_Memory);
      *param_2 = "PxVehicleDriveNW";
      param_2[1] = lVar8;
      param_2[2] = lVar8;
      return param_2;
    }
    this = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (this,4,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSerialization.cpp"
               ,0x70,
               "PxSerialization::createCollectionFromXml: PxVehicleRepXSerializer: Xml field NumWheels is zero!"
              );
    *param_2 = &DAT_145af3922;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  *param_2 = &DAT_145af3922;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 143980eb0 fileToObject body=1053 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxVehicleRepXSerializer<physx::PxVehicleDriveTank>::fileToObject
          (undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5,longlong *param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  char *_String;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  ulonglong uVar7;
  void *_Memory;
  longlong lVar8;
  Foundation *this;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulong local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  char *local_4e8;
  ulonglong local_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 local_4c8;
  char *local_4b8;
  char *local_4b0;
  undefined1 local_4a8 [528];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_258 [544];
  
  local_res20 = param_4;
  cVar4 = (**(code **)(*param_3 + 0x10))(param_3,"PxRigidDynamicRef",&local_res18);
  if ((((cVar4 != '\0') &&
       (_String = (char *)CONCAT44(uStackX_1c,local_res18), _String != (char *)0x0)) &&
      (*_String != '\0')) &&
     ((uVar7 = _strtoui64(_String,&local_4e8,10), uVar7 != 0 &&
      (local_4e0 = Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar7), local_4e0 != 0))))
  {
    cVar4 = (**(code **)(*param_3 + 0x10))(param_3,"NumWheels",&local_res18);
    if (((cVar4 != '\0') &&
        (local_4e8 = (char *)CONCAT44(uStackX_1c,local_res18), local_4e8 != (char *)0x0)) &&
       ((*local_4e8 != '\0' &&
        (uVar5 = strtoul(local_4e8,&local_4e8,10), local_res18 = uVar5, uVar5 != 0)))) {
      uVar7 = 0;
      local_4e8 = (char *)((ulonglong)local_4e8 & 0xffffffff00000000);
      cVar4 = (**(code **)(*param_3 + 0x10))(param_3,"NumNonDrivenWheels",&local_4b8);
      if (((cVar4 != '\0') && (local_4b0 = local_4b8, local_4b8 != (char *)0x0)) &&
         (*local_4b8 != '\0')) {
        uVar6 = strtoul(local_4b8,&local_4b0,10);
        local_4e8 = (char *)CONCAT44(local_4e8._4_4_,uVar6);
      }
      _Memory = (void *)PxVehicleWheelsSimData::allocate(uVar5);
      (**(code **)(*param_3 + 0x58))(param_3);
      cVar4 = (**(code **)(*param_3 + 0x18))(param_3,"MWheelsSimData");
      if (cVar4 != '\0') {
        local_4d8 = *(undefined4 *)param_5;
        uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_4d0 = *(undefined4 *)(param_5 + 1);
        uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
        local_4c8 = param_5[2];
        Sn::readAllProperties<physx::PxVehicleWheelsSimData>
                  (&local_4d8,param_3,_Memory,param_4,param_6);
      }
      (**(code **)(*param_3 + 0x60))(param_3);
      FUN_1430c8370(local_4a8);
      local_298 = 0x3f0000003ee66666;
      uStack_290 = 0x3fa666663f000000;
      local_278 = 0x3f800000;
      uStack_274 = 0;
      uStack_270 = 0;
      uStack_26c = 0;
      local_288 = 0x3fa66666;
      local_284 = 0x3fa66666;
      (**(code **)(*param_3 + 0x58))(param_3);
      cVar4 = (**(code **)(*param_3 + 0x18))(param_3,"MDriveSimData");
      if (cVar4 != '\0') {
        local_4d8 = *(undefined4 *)param_5;
        uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_4d0 = *(undefined4 *)(param_5 + 1);
        uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
        local_4c8 = param_5[2];
        Sn::readAllProperties<physx::PxVehicleDriveSimData4W>
                  (&local_4d8,param_3,local_4a8,param_4,param_6);
      }
      (**(code **)(*param_3 + 0x60))(param_3);
      FUN_1430c8370(local_258);
      (**(code **)(*param_3 + 0x58))(param_3);
      cVar4 = (**(code **)(*param_3 + 0x18))(param_3,"MDriveSimDataNW");
      if (cVar4 != '\0') {
        local_4d8 = *(undefined4 *)param_5;
        uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_4d0 = *(undefined4 *)(param_5 + 1);
        uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
        local_4c8 = param_5[2];
        Sn::readAllProperties<physx::PxVehicleDriveSimData4W>
                  (&local_4d8,param_3,local_4a8,param_4,param_6);
      }
      (**(code **)(*param_3 + 0x60))(param_3);
      uVar1 = *param_5;
      uVar9 = uVar7;
      if (*(short *)(local_4e0 + 8) == 6) {
        uVar9 = local_4e0;
      }
      lVar8 = PxVehicleDriveTank::allocate(local_res18);
      uVar11 = uVar7;
      if (*(short *)(uVar9 + 8) == 6) {
        uVar11 = uVar9;
      }
      local_4e0 = lVar8;
      PxVehicleDriveTank::setup(lVar8,uVar1,uVar11,_Memory,local_4a8,local_res18 - (int)local_4e8);
      local_4d8 = *(undefined4 *)param_5;
      uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
      uStack_4d0 = *(undefined4 *)(param_5 + 1);
      uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
      local_4c8 = param_5[2];
      Sn::readAllProperties<physx::PxVehicleDriveTank>(&local_4d8,param_3,lVar8,local_res20,param_6)
      ;
      lVar2 = *(longlong *)(lVar8 + 0x70);
      if (*(int *)((longlong)_Memory + 0x28) != 0) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(uVar7 * 0x220 + 0x1d0 + lVar2) + 0x168);
          if (lVar3 != 0) {
            (**(code **)(*param_6 + 8))(param_6,lVar3,0);
          }
          uVar10 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)((longlong)_Memory + 0x28));
      }
      PxVehicleWheelsSimData::free(_Memory);
      *param_2 = "PxVehicleDriveTank";
      param_2[1] = lVar8;
      param_2[2] = lVar8;
      return param_2;
    }
    this = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (this,4,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSerialization.cpp"
               ,0x70,
               "PxSerialization::createCollectionFromXml: PxVehicleRepXSerializer: Xml field NumWheels is zero!"
              );
    *param_2 = &DAT_145af3922;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  *param_2 = &DAT_145af3922;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1439812d0 fileToObject body=1021 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxVehicleRepXSerializer<physx::PxVehicleNoDrive>::fileToObject
          (undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5,longlong *param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  char *_String;
  char cVar4;
  ulong uVar5;
  ulonglong uVar6;
  void *_Memory;
  longlong lVar7;
  Foundation *this;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulong local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  char *local_4e8 [2];
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 local_4c8;
  char *local_4b8;
  ulonglong local_4b0;
  undefined1 local_4a8 [528];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_258 [544];
  
  local_res20 = param_4;
  cVar4 = (**(code **)(*param_3 + 0x10))(param_3,"PxRigidDynamicRef",&local_res18);
  if ((((cVar4 != '\0') &&
       (_String = (char *)CONCAT44(uStackX_1c,local_res18), _String != (char *)0x0)) &&
      (*_String != '\0')) &&
     ((uVar6 = _strtoui64(_String,local_4e8,10), uVar6 != 0 &&
      (local_4b0 = Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar6), local_4b0 != 0))))
  {
    cVar4 = (**(code **)(*param_3 + 0x10))(param_3,"NumWheels",&local_res18);
    if (((cVar4 != '\0') &&
        (local_4e8[0] = (char *)CONCAT44(uStackX_1c,local_res18), local_4e8[0] != (char *)0x0)) &&
       ((*local_4e8[0] != '\0' &&
        (uVar5 = strtoul(local_4e8[0],local_4e8,10), local_res18 = uVar5, uVar5 != 0)))) {
      cVar4 = (**(code **)(*param_3 + 0x10))(param_3,"NumNonDrivenWheels",local_4e8);
      if (((cVar4 != '\0') && (local_4b8 = local_4e8[0], local_4e8[0] != (char *)0x0)) &&
         (*local_4e8[0] != '\0')) {
        strtoul(local_4e8[0],&local_4b8,10);
      }
      _Memory = (void *)PxVehicleWheelsSimData::allocate(uVar5);
      (**(code **)(*param_3 + 0x58))(param_3);
      cVar4 = (**(code **)(*param_3 + 0x18))(param_3,"MWheelsSimData");
      if (cVar4 != '\0') {
        local_4d8 = *(undefined4 *)param_5;
        uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_4d0 = *(undefined4 *)(param_5 + 1);
        uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
        local_4c8 = param_5[2];
        Sn::readAllProperties<physx::PxVehicleWheelsSimData>
                  (&local_4d8,param_3,_Memory,param_4,param_6);
      }
      (**(code **)(*param_3 + 0x60))(param_3);
      FUN_1430c8370(local_4a8);
      uVar6 = 0;
      local_298 = 0x3f0000003ee66666;
      uStack_290 = 0x3fa666663f000000;
      local_278 = 0x3f800000;
      uStack_274 = 0;
      uStack_270 = 0;
      uStack_26c = 0;
      local_288 = 0x3fa66666;
      local_284 = 0x3fa66666;
      (**(code **)(*param_3 + 0x58))(param_3);
      cVar4 = (**(code **)(*param_3 + 0x18))(param_3,"MDriveSimData");
      if (cVar4 != '\0') {
        local_4d8 = *(undefined4 *)param_5;
        uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_4d0 = *(undefined4 *)(param_5 + 1);
        uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
        local_4c8 = param_5[2];
        Sn::readAllProperties<physx::PxVehicleDriveSimData4W>
                  (&local_4d8,param_3,local_4a8,param_4,param_6);
      }
      (**(code **)(*param_3 + 0x60))(param_3);
      FUN_1430c8370(local_258);
      (**(code **)(*param_3 + 0x58))(param_3);
      cVar4 = (**(code **)(*param_3 + 0x18))(param_3,"MDriveSimDataNW");
      if (cVar4 != '\0') {
        local_4d8 = *(undefined4 *)param_5;
        uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_4d0 = *(undefined4 *)(param_5 + 1);
        uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
        local_4c8 = param_5[2];
        Sn::readAllProperties<physx::PxVehicleDriveSimData4W>
                  (&local_4d8,param_3,local_4a8,param_4,param_6);
      }
      (**(code **)(*param_3 + 0x60))(param_3);
      uVar1 = *param_5;
      uVar9 = uVar6;
      if (*(short *)(local_4b0 + 8) == 6) {
        uVar9 = local_4b0;
      }
      lVar7 = PxVehicleNoDrive::allocate(local_res18);
      uVar10 = uVar6;
      if (*(short *)(uVar9 + 8) == 6) {
        uVar10 = uVar9;
      }
      PxVehicleNoDrive::setup(lVar7,uVar1,uVar10,_Memory);
      local_4d8 = *(undefined4 *)param_5;
      uStack_4d4 = *(undefined4 *)((longlong)param_5 + 4);
      uStack_4d0 = *(undefined4 *)(param_5 + 1);
      uStack_4cc = *(undefined4 *)((longlong)param_5 + 0xc);
      local_4c8 = param_5[2];
      Sn::readAllProperties<physx::PxVehicleNoDrive>(&local_4d8,param_3,lVar7,local_res20,param_6);
      lVar2 = *(longlong *)(lVar7 + 0x70);
      if (*(int *)((longlong)_Memory + 0x28) != 0) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(uVar6 * 0x220 + 0x1d0 + lVar2) + 0x168);
          if (lVar3 != 0) {
            (**(code **)(*param_6 + 8))(param_6,lVar3,0);
          }
          uVar8 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)((longlong)_Memory + 0x28));
      }
      PxVehicleWheelsSimData::free(_Memory);
      *param_2 = "PxVehicleNoDrive";
      param_2[1] = lVar7;
      param_2[2] = lVar7;
      return param_2;
    }
    this = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (this,4,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSerialization.cpp"
               ,0x70,
               "PxSerialization::createCollectionFromXml: PxVehicleRepXSerializer: Xml field NumWheels is zero!"
              );
    *param_2 = &DAT_145af3922;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  *param_2 = &DAT_145af3922;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1439816d0 objectToFileImpl body=372 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxVehicleRepXSerializer<physx::PxVehicleDrive4W>::objectToFileImpl
               (undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
               undefined8 *param_5)

{
  uint uVar1;
  uint local_res10 [4];
  undefined1 local_res20 [8];
  undefined8 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  uVar1 = MXCSR;
  local_res10[0] = 0x9fc0;
  MXCSR = 0x9fc0;
  Sn::writeReference<physx::PxRigidDynamic>
            (param_4,param_3,"PxRigidDynamicRef",*(undefined8 *)(param_2 + 0xa0));
  physx::operator<<(param_5,*(undefined4 *)(param_2 + 0x3c));
  local_res10[0] = local_res10[0] & 0xffffff00;
  (**(code **)*param_5)(param_5,local_res10,1);
  (**(code **)(*param_4 + 0x10))(param_4,"NumWheels",param_5[4]);
  param_5[3] = 0;
  physx::operator<<(param_5,*(undefined4 *)(param_2 + 0xa8));
  local_res20[0] = 0;
  (**(code **)*param_5)(param_5,local_res20,1);
  (**(code **)(*param_4 + 0x10))(param_4,"NumNonDrivenWheels",param_5[4]);
  local_48 = (undefined8 *)param_5[2];
  param_5[3] = 0;
  local_40 = 0;
  local_38 = 0;
  Sn::writeAllProperties<physx::PxVehicleDrive4W>(&local_48,param_2,param_4,param_5,param_3);
  if ((((local_38 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_38)) && (local_40 != 0)) {
    (**(code **)(*(longlong *)*local_48 + 0x10))();
  }
  MXCSR = uVar1 & 0xffffffc0;
  return;
}



// FUNCTION 143981850 objectToFileImpl body=372 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxVehicleRepXSerializer<physx::PxVehicleDriveNW>::objectToFileImpl
               (undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
               undefined8 *param_5)

{
  uint uVar1;
  uint local_res10 [4];
  undefined1 local_res20 [8];
  undefined8 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  uVar1 = MXCSR;
  local_res10[0] = 0x9fc0;
  MXCSR = 0x9fc0;
  Sn::writeReference<physx::PxRigidDynamic>
            (param_4,param_3,"PxRigidDynamicRef",*(undefined8 *)(param_2 + 0xa0));
  physx::operator<<(param_5,*(undefined4 *)(param_2 + 0x3c));
  local_res10[0] = local_res10[0] & 0xffffff00;
  (**(code **)*param_5)(param_5,local_res10,1);
  (**(code **)(*param_4 + 0x10))(param_4,"NumWheels",param_5[4]);
  param_5[3] = 0;
  physx::operator<<(param_5,*(undefined4 *)(param_2 + 0xa8));
  local_res20[0] = 0;
  (**(code **)*param_5)(param_5,local_res20,1);
  (**(code **)(*param_4 + 0x10))(param_4,"NumNonDrivenWheels",param_5[4]);
  local_48 = (undefined8 *)param_5[2];
  param_5[3] = 0;
  local_40 = 0;
  local_38 = 0;
  Sn::writeAllProperties<physx::PxVehicleDriveNW>(&local_48,param_2,param_4,param_5,param_3);
  if ((((local_38 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_38)) && (local_40 != 0)) {
    (**(code **)(*(longlong *)*local_48 + 0x10))();
  }
  MXCSR = uVar1 & 0xffffffc0;
  return;
}



// FUNCTION 1439819d0 objectToFileImpl body=372 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxVehicleRepXSerializer<physx::PxVehicleDriveTank>::objectToFileImpl
               (undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
               undefined8 *param_5)

{
  uint uVar1;
  uint local_res10 [4];
  undefined1 local_res20 [8];
  undefined8 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  uVar1 = MXCSR;
  local_res10[0] = 0x9fc0;
  MXCSR = 0x9fc0;
  Sn::writeReference<physx::PxRigidDynamic>
            (param_4,param_3,"PxRigidDynamicRef",*(undefined8 *)(param_2 + 0xa0));
  physx::operator<<(param_5,*(undefined4 *)(param_2 + 0x3c));
  local_res10[0] = local_res10[0] & 0xffffff00;
  (**(code **)*param_5)(param_5,local_res10,1);
  (**(code **)(*param_4 + 0x10))(param_4,"NumWheels",param_5[4]);
  param_5[3] = 0;
  physx::operator<<(param_5,*(undefined4 *)(param_2 + 0xa8));
  local_res20[0] = 0;
  (**(code **)*param_5)(param_5,local_res20,1);
  (**(code **)(*param_4 + 0x10))(param_4,"NumNonDrivenWheels",param_5[4]);
  local_48 = (undefined8 *)param_5[2];
  param_5[3] = 0;
  local_40 = 0;
  local_38 = 0;
  Sn::writeAllProperties<physx::PxVehicleDriveTank>(&local_48,param_2,param_4,param_5,param_3);
  if ((((local_38 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_38)) && (local_40 != 0)) {
    (**(code **)(*(longlong *)*local_48 + 0x10))();
  }
  MXCSR = uVar1 & 0xffffffc0;
  return;
}



// FUNCTION 143981b50 objectToFileImpl body=372 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxVehicleRepXSerializer<physx::PxVehicleNoDrive>::objectToFileImpl
               (undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
               undefined8 *param_5)

{
  uint uVar1;
  uint local_res10 [4];
  undefined1 local_res20 [8];
  undefined8 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  uVar1 = MXCSR;
  local_res10[0] = 0x9fc0;
  MXCSR = 0x9fc0;
  Sn::writeReference<physx::PxRigidDynamic>
            (param_4,param_3,"PxRigidDynamicRef",*(undefined8 *)(param_2 + 0xa0));
  physx::operator<<(param_5,*(undefined4 *)(param_2 + 0x3c));
  local_res10[0] = local_res10[0] & 0xffffff00;
  (**(code **)*param_5)(param_5,local_res10,1);
  (**(code **)(*param_4 + 0x10))(param_4,"NumWheels",param_5[4]);
  param_5[3] = 0;
  physx::operator<<(param_5,*(undefined4 *)(param_2 + 0xa8));
  local_res20[0] = 0;
  (**(code **)*param_5)(param_5,local_res20,1);
  (**(code **)(*param_4 + 0x10))(param_4,"NumNonDrivenWheels",param_5[4]);
  local_48 = (undefined8 *)param_5[2];
  param_5[3] = 0;
  local_40 = 0;
  local_38 = 0;
  Sn::writeAllProperties<physx::PxVehicleNoDrive>(&local_48,param_2,param_4,param_5,param_3);
  if ((((local_38 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_38)) && (local_40 != 0)) {
    (**(code **)(*(longlong *)*local_48 + 0x10))();
  }
  MXCSR = uVar1 & 0xffffffc0;
  return;
}



// FUNCTION 143981cd0 PxVehicleWheels4SimData body=389 status=ok
// SIG undefined PxVehicleWheels4SimData(void)

longlong physx::PxVehicleWheels4SimData::PxVehicleWheels4SimData(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 4;
  puVar2 = (undefined4 *)(param_1 + 8);
  lVar4 = 4;
  do {
    *(undefined8 *)(puVar2 + -2) = 0;
    *puVar2 = 0x3e99999a;
    *(undefined8 *)(puVar2 + 1) = 0x3dcccccd;
    *(undefined8 *)(puVar2 + 3) = 0;
    puVar2[5] = 0;
    puVar2[6] = 0x3f800000;
    puVar2[7] = 0x3f800000;
    puVar2 = puVar2 + 0xc;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 4;
  puVar1 = (undefined8 *)(param_1 + 0xc0);
  do {
    *puVar1 = 0;
    puVar1[1] = 0x41a00000;
    *(undefined4 *)(puVar1 + 2) = 0x3e800000;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0x44bb8000;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    puVar1 = puVar1 + 6;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar2 = (undefined4 *)(param_1 + 0x180);
  lVar4 = 4;
  do {
    puVar2[2] = 0x447a0000;
    *puVar2 = 0x40000000;
    puVar2[1] = 0x418f3d4d;
    *(undefined8 *)(puVar2 + 3) = 0x40b758b4;
    puVar2[6] = 0x3dcccccd;
    puVar2[8] = 0x3f800000;
    *(undefined8 *)(puVar2 + 9) = 0x3f800000;
    puVar2[5] = 0x3f800000;
    puVar2[7] = 0x3f800000;
    puVar2[0xb] = 1.0 / (float)puVar2[2];
    puVar2[0xc] = 1.0 / ((float)puVar2[6] - (float)puVar2[4]);
    puVar2[0xd] = 1.0 / ((float)puVar2[8] - (float)puVar2[6]);
    puVar2 = puVar2 + 0x10;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 4;
  puVar1 = (undefined8 *)(param_1 + 0x360);
  do {
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar2 = (undefined4 *)(param_1 + 0x288);
  puVar3 = (undefined4 *)(param_1 + 0x350);
  do {
    *(undefined8 *)(puVar2 + -2) = 0;
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    puVar2[0xc] = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    puVar2[0x18] = 0;
    *(undefined8 *)(puVar2 + 0x22) = 0;
    puVar2[0x24] = 0;
    puVar2 = puVar2 + 3;
    puVar3[-4] = 0x44be0000;
    *puVar3 = 0x3a2c7692;
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar5 != 0);
  return param_1;
}



// FUNCTION 143981e60 isValid body=3 status=ok
// SIG undefined isValid(void)

undefined1 physx::PxVehicleWheels4SimData::isValid(void)

{
  return 1;
}



// FUNCTION 143981e70 setSuspensionData body=143 status=ok
// SIG undefined setSuspensionData(void)

void physx::PxVehicleWheels4SimData::setSuspensionData
               (longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = param_3[1];
  uVar3 = (ulonglong)param_2;
  puVar1 = (undefined8 *)(param_1 + uVar3 * 0x30);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  uVar2 = param_3[3];
  puVar1 = (undefined8 *)(param_1 + 0x10 + uVar3 * 0x30);
  *puVar1 = param_3[2];
  puVar1[1] = uVar2;
  uVar2 = param_3[5];
  puVar1 = (undefined8 *)(param_1 + 0x20 + uVar3 * 0x30);
  *puVar1 = param_3[4];
  puVar1[1] = uVar2;
  fVar4 = *(float *)(param_3 + 1);
  if (fVar4 <= 0.0) {
    fVar4 = 1.0;
  }
  *(float *)(param_1 + 0x20 + uVar3 * 0x30) = 1.0 / fVar4;
  fVar4 = *(float *)((longlong)param_3 + 0xc);
  if (fVar4 <= 0.0) {
    fVar4 = 1.0;
  }
  fVar5 = *(float *)(param_1 + 200 + uVar3 * 0x30) + *(float *)(param_1 + 0x10 + uVar3 * 0x30);
  *(float *)(param_1 + 0x24 + uVar3 * 0x30) = 1.0 / fVar4;
  *(float *)(param_1 + 0x340 + uVar3 * 4) = fVar5;
  *(float *)(param_1 + 0x350 + uVar3 * 4) = 1.0 / fVar5;
  return;
}



// FUNCTION 143981f10 setWheelData body=135 status=ok
// SIG undefined setWheelData(void)

void physx::PxVehicleWheels4SimData::setWheelData(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar3 = param_3[1];
  uVar4 = (ulonglong)param_2;
  lVar1 = uVar4 + 4;
  puVar2 = (undefined8 *)(param_1 + lVar1 * 0x30);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  uVar3 = param_3[3];
  puVar2 = (undefined8 *)(param_1 + 0x10 + lVar1 * 0x30);
  *puVar2 = param_3[2];
  puVar2[1] = uVar3;
  uVar3 = param_3[5];
  puVar2 = (undefined8 *)(param_1 + 0x20 + lVar1 * 0x30);
  *puVar2 = param_3[4];
  puVar2[1] = uVar3;
  fVar5 = *(float *)(param_1 + lVar1 * 0x30);
  *(float *)(param_1 + 0xe8 + uVar4 * 0x30) = 1.0 / *(float *)(param_1 + 0xcc + uVar4 * 0x30);
  *(float *)(param_1 + 0xe4 + uVar4 * 0x30) = 1.0 / fVar5;
  fVar5 = *(float *)(param_1 + 200 + uVar4 * 0x30) + *(float *)(param_1 + 0x10 + uVar4 * 0x30);
  *(float *)(param_1 + 0x340 + uVar4 * 4) = fVar5;
  *(float *)(param_1 + 0x350 + uVar4 * 4) = 1.0 / fVar5;
  return;
}



// FUNCTION 143981fa0 setTireData body=156 status=ok
// SIG undefined setTireData(void)

void physx::PxVehicleWheels4SimData::setTireData(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = param_3[1];
  lVar4 = (ulonglong)param_2 * 0x40;
  lVar3 = ((ulonglong)param_2 + 6) * 0x40;
  *(undefined8 *)(lVar3 + param_1) = *param_3;
  ((undefined8 *)(lVar3 + param_1))[1] = uVar2;
  uVar2 = param_3[3];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + param_1);
  *puVar1 = param_3[2];
  puVar1[1] = uVar2;
  uVar2 = param_3[5];
  puVar1 = (undefined8 *)(lVar3 + 0x20 + param_1);
  *puVar1 = param_3[4];
  puVar1[1] = uVar2;
  uVar2 = param_3[7];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + param_1);
  *puVar1 = param_3[6];
  puVar1[1] = uVar2;
  *(float *)(lVar4 + 0x1ac + param_1) = 1.0 / *(float *)(lVar4 + 0x188 + param_1);
  *(float *)(lVar4 + 0x1b0 + param_1) =
       1.0 / (*(float *)(lVar4 + 0x198 + param_1) - *(float *)(lVar4 + 400 + param_1));
  *(float *)(lVar4 + 0x1b4 + param_1) =
       1.0 / (*(float *)(lVar4 + 0x1a0 + param_1) - *(float *)(lVar4 + 0x198 + param_1));
  return;
}



// FUNCTION 143982050 setSuspTravelDirection body=39 status=ok
// SIG undefined setSuspTravelDirection(void)

void physx::PxVehicleWheels4SimData::setSuspTravelDirection
               (longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  param_2 = param_2 & 0xffffffff;
  *(undefined4 *)(param_1 + 0x280 + param_2 * 0xc) = *param_3;
  *(undefined4 *)(param_1 + 0x284 + param_2 * 0xc) = param_3[1];
  *(undefined4 *)(param_1 + 0x288 + param_2 * 0xc) = param_3[2];
  return;
}



// FUNCTION 143982080 setSuspForceAppPointOffset body=39 status=ok
// SIG undefined setSuspForceAppPointOffset(void)

void physx::PxVehicleWheels4SimData::setSuspForceAppPointOffset
               (longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  param_2 = param_2 & 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b0 + param_2 * 0xc) = *param_3;
  *(undefined4 *)(param_1 + 0x2b4 + param_2 * 0xc) = param_3[1];
  *(undefined4 *)(param_1 + 0x2b8 + param_2 * 0xc) = param_3[2];
  return;
}



// FUNCTION 1439820b0 setTireForceAppPointOffset body=39 status=ok
// SIG undefined setTireForceAppPointOffset(void)

void physx::PxVehicleWheels4SimData::setTireForceAppPointOffset
               (longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  param_2 = param_2 & 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e0 + param_2 * 0xc) = *param_3;
  *(undefined4 *)(param_1 + 0x2e4 + param_2 * 0xc) = param_3[1];
  *(undefined4 *)(param_1 + 0x2e8 + param_2 * 0xc) = param_3[2];
  return;
}



// FUNCTION 1439820e0 setWheelCentreOffset body=39 status=ok
// SIG undefined setWheelCentreOffset(void)

void physx::PxVehicleWheels4SimData::setWheelCentreOffset
               (longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  param_2 = param_2 & 0xffffffff;
  *(undefined4 *)(param_1 + 0x310 + param_2 * 0xc) = *param_3;
  *(undefined4 *)(param_1 + 0x314 + param_2 * 0xc) = param_3[1];
  *(undefined4 *)(param_1 + 0x318 + param_2 * 0xc) = param_3[2];
  return;
}



// FUNCTION 143982110 setWheelShapeMapping body=29 status=ok
// SIG undefined setWheelShapeMapping(void)

void physx::PxVehicleWheels4SimData::setWheelShapeMapping(longlong param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if (param_3 != -1) {
    uVar1 = (char)param_3;
  }
  *(undefined1 *)((ulonglong)param_2 + 0x3a0 + param_1) = uVar1;
  return;
}



// FUNCTION 143982140 setSceneQueryFilterData body=18 status=ok
// SIG undefined setSceneQueryFilterData(void)

void physx::PxVehicleWheels4SimData::setSceneQueryFilterData
               (longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  puVar1 = (undefined8 *)(param_1 + ((ulonglong)param_2 + 0x36) * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  return;
}



// FUNCTION 143982160 MFrictionVsSlipGraphProperty body=57 status=ok
// SIG undefined MFrictionVsSlipGraphProperty(void)

undefined8 * physx::MFrictionVsSlipGraphProperty::MFrictionVsSlipGraphProperty(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x27d;
  *param_1 = "MFrictionVsSlipGraph";
  param_1[2] = &LAB_143982270;
  param_1[3] = &LAB_143982260;
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)((longlong)param_1 + 0x24) = 2;
  return param_1;
}



// FUNCTION 1439821a0 MTorqueCurveProperty body=76 status=ok
// SIG undefined MTorqueCurveProperty(void)

undefined8 * physx::MTorqueCurveProperty::MTorqueCurveProperty(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x224;
  *param_1 = "MTorqueCurve";
  param_1[2] = &LAB_143982280;
  param_1[3] = &LAB_143982290;
  param_1[4] = FUN_14046e5c0;
  param_1[5] = &LAB_143982200;
  param_1[6] = &LAB_143982230;
  return param_1;
}



// FUNCTION 1439822a0 FUN_1439822a0 body=63 status=ok
// SIG undefined FUN_1439822a0(void)

void FUN_1439822a0(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x78);
  *(undefined4 *)((longlong)param_1 + 4) = 0x80808080;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  FUN_143983b20((longlong)param_1 + 0xc);
  FUN_143983b00((longlong)param_1 + 0x1c);
  FQuartzTransportTimeStamp::Reset((longlong)param_1 + 0x28);
  return;
}



// FUNCTION 1439822e0 __scrt_is_ucrt_dll_in_use body=12 status=ok
// SIG undefined __scrt_is_ucrt_dll_in_use(void)

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_146b95f14 != '\0';
}



// FUNCTION 1439822f0 FUN_1439822f0 body=331 status=ok
// SIG undefined FUN_1439822f0(void)

undefined8 FUN_1439822f0(undefined4 param_1,float *param_2)

{
  int iVar1;
  char *local_res18 [2];
  
  if (DAT_146b95f14 == '\0') {
    return 0x80920005;
  }
  if (param_2 == (float *)0x0) {
    return 0x80920001;
  }
  iVar1 = FUN_143983950();
  if (iVar1 != 0) {
    return 0x809200ff;
  }
  iVar1 = FUN_143983090(param_1);
  if (iVar1 < 0) {
    FUN_143983980();
    return 0x80920003;
  }
  iVar1 = FUN_1439834c0(param_1,local_res18,0);
  if (iVar1 != 0) {
    FUN_143983980();
    return 0x80920003;
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  if ((*local_res18[0] != '\0') && (*(longlong *)(local_res18[0] + 0x148) != 0)) {
    *param_2 = (float)*(uint *)(local_res18[0] + 300) / 100.0;
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(local_res18[0] + 0x130);
    *(undefined2 *)((longlong)param_2 + 6) = *(undefined2 *)(local_res18[0] + 0x132);
    *(char *)(param_2 + 2) = local_res18[0][0x134];
    *(char *)((longlong)param_2 + 9) = local_res18[0][0x135];
    *(undefined1 *)((longlong)param_2 + 10) = 0;
    *(char *)((longlong)param_2 + 0xb) = local_res18[0][1];
    *(undefined1 *)(param_2 + 3) = 1;
    FUN_143983980();
    return 0;
  }
  *(undefined1 *)(param_2 + 3) = 0;
  *(char *)((longlong)param_2 + 0xb) = local_res18[0][1];
  FUN_143983980();
  return 0;
}



// FUNCTION 143982440 FUN_143982440 body=150 status=ok
// SIG undefined FUN_143982440(void)

undefined8 FUN_143982440(void)

{
  char cVar1;
  MMRESULT MVar2;
  uint uVar3;
  timecaps_tag local_res8 [4];
  
  if (DAT_146b95f14 == '\0') {
    if ((free_exref == (code *)0x0) || (malloc_exref == (code *)0x0)) {
      return 0x80920001;
    }
    RegisterBookmarkFunction(malloc_exref);
    RegisterBookmarkFunction(free_exref);
    MVar2 = timeGetDevCaps(local_res8,8);
    uVar3 = 1;
    if (MVar2 == 0) {
      uVar3 = 1;
      if (1 < local_res8[0].wPeriodMin) {
        uVar3 = local_res8[0].wPeriodMin;
      }
    }
    FUN_143989030(uVar3);
    cVar1 = FUN_143984ec0();
    if (cVar1 == '\0') {
      return 0x809200ff;
    }
    DAT_146b95f14 = '\x01';
  }
  return 0;
}



// FUNCTION 1439824e0 FUN_1439824e0 body=140 status=ok
// SIG undefined FUN_1439824e0(void)

undefined4 FUN_1439824e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18 [4];
  
  if (DAT_146b95f14 == '\0') {
    return 0x80920005;
  }
  if (((param_2 != 0) || (param_3 != 0)) || (3 < param_1 - 1U)) {
    return 0x80920001;
  }
  iVar1 = FUN_143983950();
  if (iVar1 != 0) {
    return 0x809200ff;
  }
  iVar1 = FUN_143983470(param_1,local_18);
  if (iVar1 < 0) {
    uVar2 = 0x809200ff;
    if (iVar1 == -0x7ffeffff) {
      uVar2 = 0x80920004;
    }
    FUN_143983980();
    return uVar2;
  }
  FUN_143983980();
  return local_18[0];
}



// FUNCTION 143982570 FUN_143982570 body=573 status=ok
// SIG undefined FUN_143982570(void)

undefined8 FUN_143982570(undefined4 param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  byte local_res18 [8];
  longlong local_res20;
  
  if (DAT_146b95f14 == '\0') {
    return 0x80920005;
  }
  if (param_2 == (uint *)0x0) {
    return 0x80920001;
  }
  iVar6 = FUN_143983950();
  if (iVar6 != 0) {
    return 0x809200ff;
  }
  iVar6 = FUN_143983090(param_1);
  if (-1 < iVar6) {
    FUN_1439822a0(param_2);
    iVar6 = FUN_1439834c0(param_1,&local_res20);
    if ((iVar6 == 0) &&
       (FUN_143983ad0(param_1,local_res18), *(longlong *)(local_res20 + 0x148) != 0)) {
      cVar4 = FUN_143985150();
      uVar7 = *(uint *)(*(longlong *)(local_res20 + 0x148) + 0xc);
      if (cVar4 == '\0') {
        uVar7 = uVar7 & 0xfffefffe;
      }
      *param_2 = uVar7;
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(*(longlong *)(local_res20 + 0x148) + 0x10);
      *(undefined1 *)((longlong)param_2 + 5) =
           *(undefined1 *)(*(longlong *)(local_res20 + 0x148) + 0x11);
      *(undefined1 *)((longlong)param_2 + 6) =
           *(undefined1 *)(*(longlong *)(local_res20 + 0x148) + 0x12);
      *(undefined1 *)((longlong)param_2 + 7) =
           *(undefined1 *)(*(longlong *)(local_res20 + 0x148) + 0x13);
      *(undefined1 *)((longlong)param_2 + 9) =
           *(undefined1 *)(*(longlong *)(local_res20 + 0x148) + 0x15);
      *(undefined1 *)(param_2 + 2) = *(undefined1 *)(*(longlong *)(local_res20 + 0x148) + 0x14);
      if ((*(char *)(local_res20 + 0x4c) == '\x01') && ((local_res18[0] & 8) != 0)) {
        lVar1 = *(longlong *)(local_res20 + 0x148);
        uVar7 = *(uint *)(lVar1 + 0x74);
        uVar2 = *(uint *)(lVar1 + 0x78);
        uVar3 = *(uint *)(lVar1 + 0x7c);
        param_2[3] = *(uint *)(lVar1 + 0x70);
        param_2[4] = uVar7;
        param_2[5] = uVar2;
        param_2[6] = uVar3;
        param_2[7] = *(uint *)(*(longlong *)(local_res20 + 0x148) + 0x60);
        param_2[8] = *(uint *)(*(longlong *)(local_res20 + 0x148) + 100);
        param_2[9] = *(uint *)(*(longlong *)(local_res20 + 0x148) + 0x68);
        param_2[10] = *(uint *)(*(longlong *)(local_res20 + 0x148) + 0x54);
        param_2[0xb] = *(uint *)(*(longlong *)(local_res20 + 0x148) + 0x58);
        param_2[0xc] = *(uint *)(*(longlong *)(local_res20 + 0x148) + 0x5c);
      }
      else {
        FUN_143983b20(param_2 + 3);
        FUN_143983b00(param_2 + 7);
        FQuartzTransportTimeStamp::Reset(param_2 + 10);
      }
      *(undefined1 *)(param_2 + 0x13) = 1;
      *(undefined1 *)(param_2 + 0x1a) = *(undefined1 *)(local_res20 + 1);
      *(undefined8 *)(param_2 + 0x14) = **(undefined8 **)(local_res20 + 0x148);
      lVar1 = *(longlong *)(local_res20 + 0x148);
      bVar5 = *(byte *)(lVar1 + 0x19);
      if (2 < bVar5) {
        bVar5 = 2;
      }
      iVar6 = 0;
      *(byte *)(param_2 + 0xd) = bVar5;
      if (*(char *)(lVar1 + 0x19) != '\0') {
        puVar8 = (undefined2 *)((longlong)param_2 + 0x3e);
        puVar9 = (undefined2 *)(lVar1 + 0x1e);
        do {
          iVar6 = iVar6 + 1;
          puVar8[-1] = puVar9[-1];
          *puVar8 = *puVar9;
          *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar9 + -2);
          puVar8 = puVar8 + 4;
          puVar9 = puVar9 + 3;
        } while (iVar6 < (int)(uint)*(byte *)(lVar1 + 0x19));
      }
    }
    FUN_143983980();
    return 0;
  }
  FUN_143983980();
  return 0x80920003;
}



// FUNCTION 1439827b0 FUN_1439827b0 body=106 status=ok
// SIG undefined FUN_1439827b0(void)

int FUN_1439827b0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_146b95f14 == '\0') {
    return -0x7f6dfffb;
  }
  iVar1 = FUN_143983950();
  if (iVar1 == 0) {
    iVar1 = FUN_143983090(param_1);
    if (iVar1 < 0) {
      FUN_143983980();
      return -0x7f6dfffd;
    }
    iVar1 = FUN_1439829b0(param_1);
    if (-1 < iVar1) {
      FUN_143983980();
      return iVar1;
    }
    FUN_143983980();
  }
  return -0x7f6dff01;
}



// FUNCTION 143982820 FUN_143982820 body=190 status=ok
// SIG undefined FUN_143982820(void)

int FUN_143982820(undefined4 param_1,byte *param_2)

{
  int iVar1;
  
  if (DAT_146b95f14 == '\0') {
    return -0x7f6dfffb;
  }
  if (param_2 == (byte *)0x0) {
    return -0x7f6dffff;
  }
  if (((*param_2 < 0xd) && (param_2[1] < 0xd)) && (param_2[2] < 0xd)) {
    return -0x7f6dfffa;
  }
  iVar1 = FUN_143983950();
  if (iVar1 == 0) {
    iVar1 = FUN_143983090(param_1);
    if (iVar1 < 0) {
      FUN_143983980();
      return -0x7f6dfffd;
    }
    iVar1 = FUN_143982b60(param_1,param_2);
    if (-1 < iVar1) {
      FUN_143983980();
      return iVar1;
    }
    FUN_143983980();
  }
  return -0x7f6dff01;
}



// FUNCTION 1439828e0 FUN_1439828e0 body=162 status=ok
// SIG undefined FUN_1439828e0(void)

int FUN_1439828e0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  
  if (DAT_146b95f14 == '\0') {
    return -0x7f6dfffb;
  }
  if (param_2 == (undefined1 *)0x0) {
    return -0x7f6dffff;
  }
  iVar1 = FUN_143983950();
  if (iVar1 == 0) {
    iVar1 = FUN_143983090(param_1);
    if (iVar1 < 0) {
      FUN_143983980();
      return -0x7f6dfffd;
    }
    iVar1 = FUN_143982a20(param_1,param_2[1],*param_2);
    if (-1 < iVar1) {
      FUN_143983980();
      return iVar1;
    }
    FUN_143983980();
  }
  return -0x7f6dff01;
}



// FUNCTION 143982990 Curl_ssl_cleanup body=30 status=ok
// SIG undefined Curl_ssl_cleanup(void)

void Curl_ssl_cleanup(void)

{
  if (DAT_146b95f14 != '\0') {
    FUN_1439854f0();
    DAT_146b95f14 = '\0';
  }
  return;
}



// FUNCTION 1439829b0 FUN_1439829b0 body=111 status=ok
// SIG undefined FUN_1439829b0(void)

undefined8 FUN_1439829b0(ulonglong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  
  lVar1 = FUN_1439837e0(param_1,0);
  if (lVar1 == 0) {
    return 0x8001002d;
  }
  uVar2 = FUN_143983880(lVar1);
  if ((int)uVar2 == 0) {
    local_res10 = *(undefined1 *)(lVar1 + 0x23b0);
    local_res11 = *(undefined1 *)(lVar1 + 0x23b1);
    local_res12 = *(undefined1 *)(lVar1 + 0x23b2);
    uVar2 = FUN_143982b60(param_1 & 0xffffffff,&local_res10);
  }
  return uVar2;
}



// FUNCTION 143982a20 FUN_143982a20 body=307 status=ok
// SIG undefined FUN_143982a20(void)

undefined4 FUN_143982a20(undefined8 param_1,char param_2,char param_3)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar2 = 0;
  pcVar3 = (char *)FUN_1439837e0(param_1,0);
  if (pcVar3 == (char *)0x0) {
    uVar2 = 0x8001002d;
  }
  else if (*pcVar3 != '\0') {
    if (*(char **)(pcVar3 + 0x2390) == (char *)0x0) {
      pcVar4 = pcVar3 + 0x2350;
      *(char **)(pcVar3 + 0x2390) = pcVar4;
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4[4] = '\0';
      pcVar4[5] = '\0';
      pcVar4[6] = '\0';
      pcVar4[7] = '\0';
      pcVar3[0x2358] = '\0';
      pcVar3[0x2359] = '\0';
      pcVar3[0x235a] = '\0';
      pcVar3[0x235b] = '\0';
      pcVar3[0x235c] = '\0';
      pcVar3[0x235d] = '\0';
      pcVar3[0x235e] = '\0';
      pcVar3[0x235f] = '\0';
      pcVar3[0x2360] = '\0';
      pcVar3[0x2361] = '\0';
      pcVar3[0x2362] = '\0';
      pcVar3[0x2363] = '\0';
      pcVar3[0x2364] = '\0';
      pcVar3[0x2365] = '\0';
      pcVar3[0x2366] = '\0';
      pcVar3[0x2367] = '\0';
      pcVar3[0x2368] = '\0';
      pcVar3[0x2369] = '\0';
      pcVar3[0x236a] = '\0';
      pcVar3[0x236b] = '\0';
      pcVar3[0x236c] = '\0';
      pcVar3[0x236d] = '\0';
      pcVar3[0x236e] = '\0';
      pcVar3[0x236f] = '\0';
      bVar1 = true;
    }
    else {
      pcVar4 = *(char **)(pcVar3 + 0x2398);
      if (pcVar4 == (char *)0x0) {
        lVar6 = 0x2350;
        if (*(char **)(pcVar3 + 0x2390) == pcVar3 + 0x2350) {
          lVar6 = 0x2370;
        }
        pcVar4 = pcVar3 + lVar6;
        *(char **)(pcVar3 + 0x2398) = pcVar4;
      }
      bVar1 = false;
    }
    if (pcVar4 == (char *)0x0) {
      uVar2 = 0x80010004;
    }
    else {
      if (bVar1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
        pcVar4[10] = '\0';
        pcVar4[0xb] = '\0';
        pcVar4[0xc] = '\0';
        pcVar4[0xd] = '\0';
        pcVar4[0xe] = '\0';
        pcVar4[0xf] = '\0';
        pcVar4[0x10] = '\0';
        pcVar4[0x11] = '\0';
        pcVar4[0x12] = '\0';
        pcVar4[0x13] = '\0';
        pcVar4[0x14] = '\0';
        pcVar4[0x15] = '\0';
        pcVar4[0x16] = '\0';
        pcVar4[0x17] = '\0';
        pcVar4[0x18] = '\0';
        pcVar4[0x19] = '\0';
        pcVar4[0x1a] = '\0';
        pcVar4[0x1b] = '\0';
        pcVar4[0x1c] = '\0';
        pcVar4[0x1d] = '\0';
        pcVar4[0x1e] = '\0';
        pcVar4[0x1f] = '\0';
        pcVar4[0] = '\x05';
        pcVar4[1] = '\x01';
        pcVar4[4] = param_2;
        pcVar4[5] = param_3;
        uVar2 = FUN_1439853a0(*(undefined4 *)(pcVar3 + 8),pcVar4,0x20,FUN_143982cb0);
      }
      else {
        pcVar4[1] = pcVar4[1] | 1;
        *pcVar4 = '\x05';
        pcVar4[4] = param_2;
        pcVar4[5] = param_3;
      }
      if ((param_2 == '\0') && (param_3 == '\0')) {
        pcVar3[0x23a0] = '\0';
      }
      else {
        pcVar3[0x23a0] = '\x01';
        uVar5 = FUN_143983510();
        *(undefined8 *)(pcVar3 + 0x23a8) = uVar5;
      }
    }
  }
  return uVar2;
}



// FUNCTION 143982b60 FUN_143982b60 body=334 status=ok
// SIG undefined FUN_143982b60(void)

undefined4 FUN_143982b60(undefined8 param_1,char *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar5;
  
  uVar2 = 0;
  pcVar3 = (char *)FUN_1439837e0(param_1,0);
  if (pcVar3 == (char *)0x0) {
    return 0x8001002d;
  }
  if (*pcVar3 != '\0') {
    if (*(char **)(pcVar3 + 0x2390) == (char *)0x0) {
      pcVar5 = pcVar3 + 0x2350;
      *(char **)(pcVar3 + 0x2390) = pcVar5;
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5[4] = '\0';
      pcVar5[5] = '\0';
      pcVar5[6] = '\0';
      pcVar5[7] = '\0';
      pcVar3[0x2358] = '\0';
      pcVar3[0x2359] = '\0';
      pcVar3[0x235a] = '\0';
      pcVar3[0x235b] = '\0';
      pcVar3[0x235c] = '\0';
      pcVar3[0x235d] = '\0';
      pcVar3[0x235e] = '\0';
      pcVar3[0x235f] = '\0';
      pcVar3[0x2360] = '\0';
      pcVar3[0x2361] = '\0';
      pcVar3[0x2362] = '\0';
      pcVar3[0x2363] = '\0';
      pcVar3[0x2364] = '\0';
      pcVar3[0x2365] = '\0';
      pcVar3[0x2366] = '\0';
      pcVar3[0x2367] = '\0';
      pcVar3[0x2368] = '\0';
      pcVar3[0x2369] = '\0';
      pcVar3[0x236a] = '\0';
      pcVar3[0x236b] = '\0';
      pcVar3[0x236c] = '\0';
      pcVar3[0x236d] = '\0';
      pcVar3[0x236e] = '\0';
      pcVar3[0x236f] = '\0';
      bVar1 = true;
    }
    else {
      pcVar5 = *(char **)(pcVar3 + 0x2398);
      if (pcVar5 == (char *)0x0) {
        lVar4 = 0x2350;
        if (*(char **)(pcVar3 + 0x2390) == pcVar3 + 0x2350) {
          lVar4 = 0x2370;
        }
        pcVar5 = pcVar3 + lVar4;
        *(char **)(pcVar3 + 0x2398) = pcVar5;
      }
      bVar1 = false;
    }
    if (pcVar5 == (char *)0x0) {
      return 0x80010004;
    }
    if (bVar1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5[4] = '\0';
      pcVar5[5] = '\0';
      pcVar5[6] = '\0';
      pcVar5[7] = '\0';
      pcVar5[8] = '\0';
      pcVar5[9] = '\0';
      pcVar5[10] = '\0';
      pcVar5[0xb] = '\0';
      pcVar5[0xc] = '\0';
      pcVar5[0xd] = '\0';
      pcVar5[0xe] = '\0';
      pcVar5[0xf] = '\0';
      pcVar5[0x10] = '\0';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      pcVar5[0x18] = '\0';
      pcVar5[0x19] = '\0';
      pcVar5[0x1a] = '\0';
      pcVar5[0x1b] = '\0';
      pcVar5[0x1c] = '\0';
      pcVar5[0x1d] = '\0';
      pcVar5[0x1e] = '\0';
      pcVar5[0x1f] = '\0';
      pcVar5[0] = '\x05';
      pcVar5[1] = '\x02';
      pcVar5[6] = *param_2;
      pcVar5[7] = param_2[1];
      pcVar5[8] = param_2[2];
      uVar2 = FUN_1439853a0(*(undefined4 *)(pcVar3 + 8),pcVar5,0x20,FUN_143982cb0);
    }
    else {
      pcVar5[1] = pcVar5[1] | 2;
      *pcVar5 = '\x05';
      pcVar5[6] = *param_2;
      pcVar5[7] = param_2[1];
      pcVar5[8] = param_2[2];
    }
  }
  pcVar3[0x23b0] = *param_2;
  pcVar3[0x23b1] = param_2[1];
  pcVar3[0x23b2] = param_2[2];
  return uVar2;
}



// FUNCTION 143982cb0 FUN_143982cb0 body=151 status=ok
// SIG undefined FUN_143982cb0(void)

void FUN_143982cb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_143983950();
  if (iVar2 == 0) {
    lVar3 = FUN_1439837b0(param_3);
    if (lVar3 != 0) {
      puVar1 = *(undefined8 **)(lVar3 + 0x2390);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      if (*(longlong *)(lVar3 + 0x2398) == 0) {
        *(undefined8 *)(lVar3 + 0x2390) = 0;
      }
      else {
        *(longlong *)(lVar3 + 0x2390) = *(longlong *)(lVar3 + 0x2398);
        *(undefined8 *)(lVar3 + 0x2398) = 0;
      }
      if (*(longlong *)(lVar3 + 0x2390) != 0) {
        FUN_1439853a0(*(undefined4 *)(lVar3 + 8),*(longlong *)(lVar3 + 0x2390),0x20,FUN_143982cb0);
      }
    }
    FUN_143983980();
    return;
  }
  return;
}



// FUNCTION 143982d50 Curl_read32_le body=31 status=ok
// SIG undefined Curl_read32_le(void)

undefined4 Curl_read32_le(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 143982d70 FUN_143982d70 body=407 status=ok
// SIG undefined FUN_143982d70(void)

void FUN_143982d70(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *_Dst;
  char cVar5;
  
  iVar2 = FUN_143983950();
  if (iVar2 == 0) {
    pcVar4 = &DAT_146b95f20;
    do {
      if ((*pcVar4 != '\0') && (*(int *)(pcVar4 + 8) == param_1)) {
        _Dst = pcVar4 + (longlong)*(int *)(pcVar4 + 0x140) * 0x88 + 0x150;
        _guard_xfg_dispatch_icall_nop(_Dst,0,0x88);
        *(undefined8 *)_Dst = *param_2;
        *(undefined4 *)(_Dst + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
        _Dst[0x10] = *(char *)(param_2 + 2);
        _Dst[0x11] = *(char *)((longlong)param_2 + 0x11);
        _Dst[0x12] = *(char *)((longlong)param_2 + 0x12);
        _Dst[0x13] = *(char *)((longlong)param_2 + 0x13);
        _Dst[0x14] = *(char *)((longlong)param_2 + 0x14);
        _Dst[0x15] = *(char *)((longlong)param_2 + 0x15);
        _Dst[0x16] = *(char *)(param_2 + 1);
        _Dst[0x80] = *(char *)((longlong)param_2 + 9);
        _Dst[0x17] = *(char *)((longlong)param_2 + 0x26);
        cVar5 = -1 < (char)*(byte *)((longlong)param_2 + 0x27);
        if ((bool)cVar5) {
          _Dst[0x1a] = *(byte *)((longlong)param_2 + 0x27) & 0x7f;
          *(undefined2 *)(_Dst + 0x1c) = *(undefined2 *)((longlong)param_2 + 0x2a);
          *(undefined2 *)(_Dst + 0x1e) = *(undefined2 *)((longlong)param_2 + 0x2c);
        }
        if (-1 < (char)*(byte *)(param_2 + 5)) {
          uVar3 = (uint)(byte)cVar5;
          cVar5 = cVar5 + '\x01';
          lVar1 = (longlong)(int)uVar3 * 6;
          _Dst[lVar1 + 0x1a] = *(byte *)(param_2 + 5) & 0x7f;
          *(undefined2 *)(_Dst + lVar1 + 0x1c) = *(undefined2 *)((longlong)param_2 + 0x2e);
          *(undefined2 *)(_Dst + (longlong)(int)uVar3 * 6 + 0x1e) = *(undefined2 *)(param_2 + 6);
        }
        _Dst[0x18] = '\0';
        _Dst[0x19] = cVar5;
        FUN_143983b30(pcVar4,_Dst,param_2);
        if (*(int *)(pcVar4 + 0x138) < 0x40) {
          uVar3 = *(int *)(pcVar4 + 0x140) + 1U & 0x8000003f;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
          }
          *(uint *)(pcVar4 + 0x140) = uVar3;
          *(int *)(pcVar4 + 0x138) = *(int *)(pcVar4 + 0x138) + 1;
        }
        else {
          uVar3 = *(int *)(pcVar4 + 0x140) + 1U & 0x8000003f;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
          }
          *(uint *)(pcVar4 + 0x140) = uVar3;
          *(uint *)(pcVar4 + 0x13c) = uVar3;
        }
        *(char **)(pcVar4 + 0x148) = _Dst;
        break;
      }
      pcVar4 = pcVar4 + 0x23b8;
    } while ((longlong)pcVar4 < 0x146b9ee00);
    FUN_143983980();
  }
  return;
}



// FUNCTION 143982f10 FUN_143982f10 body=370 status=ok
// SIG undefined FUN_143982f10(void)

undefined8 FUN_143982f10(int param_1,int *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  
  piVar1 = &DAT_146b95f24;
  do {
    if ((piVar1[1] != 0) && (*piVar1 == 0)) {
      DAT_146b9ee00 = DAT_146b9ee00 + 1;
      if (DAT_146b9ee00 == 0) {
        DAT_146b9ee00 = 1;
      }
      iVar3 = (uint)DAT_146b9ee00 * 0x100 + param_1;
      *param_2 = iVar3;
      *piVar1 = iVar3;
      piVar1[2] = param_1;
      piVar1[0x11] = 9;
      FUN_143983880(piVar1 + -1);
      FUN_143983660(piVar1 + -1);
      return 0;
    }
    piVar1 = piVar1 + 0x8ee;
  } while ((longlong)piVar1 < 0x146b9ee04);
  puVar2 = &DAT_146b95f20;
  while (*(int *)(puVar2 + 4) != 0) {
    puVar2 = puVar2 + 0x23b8;
    if (0x146b9edff < (longlong)puVar2) {
      return 0x8001002d;
    }
  }
  DAT_146b9ee00 = DAT_146b9ee00 + 1;
  if (DAT_146b9ee00 == 0) {
    DAT_146b9ee00 = 1;
  }
  iVar3 = (uint)DAT_146b9ee00 * 0x100 + param_1;
  *param_2 = iVar3;
  *(int *)(puVar2 + 4) = iVar3;
  *(int *)(puVar2 + 0xc) = param_1;
  *(undefined4 *)(puVar2 + 0x48) = 9;
  if (param_1 != 0) {
    if (param_1 == 1) {
      *(undefined2 *)(puVar2 + 0x23b0) = 0;
      puVar2[0x23b2] = 0x40;
    }
    else {
      if (param_1 == 2) {
        *(undefined2 *)(puVar2 + 0x23b0) = 0x40;
        puVar2[0x23b2] = 0;
        FUN_143983660();
        return 0;
      }
      if (param_1 == 3) {
        *(undefined2 *)(puVar2 + 0x23b0) = 0x4000;
        puVar2[0x23b2] = 0;
        FUN_143983660();
        return 0;
      }
      if (param_1 == 4) {
        *(undefined2 *)(puVar2 + 0x23b0) = 0x20;
        puVar2[0x23b2] = 0x20;
        FUN_143983660();
        return 0;
      }
    }
  }
  FUN_143983660();
  return 0;
}



// FUNCTION 143983090 FUN_143983090 body=42 status=ok
// SIG undefined FUN_143983090(void)

undefined8 FUN_143983090(int param_1)

{
  int *piVar1;
  
  if (0 < param_1) {
    piVar1 = &DAT_146b95f24;
    do {
      if (*piVar1 == param_1) {
        return 0;
      }
      piVar1 = piVar1 + 0x8ee;
    } while ((longlong)piVar1 < 0x146b9ee04);
  }
  return 0x80010002;
}



// FUNCTION 1439830c0 FUN_1439830c0 body=667 status=ok
// SIG undefined FUN_1439830c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1439830c0(int param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 *param_6,char param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  char *pcVar10;
  char *_Dst;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined2 local_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  iVar7 = FUN_143983950();
  if (iVar7 == 0) {
    _Dst = &DAT_146b95f20;
    pcVar10 = &DAT_146b95f20;
    do {
      if ((*pcVar10 == '\x01') && (*(int *)(pcVar10 + 8) == param_1)) {
        *(undefined4 *)(pcVar10 + 0x44) = param_5;
        *(undefined4 *)(pcVar10 + 0x10) = param_2;
        FUN_143983660();
        FUN_143983980();
        return 0;
      }
      pcVar10 = pcVar10 + 0x23b8;
    } while ((longlong)pcVar10 < 0x146b9ee00);
    do {
      if (*_Dst == '\0') {
        local_48 = *(undefined4 *)(_Dst + 4);
        uVar2 = *(undefined4 *)(_Dst + 0x23b0);
        cVar1 = _Dst[1];
        local_44 = *(undefined4 *)(_Dst + 0xc);
        uVar3 = *(undefined4 *)(_Dst + 0x48);
        _guard_xfg_dispatch_icall_nop(_Dst,0,0x23b8);
        pcVar10 = _Dst + 0x14;
        *(int *)(_Dst + 8) = param_1;
        *(undefined4 *)(_Dst + 0x10) = param_2;
        if (pcVar10 != (char *)0x0) {
          if (param_4 != (undefined8 *)0x0) {
            uVar8 = param_4[1];
            *(undefined8 *)pcVar10 = *param_4;
            *(undefined8 *)(_Dst + 0x1c) = uVar8;
            uVar8 = param_4[3];
            *(undefined8 *)(_Dst + 0x24) = param_4[2];
            *(undefined8 *)(_Dst + 0x2c) = uVar8;
            uVar4 = *(undefined4 *)((longlong)param_4 + 0x24);
            uVar5 = *(undefined4 *)(param_4 + 5);
            uVar6 = *(undefined4 *)((longlong)param_4 + 0x2c);
            *(undefined4 *)(_Dst + 0x34) = *(undefined4 *)(param_4 + 4);
            *(undefined4 *)(_Dst + 0x38) = uVar4;
            *(undefined4 *)(_Dst + 0x3c) = uVar5;
            *(undefined4 *)(_Dst + 0x40) = uVar6;
            goto LAB_143983203;
          }
          pcVar10[0] = '\0';
          pcVar10[1] = '\0';
          pcVar10[2] = '\0';
          pcVar10[3] = '\0';
          pcVar10[4] = '\0';
          pcVar10[5] = '\0';
          pcVar10[6] = '\0';
          pcVar10[7] = '\0';
          _Dst[0x1c] = '\0';
          _Dst[0x1d] = '\0';
          _Dst[0x1e] = '\0';
          _Dst[0x1f] = '\0';
          _Dst[0x20] = '\0';
          _Dst[0x21] = '\0';
          _Dst[0x22] = '\0';
          _Dst[0x23] = '\0';
          _Dst[0x24] = '\0';
          _Dst[0x25] = '\0';
          _Dst[0x26] = '\0';
          _Dst[0x27] = '\0';
          _Dst[0x28] = '\0';
          _Dst[0x29] = '\0';
          _Dst[0x2a] = '\0';
          _Dst[0x2b] = '\0';
          _Dst[0x2c] = '\0';
          _Dst[0x2d] = '\0';
          _Dst[0x2e] = '\0';
          _Dst[0x2f] = '\0';
          _Dst[0x30] = '\0';
          _Dst[0x31] = '\0';
          _Dst[0x32] = '\0';
          _Dst[0x33] = '\0';
          _Dst[0x34] = '\0';
          _Dst[0x35] = '\0';
          _Dst[0x36] = '\0';
          _Dst[0x37] = '\0';
          _Dst[0x38] = '\0';
          _Dst[0x39] = '\0';
          _Dst[0x3a] = '\0';
          _Dst[0x3b] = '\0';
          _Dst[0x3c] = '\0';
          _Dst[0x3d] = '\0';
          _Dst[0x3e] = '\0';
          _Dst[0x3f] = '\0';
          _Dst[0x40] = '\0';
          _Dst[0x41] = '\0';
          _Dst[0x42] = '\0';
          _Dst[0x43] = '\0';
        }
        piVar9 = _errno();
        *piVar9 = 0x16;
        _invalid_parameter_noinfo();
LAB_143983203:
        *(undefined4 *)(_Dst + 0x44) = param_5;
        if (param_7 == '\x01') {
          FUN_143983b20(_Dst + 0x118);
          _Dst[0x128] = '\0';
          _Dst[0x129] = '\0';
          _Dst[0x12a] = '\0';
          _Dst[299] = '\0';
          FUN_143983cd0(_Dst,param_6);
          FUN_1439897c0(_Dst + 0x84);
          local_40 = *param_6;
          _local_38 = CONCAT26(*(undefined2 *)((longlong)param_6 + 0x14),
                               CONCAT24(*(undefined2 *)((longlong)param_6 + 0x12),
                                        CONCAT22(*(undefined2 *)((longlong)param_6 + 0xe),
                                                 *(undefined2 *)((longlong)param_6 + 10))));
          FUN_1439897f0(_Dst + 0x84,&local_40);
        }
        if (*(ushort *)(_Dst + 0x36) < 0x2250) {
          _Dst[300] = '|';
          _Dst[0x12d] = '\x10';
          _Dst[0x12e] = '\0';
          _Dst[0x12f] = '\0';
          _Dst[0x130] = -0x80;
          _Dst[0x131] = '\a';
          _Dst[0x132] = -0xe;
          _Dst[0x133] = '\x02';
        }
        else {
          _Dst[300] = -0x7a;
          _Dst[0x12d] = '\x11';
          _Dst[0x12e] = '\0';
          _Dst[0x12f] = '\0';
          _Dst[0x130] = -0x80;
          _Dst[0x131] = '\a';
          _Dst[0x132] = -0x52;
          _Dst[0x133] = '\x03';
        }
        *(undefined4 *)(_Dst + 4) = local_48;
        *(undefined4 *)(_Dst + 0xc) = local_44;
        _Dst[0x134] = '\r';
        _Dst[0x135] = '\r';
        _Dst[1] = cVar1 + '\x01';
        *(undefined4 *)(_Dst + 0x23b0) = uVar2;
        *(undefined4 *)(_Dst + 0x48) = uVar3;
        *_Dst = '\x01';
        FUN_143983660(_Dst);
        FUN_143983980();
        return 0;
      }
      _Dst = _Dst + 0x23b8;
    } while ((longlong)_Dst < 0x146b9ee00);
    FUN_143983980();
    uVar8 = 0x8001002d;
  }
  else {
    uVar8 = 0x80010001;
  }
  return uVar8;
}



// FUNCTION 143983360 FUN_143983360 body=89 status=ok
// SIG undefined FUN_143983360(void)

void FUN_143983360(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_143983950();
  if (iVar1 != 0) {
    return;
  }
  pcVar2 = &DAT_146b95f20;
  while ((*pcVar2 == '\0' || (*(int *)(pcVar2 + 8) != param_1))) {
    pcVar2 = pcVar2 + 0x23b8;
    if (0x146b9edff < (longlong)pcVar2) {
      FUN_143983980();
      return;
    }
  }
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  *pcVar2 = '\0';
  FUN_143983980();
  return;
}



// FUNCTION 1439833c0 FUN_1439833c0 body=164 status=ok
// SIG undefined FUN_1439833c0(void)

int FUN_1439833c0(ushort param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 9;
  if (((byte)param_1 & 0xf) < 10) {
    uVar4 = param_1 & 0xf;
  }
  else {
    uVar4 = 9;
  }
  if ((param_1 & 0xf0) < 0x91) {
    uVar2 = param_1 >> 4 & 0xf;
  }
  else {
    uVar2 = 9;
  }
  if ((param_1 & 0xf00) < 0x901) {
    uVar3 = param_1 >> 8 & 0xf;
  }
  else {
    uVar3 = 9;
  }
  if ((param_1 & 0xf000) < 0x9001) {
    uVar1 = (uint)(param_1 >> 0xc);
  }
  return uVar4 + (uVar2 + (uVar3 + uVar1 * 10) * 10) * 10;
}



// FUNCTION 143983470 FUN_143983470 body=80 status=ok
// SIG undefined FUN_143983470(void)

int FUN_143983470(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = &DAT_146b95f2c;
  iVar3 = 4;
  if (param_1 < 5) {
    iVar3 = param_1;
  }
  do {
    if (*piVar2 == iVar3) {
      return -0x7ffeffff;
    }
    piVar2 = piVar2 + 0x8ee;
  } while ((longlong)piVar2 < 0x146b9ee0c);
  iVar1 = FUN_143982f10(iVar3);
  iVar3 = 0;
  if (iVar1 < 0) {
    iVar3 = iVar1;
  }
  return iVar3;
}



// FUNCTION 1439834c0 FUN_1439834c0 body=66 status=ok
// SIG undefined FUN_1439834c0(void)

char * FUN_1439834c0(int param_1,undefined8 *param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = &DAT_146b95f20;
  do {
    if (((param_3 == '\0') || (*pcVar1 != '\0')) &&
       (pcVar2 = pcVar1, *(int *)(pcVar1 + 4) == param_1)) break;
    pcVar1 = pcVar1 + 0x23b8;
    pcVar2 = (char *)0x0;
  } while ((longlong)pcVar1 < 0x146b9ee00);
  *param_2 = pcVar2;
  pcVar1 = (char *)0x8001002d;
  if (pcVar2 != (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



// FUNCTION 143983510 FUN_143983510 body=24 status=ok
// SIG undefined FUN_143983510(void)

longlong FUN_143983510(void)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  return (ulonglong)DVar1 * 1000;
}



// FUNCTION 143983530 FUN_143983530 body=141 status=ok
// SIG undefined FUN_143983530(void)

uint FUN_143983530(longlong param_1,int param_2,int param_3,char param_4)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  iVar3 = 0;
  iVar4 = iVar3;
  if (0 < param_3) {
    do {
      bVar2 = (byte)param_2 & 7;
      iVar4 = param_2;
      if (param_2 < 0) {
        iVar4 = param_2 + 7;
        bVar2 = bVar2 - 8;
      }
      param_2 = param_2 + 1;
      uVar6 = *(byte *)((iVar4 >> 3) + param_1) >> (bVar2 & 0x1f) & 1;
      iVar4 = iVar3 + 1;
      uVar5 = uVar5 | uVar6 << ((byte)iVar3 & 0x1f);
      iVar3 = iVar4;
    } while (iVar4 < param_3);
  }
  if (((param_4 != '\0') && (uVar6 != 0)) && (iVar4 < 0x20)) {
    bVar2 = (byte)iVar4 & 0x1f;
    uVar6 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    uVar1 = (ulonglong)(0x20 - iVar4);
    do {
      uVar5 = uVar5 | uVar6;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return uVar5;
}



// FUNCTION 1439835c0 FUN_1439835c0 body=157 status=ok
// SIG undefined FUN_1439835c0(void)

void FUN_1439835c0(void)

{
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = &DAT_146b982d0;
  do {
    if (puVar2 + -0x11d8 != (undefined2 *)0x0) {
      iVar1 = *(int *)(puVar2 + -0x11d2);
      *(undefined4 *)(puVar2 + -0x11b4) = 9;
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          *puVar2 = 0;
          *(undefined1 *)(puVar2 + 1) = 0x40;
        }
        else if (iVar1 == 2) {
          *puVar2 = 0x40;
          *(undefined1 *)(puVar2 + 1) = 0;
        }
        else if (iVar1 == 3) {
          *puVar2 = 0x4000;
          *(undefined1 *)(puVar2 + 1) = 0;
        }
        else if (iVar1 == 4) {
          *puVar2 = 0x20;
          *(undefined1 *)(puVar2 + 1) = 0x20;
        }
      }
      FUN_143983660(puVar2 + -0x11d8);
    }
    puVar2 = puVar2 + 0x11dc;
  } while ((longlong)puVar2 < 0x146ba11b0);
  return;
}



// FUNCTION 143983660 FUN_143983660 body=191 status=ok
// SIG undefined FUN_143983660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143983660(char *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (*param_1 == '\x01') {
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_38 = 0x105;
    FUN_143985160(*(undefined4 *)(param_1 + 8),&local_38,0x20);
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (*param_1 == '\x01')) {
    local_28 = 0;
    local_20 = 0;
    local_38 = (ulonglong)*(ushort *)(param_1 + 0x23b0) << 0x30;
    local_30 = (ulonglong)(byte)param_1[0x23b2];
    local_38 = CONCAT62(local_38._2_6_,0x205);
    FUN_143985160(*(undefined4 *)(param_1 + 8),&local_38,0x20);
  }
  return;
}



// FUNCTION 143983720 FUN_143983720 body=134 status=ok
// SIG undefined FUN_143983720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143983720(void)

{
  char *pcVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  pcVar1 = &DAT_146b95f20;
  do {
    if ((pcVar1 != (char *)0x0) && (*pcVar1 == '\x01')) {
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_38 = 0x30005;
      FUN_143985160(*(undefined4 *)(pcVar1 + 8),&local_38,0x20);
    }
    pcVar1 = pcVar1 + 0x23b8;
  } while ((longlong)pcVar1 < 0x146b9ee00);
  return;
}



// FUNCTION 1439837b0 FUN_1439837b0 body=40 status=ok
// SIG undefined FUN_1439837b0(void)

char * FUN_1439837b0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = &DAT_146b95f20;
  while ((*pcVar1 == '\0' || (*(int *)(pcVar1 + 8) != param_1))) {
    pcVar1 = pcVar1 + 0x23b8;
    if (0x146b9edff < (longlong)pcVar1) {
      return (char *)0x0;
    }
  }
  return pcVar1;
}



// FUNCTION 1439837e0 FUN_1439837e0 body=44 status=ok
// SIG undefined FUN_1439837e0(void)

char * FUN_1439837e0(int param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = &DAT_146b95f20;
  while (((param_2 != '\0' && (*pcVar1 == '\0')) || (*(int *)(pcVar1 + 4) != param_1))) {
    pcVar1 = pcVar1 + 0x23b8;
    if (0x146b9edff < (longlong)pcVar1) {
      return (char *)0x0;
    }
  }
  return pcVar1;
}



// FUNCTION 143983810 FUN_143983810 body=41 status=ok
// SIG undefined FUN_143983810(void)

bool FUN_143983810(short param_1,short param_2)

{
  if (param_1 == 0x54c) {
    return param_2 == 0xba0;
  }
  return false;
}



// FUNCTION 143983840 FUN_143983840 body=50 status=ok
// SIG undefined FUN_143983840(void)

ulonglong FUN_143983840(short param_1,short param_2,int param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  uVar1 = in_RAX & 0xffffffffffffff00;
  if ((param_1 == 0x54c) &&
     (((param_2 == 0x5c4 || (param_2 == 0x9cc)) && (uVar1 = 0, 0x16 < param_3)))) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143983880 FUN_143983880 body=120 status=ok
// SIG undefined FUN_143983880(void)

undefined8 FUN_143983880(longlong param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0xc), iVar1 == 0)) {
    return 0x8001002d;
  }
  if (iVar1 == 1) {
    *(undefined2 *)(param_1 + 0x23b0) = 0;
    *(undefined1 *)(param_1 + 0x23b2) = 0x40;
    return 0;
  }
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      *(undefined2 *)(param_1 + 0x23b0) = 0x4000;
      *(undefined1 *)(param_1 + 0x23b2) = 0;
      return 0;
    }
    if (iVar1 != 4) {
      return 0x80010002;
    }
    *(undefined2 *)(param_1 + 0x23b0) = 0x20;
    *(undefined1 *)(param_1 + 0x23b2) = 0x20;
    return 0;
  }
  *(undefined2 *)(param_1 + 0x23b0) = 0x40;
  *(undefined1 *)(param_1 + 0x23b2) = 0;
  return 0;
}



// FUNCTION 143983900 FUN_143983900 body=43 status=ok
// SIG undefined FUN_143983900(void)

undefined8 FUN_143983900(void)

{
  if (DAT_146b9ee08 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b9ee38);
    return 0;
  }
  return 0x80010002;
}



// FUNCTION 143983930 FUN_143983930 body=24 status=ok
// SIG undefined FUN_143983930(void)

void FUN_143983930(void)

{
  if (DAT_146b9ee08 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143983940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b9ee38);
    return;
  }
  return;
}



// FUNCTION 143983950 FUN_143983950 body=43 status=ok
// SIG undefined FUN_143983950(void)

undefined8 FUN_143983950(void)

{
  if (DAT_146b9ee08 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b9ee10);
    return 0;
  }
  return 0x80010002;
}



// FUNCTION 143983980 FUN_143983980 body=24 status=ok
// SIG undefined FUN_143983980(void)

void FUN_143983980(void)

{
  if (DAT_146b9ee08 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143983990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b9ee10);
    return;
  }
  return;
}



// FUNCTION 1439839a0 FUN_1439839a0 body=51 status=ok
// SIG undefined FUN_1439839a0(void)

void FUN_1439839a0(void)

{
  if (DAT_146b9ee08 == '\0') {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b9ee10);
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b9ee38);
  }
  DAT_146b9ee08 = 1;
  return;
}



// FUNCTION 1439839e0 FUN_1439839e0 body=42 status=ok
// SIG undefined FUN_1439839e0(void)

void FUN_1439839e0(void)

{
  DAT_146b9ee08 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_146b9ee10);
                    /* WARNING: Could not recover jumptable at 0x000143983a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_146b9ee38);
  return;
}



// FUNCTION 143983a10 FUN_143983a10 body=85 status=ok
// SIG undefined FUN_143983a10(void)

uint FUN_143983a10(byte param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(&DAT_145ca92e0 + (ulonglong)(byte)~param_1 * 4) ^ 0xffffff;
  for (param_3 = param_3 + -4; 0 < param_3; param_3 = param_3 + -1) {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    uVar2 = *(uint *)(&DAT_145ca92e0 + (ulonglong)(byte)(bVar1 ^ (byte)uVar2) * 4) ^ uVar2 >> 8;
  }
  return ~uVar2;
}



// FUNCTION 143983a70 FUN_143983a70 body=96 status=ok
// SIG undefined FUN_143983a70(void)

undefined4 FUN_143983a70(byte param_1,byte *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  
  param_3 = param_3 + -4;
  puVar1 = (uint *)(param_2 + param_3);
  uVar3 = *(uint *)(&DAT_145ca92e0 + (ulonglong)(byte)~param_1 * 4) ^ 0xffffff;
  for (; 0 < param_3; param_3 = param_3 + -1) {
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar3 = *(uint *)(&DAT_145ca92e0 + (ulonglong)(byte)(bVar2 ^ (byte)uVar3) * 4) ^ uVar3 >> 8;
  }
  return CONCAT31((int3)(~uVar3 >> 8),*puVar1 != ~uVar3);
}



// FUNCTION 143983ad0 FUN_143983ad0 body=45 status=ok
// SIG undefined FUN_143983ad0(void)

undefined8 FUN_143983ad0(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1439837e0(param_1,0);
  if (lVar1 != 0) {
    *param_2 = *(undefined4 *)(lVar1 + 0x48);
    return 0;
  }
  return 0x8001002d;
}



// FUNCTION 143983b00 FUN_143983b00 body=13 status=ok
// SIG undefined FUN_143983b00(void)

void FUN_143983b00(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  *param_1 = 0;
  return;
}



// FUNCTION 143983b10 Reset body=9 status=ok
// SIG undefined Reset(void)

void FQuartzTransportTimeStamp::Reset(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 143983b20 FUN_143983b20 body=16 status=ok
// SIG undefined FUN_143983b20(void)

void FUN_143983b20(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 143983b30 FUN_143983b30 body=413 status=ok
// SIG undefined FUN_143983b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143983b30(longlong param_1,longlong param_2,longlong param_3)

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
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar16 = *(uint *)(param_1 + 0x128);
  if (((*(byte *)(param_1 + 0x48) & 1) != 0) && (9 < uVar16)) {
    local_50 = local_38;
    local_58 = &local_48;
    iVar17 = FUN_143989940(param_1 + 0x84,*(undefined2 *)(param_3 + 0x1a),
                           *(undefined2 *)(param_3 + 0x1c),*(undefined2 *)(param_3 + 0x1e));
    if (iVar17 != 0) {
      *(undefined4 *)(param_1 + 0x50) = local_48;
      *(undefined4 *)(param_1 + 0x58) = local_40;
      *(undefined4 *)(param_1 + 0x54) = local_44;
    }
  }
  *(undefined2 *)(param_2 + 0x50) = *(undefined2 *)(param_3 + 0x16);
  *(undefined1 *)(param_2 + 0x6c) = *(undefined1 *)(param_3 + 0x18);
  if (uVar16 < 10) {
    *(undefined8 *)(param_2 + 100) = 0x3f800000;
    *(undefined8 *)(param_2 + 0x54) = 0;
    *(undefined8 *)(param_2 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x78) = 0;
    *(undefined4 *)(param_2 + 0x7c) = 0x3f800000;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
  else {
    sVar11 = *(short *)(param_3 + 0x24);
    sVar12 = *(short *)(param_3 + 0x1a);
    fVar1 = *(float *)(param_1 + 0x70);
    sVar13 = *(short *)(param_3 + 0x1c);
    fVar2 = *(float *)(param_1 + 0x7c);
    fVar3 = *(float *)(param_1 + 0x50);
    sVar14 = *(short *)(param_3 + 0x1e);
    fVar4 = *(float *)(param_1 + 0x5c);
    fVar5 = *(float *)(param_1 + 0x54);
    sVar15 = *(short *)(param_3 + 0x20);
    fVar6 = *(float *)(param_1 + 0x60);
    fVar7 = *(float *)(param_1 + 0x58);
    fVar8 = *(float *)(param_1 + 100);
    fVar9 = *(float *)(param_1 + 0x68);
    fVar10 = *(float *)(param_1 + 0x74);
    *(float *)(param_2 + 100) =
         ((float)(int)*(short *)(param_3 + 0x22) - *(float *)(param_1 + 0x6c)) *
         *(float *)(param_1 + 0x78);
    *(float *)(param_2 + 0x68) = ((float)(int)sVar11 - fVar1) * fVar2;
    *(float *)(param_2 + 0x60) = ((float)(int)sVar15 - fVar9) * fVar10;
    *(float *)(param_2 + 0x54) = ((float)(int)sVar12 - fVar3) * fVar4;
    *(float *)(param_2 + 0x58) = ((float)(int)sVar13 - fVar5) * fVar6;
    *(float *)(param_2 + 0x5c) = ((float)(int)sVar14 - fVar7) * fVar8;
  }
  return;
}



// FUNCTION 143983cd0 FUN_143983cd0 body=849 status=ok
// SIG undefined FUN_143983cd0(void)

undefined8 FUN_143983cd0(longlong param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar7 = *(int *)(param_1 + 0x10);
  fVar13 = (float)(int)*param_2;
  fVar14 = (float)(int)param_2[1];
  fVar15 = (float)(int)param_2[2];
  if (iVar7 == 0x11) {
    fVar10 = 540.0;
    fVar9 = 540.0;
    param_2[9] = 0x21c;
    param_2[10] = 0x21c;
  }
  else {
    fVar10 = (float)(int)param_2[9];
    fVar9 = (float)(int)param_2[10];
  }
  sVar1 = param_2[0xb];
  sVar2 = param_2[0xc];
  sVar3 = param_2[0xd];
  sVar4 = param_2[0xe];
  sVar5 = param_2[0xf];
  sVar6 = param_2[0x10];
  fVar16 = ABS((float)(int)param_2[3] - fVar13) + ABS((float)(int)param_2[4] - fVar13);
  fVar11 = ABS((float)(int)param_2[5] - fVar14) + ABS((float)(int)param_2[6] - fVar14);
  fVar12 = ABS((float)(int)param_2[7] - fVar15) + ABS((float)(int)param_2[8] - fVar15);
  if (((fVar16 == 0.0) || (fVar11 == 0.0)) || (fVar12 == 0.0)) {
    uVar8 = 0x80010002;
  }
  else {
    *(float *)(param_1 + 0x50) = fVar13;
    *(float *)(param_1 + 0x54) = fVar14;
    fVar13 = (fVar9 + fVar10) * 0.5 * 0.017453292;
    *(float *)(param_1 + 0x58) = fVar15;
    *(float *)(param_1 + 0x5c) = fVar13 / (fVar16 * 0.5);
    *(float *)(param_1 + 100) = fVar13 / (fVar12 * 0.5);
    *(float *)(param_1 + 0x60) = fVar13 / (fVar11 * 0.5);
    fVar15 = ABS((float)(int)sVar1) + ABS((float)(int)sVar2);
    *(float *)(param_1 + 0x68) = (float)(int)sVar1 - fVar15 * 0.5;
    fVar14 = ABS((float)(int)sVar3) + ABS((float)(int)sVar4);
    *(float *)(param_1 + 0x6c) = (float)(int)sVar3 - fVar14 * 0.5;
    fVar13 = ABS((float)(int)sVar5) + ABS((float)(int)sVar6);
    *(float *)(param_1 + 0x70) = (float)(int)sVar5 - fVar13 * 0.5;
    *(float *)(param_1 + 0x78) = 2.0 / fVar14;
    *(float *)(param_1 + 0x74) = 2.0 / fVar15;
    *(float *)(param_1 + 0x7c) = 2.0 / fVar13;
    if (iVar7 < 0x13) {
      *(undefined4 *)(param_1 + 0x80) = 0x40e33333;
    }
    else {
      *(undefined4 *)(param_1 + 0x80) = 0x40aa8f5c;
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 143984030 FUN_143984030 body=106 status=ok
// SIG undefined FUN_143984030(void)

longlong FUN_143984030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar2 = FUN_143984880();
  *(undefined2 *)(lVar2 + 0x18) = 0;
  puVar1 = (undefined8 *)(lVar2 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(lVar2 + 0x38) = 7;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    puVar3 = puVar1;
    if (7 < *(ulonglong *)(lVar2 + 0x38)) {
      puVar3 = (undefined8 *)*puVar1;
    }
    *(undefined2 *)puVar3 = 0;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Assign_rv
              (puVar1,param_2,param_3,param_4,uVar4);
  }
  return lVar2;
}



// FUNCTION 1439840a0 FUN_1439840a0 body=710 status=ok
// SIG undefined FUN_1439840a0(void)

undefined8 *
FUN_1439840a0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (0x3fffffffffffffd < (ulonglong)param_1[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  plVar5 = (longlong *)FUN_143984030(param_1,param_5);
  param_1[1] = param_1[1] + 1;
  plVar5[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(*param_1 + 0x10)) {
      *(longlong **)(*param_1 + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)*param_1) {
      *(longlong **)*param_1 = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar6 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(*param_1 + 8);
      *param_2 = plVar5;
      *(undefined1 *)(lVar2 + 0x18) = 1;
      return param_2;
    }
    plVar7 = (longlong *)plVar6[1];
    plVar8 = *(longlong **)plVar7[1];
    if (plVar7 == plVar8) {
      lVar2 = ((longlong *)plVar7[1])[2];
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined1 *)(plVar7 + 3) = 1;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar6[1] + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar7[2]) {
          plVar6 = (longlong *)plVar7[2];
          plVar7[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x19) == '\0') {
            *(longlong **)(*plVar6 + 8) = plVar7;
          }
          plVar6[1] = plVar7[1];
          if (plVar7 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar6;
          }
          else {
            plVar8 = (longlong *)plVar7[1];
            if (plVar7 == (longlong *)*plVar8) {
              *plVar8 = (longlong)plVar6;
            }
            else {
              plVar8[2] = (longlong)plVar6;
            }
          }
          *plVar6 = (longlong)plVar7;
          plVar7[1] = (longlong)plVar6;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)*plVar7;
        *plVar7 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar7;
        }
        else {
          plVar3 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar3[2]) {
            plVar3[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
          else {
            *plVar3 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
        }
LAB_14398432e:
        plVar7[1] = (longlong)plVar8;
      }
    }
    else {
      if ((char)plVar8[3] != '\0') {
        if (plVar6 == (longlong *)*plVar7) {
          lVar2 = *plVar7;
          *plVar7 = *(longlong *)(lVar2 + 0x10);
          if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
            *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar7;
          }
          *(longlong *)(lVar2 + 8) = plVar7[1];
          if (plVar7 == *(longlong **)(*param_1 + 8)) {
            *(longlong *)(*param_1 + 8) = lVar2;
          }
          else {
            plVar6 = (longlong *)plVar7[1];
            if (plVar7 == (longlong *)plVar6[2]) {
              plVar6[2] = lVar2;
            }
            else {
              *plVar6 = lVar2;
            }
          }
          *(longlong **)(lVar2 + 0x10) = plVar7;
          plVar7[1] = lVar2;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)plVar7[2];
        plVar7[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar4 = (undefined8 *)plVar7[1];
          if (plVar7 == (longlong *)*puVar4) {
            *puVar4 = plVar8;
          }
          else {
            puVar4[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar7;
        goto LAB_14398432e;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(plVar8 + 3) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 143984370 FUN_143984370 body=673 status=ok
// SIG undefined FUN_143984370(void)

undefined8 *
FUN_143984370(longlong *param_1,undefined8 *param_2,char param_3,ushort *param_4,undefined1 param_5)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  longlong *plVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  undefined8 uVar14;
  
  uVar14 = 0xfffffffffffffffe;
  puVar6 = (undefined8 *)*param_1;
  uVar11 = 1;
  puVar13 = puVar6;
  if (*(char *)((longlong)puVar6[1] + 0x19) == '\0') {
    uVar2 = *(ulonglong *)(param_4 + 8);
    puVar10 = (undefined8 *)puVar6[1];
    do {
      puVar13 = puVar10;
      puVar7 = (ushort *)(puVar13 + 4);
      if (param_3 == '\0') {
        if (7 < (ulonglong)puVar13[7]) {
          puVar7 = *(ushort **)puVar7;
        }
        puVar9 = param_4;
        if (7 < *(ulonglong *)(param_4 + 0xc)) {
          puVar9 = *(ushort **)param_4;
        }
        uVar3 = puVar13[6];
        uVar12 = uVar3;
        if (uVar2 < uVar3) {
          uVar12 = uVar2;
        }
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          if (*puVar9 != *puVar7) {
            uVar11 = 1;
            if (*puVar9 < *puVar7) {
              uVar11 = 0xffffffff;
            }
            goto LAB_1439844af;
          }
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar11 = 0;
LAB_1439844af:
        if (uVar11 == 0) {
          if (uVar2 < uVar3) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = 0;
          }
        }
        uVar11 = uVar11 >> 0x1f;
      }
      else {
        puVar9 = param_4;
        if (7 < *(ulonglong *)(param_4 + 0xc)) {
          puVar9 = *(ushort **)param_4;
        }
        if (7 < (ulonglong)puVar13[7]) {
          puVar7 = *(ushort **)puVar7;
        }
        uVar3 = puVar13[6];
        uVar12 = uVar2;
        if (uVar3 < uVar2) {
          uVar12 = uVar3;
        }
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          if (*puVar7 != *puVar9) {
            uVar11 = 1;
            if (*puVar7 < *puVar9) {
              uVar11 = 0xffffffff;
            }
            goto LAB_14398442f;
          }
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        uVar11 = 0;
LAB_14398442f:
        if (uVar11 == 0) {
          if (uVar3 < uVar2) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = 0;
          }
        }
        uVar11 = uVar11 >> 0x1f ^ 1;
      }
      if ((char)uVar11 == '\0') {
        puVar10 = (undefined8 *)puVar13[2];
      }
      else {
        puVar10 = (undefined8 *)*puVar13;
      }
    } while (*(char *)((longlong)puVar10 + 0x19) == '\0');
  }
  puVar10 = puVar13;
  if ((char)uVar11 != '\0') {
    if (puVar13 == (undefined8 *)*puVar6) {
      puVar6 = (undefined8 *)
               FUN_1439840a0(param_1,local_res8,1,puVar13,param_4,param_5,0xfffffffffffffffe);
      *param_2 = *puVar6;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar13 + 0x19) == '\0') {
      puVar10 = (undefined8 *)*puVar13;
      if (*(char *)((longlong)puVar10 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar10[2] + 0x19);
        puVar6 = (undefined8 *)puVar10[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar6[2] + 0x19);
          puVar10 = puVar6;
          puVar6 = (undefined8 *)puVar6[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar13[1] + 0x19);
        puVar6 = (undefined8 *)puVar13[1];
        puVar10 = puVar13;
        while ((puVar4 = puVar6, cVar1 == '\0' && (puVar10 == (undefined8 *)*puVar4))) {
          cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
          puVar6 = (undefined8 *)puVar4[1];
          puVar10 = puVar4;
        }
        if (*(char *)((longlong)puVar10 + 0x19) == '\0') {
          puVar10 = puVar4;
        }
      }
    }
    else {
      puVar10 = (undefined8 *)puVar13[2];
    }
  }
  plVar8 = puVar10 + 4;
  puVar7 = param_4;
  if (7 < *(ulonglong *)(param_4 + 0xc)) {
    puVar7 = *(ushort **)param_4;
  }
  if (7 < (ulonglong)puVar10[7]) {
    plVar8 = (longlong *)*plVar8;
  }
  iVar5 = FUN_143984bb0(plVar8,puVar10[6],puVar7,*(undefined8 *)(param_4 + 8));
  if (iVar5 < 0) {
    puVar6 = (undefined8 *)FUN_1439840a0(param_1,local_res8,uVar11,puVar13,param_4,param_5,uVar14);
    *param_2 = *puVar6;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = puVar10;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143984620 FUN_143984620 body=189 status=ok
// SIG undefined FUN_143984620(void)

undefined8 * FUN_143984620(longlong *param_1,ushort *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar5 = (undefined8 *)*param_1;
  if (*(char *)((longlong)puVar5[1] + 0x19) == '\0') {
    uVar1 = *(ulonglong *)(param_2 + 8);
    puVar8 = (undefined8 *)puVar5[1];
    do {
      puVar3 = (ushort *)(puVar8 + 4);
      puVar4 = param_2;
      if (7 < *(ulonglong *)(param_2 + 0xc)) {
        puVar4 = *(ushort **)param_2;
      }
      if (7 < (ulonglong)puVar8[7]) {
        puVar3 = *(ushort **)puVar3;
      }
      uVar2 = puVar8[6];
      uVar7 = uVar1;
      if (uVar2 < uVar1) {
        uVar7 = uVar2;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if (*puVar3 != *puVar4) {
          iVar6 = 1;
          if (*puVar3 < *puVar4) {
            iVar6 = -1;
          }
          goto LAB_143984685;
        }
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      iVar6 = 0;
LAB_143984685:
      if (iVar6 == 0) {
        if (uVar2 < uVar1) goto LAB_1439846d7;
LAB_14398468f:
        puVar9 = (undefined8 *)*puVar8;
        puVar5 = puVar8;
      }
      else {
        if (-1 < iVar6) goto LAB_14398468f;
LAB_1439846d7:
        puVar9 = (undefined8 *)puVar8[2];
      }
      puVar8 = puVar9;
    } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
  }
  return puVar5;
}



// FUNCTION 1439846e0 FUN_1439846e0 body=95 status=ok
// SIG undefined FUN_1439846e0(void)

void FUN_1439846e0(undefined8 *param_1)

{
  if ((7 < (ulonglong)param_1[3]) && ((void *)*param_1 != (void *)0x0)) {
    if (DAT_146ba03a0 == (code *)0x0) {
      free((void *)*param_1);
    }
    else {
      (*DAT_146ba03a0)();
    }
  }
  param_1[3] = 7;
  param_1[2] = 0;
  if ((ulonglong)param_1[3] < 8) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    *(undefined2 *)*param_1 = 0;
  }
  return;
}



// FUNCTION 143984740 FUN_143984740 body=76 status=ok
// SIG undefined FUN_143984740(void)

void FUN_143984740(undefined8 *param_1)

{
  undefined1 local_res8 [32];
  
  FUN_1439874d0(param_1,local_res8,*(undefined8 *)*param_1,(undefined8 *)*param_1,0xfffffffffffffffe
               );
  if ((void *)*param_1 != (void *)0x0) {
    if (DAT_146ba03a0 == (code *)0x0) {
      free((void *)*param_1);
    }
    else {
      (*DAT_146ba03a0)();
    }
  }
  return;
}



// FUNCTION 143984790 _Assign_rv body=141 status=ok
// SIG undefined _Assign_rv(void)

void std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Assign_rv
               (undefined8 *param_1,undefined8 *param_2)

{
  if ((ulonglong)param_2[3] < 8) {
    if (param_2[2] + 1 != 0) {
      memmove(param_1,param_2,(param_2[2] + 1) * 2);
    }
  }
  else {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_2;
    }
    *param_2 = 0;
  }
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_2[3] = 7;
  param_2[2] = 0;
  if (7 < (ulonglong)param_2[3]) {
    *(undefined2 *)*param_2 = 0;
    return;
  }
  *(undefined2 *)param_2 = 0;
  return;
}



// FUNCTION 143984820 FUN_143984820 body=93 status=ok
// SIG undefined FUN_143984820(void)

void FUN_143984820(void)

{
  void *pvVar1;
  
  if (DAT_146ba03a8 == (code *)0x0) {
    pvVar1 = malloc(0x40);
  }
  else {
    pvVar1 = (void *)(*DAT_146ba03a8)();
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined8 *)((longlong)pvVar1 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)pvVar1 + 8) = pvVar1;
  }
  if ((undefined8 *)((longlong)pvVar1 + 0x10) != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)pvVar1 + 0x10) = pvVar1;
  }
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}



// FUNCTION 143984880 FUN_143984880 body=103 status=ok
// SIG undefined FUN_143984880(void)

undefined8 * FUN_143984880(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (DAT_146ba03a8 == (code *)0x0) {
    puVar1 = malloc(0x40);
  }
  else {
    puVar1 = (undefined8 *)(*DAT_146ba03a8)();
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}



// FUNCTION 1439848f0 FUN_1439848f0 body=294 status=ok
// SIG undefined FUN_1439848f0(void)

void FUN_1439848f0(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = param_2 | 7;
  if (uVar4 < 0x7fffffffffffffff) {
    uVar1 = param_1[3];
    uVar3 = uVar1 >> 1;
    param_2 = uVar4;
    if ((uVar4 / 3 < uVar3) && (param_2 = uVar3 + uVar1, 0x7ffffffffffffffe - uVar3 < uVar1)) {
      param_2 = 0x7ffffffffffffffe;
    }
  }
  if (DAT_146ba03a8 == (code *)0x0) {
    _Dst = malloc(param_2 * 2 + 2);
  }
  else {
    _Dst = (undefined8 *)(*DAT_146ba03a8)();
  }
  if (param_3 != 0) {
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (param_3 != 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,puVar2,param_3 * 2);
    }
  }
  if ((7 < (ulonglong)param_1[3]) && ((void *)*param_1 != (void *)0x0)) {
    if (DAT_146ba03a0 == (code *)0x0) {
      free((void *)*param_1);
    }
    else {
      (*DAT_146ba03a0)();
    }
  }
  param_1[3] = 7;
  param_1[2] = 0;
  puVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  *(undefined2 *)puVar2 = 0;
  *param_1 = _Dst;
  param_1[3] = param_2;
  param_1[2] = param_3;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = _Dst;
  }
  *(undefined2 *)((longlong)param_1 + param_3 * 2) = 0;
  return;
}



// FUNCTION 143984a30 FUN_143984a30 body=191 status=ok
// SIG undefined FUN_143984a30(void)

void FUN_143984a30(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_143984a30(param_1,param_2[2],param_3,param_4,uVar4);
    plVar2 = (longlong *)*param_2;
    plVar3 = param_2 + 4;
    if ((7 < (ulonglong)param_2[7]) && ((void *)*plVar3 != (void *)0x0)) {
      if (DAT_146ba03a0 == (code *)0x0) {
        free((void *)*plVar3);
      }
      else {
        (*DAT_146ba03a0)();
      }
    }
    param_2[7] = 7;
    param_2[6] = 0;
    if (7 < (ulonglong)param_2[7]) {
      plVar3 = (longlong *)*plVar3;
    }
    *(undefined2 *)plVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      if (DAT_146ba03a0 == (code *)0x0) {
        free(param_2);
      }
      else {
        (*DAT_146ba03a0)();
      }
    }
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 143984af0 _Lrotate body=85 status=ok
// SIG undefined _Lrotate(void)

void std::
     _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
     ::_Lrotate(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// FUNCTION 143984b50 _Rrotate body=89 status=ok
// SIG undefined _Rrotate(void)

void std::
     _Tree_val<std::_Tree_simple_types<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_>_>
     ::_Rrotate(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*param_1 + 8)) {
    *(longlong *)(*param_1 + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// FUNCTION 143984bb0 FUN_143984bb0 body=130 status=ok
// SIG undefined FUN_143984bb0(void)

uint FUN_143984bb0(ushort *param_1,ulonglong param_2,ushort *param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = param_4;
  if (param_2 < param_4) {
    uVar2 = param_2;
  }
  do {
    if (uVar2 == 0) {
      uVar1 = 0;
LAB_143984bd5:
      if (uVar1 != 0) {
        return uVar1;
      }
      if (param_4 <= param_2) {
        return (uint)(param_4 < param_2);
      }
      return 0xffffffff;
    }
    if (*param_1 != *param_3) {
      uVar1 = 1;
      if (*param_1 < *param_3) {
        uVar1 = 0xffffffff;
      }
      goto LAB_143984bd5;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    uVar2 = uVar2 - 1;
  } while( true );
}



// FUNCTION 143984c40 FUN_143984c40 body=319 status=ok
// SIG undefined FUN_143984c40(void)

longlong * FUN_143984c40(wchar_t *param_1,char param_2)

{
  size_t _Size;
  char cVar1;
  void *_Dst;
  undefined2 *puVar2;
  longlong lVar3;
  rsize_t _SizeInWords;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar4;
  
  iVar8 = 0;
  puVar2 = &DAT_146b9eea2;
  iVar5 = iVar8;
  iVar6 = iVar8;
  do {
    if (*(longlong *)(puVar2 + -0x11) != 0) {
      cVar1 = FUN_143983810(puVar2[-1]);
      if (cVar1 == '\0') {
        cVar1 = FUN_143983840(puVar2[-1],*puVar2,*(undefined4 *)(puVar2 + 1));
        if (cVar1 != '\0') {
          iVar6 = iVar6 + 1;
        }
      }
      else {
        iVar5 = iVar5 + 1;
      }
    }
    puVar2 = puVar2 + 0xf4;
  } while ((longlong)puVar2 < 0x146b9fde2);
  if (((iVar6 != 4) || (param_2 != '\x01')) && ((iVar5 != 4 || (param_2 != '\0')))) {
    plVar7 = &DAT_146b9ee80;
    do {
      if (*plVar7 == 0) {
        lVar3 = -1;
        do {
          lVar4 = lVar3;
          lVar3 = lVar4 + 1;
        } while (param_1[lVar3] != L'\0');
        _SizeInWords = lVar4 + 2;
        _Size = _SizeInWords * 2;
        if (DAT_146ba03a8 == (code *)0x0) {
          _Dst = malloc(_Size);
        }
        else {
          _Dst = (void *)(*DAT_146ba03a8)();
        }
        *plVar7 = (longlong)_Dst;
        if (_Dst != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
          wcsncpy_s((wchar_t *)*plVar7,_SizeInWords,param_1,0xffffffffffffffff);
          *(int *)(plVar7 + 1) = iVar8 + 1;
          return plVar7;
        }
      }
      iVar8 = iVar8 + 1;
      plVar7 = plVar7 + 0x3d;
    } while ((longlong)plVar7 < 0x146b9fdc0);
  }
  return (longlong *)0x0;
}



// FUNCTION 143984d80 FUN_143984d80 body=211 status=ok
// SIG undefined FUN_143984d80(void)

longlong * FUN_143984d80(wchar_t *param_1,undefined8 param_2,int param_3)

{
  size_t _Size;
  void *_Dst;
  longlong lVar1;
  rsize_t _SizeInWords;
  longlong *plVar3;
  longlong lVar2;
  
  if (7 < param_3 - 1U) {
    return (longlong *)0x0;
  }
  plVar3 = &DAT_146b9ee80 + (longlong)(param_3 + -1) * 0x3d;
  if (*plVar3 == 0) {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (param_1[lVar1] != L'\0');
    _SizeInWords = lVar2 + 2;
    _Size = _SizeInWords * 2;
    if (DAT_146ba03a8 == (code *)0x0) {
      _Dst = malloc(_Size);
    }
    else {
      _Dst = (void *)(*DAT_146ba03a8)();
    }
    *plVar3 = (longlong)_Dst;
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
      wcsncpy_s((wchar_t *)*plVar3,_SizeInWords,param_1,0xffffffffffffffff);
      (&DAT_146b9ee88)[(longlong)(param_3 + -1) * 0x7a] = param_3;
      return plVar3;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 143984e60 FUN_143984e60 body=81 status=ok
// SIG undefined FUN_143984e60(void)

void FUN_143984e60(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*(char *)(param_1 + 5) == '\0') {
      CloseHandle((HANDLE)param_1[2]);
    }
    if ((void *)*param_1 != (void *)0x0) {
      if (DAT_146ba03a0 == (code *)0x0) {
        free((void *)*param_1);
      }
      else {
        (*DAT_146ba03a0)();
      }
    }
    _guard_xfg_dispatch_icall_nop(param_1,0,0x1e8);
  }
  return;
}



// FUNCTION 143984ec0 FUN_143984ec0 body=127 status=ok
// SIG undefined FUN_143984ec0(void)

undefined1 FUN_143984ec0(void)

{
  if (DAT_146b9ee70 != '\0') {
    return 1;
  }
  FUN_1439839a0();
  FUN_1439835c0();
  DAT_146b9ee73 = 1;
  DAT_146b9ee72 = 1;
  DAT_146b9ee74 = 1;
  DAT_146b9ee70 = 1;
  DAT_146b9ee60 = _beginthread(FUN_143987d00,0,(void *)0x0);
  if ((DAT_146b9ee60 != 0xffffffffffffffff) &&
     (DAT_146b9ee68 = _beginthread(FUN_143986690,0,(void *)0x0), DAT_146b9ee68 != 0xffffffffffffffff
     )) {
    return 1;
  }
  return 0;
}



// FUNCTION 143984f40 FUN_143984f40 body=520 status=ok
// SIG undefined FUN_143984f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143984f40(longlong param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *_Dst;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78 [2];
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar7 = 0xe2;
  if (param_2 == '\0') {
    uVar7 = 0x14;
  }
  if (param_1 == 0) {
    uVar5 = 0x8001002d;
  }
  else {
    cVar2 = _guard_xfg_dispatch_icall_nop(param_1,local_78);
    if (cVar2 != '\0') {
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      iVar3 = _guard_xfg_dispatch_icall_nop(local_78[0]);
      if (iVar3 == 0x110000) {
        bVar1 = 0x40 < (ushort)((ulonglong)local_68 >> 0x20);
        if (bVar1) {
          uVar7 = 8;
        }
        uVar8 = 0x30;
        if (!bVar1) {
          uVar8 = 0x11;
        }
        uVar6 = (uint)(ushort)local_60;
        if (uVar6 < uVar8) {
          _guard_xfg_dispatch_icall_nop(local_78[0]);
          return 0x80010028;
        }
        if (DAT_146ba03a8 == (code *)0x0) {
          _Dst = malloc(local_60 & 0xffff);
        }
        else {
          _Dst = (undefined1 *)(*DAT_146ba03a8)();
        }
        if (_Dst != (undefined1 *)0x0) {
          _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar6);
          *_Dst = uVar7;
          _Dst[1] = 2;
          if (bVar1) {
            uVar4 = FUN_143983a10(0x53,_Dst,uVar8);
            *(undefined4 *)(_Dst + (uVar8 - 4)) = uVar4;
          }
          cVar2 = _guard_xfg_dispatch_icall_nop(param_1,_Dst,uVar8);
          if (cVar2 != '\0') {
            if (DAT_146ba03a0 == (code *)0x0) {
              free(_Dst);
            }
            else {
              (*DAT_146ba03a0)();
            }
            _guard_xfg_dispatch_icall_nop(local_78[0]);
            return 0;
          }
          if (DAT_146ba03a0 == (code *)0x0) {
            free(_Dst);
          }
          else {
            (*DAT_146ba03a0)();
          }
          GetLastError();
          _guard_xfg_dispatch_icall_nop(local_78[0]);
          return 0x8001002b;
        }
        _guard_xfg_dispatch_icall_nop(local_78[0]);
        return 0x80010004;
      }
      _guard_xfg_dispatch_icall_nop(local_78[0]);
    }
    uVar5 = 0x8001002b;
  }
  return uVar5;
}



// FUNCTION 143985150 FUN_143985150 body=8 status=ok
// SIG undefined FUN_143985150(void)

undefined1 FUN_143985150(void)

{
  return DAT_146b9ee71;
}



// FUNCTION 143985160 FUN_143985160 body=562 status=ok
// SIG undefined FUN_143985160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143985160(int param_1,void *param_2,ushort param_3)

{
  HANDLE hFile;
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  BOOL BVar5;
  longlong *plVar6;
  undefined2 *_Dst;
  uint uVar7;
  ulonglong _Size;
  undefined1 auStackY_b8 [32];
  DWORD local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStackY_b8;
  plVar6 = &DAT_146b9ee80;
  while ((*plVar6 == 0 || ((int)plVar6[1] != param_1))) {
    plVar6 = plVar6 + 0x3d;
    if (0x146b9fdbf < (longlong)plVar6) {
      return 0x8001002d;
    }
  }
  hFile = (HANDLE)plVar6[2];
  if (hFile == (HANDLE)0x0) {
    return 0x8001002d;
  }
  cVar2 = _guard_xfg_dispatch_icall_nop(hFile,&local_80);
  if (cVar2 == '\0') {
    return 0x8001002b;
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar3 = _guard_xfg_dispatch_icall_nop(local_80);
  if (iVar3 != 0x110000) {
LAB_143985271:
    _guard_xfg_dispatch_icall_nop(local_80);
    return 0x8001002b;
  }
  uVar1 = local_78._6_2_;
  _Size = (ulonglong)local_78._6_2_;
  local_88[0] = 0x4e;
  if ((uint)local_78._6_2_ < (uint)param_3) {
    uVar7 = 0x80010028;
  }
  else {
    if (DAT_146ba03a8 == (code *)0x0) {
      _Dst = malloc((ulonglong)(uint)local_78._6_2_);
    }
    else {
      _Dst = (undefined2 *)(*DAT_146ba03a8)();
    }
    if (_Dst == (undefined2 *)0x0) {
      uVar7 = 0x80010004;
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
      uVar7 = (uint)uVar1;
      if (uVar7 < 0x21) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_2,(ulonglong)param_3);
        *(undefined1 *)_Dst = 5;
      }
      else {
        if (uVar7 < local_88[0]) goto LAB_143985271;
        *_Dst = 0xc011;
        *(undefined1 *)(_Dst + 1) = 0;
        _guard_xfg_dispatch_icall_nop
                  ((undefined1 *)((longlong)_Dst + 3),(void *)((longlong)param_2 + 1),
                   (longlong)(int)(param_3 - 1));
        uVar4 = FUN_143983a10(0xa2,_Dst,local_88[0]);
        *(undefined4 *)((ulonglong)(local_88[0] - 4) + (longlong)_Dst) = uVar4;
      }
      BVar5 = WriteFile(hFile,_Dst,uVar7,local_88,(LPOVERLAPPED)0x0);
      uVar7 = 0x8001002b;
      if (BVar5 != 0) {
        uVar7 = 0;
      }
      if (DAT_146ba03a0 == (code *)0x0) {
        free(_Dst);
      }
      else {
        (*DAT_146ba03a0)();
      }
    }
  }
  _guard_xfg_dispatch_icall_nop(local_80);
  if (uVar7 == 0) {
    return (uint)param_3;
  }
  return uVar7;
}



// FUNCTION 1439853a0 FUN_1439853a0 body=336 status=ok
// SIG undefined FUN_1439853a0(void)

undefined8 FUN_1439853a0(undefined4 param_1,void *param_2,ushort param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  void *_Dst;
  undefined4 *puVar4;
  
  if (DAT_146ba03a8 == (code *)0x0) {
    _Dst = malloc((ulonglong)param_3);
  }
  else {
    _Dst = (void *)(*DAT_146ba03a8)();
  }
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,(ulonglong)param_3);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b9fe68);
    puVar3 = DAT_146ba0398;
    puVar4 = (undefined4 *)0x0;
    if (DAT_146ba0398 != (undefined4 *)0x0) {
      puVar1 = (undefined8 *)(DAT_146ba0398 + 8);
      DAT_146ba0398 = *(undefined4 **)(DAT_146ba0398 + 8);
      *puVar1 = 0;
      puVar4 = puVar3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b9fe68);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = param_1;
      *(void **)(puVar4 + 2) = _Dst;
      *(ushort *)(puVar4 + 4) = param_3;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined8 *)(puVar4 + 6) = param_4;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b9fe68);
      *(undefined8 *)(puVar4 + 8) = 0;
      if (DAT_146ba0390 != (undefined4 *)0x0) {
        lVar2 = *(longlong *)(DAT_146ba0390 + 8);
        puVar3 = DAT_146ba0390;
        while (lVar2 != 0) {
          puVar3 = *(undefined4 **)(puVar3 + 8);
          lVar2 = *(longlong *)(puVar3 + 8);
        }
        *(undefined4 **)(puVar3 + 8) = puVar4;
        puVar4 = DAT_146ba0390;
      }
      DAT_146ba0390 = puVar4;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b9fe68);
      ReleaseSemaphore(DAT_146b9fe60,1,(LPLONG)0x0);
      return 0;
    }
    if (DAT_146ba03a0 != (code *)0x0) {
      (*DAT_146ba03a0)();
      return 0x80010004;
    }
    free(_Dst);
  }
  return 0x80010004;
}



// FUNCTION 1439854f0 FUN_1439854f0 body=288 status=ok
// SIG undefined FUN_1439854f0(void)

undefined4 FUN_1439854f0(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  if (DAT_146b9ee70 == '\x01') {
    FUN_143983720();
    DAT_146b9ee73 = 0;
    if (DAT_146b9ee60 != (HANDLE)0x0) {
      DVar1 = WaitForSingleObject(DAT_146b9ee60,5000);
      if (DVar1 == 0x102) {
        TerminateThread(DAT_146b9ee60,0);
      }
      DAT_146b9ee60 = (HANDLE)0x0;
    }
    DAT_146b9ee72 = 0;
    puVar2 = &DAT_146b9fdc0;
    do {
      if ((HANDLE)*puVar2 != (HANDLE)0x0) {
        DVar1 = WaitForSingleObject((HANDLE)*puVar2,5000);
        if (DVar1 == 0x102) {
          TerminateThread((HANDLE)*puVar2,0);
        }
        *puVar2 = 0;
      }
      puVar2 = puVar2 + 1;
    } while ((longlong)puVar2 < 0x146b9fe00);
    DAT_146b9ee74 = 0;
    ReleaseSemaphore(DAT_146b9fe60,1,(LPLONG)0x0);
    if (DAT_146b9ee68 != (HANDLE)0x0) {
      DVar1 = WaitForSingleObject(DAT_146b9ee68,5000);
      if (DVar1 == 0x102) {
        TerminateThread(DAT_146b9ee68,0);
      }
      DAT_146b9ee68 = (HANDLE)0x0;
    }
    FUN_1439839e0();
    DAT_146b9ee70 = '\0';
  }
  DAT_146ba03a8 = 0;
  DAT_146ba03a0 = 0;
  return 1;
}



// FUNCTION 143985610 FUN_143985610 body=52 status=ok
// SIG undefined FUN_143985610(void)

undefined8 FUN_143985610(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = 0;
  plVar2 = &DAT_146b9fdc0;
  do {
    if (*plVar2 == 0) {
      (&DAT_146b9fdc0)[iVar1] = param_1;
      return 0;
    }
    iVar1 = iVar1 + 1;
    plVar2 = plVar2 + 1;
  } while (iVar1 < 8);
  return 0x80010037;
}



// FUNCTION 143985650 assign body=303 status=ok
// SIG undefined assign(void)

undefined8 *
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
          (undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  if ((ulonglong)param_2[2] < param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = param_2[2] - param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  if (param_1 == param_2) {
    param_3 = param_3 + param_4;
    if ((ulonglong)param_1[2] < param_3) {
                    /* WARNING: Subroutine does not return */
      std::_Xout_of_range("invalid string position");
    }
    param_1[2] = param_3;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)puVar2 + param_3 * 2) = 0;
    erase(param_1,0);
  }
  else {
    if (0x7ffffffffffffffe < param_4) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((ulonglong)param_1[3] < param_4) {
      FUN_1439848f0(param_1,param_4,param_1[2]);
      if (param_4 == 0) {
        return param_1;
      }
    }
    else if (param_4 == 0) {
      param_1[2] = 0;
      puVar2 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      *(undefined2 *)puVar2 = 0;
      return param_1;
    }
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (param_4 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                (puVar2,(undefined2 *)((longlong)param_2 + param_3 * 2),param_4 * 2);
    }
    param_1[2] = param_4;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)puVar2 + param_4 * 2) = 0;
  }
  return param_1;
}



// FUNCTION 143985790 assign body=324 status=ok
// SIG undefined assign(void)

undefined8 *
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
          (undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_1[3];
    puVar2 = param_1;
    if (7 < uVar1) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (puVar2 <= param_2) {
      puVar2 = param_1;
      if (7 < uVar1) {
        puVar2 = (undefined8 *)*param_1;
      }
      if (param_2 < (undefined8 *)((longlong)puVar2 + param_1[2] * 2)) {
        puVar2 = param_1;
        if (7 < uVar1) {
          puVar2 = (undefined8 *)*param_1;
        }
        puVar2 = (undefined8 *)
                 assign(param_1,param_1,(longlong)param_2 - (longlong)puVar2 >> 1,param_3);
        return puVar2;
      }
    }
  }
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if ((ulonglong)param_1[3] < param_3) {
    FUN_1439848f0(param_1,param_3,param_1[2]);
    if (param_3 == 0) {
      return param_1;
    }
  }
  else if (param_3 == 0) {
    param_1[2] = 0;
    if (7 < (ulonglong)param_1[3]) {
      *(undefined2 *)*param_1 = 0;
      return param_1;
    }
    *(undefined2 *)param_1 = 0;
    return param_1;
  }
  puVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  if (param_3 != 0) {
    ::_guard_xfg_dispatch_icall_nop(puVar2,param_2,param_3 * 2);
  }
  param_1[2] = param_3;
  puVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)puVar2 + param_3 * 2) = 0;
  return param_1;
}



// FUNCTION 1439858e0 FUN_1439858e0 body=3502 status=ok
// SIG undefined FUN_1439858e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439858e0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  BOOL BVar11;
  HANDLE hThread;
  void *_Memory;
  undefined8 *_Dst;
  undefined1 *_Dst_00;
  short *psVar12;
  short *psVar13;
  longlong lVar14;
  undefined2 *puVar15;
  byte bVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  longlong *plVar19;
  short *psVar20;
  ulonglong _Size;
  undefined2 *puVar21;
  undefined2 *puVar22;
  undefined2 *puVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  size_t _Size_00;
  bool bVar27;
  undefined1 auStackY_368 [32];
  ushort local_308 [2];
  uint local_304;
  uint local_300;
  undefined8 local_2f8;
  undefined1 *local_2f0;
  ulonglong local_2e8;
  void *local_2e0;
  undefined8 *local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_268;
  ulonglong local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined2 local_208;
  undefined2 local_206;
  undefined4 local_204;
  undefined1 local_200;
  char local_1ff [6];
  undefined1 local_1f9;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined8 local_177;
  undefined8 uStack_16f;
  undefined8 local_167;
  undefined8 uStack_15f;
  undefined8 local_157;
  undefined8 uStack_14f;
  undefined8 local_147;
  undefined8 uStack_13f;
  undefined8 local_137;
  undefined8 uStack_12f;
  undefined8 local_127;
  undefined8 uStack_11f;
  undefined8 local_117;
  undefined8 uStack_10f;
  undefined8 local_107;
  undefined8 uStack_ff;
  undefined1 local_f7;
  undefined8 local_f6;
  undefined8 uStack_ee;
  undefined8 local_e6;
  undefined8 uStack_de;
  undefined8 local_d6;
  undefined8 uStack_ce;
  undefined8 local_c6;
  undefined8 uStack_be;
  undefined8 local_b6;
  undefined8 uStack_ae;
  undefined8 local_a6;
  undefined8 uStack_9e;
  undefined4 local_96;
  undefined4 uStack_92;
  undefined4 uStack_8e;
  undefined4 uStack_8a;
  undefined8 local_86;
  undefined8 uStack_7e;
  undefined1 local_76;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStackY_368;
  local_2d8 = param_1;
  hThread = GetCurrentThread();
  SetThreadPriority(hThread,0xf);
  lVar1 = param_1[3];
  puVar23 = (undefined2 *)0x0;
  bVar5 = false;
  bVar3 = false;
  bVar27 = DAT_146831f64 != '\0';
  puVar21 = (undefined2 *)0x0;
  bVar4 = false;
  cVar8 = _guard_xfg_dispatch_icall_nop(param_1[2],&local_2f8);
  if (cVar8 == '\0') {
    iVar10 = FUN_143983900();
    if (iVar10 == 0) {
      FUN_143984e60(param_1);
      FUN_143983930();
    }
    if (DAT_146b9ee72 == '\0') goto LAB_1439859b9;
    plVar19 = &DAT_146b9fdc0;
    while (iVar10 = (int)puVar23, *plVar19 != lVar1) {
      puVar23 = (undefined2 *)(ulonglong)(iVar10 + 1U);
      plVar19 = plVar19 + 1;
      if (7 < (int)(iVar10 + 1U)) {
        _endthread();
        return;
      }
    }
LAB_1439859b6:
    (&DAT_146b9fdc0)[iVar10] = 0;
LAB_1439859b9:
    _endthread();
    return;
  }
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  iVar10 = _guard_xfg_dispatch_icall_nop(local_2f8,&local_268);
  if (iVar10 != 0x110000) {
    _guard_xfg_dispatch_icall_nop(local_2f8);
    iVar10 = FUN_143983900();
    if (iVar10 == 0) {
      FUN_143984e60(param_1);
      FUN_143983930();
    }
    if (DAT_146b9ee72 == '\0') goto LAB_1439859b9;
    plVar19 = &DAT_146b9fdc0;
    while (iVar10 = (int)puVar23, *plVar19 != lVar1) {
      puVar23 = (undefined2 *)(ulonglong)(iVar10 + 1U);
      plVar19 = plVar19 + 1;
      if (7 < (int)(iVar10 + 1U)) {
        _endthread();
        return;
      }
    }
    goto LAB_1439859b6;
  }
  local_308[0] = local_230._4_2_;
  if (DAT_146ba03a8 == (code *)0x0) {
    _Memory = malloc((ulonglong)local_230._4_2_ * 0x48);
  }
  else {
    _Memory = (void *)(*DAT_146ba03a8)();
  }
  local_2e0 = _Memory;
  if (_Memory == (void *)0x0) {
    _Dst_00 = local_2f0;
    _Dst = local_2d8;
    bVar6 = false;
  }
  else {
    iVar10 = _guard_xfg_dispatch_icall_nop(2,_Memory,local_308,local_2f8);
    if (iVar10 != 0x110000) {
      _guard_xfg_dispatch_icall_nop(local_2f8);
      FUN_143986c50(param_1);
      if (DAT_146ba03a0 == (code *)0x0) {
        free(_Memory);
        bVar27 = DAT_146b9ee72 == '\0';
      }
      else {
        (*DAT_146ba03a0)();
        bVar27 = DAT_146b9ee72 == '\0';
      }
      goto LAB_14398664b;
    }
    _Size_00 = (size_t)local_268._4_2_;
    uVar7 = (ushort)local_260;
    _Size = local_260 & 0xffff;
    local_304 = (uint)local_268._4_2_;
    _Dst = local_2d8;
    local_300 = local_304;
    if (0x3f < local_268._4_2_) {
      if (local_268._4_2_ == 0x40) {
        if (DAT_146ba03a8 == (code *)0x0) {
          _Dst = malloc(0x800);
          local_300 = local_304 << 5;
          _Size_00 = (size_t)local_300;
        }
        else {
          _Dst = (undefined8 *)(*DAT_146ba03a8)();
          local_300 = local_304 << 5;
          _Size_00 = (size_t)local_300;
        }
      }
      else if (DAT_146ba03a8 == (code *)0x0) {
        _Dst = malloc(_Size_00);
      }
      else {
        _Dst = (undefined8 *)(*DAT_146ba03a8)();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,0,_Size_00);
      if (0x30 < uVar7) {
        local_2e8 = _Size;
        if (DAT_146ba03a8 == (code *)0x0) {
          _Dst_00 = malloc(_Size);
        }
        else {
          _Dst_00 = (undefined1 *)(*DAT_146ba03a8)();
        }
        puVar22 = puVar23;
        if ((_Dst != (undefined8 *)0x0) && (puVar22 = puVar21, _Dst_00 != (undefined1 *)0x0)) {
          uVar18 = (ulonglong)local_308[0];
          lVar14 = 0;
          if (uVar18 != 0) {
            psVar20 = (short *)((longlong)local_2e0 + 0x14);
            psVar13 = psVar20;
            lVar24 = lVar14;
            do {
              if ((((psVar13[-10] == -0x80) && (psVar13[0x12] == 0x43)) && (*psVar13 == 0x30)) &&
                 (psVar12 = psVar20, lVar25 = lVar14, (char)psVar13[-9] == -0x5d))
              goto LAB_143985c34;
              lVar24 = lVar24 + 1;
              psVar13 = psVar13 + 0x24;
            } while (lVar24 < (longlong)uVar18);
          }
          goto LAB_143985c08;
        }
LAB_143985d66:
        puVar23 = puVar22;
        bVar6 = false;
        goto LAB_143985d84;
      }
    }
    _Dst_00 = local_2f0;
    bVar6 = false;
  }
  goto LAB_143985d84;
  while( true ) {
    lVar25 = lVar25 + 1;
    psVar12 = psVar12 + 0x24;
    if ((longlong)uVar18 <= lVar25) break;
LAB_143985c34:
    if (((psVar12[-10] == -0x100) && (psVar12[0x12] == 0x24)) &&
       ((*psVar12 == 0x24 && (psVar13 = psVar20, lVar24 = lVar14, (char)psVar12[-9] == '\x02'))))
    goto LAB_143985c62;
  }
  goto LAB_143985c08;
  while( true ) {
    lVar24 = lVar24 + 1;
    psVar13 = psVar13 + 0x24;
    if ((longlong)uVar18 <= lVar24) break;
LAB_143985c62:
    if (((psVar13[-10] == -0x80) && (psVar13[0x12] == 0x57)) &&
       ((*psVar13 == 0x30 && (psVar12 = psVar20, lVar25 = lVar14, (char)psVar13[-9] == -0x1f))))
    goto LAB_143985ca0;
  }
  goto LAB_143985c08;
  while( true ) {
    lVar25 = lVar25 + 1;
    psVar12 = psVar12 + 0x24;
    if ((longlong)uVar18 <= lVar25) break;
LAB_143985ca0:
    if ((((psVar12[-10] == -0xfe) && (psVar12[0x12] == 0x21)) && (*psVar12 == 0xf)) &&
       (psVar13 = psVar20, lVar24 = lVar14, (char)psVar12[-9] == '\x12')) goto LAB_143985cd1;
  }
  goto LAB_143985c08;
  while( true ) {
    lVar24 = lVar24 + 1;
    psVar13 = psVar13 + 0x24;
    if ((longlong)uVar18 <= lVar24) break;
LAB_143985cd1:
    if (((psVar13[-10] == -0x80) && (psVar13[0x12] == 0x57)) &&
       ((*psVar13 == 4 && ((char)psVar13[-9] == -0x1d)))) goto LAB_143985d00;
  }
  goto LAB_143985c08;
LAB_143985de0:
  bVar6 = bVar5;
  if ((DAT_146b9ee72 == '\0') ||
     (BVar11 = ReadFile((HANDLE)param_1[2],_Dst,local_300,&local_304,(LPOVERLAPPED)0x0), BVar11 == 0
     )) goto LAB_143985d84;
  puVar15 = puVar21;
  if (0x3f < local_304) {
    if ((local_304 & 0x3f) == 0) {
      uVar18 = (ulonglong)(local_304 >> 6);
    }
    else {
      uVar18 = 1;
    }
    iVar10 = (int)uVar18;
    bVar16 = *(byte *)((longlong)(iVar10 * 0x40 + -0x21) + (longlong)_Dst);
    if (bVar3) {
      if ((bVar16 & 4) != 0) {
        bVar3 = false;
        bVar4 = bVar3;
      }
LAB_1439863e6:
      timeBeginPeriod(DAT_146831f60);
      Sleep(2);
      timeEndPeriod(DAT_146831f60);
    }
    else {
      if (bVar5) {
        if ((bVar16 & 4) == 0) {
          puVar15 = (undefined2 *)FUN_143983510();
          _Size = local_2e8;
          if (iVar10 != 0) {
            lVar14 = 1;
            lVar24 = (longlong)(iVar10 * 8000 + -8000);
            puVar26 = _Dst;
            local_2f0 = (undefined1 *)uVar18;
            do {
              local_2c0 = 0;
              local_2b8 = 0;
              local_2b0 = 0;
              local_2a8 = 0;
              local_2a0 = 0;
              if (puVar21 == (undefined2 *)0x0) {
                local_2d0 = (longlong)puVar15 - lVar24;
              }
              else {
                local_2d0 = (ulonglong)(((longlong)puVar15 - (longlong)puVar21) * lVar14) / uVar18 +
                            (longlong)puVar21;
              }
              local_2c8 = 0;
              FUN_143988b40(puVar23,puVar26,0x40);
              FUN_143982d70(*(undefined4 *)(puVar23 + 4));
              lVar24 = lVar24 + -8000;
              lVar14 = lVar14 + 1;
              puVar26 = puVar26 + 8;
              local_2f0 = (undefined1 *)((longlong)local_2f0 - 1);
            } while (local_2f0 != (undefined1 *)0x0);
            local_2f0 = (undefined1 *)0x0;
            _Size = local_2e8;
            param_1 = local_2d8;
          }
        }
        else if (*(char *)((longlong)puVar23 + 0x2f) == '\0') {
          iVar10 = FUN_143983900();
          if (iVar10 == 0) {
            if (*(char *)(puVar23 + 0x14) != '\0') {
              FUN_143983360(*(undefined4 *)(puVar23 + 4));
              FUN_143984e60(puVar23);
            }
            FUN_143983930();
          }
          puVar23 = (undefined2 *)0x0;
          bVar5 = false;
        }
        else {
          FUN_1439894c0(puVar23);
          puVar23 = (undefined2 *)0x0;
          bVar5 = false;
        }
      }
      else if ((bVar16 & 4) == 0) {
        _guard_xfg_dispatch_icall_nop(local_228,0,0x1e8);
        _guard_xfg_dispatch_icall_nop(_Dst_00,0,_Size);
        uVar2 = param_1[2];
        *_Dst_00 = 0xe3;
        cVar8 = _guard_xfg_dispatch_icall_nop(uVar2,_Dst_00,5);
        iVar10 = -0x7ffeffd5;
        if (cVar8 != '\0') {
          iVar10 = 0;
        }
        if (iVar10 != 0) {
LAB_14398653a:
          GetLastError();
          GetLastError();
          goto LAB_143985d84;
        }
        uVar9 = Curl_read16_le(_Dst_00 + 1);
        local_208 = uVar9;
        local_206 = Curl_read16_le(_Dst_00 + 3);
        local_204 = *(undefined4 *)((longlong)param_1 + 0x24);
        local_200 = 1;
        local_1f9 = 0;
        cVar8 = FUN_143983840(uVar9);
        _Size = local_2e8;
        puVar22 = puVar23;
        if (cVar8 == '\0') goto LAB_143985d66;
        _guard_xfg_dispatch_icall_nop(_Dst_00,0,local_2e8);
        uVar2 = param_1[2];
        *_Dst_00 = 0x12;
        cVar8 = _guard_xfg_dispatch_icall_nop(uVar2,_Dst_00,0x10);
        uVar18 = 0x8001002b;
        if (cVar8 != '\0') {
          uVar18 = 0;
        }
        if ((int)uVar18 == 0) {
          local_1ff[0] = _Dst_00[6];
          *(undefined1 *)((longlong)param_1 + 0x29) = _Dst_00[0xf];
          local_1ff[1] = _Dst_00[5];
          *(undefined1 *)((longlong)param_1 + 0x2a) = _Dst_00[0xe];
          local_1ff[2] = _Dst_00[4];
          *(undefined1 *)((longlong)param_1 + 0x2b) = _Dst_00[0xd];
          local_1ff[3] = _Dst_00[3];
          *(undefined1 *)((longlong)param_1 + 0x2c) = _Dst_00[0xc];
          local_1ff[4] = _Dst_00[2];
          *(undefined1 *)((longlong)param_1 + 0x2d) = _Dst_00[0xb];
          local_1ff[5] = _Dst_00[1];
          *(undefined1 *)((longlong)param_1 + 0x2e) = _Dst_00[10];
          local_178 = *(undefined1 *)(param_1 + 0x16);
          local_1f8 = param_1[6];
          uStack_1f0 = param_1[7];
          local_f7 = *(undefined1 *)((longlong)param_1 + 0x131);
          local_1e8 = param_1[8];
          uStack_1e0 = param_1[9];
          local_76 = *(undefined1 *)((longlong)param_1 + 0x1b2);
          local_218 = param_1[2];
          local_1d8 = param_1[10];
          uStack_1d0 = param_1[0xb];
          local_1c8 = param_1[0xc];
          uStack_1c0 = param_1[0xd];
          local_1b8 = param_1[0xe];
          uStack_1b0 = param_1[0xf];
          local_1a8 = param_1[0x10];
          uStack_1a0 = param_1[0x11];
          local_198 = param_1[0x12];
          uStack_190 = param_1[0x13];
          local_188 = param_1[0x14];
          uStack_180 = param_1[0x15];
          local_177 = *(undefined8 *)((longlong)param_1 + 0xb1);
          uStack_16f = *(undefined8 *)((longlong)param_1 + 0xb9);
          local_167 = *(undefined8 *)((longlong)param_1 + 0xc1);
          uStack_15f = *(undefined8 *)((longlong)param_1 + 0xc9);
          local_157 = *(undefined8 *)((longlong)param_1 + 0xd1);
          uStack_14f = *(undefined8 *)((longlong)param_1 + 0xd9);
          local_147 = *(undefined8 *)((longlong)param_1 + 0xe1);
          uStack_13f = *(undefined8 *)((longlong)param_1 + 0xe9);
          local_137 = *(undefined8 *)((longlong)param_1 + 0xf1);
          uStack_12f = *(undefined8 *)((longlong)param_1 + 0xf9);
          local_127 = *(undefined8 *)((longlong)param_1 + 0x101);
          uStack_11f = *(undefined8 *)((longlong)param_1 + 0x109);
          local_117 = *(undefined8 *)((longlong)param_1 + 0x111);
          uStack_10f = *(undefined8 *)((longlong)param_1 + 0x119);
          local_107 = *(undefined8 *)((longlong)param_1 + 0x121);
          uStack_ff = *(undefined8 *)((longlong)param_1 + 0x129);
          local_f6 = *(undefined8 *)((longlong)param_1 + 0x132);
          uStack_ee = *(undefined8 *)((longlong)param_1 + 0x13a);
          local_e6 = *(undefined8 *)((longlong)param_1 + 0x142);
          uStack_de = *(undefined8 *)((longlong)param_1 + 0x14a);
          local_d6 = *(undefined8 *)((longlong)param_1 + 0x152);
          uStack_ce = *(undefined8 *)((longlong)param_1 + 0x15a);
          local_c6 = *(undefined8 *)((longlong)param_1 + 0x162);
          uStack_be = *(undefined8 *)((longlong)param_1 + 0x16a);
          local_b6 = *(undefined8 *)((longlong)param_1 + 0x172);
          uStack_ae = *(undefined8 *)((longlong)param_1 + 0x17a);
          local_a6 = *(undefined8 *)((longlong)param_1 + 0x182);
          uStack_9e = *(undefined8 *)((longlong)param_1 + 0x18a);
          local_96 = *(undefined4 *)((longlong)param_1 + 0x192);
          uStack_92 = *(undefined4 *)((longlong)param_1 + 0x196);
          uStack_8e = *(undefined4 *)((longlong)param_1 + 0x19a);
          uStack_8a = *(undefined4 *)((longlong)param_1 + 0x19e);
          local_86 = *(undefined8 *)((longlong)param_1 + 0x1a2);
          uStack_7e = *(undefined8 *)((longlong)param_1 + 0x1aa);
          do {
            bVar16 = (byte)uVar18;
            if (local_1ff[uVar18 & 0xff] != '\0') break;
            bVar16 = bVar16 + 1;
            uVar18 = (ulonglong)bVar16;
          } while (bVar16 < 6);
          if (bVar16 != 6) {
            puVar21 = &DAT_146b9eea2;
            do {
              puVar23 = puVar21 + -0x11;
              if ((*(longlong *)(puVar21 + -0x11) != 0) &&
                 (cVar8 = FUN_143983840(puVar21[-1],*puVar21,*(undefined4 *)(puVar21 + 1)),
                 cVar8 != '\0')) {
                bVar16 = 0;
                do {
                  if (*(char *)((ulonglong)bVar16 + 7 + (longlong)puVar21) != local_1ff[bVar16])
                  break;
                  bVar16 = bVar16 + 1;
                } while (bVar16 < 6);
                if (bVar16 == 6) {
                  iVar10 = FUN_143984f40(param_1[2],1);
                  if (iVar10 != 0) goto LAB_143986556;
                  bVar4 = true;
                  _Size = local_2e8;
                  puVar15 = (undefined2 *)0x0;
                  goto LAB_143985f92;
                }
              }
              puVar21 = puVar21 + 0xf4;
              _Size = local_2e8;
            } while ((longlong)puVar21 < 0x146b9fde2);
          }
          puVar23 = (undefined2 *)FUN_143986810(local_228,*param_1,1);
          if (puVar23 != (undefined2 *)0x0) {
            bVar6 = true;
            bVar5 = true;
            _guard_xfg_dispatch_icall_nop(_Dst_00,0,_Size);
            uVar2 = param_1[2];
            *_Dst_00 = 0xa3;
            cVar8 = _guard_xfg_dispatch_icall_nop(uVar2,_Dst_00,0x31);
            iVar10 = -0x7ffeffd5;
            if (cVar8 != '\0') {
              iVar10 = 0;
            }
            if (iVar10 != 0) goto LAB_14398653a;
            iVar10 = FUN_143983900();
            if (iVar10 == 0) {
              FUN_143988fa0(puVar23);
              FUN_143983930();
            }
            if ((ushort)puVar23[0xeb] < 0x3100) {
              FUN_143984f40(*(undefined8 *)(puVar23 + 8),*(undefined1 *)(puVar23 + 0x14));
              bVar3 = true;
              bVar4 = bVar3;
              goto LAB_1439863e6;
            }
            local_298 = 0;
            local_290 = 0;
            local_288 = 0;
            local_280 = 0;
            local_278 = 0;
            _guard_xfg_dispatch_icall_nop(_Dst_00,0,_Size);
            uVar2 = param_1[2];
            *_Dst_00 = 2;
            cVar8 = _guard_xfg_dispatch_icall_nop(uVar2,_Dst_00,0x25);
            iVar10 = -0x7ffeffd5;
            if (cVar8 != '\0') {
              iVar10 = 0;
            }
            if (iVar10 == 0) {
              FUN_143988e30(&local_298,_Dst_00,1);
              iVar10 = FUN_1439830c0(*(undefined4 *)(puVar23 + 4),*(undefined4 *)(puVar23 + 0x12),
                                     puVar23 + 0x99,puVar23 + 0xda);
              _Size = local_2e8;
              puVar15 = (undefined2 *)0x0;
              if (-1 < iVar10) goto LAB_143985f92;
              goto LAB_143985d84;
            }
            goto LAB_14398653a;
          }
          iVar10 = FUN_143984f40(param_1[2],1);
          if (iVar10 == 0) {
            bVar5 = false;
            bVar4 = true;
            _Size = local_2e8;
            puVar15 = (undefined2 *)0x0;
            goto LAB_143985f92;
          }
        }
        else {
          GetLastError();
        }
LAB_143986556:
        GetLastError();
        goto LAB_143985d84;
      }
LAB_143985f92:
      if ((DAT_146831f64 != '\0') && (bVar27)) {
        puVar17 = &DAT_146b9fe40;
        do {
          if (*(int *)(puVar17 + 4) == *(int *)(param_1 + 1)) {
            *(undefined4 *)(puVar17 + 4) = 0;
            *puVar17 = 0;
            break;
          }
          puVar17 = puVar17 + 8;
        } while ((longlong)puVar17 < 0x146b9fe60);
        bVar27 = false;
      }
      timeBeginPeriod(DAT_146831f60);
      Sleep(2);
      timeEndPeriod(DAT_146831f60);
      bVar3 = bVar4;
    }
  }
  iVar10 = __scrt_is_ucrt_dll_in_use();
  puVar21 = puVar15;
  bVar6 = bVar5;
  if (iVar10 == 0) goto LAB_143985d84;
  goto LAB_143985de0;
  while( true ) {
    lVar14 = lVar14 + 1;
    psVar20 = psVar20 + 0x24;
    if ((longlong)uVar18 <= lVar14) break;
LAB_143985d00:
    if (((psVar20[-10] == -0x80) && (psVar20[0x12] == 0x57)) && (*psVar20 == 0x10)) {
      _guard_xfg_dispatch_icall_nop(_Dst_00,0,_Size);
      uVar2 = param_1[2];
      *_Dst_00 = 0xe1;
      cVar8 = _guard_xfg_dispatch_icall_nop(uVar2,_Dst_00,0x31);
      puVar21 = (undefined2 *)0x8001002b;
      if (cVar8 != '\0') {
        puVar21 = puVar23;
      }
      if ((int)puVar21 != 0) {
        GetLastError();
        GetLastError();
        goto LAB_143985d66;
      }
      iVar10 = FUN_143983900();
      if (iVar10 == 0) {
        FUN_143988fa0(param_1,_Dst_00);
        FUN_143983930();
      }
      iVar10 = __scrt_is_ucrt_dll_in_use();
      puVar21 = puVar23;
      if (iVar10 == 0) goto LAB_143985d66;
      goto LAB_143985de0;
    }
  }
LAB_143985c08:
  bVar6 = false;
LAB_143985d84:
  puVar17 = &DAT_146b9fe40;
  if ((DAT_146831f64 != '\0') && (bVar27)) {
    do {
      if (*(int *)(puVar17 + 4) == *(int *)(param_1 + 1)) {
        *(undefined4 *)(puVar17 + 4) = 0;
        *puVar17 = 0;
        break;
      }
      puVar17 = puVar17 + 8;
    } while ((longlong)puVar17 < 0x146b9fe60);
  }
  if (_Dst != (undefined8 *)0x0) {
    if (DAT_146ba03a0 == (code *)0x0) {
      free(_Dst);
    }
    else {
      (*DAT_146ba03a0)();
    }
  }
  if (_Dst_00 != (undefined1 *)0x0) {
    if (DAT_146ba03a0 == (code *)0x0) {
      free(_Dst_00);
    }
    else {
      (*DAT_146ba03a0)();
    }
  }
  if (local_2e0 != (void *)0x0) {
    if (DAT_146ba03a0 == (code *)0x0) {
      free(local_2e0);
    }
    else {
      (*DAT_146ba03a0)();
    }
  }
  _guard_xfg_dispatch_icall_nop(local_2f8);
  if (bVar6) {
    if (*(char *)((longlong)puVar23 + 0x2f) == '\0') {
      if (*(char *)(puVar23 + 0x14) != '\0') {
        FUN_143983360(*(undefined4 *)(puVar23 + 4));
      }
      FUN_143986c50(puVar23);
    }
    else {
      FUN_1439894c0(puVar23);
    }
  }
  iVar10 = FUN_143983900();
  if (iVar10 == 0) {
    FUN_143984e60(param_1);
    FUN_143983930();
  }
  bVar27 = DAT_146b9ee72 == '\0';
LAB_14398664b:
  if (!bVar27) {
    FUN_143986c80(lVar1);
  }
  _endthread();
  return;
}



// FUNCTION 143986690 FUN_143986690 body=373 status=ok
// SIG undefined FUN_143986690(void)

void FUN_143986690(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  HANDLE hThread;
  undefined4 *puVar5;
  
  hThread = GetCurrentThread();
  SetThreadPriority(hThread,0xf);
  FUN_143988a20();
  if (DAT_146b9ee74 != '\0') {
    do {
      WaitForSingleObject(DAT_146b9fe60,0xffffffff);
      if (DAT_146b9ee74 == '\0') break;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b9fe68);
      puVar3 = DAT_146ba0390;
      puVar5 = (undefined4 *)0x0;
      if (DAT_146ba0390 != (undefined4 *)0x0) {
        puVar1 = (undefined8 *)(DAT_146ba0390 + 8);
        DAT_146ba0390 = *(undefined4 **)(DAT_146ba0390 + 8);
        *puVar1 = 0;
        puVar5 = puVar3;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b9fe68);
      if (puVar5 != (undefined4 *)0x0) {
        if (*(longlong *)(puVar5 + 2) != 0) {
          uVar4 = FUN_143985160(*puVar5,*(longlong *)(puVar5 + 2),*(undefined2 *)(puVar5 + 4));
          if (*(code **)(puVar5 + 6) != (code *)0x0) {
            (**(code **)(puVar5 + 6))(uVar4,*(undefined2 *)(puVar5 + 4),*puVar5);
          }
          if (*(void **)(puVar5 + 2) != (void *)0x0) {
            if (DAT_146ba03a0 == (code *)0x0) {
              free(*(void **)(puVar5 + 2));
            }
            else {
              (*DAT_146ba03a0)();
            }
          }
        }
        *puVar5 = 0xffffffff;
        *(undefined8 *)(puVar5 + 2) = 0;
        *(undefined2 *)(puVar5 + 4) = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        *(undefined8 *)(puVar5 + 6) = 0;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b9fe68);
        *(undefined8 *)(puVar5 + 8) = 0;
        if (DAT_146ba0398 != (undefined4 *)0x0) {
          lVar2 = *(longlong *)(DAT_146ba0398 + 8);
          puVar3 = DAT_146ba0398;
          while (lVar2 != 0) {
            puVar3 = *(undefined4 **)(puVar3 + 8);
            lVar2 = *(longlong *)(puVar3 + 8);
          }
          *(undefined4 **)(puVar3 + 8) = puVar5;
          puVar5 = DAT_146ba0398;
        }
        DAT_146ba0398 = puVar5;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b9fe68);
      }
    } while (DAT_146b9ee74 != '\0');
  }
  FUN_143989610();
                    /* WARNING: Could not recover jumptable at 0x0001439867fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _endthread();
  return;
}



// FUNCTION 143986810 FUN_143986810 body=530 status=ok
// SIG undefined FUN_143986810(void)

longlong FUN_143986810(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = FUN_143983900();
  if (iVar5 != 0) {
    return 0;
  }
  lVar6 = FUN_143984c40(param_2,param_3);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined2 *)(lVar6 + 0x20) = *(undefined2 *)(param_1 + 0x20);
    *(undefined2 *)(lVar6 + 0x22) = *(undefined2 *)(param_1 + 0x22);
    *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(lVar6 + 0x28) = *(undefined1 *)(param_1 + 0x28);
    *(undefined1 *)(lVar6 + 0x2f) = *(undefined1 *)(param_1 + 0x2f);
    *(undefined1 *)(lVar6 + 0x29) = *(undefined1 *)(param_1 + 0x29);
    *(undefined1 *)(lVar6 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)(lVar6 + 0x2b) = *(undefined1 *)(param_1 + 0x2b);
    *(undefined1 *)(lVar6 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
    *(undefined1 *)(lVar6 + 0x2d) = *(undefined1 *)(param_1 + 0x2d);
    *(undefined1 *)(lVar6 + 0x2e) = *(undefined1 *)(param_1 + 0x2e);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar6 + 0x38) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(lVar6 + 0x48) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(lVar6 + 0x58) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(lVar6 + 0x68) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(lVar6 + 0x78) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(lVar6 + 0x80) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(lVar6 + 0x88) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(lVar6 + 0x98) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(lVar6 + 0xa8) = uVar4;
    *(undefined1 *)(lVar6 + 0xb0) = *(undefined1 *)(param_1 + 0xb0);
    uVar4 = *(undefined8 *)(param_1 + 0xb9);
    *(undefined8 *)(lVar6 + 0xb1) = *(undefined8 *)(param_1 + 0xb1);
    *(undefined8 *)(lVar6 + 0xb9) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xc9);
    *(undefined8 *)(lVar6 + 0xc1) = *(undefined8 *)(param_1 + 0xc1);
    *(undefined8 *)(lVar6 + 0xc9) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xd9);
    *(undefined8 *)(lVar6 + 0xd1) = *(undefined8 *)(param_1 + 0xd1);
    *(undefined8 *)(lVar6 + 0xd9) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xe9);
    *(undefined8 *)(lVar6 + 0xe1) = *(undefined8 *)(param_1 + 0xe1);
    *(undefined8 *)(lVar6 + 0xe9) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xf9);
    *(undefined8 *)(lVar6 + 0xf1) = *(undefined8 *)(param_1 + 0xf1);
    *(undefined8 *)(lVar6 + 0xf9) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x109);
    *(undefined8 *)(lVar6 + 0x101) = *(undefined8 *)(param_1 + 0x101);
    *(undefined8 *)(lVar6 + 0x109) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x119);
    *(undefined8 *)(lVar6 + 0x111) = *(undefined8 *)(param_1 + 0x111);
    *(undefined8 *)(lVar6 + 0x119) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x129);
    *(undefined8 *)(lVar6 + 0x121) = *(undefined8 *)(param_1 + 0x121);
    *(undefined8 *)(lVar6 + 0x129) = uVar4;
    *(undefined1 *)(lVar6 + 0x131) = *(undefined1 *)(param_1 + 0x131);
    uVar4 = *(undefined8 *)(param_1 + 0x13a);
    *(undefined8 *)(lVar6 + 0x132) = *(undefined8 *)(param_1 + 0x132);
    *(undefined8 *)(lVar6 + 0x13a) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x14a);
    *(undefined8 *)(lVar6 + 0x142) = *(undefined8 *)(param_1 + 0x142);
    *(undefined8 *)(lVar6 + 0x14a) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x15a);
    *(undefined8 *)(lVar6 + 0x152) = *(undefined8 *)(param_1 + 0x152);
    *(undefined8 *)(lVar6 + 0x15a) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x16a);
    *(undefined8 *)(lVar6 + 0x162) = *(undefined8 *)(param_1 + 0x162);
    *(undefined8 *)(lVar6 + 0x16a) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x17a);
    *(undefined8 *)(lVar6 + 0x172) = *(undefined8 *)(param_1 + 0x172);
    *(undefined8 *)(lVar6 + 0x17a) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x18a);
    *(undefined8 *)(lVar6 + 0x182) = *(undefined8 *)(param_1 + 0x182);
    *(undefined8 *)(lVar6 + 0x18a) = uVar4;
    uVar1 = *(undefined4 *)(param_1 + 0x196);
    uVar2 = *(undefined4 *)(param_1 + 0x19a);
    uVar3 = *(undefined4 *)(param_1 + 0x19e);
    *(undefined4 *)(lVar6 + 0x192) = *(undefined4 *)(param_1 + 0x192);
    *(undefined4 *)(lVar6 + 0x196) = uVar1;
    *(undefined4 *)(lVar6 + 0x19a) = uVar2;
    *(undefined4 *)(lVar6 + 0x19e) = uVar3;
    uVar4 = *(undefined8 *)(param_1 + 0x1aa);
    *(undefined8 *)(lVar6 + 0x1a2) = *(undefined8 *)(param_1 + 0x1a2);
    *(undefined8 *)(lVar6 + 0x1aa) = uVar4;
    *(undefined1 *)(lVar6 + 0x1b2) = *(undefined1 *)(param_1 + 0x1b2);
  }
  FUN_143983930();
  return lVar6;
}



// FUNCTION 143986a30 FUN_143986a30 body=244 status=ok
// SIG undefined FUN_143986a30(void)

undefined8 * FUN_143986a30(wchar_t *param_1,longlong param_2,byte param_3)

{
  size_t _Size;
  void *_Dst;
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  rsize_t _SizeInWords;
  ulonglong uVar5;
  longlong lVar4;
  
  puVar2 = &DAT_146b9fe00;
  do {
    if (puVar2[1] == 0) {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (param_1[lVar3] != L'\0');
      _SizeInWords = lVar4 + 2;
      _Size = _SizeInWords * 2;
      if (DAT_146ba03a8 == (code *)0x0) {
        _Dst = malloc(_Size);
      }
      else {
        _Dst = (void *)(*DAT_146ba03a8)();
      }
      puVar2[1] = _Dst;
      if (_Dst != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
        wcsncpy_s((wchar_t *)puVar2[1],_SizeInWords,param_1,0xffffffffffffffff);
      }
      *(undefined1 *)puVar2 = 1;
      uVar5 = (ulonglong)param_3;
      if (param_3 != 0) {
        puVar1 = puVar2;
        do {
          puVar1 = (undefined8 *)((longlong)puVar1 + 1);
          *(undefined1 *)puVar1 =
               *(undefined1 *)((longlong)puVar1 + (param_2 - (longlong)puVar2) + -1);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      return puVar2;
    }
    puVar2 = puVar2 + 2;
  } while ((longlong)puVar2 < 0x146b9fe40);
  return (undefined8 *)0x0;
}



// FUNCTION 143986b30 FUN_143986b30 body=279 status=ok
// SIG undefined FUN_143986b30(void)

void FUN_143986b30(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)&DAT_146b9fe00;
  do {
    if ((*(longlong *)(pcVar6 + 8) != 0) && (*pcVar6 == '\0')) {
      uVar4 = 0;
      do {
        bVar3 = (byte)uVar4;
        if (pcVar6[uVar4 + 1] != '\0') break;
        bVar3 = bVar3 + 1;
        uVar4 = (ulonglong)bVar3;
      } while (bVar3 < 6);
      if (bVar3 != 6) {
        puVar5 = &DAT_146b9eea2;
        do {
          if ((*(longlong *)(puVar5 + -0x11) != 0) &&
             (cVar1 = FUN_143983840(puVar5[-1],*puVar5,*(undefined4 *)(puVar5 + 1)), cVar1 != '\0'))
          {
            bVar3 = 0;
            do {
              if (*(char *)((longlong)puVar5 + (ulonglong)bVar3 + 7) != pcVar6[(ulonglong)bVar3 + 1]
                 ) break;
              bVar3 = bVar3 + 1;
            } while (bVar3 < 6);
            if (bVar3 == 6) {
              iVar2 = FUN_143983900();
              if (iVar2 == 0) {
                *(undefined1 *)((longlong)puVar5 + 0xd) = 0;
                FUN_143983930();
              }
              break;
            }
          }
          puVar5 = puVar5 + 0xf4;
        } while ((longlong)puVar5 < 0x146b9fde2);
      }
      if (*(void **)(pcVar6 + 8) != (void *)0x0) {
        if (DAT_146ba03a0 == (code *)0x0) {
          free(*(void **)(pcVar6 + 8));
        }
        else {
          (*DAT_146ba03a0)();
        }
      }
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6[4] = '\0';
      pcVar6[5] = '\0';
      pcVar6[6] = '\0';
      pcVar6[7] = '\0';
      pcVar6[8] = '\0';
      pcVar6[9] = '\0';
      pcVar6[10] = '\0';
      pcVar6[0xb] = '\0';
      pcVar6[0xc] = '\0';
      pcVar6[0xd] = '\0';
      pcVar6[0xe] = '\0';
      pcVar6[0xf] = '\0';
    }
    pcVar6 = pcVar6 + 0x10;
    if (0x146b9fe3f < (longlong)pcVar6) {
      return;
    }
  } while( true );
}


