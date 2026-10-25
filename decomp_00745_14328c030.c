// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14328c030 fileToObject body=164 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::RepXSerializerImpl<physx::PxRigidStatic>::fileToObject
          (longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_5);
  if ((lVar2 != 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3,param_4,param_5,param_6),
     cVar1 != '\0')) {
    param_2[1] = lVar2;
    *param_2 = "PxRigidStatic";
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &DAT_145af3922;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14328c0e0 fileToObjectImpl body=188 status=ok
// SIG undefined fileToObjectImpl(void)

/* WARNING: Removing unreachable block (ram,0x00014328c176) */
/* WARNING: Removing unreachable block (ram,0x00014328c17a) */
/* WARNING: Removing unreachable block (ram,0x00014328c15d) */
/* WARNING: Removing unreachable block (ram,0x00014328c14f) */
/* WARNING: Removing unreachable block (ram,0x00014328c153) */
/* WARNING: Removing unreachable block (ram,0x00014328c184) */

undefined8 physx::RepXSerializerImpl<physx::PxAggregate>::fileToObjectImpl(void)

{
  longlong *in_R9;
  PxAggregateGeneratedInfo local_78 [120];
  
  (**(code **)(*in_R9 + 0x18))();
  physx::PxAggregateGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_78);
  return 1;
}



// FUNCTION 14328c1a0 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxArticulation>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxArticulation>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c1f0 fileToObjectImpl body=20 status=ok
// SIG undefined fileToObjectImpl(void)

undefined8 physx::RepXSerializerImpl<physx::PxBVH33TriangleMesh>::fileToObjectImpl(void)

{
  longlong *in_R9;
  
  (**(code **)(*in_R9 + 0x18))(in_R9);
  return 1;
}



// FUNCTION 14328c210 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxCloth>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxCloth>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c260 fileToObjectImpl body=188 status=ok
// SIG undefined fileToObjectImpl(void)

/* WARNING: Removing unreachable block (ram,0x00014328c2f6) */
/* WARNING: Removing unreachable block (ram,0x00014328c2fa) */
/* WARNING: Removing unreachable block (ram,0x00014328c2dd) */
/* WARNING: Removing unreachable block (ram,0x00014328c2cf) */
/* WARNING: Removing unreachable block (ram,0x00014328c2d3) */
/* WARNING: Removing unreachable block (ram,0x00014328c304) */

undefined8 physx::RepXSerializerImpl<physx::PxClothFabric>::fileToObjectImpl(void)

{
  longlong *in_R9;
  PxClothFabricGeneratedInfo local_d8 [216];
  
  (**(code **)(*in_R9 + 0x18))();
  physx::PxClothFabricGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_d8);
  return 1;
}



// FUNCTION 14328c320 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxD6Joint>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxD6Joint>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c370 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxDistanceJoint>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxDistanceJoint>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c3c0 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxFixedJoint>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxFixedJoint>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c410 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxMaterial>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxMaterial>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c460 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxParticleFluid>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxParticleFluid>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c4b0 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxParticleSystem>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxParticleSystem>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c500 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxPrismaticJoint>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxPrismaticJoint>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c550 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxRevoluteJoint>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxRevoluteJoint>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c5a0 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxRigidDynamic>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxRigidDynamic>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c5f0 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxRigidStatic>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxRigidStatic>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c640 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxShape>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxShape>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c690 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxSphericalJoint>::fileToObjectImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = *(undefined8 *)(param_5 + 4);
  Sn::readAllProperties<physx::PxSphericalJoint>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 14328c6e0 findEnumByName body=108 status=ok
// SIG undefined findEnumByName(void)

undefined4 physx::Sn::findEnumByName(char *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar1 = *param_2;
  plVar3 = param_2;
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    iVar2 = physx::shdfnd::stricmp((char *)*plVar3,param_1);
    if (iVar2 == 0) break;
    uVar4 = (ulonglong)((int)uVar4 + 1);
    plVar3 = param_2 + uVar4 * 2;
    lVar1 = *plVar3;
  }
  return (int)param_2[uVar4 * 2 + 1];
}



// FUNCTION 14328c890 gotoFirstChild body=190 status=ok
// SIG undefined gotoFirstChild(void)

undefined1
physx::Sn::RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  char *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined7 uStack_17;
  
  RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  lVar2 = *param_1;
  local_28 = "__child";
  local_18 = (undefined1)param_1[9];
  uStack_20 = uStack_20 & 0xffffff00;
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x45af4080;
      puVar1[1] = 1;
      puVar1[2] = uStack_20;
      puVar1[3] = uStack_1c;
      *(ulonglong *)(puVar1 + 4) = CONCAT71(uStack_17,local_18);
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  else {
    shdfnd::
    Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
    ::growAndPushBack(lVar2,&local_28);
  }
  if ((char)param_1[9] != '\0') {
    uVar3 = (**(code **)(*(longlong *)param_1[5] + 0x20))();
    *(undefined1 *)(param_1 + 9) = uVar3;
  }
  *(char *)(*(longlong *)(*param_1 + 8) + 0x10 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x18)
       = (char)param_1[9];
  *(char *)(*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x18) =
       (char)param_1[9];
  return (char)param_1[9];
}



// FUNCTION 14328c950 gotoTopName body=149 status=ok
// SIG undefined gotoTopName(void)

undefined1
physx::Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName
          (longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *param_1;
  if ((*(int *)(lVar1 + 0x10) != 0) &&
     (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18) ==
      '\0')) {
    if ((char)param_1[9] != '\0') {
      uVar2 = (**(code **)(*(longlong *)param_1[5] + 0x18))
                        ((longlong *)param_1[5],
                         *(undefined8 *)
                          (*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18
                          ));
      *(undefined1 *)(param_1 + 9) = uVar2;
    }
    *(char *)(*(longlong *)(*param_1 + 8) + 0x10 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x18
             ) = (char)param_1[9];
    *(char *)(*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x18) =
         (char)param_1[9];
    return (char)param_1[9];
  }
  return (char)param_1[9];
}



// FUNCTION 14328c9f0 growAndPushBack body=213 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
       growAndPushBack(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *_Dst;
  uint uVar3;
  
  if ((*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = *(uint *)((longlong)param_1 + 0x14) * 2;
    if (uVar3 == 0) {
      _Dst = (void *)0x0;
      goto LAB_14328ca50;
    }
  }
  _Dst = (void *)(**(code **)(**(longlong **)*param_1 + 8))
                           (*(longlong **)*param_1,(ulonglong)uVar3 << 2,
                            "<no allocation names in this config>",
                            "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_14328ca50:
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 2) * 4)) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[1],(ulonglong)(*(uint *)(param_1 + 2) * 4))
    ;
  }
  puVar1 = (undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 2) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(longlong **)*param_1 + 0x10))();
  }
  uVar2 = *(uint *)(param_1 + 2);
  param_1[1] = _Dst;
  *(uint *)((longlong)param_1 + 0x14) = uVar3;
  *(uint *)(param_1 + 2) = uVar2 + 1;
  return (void *)((longlong)_Dst + (ulonglong)uVar2 * 4);
}



// FUNCTION 14328cad0 growAndPushBack body=212 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<physx::PxMaterial_*___ptr64,physx::shdfnd::ReflectionAllocator<physx::PxMaterial_*___ptr64>_>
       ::growAndPushBack(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  void *_Dst;
  PxAllocatorCallback *pPVar4;
  uint uVar5;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = *(uint *)((longlong)param_1 + 0xc) * 2;
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
      goto LAB_14328cb1f;
    }
  }
  _Dst = (void *)ReflectionAllocator<physx::PxMaterial_*___ptr64>::allocate
                           (param_1,(ulonglong)uVar5 << 3,
                            "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_14328cb1f:
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 8)) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,(ulonglong)(*(uint *)(param_1 + 1) * 8));
  }
  puVar1 = (undefined8 *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar3 = *param_1, lVar3 != 0)) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,lVar3);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  *param_1 = (longlong)_Dst;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return (void *)((longlong)_Dst + (ulonglong)uVar2 * 8);
}



// FUNCTION 14328cbb0 growAndPushBack body=297 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<physx::PxArticulationLink_const_*___ptr64,physx::shdfnd::InlineAllocator<512,physx::shdfnd::ReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>_>_>
       ::growAndPushBack(void *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  PxAllocatorCallback *pPVar4;
  int iVar5;
  
  if ((*(uint *)((longlong)param_1 + 0x214) & 0x7fffffff) == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = *(uint *)((longlong)param_1 + 0x214) * 2;
    if (iVar5 == 0) {
      _Dst = (void *)0x0;
      goto LAB_14328cc21;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x200) == '\0') && ((uint)(iVar5 * 8) < 0x201)) {
    *(undefined1 *)((longlong)param_1 + 0x200) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>::allocate
                             (param_1,iVar5 * 8,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
LAB_14328cc21:
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)((longlong)param_1 + 0x210) * 8)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 0x208),
               (ulonglong)(*(uint *)((longlong)param_1 + 0x210) * 8));
  }
  puVar1 = (undefined8 *)((longlong)_Dst + (ulonglong)*(uint *)((longlong)param_1 + 0x210) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
  }
  if (-1 < *(int *)((longlong)param_1 + 0x214)) {
    pvVar3 = *(void **)((longlong)param_1 + 0x208);
    if (pvVar3 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0x200) = 0;
    }
    else if (pvVar3 != (void *)0x0) {
      pPVar4 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,pvVar3);
    }
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x210);
  *(int *)((longlong)param_1 + 0x214) = iVar5;
  *(void **)((longlong)param_1 + 0x208) = _Dst;
  *(uint *)((longlong)param_1 + 0x210) = uVar2 + 1;
  return (void *)((longlong)_Dst + (ulonglong)uVar2 * 8);
}



// FUNCTION 14328cce0 growAndPushBack body=221 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
       ::growAndPushBack(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Dst;
  undefined4 *puVar5;
  uint uVar6;
  
  if ((*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = *(uint *)((longlong)param_1 + 0x14) * 2;
    if (uVar6 == 0) {
      _Dst = (void *)0x0;
      goto LAB_14328cd3f;
    }
  }
  _Dst = (void *)(**(code **)(**(longlong **)*param_1 + 8))
                           (*(longlong **)*param_1,(ulonglong)uVar6 << 4,
                            "<no allocation names in this config>",
                            "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_14328cd3f:
  if (_Dst < (void *)((ulonglong)*(uint *)(param_1 + 2) * 0x10 + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,(void *)param_1[1],(ulonglong)(*(uint *)(param_1 + 2) << 4));
  }
  puVar5 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 2) * 0x10 + (longlong)_Dst);
  if (puVar5 != (undefined4 *)0x0) {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *puVar5 = *param_2;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(longlong **)*param_1 + 0x10))();
  }
  uVar1 = *(uint *)(param_1 + 2);
  *(uint *)((longlong)param_1 + 0x14) = uVar6;
  *(uint *)(param_1 + 2) = uVar1 + 1;
  param_1[1] = _Dst;
  return (void *)((ulonglong)uVar1 * 0x10 + (longlong)_Dst);
}



// FUNCTION 14328cdc0 growAndPushBack body=280 status=ok
// SIG undefined growAndPushBack(void)

void * physx::shdfnd::
       Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
       ::growAndPushBack(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *_Dst;
  uint uVar6;
  
  if ((*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = *(uint *)((longlong)param_1 + 0x14) * 2;
    if (uVar6 == 0) {
      _Dst = (void *)0x0;
      goto LAB_14328ce24;
    }
  }
  _Dst = (void *)(**(code **)(**(longlong **)*param_1 + 8))
                           (*(longlong **)*param_1,(ulonglong)uVar6 * 0x18,
                            "<no allocation names in this config>",
                            "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                            ,0x25d);
LAB_14328ce24:
  if (_Dst < (void *)((ulonglong)*(uint *)(param_1 + 2) * 0x18 + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,(void *)param_1[1],
               (ulonglong)(uint)((int)(((ulonglong)*(uint *)(param_1 + 2) * 0x18) / 0x18) * 0x18));
  }
  puVar1 = (undefined4 *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 2) * 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
  }
  if ((-1 < *(int *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(longlong **)*param_1 + 0x10))();
  }
  uVar2 = *(uint *)(param_1 + 2);
  *(uint *)((longlong)param_1 + 0x14) = uVar6;
  param_1[1] = _Dst;
  *(uint *)(param_1 + 2) = uVar2 + 1;
  return (void *)((longlong)_Dst + (ulonglong)uVar2 * 0x18);
}



// FUNCTION 14328cee0 handleArticulationLinks body=684 status=ok
// SIG undefined handleArticulationLinks(void)

void physx::Sn::RepXVisitorWriter<physx::PxArticulation>::handleArticulationLinks
               (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  PxAllocatorCallback *pPVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  undefined1 local_458 [512];
  undefined1 local_258;
  undefined1 *local_250;
  undefined4 local_248;
  uint local_244;
  undefined1 local_238 [512];
  undefined1 local_38;
  undefined1 *local_30;
  undefined4 local_28;
  uint local_24;
  
  uVar4 = (**(code **)(param_2 + 0x18))(param_1[2]);
  uVar11 = (ulonglong)uVar4;
  if (uVar4 != 0) {
    local_30 = local_238;
    lVar9 = 0;
    local_28 = 0;
    local_res8 = 0;
    local_38 = 1;
    local_24 = 0x40;
    shdfnd::
    Array<physx::PxArticulationLink_*___ptr64,physx::shdfnd::InlineAllocator<512,physx::shdfnd::ReflectionAllocator<physx::PxArticulationLink_*___ptr64>_>_>
    ::resize(local_238,uVar11,&local_res8);
    (**(code **)(param_2 + 0x10))(param_1[2],local_30,uVar4);
    local_248 = 0;
    local_250 = local_458;
    local_258 = 1;
    local_244 = 0x40;
    if (uVar4 != 0) {
      uVar10 = (ulonglong)uVar4;
      lVar8 = lVar9;
      do {
        lVar1 = param_1[5];
        lVar2 = *(longlong *)(local_30 + lVar8);
        if ((*(int *)(lVar1 + 0x3c) != 0) &&
           (uVar7 = ~(lVar2 << 0x20) + lVar2, uVar7 = uVar7 ^ uVar7 >> 0x16,
           uVar7 = uVar7 + ~(uVar7 << 0xd), uVar7 = (uVar7 >> 8 ^ uVar7) * 9,
           uVar7 = uVar7 ^ uVar7 >> 0xf, uVar7 = uVar7 + ~(uVar7 << 0x1b),
           uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x20) +
                            ((uVar7 >> 0x1f & 0xffffffff ^ uVar7 & 0xffffffff) &
                            (ulonglong)(*(int *)(lVar1 + 0x2c) - 1)) * 4), uVar5 != 0xffffffff)) {
          do {
            if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar5 * 0x10) == lVar2) {
              if ((uVar5 != 0xffffffff) &&
                 ((ulonglong)uVar5 * 0x10 + *(longlong *)(lVar1 + 0x10) != 0)) goto LAB_14328d07b;
              break;
            }
            uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x18) + (ulonglong)uVar5 * 4);
          } while (uVar5 != 0xffffffff);
        }
        recurseAddLinkAndChildren(param_1,lVar2,local_458);
LAB_14328d07b:
        lVar8 = lVar8 + 8;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      if (uVar4 != 0) {
        do {
          writeArticulationLink(param_1,*(undefined8 *)(local_250 + lVar9));
          lVar9 = lVar9 + 8;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    lVar9 = *param_1;
    if (*(int *)(lVar9 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar9 + 8) + 8 + (ulonglong)(*(int *)(lVar9 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
    puVar3 = local_250;
    if (((local_244 & 0x7fffffff) != 0) && (-1 < (int)local_244)) {
      if (local_250 == local_458) {
        local_258 = 0;
      }
      else if (local_250 != (undefined1 *)0x0) {
        pPVar6 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,puVar3);
      }
    }
    puVar3 = local_30;
    if (((((local_24 & 0x7fffffff) != 0) && (-1 < (int)local_24)) && (local_30 != local_238)) &&
       (local_30 != (undefined1 *)0x0)) {
      pPVar6 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,puVar3);
    }
  }
  return;
}



// FUNCTION 14328d190 FUN_14328d190 body=255 status=ok
// SIG undefined FUN_14328d190(void)

void FUN_14328d190(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
  switch(uVar1) {
  case 0:
    physx::Sn::RepXVisitorWriter<physx::PxShape>::writeGeometryProperty<physx::PxSphereGeometry>
              (param_1,param_2,"PxSphereGeometry");
    return;
  case 1:
    physx::Sn::RepXVisitorWriter<physx::PxShape>::writeGeometryProperty<physx::PxPlaneGeometry>
              (param_1,param_2,"PxPlaneGeometry");
    return;
  case 2:
    physx::Sn::RepXVisitorWriter<physx::PxShape>::writeGeometryProperty<physx::PxCapsuleGeometry>
              (param_1,param_2,"PxCapsuleGeometry");
    return;
  case 3:
    physx::Sn::RepXVisitorWriter<physx::PxShape>::writeGeometryProperty<physx::PxBoxGeometry>
              (param_1,param_2,"PxBoxGeometry");
    return;
  case 4:
    physx::Sn::RepXVisitorWriter<physx::PxShape>::writeGeometryProperty<physx::PxConvexMeshGeometry>
              (param_1,param_2,"PxConvexMeshGeometry");
    return;
  case 5:
    physx::Sn::RepXVisitorWriter<physx::PxShape>::
    writeGeometryProperty<physx::PxTriangleMeshGeometry>(param_1,param_2,"PxTriangleMeshGeometry");
    return;
  case 6:
    physx::Sn::RepXVisitorWriter<physx::PxShape>::
    writeGeometryProperty<physx::PxHeightFieldGeometry>(param_1,param_2,"PxHeightFieldGeometry");
  }
  return;
}



// FUNCTION 14328d2b0 handleIncomingJoint body=188 status=ok
// SIG undefined handleIncomingJoint(void)

void physx::Sn::RepXVisitorReader<physx::PxArticulationLink>::handleIncomingJoint
               (longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  char *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined7 uStack_17;
  
  RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  lVar2 = *param_1;
  local_28 = "Joint";
  local_18 = (undefined1)param_1[9];
  uStack_20 = uStack_20 & 0xffffff00;
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x45af3928;
      puVar1[1] = 1;
      puVar1[2] = uStack_20;
      puVar1[3] = uStack_1c;
      *(ulonglong *)(puVar1 + 4) = CONCAT71(uStack_17,local_18);
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  else {
    shdfnd::
    Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
    ::growAndPushBack(lVar2,&local_28);
  }
  cVar3 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar3 != '\0') {
    uVar4 = (**(code **)(param_2 + 0x10))(param_1[6]);
    readComplexObj<physx::PxArticulationJoint,physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>
              (param_1,uVar4);
    (**(code **)(*(longlong *)param_1[8] + 8))((longlong *)param_1[8],uVar4,0);
  }
  RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14328d370 handleIncomingJoint body=145 status=ok
// SIG undefined handleIncomingJoint(void)

void physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>::handleIncomingJoint
               (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  PxArticulationJointGeneratedInfo local_268 [608];
  
  lVar1 = (**(code **)(param_2 + 0x10))(param_1[2]);
  if (lVar1 != 0) {
    physx::PxArticulationJointGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_268);
    RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,"Joint");
    writeAllProperties<physx::PxArticulationJoint>(*param_1,lVar1,param_1[1],param_1[3],param_1[4]);
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
  }
  return;
}



// FUNCTION 14328d410 handleShapes body=157 status=ok
// SIG undefined handleShapes(void)

void physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>::handleShapes
               (longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  char *local_res8;
  
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,"RigidBodyFlags",&local_res8);
    if (cVar1 != '\0') {
      pcVar3 = strstr(local_res8,"eKINEMATIC");
      if (pcVar3 != (char *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x168))(*(longlong **)(param_1 + 0x30),1,1);
      }
    }
  }
  readShapesProperty<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxRigidDynamic>
            (param_1,*(undefined8 *)(param_1 + 0x30),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00014328d4a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x88))(plVar2);
  return;
}



// FUNCTION 14328d4c0 objectToFileImpl body=98 status=ok
// SIG undefined objectToFileImpl(void)

void physx::RepXSerializerImpl<physx::PxMaterial>::objectToFileImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_28 = *(undefined8 **)(param_5 + 0x10);
  local_20 = 0;
  local_18 = 0;
  Sn::writeAllProperties<physx::PxMaterial>(&local_28,param_2,param_4,param_5,param_3);
  if ((((local_18 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_18)) && (local_20 != 0)) {
    (**(code **)(*(longlong *)*local_28 + 0x10))();
  }
  return;
}



// FUNCTION 14328d530 objectToFileImpl body=98 status=ok
// SIG undefined objectToFileImpl(void)

void physx::RepXSerializerImpl<physx::PxRigidDynamic>::objectToFileImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_28 = *(undefined8 **)(param_5 + 0x10);
  local_20 = 0;
  local_18 = 0;
  Sn::writeAllProperties<physx::PxRigidDynamic>(&local_28,param_2,param_4,param_5,param_3);
  if ((((local_18 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_18)) && (local_20 != 0)) {
    (**(code **)(*(longlong *)*local_28 + 0x10))();
  }
  return;
}



// FUNCTION 14328d5e0 popCurrentContext body=197 status=ok
// SIG undefined popCurrentContext(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar3 = param_1[1];
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = *(uint *)(*(longlong *)(lVar3 + 8) + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 4);
    lVar3 = *param_1;
    uVar2 = *(uint *)(lVar3 + 0x10);
    while (uVar1 < uVar2) {
      if (uVar2 != 0) {
        if ((*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18
                      ) != '\0') &&
           (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 +
                     (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18) != '\0')) {
          (**(code **)(*(longlong *)param_1[5] + 0x48))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      lVar3 = *param_1;
      *(undefined1 *)(param_1 + 9) = 1;
      if (*(int *)(lVar3 + 0x10) != 0) {
        uVar4 = (undefined1)param_1[9];
        if (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 +
                     (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18) == '\0') {
          uVar4 = 0;
        }
        *(undefined1 *)(param_1 + 9) = uVar4;
      }
      uVar2 = *(uint *)(lVar3 + 0x10);
    }
    *(int *)(param_1[1] + 0x10) = *(int *)(param_1[1] + 0x10) + -1;
  }
  return;
}



// FUNCTION 14328d6b0 popName body=128 status=ok
// SIG undefined popName(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName
               (longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if ((*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18) !=
         '\0') &&
       (*(char *)(*(longlong *)(lVar1 + 8) + 0x10 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
        != '\0')) {
      (**(code **)(*(longlong *)param_1[5] + 0x48))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  *(undefined1 *)(param_1 + 9) = 1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    uVar2 = (char)param_1[9];
    if (*(char *)(*(longlong *)(lVar1 + 8) + 0x10 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar2 = 0;
    }
    *(undefined1 *)(param_1 + 9) = uVar2;
  }
  return;
}



// FUNCTION 14328d750 pushName body=133 status=ok
// SIG undefined pushName(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
               (longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined1 uStack_20;
  uint7 uStack_1f;
  undefined1 local_18;
  undefined7 uStack_17;
  
  gotoTopName();
  lVar2 = *param_1;
  local_18 = (undefined1)param_1[9];
  uStack_20 = 0;
  if ((*(uint *)(lVar2 + 0x14) & 0x7fffffff) <= *(uint *)(lVar2 + 0x10)) {
    local_28 = param_2;
    shdfnd::
    Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
    ::growAndPushBack(lVar2,&local_28);
    return;
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = (ulonglong)uStack_1f << 8;
    puVar1[2] = CONCAT71(uStack_17,local_18);
  }
  *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  return;
}



// FUNCTION 14328d7e0 pushName body=175 status=ok
// SIG undefined pushName(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName
               (longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined1 uStack_10;
  uint7 uStack_f;
  
  lVar1 = *param_1;
  if ((*(int *)(lVar1 + 0x10) != 0) &&
     (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) ==
      '\0')) {
    (**(code **)(*(longlong *)param_1[1] + 0x18))
              ((longlong *)param_1[1],
               *(undefined8 *)
                (*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10));
    *(undefined1 *)
     (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
  }
  lVar1 = *param_1;
  uStack_10 = 0;
  if ((*(uint *)(lVar1 + 0x14) & 0x7fffffff) <= *(uint *)(lVar1 + 0x10)) {
    local_18 = param_2;
    shdfnd::
    Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
    ::growAndPushBack(lVar1,&local_18);
    return;
  }
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(lVar1 + 0x10) * 0x10 + *(longlong *)(lVar1 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_2;
    puVar2[1] = (ulonglong)uStack_f << 8;
  }
  *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  return;
}



// FUNCTION 14328d890 readProperty body=711 status=ok
// SIG undefined readProperty(void)

void physx::Sn::readProperty(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 local_res8 [2];
  undefined8 local_res20;
  longlong local_b8 [2];
  undefined8 *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  
  local_58 = (**(code **)(*(longlong *)param_1[7] + 0x18))();
  plVar3 = (longlong *)param_1[8];
  lVar10 = 0;
  local_a0 = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_a8 = &local_58;
  local_78 = 0x3f400000;
  local_88 = 0;
  local_80 = 0;
  local_74 = 0xffffffff;
  local_70 = 0;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<unsigned___int64_const_,physx::PxArticulationLink_const_*___ptr64>,unsigned___int64_const_,physx::shdfnd::Hash<unsigned___int64_const_>,physx::shdfnd::internal::HashMapBase<unsigned___int64_const_,physx::PxArticulationLink_const_*___ptr64,physx::shdfnd::Hash<unsigned___int64_const_>,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>,1>
  ::reserveInternal(&local_a8,0x40);
  lVar6 = param_1[1];
  local_res8[0] = *(undefined4 *)(*param_1 + 0x10);
  if (*(uint *)(lVar6 + 0x10) < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar6 + 8) + (ulonglong)*(uint *)(lVar6 + 0x10) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_res8[0];
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar6,local_res8);
  }
  cVar5 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar5 != '\0') {
    cVar5 = RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    while (cVar5 != '\0') {
      local_b8[0] = 0;
      cVar5 = (**(code **)(*(longlong *)param_1[5] + 8))((longlong *)param_1[5],"Parent",local_b8);
      lVar6 = lVar10;
      if (cVar5 != '\0') {
        if (local_70._4_4_ != 0) {
          uVar9 = ~(local_b8[0] << 0x20) + local_b8[0];
          uVar9 = uVar9 ^ uVar9 >> 0x16;
          uVar9 = uVar9 + ~(uVar9 << 0xd);
          uVar9 = (uVar9 >> 8 ^ uVar9) * 9;
          uVar9 = uVar9 ^ uVar9 >> 0xf;
          uVar9 = uVar9 + ~(uVar9 << 0x1b);
          for (uVar2 = *(uint *)(local_88 +
                                ((uVar9 >> 0x1f & 0xffffffff ^ uVar9 & 0xffffffff) &
                                (ulonglong)(local_80._4_4_ - 1)) * 4); uVar2 != 0xffffffff;
              uVar2 = *(uint *)(lStack_90 + (ulonglong)uVar2 * 4)) {
            if (*(longlong *)(local_98 + (ulonglong)uVar2 * 0x10) == local_b8[0]) {
              if (uVar2 != 0xffffffff) {
                lVar6 = (ulonglong)uVar2 * 0x10 + local_98;
              }
              break;
            }
          }
        }
        lVar6 = *(longlong *)(lVar6 + 8);
      }
      local_38 = 0;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0x3f800000;
      local_30 = 0;
      uVar7 = (**(code **)(*param_2 + 200))(param_2,lVar6,&local_48);
      local_res20 = 0;
      (**(code **)(*(longlong *)param_1[5] + 8))((longlong *)param_1[5],&DAT_145af3938,&local_res20)
      ;
      uVar4 = local_res20;
      local_50 = local_res20;
      puVar8 = (undefined8 *)
               shdfnd::internal::
               HashBase<physx::shdfnd::Pair<unsigned___int64_const_,physx::PxArticulationLink_const_*___ptr64>,unsigned___int64_const_,physx::shdfnd::Hash<unsigned___int64_const_>,physx::shdfnd::internal::HashMapBase<unsigned___int64_const_,physx::PxArticulationLink_const_*___ptr64,physx::shdfnd::Hash<unsigned___int64_const_>,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>,1>
               ::create(&local_a8,&local_50,local_res8);
      if (((char)local_res8[0] == '\0') && (puVar8 != (undefined8 *)0x0)) {
        *puVar8 = uVar4;
        puVar8[1] = uVar7;
      }
      readComplexObj<physx::PxArticulationLink,physx::Sn::RepXVisitorReaderBase<physx::PxArticulation>_>
                (param_1,uVar7);
      (**(code **)(*plVar3 + 8))(plVar3,uVar7,local_res20);
      if ((char)param_1[9] == '\0') break;
      cVar5 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  if (local_a0 != 0) {
    (**(code **)(*(longlong *)*local_a8 + 0x10))();
  }
  return;
}



// FUNCTION 14328db60 recreate body=224 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxArticulationLink_*___ptr64,physx::shdfnd::InlineAllocator<512,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_*___ptr64>_>_>
     ::recreate(undefined8 *param_1,int param_2)

{
  undefined8 *_Dst;
  
  if (param_2 == 0) {
    _Dst = (undefined8 *)0x0;
  }
  else if ((*(char *)(param_1 + 0x41) == '\0') && ((uint)(param_2 * 8) < 0x201)) {
    *(undefined1 *)(param_1 + 0x41) = 1;
    _Dst = param_1 + 1;
  }
  else {
    _Dst = (undefined8 *)
           (**(code **)(**(longlong **)*param_1 + 8))
                     (*(longlong **)*param_1,param_2 * 8,"<no allocation names in this config>",
                      "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                      ,0x25d);
  }
  if (_Dst < _Dst + *(uint *)(param_1 + 0x43)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,(void *)param_1[0x42],(ulonglong)(*(uint *)(param_1 + 0x43) * 8));
  }
  if (-1 < *(int *)((longlong)param_1 + 0x21c)) {
    if ((undefined8 *)param_1[0x42] == param_1 + 1) {
      *(undefined1 *)(param_1 + 0x41) = 0;
    }
    else if ((undefined8 *)param_1[0x42] != (undefined8 *)0x0) {
      (**(code **)(**(longlong **)*param_1 + 0x10))();
    }
  }
  *(int *)((longlong)param_1 + 0x21c) = param_2;
  param_1[0x42] = _Dst;
  return;
}



// FUNCTION 14328dc40 recreate body=221 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxArticulationLink_*___ptr64,physx::shdfnd::InlineAllocator<512,physx::shdfnd::ReflectionAllocator<physx::PxArticulationLink_*___ptr64>_>_>
     ::recreate(void *param_1,int param_2)

{
  void *pvVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 0x200) == '\0') && ((uint)(param_2 * 8) < 0x201)) {
    *(undefined1 *)((longlong)param_1 + 0x200) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::PxArticulationLink_*___ptr64>::allocate
                             (param_1,param_2 * 8,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)((longlong)param_1 + 0x210) * 8)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 0x208),
               (ulonglong)(*(uint *)((longlong)param_1 + 0x210) * 8));
  }
  if (-1 < *(int *)((longlong)param_1 + 0x214)) {
    pvVar1 = *(void **)((longlong)param_1 + 0x208);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0x200) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(int *)((longlong)param_1 + 0x214) = param_2;
  *(void **)((longlong)param_1 + 0x208) = _Dst;
  return;
}



// FUNCTION 14328dd20 recreate body=190 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxArticulationLink_*___ptr64,physx::shdfnd::InlineAllocator<64,physx::shdfnd::ReflectionAllocator<physx::PxArticulationLink_*___ptr64>_>_>
     ::recreate(void *param_1,int param_2)

{
  void *pvVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 0x40) == '\0') && ((uint)(param_2 * 8) < 0x41)) {
    *(undefined1 *)((longlong)param_1 + 0x40) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::PxArticulationLink_*___ptr64>::allocate
                             (param_1,param_2 * 8,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)((longlong)param_1 + 0x50) * 8)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 0x48),
               (ulonglong)(*(uint *)((longlong)param_1 + 0x50) * 8));
  }
  if (-1 < *(int *)((longlong)param_1 + 0x54)) {
    pvVar1 = *(void **)((longlong)param_1 + 0x48);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0x40) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(int *)((longlong)param_1 + 0x54) = param_2;
  *(void **)((longlong)param_1 + 0x48) = _Dst;
  return;
}



// FUNCTION 14328dde0 recreate body=190 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxMaterial_*___ptr64,physx::shdfnd::InlineAllocator<40,physx::shdfnd::ReflectionAllocator<physx::PxMaterial_*___ptr64>_>_>
     ::recreate(void *param_1,int param_2)

{
  void *pvVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 0x28) == '\0') && ((uint)(param_2 * 8) < 0x29)) {
    *(undefined1 *)((longlong)param_1 + 0x28) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::PxMaterial_*___ptr64>::allocate
                             (param_1,param_2 * 8,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)((longlong)param_1 + 0x38) * 8)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 0x30),
               (ulonglong)(*(uint *)((longlong)param_1 + 0x38) * 8));
  }
  if (-1 < *(int *)((longlong)param_1 + 0x3c)) {
    pvVar1 = *(void **)((longlong)param_1 + 0x30);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0x28) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(int *)((longlong)param_1 + 0x3c) = param_2;
  *(void **)((longlong)param_1 + 0x30) = _Dst;
  return;
}



// FUNCTION 14328dea0 recreate body=190 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxShape_*___ptr64,physx::shdfnd::InlineAllocator<40,physx::shdfnd::ReflectionAllocator<physx::PxShape_*___ptr64>_>_>
     ::recreate(void *param_1,int param_2)

{
  void *pvVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 0x28) == '\0') && ((uint)(param_2 * 8) < 0x29)) {
    *(undefined1 *)((longlong)param_1 + 0x28) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::PxShape_*___ptr64>::allocate
                             (param_1,param_2 * 8,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)((longlong)param_1 + 0x38) * 8)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 0x30),
               (ulonglong)(*(uint *)((longlong)param_1 + 0x38) * 8));
  }
  if (-1 < *(int *)((longlong)param_1 + 0x3c)) {
    pvVar1 = *(void **)((longlong)param_1 + 0x30);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0x28) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(int *)((longlong)param_1 + 0x3c) = param_2;
  *(void **)((longlong)param_1 + 0x30) = _Dst;
  return;
}



// FUNCTION 14328df60 recurseAddLinkAndChildren body=327 status=ok
// SIG undefined recurseAddLinkAndChildren(void)

void physx::Sn::RepXVisitorWriter<physx::PxArticulation>::recurseAddLinkAndChildren
               (undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  PxAllocatorCallback *pPVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *local_res10;
  undefined8 local_res18 [2];
  undefined1 local_78 [64];
  undefined1 local_38;
  undefined1 *local_30;
  undefined4 local_28;
  uint local_24;
  
  local_res10 = param_2;
  if (*(uint *)(param_3 + 0x210) < (*(uint *)(param_3 + 0x214) & 0x7fffffff)) {
    puVar1 = (undefined8 *)
             (*(longlong *)(param_3 + 0x208) + (ulonglong)*(uint *)(param_3 + 0x210) * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_2;
    }
    *(int *)(param_3 + 0x210) = *(int *)(param_3 + 0x210) + 1;
  }
  else {
    shdfnd::
    Array<physx::PxArticulationLink_const_*___ptr64,physx::shdfnd::InlineAllocator<512,physx::shdfnd::ReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>_>_>
    ::growAndPushBack(param_3,&local_res10);
  }
  local_30 = local_78;
  local_38 = 1;
  lVar5 = 0;
  local_28 = 0;
  local_24 = 8;
  uVar3 = (**(code **)(*param_2 + 0x1c0))(param_2);
  local_res18[0] = 0;
  local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar3);
  shdfnd::
  Array<physx::PxArticulationLink_*___ptr64,physx::shdfnd::InlineAllocator<64,physx::shdfnd::ReflectionAllocator<physx::PxArticulationLink_*___ptr64>_>_>
  ::resize(local_78,uVar3,local_res18);
  (**(code **)(*param_2 + 0x1c8))(param_2,local_30,(ulonglong)local_res10 & 0xffffffff,0);
  if ((int)local_res10 != 0) {
    uVar6 = (ulonglong)local_res10 & 0xffffffff;
    do {
      recurseAddLinkAndChildren(param_1,*(undefined8 *)(local_30 + lVar5),param_3);
      lVar5 = lVar5 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  puVar2 = local_30;
  if (((((local_24 & 0x7fffffff) != 0) && (-1 < (int)local_24)) && (local_30 != local_78)) &&
     (local_30 != (undefined1 *)0x0)) {
    pPVar4 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4,puVar2);
  }
  return;
}



// FUNCTION 14328e0b0 registerReferences body=78 status=ok
// SIG undefined registerReferences(void)

void physx::PxSerializerDefaultAdapter<physx::Ext::D6Joint>::registerReferences
               (undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined **local_18;
  undefined8 *local_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  local_18 = &PTR_FUN_145af4070;
  local_10 = param_3;
  (**(code **)(*param_2 + 400))(param_2,&local_18);
  return;
}



// FUNCTION 14328e100 registerReferences body=78 status=ok
// SIG undefined registerReferences(void)

void physx::PxSerializerDefaultAdapter<physx::Ext::DistanceJoint>::registerReferences
               (undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined **local_18;
  undefined8 *local_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  local_18 = &PTR_FUN_145af4070;
  local_10 = param_3;
  (**(code **)(*param_2 + 0x158))(param_2,&local_18);
  return;
}



// FUNCTION 14328e150 registerReferences body=78 status=ok
// SIG undefined registerReferences(void)

void physx::PxSerializerDefaultAdapter<physx::Ext::FixedJoint>::registerReferences
               (undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined **local_18;
  undefined8 *local_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  local_18 = &PTR_FUN_145af4070;
  local_10 = param_3;
  (**(code **)(*param_2 + 0x108))(param_2,&local_18);
  return;
}



// FUNCTION 14328e1a0 registerReferences body=78 status=ok
// SIG undefined registerReferences(void)

void physx::PxSerializerDefaultAdapter<physx::Ext::PrismaticJoint>::registerReferences
               (undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined **local_18;
  undefined8 *local_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  local_18 = &PTR_FUN_145af4070;
  local_10 = param_3;
  (**(code **)(*param_2 + 0x140))(param_2,&local_18);
  return;
}



// FUNCTION 14328e1f0 registerReferences body=78 status=ok
// SIG undefined registerReferences(void)

void physx::PxSerializerDefaultAdapter<physx::Ext::RevoluteJoint>::registerReferences
               (undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined **local_18;
  undefined8 *local_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  local_18 = &PTR_FUN_145af4070;
  local_10 = param_3;
  (**(code **)(*param_2 + 0x170))(param_2,&local_18);
  return;
}



// FUNCTION 14328e240 registerReferences body=78 status=ok
// SIG undefined registerReferences(void)

void physx::PxSerializerDefaultAdapter<physx::Ext::SphericalJoint>::registerReferences
               (undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined **local_18;
  undefined8 *local_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  local_18 = &PTR_FUN_145af4070;
  local_10 = param_3;
  (**(code **)(*param_2 + 0x120))(param_2,&local_18);
  return;
}



// FUNCTION 14328e2f0 reserveInternal body=465 status=ok
// SIG undefined reserveInternal(void)

void physx::shdfnd::internal::
     HashBase<physx::shdfnd::Pair<unsigned___int64_const_,physx::PxArticulationLink_const_*___ptr64>,unsigned___int64_const_,physx::shdfnd::Hash<unsigned___int64_const_>,physx::shdfnd::internal::HashMapBase<unsigned___int64_const_,physx::PxArticulationLink_const_*___ptr64,physx::shdfnd::Hash<unsigned___int64_const_>,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>,1>
     ::reserveInternal(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  
  if ((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) {
    param_2 = param_2 >> 1 | param_2;
    param_2 = param_2 | param_2 >> 2;
    param_2 = param_2 | param_2 >> 4;
    param_2 = param_2 | param_2 >> 8;
    param_2 = (param_2 >> 0x10 | param_2) + 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 5);
  uVar8 = param_2 * 4;
  iVar10 = (int)(longlong)((float)param_2 * *(float *)(param_1 + 6));
  iVar5 = uVar8 + iVar10 * 4;
  uVar6 = iVar5 + (-iVar5 & 0xfU);
  _Dst = (void *)(**(code **)(**(longlong **)*param_1 + 8))
                           (*(longlong **)*param_1,iVar10 * 0x10 + uVar6,
                            "<no allocation names in this config>",
                            "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsHashInternals.h"
                            ,0x174);
  lVar7 = (ulonglong)uVar6 + (longlong)_Dst;
  ::_guard_xfg_dispatch_icall_nop(_Dst,-1,(ulonglong)uVar8);
  uVar9 = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    do {
      lVar3 = *(longlong *)(param_1[2] + uVar9 * 0x10);
      uVar4 = lVar3 + ~(lVar3 << 0x20);
      uVar4 = uVar4 ^ uVar4 >> 0x16;
      uVar4 = uVar4 + ~(uVar4 << 0xd);
      uVar4 = (uVar4 >> 8 ^ uVar4) * 9;
      uVar4 = uVar4 ^ uVar4 >> 0xf;
      uVar4 = uVar4 + ~(uVar4 << 0x1b);
      puVar1 = (undefined8 *)(lVar7 + uVar9 * 0x10);
      uVar4 = (uVar4 >> 0x1f & 0xffffffff ^ uVar4 & 0xffffffff) & (ulonglong)(param_2 - 1);
      *(undefined4 *)((ulonglong)uVar8 + (longlong)_Dst + uVar9 * 4) =
           *(undefined4 *)((longlong)_Dst + uVar4 * 4);
      *(int *)((longlong)_Dst + uVar4 * 4) = (int)uVar9;
      if (puVar1 != (undefined8 *)0x0) {
        lVar3 = param_1[2];
        *puVar1 = *(undefined8 *)(lVar3 + uVar9 * 0x10);
        puVar1[1] = *(undefined8 *)(lVar3 + 8 + uVar9 * 0x10);
      }
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)((longlong)param_1 + 0x3c));
  }
  if (param_1[1] != 0) {
    (**(code **)(**(longlong **)*param_1 + 0x10))();
  }
  param_1[1] = _Dst;
  param_1[4] = _Dst;
  *(uint *)((longlong)param_1 + 0x2c) = param_2;
  param_1[3] = (ulonglong)uVar8 + (longlong)_Dst;
  param_1[2] = lVar7;
  *(int *)(param_1 + 5) = iVar10;
  if (*(int *)((longlong)param_1 + 0x34) == -1) {
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  }
  return;
}



// FUNCTION 14328e4d0 resize body=142 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxArticulationLink_*___ptr64,physx::shdfnd::InlineAllocator<512,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_*___ptr64>_>_>
     ::resize(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *_Dst;
  
  if ((*(uint *)(param_1 + 0x21c) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x210) + (ulonglong)param_2 * 8);
  _Dst = (longlong *)(*(longlong *)(param_1 + 0x210) + (ulonglong)*(uint *)(param_1 + 0x218) * 8);
  if (*param_3 == 0) {
    if (_Dst < plVar1) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)((int)plVar1 - (int)_Dst & 0xfffffff8));
    }
  }
  else {
    for (; _Dst < plVar1; _Dst = _Dst + 1) {
      if (_Dst != (longlong *)0x0) {
        *_Dst = *param_3;
      }
    }
  }
  *(uint *)(param_1 + 0x218) = param_2;
  return;
}



// FUNCTION 14328e560 resize body=142 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxArticulationLink_*___ptr64,physx::shdfnd::InlineAllocator<512,physx::shdfnd::ReflectionAllocator<physx::PxArticulationLink_*___ptr64>_>_>
     ::resize(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *_Dst;
  
  if ((*(uint *)(param_1 + 0x214) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x208) + (ulonglong)param_2 * 8);
  _Dst = (longlong *)(*(longlong *)(param_1 + 0x208) + (ulonglong)*(uint *)(param_1 + 0x210) * 8);
  if (*param_3 == 0) {
    if (_Dst < plVar1) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)((int)plVar1 - (int)_Dst & 0xfffffff8));
    }
  }
  else {
    for (; _Dst < plVar1; _Dst = _Dst + 1) {
      if (_Dst != (longlong *)0x0) {
        *_Dst = *param_3;
      }
    }
  }
  *(uint *)(param_1 + 0x210) = param_2;
  return;
}



// FUNCTION 14328e5f0 resize body=151 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxArticulationLink_*___ptr64,physx::shdfnd::InlineAllocator<64,physx::shdfnd::ReflectionAllocator<physx::PxArticulationLink_*___ptr64>_>_>
     ::resize(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *_Dst;
  
  if ((*(uint *)(param_1 + 0x54) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)param_2 * 8);
  _Dst = (longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x50) * 8);
  if (*param_3 == 0) {
    if (_Dst < plVar1) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)((int)plVar1 - (int)_Dst & 0xfffffff8));
      *(uint *)(param_1 + 0x50) = param_2;
      return;
    }
  }
  else {
    for (; _Dst < plVar1; _Dst = _Dst + 1) {
      if (_Dst != (longlong *)0x0) {
        *_Dst = *param_3;
      }
    }
  }
  *(uint *)(param_1 + 0x50) = param_2;
  return;
}



// FUNCTION 14328e690 resize body=151 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxMaterial_*___ptr64,physx::shdfnd::InlineAllocator<40,physx::shdfnd::ReflectionAllocator<physx::PxMaterial_*___ptr64>_>_>
     ::resize(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *_Dst;
  
  if ((*(uint *)(param_1 + 0x3c) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x30) + (ulonglong)param_2 * 8);
  _Dst = (longlong *)(*(longlong *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x38) * 8);
  if (*param_3 == 0) {
    if (_Dst < plVar1) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)((int)plVar1 - (int)_Dst & 0xfffffff8));
      *(uint *)(param_1 + 0x38) = param_2;
      return;
    }
  }
  else {
    for (; _Dst < plVar1; _Dst = _Dst + 1) {
      if (_Dst != (longlong *)0x0) {
        *_Dst = *param_3;
      }
    }
  }
  *(uint *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 14328e730 resize body=151 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxShape_*___ptr64,physx::shdfnd::InlineAllocator<40,physx::shdfnd::ReflectionAllocator<physx::PxShape_*___ptr64>_>_>
     ::resize(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *_Dst;
  
  if ((*(uint *)(param_1 + 0x3c) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x30) + (ulonglong)param_2 * 8);
  _Dst = (longlong *)(*(longlong *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x38) * 8);
  if (*param_3 == 0) {
    if (_Dst < plVar1) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)((int)plVar1 - (int)_Dst & 0xfffffff8));
      *(uint *)(param_1 + 0x38) = param_2;
      return;
    }
  }
  else {
    for (; _Dst < plVar1; _Dst = _Dst + 1) {
      if (_Dst != (longlong *)0x0) {
        *_Dst = *param_3;
      }
    }
  }
  *(uint *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 14328e7d0 set body=216 status=ok
// SIG undefined set(void)

void physx::Vd::PxPvdRangePropertyAccessor<462,physx::PxD6Joint,physx::PxVec3>::set
               (longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x28))(param_2,local_38,local_48);
  if (*(char *)(param_1 + 8) == '\0') {
    local_18 = *param_3;
    puVar2 = &local_18;
    local_14 = param_3[1];
    puVar1 = local_28;
    local_10 = param_3[2];
    local_28[0] = local_38[0];
  }
  else {
    puVar2 = local_28;
    local_18 = *param_3;
    puVar1 = &local_18;
    local_14 = param_3[1];
    local_10 = param_3[2];
    local_28[0] = local_48[0];
  }
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))(param_2,puVar1,puVar2);
  return;
}



// FUNCTION 14328e8b0 set body=109 status=ok
// SIG undefined set(void)

void physx::Vd::PxPvdRangePropertyAccessor<59,physx::PxRigidDynamic,unsigned_int>::set
               (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x28))(param_2,local_res20,local_res8);
  if (*(char *)(param_1 + 8) != '\0') {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))(param_2,param_3,local_res8[0]);
    return;
  }
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))(param_2,local_res20[0],param_3);
  return;
}



// FUNCTION 14328e920 strToFloat body=254 status=ok
// SIG undefined strToFloat(void)

float physx::Sn::strToFloat(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  double dVar5;
  char *local_res8;
  char local_108 [255];
  char local_9;
  
  bVar1 = *param_1;
  while ((bVar1 != 0 && (iVar2 = isspace((uint)bVar1), iVar2 != 0))) {
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_108,0,0x100);
  local_res8 = &local_9;
  pcVar3 = local_108;
  if (*param_1 != 0) {
    lVar4 = (longlong)param_1 - (longlong)local_108;
    do {
      iVar2 = isspace((uint)(byte)pcVar3[lVar4]);
      if ((iVar2 != 0) || (local_res8 <= pcVar3)) break;
      *pcVar3 = pcVar3[lVar4];
      pcVar3 = pcVar3 + 1;
    } while (pcVar3[lVar4] != '\0');
  }
  *pcVar3 = '\0';
  dVar5 = strtod(local_108,&local_res8);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1 + ((longlong)local_res8 - (longlong)local_108);
  }
  return (float)dVar5;
}



// FUNCTION 14328ea20 stringToFlagsType body=182 status=ok
// SIG undefined stringToFlagsType(void)

void physx::Sn::stringToFlagsType(char *param_1,longlong *param_2,uint *param_3,longlong param_4)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (((param_4 != 0) && (*param_3 = 0, param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    pcVar2 = (char *)copyStr<physx::XmlMemoryAllocator>(param_2,param_1);
    pcVar3 = pcVar2;
    pcVar4 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      do {
        pcVar6 = pcVar3;
        if (*pcVar4 == '\0') break;
        pcVar5 = pcVar4 + 1;
        if (*pcVar5 == '|') {
          *pcVar5 = '\0';
          pcVar6 = pcVar4 + 2;
          uVar1 = findEnumByName(pcVar3,param_4);
          *param_3 = *param_3 | uVar1;
          pcVar5 = pcVar6;
        }
        pcVar3 = pcVar6;
        pcVar4 = pcVar5;
      } while (pcVar5 != (char *)0x0);
      if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
        uVar1 = findEnumByName(pcVar6,param_4);
        *param_3 = *param_3 | uVar1;
      }
    }
    (**(code **)(*param_2 + 0x10))(param_2,pcVar2);
  }
  return;
}



// FUNCTION 14328eae0 writeArticulationLink body=552 status=ok
// SIG undefined writeArticulationLink(void)

void physx::Sn::RepXVisitorWriter<physx::PxArticulation>::writeArticulationLink
               (longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  PxArticulationLinkGeneratedInfo local_308 [752];
  
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_1,"PxArticulationLink");
  lVar5 = *param_1;
  if ((*(int *)(lVar5 + 0x10) != 0) &&
     (*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10) ==
      '\0')) {
    (**(code **)(*(longlong *)param_1[1] + 0x18))
              ((longlong *)param_1[1],
               *(undefined8 *)
                (*(longlong *)(lVar5 + 8) + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10));
    *(undefined1 *)
     (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
  }
  lVar5 = param_1[5];
  if ((*(int *)(lVar5 + 0x3c) != 0) &&
     (uVar4 = ~(param_2 << 0x20) + param_2, uVar4 = uVar4 ^ uVar4 >> 0x16,
     uVar4 = uVar4 + ~(uVar4 << 0xd), uVar4 = (uVar4 >> 8 ^ uVar4) * 9, uVar4 = uVar4 ^ uVar4 >> 0xf
     , uVar4 = uVar4 + ~(uVar4 << 0x1b),
     uVar3 = *(uint *)(*(longlong *)(lVar5 + 0x20) +
                      ((uVar4 >> 0x1f & 0xffffffff ^ uVar4 & 0xffffffff) &
                      (ulonglong)(*(int *)(lVar5 + 0x2c) - 1)) * 4), uVar3 != 0xffffffff)) {
    do {
      if (*(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)uVar3 * 0x10) == param_2) {
        if ((uVar3 != 0xffffffff) &&
           (lVar5 = (ulonglong)uVar3 * 0x10 + *(longlong *)(lVar5 + 0x10), lVar5 != 0)) {
          puVar1 = (undefined8 *)param_1[3];
          plVar2 = (longlong *)param_1[1];
          physx::operator<<(puVar1,*(undefined8 *)(lVar5 + 8));
          local_res8[0] = 0;
          (**(code **)*puVar1)(puVar1,local_res8,1);
          (**(code **)(*plVar2 + 0x10))(plVar2,"Parent",puVar1[4]);
          puVar1[3] = 0;
        }
        break;
      }
      uVar3 = *(uint *)(*(longlong *)(lVar5 + 0x18) + (ulonglong)uVar3 * 4);
    } while (uVar3 != 0xffffffff);
  }
  puVar1 = (undefined8 *)param_1[3];
  plVar2 = (longlong *)param_1[1];
  physx::operator<<(puVar1,param_2);
  local_res8[0] = 0;
  (**(code **)*puVar1)(puVar1,local_res8,1);
  (**(code **)(*plVar2 + 0x10))(plVar2,&DAT_145af3938,puVar1[4]);
  puVar1[3] = 0;
  physx::PxArticulationLinkGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_308);
  writeAllProperties<physx::PxArticulationLink>(*param_1,param_2,param_1[1],param_1[3],param_1[4]);
  lVar5 = *param_1;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14328ed10 writeFlagsProperty body=255 status=ok
// SIG undefined writeFlagsProperty(void)

void physx::Sn::writeFlagsProperty
               (longlong *param_1,undefined8 *param_2,undefined8 param_3,uint param_4,
               longlong *param_5)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar2 = param_5;
  if ((param_5 != (longlong *)0x0) && (param_4 != 0)) {
    uVar4 = 0;
    lVar5 = *param_5;
    plVar3 = param_5;
    while (lVar5 != 0) {
      if ((*(uint *)(plVar3 + 1) & param_4) == *(uint *)(plVar3 + 1)) {
        if (*(int *)(param_2 + 3) != 0) {
          (**(code **)*param_2)(param_2,&DAT_145af3924);
        }
        pcVar1 = (char *)*plVar3;
        if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
          lVar5 = -1;
          do {
            lVar5 = lVar5 + 1;
          } while (pcVar1[lVar5] != '\0');
          (**(code **)*param_2)(param_2);
        }
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      plVar3 = plVar2 + uVar4 * 2;
      lVar5 = *plVar3;
    }
    param_5._0_1_ = 0;
    (**(code **)*param_2)(param_2,&param_5,1);
    (**(code **)(*param_1 + 0x10))(param_1,param_3,param_2[4]);
    param_2[3] = 0;
  }
  return;
}



// FUNCTION 14328ee10 D6JointSolverPrep body=10347 status=ok
// SIG undefined D6JointSolverPrep(void)

longlong D6JointSolverPrep(float *param_1,float *param_2,undefined8 param_3,undefined8 *param_4,
                          undefined8 *param_5,float *param_6,undefined8 param_7)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  float *pfVar5;
  float *pfVar6;
  ushort uVar7;
  ushort uVar8;
  longlong lVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  undefined8 *puVar13;
  float *pfVar14;
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
  float local_res8;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  float local_208 [4];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float *local_1d0;
  float *local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  float local_180;
  float local_178;
  float local_174;
  uint local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  
  pfVar11 = param_6;
  puVar13 = param_5;
  uVar3 = param_5[1];
  *param_4 = *param_5;
  param_4[1] = uVar3;
  fVar16 = param_6[3];
  fVar18 = param_6[1];
  fVar27 = *(float *)(param_5 + 5) + *(float *)(param_5 + 5);
  fVar26 = *param_6;
  fVar40 = param_6[2];
  fVar30 = *(float *)(param_5 + 4) + *(float *)(param_5 + 4);
  local_170 = *(uint *)(param_5 + 0x2a);
  fVar37 = *(float *)((longlong)param_5 + 0x24) + *(float *)((longlong)param_5 + 0x24);
  uVar12 = *(uint *)((longlong)param_5 + 0x14c);
  uVar2 = *(uint *)((longlong)param_5 + 0x154);
  fVar24 = fVar16 * fVar16 - 0.5;
  fVar20 = fVar30 * fVar26 + fVar37 * fVar18 + fVar27 * fVar40;
  fVar41 = (fVar27 * fVar18 - fVar37 * fVar40) * fVar16 + fVar24 * fVar30 + fVar20 * fVar26 +
           param_6[4];
  fVar32 = (fVar30 * fVar40 - fVar27 * fVar26) * fVar16 + fVar24 * fVar37 + fVar20 * fVar18 +
           param_6[5];
  fVar38 = (fVar37 * fVar26 - fVar30 * fVar18) * fVar16 + fVar24 * fVar27 + fVar20 * fVar40 +
           param_6[6];
  pfVar5 = (float *)physx::PxQuat::operator*(param_6,&local_160);
  pfVar6 = (float *)CONCAT44(param_7._4_4_,(float)param_7);
  fVar28 = *(float *)((longlong)puVar13 + 0x44) + *(float *)((longlong)puVar13 + 0x44);
  fVar31 = *(float *)((longlong)puVar13 + 0x3c) + *(float *)((longlong)puVar13 + 0x3c);
  fVar16 = pfVar6[3];
  fVar18 = pfVar6[1];
  fVar26 = *pfVar6;
  fVar40 = pfVar6[2];
  fVar20 = *pfVar5;
  fVar24 = pfVar5[1];
  fVar27 = pfVar5[2];
  fVar30 = pfVar5[3];
  fVar39 = *(float *)(puVar13 + 8) + *(float *)(puVar13 + 8);
  fVar25 = fVar16 * fVar16 - 0.5;
  fVar37 = fVar31 * fVar26 + fVar39 * fVar18 + fVar28 * fVar40;
  fVar42 = (fVar28 * fVar18 - fVar39 * fVar40) * fVar16 + fVar25 * fVar31 + fVar37 * fVar26 +
           pfVar6[4];
  fVar29 = (fVar31 * fVar40 - fVar28 * fVar26) * fVar16 + fVar25 * fVar39 + fVar37 * fVar18 +
           pfVar6[5];
  fVar40 = (fVar39 * fVar26 - fVar31 * fVar18) * fVar16 + fVar25 * fVar28 + fVar37 * fVar40 +
           pfVar6[6];
  param_6._0_4_ = fVar29;
  local_100 = fVar20;
  local_fc = fVar24;
  local_f8 = fVar27;
  local_f4 = fVar30;
  local_f0 = fVar41;
  local_ec = fVar32;
  local_e8 = fVar38;
  pfVar5 = (float *)physx::PxQuat::operator*(pfVar6,&local_160);
  fVar16 = pfVar11[5];
  local_140 = *pfVar5;
  fVar18 = pfVar11[6];
  local_13c = pfVar5[1];
  local_134 = pfVar5[3];
  fVar26 = pfVar5[2];
  *param_2 = fVar42 - pfVar11[4];
  param_2[2] = fVar40 - fVar18;
  param_2[1] = fVar29 - fVar16;
  local_1e8 = fVar40 - pfVar6[6];
  local_1f4 = fVar38 - pfVar11[6];
  local_1ec = fVar29 - pfVar6[5];
  local_1f8 = fVar32 - pfVar11[5];
  local_1f0 = fVar41 - pfVar11[4];
  local_1e4 = fVar42 - pfVar6[4];
  if (fVar20 * local_140 + fVar24 * local_13c + fVar27 * fVar26 + fVar30 * local_134 < 0.0) {
    local_140 = -local_140;
    local_13c = -local_13c;
    local_134 = -local_134;
    fVar26 = -fVar26;
  }
  fVar31 = local_134;
  fVar28 = local_13c;
  fVar25 = local_140;
  fVar16 = (param_6._0_4_ - fVar32) * 2.0;
  fVar32 = (fVar42 - fVar41) * 2.0;
  local_220 = -fVar20;
  fVar23 = fVar30 * fVar30 - 0.5;
  fVar37 = (fVar40 - fVar38) * 2.0;
  fStack_21c = -fVar24;
  fStack_218 = -fVar27;
  fVar18 = fVar16 * fStack_21c + fVar32 * local_220 + fVar37 * fStack_218;
  fVar39 = (fVar37 * fStack_21c - fVar16 * fStack_218) * fVar30 + fVar23 * fVar32 +
           fVar18 * local_220;
  fVar41 = (fVar32 * fStack_218 - fVar37 * local_220) * fVar30 + fVar23 * fVar16 +
           fVar18 * fStack_21c;
  param_6._0_4_ =
       (fVar16 * local_220 - fVar32 * fStack_21c) * fVar30 + fVar23 * fVar37 + fVar18 * fStack_218;
  fStack_214 = fVar30;
  local_1d0 = param_1;
  local_1c8 = param_1;
  local_1c0 = local_1f0;
  local_1bc = local_1f8;
  local_1b8 = local_1f4;
  local_1b4 = local_1e4;
  local_1b0 = local_1ec;
  local_1ac = local_1e8;
  local_138 = fVar26;
  local_130 = fVar42;
  local_12c = fVar29;
  local_128 = fVar40;
  pfVar6 = (float *)physx::PxQuat::operator*(&local_220,&local_160,&local_140);
  fVar16 = *pfVar6;
  fVar18 = pfVar6[1];
  local_120 = fVar16;
  fVar40 = pfVar6[3];
  local_11c = fVar18;
  fVar37 = pfVar6[2];
  local_118 = fVar37;
  fVar21 = fVar20 + fVar20;
  local_110 = fVar39;
  local_10c = fVar41;
  local_108 = param_6._0_4_;
  fVar42 = fVar24 + fVar24;
  fVar32 = fVar27 * (fVar27 + fVar27);
  fVar29 = fVar30 * (fVar27 + fVar27);
  local_114 = fVar40;
  local_1e0 = (1.0 - fVar42 * fVar24) - fVar32;
  local_1dc = fVar29 + fVar21 * fVar24;
  fVar29 = fVar21 * fVar24 - fVar29;
  fVar15 = 1.0 - fVar21 * fVar20;
  local_1d8 = fVar27 * fVar21 - fVar30 * fVar42;
  fVar32 = fVar15 - fVar32;
  fVar15 = fVar15 - fVar42 * fVar24;
  fVar33 = fVar30 * fVar42 + fVar27 * fVar21;
  fVar38 = fVar27 * fVar42 + fVar30 * fVar21;
  param_7._0_4_ = fVar27 * fVar42 - fVar30 * fVar21;
  local_180 = fVar15;
  local_1a0 = CONCAT44(local_1dc,local_1e0);
  fVar22 = fVar25 + fVar25;
  uStack_198 = CONCAT44(fVar29,local_1d8);
  local_190 = CONCAT44(fVar38,fVar32);
  uStack_188 = CONCAT44((float)param_7,fVar33);
  fVar42 = fVar28 + fVar28;
  fVar19 = fVar26 * (fVar26 + fVar26);
  fVar21 = fVar31 * (fVar26 + fVar26);
  fVar35 = (1.0 - fVar42 * fVar28) - fVar19;
  fVar34 = fVar21 + fVar22 * fVar28;
  fVar36 = fVar26 * fVar22 - fVar31 * fVar42;
  fVar17 = fVar31 * fVar42 + fVar26 * fVar22;
  local_16c = fVar35;
  local_168 = fVar34;
  fVar21 = fVar22 * fVar28 - fVar21;
  fVar25 = 1.0 - fVar22 * fVar25;
  local_174 = fVar25 - fVar42 * fVar28;
  fVar25 = fVar25 - fVar19;
  fVar28 = fVar26 * fVar42 + fVar31 * fVar22;
  local_178 = fVar26 * fVar42 - fVar31 * fVar22;
  if ((uVar2 & 7) != 0) {
    pfVar5 = (float *)(puVar13 + 0x18);
    pfVar6 = local_208;
    pfVar11 = (float *)((longlong)&local_1a0 + 4);
    lVar9 = 3;
    local_208[0] = *(float *)(puVar13 + 0x25) - fVar39;
    uVar10 = 1;
    local_208[1] = *(float *)((longlong)puVar13 + 300) - fVar41;
    local_208[2] = *(float *)(puVar13 + 0x26) - param_6._0_4_;
    pfVar14 = param_1;
    do {
      param_1 = pfVar14;
      if ((uVar2 & uVar10) != 0) {
        fVar26 = *(float *)((longlong)puVar13 + (0x134 - (longlong)local_208) + (longlong)pfVar6);
        fVar31 = *pfVar11;
        fVar42 = pfVar11[1];
        fVar19 = pfVar11[-1];
        fVar22 = *pfVar6;
        *(undefined2 *)((longlong)pfVar14 + 0x4e) = 0;
        param_1 = pfVar14 + 0x14;
        *pfVar14 = fVar19;
        pfVar14[1] = fVar31;
        pfVar14[2] = fVar42;
        local_1c8 = param_1;
        pfVar14[4] = local_1f8 * fVar42 - local_1f4 * fVar31;
        pfVar14[5] = local_1f4 * fVar19 - local_1f0 * fVar42;
        pfVar14[6] = local_1f0 * fVar31 - local_1f8 * fVar19;
        pfVar14[8] = fVar19;
        pfVar14[9] = fVar31;
        pfVar14[10] = fVar42;
        pfVar14[0xc] = local_1ec * fVar42 - local_1e8 * fVar31;
        pfVar14[0xd] = local_1e8 * fVar19 - local_1e4 * fVar42;
        pfVar14[0xe] = local_1e4 * fVar31 - local_1ec * fVar19;
        pfVar14[3] = fVar22;
        pfVar14[7] = -fVar26;
        uVar7 = *(ushort *)(pfVar14 + 0x13) | 0x23;
        if (((uint)pfVar5[1] & 1) == 0) {
          uVar7 = *(ushort *)(pfVar14 + 0x13) | 0x21;
        }
        *(ushort *)(pfVar14 + 0x13) = uVar7;
        pfVar14[0x10] = pfVar5[-2];
        pfVar14[0x11] = pfVar5[-1];
        pfVar14[0xb] = -*pfVar5;
        pfVar14[0xf] = *pfVar5;
      }
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      pfVar5 = pfVar5 + 4;
      pfVar11 = pfVar11 + 3;
      pfVar6 = pfVar6 + 1;
      lVar9 = lVar9 + -1;
      pfVar14 = param_1;
    } while (lVar9 != 0);
    puVar13 = (undefined8 *)CONCAT44(param_5._4_4_,param_5._0_4_);
  }
  pfVar6 = param_1;
  local_210 = fVar36;
  if ((uVar2 & 0x38) != 0) {
    local_220 = *(float *)(puVar13 + 0x23);
    fStack_21c = *(float *)((longlong)puVar13 + 0x11c);
    fStack_218 = *(float *)(puVar13 + 0x24);
    fStack_214 = *(float *)((longlong)puVar13 + 0x124);
    if (fVar18 * *(float *)((longlong)puVar13 + 0x11c) + fVar16 * *(float *)(puVar13 + 0x23) +
        fVar37 * *(float *)(puVar13 + 0x24) + fVar40 * *(float *)((longlong)puVar13 + 0x124) <= 0.0)
    {
      local_220 = -local_220;
      fStack_21c = -fStack_21c;
      fStack_218 = -fStack_218;
      fStack_214 = -fStack_214;
    }
    fVar26 = -local_220;
    fVar31 = -fStack_21c;
    fVar42 = -fStack_218;
    fVar19 = (fStack_214 * fVar16 + fVar26 * fVar40 + fVar31 * fVar37) - fVar42 * fVar18;
    fVar22 = (fStack_214 * fVar18 + fVar31 * fVar40 + fVar42 * fVar16) - fVar26 * fVar37;
    fVar43 = (fVar42 * fVar40 + fStack_214 * fVar37 + fVar26 * fVar18) - fVar31 * fVar16;
    fVar26 = ((fStack_214 * fVar40 - fVar26 * fVar16) - fVar31 * fVar18) - fVar42 * fVar37;
    if ((uVar2 & 0x20) == 0) {
      pfVar11 = param_1;
      if ((uVar2 & 0x10) != 0) {
        fVar31 = *(float *)(puVar13 + 0x28);
        pfVar11 = param_1 + 0x14;
        *(undefined2 *)((longlong)param_1 + 0x4e) = 0;
        param_1[0] = 0.0;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        param_1[4] = fVar35;
        param_1[5] = fVar34;
        param_1[6] = fVar36;
        param_1[8] = 0.0;
        param_1[9] = 0.0;
        param_1[10] = 0.0;
        param_1[0xc] = fVar35;
        param_1[0xd] = fVar34;
        param_1[0xe] = fVar36;
        param_1[3] = fVar19 * -2.0;
        param_1[7] = fVar31;
        uVar7 = *(ushort *)(param_1 + 0x13) | 0x23;
        if ((*(uint *)((longlong)puVar13 + 0x104) & 1) == 0) {
          uVar7 = *(ushort *)(param_1 + 0x13) | 0x21;
        }
        *(ushort *)(param_1 + 0x13) = uVar7;
        param_1[0x10] = *(float *)(puVar13 + 0x1f);
        param_1[0x11] = *(float *)((longlong)puVar13 + 0xfc);
        param_1[0xb] = -*(float *)(puVar13 + 0x20);
        param_1[0xf] = *(float *)(puVar13 + 0x20);
        local_1c8 = pfVar11;
      }
      pfVar6 = pfVar11;
      if ((uVar2 & 8) != 0) {
        fVar31 = fVar19 * 2.0 + fVar22 * 0.0 + fVar43 * 0.0;
        fVar42 = (fVar26 * fVar26 - 0.5) * 0.0;
        if ((uVar12 & 0x10) == 0) {
          fVar1 = *(float *)((longlong)puVar13 + 0x144);
          pfVar6 = pfVar11 + 0x14;
          *(undefined2 *)((longlong)pfVar11 + 0x4e) = 0;
          pfVar11[0] = 0.0;
          pfVar11[1] = 0.0;
          pfVar11[2] = 0.0;
          pfVar11[4] = fVar21;
          pfVar11[5] = fVar25;
          pfVar11[6] = fVar28;
          pfVar11[8] = 0.0;
          pfVar11[9] = 0.0;
          pfVar11[10] = 0.0;
          pfVar11[0xc] = fVar21;
          pfVar11[0xd] = fVar25;
          pfVar11[0xe] = fVar28;
          pfVar11[7] = fVar1;
          pfVar11[3] = (fVar19 * 0.0 - fVar22 * 2.0) * fVar26 + fVar42 + fVar31 * fVar43;
          uVar7 = *(ushort *)(pfVar11 + 0x13) | 0x23;
          if ((*(uint *)((longlong)puVar13 + 0xf4) & 1) == 0) {
            uVar7 = *(ushort *)(pfVar11 + 0x13) | 0x21;
          }
          *(ushort *)(pfVar11 + 0x13) = uVar7;
          pfVar11[0x10] = *(float *)(puVar13 + 0x1d);
          pfVar11[0x11] = *(float *)((longlong)puVar13 + 0xec);
          pfVar11[0xb] = -*(float *)(puVar13 + 0x1e);
          pfVar11[0xf] = *(float *)(puVar13 + 0x1e);
          local_1c8 = pfVar6;
        }
        if ((uVar12 & 0x20) == 0) {
          fVar25 = *(float *)(puVar13 + 0x29);
          local_1c8 = pfVar6 + 0x14;
          *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0;
          pfVar6[0] = 0.0;
          pfVar6[1] = 0.0;
          pfVar6[2] = 0.0;
          pfVar6[4] = fVar17;
          pfVar6[5] = local_178;
          pfVar6[6] = local_174;
          pfVar6[8] = 0.0;
          pfVar6[9] = 0.0;
          pfVar6[10] = 0.0;
          pfVar6[0xc] = fVar17;
          pfVar6[0xd] = local_178;
          pfVar6[0xe] = local_174;
          pfVar6[7] = fVar25;
          pfVar6[3] = -((fVar43 * 2.0 - fVar19 * 0.0) * fVar26 + fVar42 + fVar31 * fVar22);
          uVar7 = *(ushort *)(pfVar6 + 0x13) | 0x23;
          if ((*(uint *)((longlong)puVar13 + 0xf4) & 1) == 0) {
            uVar7 = *(ushort *)(pfVar6 + 0x13) | 0x21;
          }
          *(ushort *)(pfVar6 + 0x13) = uVar7;
          pfVar6[0x10] = *(float *)(puVar13 + 0x1d);
          pfVar6[0x11] = *(float *)((longlong)puVar13 + 0xec);
          pfVar6[0xb] = -*(float *)(puVar13 + 0x1e);
          fVar26 = *(float *)(puVar13 + 0x1e);
          goto LAB_143290295;
        }
      }
    }
    else {
      fVar25 = *(float *)(puVar13 + 0x29) + *(float *)(puVar13 + 0x29);
      fVar28 = *(float *)(puVar13 + 0x28) + *(float *)(puVar13 + 0x28);
      fVar31 = *(float *)((longlong)puVar13 + 0x144) + *(float *)((longlong)puVar13 + 0x144);
      local_180 = 1.0;
      fVar26 = fVar28 * fVar20 + fVar31 * fVar24 + fVar27 * fVar25;
      local_210 = -((fVar25 * fVar24 - fVar27 * fVar31) * fVar30 + fVar23 * fVar28 + fVar26 * fVar20
                   );
      param_5._0_4_ =
           -((fVar27 * fVar28 - fVar25 * fVar20) * fVar30 + fVar23 * fVar31 + fVar26 * fVar24);
      local_1a0 = 0x3f800000;
      uStack_198 = 0;
      local_190 = 0x3f800000;
      uStack_188 = 0;
      fVar26 = -((fVar31 * fVar20 - fVar28 * fVar24) * fVar30 + fVar23 * fVar25 + fVar27 * fVar26);
      if (*(float *)(puVar13 + 0x21) != 0.0) {
        local_208[0] = (fVar30 * local_220 + fStack_214 * fVar20 + fStack_218 * fVar24) -
                       fVar27 * fStack_21c;
        local_208[1] = (fVar30 * fStack_21c + fStack_214 * fVar24 + fVar27 * local_220) -
                       fStack_218 * fVar20;
        local_208[2] = (fVar27 * fStack_214 + fVar30 * fStack_218 + fStack_21c * fVar20) -
                       local_220 * fVar24;
        local_208[3] = ((fVar30 * fStack_214 - local_220 * fVar20) - fStack_21c * fVar24) -
                       fVar27 * fStack_218;
        physx::Ext::joint::computeJacobianAxes(&local_1a0,local_208,&local_140);
      }
      pfVar6 = param_1 + 0x28;
      *(undefined2 *)((longlong)param_1 + 0x4e) = 0x102;
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[5] = local_1a0._4_4_;
      param_1[4] = (float)local_1a0;
      param_1[6] = (float)uStack_198;
      param_1[8] = 0.0;
      param_1[9] = 0.0;
      param_1[10] = 0.0;
      param_1[0xd] = local_1a0._4_4_;
      param_1[0xc] = (float)local_1a0;
      param_1[0xe] = (float)uStack_198;
      param_1[3] = -fVar19;
      param_1[7] = local_1a0._4_4_ * param_5._0_4_ + (float)local_1a0 * local_210 +
                   (float)uStack_198 * fVar26;
      uVar7 = *(ushort *)(param_1 + 0x13) | 0x23;
      if ((*(uint *)((longlong)puVar13 + 0x114) & 1) == 0) {
        uVar7 = *(ushort *)(param_1 + 0x13) | 0x21;
      }
      *(ushort *)(param_1 + 0x13) = uVar7;
      param_1[0x10] = *(float *)(puVar13 + 0x21);
      param_1[0x11] = *(float *)((longlong)puVar13 + 0x10c);
      param_1[0xb] = -*(float *)(puVar13 + 0x22);
      param_1[0xf] = *(float *)(puVar13 + 0x22);
      *(undefined2 *)((longlong)param_1 + 0x9e) = 0x102;
      param_1[0x14] = 0.0;
      param_1[0x15] = 0.0;
      param_1[0x16] = 0.0;
      param_1[0x18] = uStack_198._4_4_;
      param_1[0x19] = (float)local_190;
      param_1[0x1a] = local_190._4_4_;
      param_1[0x1c] = 0.0;
      param_1[0x1d] = 0.0;
      param_1[0x1e] = 0.0;
      param_1[0x20] = uStack_198._4_4_;
      param_1[0x21] = (float)local_190;
      param_1[0x22] = local_190._4_4_;
      param_1[0x17] = -fVar22;
      param_1[0x1b] =
           (float)local_190 * param_5._0_4_ + uStack_198._4_4_ * local_210 +
           local_190._4_4_ * fVar26;
      uVar7 = *(ushort *)(param_1 + 0x27) | 0x23;
      if ((*(uint *)((longlong)puVar13 + 0x114) & 1) == 0) {
        uVar7 = *(ushort *)(param_1 + 0x27) | 0x21;
      }
      *(ushort *)(param_1 + 0x27) = uVar7;
      param_1[0x24] = *(float *)(puVar13 + 0x21);
      param_1[0x25] = *(float *)((longlong)puVar13 + 0x10c);
      param_1[0x1f] = -*(float *)(puVar13 + 0x22);
      param_1[0x23] = *(float *)(puVar13 + 0x22);
      local_1c8 = param_1 + 0x3c;
      *(undefined2 *)((longlong)param_1 + 0xee) = 0x102;
      pfVar6[0] = 0.0;
      pfVar6[1] = 0.0;
      param_1[0x2a] = 0.0;
      param_1[0x2c] = (float)uStack_188;
      param_1[0x2d] = uStack_188._4_4_;
      param_1[0x2e] = local_180;
      param_1[0x30] = 0.0;
      param_1[0x31] = 0.0;
      param_1[0x32] = 0.0;
      param_1[0x34] = (float)uStack_188;
      param_1[0x35] = uStack_188._4_4_;
      param_1[0x36] = local_180;
      param_1[0x2b] = -fVar43;
      param_1[0x2f] =
           uStack_188._4_4_ * param_5._0_4_ + (float)uStack_188 * local_210 + local_180 * fVar26;
      uVar7 = *(ushort *)(param_1 + 0x3b) | 0x23;
      if ((*(uint *)((longlong)puVar13 + 0x114) & 1) == 0) {
        uVar7 = *(ushort *)(param_1 + 0x3b) | 0x21;
      }
      *(ushort *)(param_1 + 0x3b) = uVar7;
      param_1[0x38] = *(float *)(puVar13 + 0x21);
      param_1[0x39] = *(float *)((longlong)puVar13 + 0x10c);
      param_1[0x33] = -*(float *)(puVar13 + 0x22);
      fVar26 = *(float *)(puVar13 + 0x22);
LAB_143290295:
      pfVar6[0xf] = fVar26;
      pfVar6 = local_1c8;
    }
  }
  uVar2 = local_170;
  if ((local_170 & 0x38) != 0) {
    if (fVar16 == 0.0) {
      local_150 = 0;
      uStack_148 = 0x3f80000000000000;
    }
    else {
      fVar26 = 1.0 / SQRT(fVar16 * fVar16 + fVar40 * fVar40);
      local_150 = CONCAT44(fVar26 * 0.0,fVar26 * fVar16);
      uStack_148 = CONCAT44(fVar26 * fVar40,fVar26 * 0.0);
    }
    fVar26 = -(float)local_150;
    fVar28 = -(float)uStack_148;
    fVar25 = -local_150._4_4_;
    local_160 = (uStack_148._4_4_ * fVar16 + fVar26 * fVar40 + fVar28 * fVar18) - fVar25 * fVar37;
    local_15c = (uStack_148._4_4_ * fVar18 + fVar25 * fVar40 + fVar26 * fVar37) - fVar28 * fVar16;
    local_158 = (uStack_148._4_4_ * fVar37 + fVar28 * fVar40 + fVar25 * fVar16) - fVar26 * fVar18;
    local_154 = ((uStack_148._4_4_ * fVar40 - fVar26 * fVar16) - fVar25 * fVar18) - fVar28 * fVar37;
    if (((byte)local_170 & 0x30) == 0x30) {
      local_208[0] = *(float *)(puVar13 + 0x2d);
      local_208[1] = *(float *)((longlong)puVar13 + 0x164);
      local_208[2] = *(float *)((longlong)puVar13 + 0x16c);
      cVar4 = physx::Cm::ConeLimitHelper::getLimit(local_208,&local_160,&local_220,&param_5);
      if (cVar4 != '\0') {
        local_1c8 = pfVar6 + 0x14;
        fVar25 = fStack_21c * 2.0;
        *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0;
        fVar40 = local_220 * 2.0;
        pfVar6[0] = 0.0;
        pfVar6[1] = 0.0;
        fVar18 = fStack_218 * 2.0;
        pfVar6[2] = 0.0;
        fVar26 = fVar40 * fVar20 + fVar25 * fVar24 + fVar27 * fVar18;
        fVar37 = (fVar18 * fVar24 - fVar27 * fVar25) * fVar30 + fVar23 * fVar40 + fVar26 * fVar20;
        pfVar6[4] = fVar37;
        fVar16 = (fVar27 * fVar40 - fVar18 * fVar20) * fVar30 + fVar23 * fVar25 + fVar26 * fVar24;
        pfVar6[5] = fVar16;
        fVar18 = (fVar25 * fVar20 - fVar40 * fVar24) * fVar30 + fVar23 * fVar18 + fVar27 * fVar26;
        pfVar6[6] = fVar18;
        pfVar6[8] = 0.0;
        pfVar6[9] = 0.0;
        pfVar6[10] = 0.0;
        pfVar6[0xc] = fVar37;
        pfVar6[0xd] = fVar16;
        pfVar6[0xe] = fVar18;
        uVar7 = *(ushort *)(pfVar6 + 0x13) | 0x10;
        pfVar6[3] = param_5._0_4_;
        if (0.0 < *(float *)(puVar13 + 0x15)) {
LAB_1432905f7:
          uVar7 = uVar7 | 1;
          pfVar6[0x10] = *(float *)((longlong)puVar13 + 0xa4);
          pfVar6[0x11] = *(float *)(puVar13 + 0x15);
        }
        else {
          fVar18 = *(float *)((longlong)puVar13 + 0xa4);
          fVar16 = param_5._0_4_;
joined_r0x000143290fa3:
          if (0.0 < fVar18) goto LAB_1432905f7;
          *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0x401;
          pfVar6[0x10] = *(float *)((longlong)puVar13 + 0x9c);
          pfVar6[0x11] = *(float *)(puVar13 + 0x14);
          if (0.0 < fVar16) {
            uVar7 = uVar7 | 8;
          }
          if (0.0 < *(float *)((longlong)puVar13 + 0x9c)) {
            *(ushort *)(pfVar6 + 0x13) = uVar7 | 4;
            pfVar6[0xb] = 0.0;
            pfVar6 = local_1c8;
            goto LAB_143290fcf;
          }
        }
        *(ushort *)(pfVar6 + 0x13) = uVar7;
        pfVar6[0xb] = 0.0;
        pfVar6 = local_1c8;
      }
    }
    else {
      param_5._0_4_ = *(float *)((longlong)puVar13 + 0x16c);
      fVar16 = *(float *)(puVar13 + 0x2c);
      if ((local_170 & 0x10) != 0) {
        if ((uVar12 & 0x20) == 0) {
          fVar20 = fVar36 * (float)param_7 - fVar34 * fVar15;
          fVar40 = -(fVar34 * (float)param_7 + fVar35 * fVar33 + fVar36 * fVar15);
          fVar24 = fVar35 * fVar15 - fVar36 * fVar33;
          fVar18 = *(float *)(puVar13 + 0x2b);
          fVar26 = fVar34 * fVar33 - fVar35 * (float)param_7;
          fVar40 = fVar40 / ((1.0 - fVar40 * fVar40) + 1.0);
          if ((0.0 < *(float *)(puVar13 + 0x15)) ||
             (local_res8 = fVar16, 0.0 < *(float *)((longlong)puVar13 + 0xa4))) {
            local_res8 = 0.0;
          }
          pfVar11 = pfVar6;
          if (fVar40 < -fVar18 + local_res8) {
            pfVar11 = pfVar6 + 0x14;
            fVar27 = (-fVar18 - fVar40) * -2.0;
            *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0;
            pfVar6[0] = 0.0;
            pfVar6[1] = 0.0;
            pfVar6[2] = 0.0;
            pfVar6[4] = -fVar20;
            pfVar6[5] = -fVar24;
            pfVar6[6] = -fVar26;
            pfVar6[8] = 0.0;
            pfVar6[9] = 0.0;
            pfVar6[10] = 0.0;
            pfVar6[0xc] = -fVar20;
            pfVar6[0xd] = -fVar24;
            pfVar6[0xe] = -fVar26;
            uVar7 = *(ushort *)(pfVar6 + 0x13);
            uVar8 = uVar7 | 0x10;
            pfVar6[3] = fVar27;
            if ((0.0 < *(float *)(puVar13 + 0x15)) || (0.0 < *(float *)((longlong)puVar13 + 0xa4)))
            {
              uVar8 = uVar7 | 0x11;
              pfVar6[0x10] = *(float *)((longlong)puVar13 + 0xa4);
              pfVar6[0x11] = *(float *)(puVar13 + 0x15);
            }
            else {
              *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0x401;
              pfVar6[0x10] = *(float *)((longlong)puVar13 + 0x9c);
              pfVar6[0x11] = *(float *)(puVar13 + 0x14);
              if (0.0 < fVar27) {
                uVar8 = uVar7 | 0x18;
              }
              if (0.0 < *(float *)((longlong)puVar13 + 0x9c)) {
                uVar8 = uVar8 | 4;
              }
            }
            *(ushort *)(pfVar6 + 0x13) = uVar8;
            pfVar6[0xb] = 0.0;
            local_1c8 = pfVar11;
          }
          pfVar6 = pfVar11;
          if (fVar18 - local_res8 < fVar40) {
            *(undefined2 *)((longlong)pfVar11 + 0x4e) = 0;
            pfVar11[0] = 0.0;
            pfVar11[1] = 0.0;
            fVar18 = (fVar18 - fVar40) + (fVar18 - fVar40);
            pfVar11[2] = 0.0;
            pfVar11[4] = fVar20;
            pfVar11[5] = fVar24;
            pfVar11[6] = fVar26;
            pfVar11[8] = 0.0;
            pfVar11[9] = 0.0;
            pfVar11[10] = 0.0;
            pfVar11[0xc] = fVar20;
            pfVar11[0xd] = fVar24;
            pfVar11[0xe] = fVar26;
            uVar7 = *(ushort *)(pfVar11 + 0x13);
            uVar8 = uVar7 | 0x10;
            pfVar11[3] = fVar18;
            if ((0.0 < *(float *)(puVar13 + 0x15)) || (0.0 < *(float *)((longlong)puVar13 + 0xa4)))
            {
              uVar8 = uVar7 | 0x11;
              pfVar11[0x10] = *(float *)((longlong)puVar13 + 0xa4);
              pfVar11[0x11] = *(float *)(puVar13 + 0x15);
            }
            else {
              *(undefined2 *)((longlong)pfVar11 + 0x4e) = 0x401;
              pfVar11[0x10] = *(float *)((longlong)puVar13 + 0x9c);
              pfVar11[0x11] = *(float *)(puVar13 + 0x14);
              if (0.0 < fVar18) {
                uVar8 = uVar7 | 0x18;
              }
              if (0.0 < *(float *)((longlong)puVar13 + 0x9c)) {
                uVar8 = uVar8 | 4;
              }
            }
            *(ushort *)(pfVar11 + 0x13) = uVar8;
            pfVar11[0xb] = 0.0;
            pfVar6 = pfVar11 + 0x14;
            local_1c8 = pfVar11 + 0x14;
          }
        }
        else {
          fVar18 = *(float *)((longlong)puVar13 + 0x164);
          fVar26 = local_15c / (local_154 + 1.0);
          if ((0.0 < *(float *)(puVar13 + 0x15)) ||
             (fVar40 = param_5._0_4_, 0.0 < *(float *)((longlong)puVar13 + 0xa4))) {
            fVar40 = 0.0;
          }
          pfVar11 = pfVar6;
          if (fVar26 < fVar40 + -fVar18) {
            pfVar11 = pfVar6 + 0x14;
            fVar20 = (-fVar18 - fVar26) * -4.0;
            *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0;
            pfVar6[0] = 0.0;
            pfVar6[1] = 0.0;
            pfVar6[2] = 0.0;
            pfVar6[4] = -fVar29;
            pfVar6[5] = -fVar32;
            pfVar6[6] = -fVar38;
            pfVar6[8] = 0.0;
            pfVar6[9] = 0.0;
            pfVar6[10] = 0.0;
            pfVar6[0xc] = -fVar29;
            pfVar6[0xd] = -fVar32;
            pfVar6[0xe] = -fVar38;
            uVar7 = *(ushort *)(pfVar6 + 0x13);
            uVar8 = uVar7 | 0x10;
            pfVar6[3] = fVar20;
            if ((0.0 < *(float *)(puVar13 + 0x15)) || (0.0 < *(float *)((longlong)puVar13 + 0xa4)))
            {
              uVar8 = uVar7 | 0x11;
              pfVar6[0x10] = *(float *)((longlong)puVar13 + 0xa4);
              pfVar6[0x11] = *(float *)(puVar13 + 0x15);
            }
            else {
              *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0x401;
              pfVar6[0x10] = *(float *)((longlong)puVar13 + 0x9c);
              pfVar6[0x11] = *(float *)(puVar13 + 0x14);
              if (0.0 < fVar20) {
                uVar8 = uVar7 | 0x18;
              }
              if (0.0 < *(float *)((longlong)puVar13 + 0x9c)) {
                uVar8 = uVar8 | 4;
              }
            }
            *(ushort *)(pfVar6 + 0x13) = uVar8;
            pfVar6[0xb] = 0.0;
            local_1c8 = pfVar11;
          }
          pfVar6 = pfVar11;
          if (fVar18 - fVar40 < fVar26) {
            pfVar6 = pfVar11 + 0x14;
            fVar18 = (fVar18 - fVar26) * 4.0;
            *(undefined2 *)((longlong)pfVar11 + 0x4e) = 0;
            pfVar11[0] = 0.0;
            pfVar11[1] = 0.0;
            pfVar11[2] = 0.0;
            pfVar11[4] = fVar29;
            pfVar11[5] = fVar32;
            pfVar11[6] = fVar38;
            pfVar11[8] = 0.0;
            pfVar11[9] = 0.0;
            pfVar11[10] = 0.0;
            pfVar11[0xc] = fVar29;
            pfVar11[0xd] = fVar32;
            pfVar11[0xe] = fVar38;
            uVar7 = *(ushort *)(pfVar11 + 0x13);
            uVar8 = uVar7 | 0x10;
            pfVar11[3] = fVar18;
            local_1c8 = pfVar6;
            if ((0.0 < *(float *)(puVar13 + 0x15)) || (0.0 < *(float *)((longlong)puVar13 + 0xa4)))
            {
              uVar8 = uVar7 | 0x11;
              pfVar11[0x10] = *(float *)((longlong)puVar13 + 0xa4);
              pfVar11[0x11] = *(float *)(puVar13 + 0x15);
            }
            else {
              *(undefined2 *)((longlong)pfVar11 + 0x4e) = 0x401;
              pfVar11[0x10] = *(float *)((longlong)puVar13 + 0x9c);
              pfVar11[0x11] = *(float *)(puVar13 + 0x14);
              if (0.0 < fVar18) {
                uVar8 = uVar7 | 0x18;
              }
              if (0.0 < *(float *)((longlong)puVar13 + 0x9c)) {
                *(ushort *)(pfVar11 + 0x13) = uVar8 | 4;
                pfVar11[0xb] = 0.0;
                goto LAB_143290b49;
              }
            }
            *(ushort *)(pfVar11 + 0x13) = uVar8;
            pfVar11[0xb] = 0.0;
          }
        }
      }
LAB_143290b49:
      if ((local_170 & 0x20) != 0) {
        if ((uVar12 & 0x10) == 0) {
          fVar18 = *(float *)((longlong)puVar13 + 0x15c);
          fVar26 = fVar34 * fVar32 + fVar35 * fVar29 + fVar36 * fVar38;
          fVar40 = fVar36 * fVar32 - fVar34 * fVar38;
          fVar20 = fVar35 * fVar38 - fVar36 * fVar29;
          fVar24 = fVar34 * fVar29 - fVar35 * fVar32;
          fVar26 = fVar26 / ((1.0 - fVar26 * fVar26) + 1.0);
          if ((0.0 < *(float *)(puVar13 + 0x15)) || (0.0 < *(float *)((longlong)puVar13 + 0xa4))) {
            fVar16 = 0.0;
          }
          if (fVar26 < -fVar18 + fVar16) {
            local_1c8 = pfVar6 + 0x14;
            *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0;
            fVar27 = (-fVar18 - fVar26) * -2.0;
            pfVar6[0] = 0.0;
            pfVar6[1] = 0.0;
            pfVar6[2] = 0.0;
            pfVar6[4] = fVar40;
            pfVar6[5] = fVar20;
            pfVar6[6] = fVar24;
            pfVar6[8] = 0.0;
            pfVar6[9] = 0.0;
            pfVar6[10] = 0.0;
            pfVar6[0xc] = fVar40;
            pfVar6[0xd] = fVar20;
            pfVar6[0xe] = fVar24;
            uVar7 = *(ushort *)(pfVar6 + 0x13);
            uVar8 = uVar7 | 0x10;
            pfVar6[3] = fVar27;
            if ((0.0 < *(float *)(puVar13 + 0x15)) || (0.0 < *(float *)((longlong)puVar13 + 0xa4)))
            {
              uVar8 = uVar7 | 0x11;
              pfVar6[0x10] = *(float *)((longlong)puVar13 + 0xa4);
              pfVar6[0x11] = *(float *)(puVar13 + 0x15);
            }
            else {
              *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0x401;
              pfVar6[0x10] = *(float *)((longlong)puVar13 + 0x9c);
              pfVar6[0x11] = *(float *)(puVar13 + 0x14);
              if (0.0 < fVar27) {
                uVar8 = uVar7 | 0x18;
              }
              if (0.0 < *(float *)((longlong)puVar13 + 0x9c)) {
                uVar8 = uVar8 | 4;
              }
            }
            *(ushort *)(pfVar6 + 0x13) = uVar8;
            pfVar6[0xb] = 0.0;
            pfVar6 = local_1c8;
          }
          if (fVar18 - fVar16 < fVar26) {
            local_1c8 = pfVar6 + 0x14;
            *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0;
            pfVar6[0] = 0.0;
            pfVar6[1] = 0.0;
            fVar16 = (fVar18 - fVar26) + (fVar18 - fVar26);
            pfVar6[2] = 0.0;
            pfVar6[4] = -fVar40;
            pfVar6[5] = -fVar20;
            pfVar6[6] = -fVar24;
            pfVar6[8] = 0.0;
            pfVar6[9] = 0.0;
            pfVar6[10] = 0.0;
            pfVar6[0xc] = -fVar40;
            pfVar6[0xd] = -fVar20;
            pfVar6[0xe] = -fVar24;
            uVar7 = *(ushort *)(pfVar6 + 0x13) | 0x10;
            pfVar6[3] = fVar16;
            if (*(float *)(puVar13 + 0x15) <= 0.0) {
              fVar18 = *(float *)((longlong)puVar13 + 0xa4);
              goto joined_r0x000143290fa3;
            }
            goto LAB_1432905f7;
          }
        }
        else {
          fVar16 = *(float *)(puVar13 + 0x2d);
          fVar18 = local_158 / (local_154 + 1.0);
          if ((0.0 < *(float *)(puVar13 + 0x15)) ||
             (fVar26 = param_5._0_4_, 0.0 < *(float *)((longlong)puVar13 + 0xa4))) {
            fVar26 = 0.0;
          }
          pfVar11 = pfVar6;
          if (fVar18 < fVar26 + -fVar16) {
            pfVar11 = pfVar6 + 0x14;
            *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0;
            fVar40 = (-fVar16 - fVar18) * -4.0;
            pfVar6[0] = 0.0;
            pfVar6[1] = 0.0;
            pfVar6[2] = 0.0;
            pfVar6[4] = -fVar33;
            pfVar6[5] = -(float)param_7;
            pfVar6[6] = -fVar15;
            pfVar6[8] = 0.0;
            pfVar6[9] = 0.0;
            pfVar6[10] = 0.0;
            pfVar6[0xc] = -fVar33;
            pfVar6[0xd] = -(float)param_7;
            pfVar6[0xe] = -fVar15;
            uVar7 = *(ushort *)(pfVar6 + 0x13);
            uVar8 = uVar7 | 0x10;
            pfVar6[3] = fVar40;
            if ((0.0 < *(float *)(puVar13 + 0x15)) || (0.0 < *(float *)((longlong)puVar13 + 0xa4)))
            {
              uVar8 = uVar7 | 0x11;
              pfVar6[0x10] = *(float *)((longlong)puVar13 + 0xa4);
              pfVar6[0x11] = *(float *)(puVar13 + 0x15);
            }
            else {
              *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0x401;
              pfVar6[0x10] = *(float *)((longlong)puVar13 + 0x9c);
              pfVar6[0x11] = *(float *)(puVar13 + 0x14);
              if (0.0 < fVar40) {
                uVar8 = uVar7 | 0x18;
              }
              if (0.0 < *(float *)((longlong)puVar13 + 0x9c)) {
                uVar8 = uVar8 | 4;
              }
            }
            *(ushort *)(pfVar6 + 0x13) = uVar8;
            pfVar6[0xb] = 0.0;
            local_1c8 = pfVar11;
          }
          pfVar6 = pfVar11;
          if (fVar16 - fVar26 < fVar18) {
            local_1c8 = pfVar11 + 0x14;
            *(undefined2 *)((longlong)pfVar11 + 0x4e) = 0;
            pfVar11[0] = 0.0;
            pfVar11[1] = 0.0;
            pfVar11[2] = 0.0;
            pfVar11[4] = fVar33;
            pfVar11[5] = (float)param_7;
            pfVar11[6] = fVar15;
            pfVar11[8] = 0.0;
            pfVar11[9] = 0.0;
            pfVar11[10] = 0.0;
            pfVar11[0xc] = fVar33;
            pfVar11[0xd] = (float)param_7;
            pfVar11[0xe] = fVar15;
            uVar7 = *(ushort *)(pfVar11 + 0x13);
            fVar16 = (fVar16 - fVar18) * 4.0;
            uVar8 = uVar7 | 0x10;
            pfVar11[3] = fVar16;
            pfVar6 = local_1c8;
            if ((0.0 < *(float *)(puVar13 + 0x15)) || (0.0 < *(float *)((longlong)puVar13 + 0xa4)))
            {
              uVar8 = uVar7 | 0x11;
              pfVar11[0x10] = *(float *)((longlong)puVar13 + 0xa4);
              pfVar11[0x11] = *(float *)(puVar13 + 0x15);
            }
            else {
              *(undefined2 *)((longlong)pfVar11 + 0x4e) = 0x401;
              pfVar11[0x10] = *(float *)((longlong)puVar13 + 0x9c);
              pfVar11[0x11] = *(float *)(puVar13 + 0x14);
              if (0.0 < fVar16) {
                uVar8 = uVar7 | 0x18;
              }
              if (0.0 < *(float *)((longlong)puVar13 + 0x9c)) {
                pfVar11[0xb] = 0.0;
                *(ushort *)(pfVar11 + 0x13) = uVar8 | 4;
                goto LAB_143290fcf;
              }
            }
            *(ushort *)(pfVar11 + 0x13) = uVar8;
            pfVar11[0xb] = 0.0;
          }
        }
      }
    }
LAB_143290fcf:
    if ((uVar2 & 8) != 0) {
      fVar16 = *(float *)(puVar13 + 0x2f);
      fVar18 = *(float *)((longlong)puVar13 + 0x174);
      fVar26 = *(float *)(puVar13 + 0x2e);
      fVar40 = (float)local_150 / (uStack_148._4_4_ + 1.0);
      if ((0.0 < *(float *)((longlong)puVar13 + 0x8c)) || (0.0 < *(float *)(puVar13 + 0x11))) {
        fVar16 = 0.0;
      }
      pfVar11 = pfVar6;
      if (fVar40 < fVar16 + fVar26) {
        pfVar11 = pfVar6 + 0x14;
        *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0;
        fVar26 = (fVar26 - fVar40) * -4.0;
        pfVar6[0] = 0.0;
        pfVar6[1] = 0.0;
        pfVar6[2] = 0.0;
        pfVar6[4] = -fVar35;
        pfVar6[5] = -fVar34;
        pfVar6[6] = -fVar36;
        pfVar6[8] = 0.0;
        pfVar6[9] = 0.0;
        pfVar6[10] = 0.0;
        pfVar6[0xc] = -fVar35;
        pfVar6[0xd] = -fVar34;
        pfVar6[0xe] = -fVar36;
        uVar7 = *(ushort *)(pfVar6 + 0x13);
        uVar8 = uVar7 | 0x10;
        pfVar6[3] = fVar26;
        if ((0.0 < *(float *)((longlong)puVar13 + 0x8c)) || (0.0 < *(float *)(puVar13 + 0x11))) {
          uVar8 = uVar7 | 0x11;
          pfVar6[0x10] = *(float *)(puVar13 + 0x11);
          pfVar6[0x11] = *(float *)((longlong)puVar13 + 0x8c);
        }
        else {
          *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0x401;
          pfVar6[0x10] = *(float *)(puVar13 + 0x10);
          pfVar6[0x11] = *(float *)((longlong)puVar13 + 0x84);
          if (0.0 < fVar26) {
            uVar8 = uVar7 | 0x18;
          }
          if (0.0 < *(float *)(puVar13 + 0x10)) {
            uVar8 = uVar8 | 4;
          }
        }
        *(ushort *)(pfVar6 + 0x13) = uVar8;
        pfVar6[0xb] = 0.0;
        local_1c8 = pfVar11;
      }
      pfVar6 = pfVar11;
      if (fVar18 - fVar16 < fVar40) {
        pfVar6 = pfVar11 + 0x14;
        *(undefined2 *)((longlong)pfVar11 + 0x4e) = 0;
        pfVar11[0] = 0.0;
        pfVar11[1] = 0.0;
        pfVar11[2] = 0.0;
        pfVar11[4] = fVar35;
        pfVar11[5] = fVar34;
        pfVar11[6] = fVar36;
        pfVar11[8] = 0.0;
        pfVar11[9] = 0.0;
        pfVar11[10] = 0.0;
        pfVar11[0xc] = fVar35;
        pfVar11[0xd] = fVar34;
        pfVar11[0xe] = fVar36;
        uVar7 = *(ushort *)(pfVar11 + 0x13);
        fVar16 = (fVar18 - fVar40) * 4.0;
        uVar8 = uVar7 | 0x10;
        pfVar11[3] = fVar16;
        local_1c8 = pfVar6;
        if ((0.0 < *(float *)((longlong)puVar13 + 0x8c)) || (0.0 < *(float *)(puVar13 + 0x11))) {
          uVar8 = uVar7 | 0x11;
          pfVar11[0x10] = *(float *)(puVar13 + 0x11);
          pfVar11[0x11] = *(float *)((longlong)puVar13 + 0x8c);
        }
        else {
          *(undefined2 *)((longlong)pfVar11 + 0x4e) = 0x401;
          pfVar11[0x10] = *(float *)(puVar13 + 0x10);
          pfVar11[0x11] = *(float *)((longlong)puVar13 + 0x84);
          if (0.0 < fVar16) {
            uVar8 = uVar7 | 0x18;
          }
          if (0.0 < *(float *)(puVar13 + 0x10)) {
            pfVar11[0xb] = 0.0;
            *(ushort *)(pfVar11 + 0x13) = uVar8 | 4;
            goto LAB_1432911fe;
          }
        }
        *(ushort *)(pfVar11 + 0x13) = uVar8;
        pfVar11[0xb] = 0.0;
      }
    }
  }
LAB_1432911fe:
  pfVar11 = pfVar6;
  if ((uVar2 & 7) != 0) {
    fVar16 = 0.0;
    fVar18 = 0.0;
    fVar26 = 0.0;
    if ((uVar2 & 1) != 0) {
      fVar16 = local_1e0 * fVar39;
      fVar18 = local_1dc * fVar39;
      fVar26 = local_1d8 * fVar39;
    }
    if ((uVar2 & 2) != 0) {
      fVar16 = fVar16 + fVar29 * fVar41;
      fVar18 = fVar18 + fVar32 * fVar41;
      fVar26 = fVar26 + fVar38 * fVar41;
    }
    if ((uVar2 & 4) != 0) {
      fVar16 = fVar16 + fVar33 * param_6._0_4_;
      fVar18 = fVar18 + (float)param_7 * param_6._0_4_;
      fVar26 = fVar26 + fVar15 * param_6._0_4_;
    }
    fVar40 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar26 * fVar26);
    if (*(float *)((longlong)puVar13 + 0x17c) <= fVar40 &&
        fVar40 != *(float *)((longlong)puVar13 + 0x17c)) {
      fVar20 = 1.0 / fVar40;
      fVar16 = fVar20 * fVar16;
      fVar18 = fVar20 * fVar18;
      fVar20 = fVar20 * fVar26;
      if ((0.0 < *(float *)((longlong)puVar13 + 0x74)) || (0.0 < *(float *)(puVar13 + 0xe))) {
        fVar26 = 0.0;
      }
      else {
        fVar26 = *(float *)(puVar13 + 0xf);
      }
      if (*(float *)((longlong)puVar13 + 0x7c) < fVar26 + fVar40) {
        fVar40 = *(float *)((longlong)puVar13 + 0x7c) - fVar40;
        pfVar11 = pfVar6 + 0x14;
        *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0;
        *pfVar6 = fVar16;
        pfVar6[1] = fVar18;
        pfVar6[2] = fVar20;
        pfVar6[4] = local_1f8 * fVar20 - local_1f4 * fVar18;
        pfVar6[5] = local_1f4 * fVar16 - local_1f0 * fVar20;
        pfVar6[6] = local_1f0 * fVar18 - local_1f8 * fVar16;
        pfVar6[8] = fVar16;
        pfVar6[9] = fVar18;
        pfVar6[10] = fVar20;
        pfVar6[0xc] = local_1ec * fVar20 - local_1e8 * fVar18;
        pfVar6[0xe] = local_1e4 * fVar18 - local_1ec * fVar16;
        pfVar6[0xd] = local_1e8 * fVar16 - local_1e4 * fVar20;
        uVar7 = *(ushort *)(pfVar6 + 0x13);
        uVar8 = uVar7 | 0x10;
        pfVar6[3] = fVar40;
        if ((0.0 < *(float *)((longlong)puVar13 + 0x74)) || (0.0 < *(float *)(puVar13 + 0xe))) {
          uVar8 = uVar7 | 0x11;
          pfVar6[0x10] = *(float *)(puVar13 + 0xe);
          pfVar6[0x11] = *(float *)((longlong)puVar13 + 0x74);
        }
        else {
          *(undefined2 *)((longlong)pfVar6 + 0x4e) = 0x401;
          pfVar6[0x10] = *(float *)(puVar13 + 0xd);
          pfVar6[0x11] = *(float *)((longlong)puVar13 + 0x6c);
          if (0.0 < fVar40) {
            uVar8 = uVar7 | 0x18;
          }
          if (0.0 < *(float *)(puVar13 + 0xd)) {
            uVar8 = uVar8 | 4;
          }
        }
        *(ushort *)(pfVar6 + 0x13) = uVar8;
        pfVar6[0xb] = 0.0;
        local_1c8 = pfVar11;
      }
    }
  }
  if ((uVar12 & 0x38) == 0x10) {
    *(undefined2 *)((longlong)pfVar11 + 0x4e) = 0x400;
    pfVar11[0] = 0.0;
    pfVar11[1] = 0.0;
    pfVar11[2] = 0.0;
    fVar26 = fVar34 * fVar15 - fVar36 * (float)param_7;
    pfVar11[4] = fVar26;
    fVar18 = fVar36 * fVar33 - fVar35 * fVar15;
    pfVar11[5] = fVar18;
    fVar16 = fVar35 * (float)param_7 - fVar34 * fVar33;
    pfVar11[6] = fVar16;
    pfVar11[8] = 0.0;
    pfVar11[9] = 0.0;
    pfVar11[10] = 0.0;
    pfVar11[0xc] = fVar26;
    pfVar11[0xd] = fVar18;
    pfVar11[0xe] = fVar16;
    *(ushort *)(pfVar11 + 0x13) = *(ushort *)(pfVar11 + 0x13) | 0x10;
    uVar12 = uVar12 & 0xffffffef;
    fVar29 = fVar33;
    fVar32 = (float)param_7;
    fVar38 = fVar15;
  }
  else {
    if ((uVar12 & 0x38) != 0x20) goto LAB_1432915d7;
    uVar12 = uVar12 & 0xffffffdf;
    *(undefined2 *)((longlong)pfVar11 + 0x4e) = 0x400;
    pfVar11[0] = 0.0;
    pfVar11[1] = 0.0;
    pfVar11[2] = 0.0;
    fVar26 = fVar34 * fVar38 - fVar36 * fVar32;
    pfVar11[4] = fVar26;
    fVar18 = fVar36 * fVar29 - fVar35 * fVar38;
    pfVar11[5] = fVar18;
    fVar16 = fVar35 * fVar32 - fVar34 * fVar29;
    pfVar11[6] = fVar16;
    pfVar11[8] = 0.0;
    pfVar11[9] = 0.0;
    pfVar11[10] = 0.0;
    pfVar11[0xc] = fVar26;
    pfVar11[0xd] = fVar18;
    pfVar11[0xe] = fVar16;
    *(ushort *)(pfVar11 + 0x13) = *(ushort *)(pfVar11 + 0x13) | 0x10;
  }
  local_1c8 = pfVar11 + 0x14;
  pfVar11[3] = -(fVar34 * fVar32 + fVar35 * fVar29 + fVar36 * fVar38);
LAB_1432915d7:
  physx::Ext::joint::ConstraintHelper::prepareLockedAxes
            (&local_1d0,&local_100,&local_140,&local_110,uVar12 & 7,uVar12 >> 3);
  return ((longlong)local_1c8 - (longlong)local_1d0) / 0x50;
}



// FUNCTION 143291680 computeJacobianAxes body=659 status=ok
// SIG undefined computeJacobianAxes(void)

void physx::Ext::joint::computeJacobianAxes(float *param_1,float *param_2,float *param_3)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar7 = *param_2;
  fVar1 = param_2[3];
  fVar8 = *param_3;
  fVar2 = param_3[3];
  fVar16 = param_2[2];
  fVar11 = fVar8 * fVar1 + fVar7 * fVar2;
  fVar3 = param_2[1];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar9 = fVar4 * fVar1 + fVar3 * fVar2;
  fVar6 = fVar7 * fVar8;
  fVar10 = fVar5 * fVar1 + fVar16 * fVar2;
  fVar13 = fVar3 * fVar4;
  fVar15 = fVar16 * fVar5;
  fVar12 = fVar16 * fVar8 + fVar5 * fVar7;
  fVar17 = fVar6 + fVar13 + fVar15;
  fVar8 = fVar3 * fVar8 + fVar4 * fVar7;
  fVar14 = fVar2 * fVar1 - fVar17;
  param_1[2] = (fVar12 + -fVar9) * 0.5;
  param_1[1] = (fVar8 + fVar10) * 0.5;
  *param_1 = (fVar6 + fVar6 + fVar14) * 0.5;
  fVar7 = fVar16 * fVar4 + fVar5 * fVar3;
  param_1[3] = (fVar8 + -fVar10) * 0.5;
  fVar8 = (fVar13 + fVar13 + fVar14) * 0.5;
  param_1[5] = (fVar7 + fVar11) * 0.5;
  param_1[4] = fVar8;
  fVar16 = (fVar15 + fVar15 + fVar14) * 0.5;
  param_1[8] = fVar16;
  param_1[6] = (fVar12 + fVar9) * 0.5;
  param_1[7] = (fVar7 + -fVar11) * 0.5;
  if (fVar17 + fVar2 * fVar1 == 0.0) {
    *param_1 = *param_1 + 1.1920929e-07;
    param_1[8] = fVar16 + 1.1920929e-07;
    param_1[4] = fVar8 + 1.1920929e-07;
  }
  return;
}



// FUNCTION 143291920 ellipseClamp body=752 status=ok
// SIG undefined ellipseClamp(void)

float * physx::shdfnd::ellipseClamp(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar9 = param_3[1];
  fVar7 = param_3[2];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  if (fVar9 < fVar7) {
    if (ABS(fVar1) < 1e-06) {
      if (fVar2 <= 0.0) {
        fVar7 = -fVar7;
      }
      param_1[2] = fVar7;
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      return param_1;
    }
  }
  else if (ABS(fVar2) < 1e-06) {
    if (fVar1 <= 0.0) {
      fVar9 = -fVar9;
    }
    param_1[1] = fVar9;
    *param_1 = 0.0;
    param_1[2] = 0.0;
    return param_1;
  }
  fVar5 = fVar9 * ABS(fVar1);
  uVar4 = 0;
  fVar3 = *param_3;
  fVar8 = fVar7 * ABS(fVar2);
  fVar10 = fVar9 * fVar9;
  fVar12 = fVar7 * fVar7;
  fVar16 = fVar5 - fVar10;
  fVar6 = fVar8 - fVar12;
  fVar17 = fVar3 * 0.0 * 0.0;
  if (fVar16 <= fVar6) {
    fVar16 = fVar6;
  }
  do {
    fVar15 = 1.0 / (fVar12 + fVar16);
    fVar14 = 1.0 / (fVar10 + fVar16);
    fVar13 = fVar15 * fVar8;
    fVar6 = fVar14 * fVar5;
    fVar13 = fVar13 * fVar13;
    fVar6 = fVar6 * fVar6;
    fVar11 = (fVar13 + fVar6) - 1.0;
    if (fVar11 < 0.0001) {
      fVar9 = *param_2;
      param_1[1] = fVar1 * fVar10 * fVar14;
      fVar9 = fVar3 * fVar3 * fVar9 * 0.0;
      param_1[2] = fVar2 * fVar12 * fVar15;
      goto LAB_143291bbd;
    }
    uVar4 = uVar4 + 1;
    fVar16 = fVar16 - fVar11 / (fVar15 * fVar13 * -2.0 -
                               (fVar17 * fVar17 * 0.0 * 2.0 + fVar14 * fVar6 * 2.0));
  } while (uVar4 < 0x14);
  fVar14 = fVar1 * fVar10 * fVar14;
  fVar15 = fVar2 * fVar12 * fVar15;
  fVar7 = fVar15 / fVar7;
  fVar9 = fVar14 / fVar9;
  fVar7 = 1.0 / SQRT(fVar7 * fVar7 + fVar9 * fVar9);
  fVar9 = fVar3 * fVar3 * *param_2 * 0.0 * fVar7;
  param_1[1] = fVar7 * fVar14;
  param_1[2] = fVar7 * fVar15;
LAB_143291bbd:
  *param_1 = fVar9;
  return param_1;
}



// FUNCTION 143291c10 getLimit body=1033 status=ok
// SIG undefined getLimit(void)

BADSPACEBASE *
physx::Cm::ConeLimitHelper::getLimit(float *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  undefined1 local_c0 [4];
  float local_bc;
  float local_b8;
  
  fVar1 = *param_2;
  fVar2 = param_2[3];
  fVar3 = param_2[1];
  fVar8 = fVar1 + fVar1;
  fVar7 = fVar2 + fVar2;
  fVar5 = param_1[1];
  local_d0 = 0;
  fVar9 = *param_1;
  fVar4 = param_2[2];
  fVar6 = param_1[2];
  fVar10 = 1.0 / (fVar2 + 1.0);
  local_cc = fVar10 * fVar4;
  local_c8 = -(fVar10 * fVar3);
  fVar10 = ((fVar6 + ABS(local_cc)) / (1.0 - fVar6 * ABS(local_cc))) / fVar9;
  fVar6 = ((fVar6 + ABS(local_c8)) / (1.0 - fVar6 * ABS(local_c8))) / fVar5;
  if (1.0 < fVar6 * fVar6 + fVar10 * fVar10) {
    local_dc = 0;
    local_d8 = fVar9;
    local_d4 = fVar5;
    shdfnd::ellipseClamp(local_c0,&local_d0,&local_dc);
    fVar6 = -local_b8;
    fVar5 = -(local_b8 / (fVar5 * fVar5));
    fVar12 = local_bc / (fVar9 * fVar9);
    fVar10 = fVar6 * fVar6 + local_bc * local_bc;
    fVar14 = 1.0 - fVar10;
    fVar9 = 1.0 / (fVar10 + 1.0);
    fVar13 = fVar12 * local_bc + fVar5 * fVar6;
    fVar11 = (fVar14 + fVar14) * fVar9 * fVar9;
    fVar9 = fVar13 * -4.0 * (3.0 - fVar10) * fVar9 * fVar9 * fVar9;
    fVar10 = fVar12 * 2.0 * fVar11 + local_bc * 2.0 * fVar9;
    fVar12 = fVar5 * -2.0 * fVar11 + fVar6 * -2.0 * fVar9;
    fVar16 = local_bc * 2.0 * fVar11;
    fVar17 = fVar14 * fVar11 - 1.0;
    fVar15 = fVar6 * -2.0 * fVar11;
    fVar9 = fVar13 * -2.0 * fVar11 + fVar14 * fVar9;
    register0x00000020 = (BADSPACEBASE *)0x1;
    fVar5 = 1.0 / SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar12 * fVar12);
    fVar6 = (fVar9 * fVar15 - fVar12 * fVar17) * fVar5;
    fVar9 = (fVar10 * fVar17 - fVar9 * fVar16) * fVar5;
    fVar5 = (fVar12 * fVar16 - fVar10 * fVar15) * fVar5;
    param_3[1] = fVar6;
    param_3[2] = fVar9;
    *param_3 = fVar5;
    *param_4 = (fVar9 * fVar16 - fVar6 * fVar15) * ((fVar2 * fVar7 + fVar1 * fVar8) - 1.0) +
               (fVar5 * fVar15 - fVar9 * fVar17) * (fVar3 * fVar8 + fVar4 * fVar7) +
               (fVar6 * fVar17 - fVar5 * fVar16) * (fVar4 * fVar8 - fVar3 * fVar7);
  }
  return register0x00000020;
}



// FUNCTION 143292020 prepareLockedAxes body=1579 status=ok
// SIG undefined prepareLockedAxes(void)

void physx::Ext::joint::ConstraintHelper::prepareLockedAxes
               (longlong param_1,float *param_2,undefined8 param_3,float *param_4,uint param_5,
               uint param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  
  pfVar5 = *(float **)(param_1 + 8);
  if (param_6 != 0) {
    local_108 = -*param_2;
    local_104 = -param_2[1];
    local_100 = -param_2[2];
    local_fc = param_2[3];
    PxQuat::operator*(&local_108,&local_f8);
    computeJacobianAxes(&local_e8,param_2,param_3);
    if ((param_6 & 1) != 0) {
      *(undefined2 *)((longlong)pfVar5 + 0x4e) = 0x400;
      pfVar5[0] = 0.0;
      pfVar5[1] = 0.0;
      pfVar5[2] = 0.0;
      pfVar5[6] = local_e0;
      pfVar5[4] = local_e8;
      pfVar5[5] = local_e4;
      pfVar5[8] = 0.0;
      pfVar5[9] = 0.0;
      pfVar5[10] = 0.0;
      pfVar5[0xe] = local_e0;
      pfVar5[0xc] = local_e8;
      pfVar5[0xd] = local_e4;
      pfVar5[3] = -local_f8;
      pfVar5 = pfVar5 + 0x14;
    }
    if ((param_6 & 2) != 0) {
      *(undefined2 *)((longlong)pfVar5 + 0x4e) = 0x400;
      pfVar5[0] = 0.0;
      pfVar5[1] = 0.0;
      pfVar5[2] = 0.0;
      pfVar5[6] = local_d4;
      pfVar5[4] = local_dc;
      pfVar5[5] = local_d8;
      pfVar5[8] = 0.0;
      pfVar5[9] = 0.0;
      pfVar5[10] = 0.0;
      pfVar5[0xe] = local_d4;
      pfVar5[0xc] = local_dc;
      pfVar5[0xd] = local_d8;
      pfVar5[3] = -local_f4;
      pfVar5 = pfVar5 + 0x14;
    }
    if ((param_6 & 4) != 0) {
      *(undefined2 *)((longlong)pfVar5 + 0x4e) = 0x400;
      pfVar5[0] = 0.0;
      pfVar5[1] = 0.0;
      pfVar5[2] = 0.0;
      pfVar5[6] = local_c8;
      pfVar5[4] = local_d0;
      pfVar5[5] = local_cc;
      pfVar5[8] = 0.0;
      pfVar5[9] = 0.0;
      pfVar5[10] = 0.0;
      pfVar5[0xe] = local_c8;
      pfVar5[0xc] = local_d0;
      pfVar5[0xd] = local_cc;
      pfVar5[3] = -local_f0;
      pfVar5 = pfVar5 + 0x14;
    }
  }
  if (param_5 != 0) {
    fVar11 = param_2[2];
    fVar1 = param_2[1];
    fVar2 = param_2[3];
    fVar6 = *param_2;
    fVar10 = fVar6 + fVar6;
    fVar12 = fVar1 + fVar1;
    fVar9 = (fVar11 + fVar11) * fVar11;
    fVar8 = (fVar11 + fVar11) * fVar2;
    fVar14 = 1.0 - fVar10 * fVar6;
    fVar6 = (1.0 - fVar12 * fVar1) - fVar9;
    fVar15 = fVar8 + fVar10 * fVar1;
    fVar7 = fVar10 * fVar11 - fVar12 * fVar2;
    fVar8 = fVar10 * fVar1 - fVar8;
    fVar9 = fVar14 - fVar9;
    fVar16 = fVar12 * fVar11 + fVar10 * fVar2;
    fVar13 = fVar12 * fVar2 + fVar10 * fVar11;
    fVar11 = fVar12 * fVar11 - fVar10 * fVar2;
    fVar14 = fVar14 - fVar12 * fVar1;
    if ((param_5 & 1) != 0) {
      fVar1 = *param_4;
      *(undefined2 *)((longlong)pfVar5 + 0x4e) = 0x400;
      pfVar5[1] = fVar15;
      *pfVar5 = fVar6;
      pfVar5[2] = fVar7;
      fVar2 = *(float *)(param_1 + 0x18);
      fVar10 = *(float *)(param_1 + 0x10);
      fVar12 = *(float *)(param_1 + 0x10);
      fVar3 = *(float *)(param_1 + 0x14);
      pfVar5[4] = fVar7 * *(float *)(param_1 + 0x14) - fVar15 * *(float *)(param_1 + 0x18);
      pfVar5[5] = fVar6 * fVar2 - fVar7 * fVar12;
      pfVar5[6] = fVar15 * fVar10 - fVar6 * fVar3;
      pfVar5[9] = fVar15;
      pfVar5[8] = fVar6;
      pfVar5[10] = fVar7;
      fVar2 = *(float *)(param_1 + 0x1c);
      fVar10 = *(float *)(param_1 + 0x1c);
      fVar12 = *(float *)(param_1 + 0x20);
      fVar3 = *(float *)(param_1 + 0x24);
      pfVar5[0xc] = fVar7 * *(float *)(param_1 + 0x20) - fVar15 * *(float *)(param_1 + 0x24);
      pfVar5[0xe] = fVar15 * fVar10 - fVar6 * fVar12;
      pfVar5[0xd] = fVar6 * fVar3 - fVar7 * fVar2;
      pfVar5[3] = -fVar1;
      pfVar5 = pfVar5 + 0x14;
    }
    if ((param_5 & 2) != 0) {
      fVar1 = param_4[1];
      *(undefined2 *)((longlong)pfVar5 + 0x4e) = 0x400;
      pfVar5[1] = fVar9;
      *pfVar5 = fVar8;
      pfVar5[2] = fVar16;
      fVar2 = *(float *)(param_1 + 0x18);
      fVar6 = *(float *)(param_1 + 0x10);
      fVar7 = *(float *)(param_1 + 0x10);
      fVar10 = *(float *)(param_1 + 0x14);
      pfVar5[4] = fVar16 * *(float *)(param_1 + 0x14) - fVar9 * *(float *)(param_1 + 0x18);
      pfVar5[5] = fVar8 * fVar2 - fVar16 * fVar7;
      pfVar5[6] = fVar9 * fVar6 - fVar8 * fVar10;
      pfVar5[9] = fVar9;
      pfVar5[8] = fVar8;
      pfVar5[10] = fVar16;
      fVar2 = *(float *)(param_1 + 0x1c);
      fVar6 = *(float *)(param_1 + 0x1c);
      fVar7 = *(float *)(param_1 + 0x20);
      fVar10 = *(float *)(param_1 + 0x24);
      pfVar5[0xc] = fVar16 * *(float *)(param_1 + 0x20) - fVar9 * *(float *)(param_1 + 0x24);
      pfVar5[0xe] = fVar9 * fVar6 - fVar8 * fVar7;
      pfVar5[0xd] = fVar8 * fVar10 - fVar16 * fVar2;
      pfVar5[3] = -fVar1;
      pfVar5 = pfVar5 + 0x14;
    }
    if ((param_5 & 4) != 0) {
      fVar1 = param_4[2];
      *(undefined2 *)((longlong)pfVar5 + 0x4e) = 0x400;
      pfVar5[1] = fVar11;
      *pfVar5 = fVar13;
      pfVar5[2] = fVar14;
      fVar2 = *(float *)(param_1 + 0x18);
      fVar6 = *(float *)(param_1 + 0x10);
      fVar7 = *(float *)(param_1 + 0x10);
      fVar8 = *(float *)(param_1 + 0x14);
      pfVar5[4] = fVar14 * *(float *)(param_1 + 0x14) - fVar11 * *(float *)(param_1 + 0x18);
      pfVar5[5] = fVar13 * fVar2 - fVar14 * fVar7;
      pfVar5[6] = fVar11 * fVar6 - fVar13 * fVar8;
      pfVar5[9] = fVar11;
      pfVar5[8] = fVar13;
      pfVar5[10] = fVar14;
      fVar2 = *(float *)(param_1 + 0x1c);
      fVar6 = *(float *)(param_1 + 0x1c);
      fVar7 = *(float *)(param_1 + 0x20);
      fVar8 = *(float *)(param_1 + 0x24);
      pfVar5[0xc] = fVar14 * *(float *)(param_1 + 0x20) - fVar11 * *(float *)(param_1 + 0x24);
      pfVar5[0xe] = fVar11 * fVar6 - fVar13 * fVar7;
      pfVar5[0xd] = fVar13 * fVar8 - fVar14 * fVar2;
      pfVar5[3] = -fVar1;
      pfVar5 = pfVar5 + 0x14;
    }
  }
  for (pfVar4 = *(float **)(param_1 + 8); pfVar4 < pfVar5; pfVar4 = pfVar4 + 0x14) {
    *(undefined2 *)(pfVar4 + 0x13) = 0x10;
  }
  *(float **)(param_1 + 8) = pfVar5;
  return;
}



// FUNCTION 143292650 PxSetJointGlobalFrame body=1878 status=ok
// SIG undefined PxSetJointGlobalFrame(void)

void PxSetJointGlobalFrame(longlong *param_1,float *param_2,float *param_3)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
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
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1b8 [6];
  float afStack_1a0 [6];
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  longlong local_160;
  undefined1 local_158 [8];
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined8 local_130;
  float afStack_128 [14];
  undefined1 local_f0 [184];
  
  (**(code **)(*param_1 + 0x30))(param_1,&local_160,local_158);
  afStack_128[10] = 0.0;
  afStack_128[0xb] = 0.0;
  lVar10 = 2;
  local_130 = 0;
  afStack_128[0] = 0.0;
  afStack_128[1] = 1.0;
  afStack_128[6] = 0.0;
  afStack_128[7] = 0.0;
  afStack_128[8] = 1.0;
  afStack_128[9] = 0.0;
  afStack_128[2] = 0.0;
  afStack_128[3] = 0.0;
  afStack_128[4] = 0.0;
  afStack_128[5] = 0.0;
  if (param_2 != (float *)0x0) {
    fVar16 = *param_2;
    plVar9 = &local_160;
    fVar18 = param_2[1];
    pfVar4 = afStack_128 + 4;
    fVar19 = param_2[2];
    lVar11 = 2;
    do {
      plVar1 = (longlong *)*plVar9;
      if (plVar1 == (longlong *)0x0) {
        local_1c8 = fVar16;
        pfVar3 = &local_1c8;
        local_1c4 = fVar18;
        local_1c0 = fVar19;
      }
      else {
        pfVar2 = (float *)(**(code **)(*plVar1 + 0xa0))(plVar1,&local_150);
        fVar16 = *param_2;
        pfVar3 = local_1b8;
        fVar18 = param_2[1];
        fVar19 = param_2[2];
        fVar13 = pfVar2[3];
        fVar12 = pfVar2[1];
        fVar14 = pfVar2[2];
        fVar23 = (fVar16 - pfVar2[4]) * 2.0;
        fVar21 = fVar13 * fVar13 - 0.5;
        fVar20 = (fVar19 - pfVar2[6]) * 2.0;
        fVar22 = (fVar18 - pfVar2[5]) * 2.0;
        fVar17 = *pfVar2;
        fVar15 = fVar17 * fVar23 + fVar12 * fVar22 + fVar14 * fVar20;
        local_1b8[0] = (fVar21 * fVar23 - (fVar12 * fVar20 - fVar14 * fVar22) * fVar13) +
                       fVar17 * fVar15;
        local_1b8[1] = (fVar21 * fVar22 - (fVar14 * fVar23 - fVar17 * fVar20) * fVar13) +
                       fVar12 * fVar15;
        local_1b8[2] = (fVar21 * fVar20 - (fVar17 * fVar22 - fVar12 * fVar23) * fVar13) +
                       fVar14 * fVar15;
      }
      plVar9 = plVar9 + 1;
      pfVar4[-2] = *pfVar3;
      pfVar4[-1] = pfVar3[1];
      *pfVar4 = pfVar3[2];
      pfVar4 = pfVar4 + 7;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  uVar8 = 0;
  if (param_3 != (float *)0x0) {
    fVar16 = *param_3;
    fVar18 = param_3[1];
    fVar19 = param_3[2];
    fVar13 = SQRT(fVar16 * fVar16 + fVar18 * fVar18 + fVar19 * fVar19);
    if (0.0 < fVar13) {
      fVar13 = 1.0 / fVar13;
      fVar16 = fVar16 * fVar13;
      fVar18 = fVar18 * fVar13;
      fVar19 = fVar19 * fVar13;
    }
    local_1b8[0] = fVar16;
    local_1b8[1] = fVar18;
    local_1b8[2] = fVar19;
    normalToTangents(local_1b8,local_f0,&local_1c8);
    plVar9 = &local_160;
    pfVar4 = afStack_128;
    uVar5 = uVar8;
    fVar13 = local_1c0;
    fVar12 = local_1c4;
    fVar14 = local_1c8;
    do {
      plVar1 = (longlong *)*plVar9;
      if (plVar1 == (longlong *)0x0) {
        *(float *)((longlong)afStack_1a0 + uVar5) = fVar16;
        *(float *)((longlong)afStack_1a0 + uVar5 + 4) = fVar18;
        *(float *)((longlong)afStack_1a0 + uVar5 + 8) = fVar19;
        *(float *)((longlong)local_1b8 + uVar5) = fVar14;
        *(float *)((longlong)local_1b8 + uVar5 + 4) = fVar12;
        *(float *)((longlong)local_1b8 + uVar5 + 8) = fVar13;
      }
      else {
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_150);
        fVar13 = local_14c + local_14c;
        fVar17 = local_150 + local_150;
        fVar12 = local_144 * (local_148 + local_148);
        fVar14 = local_148 * (local_148 + local_148);
        fVar21 = (1.0 - local_14c * fVar13) - fVar14;
        fVar23 = fVar12 + local_14c * fVar17;
        fVar12 = local_14c * fVar17 - fVar12;
        fVar22 = 1.0 - local_150 * fVar17;
        fVar15 = local_148 * fVar13 + local_144 * fVar17;
        fVar24 = local_148 * fVar13 - local_144 * fVar17;
        fVar20 = local_148 * fVar17 - local_144 * fVar13;
        fVar17 = local_144 * fVar13 + local_148 * fVar17;
        fVar14 = fVar22 - fVar14;
        fVar22 = fVar22 - local_14c * fVar13;
        *(float *)((longlong)afStack_1a0 + uVar5) =
             fVar21 * fVar16 + fVar23 * fVar18 + fVar20 * fVar19;
        *(float *)((longlong)afStack_1a0 + uVar5 + 4) =
             fVar12 * fVar16 + fVar14 * fVar18 + fVar15 * fVar19;
        *(float *)((longlong)afStack_1a0 + uVar5 + 8) =
             fVar17 * fVar16 + fVar24 * fVar18 + fVar22 * fVar19;
        *(float *)((longlong)local_1b8 + uVar5) =
             fVar23 * local_1c4 + fVar21 * local_1c8 + fVar20 * local_1c0;
        *(float *)((longlong)local_1b8 + uVar5 + 4) =
             fVar12 * local_1c8 + local_1c4 * fVar14 + fVar15 * local_1c0;
        *(float *)((longlong)local_1b8 + uVar5 + 8) =
             fVar24 * local_1c4 + fVar17 * local_1c8 + local_1c0 * fVar22;
        fVar13 = local_1c0;
        fVar12 = local_1c4;
        fVar14 = local_1c8;
      }
      local_180 = *(float *)((longlong)afStack_1a0 + uVar5 + 8);
      local_17c = *(float *)((longlong)local_1b8 + uVar5);
      local_188 = *(float *)((longlong)afStack_1a0 + uVar5);
      local_184 = *(float *)((longlong)afStack_1a0 + uVar5 + 4);
      local_178 = *(float *)((longlong)local_1b8 + uVar5 + 4);
      local_174 = *(float *)((longlong)local_1b8 + uVar5 + 8);
      local_170 = local_184 * local_174 - local_178 * local_180;
      local_16c = local_17c * local_180 - local_188 * local_174;
      local_168 = local_188 * local_178 - local_184 * local_17c;
      pfVar3 = (float *)physx::PxQuat::PxQuat(local_f0,&local_188);
      pfVar4[-2] = *pfVar3;
      pfVar4[-1] = pfVar3[1];
      *pfVar4 = pfVar3[2];
      fVar17 = pfVar3[3];
      pfVar4[1] = fVar17;
      fVar17 = SQRT(pfVar4[-2] * pfVar4[-2] + pfVar4[-1] * pfVar4[-1] + *pfVar4 * *pfVar4 +
                    fVar17 * fVar17);
      if (fVar17 != 0.0) {
        fVar17 = 1.0 / fVar17;
        pfVar4[-2] = fVar17 * pfVar4[-2];
        pfVar4[-1] = fVar17 * pfVar4[-1];
        *pfVar4 = fVar17 * *pfVar4;
        pfVar4[1] = fVar17 * pfVar4[1];
      }
      plVar9 = plVar9 + 1;
      uVar5 = uVar5 + 0xc;
      pfVar4 = pfVar4 + 7;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  puVar6 = &local_130;
  do {
    (**(code **)(*param_1 + 0x38))(param_1,uVar8,puVar6);
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    puVar6 = (undefined8 *)((longlong)puVar6 + 0x1c);
  } while (uVar7 < 2);
  return;
}



// FUNCTION 143292db0 resolveConstraintPtr body=82 status=ok
// SIG undefined resolveConstraintPtr(void)

longlong *
physx::resolveConstraintPtr
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar1 = (longlong *)(**(code **)*param_1)(param_1,0x80000000,param_2);
  }
  (**(code **)(*plVar1 + 0x98))(plVar1,param_3,param_4);
  return plVar1;
}



// FUNCTION 143292e10 normalToTangents body=459 status=ok
// SIG undefined normalToTangents(void)

void normalToTangents(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  if (ABS(fVar2) <= 0.70710677) {
    fVar2 = *param_1;
    param_2[2] = 0.0;
    fVar5 = fVar2 * fVar2 + fVar1 * fVar1;
    fVar4 = 1.0 / SQRT(fVar5);
    param_2[1] = fVar2 * fVar4;
    *param_2 = -(fVar1 * fVar4);
    fVar3 = param_1[2];
    param_3[2] = fVar4 * fVar5;
    *param_3 = -(fVar3 * fVar2 * fVar4);
    param_3[1] = fVar3 * -(fVar1 * fVar4);
  }
  else {
    *param_2 = 0.0;
    fVar4 = fVar1 * fVar1 + fVar2 * fVar2;
    fVar5 = 1.0 / SQRT(fVar4);
    param_2[2] = fVar1 * fVar5;
    param_2[1] = -(fVar2 * fVar5);
    fVar3 = *param_1;
    *param_3 = fVar5 * fVar4;
    param_3[1] = -(fVar3 * fVar1 * fVar5);
    param_3[2] = fVar3 * -(fVar2 * fVar5);
  }
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar4 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  if (0.0 < fVar4) {
    fVar4 = 1.0 / fVar4;
    *param_2 = fVar2 * fVar4;
    param_2[1] = fVar1 * fVar4;
    param_2[2] = fVar3 * fVar4;
  }
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar3 = param_3[2];
  fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  if (0.0 < fVar4) {
    fVar4 = 1.0 / fVar4;
    *param_3 = fVar2 * fVar4;
    param_3[1] = fVar1 * fVar4;
    param_3[2] = fVar3 * fVar4;
  }
  return;
}



// FUNCTION 143292fe0 ConvX body=155 status=ok
// SIG undefined ConvX(void)

undefined8 * physx::Sn::ConvX::ConvX(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145af4388;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x152) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 1;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  PointerRemap::PointerRemap(param_1 + 0x2d);
  ::_guard_xfg_dispatch_icall_nop(param_1 + 5,0x42,0x100);
  return param_1;
}



// FUNCTION 143293090 ~ConvX body=201 status=ok
// SIG undefined ~ConvX(void)

void physx::Sn::ConvX::~ConvX(undefined8 *param_1)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  *param_1 = &PTR_LAB_145af4388;
  resetNbErrors();
  resetConvexFlags(param_1);
  releaseMetaData(param_1);
  resetUnions(param_1);
  PointerRemap::~PointerRemap(param_1 + 0x2d);
  shdfnd::Array<physx::Sn::Union,physx::shdfnd::ReflectionAllocator<physx::Sn::Union>_>::destroy
            (param_1[0x25],param_1[0x25] + (ulonglong)*(uint *)(param_1 + 0x26) * 0x18);
  if ((((*(uint *)((longlong)param_1 + 0x134) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x134))) && (lVar1 = param_1[0x25], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  if ((((*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x24))) && (lVar1 = param_1[3], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  *param_1 = &PTR__purecall_145af4360;
  return;
}



// FUNCTION 143293180 setMetaData body=130 status=ok
// SIG undefined setMetaData(void)

bool physx::Sn::ConvX::setMetaData(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  releaseMetaData();
  resetUnions(param_1);
  resetNbErrors(param_1);
  lVar1 = loadMetaData(param_1,param_2,1);
  if (lVar1 == 0) {
    return false;
  }
  resetNbErrors(param_1);
  lVar1 = loadMetaData(param_1,param_3,2);
  return lVar1 != 0;
}



// FUNCTION 143293210 convert body=480 status=ok
// SIG undefined convert(void)

ulonglong physx::Sn::ConvX::convert
                    (longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  Foundation *pFVar3;
  ulonglong extraout_RAX;
  longlong lVar4;
  ulonglong extraout_RAX_00;
  PxAllocatorCallback *pPVar5;
  ulonglong uVar6;
  ulonglong extraout_RAX_01;
  ulonglong uVar7;
  
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    pFVar3 = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (pFVar3,8,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX.cpp"
               ,0x6f,
               "PxBinaryConverter: metadata not defined. Call PxBinaryConverter::setMetaData first.\n"
              );
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  resetConvexFlags();
  resetNbErrors(param_1);
  bVar1 = 0;
  if (*(char *)(param_1 + 0x160) == '\0') {
LAB_1432933aa:
    uVar6 = (ulonglong)bVar1;
  }
  else {
    if (param_3 == 0) {
      pFVar3 = physx::shdfnd::Foundation::getInstance();
      physx::shdfnd::Foundation::error
                (pFVar3,4,
                 "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX.cpp"
                 ,0x7c,"PxBinaryConverter: source serialized data size is zero.\n");
      uVar6 = extraout_RAX;
    }
    else {
      if (param_3 + 0x80 == 0) {
        lVar4 = 0;
      }
      else {
        pPVar5 = physx::shdfnd::getAllocator();
        lVar4 = (**(code **)(*(longlong *)pPVar5 + 8))
                          (pPVar5,param_3 + 0x80,"NonTrackedAlloc",
                           "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX.cpp"
                           ,0x81);
      }
      uVar7 = lVar4 + 0x80U & 0xffffffffffffff80;
      iVar2 = (**(code **)*param_2)(param_2,uVar7,param_3);
      if (iVar2 == param_3) {
        displayMessage(param_1,1,"\n\nConverting...\n\n");
        uVar6 = initOutput(param_1,param_4);
        if ((char)uVar6 != '\0') {
          bVar1 = convert(param_1,uVar7,param_3);
          closeOutput(param_1);
          if (lVar4 != 0) {
            pPVar5 = physx::shdfnd::getAllocator();
            (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,lVar4);
          }
          goto LAB_1432933aa;
        }
      }
      else {
        pFVar3 = physx::shdfnd::Foundation::getInstance();
        physx::shdfnd::Foundation::error
                  (pFVar3,4,
                   "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\serialization\\Binary\\SnConvX.cpp"
                   ,0x87,"PxBinaryConverter: failure on reading source serialized data.\n");
        uVar6 = extraout_RAX_00;
      }
      if (lVar4 != 0) {
        pPVar5 = physx::shdfnd::getAllocator();
        uVar6 = (**(code **)(*(longlong *)pPVar5 + 0x10))(pPVar5,lVar4);
      }
    }
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  return uVar6;
}



// FUNCTION 143293400 setMetaData body=65 status=ok
// SIG undefined setMetaData(void)

bool physx::Sn::ConvX::setMetaData(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  resetNbErrors();
  lVar1 = loadMetaData(param_1,param_2,param_3);
  return lVar1 != 0;
}



// FUNCTION 143293450 `scalar_deleting_destructor' body=97 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong physx::Sn::ConvX::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  PxAllocatorCallback *pPVar1;
  
  ~ConvX();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pPVar1 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x188);
    }
  }
  return param_1;
}



// FUNCTION 1432934c0 FUN_1432934c0 body=43 status=ok
// SIG undefined FUN_1432934c0(void)

undefined8 * FUN_1432934c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145af4360;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1432934f0 destroy body=135 status=ok
// SIG undefined destroy(void)

void physx::shdfnd::Array<physx::Sn::Union,physx::shdfnd::ReflectionAllocator<physx::Sn::Union>_>::
     destroy(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  uint *puVar3;
  longlong lVar4;
  
  if (param_1 < param_2) {
    puVar3 = (uint *)(param_1 + 0x14);
    lVar4 = ((param_2 - param_1) - 1) / 0x18 + 1;
    do {
      if ((((*puVar3 & 0x7fffffff) != 0) && (-1 < (int)*puVar3)) &&
         (lVar1 = *(longlong *)(puVar3 + -3), lVar1 != 0)) {
        pPVar2 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
      }
      puVar3 = puVar3 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143293590 getBinaryPlatformTag body=6 status=ok
// SIG undefined getBinaryPlatformTag(void)

undefined8 physx::Sn::getBinaryPlatformTag(void)

{
  return 0x34365f57;
}



// FUNCTION 1432935a0 isBinaryPlatformTagValid body=38 status=ok
// SIG undefined isBinaryPlatformTagValid(void)

undefined8 physx::Sn::isBinaryPlatformTagValid(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  pcVar3 = "W_32W_64L_32L_64M_32M_64MOCAANDRAIOSAA64XONENX32NX64";
  do {
    if (param_1 == *(int *)pcVar3) break;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
    pcVar3 = (char *)((longlong)pcVar3 + 4);
  } while (uVar1 < 0xd);
  return CONCAT71((int7)(uVar2 >> 8),(uint)uVar2 < 0xd);
}



// FUNCTION 1432935d0 getBinaryPlatformName body=56 status=ok
// SIG undefined getBinaryPlatformName(void)

char * physx::Sn::getBinaryPlatformName(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  pcVar3 = "W_32W_64L_32L_64M_32M_64MOCAANDRAIOSAA64XONENX32NX64";
  do {
    if (param_1 == *(int *)pcVar3) break;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
    pcVar3 = (char *)((longlong)pcVar3 + 4);
  } while (uVar1 < 0xd);
  if ((int)uVar2 == 0xd) {
    return "unknown";
  }
  return (&PTR_s_win32_1467c9be0)[uVar2];
}



// FUNCTION 143293610 checkCompatibility body=44 status=ok
// SIG undefined checkCompatibility(void)

undefined * physx::Sn::checkCompatibility(int param_1,int param_2)

{
  if ((param_1 == DAT_1467c9c48) && (param_2 == DAT_1467c9c4c)) {
    return &DAT_1467c9c01;
  }
  return &DAT_1467c9c00;
}



// FUNCTION 143293650 getCompatibilityVersionsStr body=41 status=ok
// SIG undefined getCompatibilityVersionsStr(void)

void physx::Sn::getCompatibilityVersionsStr(char *param_1,uint param_2)

{
  physx::shdfnd::snprintf
            (param_1,(ulonglong)param_2,"%x-%d\n",(ulonglong)DAT_1467c9c48,DAT_1467c9c4c);
  return;
}



// FUNCTION 143293680 PxDefaultMemoryOutputStream body=28 status=ok
// SIG undefined PxDefaultMemoryOutputStream(void)

undefined8 *
physx::PxDefaultMemoryOutputStream::PxDefaultMemoryOutputStream
          (undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR_write_145af4600;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1432936b0 ~PxDefaultMemoryOutputStream body=70 status=ok
// SIG undefined ~PxDefaultMemoryOutputStream(void)

void physx::PxDefaultMemoryOutputStream::~PxDefaultMemoryOutputStream(undefined8 *param_1)

{
  *param_1 = &PTR_write_145af4600;
  if (param_1[2] != 0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    *param_1 = &PTR__purecall_143f3ef70;
    return;
  }
  *param_1 = &PTR__purecall_143f3ef70;
  return;
}



// FUNCTION 143293700 write body=230 status=ok
// SIG int write(int _Filehandle, void * _Buf, uint _MaxCharCount)

int __cdecl physx::PxDefaultMemoryOutputStream::write(int _Filehandle,void *_Buf,uint _MaxCharCount)

{
  void *_Dst;
  uint uVar1;
  undefined4 in_register_0000000c;
  longlong lVar2;
  
  lVar2 = CONCAT44(in_register_0000000c,_Filehandle);
  uVar1 = *(int *)(lVar2 + 0x18) + _MaxCharCount;
  if (*(uint *)(lVar2 + 0x1c) < uVar1) {
    uVar1 = uVar1 >> 1 | uVar1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = (uVar1 >> 0x10 | uVar1) + 1;
    if (uVar1 < 0x1000) {
      uVar1 = 0x1000;
    }
    *(uint *)(lVar2 + 0x1c) = uVar1;
    _Dst = (void *)(**(code **)(**(longlong **)(lVar2 + 8) + 8))
                             (*(longlong **)(lVar2 + 8),uVar1,"PxDefaultMemoryOutputStream",
                              "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtDefaultStreams.cpp"
                              ,0x42);
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)(lVar2 + 0x10),(ulonglong)*(uint *)(lVar2 + 0x18));
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x10))();
    }
    *(void **)(lVar2 + 0x10) = _Dst;
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)uVar1 + *(longlong *)(lVar2 + 0x10)),_Buf,(ulonglong)_MaxCharCount)
  ;
  *(uint *)(lVar2 + 0x18) = uVar1 + _MaxCharCount;
  return _MaxCharCount;
}



// FUNCTION 143293820 read body=62 status=ok
// SIG int read(int _FileHandle, void * _DstBuf, uint _MaxCharCount)

int __cdecl physx::PxDefaultMemoryInputData::read(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  undefined4 in_register_0000000c;
  longlong lVar1;
  uint uVar2;
  
  lVar1 = CONCAT44(in_register_0000000c,_FileHandle);
  uVar2 = *(int *)(lVar1 + 8) - *(uint *)(lVar1 + 0x18);
  if (_MaxCharCount < uVar2) {
    uVar2 = _MaxCharCount;
  }
  ::_guard_xfg_dispatch_icall_nop
            (_DstBuf,(void *)((ulonglong)*(uint *)(lVar1 + 0x18) + *(longlong *)(lVar1 + 0x10)),
             (ulonglong)uVar2);
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + uVar2;
  return uVar2;
}



// FUNCTION 1432938b0 PxDefaultFileOutputStream body=226 status=ok
// SIG undefined PxDefaultFileOutputStream(void)

undefined8 *
physx::PxDefaultFileOutputStream::PxDefaultFileOutputStream(undefined8 *param_1,char *param_2)

{
  char cVar1;
  Foundation *this;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  char local_138 [304];
  
  uVar5 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_LAB_145af4648;
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    if (cVar1 == '\0') break;
    if (cVar1 == '/') {
      cVar1 = '\\';
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    pcVar3[(longlong)(local_138 + -(longlong)param_2)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (uVar4 < 300);
  local_138[uVar5] = '\0';
  if ((int)uVar5 != 300) {
    fopen_s((FILE **)(param_1 + 1),local_138,"wb");
  }
  if (param_1[1] == 0) {
    this = physx::shdfnd::Foundation::getInstance();
    piVar2 = _errno();
    physx::shdfnd::Foundation::error
              (this,0x20,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtDefaultStreams.cpp"
               ,0x79,"Unable to open file %s, errno 0x%x\n",param_2,*piVar2);
  }
  return param_1;
}



// FUNCTION 1432939a0 FUN_1432939a0 body=50 status=ok
// SIG undefined FUN_1432939a0(void)

void FUN_1432939a0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145af4648;
  if ((FILE *)param_1[1] != (FILE *)0x0) {
    fclose((FILE *)param_1[1]);
  }
  *param_1 = &PTR__purecall_143f3ef70;
  return;
}



// FUNCTION 143293a20 PxDefaultFileInputData body=200 status=ok
// SIG undefined PxDefaultFileInputData(void)

undefined8 *
physx::PxDefaultFileInputData::PxDefaultFileInputData(undefined8 *param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  ulonglong uVar5;
  char local_138 [304];
  
  uVar5 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_LAB_145af4660;
  lVar1 = -(longlong)param_2;
  do {
    cVar2 = *param_2;
    if (cVar2 == '\0') break;
    if (cVar2 == '/') {
      cVar2 = '\\';
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    param_2[(longlong)(local_138 + lVar1)] = cVar2;
    param_2 = param_2 + 1;
  } while (uVar4 < 300);
  local_138[uVar5] = '\0';
  if ((int)uVar5 != 300) {
    fopen_s((FILE **)(param_1 + 1),local_138,"rb");
  }
  if ((FILE *)param_1[1] == (FILE *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    fseek((FILE *)param_1[1],0,2);
    lVar3 = ftell((FILE *)param_1[1]);
    *(long *)(param_1 + 2) = lVar3;
    fseek((FILE *)param_1[1],0,0);
  }
  return param_1;
}



// FUNCTION 143293af0 FUN_143293af0 body=50 status=ok
// SIG undefined FUN_143293af0(void)

void FUN_143293af0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145af4660;
  if ((FILE *)param_1[1] != (FILE *)0x0) {
    fclose((FILE *)param_1[1]);
  }
  *param_1 = &PTR__purecall_143f3ef70;
  return;
}



// FUNCTION 143293bb0 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
physx::PxDefaultFileInputData::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_145af4660;
  if ((FILE *)param_1[1] != (FILE *)0x0) {
    fclose((FILE *)param_1[1]);
  }
  *param_1 = &PTR__purecall_143f3ef70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143293c10 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
physx::PxDefaultFileOutputStream::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_145af4648;
  if ((FILE *)param_1[1] != (FILE *)0x0) {
    fclose((FILE *)param_1[1]);
  }
  *param_1 = &PTR__purecall_143f3ef70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143293c70 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
physx::PxDefaultMemoryOutputStream::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_write_145af4600;
  if (param_1[2] != 0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  *param_1 = &PTR__purecall_143f3ef70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143293cd0 resolveReference body=317 status=ok
// SIG undefined resolveReference(void)

longlong physx::Sn::DeserializationContext::resolveReference
                   (longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((*(int *)(lVar2 + 0x34) != 0) &&
     (uVar3 = ~(param_2 << 0xf) + param_2, uVar3 = (uVar3 >> 10 ^ uVar3) * 9,
     uVar3 = uVar3 ^ uVar3 >> 6, uVar3 = ~(uVar3 << 0xb) + uVar3,
     uVar4 = ~(param_3 << 0x20) + param_3, uVar4 = uVar4 ^ uVar4 >> 0x16,
     uVar4 = uVar4 + ~(uVar4 << 0xd), uVar4 = (uVar4 >> 8 ^ uVar4) * 9, uVar4 = uVar4 ^ uVar4 >> 0xf
     , uVar4 = uVar4 + ~(uVar4 << 0x1b),
     uVar3 = *(uint *)(*(longlong *)(lVar2 + 0x18) +
                      (ulonglong)
                      ((((uint)(uVar4 >> 0x1f) ^ (uint)uVar4 ^ 0xfc955b95) * 0xf4247 ^ uVar3 >> 0x10
                       ^ uVar3) & *(int *)(lVar2 + 0x24) - 1U) * 4), uVar3 != 0xffffffff)) {
    lVar1 = *(longlong *)(lVar2 + 8);
    do {
      uVar4 = (ulonglong)uVar3;
      if ((*(longlong *)(lVar1 + uVar4 * 0x18) == param_3) &&
         (*(int *)(lVar1 + 8 + uVar4 * 0x18) == param_2)) {
        if (uVar3 != 0xffffffff) {
          lVar1 = lVar1 + uVar4 * 0x18;
          goto LAB_143293dc4;
        }
        break;
      }
      uVar3 = *(uint *)(*(longlong *)(lVar2 + 0x10) + uVar4 * 4);
    } while (uVar3 != 0xffffffff);
  }
  lVar1 = 0;
LAB_143293dc4:
  uVar3 = *(uint *)(lVar1 + 0x10) & 0x7fffffff;
  if ((*(uint *)(lVar1 + 0x10) & 0x80000000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143293de9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                      (*(longlong **)(param_1 + 0x30),
                       *(undefined8 *)((ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 0x18)));
    return lVar2;
  }
  return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 8) +
         *(longlong *)(param_1 + 0x20);
}



// FUNCTION 143293e20 registerReference body=534 status=ok
// SIG undefined registerReference(void)

void physx::Sn::SerializationContext::registerReference
               (longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_res8;
  char local_res18 [8];
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  if ((*(longlong **)(param_1 + 0x100) == (longlong *)0x0) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x20))(), cVar2 == '\0')) {
    bVar1 = 0;
    local_res8 = param_2;
    plVar3 = (longlong *)
             shdfnd::internal::
             HashBase<physx::shdfnd::Pair<physx::PxBase_const_*___ptr64_const,unsigned_int>,physx::PxBase_const_*___ptr64,physx::shdfnd::Hash<physx::PxBase_const_*___ptr64>,physx::shdfnd::internal::HashMapBase<physx::PxBase_const_*___ptr64,unsigned_int,physx::shdfnd::Hash<physx::PxBase_const_*___ptr64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
             ::create(param_1 + 0xc0,&local_res8,local_res18);
    if ((local_res18[0] == '\0') && (plVar3 != (longlong *)0x0)) {
      *plVar3 = param_2;
      *(undefined4 *)(plVar3 + 1) = 0;
    }
LAB_143293fc5:
    uVar7 = *(uint *)(plVar3 + 1);
  }
  else {
    bVar1 = 1;
    local_38 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x68))
                         (*(longlong **)(param_1 + 0x100),param_2);
    if ((*(int *)(param_1 + 0x3c) != 0) &&
       (uVar8 = ~(local_38 << 0x20) + local_38, uVar8 = uVar8 ^ uVar8 >> 0x16,
       uVar8 = uVar8 + ~(uVar8 << 0xd), uVar8 = (uVar8 >> 8 ^ uVar8) * 9,
       uVar8 = uVar8 ^ uVar8 >> 0xf, uVar8 = uVar8 + ~(uVar8 << 0x1b),
       uVar7 = *(uint *)(*(longlong *)(param_1 + 0x20) +
                        ((uVar8 >> 0x1f & 0xffffffff ^ uVar8 & 0xffffffff) &
                        (ulonglong)(*(int *)(param_1 + 0x2c) - 1)) * 4), uVar7 != 0xffffffff)) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar7 * 0x10) == local_38) {
          if ((uVar7 != 0xffffffff) &&
             (plVar3 = (longlong *)((ulonglong)uVar7 * 0x10 + *(longlong *)(param_1 + 0x10)),
             plVar3 != (longlong *)0x0)) goto LAB_143293fc5;
          break;
        }
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar7 * 4);
      } while (uVar7 != 0xffffffff);
    }
    uVar7 = *(uint *)(param_1 + 0x48);
    local_res8 = local_38;
    plVar3 = (longlong *)
             shdfnd::internal::
             HashBase<physx::shdfnd::Pair<physx::PxBase_const_*___ptr64_const,unsigned_int>,physx::PxBase_const_*___ptr64,physx::shdfnd::Hash<physx::PxBase_const_*___ptr64>,physx::shdfnd::internal::HashMapBase<physx::PxBase_const_*___ptr64,unsigned_int,physx::shdfnd::Hash<physx::PxBase_const_*___ptr64>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
             ::create(param_1 + 8,&local_res8,local_res18);
    if ((local_res18[0] == '\0') && (plVar3 != (longlong *)0x0)) {
      *plVar3 = local_38;
      *(uint *)(plVar3 + 1) = uVar7;
    }
    iStack_30 = CONCAT22(iStack_30._2_2_,*(undefined2 *)(param_2 + 8));
    if (*(uint *)(param_1 + 0x48) < (*(uint *)(param_1 + 0x4c) & 0x7fffffff)) {
      puVar4 = (undefined4 *)
               ((ulonglong)*(uint *)(param_1 + 0x48) * 0x10 + *(longlong *)(param_1 + 0x40));
      if (puVar4 != (undefined4 *)0x0) {
        local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
        *puVar4 = (undefined4)local_38;
        puVar4[1] = local_38._4_4_;
        puVar4[2] = iStack_30;
        puVar4[3] = uStack_2c;
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
    else {
      shdfnd::
      Array<physx::Sn::ImportReference,physx::shdfnd::ReflectionAllocator<physx::Sn::ImportReference>_>
      ::growAndPushBack((longlong *)(param_1 + 0x40),&local_38);
    }
  }
  lVar5 = 0x88;
  if (param_3 < 0) {
    lVar5 = 0x50;
  }
  local_38 = param_4;
  iStack_30 = param_3;
  puVar6 = (undefined8 *)
           shdfnd::internal::
           HashBase<physx::shdfnd::Pair<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_const_,physx::Sn::SerialObjectIndex>,physx::shdfnd::Pair<unsigned___int64,unsigned_int>,physx::shdfnd::Hash<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_>,physx::shdfnd::internal::HashMapBase<physx::shdfnd::Pair<unsigned___int64,unsigned_int>,physx::Sn::SerialObjectIndex,physx::shdfnd::Hash<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
           ::create(lVar5 + param_1,&local_38,local_res18);
  if ((local_res18[0] == '\0') && (puVar6 != (undefined8 *)0x0)) {
    *puVar6 = param_4;
    *(int *)(puVar6 + 1) = param_3;
    *(undefined4 *)(puVar6 + 2) = 0xffffffff;
  }
  *(uint *)(puVar6 + 2) = -(uint)bVar1 & 0x80000000 | uVar7;
  return;
}



// FUNCTION 143294040 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::Sn::ImportReference>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683a900,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432940e0 create body=252 status=ok
// SIG undefined create(void)

longlong physx::shdfnd::internal::
         HashBase<physx::shdfnd::Pair<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_const_,physx::Sn::SerialObjectIndex>,physx::shdfnd::Pair<unsigned___int64,unsigned_int>,physx::shdfnd::Hash<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_>,physx::shdfnd::internal::HashMapBase<physx::shdfnd::Pair<unsigned___int64,unsigned_int>,physx::Sn::SerialObjectIndex,physx::shdfnd::Hash<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
         ::create(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_3 = 0;
  }
  else {
    uVar1 = hash();
    uVar4 = (ulonglong)uVar1;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4);
    bVar5 = uVar1 == 0xffffffff;
    if (!bVar5) {
      do {
        uVar2 = (ulonglong)uVar1;
        if ((*(longlong *)(*(longlong *)(param_1 + 8) + uVar2 * 0x18) == *param_2) &&
           (*(int *)(*(longlong *)(param_1 + 8) + uVar2 * 0x18 + 8) == (int)param_2[1])) break;
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + uVar2 * 4);
      } while (uVar1 != 0xffffffff);
      bVar5 = uVar1 == 0xffffffff;
    }
    *param_3 = !bVar5;
    if (!bVar5) {
      uVar2 = (ulonglong)uVar1;
      goto LAB_1432941c4;
    }
  }
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar3 = 0x10;
    if (uVar1 != 0) {
      uVar3 = uVar1 * 2;
    }
    if (uVar1 < uVar3) {
      reserveInternal(param_1);
    }
    uVar1 = hash(param_1,param_2);
    uVar4 = (ulonglong)uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar2 = (ulonglong)uVar1;
  *(uint *)(param_1 + 0x2c) = uVar1 + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar2 * 4) =
       *(undefined4 *)(uVar4 * 4 + *(longlong *)(param_1 + 0x18));
  *(uint *)(uVar4 * 4 + *(longlong *)(param_1 + 0x18)) = uVar1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
LAB_1432941c4:
  return *(longlong *)(param_1 + 8) + uVar2 * 0x18;
}



// FUNCTION 1432941e0 growAndPushBack body=219 status=ok
// SIG undefined growAndPushBack(void)

undefined4 *
physx::shdfnd::
Array<physx::Sn::ImportReference,physx::shdfnd::ReflectionAllocator<physx::Sn::ImportReference>_>::
growAndPushBack(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  PxAllocatorCallback *pPVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = *(uint *)((longlong)param_1 + 0xc) * 2;
    if (uVar10 == 0) {
      puVar6 = (undefined4 *)0x0;
      goto LAB_14329422f;
    }
  }
  puVar6 = (undefined4 *)
           ReflectionAllocator<physx::Sn::ImportReference>::allocate
                     (param_1,(ulonglong)uVar10 << 4,
                      "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                      ,0x25d);
LAB_14329422f:
  uVar1 = *(uint *)(param_1 + 1);
  puVar9 = (undefined4 *)*param_1;
  for (puVar7 = puVar6; puVar7 < puVar6 + (ulonglong)uVar1 * 4; puVar7 = puVar7 + 4) {
    if (puVar7 != (undefined4 *)0x0) {
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      *puVar7 = *puVar9;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
    }
    puVar9 = puVar9 + 4;
  }
  puVar9 = puVar6 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  if (puVar9 != (undefined4 *)0x0) {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *puVar9 = *param_2;
    puVar9[1] = uVar3;
    puVar9[2] = uVar4;
    puVar9[3] = uVar5;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar2 = *param_1, lVar2 != 0)) {
    pPVar8 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar8 + 0x10))(pPVar8,lVar2);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)((longlong)param_1 + 0xc) = uVar10;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  *param_1 = (longlong)puVar6;
  return puVar6 + (ulonglong)uVar1 * 4;
}



// FUNCTION 1432942c0 hash body=167 status=ok
// SIG undefined hash(void)

uint physx::shdfnd::internal::
     HashBase<physx::shdfnd::Pair<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_const_,physx::Sn::SerialObjectIndex>,physx::shdfnd::Pair<unsigned___int64,unsigned_int>,physx::shdfnd::Hash<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_>,physx::shdfnd::internal::HashMapBase<physx::shdfnd::Pair<unsigned___int64,unsigned_int>,physx::Sn::SerialObjectIndex,physx::shdfnd::Hash<physx::shdfnd::Pair<unsigned___int64,unsigned_int>_>,physx::shdfnd::NonTrackingAllocator>::GetKey,physx::shdfnd::NonTrackingAllocator,1>
     ::hash(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = (int)param_2[1] + ~((int)param_2[1] << 0xf);
  uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
  uVar2 = uVar2 ^ uVar2 >> 6;
  uVar2 = uVar2 + ~(uVar2 << 0xb);
  uVar1 = *param_2 + ~(*param_2 << 0x20);
  uVar1 = uVar1 ^ uVar1 >> 0x16;
  uVar1 = uVar1 + ~(uVar1 << 0xd);
  uVar1 = (uVar1 >> 8 ^ uVar1) * 9;
  uVar1 = uVar1 ^ uVar1 >> 0xf;
  uVar1 = uVar1 + ~(uVar1 << 0x1b);
  return (((uint)(uVar1 >> 0x1f) ^ (uint)uVar1 ^ 0xfc955b95) * 0xf4247 ^ uVar2 >> 0x10 ^ uVar2) &
         *(int *)(param_1 + 0x24) - 1U;
}



// FUNCTION 143294370 getBinaryMetaData body=220 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::PxJoint::getBinaryMetaData(undefined8 *param_1)

{
  undefined1 *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_38 = &DAT_145af15d8;
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0x18;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 3;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = &DAT_145af15d8;
  local_30 = "PxBase";
  local_28 = 0;
  local_24 = 0x18;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x10;
  local_38 = &DAT_145af48ec;
  local_24 = 8;
  local_30 = "userData";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143294460 getBinaryMetaData body=797 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::Ext::D6Joint::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  getBinaryMetaData_D6JointData();
  local_38 = "D6Joint";
  local_30 = (char *)0x0;
  local_28 = 0;
  uStack_24 = 0x78;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 3;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "D6Joint";
  local_30 = "PxJoint";
  local_28 = 0;
  uStack_24 = 0x78;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "D6Joint";
  local_30 = "PxConstraintConnector";
  local_28 = 0x18;
  uStack_24 = 0x78;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x20;
  local_30 = "mName";
  local_38 = "char";
  uStack_24 = 8;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x28;
  local_38 = "PxTransform";
  uStack_24 = 0x38;
  local_30 = "mLocalPose";
  uStack_20 = 2;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x60;
  local_38 = "PxConstraint";
  uStack_24 = 8;
  local_30 = "mPxConstraint";
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "JointData";
  local_30 = "mData";
  local_28 = 0x68;
  uStack_24 = 8;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x70;
  local_30 = "mRecomputeMotion";
  local_38 = "bool";
  uStack_24 = 1;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "bool";
  local_30 = "mRecomputeLimits";
  local_28 = 0x71;
  uStack_24 = 1;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "bool";
  local_30 = "mPadding";
  local_28 = 0x72;
  uStack_24 = 2;
  uStack_20 = 2;
  uStack_1c = 0;
  local_18 = 0x200;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_30 = (char *)0x0;
  local_38 = "D6JointData";
  local_28 = 0x68;
  uStack_24 = 400;
  uStack_20 = 0;
  uStack_1c = 8;
  local_18 = 0x1000000030;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "char";
  local_30 = "string";
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0x90;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143294790 getBinaryMetaData body=599 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::Ext::FixedJoint::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  getBinaryMetaData_FixedJointData();
  local_38 = "FixedJoint";
  local_30 = (char *)0x0;
  local_28 = 0;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 3;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "FixedJoint";
  local_30 = "PxJoint";
  local_28 = 0;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "FixedJoint";
  local_30 = "PxConstraintConnector";
  local_28 = 0x18;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x20;
  local_30 = "mName";
  local_38 = "char";
  uStack_24 = 8;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x28;
  local_38 = "PxTransform";
  uStack_24 = 0x38;
  local_30 = "mLocalPose";
  uStack_20 = 2;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x60;
  local_38 = "PxConstraint";
  uStack_24 = 8;
  local_30 = "mPxConstraint";
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "JointData";
  local_30 = "mData";
  local_28 = 0x68;
  uStack_24 = 8;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_30 = (char *)0x0;
  local_38 = "FixedJointData";
  local_28 = 0x68;
  uStack_24 = 0x60;
  uStack_20 = 0;
  uStack_1c = 8;
  local_18 = 0x1000000030;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "char";
  local_30 = "string";
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0x90;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 1432949f0 getBinaryMetaData body=599 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::Ext::SphericalJoint::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  getBinaryMetaData_SphericalJointData();
  local_38 = "SphericalJoint";
  local_30 = (char *)0x0;
  local_28 = 0;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 3;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "SphericalJoint";
  local_30 = "PxJoint";
  local_28 = 0;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "SphericalJoint";
  local_30 = "PxConstraintConnector";
  local_28 = 0x18;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x20;
  local_30 = "mName";
  local_38 = "char";
  uStack_24 = 8;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x28;
  local_38 = "PxTransform";
  uStack_24 = 0x38;
  local_30 = "mLocalPose";
  uStack_20 = 2;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x60;
  local_38 = "PxConstraint";
  uStack_24 = 8;
  local_30 = "mPxConstraint";
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "JointData";
  local_30 = "mData";
  local_28 = 0x68;
  uStack_24 = 8;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_30 = (char *)0x0;
  local_38 = "SphericalJointData";
  local_28 = 0x68;
  uStack_24 = 0x80;
  uStack_20 = 0;
  uStack_1c = 8;
  local_18 = 0x1000000030;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "char";
  local_30 = "string";
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0x90;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143294c50 getBinaryMetaData body=599 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::Ext::DistanceJoint::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  getBinaryMetaData_DistanceJointData();
  local_38 = "DistanceJoint";
  local_30 = (char *)0x0;
  local_28 = 0;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 3;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "DistanceJoint";
  local_30 = "PxJoint";
  local_28 = 0;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "DistanceJoint";
  local_30 = "PxConstraintConnector";
  local_28 = 0x18;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x20;
  local_30 = "mName";
  local_38 = "char";
  uStack_24 = 8;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x28;
  local_38 = "PxTransform";
  uStack_24 = 0x38;
  local_30 = "mLocalPose";
  uStack_20 = 2;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x60;
  local_38 = "PxConstraint";
  uStack_24 = 8;
  local_30 = "mPxConstraint";
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "JointData";
  local_30 = "mData";
  local_28 = 0x68;
  uStack_24 = 8;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_30 = (char *)0x0;
  local_38 = "DistanceJointData";
  local_28 = 0x68;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 8;
  local_18 = 0x1000000030;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "char";
  local_30 = "string";
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0x90;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143294eb0 getBinaryMetaData body=599 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::Ext::RevoluteJoint::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  getBinaryMetaData_RevoluteJointData();
  local_38 = "RevoluteJoint";
  local_30 = (char *)0x0;
  local_28 = 0;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 3;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "RevoluteJoint";
  local_30 = "PxJoint";
  local_28 = 0;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "RevoluteJoint";
  local_30 = "PxConstraintConnector";
  local_28 = 0x18;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x20;
  local_30 = "mName";
  local_38 = "char";
  uStack_24 = 8;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x28;
  local_38 = "PxTransform";
  uStack_24 = 0x38;
  local_30 = "mLocalPose";
  uStack_20 = 2;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x60;
  local_38 = "PxConstraint";
  uStack_24 = 8;
  local_30 = "mPxConstraint";
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "JointData";
  local_30 = "mData";
  local_28 = 0x68;
  uStack_24 = 8;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_30 = (char *)0x0;
  local_38 = "RevoluteJointData";
  local_28 = 0x68;
  uStack_24 = 0x90;
  uStack_20 = 0;
  uStack_1c = 8;
  local_18 = 0x1000000030;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "char";
  local_30 = "string";
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0x90;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143295110 getBinaryMetaData body=599 status=ok
// SIG undefined getBinaryMetaData(void)

void physx::Ext::PrismaticJoint::getBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  getBinaryMetaData_PrismaticJointData();
  local_38 = "PrismaticJoint";
  local_30 = (char *)0x0;
  local_28 = 0;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 3;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PrismaticJoint";
  local_30 = "PxJoint";
  local_28 = 0;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PrismaticJoint";
  local_30 = "PxConstraintConnector";
  local_28 = 0x18;
  uStack_24 = 0x70;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x20;
  local_30 = "mName";
  local_38 = "char";
  uStack_24 = 8;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x28;
  local_38 = "PxTransform";
  uStack_24 = 0x38;
  local_30 = "mLocalPose";
  uStack_20 = 2;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x60;
  local_38 = "PxConstraint";
  uStack_24 = 8;
  local_30 = "mPxConstraint";
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "JointData";
  local_30 = "mData";
  local_28 = 0x68;
  uStack_24 = 8;
  uStack_20 = 1;
  uStack_1c = 0;
  local_18 = 8;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_30 = (char *)0x0;
  local_38 = "PrismaticJointData";
  local_28 = 0x68;
  uStack_24 = 0x80;
  uStack_20 = 0;
  uStack_1c = 8;
  local_18 = 0x1000000030;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "char";
  local_30 = "string";
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0x90;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143295370 getBinaryMetaData_SerializationContext body=1092 status=ok
// SIG undefined getBinaryMetaData_SerializationContext(void)

void getBinaryMetaData_SerializationContext(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_38 = 4;
  local_48 = 0;
  uStack_44 = 0;
  local_50 = "PxU64";
  local_58 = "PxSerialObjectId";
  local_40 = 0;
  uStack_3c = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "SerialObjectIndex";
  local_50 = "PxU32";
  local_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 4;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_50 = (char *)0x0;
  local_58 = "Sn::ManifestEntry";
  local_48 = 0;
  uStack_44 = 8;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "offset";
  local_48 = 0;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxType";
  local_50 = "type";
  local_48 = 4;
  uStack_44 = 2;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_50 = (char *)0x0;
  local_58 = "Sn::ImportReference";
  local_48 = 0;
  uStack_44 = 0x10;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxSerialObjectId";
  local_48 = 0;
  local_50 = "id";
  uStack_44 = 8;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_50 = "type";
  local_58 = "PxType";
  local_48 = 8;
  uStack_44 = 2;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_50 = (char *)0x0;
  local_58 = "Sn::ExportReference";
  local_48 = 0;
  uStack_44 = 0x10;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxSerialObjectId";
  local_50 = "id";
  local_48 = 0;
  uStack_44 = 8;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "SerialObjectIndex";
  local_50 = "objIndex";
  local_48 = 8;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_50 = (char *)0x0;
  local_58 = "Sn::InternalReferencePtr";
  local_48 = 0;
  uStack_44 = 0x10;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_48 = 0;
  local_58 = "void";
  local_50 = "reference";
  uStack_44 = 8;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 8;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "kind";
  local_48 = 8;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "SerialObjectIndex";
  local_50 = "objIndex";
  local_48 = 0xc;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_50 = (char *)0x0;
  local_58 = "Sn::InternalReferenceIdx";
  local_48 = 0;
  uStack_44 = 0xc;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "reference";
  local_48 = 0;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "kind";
  local_48 = 4;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "SerialObjectIndex";
  local_50 = "objIndex";
  local_48 = 8;
  uStack_44 = 4;
  local_40 = 1;
  uStack_3c = 0;
  local_38 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}



// FUNCTION 1432957c0 GetExtensionsBinaryMetaData body=195 status=ok
// SIG undefined GetExtensionsBinaryMetaData(void)

void physx::Ext::GetExtensionsBinaryMetaData(undefined8 *param_1)

{
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_24 = 8;
  local_38 = "PxConstraintConnector";
  local_18 = 3;
  local_30 = 0;
  local_28 = 0;
  local_1c = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  getBinaryMetaData_JointData(param_1);
  getBinaryMetaData_PxD6JointDrive(param_1);
  getBinaryMetaData_PxJointLimitParameters(param_1);
  getBinaryMetaData_PxJointLimitCone(param_1);
  getBinaryMetaData_PxJointLinearLimit(param_1);
  getBinaryMetaData_PxJointLinearLimitPair(param_1);
  getBinaryMetaData_PxJointAngularLimitPair(param_1);
  PxJoint::getBinaryMetaData(param_1);
  RevoluteJoint::getBinaryMetaData(param_1);
  SphericalJoint::getBinaryMetaData(param_1);
  DistanceJoint::getBinaryMetaData(param_1);
  D6Joint::getBinaryMetaData(param_1);
  PrismaticJoint::getBinaryMetaData(param_1);
  FixedJoint::getBinaryMetaData(param_1);
  getBinaryMetaData_SerializationContext(param_1);
  return;
}



// FUNCTION 143295890 getBinaryMetaData_D6JointData body=1582 status=ok
// SIG undefined getBinaryMetaData_D6JointData(void)

void getBinaryMetaData_D6JointData(undefined8 *param_1)

{
  char *local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_48 = "PxD6Motion::Enum";
  local_38 = 0;
  uStack_34 = 0;
  local_40 = "PxU32";
  local_30 = 0;
  uStack_2c = 0;
  local_28 = 4;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "D6JointData";
  local_40 = (char *)0x0;
  local_38 = 0;
  uStack_34 = 400;
  local_30 = 0;
  uStack_2c = 0;
  local_28 = 1;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "D6JointData";
  local_40 = "JointData";
  local_38 = 0;
  uStack_34 = 400;
  local_30 = 0;
  uStack_2c = 0;
  local_28 = 1;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxD6Motion::Enum";
  local_40 = "motion";
  local_38 = 0x50;
  uStack_34 = 0x18;
  local_30 = 6;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0x68;
  local_48 = "PxJointLinearLimit";
  uStack_34 = 0x18;
  local_40 = "linearLimit";
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0x9c;
  local_48 = "PxJointLimitCone";
  uStack_34 = 0x1c;
  local_40 = "swingLimit";
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0x80;
  local_48 = "PxJointAngularLimitPair";
  local_40 = "twistLimit";
  uStack_34 = 0x1c;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0xb8;
  local_48 = "PxD6JointDrive";
  uStack_34 = 0x60;
  local_40 = "drive";
  local_30 = 6;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0x118;
  local_48 = "PxTransform";
  uStack_34 = 0x1c;
  local_40 = "drivePosition";
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0x134;
  local_40 = "driveLinearVelocity";
  local_48 = "PxVec3";
  uStack_34 = 0xc;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxVec3";
  local_40 = "driveAngularVelocity";
  local_38 = 0x140;
  uStack_34 = 0xc;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxU32";
  local_40 = "locked";
  local_38 = 0x14c;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxU32";
  local_40 = "limited";
  local_38 = 0x150;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxU32";
  local_40 = "driving";
  local_38 = 0x154;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_38 = 0x158;
  local_40 = "thSwingY";
  local_48 = "PxReal";
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "thSwingZ";
  local_38 = 0x15c;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "thSwingPad";
  local_38 = 0x160;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "tqSwingY";
  local_38 = 0x164;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "tqSwingZ";
  local_38 = 0x168;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "tqSwingPad";
  local_38 = 0x16c;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "tqTwistLow";
  local_38 = 0x170;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "tqTwistHigh";
  local_38 = 0x174;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "tqTwistPad";
  local_38 = 0x178;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "linearMinDist";
  local_38 = 0x17c;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "projectionLinearTolerance";
  local_38 = 0x180;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  local_48 = "PxReal";
  local_40 = "projectionAngularTolerance";
  local_38 = 0x184;
  uStack_34 = 4;
  local_30 = 1;
  uStack_2c = 0;
  local_28 = 0;
  (**(code **)*param_1)(param_1,&local_48,0x28);
  return;
}



// FUNCTION 143295ec0 getBinaryMetaData_DistanceJointData body=570 status=ok
// SIG undefined getBinaryMetaData_DistanceJointData(void)

void getBinaryMetaData_DistanceJointData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 4;
  local_28 = 0;
  uStack_24 = 0;
  local_30 = "PxU16";
  local_38 = "PxDistanceJointFlags";
  local_20 = 0;
  uStack_1c = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "DistanceJointData";
  local_30 = (char *)0x0;
  local_28 = 0;
  uStack_24 = 0x70;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "DistanceJointData";
  local_30 = "JointData";
  local_28 = 0;
  uStack_24 = 0x70;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x50;
  local_30 = "minDistance";
  local_38 = "PxReal";
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "maxDistance";
  local_28 = 0x54;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "tolerance";
  local_28 = 0x58;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "stiffness";
  local_28 = 0x5c;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "damping";
  local_28 = 0x60;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxDistanceJointFlags";
  local_30 = "jointFlags";
  local_28 = 100;
  uStack_24 = 2;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143296100 getBinaryMetaData_FixedJointData body=273 status=ok
// SIG undefined getBinaryMetaData_FixedJointData(void)

void getBinaryMetaData_FixedJointData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_38 = "FixedJointData";
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0x60;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "FixedJointData";
  local_30 = "JointData";
  local_28 = 0;
  local_24 = 0x60;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x50;
  local_30 = "projectionLinearTolerance";
  local_38 = "PxReal";
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "projectionAngularTolerance";
  local_28 = 0x54;
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143296220 getBinaryMetaData_JointData body=213 status=ok
// SIG undefined getBinaryMetaData_JointData(void)

void getBinaryMetaData_JointData(undefined8 *param_1)

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
  local_38 = "JointData";
  local_28 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x10;
  local_38 = "PxTransform";
  local_24 = 0x38;
  local_30 = "c2b";
  uStack_20 = 2;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0;
  local_38 = "PxConstraintInvMassScale";
  local_24 = 0x10;
  local_30 = "invMassScale";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143296300 getBinaryMetaData_PrismaticJointData body=463 status=ok
// SIG undefined getBinaryMetaData_PrismaticJointData(void)

void getBinaryMetaData_PrismaticJointData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 4;
  local_28 = 0;
  uStack_24 = 0;
  local_30 = "PxU16";
  local_38 = "PxPrismaticJointFlags";
  local_20 = 0;
  uStack_1c = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PrismaticJointData";
  local_30 = (char *)0x0;
  local_28 = 0;
  uStack_24 = 0x80;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PrismaticJointData";
  local_30 = "JointData";
  local_28 = 0;
  uStack_24 = 0x80;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x50;
  local_38 = "PxJointLinearLimitPair";
  uStack_24 = 0x1c;
  local_30 = "limit";
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x6c;
  local_30 = "projectionLinearTolerance";
  local_38 = "PxReal";
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "projectionAngularTolerance";
  local_28 = 0x70;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxPrismaticJointFlags";
  local_30 = "jointFlags";
  local_28 = 0x74;
  uStack_24 = 2;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 1432964d0 getBinaryMetaData_PxD6JointDrive body=398 status=ok
// SIG undefined getBinaryMetaData_PxD6JointDrive(void)

void getBinaryMetaData_PxD6JointDrive(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 4;
  local_28 = 0;
  uStack_24 = 0;
  local_30 = "PxU32";
  local_38 = "PxD6JointDriveFlags";
  local_20 = 0;
  uStack_1c = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_30 = (char *)0x0;
  local_38 = "PxD6JointDrive";
  local_28 = 0;
  uStack_24 = 0x10;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0;
  local_30 = "stiffness";
  local_38 = "PxReal";
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "damping";
  local_28 = 4;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "forceLimit";
  local_28 = 8;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxD6JointDriveFlags";
  local_30 = "flags";
  local_28 = 0xc;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143296660 getBinaryMetaData_PxJointAngularLimitPair body=273 status=ok
// SIG undefined getBinaryMetaData_PxJointAngularLimitPair(void)

void getBinaryMetaData_PxJointAngularLimitPair(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_38 = "PxJointAngularLimitPair";
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0x1c;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxJointAngularLimitPair";
  local_30 = "PxJointLimitParameters";
  local_28 = 0;
  local_24 = 0x1c;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x14;
  local_30 = "upper";
  local_38 = "PxReal";
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "lower";
  local_28 = 0x18;
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143296780 getBinaryMetaData_PxJointLimitCone body=273 status=ok
// SIG undefined getBinaryMetaData_PxJointLimitCone(void)

void getBinaryMetaData_PxJointLimitCone(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_38 = "PxJointLimitCone";
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0x1c;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxJointLimitCone";
  local_30 = "PxJointLimitParameters";
  local_28 = 0;
  local_24 = 0x1c;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x14;
  local_30 = "yAngle";
  local_38 = "PxReal";
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "zAngle";
  local_28 = 0x18;
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 1432968a0 getBinaryMetaData_PxJointLimitParameters body=387 status=ok
// SIG undefined getBinaryMetaData_PxJointLimitParameters(void)

void getBinaryMetaData_PxJointLimitParameters(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_24 = 0x14;
  uStack_20 = 0;
  local_30 = (char *)0x0;
  local_38 = "PxJointLimitParameters";
  local_28 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0;
  local_30 = "restitution";
  local_38 = "PxReal";
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "bounceThreshold";
  local_28 = 4;
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "stiffness";
  local_28 = 8;
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "damping";
  local_28 = 0xc;
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "contactDistance";
  local_28 = 0x10;
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143296a30 getBinaryMetaData_PxJointLinearLimit body=216 status=ok
// SIG undefined getBinaryMetaData_PxJointLinearLimit(void)

void getBinaryMetaData_PxJointLinearLimit(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_38 = "PxJointLinearLimit";
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0x18;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxJointLinearLimit";
  local_30 = "PxJointLimitParameters";
  local_28 = 0;
  local_24 = 0x18;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x14;
  local_38 = "PxReal";
  local_24 = 4;
  local_30 = "value";
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143296b10 getBinaryMetaData_PxJointLinearLimitPair body=273 status=ok
// SIG undefined getBinaryMetaData_PxJointLinearLimitPair(void)

void getBinaryMetaData_PxJointLinearLimitPair(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_38 = "PxJointLinearLimitPair";
  local_30 = (char *)0x0;
  local_28 = 0;
  local_24 = 0x1c;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxJointLinearLimitPair";
  local_30 = "PxJointLimitParameters";
  local_28 = 0;
  local_24 = 0x1c;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x14;
  local_30 = "upper";
  local_38 = "PxReal";
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "lower";
  local_28 = 0x18;
  local_24 = 4;
  uStack_20 = 1;
  local_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143296c30 getBinaryMetaData_RevoluteJointData body=805 status=ok
// SIG undefined getBinaryMetaData_RevoluteJointData(void)

void getBinaryMetaData_RevoluteJointData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 4;
  local_28 = 0;
  uStack_24 = 0;
  local_30 = "PxU16";
  local_38 = "PxRevoluteJointFlags";
  local_20 = 0;
  uStack_1c = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "RevoluteJointData";
  local_30 = (char *)0x0;
  local_28 = 0;
  uStack_24 = 0x90;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "RevoluteJointData";
  local_30 = "JointData";
  local_28 = 0;
  uStack_24 = 0x90;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x50;
  local_30 = "driveVelocity";
  local_38 = "PxReal";
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "driveForceLimit";
  local_28 = 0x54;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "driveGearRatio";
  local_28 = 0x58;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x5c;
  local_38 = "PxJointAngularLimitPair";
  local_30 = "limit";
  uStack_24 = 0x1c;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "tqHigh";
  local_28 = 0x78;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "tqLow";
  local_28 = 0x7c;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "tqPad";
  local_28 = 0x80;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "projectionLinearTolerance";
  local_28 = 0x84;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "projectionAngularTolerance";
  local_28 = 0x88;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxRevoluteJointFlags";
  local_30 = "jointFlags";
  local_28 = 0x8c;
  uStack_24 = 2;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 143296f60 getBinaryMetaData_SphericalJointData body=577 status=ok
// SIG undefined getBinaryMetaData_SphericalJointData(void)

void getBinaryMetaData_SphericalJointData(undefined8 *param_1)

{
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 4;
  local_28 = 0;
  uStack_24 = 0;
  local_30 = "PxU16";
  local_38 = "PxSphericalJointFlags";
  local_20 = 0;
  uStack_1c = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "SphericalJointData";
  local_30 = (char *)0x0;
  local_28 = 0;
  uStack_24 = 0x80;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "SphericalJointData";
  local_30 = "JointData";
  local_28 = 0;
  uStack_24 = 0x80;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 1;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x50;
  local_38 = "PxJointLimitCone";
  uStack_24 = 0x1c;
  local_30 = "limit";
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_28 = 0x6c;
  local_30 = "tanQYLimit";
  local_38 = "PxReal";
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "tanQZLimit";
  local_28 = 0x70;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "tanQPad";
  local_28 = 0x74;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxReal";
  local_30 = "projectionLinearTolerance";
  local_28 = 0x78;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  local_38 = "PxSphericalJointFlags";
  local_30 = "jointFlags";
  local_28 = 0x7c;
  uStack_24 = 2;
  local_20 = 1;
  uStack_1c = 0;
  local_18 = 0;
  (**(code **)*param_1)(param_1,&local_38,0x28);
  return;
}



// FUNCTION 1432971b0 CpuWorkerThread body=338 status=ok
// SIG undefined CpuWorkerThread(void)

undefined8 * physx::Ext::CpuWorkerThread::CpuWorkerThread(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  PxAllocatorCallback *pPVar4;
  longlong *plVar5;
  char *pcVar6;
  ThreadImpl *this;
  SListImpl *this_00;
  char *pcVar7;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR__scalar_deleting_destructor__145af4df0;
  puVar3 = physx::shdfnd::ThreadImpl::getSize();
  pcVar7 = "<allocation names disabled>";
  uVar1 = *puVar3;
  if (uVar1 == 0) {
    this = (ThreadImpl *)0x0;
  }
  else {
    pPVar4 = physx::shdfnd::getAllocator();
    plVar5 = (longlong *)PxGetFoundation();
    cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
    if (cVar2 == '\0') {
      pcVar6 = "<allocation names disabled>";
    }
    else {
      pcVar6 = (char *)__std_type_info_name(0x14683a930,&DAT_146bcc1d0);
    }
    this = (ThreadImpl *)
           (**(code **)(*(longlong *)pPVar4 + 8))
                     (pPVar4,uVar1,pcVar6,
                      "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsThread.h"
                      ,0xe5);
  }
  param_1[2] = this;
  if (this != (ThreadImpl *)0x0) {
    physx::shdfnd::ThreadImpl::ThreadImpl(this);
  }
  *param_1 = &PTR__scalar_deleting_destructor__145af4e00;
  SharedQueueEntryPool<physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>_>::
  SharedQueueEntryPool<physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>_>
            (param_1 + 3,0x80,local_res8);
  puVar3 = physx::shdfnd::SListImpl::getSize();
  uVar1 = *puVar3;
  if (uVar1 == 0) {
    this_00 = (SListImpl *)0x0;
  }
  else {
    pPVar4 = physx::shdfnd::getAllocator();
    plVar5 = (longlong *)PxGetFoundation();
    cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
    if (cVar2 != '\0') {
      pcVar7 = (char *)__std_type_info_name(0x14683a7a8,&DAT_146bcc1d0);
    }
    this_00 = (SListImpl *)
              (**(code **)(*(longlong *)pPVar4 + 8))
                        (pPVar4,uVar1,pcVar7,
                         "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PxShared\\src\\foundation\\include\\PsSList.h"
                         ,0x67);
  }
  param_1[6] = this_00;
  if (this_00 != (SListImpl *)0x0) {
    physx::shdfnd::SListImpl::SListImpl(this_00);
  }
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 143297310 ~CpuWorkerThread body=202 status=ok
// SIG undefined ~CpuWorkerThread(void)

void physx::Ext::CpuWorkerThread::~CpuWorkerThread(undefined8 *param_1)

{
  PxAllocatorCallback *pPVar1;
  longlong lVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145af4e00;
  physx::shdfnd::SListImpl::~SListImpl((SListImpl *)param_1[6]);
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    pPVar1 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,lVar2);
  }
  lVar2 = param_1[3];
  if ((lVar2 != 0) && (lVar2 = lVar2 - *(longlong *)(lVar2 + -8), lVar2 != 0)) {
    pPVar1 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,lVar2);
  }
  physx::shdfnd::SListImpl::~SListImpl((SListImpl *)param_1[4]);
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    pPVar1 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,lVar2);
  }
  *param_1 = &PTR__scalar_deleting_destructor__145af4df0;
  physx::shdfnd::ThreadImpl::~ThreadImpl((ThreadImpl *)param_1[2]);
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    pPVar1 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,lVar2);
  }
  *param_1 = &PTR_FUN_145af4de0;
  return;
}



// FUNCTION 1432973e0 initialize body=5 status=ok
// SIG undefined initialize(void)

void physx::Ext::CpuWorkerThread::initialize(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 1432973f0 execute body=251 status=ok
// SIG undefined execute(void)

void physx::Ext::CpuWorkerThread::execute(longlong param_1)

{
  bool bVar1;
  __uint64 _Var2;
  SListEntry *pSVar3;
  PxAllocatorCallback *pPVar4;
  longlong *plVar5;
  
  _Var2 = physx::shdfnd::ThreadImpl::getId();
  *(__uint64 *)(param_1 + 0x38) = _Var2;
  bVar1 = physx::shdfnd::ThreadImpl::quitIsSignalled(*(ThreadImpl **)(param_1 + 0x10));
  do {
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001432974e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      physx::shdfnd::ThreadImpl::quit(*(ThreadImpl **)(param_1 + 0x10));
      return;
    }
    DefaultCpuDispatcher::resetWakeSignal(*(undefined8 *)(param_1 + 0x28));
    pSVar3 = physx::shdfnd::SListImpl::pop(*(SListImpl **)(param_1 + 0x30));
    if (pSVar3 == (SListEntry *)0x0) {
LAB_14329747c:
      plVar5 = (longlong *)DefaultCpuDispatcher::fetchNextTask(*(undefined8 *)(param_1 + 0x28));
      if (plVar5 != (longlong *)0x0) goto LAB_14329748d;
      physx::shdfnd::SyncImpl::wait(*(SyncImpl **)(*(longlong *)(param_1 + 0x28) + 0x28),0xffffffff)
      ;
    }
    else {
      plVar5 = *(longlong **)(pSVar3 + 8);
      if (pSVar3[0x10] == (SListEntry)0x0) {
        if (pSVar3 != *(SListEntry **)(pSVar3 + -8)) {
          pPVar4 = physx::shdfnd::getAllocator();
          (**(code **)(*(longlong *)pPVar4 + 0x10))(pPVar4);
        }
      }
      else {
        *(undefined8 *)(pSVar3 + 8) = 0;
        physx::shdfnd::SListImpl::push(*(SListImpl **)(param_1 + 0x20),pSVar3);
      }
      if (plVar5 == (longlong *)0x0) goto LAB_14329747c;
LAB_14329748d:
      (**(code **)(*plVar5 + 8))(plVar5);
      (**(code **)(*plVar5 + 0x30))(plVar5);
    }
    bVar1 = physx::shdfnd::ThreadImpl::quitIsSignalled(*(ThreadImpl **)(param_1 + 0x10));
  } while( true );
}



// FUNCTION 143297500 tryAcceptJobToLocalQueue body=58 status=ok
// SIG undefined tryAcceptJobToLocalQueue(void)

undefined1
physx::Ext::CpuWorkerThread::tryAcceptJobToLocalQueue
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  SListEntry *pSVar1;
  
  if (param_3 == *(longlong *)(param_1 + 0x38)) {
    pSVar1 = (SListEntry *)
             SharedQueueEntryPool<physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>_>
             ::getEntry(param_1 + 0x18);
    if (pSVar1 != (SListEntry *)0x0) {
      physx::shdfnd::SListImpl::push(*(SListImpl **)(param_1 + 0x30),pSVar1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143297540 giveUpJob body=13 status=ok
// SIG undefined giveUpJob(void)

void physx::Ext::CpuWorkerThread::giveUpJob(longlong param_1)

{
  TaskQueueHelper::fetchTask(param_1 + 0x30,param_1 + 0x18);
  return;
}



// FUNCTION 143297550 `scalar_deleting_destructor' body=160 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
physx::shdfnd::ThreadT<physx::shdfnd::ReflectionAllocator<physx::shdfnd::ThreadImpl>_>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145af4df0;
  physx::shdfnd::ThreadImpl::~ThreadImpl((ThreadImpl *)param_1[2]);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  *param_1 = &PTR_FUN_145af4de0;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1432975f0 `scalar_deleting_destructor' body=97 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong physx::Ext::CpuWorkerThread::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  PxAllocatorCallback *pPVar1;
  
  ~CpuWorkerThread();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pPVar1 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
    }
  }
  return param_1;
}



// FUNCTION 143297660 FUN_143297660 body=43 status=ok
// SIG undefined FUN_143297660(void)

undefined8 * FUN_143297660(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af4de0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143297690 PxDistanceJointCreate body=291 status=ok
// SIG undefined PxDistanceJointCreate(void)

longlong *
physx::PxDistanceJointCreate
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  pPVar2 = physx::shdfnd::getAllocator();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    pcVar4 = "<allocation names disabled>";
  }
  else {
    pcVar4 = (char *)__std_type_info_name(0x14683a960,&DAT_146bcc1d0);
  }
  lVar5 = (**(code **)(*(longlong *)pPVar2 + 8))
                    (pPVar2,0x70,pcVar4,
                     "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtDistanceJoint.cpp"
                     ,CONCAT44(uVar8,0x36));
  plVar3 = (longlong *)0x0;
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
    plVar3 = (longlong *)
             Ext::DistanceJoint::DistanceJoint(lVar5,uVar6,param_2,param_3,param_4,param_5);
    uVar9 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  plVar7 = plVar3 + 3;
  if (plVar3 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  lVar5 = (**(code **)(*param_1 + 0xf0))
                    (param_1,param_2,param_4,plVar7,&DAT_1467c9c50,CONCAT44(uVar9,0x70));
  plVar3[0xc] = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 1432977c0 exportExtraData body=80 status=ok
// SIG undefined exportExtraData(void)

void physx::Ext::DistanceJoint::exportExtraData(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x68),0x70);
  }
                    /* WARNING: Could not recover jumptable at 0x00014329780c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143297870 FUN_143297870 body=45 status=ok
// SIG undefined FUN_143297870(void)

void FUN_143297870(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = physx::resolveConstraintPtr
                    (param_2,*(undefined8 *)(param_1 + 0x60),param_1 + 0x18,&DAT_1467c9c50);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}



// FUNCTION 1432978b0 createObject body=152 status=ok
// SIG undefined createObject(void)

uint * physx::Ext::DistanceJoint::createObject(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)*param_1;
  puVar6 = (uint *)0x0;
  if (puVar5 != (uint *)0x0) {
    *(undefined2 *)((longlong)puVar5 + 10) = 2;
    *(undefined ***)puVar5 = &PTR_LAB_145af4e80;
    *(undefined ***)(puVar5 + 6) = &PTR_GetPerceptionComponent_145af4fe8;
    puVar6 = puVar5;
  }
  *param_1 = *param_1 + 0x70;
  if (*(longlong *)(puVar6 + 0x1a) != 0) {
    uVar4 = *(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_2 + 8) = uVar4 + 0x70;
    *(ulonglong *)(puVar6 + 0x1a) = uVar4;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar2 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar2;
  puVar5 = (uint *)0x0;
  if (uVar1 != 0) {
    puVar5 = puVar2;
  }
  *(uint **)(puVar6 + 8) = puVar5;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  uVar3 = resolveConstraintPtr(param_2,*(undefined8 *)(puVar6 + 0x18),puVar6 + 6,&DAT_1467c9c50);
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  return puVar6;
}



// FUNCTION 143297950 getDistance body=55 status=ok
// SIG undefined getDistance(void)

float physx::Ext::DistanceJoint::getDistance(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_28 [40];
  
  lVar1 = (**(code **)(*param_1 + 0x48))(param_1,local_28);
  return *(float *)(lVar1 + 0x10) * *(float *)(lVar1 + 0x10) +
         *(float *)(lVar1 + 0x14) * *(float *)(lVar1 + 0x14) +
         *(float *)(lVar1 + 0x18) * *(float *)(lVar1 + 0x18);
}



// FUNCTION 143297af0 attach body=94 status=ok
// SIG undefined attach(void)

bool physx::Ext::DistanceJoint::attach
               (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  lVar1 = (**(code **)(*param_2 + 0xf0))(param_2,param_3,param_4,lVar1,&DAT_1467c9c50,0x70);
  *(longlong *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}



// FUNCTION 143297b90 DistanceJoint body=228 status=ok
// SIG undefined DistanceJoint(void)

undefined8 *
physx::Ext::DistanceJoint::DistanceJoint
          (undefined8 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  PxAllocatorCallback *pPVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  *(undefined4 *)(param_1 + 1) = 0x30104;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_145af4e80;
  param_1[0xc] = 0;
  param_1[3] = &PTR_GetPerceptionComponent_145af4fe8;
  param_1[2] = 0;
  pPVar1 = physx::shdfnd::getAllocator();
  lVar2 = (**(code **)(*(longlong *)pPVar1 + 8))
                    (pPVar1,0x70,"NonTrackedAlloc",
                     "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\ExtDistanceJoint.h"
                     ,CONCAT44(uVar3,0x5d));
  param_1[0xd] = lVar2;
  Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::initCommonData
            (param_1,lVar2,param_3,param_4,param_5,param_6);
  *(undefined8 *)(lVar2 + 0x5c) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(float *)(lVar2 + 0x58) = *param_2 * 0.025;
  *(undefined2 *)(lVar2 + 100) = 2;
  return param_1;
}



// FUNCTION 143297c80 ~D6Joint body=101 status=ok
// SIG undefined ~D6Joint(void)

void physx::Ext::D6Joint::~D6Joint(undefined8 *param_1)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  *param_1 = &PTR_LAB_145af4e80;
  param_1[3] = &PTR_GetPerceptionComponent_145af4fe8;
  if (((*(byte *)((longlong)param_1 + 10) & 1) != 0) && (lVar1 = param_1[0xd], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  param_1[3] = &PTR__purecall_145af1588;
  *param_1 = &PTR__purecall_145af1560;
  return;
}



// FUNCTION 143297d00 FUN_143297d00 body=97 status=ok
// SIG undefined FUN_143297d00(void)

longlong FUN_143297d00(longlong param_1,ulonglong param_2)

{
  PxAllocatorCallback *pPVar1;
  
  physx::Ext::D6Joint::~D6Joint();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pPVar1 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 143297d80 isKindOf body=115 status=ok
// SIG undefined isKindOf(void)

undefined8 physx::PxDistanceJoint::isKindOf(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar2;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop("PxDistanceJoint",param_2);
  uVar2 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    lVar4 = 0;
    do {
      uVar2 = 0;
      lVar3 = lVar4 + 1;
      if ((&DAT_145af15d8)[lVar4] != param_2[lVar4]) {
        lVar4 = 0;
        do {
          lVar3 = lVar4 + 1;
          if (param_2[lVar4] != (&DAT_145af1548)[lVar4]) {
            return 0;
          }
          lVar4 = lVar3;
        } while (lVar3 != 7);
        return 1;
      }
      lVar4 = lVar3;
    } while (lVar3 != 8);
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// FUNCTION 143297e00 PxFixedJointCreate body=291 status=ok
// SIG undefined PxFixedJointCreate(void)

longlong *
physx::PxFixedJointCreate
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  pPVar2 = physx::shdfnd::getAllocator();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    pcVar4 = "<allocation names disabled>";
  }
  else {
    pcVar4 = (char *)__std_type_info_name(0x14683a990,&DAT_146bcc1d0);
  }
  lVar5 = (**(code **)(*(longlong *)pPVar2 + 8))
                    (pPVar2,0x70,pcVar4,
                     "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtFixedJoint.cpp"
                     ,CONCAT44(uVar8,0x39));
  plVar3 = (longlong *)0x0;
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
    plVar3 = (longlong *)Ext::FixedJoint::FixedJoint(lVar5,uVar6,param_2,param_3,param_4,param_5);
    uVar9 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  plVar7 = plVar3 + 3;
  if (plVar3 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  lVar5 = (**(code **)(*param_1 + 0xf0))
                    (param_1,param_2,param_4,plVar7,&PTR_FixedJointSolverPrep_1467c9c70,
                     CONCAT44(uVar9,0x60));
  plVar3[0xc] = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 143297f30 exportExtraData body=80 status=ok
// SIG undefined exportExtraData(void)

void physx::Ext::FixedJoint::exportExtraData(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x68),0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x000143297f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143297fe0 FUN_143297fe0 body=45 status=ok
// SIG undefined FUN_143297fe0(void)

void FUN_143297fe0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = physx::resolveConstraintPtr
                    (param_2,*(undefined8 *)(param_1 + 0x60),param_1 + 0x18,
                     &PTR_FixedJointSolverPrep_1467c9c70);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}



// FUNCTION 143298020 createObject body=152 status=ok
// SIG undefined createObject(void)

uint * physx::Ext::FixedJoint::createObject(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)*param_1;
  puVar6 = (uint *)0x0;
  if (puVar5 != (uint *)0x0) {
    *(undefined2 *)((longlong)puVar5 + 10) = 2;
    *(undefined ***)puVar5 = &PTR_LAB_145af5140;
    *(undefined ***)(puVar5 + 6) = &PTR_GetPerceptionComponent_145af5258;
    puVar6 = puVar5;
  }
  *param_1 = *param_1 + 0x70;
  if (*(longlong *)(puVar6 + 0x1a) != 0) {
    uVar4 = *(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_2 + 8) = uVar4 + 0x60;
    *(ulonglong *)(puVar6 + 0x1a) = uVar4;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar2 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar2;
  puVar5 = (uint *)0x0;
  if (uVar1 != 0) {
    puVar5 = puVar2;
  }
  *(uint **)(puVar6 + 8) = puVar5;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  uVar3 = resolveConstraintPtr
                    (param_2,*(undefined8 *)(puVar6 + 0x18),puVar6 + 6,
                     &PTR_FixedJointSolverPrep_1467c9c70);
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  return puVar6;
}



// FUNCTION 143298120 attach body=94 status=ok
// SIG undefined attach(void)

bool physx::Ext::FixedJoint::attach
               (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  lVar1 = (**(code **)(*param_2 + 0xf0))
                    (param_2,param_3,param_4,lVar1,&PTR_FixedJointSolverPrep_1467c9c70,0x60);
  *(longlong *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}



// FUNCTION 1432981a0 FixedJointVisualize body=816 status=ok
// SIG undefined FixedJointVisualize(void)

void `anonymous_namespace'::FixedJointVisualize
               (longlong *param_1,longlong param_2,float *param_3,float *param_4)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 *puVar15;
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
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  
  fVar18 = *(float *)(param_2 + 0x24) + *(float *)(param_2 + 0x24);
  fVar22 = *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x28);
  fVar24 = *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x20);
  fVar1 = param_3[3];
  fVar2 = param_3[1];
  fVar3 = *param_3;
  fVar4 = param_3[2];
  fVar20 = fVar1 * fVar1 - 0.5;
  fVar16 = fVar3 * fVar24 + fVar2 * fVar18 + fVar4 * fVar22;
  fVar5 = param_3[4];
  fVar6 = param_3[6];
  fVar7 = param_3[5];
  puVar15 = (undefined4 *)physx::PxQuat::operator*(param_3,local_c8,param_2 + 0x10);
  local_98 = *puVar15;
  local_94 = puVar15[1];
  local_90 = puVar15[2];
  local_8c = puVar15[3];
  fVar8 = param_4[3];
  fVar9 = param_4[1];
  fVar10 = param_4[2];
  fVar25 = *(float *)(param_2 + 0x3c) + *(float *)(param_2 + 0x3c);
  fVar19 = *(float *)(param_2 + 0x40) + *(float *)(param_2 + 0x40);
  fVar23 = *(float *)(param_2 + 0x44) + *(float *)(param_2 + 0x44);
  fVar11 = *param_4;
  fVar21 = fVar8 * fVar8 - 0.5;
  fVar17 = fVar11 * fVar25 + fVar9 * fVar19 + fVar10 * fVar23;
  fVar12 = param_4[4];
  fVar13 = param_4[6];
  fVar14 = param_4[5];
  local_88 = (fVar2 * fVar22 - fVar4 * fVar18) * fVar1 + fVar20 * fVar24 + fVar3 * fVar16 + fVar5;
  local_84 = (fVar4 * fVar24 - fVar3 * fVar22) * fVar1 + fVar20 * fVar18 + fVar2 * fVar16 + fVar7;
  local_80 = (fVar3 * fVar18 - fVar2 * fVar24) * fVar1 + fVar20 * fVar22 + fVar4 * fVar16 + fVar6;
  puVar15 = (undefined4 *)physx::PxQuat::operator*(param_4,local_c8);
  local_b8 = *puVar15;
  local_b4 = puVar15[1];
  local_b0 = puVar15[2];
  local_ac = puVar15[3];
  local_a8 = (fVar9 * fVar23 - fVar10 * fVar19) * fVar8 + fVar21 * fVar25 + fVar11 * fVar17 + fVar12
  ;
  local_a4 = (fVar10 * fVar25 - fVar11 * fVar23) * fVar8 + fVar21 * fVar19 + fVar9 * fVar17 + fVar14
  ;
  local_a0 = (fVar11 * fVar19 - fVar9 * fVar25) * fVar8 + fVar21 * fVar23 + fVar10 * fVar17 + fVar13
  ;
  (**(code **)(*param_1 + 8))(param_1,&local_98,&local_b8);
  return;
}



// FUNCTION 1432984e0 FixedJointProject body=2486 status=ok
// SIG undefined FixedJointProject(void)

void `anonymous_namespace'::FixedJointProject
               (longlong param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res8 [2];
  ulonglong local_170;
  ulonglong uStack_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e0 [184];
  
  physx::Ext::joint::computeDerived(param_1,param_2,param_3,&local_100,&local_140,&local_120);
  local_148 = *(float *)(param_1 + 0x50);
  fVar9 = local_110 * local_110 + local_10c * local_10c + local_108 * local_108;
  bVar1 = local_148 * local_148 < fVar9;
  if (bVar1) {
    fVar9 = 1.0 / SQRT(fVar9);
    local_150 = fVar9 * local_110 * local_148;
    local_14c = fVar9 * local_10c * local_148;
    local_148 = fVar9 * local_108 * local_148;
  }
  else {
    local_150 = local_110;
    local_14c = local_10c;
    local_148 = local_108;
  }
  fVar9 = local_148;
  local_160 = local_150;
  fVar16 = *(float *)(param_1 + 0x54) * 0.5;
  local_15c = local_14c;
  local_158 = local_148;
  fVar8 = ::_guard_xfg_dispatch_icall_nop(fVar16);
  fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
  pfVar5 = (float *)physx::Ext::joint::truncateAngular(local_e0,&local_120,fVar16,fVar8,local_res8);
  local_170 = *(ulonglong *)pfVar5;
  uStack_168 = *(ulonglong *)(pfVar5 + 2);
  if ((bVar1) || (local_res8[0]._0_1_ != '\0')) {
    if (param_4 == '\0') {
      fVar9 = *(float *)(param_1 + 0x14);
      fVar8 = *(float *)(param_1 + 0x1c);
      fVar16 = *(float *)(param_1 + 0x10);
      fVar11 = *(float *)(param_1 + 0x18);
      fVar12 = -*(float *)(param_1 + 0x20) * 2.0;
      fVar10 = -*(float *)(param_1 + 0x24) * 2.0;
      local_res8[0] = fVar8 * fVar8 - 0.5;
      fVar18 = -*(float *)(param_1 + 0x28) * 2.0;
      fVar17 = fVar9 * fVar10 + fVar16 * fVar12 + fVar11 * fVar18;
      local_120 = -*pfVar5;
      local_170 = *(ulonglong *)(param_1 + 0x10) ^ 0x8000000080000000;
      uStack_168 = *(ulonglong *)(param_1 + 0x18) ^ 0x80000000;
      local_160 = (local_res8[0] * fVar12 - (fVar9 * fVar18 - fVar11 * fVar10) * fVar8) +
                  fVar16 * fVar17;
      local_11c = -pfVar5[1];
      local_15c = (local_res8[0] * fVar10 - (fVar11 * fVar12 - fVar16 * fVar18) * fVar8) +
                  fVar9 * fVar17;
      local_158 = (local_res8[0] * fVar18 - (fVar16 * fVar10 - fVar9 * fVar12) * fVar8) +
                  fVar11 * fVar17;
      local_114 = pfVar5[3];
      local_118 = -pfVar5[2];
      fVar16 = (local_160 - local_150) * 2.0;
      fVar11 = (local_158 - local_148) * 2.0;
      fVar8 = local_114 * local_114 - 0.5;
      fVar18 = (local_15c - local_14c) * 2.0;
      fVar9 = local_11c * fVar18 + local_120 * fVar16 + local_118 * fVar11;
      fVar17 = (local_11c * fVar11 - local_118 * fVar18) * local_114 + fVar8 * fVar16 +
               local_120 * fVar9;
      fVar13 = (local_120 * fVar18 - local_11c * fVar16) * local_114 + fVar8 * fVar11 +
               local_118 * fVar9;
      fVar10 = (local_118 * fVar16 - local_120 * fVar11) * local_114 + fVar8 * fVar18 +
               local_11c * fVar9;
      puVar6 = (ulonglong *)physx::PxQuat::operator*(&local_120,local_e0,&local_170);
      local_170 = *puVar6;
      uStack_168 = puVar6[1];
      fVar18 = fVar17 + fVar17;
      fVar12 = fVar10 + fVar10;
      fVar14 = fVar13 + fVar13;
      fVar11 = local_134 * local_134 - 0.5;
      fVar16 = fVar18 * local_140 + fVar12 * local_13c + fVar14 * local_138;
      fVar9 = local_130 +
              (fVar14 * local_13c - fVar12 * local_138) * local_134 + fVar11 * fVar18 +
              fVar16 * local_140;
      fVar8 = (fVar18 * local_138 - fVar14 * local_140) * local_134 + fVar11 * fVar12 +
              fVar16 * local_13c + local_12c;
      fVar16 = (fVar12 * local_140 - fVar18 * local_13c) * local_134 + fVar11 * fVar14 +
               fVar16 * local_138 + local_128;
      local_160 = fVar17;
      local_15c = fVar10;
      local_158 = fVar13;
      puVar7 = (undefined4 *)physx::PxQuat::operator*(&local_140,&local_120,&local_170);
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *param_2 = *puVar7;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      param_2[4] = fVar9;
      param_2[5] = fVar8;
      param_2[6] = fVar16;
    }
    else {
      fVar8 = *(float *)(param_1 + 0x30);
      local_134 = *(float *)(param_1 + 0x38);
      fVar16 = *(float *)(param_1 + 0x2c);
      fVar11 = *(float *)(param_1 + 0x34);
      local_13c = -fVar8;
      local_140 = -fVar16;
      local_138 = -fVar11;
      fVar12 = -*(float *)(param_1 + 0x44) * 2.0;
      fVar14 = -*(float *)(param_1 + 0x40) * 2.0;
      fVar21 = local_134 * local_134 - 0.5;
      fVar15 = -*(float *)(param_1 + 0x3c) * 2.0;
      fVar10 = fVar8 * fVar14 + fVar16 * fVar15 + fVar11 * fVar12;
      local_130 = (fVar21 * fVar15 - (fVar8 * fVar12 - fVar11 * fVar14) * local_134) +
                  fVar16 * fVar10;
      fVar17 = pfVar5[1];
      fVar20 = local_130 + local_130;
      fVar18 = pfVar5[3];
      fVar13 = fVar18 * fVar18 - 0.5;
      local_12c = (fVar21 * fVar14 - (fVar11 * fVar15 - fVar16 * fVar12) * local_134) +
                  fVar8 * fVar10;
      fVar19 = local_12c + local_12c;
      local_128 = (fVar21 * fVar12 - (fVar16 * fVar14 - fVar8 * fVar15) * local_134) +
                  fVar11 * fVar10;
      fVar12 = local_128 + local_128;
      fVar8 = *pfVar5;
      fVar16 = pfVar5[2];
      fVar11 = fVar17 * fVar19 + fVar8 * fVar20 + fVar16 * fVar12;
      fVar10 = (fVar17 * fVar12 - fVar16 * fVar19) * fVar18 + fVar13 * fVar20 + fVar8 * fVar11 +
               local_150;
      fVar9 = (fVar8 * fVar19 - fVar17 * fVar20) * fVar18 + fVar13 * fVar12 + fVar16 * fVar11 +
              fVar9;
      fVar11 = (fVar16 * fVar20 - fVar8 * fVar12) * fVar18 + fVar13 * fVar19 + fVar17 * fVar11 +
               local_14c;
      puVar6 = (ulonglong *)physx::PxQuat::operator*(&local_170,local_e0,&local_140);
      local_170 = *puVar6;
      uStack_168 = puVar6[1];
      fVar18 = fVar10 + fVar10;
      fVar16 = local_f4 * local_f4 - 0.5;
      fVar17 = fVar11 + fVar11;
      fVar12 = fVar9 + fVar9;
      fVar8 = local_fc * fVar17 + local_100 * fVar18 + local_f8 * fVar12;
      local_160 = fVar10;
      local_15c = fVar11;
      local_158 = fVar9;
      puVar7 = (undefined4 *)physx::PxQuat::operator*(&local_100,&local_120,&local_170);
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *param_3 = *puVar7;
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar4;
      param_3[4] = local_f0 +
                   (local_fc * fVar12 - local_f8 * fVar17) * local_f4 + fVar16 * fVar18 +
                   local_100 * fVar8;
      param_3[5] = local_ec +
                   (local_f8 * fVar18 - local_100 * fVar12) * local_f4 + fVar16 * fVar17 +
                   local_fc * fVar8;
      param_3[6] = local_e8 +
                   (local_100 * fVar17 - local_fc * fVar18) * local_f4 + fVar16 * fVar12 +
                   local_f8 * fVar8;
      param_2 = param_3;
    }
    physx::PxQuat::normalize(param_2);
  }
  return;
}



// FUNCTION 143298ea0 FixedJoint body=183 status=ok
// SIG undefined FixedJoint(void)

undefined8 *
physx::Ext::FixedJoint::FixedJoint
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  PxAllocatorCallback *pPVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  *(undefined4 *)(param_1 + 1) = 0x30103;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_145af5140;
  param_1[3] = &PTR_GetPerceptionComponent_145af5258;
  pPVar1 = physx::shdfnd::getAllocator();
  lVar2 = (**(code **)(*(longlong *)pPVar1 + 8))
                    (pPVar1,0x60,"NonTrackedAlloc",
                     "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\ExtFixedJoint.h"
                     ,CONCAT44(uVar3,0x5d));
  param_1[0xd] = lVar2;
  *(undefined4 *)(lVar2 + 0x50) = 0x501502f9;
  *(undefined4 *)(lVar2 + 0x54) = 0x40490fdb;
  Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::initCommonData
            (param_1,lVar2,param_3,param_4,param_5,param_6);
  return param_1;
}



// FUNCTION 143298f60 ~D6Joint body=101 status=ok
// SIG undefined ~D6Joint(void)

void physx::Ext::D6Joint::~D6Joint(undefined8 *param_1)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  *param_1 = &PTR_LAB_145af5140;
  param_1[3] = &PTR_GetPerceptionComponent_145af5258;
  if (((*(byte *)((longlong)param_1 + 10) & 1) != 0) && (lVar1 = param_1[0xd], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  param_1[3] = &PTR__purecall_145af1588;
  *param_1 = &PTR__purecall_145af1560;
  return;
}



// FUNCTION 143298fe0 FUN_143298fe0 body=97 status=ok
// SIG undefined FUN_143298fe0(void)

longlong FUN_143298fe0(longlong param_1,ulonglong param_2)

{
  PxAllocatorCallback *pPVar1;
  
  physx::Ext::D6Joint::~D6Joint();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pPVar1 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 143299060 isKindOf body=115 status=ok
// SIG undefined isKindOf(void)

undefined8 physx::PxFixedJoint::isKindOf(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar2;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop("PxFixedJoint",param_2);
  uVar2 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    lVar4 = 0;
    do {
      uVar2 = 0;
      lVar3 = lVar4 + 1;
      if ((&DAT_145af15d8)[lVar4] != param_2[lVar4]) {
        lVar4 = 0;
        do {
          lVar3 = lVar4 + 1;
          if (param_2[lVar4] != (&DAT_145af1548)[lVar4]) {
            return 0;
          }
          lVar4 = lVar3;
        } while (lVar3 != 7);
        return 1;
      }
      lVar4 = lVar3;
    } while (lVar3 != 8);
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// FUNCTION 1432990e0 truncateAngular body=359 status=ok
// SIG undefined truncateAngular(void)

float * physx::Ext::joint::truncateAngular
                  (float *param_1,float *param_2,float param_3,float param_4,undefined1 *param_5)

{
  bool bVar1;
  float fVar2;
  float local_38;
  float local_34;
  float local_30;
  
  *param_5 = 0;
  if (0.9999 < param_3) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
  }
  local_38 = *param_2;
  if (param_2[3] < 0.0) {
    local_38 = -local_38;
    local_30 = -param_2[2];
    local_34 = -param_2[1];
  }
  else {
    local_34 = param_2[1];
    local_30 = param_2[2];
  }
  fVar2 = local_34 * local_34 + local_38 * local_38 + local_30 * local_30;
  bVar1 = param_3 * param_3 < fVar2;
  *param_5 = bVar1;
  if (!bVar1) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
  }
  fVar2 = 1.0 / SQRT(fVar2);
  param_1[1] = local_34 * param_3 * fVar2;
  param_1[3] = param_4;
  *param_1 = local_38 * param_3 * fVar2;
  param_1[2] = local_30 * param_3 * fVar2;
  return param_1;
}



// FUNCTION 143299250 PxPrismaticJointCreate body=291 status=ok
// SIG undefined PxPrismaticJointCreate(void)

longlong *
physx::PxPrismaticJointCreate
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  pPVar2 = physx::shdfnd::getAllocator();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    pcVar4 = "<allocation names disabled>";
  }
  else {
    pcVar4 = (char *)__std_type_info_name(0x14683a9c0,&DAT_146bcc1d0);
  }
  lVar5 = (**(code **)(*(longlong *)pPVar2 + 8))
                    (pPVar2,0x70,pcVar4,
                     "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtPrismaticJoint.cpp"
                     ,CONCAT44(uVar8,0x33));
  plVar3 = (longlong *)0x0;
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
    plVar3 = (longlong *)
             Ext::PrismaticJoint::PrismaticJoint(lVar5,uVar6,param_2,param_3,param_4,param_5);
    uVar9 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  plVar7 = plVar3 + 3;
  if (plVar3 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  lVar5 = (**(code **)(*param_1 + 0xf0))
                    (param_1,param_2,param_4,plVar7,&PTR_PrismaticJointSolverPrep_1467c9c90,
                     CONCAT44(uVar9,0x80));
  plVar3[0xc] = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 143299380 FUN_143299380 body=80 status=ok
// SIG undefined FUN_143299380(void)

void FUN_143299380(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x68),0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x0001432993cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143299430 FUN_143299430 body=45 status=ok
// SIG undefined FUN_143299430(void)

void FUN_143299430(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = physx::resolveConstraintPtr
                    (param_2,*(undefined8 *)(param_1 + 0x60),param_1 + 0x18,
                     &PTR_PrismaticJointSolverPrep_1467c9c90);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}



// FUNCTION 143299470 FUN_143299470 body=155 status=ok
// SIG undefined FUN_143299470(void)

uint * FUN_143299470(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)*param_1;
  puVar6 = (uint *)0x0;
  if (puVar5 != (uint *)0x0) {
    *(undefined2 *)((longlong)puVar5 + 10) = 2;
    *(undefined ***)puVar5 = &PTR_LAB_145af53b0;
    *(undefined ***)(puVar5 + 6) = &PTR_GetPerceptionComponent_145af5500;
    puVar6 = puVar5;
  }
  *param_1 = *param_1 + 0x70;
  if (*(longlong *)(puVar6 + 0x1a) != 0) {
    uVar4 = *(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_2 + 8) = uVar4 + 0x80;
    *(ulonglong *)(puVar6 + 0x1a) = uVar4;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar2 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar2;
  puVar5 = (uint *)0x0;
  if (uVar1 != 0) {
    puVar5 = puVar2;
  }
  *(uint **)(puVar6 + 8) = puVar5;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  uVar3 = physx::resolveConstraintPtr
                    (param_2,*(undefined8 *)(puVar6 + 0x18),puVar6 + 6,
                     &PTR_PrismaticJointSolverPrep_1467c9c90);
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  return puVar6;
}



// FUNCTION 143299650 FUN_143299650 body=94 status=ok
// SIG undefined FUN_143299650(void)

bool FUN_143299650(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  lVar1 = (**(code **)(*param_2 + 0xf0))
                    (param_2,param_3,param_4,lVar1,&PTR_PrismaticJointSolverPrep_1467c9c90,0x80);
  *(longlong *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}



// FUNCTION 1432996d0 PrismaticJointVisualize body=1468 status=ok
// SIG undefined PrismaticJointVisualize(void)

void `anonymous_namespace'::PrismaticJointVisualize
               (longlong *param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  undefined1 local_108 [16];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  
  fVar19 = *(float *)(param_2 + 0x24) + *(float *)(param_2 + 0x24);
  fVar23 = *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x28);
  fVar25 = *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x20);
  fVar11 = param_3[3];
  fVar14 = param_3[1];
  fVar15 = *param_3;
  fVar16 = param_3[2];
  fVar21 = fVar11 * fVar11 - 0.5;
  fVar12 = fVar15 * fVar25 + fVar14 * fVar19 + fVar16 * fVar23;
  fVar17 = param_3[4];
  fVar18 = param_3[6];
  fVar1 = param_3[5];
  pfVar9 = (float *)physx::PxQuat::operator*(param_3,local_108,param_2 + 0x10);
  local_f8 = *pfVar9;
  local_f4 = pfVar9[1];
  local_f0 = pfVar9[2];
  local_ec = pfVar9[3];
  fVar2 = param_4[3];
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar26 = *(float *)(param_2 + 0x3c) + *(float *)(param_2 + 0x3c);
  fVar20 = *(float *)(param_2 + 0x40) + *(float *)(param_2 + 0x40);
  fVar24 = *(float *)(param_2 + 0x44) + *(float *)(param_2 + 0x44);
  fVar5 = *param_4;
  fVar22 = fVar2 * fVar2 - 0.5;
  fVar13 = fVar5 * fVar26 + fVar3 * fVar20 + fVar4 * fVar24;
  fVar6 = param_4[4];
  fVar7 = param_4[6];
  fVar8 = param_4[5];
  local_e8 = (fVar14 * fVar23 - fVar16 * fVar19) * fVar11 + fVar21 * fVar25 + fVar15 * fVar12 +
             fVar17;
  local_e4 = (fVar16 * fVar25 - fVar15 * fVar23) * fVar11 + fVar21 * fVar19 + fVar14 * fVar12 +
             fVar1;
  local_e0 = (fVar15 * fVar19 - fVar14 * fVar25) * fVar11 + fVar21 * fVar23 + fVar16 * fVar12 +
             fVar18;
  puVar10 = (undefined4 *)physx::PxQuat::operator*(param_4,local_108);
  local_d8 = *puVar10;
  local_d4 = puVar10[1];
  local_d0 = puVar10[2];
  local_cc = puVar10[3];
  local_c8 = (fVar3 * fVar24 - fVar4 * fVar20) * fVar2 + fVar22 * fVar26 + fVar5 * fVar13 + fVar6;
  local_c4 = (fVar4 * fVar26 - fVar5 * fVar24) * fVar2 + fVar22 * fVar20 + fVar3 * fVar13 + fVar8;
  local_c0 = (fVar5 * fVar20 - fVar3 * fVar26) * fVar2 + fVar22 * fVar24 + fVar4 * fVar13 + fVar7;
  (**(code **)(*param_1 + 8))(param_1,&local_f8,&local_d8);
  fVar17 = local_ec * local_ec - 0.5;
  fVar15 = local_f8 * 2.0 + local_f4 * 0.0 + local_f0 * 0.0;
  fVar18 = (local_c8 - local_e8) * 2.0;
  fVar14 = (local_c0 - local_e0) * 2.0;
  fVar16 = (local_c4 - local_e4) * 2.0;
  fVar11 = local_f4 * fVar16 + local_f8 * fVar18 + local_f0 * fVar14;
  fVar11 = (((fVar17 * fVar16 - (local_f0 * fVar18 - local_f8 * fVar14) * local_ec) +
            local_f4 * fVar11) - local_e4) *
           ((local_f0 * 2.0 - local_f8 * 0.0) * local_ec + fVar17 * 0.0 + local_f4 * fVar15) +
           (((fVar17 * fVar18 - (local_f4 * fVar14 - local_f0 * fVar16) * local_ec) +
            local_f8 * fVar11) - local_e8) *
           ((local_f4 * 0.0 - local_f0 * 0.0) * local_ec + fVar17 * 2.0 + local_f8 * fVar15) +
           (((fVar17 * fVar14 - (local_f8 * fVar16 - local_f4 * fVar18) * local_ec) +
            local_f0 * fVar11) - local_e0) *
           ((local_f8 * 0.0 - local_f4 * 2.0) * local_ec + fVar17 * 0.0 + local_f0 * fVar15);
  if ((*(byte *)(param_2 + 0x74) & 2) != 0) {
    (**(code **)(*param_1 + 0x10))
              (param_1,&local_f8,&local_d8,*param_1,
               fVar11 < *(float *)(param_2 + 0x68) + *(float *)(param_2 + 0x60));
    (**(code **)(*param_1 + 0x10))
              (param_1,&local_f8,&local_d8,*param_1,
               *(float *)(param_2 + 100) - *(float *)(param_2 + 0x60) < fVar11);
  }
  return;
}



// FUNCTION 143299ca0 PrismaticJointProject body=2479 status=ok
// SIG undefined PrismaticJointProject(void)

void `anonymous_namespace'::PrismaticJointProject
               (longlong param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_res8 [2];
  undefined8 local_170;
  undefined8 uStack_168;
  float local_160;
  float local_15c;
  float local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110;
  float local_10c;
  float local_108;
  undefined1 local_100 [16];
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e0 [184];
  
  physx::Ext::joint::computeDerived(param_1,param_2,param_3,&local_170,&local_150,local_100);
  local_128 = *(float *)(param_1 + 0x6c);
  fVar9 = local_ec * local_ec + local_e8 * local_e8;
  bVar1 = local_128 * local_128 < fVar9;
  if (bVar1) {
    fVar9 = 1.0 / SQRT(fVar9);
    local_130 = fVar9 * 0.0 * local_128;
    local_12c = fVar9 * local_ec * local_128;
    local_128 = fVar9 * local_e8 * local_128;
  }
  else {
    local_130 = 0.0;
    local_12c = local_ec;
    local_128 = local_e8;
  }
  fVar9 = local_128;
  local_110 = local_130;
  fVar16 = *(float *)(param_1 + 0x70) * 0.5;
  local_10c = local_12c;
  local_108 = local_128;
  fVar8 = ::_guard_xfg_dispatch_icall_nop(fVar16);
  fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
  pfVar5 = (float *)physx::Ext::joint::truncateAngular(local_e0,local_100,fVar16,fVar8,local_res8);
  local_120 = *(undefined8 *)pfVar5;
  uStack_118 = *(undefined8 *)(pfVar5 + 2);
  if ((bVar1) || (local_res8[0]._0_1_ != '\0')) {
    local_110 = local_f0;
    if (param_4 == '\0') {
      fVar9 = *(float *)(param_1 + 0x14);
      fVar8 = *(float *)(param_1 + 0x1c);
      fVar16 = *(float *)(param_1 + 0x10);
      fVar11 = *(float *)(param_1 + 0x18);
      fVar10 = -*(float *)(param_1 + 0x20) * 2.0;
      fVar18 = -*(float *)(param_1 + 0x24) * 2.0;
      local_res8[0] = fVar8 * fVar8 - 0.5;
      fVar17 = -*(float *)(param_1 + 0x28) * 2.0;
      fVar22 = fVar9 * fVar18 + fVar16 * fVar10 + fVar11 * fVar17;
      fVar13 = -*pfVar5;
      local_170 = *(ulonglong *)(param_1 + 0x10) ^ 0x8000000080000000;
      uStack_168 = *(ulonglong *)(param_1 + 0x18) ^ 0x80000000;
      local_160 = (local_res8[0] * fVar10 - (fVar9 * fVar17 - fVar11 * fVar18) * fVar8) +
                  fVar16 * fVar22;
      fVar12 = -pfVar5[1];
      local_120 = CONCAT44(fVar12,fVar13);
      local_15c = (local_res8[0] * fVar18 - (fVar11 * fVar10 - fVar16 * fVar17) * fVar8) +
                  fVar9 * fVar22;
      local_158 = (local_res8[0] * fVar17 - (fVar16 * fVar18 - fVar9 * fVar10) * fVar8) +
                  fVar11 * fVar22;
      fVar9 = pfVar5[3];
      fVar17 = -pfVar5[2];
      fVar11 = (local_160 - local_f0) * 2.0;
      fVar22 = (local_158 - local_128) * 2.0;
      fVar16 = fVar9 * fVar9 - 0.5;
      fVar10 = (local_15c - local_12c) * 2.0;
      uStack_118 = CONCAT44(fVar9,fVar17);
      fVar8 = fVar12 * fVar10 + fVar13 * fVar11 + fVar17 * fVar22;
      fVar18 = (fVar12 * fVar22 - fVar17 * fVar10) * fVar9 + fVar16 * fVar11 + fVar13 * fVar8;
      fVar14 = (fVar13 * fVar10 - fVar12 * fVar11) * fVar9 + fVar16 * fVar22 + fVar17 * fVar8;
      fVar17 = (fVar17 * fVar11 - fVar13 * fVar22) * fVar9 + fVar16 * fVar10 + fVar12 * fVar8;
      puVar6 = (undefined8 *)physx::PxQuat::operator*(&local_120,local_e0,&local_170);
      local_170 = *puVar6;
      uStack_168 = puVar6[1];
      fVar22 = fVar18 + fVar18;
      fVar10 = fVar17 + fVar17;
      fVar12 = fVar14 + fVar14;
      fVar11 = uStack_148._4_4_ * uStack_148._4_4_ - 0.5;
      fVar16 = fVar22 * (float)local_150 + fVar10 * local_150._4_4_ + fVar12 * (float)uStack_148;
      fVar9 = local_140 +
              (fVar12 * local_150._4_4_ - fVar10 * (float)uStack_148) * uStack_148._4_4_ +
              fVar11 * fVar22 + fVar16 * (float)local_150;
      fVar8 = (fVar22 * (float)uStack_148 - fVar12 * (float)local_150) * uStack_148._4_4_ +
              fVar11 * fVar10 + fVar16 * local_150._4_4_ + local_13c;
      fVar16 = (fVar10 * (float)local_150 - fVar22 * local_150._4_4_) * uStack_148._4_4_ +
               fVar11 * fVar12 + fVar16 * (float)uStack_148 + local_138;
      local_160 = fVar18;
      local_15c = fVar17;
      local_158 = fVar14;
      puVar7 = (undefined4 *)physx::PxQuat::operator*(&local_150,&local_120,&local_170);
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *param_2 = *puVar7;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      param_2[4] = fVar9;
      param_2[5] = fVar8;
      param_2[6] = fVar16;
    }
    else {
      fVar8 = *(float *)(param_1 + 0x30);
      fVar16 = *(float *)(param_1 + 0x38);
      fVar11 = *(float *)(param_1 + 0x2c);
      fVar22 = *(float *)(param_1 + 0x34);
      local_150 = *(ulonglong *)(param_1 + 0x2c) ^ 0x8000000080000000;
      fVar12 = -*(float *)(param_1 + 0x44) * 2.0;
      fVar14 = -*(float *)(param_1 + 0x40) * 2.0;
      fVar21 = fVar16 * fVar16 - 0.5;
      fVar15 = -*(float *)(param_1 + 0x3c) * 2.0;
      fVar10 = fVar8 * fVar14 + fVar11 * fVar15 + fVar22 * fVar12;
      uStack_148 = *(ulonglong *)(param_1 + 0x34) ^ 0x80000000;
      local_140 = (fVar21 * fVar15 - (fVar8 * fVar12 - fVar22 * fVar14) * fVar16) + fVar11 * fVar10;
      fVar17 = pfVar5[1];
      fVar20 = local_140 + local_140;
      fVar18 = pfVar5[3];
      fVar13 = fVar18 * fVar18 - 0.5;
      local_13c = (fVar21 * fVar14 - (fVar22 * fVar15 - fVar11 * fVar12) * fVar16) + fVar8 * fVar10;
      fVar19 = local_13c + local_13c;
      local_138 = (fVar21 * fVar12 - (fVar11 * fVar14 - fVar8 * fVar15) * fVar16) + fVar22 * fVar10;
      fVar22 = local_138 + local_138;
      fVar8 = *pfVar5;
      fVar16 = pfVar5[2];
      fVar11 = fVar17 * fVar19 + fVar8 * fVar20 + fVar16 * fVar22;
      fVar10 = (fVar17 * fVar22 - fVar16 * fVar19) * fVar18 + fVar13 * fVar20 + fVar8 * fVar11 +
               local_f0;
      fVar9 = (fVar8 * fVar19 - fVar17 * fVar20) * fVar18 + fVar13 * fVar22 + fVar16 * fVar11 +
              fVar9;
      fVar17 = (fVar16 * fVar20 - fVar8 * fVar22) * fVar18 + fVar13 * fVar19 + fVar17 * fVar11 +
               local_12c;
      puVar6 = (undefined8 *)physx::PxQuat::operator*(&local_120,local_e0,&local_150);
      local_150 = *puVar6;
      uStack_148 = puVar6[1];
      fVar12 = fVar10 + fVar10;
      fVar22 = uStack_168._4_4_ * uStack_168._4_4_ - 0.5;
      fVar18 = fVar17 + fVar17;
      fVar13 = fVar9 + fVar9;
      fVar8 = local_170._4_4_ * fVar18 + (float)local_170 * fVar12 + (float)uStack_168 * fVar13;
      fVar16 = local_160 +
               (local_170._4_4_ * fVar13 - (float)uStack_168 * fVar18) * uStack_168._4_4_ +
               fVar22 * fVar12 + (float)local_170 * fVar8;
      fVar11 = ((float)uStack_168 * fVar12 - (float)local_170 * fVar13) * uStack_168._4_4_ +
               fVar22 * fVar18 + local_170._4_4_ * fVar8 + local_15c;
      fVar8 = ((float)local_170 * fVar18 - local_170._4_4_ * fVar12) * uStack_168._4_4_ +
              fVar22 * fVar13 + (float)uStack_168 * fVar8 + local_158;
      local_140 = fVar10;
      local_13c = fVar17;
      local_138 = fVar9;
      puVar7 = (undefined4 *)physx::PxQuat::operator*(&local_170,&local_120,&local_150);
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *param_3 = *puVar7;
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar4;
      param_3[4] = fVar16;
      param_3[5] = fVar11;
      param_3[6] = fVar8;
      param_2 = param_3;
    }
    physx::PxQuat::normalize(param_2);
  }
  return;
}



// FUNCTION 14329a650 PrismaticJoint body=335 status=ok
// SIG undefined PrismaticJoint(void)

undefined8 *
physx::Ext::PrismaticJoint::PrismaticJoint
          (undefined8 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  PxAllocatorCallback *pPVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  float local_18;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  *(undefined4 *)(param_1 + 1) = 0x30102;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_145af53b0;
  param_1[0xc] = 0;
  param_1[3] = &PTR_GetPerceptionComponent_145af5500;
  param_1[2] = 0;
  pPVar2 = physx::shdfnd::getAllocator();
  lVar3 = (**(code **)(*(longlong *)pPVar2 + 8))
                    (pPVar2,0x80,"NonTrackedAlloc",
                     "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\ExtPrismaticJoint.h"
                     ,CONCAT44(uVar4,0x5e));
  param_1[0xd] = lVar3;
  fVar1 = *param_2;
  local_18 = fVar1 * 0.01;
  if (1.111589e+38 <= local_18) {
    local_18 = 1.111589e+38;
  }
  *(undefined4 *)(lVar3 + 0x6c) = 0x501502f9;
  *(undefined4 *)(lVar3 + 0x70) = 0x40490fdb;
  *(undefined4 *)(lVar3 + 0x50) = 0;
  *(float *)(lVar3 + 0x54) = fVar1 + fVar1;
  *(undefined4 *)(lVar3 + 0x58) = 0;
  *(undefined4 *)(lVar3 + 0x5c) = 0;
  *(ulonglong *)(lVar3 + 0x60) = CONCAT44(0x7eaaaaaa,local_18);
  *(undefined4 *)(lVar3 + 0x68) = 0xfeaaaaaa;
  *(undefined2 *)(lVar3 + 0x74) = 0;
  Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::initCommonData
            (param_1,lVar3,param_3,param_4,param_5,param_6);
  return param_1;
}



// FUNCTION 14329a7a0 ~D6Joint body=101 status=ok
// SIG undefined ~D6Joint(void)

void physx::Ext::D6Joint::~D6Joint(undefined8 *param_1)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  *param_1 = &PTR_LAB_145af53b0;
  param_1[3] = &PTR_GetPerceptionComponent_145af5500;
  if (((*(byte *)((longlong)param_1 + 10) & 1) != 0) && (lVar1 = param_1[0xd], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  param_1[3] = &PTR__purecall_145af1588;
  *param_1 = &PTR__purecall_145af1560;
  return;
}



// FUNCTION 14329a820 FUN_14329a820 body=97 status=ok
// SIG undefined FUN_14329a820(void)

longlong FUN_14329a820(longlong param_1,ulonglong param_2)

{
  PxAllocatorCallback *pPVar1;
  
  physx::Ext::D6Joint::~D6Joint();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pPVar1 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 14329a890 getPosition body=25 status=ok
// SIG undefined getPosition(void)

undefined4 physx::Ext::PrismaticJoint::getPosition(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_28 [40];
  
  lVar1 = (**(code **)(*param_1 + 0x48))(param_1,local_28);
  return *(undefined4 *)(lVar1 + 0x10);
}



// FUNCTION 14329a8c0 getVelocity body=24 status=ok
// SIG undefined getVelocity(void)

undefined4 physx::Ext::PrismaticJoint::getVelocity(longlong *param_1)

{
  undefined4 *puVar1;
  undefined1 local_18 [24];
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x50))(param_1,local_18);
  return *puVar1;
}



// FUNCTION 14329a8e0 isKindOf body=115 status=ok
// SIG undefined isKindOf(void)

undefined8 physx::PxPrismaticJoint::isKindOf(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar2;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop("PxPrismaticJoint",param_2);
  uVar2 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    lVar4 = 0;
    do {
      uVar2 = 0;
      lVar3 = lVar4 + 1;
      if ((&DAT_145af15d8)[lVar4] != param_2[lVar4]) {
        lVar4 = 0;
        do {
          lVar3 = lVar4 + 1;
          if (param_2[lVar4] != (&DAT_145af1548)[lVar4]) {
            return 0;
          }
          lVar4 = lVar3;
        } while (lVar3 != 7);
        return 1;
      }
      lVar4 = lVar3;
    } while (lVar3 != 8);
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// FUNCTION 14329a960 PxRevoluteJointCreate body=291 status=ok
// SIG undefined PxRevoluteJointCreate(void)

longlong *
physx::PxRevoluteJointCreate
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  pPVar2 = physx::shdfnd::getAllocator();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    pcVar4 = "<allocation names disabled>";
  }
  else {
    pcVar4 = (char *)__std_type_info_name(0x14683a9f0,&DAT_146bcc1d0);
  }
  lVar5 = (**(code **)(*(longlong *)pPVar2 + 8))
                    (pPVar2,0x70,pcVar4,
                     "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtRevoluteJoint.cpp"
                     ,CONCAT44(uVar8,0x3d));
  plVar3 = (longlong *)0x0;
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
    plVar3 = (longlong *)
             Ext::RevoluteJoint::RevoluteJoint(lVar5,uVar6,param_2,param_3,param_4,param_5);
    uVar9 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  plVar7 = plVar3 + 3;
  if (plVar3 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  lVar5 = (**(code **)(*param_1 + 0xf0))
                    (param_1,param_2,param_4,plVar7,&PTR_RevoluteJointSolverPrep_1467c9cb0,
                     CONCAT44(uVar9,0x90));
  plVar3[0xc] = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 14329aa90 FUN_14329aa90 body=45 status=ok
// SIG undefined FUN_14329aa90(void)

void FUN_14329aa90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = physx::resolveConstraintPtr
                    (param_2,*(undefined8 *)(param_1 + 0x60),param_1 + 0x18,
                     &PTR_RevoluteJointSolverPrep_1467c9cb0);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}



// FUNCTION 14329aad0 exportExtraData body=80 status=ok
// SIG undefined exportExtraData(void)

void physx::Ext::RevoluteJoint::exportExtraData(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x68),0x90);
  }
                    /* WARNING: Could not recover jumptable at 0x00014329ab1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 14329ab80 createObject body=155 status=ok
// SIG undefined createObject(void)

uint * physx::Ext::RevoluteJoint::createObject(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)*param_1;
  puVar6 = (uint *)0x0;
  if (puVar5 != (uint *)0x0) {
    *(undefined2 *)((longlong)puVar5 + 10) = 2;
    *(undefined ***)puVar5 = &PTR_LAB_145af5660;
    *(undefined ***)(puVar5 + 6) = &PTR_prepareData_145af57e0;
    puVar6 = puVar5;
  }
  *param_1 = *param_1 + 0x70;
  if (*(longlong *)(puVar6 + 0x1a) != 0) {
    uVar4 = *(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_2 + 8) = uVar4 + 0x90;
    *(ulonglong *)(puVar6 + 0x1a) = uVar4;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar2 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar2;
  puVar5 = (uint *)0x0;
  if (uVar1 != 0) {
    puVar5 = puVar2;
  }
  *(uint **)(puVar6 + 8) = puVar5;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  uVar3 = resolveConstraintPtr
                    (param_2,*(undefined8 *)(puVar6 + 0x18),puVar6 + 6,
                     &PTR_RevoluteJointSolverPrep_1467c9cb0);
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  return puVar6;
}



// FUNCTION 14329ac30 getAngle body=225 status=ok
// SIG undefined getAngle(void)

float physx::Ext::RevoluteJoint::getAngle(longlong *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  
  pfVar2 = (float *)(**(code **)(*param_1 + 0x48))(param_1,&local_48);
  fVar1 = *pfVar2;
  fStack_3c = pfVar2[3];
  if (fVar1 == 0.0) {
    local_48 = 0;
    fStack_40 = 0.0;
    fStack_3c = 1.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fStack_3c * fStack_3c + fVar1 * fVar1);
    fStack_3c = fStack_3c * fVar3;
    fStack_40 = fVar3 * 0.0;
    local_48 = CONCAT44(fStack_40,fVar3 * fVar1);
  }
  fVar3 = fStack_3c;
  if (fStack_3c <= -1.0) {
    fVar3 = -1.0;
  }
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  fVar3 = ::_guard_xfg_dispatch_icall_nop(fVar3);
  fVar3 = fVar3 * 2.0;
  if (fVar1 < 0.0) {
    fVar3 = 6.2831855 - fVar3;
  }
  if (3.1415927 < fVar3) {
    fVar3 = fVar3 + -6.2831855;
  }
  return fVar3;
}



// FUNCTION 14329ad20 getVelocity body=24 status=ok
// SIG undefined getVelocity(void)

undefined4 physx::Ext::RevoluteJoint::getVelocity(longlong *param_1)

{
  undefined4 *puVar1;
  undefined1 local_18 [24];
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x58))(param_1,local_18);
  return *puVar1;
}



// FUNCTION 14329af30 prepareData body=112 status=ok
// SIG undefined prepareData(void)

undefined8 physx::Ext::RevoluteJoint::prepareData(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  fVar2 = ::_guard_xfg_dispatch_icall_nop(*(float *)(lVar1 + 0x70) * 0.25);
  *(float *)(lVar1 + 0x78) = fVar2;
  lVar1 = *(longlong *)(param_1 + 0x50);
  fVar2 = ::_guard_xfg_dispatch_icall_nop(*(float *)(lVar1 + 0x74) * 0.25);
  *(float *)(lVar1 + 0x7c) = fVar2;
  lVar1 = *(longlong *)(param_1 + 0x50);
  fVar2 = ::_guard_xfg_dispatch_icall_nop(*(float *)(lVar1 + 0x6c) * 0.25);
  *(float *)(lVar1 + 0x80) = fVar2;
  return *(undefined8 *)(param_1 + 0x50);
}



// FUNCTION 14329afb0 attach body=94 status=ok
// SIG undefined attach(void)

bool physx::Ext::RevoluteJoint::attach
               (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  lVar1 = (**(code **)(*param_2 + 0xf0))
                    (param_2,param_3,param_4,lVar1,&PTR_RevoluteJointSolverPrep_1467c9cb0,0x90);
  *(longlong *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}



// FUNCTION 14329b030 RevoluteJointProject body=3029 status=ok
// SIG undefined RevoluteJointProject(void)

void `anonymous_namespace'::RevoluteJointProject
               (longlong param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res8 [2];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
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
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  
  physx::Ext::joint::computeDerived(param_1,param_2,param_3,&local_e8,&local_128,&local_108);
  local_130 = *(float *)(param_1 + 0x84);
  fVar8 = local_f4 * local_f4 + local_f8 * local_f8 + local_f0 * local_f0;
  bVar1 = local_130 * local_130 < fVar8;
  if (bVar1) {
    fVar8 = 1.0 / SQRT(fVar8);
    local_138 = fVar8 * local_f8 * local_130;
    local_134 = fVar8 * local_f4 * local_130;
    local_130 = fVar8 * local_f0 * local_130;
  }
  else {
    local_138 = local_f8;
    local_134 = local_f4;
    local_130 = local_f0;
  }
  local_150 = local_130;
  local_158 = local_138;
  local_154 = local_134;
  if (local_108 == 0.0) {
    local_178 = 0.0;
    fStack_174 = 0.0;
    fStack_16c = 1.0;
  }
  else {
    fStack_16c = 1.0 / SQRT(local_fc * local_fc + local_108 * local_108);
    local_178 = local_108 * fStack_16c;
    fStack_174 = fStack_16c * 0.0;
    fStack_16c = local_fc * fStack_16c;
  }
  fVar11 = fStack_16c;
  fVar10 = fStack_174;
  fVar9 = local_178;
  fVar8 = -local_178;
  fVar14 = -fStack_174;
  fVar15 = -fStack_174;
  _local_178 = CONCAT44((fVar14 * local_fc + local_104 * fStack_16c + fVar8 * local_100) -
                        fVar15 * local_108,
                        (fVar8 * local_fc + fStack_16c * local_108 + fVar15 * local_104) -
                        fVar14 * local_100);
  fVar13 = *(float *)(param_1 + 0x88) * 0.5;
  _fStack_170 = CONCAT44(((fStack_16c * local_fc - fVar8 * local_108) - fVar14 * local_104) -
                         fVar15 * local_100,
                         (fVar15 * local_fc + local_100 * fStack_16c + fVar14 * local_108) -
                         fVar8 * local_104);
  fVar8 = ::_guard_xfg_dispatch_icall_nop(fVar13);
  fVar13 = ::_guard_xfg_dispatch_icall_nop(fVar13);
  pfVar5 = (float *)physx::Ext::joint::truncateAngular
                              (&local_108,&local_178,fVar13,fVar8,local_res8);
  fVar8 = *pfVar5;
  fVar13 = pfVar5[1];
  fVar14 = pfVar5[2];
  fVar15 = pfVar5[3];
  if ((bVar1) || (local_res8[0]._0_1_ != '\0')) {
    local_148 = (fVar8 * fVar11 + fVar15 * fVar9 + fVar13 * fVar10) - fVar14 * fVar10;
    local_144 = (fVar13 * fVar11 + fVar15 * fVar10 + fVar14 * fVar9) - fVar8 * fVar10;
    local_168 = CONCAT44(local_144,local_148);
    local_140 = (fVar14 * fVar11 + fVar15 * fVar10 + fVar8 * fVar10) - fVar13 * fVar9;
    local_13c = ((fVar15 * fVar11 - fVar8 * fVar9) - fVar13 * fVar10) - fVar14 * fVar10;
    uStack_160 = CONCAT44(local_13c,local_140);
    if (param_4 == '\0') {
      fVar8 = *(float *)(param_1 + 0x10);
      fVar13 = *(float *)(param_1 + 0x14);
      fVar14 = *(float *)(param_1 + 0x1c);
      fVar15 = *(float *)(param_1 + 0x18);
      fVar11 = -*(float *)(param_1 + 0x20) * 2.0;
      fVar12 = -*(float *)(param_1 + 0x24) * 2.0;
      fVar10 = -*(float *)(param_1 + 0x28) * 2.0;
      local_res8[0] = fVar14 * fVar14 - 0.5;
      fVar9 = fVar12 * fVar13 + fVar11 * fVar8 + fVar10 * fVar15;
      local_168 = *(ulonglong *)(param_1 + 0x10) ^ 0x8000000080000000;
      uStack_160 = *(ulonglong *)(param_1 + 0x18) ^ 0x80000000;
      local_158 = (local_res8[0] * fVar11 - (fVar10 * fVar13 - fVar12 * fVar15) * fVar14) +
                  fVar9 * fVar8;
      local_154 = (local_res8[0] * fVar12 - (fVar11 * fVar15 - fVar10 * fVar8) * fVar14) +
                  fVar9 * fVar13;
      fVar16 = -local_148;
      fVar17 = -local_144;
      fVar18 = -local_140;
      _local_178 = CONCAT44(fVar17,fVar16);
      local_150 = (local_res8[0] * fVar10 - (fVar12 * fVar8 - fVar11 * fVar13) * fVar14) +
                  fVar9 * fVar15;
      _fStack_170 = CONCAT44(local_13c,fVar18);
      fVar14 = (local_150 - local_130) * 2.0;
      fVar10 = (local_158 - local_138) * 2.0;
      fVar13 = local_13c * local_13c - 0.5;
      fVar15 = (local_154 - local_134) * 2.0;
      fVar8 = fVar17 * fVar15 + fVar16 * fVar10 + fVar18 * fVar14;
      fVar11 = (fVar17 * fVar14 - fVar18 * fVar15) * local_13c + fVar13 * fVar10 + fVar16 * fVar8;
      fVar9 = (fVar18 * fVar10 - fVar16 * fVar14) * local_13c + fVar13 * fVar15 + fVar17 * fVar8;
      fVar17 = (fVar16 * fVar15 - fVar17 * fVar10) * local_13c + fVar13 * fVar14 + fVar18 * fVar8;
      puVar6 = (undefined8 *)physx::PxQuat::operator*(&local_178,&local_108,&local_168);
      local_168 = *puVar6;
      uStack_160 = puVar6[1];
      fVar12 = fVar11 + fVar11;
      fVar10 = fVar9 + fVar9;
      fVar18 = fVar17 + fVar17;
      fVar14 = local_11c * local_11c - 0.5;
      fVar8 = local_124 * fVar10 + local_128 * fVar12 + local_120 * fVar18;
      fVar13 = local_118 +
               (local_124 * fVar18 - local_120 * fVar10) * local_11c + fVar14 * fVar12 +
               local_128 * fVar8;
      fVar15 = (local_128 * fVar10 - local_124 * fVar12) * local_11c + fVar14 * fVar18 +
               local_120 * fVar8 + local_110;
      fVar8 = (local_120 * fVar12 - local_128 * fVar18) * local_11c + fVar14 * fVar10 +
              local_124 * fVar8 + local_114;
      local_158 = fVar11;
      local_154 = fVar9;
      local_150 = fVar17;
      puVar7 = (undefined4 *)physx::PxQuat::operator*(&local_128,&local_178,&local_168);
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *param_2 = *puVar7;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      param_2[4] = fVar13;
      param_2[5] = fVar8;
      param_2[6] = fVar15;
    }
    else {
      fVar8 = *(float *)(param_1 + 0x30);
      local_11c = *(float *)(param_1 + 0x38);
      fVar13 = *(float *)(param_1 + 0x2c);
      fVar14 = *(float *)(param_1 + 0x34);
      local_124 = -fVar8;
      local_128 = -fVar13;
      local_120 = -fVar14;
      fVar9 = -*(float *)(param_1 + 0x44) * 2.0;
      fVar18 = local_11c * local_11c - 0.5;
      fVar12 = -*(float *)(param_1 + 0x3c) * 2.0;
      fVar11 = -*(float *)(param_1 + 0x40) * 2.0;
      fVar15 = fVar8 * fVar11 + fVar13 * fVar12 + fVar14 * fVar9;
      local_118 = (fVar18 * fVar12 - (fVar8 * fVar9 - fVar14 * fVar11) * local_11c) +
                  fVar13 * fVar15;
      fVar17 = local_118 + local_118;
      fVar10 = local_13c * local_13c - 0.5;
      local_114 = (fVar18 * fVar11 - (fVar14 * fVar12 - fVar13 * fVar9) * local_11c) +
                  fVar8 * fVar15;
      local_110 = (fVar18 * fVar9 - (fVar13 * fVar11 - fVar8 * fVar12) * local_11c) +
                  fVar14 * fVar15;
      fVar13 = local_114 + local_114;
      fVar15 = local_110 + local_110;
      fVar8 = local_144 * fVar13 + local_148 * fVar17 + local_140 * fVar15;
      fVar9 = (local_144 * fVar15 - local_140 * fVar13) * local_13c + fVar10 * fVar17 +
              local_148 * fVar8 + local_138;
      fVar14 = (local_140 * fVar17 - local_148 * fVar15) * local_13c + fVar10 * fVar13 +
               local_144 * fVar8 + local_134;
      fVar11 = (local_148 * fVar13 - local_144 * fVar17) * local_13c + fVar10 * fVar15 +
               local_140 * fVar8 + local_130;
      puVar6 = (undefined8 *)physx::PxQuat::operator*(&local_168,&local_108,&local_128);
      local_168 = *puVar6;
      uStack_160 = puVar6[1];
      fVar10 = fVar9 + fVar9;
      fVar13 = local_dc * local_dc - 0.5;
      fVar15 = fVar14 + fVar14;
      fVar12 = fVar11 + fVar11;
      fVar8 = local_e4 * fVar15 + local_e8 * fVar10 + local_e0 * fVar12;
      local_158 = fVar9;
      local_154 = fVar14;
      local_150 = fVar11;
      puVar7 = (undefined4 *)physx::PxQuat::operator*(&local_e8,&local_178,&local_168);
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *param_3 = *puVar7;
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar4;
      param_3[4] = local_d8 +
                   (local_e4 * fVar12 - local_e0 * fVar15) * local_dc + fVar13 * fVar10 +
                   local_e8 * fVar8;
      param_3[5] = local_d4 +
                   (local_e0 * fVar10 - local_e8 * fVar12) * local_dc + fVar13 * fVar15 +
                   local_e4 * fVar8;
      param_3[6] = local_d0 +
                   (local_e8 * fVar15 - local_e4 * fVar10) * local_dc + fVar13 * fVar12 +
                   local_e0 * fVar8;
      param_2 = param_3;
    }
    physx::PxQuat::normalize(param_2);
  }
  return;
}



// FUNCTION 14329bc10 RevoluteJointVisualize body=854 status=ok
// SIG undefined RevoluteJointVisualize(void)

void `anonymous_namespace'::RevoluteJointVisualize
               (longlong *param_1,longlong param_2,float *param_3,float *param_4)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 *puVar15;
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
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  
  fVar18 = *(float *)(param_2 + 0x24) + *(float *)(param_2 + 0x24);
  fVar22 = *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x28);
  fVar24 = *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x20);
  fVar1 = param_3[3];
  fVar2 = param_3[1];
  fVar3 = *param_3;
  fVar4 = param_3[2];
  fVar20 = fVar1 * fVar1 - 0.5;
  fVar16 = fVar3 * fVar24 + fVar2 * fVar18 + fVar4 * fVar22;
  fVar5 = param_3[4];
  fVar6 = param_3[6];
  fVar7 = param_3[5];
  puVar15 = (undefined4 *)physx::PxQuat::operator*(param_3,local_c8,param_2 + 0x10);
  local_b8 = *puVar15;
  local_b4 = puVar15[1];
  local_b0 = puVar15[2];
  local_ac = puVar15[3];
  fVar8 = param_4[3];
  fVar9 = param_4[1];
  fVar10 = param_4[2];
  fVar25 = *(float *)(param_2 + 0x3c) + *(float *)(param_2 + 0x3c);
  fVar19 = *(float *)(param_2 + 0x40) + *(float *)(param_2 + 0x40);
  fVar23 = *(float *)(param_2 + 0x44) + *(float *)(param_2 + 0x44);
  fVar11 = *param_4;
  fVar21 = fVar8 * fVar8 - 0.5;
  fVar17 = fVar11 * fVar25 + fVar9 * fVar19 + fVar10 * fVar23;
  fVar12 = param_4[4];
  fVar13 = param_4[6];
  fVar14 = param_4[5];
  local_a8 = (fVar2 * fVar22 - fVar4 * fVar18) * fVar1 + fVar20 * fVar24 + fVar3 * fVar16 + fVar5;
  local_a4 = (fVar4 * fVar24 - fVar3 * fVar22) * fVar1 + fVar20 * fVar18 + fVar2 * fVar16 + fVar7;
  local_a0 = (fVar3 * fVar18 - fVar2 * fVar24) * fVar1 + fVar20 * fVar22 + fVar4 * fVar16 + fVar6;
  puVar15 = (undefined4 *)physx::PxQuat::operator*(param_4,local_c8);
  local_98 = *puVar15;
  local_94 = puVar15[1];
  local_90 = puVar15[2];
  local_8c = puVar15[3];
  local_88 = (fVar9 * fVar23 - fVar10 * fVar19) * fVar8 + fVar21 * fVar25 + fVar11 * fVar17 + fVar12
  ;
  local_84 = (fVar10 * fVar25 - fVar11 * fVar23) * fVar8 + fVar21 * fVar19 + fVar9 * fVar17 + fVar14
  ;
  local_80 = (fVar11 * fVar19 - fVar9 * fVar25) * fVar8 + fVar21 * fVar23 + fVar10 * fVar17 + fVar13
  ;
  (**(code **)(*param_1 + 8))(param_1,&local_b8,&local_98);
  if ((*(byte *)(param_2 + 0x8c) & 1) != 0) {
    (**(code **)(*param_1 + 0x18))
              (param_1,&local_b8,*(undefined4 *)(param_2 + 0x74),*(undefined4 *)(param_2 + 0x70),0);
  }
  return;
}



// FUNCTION 14329bf70 RevoluteJoint body=321 status=ok
// SIG undefined RevoluteJoint(void)

undefined8 *
physx::Ext::RevoluteJoint::RevoluteJoint
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  PxAllocatorCallback *pPVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  *(undefined4 *)(param_1 + 1) = 0x30101;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_145af5660;
  param_1[0xc] = 0;
  param_1[3] = &PTR_prepareData_145af57e0;
  param_1[2] = 0;
  pPVar1 = physx::shdfnd::getAllocator();
  lVar2 = (**(code **)(*(longlong *)pPVar1 + 8))
                    (pPVar1,0x90,"NonTrackedAlloc",
                     "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\ExtRevoluteJoint.h"
                     ,CONCAT44(uVar3,0x6b));
  param_1[0xd] = lVar2;
  Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::initCommonData
            (param_1,lVar2,param_3,param_4,param_5,param_6);
  *(undefined4 *)(lVar2 + 0x50) = 0;
  *(undefined4 *)(lVar2 + 0x84) = 0x501502f9;
  *(undefined4 *)(lVar2 + 0x88) = 0x40490fdb;
  *(undefined8 *)(lVar2 + 0x5c) = 0x3f00000000000000;
  *(undefined8 *)(lVar2 + 100) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0x7f7fffff;
  *(undefined4 *)(lVar2 + 0x58) = 0x3f800000;
  *(undefined8 *)(lVar2 + 0x6c) = 0x3fc90fdb3dcccccd;
  *(undefined4 *)(lVar2 + 0x74) = 0xbfc90fdb;
  *(undefined2 *)(lVar2 + 0x8c) = 0;
  return param_1;
}



// FUNCTION 14329c0c0 ~D6Joint body=101 status=ok
// SIG undefined ~D6Joint(void)

void physx::Ext::D6Joint::~D6Joint(undefined8 *param_1)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  *param_1 = &PTR_LAB_145af5660;
  param_1[3] = &PTR_prepareData_145af57e0;
  if (((*(byte *)((longlong)param_1 + 10) & 1) != 0) && (lVar1 = param_1[0xd], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  param_1[3] = &PTR__purecall_145af1588;
  *param_1 = &PTR__purecall_145af1560;
  return;
}



// FUNCTION 14329c140 FUN_14329c140 body=97 status=ok
// SIG undefined FUN_14329c140(void)

longlong FUN_14329c140(longlong param_1,ulonglong param_2)

{
  PxAllocatorCallback *pPVar1;
  
  physx::Ext::D6Joint::~D6Joint();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pPVar1 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 14329c1c0 isKindOf body=115 status=ok
// SIG undefined isKindOf(void)

undefined8 physx::PxRevoluteJoint::isKindOf(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar2;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop("PxRevoluteJoint",param_2);
  uVar2 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    lVar4 = 0;
    do {
      uVar2 = 0;
      lVar3 = lVar4 + 1;
      if ((&DAT_145af15d8)[lVar4] != param_2[lVar4]) {
        lVar4 = 0;
        do {
          lVar3 = lVar4 + 1;
          if (param_2[lVar4] != (&DAT_145af1548)[lVar4]) {
            return 0;
          }
          lVar4 = lVar3;
        } while (lVar3 != 7);
        return 1;
      }
      lVar4 = lVar3;
    } while (lVar3 != 8);
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// FUNCTION 14329c240 PxSphericalJointCreate body=291 status=ok
// SIG undefined PxSphericalJointCreate(void)

longlong *
physx::PxSphericalJointCreate
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  pPVar2 = physx::shdfnd::getAllocator();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    pcVar4 = "<allocation names disabled>";
  }
  else {
    pcVar4 = (char *)__std_type_info_name(0x14683aa20,&DAT_146bcc1d0);
  }
  lVar5 = (**(code **)(*(longlong *)pPVar2 + 8))
                    (pPVar2,0x70,pcVar4,
                     "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXExtensions\\src\\ExtSphericalJoint.cpp"
                     ,CONCAT44(uVar8,0x3b));
  plVar3 = (longlong *)0x0;
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
    plVar3 = (longlong *)
             Ext::SphericalJoint::SphericalJoint(lVar5,uVar6,param_2,param_3,param_4,param_5);
    uVar9 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  plVar7 = plVar3 + 3;
  if (plVar3 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  lVar5 = (**(code **)(*param_1 + 0xf0))
                    (param_1,param_2,param_4,plVar7,&PTR_SphericalJointSolverPrep_1467c9cd0,
                     CONCAT44(uVar9,0x80));
  plVar3[0xc] = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 14329c370 FUN_14329c370 body=80 status=ok
// SIG undefined FUN_14329c370(void)

void FUN_14329c370(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x68),0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x00014329c3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 14329c420 FUN_14329c420 body=45 status=ok
// SIG undefined FUN_14329c420(void)

void FUN_14329c420(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = physx::resolveConstraintPtr
                    (param_2,*(undefined8 *)(param_1 + 0x60),param_1 + 0x18,
                     &PTR_SphericalJointSolverPrep_1467c9cd0);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}



// FUNCTION 14329c460 FUN_14329c460 body=155 status=ok
// SIG undefined FUN_14329c460(void)

uint * FUN_14329c460(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)*param_1;
  puVar6 = (uint *)0x0;
  if (puVar5 != (uint *)0x0) {
    *(undefined2 *)((longlong)puVar5 + 10) = 2;
    *(undefined ***)puVar5 = &PTR_LAB_145af5930;
    *(undefined ***)(puVar5 + 6) = &PTR_prepareData_145af5a60;
    puVar6 = puVar5;
  }
  *param_1 = *param_1 + 0x70;
  if (*(longlong *)(puVar6 + 0x1a) != 0) {
    uVar4 = *(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_2 + 8) = uVar4 + 0x80;
    *(ulonglong *)(puVar6 + 0x1a) = uVar4;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar2 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar2;
  puVar5 = (uint *)0x0;
  if (uVar1 != 0) {
    puVar5 = puVar2;
  }
  *(uint **)(puVar6 + 8) = puVar5;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  uVar3 = physx::resolveConstraintPtr
                    (param_2,*(undefined8 *)(puVar6 + 0x18),puVar6 + 6,
                     &PTR_SphericalJointSolverPrep_1467c9cd0);
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  return puVar6;
}



// FUNCTION 14329c610 prepareData body=121 status=ok
// SIG undefined prepareData(void)

longlong physx::Ext::SphericalJoint::prepareData(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((*(byte *)(lVar1 + 0x7c) & 2) != 0) {
    fVar2 = ::_guard_xfg_dispatch_icall_nop(*(float *)(lVar1 + 100) * 0.25);
    *(float *)(lVar1 + 0x6c) = fVar2;
    fVar2 = ::_guard_xfg_dispatch_icall_nop(*(float *)(lVar1 + 0x68) * 0.25);
    *(float *)(lVar1 + 0x70) = fVar2;
    fVar2 = ::_guard_xfg_dispatch_icall_nop(*(float *)(lVar1 + 0x60) * 0.25);
    *(float *)(lVar1 + 0x74) = fVar2;
    return *(longlong *)(param_1 + 0x50);
  }
  return lVar1;
}



// FUNCTION 14329c690 FUN_14329c690 body=94 status=ok
// SIG undefined FUN_14329c690(void)

bool FUN_14329c690(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  lVar1 = (**(code **)(*param_2 + 0xf0))
                    (param_2,param_3,param_4,lVar1,&PTR_SphericalJointSolverPrep_1467c9cd0,0x80);
  *(longlong *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}



// FUNCTION 14329c710 SphericalJointVisualize body=1502 status=ok
// SIG undefined SphericalJointVisualize(void)

void `anonymous_namespace'::SphericalJointVisualize
               (longlong *param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  
  fVar17 = *(float *)(param_2 + 0x24) + *(float *)(param_2 + 0x24);
  fVar22 = *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x28);
  fVar24 = *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x20);
  fVar13 = param_3[3];
  fVar15 = param_3[1];
  fVar1 = *param_3;
  fVar2 = param_3[2];
  fVar20 = fVar13 * fVar13 - 0.5;
  fVar10 = fVar1 * fVar24 + fVar15 * fVar17 + fVar2 * fVar22;
  fVar3 = param_3[4];
  fVar9 = param_3[6];
  fVar12 = param_3[5];
  pfVar8 = (float *)physx::PxQuat::operator*(param_3,&local_e8,param_2 + 0x10);
  local_a8 = *pfVar8;
  local_a4 = pfVar8[1];
  local_a0 = pfVar8[2];
  local_9c = pfVar8[3];
  fVar14 = param_4[3];
  fVar16 = param_4[1];
  fVar19 = param_4[2];
  fVar25 = *(float *)(param_2 + 0x3c) + *(float *)(param_2 + 0x3c);
  fVar18 = *(float *)(param_2 + 0x40) + *(float *)(param_2 + 0x40);
  fVar23 = *(float *)(param_2 + 0x44) + *(float *)(param_2 + 0x44);
  fVar4 = *param_4;
  fVar21 = fVar14 * fVar14 - 0.5;
  fVar11 = fVar4 * fVar25 + fVar16 * fVar18 + fVar19 * fVar23;
  fVar5 = param_4[4];
  fVar6 = param_4[6];
  fVar7 = param_4[5];
  local_98 = (fVar15 * fVar22 - fVar2 * fVar17) * fVar13 + fVar20 * fVar24 + fVar1 * fVar10 + fVar3;
  local_94 = (fVar2 * fVar24 - fVar1 * fVar22) * fVar13 + fVar20 * fVar17 + fVar15 * fVar10 + fVar12
  ;
  local_90 = (fVar1 * fVar17 - fVar15 * fVar24) * fVar13 + fVar20 * fVar22 + fVar2 * fVar10 + fVar9;
  pfVar8 = (float *)physx::PxQuat::operator*(param_4,&local_e8);
  local_c8 = *pfVar8;
  local_c4 = pfVar8[1];
  local_c0 = pfVar8[2];
  local_bc = pfVar8[3];
  local_b8 = (fVar16 * fVar23 - fVar19 * fVar18) * fVar14 + fVar21 * fVar25 + fVar4 * fVar11 + fVar5
  ;
  local_b4 = (fVar19 * fVar25 - fVar4 * fVar23) * fVar14 + fVar21 * fVar18 + fVar16 * fVar11 + fVar7
  ;
  local_b0 = (fVar4 * fVar18 - fVar16 * fVar25) * fVar14 + fVar21 * fVar23 + fVar19 * fVar11 + fVar6
  ;
  (**(code **)(*param_1 + 8))(param_1,&local_a8,&local_c8);
  if ((*(byte *)(param_2 + 0x7c) & 2) != 0) {
    if (local_a8 * local_c8 + local_a4 * local_c4 + local_a0 * local_c0 + local_9c * local_bc < 0.0)
    {
      local_c8 = -local_c8;
      local_c4 = -local_c4;
      local_c0 = -local_c0;
      local_bc = -local_bc;
    }
    local_e8 = CONCAT44(local_a4,local_a8) ^ 0x8000000080000000;
    uStack_e0 = CONCAT44(local_9c,local_a0) ^ 0x80000000;
    pfVar8 = (float *)physx::PxQuat::operator*(&local_e8,local_d8,&local_c8);
    fVar13 = *pfVar8;
    fVar15 = pfVar8[1];
    fVar1 = pfVar8[2];
    fVar2 = pfVar8[3];
    if (fVar13 == 0.0) {
      local_e8._0_4_ = 0.0;
      local_e8._4_4_ = 0.0;
      uStack_e0._4_4_ = 1.0;
    }
    else {
      uStack_e0._4_4_ = 1.0 / SQRT(fVar2 * fVar2 + fVar13 * fVar13);
      local_e8._0_4_ = fVar13 * uStack_e0._4_4_;
      local_e8._4_4_ = uStack_e0._4_4_ * 0.0;
      uStack_e0._4_4_ = fVar2 * uStack_e0._4_4_;
    }
    fVar9 = -(float)local_e8;
    fVar12 = -local_e8._4_4_;
    fVar14 = -local_e8._4_4_;
    fVar3 = *(float *)(param_2 + 0x74);
    fVar16 = (((uStack_e0._4_4_ * fVar2 - fVar13 * fVar9) - fVar15 * fVar12) - fVar1 * fVar14) + 1.0
    ;
    fVar19 = ABS(((fVar2 * fVar14 + fVar1 * uStack_e0._4_4_ + fVar13 * fVar12) - fVar15 * fVar9) /
                 fVar16);
    fVar13 = ABS((-1.0 / fVar16) *
                 ((fVar2 * fVar12 + fVar15 * uStack_e0._4_4_ + fVar1 * fVar9) - fVar13 * fVar14));
    fVar15 = ((fVar3 + fVar19) / (1.0 - fVar3 * fVar19)) / *(float *)(param_2 + 0x70);
    fVar13 = ((fVar3 + fVar13) / (1.0 - fVar3 * fVar13)) / *(float *)(param_2 + 0x6c);
    uStack_e0._0_4_ = local_e8._4_4_;
    (**(code **)(*param_1 + 0x20))
              (param_1,&local_a8,*(float *)(param_2 + 0x70),*(float *)(param_2 + 0x6c),
               1.0 < fVar13 * fVar13 + fVar15 * fVar15);
  }
  return;
}



// FUNCTION 14329cd00 SphericalJointProject body=2416 status=ok
// SIG undefined SphericalJointProject(void)

void `anonymous_namespace'::SphericalJointProject
               (longlong param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong local_168;
  ulonglong uStack_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  
  physx::Ext::joint::computeDerived(param_1,param_2,param_3,&local_e0,&local_118,&local_138);
  local_140 = *(float *)(param_1 + 0x78);
  fVar7 = local_128 * local_128 + local_124 * local_124 + local_120 * local_120;
  bVar1 = fVar7 <= local_140 * local_140;
  if (bVar1) {
    local_148 = local_128;
    local_144 = local_124;
    local_140 = local_120;
  }
  else {
    fVar7 = 1.0 / SQRT(fVar7);
    local_148 = fVar7 * local_128 * local_140;
    local_144 = fVar7 * local_124 * local_140;
    local_140 = fVar7 * local_120 * local_140;
  }
  local_158 = local_148;
  local_154 = local_144;
  local_150 = local_140;
  if (!bVar1) {
    if (param_4 == '\0') {
      fVar7 = *(float *)(param_1 + 0x14);
      fVar10 = *(float *)(param_1 + 0x1c);
      fVar16 = *(float *)(param_1 + 0x10);
      fVar8 = *(float *)(param_1 + 0x18);
      fVar13 = -*(float *)(param_1 + 0x20) * 2.0;
      fVar12 = -*(float *)(param_1 + 0x24) * 2.0;
      fVar14 = fVar10 * fVar10 - 0.5;
      fVar11 = -*(float *)(param_1 + 0x28) * 2.0;
      fVar9 = fVar7 * fVar12 + fVar16 * fVar13 + fVar8 * fVar11;
      local_f0 = -local_138;
      local_168 = *(ulonglong *)(param_1 + 0x10) ^ 0x8000000080000000;
      uStack_160 = *(ulonglong *)(param_1 + 0x18) ^ 0x80000000;
      local_158 = (fVar14 * fVar13 - (fVar7 * fVar11 - fVar8 * fVar12) * fVar10) + fVar16 * fVar9;
      local_ec = -fStack_134;
      local_154 = (fVar14 * fVar12 - (fVar8 * fVar13 - fVar16 * fVar11) * fVar10) + fVar7 * fVar9;
      local_150 = (fVar14 * fVar11 - (fVar16 * fVar12 - fVar7 * fVar13) * fVar10) + fVar8 * fVar9;
      local_e4 = fStack_12c;
      local_e8 = -fStack_130;
      fVar16 = (local_158 - local_148) * 2.0;
      fVar8 = (local_150 - local_140) * 2.0;
      fVar10 = fStack_12c * fStack_12c - 0.5;
      fVar11 = (local_154 - local_144) * 2.0;
      fVar7 = local_ec * fVar11 + local_f0 * fVar16 + local_e8 * fVar8;
      fVar9 = (local_ec * fVar8 - local_e8 * fVar11) * fStack_12c + fVar10 * fVar16 +
              local_f0 * fVar7;
      fVar14 = (local_f0 * fVar11 - local_ec * fVar16) * fStack_12c + fVar10 * fVar8 +
               local_e8 * fVar7;
      fVar12 = (local_e8 * fVar16 - local_f0 * fVar8) * fStack_12c + fVar10 * fVar11 +
               local_ec * fVar7;
      local_f8 = local_158;
      puVar5 = (ulonglong *)physx::PxQuat::operator*(&local_f0,&local_148,&local_168);
      local_168 = *puVar5;
      uStack_160 = puVar5[1];
      fVar11 = fVar9 + fVar9;
      fVar13 = fVar12 + fVar12;
      fVar15 = fVar14 + fVar14;
      fVar8 = local_10c * local_10c - 0.5;
      fVar16 = fVar11 * local_118 + fVar13 * local_114 + fVar15 * local_110;
      fVar7 = local_108 +
              (fVar15 * local_114 - fVar13 * local_110) * local_10c + fVar8 * fVar11 +
              fVar16 * local_118;
      fVar10 = (fVar11 * local_110 - fVar15 * local_118) * local_10c + fVar8 * fVar13 +
               fVar16 * local_114 + local_104;
      fVar16 = (fVar13 * local_118 - fVar11 * local_114) * local_10c + fVar8 * fVar15 +
               fVar16 * local_110 + local_100;
      local_158 = fVar9;
      local_154 = fVar12;
      local_150 = fVar14;
      puVar6 = (undefined4 *)physx::PxQuat::operator*(&local_118,&local_f0,&local_168);
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *param_2 = *puVar6;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      param_2[4] = fVar7;
      param_2[5] = fVar10;
      param_2[6] = fVar16;
    }
    else {
      fVar7 = *(float *)(param_1 + 0x34);
      local_10c = *(float *)(param_1 + 0x38);
      fVar10 = *(float *)(param_1 + 0x2c);
      fVar16 = *(float *)(param_1 + 0x30);
      local_110 = -fVar7;
      local_118 = -fVar10;
      local_114 = -fVar16;
      fVar9 = -*(float *)(param_1 + 0x44) * 2.0;
      fVar15 = local_10c * local_10c - 0.5;
      fVar11 = -*(float *)(param_1 + 0x40) * 2.0;
      fVar12 = -*(float *)(param_1 + 0x3c) * 2.0;
      fVar8 = fVar16 * fVar11 + fVar10 * fVar12 + fVar7 * fVar9;
      local_108 = (fVar15 * fVar12 - (fVar16 * fVar9 - fVar7 * fVar11) * local_10c) + fVar10 * fVar8
      ;
      fVar14 = local_108 + local_108;
      local_104 = (fVar15 * fVar11 - (fVar7 * fVar12 - fVar10 * fVar9) * local_10c) + fVar16 * fVar8
      ;
      fVar13 = local_104 + local_104;
      local_100 = (fVar15 * fVar9 - (fVar10 * fVar11 - fVar16 * fVar12) * local_10c) + fVar7 * fVar8
      ;
      fVar16 = local_100 + local_100;
      fVar10 = fStack_12c * fStack_12c - 0.5;
      fVar7 = fStack_134 * fVar13 + local_138 * fVar14 + fStack_130 * fVar16;
      fVar9 = (fStack_134 * fVar16 - fStack_130 * fVar13) * fStack_12c + fVar10 * fVar14 +
              local_138 * fVar7 + local_148;
      fVar12 = (local_138 * fVar13 - fStack_134 * fVar14) * fStack_12c + fVar10 * fVar16 +
               fStack_130 * fVar7 + local_140;
      fVar16 = (fStack_130 * fVar14 - local_138 * fVar16) * fStack_12c + fVar10 * fVar13 +
               fStack_134 * fVar7 + local_144;
      puVar5 = (ulonglong *)physx::PxQuat::operator*(&local_168,&local_f0,&local_118);
      local_168 = *puVar5;
      uStack_160 = puVar5[1];
      fVar11 = fVar9 + fVar9;
      fVar10 = local_d4 * local_d4 - 0.5;
      fVar8 = fVar16 + fVar16;
      fVar13 = fVar12 + fVar12;
      fVar7 = local_dc * fVar8 + local_e0 * fVar11 + local_d8 * fVar13;
      local_158 = fVar9;
      local_154 = fVar16;
      local_150 = fVar12;
      puVar6 = (undefined4 *)physx::PxQuat::operator*(&local_e0,&local_148,&local_168);
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *param_3 = *puVar6;
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar4;
      param_3[4] = local_d0 +
                   (local_dc * fVar13 - local_d8 * fVar8) * local_d4 + fVar10 * fVar11 +
                   local_e0 * fVar7;
      param_3[5] = local_cc +
                   (local_d8 * fVar11 - local_e0 * fVar13) * local_d4 + fVar10 * fVar8 +
                   local_dc * fVar7;
      param_3[6] = local_c8 +
                   (local_e0 * fVar8 - local_dc * fVar11) * local_d4 + fVar10 * fVar13 +
                   local_d8 * fVar7;
      param_2 = param_3;
    }
    physx::PxQuat::normalize(param_2);
  }
  return;
}



// FUNCTION 14329d670 SphericalJoint body=282 status=ok
// SIG undefined SphericalJoint(void)

undefined8 *
physx::Ext::SphericalJoint::SphericalJoint
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  PxAllocatorCallback *pPVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  *(undefined4 *)(param_1 + 1) = 0x30100;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_145af5930;
  param_1[0xc] = 0;
  param_1[3] = &PTR_prepareData_145af5a60;
  param_1[2] = 0;
  pPVar1 = physx::shdfnd::getAllocator();
  lVar2 = (**(code **)(*(longlong *)pPVar1 + 8))
                    (pPVar1,0x80,"NonTrackedAlloc",
                     "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\ExtSphericalJoint.h"
                     ,CONCAT44(uVar3,0x5f));
  param_1[0xd] = lVar2;
  Joint<physx::PxD6Joint,physx::PxD6JointGeneratedValues>::initCommonData
            (param_1,lVar2,param_3,param_4,param_5,param_6);
  *(undefined4 *)(lVar2 + 0x78) = 0x501502f9;
  *(undefined8 *)(lVar2 + 0x50) = 0x3f00000000000000;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0x3fc90fdb3dcccccd;
  *(undefined4 *)(lVar2 + 0x68) = 0x3fc90fdb;
  *(undefined2 *)(lVar2 + 0x7c) = 0;
  return param_1;
}



// FUNCTION 14329d790 ~D6Joint body=101 status=ok
// SIG undefined ~D6Joint(void)

void physx::Ext::D6Joint::~D6Joint(undefined8 *param_1)

{
  longlong lVar1;
  PxAllocatorCallback *pPVar2;
  
  *param_1 = &PTR_LAB_145af5930;
  param_1[3] = &PTR_prepareData_145af5a60;
  if (((*(byte *)((longlong)param_1 + 10) & 1) != 0) && (lVar1 = param_1[0xd], lVar1 != 0)) {
    pPVar2 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,lVar1);
  }
  param_1[3] = &PTR__purecall_145af1588;
  *param_1 = &PTR__purecall_145af1560;
  return;
}



// FUNCTION 14329d810 FUN_14329d810 body=97 status=ok
// SIG undefined FUN_14329d810(void)

longlong FUN_14329d810(longlong param_1,ulonglong param_2)

{
  PxAllocatorCallback *pPVar1;
  
  physx::Ext::D6Joint::~D6Joint();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pPVar1 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 14329d890 isKindOf body=115 status=ok
// SIG undefined isKindOf(void)

undefined8 physx::PxSphericalJoint::isKindOf(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar2;
  
  iVar1 = ::_guard_xfg_dispatch_icall_nop("PxSphericalJoint",param_2);
  uVar2 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    lVar4 = 0;
    do {
      uVar2 = 0;
      lVar3 = lVar4 + 1;
      if ((&DAT_145af15d8)[lVar4] != param_2[lVar4]) {
        lVar4 = 0;
        do {
          lVar3 = lVar4 + 1;
          if (param_2[lVar4] != (&DAT_145af1548)[lVar4]) {
            return 0;
          }
          lVar4 = lVar3;
        } while (lVar3 != 7);
        return 1;
      }
      lVar4 = lVar3;
    } while (lVar3 != 8);
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// FUNCTION 14329d970 fileToObject body=617 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxShapeRepXSerializer::fileToObject
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  char cVar2;
  PxAllocatorCallback *pPVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  char local_res18 [8];
  undefined8 local_res20;
  ulonglong in_stack_fffffffffffffef8;
  longlong local_f8;
  ulonglong local_f0;
  undefined8 *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98 [2];
  undefined8 **local_88;
  undefined8 **local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined1 local_40;
  char *local_38;
  
  local_res20 = (**(code **)(*param_4 + 0x18))(param_4);
  puVar1 = (undefined8 *)CONCAT71(param_5._1_7_,(undefined1)param_5);
  local_d0 = &local_res20;
  local_c8 = 0;
  local_78 = *(undefined4 *)puVar1;
  uStack_74 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_70 = *(undefined4 *)(puVar1 + 1);
  uStack_6c = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_e8 = &local_res20;
  local_c0 = 0;
  local_68 = puVar1[2];
  local_88 = &local_d0;
  local_80 = &local_e8;
  local_48 = param_6;
  local_38 = local_res18;
  local_e0 = 0;
  local_d8 = 0;
  local_res18[0] = '\0';
  local_58 = 0;
  local_40 = 1;
  local_f8 = 0;
  local_f0 = 0;
  local_98[0] = 0;
  local_60 = param_3;
  local_50 = param_4;
  Sn::parseShape<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>(&local_88,local_98,&local_f8)
  ;
  lVar6 = local_f8;
  if (local_res18[0] == '\0') {
    param_5._0_1_ = 0xb;
    uVar4 = (**(code **)(*(longlong *)*puVar1 + 0xd8))
                      ((longlong *)*puVar1,local_98[0],local_f8,local_f0 & 0xffff,
                       in_stack_fffffffffffffef8 & 0xffffffffffffff00,&param_5);
    plVar5 = (longlong *)(**(code **)(*param_4 + 0x18))(param_4);
    (**(code **)(*plVar5 + 0x10))(plVar5,local_98[0]);
    local_b8 = (char *)*puVar1;
    uStack_b0 = puVar1[1];
    local_a8 = puVar1[2];
    cVar2 = Sn::readAllProperties<physx::PxShape>(&local_b8,param_3,uVar4,param_4,param_6);
    if (cVar2 == '\0') {
      local_b8 = "";
      local_a8 = 0;
    }
    else {
      local_b8 = "PxShape";
      local_a8 = uVar4;
    }
    uStack_b0._0_4_ = (undefined4)local_a8;
    uStack_b0._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    *(undefined4 *)param_2 = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_2 + 4) = local_b8._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_b0._4_4_;
    param_2[2] = local_a8;
    uStack_b0 = local_a8;
    if ((((local_f0 & 0x7fffffff00000000) == 0) || ((longlong)local_f0 < 0)) || (local_f8 == 0))
    goto LAB_14329db72;
    pPVar3 = physx::shdfnd::getAllocator();
    lVar6 = local_f8;
  }
  else {
    param_2[1] = 0;
    *param_2 = &DAT_145af3922;
    param_2[2] = 0;
    if ((((local_f0 & 0x7fffffff00000000) == 0) || ((longlong)local_f0 < 0)) || (local_f8 == 0))
    goto LAB_14329db72;
    pPVar3 = physx::shdfnd::getAllocator();
  }
  (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar6);
LAB_14329db72:
  if ((((local_d8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_d8)) && (local_e0 != 0)) {
    (**(code **)(*(longlong *)*local_e8 + 0x10))();
  }
  if ((((local_c0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_c0)) && (local_c8 != 0)) {
    (**(code **)(*(longlong *)*local_d0 + 0x10))();
  }
  return param_2;
}



// FUNCTION 14329dbe0 FUN_14329dbe0 body=1656 status=ok
// SIG undefined FUN_14329dbe0(void)

void FUN_14329dbe0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined *puVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  byte local_1c8 [4];
  uint local_1c4;
  undefined8 local_1c0;
  undefined **ppuStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong lStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_188;
  uint uStack_184;
  longlong lStack_180;
  uint local_178;
  uint uStack_174;
  undefined4 local_170;
  uint uStack_16c;
  longlong lStack_168;
  uint local_160;
  undefined4 uStack_15c;
  undefined2 local_158;
  undefined4 local_150;
  undefined2 *local_148;
  longlong local_138;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  char local_b8 [128];
  
  sVar4 = (**(code **)(*param_2 + 0x68))(param_2,0);
  uVar6 = (**(code **)(*param_2 + 0x28))(param_2);
  local_1c4 = uVar6;
  lVar7 = (**(code **)(*param_2 + 0x30))(param_2);
  uVar13 = 0;
  local_138 = lVar7;
  if ((uVar6 != 0) && (lVar7 != 0)) {
    if (uVar6 != 0) {
      do {
        if ((uVar13 == 0) || ((uVar13 & 1) != 0)) {
          uVar16 = 1;
          puVar11 = &DAT_145af3920;
        }
        else {
          uVar16 = 4;
          puVar11 = &DAT_145af6094;
        }
        (**(code **)*param_5)(param_5,puVar11,uVar16);
        physx::operator<<(param_5,lVar7);
        uVar13 = uVar13 + 1;
        lVar7 = lVar7 + 0xc;
      } while (uVar13 < uVar6);
    }
    local_1c8[0] = 0;
    (**(code **)*param_5)(param_5,local_1c8,1);
    (**(code **)(*param_4 + 0x10))(param_4,"Points",param_5[4]);
    param_5[3] = 0;
  }
  pbVar8 = (byte *)(**(code **)(*param_2 + 0x58))(param_2,local_1c8);
  bVar12 = *pbVar8 >> 1 & 1;
  local_1c8[0] = bVar12;
  uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  lVar7 = (**(code **)(*param_2 + 0x50))(param_2);
  if (bVar12 == 0) {
    if ((uVar6 == 0) || (lVar7 == 0)) goto LAB_14329dee8;
    uVar13 = 0;
    if (uVar6 != 0) {
      puVar17 = (undefined4 *)(lVar7 + 8);
      do {
        if ((uVar13 == 0) || ((uVar13 & 1) != 0)) {
          uVar16 = 1;
          puVar11 = &DAT_145af3920;
        }
        else {
          uVar16 = 4;
          puVar11 = &DAT_145af6094;
        }
        (**(code **)*param_5)(param_5,puVar11,uVar16);
        puVar9 = (undefined8 *)physx::operator<<(param_5,puVar17[-2]);
        (**(code **)*puVar9)(puVar9,&DAT_145af3920,1);
        puVar9 = (undefined8 *)physx::operator<<(puVar9,puVar17[-1]);
        (**(code **)*puVar9)(puVar9,&DAT_145af3920,1);
        physx::operator<<(puVar9,*puVar17);
        uVar13 = uVar13 + 1;
        puVar17 = puVar17 + 3;
        bVar12 = local_1c8[0];
      } while (uVar13 < uVar6);
    }
  }
  else {
    if ((uVar6 == 0) || (lVar7 == 0)) goto LAB_14329dee8;
    uVar13 = 0;
    if (uVar6 != 0) {
      puVar15 = (undefined2 *)(lVar7 + 4);
      do {
        if ((uVar13 == 0) || ((uVar13 & 1) != 0)) {
          uVar16 = 1;
          puVar11 = &DAT_145af3920;
        }
        else {
          uVar16 = 4;
          puVar11 = &DAT_145af6094;
        }
        (**(code **)*param_5)(param_5,puVar11,uVar16);
        puVar9 = (undefined8 *)physx::operator<<(param_5,puVar15[-2]);
        (**(code **)*puVar9)(puVar9,&DAT_145af3920,1);
        puVar9 = (undefined8 *)physx::operator<<(puVar9,puVar15[-1]);
        (**(code **)*puVar9)(puVar9,&DAT_145af3920,1);
        physx::operator<<(puVar9,*puVar15);
        uVar13 = uVar13 + 1;
        puVar15 = puVar15 + 3;
        bVar12 = local_1c8[0];
      } while (uVar13 < uVar6);
    }
  }
  local_1c8[0] = 0;
  (**(code **)*param_5)(param_5,local_1c8,1);
  (**(code **)(*param_4 + 0x10))(param_4,"Triangles",param_5[4]);
  param_5[3] = 0;
LAB_14329dee8:
  if (sVar4 != -1) {
    physx::Sn::
    writeBuffer<physx::PxBVH33TriangleMesh,unsigned_int_(__cdecl*)(physx::PxTriangleMesh_const_*___ptr64,unsigned_int),void_(__cdecl*)(physx::MemoryBuffer_&___ptr64,unsigned_int_const_&___ptr64)>
              (param_4,param_5,6,param_2,physx::materialAccess,uVar6,"materialIndices",
               &LAB_1432a4d20);
  }
  uStack_16c = local_1a8._4_4_;
  uVar3 = local_1b0._4_4_;
  uVar13 = local_1c0._4_4_;
  uVar14 = 0;
  local_1c0 = (undefined **)((ulonglong)local_1c0._4_4_ << 0x20);
  ppuStack_1b8 = (undefined **)0x0;
  local_1b0 = (undefined8 *)((ulonglong)local_1b0._4_4_ << 0x20);
  local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
  lStack_1a0 = 0;
  local_198 = 0;
  _local_178 = CONCAT44(uVar3,local_1c4);
  local_150 = 0;
  local_148 = (undefined2 *)0x0;
  local_158 = 0;
  _local_160 = CONCAT44(uStack_194,uVar6);
  lStack_180 = local_138;
  _local_188 = CONCAT44(uVar13,0xc);
  if (bVar12 == 0) {
    local_170 = 0xc;
  }
  else {
    local_170 = 6;
    local_158 = 2;
  }
  lStack_168 = lVar7;
  if (sVar4 != -1) {
    uVar16 = SUB168(ZEXT416(2) * ZEXT416(uVar6),0);
    if (SUB168(ZEXT416(2) * ZEXT416(uVar6),8) != 0) {
      uVar16 = 0xffffffffffffffff;
    }
    puVar10 = (undefined2 *)operator_new(uVar16);
    puVar15 = puVar10;
    if (uVar6 != 0) {
      do {
        uVar5 = (**(code **)(*param_2 + 0x68))(param_2,uVar14);
        uVar14 = uVar14 + 1;
        *puVar15 = uVar5;
        puVar15 = puVar15 + 1;
      } while (uVar14 < uVar6);
    }
    local_150 = 2;
    local_148 = puVar10;
  }
  lVar7 = CONCAT71(param_6._1_7_,(undefined1)param_6);
  if (*(longlong *)(lVar7 + 8) != 0) {
    local_110 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_128 = *(undefined8 *)(param_1 + 8);
    local_120 = &local_128;
    local_118 = &local_128;
    local_100 = &local_128;
    local_d0 = 0x3f400000;
    local_108 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_cc = 0xffffffff;
    local_c8 = 0;
    physx::shdfnd::internal::
    HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
    ::reserveInternal(&local_100,0x40);
    plVar1 = *(longlong **)(lVar7 + 8);
    local_1b0 = &local_128;
    local_c0 = 0x20;
    local_1c0 = &PTR_write_145af5c98;
    lStack_1a0 = 0;
    ppuStack_1b8 = &PTR_read_145af5ca8;
    local_198 = 0;
    local_1a8 = 0;
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_188,&local_1c0,0);
    uVar6 = (uint)local_1a8;
    if (((uint)local_1a8 != 0) && (lStack_1a0 != 0)) {
      uVar13 = 0;
      if ((uint)local_1a8 != 0) {
        do {
          if ((uVar13 == 0) || ((uVar13 & 0xf) != 0)) {
            uVar16 = 1;
            puVar11 = &DAT_145af3920;
          }
          else {
            uVar16 = 4;
            puVar11 = &DAT_145af6094;
          }
          (**(code **)*param_5)(param_5,puVar11,uVar16);
          _guard_xfg_dispatch_icall_nop(local_b8,0,0x80);
          physx::shdfnd::snprintf(local_b8,0x80,"%u");
          if (local_b8[0] != '\0') {
            lVar7 = -1;
            do {
              lVar2 = lVar7 + 1;
              lVar7 = lVar7 + 1;
            } while (local_b8[lVar2] != '\0');
            (**(code **)*param_5)(param_5,local_b8);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar6);
      }
      param_6._0_1_ = 0;
      (**(code **)*param_5)(param_5,&param_6,1);
      (**(code **)(*param_4 + 0x10))(param_4,"CookedData",param_5[4]);
      param_5[3] = 0;
    }
    local_1c0 = &PTR_write_145af5c98;
    ppuStack_1b8 = &PTR_read_145af5ca8;
    if (lStack_1a0 != 0) {
      physx::CVariableMemoryPool::AddFreeMem
                (local_1b0 + 1,lStack_1a0 + -0x10,*(undefined4 *)(lStack_1a0 + -8));
    }
    ppuStack_1b8 = &PTR__purecall_143f3ef70;
    local_1c0 = &PTR__purecall_143f3ef70;
    physx::CVariableMemoryPool::~CVariableMemoryPool(&local_120);
  }
  FMemory::operator_delete(local_148);
  return;
}



// FUNCTION 14329e260 fileToObject body=1049 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxBVH33TriangleMeshRepXSerializer::fileToObject
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
          undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  void *_Dst;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong _Size;
  ulonglong local_res10;
  void *local_res20;
  undefined **local_178;
  undefined **local_170;
  undefined8 *local_168;
  ulonglong local_160;
  void *local_158;
  uint local_150;
  undefined4 local_148;
  uint uStack_144;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined1 uStack_132;
  undefined1 uStack_131;
  ulonglong local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  uint uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 local_108;
  longlong local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  longlong local_d0;
  undefined2 local_c8;
  undefined4 local_c0 [2];
  void *local_b8;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  
  local_148 = 0;
  uStack_140 = 0;
  local_f8 = (ulonglong)uStack_144 << 0x20;
  local_138 = 0;
  local_e8 = (ulonglong)CONCAT13(uStack_131,CONCAT12(uStack_132,CONCAT11(uStack_133,uStack_134))) <<
             0x20;
  uStack_f0 = 0;
  uStack_dc = (undefined4)(local_130 >> 0x20);
  local_130 = local_130 & 0xffffffff00000000;
  uStack_128 = 0;
  local_120 = 0;
  local_d0 = (ulonglong)uStack_11c << 0x20;
  local_e0 = 0;
  uStack_d8 = 0;
  local_c0[0] = 0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  local_res10 = 0;
  Sn::readStridedBufferProperty<physx::PxVec3>
            (param_3,"points",&local_res10,&local_f8,&local_e8,param_4);
  uStack_f0 = local_res10;
  local_res10 = 0;
  Sn::readStridedBufferProperty<physx::Sn::Triangle<unsigned_int>_>
            (param_3,"triangles",&local_res10,&local_e0,&local_d0,param_4);
  uStack_d8 = local_res10;
  local_res20 = (void *)0x0;
  Sn::readStridedBufferProperty<unsigned_short>
            (param_3,"materialIndices",&local_res20,local_c0,&local_res10,param_4);
  local_b8 = local_res20;
  local_res20 = (void *)0x0;
  Sn::readStridedBufferProperty<unsigned_char>
            (param_3,"CookedData",&local_res20,local_38,&local_res10,param_4);
  local_a8 = (**(code **)(*param_4 + 0x18))(param_4);
  local_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0x3f400000;
  local_4c = 0xffffffff;
  local_48 = 0;
  local_a0 = &local_a8;
  local_98 = &local_a8;
  local_80 = &local_a8;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
  ::reserveInternal(&local_80,0x40);
  uVar1 = (uint)local_res10;
  _Size = local_res10 & 0xffffffff;
  local_178 = &PTR_write_145af5c98;
  uVar5 = 0x20;
  local_170 = &PTR_read_145af5ca8;
  local_40 = 0x20;
  local_160 = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_168 = &local_a8;
  if ((uint)local_res10 != 0) {
    if (0x20 < (uint)local_res10) {
      do {
        uVar5 = uVar5 * 2;
      } while (uVar5 < (uint)local_res10);
    }
    _Dst = (void *)CVariableMemoryPool::allocate(&local_a0,uVar5);
    uVar2 = 0;
    if ((uint)local_160 != 0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_158,local_160 & 0xffffffff);
      uVar2 = (uint)local_160;
    }
    if (local_158 != (void *)0x0) {
      CVariableMemoryPool::AddFreeMem
                (local_168 + 1,(longlong)local_158 + -0x10,*(undefined4 *)((longlong)local_158 + -8)
                );
      uVar2 = (uint)local_160;
    }
    local_158 = _Dst;
    local_150 = uVar5;
    ::_guard_xfg_dispatch_icall_nop((void *)((ulonglong)uVar2 + (longlong)_Dst),local_res20,_Size);
    local_160 = CONCAT44(local_160._4_4_,(uint)local_160 + uVar1);
    lVar3 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,&local_170);
    if (lVar3 != 0) goto LAB_14329e5ef;
  }
  local_160 = 0;
  puVar4 = (undefined4 *)(**(code **)(*(longlong *)param_5[1] + 0x10))();
  local_148 = *puVar4;
  uStack_144 = puVar4[1];
  uStack_140 = *(undefined8 *)(puVar4 + 2);
  local_138 = puVar4[4];
  uStack_134 = *(undefined1 *)(puVar4 + 5);
  uStack_133 = *(undefined1 *)((longlong)puVar4 + 0x15);
  uStack_132 = *(undefined1 *)((longlong)puVar4 + 0x16);
  local_130 = *(ulonglong *)(puVar4 + 6);
  uStack_128 = *(undefined8 *)(puVar4 + 8);
  local_120 = puVar4[10];
  uStack_11c = puVar4[0xb];
  local_118 = puVar4[0xc];
  local_108 = puVar4[0x10];
  local_114 = 0x3f0ccccd;
  uStack_110 = 0;
  local_10c = 0;
  (**(code **)(*(longlong *)param_5[1] + 8))((longlong *)param_5[1],&local_148);
  (**(code **)(*(longlong *)param_5[1] + 0x20))((longlong *)param_5[1],&local_f8,&local_178,0);
  lVar3 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,&local_170);
LAB_14329e5ef:
  param_2[1] = lVar3;
  param_2[2] = lVar3;
  local_178 = &PTR_write_145af5c98;
  local_170 = &PTR_read_145af5ca8;
  *param_2 = "PxBVH33TriangleMesh";
  if (local_158 != (void *)0x0) {
    CVariableMemoryPool::AddFreeMem
              (local_168 + 1,(longlong)local_158 + -0x10,*(undefined4 *)((longlong)local_158 + -8));
  }
  local_170 = &PTR__purecall_143f3ef70;
  local_178 = &PTR__purecall_143f3ef70;
  CVariableMemoryPool::~CVariableMemoryPool(&local_a0);
  return param_2;
}



// FUNCTION 14329e680 FUN_14329e680 body=1656 status=ok
// SIG undefined FUN_14329e680(void)

void FUN_14329e680(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined *puVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  byte local_1c8 [4];
  uint local_1c4;
  undefined8 local_1c0;
  undefined **ppuStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong lStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_188;
  uint uStack_184;
  longlong lStack_180;
  uint local_178;
  uint uStack_174;
  undefined4 local_170;
  uint uStack_16c;
  longlong lStack_168;
  uint local_160;
  undefined4 uStack_15c;
  undefined2 local_158;
  undefined4 local_150;
  undefined2 *local_148;
  longlong local_138;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  char local_b8 [128];
  
  sVar4 = (**(code **)(*param_2 + 0x68))(param_2,0);
  uVar6 = (**(code **)(*param_2 + 0x28))(param_2);
  local_1c4 = uVar6;
  lVar7 = (**(code **)(*param_2 + 0x30))(param_2);
  uVar13 = 0;
  local_138 = lVar7;
  if ((uVar6 != 0) && (lVar7 != 0)) {
    if (uVar6 != 0) {
      do {
        if ((uVar13 == 0) || ((uVar13 & 1) != 0)) {
          uVar16 = 1;
          puVar11 = &DAT_145af3920;
        }
        else {
          uVar16 = 4;
          puVar11 = &DAT_145af6094;
        }
        (**(code **)*param_5)(param_5,puVar11,uVar16);
        physx::operator<<(param_5,lVar7);
        uVar13 = uVar13 + 1;
        lVar7 = lVar7 + 0xc;
      } while (uVar13 < uVar6);
    }
    local_1c8[0] = 0;
    (**(code **)*param_5)(param_5,local_1c8,1);
    (**(code **)(*param_4 + 0x10))(param_4,"Points",param_5[4]);
    param_5[3] = 0;
  }
  pbVar8 = (byte *)(**(code **)(*param_2 + 0x58))(param_2,local_1c8);
  bVar12 = *pbVar8 >> 1 & 1;
  local_1c8[0] = bVar12;
  uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  lVar7 = (**(code **)(*param_2 + 0x50))(param_2);
  if (bVar12 == 0) {
    if ((uVar6 == 0) || (lVar7 == 0)) goto LAB_14329e988;
    uVar13 = 0;
    if (uVar6 != 0) {
      puVar17 = (undefined4 *)(lVar7 + 8);
      do {
        if ((uVar13 == 0) || ((uVar13 & 1) != 0)) {
          uVar16 = 1;
          puVar11 = &DAT_145af3920;
        }
        else {
          uVar16 = 4;
          puVar11 = &DAT_145af6094;
        }
        (**(code **)*param_5)(param_5,puVar11,uVar16);
        puVar9 = (undefined8 *)physx::operator<<(param_5,puVar17[-2]);
        (**(code **)*puVar9)(puVar9,&DAT_145af3920,1);
        puVar9 = (undefined8 *)physx::operator<<(puVar9,puVar17[-1]);
        (**(code **)*puVar9)(puVar9,&DAT_145af3920,1);
        physx::operator<<(puVar9,*puVar17);
        uVar13 = uVar13 + 1;
        puVar17 = puVar17 + 3;
        bVar12 = local_1c8[0];
      } while (uVar13 < uVar6);
    }
  }
  else {
    if ((uVar6 == 0) || (lVar7 == 0)) goto LAB_14329e988;
    uVar13 = 0;
    if (uVar6 != 0) {
      puVar15 = (undefined2 *)(lVar7 + 4);
      do {
        if ((uVar13 == 0) || ((uVar13 & 1) != 0)) {
          uVar16 = 1;
          puVar11 = &DAT_145af3920;
        }
        else {
          uVar16 = 4;
          puVar11 = &DAT_145af6094;
        }
        (**(code **)*param_5)(param_5,puVar11,uVar16);
        puVar9 = (undefined8 *)physx::operator<<(param_5,puVar15[-2]);
        (**(code **)*puVar9)(puVar9,&DAT_145af3920,1);
        puVar9 = (undefined8 *)physx::operator<<(puVar9,puVar15[-1]);
        (**(code **)*puVar9)(puVar9,&DAT_145af3920,1);
        physx::operator<<(puVar9,*puVar15);
        uVar13 = uVar13 + 1;
        puVar15 = puVar15 + 3;
        bVar12 = local_1c8[0];
      } while (uVar13 < uVar6);
    }
  }
  local_1c8[0] = 0;
  (**(code **)*param_5)(param_5,local_1c8,1);
  (**(code **)(*param_4 + 0x10))(param_4,"Triangles",param_5[4]);
  param_5[3] = 0;
LAB_14329e988:
  if (sVar4 != -1) {
    physx::Sn::
    writeBuffer<physx::PxBVH33TriangleMesh,unsigned_int_(__cdecl*)(physx::PxTriangleMesh_const_*___ptr64,unsigned_int),void_(__cdecl*)(physx::MemoryBuffer_&___ptr64,unsigned_int_const_&___ptr64)>
              (param_4,param_5,6,param_2,physx::materialAccess,uVar6,"materialIndices",
               &LAB_1432a4d20);
  }
  uStack_16c = local_1a8._4_4_;
  uVar3 = local_1b0._4_4_;
  uVar13 = local_1c0._4_4_;
  uVar14 = 0;
  local_1c0 = (undefined **)((ulonglong)local_1c0._4_4_ << 0x20);
  ppuStack_1b8 = (undefined **)0x0;
  local_1b0 = (undefined8 *)((ulonglong)local_1b0._4_4_ << 0x20);
  local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
  lStack_1a0 = 0;
  local_198 = 0;
  _local_178 = CONCAT44(uVar3,local_1c4);
  local_150 = 0;
  local_148 = (undefined2 *)0x0;
  local_158 = 0;
  _local_160 = CONCAT44(uStack_194,uVar6);
  lStack_180 = local_138;
  _local_188 = CONCAT44(uVar13,0xc);
  if (bVar12 == 0) {
    local_170 = 0xc;
  }
  else {
    local_170 = 6;
    local_158 = 2;
  }
  lStack_168 = lVar7;
  if (sVar4 != -1) {
    uVar16 = SUB168(ZEXT416(2) * ZEXT416(uVar6),0);
    if (SUB168(ZEXT416(2) * ZEXT416(uVar6),8) != 0) {
      uVar16 = 0xffffffffffffffff;
    }
    puVar10 = (undefined2 *)operator_new(uVar16);
    puVar15 = puVar10;
    if (uVar6 != 0) {
      do {
        uVar5 = (**(code **)(*param_2 + 0x68))(param_2,uVar14);
        uVar14 = uVar14 + 1;
        *puVar15 = uVar5;
        puVar15 = puVar15 + 1;
      } while (uVar14 < uVar6);
    }
    local_150 = 2;
    local_148 = puVar10;
  }
  lVar7 = CONCAT71(param_6._1_7_,(undefined1)param_6);
  if (*(longlong *)(lVar7 + 8) != 0) {
    local_110 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_128 = *(undefined8 *)(param_1 + 8);
    local_120 = &local_128;
    local_118 = &local_128;
    local_100 = &local_128;
    local_d0 = 0x3f400000;
    local_108 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_cc = 0xffffffff;
    local_c8 = 0;
    physx::shdfnd::internal::
    HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
    ::reserveInternal(&local_100,0x40);
    plVar1 = *(longlong **)(lVar7 + 8);
    local_1b0 = &local_128;
    local_c0 = 0x20;
    local_1c0 = &PTR_write_145af5c98;
    lStack_1a0 = 0;
    ppuStack_1b8 = &PTR_read_145af5ca8;
    local_198 = 0;
    local_1a8 = 0;
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_188,&local_1c0,0);
    uVar6 = (uint)local_1a8;
    if (((uint)local_1a8 != 0) && (lStack_1a0 != 0)) {
      uVar13 = 0;
      if ((uint)local_1a8 != 0) {
        do {
          if ((uVar13 == 0) || ((uVar13 & 0xf) != 0)) {
            uVar16 = 1;
            puVar11 = &DAT_145af3920;
          }
          else {
            uVar16 = 4;
            puVar11 = &DAT_145af6094;
          }
          (**(code **)*param_5)(param_5,puVar11,uVar16);
          _guard_xfg_dispatch_icall_nop(local_b8,0,0x80);
          physx::shdfnd::snprintf(local_b8,0x80,"%u");
          if (local_b8[0] != '\0') {
            lVar7 = -1;
            do {
              lVar2 = lVar7 + 1;
              lVar7 = lVar7 + 1;
            } while (local_b8[lVar2] != '\0');
            (**(code **)*param_5)(param_5,local_b8);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar6);
      }
      param_6._0_1_ = 0;
      (**(code **)*param_5)(param_5,&param_6,1);
      (**(code **)(*param_4 + 0x10))(param_4,"CookedData",param_5[4]);
      param_5[3] = 0;
    }
    local_1c0 = &PTR_write_145af5c98;
    ppuStack_1b8 = &PTR_read_145af5ca8;
    if (lStack_1a0 != 0) {
      physx::CVariableMemoryPool::AddFreeMem
                (local_1b0 + 1,lStack_1a0 + -0x10,*(undefined4 *)(lStack_1a0 + -8));
    }
    ppuStack_1b8 = &PTR__purecall_143f3ef70;
    local_1c0 = &PTR__purecall_143f3ef70;
    physx::CVariableMemoryPool::~CVariableMemoryPool(&local_120);
  }
  FMemory::operator_delete(local_148);
  return;
}



// FUNCTION 14329ed00 fileToObject body=1046 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxBVH34TriangleMeshRepXSerializer::fileToObject
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
          undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  void *_Dst;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong _Size;
  ulonglong local_res10;
  void *local_res20;
  undefined **local_178;
  undefined **local_170;
  undefined8 *local_168;
  ulonglong local_160;
  void *local_158;
  uint local_150;
  undefined4 local_148;
  uint uStack_144;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined1 uStack_132;
  undefined1 uStack_131;
  ulonglong local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  uint uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 local_108;
  longlong local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  longlong local_d0;
  undefined2 local_c8;
  undefined4 local_c0 [2];
  void *local_b8;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  
  local_148 = 0;
  uStack_140 = 0;
  local_f8 = (ulonglong)uStack_144 << 0x20;
  local_138 = 0;
  local_e8 = (ulonglong)CONCAT13(uStack_131,CONCAT12(uStack_132,CONCAT11(uStack_133,uStack_134))) <<
             0x20;
  uStack_f0 = 0;
  uStack_dc = (undefined4)(local_130 >> 0x20);
  local_130 = local_130 & 0xffffffff00000000;
  uStack_128 = 0;
  local_120 = 0;
  local_d0 = (ulonglong)uStack_11c << 0x20;
  local_e0 = 0;
  uStack_d8 = 0;
  local_c0[0] = 0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  local_res10 = 0;
  Sn::readStridedBufferProperty<physx::PxVec3>
            (param_3,"points",&local_res10,&local_f8,&local_e8,param_4);
  uStack_f0 = local_res10;
  local_res10 = 0;
  Sn::readStridedBufferProperty<physx::Sn::Triangle<unsigned_int>_>
            (param_3,"triangles",&local_res10,&local_e0,&local_d0,param_4);
  uStack_d8 = local_res10;
  local_res20 = (void *)0x0;
  Sn::readStridedBufferProperty<unsigned_short>
            (param_3,"materialIndices",&local_res20,local_c0,&local_res10,param_4);
  local_b8 = local_res20;
  local_res20 = (void *)0x0;
  Sn::readStridedBufferProperty<unsigned_char>
            (param_3,"CookedData",&local_res20,local_38,&local_res10,param_4);
  local_a8 = (**(code **)(*param_4 + 0x18))(param_4);
  local_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0x3f400000;
  local_4c = 0xffffffff;
  local_48 = 0;
  local_a0 = &local_a8;
  local_98 = &local_a8;
  local_80 = &local_a8;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
  ::reserveInternal(&local_80,0x40);
  uVar1 = (uint)local_res10;
  _Size = local_res10 & 0xffffffff;
  local_178 = &PTR_write_145af5c98;
  uVar5 = 0x20;
  local_170 = &PTR_read_145af5ca8;
  local_40 = 0x20;
  local_160 = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_168 = &local_a8;
  if ((uint)local_res10 != 0) {
    if (0x20 < (uint)local_res10) {
      do {
        uVar5 = uVar5 * 2;
      } while (uVar5 < (uint)local_res10);
    }
    _Dst = (void *)CVariableMemoryPool::allocate(&local_a0,uVar5);
    uVar2 = 0;
    if ((uint)local_160 != 0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_158,local_160 & 0xffffffff);
      uVar2 = (uint)local_160;
    }
    if (local_158 != (void *)0x0) {
      CVariableMemoryPool::AddFreeMem
                (local_168 + 1,(longlong)local_158 + -0x10,*(undefined4 *)((longlong)local_158 + -8)
                );
      uVar2 = (uint)local_160;
    }
    local_158 = _Dst;
    local_150 = uVar5;
    ::_guard_xfg_dispatch_icall_nop((void *)((ulonglong)uVar2 + (longlong)_Dst),local_res20,_Size);
    local_160 = CONCAT44(local_160._4_4_,(uint)local_160 + uVar1);
    lVar3 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,&local_170);
    if (lVar3 != 0) goto LAB_14329f08c;
  }
  local_160 = 0;
  puVar4 = (undefined4 *)(**(code **)(*(longlong *)param_5[1] + 0x10))();
  local_148 = *puVar4;
  uStack_144 = puVar4[1];
  uStack_140 = *(undefined8 *)(puVar4 + 2);
  local_138 = puVar4[4];
  uStack_134 = *(undefined1 *)(puVar4 + 5);
  uStack_133 = *(undefined1 *)((longlong)puVar4 + 0x15);
  uStack_132 = *(undefined1 *)((longlong)puVar4 + 0x16);
  local_130 = *(ulonglong *)(puVar4 + 6);
  uStack_128 = *(undefined8 *)(puVar4 + 8);
  local_120 = puVar4[10];
  uStack_11c = puVar4[0xb];
  local_118 = puVar4[0xc];
  local_108 = puVar4[0x10];
  local_10c = 1;
  _local_114 = CONCAT44((int)((ulonglong)*(undefined8 *)(puVar4 + 0xd) >> 0x20),4);
  (**(code **)(*(longlong *)param_5[1] + 8))((longlong *)param_5[1],&local_148);
  (**(code **)(*(longlong *)param_5[1] + 0x20))((longlong *)param_5[1],&local_f8,&local_178,0);
  lVar3 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,&local_170);
LAB_14329f08c:
  param_2[1] = lVar3;
  param_2[2] = lVar3;
  local_178 = &PTR_write_145af5c98;
  local_170 = &PTR_read_145af5ca8;
  *param_2 = "PxBVH34TriangleMesh";
  if (local_158 != (void *)0x0) {
    CVariableMemoryPool::AddFreeMem
              (local_168 + 1,(longlong)local_158 + -0x10,*(undefined4 *)((longlong)local_158 + -8));
  }
  local_170 = &PTR__purecall_143f3ef70;
  local_178 = &PTR__purecall_143f3ef70;
  CVariableMemoryPool::~CVariableMemoryPool(&local_a0);
  return param_2;
}



// FUNCTION 14329f120 objectToFileImpl body=591 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxHeightFieldRepXSerializer::objectToFileImpl
               (undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 local_res10 [8];
  undefined8 *local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  
  uVar8 = 0;
  local_40 = 0xbf800000;
  local_3c = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 1;
  local_38 = 0;
  uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  local_60 = CONCAT44(local_60._4_4_,uVar2);
  uVar2 = (**(code **)(*param_2 + 0x40))(param_2);
  local_60 = CONCAT44(uVar2,(int)local_60);
  local_58 = (**(code **)(*param_2 + 0x48))(param_2);
  local_50 = (**(code **)(*param_2 + 0x50))(param_2);
  local_48 = 0;
  local_40 = (**(code **)(*param_2 + 0x58))(param_2);
  local_3c = (**(code **)(*param_2 + 0x60))(param_2);
  puVar5 = (undefined2 *)(**(code **)(*param_2 + 0x68))(param_2,local_res10);
  local_38 = *puVar5;
  iVar3 = (**(code **)(*param_2 + 0x40))(param_2);
  iVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  puVar1 = (undefined8 *)
           CONCAT44(param_5._4_4_,
                    CONCAT13(param_5._3_1_,
                             CONCAT12(param_5._2_1_,CONCAT11(param_5._1_1_,(undefined1)param_5))));
  iVar3 = iVar3 * iVar4 * 4;
  lVar6 = CVariableMemoryPool::allocate(puVar1[2] + 8,iVar3);
  (**(code **)(*param_2 + 0x28))(param_2,lVar6,iVar3);
  local_78 = (undefined8 *)puVar1[2];
  local_70 = 0;
  local_68 = 0;
  local_48 = lVar6;
  Sn::writeAllProperties<physx::PxHeightFieldDesc>(&local_78,&local_60,param_4,puVar1,param_3);
  if ((((local_68 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_68)) && (local_70 != 0)) {
    (**(code **)(*(longlong *)*local_78 + 0x10))();
  }
  uVar9 = local_60._4_4_ * (int)local_60;
  if ((uVar9 != 0) && (local_48 != 0)) {
    if (uVar9 != 0) {
      puVar10 = (undefined1 *)(local_48 + 2);
      do {
        iVar3 = (int)uVar8;
        if ((iVar3 == 0) || (iVar3 != (int)(uVar8 / 6) * 6)) {
          uVar11 = 1;
          puVar7 = &DAT_145af3920;
        }
        else {
          uVar11 = 4;
          puVar7 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar7,uVar11);
        param_5._0_1_ = puVar10[-2];
        param_5._1_1_ = puVar10[-1];
        param_5._2_1_ = *puVar10;
        param_5._3_1_ = puVar10[1];
        physx::operator<<(puVar1,CONCAT13(param_5._3_1_,
                                          CONCAT12(param_5._2_1_,*(undefined2 *)(puVar10 + -2))));
        uVar8 = (ulonglong)(iVar3 + 1U);
        puVar10 = puVar10 + 4;
      } while (iVar3 + 1U < uVar9);
    }
    param_5._0_1_ = 0;
    (**(code **)*puVar1)(puVar1,&param_5,1);
    (**(code **)(*param_4 + 0x10))(param_4,"samples",puVar1[4]);
    puVar1[3] = 0;
  }
  if (lVar6 != 0) {
    CVariableMemoryPool::AddFreeMem(puVar1[2] + 8,lVar6 + -0x10,*(undefined4 *)(lVar6 + -8));
  }
  return;
}



// FUNCTION 14329f380 fileToObject body=278 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxHeightFieldRepXSerializer::fileToObject
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  
  puVar2 = param_5;
  local_28 = 0xbf800000;
  local_24 = 0;
  local_38[0] = 0;
  local_68 = *(undefined4 *)param_5;
  uStack_64 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_60 = *(undefined4 *)(param_5 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_30 = 0;
  local_58 = param_5[2];
  local_48 = 0;
  local_40 = 1;
  local_20 = 0;
  Sn::readAllProperties<physx::PxHeightFieldDesc>(&local_68,param_3,&local_48,param_4,param_6);
  local_res10 = 0;
  Sn::readStridedBufferProperty<physx::PxHeightFieldSample>
            (param_3,"samples",&local_res10,local_38,&param_5,param_4);
  local_30 = local_res10;
  lVar1 = *(longlong *)puVar2[1];
  uVar3 = (**(code **)(*(longlong *)*puVar2 + 0x138))();
  uVar3 = (**(code **)(lVar1 + 0x60))(puVar2[1],&local_48,uVar3);
  param_2[1] = uVar3;
  param_2[2] = uVar3;
  *param_2 = "PxHeightField";
  return param_2;
}



// FUNCTION 14329f4a0 objectToFileImpl body=799 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxConvexMeshRepXSerializer::objectToFileImpl
               (longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
               undefined8 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  undefined **local_118;
  undefined **local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  lVar3 = (**(code **)(*param_2 + 0x30))(param_2);
  if ((uVar2 != 0) && (lVar3 != 0)) {
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        if ((uVar6 == 0) || ((uVar6 & 1) != 0)) {
          uVar7 = 1;
          puVar4 = &DAT_145af3920;
        }
        else {
          uVar7 = 4;
          puVar4 = &DAT_145af6094;
        }
        (**(code **)*param_5)(param_5,puVar4,uVar7);
        physx::operator<<(param_5,lVar3);
        uVar6 = uVar6 + 1;
        lVar3 = lVar3 + 0xc;
      } while (uVar6 < uVar2);
    }
    local_res10[0] = 0;
    (**(code **)*param_5)(param_5,local_res10,1);
    (**(code **)(*param_4 + 0x10))(param_4,"points",param_5[4]);
    param_5[3] = 0;
  }
  lVar3 = CONCAT71(param_6._1_7_,(undefined1)param_6);
  if (*(longlong *)(lVar3 + 8) != 0) {
    local_e8[0] = 0;
    local_9c = 0xff;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0xff0000;
    local_e0 = (**(code **)(*param_2 + 0x30))(param_2);
    local_e8[0] = 0xc;
    local_d8 = (**(code **)(*param_2 + 0x28))(param_2);
    local_80 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_a0 = CONCAT22(local_a0._2_2_,2);
    local_98 = *(undefined8 *)(param_1 + 8);
    local_90 = &local_98;
    local_88 = &local_98;
    local_70 = &local_98;
    local_40 = 0x3f400000;
    local_78 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_3c = 0xffffffff;
    local_38 = 0;
    shdfnd::internal::
    HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
    ::reserveInternal(&local_70,0x40);
    plVar1 = *(longlong **)(lVar3 + 8);
    local_108 = &local_98;
    local_30 = 0x20;
    local_118 = &PTR_write_145af5c98;
    local_100 = 0;
    local_110 = &PTR_read_145af5ca8;
    local_f8 = (undefined1 *)0x0;
    local_f0 = 0;
    (**(code **)(*plVar1 + 0x38))(plVar1,local_e8,&local_118,0);
    uVar2 = (uint)local_100;
    if (((uint)local_100 != 0) && (local_f8 != (undefined1 *)0x0)) {
      uVar6 = 0;
      puVar5 = local_f8;
      if ((uint)local_100 != 0) {
        do {
          if ((uVar6 == 0) || ((uVar6 & 0xf) != 0)) {
            uVar7 = 1;
            puVar4 = &DAT_145af3920;
          }
          else {
            uVar7 = 4;
            puVar4 = &DAT_145af6094;
          }
          (**(code **)*param_5)(param_5,puVar4,uVar7);
          physx::operator<<(param_5,*puVar5);
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < uVar2);
      }
      param_6._0_1_ = 0;
      (**(code **)*param_5)(param_5,&param_6,1);
      (**(code **)(*param_4 + 0x10))(param_4,"CookedData",param_5[4]);
      param_5[3] = 0;
    }
    local_118 = &PTR_write_145af5c98;
    local_110 = &PTR_read_145af5ca8;
    if (local_f8 != (undefined1 *)0x0) {
      CVariableMemoryPool::AddFreeMem(local_108 + 1,local_f8 + -0x10,*(undefined4 *)(local_f8 + -8))
      ;
    }
    local_110 = &PTR__purecall_143f3ef70;
    local_118 = &PTR__purecall_143f3ef70;
    CVariableMemoryPool::~CVariableMemoryPool(&local_90);
  }
  return;
}



// FUNCTION 14329f7d0 fileToObject body=704 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxConvexMeshRepXSerializer::fileToObject
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
          undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  void *_Dst;
  longlong lVar3;
  uint uVar4;
  ulonglong _Size;
  ulonglong local_res10;
  void *local_res20;
  undefined **local_128;
  undefined **local_120;
  undefined8 *local_118;
  ulonglong local_110;
  void *local_108;
  uint local_100;
  undefined4 local_f8 [2];
  ulonglong local_f0;
  undefined4 local_e8 [2];
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  
  local_f8[0] = 0;
  local_f0 = 0;
  local_ac = 0xff;
  local_e8[0] = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xff0000;
  local_res10 = 0;
  Sn::readStridedBufferProperty<physx::PxVec3>
            (param_3,"points",&local_res10,local_f8,local_e8,param_4);
  local_f0 = local_res10;
  local_b0 = CONCAT22(local_b0._2_2_,2);
  local_res20 = (void *)0x0;
  Sn::readStridedBufferProperty<unsigned_char>
            (param_3,"CookedData",&local_res20,local_38,&local_res10,param_4);
  local_a8 = (**(code **)(*param_4 + 0x18))(param_4);
  local_90 = 0;
  local_a0 = &local_a8;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = &local_a8;
  local_50 = 0x3f400000;
  local_80 = &local_a8;
  local_88 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_4c = 0xffffffff;
  local_48 = 0;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
  ::reserveInternal(&local_80,0x40);
  uVar1 = (uint)local_res10;
  _Size = local_res10 & 0xffffffff;
  local_118 = &local_a8;
  local_128 = &PTR_write_145af5c98;
  uVar4 = 0x20;
  local_120 = &PTR_read_145af5ca8;
  local_40 = 0x20;
  local_110 = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  if ((uint)local_res10 != 0) {
    if (0x20 < (uint)local_res10) {
      do {
        uVar4 = uVar4 * 2;
      } while (uVar4 < (uint)local_res10);
    }
    _Dst = (void *)CVariableMemoryPool::allocate(&local_a0,uVar4);
    uVar2 = 0;
    if ((uint)local_110 != 0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_108,local_110 & 0xffffffff);
      uVar2 = (uint)local_110;
    }
    if (local_108 != (void *)0x0) {
      CVariableMemoryPool::AddFreeMem
                (local_118 + 1,(longlong)local_108 + -0x10,*(undefined4 *)((longlong)local_108 + -8)
                );
      uVar2 = (uint)local_110;
    }
    local_108 = _Dst;
    local_100 = uVar4;
    ::_guard_xfg_dispatch_icall_nop((void *)((ulonglong)uVar2 + (longlong)_Dst),local_res20,_Size);
    local_110 = CONCAT44(local_110._4_4_,(uint)local_110 + uVar1);
    lVar3 = (**(code **)(*(longlong *)*param_5 + 0x58))((longlong *)*param_5,&local_120);
    if (lVar3 != 0) goto LAB_14329fa06;
  }
  local_110 = 0;
  (**(code **)(*(longlong *)param_5[1] + 0x38))((longlong *)param_5[1],local_f8,&local_128,0);
  lVar3 = (**(code **)(*(longlong *)*param_5 + 0x58))((longlong *)*param_5,&local_120);
LAB_14329fa06:
  param_2[1] = lVar3;
  param_2[2] = lVar3;
  local_128 = &PTR_write_145af5c98;
  local_120 = &PTR_read_145af5ca8;
  *param_2 = "PxConvexMesh";
  if (local_108 != (void *)0x0) {
    CVariableMemoryPool::AddFreeMem
              (local_118 + 1,(longlong)local_108 + -0x10,*(undefined4 *)((longlong)local_108 + -8));
  }
  local_120 = &PTR__purecall_143f3ef70;
  local_128 = &PTR__purecall_143f3ef70;
  CVariableMemoryPool::~CVariableMemoryPool(&local_a0);
  return param_2;
}



// FUNCTION 14329faa0 allocateObject body=55 status=ok
// SIG undefined allocateObject(void)

void physx::PxRigidStaticRepXSerializer::allocateObject(undefined8 param_1,undefined8 *param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*(longlong *)*param_2 + 0xa8))((longlong *)*param_2,&local_28);
  return;
}



// FUNCTION 14329fae0 allocateObject body=55 status=ok
// SIG undefined allocateObject(void)

void physx::PxRigidDynamicRepXSerializer::allocateObject(undefined8 param_1,undefined8 *param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*(longlong *)*param_2 + 0xb0))((longlong *)*param_2,&local_28);
  return;
}



// FUNCTION 14329fb20 objectToFileImpl body=328 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxArticulationRepXSerializer::objectToFileImpl
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  undefined8 *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_e0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_e8 = *(undefined8 **)(param_5 + 0x10);
  local_d8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0x3f400000;
  local_94 = 0xffffffff;
  local_c8 = local_e8;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<unsigned___int64_const_,physx::PxArticulationLink_const_*___ptr64>,unsigned___int64_const_,physx::shdfnd::Hash<unsigned___int64_const_>,physx::shdfnd::internal::HashMapBase<unsigned___int64_const_,physx::PxArticulationLink_const_*___ptr64,physx::shdfnd::Hash<unsigned___int64_const_>,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>,1>
  ::reserveInternal(&local_c8,0x40);
  Sn::RepXVisitorWriter<physx::PxArticulation>::RepXVisitorWriter<physx::PxArticulation>
            (&local_78,&local_e8,param_4,param_2,param_5,param_3,&local_c8);
  local_48 = local_78;
  local_40 = local_70;
  local_38 = local_68;
  local_30 = local_60;
  local_28 = local_58;
  local_20 = local_50;
  local_18 = 0;
  uStack_10 = 0;
  visitAllProperties<physx::PxArticulation,physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>_>
            (&local_48);
  if (local_c0 != 0) {
    (**(code **)(*(longlong *)*local_c8 + 0x10))();
  }
  if ((((local_d8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_d8)) && (local_e0 != 0)) {
    (**(code **)(*(longlong *)*local_e8 + 0x10))();
  }
  return;
}



// FUNCTION 14329fc90 objectToFileImpl body=866 status=ok
// SIG undefined objectToFileImpl(void)

/* WARNING: Removing unreachable block (ram,0x00014329ffbb) */
/* WARNING: Removing unreachable block (ram,0x00014329ffbf) */
/* WARNING: Removing unreachable block (ram,0x00014329ffc9) */
/* WARNING: Type propagation algorithm not settling */

void physx::PxAggregateRepXSerializer::objectToFileImpl
               (undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong *local_res10;
  longlong *local_res18 [2];
  PxAggregateGeneratedInfo local_b8;
  char acStack_b7 [127];
  
  plVar8 = (longlong *)0x0;
  local_res18[0] = param_3;
  (**(code **)(*param_4 + 0x18))(param_4);
  uVar9 = 0;
  iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  puVar1 = (undefined8 *)CONCAT71(param_5._1_7_,(undefined1)param_5);
  lVar10 = -1;
  if (iVar3 != 0) {
    do {
      iVar3 = (**(code **)(*param_2 + 0x58))(param_2,&local_res10,1,uVar9);
      if ((iVar3 != 0) && (plVar8 = (longlong *)0x0, (short)local_res10[1] == 0x10)) {
        plVar8 = local_res10;
      }
      if (plVar8 == (longlong *)0x0) {
        (**(code **)(*param_3 + 0x68))(param_3);
        ::_guard_xfg_dispatch_icall_nop(&local_b8,0,0x80);
        physx::shdfnd::snprintf((char *)&local_b8,0x80,"%I64u");
        if (local_b8 != (PxAggregateGeneratedInfo)0x0) {
          lVar5 = -1;
          do {
            pcVar7 = acStack_b7 + lVar5;
            lVar5 = lVar5 + 1;
          } while (*pcVar7 != '\0');
          (**(code **)*puVar1)(puVar1,&local_b8);
        }
        param_5._0_1_ = 0;
        (**(code **)*puVar1)(puVar1,&param_5,1);
        (**(code **)(*param_4 + 0x10))(param_4,"PxActorRef",puVar1[4]);
        puVar1[3] = 0;
        param_3 = local_res18[0];
      }
      else {
        lVar5 = (**(code **)(*plVar8 + 0x1b8))(plVar8);
        if (lVar5 == 0) {
          uVar6 = (**(code **)(*plVar8 + 0x1b0))(plVar8);
          Sn::writeReference<physx::PxArticulation>(param_4,param_3,"PxArticulationRef",uVar6);
        }
      }
      uVar9 = uVar9 + 1;
      uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    } while (uVar9 < uVar4);
  }
  (**(code **)(*param_4 + 0x20))(param_4);
  (**(code **)(*param_2 + 0x48))(param_2);
  ::_guard_xfg_dispatch_icall_nop(&local_b8,0,0x80);
  physx::shdfnd::snprintf((char *)&local_b8,0x80,"%u");
  if (local_b8 != (PxAggregateGeneratedInfo)0x0) {
    lVar5 = -1;
    do {
      pcVar7 = acStack_b7 + lVar5;
      lVar5 = lVar5 + 1;
    } while (*pcVar7 != '\0');
    (**(code **)*puVar1)(puVar1,&local_b8);
  }
  local_res18[0] = (longlong *)((ulonglong)local_res18[0] & 0xffffffffffffff00);
  (**(code **)*puVar1)(puVar1,local_res18,1);
  (**(code **)(*param_4 + 0x10))(param_4,"NumActors",puVar1[4]);
  puVar1[3] = 0;
  (**(code **)(*param_2 + 0x50))(param_2);
  ::_guard_xfg_dispatch_icall_nop(&local_b8,0,0x80);
  physx::shdfnd::snprintf((char *)&local_b8,0x80,"%u");
  if (local_b8 != (PxAggregateGeneratedInfo)0x0) {
    lVar5 = -1;
    do {
      pcVar7 = acStack_b7 + lVar5;
      lVar5 = lVar5 + 1;
    } while (*pcVar7 != '\0');
    (**(code **)*puVar1)(puVar1,&local_b8);
  }
  local_res18[0] = (longlong *)((ulonglong)local_res18[0] & 0xffffffffffffff00);
  (**(code **)*puVar1)(puVar1,local_res18,1);
  (**(code **)(*param_4 + 0x10))(param_4,"MaxNbActors",puVar1[4]);
  puVar1[3] = 0;
  cVar2 = (**(code **)(*param_2 + 0x68))(param_2);
  pcVar7 = "false";
  if (cVar2 != '\0') {
    pcVar7 = "true";
  }
  if (*pcVar7 != '\0') {
    do {
      lVar10 = lVar10 + 1;
    } while (pcVar7[lVar10] != '\0');
    (**(code **)*puVar1)(puVar1,pcVar7,lVar10);
  }
  local_res18[0] = (longlong *)((ulonglong)local_res18[0] & 0xffffffffffffff00);
  (**(code **)*puVar1)(puVar1,local_res18,1);
  (**(code **)(*param_4 + 0x10))(param_4,"SelfCollision",puVar1[4]);
  puVar1[3] = 0;
  physx::PxAggregateGeneratedInfo::_guard_xfg_dispatch_icall_nop(&local_b8);
  return;
}



// FUNCTION 1432a0000 fileToObject body=811 status=ok
// SIG undefined fileToObject(void)

/* WARNING: Removing unreachable block (ram,0x0001432a016f) */
/* WARNING: Removing unreachable block (ram,0x0001432a0173) */
/* WARNING: Removing unreachable block (ram,0x0001432a0158) */
/* WARNING: Removing unreachable block (ram,0x0001432a014b) */
/* WARNING: Removing unreachable block (ram,0x0001432a014f) */
/* WARNING: Removing unreachable block (ram,0x0001432a017d) */

undefined8 *
physx::PxAggregateRepXSerializer::fileToObject
          (undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
          longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  char *pcVar7;
  longlong *plVar8;
  byte bVar9;
  ulonglong uVar10;
  char *local_res10;
  char *local_res18 [2];
  longlong *local_c8;
  PxAggregateGeneratedInfo local_a8 [112];
  
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"NumActors",&local_res10);
  if (((cVar3 != '\0') && (local_res18[0] = local_res10, local_res10 != (char *)0x0)) &&
     (*local_res10 != '\0')) {
    strtoul(local_res10,local_res18,10);
  }
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"MaxNbActors",&local_res10);
  if (((cVar3 == '\0') || (local_res18[0] = local_res10, local_res10 == (char *)0x0)) ||
     (*local_res10 == '\0')) {
    uVar5 = (ulong)param_5;
  }
  else {
    uVar5 = strtoul(local_res10,local_res18,10);
  }
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"SelfCollision",&local_res10);
  if (cVar3 == '\0') {
    uVar10 = (ulonglong)param_5 & 0xff;
    bVar9 = 0;
  }
  else if ((local_res10 == (char *)0x0) || (*local_res10 == '\0')) {
    uVar10 = (ulonglong)param_5 & 0xff;
    bVar9 = 1;
  }
  else {
    iVar6 = physx::shdfnd::stricmp(local_res10,"true");
    bVar9 = 1;
    uVar10 = (ulonglong)(iVar6 == 0);
  }
  local_c8 = (longlong *)
             (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,uVar5,uVar10);
  local_res10 = (char *)(**(code **)(*param_4 + 0x18))(param_4);
  physx::PxAggregateGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_a8);
  param_5 = (longlong *)((ulonglong)param_5 & 0xffffffffffffff00);
  (**(code **)(*param_3 + 0x58))(param_3);
  cVar3 = (**(code **)(*param_3 + 0x18))(param_3,"Actors");
  if (cVar3 != '\0') {
    (**(code **)(*param_3 + 0x58))(param_3);
    cVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    uVar2 = param_6;
    while (cVar3 != '\0') {
      pcVar7 = (char *)(**(code **)(*param_3 + 0x38))(param_3);
      iVar6 = physx::shdfnd::stricmp(pcVar7,"PxActorRef");
      if (iVar6 == 0) {
        param_5 = (longlong *)0x0;
        bVar4 = Sn::readReference<physx::PxMaterial>(param_3,uVar2,&param_5);
        plVar1 = param_5;
        bVar9 = bVar9 & bVar4;
        if (param_5 != (longlong *)0x0) {
          plVar8 = (longlong *)(**(code **)(*param_5 + 0x30))(param_5);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x68))(plVar8,plVar1,1);
          }
          (**(code **)(*local_c8 + 0x28))(local_c8,plVar1);
        }
      }
      else {
        iVar6 = physx::shdfnd::stricmp(pcVar7,"PxArticulationRef");
        if (iVar6 == 0) {
          param_5 = (longlong *)0x0;
          bVar4 = Sn::readReference<physx::PxMaterial>(param_3,uVar2,&param_5);
          plVar1 = param_5;
          bVar9 = bVar9 & bVar4;
          if (param_5 != (longlong *)0x0) {
            plVar8 = (longlong *)(**(code **)(*param_5 + 0x28))(param_5);
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x48))(plVar8,plVar1,1);
            }
            (**(code **)(*local_c8 + 0x38))(local_c8,plVar1);
          }
        }
      }
      cVar3 = (**(code **)(*param_3 + 0x28))(param_3);
    }
    (**(code **)(*param_3 + 0x60))(param_3);
    (**(code **)(*param_3 + 0x48))(param_3);
  }
  (**(code **)(*param_3 + 0x60))(param_3);
  if (bVar9 == 0) {
    pcVar7 = "";
    local_c8 = (longlong *)0x0;
  }
  else {
    pcVar7 = "PxAggregate";
  }
  *param_2 = pcVar7;
  param_2[1] = local_c8;
  param_2[2] = local_c8;
  return param_2;
}



// FUNCTION 1432a0340 objectToFileImpl body=1576 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxClothFabricRepXSerializer::objectToFileImpl
               (undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
               undefined8 *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined *puVar14;
  int iVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *local_res10 [2];
  longlong *local_res20;
  undefined8 *local_d0;
  undefined4 *local_c8;
  ulonglong local_c0;
  char local_b8 [128];
  
  puVar5 = param_5;
  puVar1 = (undefined8 *)param_5[2];
  local_res10[0] = param_2;
  local_res20 = param_4;
  uVar7 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar8 = (**(code **)(*param_2 + 0x30))(param_2);
  uVar9 = (**(code **)(*param_2 + 0x38))(param_2);
  uVar10 = (**(code **)(*param_2 + 0x40))(param_2);
  uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar12 = (**(code **)(*param_2 + 0x50))(param_2);
  uVar16 = 0;
  local_c8 = (undefined4 *)0x0;
  local_c0 = 0;
  uVar2 = uVar11;
  if (uVar11 < uVar9) {
    uVar2 = uVar9;
  }
  param_5._0_1_ = 0;
  if (uVar2 < uVar12) {
    uVar2 = uVar12;
  }
  uVar13 = (ulonglong)uVar2;
  if ((ulonglong)uVar2 * 4 < (ulonglong)uVar12 * 4) {
    uVar13 = (ulonglong)uVar12;
  }
  uVar3 = uVar13 << 2;
  if (uVar13 << 2 < (ulonglong)uVar8 << 3) {
    uVar3 = (ulonglong)uVar8 << 3;
  }
  local_d0 = puVar1;
  shdfnd::Array<unsigned_char,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_char>_>::
  resize(&local_d0,uVar3 & 0xffffffff,&param_5);
  physx::operator<<(puVar5,uVar7);
  param_5._0_1_ = 0;
  (**(code **)*puVar5)(puVar5,&param_5,1);
  (**(code **)(*local_res20 + 0x10))(local_res20,"NbParticles",puVar5[4]);
  puVar6 = local_c8;
  plVar18 = local_res10[0];
  puVar5[3] = 0;
  (**(code **)(*param_2 + 0x58))(local_res10[0],local_c8,uVar8);
  if ((uVar8 != 0) && (puVar6 != (undefined4 *)0x0)) {
    puVar17 = puVar6;
    if (uVar8 != 0) {
      do {
        iVar15 = (int)uVar16;
        if ((iVar15 == 0) || (iVar15 != (int)(uVar16 / 0x12) * 0x12)) {
          uVar19 = 1;
          puVar14 = &DAT_145af3920;
        }
        else {
          uVar19 = 4;
          puVar14 = &DAT_145af6094;
        }
        (**(code **)*puVar5)(puVar5,puVar14,uVar19);
        writeFabricPhase(puVar5,puVar17);
        uVar16 = (ulonglong)(iVar15 + 1U);
        plVar18 = local_res10[0];
        puVar17 = puVar17 + 2;
      } while (iVar15 + 1U < uVar8);
    }
    param_5._0_1_ = 0;
    (**(code **)*puVar5)(puVar5,&param_5,1);
    (**(code **)(*local_res20 + 0x10))(local_res20,"Phases",puVar5[4]);
    puVar5[3] = 0;
  }
  uVar16 = 0;
  (**(code **)(*plVar18 + 0x70))(plVar18,puVar6,uVar9);
  plVar21 = local_res20;
  if ((uVar9 != 0) && (puVar6 != (undefined4 *)0x0)) {
    if (uVar9 != 0) {
      do {
        iVar15 = (int)uVar16;
        if ((iVar15 == 0) || (iVar15 != (int)(uVar16 / 0x12) * 0x12)) {
          uVar19 = 1;
          puVar14 = &DAT_145af3920;
        }
        else {
          uVar19 = 4;
          puVar14 = &DAT_145af6094;
        }
        (**(code **)*puVar5)(puVar5,puVar14,uVar19);
        ::_guard_xfg_dispatch_icall_nop(local_b8,0,0x80);
        physx::shdfnd::snprintf(local_b8,0x80,"%g");
        if (local_b8[0] != '\0') {
          lVar20 = -1;
          do {
            lVar4 = lVar20 + 1;
            lVar20 = lVar20 + 1;
          } while (local_b8[lVar4] != '\0');
          (**(code **)*puVar5)(puVar5,local_b8);
        }
        uVar16 = (ulonglong)(iVar15 + 1U);
        plVar18 = local_res10[0];
      } while (iVar15 + 1U < uVar9);
    }
    param_5._0_1_ = 0;
    (**(code **)*puVar5)(puVar5,&param_5,1);
    plVar21 = local_res20;
    (**(code **)(*local_res20 + 0x10))(local_res20,"Restvalues",puVar5[4]);
    puVar5[3] = 0;
  }
  uVar16 = 0;
  (**(code **)(*plVar18 + 0x60))(plVar18,puVar6,uVar10);
  if ((uVar10 != 0) && (puVar6 != (undefined4 *)0x0)) {
    puVar17 = puVar6;
    if (uVar10 != 0) {
      do {
        iVar15 = (int)uVar16;
        if ((iVar15 == 0) || (iVar15 != (int)(uVar16 / 0x12) * 0x12)) {
          uVar19 = 1;
          puVar14 = &DAT_145af3920;
        }
        else {
          uVar19 = 4;
          puVar14 = &DAT_145af6094;
        }
        (**(code **)*puVar5)(puVar5,puVar14,uVar19);
        physx::operator<<(puVar5,*puVar17);
        uVar16 = (ulonglong)(iVar15 + 1U);
        plVar18 = local_res10[0];
        puVar17 = puVar17 + 1;
      } while (iVar15 + 1U < uVar10);
    }
    local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffffffffff00);
    (**(code **)*puVar5)(puVar5,&local_res20,1);
    (**(code **)(*plVar21 + 0x10))(plVar21,&DAT_145af5d94,puVar5[4]);
    puVar5[3] = 0;
  }
  uVar16 = 0;
  (**(code **)(*plVar18 + 0x68))(plVar18,puVar6,uVar11);
  if ((uVar11 != 0) && (puVar6 != (undefined4 *)0x0)) {
    puVar17 = puVar6;
    if (uVar11 != 0) {
      do {
        iVar15 = (int)uVar16;
        if ((iVar15 == 0) || (iVar15 != (int)(uVar16 / 0x12) * 0x12)) {
          uVar19 = 1;
          puVar14 = &DAT_145af3920;
        }
        else {
          uVar19 = 4;
          puVar14 = &DAT_145af6094;
        }
        (**(code **)*puVar5)(puVar5,puVar14,uVar19);
        physx::operator<<(puVar5,*puVar17);
        uVar16 = (ulonglong)(iVar15 + 1U);
        plVar18 = local_res10[0];
        puVar17 = puVar17 + 1;
      } while (iVar15 + 1U < uVar11);
    }
    local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffffffffff00);
    (**(code **)*puVar5)(puVar5,&local_res20,1);
    (**(code **)(*plVar21 + 0x10))(plVar21,"ParticleIndices",puVar5[4]);
    puVar5[3] = 0;
  }
  uVar16 = 0;
  (**(code **)(*plVar18 + 0x78))(plVar18,puVar6,uVar12);
  if ((uVar12 != 0) && (puVar6 != (undefined4 *)0x0)) {
    puVar17 = puVar6;
    if (uVar12 != 0) {
      do {
        iVar15 = (int)uVar16;
        if ((iVar15 == 0) || (iVar15 != (int)(uVar16 / 0x12) * 0x12)) {
          uVar19 = 1;
          puVar14 = &DAT_145af3920;
        }
        else {
          uVar19 = 4;
          puVar14 = &DAT_145af6094;
        }
        (**(code **)*puVar5)(puVar5,puVar14,uVar19);
        physx::operator<<(puVar5,*puVar17);
        uVar16 = (ulonglong)(iVar15 + 1U);
        plVar18 = local_res10[0];
        puVar17 = puVar17 + 1;
      } while (iVar15 + 1U < uVar12);
    }
    local_res10[0] = (longlong *)((ulonglong)local_res10[0] & 0xffffffffffffff00);
    (**(code **)*puVar5)(puVar5,local_res10,1);
    (**(code **)(*plVar21 + 0x10))(plVar21,"TetherAnchors",puVar5[4]);
    puVar5[3] = 0;
  }
  uVar16 = 0;
  (**(code **)(*plVar18 + 0x80))(plVar18,puVar6,uVar12);
  if ((uVar12 != 0) && (puVar6 != (undefined4 *)0x0)) {
    if (uVar12 != 0) {
      do {
        iVar15 = (int)uVar16;
        if ((iVar15 == 0) || (iVar15 != (int)(uVar16 / 0x12) * 0x12)) {
          uVar19 = 1;
          puVar14 = &DAT_145af3920;
        }
        else {
          uVar19 = 4;
          puVar14 = &DAT_145af6094;
        }
        (**(code **)*puVar5)(puVar5,puVar14,uVar19);
        ::_guard_xfg_dispatch_icall_nop(local_b8,0,0x80);
        physx::shdfnd::snprintf(local_b8,0x80,"%g");
        if (local_b8[0] != '\0') {
          lVar20 = -1;
          do {
            lVar4 = lVar20 + 1;
            lVar20 = lVar20 + 1;
          } while (local_b8[lVar4] != '\0');
          (**(code **)*puVar5)(puVar5,local_b8);
        }
        uVar16 = (ulonglong)(iVar15 + 1U);
      } while (iVar15 + 1U < uVar12);
    }
    local_res10[0] = (longlong *)((ulonglong)local_res10[0] & 0xffffffffffffff00);
    (**(code **)*puVar5)(puVar5,local_res10,1);
    (**(code **)(*plVar21 + 0x10))(plVar21,"TetherLengths",puVar5[4]);
    puVar5[3] = 0;
  }
  if ((((local_c0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_c0)) &&
     (puVar6 != (undefined4 *)0x0)) {
    (**(code **)(*(longlong *)*local_d0 + 0x10))((longlong *)*local_d0,puVar6);
  }
  return;
}



// FUNCTION 1432a0970 fileToObject body=384 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxClothFabricRepXSerializer::fileToObject
          (undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  char *local_res10;
  char *local_res18 [2];
  ulong local_78;
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [32];
  
  ::_guard_xfg_dispatch_icall_nop(&local_78,0,0x58);
  cVar1 = (**(code **)(*param_3 + 0x10))(param_3,"NbParticles",&local_res10);
  if (cVar1 != '\0') {
    local_res18[0] = local_res10;
    if ((local_res10 != (char *)0x0) && (*local_res10 != '\0')) {
      local_78 = strtoul(local_res10,local_res18,10);
    }
  }
  Sn::readStridedBufferProperty<physx::PxClothFabricPhase>
            (param_3,"Phases",local_70,&local_res10,local_74,param_4);
  Sn::readStridedBufferProperty<float>
            (param_3,"Restvalues",local_50,&local_res10,local_res18,param_4);
  Sn::readStridedBufferProperty<unsigned_int>
            (param_3,&DAT_145af5d94,local_60,&local_res10,local_68,param_4);
  Sn::readStridedBufferProperty<unsigned_int>
            (param_3,"ParticleIndices",local_58,&local_res10,local_res18,param_4);
  Sn::readStridedBufferProperty<unsigned_int>
            (param_3,"TetherAnchors",local_40,&local_res10,local_48,param_4);
  Sn::readStridedBufferProperty<float>
            (param_3,"TetherLengths",local_38,&local_res10,local_48,param_4);
  uVar2 = (**(code **)(*(longlong *)*param_5 + 0x70))((longlong *)*param_5,&local_78);
  param_2[1] = uVar2;
  param_2[2] = uVar2;
  *param_2 = "PxClothFabric";
  return param_2;
}



// FUNCTION 1432a0b00 objectToFileImpl body=3976 status=ok
// SIG undefined objectToFileImpl(void)

void physx::PxClothRepXSerializer::objectToFileImpl
               (undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  longlong *local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  undefined8 *local_118;
  undefined4 *local_110;
  ulonglong local_108;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  undefined8 *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  char local_c8 [128];
  undefined4 *local_48;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  plVar7 = (longlong *)(**(code **)(*param_2 + 0xb0))(param_2);
  uVar3 = (**(code **)(*param_2 + 0xa8))(param_2);
  lVar17 = plVar7[1];
  uVar11 = 0;
  puVar1 = (undefined8 *)CONCAT71(param_5._1_7_,(undefined1)param_5);
  if ((uVar3 != 0) && (lVar17 != 0)) {
    if (uVar3 != 0) {
      do {
        if ((uVar11 == 0) || ((uVar11 & 3) != 0)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        puVar8 = (undefined8 *)physx::operator<<(puVar1,lVar17);
        (**(code **)*puVar8)(puVar8,&DAT_145af3920,1);
        ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
        physx::shdfnd::snprintf(local_c8,0x80,"%g");
        if (local_c8[0] != '\0') {
          lVar16 = -1;
          do {
            lVar2 = lVar16 + 1;
            lVar16 = lVar16 + 1;
          } while (local_c8[lVar2] != '\0');
          (**(code **)*puVar8)(puVar8,local_c8);
        }
        uVar11 = uVar11 + 1;
        lVar17 = lVar17 + 0x10;
        param_2 = local_res10;
      } while (uVar11 < uVar3);
    }
    param_5._0_1_ = 0;
    (**(code **)*puVar1)(puVar1,&param_5,1);
    (**(code **)(*param_4 + 0x10))(param_4,"Particles",puVar1[4]);
    puVar1[3] = 0;
  }
  (**(code **)(*plVar7 + 8))(plVar7);
  uVar15 = (**(code **)(*param_2 + 0xa0))(param_2);
  Sn::writeReference<physx::PxClothFabric>(param_4,local_res18,"Fabric",uVar15);
  local_118 = (undefined8 *)puVar1[2];
  local_110 = (undefined4 *)0x0;
  local_108 = 0;
  uVar11 = (**(code **)(*param_2 + 0x268))(param_2);
  local_f8 = uVar11;
  iVar4 = (**(code **)(*param_2 + 0x280))(param_2);
  uVar3 = iVar4 * 2;
  local_100 = uVar3;
  uVar5 = (**(code **)(*param_2 + 0x2a0))(param_2);
  local_f4 = uVar5;
  uVar6 = (**(code **)(*param_2 + 0x2b8))(param_2);
  local_fc = uVar6;
  local_f0 = (**(code **)(*param_2 + 0x2d8))(param_2);
  param_5._0_1_ = 0;
  shdfnd::Array<unsigned_char,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_char>_>::
  resize(&local_118,(uVar6 + local_f0 + local_f0 * 8 + (uVar11 + uVar5) * 4 + uVar3) * 4,&param_5);
  puVar19 = local_110 + (ulonglong)uVar11 * 4;
  puVar12 = puVar19 + uVar3;
  puVar13 = puVar12 + (ulonglong)uVar5 * 4;
  local_48 = puVar13 + local_fc;
  (**(code **)(*param_2 + 0x2e0))(param_2,local_110,puVar19,puVar12,puVar13,local_48);
  if ((uVar11 != 0) && (local_110 != (undefined4 *)0x0)) {
    uVar3 = 0;
    puVar18 = local_110;
    if (uVar11 != 0) {
      do {
        if ((uVar3 == 0) || ((uVar3 & 3) != 0)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        puVar8 = (undefined8 *)physx::operator<<(puVar1,puVar18);
        (**(code **)*puVar8)(puVar8,&DAT_145af3920,1);
        ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
        physx::shdfnd::snprintf(local_c8,0x80,"%g");
        if (local_c8[0] != '\0') {
          lVar17 = -1;
          do {
            lVar16 = lVar17 + 1;
            lVar17 = lVar17 + 1;
          } while (local_c8[lVar16] != '\0');
          (**(code **)*puVar8)(puVar8,local_c8);
        }
        uVar3 = uVar3 + 1;
        puVar18 = puVar18 + 4;
      } while (uVar3 < local_f8);
    }
    param_5._0_1_ = 0;
    (**(code **)*puVar1)(puVar1,&param_5,1);
    (**(code **)(*local_res20 + 0x10))(local_res20,"CollisionSpheres",puVar1[4]);
    puVar1[3] = 0;
    uVar3 = local_100;
  }
  uVar11 = local_100;
  uVar9 = 0;
  plVar7 = local_res20;
  if ((uVar3 != 0) && (puVar19 != (undefined4 *)0x0)) {
    if (local_100 != 0) {
      do {
        iVar4 = (int)uVar9;
        if ((iVar4 == 0) || (iVar4 != (int)(uVar9 / 0x12) * 0x12)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        physx::operator<<(puVar1,*puVar19);
        uVar9 = (ulonglong)(iVar4 + 1U);
        puVar19 = puVar19 + 1;
      } while (iVar4 + 1U < uVar11);
    }
    param_5._0_1_ = 0;
    (**(code **)*puVar1)(puVar1,&param_5,1);
    plVar7 = local_res20;
    (**(code **)(*local_res20 + 0x10))(local_res20,"CollisionSpherePairs",puVar1[4]);
    puVar1[3] = 0;
  }
  uVar3 = local_f4;
  if ((local_f4 != 0) && (puVar12 != (undefined4 *)0x0)) {
    uVar11 = 0;
    if (local_f4 != 0) {
      do {
        if ((uVar11 == 0) || ((uVar11 & 3) != 0)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        puVar8 = (undefined8 *)physx::operator<<(puVar1,puVar12);
        (**(code **)*puVar8)(puVar8,&DAT_145af3920,1);
        ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
        physx::shdfnd::snprintf(local_c8,0x80,"%g");
        if (local_c8[0] != '\0') {
          lVar17 = -1;
          do {
            lVar16 = lVar17 + 1;
            lVar17 = lVar17 + 1;
          } while (local_c8[lVar16] != '\0');
          (**(code **)*puVar8)(puVar8,local_c8);
        }
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 4;
      } while (uVar11 < uVar3);
    }
    param_5._0_1_ = 0;
    (**(code **)*puVar1)(puVar1,&param_5,1);
    plVar7 = local_res20;
    (**(code **)(*local_res20 + 0x10))(local_res20,"CollisionPlanes",puVar1[4]);
    puVar1[3] = 0;
  }
  uVar3 = local_fc;
  uVar9 = 0;
  if ((local_fc != 0) && (puVar13 != (undefined4 *)0x0)) {
    if (local_fc != 0) {
      do {
        iVar4 = (int)uVar9;
        if ((iVar4 == 0) || (iVar4 != (int)(uVar9 / 0x12) * 0x12)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        physx::operator<<(puVar1,*puVar13);
        uVar9 = (ulonglong)(iVar4 + 1U);
        puVar13 = puVar13 + 1;
      } while (iVar4 + 1U < uVar3);
    }
    param_5._0_1_ = 0;
    (**(code **)*puVar1)(puVar1,&param_5,1);
    plVar7 = local_res20;
    (**(code **)(*local_res20 + 0x10))(local_res20,"CollisionConvexMasks",puVar1[4]);
    puVar1[3] = 0;
  }
  uVar3 = local_f0;
  if ((local_f0 != 0) && (local_48 != (undefined4 *)0x0)) {
    uVar11 = 0;
    if (local_f0 != 0) {
      puVar12 = local_48 + 6;
      do {
        if ((uVar11 == 0) || ((uVar11 & 3) != 0)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        puVar8 = (undefined8 *)physx::operator<<(puVar1,puVar12 + -6);
        (**(code **)*puVar8)(puVar8,&DAT_145af3920,1);
        puVar8 = (undefined8 *)physx::operator<<(puVar8,puVar12 + -3);
        (**(code **)*puVar8)(puVar8,&DAT_145af3920,1);
        physx::operator<<(puVar8,puVar12);
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 9;
        plVar7 = local_res20;
      } while (uVar11 < uVar3);
    }
    param_5._0_1_ = 0;
    (**(code **)*puVar1)(puVar1,&param_5,1);
    (**(code **)(*plVar7 + 0x10))(plVar7,"CollisionTriangles",puVar1[4]);
    puVar1[3] = 0;
  }
  plVar7 = local_res10;
  uVar11 = 0;
  uVar3 = (**(code **)(*local_res10 + 0x1b0))(local_res10);
  if ((uint)local_108 < uVar3 << 4) {
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    shdfnd::Array<unsigned_char,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_char>_>
    ::resize(&local_118,uVar3 << 4,&local_res10);
  }
  puVar12 = local_110;
  (**(code **)(*plVar7 + 0x1a8))(plVar7,local_110);
  if ((uVar3 != 0) && (puVar12 != (undefined4 *)0x0)) {
    puVar13 = puVar12;
    if (uVar3 != 0) {
      do {
        if ((uVar11 == 0) || ((uVar11 & 3) != 0)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        puVar8 = (undefined8 *)physx::operator<<(puVar1,puVar13);
        (**(code **)*puVar8)(puVar8,&DAT_145af3920,1);
        ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
        physx::shdfnd::snprintf(local_c8,0x80,"%g");
        if (local_c8[0] != '\0') {
          lVar17 = -1;
          do {
            lVar16 = lVar17 + 1;
            lVar17 = lVar17 + 1;
          } while (local_c8[lVar16] != '\0');
          (**(code **)*puVar8)(puVar8,local_c8);
        }
        uVar11 = uVar11 + 1;
        puVar13 = puVar13 + 4;
      } while (uVar11 < uVar3);
    }
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    (**(code **)*puVar1)(puVar1,&local_res10,1);
    (**(code **)(*local_res20 + 0x10))(local_res20,"ParticleAccelerations",puVar1[4]);
    puVar1[3] = 0;
  }
  uVar9 = 0;
  uVar3 = (**(code **)(*plVar7 + 0x360))(plVar7);
  puVar13 = puVar12;
  if ((uint)local_108 < uVar3 * 4) {
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    shdfnd::Array<unsigned_char,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_char>_>
    ::resize(&local_118,uVar3 * 4,&local_res10);
    puVar13 = local_110;
  }
  (**(code **)(*plVar7 + 0x358))(plVar7,puVar12);
  plVar14 = local_res20;
  if ((uVar3 != 0) && (puVar12 != (undefined4 *)0x0)) {
    if (uVar3 != 0) {
      do {
        iVar4 = (int)uVar9;
        if ((iVar4 == 0) || (iVar4 != (int)(uVar9 / 0x12) * 0x12)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        physx::operator<<(puVar1,*puVar12);
        uVar9 = (ulonglong)(iVar4 + 1U);
        puVar12 = puVar12 + 1;
      } while (iVar4 + 1U < uVar3);
    }
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    (**(code **)*puVar1)(puVar1,&local_res10,1);
    plVar14 = local_res20;
    (**(code **)(*local_res20 + 0x10))(local_res20,"SelfCollisionIndices",puVar1[4]);
    puVar1[3] = 0;
  }
  uVar5 = 0;
  uVar11 = (**(code **)(*plVar7 + 0x1f8))(plVar7);
  uVar3 = (uint)local_108;
  if ((uint)local_108 < uVar11 << 4) {
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    shdfnd::Array<unsigned_char,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_char>_>
    ::resize(&local_118,uVar11 << 4,&local_res10);
    uVar3 = (uint)local_108;
  }
  (**(code **)(*plVar7 + 0x1f0))(plVar7,puVar13);
  if ((uVar11 != 0) && (puVar13 != (undefined4 *)0x0)) {
    if (uVar11 != 0) {
      do {
        if ((uVar5 == 0) || ((uVar5 & 3) != 0)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        puVar8 = (undefined8 *)physx::operator<<(puVar1,puVar13);
        (**(code **)*puVar8)(puVar8,&DAT_145af3920,1);
        ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
        physx::shdfnd::snprintf(local_c8,0x80,"%g");
        if (local_c8[0] != '\0') {
          lVar17 = -1;
          do {
            lVar16 = lVar17 + 1;
            lVar17 = lVar17 + 1;
          } while (local_c8[lVar16] != '\0');
          (**(code **)*puVar8)(puVar8,local_c8);
        }
        uVar5 = uVar5 + 1;
        puVar13 = puVar13 + 4;
        plVar14 = local_res20;
      } while (uVar5 < uVar11);
    }
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    (**(code **)*puVar1)(puVar1,&local_res10,1);
    (**(code **)(*plVar14 + 0x10))(plVar14,"MotionConstraints",puVar1[4]);
    puVar1[3] = 0;
  }
  uVar5 = 0;
  uVar11 = (**(code **)(*plVar7 + 0x220))(plVar7);
  if (uVar3 < uVar11 << 4) {
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    shdfnd::Array<unsigned_char,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_char>_>
    ::resize(&local_118,uVar11 << 4,&local_res10);
  }
  puVar12 = local_110;
  (**(code **)(*plVar7 + 0x218))(plVar7,local_110);
  if ((uVar11 != 0) && (puVar12 != (undefined4 *)0x0)) {
    puVar13 = puVar12;
    if (uVar11 != 0) {
      do {
        if ((uVar5 == 0) || ((uVar5 & 3) != 0)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        puVar8 = (undefined8 *)physx::operator<<(puVar1,puVar13);
        (**(code **)*puVar8)(puVar8,&DAT_145af3920,1);
        ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
        physx::shdfnd::snprintf(local_c8,0x80,"%g");
        if (local_c8[0] != '\0') {
          lVar17 = -1;
          do {
            lVar16 = lVar17 + 1;
            lVar17 = lVar17 + 1;
          } while (local_c8[lVar16] != '\0');
          (**(code **)*puVar8)(puVar8,local_c8);
        }
        uVar5 = uVar5 + 1;
        plVar14 = local_res20;
        puVar13 = puVar13 + 4;
      } while (uVar5 < uVar11);
    }
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    (**(code **)*puVar1)(puVar1,&local_res10,1);
    (**(code **)(*plVar14 + 0x10))(plVar14,"SeparationConstraints",puVar1[4]);
    puVar1[3] = 0;
  }
  uVar11 = 0;
  uVar3 = (**(code **)(*plVar7 + 0x378))(plVar7);
  if ((uint)local_108 < uVar3 << 4) {
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    shdfnd::Array<unsigned_char,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_char>_>
    ::resize(&local_118,uVar3 << 4,&local_res10);
    puVar12 = local_110;
  }
  (**(code **)(*plVar7 + 0x370))(plVar7,puVar12);
  if ((uVar3 != 0) && (puVar12 != (undefined4 *)0x0)) {
    puVar13 = puVar12;
    if (uVar3 != 0) {
      do {
        if ((uVar11 == 0) || ((uVar11 & 3) != 0)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        puVar8 = (undefined8 *)physx::operator<<(puVar1,puVar13);
        (**(code **)*puVar8)(puVar8,&DAT_145af3920,1);
        ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
        physx::shdfnd::snprintf(local_c8,0x80,"%g");
        if (local_c8[0] != '\0') {
          lVar17 = -1;
          do {
            lVar16 = lVar17 + 1;
            lVar17 = lVar17 + 1;
          } while (local_c8[lVar16] != '\0');
          (**(code **)*puVar8)(puVar8,local_c8);
        }
        uVar11 = uVar11 + 1;
        plVar14 = local_res20;
        puVar13 = puVar13 + 4;
      } while (uVar11 < uVar3);
    }
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    (**(code **)*puVar1)(puVar1,&local_res10,1);
    (**(code **)(*plVar14 + 0x10))(plVar14,"RestPositions",puVar1[4]);
    puVar1[3] = 0;
  }
  iVar4 = (**(code **)(*plVar7 + 0x2f0))(plVar7);
  uVar5 = iVar4 * 4;
  uVar11 = (**(code **)(*plVar7 + 0x300))(plVar7);
  uVar3 = (uint)((ulonglong)uVar11 * 0xc);
  if ((ulonglong)uVar11 * 0xc < (ulonglong)uVar5 << 2) {
    uVar3 = (uint)((ulonglong)uVar5 << 2);
  }
  if ((uint)local_108 < uVar3) {
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    shdfnd::Array<unsigned_char,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_char>_>
    ::resize(&local_118,uVar3,&local_res10);
    puVar12 = local_110;
  }
  (**(code **)(*plVar7 + 0x308))(plVar7,puVar12);
  if ((uVar11 != 0) && (puVar12 != (undefined4 *)0x0)) {
    uVar3 = 0;
    puVar13 = puVar12;
    if (uVar11 != 0) {
      do {
        if ((uVar3 == 0) || (uVar3 != (uVar3 / 6) * 6)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        physx::operator<<(puVar1,puVar13);
        uVar3 = uVar3 + 1;
        plVar14 = local_res20;
        puVar13 = puVar13 + 3;
      } while (uVar3 < uVar11);
    }
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    (**(code **)*puVar1)(puVar1,&local_res10,1);
    (**(code **)(*plVar14 + 0x10))(plVar14,"VirtualParticleWeights",puVar1[4]);
    puVar1[3] = 0;
  }
  uVar9 = 0;
  (**(code **)(*plVar7 + 0x2f8))(plVar7,puVar12);
  if ((uVar5 != 0) && (puVar12 != (undefined4 *)0x0)) {
    puVar13 = puVar12;
    if (uVar5 != 0) {
      do {
        iVar4 = (int)uVar9;
        if ((iVar4 == 0) || (iVar4 != (int)(uVar9 / 0x12) * 0x12)) {
          uVar15 = 1;
          puVar10 = &DAT_145af3920;
        }
        else {
          uVar15 = 4;
          puVar10 = &DAT_145af6094;
        }
        (**(code **)*puVar1)(puVar1,puVar10,uVar15);
        physx::operator<<(puVar1,*puVar13);
        uVar9 = (ulonglong)(iVar4 + 1U);
        plVar14 = local_res20;
        puVar13 = puVar13 + 1;
      } while (iVar4 + 1U < uVar5);
    }
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
    (**(code **)*puVar1)(puVar1,&local_res10,1);
    (**(code **)(*plVar14 + 0x10))(plVar14,"VirtualParticles",puVar1[4]);
    puVar1[3] = 0;
  }
  local_e8 = (undefined8 *)puVar1[2];
  local_e0 = 0;
  local_d8 = 0;
  Sn::writeAllProperties<physx::PxCloth>(&local_e8,plVar7,plVar14,puVar1,local_res18);
  if ((((local_d8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_d8)) && (local_e0 != 0)) {
    (**(code **)(*(longlong *)*local_e8 + 0x10))();
  }
  if ((((local_108 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_108)) &&
     (puVar12 != (undefined4 *)0x0)) {
    (**(code **)(*(longlong *)*local_118 + 0x10))((longlong *)*local_118,puVar12);
  }
  return;
}



// FUNCTION 1432a1a90 fileToObject body=1341 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::PxClothRepXSerializer::fileToObject
          (undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  undefined2 local_res18;
  undefined2 uStackX_1a;
  undefined4 uStackX_1c;
  char *local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  uint local_100;
  undefined4 local_fc;
  int local_f8;
  undefined4 local_f4;
  int local_f0;
  undefined4 local_ec;
  int local_e8 [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 *local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  
  local_b8 = 0;
  local_90 = 0;
  local_88 = (undefined4 *)0x0;
  local_80 = 0;
  local_78 = (undefined4 *)0x0;
  local_70 = 0;
  local_98 = 0;
  local_104 = 0;
  local_b0 = 0;
  local_110 = 0;
  local_a8 = 0;
  local_10c = 0;
  local_a0 = 0;
  local_108 = 0;
  local_68 = 0;
  local_100 = 0;
  local_60 = 0;
  local_58 = 0;
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"Fabric",&local_res18);
  if ((((cVar3 == '\0') ||
       (local_118 = (char *)CONCAT44(uStackX_1c,CONCAT22(uStackX_1a,local_res18)),
       local_118 == (char *)0x0)) || (*local_118 == '\0')) ||
     ((uVar4 = _strtoui64(local_118,&local_118,10), uVar4 == 0 ||
      (lVar5 = Sn::findReferencedObject<physx::PxConvexMesh>(param_6,uVar4), lVar5 == 0)))) {
    param_2[1] = 0;
    *param_2 = &DAT_145af3922;
    param_2[2] = 0;
  }
  else {
    FUN_1432a3b40(param_3,"Particles",&local_b8,&local_res18,&local_118,param_4);
    FUN_1432a33b0(param_3,"CollisionSpheres",&local_90,&local_res18,&local_fc,param_4);
    Sn::readStridedBufferProperty<unsigned_int>
              (param_3,"CollisionSpherePairs",&local_88,&local_res18,&local_f8,param_4);
    FUN_1432a3190(param_3,"CollisionPlanes",&local_80,&local_res18,&local_f4,param_4);
    Sn::readStridedBufferProperty<unsigned_int>
              (param_3,"CollisionConvexMasks",&local_78,&local_res18,&local_f0,param_4);
    Sn::readStridedBufferProperty<physx::PxClothCollisionTriangle>
              (param_3,"CollisionTriangles",&local_70,&local_res18,&local_ec,param_4);
    cVar3 = (**(code **)(*param_3 + 0x10))(param_3,"ClothFlags",&local_118);
    uVar8 = 0;
    if (cVar3 != '\0') {
      local_res18 = 0;
      uStackX_1a = 0;
      Sn::stringToFlagsType(local_118,param_4,&local_res18,&PTR_s_eDEFAULT_1467ca600);
      uVar8 = local_res18;
    }
    FUN_1432a4570(param_3,"ParticleAccelerations",&local_98,&local_res18,&local_104,param_4);
    Sn::readStridedBufferProperty<unsigned_int>
              (param_3,"SelfCollisionIndices",&local_b0,&local_res18,&local_110,param_4);
    FUN_1432a3d60(param_3,"MotionConstraints",&local_a8,&local_res18,&local_10c,param_4);
    FUN_1432a3f80(param_3,"SeparationConstraints",&local_a0,&local_res18,&local_108,param_4);
    FUN_1432a4570(param_3,"RestPositions",&local_68,&local_res18,local_e8,param_4);
    Sn::readStridedBufferProperty<physx::PxVec3>
              (param_3,"VirtualParticleWeights",&local_60,&local_res18,&local_118,param_4);
    Sn::readStridedBufferProperty<unsigned_int>
              (param_3,"VirtualParticles",&local_58,&local_res18,&local_100,param_4);
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0x3f800000;
    local_40 = 0;
    local_38 = 0;
    local_res18 = uVar8;
    plVar6 = (longlong *)
             (**(code **)(*(longlong *)*param_5 + 200))
                       ((longlong *)*param_5,&local_50,lVar5,local_b8,&local_res18);
    local_d8 = *param_5;
    uStack_d0 = param_5[1];
    local_c8 = (longlong *)param_5[2];
    cVar3 = Sn::readAllProperties<physx::PxCloth>(&local_d8,param_3,plVar6,param_4,param_6);
    if (local_110 != 0) {
      (**(code **)(*plVar6 + 0x350))(plVar6,local_b0);
    }
    if (local_10c != 0) {
      (**(code **)(*plVar6 + 0x1e8))(plVar6,local_a8);
    }
    if (local_108 != 0) {
      (**(code **)(*plVar6 + 0x210))(plVar6,local_a0);
    }
    if (local_104 != 0) {
      (**(code **)(*plVar6 + 0x1a0))(plVar6,local_98);
    }
    (**(code **)(*plVar6 + 0x260))(plVar6,local_90,local_fc);
    if (local_f8 != 0) {
      uVar4 = (ulonglong)((local_f8 - 1U >> 1) + 1);
      puVar9 = local_88;
      do {
        uVar2 = *puVar9;
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + 2;
        (**(code **)(*plVar6 + 0x270))(plVar6,uVar2,*puVar1);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    (**(code **)(*plVar6 + 0x298))(plVar6,local_80,local_f4);
    puVar9 = local_78;
    for (; local_f0 != 0; local_f0 = local_f0 + -1) {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
      (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar2);
    }
    (**(code **)(*plVar6 + 0x2d0))(plVar6,local_70,local_ec);
    if (local_e8[0] != 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6,local_68);
    }
    if (local_100 >> 2 != 0) {
      if ((int)local_118 != 0) {
        (**(code **)(*plVar6 + 0x2e8))
                  (plVar6,local_100 >> 2,local_58,(ulonglong)local_118 & 0xffffffff,local_60);
      }
    }
    if (cVar3 == '\0') {
      pcVar7 = "";
      local_c8 = (longlong *)0x0;
    }
    else {
      pcVar7 = "PxCloth";
      local_c8 = plVar6;
    }
    *param_2 = pcVar7;
    param_2[1] = local_c8;
    param_2[2] = local_c8;
  }
  return param_2;
}



// FUNCTION 1432a1fe0 materialAccess body=18 status=ok
// SIG undefined materialAccess(void)

undefined2 physx::materialAccess(longlong *param_1)

{
  undefined2 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x68))();
  return uVar1;
}



// FUNCTION 1432a2000 writeFabricPhase body=240 status=ok
// SIG undefined writeFabricPhase(void)

void physx::writeFabricPhase(undefined8 *param_1,int *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined **ppuVar4;
  longlong lVar5;
  longlong lVar6;
  char local_88 [128];
  
  ppuVar4 = &PTR_s_eVERTICAL_1467ca5b0;
  puVar2 = PTR_s_eVERTICAL_1467ca5b0;
  while (puVar2 != (undefined *)0x0) {
    if (((*(int *)(ppuVar4 + 1) == *param_2) && (pcVar1 = *ppuVar4, pcVar1 != (char *)0x0)) &&
       (*pcVar1 != '\0')) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pcVar1[lVar6] != '\0');
      (**(code **)*param_1)(param_1);
    }
    ppuVar4 = ppuVar4 + 2;
    puVar2 = *ppuVar4;
  }
  (**(code **)*param_1)(param_1,&DAT_145af3920,1);
  ::_guard_xfg_dispatch_icall_nop(local_88,0,0x80);
  physx::shdfnd::snprintf(local_88,0x80,"%u");
  if (local_88[0] != '\0') {
    lVar6 = -1;
    do {
      lVar5 = lVar6 + 1;
      lVar3 = lVar6 + 1;
      lVar6 = lVar5;
    } while (local_88[lVar3] != '\0');
    (**(code **)*param_1)(param_1,local_88,lVar5);
  }
  return;
}



// FUNCTION 1432a2100 FUN_1432a2100 body=76 status=ok
// SIG undefined FUN_1432a2100(void)

void FUN_1432a2100(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)physx::operator<<();
  (**(code **)*puVar1)(puVar1,&DAT_145af3920,1);
  physx::toStream<double>(puVar1,&DAT_145af391c,(double)*(float *)(param_2 + 0xc));
  return;
}



// FUNCTION 1432a2160 FUN_1432a2160 body=76 status=ok
// SIG undefined FUN_1432a2160(void)

void FUN_1432a2160(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)physx::operator<<();
  (**(code **)*puVar1)(puVar1,&DAT_145af3920,1);
  physx::toStream<double>(puVar1,&DAT_145af391c,(double)*(float *)(param_2 + 0xc));
  return;
}



// FUNCTION 1432a21c0 FUN_1432a21c0 body=76 status=ok
// SIG undefined FUN_1432a21c0(void)

void FUN_1432a21c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)physx::operator<<();
  (**(code **)*puVar1)(puVar1,&DAT_145af3920,1);
  physx::toStream<double>(puVar1,&DAT_145af391c,(double)*(float *)(param_2 + 0xc));
  return;
}



// FUNCTION 1432a2220 clothTriangleWriter body=102 status=ok
// SIG undefined clothTriangleWriter(void)

void physx::clothTriangleWriter(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator<<();
  (**(code **)*puVar1)(puVar1,&DAT_145af3920,1);
  puVar1 = (undefined8 *)operator<<(puVar1,param_2 + 0xc);
  (**(code **)*puVar1)(puVar1,&DAT_145af3920,1);
  operator<<(puVar1,param_2 + 0x18);
  return;
}



// FUNCTION 1432a2290 operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int> body=223 status=ok
// SIG undefined operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
     operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 local_res8 [8];
  
  pcVar5 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar6 = (*pcVar5)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar7 = "bad__repx__name";
  }
  else {
    pcVar7 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  puVar3 = (undefined8 *)param_1[3];
  plVar4 = (longlong *)param_1[1];
  physx::operator<<(puVar3,uVar6);
  local_res8[0] = 0;
  (**(code **)*puVar3)(puVar3,local_res8,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,pcVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 1432a2370 operator()<258,physx::PxHeightFieldDesc,enum_physx::PxHeightFieldFormat::Enum,enum_physx::PxHeightFieldFormat::Enum> body=156 status=ok
// SIG undefined operator()<258,physx::PxHeightFieldDesc,enum_physx::PxHeightFieldFormat::Enum,enum_physx::PxHeightFieldFormat::Enum>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxHeightFieldDesc>_>::
     operator()<258,physx::PxHeightFieldDesc,enum_physx::PxHeightFieldFormat::Enum,enum_physx::PxHeightFieldFormat::Enum>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *local_res8 [4];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res8[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar6 = "bad__repx__name";
    }
    else {
      pcVar6 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar6,local_res8);
    if (((cVar4 != '\0') && (local_res8[0] != (char *)0x0)) && (*local_res8[0] != '\0')) {
      uVar5 = Sn::findEnumByName(local_res8[0],&PTR_s_eS16_TM_1467ca0c0);
      (*pcVar3)(param_1[6],uVar5);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 1432a2410 operator()<258,physx::PxHeightFieldDesc,enum_physx::PxHeightFieldFormat::Enum,enum_physx::PxHeightFieldFormat::Enum> body=228 status=ok
// SIG undefined operator()<258,physx::PxHeightFieldDesc,enum_physx::PxHeightFieldFormat::Enum,enum_physx::PxHeightFieldFormat::Enum>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
     operator()<258,physx::PxHeightFieldDesc,enum_physx::PxHeightFieldFormat::Enum,enum_physx::PxHeightFieldFormat::Enum>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  undefined **ppuVar7;
  char *pcVar8;
  
  pcVar5 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar6 = (*pcVar5)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar8 = "bad__repx__name";
  }
  else {
    pcVar8 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  ppuVar7 = &PTR_s_eS16_TM_1467ca0c0;
  plVar3 = (longlong *)param_1[1];
  puVar4 = PTR_s_eS16_TM_1467ca0c0;
  while (puVar4 != (undefined *)0x0) {
    if (*(int *)(ppuVar7 + 1) == iVar6) {
      (**(code **)(*plVar3 + 0x10))(plVar3,pcVar8,*ppuVar7);
    }
    ppuVar7 = ppuVar7 + 2;
    puVar4 = *ppuVar7;
  }
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 1432a2500 operator()<262,physx::PxHeightFieldDesc,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>_> body=186 status=ok
// SIG undefined operator()<262,physx::PxHeightFieldDesc,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxHeightFieldDesc>_>::
     operator()<262,physx::PxHeightFieldDesc,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined4 local_res8 [2];
  char *local_res10 [3];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res10[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar5 = "bad__repx__name";
    }
    else {
      pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar5,local_res10)
    ;
    if (((cVar4 != '\0') && (local_res10[0] != (char *)0x0)) && (*local_res10[0] != '\0')) {
      local_res8[0] = 0;
      Sn::stringToFlagsType
                (local_res10[0],param_1[7],local_res8,&PTR_s_eNO_BOUNDARY_EDGES_1467ca1b0);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 1432a25c0 operator()<262,physx::PxHeightFieldDesc,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>_> body=165 status=ok
// SIG undefined operator()<262,physx::PxHeightFieldDesc,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
     operator()<262,physx::PxHeightFieldDesc,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined2 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [32];
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = (undefined2 *)(*pcVar3)(local_res8,param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eNO_BOUNDARY_EDGES_1467ca1b0);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 1432a2680 readAllProperties<physx::PxHeightFieldDesc> body=444 status=ok
// SIG undefined readAllProperties<physx::PxHeightFieldDesc>(void)

bool physx::Sn::readAllProperties<physx::PxHeightFieldDesc>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  bool bVar1;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  ulonglong local_190;
  undefined8 **local_188;
  undefined8 **local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined1 local_140;
  char *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  PxHeightFieldDescGeneratedInfo local_118 [24];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [64];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [40];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_1a0 = &local_res10;
  local_198 = 0;
  local_1b8 = &local_res10;
  local_190 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  physx::PxHeightFieldDescGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_118);
  local_178 = *param_1;
  uStack_170 = param_1[1];
  local_188 = &local_1a0;
  local_168 = param_1[2];
  local_180 = &local_1b8;
  local_res8[0] = '\0';
  local_148 = param_5;
  local_138 = local_res8;
  local_140 = 1;
  local_130 = 0;
  uStack_128 = 0;
  local_160 = param_2;
  local_158 = param_3;
  local_150 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(&local_188,local_100,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(&local_188,local_e0,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxHeightFieldDesc>_>::
  operator()<258,physx::PxHeightFieldDesc,enum_physx::PxHeightFieldFormat::Enum,enum_physx::PxHeightFieldFormat::Enum>
            (&local_188,local_c0,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_188,local_80,5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_188,local_60,6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxHeightFieldDesc>_>::
  operator()<262,physx::PxHeightFieldDesc,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>_>
            (&local_188,local_40,7);
  bVar1 = local_res8[0] == '\0';
  if ((((local_1a8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1a8)) && (local_1b0 != 0)) {
    (**(code **)(*(longlong *)*local_1b8 + 0x10))();
  }
  if ((((local_190 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_190)) && (local_198 != 0)) {
    (**(code **)(*(longlong *)*local_1a0 + 0x10))();
  }
  return bVar1;
}



// FUNCTION 1432a2840 readStridedBufferProperty<unsigned_char> body=435 status=ok
// SIG undefined readStridedBufferProperty<unsigned_char>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::Sn::readStridedBufferProperty<unsigned_char>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               int *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined1 *_Dst;
  uint uVar6;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *_Src;
  char *local_res18;
  char *local_res20;
  int iVar7;
  undefined1 *puVar8;
  
  puVar10 = (undefined1 *)0x0;
  *param_4 = 1;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res20);
  if (cVar2 != '\0') {
    if (local_res20 != (char *)0x0) {
      _DAT_146b62b64 = _DAT_146b62b64 + 1;
      pcVar5 = local_res20;
      puVar8 = puVar10;
      if (*local_res20 == '\0') {
        pcVar5 = "";
      }
      else {
        do {
          iVar7 = (int)puVar8;
          uVar6 = iVar7 + 1;
          pcVar5 = pcVar5 + 1;
          puVar8 = (undefined1 *)(ulonglong)uVar6;
        } while (*pcVar5 != '\0');
        pcVar5 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar7 + 2);
        ::_guard_xfg_dispatch_icall_nop(pcVar5,local_res20,(ulonglong)uVar6);
        ((undefined1 *)(ulonglong)uVar6)[(longlong)pcVar5] = 0;
      }
      uVar4 = (ulong)(byte)param_5;
      puVar8 = puVar10;
      _Src = puVar10;
      local_res18 = pcVar5;
      while (iVar7 = (int)puVar8, pcVar9 = local_res18, *local_res18 != '\0') {
        while (iVar3 = isspace((int)*pcVar9), iVar3 != 0) {
          pcVar9 = pcVar9 + 1;
          if (*pcVar9 == '\0') goto LAB_1432a2925;
        }
        if ((local_res18 != (char *)0x0) && (*local_res18 != '\0')) {
          uVar4 = strtoul(local_res18,&local_res18,10);
        }
        uVar6 = iVar7 + 1;
        _Dst = _Src;
        if ((uint)puVar10 < uVar6) {
          puVar10 = &DAT_00000020;
          if (0x20 < uVar6) {
            do {
              uVar1 = (int)puVar10 * 2;
              puVar10 = (undefined1 *)(ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
          _Dst = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar10);
          if (iVar7 != 0) {
            ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(size_t)puVar8);
          }
          (**(code **)(*param_6 + 0x10))(param_6,_Src);
        }
        puVar8[(longlong)_Dst] = (char)uVar4;
        puVar8 = (undefined1 *)(ulonglong)uVar6;
        _Src = _Dst;
      }
LAB_1432a2925:
      *param_3 = _Src;
      *param_5 = iVar7;
      (**(code **)(*param_6 + 0x10))(param_6,pcVar5);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a2a00 readStridedBufferProperty<unsigned_short> body=445 status=ok
// SIG undefined readStridedBufferProperty<unsigned_short>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::Sn::readStridedBufferProperty<unsigned_short>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined1 *_Dst;
  uint uVar6;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 *_Src;
  char *local_res18;
  char *local_res20;
  undefined1 *puVar7;
  
  puVar9 = (undefined1 *)0x0;
  *param_4 = 2;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res20);
  if (cVar2 != '\0') {
    if (local_res20 != (char *)0x0) {
      _DAT_146b62b60 = _DAT_146b62b60 + 1;
      pcVar5 = local_res20;
      puVar7 = puVar9;
      if (*local_res20 == '\0') {
        pcVar5 = "";
      }
      else {
        do {
          iVar3 = (int)puVar7;
          uVar6 = iVar3 + 1;
          pcVar5 = pcVar5 + 1;
          puVar7 = (undefined1 *)(ulonglong)uVar6;
        } while (*pcVar5 != '\0');
        pcVar5 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
        ::_guard_xfg_dispatch_icall_nop(pcVar5,local_res20,(ulonglong)uVar6);
        ((undefined1 *)(ulonglong)uVar6)[(longlong)pcVar5] = 0;
      }
      uVar4 = (ulong)(ushort)param_5;
      puVar7 = puVar9;
      _Src = puVar9;
      local_res18 = pcVar5;
      while (pcVar8 = local_res18, *local_res18 != '\0') {
        while (iVar3 = isspace((int)*pcVar8), iVar3 != 0) {
          pcVar8 = pcVar8 + 1;
          if (*pcVar8 == '\0') goto LAB_1432a2ae5;
        }
        if ((local_res18 != (char *)0x0) && (*local_res18 != '\0')) {
          uVar4 = strtoul(local_res18,&local_res18,10);
        }
        uVar6 = (int)puVar7 + 2;
        _Dst = _Src;
        if ((uint)puVar9 < uVar6) {
          puVar9 = &DAT_00000020;
          if (0x20 < uVar6) {
            do {
              uVar1 = (int)puVar9 * 2;
              puVar9 = (undefined1 *)(ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
          _Dst = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar9);
          if ((int)puVar7 != 0) {
            ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(size_t)puVar7);
          }
          (**(code **)(*param_6 + 0x10))(param_6,_Src);
        }
        *(short *)(puVar7 + (longlong)_Dst) = (short)uVar4;
        puVar7 = (undefined1 *)(ulonglong)uVar6;
        _Src = _Dst;
      }
LAB_1432a2ae5:
      *param_3 = _Src;
      *param_5 = (int)((ulonglong)puVar7 >> 1);
      (**(code **)(*param_6 + 0x10))(param_6,pcVar5);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a2bc0 readStridedBufferProperty<unsigned_int> body=444 status=ok
// SIG undefined readStridedBufferProperty<unsigned_int>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::Sn::readStridedBufferProperty<unsigned_int>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *_Size;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char *local_res18;
  char *local_res20;
  
  _Size = (undefined1 *)0x0;
  *param_4 = 4;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res20);
  if (cVar2 != '\0') {
    if (local_res20 != (char *)0x0) {
      _DAT_146b62b38 = _DAT_146b62b38 + 1;
      pcVar5 = local_res20;
      puVar6 = _Size;
      puVar9 = _Size;
      puVar10 = _Size;
      uVar4 = (ulong)param_5;
      if (*local_res20 == '\0') {
        local_res18 = "";
        pcVar5 = local_res18;
      }
      else {
        do {
          iVar3 = (int)puVar6;
          uVar7 = iVar3 + 1;
          pcVar5 = pcVar5 + 1;
          puVar6 = (undefined1 *)(ulonglong)uVar7;
        } while (*pcVar5 != '\0');
        pcVar5 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
        ::_guard_xfg_dispatch_icall_nop(pcVar5,local_res20,(ulonglong)uVar7);
        ((undefined1 *)(ulonglong)uVar7)[(longlong)pcVar5] = 0;
        local_res18 = pcVar5;
      }
      while (pcVar8 = local_res18, *local_res18 != '\0') {
        while (iVar3 = isspace((int)*pcVar8), iVar3 != 0) {
          pcVar8 = pcVar8 + 1;
          if (*pcVar8 == '\0') goto LAB_1432a2ca5;
        }
        if ((local_res18 != (char *)0x0) && (*local_res18 != '\0')) {
          uVar4 = strtoul(local_res18,&local_res18,10);
        }
        uVar7 = (int)_Size + 4;
        puVar6 = puVar10;
        if ((uint)puVar9 < uVar7) {
          puVar9 = &DAT_00000020;
          if (0x20 < uVar7) {
            do {
              uVar1 = (int)puVar9 * 2;
              puVar9 = (undefined1 *)(ulonglong)uVar1;
            } while (uVar1 < uVar7);
          }
          puVar6 = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar9);
          if ((int)_Size != 0) {
            ::_guard_xfg_dispatch_icall_nop(puVar6,puVar10,(size_t)_Size);
          }
          (**(code **)(*param_6 + 0x10))(param_6,puVar10);
        }
        *(ulong *)(_Size + (longlong)puVar6) = uVar4;
        _Size = (undefined1 *)(ulonglong)uVar7;
        puVar10 = puVar6;
      }
LAB_1432a2ca5:
      *param_3 = puVar10;
      *param_5 = (int)((ulonglong)_Size >> 2);
      (**(code **)(*param_6 + 0x10))(param_6,pcVar5);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a2d80 readStridedBufferProperty<float> body=449 status=ok
// SIG undefined readStridedBufferProperty<float>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::Sn::readStridedBufferProperty<float>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 *_Size;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined4 local_res8;
  char *local_res20;
  char *local_48 [2];
  
  _Size = (undefined1 *)0x0;
  *param_4 = 4;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,local_48);
  if (cVar2 != '\0') {
    if (local_48[0] != (char *)0x0) {
      _DAT_146b62b34 = _DAT_146b62b34 + 1;
      pcVar4 = local_48[0];
      puVar5 = _Size;
      puVar8 = _Size;
      puVar10 = _Size;
      if (*local_48[0] == '\0') {
        pcVar4 = "";
        local_res20 = pcVar4;
        pcVar9 = pcVar4;
      }
      else {
        do {
          iVar3 = (int)puVar5;
          uVar6 = iVar3 + 1;
          pcVar4 = pcVar4 + 1;
          puVar5 = (undefined1 *)(ulonglong)uVar6;
        } while (*pcVar4 != '\0');
        pcVar4 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
        ::_guard_xfg_dispatch_icall_nop(pcVar4,local_48[0],(ulonglong)uVar6);
        ((undefined1 *)(ulonglong)uVar6)[(longlong)pcVar4] = 0;
        local_res20 = pcVar4;
        pcVar9 = pcVar4;
      }
      while (pcVar7 = pcVar4, *pcVar4 != '\0') {
        while (iVar3 = isspace((int)*pcVar7), iVar3 != 0) {
          pcVar7 = pcVar7 + 1;
          if (*pcVar7 == '\0') goto LAB_1432a2e65;
        }
        if (*pcVar4 != '\0') {
          local_res8 = strToFloat(pcVar4,&local_res20);
          pcVar4 = local_res20;
        }
        uVar6 = (int)_Size + 4;
        puVar5 = puVar10;
        if ((uint)puVar8 < uVar6) {
          puVar8 = &DAT_00000020;
          if (0x20 < uVar6) {
            do {
              uVar1 = (int)puVar8 * 2;
              puVar8 = (undefined1 *)(ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
          puVar5 = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar8);
          if ((int)_Size != 0) {
            ::_guard_xfg_dispatch_icall_nop(puVar5,puVar10,(size_t)_Size);
          }
          (**(code **)(*param_6 + 0x10))(param_6,puVar10);
        }
        *(undefined4 *)(_Size + (longlong)puVar5) = local_res8;
        _Size = (undefined1 *)(ulonglong)uVar6;
        puVar10 = puVar5;
      }
LAB_1432a2e65:
      *param_3 = puVar10;
      *param_5 = (int)((ulonglong)_Size >> 2);
      (**(code **)(*param_6 + 0x10))(param_6,pcVar9);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a2f50 readStridedBufferProperty<physx::Sn::Triangle<unsigned_int>_> body=571 status=ok
// SIG undefined readStridedBufferProperty<physx::Sn::Triangle<unsigned_int>_>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::Sn::readStridedBufferProperty<physx::Sn::Triangle<unsigned_int>_>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               undefined4 *param_5,longlong *param_6)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  char *pcVar8;
  uint uVar9;
  ulonglong _Size;
  void *_Src;
  char *local_res8;
  char *local_res20;
  undefined8 local_48;
  
  *param_4 = 0xc;
  *param_3 = 0;
  *param_5 = 0;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res20);
  if (cVar1 != '\0') {
    uVar9 = 0;
    _Size = 0;
    _Src = (void *)0x0;
    if (local_res20 != (char *)0x0) {
      _DAT_146b62b6c = _DAT_146b62b6c + 1;
      if (*local_res20 == '\0') {
        local_res8 = "";
        pcVar5 = local_res8;
      }
      else {
        uVar7 = 0;
        pcVar5 = local_res20;
        do {
          iVar2 = (int)uVar7;
          uVar6 = iVar2 + 1;
          uVar7 = (ulonglong)uVar6;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pcVar5 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar2 + 2);
        ::_guard_xfg_dispatch_icall_nop(pcVar5,local_res20,(ulonglong)uVar6);
        pcVar5[uVar7] = '\0';
        local_res8 = pcVar5;
      }
      do {
        uVar4 = 0;
        cVar1 = *local_res8;
        pcVar8 = local_res8;
        while( true ) {
          if (cVar1 == '\0') {
            *param_3 = _Src;
            *param_5 = (int)(_Size / 0xc);
            (**(code **)(*param_6 + 0x10))(param_6,pcVar5);
            goto LAB_1432a3077;
          }
          iVar2 = isspace((int)*pcVar8);
          if (iVar2 == 0) break;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar8;
        }
        local_48 = 0;
        if (local_res8 != (char *)0x0) {
          if (*local_res8 != '\0') {
            uVar3 = strtoul(local_res8,&local_res8,10);
            local_48 = (ulonglong)uVar3;
          }
          if (local_res8 != (char *)0x0) {
            if (*local_res8 != '\0') {
              uVar3 = strtoul(local_res8,&local_res8,10);
              local_48 = CONCAT44(uVar3,(undefined4)local_48);
            }
            if ((local_res8 != (char *)0x0) && (*local_res8 != '\0')) {
              uVar4 = strtoul(local_res8,&local_res8,10);
            }
          }
        }
        uVar6 = (int)_Size + 0xc;
        _Dst = _Src;
        if (uVar9 < uVar6) {
          uVar9 = 0x20;
          if (0x20 < uVar6) {
            do {
              uVar9 = uVar9 * 2;
            } while (uVar9 < uVar6);
          }
          _Dst = (void *)(**(code **)(*param_6 + 8))(param_6,uVar9);
          if ((int)_Size != 0) {
            ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
          }
          (**(code **)(*param_6 + 0x10))(param_6,_Src);
        }
        *(ulonglong *)(_Size + (longlong)_Dst) = local_48;
        *(ulong *)(_Size + 8 + (longlong)_Dst) = uVar4;
        _Size = (ulonglong)uVar6;
        _Src = _Dst;
      } while( true );
    }
LAB_1432a3077:
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a3190 FUN_1432a3190 body=531 status=ok
// SIG undefined FUN_1432a3190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432a3190(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 *_Size;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *local_res8;
  char *local_res20;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  _Size = (undefined1 *)0x0;
  *param_4 = 0x10;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res20);
  if (cVar2 != '\0') {
    if (local_res20 != (char *)0x0) {
      _DAT_146b62b44 = _DAT_146b62b44 + 1;
      pcVar4 = local_res20;
      puVar5 = _Size;
      puVar8 = _Size;
      puVar10 = _Size;
      if (*local_res20 == '\0') {
        pcVar4 = "";
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      else {
        do {
          iVar3 = (int)puVar5;
          uVar6 = iVar3 + 1;
          pcVar4 = pcVar4 + 1;
          puVar5 = (undefined1 *)(ulonglong)uVar6;
        } while (*pcVar4 != '\0');
        pcVar4 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
        _guard_xfg_dispatch_icall_nop(pcVar4,local_res20,(ulonglong)uVar6);
        ((undefined1 *)(ulonglong)uVar6)[(longlong)pcVar4] = 0;
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      while (pcVar7 = pcVar4, *pcVar4 != '\0') {
        while (iVar3 = isspace((int)*pcVar7), iVar3 != 0) {
          pcVar7 = pcVar7 + 1;
          if (*pcVar7 == '\0') goto LAB_1432a3285;
        }
        if (*pcVar4 != '\0') {
          local_48 = physx::Sn::strToFloat(pcVar4,&local_res8);
          uStack_44 = physx::Sn::strToFloat(local_res8,&local_res8);
          uStack_40 = physx::Sn::strToFloat(local_res8,&local_res8);
          uStack_3c = physx::Sn::strToFloat(local_res8,&local_res8);
          pcVar4 = local_res8;
        }
        uVar6 = (int)_Size + 0x10;
        puVar5 = puVar10;
        if ((uint)puVar8 < uVar6) {
          puVar8 = &DAT_00000020;
          if (0x20 < uVar6) {
            do {
              uVar1 = (int)puVar8 * 2;
              puVar8 = (undefined1 *)(ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
          puVar5 = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar8);
          if ((int)_Size != 0) {
            _guard_xfg_dispatch_icall_nop(puVar5,puVar10,(size_t)_Size);
          }
          (**(code **)(*param_6 + 0x10))(param_6,puVar10);
        }
        *(ulonglong *)(_Size + (longlong)puVar5) = CONCAT44(uStack_44,local_48);
        *(ulonglong *)((longlong)(_Size + (longlong)puVar5) + 8) = CONCAT44(uStack_3c,uStack_40);
        _Size = (undefined1 *)(ulonglong)uVar6;
        puVar10 = puVar5;
      }
LAB_1432a3285:
      *param_3 = puVar10;
      *param_5 = (int)((ulonglong)_Size >> 4);
      (**(code **)(*param_6 + 0x10))(param_6,pcVar9);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a33b0 FUN_1432a33b0 body=531 status=ok
// SIG undefined FUN_1432a33b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432a33b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 *_Size;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *local_res8;
  char *local_res20;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  _Size = (undefined1 *)0x0;
  *param_4 = 0x10;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res20);
  if (cVar2 != '\0') {
    if (local_res20 != (char *)0x0) {
      _DAT_146b62b40 = _DAT_146b62b40 + 1;
      pcVar4 = local_res20;
      puVar5 = _Size;
      puVar8 = _Size;
      puVar10 = _Size;
      if (*local_res20 == '\0') {
        pcVar4 = "";
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      else {
        do {
          iVar3 = (int)puVar5;
          uVar6 = iVar3 + 1;
          pcVar4 = pcVar4 + 1;
          puVar5 = (undefined1 *)(ulonglong)uVar6;
        } while (*pcVar4 != '\0');
        pcVar4 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
        _guard_xfg_dispatch_icall_nop(pcVar4,local_res20,(ulonglong)uVar6);
        ((undefined1 *)(ulonglong)uVar6)[(longlong)pcVar4] = 0;
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      while (pcVar7 = pcVar4, *pcVar4 != '\0') {
        while (iVar3 = isspace((int)*pcVar7), iVar3 != 0) {
          pcVar7 = pcVar7 + 1;
          if (*pcVar7 == '\0') goto LAB_1432a34a5;
        }
        if (*pcVar4 != '\0') {
          local_48 = physx::Sn::strToFloat(pcVar4,&local_res8);
          uStack_44 = physx::Sn::strToFloat(local_res8,&local_res8);
          uStack_40 = physx::Sn::strToFloat(local_res8,&local_res8);
          uStack_3c = physx::Sn::strToFloat(local_res8,&local_res8);
          pcVar4 = local_res8;
        }
        uVar6 = (int)_Size + 0x10;
        puVar5 = puVar10;
        if ((uint)puVar8 < uVar6) {
          puVar8 = &DAT_00000020;
          if (0x20 < uVar6) {
            do {
              uVar1 = (int)puVar8 * 2;
              puVar8 = (undefined1 *)(ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
          puVar5 = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar8);
          if ((int)_Size != 0) {
            _guard_xfg_dispatch_icall_nop(puVar5,puVar10,(size_t)_Size);
          }
          (**(code **)(*param_6 + 0x10))(param_6,puVar10);
        }
        *(ulonglong *)(_Size + (longlong)puVar5) = CONCAT44(uStack_44,local_48);
        *(ulonglong *)((longlong)(_Size + (longlong)puVar5) + 8) = CONCAT44(uStack_3c,uStack_40);
        _Size = (undefined1 *)(ulonglong)uVar6;
        puVar10 = puVar5;
      }
LAB_1432a34a5:
      *param_3 = puVar10;
      *param_5 = (int)((ulonglong)_Size >> 4);
      (**(code **)(*param_6 + 0x10))(param_6,pcVar9);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a35d0 readStridedBufferProperty<physx::PxClothCollisionTriangle> body=626 status=ok
// SIG undefined readStridedBufferProperty<physx::PxClothCollisionTriangle>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::Sn::readStridedBufferProperty<physx::PxClothCollisionTriangle>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *_Size;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  char *local_res8;
  char *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  
  _Size = (undefined1 *)0x0;
  *param_4 = 0x24;
  *param_3 = 0;
  *param_5 = 0;
  cVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_68);
  if (cVar3 == '\0') {
    return;
  }
  if (local_68 != (char *)0x0) {
    _DAT_146b62b48 = _DAT_146b62b48 + 1;
    pcVar5 = local_68;
    puVar6 = _Size;
    puVar9 = _Size;
    puVar10 = _Size;
    if (*local_68 == '\0') {
      pcVar5 = "";
      local_res8 = pcVar5;
      pcVar11 = pcVar5;
    }
    else {
      do {
        iVar4 = (int)puVar6;
        uVar7 = iVar4 + 1;
        pcVar5 = pcVar5 + 1;
        puVar6 = (undefined1 *)(ulonglong)uVar7;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar4 + 2);
      ::_guard_xfg_dispatch_icall_nop(pcVar5,local_68,(ulonglong)uVar7);
      ((undefined1 *)(ulonglong)uVar7)[(longlong)pcVar5] = 0;
      local_res8 = pcVar5;
      pcVar11 = pcVar5;
    }
    do {
      cVar3 = *pcVar5;
      pcVar8 = pcVar5;
      while (cVar3 != '\0') {
        iVar4 = isspace((int)*pcVar8);
        if (iVar4 == 0) {
          bVar2 = false;
          goto LAB_1432a36bb;
        }
        pcVar8 = pcVar8 + 1;
        cVar3 = *pcVar8;
      }
      bVar2 = true;
LAB_1432a36bb:
      if (bVar2) goto LAB_1432a37e4;
      if (*pcVar5 != '\0') {
        local_60 = strToFloat(pcVar5,&local_res8);
        uStack_5c = strToFloat(local_res8,&local_res8);
        uStack_58 = strToFloat(local_res8,&local_res8);
        uStack_54 = strToFloat(local_res8,&local_res8);
        local_50 = strToFloat(local_res8,&local_res8);
        uStack_4c = strToFloat(local_res8,&local_res8);
        uStack_48 = strToFloat(local_res8,&local_res8);
        uStack_44 = strToFloat(local_res8,&local_res8);
        local_40 = strToFloat(local_res8,&local_res8);
        pcVar5 = local_res8;
      }
      uVar7 = (int)_Size + 0x24;
      puVar6 = puVar10;
      if ((uint)puVar9 < uVar7) {
        puVar9 = &DAT_00000020;
        if (0x20 < uVar7) {
          do {
            uVar1 = (int)puVar9 * 2;
            puVar9 = (undefined1 *)(ulonglong)uVar1;
          } while (uVar1 < uVar7);
        }
        puVar6 = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar9);
        if ((int)_Size != 0) {
          ::_guard_xfg_dispatch_icall_nop(puVar6,puVar10,(size_t)_Size);
        }
        (**(code **)(*param_6 + 0x10))(param_6,puVar10);
      }
      *(ulonglong *)(_Size + (longlong)puVar6) = CONCAT44(uStack_5c,local_60);
      *(ulonglong *)((longlong)(_Size + (longlong)puVar6) + 8) = CONCAT44(uStack_54,uStack_58);
      *(ulonglong *)(_Size + 0x10 + (longlong)puVar6) = CONCAT44(uStack_4c,local_50);
      *(ulonglong *)((longlong)(_Size + 0x10 + (longlong)puVar6) + 8) =
           CONCAT44(uStack_44,uStack_48);
      *(undefined4 *)(_Size + 0x20 + (longlong)puVar6) = local_40;
      _Size = (undefined1 *)(ulonglong)uVar7;
      puVar10 = puVar6;
    } while( true );
  }
LAB_1432a381e:
  (**(code **)(*param_6 + 0x10))(param_6,0);
  return;
LAB_1432a37e4:
  *param_3 = puVar10;
  *param_5 = (int)((ulonglong)_Size / 0x24);
  (**(code **)(*param_6 + 0x10))(param_6,pcVar11);
  goto LAB_1432a381e;
}



// FUNCTION 1432a3850 readStridedBufferProperty<physx::PxClothFabricPhase> body=738 status=ok
// SIG undefined readStridedBufferProperty<physx::PxClothFabricPhase>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::Sn::readStridedBufferProperty<physx::PxClothFabricPhase>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               undefined4 *param_5,longlong *param_6)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  byte *_Dst;
  undefined1 *puVar8;
  uint uVar9;
  byte *pbVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  byte *local_res8;
  undefined8 local_res18;
  char *local_240;
  byte local_238 [512];
  
  puVar12 = (undefined1 *)0x0;
  *param_4 = 8;
  *param_3 = 0;
  *param_5 = 0;
  cVar4 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_240);
  if (cVar4 != '\0') {
    if (local_240 != (char *)0x0) {
      _DAT_146b62b30 = _DAT_146b62b30 + 1;
      pcVar7 = local_240;
      puVar8 = puVar12;
      puVar13 = puVar12;
      puVar14 = puVar12;
      if (*local_240 == '\0') {
        local_res8 = &DAT_145af3922;
        _Dst = local_res8;
      }
      else {
        do {
          iVar5 = (int)puVar8;
          uVar9 = iVar5 + 1;
          pcVar7 = pcVar7 + 1;
          puVar8 = (undefined1 *)(ulonglong)uVar9;
        } while (*pcVar7 != '\0');
        _Dst = (byte *)(**(code **)(*param_6 + 8))(param_6,iVar5 + 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,local_240,(ulonglong)uVar9);
        ((undefined1 *)(ulonglong)uVar9)[(longlong)_Dst] = 0;
        local_res8 = _Dst;
      }
      while (pbVar10 = local_res8, *local_res8 != 0) {
        while (iVar5 = isspace((int)(char)*pbVar10), iVar5 != 0) {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 == 0) goto LAB_1432a394a;
        }
        local_res18 = 0;
        if ((local_res8 != (byte *)0x0) && (*local_res8 != 0)) {
          iVar5 = isspace((uint)*local_res8);
          while (iVar5 != 0) {
            local_res8 = local_res8 + 1;
            iVar5 = isspace((uint)*local_res8);
          }
          if (local_res8 != (byte *)0x0) {
            bVar1 = *local_res8;
            for (pbVar10 = local_238;
                ((bVar1 != 0 && (iVar5 = isspace((uint)bVar1), iVar5 == 0)) &&
                (pbVar10 < local_238 + 0x1ff)); pbVar10 = pbVar10 + 1) {
              bVar1 = *local_res8;
              local_res8 = local_res8 + 1;
              *pbVar10 = bVar1;
              bVar1 = *local_res8;
            }
            *pbVar10 = 0;
          }
          ppuVar11 = &PTR_s_eVERTICAL_1467ca5b0;
          puVar2 = PTR_s_eVERTICAL_1467ca5b0;
          while (puVar2 != (undefined *)0x0) {
            iVar5 = physx::shdfnd::stricmp((char *)local_238,*ppuVar11);
            if (iVar5 == 0) {
              local_res18 = (ulonglong)*(uint *)(ppuVar11 + 1);
            }
            ppuVar11 = ppuVar11 + 2;
            puVar2 = *ppuVar11;
          }
          uVar6 = strtoul((char *)local_res8,(char **)&local_res8,10);
          local_res18 = CONCAT44(uVar6,(undefined4)local_res18);
        }
        uVar9 = (int)puVar13 + 8;
        puVar8 = puVar14;
        if ((uint)puVar12 < uVar9) {
          puVar12 = &DAT_00000020;
          if (0x20 < uVar9) {
            do {
              uVar3 = (int)puVar12 * 2;
              puVar12 = (undefined1 *)(ulonglong)uVar3;
            } while (uVar3 < uVar9);
          }
          puVar8 = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar12);
          if ((int)puVar13 != 0) {
            ::_guard_xfg_dispatch_icall_nop(puVar8,puVar14,(size_t)puVar13);
          }
          (**(code **)(*param_6 + 0x10))(param_6,puVar14);
        }
        *(ulonglong *)(puVar13 + (longlong)puVar8) = local_res18;
        puVar13 = (undefined1 *)(ulonglong)uVar9;
        puVar14 = puVar8;
      }
LAB_1432a394a:
      *param_3 = puVar14;
      *param_5 = (int)((ulonglong)puVar13 >> 3);
      (**(code **)(*param_6 + 0x10))(param_6,_Dst);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a3b40 FUN_1432a3b40 body=531 status=ok
// SIG undefined FUN_1432a3b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432a3b40(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 *_Size;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *local_res8;
  char *local_res20;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  _Size = (undefined1 *)0x0;
  *param_4 = 0x10;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res20);
  if (cVar2 != '\0') {
    if (local_res20 != (char *)0x0) {
      _DAT_146b62b3c = _DAT_146b62b3c + 1;
      pcVar4 = local_res20;
      puVar5 = _Size;
      puVar8 = _Size;
      puVar10 = _Size;
      if (*local_res20 == '\0') {
        pcVar4 = "";
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      else {
        do {
          iVar3 = (int)puVar5;
          uVar6 = iVar3 + 1;
          pcVar4 = pcVar4 + 1;
          puVar5 = (undefined1 *)(ulonglong)uVar6;
        } while (*pcVar4 != '\0');
        pcVar4 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
        _guard_xfg_dispatch_icall_nop(pcVar4,local_res20,(ulonglong)uVar6);
        ((undefined1 *)(ulonglong)uVar6)[(longlong)pcVar4] = 0;
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      while (pcVar7 = pcVar4, *pcVar4 != '\0') {
        while (iVar3 = isspace((int)*pcVar7), iVar3 != 0) {
          pcVar7 = pcVar7 + 1;
          if (*pcVar7 == '\0') goto LAB_1432a3c35;
        }
        if (*pcVar4 != '\0') {
          local_48 = physx::Sn::strToFloat(pcVar4,&local_res8);
          uStack_44 = physx::Sn::strToFloat(local_res8,&local_res8);
          uStack_40 = physx::Sn::strToFloat(local_res8,&local_res8);
          uStack_3c = physx::Sn::strToFloat(local_res8,&local_res8);
          pcVar4 = local_res8;
        }
        uVar6 = (int)_Size + 0x10;
        puVar5 = puVar10;
        if ((uint)puVar8 < uVar6) {
          puVar8 = &DAT_00000020;
          if (0x20 < uVar6) {
            do {
              uVar1 = (int)puVar8 * 2;
              puVar8 = (undefined1 *)(ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
          puVar5 = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar8);
          if ((int)_Size != 0) {
            _guard_xfg_dispatch_icall_nop(puVar5,puVar10,(size_t)_Size);
          }
          (**(code **)(*param_6 + 0x10))(param_6,puVar10);
        }
        *(ulonglong *)(_Size + (longlong)puVar5) = CONCAT44(uStack_44,local_48);
        *(ulonglong *)((longlong)(_Size + (longlong)puVar5) + 8) = CONCAT44(uStack_3c,uStack_40);
        _Size = (undefined1 *)(ulonglong)uVar6;
        puVar10 = puVar5;
      }
LAB_1432a3c35:
      *param_3 = puVar10;
      *param_5 = (int)((ulonglong)_Size >> 4);
      (**(code **)(*param_6 + 0x10))(param_6,pcVar9);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a3d60 FUN_1432a3d60 body=531 status=ok
// SIG undefined FUN_1432a3d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432a3d60(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 *_Size;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *local_res8;
  char *local_res20;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  _Size = (undefined1 *)0x0;
  *param_4 = 0x10;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res20);
  if (cVar2 != '\0') {
    if (local_res20 != (char *)0x0) {
      _DAT_146b62b50 = _DAT_146b62b50 + 1;
      pcVar4 = local_res20;
      puVar5 = _Size;
      puVar8 = _Size;
      puVar10 = _Size;
      if (*local_res20 == '\0') {
        pcVar4 = "";
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      else {
        do {
          iVar3 = (int)puVar5;
          uVar6 = iVar3 + 1;
          pcVar4 = pcVar4 + 1;
          puVar5 = (undefined1 *)(ulonglong)uVar6;
        } while (*pcVar4 != '\0');
        pcVar4 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
        _guard_xfg_dispatch_icall_nop(pcVar4,local_res20,(ulonglong)uVar6);
        ((undefined1 *)(ulonglong)uVar6)[(longlong)pcVar4] = 0;
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      while (pcVar7 = pcVar4, *pcVar4 != '\0') {
        while (iVar3 = isspace((int)*pcVar7), iVar3 != 0) {
          pcVar7 = pcVar7 + 1;
          if (*pcVar7 == '\0') goto LAB_1432a3e55;
        }
        if (*pcVar4 != '\0') {
          local_48 = physx::Sn::strToFloat(pcVar4,&local_res8);
          uStack_44 = physx::Sn::strToFloat(local_res8,&local_res8);
          uStack_40 = physx::Sn::strToFloat(local_res8,&local_res8);
          uStack_3c = physx::Sn::strToFloat(local_res8,&local_res8);
          pcVar4 = local_res8;
        }
        uVar6 = (int)_Size + 0x10;
        puVar5 = puVar10;
        if ((uint)puVar8 < uVar6) {
          puVar8 = &DAT_00000020;
          if (0x20 < uVar6) {
            do {
              uVar1 = (int)puVar8 * 2;
              puVar8 = (undefined1 *)(ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
          puVar5 = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar8);
          if ((int)_Size != 0) {
            _guard_xfg_dispatch_icall_nop(puVar5,puVar10,(size_t)_Size);
          }
          (**(code **)(*param_6 + 0x10))(param_6,puVar10);
        }
        *(ulonglong *)(_Size + (longlong)puVar5) = CONCAT44(uStack_44,local_48);
        *(ulonglong *)((longlong)(_Size + (longlong)puVar5) + 8) = CONCAT44(uStack_3c,uStack_40);
        _Size = (undefined1 *)(ulonglong)uVar6;
        puVar10 = puVar5;
      }
LAB_1432a3e55:
      *param_3 = puVar10;
      *param_5 = (int)((ulonglong)_Size >> 4);
      (**(code **)(*param_6 + 0x10))(param_6,pcVar9);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a3f80 FUN_1432a3f80 body=531 status=ok
// SIG undefined FUN_1432a3f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432a3f80(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 *_Size;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *local_res8;
  char *local_res20;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  _Size = (undefined1 *)0x0;
  *param_4 = 0x10;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res20);
  if (cVar2 != '\0') {
    if (local_res20 != (char *)0x0) {
      _DAT_146b62b54 = _DAT_146b62b54 + 1;
      pcVar4 = local_res20;
      puVar5 = _Size;
      puVar8 = _Size;
      puVar10 = _Size;
      if (*local_res20 == '\0') {
        pcVar4 = "";
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      else {
        do {
          iVar3 = (int)puVar5;
          uVar6 = iVar3 + 1;
          pcVar4 = pcVar4 + 1;
          puVar5 = (undefined1 *)(ulonglong)uVar6;
        } while (*pcVar4 != '\0');
        pcVar4 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
        _guard_xfg_dispatch_icall_nop(pcVar4,local_res20,(ulonglong)uVar6);
        ((undefined1 *)(ulonglong)uVar6)[(longlong)pcVar4] = 0;
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      while (pcVar7 = pcVar4, *pcVar4 != '\0') {
        while (iVar3 = isspace((int)*pcVar7), iVar3 != 0) {
          pcVar7 = pcVar7 + 1;
          if (*pcVar7 == '\0') goto LAB_1432a4075;
        }
        if (*pcVar4 != '\0') {
          local_48 = physx::Sn::strToFloat(pcVar4,&local_res8);
          uStack_44 = physx::Sn::strToFloat(local_res8,&local_res8);
          uStack_40 = physx::Sn::strToFloat(local_res8,&local_res8);
          uStack_3c = physx::Sn::strToFloat(local_res8,&local_res8);
          pcVar4 = local_res8;
        }
        uVar6 = (int)_Size + 0x10;
        puVar5 = puVar10;
        if ((uint)puVar8 < uVar6) {
          puVar8 = &DAT_00000020;
          if (0x20 < uVar6) {
            do {
              uVar1 = (int)puVar8 * 2;
              puVar8 = (undefined1 *)(ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
          puVar5 = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar8);
          if ((int)_Size != 0) {
            _guard_xfg_dispatch_icall_nop(puVar5,puVar10,(size_t)_Size);
          }
          (**(code **)(*param_6 + 0x10))(param_6,puVar10);
        }
        *(ulonglong *)(_Size + (longlong)puVar5) = CONCAT44(uStack_44,local_48);
        *(ulonglong *)((longlong)(_Size + (longlong)puVar5) + 8) = CONCAT44(uStack_3c,uStack_40);
        _Size = (undefined1 *)(ulonglong)uVar6;
        puVar10 = puVar5;
      }
LAB_1432a4075:
      *param_3 = puVar10;
      *param_5 = (int)((ulonglong)_Size >> 4);
      (**(code **)(*param_6 + 0x10))(param_6,pcVar9);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a41a0 readStridedBufferProperty<physx::PxHeightFieldSample> body=428 status=ok
// SIG undefined readStridedBufferProperty<physx::PxHeightFieldSample>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::Sn::readStridedBufferProperty<physx::PxHeightFieldSample>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *_Size;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *local_res18;
  char *local_res20;
  
  _Size = (undefined1 *)0x0;
  *param_4 = 4;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res20);
  if (cVar2 != '\0') {
    if (local_res20 != (char *)0x0) {
      _DAT_146b62b68 = _DAT_146b62b68 + 1;
      pcVar5 = local_res20;
      puVar6 = _Size;
      puVar8 = _Size;
      puVar10 = _Size;
      uVar4 = (ulong)param_5;
      if (*local_res20 == '\0') {
        local_res18 = "";
        pcVar5 = local_res18;
      }
      else {
        do {
          iVar3 = (int)puVar6;
          uVar7 = iVar3 + 1;
          pcVar5 = pcVar5 + 1;
          puVar6 = (undefined1 *)(ulonglong)uVar7;
        } while (*pcVar5 != '\0');
        pcVar5 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
        ::_guard_xfg_dispatch_icall_nop(pcVar5,local_res20,(ulonglong)uVar7);
        ((undefined1 *)(ulonglong)uVar7)[(longlong)pcVar5] = 0;
        local_res18 = pcVar5;
      }
      while (pcVar9 = local_res18, *local_res18 != '\0') {
        while (iVar3 = isspace((int)*pcVar9), iVar3 != 0) {
          pcVar9 = pcVar9 + 1;
          if (*pcVar9 == '\0') goto LAB_1432a427b;
        }
        if ((local_res18 != (char *)0x0) && (*local_res18 != '\0')) {
          uVar4 = strtoul(local_res18,&local_res18,10);
        }
        uVar7 = (int)_Size + 4;
        puVar6 = puVar10;
        if ((uint)puVar8 < uVar7) {
          puVar8 = &DAT_00000020;
          if (0x20 < uVar7) {
            do {
              uVar1 = (int)puVar8 * 2;
              puVar8 = (undefined1 *)(ulonglong)uVar1;
            } while (uVar1 < uVar7);
          }
          puVar6 = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar8);
          if ((int)_Size != 0) {
            ::_guard_xfg_dispatch_icall_nop(puVar6,puVar10,(size_t)_Size);
          }
          (**(code **)(*param_6 + 0x10))(param_6,puVar10);
        }
        *(ulong *)(_Size + (longlong)puVar6) = uVar4;
        _Size = (undefined1 *)(ulonglong)uVar7;
        puVar10 = puVar6;
      }
LAB_1432a427b:
      *param_3 = puVar10;
      *param_5 = (int)((ulonglong)_Size >> 2);
      (**(code **)(*param_6 + 0x10))(param_6,pcVar5);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a4350 readStridedBufferProperty<physx::PxVec3> body=531 status=ok
// SIG undefined readStridedBufferProperty<physx::PxVec3>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::Sn::readStridedBufferProperty<physx::PxVec3>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 *_Size;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *local_res8;
  char *local_res20;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  
  _Size = (undefined1 *)0x0;
  *param_4 = 0xc;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res20);
  if (cVar2 != '\0') {
    if (local_res20 != (char *)0x0) {
      _DAT_146b62b58 = _DAT_146b62b58 + 1;
      pcVar4 = local_res20;
      puVar5 = _Size;
      puVar8 = _Size;
      puVar10 = _Size;
      if (*local_res20 == '\0') {
        pcVar4 = "";
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      else {
        do {
          iVar3 = (int)puVar5;
          uVar6 = iVar3 + 1;
          pcVar4 = pcVar4 + 1;
          puVar5 = (undefined1 *)(ulonglong)uVar6;
        } while (*pcVar4 != '\0');
        pcVar4 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
        ::_guard_xfg_dispatch_icall_nop(pcVar4,local_res20,(ulonglong)uVar6);
        ((undefined1 *)(ulonglong)uVar6)[(longlong)pcVar4] = 0;
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      while (pcVar7 = pcVar4, *pcVar4 != '\0') {
        while (iVar3 = isspace((int)*pcVar7), iVar3 != 0) {
          pcVar7 = pcVar7 + 1;
          if (*pcVar7 == '\0') goto LAB_1432a4445;
        }
        if (*pcVar4 != '\0') {
          local_48 = strToFloat(pcVar4,&local_res8);
          uStack_44 = strToFloat(local_res8,&local_res8);
          local_40 = strToFloat(local_res8,&local_res8);
          pcVar4 = local_res8;
        }
        uVar6 = (int)_Size + 0xc;
        puVar5 = puVar10;
        if ((uint)puVar8 < uVar6) {
          puVar8 = &DAT_00000020;
          if (0x20 < uVar6) {
            do {
              uVar1 = (int)puVar8 * 2;
              puVar8 = (undefined1 *)(ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
          puVar5 = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar8);
          if ((int)_Size != 0) {
            ::_guard_xfg_dispatch_icall_nop(puVar5,puVar10,(size_t)_Size);
          }
          (**(code **)(*param_6 + 0x10))(param_6,puVar10);
        }
        *(ulonglong *)(_Size + (longlong)puVar5) = CONCAT44(uStack_44,local_48);
        *(undefined4 *)(_Size + 8 + (longlong)puVar5) = local_40;
        _Size = (undefined1 *)(ulonglong)uVar6;
        puVar10 = puVar5;
      }
LAB_1432a4445:
      *param_3 = puVar10;
      *param_5 = (int)((ulonglong)_Size / 0xc);
      (**(code **)(*param_6 + 0x10))(param_6,pcVar9);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a4570 FUN_1432a4570 body=531 status=ok
// SIG undefined FUN_1432a4570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432a4570(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 *_Size;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *local_res8;
  char *local_res20;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  _Size = (undefined1 *)0x0;
  *param_4 = 0x10;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_res20);
  if (cVar2 != '\0') {
    if (local_res20 != (char *)0x0) {
      _DAT_146b62b4c = _DAT_146b62b4c + 1;
      pcVar4 = local_res20;
      puVar5 = _Size;
      puVar8 = _Size;
      puVar10 = _Size;
      if (*local_res20 == '\0') {
        pcVar4 = "";
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      else {
        do {
          iVar3 = (int)puVar5;
          uVar6 = iVar3 + 1;
          pcVar4 = pcVar4 + 1;
          puVar5 = (undefined1 *)(ulonglong)uVar6;
        } while (*pcVar4 != '\0');
        pcVar4 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
        _guard_xfg_dispatch_icall_nop(pcVar4,local_res20,(ulonglong)uVar6);
        ((undefined1 *)(ulonglong)uVar6)[(longlong)pcVar4] = 0;
        local_res8 = pcVar4;
        pcVar9 = pcVar4;
      }
      while (pcVar7 = pcVar4, *pcVar4 != '\0') {
        while (iVar3 = isspace((int)*pcVar7), iVar3 != 0) {
          pcVar7 = pcVar7 + 1;
          if (*pcVar7 == '\0') goto LAB_1432a4665;
        }
        if (*pcVar4 != '\0') {
          local_48 = physx::Sn::strToFloat(pcVar4,&local_res8);
          uStack_44 = physx::Sn::strToFloat(local_res8,&local_res8);
          uStack_40 = physx::Sn::strToFloat(local_res8,&local_res8);
          uStack_3c = physx::Sn::strToFloat(local_res8,&local_res8);
          pcVar4 = local_res8;
        }
        uVar6 = (int)_Size + 0x10;
        puVar5 = puVar10;
        if ((uint)puVar8 < uVar6) {
          puVar8 = &DAT_00000020;
          if (0x20 < uVar6) {
            do {
              uVar1 = (int)puVar8 * 2;
              puVar8 = (undefined1 *)(ulonglong)uVar1;
            } while (uVar1 < uVar6);
          }
          puVar5 = (undefined1 *)(**(code **)(*param_6 + 8))(param_6,puVar8);
          if ((int)_Size != 0) {
            _guard_xfg_dispatch_icall_nop(puVar5,puVar10,(size_t)_Size);
          }
          (**(code **)(*param_6 + 0x10))(param_6,puVar10);
        }
        *(ulonglong *)(_Size + (longlong)puVar5) = CONCAT44(uStack_44,local_48);
        *(ulonglong *)((longlong)(_Size + (longlong)puVar5) + 8) = CONCAT44(uStack_3c,uStack_40);
        _Size = (undefined1 *)(ulonglong)uVar6;
        puVar10 = puVar5;
      }
LAB_1432a4665:
      *param_3 = puVar10;
      *param_5 = (int)((ulonglong)_Size >> 4);
      (**(code **)(*param_6 + 0x10))(param_6,pcVar9);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a4790 readStridedFlagsProperty<unsigned_int> body=738 status=ok
// SIG undefined readStridedFlagsProperty<unsigned_int>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::Sn::readStridedFlagsProperty<unsigned_int>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               uint *param_5,longlong *param_6,longlong *param_7)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  longlong *plVar7;
  void *_Dst;
  char *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  char *pcVar11;
  uint uVar12;
  uint local_res8;
  uint local_res18;
  void *local_res20;
  char *local_50;
  char *local_48 [2];
  
  *param_4 = 4;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,local_48);
  if (cVar2 != '\0') {
    uVar4 = 0;
    _Dst = (void *)0x0;
    uVar12 = 0;
    local_res8 = 0;
    local_res20 = (void *)0x0;
    if (local_48[0] != (char *)0x0) {
      _DAT_146b62b5c = _DAT_146b62b5c + 1;
      if (*local_48[0] == '\0') {
        local_50 = "";
      }
      else {
        uVar10 = 0;
        pcVar5 = local_48[0];
        do {
          iVar3 = (int)uVar10;
          uVar9 = iVar3 + 1;
          uVar10 = (ulonglong)uVar9;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        local_50 = (char *)(**(code **)(*param_6 + 8))(param_6,iVar3 + 2);
        ::_guard_xfg_dispatch_icall_nop(local_50,local_48[0],(ulonglong)uVar9);
        local_50[uVar10] = '\0';
      }
      pcVar5 = strtok(local_50," \n");
      if (pcVar5 != (char *)0x0) {
        local_res18 = (uint)param_3;
        do {
          if (((param_7 != (longlong *)0x0) && (local_res18 = 0, pcVar5 != (char *)0x0)) &&
             (*pcVar5 != '\0')) {
            pcVar6 = (char *)copyStr<physx::XmlMemoryAllocator>(param_6,pcVar5);
            pcVar5 = pcVar6;
            pcVar11 = pcVar6;
            if (pcVar6 != (char *)0x0) {
              do {
                if (*pcVar5 == '\0') break;
                pcVar8 = pcVar5 + 1;
                if (*pcVar8 == '|') {
                  *pcVar8 = '\0';
                  uVar10 = 0;
                  pcVar8 = pcVar5 + 2;
                  lVar1 = *param_7;
                  plVar7 = param_7;
                  while (lVar1 != 0) {
                    iVar3 = physx::shdfnd::stricmp((char *)*plVar7,pcVar11);
                    if (iVar3 == 0) {
                      uVar4 = *(uint *)(param_7 + uVar10 * 2 + 1);
                      goto LAB_1432a4927;
                    }
                    uVar10 = (ulonglong)((int)uVar10 + 1);
                    plVar7 = param_7 + uVar10 * 2;
                    lVar1 = *plVar7;
                  }
                  uVar4 = 0;
LAB_1432a4927:
                  local_res18 = local_res18 | uVar4;
                  pcVar11 = pcVar8;
                }
                pcVar5 = pcVar8;
              } while (pcVar8 != (char *)0x0);
              if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
                uVar4 = findEnumByName(pcVar11,param_7);
                local_res18 = local_res18 | uVar4;
              }
            }
            (**(code **)(*param_6 + 0x10))(param_6,pcVar6);
            _Dst = local_res20;
          }
          pcVar5 = strtok((char *)0x0," \n");
          uVar4 = local_res8 + 4;
          if (uVar12 < uVar4) {
            uVar12 = 0x20;
            if (0x20 < uVar4) {
              do {
                uVar12 = uVar12 * 2;
              } while (uVar12 < uVar4);
            }
            _Dst = (void *)(**(code **)(*param_6 + 8))(param_6,uVar12);
            if (local_res8 != 0) {
              ::_guard_xfg_dispatch_icall_nop(_Dst,local_res20,(ulonglong)local_res8);
            }
            (**(code **)(*param_6 + 0x10))(param_6,local_res20);
            local_res20 = _Dst;
          }
          *(uint *)((ulonglong)local_res8 + (longlong)_Dst) = local_res18;
          local_res8 = uVar4;
        } while (pcVar5 != (char *)0x0);
      }
      *param_3 = _Dst;
      *param_5 = uVar4 >> 2;
      (**(code **)(*param_6 + 0x10))(param_6,local_50);
    }
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// FUNCTION 1432a4a80 visitAllProperties<physx::PxArticulation,physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>_> body=166 status=ok
// SIG undefined visitAllProperties<physx::PxArticulation,physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>_>(void)

void physx::
     visitAllProperties<physx::PxArticulation,physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>_>
               (undefined8 *param_1)

{
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  PxArticulationGeneratedInfo local_1d8 [464];
  
  ::_guard_xfg_dispatch_icall_nop(local_1d8,0,0x1d0);
  physx::PxArticulationGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_1d8);
  ::_guard_xfg_dispatch_icall_nop(local_1d8,0,0x1d0);
  local_218 = *param_1;
  local_210 = param_1[1];
  local_208 = param_1[2];
  local_200 = param_1[3];
  local_1f8 = param_1[4];
  local_1f0 = param_1[5];
  local_1e8 = param_1[6];
  local_1e0 = param_1[7];
  physx::PxArticulationGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_1d8);
  PxArticulationGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>_>
            (local_1d8,&local_218,0);
  return;
}



// FUNCTION 1432a4b30 writeAllProperties<physx::PxHeightFieldDesc> body=253 status=ok
// SIG undefined writeAllProperties<physx::PxHeightFieldDesc>(void)

void physx::Sn::writeAllProperties<physx::PxHeightFieldDesc>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  PxHeightFieldDescGeneratedInfo local_108 [24];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [64];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  physx::PxHeightFieldDescGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_108);
  local_128 = param_5;
  local_120 = 0;
  uStack_118 = 0;
  local_148 = param_1;
  local_140 = param_3;
  local_138 = param_2;
  local_130 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>(&local_148,local_f0,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>(&local_148,local_d0,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<258,physx::PxHeightFieldDesc,enum_physx::PxHeightFieldFormat::Enum,enum_physx::PxHeightFieldFormat::Enum>
            (&local_148,local_b0,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_148,local_70,5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_148,local_50,6);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<262,physx::PxHeightFieldDesc,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxHeightFieldFlag::Enum,unsigned_short>_>
            (&local_148,local_30,7);
  return;
}



// FUNCTION 1432a4c30 writeBuffer<physx::PxBVH33TriangleMesh,unsigned_int_(__cdecl*)(physx::PxTriangleMesh_const_*___ptr64,unsigned_int),void_(__cdecl*)(physx::MemoryBuffer_&___ptr64,unsigned_int_const_&___ptr64)> body=239 status=ok
// SIG undefined writeBuffer<physx::PxBVH33TriangleMesh,unsigned_int_(__cdecl*)(physx::PxTriangleMesh_const_*___ptr64,unsigned_int),void_(__cdecl*)(physx::MemoryBuffer_&___ptr64,unsigned_int_const_&___ptr64)>(void)

void physx::Sn::
     writeBuffer<physx::PxBVH33TriangleMesh,unsigned_int_(__cdecl*)(physx::PxTriangleMesh_const_*___ptr64,unsigned_int),void_(__cdecl*)(physx::MemoryBuffer_&___ptr64,unsigned_int_const_&___ptr64)>
               (longlong *param_1,undefined8 *param_2,uint param_3,longlong param_4,code *param_5,
               uint param_6,undefined8 param_7,code *param_8)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  pcVar2 = param_8;
  uVar1 = param_6;
  if ((param_6 != 0) && (param_4 != 0)) {
    uVar4 = 0;
    if (param_6 != 0) {
      do {
        if ((uVar4 == 0) || (uVar4 % param_3 != 0)) {
          uVar5 = 1;
          puVar3 = &DAT_145af3920;
        }
        else {
          uVar5 = 4;
          puVar3 = &DAT_145af6094;
        }
        (**(code **)*param_2)(param_2,puVar3,uVar5);
        param_6 = (*param_5)(param_4,uVar4);
        (*pcVar2)(param_2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    param_6 = param_6 & 0xffffff00;
    (**(code **)*param_2)(param_2,&param_6,1);
    (**(code **)(*param_1 + 0x10))(param_1,param_7,param_2[4]);
    param_2[3] = 0;
  }
  return;
}



// FUNCTION 1432a4d30 writeReference<physx::PxArticulation> body=190 status=ok
// SIG undefined writeReference<physx::PxArticulation>(void)

void physx::Sn::writeReference<physx::PxArticulation>
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
  local_28 = "PxArticulation";
  local_20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,param_3,&local_28);
  return;
}



// FUNCTION 1432a4df0 writeReference<physx::PxClothFabric> body=190 status=ok
// SIG undefined writeReference<physx::PxClothFabric>(void)

void physx::Sn::writeReference<physx::PxClothFabric>
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
  local_28 = "PxClothFabric";
  local_20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,param_3,&local_28);
  return;
}



// FUNCTION 1432a4eb0 writeStrideFlags<physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>_const_&___ptr64_(__cdecl*)(physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>_const_*___ptr64,unsigned_int)> body=240 status=ok
// SIG undefined writeStrideFlags<physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>_const_&___ptr64_(__cdecl*)(physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>_const_*___ptr64,unsigned_int)>(void)

void physx::Sn::
     writeStrideFlags<physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>_const_&___ptr64_(__cdecl*)(physx::PxFlags<enum_physx::PxParticleFlag::Enum,unsigned_short>_const_*___ptr64,unsigned_int)>
               (longlong *param_1,undefined8 *param_2,uint param_3,longlong *param_4,
               undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = param_8;
  uVar1 = param_6;
  if ((param_6 != 0) && (*param_4 != 0)) {
    uVar4 = 0;
    if (param_6 != 0) {
      do {
        writeFlagsBuffer(param_2,*(undefined2 *)((ulonglong)((int)param_4[1] * uVar4) + *param_4),
                         uVar2);
        if ((uVar4 == 0) || (uVar4 % param_3 != 0)) {
          uVar5 = 1;
          puVar3 = &DAT_145af3920;
        }
        else {
          uVar5 = 4;
          puVar3 = &DAT_145af6094;
        }
        (**(code **)*param_2)(param_2,puVar3,uVar5);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    param_6 = param_6 & 0xffffff00;
    (**(code **)*param_2)(param_2,&param_6,1);
    (**(code **)(*param_1 + 0x10))(param_1,param_7,param_2[4]);
    param_2[3] = 0;
  }
  return;
}



// FUNCTION 1432a4fa0 ~CVariableMemoryPool body=205 status=ok
// SIG undefined ~CVariableMemoryPool(void)

void physx::CVariableMemoryPool::~CVariableMemoryPool(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined8 *)param_1[2];
  uVar3 = 0;
  uVar2 = (ulonglong)((longlong)(puVar1 + *(uint *)(param_1 + 3)) + (7 - (longlong)puVar1)) >> 3;
  if (puVar1 + *(uint *)(param_1 + 3) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(**(longlong **)*param_1 + 0x10))(*(longlong **)*param_1,*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  shdfnd::internal::
  HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
  ::clear(param_1 + 4);
  if (param_1[5] != 0) {
    (**(code **)(**(longlong **)param_1[4] + 0x10))();
  }
  if ((((*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x1c))) && (param_1[2] != 0)) {
    (**(code **)(**(longlong **)param_1[1] + 0x10))();
  }
  return;
}



// FUNCTION 1432a5070 operator<< body=122 status=ok
// SIG undefined operator<<(void)

undefined8 * physx::operator<<(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char local_88 [128];
  
  ::_guard_xfg_dispatch_icall_nop(local_88,0,0x80);
  physx::shdfnd::snprintf(local_88,0x80,"%u");
  if (local_88[0] != '\0') {
    lVar2 = -1;
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while (local_88[lVar1] != '\0');
    (**(code **)*param_1)(param_1,local_88);
  }
  return param_1;
}



// FUNCTION 1432a5100 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
physx::MemoryBufferBase<physx::CMemoryPoolManager>::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[4];
  *param_1 = &PTR_write_145af5c98;
  param_1[1] = &PTR_read_145af5ca8;
  if (lVar1 != 0) {
    CVariableMemoryPool::AddFreeMem(param_1[2] + 8,lVar1 + -0x10,*(undefined4 *)(lVar1 + -8));
  }
  param_1[1] = &PTR__purecall_143f3ef70;
  *param_1 = &PTR__purecall_143f3ef70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1432a5180 AddFreeMem body=226 status=ok
// SIG undefined AddFreeMem(void)

void physx::CVariableMemoryPool::AddFreeMem(longlong param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int local_res8 [2];
  char local_res18 [16];
  
  *param_2 = 0;
  *(int *)(param_2 + 1) = param_3;
  if ((*(int *)(param_1 + 0x5c) != 0) &&
     (uVar2 = ~(param_3 << 0xf) + param_3, uVar2 = (uVar2 >> 10 ^ uVar2) * 9,
     uVar2 = uVar2 ^ uVar2 >> 6, uVar2 = ~(uVar2 << 0xb) + uVar2,
     uVar2 = *(uint *)(*(longlong *)(param_1 + 0x40) +
                      (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x4c) - 1U) * 4),
     uVar2 != 0xffffffff)) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar2 * 0x10) == param_3) {
        if ((uVar2 != 0xffffffff) &&
           (lVar3 = (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x30), lVar3 != 0)) {
          *param_2 = *(undefined8 *)(lVar3 + 8);
          *(undefined8 **)(lVar3 + 8) = param_2;
          return;
        }
        break;
      }
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar2 * 4);
    } while (uVar2 != 0xffffffff);
  }
  local_res8[0] = param_3;
  piVar1 = (int *)shdfnd::internal::
                  HashBase<physx::shdfnd::Pair<unsigned_int_const_,physx::SVariableMemPoolNode_*___ptr64>,unsigned_int,physx::shdfnd::Hash<unsigned_int>,physx::shdfnd::internal::HashMapBase<unsigned_int,physx::SVariableMemPoolNode_*___ptr64,physx::shdfnd::Hash<unsigned_int>,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::SVariableMemPoolNode_*___ptr64>,1>
                  ::create(param_1 + 0x20,local_res8,local_res18);
  if ((local_res18[0] == '\0') && (piVar1 != (int *)0x0)) {
    *piVar1 = param_3;
    *(undefined8 **)(piVar1 + 2) = param_2;
  }
  return;
}



// FUNCTION 1432a5270 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<float>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683aa50,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1432a5310 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxVec3>::allocate
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  PxAllocatorCallback *pPVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    pPVar2 = physx::shdfnd::getAllocator();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = "<allocation names disabled>";
    }
    else {
      pcVar4 = (char *)__std_type_info_name(0x14683aa68,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}


