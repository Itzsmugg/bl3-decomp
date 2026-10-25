// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14327cdd0 operator()<485,physx::PxPrismaticJoint,physx::PxJointLinearLimitPair_const_&___ptr64,physx::PxJointLinearLimitPair> body=156 status=ok
// SIG undefined operator()<485,physx::PxPrismaticJoint,physx::PxJointLinearLimitPair_const_&___ptr64,physx::PxJointLinearLimitPair>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxPrismaticJoint>_>::
     operator()<485,physx::PxPrismaticJoint,physx::PxJointLinearLimitPair_const_&___ptr64,physx::PxJointLinearLimitPair>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_118 [4];
  int local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [232];
  
  local_110 = *(undefined4 *)param_2;
  uStack_10c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_108 = *(undefined4 *)(param_2 + 1);
  uStack_104 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_100 = *(undefined4 *)(param_2 + 2);
  uStack_fc = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_f8 = *(undefined4 *)(param_2 + 3);
  uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_110,*param_2);
  local_114 = 0xc0;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_114 = **(int **)(param_1 + 0x60) + 0xc0;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_118[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_f0,0,0xe0);
  PxJointLinearLimitPairGeneratedInfo::PxJointLinearLimitPairGeneratedInfo(local_f0);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  complexProperty<physx::PxRepXPropertyAccessor<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>,physx::PxJointAngularLimitPairGeneratedInfo_const_>
            (param_1,puVar2,local_118,local_f0);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327ce70 operator()<485,physx::PxPrismaticJoint,physx::PxJointLinearLimitPair_const_&___ptr64,physx::PxJointLinearLimitPair> body=196 status=ok
// SIG undefined operator()<485,physx::PxPrismaticJoint,physx::PxJointLinearLimitPair_const_&___ptr64,physx::PxJointLinearLimitPair>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxPrismaticJoint>_>::
     operator()<485,physx::PxPrismaticJoint,physx::PxJointLinearLimitPair_const_&___ptr64,physx::PxJointLinearLimitPair>
               (longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [32];
  undefined1 local_f0 [232];
  
  local_120 = *(undefined4 *)(param_2 + 0x10);
  uStack_11c = *(undefined4 *)(param_2 + 0x14);
  uStack_118 = *(undefined4 *)(param_2 + 0x18);
  uStack_114 = *(undefined4 *)(param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_f0,0,0xe0);
  PxJointLinearLimitPairGeneratedInfo::PxJointLinearLimitPairGeneratedInfo(local_f0);
  puVar3 = (undefined4 *)(*(code *)CONCAT44(uStack_11c,local_120))(local_110,param_1[2]);
  local_158 = *puVar3;
  uStack_154 = puVar3[1];
  uStack_150 = puVar3[2];
  uStack_14c = puVar3[3];
  local_148 = *(undefined8 *)(puVar3 + 4);
  local_140 = puVar3[6];
  Sn::writeAllProperties<physx::PxJointLinearLimitPair>
            (*param_1,&local_158,param_1[1],param_1[3],param_1[4]);
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



// FUNCTION 14327cf40 operator()<486,physx::PxPrismaticJoint,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>_> body=186 status=ok
// SIG undefined operator()<486,physx::PxPrismaticJoint,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxPrismaticJoint>_>::
     operator()<486,physx::PxPrismaticJoint,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>_>
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
      Sn::stringToFlagsType(local_res10[0],param_1[7],local_res8,&PTR_s_eLIMIT_ENABLED_1467c9b60);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d000 operator()<486,physx::PxPrismaticJoint,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>_> body=165 status=ok
// SIG undefined operator()<486,physx::PxPrismaticJoint,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxPrismaticJoint>_>::
     operator()<486,physx::PxPrismaticJoint,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>_>
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
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eLIMIT_ENABLED_1467c9b60);
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



// FUNCTION 14327d0b0 operator()<494,physx::PxRevoluteJoint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair> body=156 status=ok
// SIG undefined operator()<494,physx::PxRevoluteJoint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRevoluteJoint>_>::
     operator()<494,physx::PxRevoluteJoint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_118 [4];
  int local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [232];
  
  local_110 = *(undefined4 *)param_2;
  uStack_10c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_108 = *(undefined4 *)(param_2 + 1);
  uStack_104 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_100 = *(undefined4 *)(param_2 + 2);
  uStack_fc = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_f8 = *(undefined4 *)(param_2 + 3);
  uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_110,*param_2);
  local_114 = 0xc0;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_114 = **(int **)(param_1 + 0x60) + 0xc0;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_118[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_f0,0,0xe0);
  PxJointAngularLimitPairGeneratedInfo::PxJointAngularLimitPairGeneratedInfo(local_f0);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  complexProperty<physx::PxRepXPropertyAccessor<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>,physx::PxJointAngularLimitPairGeneratedInfo_const_>
            (param_1,puVar2,local_118,local_f0);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d150 operator()<498,physx::PxRevoluteJoint,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>_> body=186 status=ok
// SIG undefined operator()<498,physx::PxRevoluteJoint,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRevoluteJoint>_>::
     operator()<498,physx::PxRevoluteJoint,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>_>
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
      Sn::stringToFlagsType(local_res10[0],param_1[7],local_res8,&PTR_s_eLIMIT_ENABLED_1467c98c0);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d210 operator()<498,physx::PxRevoluteJoint,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>_> body=165 status=ok
// SIG undefined operator()<498,physx::PxRevoluteJoint,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxRevoluteJoint>_>::
     operator()<498,physx::PxRevoluteJoint,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>_>
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
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eLIMIT_ENABLED_1467c98c0);
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



// FUNCTION 14327d2c0 operator()<504,physx::PxSphericalJoint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone> body=156 status=ok
// SIG undefined operator()<504,physx::PxSphericalJoint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxSphericalJoint>_>::
     operator()<504,physx::PxSphericalJoint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_118 [4];
  int local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [232];
  
  local_110 = *(undefined4 *)param_2;
  uStack_10c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_108 = *(undefined4 *)(param_2 + 1);
  uStack_104 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_100 = *(undefined4 *)(param_2 + 2);
  uStack_fc = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_f8 = *(undefined4 *)(param_2 + 3);
  uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_110,*param_2);
  local_114 = 0xb8;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_114 = **(int **)(param_1 + 0x60) + 0xb8;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_118[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_f0,0,0xe0);
  PxJointLimitConeGeneratedInfo::PxJointLimitConeGeneratedInfo(local_f0);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  complexProperty<physx::PxRepXPropertyAccessor<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>,physx::PxJointAngularLimitPairGeneratedInfo_const_>
            (param_1,puVar2,local_118,local_f0);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d360 operator()<505,physx::PxSphericalJoint,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>_> body=186 status=ok
// SIG undefined operator()<505,physx::PxSphericalJoint,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxSphericalJoint>_>::
     operator()<505,physx::PxSphericalJoint,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>_>
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
      Sn::stringToFlagsType(local_res10[0],param_1[7],local_res8,&PTR_s_eLIMIT_ENABLED_1467c9530);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d420 operator()<505,physx::PxSphericalJoint,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>_> body=165 status=ok
// SIG undefined operator()<505,physx::PxSphericalJoint,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxSphericalJoint>_>::
     operator()<505,physx::PxSphericalJoint,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>_>
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
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eLIMIT_ENABLED_1467c9530);
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



// FUNCTION 14327d4d0 operator()<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform> body=109 status=ok
// SIG undefined operator()<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
     operator()<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x28;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x28;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x21;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  simpleProperty<physx::PxRepXPropertyAccessor<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d540 operator()<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform> body=109 status=ok
// SIG undefined operator()<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
     operator()<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x28;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x28;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x21;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d5b0 operator()<537,physx::PxD6JointDrive,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>_> body=184 status=ok
// SIG undefined operator()<537,physx::PxD6JointDrive,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6JointDrive>_>::
     operator()<537,physx::PxD6JointDrive,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>_>
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
      Sn::stringToFlagsType(local_res10[0],param_1[7],local_res8,&PTR_s_eACCELERATION_1467c8f30);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d670 operator()<537,physx::PxD6JointDrive,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>_> body=162 status=ok
// SIG undefined operator()<537,physx::PxD6JointDrive,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6JointDrive>_>::
     operator()<537,physx::PxD6JointDrive,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [32];
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = (undefined4 *)(*pcVar3)(local_res8,param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eACCELERATION_1467c8f30);
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



// FUNCTION 14327d720 operator()<38,physx::PxRigidBody,physx::PxTransform_const_&___ptr64,physx::PxTransform> body=109 status=ok
// SIG undefined operator()<38,physx::PxRigidBody,physx::PxTransform_const_&___ptr64,physx::PxTransform>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
     operator()<38,physx::PxRigidBody,physx::PxTransform_const_&___ptr64,physx::PxTransform>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x48;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x48;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x26;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  simpleProperty<physx::PxRepXPropertyAccessor<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d790 operator()<38,physx::PxRigidBody,physx::PxTransform_const_&___ptr64,physx::PxTransform> body=109 status=ok
// SIG undefined operator()<38,physx::PxRigidBody,physx::PxTransform_const_&___ptr64,physx::PxTransform>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
     operator()<38,physx::PxRigidBody,physx::PxTransform_const_&___ptr64,physx::PxTransform>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x48;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x48;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x26;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d800 operator()<39,physx::PxRigidBody,float,float> body=109 status=ok
// SIG undefined operator()<39,physx::PxRigidBody,float,float>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
     operator()<39,physx::PxRigidBody,float,float>(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 100;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 100;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x27;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d870 operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3> body=116 status=ok
// SIG undefined operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
     operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  cVar2 = Sn::RepXVisitorReaderBase<physx::PxArticulationJoint>::readProperty<physx::PxVec3>
                    (param_1,&local_58);
  if (cVar2 != '\0') {
    local_48 = local_58;
    local_40 = local_50;
    local_44 = local_54;
    (*(code *)CONCAT44(uStack_14,uStack_18))(*(undefined8 *)(param_1 + 0x30),&local_48);
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d8f0 operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3> body=162 status=ok
// SIG undefined operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
     operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  byte *pbVar3;
  undefined1 local_res8 [32];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  iStack_28 = *(int *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  cVar2 = Sn::RepXVisitorReaderBase<physx::PxArticulationJoint>::readProperty<physx::PxVec3>
                    (param_1,&local_58);
  if (cVar2 != '\0') {
    pbVar3 = (byte *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x178))
                               (*(longlong **)(param_1 + 0x30),local_res8);
    if (((*pbVar3 & 1) == 0) || (1 < iStack_28 - 0x2bU)) {
      local_48 = local_58;
      local_40 = local_50;
      local_44 = local_54;
      (*(code *)CONCAT44(uStack_14,uStack_18))(*(undefined8 *)(param_1 + 0x30),&local_48);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327d9a0 operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3> body=146 status=ok
// SIG undefined operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
     operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x6c;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x6c;
  }
  piVar1 = (int *)param_1[5];
  iVar3 = 0x29;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327da40 operator()<43,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3> body=145 status=ok
// SIG undefined operator()<43,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
     operator()<43,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x84;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x84;
  }
  iVar3 = 0x2b;
  piVar1 = (int *)param_1[5];
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327dae0 operator()<44,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3> body=145 status=ok
// SIG undefined operator()<44,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
     operator()<44,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x90;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x90;
  }
  iVar3 = 0x2c;
  piVar1 = (int *)param_1[5];
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327db80 operator()<45,physx::PxRigidBody,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>_> body=185 status=ok
// SIG undefined operator()<45,physx::PxRigidBody,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
     operator()<45,physx::PxRigidBody,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>_>
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
      Sn::stringToFlagsType(local_res10[0],param_1[7],local_res8,&PTR_s_eKINEMATIC_1467c92a0);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327dc40 operator()<45,physx::PxRigidBody,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>_> body=165 status=ok
// SIG undefined operator()<45,physx::PxRigidBody,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
     operator()<45,physx::PxRigidBody,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [32];
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = (undefined1 *)(*pcVar3)(local_res8,param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eKINEMATIC_1467c92a0);
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



// FUNCTION 14327dcf0 operator()<57,physx::PxRigidDynamic,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>_> body=186 status=ok
// SIG undefined operator()<57,physx::PxRigidDynamic,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
     operator()<57,physx::PxRigidDynamic,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>_>
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
      Sn::stringToFlagsType(local_res10[0],param_1[7],local_res8,&PTR_s_eLOCK_LINEAR_X_1467c8ec0);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327ddb0 operator()<57,physx::PxRigidDynamic,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>_> body=165 status=ok
// SIG undefined operator()<57,physx::PxRigidDynamic,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxRigidDynamic>_>::
     operator()<57,physx::PxRigidDynamic,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>_>
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
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eLOCK_LINEAR_X_1467c8ec0);
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



// FUNCTION 14327de60 operator()<59,physx::PxRigidDynamic,unsigned_int> body=218 status=ok
// SIG undefined operator()<59,physx::PxRigidDynamic,unsigned_int>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
     operator()<59,physx::PxRigidDynamic,unsigned_int>(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int local_res8 [2];
  undefined1 local_28 [4];
  int local_24;
  undefined1 local_20;
  undefined8 *local_18;
  
  local_res8[0] = 0x3b;
  piVar2 = local_res8;
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x58);
  }
  iVar1 = 0;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x60);
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  local_24 = iVar1 + 0xd0;
  local_20 = 1;
  local_28[0] = 1;
  local_18 = param_2;
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<59,physx::PxRigidDynamic,unsigned_int>_const_>
            (param_1,*piVar2,local_28);
  *piVar2 = *piVar2 + 1;
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  local_24 = iVar1 + 0xd4;
  local_20 = 0;
  local_28[0] = 1;
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<59,physx::PxRigidDynamic,unsigned_int>_const_>
            (param_1,*piVar2,local_28);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327df40 operator()<59,physx::PxRigidDynamic,unsigned_int> body=457 status=ok
// SIG undefined operator()<59,physx::PxRigidDynamic,unsigned_int>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxRigidDynamic>_>::
     operator()<59,physx::PxRigidDynamic,unsigned_int>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  uint local_res8 [2];
  int local_res10 [4];
  undefined1 local_res20 [8];
  
  local_res10[0] = 0x3b;
  piVar5 = local_res10;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar5 = (int *)param_1[5];
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  (*(code *)param_2[5])(param_1[2],local_res8,local_res20);
  lVar1 = *param_1;
  pcVar4 = "bad__repx__name";
  if (*(int *)(lVar1 + 0x10) == 0) {
    pcVar6 = "bad__repx__name";
  }
  else {
    pcVar6 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  puVar2 = (undefined8 *)param_1[3];
  plVar3 = (longlong *)param_1[1];
  physx::operator<<(puVar2,local_res8[0]);
  local_res8[0] = local_res8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,local_res8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,pcVar6,puVar2[4]);
  puVar2[3] = 0;
  *piVar5 = *piVar5 + 1;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  (*(code *)param_2[5])(param_1[2],local_res10,local_res8);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    pcVar4 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  puVar2 = (undefined8 *)param_1[3];
  plVar3 = (longlong *)param_1[1];
  physx::operator<<(puVar2,local_res8[0]);
  local_res8[0] = local_res8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,local_res8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,pcVar4,puVar2[4]);
  puVar2[3] = 0;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327e110 operator()<73,physx::PxArticulationJoint,physx::PxTransform_const_&___ptr64,physx::PxTransform> body=109 status=ok
// SIG undefined operator()<73,physx::PxArticulationJoint,physx::PxTransform_const_&___ptr64,physx::PxTransform>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
     operator()<73,physx::PxArticulationJoint,physx::PxTransform_const_&___ptr64,physx::PxTransform>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x1c;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x1c;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x49;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  simpleProperty<physx::PxRepXPropertyAccessor<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327e180 operator()<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat> body=109 status=ok
// SIG undefined operator()<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
     operator()<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x38;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x38;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x4a;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxArticulationJoint>::
  simpleProperty<physx::PxRepXPropertyAccessor<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327e1f0 operator()<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat> body=238 status=ok
// SIG undefined operator()<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
     operator()<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_2 + 2);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_10 = *(undefined4 *)(param_2 + 3);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar5 = (undefined4 *)(*(code *)CONCAT44(uStack_14,local_18))(&local_48,param_1[2]);
  lVar2 = *param_1;
  local_48 = *puVar5;
  uStack_44 = puVar5[1];
  uStack_40 = puVar5[2];
  uStack_3c = puVar5[3];
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar6 = "bad__repx__name";
  }
  else {
    pcVar6 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  puVar3 = (undefined8 *)param_1[3];
  plVar4 = (longlong *)param_1[1];
  physx::operator<<(puVar3,&local_48);
  local_res8[0] = 0;
  (**(code **)*puVar3)(puVar3,local_res8,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,pcVar6,puVar3[4]);
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



// FUNCTION 14327e2e0 operator()<75,physx::PxArticulationJoint,physx::PxVec3_const_&___ptr64,physx::PxVec3> body=146 status=ok
// SIG undefined operator()<75,physx::PxArticulationJoint,physx::PxVec3_const_&___ptr64,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
     operator()<75,physx::PxArticulationJoint,physx::PxVec3_const_&___ptr64,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x48;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x48;
  }
  piVar1 = (int *)param_1[5];
  iVar3 = 0x4b;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327e380 operator()<76,physx::PxArticulationJoint,enum_physx::PxArticulationJointDriveType::Enum,enum_physx::PxArticulationJointDriveType::Enum> body=156 status=ok
// SIG undefined operator()<76,physx::PxArticulationJoint,enum_physx::PxArticulationJointDriveType::Enum,enum_physx::PxArticulationJointDriveType::Enum>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
     operator()<76,physx::PxArticulationJoint,enum_physx::PxArticulationJointDriveType::Enum,enum_physx::PxArticulationJointDriveType::Enum>
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
      uVar5 = Sn::findEnumByName(local_res8[0],&PTR_s_eTARGET_1467c9500);
      (*pcVar3)(param_1[6],uVar5);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327e420 operator()<76,physx::PxArticulationJoint,enum_physx::PxArticulationJointDriveType::Enum,enum_physx::PxArticulationJointDriveType::Enum> body=228 status=ok
// SIG undefined operator()<76,physx::PxArticulationJoint,enum_physx::PxArticulationJointDriveType::Enum,enum_physx::PxArticulationJointDriveType::Enum>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
     operator()<76,physx::PxArticulationJoint,enum_physx::PxArticulationJointDriveType::Enum,enum_physx::PxArticulationJointDriveType::Enum>
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
  ppuVar7 = &PTR_s_eTARGET_1467c9500;
  plVar3 = (longlong *)param_1[1];
  puVar4 = PTR_s_eTARGET_1467c9500;
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



// FUNCTION 14327e510 operator()<81,physx::PxArticulationJoint,float> body=387 status=ok
// SIG undefined operator()<81,physx::PxArticulationJoint,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
     operator()<81,physx::PxArticulationJoint,float>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined4 uVar6;
  char *local_res8;
  char *local_res10 [2];
  undefined1 local_res20 [8];
  
  ppcVar5 = &local_res8;
  if ((char **)param_1[0xb] != (char **)0x0) {
    ppcVar5 = (char **)param_1[0xb];
  }
  local_res8 = (char *)CONCAT44(local_res8._4_4_,0x51);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  pcVar4 = "bad__repx__name";
  local_res10[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar3 = "bad__repx__name";
    }
    else {
      pcVar3 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar3,local_res10)
    ;
    if (((cVar2 != '\0') && (local_res10[0] != (char *)0x0)) && (*local_res10[0] != '\0')) {
      uVar6 = Sn::strToFloat(local_res10[0],local_res20);
      lVar1 = param_1[6];
      (*(code *)param_2[5])(lVar1,local_res20,local_res10);
      (*(code *)param_2[4])(lVar1,uVar6,local_res10[0]._0_4_);
    }
  }
  *(int *)ppcVar5 = *(int *)ppcVar5 + 1;
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) != 0) {
      pcVar4 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar4,&local_res8)
    ;
    if (((cVar2 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      uVar6 = Sn::strToFloat(local_res8,local_res10);
      lVar1 = param_1[6];
      (*(code *)param_2[5])(lVar1,&local_res8,local_res10);
      (*(code *)param_2[4])(lVar1,local_res8._0_4_,uVar6);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327e6a0 operator()<81,physx::PxArticulationJoint,float> body=321 status=ok
// SIG undefined operator()<81,physx::PxArticulationJoint,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
     operator()<81,physx::PxArticulationJoint,float>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int local_res8 [2];
  undefined1 local_28 [4];
  int local_24;
  undefined1 local_20;
  undefined8 *local_18;
  
  local_res8[0] = 0x51;
  piVar3 = local_res8;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar3 = (int *)param_1[5];
  }
  iVar2 = 0;
  if ((int *)param_1[6] != (int *)0x0) {
    iVar2 = *(int *)param_1[6];
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  local_24 = iVar2 + 0x68;
  local_20 = 1;
  local_28[0] = 1;
  local_18 = param_2;
  Sn::RepXVisitorWriterBase<physx::PxD6Joint>::
  simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<441,physx::PxJoint,float>_const_>
            (param_1,*piVar3,local_28);
  *piVar3 = *piVar3 + 1;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  local_24 = iVar2 + 0x6c;
  local_20 = 0;
  local_28[0] = 1;
  Sn::RepXVisitorWriterBase<physx::PxD6Joint>::
  simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<441,physx::PxJoint,float>_const_>
            (param_1,*piVar3,local_28);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327e7f0 operator()<85,physx::PxArticulationJoint,bool,bool> body=160 status=ok
// SIG undefined operator()<85,physx::PxArticulationJoint,bool,bool>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
     operator()<85,physx::PxArticulationJoint,bool,bool>(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
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
      iVar5 = physx::shdfnd::stricmp(local_res8[0],"true");
      (*pcVar3)(param_1[6],iVar5 == 0);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327e890 operator()<85,physx::PxArticulationJoint,bool,bool> body=152 status=ok
// SIG undefined operator()<85,physx::PxArticulationJoint,bool,bool>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
     operator()<85,physx::PxArticulationJoint,bool,bool>(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 uVar4;
  char *pcVar5;
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*pcVar3)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeProperty<bool>(param_1[1],param_1[4],param_1[3],pcVar5,uVar4);
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



// FUNCTION 14327e930 operator()<86,physx::PxArticulationJoint,float> body=387 status=ok
// SIG undefined operator()<86,physx::PxArticulationJoint,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
     operator()<86,physx::PxArticulationJoint,float>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined4 uVar6;
  char *local_res8;
  char *local_res10 [2];
  undefined1 local_res20 [8];
  
  ppcVar5 = &local_res8;
  if ((char **)param_1[0xb] != (char **)0x0) {
    ppcVar5 = (char **)param_1[0xb];
  }
  local_res8 = (char *)CONCAT44(local_res8._4_4_,0x56);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  pcVar4 = "bad__repx__name";
  local_res10[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar3 = "bad__repx__name";
    }
    else {
      pcVar3 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar3,local_res10)
    ;
    if (((cVar2 != '\0') && (local_res10[0] != (char *)0x0)) && (*local_res10[0] != '\0')) {
      uVar6 = Sn::strToFloat(local_res10[0],local_res20);
      lVar1 = param_1[6];
      (*(code *)param_2[5])(lVar1,local_res20,local_res10);
      (*(code *)param_2[4])(lVar1,uVar6,local_res10[0]._0_4_);
    }
  }
  *(int *)ppcVar5 = *(int *)ppcVar5 + 1;
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) != 0) {
      pcVar4 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar4,&local_res8)
    ;
    if (((cVar2 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      uVar6 = Sn::strToFloat(local_res8,local_res10);
      lVar1 = param_1[6];
      (*(code *)param_2[5])(lVar1,&local_res8,local_res10);
      (*(code *)param_2[4])(lVar1,local_res8._0_4_,uVar6);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327eac0 operator()<86,physx::PxArticulationJoint,float> body=327 status=ok
// SIG undefined operator()<86,physx::PxArticulationJoint,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
     operator()<86,physx::PxArticulationJoint,float>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int local_res8 [2];
  undefined1 local_28 [4];
  int local_24;
  undefined1 local_20;
  undefined8 *local_18;
  
  local_res8[0] = 0x56;
  piVar3 = local_res8;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar3 = (int *)param_1[5];
  }
  iVar2 = 0;
  if ((int *)param_1[6] != (int *)0x0) {
    iVar2 = *(int *)param_1[6];
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  local_24 = iVar2 + 0x80;
  local_20 = 1;
  local_28[0] = 1;
  local_18 = param_2;
  Sn::RepXVisitorWriterBase<physx::PxD6Joint>::
  simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<441,physx::PxJoint,float>_const_>
            (param_1,*piVar3,local_28);
  *piVar3 = *piVar3 + 1;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  local_24 = iVar2 + 0x84;
  local_20 = 0;
  local_28[0] = 1;
  Sn::RepXVisitorWriterBase<physx::PxD6Joint>::
  simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<441,physx::PxJoint,float>_const_>
            (param_1,*piVar3,local_28);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327ec10 operator()<93,physx::PxArticulation,unsigned_int,unsigned_int> body=166 status=ok
// SIG undefined operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
     operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  ulong uVar5;
  char *pcVar6;
  char *local_res8;
  char *local_res10 [3];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar6 = "bad__repx__name";
    }
    else {
      pcVar6 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar6,&local_res8)
    ;
    if (((cVar4 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      local_res10[0] = local_res8;
      uVar5 = strtoul(local_res8,local_res10,10);
      (*pcVar3)(param_1[6],uVar5);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327ecc0 operator()<93,physx::PxArticulation,unsigned_int,unsigned_int> body=223 status=ok
// SIG undefined operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
     operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>
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
  piVar1 = (int *)param_1[6];
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



// FUNCTION 14327eda0 operator()<94,physx::PxArticulation,float,float> body=233 status=ok
// SIG undefined operator()<94,physx::PxArticulation,float,float>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
     operator()<94,physx::PxArticulation,float,float>(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  char *pcVar6;
  float fVar7;
  undefined1 local_res8 [8];
  
  pcVar5 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  fVar7 = (float)(*pcVar5)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar6 = "bad__repx__name";
  }
  else {
    pcVar6 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  puVar3 = (undefined8 *)param_1[3];
  plVar4 = (longlong *)param_1[1];
  toStream<double>(puVar3,&DAT_145af391c,(double)fVar7);
  local_res8[0] = 0;
  (**(code **)*puVar3)(puVar3,local_res8,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,pcVar6,puVar3[4]);
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



// FUNCTION 14327ee90 operator()<97,physx::PxArticulation,unsigned_int> body=405 status=ok
// SIG undefined operator()<97,physx::PxArticulation,unsigned_int>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
     operator()<97,physx::PxArticulation,unsigned_int>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *local_res8;
  char *local_res10;
  char *local_res20;
  
  local_res8 = (char *)CONCAT44(local_res8._4_4_,0x61);
  ppcVar5 = &local_res8;
  if ((char **)param_1[0xb] != (char **)0x0) {
    ppcVar5 = (char **)param_1[0xb];
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  pcVar6 = "bad__repx__name";
  local_res10 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar4 = "bad__repx__name";
    }
    else {
      pcVar4 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                      ((longlong *)param_1[5],pcVar4,&local_res10);
    if (((cVar2 != '\0') && (local_res10 != (char *)0x0)) && (*local_res10 != '\0')) {
      local_res20 = local_res10;
      uVar3 = strtoul(local_res10,&local_res20,10);
      lVar1 = param_1[6];
      (*(code *)param_2[5])(lVar1,&local_res20,&local_res10);
      (*(code *)param_2[4])(lVar1,uVar3,(ulonglong)local_res10 & 0xffffffff);
    }
  }
  *(int *)ppcVar5 = *(int *)ppcVar5 + 1;
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) != 0) {
      pcVar6 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar6,&local_res8)
    ;
    if (((cVar2 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      local_res10 = local_res8;
      uVar3 = strtoul(local_res8,&local_res10,10);
      lVar1 = param_1[6];
      (*(code *)param_2[5])(lVar1,&local_res8,&local_res10);
      (*(code *)param_2[4])(lVar1,(ulonglong)local_res8 & 0xffffffff,uVar3);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327f030 operator()<97,physx::PxArticulation,unsigned_int> body=457 status=ok
// SIG undefined operator()<97,physx::PxArticulation,unsigned_int>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
     operator()<97,physx::PxArticulation,unsigned_int>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  uint local_res8 [2];
  int local_res10 [4];
  undefined1 local_res20 [8];
  
  local_res10[0] = 0x61;
  piVar5 = local_res10;
  if ((int *)param_1[6] != (int *)0x0) {
    piVar5 = (int *)param_1[6];
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[2]);
  (*(code *)param_2[5])(param_1[2],local_res8,local_res20);
  lVar1 = *param_1;
  pcVar4 = "bad__repx__name";
  if (*(int *)(lVar1 + 0x10) == 0) {
    pcVar6 = "bad__repx__name";
  }
  else {
    pcVar6 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  puVar2 = (undefined8 *)param_1[3];
  plVar3 = (longlong *)param_1[1];
  physx::operator<<(puVar2,local_res8[0]);
  local_res8[0] = local_res8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,local_res8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,pcVar6,puVar2[4]);
  puVar2[3] = 0;
  *piVar5 = *piVar5 + 1;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_2[3]);
  (*(code *)param_2[5])(param_1[2],local_res10,local_res8);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    pcVar4 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  puVar2 = (undefined8 *)param_1[3];
  plVar3 = (longlong *)param_1[1];
  physx::operator<<(puVar2,local_res8[0]);
  local_res8[0] = local_res8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,local_res8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,pcVar4,puVar2[4]);
  puVar2[3] = 0;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14327f200 operator()<103,physx::PxArticulation,char_const_*___ptr64,char_const_*___ptr64> body=153 status=ok
// SIG undefined operator()<103,physx::PxArticulation,char_const_*___ptr64,char_const_*___ptr64>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
     operator()<103,physx::PxArticulation,char_const_*___ptr64,char_const_*___ptr64>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*pcVar3)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeProperty<char_const_*___ptr64>(param_1[1],param_1[4],param_1[3],pcVar5,uVar4);
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



// FUNCTION 14327f2a0 operator()<126,physx::PxShape,physx::PxTransform_const_&___ptr64,physx::PxTransform> body=109 status=ok
// SIG undefined operator()<126,physx::PxShape,physx::PxTransform_const_&___ptr64,physx::PxTransform>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>::
     operator()<126,physx::PxShape,physx::PxTransform_const_&___ptr64,physx::PxTransform>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x34;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x34;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x7e;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  simpleProperty<physx::PxRepXPropertyAccessor<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327f310 operator()<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData> body=109 status=ok
// SIG undefined operator()<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>::
     operator()<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x50;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x50;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x7f;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxShape>::
  simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327f380 operator()<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData> body=146 status=ok
// SIG undefined operator()<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxShape>_>::
     operator()<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x50;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x50;
  }
  piVar1 = (int *)param_1[5];
  iVar3 = 0x7f;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxShape>::
  simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327f420 operator()<128,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData> body=109 status=ok
// SIG undefined operator()<128,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>::
     operator()<128,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x60;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x60;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x80;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxShape>::
  simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327f490 operator()<128,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData> body=146 status=ok
// SIG undefined operator()<128,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxShape>_>::
     operator()<128,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x60;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x60;
  }
  piVar1 = (int *)param_1[5];
  iVar3 = 0x80;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxShape>::
  simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327f530 operator()<132,physx::PxShape,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>_> body=185 status=ok
// SIG undefined operator()<132,physx::PxShape,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>::
     operator()<132,physx::PxShape,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>_>
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
      Sn::stringToFlagsType(local_res10[0],param_1[7],local_res8,&PTR_s_eSIMULATION_SHAPE_1467c9b80)
      ;
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327f5f0 operator()<132,physx::PxShape,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>_> body=165 status=ok
// SIG undefined operator()<132,physx::PxShape,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxShape>_>::
     operator()<132,physx::PxShape,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [32];
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = (undefined1 *)(*pcVar3)(local_res8,param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eSIMULATION_SHAPE_1467c9b80);
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



// FUNCTION 14327f6a0 operator()<149,physx::PxCloth,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>_> body=186 status=ok
// SIG undefined operator()<149,physx::PxCloth,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>::
     operator()<149,physx::PxCloth,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>_>
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
      Sn::stringToFlagsType(local_res10[0],param_1[7],local_res8,&PTR_s_eDEFAULT_1467c9b00);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327f760 operator()<149,physx::PxCloth,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>_> body=165 status=ok
// SIG undefined operator()<149,physx::PxCloth,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     operator()<149,physx::PxCloth,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>_>
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
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eDEFAULT_1467c9b00);
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



// FUNCTION 14327f810 operator()<151,physx::PxCloth,physx::PxTransform_const_&___ptr64,physx::PxTransform> body=109 status=ok
// SIG undefined operator()<151,physx::PxCloth,physx::PxTransform_const_&___ptr64,physx::PxTransform>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>::
     operator()<151,physx::PxCloth,physx::PxTransform_const_&___ptr64,physx::PxTransform>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x30;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x30;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0x97;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  simpleProperty<physx::PxRepXPropertyAccessor<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327f880 operator()<155,physx::PxCloth,physx::PxVec3,physx::PxVec3> body=146 status=ok
// SIG undefined operator()<155,physx::PxCloth,physx::PxVec3,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     operator()<155,physx::PxCloth,physx::PxVec3,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x58;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x58;
  }
  piVar1 = (int *)param_1[5];
  iVar3 = 0x9b;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327f920 operator()<156,physx::PxCloth,physx::PxVec3,physx::PxVec3> body=146 status=ok
// SIG undefined operator()<156,physx::PxCloth,physx::PxVec3,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     operator()<156,physx::PxCloth,physx::PxVec3,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 100;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 100;
  }
  piVar1 = (int *)param_1[5];
  iVar3 = 0x9c;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327f9c0 operator()<157,physx::PxCloth,physx::PxVec3,physx::PxVec3> body=146 status=ok
// SIG undefined operator()<157,physx::PxCloth,physx::PxVec3,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     operator()<157,physx::PxCloth,physx::PxVec3,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x70;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x70;
  }
  piVar1 = (int *)param_1[5];
  iVar3 = 0x9d;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327fa60 operator()<159,physx::PxCloth,physx::PxVec3,physx::PxVec3> body=146 status=ok
// SIG undefined operator()<159,physx::PxCloth,physx::PxVec3,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     operator()<159,physx::PxCloth,physx::PxVec3,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x7c;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x7c;
  }
  piVar1 = (int *)param_1[5];
  iVar3 = 0x9f;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327fb00 operator()<160,physx::PxCloth,physx::PxVec3,physx::PxVec3> body=145 status=ok
// SIG undefined operator()<160,physx::PxCloth,physx::PxVec3,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     operator()<160,physx::PxCloth,physx::PxVec3,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x88;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x88;
  }
  iVar3 = 0xa0;
  piVar1 = (int *)param_1[5];
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327fba0 operator()<161,physx::PxCloth,physx::PxVec3,physx::PxVec3> body=145 status=ok
// SIG undefined operator()<161,physx::PxCloth,physx::PxVec3,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     operator()<161,physx::PxCloth,physx::PxVec3,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x94;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x94;
  }
  iVar3 = 0xa1;
  piVar1 = (int *)param_1[5];
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327fc40 operator()<163,physx::PxCloth,physx::PxVec3,physx::PxVec3> body=145 status=ok
// SIG undefined operator()<163,physx::PxCloth,physx::PxVec3,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     operator()<163,physx::PxCloth,physx::PxVec3,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0xa0;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0xa0;
  }
  iVar3 = 0xa3;
  piVar1 = (int *)param_1[5];
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327fce0 operator()<164,physx::PxCloth,physx::PxVec3,physx::PxVec3> body=145 status=ok
// SIG undefined operator()<164,physx::PxCloth,physx::PxVec3,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     operator()<164,physx::PxCloth,physx::PxVec3,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0xac;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0xac;
  }
  iVar3 = 0xa4;
  piVar1 = (int *)param_1[5];
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 14327fd80 operator()<167,physx::PxCloth,physx::PxClothMotionConstraintConfig_const_&___ptr64,physx::PxClothMotionConstraintConfig> body=175 status=ok
// SIG undefined operator()<167,physx::PxCloth,physx::PxClothMotionConstraintConfig_const_&___ptr64,physx::PxClothMotionConstraintConfig>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>::
     operator()<167,physx::PxCloth,physx::PxClothMotionConstraintConfig_const_&___ptr64,physx::PxClothMotionConstraintConfig>
               (longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  PxClothMotionConstraintConfigGeneratedInfo local_70 [104];
  
  local_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_7c = *(undefined4 *)(param_2 + 0x14);
  uStack_78 = *(undefined4 *)(param_2 + 0x18);
  uStack_74 = *(undefined4 *)(param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_70,0,0x60);
  physx::PxClothMotionConstraintConfigGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_70);
  cVar2 = Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar2 != '\0') {
    puVar3 = (undefined8 *)
             (*(code *)CONCAT44(uStack_7c,local_80))(&local_a8,*(undefined8 *)(param_1 + 0x30));
    local_b8 = *puVar3;
    local_b0 = *(undefined4 *)(puVar3 + 1);
    Sn::
    readComplexObj<physx::PxClothMotionConstraintConfig,physx::Sn::RepXVisitorReaderBase<physx::PxCloth>,physx::PxClothMotionConstraintConfigGeneratedInfo>
              (param_1,&local_b8,local_70);
    local_a8 = local_b8;
    local_a0 = local_b0;
    (*(code *)CONCAT44(uStack_74,uStack_78))(*(undefined8 *)(param_1 + 0x30),&local_a8);
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327fe30 operator()<167,physx::PxCloth,physx::PxClothMotionConstraintConfig_const_&___ptr64,physx::PxClothMotionConstraintConfig> body=191 status=ok
// SIG undefined operator()<167,physx::PxCloth,physx::PxClothMotionConstraintConfig_const_&___ptr64,physx::PxClothMotionConstraintConfig>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     operator()<167,physx::PxCloth,physx::PxClothMotionConstraintConfig_const_&___ptr64,physx::PxClothMotionConstraintConfig>
               (longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [32];
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  PxClothMotionConstraintConfigGeneratedInfo local_70 [104];
  
  local_90 = *param_2;
  uStack_8c = param_2[1];
  uStack_88 = param_2[2];
  uStack_84 = param_2[3];
  local_80 = param_2[4];
  uStack_7c = param_2[5];
  uStack_78 = param_2[6];
  uStack_74 = param_2[7];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  local_94 = 0xc0;
  if ((int *)param_1[6] != (int *)0x0) {
    local_94 = *(int *)param_1[6] + 0xc0;
  }
  piVar1 = (int *)param_1[5];
  local_98[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_70,0,0x60);
  physx::PxClothMotionConstraintConfigGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_70);
  puVar3 = local_res8;
  if ((undefined1 *)param_1[5] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_1[5];
  }
  Sn::RepXVisitorWriterBase<physx::PxCloth>::
  complexProperty<physx::PxRepXPropertyAccessor<167,physx::PxCloth,physx::PxClothMotionConstraintConfig_const_&___ptr64,physx::PxClothMotionConstraintConfig>,physx::PxClothMotionConstraintConfigGeneratedInfo_const_>
            (param_1,puVar3,local_98,local_70);
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



// FUNCTION 14327fef0 operator()<169,physx::PxCloth,physx::PxClothTetherConfig_const_&___ptr64,physx::PxClothTetherConfig> body=207 status=ok
// SIG undefined operator()<169,physx::PxCloth,physx::PxClothTetherConfig_const_&___ptr64,physx::PxClothTetherConfig>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>::
     operator()<169,physx::PxCloth,physx::PxClothTetherConfig_const_&___ptr64,physx::PxClothTetherConfig>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  code *pcVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar2 = (code *)param_2[2];
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  physx::PxClothTetherConfigGeneratedInfo::_guard_xfg_dispatch_icall_nop
            ((PxClothTetherConfigGeneratedInfo *)&local_50);
  cVar4 = Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar4 != '\0') {
    puVar5 = (undefined8 *)(*pcVar2)(local_res10,*(undefined8 *)(param_1 + 0x30));
    local_res8 = *puVar5;
    Sn::
    readComplexObj<physx::PxClothTetherConfig,physx::Sn::RepXVisitorReaderBase<physx::PxCloth>,physx::PxClothTetherConfigGeneratedInfo>
              (param_1,&local_res8,&local_50);
    local_res10[0] = local_res8;
    (*pcVar3)(*(undefined8 *)(param_1 + 0x30),local_res10);
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14327ffc0 operator()<169,physx::PxCloth,physx::PxClothTetherConfig_const_&___ptr64,physx::PxClothTetherConfig> body=287 status=ok
// SIG undefined operator()<169,physx::PxCloth,physx::PxClothTetherConfig_const_&___ptr64,physx::PxClothTetherConfig>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     operator()<169,physx::PxCloth,physx::PxClothTetherConfig_const_&___ptr64,physx::PxClothTetherConfig>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_e8;
  longlong local_e0;
  undefined8 *puStack_d8;
  code *local_d0;
  longlong lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  PxClothTetherConfigGeneratedInfo local_68 [32];
  undefined1 local_48 [32];
  
  local_e0 = *param_2;
  puStack_d8 = (undefined8 *)param_2[1];
  local_d0 = (code *)param_2[2];
  lStack_c8 = param_2[3];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName
            (*(undefined4 *)param_2,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  physx::PxClothTetherConfigGeneratedInfo::_guard_xfg_dispatch_icall_nop
            ((PxClothTetherConfigGeneratedInfo *)&local_b0);
  puVar6 = (undefined8 *)(*local_d0)(local_res10,param_1[2]);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar4 = param_1[3];
  local_res8 = *puVar6;
  lVar5 = param_1[4];
  physx::PxClothTetherConfigGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_68);
  puStack_d8 = &local_res8;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e8 = lVar2;
  local_e0 = lVar3;
  local_d0 = (code *)lVar4;
  lStack_c8 = lVar5;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_e8,local_68,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_e8,local_48,1);
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



// FUNCTION 1432800e0 operator()<174,physx::PxCloth,physx::PxFilterData_const_&___ptr64,physx::PxFilterData> body=145 status=ok
// SIG undefined operator()<174,physx::PxCloth,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     operator()<174,physx::PxCloth,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x134;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x134;
  }
  iVar3 = 0xae;
  piVar1 = (int *)param_1[5];
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxShape>::
  simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 143280180 operator()<184,physx::PxParticleBase,physx::PxVec3_const_&___ptr64,physx::PxVec3> body=146 status=ok
// SIG undefined operator()<184,physx::PxParticleBase,physx::PxVec3_const_&___ptr64,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>::
     operator()<184,physx::PxParticleBase,physx::PxVec3_const_&___ptr64,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x2c;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x2c;
  }
  piVar1 = (int *)param_1[5];
  iVar3 = 0xb8;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 143280220 operator()<189,physx::PxParticleBase,physx::PxFilterData_const_&___ptr64,physx::PxFilterData> body=109 status=ok
// SIG undefined operator()<189,physx::PxParticleBase,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>::
     operator()<189,physx::PxParticleBase,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x48;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x48;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0xbd;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxShape>::
  simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 143280290 operator()<189,physx::PxParticleBase,physx::PxFilterData_const_&___ptr64,physx::PxFilterData> body=146 status=ok
// SIG undefined operator()<189,physx::PxParticleBase,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>::
     operator()<189,physx::PxParticleBase,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x48;
  if ((int *)param_1[6] != (int *)0x0) {
    local_34 = *(int *)param_1[6] + 0x48;
  }
  piVar1 = (int *)param_1[5];
  iVar3 = 0xbd;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxShape>::
  simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 143280330 operator()<197,physx::PxParticleBase,physx::PxMetaDataPlane,physx::PxMetaDataPlane> body=109 status=ok
// SIG undefined operator()<197,physx::PxParticleBase,physx::PxMetaDataPlane,physx::PxMetaDataPlane>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>::
     operator()<197,physx::PxParticleBase,physx::PxMetaDataPlane,physx::PxMetaDataPlane>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0x74;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0x74;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0xc5;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxArticulationJoint>::
  simpleProperty<physx::PxRepXPropertyAccessor<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 1432803a0 operator()<197,physx::PxParticleBase,physx::PxMetaDataPlane,physx::PxMetaDataPlane> body=169 status=ok
// SIG undefined operator()<197,physx::PxParticleBase,physx::PxMetaDataPlane,physx::PxMetaDataPlane>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>::
     operator()<197,physx::PxParticleBase,physx::PxMetaDataPlane,physx::PxMetaDataPlane>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_2 + 2);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_10 = *(undefined4 *)(param_2 + 3);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar3 = (undefined4 *)(*(code *)CONCAT44(uStack_14,local_18))(&local_48,param_1[2]);
  lVar2 = *param_1;
  local_48 = *puVar3;
  uStack_44 = puVar3[1];
  uStack_40 = puVar3[2];
  uStack_3c = puVar3[3];
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar4 = "bad__repx__name";
  }
  else {
    pcVar4 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeProperty<physx::PxMetaDataPlane>(param_1[1],param_1[4],param_1[3],pcVar4,&local_48);
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



// FUNCTION 143280450 operator()<221,physx::PxBoxGeometry,physx::PxVec3,physx::PxVec3> body=140 status=ok
// SIG undefined operator()<221,physx::PxBoxGeometry,physx::PxVec3,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxBoxGeometry>_>::
     operator()<221,physx::PxBoxGeometry,physx::PxVec3,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    local_34 = *(undefined4 *)param_1[6];
  }
  piVar1 = (int *)param_1[5];
  iVar3 = 0xdd;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 1432804e0 operator()<228,physx::PxMeshScale,physx::PxVec3,physx::PxVec3> body=140 status=ok
// SIG undefined operator()<228,physx::PxMeshScale,physx::PxVec3,physx::PxVec3>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxMeshScale>_>::
     operator()<228,physx::PxMeshScale,physx::PxVec3,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    local_34 = *(undefined4 *)param_1[6];
  }
  piVar1 = (int *)param_1[5];
  iVar3 = 0xe4;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
  }
  Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
  simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
            (param_1,iVar3,local_38);
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



// FUNCTION 143280570 operator()<229,physx::PxMeshScale,physx::PxQuat,physx::PxQuat> body=109 status=ok
// SIG undefined operator()<229,physx::PxMeshScale,physx::PxQuat,physx::PxQuat>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxMeshScale>_>::
     operator()<229,physx::PxMeshScale,physx::PxQuat,physx::PxQuat>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_28 = *(undefined4 *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_30,*param_2);
  local_34 = 0xc;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_1 + 0x60) + 0xc;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = 0xe5;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxArticulationJoint>::
  simpleProperty<physx::PxRepXPropertyAccessor<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>_const_>
            (param_1,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 1432805e0 operator()<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale> body=178 status=ok
// SIG undefined operator()<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxConvexMeshGeometry>_>::
     operator()<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_70 = *(undefined4 *)param_2;
  uStack_6c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_68 = *(undefined4 *)(param_2 + 1);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_60 = *(undefined4 *)(param_2 + 2);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_58 = *(undefined4 *)(param_2 + 3);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_70,*param_2);
  local_74 = 0;
  if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
    local_74 = **(undefined4 **)(param_1 + 0x60);
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_78[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  physx::PxMeshScaleGeneratedInfo::_guard_xfg_dispatch_icall_nop
            ((PxMeshScaleGeneratedInfo *)&local_50);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxConvexMeshGeometry>::
  complexProperty<physx::PxRepXPropertyAccessor<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>,physx::PxMeshScaleGeneratedInfo_const_>
            (param_1,puVar2,local_78,&local_50);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 1432806a0 operator()<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale> body=215 status=ok
// SIG undefined operator()<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxConvexMeshGeometry>_>::
     operator()<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_70 = *(undefined4 *)param_2;
  uStack_6c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_68 = *(undefined4 *)(param_2 + 1);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_60 = *(undefined4 *)(param_2 + 2);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_58 = *(undefined4 *)(param_2 + 3);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(local_70,*param_2);
  local_74 = 0;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    local_74 = *(undefined4 *)param_1[6];
  }
  piVar1 = (int *)param_1[5];
  local_78[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  physx::PxMeshScaleGeneratedInfo::_guard_xfg_dispatch_icall_nop
            ((PxMeshScaleGeneratedInfo *)&local_50);
  puVar3 = local_res8;
  if ((undefined1 *)param_1[5] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_1[5];
  }
  Sn::RepXVisitorWriterBase<physx::PxConvexMeshGeometry>::
  complexProperty<physx::PxRepXPropertyAccessor<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>,physx::PxMeshScaleGeneratedInfo_const_>
            (param_1,puVar3,local_78,&local_50);
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



// FUNCTION 143280780 operator()<233,physx::PxConvexMeshGeometry,physx::PxConvexMesh_*___ptr64,physx::PxConvexMesh_*___ptr64> body=199 status=ok
// SIG undefined operator()<233,physx::PxConvexMeshGeometry,physx::PxConvexMesh_*___ptr64,physx::PxConvexMesh_*___ptr64>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxConvexMeshGeometry>_>::
     operator()<233,physx::PxConvexMeshGeometry,physx::PxConvexMesh_*___ptr64,physx::PxConvexMesh_*___ptr64>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar7;
  char *local_res8;
  char *local_res10;
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar7 = "bad__repx__name";
  }
  else {
    pcVar7 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18);
  }
  lVar2 = param_1[8];
  lVar6 = 0;
  cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar7,&local_res8);
  if (cVar4 != '\0') {
    local_res10 = local_res8;
    if ((local_res8 != (char *)0x0) && (*local_res8 != '\0')) {
      uVar5 = _strtoui64(local_res8,&local_res10,10);
      lVar6 = 0;
      if (uVar5 != 0) {
        lVar6 = Sn::findReferencedObject<physx::PxConvexMesh>(lVar2,uVar5);
        if (lVar6 == 0) goto LAB_143280830;
      }
    }
  }
  (*pcVar3)(param_1[6],lVar6);
LAB_143280830:
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 143280850 operator()<233,physx::PxConvexMeshGeometry,physx::PxConvexMesh_*___ptr64,physx::PxConvexMesh_*___ptr64> body=147 status=ok
// SIG undefined operator()<233,physx::PxConvexMeshGeometry,physx::PxConvexMesh_*___ptr64,physx::PxConvexMesh_*___ptr64>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxConvexMeshGeometry>_>::
     operator()<233,physx::PxConvexMeshGeometry,physx::PxConvexMesh_*___ptr64,physx::PxConvexMesh_*___ptr64>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*pcVar3)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeReference<physx::PxConvexMesh>(param_1[1],param_1[4],pcVar5,uVar4);
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



// FUNCTION 1432808f0 operator()<234,physx::PxConvexMeshGeometry,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>_> body=185 status=ok
// SIG undefined operator()<234,physx::PxConvexMeshGeometry,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxConvexMeshGeometry>_>::
     operator()<234,physx::PxConvexMeshGeometry,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>_>
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
      Sn::stringToFlagsType(local_res10[0],param_1[7],local_res8,&PTR_s_eTIGHT_BOUNDS_1467c8ca0);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 1432809b0 operator()<234,physx::PxConvexMeshGeometry,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>_> body=165 status=ok
// SIG undefined operator()<234,physx::PxConvexMeshGeometry,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxConvexMeshGeometry>_>::
     operator()<234,physx::PxConvexMeshGeometry,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [32];
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = (undefined1 *)(*pcVar3)(local_res8,param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eTIGHT_BOUNDS_1467c8ca0);
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



// FUNCTION 143280a60 operator()<244,physx::PxTriangleMeshGeometry,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>_> body=185 status=ok
// SIG undefined operator()<244,physx::PxTriangleMeshGeometry,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxTriangleMeshGeometry>_>::
     operator()<244,physx::PxTriangleMeshGeometry,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>_>
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
      Sn::stringToFlagsType(local_res10[0],param_1[7],local_res8,&PTR_s_eDOUBLE_SIDED_1467c99a0);
      (*pcVar3)(param_1[6],local_res8);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 143280b20 operator()<244,physx::PxTriangleMeshGeometry,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>_> body=165 status=ok
// SIG undefined operator()<244,physx::PxTriangleMeshGeometry,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>_>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxTriangleMeshGeometry>_>::
     operator()<244,physx::PxTriangleMeshGeometry,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>_>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [32];
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = (undefined1 *)(*pcVar3)(local_res8,param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeFlagsProperty(param_1[1],param_1[3],pcVar5,*puVar4,&PTR_s_eDOUBLE_SIDED_1467c99a0);
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



// FUNCTION 143280bd0 operator()<245,physx::PxTriangleMeshGeometry,physx::PxTriangleMesh_*___ptr64,physx::PxTriangleMesh_*___ptr64> body=224 status=ok
// SIG undefined operator()<245,physx::PxTriangleMeshGeometry,physx::PxTriangleMesh_*___ptr64,physx::PxTriangleMesh_*___ptr64>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxTriangleMeshGeometry>_>::
     operator()<245,physx::PxTriangleMeshGeometry,physx::PxTriangleMesh_*___ptr64,physx::PxTriangleMesh_*___ptr64>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
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



// FUNCTION 143280cb0 operator()<248,physx::PxHeightFieldGeometry,physx::PxHeightField_*___ptr64,physx::PxHeightField_*___ptr64> body=147 status=ok
// SIG undefined operator()<248,physx::PxHeightFieldGeometry,physx::PxHeightField_*___ptr64,physx::PxHeightField_*___ptr64>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldGeometry>_>::
     operator()<248,physx::PxHeightFieldGeometry,physx::PxHeightField_*___ptr64,physx::PxHeightField_*___ptr64>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  pcVar3 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*pcVar3)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  Sn::writeReference<physx::PxHeightField>(param_1[1],param_1[4],pcVar5,uVar4);
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



// FUNCTION 143280d50 complexProperty<physx::Vd::PxPvdIndexedPropertyAccessor<168,physx::PxCloth,enum_physx::PxClothFabricPhaseType::Enum,physx::PxClothStretchConfig>,physx::PxClothStretchConfigGeneratedInfo_const_> body=302 status=ok
// SIG undefined complexProperty<physx::Vd::PxPvdIndexedPropertyAccessor<168,physx::PxCloth,enum_physx::PxClothFabricPhaseType::Enum,physx::PxClothStretchConfig>,physx::PxClothStretchConfigGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxCloth>::
     complexProperty<physx::Vd::PxPvdIndexedPropertyAccessor<168,physx::PxCloth,enum_physx::PxClothFabricPhaseType::Enum,physx::PxClothStretchConfig>,physx::PxClothStretchConfigGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined8 *puVar2;
  char local_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  cVar1 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)
             (**(code **)(*(longlong *)(param_3 + 0x10) + 0x18))
                       (&local_88,param_1[6],*(undefined4 *)(param_3 + 8));
    local_70 = param_1[1];
    local_50 = param_1[5];
    local_40 = param_1[7];
    local_a0 = *puVar2;
    uStack_98 = puVar2[1];
    local_78 = *param_1;
    local_38 = param_1[8];
    local_58 = param_1[4];
    local_48 = &local_a0;
    local_68 = param_1[2];
    uStack_60 = param_1[3];
    local_28 = local_a8;
    local_a8[0] = '\0';
    local_20 = 0;
    uStack_18 = 0;
    local_30 = 1;
    RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
    operator()<416,physx::PxClothStretchConfig,float,float>(&local_78,param_4,0);
    RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
    operator()<416,physx::PxClothStretchConfig,float,float>(&local_78,param_4 + 0x20,1);
    RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
    operator()<416,physx::PxClothStretchConfig,float,float>(&local_78,param_4 + 0x40,2);
    RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
    operator()<416,physx::PxClothStretchConfig,float,float>(&local_78,param_4 + 0x60,3);
    if (local_a8[0] != '\0') {
      *(undefined1 *)param_1[10] = 1;
    }
    local_88 = (undefined4)local_a0;
    uStack_84 = local_a0._4_4_;
    uStack_80 = (undefined4)uStack_98;
    uStack_7c = uStack_98._4_4_;
    (**(code **)(*(longlong *)(param_3 + 0x10) + 0x10))
              (param_1[6],*(undefined4 *)(param_3 + 8),&local_88);
  }
  return;
}



// FUNCTION 143280e80 complexProperty<physx::PxRepXPropertyAccessor<457,physx::PxD6Joint,physx::PxJointLinearLimit_const_&___ptr64,physx::PxJointLinearLimit>,physx::PxJointLinearLimitGeneratedInfo_const_> body=211 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<457,physx::PxD6Joint,physx::PxJointLinearLimit_const_&___ptr64,physx::PxJointLinearLimit>,physx::PxJointLinearLimitGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
     complexProperty<physx::PxRepXPropertyAccessor<457,physx::PxD6Joint,physx::PxJointLinearLimit_const_&___ptr64,physx::PxJointLinearLimit>,physx::PxJointLinearLimitGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  cVar1 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)(**(code **)(param_3 + 0x18))(&local_28,param_1[6]);
    local_48 = *puVar2;
    uStack_40 = puVar2[1];
    local_38 = puVar2[2];
    local_28 = *(undefined4 *)(param_1 + 2);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_20 = *(undefined4 *)(param_1 + 3);
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_18 = param_1[4];
    cVar1 = readAllProperties<physx::PxJointLinearLimit,physx::PxJointLinearLimitGeneratedInfo_const_>
                      (&local_28,*param_1,param_1[1],param_1[5],&local_48,param_1[7],param_1[8],
                       param_4);
    if (cVar1 == '\0') {
      *(undefined1 *)param_1[10] = 1;
    }
    local_28 = (undefined4)local_48;
    uStack_24 = local_48._4_4_;
    uStack_20 = (undefined4)uStack_40;
    uStack_1c = uStack_40._4_4_;
    local_18 = local_38;
    (**(code **)(param_3 + 0x20))(param_1[6],&local_28);
  }
  return;
}



// FUNCTION 143280f60 complexProperty<physx::PxRepXPropertyAccessor<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>,physx::PxJointAngularLimitPairGeneratedInfo_const_> body=226 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>,physx::PxJointAngularLimitPairGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
     complexProperty<physx::PxRepXPropertyAccessor<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>,physx::PxJointAngularLimitPairGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  cVar1 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)(**(code **)(param_3 + 0x18))(&local_48,param_1[6]);
    local_28 = *puVar2;
    uStack_20 = puVar2[1];
    local_18 = puVar2[2];
    local_48 = *(undefined4 *)(param_1 + 2);
    uStack_44 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_40 = *(undefined4 *)(param_1 + 3);
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_10 = *(undefined4 *)(puVar2 + 3);
    local_38 = param_1[4];
    cVar1 = readAllProperties<physx::PxJointAngularLimitPair,physx::PxJointAngularLimitPairGeneratedInfo_const_>
                      (&local_48,*param_1,param_1[1],param_1[5],&local_28,param_1[7],param_1[8],
                       param_4);
    if (cVar1 == '\0') {
      *(undefined1 *)param_1[10] = 1;
    }
    local_48 = (undefined4)local_28;
    uStack_44 = local_28._4_4_;
    uStack_40 = (undefined4)uStack_20;
    uStack_3c = uStack_20._4_4_;
    local_38 = local_18;
    local_30 = local_10;
    (**(code **)(param_3 + 0x20))(param_1[6],&local_48);
  }
  return;
}



// FUNCTION 143281050 complexProperty<physx::PxRepXPropertyAccessor<167,physx::PxCloth,physx::PxClothMotionConstraintConfig_const_&___ptr64,physx::PxClothMotionConstraintConfig>,physx::PxClothMotionConstraintConfigGeneratedInfo_const_> body=218 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<167,physx::PxCloth,physx::PxClothMotionConstraintConfig_const_&___ptr64,physx::PxClothMotionConstraintConfig>,physx::PxClothMotionConstraintConfigGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxCloth>::
     complexProperty<physx::PxRepXPropertyAccessor<167,physx::PxCloth,physx::PxClothMotionConstraintConfig_const_&___ptr64,physx::PxClothMotionConstraintConfig>,physx::PxClothMotionConstraintConfigGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [24];
  PxClothMotionConstraintConfigGeneratedInfo local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  puVar5 = (undefined8 *)(**(code **)(param_3 + 0x18))(local_80,param_1[2]);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  local_c8 = *puVar5;
  uVar4 = param_1[4];
  local_c0 = *(undefined4 *)(puVar5 + 1);
  physx::PxClothMotionConstraintConfigGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_68);
  local_a8 = &local_c8;
  local_90 = 0;
  uStack_88 = 0;
  local_b8 = uVar1;
  local_b0 = uVar2;
  local_a0 = uVar3;
  local_98 = uVar4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_b8,local_68,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_b8,local_48,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_b8,local_28,2);
  return;
}



// FUNCTION 143281130 complexProperty<physx::PxRepXPropertyAccessor<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>,physx::PxMeshScaleGeneratedInfo_const_> body=213 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>,physx::PxMeshScaleGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxConvexMeshGeometry>::
     complexProperty<physx::PxRepXPropertyAccessor<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>,physx::PxMeshScaleGeneratedInfo_const_>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar1 != '\0') {
    puVar2 = (undefined4 *)(**(code **)(param_3 + 0x18))(&local_48,*(undefined8 *)(param_1 + 0x30));
    local_28 = *puVar2;
    uStack_24 = puVar2[1];
    uStack_20 = puVar2[2];
    uStack_1c = puVar2[3];
    local_18 = puVar2[4];
    local_14 = puVar2[5];
    local_10 = puVar2[6];
    readComplexObj<physx::PxMeshScale,physx::Sn::RepXVisitorReaderBase<physx::PxConvexMeshGeometry>,physx::PxMeshScaleGeneratedInfo>
              (param_1,&local_28,param_4);
    local_48 = CONCAT44(uStack_24,local_28);
    uStack_40 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_18;
    local_30 = local_10;
    local_34 = local_14;
    (**(code **)(param_3 + 0x20))(*(undefined8 *)(param_1 + 0x30),&local_48);
  }
  return;
}



// FUNCTION 143281210 complexProperty<physx::PxRepXPropertyAccessor<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>,physx::PxMeshScaleGeneratedInfo_const_> body=253 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>,physx::PxMeshScaleGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxConvexMeshGeometry>::
     complexProperty<physx::PxRepXPropertyAccessor<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>,physx::PxMeshScaleGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  PxMeshScaleGeneratedInfo local_48 [32];
  undefined1 local_28 [32];
  
  puVar5 = (undefined4 *)(**(code **)(param_3 + 0x18))(&local_88,param_1[2]);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  local_a8 = *puVar5;
  uVar4 = param_1[4];
  local_a4 = puVar5[1];
  local_a0 = puVar5[2];
  local_9c = puVar5[3];
  local_98 = puVar5[4];
  local_94 = puVar5[5];
  local_90 = puVar5[6];
  physx::PxMeshScaleGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_48);
  local_78 = &local_a8;
  local_60 = 0;
  uStack_58 = 0;
  local_88 = uVar1;
  local_80 = uVar2;
  local_70 = uVar3;
  local_68 = uVar4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxMeshScale>_>::
  operator()<228,physx::PxMeshScale,physx::PxVec3,physx::PxVec3>(&local_88,local_48,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>
            (&local_88,local_28,1);
  return;
}



// FUNCTION 143281310 copyStr<physx::XmlMemoryAllocator> body=107 status=ok
// SIG undefined copyStr<physx::XmlMemoryAllocator>(void)

undefined1 * physx::Sn::copyStr<physx::XmlMemoryAllocator>(longlong *param_1,char *param_2)

{
  char *pcVar1;
  undefined1 *_Dst;
  uint uVar2;
  ulonglong uVar4;
  int iVar3;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar4 = 0;
    pcVar1 = param_2;
    do {
      iVar3 = (int)uVar4;
      uVar2 = iVar3 + 1;
      uVar4 = (ulonglong)uVar2;
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    _Dst = (undefined1 *)(**(code **)(*param_1 + 8))(param_1,iVar3 + 2);
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_2,(ulonglong)uVar2);
    _Dst[uVar4] = 0;
    return _Dst;
  }
  return &DAT_145af3922;
}



// FUNCTION 143281380 findReferencedObject<physx::PxConvexMesh> body=87 status=ok
// SIG undefined findReferencedObject<physx::PxConvexMesh>(void)

longlong physx::Sn::findReferencedObject<physx::PxConvexMesh>(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  Foundation *this;
  
  lVar1 = (**(code **)(*param_1 + 0x50))();
  if (lVar1 == 0) {
    this = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (this,4,
               "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\serialization\\xml\\SnXmlVisitorReader.h"
               ,0x6c,
               "PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalRefs collection is specified if required and check Xml file for completeness."
               ,param_2);
  }
  return lVar1;
}



// FUNCTION 1432813e0 handleShapeMaterials<physx::Sn::RepXVisitorWriterBase<physx::PxShape>_> body=288 status=ok
// SIG undefined handleShapeMaterials<physx::Sn::RepXVisitorWriterBase<physx::PxShape>_>(void)

void physx::Sn::handleShapeMaterials<physx::Sn::RepXVisitorWriterBase<physx::PxShape>_>
               (longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  PxAllocatorCallback *pPVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 local_res8;
  undefined1 local_48 [40];
  undefined1 local_20;
  undefined1 *local_18;
  undefined4 local_10;
  uint local_c;
  
  uVar2 = (**(code **)(param_2 + 0x18))(param_1[2]);
  uVar4 = (ulonglong)uVar2;
  if (uVar2 != 0) {
    local_18 = local_48;
    lVar5 = 0;
    local_20 = 1;
    local_10 = 0;
    local_res8 = 0;
    local_c = 5;
    shdfnd::
    Array<physx::PxMaterial_*___ptr64,physx::shdfnd::InlineAllocator<40,physx::shdfnd::ReflectionAllocator<physx::PxMaterial_*___ptr64>_>_>
    ::resize(local_48,uVar4,&local_res8);
    (**(code **)(param_2 + 0x10))(param_1[2],local_18,uVar2);
    RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,"PxMaterialRef");
    if (uVar2 != 0) {
      do {
        writeReference<physx::PxMaterial>
                  (param_1[1],param_1[4],"PxMaterialRef",*(undefined8 *)(local_18 + lVar5));
        lVar5 = lVar5 + 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    lVar5 = *param_1;
    if (*(int *)(lVar5 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
    puVar1 = local_18;
    if (((((local_c & 0x7fffffff) != 0) && (-1 < (int)local_c)) && (local_18 != local_48)) &&
       (local_18 != (undefined1 *)0x0)) {
      pPVar3 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,puVar1);
    }
  }
  return;
}



// FUNCTION 143281500 handleShapes<physx::Sn::RepXVisitorWriterBase<physx::PxArticulationLink>_> body=378 status=ok
// SIG undefined handleShapes<physx::Sn::RepXVisitorWriterBase<physx::PxArticulationLink>_>(void)

void physx::Sn::handleShapes<physx::Sn::RepXVisitorWriterBase<physx::PxArticulationLink>_>
               (longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char cVar4;
  uint uVar5;
  PxAllocatorCallback *pPVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 local_res8;
  undefined1 local_1c8 [40];
  undefined1 local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  uint local_18c;
  PxShapeGeneratedInfo local_188 [384];
  
  physx::PxShapeGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_188);
  uVar5 = (**(code **)(param_2 + 0x18))(param_1[2]);
  if (uVar5 != 0) {
    local_198 = local_1c8;
    lVar8 = 0;
    local_1a0 = 1;
    local_190 = 0;
    local_res8 = 0;
    local_18c = 5;
    shdfnd::
    Array<physx::PxShape_*___ptr64,physx::shdfnd::InlineAllocator<40,physx::shdfnd::ReflectionAllocator<physx::PxShape_*___ptr64>_>_>
    ::resize(local_1c8,uVar5,&local_res8);
    (**(code **)(param_2 + 0x10))(param_1[2],local_198,uVar5);
    if (uVar5 != 0) {
      uVar7 = (ulonglong)uVar5;
      do {
        plVar1 = *(longlong **)(local_198 + lVar8);
        RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,"PxShape");
        cVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        if (cVar4 == '\0') {
          writeReference<physx::PxShape>(param_1[1],param_1[4],"PxShapeRef",plVar1);
        }
        else {
          writeAllProperties<physx::PxShape>(*param_1,plVar1,param_1[1],param_1[3],param_1[4]);
        }
        lVar2 = *param_1;
        if (*(int *)(lVar2 + 0x10) != 0) {
          if (*(char *)(*(longlong *)(lVar2 + 8) + 8 +
                       (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) != '\0') {
            (**(code **)(*(longlong *)param_1[1] + 0x20))();
          }
          *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
        }
        lVar8 = lVar8 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    puVar3 = local_198;
    if (((((local_18c & 0x7fffffff) != 0) && (-1 < (int)local_18c)) && (local_198 != local_1c8)) &&
       (local_198 != (undefined1 *)0x0)) {
      pPVar6 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,puVar3);
    }
  }
  return;
}



// FUNCTION 143281680 indexedProperty<437,physx::PxJoint,enum_physx::PxJointActorIndex::Enum,physx::PxTransform> body=813 status=ok
// SIG undefined indexedProperty<437,physx::PxJoint,enum_physx::PxJointActorIndex::Enum,physx::PxTransform>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
     indexedProperty<437,physx::PxJoint,enum_physx::PxJointActorIndex::Enum,physx::PxTransform>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_res8 [2];
  char *local_res20;
  char *local_c8;
  undefined8 local_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  lVar2 = *param_4;
  local_res8[0] = 0x1b5;
  piVar7 = local_res8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar7 = (int *)param_1[0xb];
  }
  while (lVar2 != 0) {
    Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
    lVar3 = *param_1;
    local_b0 = (undefined1)param_1[9];
    uStack_b8 = uStack_b8 & 0xffffff00;
    local_c0 = lVar2;
    if (*(uint *)(lVar3 + 0x10) < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
      puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        local_c0._0_4_ = (undefined4)lVar2;
        local_c0._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
        *puVar1 = (undefined4)local_c0;
        puVar1[1] = local_c0._4_4_;
        puVar1[2] = uStack_b8;
        puVar1[3] = uStack_b4;
        *(ulonglong *)(puVar1 + 4) = CONCAT71(uStack_af,local_b0);
      }
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
    }
    else {
      shdfnd::
      Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
      ::growAndPushBack(lVar3,&local_c0);
    }
    lVar2 = param_4[1];
    local_c8 = (char *)0x0;
    if ((char)param_1[9] != '\0') {
      lVar3 = *param_1;
      if (*(int *)(lVar3 + 0x10) == 0) {
        pcVar6 = "bad__repx__name";
      }
      else {
        pcVar6 = *(char **)(*(longlong *)(lVar3 + 8) +
                           (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18);
      }
      cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar6,&local_c8)
      ;
      if (((cVar4 != '\0') && (local_c8 != (char *)0x0)) && (*local_c8 != '\0')) {
        local_res20 = local_c8;
        uVar8 = Sn::strToFloat(local_c8,&local_res20);
        uVar9 = Sn::strToFloat(local_res20,&local_res20);
        uVar10 = Sn::strToFloat(local_res20,&local_res20);
        uVar11 = Sn::strToFloat(local_res20,&local_res20);
        uVar12 = Sn::strToFloat(local_res20,&local_res20);
        uVar13 = Sn::strToFloat(local_res20,&local_res20);
        local_90 = Sn::strToFloat(local_res20,&local_res20);
        local_a8 = uVar8;
        local_a4 = uVar9;
        local_a0 = uVar10;
        local_9c = uVar11;
        local_98 = uVar12;
        local_94 = uVar13;
        (*(code *)param_3[2])(param_1[6],(int)lVar2,&local_a8);
      }
    }
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) != 0) {
      if ((*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
           != '\0') &&
         (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18
                   ) != '\0')) {
        (**(code **)(*(longlong *)param_1[5] + 0x48))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
    lVar2 = *param_1;
    *(undefined1 *)(param_1 + 9) = 1;
    if (*(int *)(lVar2 + 0x10) != 0) {
      uVar5 = (char)param_1[9];
      if (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar5 = 0;
      }
      *(undefined1 *)(param_1 + 9) = uVar5;
    }
    *piVar7 = *piVar7 + 1;
    param_4 = param_4 + 2;
    lVar2 = *param_4;
  }
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if ((*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18) !=
         '\0') &&
       (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
        != '\0')) {
      (**(code **)(*(longlong *)param_1[5] + 0x48))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar2 = *param_1;
  *(undefined1 *)(param_1 + 9) = 1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    uVar5 = (char)param_1[9];
    if (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 9) = uVar5;
  }
  return;
}



// FUNCTION 1432819b0 indexedProperty<437,physx::PxJoint,enum_physx::PxJointActorIndex::Enum,physx::PxTransform> body=834 status=ok
// SIG undefined indexedProperty<437,physx::PxJoint,enum_physx::PxJointActorIndex::Enum,physx::PxTransform>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
     indexedProperty<437,physx::PxJoint,enum_physx::PxJointActorIndex::Enum,physx::PxTransform>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 local_res8 [8];
  int local_res20 [2];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  char local_108 [128];
  undefined1 local_88 [80];
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  local_res20[0] = 0x1b5;
  piVar7 = local_res20;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar7 = (int *)param_1[5];
  }
  lVar5 = *param_4;
  while (lVar5 != 0) {
    Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,lVar5);
    puVar4 = (undefined4 *)(*(code *)param_3[3])(local_88,param_1[2],(int)param_4[1]);
    lVar5 = *param_1;
    local_128 = *puVar4;
    uStack_124 = puVar4[1];
    uStack_120 = puVar4[2];
    uStack_11c = puVar4[3];
    local_118 = puVar4[4];
    local_114 = puVar4[5];
    local_110 = puVar4[6];
    if (*(int *)(lVar5 + 0x10) == 0) {
      pcVar6 = "bad__repx__name";
    }
    else {
      pcVar6 = *(char **)(*(longlong *)(lVar5 + 8) + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
      ;
    }
    puVar1 = (undefined8 *)param_1[3];
    plVar2 = (longlong *)param_1[1];
    physx::operator<<(puVar1,&local_128);
    (**(code **)*puVar1)(puVar1,&DAT_145af3920,1);
    ::_guard_xfg_dispatch_icall_nop(local_108,0,0x80);
    physx::shdfnd::snprintf(local_108,0x80,"%g");
    if (local_108[0] != '\0') {
      lVar5 = -1;
      do {
        lVar3 = lVar5 + 1;
        lVar5 = lVar5 + 1;
      } while (local_108[lVar3] != '\0');
      (**(code **)*puVar1)(puVar1,local_108);
    }
    (**(code **)*puVar1)(puVar1,&DAT_145af3920,1);
    ::_guard_xfg_dispatch_icall_nop(local_108,0,0x80);
    physx::shdfnd::snprintf(local_108,0x80,"%g");
    if (local_108[0] != '\0') {
      lVar5 = -1;
      do {
        lVar3 = lVar5 + 1;
        lVar5 = lVar5 + 1;
      } while (local_108[lVar3] != '\0');
      (**(code **)*puVar1)(puVar1,local_108);
    }
    (**(code **)*puVar1)(puVar1,&DAT_145af3920,1);
    ::_guard_xfg_dispatch_icall_nop(local_108,0,0x80);
    physx::shdfnd::snprintf(local_108,0x80,"%g");
    if (local_108[0] != '\0') {
      lVar5 = -1;
      do {
        lVar3 = lVar5 + 1;
        lVar5 = lVar5 + 1;
      } while (local_108[lVar3] != '\0');
      (**(code **)*puVar1)(puVar1,local_108);
    }
    local_res8[0] = 0;
    (**(code **)*puVar1)(puVar1,local_res8,1);
    (**(code **)(*plVar2 + 0x10))(plVar2,pcVar6,puVar1[4]);
    puVar1[3] = 0;
    lVar5 = *param_1;
    if (*(int *)(lVar5 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
    *piVar7 = *piVar7 + 1;
    param_4 = param_4 + 2;
    lVar5 = *param_4;
  }
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



// FUNCTION 143281d00 indexedProperty<453,physx::PxD6Joint,enum_physx::PxD6Axis::Enum,enum_physx::PxD6Motion::Enum> body=672 status=ok
// SIG undefined indexedProperty<453,physx::PxD6Joint,enum_physx::PxD6Axis::Enum,enum_physx::PxD6Motion::Enum>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
     indexedProperty<453,physx::PxD6Joint,enum_physx::PxD6Axis::Enum,enum_physx::PxD6Motion::Enum>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined1 uVar7;
  char *pcVar8;
  ulonglong uVar9;
  int *piVar10;
  int local_res8 [2];
  char *local_res20;
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined7 uStack_47;
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  lVar2 = *param_4;
  local_res8[0] = 0x1c5;
  piVar10 = local_res8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar10 = (int *)param_1[0xb];
  }
  do {
    if (lVar2 == 0) {
      lVar2 = *param_1;
      if (*(int *)(lVar2 + 0x10) != 0) {
        if ((*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18
                      ) != '\0') &&
           (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 +
                     (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18) != '\0')) {
          (**(code **)(*(longlong *)param_1[5] + 0x48))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      lVar2 = *param_1;
      *(undefined1 *)(param_1 + 9) = 1;
      if (*(int *)(lVar2 + 0x10) != 0) {
        uVar7 = (undefined1)param_1[9];
        if (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 +
                     (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18) == '\0') {
          uVar7 = 0;
        }
        *(undefined1 *)(param_1 + 9) = uVar7;
      }
      return;
    }
    Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
    lVar3 = *param_1;
    local_48 = (undefined1)param_1[9];
    uStack_50 = uStack_50 & 0xffffff00;
    local_58 = lVar2;
    if (*(uint *)(lVar3 + 0x10) < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
      puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        local_58._0_4_ = (undefined4)lVar2;
        local_58._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
        *puVar1 = (undefined4)local_58;
        puVar1[1] = local_58._4_4_;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
        *(ulonglong *)(puVar1 + 4) = CONCAT71(uStack_47,local_48);
      }
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
    }
    else {
      shdfnd::
      Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
      ::growAndPushBack(lVar3,&local_58);
    }
    lVar2 = param_4[1];
    local_res20 = (char *)0x0;
    if ((char)param_1[9] != '\0') {
      lVar3 = *param_1;
      if (*(int *)(lVar3 + 0x10) == 0) {
        pcVar8 = "bad__repx__name";
      }
      else {
        pcVar8 = *(char **)(*(longlong *)(lVar3 + 8) +
                           (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18);
      }
      cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                        ((longlong *)param_1[5],pcVar8,&local_res20);
      pcVar8 = local_res20;
      if (((cVar4 != '\0') && (local_res20 != (char *)0x0)) && (*local_res20 != '\0')) {
        uVar9 = 0;
        if (PTR_s_eLOCKED_1467c8d00 != (undefined *)0x0) {
          ppuVar6 = &PTR_s_eLOCKED_1467c8d00;
          do {
            iVar5 = physx::shdfnd::stricmp(*ppuVar6,pcVar8);
            if (iVar5 == 0) {
              (*(code *)param_3[2])(param_1[6],(int)lVar2,(&DAT_1467c8d08)[uVar9 * 4]);
              goto LAB_143281e91;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            ppuVar6 = &PTR_s_eLOCKED_1467c8d00 + uVar9 * 2;
          } while (*ppuVar6 != (undefined *)0x0);
        }
        (*(code *)param_3[2])(param_1[6],(int)lVar2,0);
      }
    }
LAB_143281e91:
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) != 0) {
      if ((*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
           != '\0') &&
         (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18
                   ) != '\0')) {
        (**(code **)(*(longlong *)param_1[5] + 0x48))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
    lVar2 = *param_1;
    *(undefined1 *)(param_1 + 9) = 1;
    if (*(int *)(lVar2 + 0x10) != 0) {
      uVar7 = (undefined1)param_1[9];
      if (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar7 = 0;
      }
      *(undefined1 *)(param_1 + 9) = uVar7;
    }
    *piVar10 = *piVar10 + 1;
    param_4 = param_4 + 2;
    lVar2 = *param_4;
  } while( true );
}



// FUNCTION 143281fa0 indexedProperty<453,physx::PxD6Joint,enum_physx::PxD6Axis::Enum,enum_physx::PxD6Motion::Enum> body=357 status=ok
// SIG undefined indexedProperty<453,physx::PxD6Joint,enum_physx::PxD6Axis::Enum,enum_physx::PxD6Motion::Enum>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
     indexedProperty<453,physx::PxD6Joint,enum_physx::PxD6Axis::Enum,enum_physx::PxD6Motion::Enum>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  char *pcVar6;
  int *piVar7;
  int local_res8 [2];
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  local_res8[0] = 0x1c5;
  piVar7 = local_res8;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar7 = (int *)param_1[5];
  }
  lVar1 = *param_4;
  while (lVar1 != 0) {
    Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,lVar1);
    iVar4 = (*(code *)param_3[3])(param_1[2],(int)param_4[1]);
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar6 = "bad__repx__name";
    }
    else {
      pcVar6 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
      ;
    }
    ppuVar5 = &PTR_s_eLOCKED_1467c8d00;
    plVar2 = (longlong *)param_1[1];
    puVar3 = PTR_s_eLOCKED_1467c8d00;
    while (puVar3 != (undefined *)0x0) {
      if (*(int *)(ppuVar5 + 1) == iVar4) {
        (**(code **)(*plVar2 + 0x10))(plVar2,pcVar6,*ppuVar5);
      }
      ppuVar5 = ppuVar5 + 2;
      puVar3 = *ppuVar5;
    }
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
    *piVar7 = *piVar7 + 1;
    param_4 = param_4 + 2;
    lVar1 = *param_4;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 143282110 indexedProperty<460,physx::PxD6Joint,enum_physx::PxD6Drive::Enum,physx::PxD6JointDrive,physx::PxD6JointDriveGeneratedInfo> body=875 status=ok
// SIG undefined indexedProperty<460,physx::PxD6Joint,enum_physx::PxD6Drive::Enum,physx::PxD6JointDrive,physx::PxD6JointDriveGeneratedInfo>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
     indexedProperty<460,physx::PxD6Joint,enum_physx::PxD6Drive::Enum,physx::PxD6JointDrive,physx::PxD6JointDriveGeneratedInfo>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
               longlong param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  char local_res8 [8];
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8;
  undefined7 uStack_f7;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_70 [56];
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  lVar3 = *param_4;
  while (lVar3 != 0) {
    Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
    lVar4 = *param_1;
    local_f8 = (undefined1)param_1[9];
    uStack_100 = uStack_100 & 0xffffff00;
    local_108 = lVar3;
    if (*(uint *)(lVar4 + 0x10) < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
      puVar2 = (undefined4 *)(*(longlong *)(lVar4 + 8) + (ulonglong)*(uint *)(lVar4 + 0x10) * 0x18);
      if (puVar2 != (undefined4 *)0x0) {
        local_108._0_4_ = (undefined4)lVar3;
        local_108._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
        *puVar2 = (undefined4)local_108;
        puVar2[1] = local_108._4_4_;
        puVar2[2] = uStack_100;
        puVar2[3] = uStack_fc;
        *(ulonglong *)(puVar2 + 4) = CONCAT71(uStack_f7,local_f8);
      }
      *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
    }
    else {
      shdfnd::
      Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
      ::growAndPushBack(lVar4,&local_108);
    }
    lVar3 = param_4[1];
    cVar12 = Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
    if (cVar12 != '\0') {
      puVar13 = (undefined8 *)(*(code *)param_3[3])(local_70,param_1[6],(int)lVar3);
      lVar10 = param_1[2];
      lVar11 = param_1[3];
      lVar5 = *param_1;
      lVar6 = param_1[1];
      local_118 = *puVar13;
      lVar7 = param_1[5];
      lVar8 = param_1[7];
      lVar9 = param_1[8];
      lVar4 = param_1[4];
      local_110 = *(undefined4 *)(puVar13 + 1);
      local_10c = *(undefined4 *)((longlong)puVar13 + 0xc);
      local_c0 = &local_118;
      local_a0 = local_res8;
      local_res8[0] = '\0';
      local_a8 = 1;
      local_98 = 0;
      uStack_90 = 0;
      local_f0 = lVar5;
      local_e8 = lVar6;
      local_e0 = lVar10;
      lStack_d8 = lVar11;
      local_d0 = lVar4;
      local_c8 = lVar7;
      local_b8 = lVar8;
      local_b0 = lVar9;
      PxD6JointDriveGeneratedInfo::
      visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6JointDrive>_>_>
                (param_5,&local_f0,0);
      local_c0 = &local_118;
      local_a0 = local_res8;
      local_a8 = 1;
      local_98 = 0;
      uStack_90 = 0;
      local_f0 = lVar5;
      local_e8 = lVar6;
      local_e0 = lVar10;
      lStack_d8 = lVar11;
      local_d0 = lVar4;
      local_c8 = lVar7;
      local_b8 = lVar8;
      local_b0 = lVar9;
      RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_f0,param_5 + 0x40,0);
      RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6JointDrive>_>::
      operator()<537,physx::PxD6JointDrive,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>_>
                (&local_f0,param_5 + 0x60,1);
      if (local_res8[0] != '\0') {
        *(undefined1 *)param_1[10] = 1;
      }
      local_80 = local_110;
      local_88 = local_118;
      local_7c = local_10c;
      (*(code *)param_3[2])(param_1[6],(int)lVar3,&local_88);
    }
    lVar3 = *param_1;
    if (*(int *)(lVar3 + 0x10) != 0) {
      if ((*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
           != '\0') &&
         (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18
                   ) != '\0')) {
        (**(code **)(*(longlong *)param_1[5] + 0x48))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
    lVar3 = *param_1;
    *(undefined1 *)(param_1 + 9) = 1;
    if (*(int *)(lVar3 + 0x10) != 0) {
      uVar14 = (char)param_1[9];
      if (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar14 = 0;
      }
      *(undefined1 *)(param_1 + 9) = uVar14;
    }
    plVar1 = param_4 + 2;
    param_4 = param_4 + 2;
    lVar3 = *plVar1;
  }
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if ((*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18) !=
         '\0') &&
       (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
        != '\0')) {
      (**(code **)(*(longlong *)param_1[5] + 0x48))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar3 = *param_1;
  *(undefined1 *)(param_1 + 9) = 1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar14 = (undefined1)param_1[9];
    if (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar14 = 0;
    }
    *(undefined1 *)(param_1 + 9) = uVar14;
  }
  return;
}



// FUNCTION 143282480 indexedProperty<460,physx::PxD6Joint,enum_physx::PxD6Drive::Enum,physx::PxD6JointDrive,physx::PxD6JointDriveGeneratedInfo> body=254 status=ok
// SIG undefined indexedProperty<460,physx::PxD6Joint,enum_physx::PxD6Drive::Enum,physx::PxD6JointDrive,physx::PxD6JointDriveGeneratedInfo>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
     indexedProperty<460,physx::PxD6Joint,enum_physx::PxD6Drive::Enum,physx::PxD6JointDrive,physx::PxD6JointDriveGeneratedInfo>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [16];
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  lVar2 = *param_4;
  while (lVar2 != 0) {
    Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,lVar2);
    puVar3 = (undefined8 *)(*(code *)param_3[3])(local_18,param_1[2],(int)param_4[1]);
    local_28 = *puVar3;
    local_20 = *(undefined4 *)(puVar3 + 1);
    local_1c = *(undefined4 *)((longlong)puVar3 + 0xc);
    Sn::writeAllProperties<physx::PxD6JointDrive>
              (*param_1,&local_28,param_1[1],param_1[3],param_1[4]);
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
    plVar1 = param_4 + 2;
    param_4 = param_4 + 2;
    lVar2 = *plVar1;
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



// FUNCTION 143282580 indexedProperty<168,physx::PxCloth,enum_physx::PxClothFabricPhaseType::Enum,physx::PxClothStretchConfig,physx::PxClothStretchConfigGeneratedInfo> body=514 status=ok
// SIG undefined indexedProperty<168,physx::PxCloth,enum_physx::PxClothFabricPhaseType::Enum,physx::PxClothStretchConfig,physx::PxClothStretchConfigGeneratedInfo>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>::
     indexedProperty<168,physx::PxCloth,enum_physx::PxClothFabricPhaseType::Enum,physx::PxClothStretchConfig,physx::PxClothStretchConfigGeneratedInfo>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined8 *local_30;
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  iVar4 = 0;
  if ((int *)param_1[0xc] != (int *)0x0) {
    iVar4 = *(int *)param_1[0xc];
  }
  lVar5 = *param_4;
  if (lVar5 != 0) {
    iVar4 = iVar4 + 0xcc;
    do {
      Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
      lVar2 = *param_1;
      local_48 = (undefined1)param_1[9];
      uStack_50 = uStack_50 & 0xffffff00;
      local_58 = lVar5;
      if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
        puVar1 = (undefined4 *)
                 (*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x18);
        if (puVar1 != (undefined4 *)0x0) {
          local_58._0_4_ = (undefined4)lVar5;
          local_58._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
          *puVar1 = (undefined4)local_58;
          puVar1[1] = local_58._4_4_;
          puVar1[2] = uStack_50;
          puVar1[3] = uStack_4c;
          *(ulonglong *)(puVar1 + 4) = CONCAT71(uStack_47,local_48);
        }
        *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
        ::growAndPushBack(lVar2,&local_58);
      }
      local_38 = (undefined4)param_4[1];
      local_40[0] = 1;
      local_3c = iVar4;
      local_30 = param_3;
      Sn::RepXVisitorReaderBase<physx::PxCloth>::
      complexProperty<physx::Vd::PxPvdIndexedPropertyAccessor<168,physx::PxCloth,enum_physx::PxClothFabricPhaseType::Enum,physx::PxClothStretchConfig>,physx::PxClothStretchConfigGeneratedInfo_const_>
                (param_1,local_res8,local_40,param_5);
      lVar5 = *param_1;
      if (*(int *)(lVar5 + 0x10) != 0) {
        if ((*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x18
                      ) != '\0') &&
           (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 +
                     (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x18) != '\0')) {
          (**(code **)(*(longlong *)param_1[5] + 0x48))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      lVar5 = *param_1;
      *(undefined1 *)(param_1 + 9) = 1;
      if (*(int *)(lVar5 + 0x10) != 0) {
        uVar3 = (undefined1)param_1[9];
        if (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 +
                     (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x18) == '\0') {
          uVar3 = 0;
        }
        *(undefined1 *)(param_1 + 9) = uVar3;
      }
      lVar5 = param_4[2];
      param_4 = param_4 + 2;
      iVar4 = iVar4 + 0x10;
    } while (lVar5 != 0);
  }
  lVar5 = *param_1;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if ((*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x18) !=
         '\0') &&
       (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x18)
        != '\0')) {
      (**(code **)(*(longlong *)param_1[5] + 0x48))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar5 = *param_1;
  *(undefined1 *)(param_1 + 9) = 1;
  if (*(int *)(lVar5 + 0x10) != 0) {
    uVar3 = (undefined1)param_1[9];
    if (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 9) = uVar3;
  }
  return;
}



// FUNCTION 143282790 indexedProperty<168,physx::PxCloth,enum_physx::PxClothFabricPhaseType::Enum,physx::PxClothStretchConfig,physx::PxClothStretchConfigGeneratedInfo> body=439 status=ok
// SIG undefined indexedProperty<168,physx::PxCloth,enum_physx::PxClothFabricPhaseType::Enum,physx::PxClothStretchConfig,physx::PxClothStretchConfigGeneratedInfo>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
     indexedProperty<168,physx::PxCloth,enum_physx::PxClothFabricPhaseType::Enum,physx::PxClothStretchConfig,physx::PxClothStretchConfigGeneratedInfo>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [24];
  PxClothStretchConfigGeneratedInfo local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  lVar2 = *param_4;
  while (lVar2 != 0) {
    Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,lVar2);
    puVar6 = (undefined8 *)(*(code *)param_3[3])(local_b0,param_1[2],(int)param_4[1]);
    lVar2 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    local_c0 = *puVar6;
    uStack_b8 = puVar6[1];
    lVar5 = param_1[4];
    physx::PxClothStretchConfigGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_98);
    local_e8 = &local_c0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_f8 = lVar2;
    local_f0 = lVar3;
    local_e0 = lVar4;
    local_d8 = lVar5;
    RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
    operator()<416,physx::PxClothStretchConfig,float,float>(&local_f8,local_98,0);
    RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
    operator()<416,physx::PxClothStretchConfig,float,float>(&local_f8,local_78,1);
    RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
    operator()<416,physx::PxClothStretchConfig,float,float>(&local_f8,local_58,2);
    RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
    operator()<416,physx::PxClothStretchConfig,float,float>(&local_f8,local_38,3);
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
    plVar1 = param_4 + 2;
    param_4 = param_4 + 2;
    lVar2 = *plVar1;
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



// FUNCTION 143282950 parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxBoxGeometry> body=123 status=ok
// SIG undefined parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxBoxGeometry>(void)

undefined4 *
physx::Sn::parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxBoxGeometry>
          (longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  PxBoxGeometryGeneratedInfo local_28 [32];
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
  puVar2 = (undefined4 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x10,"parseGeometry",
                      "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\serialization\\xml\\SnXmlVisitorReader.h"
                      ,0xad);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 3;
    *(undefined8 *)(puVar2 + 1) = 0;
    puVar2[3] = 0;
  }
  physx::PxBoxGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_28);
  readComplexObj<physx::PxBoxGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
            (param_1,puVar2);
  return puVar2;
}



// FUNCTION 1432829d0 parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxCapsuleGeometry> body=124 status=ok
// SIG undefined parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxCapsuleGeometry>(void)

undefined8 *
physx::Sn::
parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxCapsuleGeometry>
          (longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  PxCapsuleGeometryGeneratedInfo local_48 [64];
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
  puVar2 = (undefined8 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0xc,"parseGeometry",
                      "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\serialization\\xml\\SnXmlVisitorReader.h"
                      ,0xad);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = 2;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  physx::PxCapsuleGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_48);
  readComplexObj<physx::PxCapsuleGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
            (param_1,puVar2);
  return puVar2;
}



// FUNCTION 143282a50 parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxConvexMeshGeometry> body=174 status=ok
// SIG undefined parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxConvexMeshGeometry>(void)

undefined4 *
physx::Sn::
parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxConvexMeshGeometry>
          (longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  PxConvexMeshGeometryGeneratedInfo local_68 [96];
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
  puVar2 = (undefined4 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x30,"parseGeometry",
                      "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\serialization\\xml\\SnXmlVisitorReader.h"
                      ,0xad);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 4;
    puVar2[1] = 0x3f800000;
    puVar2[2] = 0x3f800000;
    puVar2[3] = 0x3f800000;
    *(undefined8 *)(puVar2 + 4) = 0;
    puVar2[6] = 0;
    puVar2[7] = 0x3f800000;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x29) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x2b) = 0;
  }
  physx::PxConvexMeshGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_68);
  readComplexObj<physx::PxConvexMeshGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
            (param_1,puVar2);
  return puVar2;
}



// FUNCTION 143282b00 parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxHeightFieldGeometry> body=160 status=ok
// SIG undefined parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxHeightFieldGeometry>(void)

undefined4 *
physx::Sn::
parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxHeightFieldGeometry>
          (longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  PxHeightFieldGeometryGeneratedInfo local_a8 [160];
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
  puVar2 = (undefined4 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x20,"parseGeometry",
                      "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\serialization\\xml\\SnXmlVisitorReader.h"
                      ,0xad);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 6;
    *(undefined8 *)(puVar2 + 2) = 0;
    puVar2[4] = 0x3f800000;
    puVar2[5] = 0x3f800000;
    puVar2[6] = 0x3f800000;
    *(undefined1 *)(puVar2 + 7) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x1d) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x1f) = 0;
  }
  physx::PxHeightFieldGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_a8);
  readComplexObj<physx::PxHeightFieldGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
            (param_1,puVar2);
  return puVar2;
}



// FUNCTION 143282ba0 parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxTriangleMeshGeometry> body=174 status=ok
// SIG undefined parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxTriangleMeshGeometry>(void)

undefined4 *
physx::Sn::
parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxTriangleMeshGeometry>
          (longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  PxTriangleMeshGeometryGeneratedInfo local_68 [96];
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
  puVar2 = (undefined4 *)
           (**(code **)(*plVar1 + 8))
                     (plVar1,0x30,"parseGeometry",
                      "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\serialization\\xml\\SnXmlVisitorReader.h"
                      ,0xad);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 5;
    puVar2[1] = 0x3f800000;
    puVar2[2] = 0x3f800000;
    puVar2[3] = 0x3f800000;
    *(undefined8 *)(puVar2 + 4) = 0;
    puVar2[6] = 0;
    puVar2[7] = 0x3f800000;
    *(undefined1 *)(puVar2 + 8) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x21) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x23) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
  }
  physx::PxTriangleMeshGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_68);
  readComplexObj<physx::PxTriangleMeshGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
            (param_1,puVar2);
  return puVar2;
}



// FUNCTION 143282c50 parseShape<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_> body=1101 status=ok
// SIG undefined parseShape<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>(void)

void physx::Sn::parseShape<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
               (longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong local_res8;
  PxPlaneGeometryGeneratedInfo local_res20 [8];
  char *local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined7 uStack_57;
  
  lVar3 = param_1[1];
  lVar4 = param_1[5];
  lVar5 = param_1[8];
  uVar2 = *(undefined4 *)(*param_1 + 0x10);
  local_res8._0_4_ = uVar2;
  if (*(uint *)(lVar3 + 0x10) < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = uVar2;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar3,&local_res8);
  }
  cVar6 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar6 == '\0') goto LAB_143283082;
  lVar3 = param_1[1];
  local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(*param_1 + 0x10));
  if (*(uint *)(lVar3 + 0x10) < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(*param_1 + 0x10);
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar3,&local_res8);
  }
  RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  lVar3 = *param_1;
  local_68 = "Materials";
  local_58 = (undefined1)param_1[9];
  uStack_60 = uStack_60 & 0xffffff00;
  if (*(uint *)(lVar3 + 0x10) < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x45af41c0;
      puVar1[1] = 1;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      *(ulonglong *)(puVar1 + 4) = CONCAT71(uStack_57,local_58);
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  }
  else {
    shdfnd::
    Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
    ::growAndPushBack(lVar3,&local_68);
  }
  cVar6 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  puVar12 = (undefined8 *)0x0;
  if (cVar6 != '\0') {
    cVar6 = RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    while (cVar6 != '\0') {
      local_res8 = 0;
      cVar6 = readReference<physx::PxMaterial>(lVar4,lVar5,&local_res8);
      if (cVar6 == '\0') {
        *(undefined1 *)param_1[10] = 1;
      }
      if (local_res8 != 0) {
        if (*(uint *)(param_3 + 1) < (*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff)) {
          plVar9 = (longlong *)(*param_3 + (ulonglong)*(uint *)(param_3 + 1) * 8);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = local_res8;
          }
          *(int *)(param_3 + 1) = (int)param_3[1] + 1;
        }
        else {
          shdfnd::
          Array<physx::PxMaterial_*___ptr64,physx::shdfnd::ReflectionAllocator<physx::PxMaterial_*___ptr64>_>
          ::growAndPushBack(param_3,&local_res8);
        }
      }
      if ((char)param_1[9] == '\0') break;
      cVar6 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  lVar3 = param_1[1];
  uVar2 = *(undefined4 *)(*param_1 + 0x10);
  local_res8._0_4_ = uVar2;
  if (*(uint *)(lVar3 + 0x10) < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = uVar2;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar3,&local_res8);
  }
  RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  lVar3 = *param_1;
  local_68 = "Geometry";
  local_58 = (undefined1)param_1[9];
  uStack_60 = uStack_60 & 0xffffff00;
  if (*(uint *)(lVar3 + 0x10) < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x45af41a0;
      puVar1[1] = 1;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      *(ulonglong *)(puVar1 + 4) = CONCAT71(uStack_57,local_58);
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  }
  else {
    shdfnd::
    Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
    ::growAndPushBack(lVar3,&local_68);
  }
  cVar6 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if ((cVar6 != '\0') &&
     (cVar6 = RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1), cVar6 != '\0'))
  {
    if ((char)param_1[9] == '\0') {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)(**(code **)(*(longlong *)param_1[5] + 0x38))();
    }
    iVar7 = physx::shdfnd::stricmp(pcVar8,"PxSphereGeometry");
    if (iVar7 == 0) {
      plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[7] + 0x18))();
      puVar10 = (undefined8 *)
                (**(code **)(*plVar9 + 8))
                          (plVar9,8,"parseGeometry",
                           "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\serialization\\xml\\SnXmlVisitorReader.h"
                           ,0xad);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0;
        puVar12 = puVar10;
      }
      physx::PxSphereGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop
                ((PxSphereGeometryGeneratedInfo *)&local_68);
      readComplexObj<physx::PxSphereGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
                (param_1,puVar12);
      *param_2 = puVar12;
    }
    else {
      iVar7 = physx::shdfnd::stricmp(pcVar8,"PxPlaneGeometry");
      if (iVar7 == 0) {
        plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[7] + 0x18))();
        puVar10 = (undefined8 *)
                  (**(code **)(*plVar9 + 8))
                            (plVar9,4,"parseGeometry",
                             "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\serialization\\xml\\SnXmlVisitorReader.h"
                             ,0xad);
        if (puVar10 != (undefined8 *)0x0) {
          *(undefined4 *)puVar10 = 1;
          puVar12 = puVar10;
        }
        physx::PxPlaneGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop
                  ((PxPlaneGeometryGeneratedInfo *)&local_res8);
        physx::PxPlaneGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_res20);
        *param_2 = puVar12;
      }
      else {
        iVar7 = physx::shdfnd::stricmp(pcVar8,"PxCapsuleGeometry");
        if (iVar7 == 0) {
          uVar11 = parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxCapsuleGeometry>
                             (param_1,&local_68);
        }
        else {
          iVar7 = physx::shdfnd::stricmp(pcVar8,"PxBoxGeometry");
          if (iVar7 == 0) {
            uVar11 = parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxBoxGeometry>
                               (param_1,&local_68);
          }
          else {
            iVar7 = physx::shdfnd::stricmp(pcVar8,"PxConvexMeshGeometry");
            if (iVar7 == 0) {
              uVar11 = parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxConvexMeshGeometry>
                                 (param_1,&local_68);
            }
            else {
              iVar7 = physx::shdfnd::stricmp(pcVar8,"PxTriangleMeshGeometry");
              if (iVar7 == 0) {
                uVar11 = parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxTriangleMeshGeometry>
                                   (param_1,&local_68);
              }
              else {
                iVar7 = physx::shdfnd::stricmp(pcVar8,"PxHeightFieldGeometry");
                if (iVar7 != 0) goto LAB_143283072;
                uVar11 = parseGeometry<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxHeightFieldGeometry>
                                   (param_1,&local_68);
              }
            }
          }
        }
        *param_2 = uVar11;
      }
    }
  }
LAB_143283072:
  RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
LAB_143283082:
  RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  return;
}



// FUNCTION 1432830a0 readAllProperties<physx::PxArticulation> body=338 status=ok
// SIG undefined readAllProperties<physx::PxArticulation>(void)

bool physx::Sn::readAllProperties<physx::PxArticulation>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  bool bVar1;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_288;
  longlong local_280;
  ulonglong local_278;
  undefined8 *local_270;
  longlong local_268;
  ulonglong local_260;
  undefined8 **local_258;
  undefined8 **local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong *local_220;
  undefined8 local_218;
  undefined1 local_210;
  char *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  PxArticulationGeneratedInfo local_1e8 [464];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_270 = &local_res10;
  local_268 = 0;
  local_288 = &local_res10;
  local_260 = 0;
  local_280 = 0;
  local_278 = 0;
  physx::PxArticulationGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_1e8);
  local_248 = *param_1;
  uStack_240 = param_1[1];
  local_258 = &local_270;
  local_238 = param_1[2];
  local_250 = &local_288;
  local_res8[0] = '\0';
  local_218 = param_5;
  local_208 = local_res8;
  local_210 = 1;
  local_200 = 0;
  uStack_1f8 = 0;
  local_230 = param_2;
  local_228 = param_3;
  local_220 = param_4;
  PxArticulationGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>_>
            (local_1e8,&local_258,0);
  bVar1 = local_res8[0] == '\0';
  if ((((local_278 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_278)) && (local_280 != 0)) {
    (**(code **)(*(longlong *)*local_288 + 0x10))();
  }
  if ((((local_260 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_260)) && (local_268 != 0)) {
    (**(code **)(*(longlong *)*local_270 + 0x10))();
  }
  return bVar1;
}



// FUNCTION 143283200 readAllProperties<physx::PxCloth> body=527 status=ok
// SIG undefined readAllProperties<physx::PxCloth>(void)

bool physx::Sn::readAllProperties<physx::PxCloth>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_5b8;
  longlong local_5b0;
  ulonglong local_5a8;
  undefined8 *local_5a0;
  longlong local_598;
  ulonglong local_590;
  undefined8 **local_588;
  undefined8 **local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  longlong *local_550;
  undefined8 local_548;
  undefined1 local_540;
  char *local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  PxClothGeneratedInfo local_518 [24];
  undefined1 local_500 [32];
  undefined1 local_4e0 [32];
  undefined1 local_4c0 [32];
  undefined1 local_4a0 [32];
  undefined1 local_480 [1128];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_5a0 = &local_res10;
  local_598 = 0;
  local_5b8 = &local_res10;
  local_590 = 0;
  local_5b0 = 0;
  local_5a8 = 0;
  physx::PxClothGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_518);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_588 = &local_5a0;
  uVar1 = param_1[2];
  local_580 = &local_5b8;
  local_res8[0] = '\0';
  local_538 = local_res8;
  local_548 = param_5;
  local_540 = 1;
  local_530 = 0;
  uStack_528 = 0;
  local_578 = uVar2;
  uStack_570 = uVar3;
  local_568 = uVar1;
  local_560 = param_2;
  local_558 = param_3;
  local_550 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>(&local_588,local_500,1);
  FUN_14327b660(&local_588,local_4e0,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<26,physx::PxActor,unsigned_char,unsigned_char>(&local_588,local_4c0,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<26,physx::PxActor,unsigned_char,unsigned_char>(&local_588,local_4a0,4);
  FUN_14327c350(&local_588,local_480,5);
  local_588 = &local_5a0;
  local_580 = &local_5b8;
  local_538 = local_res8;
  local_548 = param_5;
  local_540 = 1;
  local_530 = 0;
  uStack_528 = 0;
  local_578 = uVar2;
  uStack_570 = uVar3;
  local_568 = uVar1;
  local_560 = param_2;
  local_558 = param_3;
  local_550 = param_4;
  PxClothGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>_>
            (local_518,&local_588,0);
  bVar4 = local_res8[0] == '\0';
  if ((((local_5a8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_5a8)) && (local_5b0 != 0)) {
    (**(code **)(*(longlong *)*local_5b8 + 0x10))();
  }
  if ((((local_590 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_590)) && (local_598 != 0)) {
    (**(code **)(*(longlong *)*local_5a0 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 143283410 readAllProperties<physx::PxD6Joint> body=444 status=ok
// SIG undefined readAllProperties<physx::PxD6Joint>(void)

bool physx::Sn::readAllProperties<physx::PxD6Joint>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_448;
  longlong local_440;
  ulonglong local_438;
  undefined8 *local_430;
  longlong local_428;
  ulonglong local_420;
  undefined8 **local_418;
  undefined8 **local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  longlong *local_3e0;
  undefined8 local_3d8;
  undefined1 local_3d0;
  char *local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined1 local_3a8 [912];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_430 = &local_res10;
  local_428 = 0;
  local_448 = &local_res10;
  local_420 = 0;
  local_440 = 0;
  local_438 = 0;
  PxD6JointGeneratedInfo::PxD6JointGeneratedInfo(local_3a8);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_418 = &local_430;
  uVar1 = param_1[2];
  local_410 = &local_448;
  local_res8[0] = '\0';
  local_3c8 = local_res8;
  local_3d8 = param_5;
  local_3d0 = 1;
  local_3c0 = 0;
  uStack_3b8 = 0;
  local_408 = uVar2;
  uStack_400 = uVar3;
  local_3f8 = uVar1;
  local_3f0 = param_2;
  local_3e8 = param_3;
  local_3e0 = param_4;
  PxJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_>
            (local_3a8,&local_418,0);
  local_418 = &local_430;
  local_410 = &local_448;
  local_3c8 = local_res8;
  local_3d8 = param_5;
  local_3d0 = 1;
  local_3c0 = 0;
  uStack_3b8 = 0;
  local_408 = uVar2;
  uStack_400 = uVar3;
  local_3f8 = uVar1;
  local_3f0 = param_2;
  local_3e8 = param_3;
  local_3e0 = param_4;
  PxD6JointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_>
            (local_3a8,&local_418,0);
  bVar4 = local_res8[0] == '\0';
  if ((((local_438 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_438)) && (local_440 != 0)) {
    (**(code **)(*(longlong *)*local_448 + 0x10))();
  }
  if ((((local_420 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_420)) && (local_428 != 0)) {
    (**(code **)(*(longlong *)*local_430 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 1432835d0 readAllProperties<physx::PxDistanceJoint> body=565 status=ok
// SIG undefined readAllProperties<physx::PxDistanceJoint>(void)

bool physx::Sn::readAllProperties<physx::PxDistanceJoint>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_3a8;
  longlong local_3a0;
  ulonglong local_398;
  undefined8 *local_390;
  longlong local_388;
  ulonglong local_380;
  undefined8 **local_378;
  undefined8 **local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  longlong *local_340;
  undefined8 local_338;
  undefined1 local_330;
  char *local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined1 local_308 [496];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [96];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_390 = &local_res10;
  local_388 = 0;
  local_3a8 = &local_res10;
  local_380 = 0;
  local_3a0 = 0;
  local_398 = 0;
  PxDistanceJointGeneratedInfo::PxDistanceJointGeneratedInfo(local_308);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_378 = &local_390;
  uVar1 = param_1[2];
  local_370 = &local_3a8;
  local_res8[0] = '\0';
  local_328 = local_res8;
  local_338 = param_5;
  local_330 = 1;
  local_320 = 0;
  uStack_318 = 0;
  local_368 = uVar2;
  uStack_360 = uVar3;
  local_358 = uVar1;
  local_350 = param_2;
  local_348 = param_3;
  local_340 = param_4;
  PxJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_>
            (local_308,&local_378,0);
  local_378 = &local_390;
  local_370 = &local_3a8;
  local_328 = local_res8;
  local_338 = param_5;
  local_330 = 1;
  local_320 = 0;
  uStack_318 = 0;
  local_368 = uVar2;
  uStack_360 = uVar3;
  local_358 = uVar1;
  local_350 = param_2;
  local_348 = param_3;
  local_340 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_378,local_118,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_378,local_f8,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_378,local_d8,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_378,local_b8,4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_378,local_98,5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxDistanceJoint>_>::
  operator()<474,physx::PxDistanceJoint,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>_>
            (&local_378,local_78,6);
  bVar4 = local_res8[0] == '\0';
  if ((((local_398 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_398)) && (local_3a0 != 0)) {
    (**(code **)(*(longlong *)*local_3a8 + 0x10))();
  }
  if ((((local_380 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_380)) && (local_388 != 0)) {
    (**(code **)(*(longlong *)*local_390 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 143283810 readAllProperties<physx::PxFixedJoint> body=470 status=ok
// SIG undefined readAllProperties<physx::PxFixedJoint>(void)

bool physx::Sn::readAllProperties<physx::PxFixedJoint>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_308;
  longlong local_300;
  ulonglong local_2f8;
  undefined8 *local_2f0;
  longlong local_2e8;
  ulonglong local_2e0;
  undefined8 **local_2d8;
  undefined8 **local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  char *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_268 [472];
  undefined1 local_90 [32];
  undefined1 local_70 [88];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_2f0 = &local_res10;
  local_2e8 = 0;
  local_308 = &local_res10;
  local_2e0 = 0;
  local_300 = 0;
  local_2f8 = 0;
  PxFixedJointGeneratedInfo::PxFixedJointGeneratedInfo(local_268);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_2d8 = &local_2f0;
  uVar1 = param_1[2];
  local_2d0 = &local_308;
  local_res8[0] = '\0';
  local_288 = local_res8;
  local_298 = param_5;
  local_290 = 1;
  local_280 = 0;
  uStack_278 = 0;
  local_2c8 = uVar2;
  uStack_2c0 = uVar3;
  local_2b8 = uVar1;
  local_2b0 = param_2;
  local_2a8 = param_3;
  local_2a0 = param_4;
  PxJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_>
            (local_268,&local_2d8,0);
  local_2d8 = &local_2f0;
  local_2d0 = &local_308;
  local_288 = local_res8;
  local_298 = param_5;
  local_290 = 1;
  local_280 = 0;
  uStack_278 = 0;
  local_2c8 = uVar2;
  uStack_2c0 = uVar3;
  local_2b8 = uVar1;
  local_2b0 = param_2;
  local_2a8 = param_3;
  local_2a0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_2d8,local_90,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_2d8,local_70,1);
  bVar4 = local_res8[0] == '\0';
  if ((((local_2f8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_2f8)) && (local_300 != 0)) {
    (**(code **)(*(longlong *)*local_308 + 0x10))();
  }
  if ((((local_2e0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_2e0)) && (local_2e8 != 0)) {
    (**(code **)(*(longlong *)*local_2f0 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 1432839f0 readAllProperties<physx::PxJointAngularLimitPair,physx::PxJointAngularLimitPairGeneratedInfo_const_> body=293 status=ok
// SIG undefined readAllProperties<physx::PxJointAngularLimitPair,physx::PxJointAngularLimitPairGeneratedInfo_const_>(void)

bool physx::Sn::
     readAllProperties<physx::PxJointAngularLimitPair,physx::PxJointAngularLimitPairGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_res8 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = param_1[2];
  local_68 = local_res8;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_res8[0] = '\0';
  local_88 = param_5;
  local_80 = param_6;
  local_78 = param_7;
  local_70 = 1;
  local_60 = 0;
  uStack_58 = 0;
  local_b8 = param_2;
  local_b0 = param_3;
  local_a8 = uVar2;
  uStack_a0 = uVar3;
  local_98 = uVar1;
  local_90 = param_4;
  PxJointAngularLimitPairGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxJointAngularLimitPair>_>_>
            (param_8,&local_b8,0);
  local_68 = local_res8;
  local_60 = 0;
  uStack_58 = 0;
  local_88 = param_5;
  local_80 = param_6;
  local_78 = param_7;
  local_70 = 1;
  local_b8 = param_2;
  local_b0 = param_3;
  local_a8 = uVar2;
  uStack_a0 = uVar3;
  local_98 = uVar1;
  local_90 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_b8,param_8 + 0xa0,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_b8,param_8 + 0xc0,1);
  return local_res8[0] == '\0';
}



// FUNCTION 143283b20 readAllProperties<physx::PxJointLinearLimit,physx::PxJointLinearLimitGeneratedInfo_const_> body=271 status=ok
// SIG undefined readAllProperties<physx::PxJointLinearLimit,physx::PxJointLinearLimitGeneratedInfo_const_>(void)

bool physx::Sn::
     readAllProperties<physx::PxJointLinearLimit,physx::PxJointLinearLimitGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_res8 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = param_1[2];
  local_68 = local_res8;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_res8[0] = '\0';
  local_88 = param_5;
  local_80 = param_6;
  local_78 = param_7;
  local_70 = 1;
  local_60 = 0;
  uStack_58 = 0;
  local_b8 = param_2;
  local_b0 = param_3;
  local_a8 = uVar2;
  uStack_a0 = uVar3;
  local_98 = uVar1;
  local_90 = param_4;
  PxJointAngularLimitPairGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxJointAngularLimitPair>_>_>
            (param_8,&local_b8,0);
  local_68 = local_res8;
  local_60 = 0;
  uStack_58 = 0;
  local_88 = param_5;
  local_80 = param_6;
  local_78 = param_7;
  local_70 = 1;
  local_b8 = param_2;
  local_b0 = param_3;
  local_a8 = uVar2;
  uStack_a0 = uVar3;
  local_98 = uVar1;
  local_90 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_b8,param_8 + 0xa0,0);
  return local_res8[0] == '\0';
}



// FUNCTION 143283c30 readAllProperties<physx::PxMaterial> body=441 status=ok
// SIG undefined readAllProperties<physx::PxMaterial>(void)

bool physx::Sn::readAllProperties<physx::PxMaterial>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  bool bVar1;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  undefined8 *local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  undefined8 **local_198;
  undefined8 **local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined1 local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  PxMaterialGeneratedInfo local_128 [24];
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [88];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_1b0 = &local_res10;
  local_1a8 = 0;
  local_1c8 = &local_res10;
  local_1a0 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  physx::PxMaterialGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_128);
  local_188 = *param_1;
  uStack_180 = param_1[1];
  local_198 = &local_1b0;
  local_178 = param_1[2];
  local_190 = &local_1c8;
  local_res8[0] = '\0';
  local_158 = param_5;
  local_148 = local_res8;
  local_150 = 1;
  local_140 = 0;
  uStack_138 = 0;
  local_170 = param_2;
  local_168 = param_3;
  local_160 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_198,local_110,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_198,local_f0,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_198,local_d0,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxMaterial>_>::
  operator()<16,physx::PxMaterial,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>_>
            (&local_198,local_b0,4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxMaterial>_>::
  operator()<17,physx::PxMaterial,enum_physx::PxCombineMode::Enum,enum_physx::PxCombineMode::Enum>
            (&local_198,local_90,5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxMaterial>_>::
  operator()<17,physx::PxMaterial,enum_physx::PxCombineMode::Enum,enum_physx::PxCombineMode::Enum>
            (&local_198,local_70,6);
  bVar1 = local_res8[0] == '\0';
  if ((((local_1b8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1b8)) && (local_1c0 != 0)) {
    (**(code **)(*(longlong *)*local_1c8 + 0x10))();
  }
  if ((((local_1a0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1a0)) && (local_1a8 != 0)) {
    (**(code **)(*(longlong *)*local_1b0 + 0x10))();
  }
  return bVar1;
}



// FUNCTION 143283df0 readAllProperties<physx::PxParticleFluid> body=493 status=ok
// SIG undefined readAllProperties<physx::PxParticleFluid>(void)

bool physx::Sn::readAllProperties<physx::PxParticleFluid>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_408;
  longlong local_400;
  ulonglong local_3f8;
  undefined8 *local_3f0;
  longlong local_3e8;
  ulonglong local_3e0;
  undefined8 **local_3d8;
  undefined8 **local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  longlong *local_3a0;
  undefined8 local_398;
  undefined1 local_390;
  char *local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  PxParticleFluidGeneratedInfo local_368 [696];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [88];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_3f0 = &local_res10;
  local_3e8 = 0;
  local_408 = &local_res10;
  local_3e0 = 0;
  local_400 = 0;
  local_3f8 = 0;
  physx::PxParticleFluidGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_368);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_3d8 = &local_3f0;
  uVar1 = param_1[2];
  local_3d0 = &local_408;
  local_res8[0] = '\0';
  local_388 = local_res8;
  local_398 = param_5;
  local_390 = 1;
  local_380 = 0;
  uStack_378 = 0;
  local_3c8 = uVar2;
  uStack_3c0 = uVar3;
  local_3b8 = uVar1;
  local_3b0 = param_2;
  local_3a8 = param_3;
  local_3a0 = param_4;
  PxParticleFluidGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>_>
            (local_368,&local_3d8,0);
  local_3d8 = &local_3f0;
  local_3d0 = &local_408;
  local_388 = local_res8;
  local_398 = param_5;
  local_390 = 1;
  local_380 = 0;
  uStack_378 = 0;
  local_3c8 = uVar2;
  uStack_3c0 = uVar3;
  local_3b8 = uVar1;
  local_3b0 = param_2;
  local_3a8 = param_3;
  local_3a0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_3d8,local_b0,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_3d8,local_90,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_3d8,local_70,2);
  bVar4 = local_res8[0] == '\0';
  if ((((local_3f8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_3f8)) && (local_400 != 0)) {
    (**(code **)(*(longlong *)*local_408 + 0x10))();
  }
  if ((((local_3e0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_3e0)) && (local_3e8 != 0)) {
    (**(code **)(*(longlong *)*local_3f0 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 143283fe0 readAllProperties<physx::PxParticleSystem> body=338 status=ok
// SIG undefined readAllProperties<physx::PxParticleSystem>(void)

bool physx::Sn::readAllProperties<physx::PxParticleSystem>
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
  PxParticleSystemGeneratedInfo local_2e8 [720];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_370 = &local_res10;
  local_368 = 0;
  local_388 = &local_res10;
  local_360 = 0;
  local_380 = 0;
  local_378 = 0;
  physx::PxParticleSystemGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_2e8);
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
  PxParticleFluidGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>_>
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



// FUNCTION 143284140 readAllProperties<physx::PxPrismaticJoint> body=519 status=ok
// SIG undefined readAllProperties<physx::PxPrismaticJoint>(void)

bool physx::Sn::readAllProperties<physx::PxPrismaticJoint>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_378;
  longlong local_370;
  ulonglong local_368;
  undefined8 *local_360;
  longlong local_358;
  ulonglong local_350;
  undefined8 **local_348;
  undefined8 **local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  longlong *local_310;
  undefined8 local_308;
  undefined1 local_300;
  char *local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined1 local_2d8 [520];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [88];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_360 = &local_res10;
  local_358 = 0;
  local_378 = &local_res10;
  local_350 = 0;
  local_370 = 0;
  local_368 = 0;
  PxPrismaticJointGeneratedInfo::PxPrismaticJointGeneratedInfo(local_2d8);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_348 = &local_360;
  uVar1 = param_1[2];
  local_340 = &local_378;
  local_res8[0] = '\0';
  local_2f8 = local_res8;
  local_308 = param_5;
  local_300 = 1;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_338 = uVar2;
  uStack_330 = uVar3;
  local_328 = uVar1;
  local_320 = param_2;
  local_318 = param_3;
  local_310 = param_4;
  PxJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_>
            (local_2d8,&local_348,0);
  local_348 = &local_360;
  local_340 = &local_378;
  local_2f8 = local_res8;
  local_308 = param_5;
  local_300 = 1;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_338 = uVar2;
  uStack_330 = uVar3;
  local_328 = uVar1;
  local_320 = param_2;
  local_318 = param_3;
  local_310 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxPrismaticJoint>_>::
  operator()<485,physx::PxPrismaticJoint,physx::PxJointLinearLimitPair_const_&___ptr64,physx::PxJointLinearLimitPair>
            (&local_348,local_d0,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxPrismaticJoint>_>::
  operator()<486,physx::PxPrismaticJoint,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>_>
            (&local_348,local_b0,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_348,local_90,4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_348,local_70,5);
  bVar4 = local_res8[0] == '\0';
  if ((((local_368 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_368)) && (local_370 != 0)) {
    (**(code **)(*(longlong *)*local_378 + 0x10))();
  }
  if ((((local_350 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_350)) && (local_358 != 0)) {
    (**(code **)(*(longlong *)*local_360 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 143284350 readAllProperties<physx::PxRevoluteJoint> body=588 status=ok
// SIG undefined readAllProperties<physx::PxRevoluteJoint>(void)

bool physx::Sn::readAllProperties<physx::PxRevoluteJoint>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_3d8;
  longlong local_3d0;
  ulonglong local_3c8;
  undefined8 *local_3c0;
  longlong local_3b8;
  ulonglong local_3b0;
  undefined8 **local_3a8;
  undefined8 **local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  longlong *local_370;
  undefined8 local_368;
  undefined1 local_360;
  char *local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined1 local_338 [520];
  undefined1 local_130 [32];
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [88];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_3c0 = &local_res10;
  local_3b8 = 0;
  local_3d8 = &local_res10;
  local_3b0 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  PxRevoluteJointGeneratedInfo::PxRevoluteJointGeneratedInfo(local_338);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_3a8 = &local_3c0;
  uVar1 = param_1[2];
  local_3a0 = &local_3d8;
  local_res8[0] = '\0';
  local_358 = local_res8;
  local_368 = param_5;
  local_360 = 1;
  local_350 = 0;
  uStack_348 = 0;
  local_398 = uVar2;
  uStack_390 = uVar3;
  local_388 = uVar1;
  local_380 = param_2;
  local_378 = param_3;
  local_370 = param_4;
  PxJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_>
            (local_338,&local_3a8,0);
  local_3a8 = &local_3c0;
  local_3a0 = &local_3d8;
  local_358 = local_res8;
  local_368 = param_5;
  local_360 = 1;
  local_350 = 0;
  uStack_348 = 0;
  local_398 = uVar2;
  uStack_390 = uVar3;
  local_388 = uVar1;
  local_380 = param_2;
  local_378 = param_3;
  local_370 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRevoluteJoint>_>::
  operator()<494,physx::PxRevoluteJoint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>
            (&local_3a8,local_130,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_3a8,local_110,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_3a8,local_f0,4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_3a8,local_d0,5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRevoluteJoint>_>::
  operator()<498,physx::PxRevoluteJoint,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>_>
            (&local_3a8,local_b0,6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_3a8,local_90,7);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_3a8,local_70,8);
  bVar4 = local_res8[0] == '\0';
  if ((((local_3c8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_3c8)) && (local_3d0 != 0)) {
    (**(code **)(*(longlong *)*local_3d8 + 0x10))();
  }
  if ((((local_3b0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_3b0)) && (local_3b8 != 0)) {
    (**(code **)(*(longlong *)*local_3c0 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 1432845a0 readAllProperties<physx::PxRigidDynamic> body=444 status=ok
// SIG undefined readAllProperties<physx::PxRigidDynamic>(void)

bool physx::Sn::readAllProperties<physx::PxRigidDynamic>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_4d8;
  longlong local_4d0;
  ulonglong local_4c8;
  undefined8 *local_4c0;
  longlong local_4b8;
  ulonglong local_4b0;
  undefined8 **local_4a8;
  undefined8 **local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  longlong *local_470;
  undefined8 local_468;
  undefined1 local_460;
  char *local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  PxRigidDynamicGeneratedInfo local_438 [1056];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_4c0 = &local_res10;
  local_4b8 = 0;
  local_4d8 = &local_res10;
  local_4b0 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  physx::PxRigidDynamicGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_438);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_4a8 = &local_4c0;
  uVar1 = param_1[2];
  local_4a0 = &local_4d8;
  local_res8[0] = '\0';
  local_458 = local_res8;
  local_468 = param_5;
  local_460 = 1;
  local_450 = 0;
  uStack_448 = 0;
  local_498 = uVar2;
  uStack_490 = uVar3;
  local_488 = uVar1;
  local_480 = param_2;
  local_478 = param_3;
  local_470 = param_4;
  PxRigidDynamicGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>
            (local_438,&local_4a8,0);
  local_4a8 = &local_4c0;
  local_4a0 = &local_4d8;
  local_458 = local_res8;
  local_468 = param_5;
  local_460 = 1;
  local_450 = 0;
  uStack_448 = 0;
  local_498 = uVar2;
  uStack_490 = uVar3;
  local_488 = uVar1;
  local_480 = param_2;
  local_478 = param_3;
  local_470 = param_4;
  PxRigidDynamicGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>
            (local_438,&local_4a8,0);
  bVar4 = local_res8[0] == '\0';
  if ((((local_4c8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_4c8)) && (local_4d0 != 0)) {
    (**(code **)(*(longlong *)*local_4d8 + 0x10))();
  }
  if ((((local_4b0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_4b0)) && (local_4b8 != 0)) {
    (**(code **)(*(longlong *)*local_4c0 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 143284760 readAllProperties<physx::PxRigidStatic> body=338 status=ok
// SIG undefined readAllProperties<physx::PxRigidStatic>(void)

bool physx::Sn::readAllProperties<physx::PxRigidStatic>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  bool bVar1;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_228;
  longlong local_220;
  ulonglong local_218;
  undefined8 *local_210;
  longlong local_208;
  ulonglong local_200;
  undefined8 **local_1f8;
  undefined8 **local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  PxRigidStaticGeneratedInfo local_188 [368];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_210 = &local_res10;
  local_208 = 0;
  local_228 = &local_res10;
  local_200 = 0;
  local_220 = 0;
  local_218 = 0;
  physx::PxRigidStaticGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_188);
  local_1e8 = *param_1;
  uStack_1e0 = param_1[1];
  local_1f8 = &local_210;
  local_1d8 = param_1[2];
  local_1f0 = &local_228;
  local_res8[0] = '\0';
  local_1b8 = param_5;
  local_1a8 = local_res8;
  local_1b0 = 1;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1d0 = param_2;
  local_1c8 = param_3;
  local_1c0 = param_4;
  PxRigidBodyGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>
            (local_188,&local_1f8,0);
  bVar1 = local_res8[0] == '\0';
  if ((((local_218 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_218)) && (local_220 != 0)) {
    (**(code **)(*(longlong *)*local_228 + 0x10))();
  }
  if ((((local_200 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_200)) && (local_208 != 0)) {
    (**(code **)(*(longlong *)*local_210 + 0x10))();
  }
  return bVar1;
}



// FUNCTION 1432848c0 readAllProperties<physx::PxShape> body=338 status=ok
// SIG undefined readAllProperties<physx::PxShape>(void)

bool physx::Sn::readAllProperties<physx::PxShape>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  bool bVar1;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_238;
  longlong local_230;
  ulonglong local_228;
  undefined8 *local_220;
  longlong local_218;
  ulonglong local_210;
  undefined8 **local_208;
  undefined8 **local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  PxShapeGeneratedInfo local_198 [384];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_220 = &local_res10;
  local_218 = 0;
  local_238 = &local_res10;
  local_210 = 0;
  local_230 = 0;
  local_228 = 0;
  physx::PxShapeGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_198);
  local_1f8 = *param_1;
  uStack_1f0 = param_1[1];
  local_208 = &local_220;
  local_1e8 = param_1[2];
  local_200 = &local_238;
  local_res8[0] = '\0';
  local_1c8 = param_5;
  local_1b8 = local_res8;
  local_1c0 = 1;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1e0 = param_2;
  local_1d8 = param_3;
  local_1d0 = param_4;
  PxShapeGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>_>
            (local_198,&local_208,0);
  bVar1 = local_res8[0] == '\0';
  if ((((local_228 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_228)) && (local_230 != 0)) {
    (**(code **)(*(longlong *)*local_238 + 0x10))();
  }
  if ((((local_210 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_210)) && (local_218 != 0)) {
    (**(code **)(*(longlong *)*local_220 + 0x10))();
  }
  return bVar1;
}



// FUNCTION 143284a20 readAllProperties<physx::PxSphericalJoint> body=493 status=ok
// SIG undefined readAllProperties<physx::PxSphericalJoint>(void)

bool physx::Sn::readAllProperties<physx::PxSphericalJoint>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_328;
  longlong local_320;
  ulonglong local_318;
  undefined8 *local_310;
  longlong local_308;
  ulonglong local_300;
  undefined8 **local_2f8;
  undefined8 **local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  char *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_288 [472];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [88];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_310 = &local_res10;
  local_308 = 0;
  local_328 = &local_res10;
  local_300 = 0;
  local_320 = 0;
  local_318 = 0;
  PxSphericalJointGeneratedInfo::PxSphericalJointGeneratedInfo(local_288);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_2f8 = &local_310;
  uVar1 = param_1[2];
  local_2f0 = &local_328;
  local_res8[0] = '\0';
  local_2a8 = local_res8;
  local_2b8 = param_5;
  local_2b0 = 1;
  local_2a0 = 0;
  uStack_298 = 0;
  local_2e8 = uVar2;
  uStack_2e0 = uVar3;
  local_2d8 = uVar1;
  local_2d0 = param_2;
  local_2c8 = param_3;
  local_2c0 = param_4;
  PxJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_>
            (local_288,&local_2f8,0);
  local_2f8 = &local_310;
  local_2f0 = &local_328;
  local_2a8 = local_res8;
  local_2b8 = param_5;
  local_2b0 = 1;
  local_2a0 = 0;
  uStack_298 = 0;
  local_2e8 = uVar2;
  uStack_2e0 = uVar3;
  local_2d8 = uVar1;
  local_2d0 = param_2;
  local_2c8 = param_3;
  local_2c0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxSphericalJoint>_>::
  operator()<504,physx::PxSphericalJoint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone>
            (&local_2f8,local_b0,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxSphericalJoint>_>::
  operator()<505,physx::PxSphericalJoint,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>_>
            (&local_2f8,local_90,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_2f8,local_70,2);
  bVar4 = local_res8[0] == '\0';
  if ((((local_318 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_318)) && (local_320 != 0)) {
    (**(code **)(*(longlong *)*local_328 + 0x10))();
  }
  if ((((local_300 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_300)) && (local_308 != 0)) {
    (**(code **)(*(longlong *)*local_310 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 143284c10 readComplexObj<physx::PxClothMotionConstraintConfig,physx::Sn::RepXVisitorReaderBase<physx::PxCloth>,physx::PxClothMotionConstraintConfigGeneratedInfo> body=222 status=ok
// SIG undefined readComplexObj<physx::PxClothMotionConstraintConfig,physx::Sn::RepXVisitorReaderBase<physx::PxCloth>,physx::PxClothMotionConstraintConfigGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxClothMotionConstraintConfig,physx::Sn::RepXVisitorReaderBase<physx::PxCloth>,physx::PxClothMotionConstraintConfigGeneratedInfo>
               (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char local_res8 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_68 = param_1[2];
  uStack_60 = param_1[3];
  local_78 = *param_1;
  local_70 = param_1[1];
  local_50 = param_1[5];
  local_40 = param_1[7];
  local_38 = param_1[8];
  local_58 = param_1[4];
  local_28 = local_res8;
  local_res8[0] = '\0';
  local_20 = 0;
  uStack_18 = 0;
  local_30 = 1;
  local_48 = param_2;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_78,param_3,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_78,param_3 + 0x20,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_78,param_3 + 0x40,2);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143284cf0 readComplexObj<physx::PxClothTetherConfig,physx::Sn::RepXVisitorReaderBase<physx::PxCloth>,physx::PxClothTetherConfigGeneratedInfo> body=202 status=ok
// SIG undefined readComplexObj<physx::PxClothTetherConfig,physx::Sn::RepXVisitorReaderBase<physx::PxCloth>,physx::PxClothTetherConfigGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxClothTetherConfig,physx::Sn::RepXVisitorReaderBase<physx::PxCloth>,physx::PxClothTetherConfigGeneratedInfo>
               (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char local_res8 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_68 = param_1[2];
  uStack_60 = param_1[3];
  local_78 = *param_1;
  local_70 = param_1[1];
  local_50 = param_1[5];
  local_40 = param_1[7];
  local_38 = param_1[8];
  local_58 = param_1[4];
  local_28 = local_res8;
  local_res8[0] = '\0';
  local_20 = 0;
  uStack_18 = 0;
  local_30 = 1;
  local_48 = param_2;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_78,param_3,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_78,param_3 + 0x20,1);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143284dc0 readComplexObj<physx::PxArticulationJoint,physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_> body=191 status=ok
// SIG undefined readComplexObj<physx::PxArticulationJoint,physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>(void)

void physx::Sn::
     readComplexObj<physx::PxArticulationJoint,physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>
               (undefined8 *param_1,undefined8 param_2)

{
  char local_res8 [8];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  char *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  PxArticulationJointGeneratedInfo local_268 [608];
  
  physx::PxArticulationJointGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_268);
  local_2c8 = param_1[2];
  uStack_2c0 = param_1[3];
  local_2d8 = *param_1;
  local_2d0 = param_1[1];
  local_2b0 = param_1[5];
  local_2a0 = param_1[7];
  local_298 = param_1[8];
  local_2b8 = param_1[4];
  local_288 = local_res8;
  local_res8[0] = '\0';
  local_280 = 0;
  uStack_278 = 0;
  local_290 = 1;
  local_2a8 = param_2;
  PxArticulationJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>_>
            (local_268,&local_2d8,0);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143284e80 readComplexObj<physx::PxArticulationLink,physx::Sn::RepXVisitorReaderBase<physx::PxArticulation>_> body=326 status=ok
// SIG undefined readComplexObj<physx::PxArticulationLink,physx::Sn::RepXVisitorReaderBase<physx::PxArticulation>_>(void)

void physx::Sn::
     readComplexObj<physx::PxArticulationLink,physx::Sn::RepXVisitorReaderBase<physx::PxArticulation>_>
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char local_res8 [8];
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined1 local_360;
  char *local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  PxArticulationLinkGeneratedInfo local_338 [672];
  undefined1 local_98 [112];
  
  physx::PxArticulationLinkGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_338);
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  uVar2 = *param_1;
  local_358 = local_res8;
  uVar3 = param_1[1];
  uVar4 = param_1[5];
  uVar5 = param_1[7];
  uVar6 = param_1[8];
  uVar1 = param_1[4];
  local_res8[0] = '\0';
  local_360 = 1;
  local_350 = 0;
  uStack_348 = 0;
  local_3a8 = uVar2;
  local_3a0 = uVar3;
  local_398 = uVar7;
  uStack_390 = uVar8;
  local_388 = uVar1;
  local_380 = uVar4;
  local_378 = param_2;
  local_370 = uVar5;
  local_368 = uVar6;
  PxArticulationLinkGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>
            (local_338,&local_3a8,0);
  local_358 = local_res8;
  local_350 = 0;
  uStack_348 = 0;
  local_360 = 1;
  local_3a8 = uVar2;
  local_3a0 = uVar3;
  local_398 = uVar7;
  uStack_390 = uVar8;
  local_388 = uVar1;
  local_380 = uVar4;
  local_378 = param_2;
  local_370 = uVar5;
  local_368 = uVar6;
  RepXVisitorReader<physx::PxArticulationLink>::handleIncomingJoint(&local_3a8,local_98);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143284fd0 readComplexObj<physx::PxBoxGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_> body=191 status=ok
// SIG undefined readComplexObj<physx::PxBoxGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>(void)

void physx::Sn::
     readComplexObj<physx::PxBoxGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
               (undefined8 *param_1,undefined8 param_2)

{
  char local_res8 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  PxBoxGeometryGeneratedInfo local_30 [40];
  
  physx::PxBoxGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_30);
  local_88 = param_1[2];
  uStack_80 = param_1[3];
  local_98 = *param_1;
  local_90 = param_1[1];
  local_70 = param_1[5];
  local_60 = param_1[7];
  local_58 = param_1[8];
  local_78 = param_1[4];
  local_48 = local_res8;
  local_res8[0] = '\0';
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 1;
  local_68 = param_2;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (&local_98,local_30,0);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143285090 readComplexObj<physx::PxCapsuleGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_> body=215 status=ok
// SIG undefined readComplexObj<physx::PxCapsuleGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>(void)

void physx::Sn::
     readComplexObj<physx::PxCapsuleGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
               (undefined8 *param_1,undefined8 param_2)

{
  char local_res8 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  PxCapsuleGeometryGeneratedInfo local_48 [32];
  undefined1 local_28 [32];
  
  physx::PxCapsuleGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_48);
  local_a8 = param_1[2];
  uStack_a0 = param_1[3];
  local_b8 = *param_1;
  local_b0 = param_1[1];
  local_90 = param_1[5];
  local_80 = param_1[7];
  local_78 = param_1[8];
  local_98 = param_1[4];
  local_68 = local_res8;
  local_res8[0] = '\0';
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 1;
  local_88 = param_2;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_b8,local_48,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_b8,local_28,1);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143285170 readComplexObj<physx::PxConvexMeshGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_> body=239 status=ok
// SIG undefined readComplexObj<physx::PxConvexMeshGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>(void)

void physx::Sn::
     readComplexObj<physx::PxConvexMeshGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
               (undefined8 *param_1,undefined8 param_2)

{
  char local_res8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  PxConvexMeshGeometryGeneratedInfo local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  physx::PxConvexMeshGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_68);
  local_c8 = param_1[2];
  uStack_c0 = param_1[3];
  local_d8 = *param_1;
  local_d0 = param_1[1];
  local_b0 = param_1[5];
  local_a0 = param_1[7];
  local_98 = param_1[8];
  local_b8 = param_1[4];
  local_88 = local_res8;
  local_res8[0] = '\0';
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 1;
  local_a8 = param_2;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxConvexMeshGeometry>_>::
  operator()<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>
            (&local_d8,local_68,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxConvexMeshGeometry>_>::
  operator()<233,physx::PxConvexMeshGeometry,physx::PxConvexMesh_*___ptr64,physx::PxConvexMesh_*___ptr64>
            (&local_d8,local_48,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxConvexMeshGeometry>_>::
  operator()<234,physx::PxConvexMeshGeometry,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>_>
            (&local_d8,local_28,2);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143285260 readComplexObj<physx::PxHeightFieldGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_> body=265 status=ok
// SIG undefined readComplexObj<physx::PxHeightFieldGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>(void)

void physx::Sn::
     readComplexObj<physx::PxHeightFieldGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
               (undefined8 *param_1,undefined8 param_2)

{
  char local_res8 [8];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  PxHeightFieldGeometryGeneratedInfo local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  physx::PxHeightFieldGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_a8);
  local_108 = param_1[2];
  uStack_100 = param_1[3];
  local_118 = *param_1;
  local_110 = param_1[1];
  local_f0 = param_1[5];
  local_e0 = param_1[7];
  local_d8 = param_1[8];
  local_f8 = param_1[4];
  local_c8 = local_res8;
  local_res8[0] = '\0';
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 1;
  local_e8 = param_2;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxConvexMeshGeometry>_>::
  operator()<233,physx::PxConvexMeshGeometry,physx::PxConvexMesh_*___ptr64,physx::PxConvexMesh_*___ptr64>
            (&local_118,local_a8,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_118,local_88,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_118,local_68,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_118,local_48,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxTriangleMeshGeometry>_>::
  operator()<244,physx::PxTriangleMeshGeometry,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>_>
            (&local_118,local_28,4);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143285370 readComplexObj<physx::PxMeshScale,physx::Sn::RepXVisitorReaderBase<physx::PxConvexMeshGeometry>,physx::PxMeshScaleGeneratedInfo> body=202 status=ok
// SIG undefined readComplexObj<physx::PxMeshScale,physx::Sn::RepXVisitorReaderBase<physx::PxConvexMeshGeometry>,physx::PxMeshScaleGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxMeshScale,physx::Sn::RepXVisitorReaderBase<physx::PxConvexMeshGeometry>,physx::PxMeshScaleGeneratedInfo>
               (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char local_res8 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_68 = param_1[2];
  uStack_60 = param_1[3];
  local_78 = *param_1;
  local_70 = param_1[1];
  local_50 = param_1[5];
  local_40 = param_1[7];
  local_38 = param_1[8];
  local_58 = param_1[4];
  local_28 = local_res8;
  local_res8[0] = '\0';
  local_20 = 0;
  uStack_18 = 0;
  local_30 = 1;
  local_48 = param_2;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>(&local_78,param_3,0)
  ;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxMeshScale>_>::
  operator()<229,physx::PxMeshScale,physx::PxQuat,physx::PxQuat>(&local_78,param_3 + 0x20,1);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143285440 readComplexObj<physx::PxShape,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_> body=191 status=ok
// SIG undefined readComplexObj<physx::PxShape,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>(void)

void physx::Sn::readComplexObj<physx::PxShape,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
               (undefined8 *param_1,undefined8 param_2)

{
  char local_res8 [8];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  PxShapeGeneratedInfo local_188 [384];
  
  physx::PxShapeGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_188);
  local_1e8 = param_1[2];
  uStack_1e0 = param_1[3];
  local_1f8 = *param_1;
  local_1f0 = param_1[1];
  local_1d0 = param_1[5];
  local_1c0 = param_1[7];
  local_1b8 = param_1[8];
  local_1d8 = param_1[4];
  local_1a8 = local_res8;
  local_res8[0] = '\0';
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 1;
  local_1c8 = param_2;
  PxShapeGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>_>
            (local_188,&local_1f8,0);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143285500 readComplexObj<physx::PxSphereGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_> body=194 status=ok
// SIG undefined readComplexObj<physx::PxSphereGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>(void)

void physx::Sn::
     readComplexObj<physx::PxSphereGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
               (undefined8 *param_1,undefined8 param_2)

{
  char local_res8 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  PxSphereGeometryGeneratedInfo local_40 [24];
  undefined1 local_28 [32];
  
  physx::PxSphereGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_40);
  local_98 = param_1[2];
  uStack_90 = param_1[3];
  local_a8 = *param_1;
  local_a0 = param_1[1];
  local_80 = param_1[5];
  local_70 = param_1[7];
  local_68 = param_1[8];
  local_88 = param_1[4];
  local_58 = local_res8;
  local_res8[0] = '\0';
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 1;
  local_78 = param_2;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_a8,local_28,1);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 1432855d0 readComplexObj<physx::PxTriangleMeshGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_> body=239 status=ok
// SIG undefined readComplexObj<physx::PxTriangleMeshGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>(void)

void physx::Sn::
     readComplexObj<physx::PxTriangleMeshGeometry,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
               (undefined8 *param_1,undefined8 param_2)

{
  char local_res8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  PxTriangleMeshGeometryGeneratedInfo local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  physx::PxTriangleMeshGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_68);
  local_c8 = param_1[2];
  uStack_c0 = param_1[3];
  local_d8 = *param_1;
  local_d0 = param_1[1];
  local_b0 = param_1[5];
  local_a0 = param_1[7];
  local_98 = param_1[8];
  local_b8 = param_1[4];
  local_88 = local_res8;
  local_res8[0] = '\0';
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 1;
  local_a8 = param_2;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxConvexMeshGeometry>_>::
  operator()<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>
            (&local_d8,local_68,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxTriangleMeshGeometry>_>::
  operator()<244,physx::PxTriangleMeshGeometry,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>_>
            (&local_d8,local_48,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxConvexMeshGeometry>_>::
  operator()<233,physx::PxConvexMeshGeometry,physx::PxConvexMesh_*___ptr64,physx::PxConvexMesh_*___ptr64>
            (&local_d8,local_28,2);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 1432856c0 readProperty<physx::PxVec3> body=174 status=ok
// SIG undefined readProperty<physx::PxVec3>(void)

undefined8
physx::Sn::RepXVisitorReaderBase<physx::PxArticulationJoint>::readProperty<physx::PxVec3>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  char *local_res8 [4];
  
  local_res8[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar3 = "bad__repx__name";
    }
    else {
      pcVar3 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar3,local_res8);
    if (((cVar2 != '\0') && (local_res8[0] != (char *)0x0)) && (*local_res8[0] != '\0')) {
      uVar4 = strToFloat(local_res8[0],local_res8);
      *param_2 = uVar4;
      uVar4 = strToFloat(local_res8[0],local_res8);
      param_2[1] = uVar4;
      strToFloat(local_res8[0],local_res8);
      param_2[2] = extraout_XMM0_Da;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143285770 readReference<physx::PxMaterial> body=189 status=ok
// SIG undefined readReference<physx::PxMaterial>(void)

bool physx::Sn::readReference<physx::PxMaterial>
               (longlong *param_1,longlong *param_2,longlong *param_3)

{
  char *_String;
  longlong lVar1;
  Foundation *this;
  char *local_res8;
  
  _String = (char *)(**(code **)(*param_1 + 0x40))();
  local_res8 = _String;
  if ((_String != (char *)0x0) && (*_String != '\0')) {
    _String = (char *)_strtoui64(_String,&local_res8,10);
  }
  if (_String != (char *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x50))(param_2,_String);
    if (lVar1 == 0) {
      this = physx::shdfnd::Foundation::getInstance();
      physx::shdfnd::Foundation::error
                (this,4,
                 "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\physx_3.4\\source\\physxextensions\\src\\serialization\\xml\\SnXmlVisitorReader.h"
                 ,0x6c,
                 "PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalRefs collection is specified if required and check Xml file for completeness."
                 ,_String);
    }
    *param_3 = lVar1;
    return lVar1 != 0;
  }
  *param_3 = 0;
  return true;
}



// FUNCTION 143285830 readShapesProperty<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxRigidDynamic> body=542 status=ok
// SIG undefined readShapesProperty<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxRigidDynamic>(void)

void physx::Sn::
     readShapesProperty<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxRigidDynamic>
               (longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  PxAllocatorCallback *pPVar11;
  longlong local_res8;
  longlong local_38;
  ulonglong local_30;
  
  lVar2 = param_1[1];
  lVar3 = param_1[5];
  plVar4 = (longlong *)param_1[8];
  local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(*param_1 + 0x10));
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(*param_1 + 0x10);
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar2,&local_res8);
  }
  cVar6 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar6 != '\0') {
    cVar6 = RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    while (cVar6 != '\0') {
      if ((char)param_1[9] == '\0') {
        pcVar8 = "";
      }
      else {
        pcVar8 = (char *)(**(code **)(*(longlong *)param_1[5] + 0x38))();
      }
      iVar7 = physx::shdfnd::stricmp(pcVar8,"PxShapeRef");
      local_res8 = 0;
      if (iVar7 == 0) {
        cVar6 = readReference<physx::PxMaterial>(lVar3,plVar4,&local_res8);
        if (cVar6 == '\0') {
          *(undefined1 *)param_1[10] = 1;
        }
        if (local_res8 != 0) {
          (**(code **)(*param_2 + 0xb8))(param_2);
        }
      }
      else {
        local_38 = 0;
        local_30 = 0;
        parseShape<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
                  (param_1,&local_res8,&local_38);
        lVar5 = local_38;
        lVar2 = local_res8;
        if ((int)local_30 != 0) {
          local_res8 = CONCAT71(local_res8._1_7_,0xb);
          lVar9 = (**(code **)(*(longlong *)param_1[2] + 0xd8))
                            ((longlong *)param_1[2],lVar2,local_38,local_30 & 0xffff,1,&local_res8);
          if (lVar9 != 0) {
            readComplexObj<physx::PxShape,physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>
                      (param_1,lVar9);
            (**(code **)(*param_2 + 0xb8))(param_2,lVar9);
            (**(code **)(*plVar4 + 8))(plVar4,lVar9,0);
          }
        }
        plVar10 = (longlong *)(**(code **)(*(longlong *)param_1[7] + 0x18))();
        (**(code **)(*plVar10 + 0x10))(plVar10,lVar2);
        if ((((local_30 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_30)) && (lVar5 != 0)) {
          pPVar11 = physx::shdfnd::getAllocator();
          (**(code **)(*(longlong *)pPVar11 + 0x10))(pPVar11,lVar5);
        }
      }
      if ((char)param_1[9] == '\0') break;
      cVar6 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  return;
}



// FUNCTION 143285a50 simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<441,physx::PxJoint,float>_const_> body=178 status=ok
// SIG undefined simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<441,physx::PxJoint,float>_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxD6Joint>::
     simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<441,physx::PxJoint,float>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char *pcVar4;
  float local_res8 [2];
  float local_res18 [4];
  
  (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[2],local_res8,local_res18);
  if (*(char *)(param_3 + 8) != '\0') {
    local_res18[0] = local_res8[0];
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) == 0) {
    pcVar4 = "bad__repx__name";
  }
  else {
    pcVar4 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  puVar2 = (undefined8 *)param_1[3];
  plVar3 = (longlong *)param_1[1];
  toStream<double>(puVar2,&DAT_145af391c,(double)local_res18[0]);
  local_res8[0] = (float)((uint)local_res8[0] & 0xffffff00);
  (**(code **)*puVar2)(puVar2,local_res8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,pcVar4,puVar2[4]);
  puVar2[3] = 0;
  return;
}



// FUNCTION 143285b10 simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<462,physx::PxD6Joint,physx::PxVec3>_const_> body=221 status=ok
// SIG undefined simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<462,physx::PxD6Joint,physx::PxVec3>_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxD6Joint>::
     simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<462,physx::PxD6Joint,physx::PxVec3>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [8];
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[2],local_28,&local_18);
  lVar1 = *param_1;
  puVar4 = local_28;
  if (*(char *)(param_3 + 8) == '\0') {
    puVar4 = &local_18;
  }
  local_18 = *puVar4;
  local_14 = puVar4[1];
  local_10 = puVar4[2];
  if (*(int *)(lVar1 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  puVar2 = (undefined8 *)param_1[3];
  plVar3 = (longlong *)param_1[1];
  physx::operator<<(puVar2,&local_18);
  local_res8[0] = 0;
  (**(code **)*puVar2)(puVar2,local_res8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,pcVar5,puVar2[4]);
  puVar2[3] = 0;
  return;
}



// FUNCTION 143285bf0 simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<59,physx::PxRigidDynamic,unsigned_int>_const_> body=203 status=ok
// SIG undefined simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<59,physx::PxRigidDynamic,unsigned_int>_const_>(void)

void physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>::
     simpleProperty<physx::Vd::PxPvdRangePropertyAccessor<59,physx::PxRigidDynamic,unsigned_int>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  ulong uVar3;
  byte *pbVar4;
  char *pcVar5;
  char *local_res8;
  char *local_res20;
  
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar5 = "bad__repx__name";
    }
    else {
      pcVar5 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar5,&local_res8)
    ;
    if (((cVar2 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      local_res20 = local_res8;
      uVar3 = strtoul(local_res8,&local_res20,10);
      pbVar4 = (byte *)(**(code **)(*(longlong *)param_1[6] + 0x178))
                                 ((longlong *)param_1[6],&local_res8);
      if (((*pbVar4 & 1) == 0) || (1 < *(int *)(*(longlong *)(param_3 + 0x10) + 8) - 0x2bU)) {
        Vd::PxPvdRangePropertyAccessor<59,physx::PxRigidDynamic,unsigned_int>::set
                  (param_3,param_1[6],uVar3);
      }
    }
  }
  return;
}



// FUNCTION 143285cc0 simpleProperty<physx::PxRepXPropertyAccessor<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>_const_> body=188 status=ok
// SIG undefined simpleProperty<physx::PxRepXPropertyAccessor<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>_const_>(void)

void physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>::
     simpleProperty<physx::PxRepXPropertyAccessor<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined1 local_res8 [8];
  char *local_res20;
  
  local_res20 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar5 = "bad__repx__name";
    }
    else {
      pcVar5 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                      ((longlong *)param_1[5],pcVar5,&local_res20);
    if ((((cVar2 != '\0') && (local_res20 != (char *)0x0)) && (*local_res20 != '\0')) &&
       ((longlong *)param_1[4] != (longlong *)0x0)) {
      uVar3 = (**(code **)(*(longlong *)param_1[4] + 8))();
      pbVar4 = (byte *)(**(code **)(*(longlong *)param_1[6] + 0x178))
                                 ((longlong *)param_1[6],local_res8);
      if (((*pbVar4 & 1) == 0) || (1 < *(int *)(param_3 + 0x10) - 0x2bU)) {
        (**(code **)(param_3 + 0x20))(param_1[6],uVar3);
      }
    }
  }
  return;
}



// FUNCTION 143285d80 simpleProperty<physx::PxRepXPropertyAccessor<26,physx::PxActor,unsigned_char,unsigned_char>_const_> body=195 status=ok
// SIG undefined simpleProperty<physx::PxRepXPropertyAccessor<26,physx::PxActor,unsigned_char,unsigned_char>_const_>(void)

void physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>::
     simpleProperty<physx::PxRepXPropertyAccessor<26,physx::PxActor,unsigned_char,unsigned_char>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  ulong uVar3;
  byte *pbVar4;
  char *pcVar5;
  char *local_res8;
  char *local_res20;
  
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar5 = "bad__repx__name";
    }
    else {
      pcVar5 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar5,&local_res8)
    ;
    if (((cVar2 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      local_res20 = local_res8;
      uVar3 = strtoul(local_res8,&local_res20,10);
      pbVar4 = (byte *)(**(code **)(*(longlong *)param_1[6] + 0x178))
                                 ((longlong *)param_1[6],&local_res8);
      if (((*pbVar4 & 1) == 0) || (1 < *(int *)(param_3 + 0x10) - 0x2bU)) {
        (**(code **)(param_3 + 0x20))(param_1[6],uVar3 & 0xff);
      }
    }
  }
  return;
}



// FUNCTION 143285e50 simpleProperty<physx::PxRepXPropertyAccessor<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_> body=183 status=ok
// SIG undefined simpleProperty<physx::PxRepXPropertyAccessor<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
     simpleProperty<physx::PxRepXPropertyAccessor<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  char *local_res8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar3 = "bad__repx__name";
    }
    else {
      pcVar3 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar3,&local_res8)
    ;
    if (((cVar2 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      stringToType<physx::PxTransform>(local_res8,&local_48);
      local_28 = local_48;
      uStack_20 = uStack_40;
      local_18 = local_38;
      local_10 = local_30;
      local_14 = local_34;
      (**(code **)(param_3 + 0x20))(param_1[6],&local_28);
    }
  }
  return;
}



// FUNCTION 143285f10 simpleProperty<physx::PxRepXPropertyAccessor<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_> body=217 status=ok
// SIG undefined simpleProperty<physx::PxRepXPropertyAccessor<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>(void)

void physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>::
     simpleProperty<physx::PxRepXPropertyAccessor<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  char *local_res8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar4 = "bad__repx__name";
    }
    else {
      pcVar4 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar4,&local_res8)
    ;
    if (((cVar2 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      stringToType<physx::PxTransform>(local_res8,&local_48);
      pbVar3 = (byte *)(**(code **)(*(longlong *)param_1[6] + 0x178))
                                 ((longlong *)param_1[6],&local_res8);
      if (((*pbVar3 & 1) == 0) || (1 < *(int *)(param_3 + 0x10) - 0x2bU)) {
        local_28 = local_48;
        uStack_20 = uStack_40;
        local_18 = local_38;
        local_10 = local_30;
        local_14 = local_34;
        (**(code **)(param_3 + 0x20))(param_1[6],&local_28);
      }
    }
  }
  return;
}



// FUNCTION 143285ff0 simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_> body=182 status=ok
// SIG undefined simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_>(void)

void physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>::
     simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *local_res8;
  undefined1 local_res20 [8];
  
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar4 = "bad__repx__name";
    }
    else {
      pcVar4 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar4,&local_res8)
    ;
    if (((cVar2 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      uVar5 = strToFloat(local_res8,local_res20);
      pbVar3 = (byte *)(**(code **)(*(longlong *)param_1[6] + 0x178))
                                 ((longlong *)param_1[6],&local_res8);
      if (((*pbVar3 & 1) == 0) || (1 < *(int *)(param_3 + 0x10) - 0x2bU)) {
        (**(code **)(param_3 + 0x20))(param_1[6],uVar5);
      }
    }
  }
  return;
}



// FUNCTION 1432860b0 simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_> body=180 status=ok
// SIG undefined simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxArticulationLink>::
     simpleProperty<physx::PxRepXPropertyAccessor<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar4 = (undefined4 *)(**(code **)(param_3 + 0x18))(&local_18,param_1[2]);
  lVar1 = *param_1;
  local_18 = *puVar4;
  local_14 = puVar4[1];
  local_10 = puVar4[2];
  if (*(int *)(lVar1 + 0x10) == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  puVar2 = (undefined8 *)param_1[3];
  plVar3 = (longlong *)param_1[1];
  physx::operator<<(puVar2,&local_18);
  local_res8[0] = 0;
  (**(code **)*puVar2)(puVar2,local_res8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,pcVar5,puVar2[4]);
  puVar2[3] = 0;
  return;
}



// FUNCTION 143286170 simpleProperty<physx::PxRepXPropertyAccessor<58,physx::PxRigidDynamic,float,float>_const_> body=209 status=ok
// SIG undefined simpleProperty<physx::PxRepXPropertyAccessor<58,physx::PxRigidDynamic,float,float>_const_>(void)

void physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>::
     simpleProperty<physx::PxRepXPropertyAccessor<58,physx::PxRigidDynamic,float,float>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_res8;
  undefined1 local_res20 [8];
  
  local_res8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar5 = "bad__repx__name";
    }
    else {
      pcVar5 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar5,&local_res8)
    ;
    if (((cVar3 != '\0') && (local_res8 != (char *)0x0)) && (*local_res8 != '\0')) {
      uVar6 = strToFloat(local_res8,local_res20);
      pbVar4 = (byte *)(**(code **)(*(longlong *)param_1[6] + 0x178))
                                 ((longlong *)param_1[6],&local_res8);
      if (((*pbVar4 & 1) == 0) || (1 < *(int *)(param_3 + 0x10) - 0x2bU)) {
        plVar2 = (longlong *)param_1[6];
        (**(code **)(*plVar2 + 0x178))(plVar2,&local_res8);
        if (((ulonglong)local_res8 & 1) == 0) {
          (**(code **)(param_3 + 0x20))(plVar2,uVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 143286250 simpleProperty<physx::PxRepXPropertyAccessor<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>_const_> body=302 status=ok
// SIG undefined simpleProperty<physx::PxRepXPropertyAccessor<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxArticulationJoint>::
     simpleProperty<physx::PxRepXPropertyAccessor<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *local_res8;
  char *local_res20;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  local_res20 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar3 = "bad__repx__name";
    }
    else {
      pcVar3 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                      ((longlong *)param_1[5],pcVar3,&local_res20);
    if (((cVar2 != '\0') && (local_res20 != (char *)0x0)) && (*local_res20 != '\0')) {
      local_res8 = local_res20;
      uVar4 = strToFloat(local_res20,&local_res8);
      uVar5 = strToFloat(local_res8,&local_res8);
      uVar6 = strToFloat(local_res8,&local_res8);
      local_4c = strToFloat(local_res8,&local_res8);
      local_58 = uVar4;
      local_54 = uVar5;
      local_50 = uVar6;
      (**(code **)(param_3 + 0x20))(param_1[6],&local_58);
    }
  }
  return;
}



// FUNCTION 143286380 simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_> body=247 status=ok
// SIG undefined simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxShape>::
     simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  char *local_res8;
  char *local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  local_18 = 0;
  local_res20 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) == 0) {
      pcVar4 = "bad__repx__name";
    }
    else {
      pcVar4 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
      ;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                      ((longlong *)param_1[5],pcVar4,&local_res20);
    if (((cVar2 != '\0') && (local_res20 != (char *)0x0)) && (*local_res20 != '\0')) {
      local_res8 = local_res20;
      uVar3 = strtoul(local_res20,&local_res8,10);
      local_18 = CONCAT44(local_18._4_4_,uVar3);
      uVar3 = strtoul(local_res8,&local_res8,10);
      local_18._4_4_ = uVar3;
      uVar3 = strtoul(local_res8,&local_res8,10);
      uStack_10 = CONCAT44(uStack_10._4_4_,uVar3);
      uVar3 = strtoul(local_res8,(char **)0x0,10);
      uStack_10 = CONCAT44(uVar3,(int)uStack_10);
      (**(code **)(param_3 + 0x20))(param_1[6],&local_18);
    }
  }
  return;
}



// FUNCTION 143286480 simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_> body=276 status=ok
// SIG undefined simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxShape>::
     simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar4 = (undefined4 *)(**(code **)(param_3 + 0x18))(&local_18,param_1[2]);
  lVar1 = *param_1;
  local_18 = *puVar4;
  uStack_14 = puVar4[1];
  uStack_10 = puVar4[2];
  uStack_c = puVar4[3];
  if (*(int *)(lVar1 + 0x10) == 0) {
    pcVar6 = "bad__repx__name";
  }
  else {
    pcVar6 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  puVar2 = (undefined8 *)param_1[3];
  plVar3 = (longlong *)param_1[1];
  puVar5 = (undefined8 *)physx::operator<<(puVar2,local_18);
  (**(code **)*puVar5)(puVar5,&DAT_145af3920,1);
  puVar5 = (undefined8 *)physx::operator<<(puVar5,uStack_14);
  (**(code **)*puVar5)(puVar5,&DAT_145af3920,1);
  puVar5 = (undefined8 *)physx::operator<<(puVar5,uStack_10);
  (**(code **)*puVar5)(puVar5,&DAT_145af3920,1);
  physx::operator<<(puVar5,uStack_c);
  local_res8[0] = 0;
  (**(code **)*puVar2)(puVar2,local_res8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,pcVar6,puVar2[4]);
  puVar2[3] = 0;
  return;
}



// FUNCTION 1432865a0 stringToType<physx::PxTransform> body=171 status=ok
// SIG undefined stringToType<physx::PxTransform>(void)

void physx::Sn::stringToType<physx::PxTransform>(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *local_res8 [4];
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    local_res8[0] = param_1;
    uVar1 = strToFloat(param_1,local_res8);
    *param_2 = uVar1;
    uVar1 = strToFloat(local_res8[0],local_res8);
    param_2[1] = uVar1;
    uVar1 = strToFloat(local_res8[0],local_res8);
    param_2[2] = uVar1;
    uVar1 = strToFloat(local_res8[0],local_res8);
    param_2[3] = uVar1;
    uVar1 = strToFloat(local_res8[0],local_res8);
    param_2[4] = uVar1;
    uVar1 = strToFloat(local_res8[0],local_res8);
    param_2[5] = uVar1;
    uVar1 = strToFloat(local_res8[0],local_res8);
    param_2[6] = uVar1;
  }
  return;
}



// FUNCTION 143286650 toStream<double> body=144 status=ok
// SIG undefined toStream<double>(void)

undefined8 * physx::toStream<double>(undefined8 *param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char local_98 [144];
  
  ::_guard_xfg_dispatch_icall_nop(local_98,0,0x80);
  physx::shdfnd::snprintf(local_98,0x80,param_2);
  if (local_98[0] != '\0') {
    lVar2 = -1;
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while (local_98[lVar1] != '\0');
    (**(code **)*param_1)(param_1,local_98);
  }
  return param_1;
}



// FUNCTION 1432866e0 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_> body=266 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>(void)

void physx::PxArticulationLinkGeneratedInfo::
     visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>
               (undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_58 = param_2[4];
  local_70 = param_2[1];
  local_50 = param_2[5];
  local_48 = param_2[6];
  local_40 = param_2[7];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_28 = param_2[10];
  local_20 = param_2[0xb];
  local_18 = param_2[0xc];
  uVar1 = PxRigidBodyGeneratedInfo::
          visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>
                    (local_68,&local_78);
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_40 = param_2[7];
  local_58 = param_2[4];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_70 = param_2[1];
  local_28 = param_2[10];
  local_50 = param_2[5];
  local_20 = param_2[0xb];
  local_48 = param_2[6];
  local_18 = param_2[0xc];
  PxRigidBodyGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>
            (param_1,&local_78,uVar1);
  return;
}



// FUNCTION 1432867f0 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_> body=126 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>(void)

void physx::PxRigidActorGeneratedInfo::
     visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>
               (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_70 = param_2[1];
  local_58 = param_2[4];
  local_50 = param_2[5];
  local_48 = param_2[6];
  local_40 = param_2[7];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_28 = param_2[10];
  local_20 = param_2[0xb];
  local_18 = param_2[0xc];
  PxActorGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>
            (local_68,&local_78);
  return;
}



// FUNCTION 143286870 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_> body=304 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>(void)

int physx::PxRigidBodyGeneratedInfo::
    visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>
              (longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_58 = param_2[4];
  local_70 = param_2[1];
  local_50 = param_2[5];
  local_48 = param_2[6];
  local_40 = param_2[7];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_28 = param_2[10];
  local_20 = param_2[0xb];
  local_18 = param_2[0xc];
  iVar1 = PxRigidActorGeneratedInfo::
          visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>
                    (local_68,&local_78);
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_40 = param_2[7];
  local_58 = param_2[4];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_70 = param_2[1];
  local_28 = param_2[10];
  local_50 = param_2[5];
  local_20 = param_2[0xb];
  local_48 = param_2[6];
  local_18 = param_2[0xc];
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (&local_78,param_1 + 0xf0,iVar1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::operator()
            (&local_78,param_1 + 0x110,iVar1 + 1);
  return iVar1 + 3;
}



// FUNCTION 1432869a0 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6JointDrive>_>_> body=170 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6JointDrive>_>_>(void)

int physx::PxD6JointDriveGeneratedInfo::
    visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6JointDrive>_>_>
              (longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_58 = param_2[4];
  local_70 = param_2[1];
  local_50 = param_2[5];
  local_48 = param_2[6];
  local_40 = param_2[7];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_28 = param_2[10];
  local_20 = param_2[0xb];
  local_18 = param_2[0xc];
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_78,param_1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_78,param_1 + 0x20,param_3 + 1);
  return param_3 + 2;
}



// FUNCTION 143286a50 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxJointAngularLimitPair>_>_> body=126 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxJointAngularLimitPair>_>_>(void)

void physx::PxJointAngularLimitPairGeneratedInfo::
     visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxJointAngularLimitPair>_>_>
               (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_70 = param_2[1];
  local_58 = param_2[4];
  local_50 = param_2[5];
  local_48 = param_2[6];
  local_40 = param_2[7];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_28 = param_2[10];
  local_20 = param_2[0xb];
  local_18 = param_2[0xc];
  PxJointLimitParametersGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxJointAngularLimitPair>_>_>
            (local_68,&local_78);
  return;
}



// FUNCTION 143286ad0 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>_> body=266 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>_>(void)

void physx::PxParticleFluidGeneratedInfo::
     visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>_>
               (undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_58 = param_2[4];
  local_70 = param_2[1];
  local_50 = param_2[5];
  local_48 = param_2[6];
  local_40 = param_2[7];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_28 = param_2[10];
  local_20 = param_2[0xb];
  local_18 = param_2[0xc];
  uVar1 = PxRigidActorGeneratedInfo::
          visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>
                    (local_68,&local_78);
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_40 = param_2[7];
  local_58 = param_2[4];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_70 = param_2[1];
  local_28 = param_2[10];
  local_50 = param_2[5];
  local_20 = param_2[0xb];
  local_48 = param_2[6];
  local_18 = param_2[0xc];
  PxParticleBaseGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>_>
            (param_1,&local_78,uVar1);
  return;
}



// FUNCTION 143286be0 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_> body=126 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>(void)

void physx::PxRigidActorGeneratedInfo::
     visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>
               (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_70 = param_2[1];
  local_58 = param_2[4];
  local_50 = param_2[5];
  local_48 = param_2[6];
  local_40 = param_2[7];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_28 = param_2[10];
  local_20 = param_2[0xb];
  local_18 = param_2[0xc];
  PxActorGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>
            (local_68,&local_78);
  return;
}



// FUNCTION 143286c60 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_> body=304 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>(void)

int physx::PxRigidBodyGeneratedInfo::
    visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>
              (longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_58 = param_2[4];
  local_70 = param_2[1];
  local_50 = param_2[5];
  local_48 = param_2[6];
  local_40 = param_2[7];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_28 = param_2[10];
  local_20 = param_2[0xb];
  local_18 = param_2[0xc];
  iVar1 = PxRigidActorGeneratedInfo::
          visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>
                    (local_68,&local_78);
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_40 = param_2[7];
  local_58 = param_2[4];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_70 = param_2[1];
  local_28 = param_2[10];
  local_50 = param_2[5];
  local_20 = param_2[0xb];
  local_48 = param_2[6];
  local_18 = param_2[0xc];
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
  operator()<33,physx::PxRigidActor,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (&local_78,param_1 + 0xf0,iVar1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::operator()
            (&local_78,param_1 + 0x110,iVar1 + 1);
  return iVar1 + 3;
}



// FUNCTION 143286d90 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_> body=266 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>(void)

void physx::PxRigidDynamicGeneratedInfo::
     visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>
               (undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_58 = param_2[4];
  local_70 = param_2[1];
  local_50 = param_2[5];
  local_48 = param_2[6];
  local_40 = param_2[7];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_28 = param_2[10];
  local_20 = param_2[0xb];
  local_18 = param_2[0xc];
  uVar1 = PxRigidBodyGeneratedInfo::
          visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>
                    (local_68,&local_78);
  local_78 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_40 = param_2[7];
  local_58 = param_2[4];
  local_38 = param_2[8];
  local_30 = *(undefined1 *)(param_2 + 9);
  local_70 = param_2[1];
  local_28 = param_2[10];
  local_50 = param_2[5];
  local_20 = param_2[0xb];
  local_48 = param_2[6];
  local_18 = param_2[0xc];
  PxRigidBodyGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>
            (param_1,&local_78,uVar1);
  return;
}



// FUNCTION 143286ea0 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_> body=209 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>(void)

void physx::PxRigidBodyGeneratedInfo::
     visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>
               (undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = *param_2;
  local_40 = param_2[1];
  local_38 = param_2[2];
  local_30 = param_2[3];
  local_28 = param_2[4];
  local_20 = param_2[5];
  local_18 = param_2[6];
  uVar1 = PxActorGeneratedInfo::
          visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>
                    (param_1,&local_48);
  local_48 = *param_2;
  local_40 = param_2[1];
  local_38 = param_2[2];
  local_30 = param_2[3];
  local_28 = param_2[4];
  local_20 = param_2[5];
  local_18 = param_2[6];
  PxRigidActorGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>
            (param_1,&local_48,uVar1);
  return;
}



// FUNCTION 143286f80 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>_> body=209 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>_>(void)

void physx::PxParticleFluidGeneratedInfo::
     visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>_>
               (undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = *param_2;
  local_40 = param_2[1];
  local_38 = param_2[2];
  local_30 = param_2[3];
  local_28 = param_2[4];
  local_20 = param_2[5];
  local_18 = param_2[6];
  uVar1 = PxActorGeneratedInfo::
          visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>
                    (param_1,&local_48);
  local_48 = *param_2;
  local_40 = param_2[1];
  local_38 = param_2[2];
  local_30 = param_2[3];
  local_28 = param_2[4];
  local_20 = param_2[5];
  local_18 = param_2[6];
  PxParticleBaseGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>_>
            (param_1,&local_48,uVar1);
  return;
}



// FUNCTION 143287060 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>_> body=220 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>_>(void)

int physx::PxArticulationGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(param_2,param_1 + 0x18,param_3 + 1)
  ;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x38,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(param_2,param_1 + 0x58,param_3 + 3)
  ;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(param_2,param_1 + 0x78,param_3 + 4)
  ;
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<97,physx::PxArticulation,unsigned_int>(param_2,param_1 + 0x98,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xe0,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x100,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x120,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::operator()
            (param_2,param_1 + 0x140,param_3 + 10);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>
            (param_2,param_1 + 0x160,param_3 + 0xb);
  return param_3 + 0xf;
}



// FUNCTION 143287140 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>_> body=430 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>_>(void)

int physx::PxArticulationJointGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>_>
              (undefined8 *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)param_1;
  uStack_2c = *(undefined4 *)((longlong)param_1 + 4);
  uStack_28 = *(undefined4 *)(param_1 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  local_20 = *(undefined4 *)(param_1 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_18 = *(undefined4 *)(param_1 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_1 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_2,*param_1);
  local_34 = 0;
  if (*(undefined4 **)(param_2 + 0x60) != (undefined4 *)0x0) {
    local_34 = **(undefined4 **)(param_2 + 0x60);
  }
  piVar1 = *(int **)(param_2 + 0x58);
  iVar2 = 0x48;
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  simpleProperty<physx::PxRepXPropertyAccessor<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>
            (param_2,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<73,physx::PxArticulationJoint,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (param_2,param_1 + 4,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>
            (param_2,param_1 + 8,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0xc,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<76,physx::PxArticulationJoint,enum_physx::PxArticulationJointDriveType::Enum,enum_physx::PxArticulationJointDriveType::Enum>
            (param_2,param_1 + 0x10,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x14,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x18,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x1c,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x20,param_3 + 8);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<81,physx::PxArticulationJoint,float>(param_2,param_1 + 0x24,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x2a,param_3 + 10);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x2e,param_3 + 0xb);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x32,param_3 + 0xc);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x36,param_3 + 0xd);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<86,physx::PxArticulationJoint,float>(param_2,param_1 + 0x3a,param_3 + 0xe);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x40,param_3 + 0xf);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x44,param_3 + 0x10);
  return param_3 + 0x12;
}



// FUNCTION 1432872f0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_> body=125 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>(void)

int physx::PxActorGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>
            (param_2,param_1 + 0x18,param_3 + 1);
  FUN_14327b660(param_2,param_1 + 0x38,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<26,physx::PxActor,unsigned_char,unsigned_char>(param_2,param_1 + 0x58,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<26,physx::PxActor,unsigned_char,unsigned_char>(param_2,param_1 + 0x78,param_3 + 4);
  FUN_14327c350(param_2,param_1 + 0x98,param_3 + 5);
  return param_3 + 8;
}



// FUNCTION 143287370 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_> body=210 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>(void)

int physx::PxRigidBodyGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<38,physx::PxRigidBody,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (param_2,param_1 + 0x150);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x170,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x1a8,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x1e0,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x200,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<45,physx::PxRigidBody,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>_>
            (param_2,param_1 + 0x220,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x240,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x260,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x280,param_3 + 10);
  return param_3 + 0xb;
}



// FUNCTION 143287450 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>_> body=677 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>_>(void)

int physx::PxClothGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>_>
              (longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 local_b8 [4];
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  PxClothStretchConfigGeneratedInfo local_90 [136];
  
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>::
  operator()<149,physx::PxCloth,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>_>
            (param_2,param_1 + 0x108,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>::
  operator()<151,physx::PxCloth,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (param_2,param_1 + 0x140,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x160,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x198,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x1b8,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x1d8,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x1f8,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x230,param_3 + 0xb);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x250,param_3 + 0xc);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x270,param_3 + 0xd);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x2a8,param_3 + 0xf);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x2c8,param_3 + 0x10);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x2e8,param_3 + 0x11);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x308,param_3 + 0x12);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>::
  operator()<167,physx::PxCloth,physx::PxClothMotionConstraintConfig_const_&___ptr64,physx::PxClothMotionConstraintConfig>
            (param_2,param_1 + 0x328,param_3 + 0x13);
  ::_guard_xfg_dispatch_icall_nop(local_90,0,0x80);
  physx::PxClothStretchConfigGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_90);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>::
  indexedProperty<168,physx::PxCloth,enum_physx::PxClothFabricPhaseType::Enum,physx::PxClothStretchConfig,physx::PxClothStretchConfigGeneratedInfo>
            (param_2,param_3 + 0x14,param_1 + 0x348,&PTR_s_eVERTICAL_1467c9a80,local_90);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxCloth>_>::
  operator()<169,physx::PxCloth,physx::PxClothTetherConfig_const_&___ptr64,physx::PxClothTetherConfig>
            (param_2,param_1 + 0x368,param_3 + 0x15);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x388,param_3 + 0x16);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x3a8,param_3 + 0x17);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x3c8,param_3 + 0x18);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 1000,param_3 + 0x19);
  local_b0 = *(undefined4 *)(param_1 + 0x408);
  uStack_ac = *(undefined4 *)(param_1 + 0x40c);
  uStack_a8 = *(undefined4 *)(param_1 + 0x410);
  uStack_a4 = *(undefined4 *)(param_1 + 0x414);
  local_a0 = *(undefined4 *)(param_1 + 0x418);
  uStack_9c = *(undefined4 *)(param_1 + 0x41c);
  uStack_98 = *(undefined4 *)(param_1 + 0x420);
  uStack_94 = *(undefined4 *)(param_1 + 0x424);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x408));
  local_b4 = 0x134;
  if (*(int **)(param_2 + 0x60) != (int *)0x0) {
    local_b4 = **(int **)(param_2 + 0x60) + 0x134;
  }
  iVar2 = 0xae;
  piVar1 = *(int **)(param_2 + 0x58);
  local_b8[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxShape>::
  simpleProperty<physx::PxRepXPropertyAccessor<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>_const_>
            (param_2,iVar2,local_b8);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x428,param_3 + 0x1b);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x448,param_3 + 0x1c);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x468,param_3 + 0x1d);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x488,param_3 + 0x1e);
  return param_3 + 0x21;
}



// FUNCTION 143287700 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_> body=373 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_>(void)

int physx::PxD6JointGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_>
              (longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 local_res18 [16];
  undefined1 local_b8 [4];
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90 [136];
  
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
  indexedProperty<453,physx::PxD6Joint,enum_physx::PxD6Axis::Enum,enum_physx::PxD6Motion::Enum>
            (param_2,param_3,param_1 + 0x1d8,&PTR_DAT_1467c8af0,local_res18);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
  operator()<457,physx::PxD6Joint,physx::PxJointLinearLimit_const_&___ptr64,physx::PxJointLinearLimit>
            (param_2,param_1 + 0x240,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
  operator()<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>
            (param_2,param_1 + 0x260,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
  operator()<459,physx::PxD6Joint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone>
            (param_2,param_1 + 0x280,param_3 + 6);
  ::_guard_xfg_dispatch_icall_nop(local_90,0,0x80);
  PxD6JointDriveGeneratedInfo::PxD6JointDriveGeneratedInfo(local_90);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
  indexedProperty<460,physx::PxD6Joint,enum_physx::PxD6Drive::Enum,physx::PxD6JointDrive,physx::PxD6JointDriveGeneratedInfo>
            (param_2,param_3 + 7,param_1 + 0x2a0,&PTR_DAT_1467c8df0,local_90);
  local_b0 = *(undefined4 *)(param_1 + 0x2c0);
  uStack_ac = *(undefined4 *)(param_1 + 0x2c4);
  uStack_a8 = *(undefined4 *)(param_1 + 0x2c8);
  uStack_a4 = *(undefined4 *)(param_1 + 0x2cc);
  local_a0 = *(undefined4 *)(param_1 + 0x2d0);
  uStack_9c = *(undefined4 *)(param_1 + 0x2d4);
  uStack_98 = *(undefined4 *)(param_1 + 0x2d8);
  uStack_94 = *(undefined4 *)(param_1 + 0x2dc);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x2c0));
  local_b4 = 0x18c;
  if (*(int **)(param_2 + 0x60) != (int *)0x0) {
    local_b4 = **(int **)(param_2 + 0x60) + 0x18c;
  }
  iVar2 = 0x1cd;
  piVar1 = *(int **)(param_2 + 0x58);
  local_b8[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReaderBase<physx::PxD6Joint>::
  simpleProperty<physx::PxRepXPropertyAccessor<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>_const_>
            (param_2,iVar2,local_b8);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
  operator()<462,physx::PxD6Joint,physx::PxVec3>(param_2,param_1 + 0x2e0,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x310,param_3 + 10);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x330,param_3 + 0xb);
  return param_3 + 0xd;
}



// FUNCTION 143287880 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_> body=219 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_>(void)

int physx::PxJointGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 local_res18 [16];
  
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
  operator()<436,physx::PxJoint,physx::PxRigidActor_*___ptr64>(param_2,param_1);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
  indexedProperty<437,physx::PxJoint,enum_physx::PxJointActorIndex::Enum,physx::PxTransform>
            (param_2,param_3 + 1,param_1 + 0x30,&PTR_s_eACTOR0_1467c9ad0,local_res18);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
  operator()<441,physx::PxJoint,float>(param_2,param_1 + 0x98,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxD6Joint>_>::
  operator()<442,physx::PxJoint,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>_>
            (param_2,param_1 + 200,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xe8,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x108,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x128,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x148,param_3 + 10);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>
            (param_2,param_1 + 0x180,param_3 + 0xc);
  return param_3 + 0xf;
}



// FUNCTION 143287960 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxJointAngularLimitPair>_>_> body=121 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxJointAngularLimitPair>_>_>(void)

int physx::PxJointLimitParametersGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxJointAngularLimitPair>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x20,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x40,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x60,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x80,param_3 + 4);
  return param_3 + 5;
}



// FUNCTION 1432879e0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>_> body=267 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>_>(void)

int physx::PxParticleBaseGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xf0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x110,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x130,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x150,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x170,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 400,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>::
  operator()<189,physx::PxParticleBase,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
            (param_2,param_1 + 0x1b0,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x200,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x220,param_3 + 10);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x240,param_3 + 0xb);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x260,param_3 + 0xc);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxParticleFluid>_>::
  operator()<197,physx::PxParticleBase,physx::PxMetaDataPlane,physx::PxMetaDataPlane>
            (param_2,param_1 + 0x298,param_3 + 0xe);
  return param_3 + 0xf;
}



// FUNCTION 143287af0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_> body=125 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>(void)

int physx::PxActorGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
  operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>
            (param_2,param_1 + 0x18,param_3 + 1);
  FUN_14327b660(param_2,param_1 + 0x38,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
  operator()<26,physx::PxActor,unsigned_char,unsigned_char>(param_2,param_1 + 0x58,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
  operator()<27,physx::PxActor,unsigned_char,unsigned_char>(param_2,param_1 + 0x78,param_3 + 4);
  FUN_14327c350(param_2,param_1 + 0x98,param_3 + 5);
  return param_3 + 8;
}



// FUNCTION 143287b70 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_> body=477 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>(void)

int physx::PxRigidBodyGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>
              (longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
  operator()<38,physx::PxRigidBody,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (param_2,param_1 + 0x150);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
  operator()<39,physx::PxRigidBody,float,float>(param_2,param_1 + 0x170,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x1a8,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x1e0,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x200,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<45,physx::PxRigidBody,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>_>
            (param_2,param_1 + 0x220,param_3 + 7);
  local_30 = *(undefined4 *)(param_1 + 0x240);
  uStack_2c = *(undefined4 *)(param_1 + 0x244);
  uStack_28 = *(undefined4 *)(param_1 + 0x248);
  uStack_24 = *(undefined4 *)(param_1 + 0x24c);
  local_20 = *(undefined4 *)(param_1 + 0x250);
  uStack_1c = *(undefined4 *)(param_1 + 0x254);
  uStack_18 = *(undefined4 *)(param_1 + 600);
  uStack_14 = *(undefined4 *)(param_1 + 0x25c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x240));
  local_34 = 0xa0;
  if (*(int **)(param_2 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_2 + 0x60) + 0xa0;
  }
  iVar2 = 0x2e;
  piVar1 = *(int **)(param_2 + 0x58);
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_>
            (param_2,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  local_30 = *(undefined4 *)(param_1 + 0x260);
  uStack_2c = *(undefined4 *)(param_1 + 0x264);
  uStack_28 = *(undefined4 *)(param_1 + 0x268);
  uStack_24 = *(undefined4 *)(param_1 + 0x26c);
  local_20 = *(undefined4 *)(param_1 + 0x270);
  uStack_1c = *(undefined4 *)(param_1 + 0x274);
  uStack_18 = *(undefined4 *)(param_1 + 0x278);
  uStack_14 = *(undefined4 *)(param_1 + 0x27c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x260));
  local_34 = 0xa4;
  if (*(int **)(param_2 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_2 + 0x60) + 0xa4;
  }
  iVar2 = 0x2f;
  piVar1 = *(int **)(param_2 + 0x58);
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_>
            (param_2,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  local_30 = *(undefined4 *)(param_1 + 0x280);
  uStack_2c = *(undefined4 *)(param_1 + 0x284);
  uStack_28 = *(undefined4 *)(param_1 + 0x288);
  uStack_24 = *(undefined4 *)(param_1 + 0x28c);
  local_20 = *(undefined4 *)(param_1 + 0x290);
  uStack_1c = *(undefined4 *)(param_1 + 0x294);
  uStack_18 = *(undefined4 *)(param_1 + 0x298);
  uStack_14 = *(undefined4 *)(param_1 + 0x29c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x280));
  local_34 = 0xa8;
  if (*(int **)(param_2 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_2 + 0x60) + 0xa8;
  }
  iVar2 = 0x30;
  piVar1 = *(int **)(param_2 + 0x58);
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_>
            (param_2,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  return param_3 + 0xb;
}



// FUNCTION 143287d50 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_> body=815 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>(void)

int physx::PxRigidDynamicGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>_>
              (longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = *(undefined4 *)(param_1 + 0x2a0);
  uStack_2c = *(undefined4 *)(param_1 + 0x2a4);
  uStack_28 = *(undefined4 *)(param_1 + 0x2a8);
  uStack_24 = *(undefined4 *)(param_1 + 0x2ac);
  local_20 = *(undefined4 *)(param_1 + 0x2b0);
  uStack_1c = *(undefined4 *)(param_1 + 0x2b4);
  uStack_18 = *(undefined4 *)(param_1 + 0x2b8);
  uStack_14 = *(undefined4 *)(param_1 + 700);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x2a0));
  local_34 = 0xb0;
  if (*(int **)(param_2 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_2 + 0x60) + 0xb0;
  }
  iVar2 = 0x33;
  piVar1 = *(int **)(param_2 + 0x58);
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_>
            (param_2,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  local_30 = *(undefined4 *)(param_1 + 0x2c0);
  uStack_2c = *(undefined4 *)(param_1 + 0x2c4);
  uStack_28 = *(undefined4 *)(param_1 + 0x2c8);
  uStack_24 = *(undefined4 *)(param_1 + 0x2cc);
  local_20 = *(undefined4 *)(param_1 + 0x2d0);
  uStack_1c = *(undefined4 *)(param_1 + 0x2d4);
  uStack_18 = *(undefined4 *)(param_1 + 0x2d8);
  uStack_14 = *(undefined4 *)(param_1 + 0x2dc);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x2c0));
  local_34 = 0xb4;
  if (*(int **)(param_2 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_2 + 0x60) + 0xb4;
  }
  iVar2 = 0x34;
  piVar1 = *(int **)(param_2 + 0x58);
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_>
            (param_2,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  local_30 = *(undefined4 *)(param_1 + 0x2e0);
  uStack_2c = *(undefined4 *)(param_1 + 0x2e4);
  uStack_28 = *(undefined4 *)(param_1 + 0x2e8);
  uStack_24 = *(undefined4 *)(param_1 + 0x2ec);
  local_20 = *(undefined4 *)(param_1 + 0x2f0);
  uStack_1c = *(undefined4 *)(param_1 + 0x2f4);
  uStack_18 = *(undefined4 *)(param_1 + 0x2f8);
  uStack_14 = *(undefined4 *)(param_1 + 0x2fc);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x2e0));
  local_34 = 0xb8;
  if (*(int **)(param_2 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_2 + 0x60) + 0xb8;
  }
  iVar2 = 0x35;
  piVar1 = *(int **)(param_2 + 0x58);
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_>
            (param_2,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  local_30 = *(undefined4 *)(param_1 + 0x318);
  uStack_2c = *(undefined4 *)(param_1 + 0x31c);
  uStack_28 = *(undefined4 *)(param_1 + 800);
  uStack_24 = *(undefined4 *)(param_1 + 0x324);
  local_20 = *(undefined4 *)(param_1 + 0x328);
  uStack_1c = *(undefined4 *)(param_1 + 0x32c);
  uStack_18 = *(undefined4 *)(param_1 + 0x330);
  uStack_14 = *(undefined4 *)(param_1 + 0x334);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x318));
  local_34 = 0xc0;
  if (*(int **)(param_2 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_2 + 0x60) + 0xc0;
  }
  iVar2 = 0x37;
  piVar1 = *(int **)(param_2 + 0x58);
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_>
            (param_2,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  local_30 = *(undefined4 *)(param_1 + 0x338);
  uStack_2c = *(undefined4 *)(param_1 + 0x33c);
  uStack_28 = *(undefined4 *)(param_1 + 0x340);
  uStack_24 = *(undefined4 *)(param_1 + 0x344);
  local_20 = *(undefined4 *)(param_1 + 0x348);
  uStack_1c = *(undefined4 *)(param_1 + 0x34c);
  uStack_18 = *(undefined4 *)(param_1 + 0x350);
  uStack_14 = *(undefined4 *)(param_1 + 0x354);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x338));
  local_34 = 0xc4;
  if (*(int **)(param_2 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_2 + 0x60) + 0xc4;
  }
  iVar2 = 0x38;
  piVar1 = *(int **)(param_2 + 0x58);
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_>
            (param_2,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
  operator()<57,physx::PxRigidDynamic,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>_>
            (param_2,param_1 + 0x358,param_3 + 6);
  local_30 = *(undefined4 *)(param_1 + 0x378);
  uStack_2c = *(undefined4 *)(param_1 + 0x37c);
  uStack_28 = *(undefined4 *)(param_1 + 0x380);
  uStack_24 = *(undefined4 *)(param_1 + 900);
  local_20 = *(undefined4 *)(param_1 + 0x388);
  uStack_1c = *(undefined4 *)(param_1 + 0x38c);
  uStack_18 = *(undefined4 *)(param_1 + 0x390);
  uStack_14 = *(undefined4 *)(param_1 + 0x394);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x378));
  local_34 = 0xcc;
  if (*(int **)(param_2 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_2 + 0x60) + 0xcc;
  }
  iVar2 = 0x3a;
  piVar1 = *(int **)(param_2 + 0x58);
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<58,physx::PxRigidDynamic,float,float>_const_>
            (param_2,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::
  operator()<59,physx::PxRigidDynamic,unsigned_int>(param_2,param_1 + 0x398,param_3 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x3c8);
  uStack_2c = *(undefined4 *)(param_1 + 0x3cc);
  uStack_28 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_24 = *(undefined4 *)(param_1 + 0x3d4);
  local_20 = *(undefined4 *)(param_1 + 0x3d8);
  uStack_1c = *(undefined4 *)(param_1 + 0x3dc);
  uStack_18 = *(undefined4 *)(param_1 + 0x3e0);
  uStack_14 = *(undefined4 *)(param_1 + 0x3e4);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x3c8));
  local_34 = 0xd8;
  if (*(int **)(param_2 + 0x60) != (int *)0x0) {
    local_34 = **(int **)(param_2 + 0x60) + 0xd8;
  }
  iVar2 = 0x3c;
  piVar1 = *(int **)(param_2 + 0x58);
  local_38[0] = 1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
  }
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::
  simpleProperty<physx::PxRepXPropertyAccessor<39,physx::PxRigidBody,float,float>_const_>
            (param_2,iVar2,local_38);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  return param_3 + 0xb;
}



// FUNCTION 143288080 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>_> body=186 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>_>(void)

int physx::PxShapeGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>::
  operator()<126,physx::PxShape,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (param_2,param_1 + 0x30,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>::
  operator()<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
            (param_2,param_1 + 0x50,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>::
  operator()<128,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
            (param_2,param_1 + 0x70,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>::operator()
            (param_2,param_1 + 0x90,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xb0,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xd0,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>::
  operator()<132,physx::PxShape,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>_>
            (param_2,param_1 + 0xf0,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::
  operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>
            (param_2,param_1 + 0x128,param_3 + 10);
  return param_3 + 0xd;
}



// FUNCTION 143288140 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>_> body=275 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>_>(void)

int physx::PxArticulationGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>_>
              (longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(param_2,param_1 + 0x18,param_3 + 1)
  ;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
  operator()<94,physx::PxArticulation,float,float>(param_2,param_1 + 0x38,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(param_2,param_1 + 0x58,param_3 + 3)
  ;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(param_2,param_1 + 0x78,param_3 + 4)
  ;
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
  operator()<97,physx::PxArticulation,unsigned_int>(param_2,param_1 + 0x98,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
  operator()<94,physx::PxArticulation,float,float>(param_2,param_1 + 0xe0,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
  operator()<94,physx::PxArticulation,float,float>(param_2,param_1 + 0x100,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
  operator()<94,physx::PxArticulation,float,float>(param_2,param_1 + 0x120,param_3 + 9);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_2,"Links");
  Sn::RepXVisitorWriter<physx::PxArticulation>::handleArticulationLinks(param_2,param_1 + 0x140);
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
    }
    *(int *)(*param_2 + 0x10) = *(int *)(*param_2 + 0x10) + -1;
  }
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulation>_>::
  operator()<103,physx::PxArticulation,char_const_*___ptr64,char_const_*___ptr64>
            (param_2,param_1 + 0x160,param_3 + 0xb);
  return param_3 + 0xf;
}



// FUNCTION 143288260 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>_> body=349 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>_>(void)

int physx::PxArticulationJointGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (param_2,param_1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (param_2,param_1 + 0x20,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<74,physx::PxArticulationJoint,physx::PxQuat_const_&___ptr64,physx::PxQuat>
            (param_2,param_1 + 0x40,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<75,physx::PxArticulationJoint,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x60,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<76,physx::PxArticulationJoint,enum_physx::PxArticulationJointDriveType::Enum,enum_physx::PxArticulationJointDriveType::Enum>
            (param_2,param_1 + 0x80,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xa0,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xc0,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xe0,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x100,param_3 + 8);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<81,physx::PxArticulationJoint,float>(param_2,param_1 + 0x120,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x150,param_3 + 10);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x170,param_3 + 0xb);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 400,param_3 + 0xc);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x1b0,param_3 + 0xd);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<86,physx::PxArticulationJoint,float>(param_2,param_1 + 0x1d0,param_3 + 0xe);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x200,param_3 + 0xf);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x220,param_3 + 0x10);
  return param_3 + 0x12;
}



// FUNCTION 1432883c0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_> body=125 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>(void)

int physx::PxActorGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
  operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>
            (param_2,param_1 + 0x18,param_3 + 1);
  FUN_14327b720(param_2,param_1 + 0x38,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
  operator()<26,physx::PxActor,unsigned_char,unsigned_char>(param_2,param_1 + 0x58,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
  operator()<26,physx::PxActor,unsigned_char,unsigned_char>(param_2,param_1 + 0x78,param_3 + 4);
  FUN_14327c410(param_2,param_1 + 0x98,param_3 + 5);
  return param_3 + 8;
}



// FUNCTION 143288440 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_> body=132 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>(void)

int physx::PxRigidActorGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>
              (longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (param_2,param_1 + 0xf0);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_2,"Shapes");
  Sn::handleShapes<physx::Sn::RepXVisitorWriterBase<physx::PxArticulationLink>_>
            (param_2,param_1 + 0x110);
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
    }
    *(int *)(*param_2 + 0x10) = *(int *)(*param_2 + 0x10) + -1;
  }
  return param_3 + 3;
}



// FUNCTION 1432884d0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_> body=210 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>(void)

int physx::PxRigidBodyGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (param_2,param_1 + 0x150);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x170,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
  operator()<41,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x1a8,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
  operator()<43,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x1e0,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
  operator()<44,physx::PxRigidBody,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x200,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
  operator()<45,physx::PxRigidBody,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxRigidBodyFlag::Enum,unsigned_char>_>
            (param_2,param_1 + 0x220,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x240,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x260,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x280,param_3 + 10);
  return param_3 + 0xb;
}



// FUNCTION 1432885b0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>_> body=588 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>_>(void)

int physx::PxClothGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  PxClothStretchConfigGeneratedInfo local_88 [128];
  
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  operator()<149,physx::PxCloth,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxClothFlag::Enum,unsigned_short>_>
            (param_2,param_1 + 0x108,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (param_2,param_1 + 0x140,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x160,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x198,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  operator()<155,physx::PxCloth,physx::PxVec3,physx::PxVec3>(param_2,param_1 + 0x1b8,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  operator()<156,physx::PxCloth,physx::PxVec3,physx::PxVec3>(param_2,param_1 + 0x1d8,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  operator()<157,physx::PxCloth,physx::PxVec3,physx::PxVec3>(param_2,param_1 + 0x1f8,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  operator()<159,physx::PxCloth,physx::PxVec3,physx::PxVec3>(param_2,param_1 + 0x230,param_3 + 0xb);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  operator()<160,physx::PxCloth,physx::PxVec3,physx::PxVec3>(param_2,param_1 + 0x250,param_3 + 0xc);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  operator()<161,physx::PxCloth,physx::PxVec3,physx::PxVec3>(param_2,param_1 + 0x270,param_3 + 0xd);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  operator()<163,physx::PxCloth,physx::PxVec3,physx::PxVec3>(param_2,param_1 + 0x2a8,param_3 + 0xf);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  operator()<164,physx::PxCloth,physx::PxVec3,physx::PxVec3>(param_2,param_1 + 0x2c8,param_3 + 0x10)
  ;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x2e8,param_3 + 0x11);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x308,param_3 + 0x12);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  operator()<167,physx::PxCloth,physx::PxClothMotionConstraintConfig_const_&___ptr64,physx::PxClothMotionConstraintConfig>
            (param_2,param_1 + 0x328,param_3 + 0x13);
  ::_guard_xfg_dispatch_icall_nop(local_88,0,0x80);
  physx::PxClothStretchConfigGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_88);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  indexedProperty<168,physx::PxCloth,enum_physx::PxClothFabricPhaseType::Enum,physx::PxClothStretchConfig,physx::PxClothStretchConfigGeneratedInfo>
            (param_2,param_3 + 0x14,param_1 + 0x348,&PTR_s_eVERTICAL_1467c9a80,local_88);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  operator()<169,physx::PxCloth,physx::PxClothTetherConfig_const_&___ptr64,physx::PxClothTetherConfig>
            (param_2,param_1 + 0x368,param_3 + 0x15);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x388,param_3 + 0x16);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x3a8,param_3 + 0x17);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x3c8,param_3 + 0x18);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 1000,param_3 + 0x19);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>::
  operator()<174,physx::PxCloth,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
            (param_2,param_1 + 0x408,param_3 + 0x1a);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x428,param_3 + 0x1b);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x448,param_3 + 0x1c);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x468,param_3 + 0x1d);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x488,param_3 + 0x1e);
  return param_3 + 0x21;
}



// FUNCTION 143288800 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_> body=284 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_>(void)

int physx::PxD6JointGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 local_res18 [16];
  undefined1 local_88 [128];
  
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  indexedProperty<453,physx::PxD6Joint,enum_physx::PxD6Axis::Enum,enum_physx::PxD6Motion::Enum>
            (param_2,param_3,param_1 + 0x1d8,&PTR_DAT_1467c8af0,local_res18);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<457,physx::PxD6Joint,physx::PxJointLinearLimit_const_&___ptr64,physx::PxJointLinearLimit>
            (param_2,param_1 + 0x240,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>
            (param_2,param_1 + 0x260,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<459,physx::PxD6Joint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone>
            (param_2,param_1 + 0x280,param_3 + 6);
  ::_guard_xfg_dispatch_icall_nop(local_88,0,0x80);
  PxD6JointDriveGeneratedInfo::PxD6JointDriveGeneratedInfo(local_88);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  indexedProperty<460,physx::PxD6Joint,enum_physx::PxD6Drive::Enum,physx::PxD6JointDrive,physx::PxD6JointDriveGeneratedInfo>
            (param_2,param_3 + 7,param_1 + 0x2a0,&PTR_DAT_1467c8df0,local_88);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (param_2,param_1 + 0x2c0,param_3 + 8);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<462,physx::PxD6Joint,physx::PxVec3>(param_2,param_1 + 0x2e0,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x310,param_3 + 10);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x330,param_3 + 0xb);
  return param_3 + 0xd;
}



// FUNCTION 143288920 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_> body=219 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_>(void)

int physx::PxJointGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 local_res18 [16];
  
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<436,physx::PxJoint,physx::PxRigidActor_*___ptr64>(param_2,param_1);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  indexedProperty<437,physx::PxJoint,enum_physx::PxJointActorIndex::Enum,physx::PxTransform>
            (param_2,param_3 + 1,param_1 + 0x30,&PTR_s_eACTOR0_1467c9ad0,local_res18);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<441,physx::PxJoint,float>(param_2,param_1 + 0x98,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<442,physx::PxJoint,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxConstraintFlag::Enum,unsigned_short>_>
            (param_2,param_1 + 200,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xe8,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x108,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x128,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x148,param_3 + 10);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
  operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>
            (param_2,param_1 + 0x180,param_3 + 0xc);
  return param_3 + 0xf;
}



// FUNCTION 143288a00 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>_> body=267 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>_>(void)

int physx::PxParticleBaseGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xf0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>::
  operator()<184,physx::PxParticleBase,physx::PxVec3_const_&___ptr64,physx::PxVec3>
            (param_2,param_1 + 0x110,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x130,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x150,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x170,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 400,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>::
  operator()<189,physx::PxParticleBase,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
            (param_2,param_1 + 0x1b0,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x200,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x220,param_3 + 10);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x240,param_3 + 0xb);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x260,param_3 + 0xc);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>::
  operator()<197,physx::PxParticleBase,physx::PxMetaDataPlane,physx::PxMetaDataPlane>
            (param_2,param_1 + 0x298,param_3 + 0xe);
  return param_3 + 0xf;
}



// FUNCTION 143288b10 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxRigidDynamic>_>_> body=210 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxRigidDynamic>_>_>(void)

int physx::PxRigidDynamicGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxRigidDynamic>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x2a0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x2c0,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x2e0,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x318,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x338,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxRigidDynamic>_>::
  operator()<57,physx::PxRigidDynamic,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRigidDynamicLockFlag::Enum,unsigned_short>_>
            (param_2,param_1 + 0x358,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x378,param_3 + 7);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxRigidDynamic>_>::
  operator()<59,physx::PxRigidDynamic,unsigned_int>(param_2,param_1 + 0x398,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x3c8,param_3 + 9);
  return param_3 + 0xb;
}



// FUNCTION 143288bf0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxShape>_>_> body=253 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxShape>_>_>(void)

int physx::PxShapeGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxShape>_>_>
              (longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  FUN_14328d190(param_2,param_1 + 0x18);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<461,physx::PxD6Joint,physx::PxTransform_const_&___ptr64,physx::PxTransform>
            (param_2,param_1 + 0x30,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxShape>_>::
  operator()<127,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
            (param_2,param_1 + 0x50,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxShape>_>::
  operator()<128,physx::PxShape,physx::PxFilterData_const_&___ptr64,physx::PxFilterData>
            (param_2,param_1 + 0x70,param_3 + 4);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_2,"Materials");
  Sn::handleShapeMaterials<physx::Sn::RepXVisitorWriterBase<physx::PxShape>_>
            (param_2,param_1 + 0x90);
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
    }
    *(int *)(*param_2 + 0x10) = *(int *)(*param_2 + 0x10) + -1;
  }
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xb0,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xd0,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxShape>_>::
  operator()<132,physx::PxShape,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxShapeFlag::Enum,unsigned_char>_>
            (param_2,param_1 + 0xf0,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
  operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>
            (param_2,param_1 + 0x128,param_3 + 10);
  return param_3 + 0xd;
}



// FUNCTION 143288cf0 writeAllProperties<physx::PxArticulationJoint> body=130 status=ok
// SIG undefined writeAllProperties<physx::PxArticulationJoint>(void)

void physx::Sn::writeAllProperties<physx::PxArticulationJoint>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  PxArticulationJointGeneratedInfo local_268 [608];
  
  physx::PxArticulationJointGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_268);
  local_288 = param_5;
  local_280 = 0;
  uStack_278 = 0;
  local_2a8 = param_1;
  local_2a0 = param_3;
  local_298 = param_2;
  local_290 = param_4;
  PxArticulationJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>_>
            (local_268,&local_2a8,0);
  return;
}



// FUNCTION 143288d80 writeAllProperties<physx::PxArticulationLink> body=248 status=ok
// SIG undefined writeAllProperties<physx::PxArticulationLink>(void)

void physx::Sn::writeAllProperties<physx::PxArticulationLink>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  PxArticulationLinkGeneratedInfo local_308 [672];
  undefined1 local_68 [80];
  
  physx::PxArticulationLinkGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_308);
  local_320 = 0;
  uStack_318 = 0;
  local_328 = param_5;
  local_348 = param_1;
  local_340 = param_3;
  local_338 = param_2;
  local_330 = param_4;
  uVar1 = PxRigidBodyGeneratedInfo::
          visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>
                    (local_308,&local_348,0);
  local_320 = 0;
  uStack_318 = 0;
  local_328 = param_5;
  local_348 = param_1;
  local_340 = param_3;
  local_338 = param_2;
  local_330 = param_4;
  PxRigidBodyGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>
            (local_308,&local_348,uVar1);
  local_320 = 0;
  uStack_318 = 0;
  local_328 = param_5;
  local_348 = param_1;
  local_340 = param_3;
  local_338 = param_2;
  local_330 = param_4;
  RepXVisitorWriter<physx::PxArticulationLink>::handleIncomingJoint(&local_348,local_68);
  return;
}



// FUNCTION 143288e80 writeAllProperties<physx::PxCloth> body=280 status=ok
// SIG undefined writeAllProperties<physx::PxCloth>(void)

void physx::Sn::writeAllProperties<physx::PxCloth>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  PxClothGeneratedInfo local_4f8 [24];
  undefined1 local_4e0 [32];
  undefined1 local_4c0 [32];
  undefined1 local_4a0 [32];
  undefined1 local_480 [32];
  undefined1 local_460 [1096];
  
  physx::PxClothGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_4f8);
  local_510 = 0;
  uStack_508 = 0;
  local_518 = param_5;
  local_538 = param_1;
  local_530 = param_3;
  local_528 = param_2;
  local_520 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
  operator()<24,physx::PxActor,char_const_*___ptr64,char_const_*___ptr64>(&local_538,local_4e0,1);
  FUN_14327b720(&local_538,local_4c0,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
  operator()<26,physx::PxActor,unsigned_char,unsigned_char>(&local_538,local_4a0,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>::
  operator()<26,physx::PxActor,unsigned_char,unsigned_char>(&local_538,local_480,4);
  FUN_14327c410(&local_538,local_460,5);
  local_510 = 0;
  uStack_508 = 0;
  local_518 = param_5;
  local_538 = param_1;
  local_530 = param_3;
  local_528 = param_2;
  local_520 = param_4;
  PxClothGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxCloth>_>_>
            (local_4f8,&local_538,0);
  return;
}



// FUNCTION 143288fa0 writeAllProperties<physx::PxD6Joint> body=193 status=ok
// SIG undefined writeAllProperties<physx::PxD6Joint>(void)

void physx::Sn::writeAllProperties<physx::PxD6Joint>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined1 local_378 [880];
  
  PxD6JointGeneratedInfo::PxD6JointGeneratedInfo(local_378);
  local_390 = 0;
  uStack_388 = 0;
  local_398 = param_5;
  local_3b8 = param_1;
  local_3b0 = param_3;
  local_3a8 = param_2;
  local_3a0 = param_4;
  PxJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_>
            (local_378,&local_3b8,0);
  local_390 = 0;
  uStack_388 = 0;
  local_398 = param_5;
  local_3b8 = param_1;
  local_3b0 = param_3;
  local_3a8 = param_2;
  local_3a0 = param_4;
  PxD6JointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_>
            (local_378,&local_3b8,0);
  return;
}



// FUNCTION 143289070 writeAllProperties<physx::PxD6JointDrive> body=244 status=ok
// SIG undefined writeAllProperties<physx::PxD6JointDrive>(void)

void physx::Sn::writeAllProperties<physx::PxD6JointDrive>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  PxD6JointDriveGeneratedInfo::PxD6JointDriveGeneratedInfo(local_88);
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = param_5;
  local_c8 = param_1;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_88,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_68,1);
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = param_5;
  local_c8 = param_1;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_48,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6JointDrive>_>::
  operator()<537,physx::PxD6JointDrive,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>,physx::PxFlags<enum_physx::PxD6JointDriveFlag::Enum,unsigned_int>_>
            (&local_c8,local_28,1);
  return;
}



// FUNCTION 143289170 writeAllProperties<physx::PxDistanceJoint> body=317 status=ok
// SIG undefined writeAllProperties<physx::PxDistanceJoint>(void)

void physx::Sn::writeAllProperties<physx::PxDistanceJoint>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 local_2e8 [496];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [64];
  
  PxDistanceJointGeneratedInfo::PxDistanceJointGeneratedInfo(local_2e8);
  local_300 = 0;
  uStack_2f8 = 0;
  local_308 = param_5;
  local_328 = param_1;
  local_320 = param_3;
  local_318 = param_2;
  local_310 = param_4;
  PxJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_>
            (local_2e8,&local_328,0);
  local_300 = 0;
  uStack_2f8 = 0;
  local_308 = param_5;
  local_328 = param_1;
  local_320 = param_3;
  local_318 = param_2;
  local_310 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_328,local_f8,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_328,local_d8,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_328,local_b8,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_328,local_98,4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_328,local_78,5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxDistanceJoint>_>::
  operator()<474,physx::PxDistanceJoint,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxDistanceJointFlag::Enum,unsigned_short>_>
            (&local_328,local_58,6);
  return;
}



// FUNCTION 1432892b0 writeAllProperties<physx::PxFixedJoint> body=220 status=ok
// SIG undefined writeAllProperties<physx::PxFixedJoint>(void)

void physx::Sn::writeAllProperties<physx::PxFixedJoint>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 local_238 [472];
  undefined1 local_60 [32];
  undefined1 local_40 [56];
  
  PxFixedJointGeneratedInfo::PxFixedJointGeneratedInfo(local_238);
  local_250 = 0;
  uStack_248 = 0;
  local_258 = param_5;
  local_278 = param_1;
  local_270 = param_3;
  local_268 = param_2;
  local_260 = param_4;
  PxJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_>
            (local_238,&local_278,0);
  local_250 = 0;
  uStack_248 = 0;
  local_258 = param_5;
  local_278 = param_1;
  local_270 = param_3;
  local_268 = param_2;
  local_260 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_278,local_60,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_278,local_40,1);
  return;
}



// FUNCTION 143289390 writeAllProperties<physx::PxHeightFieldGeometry> body=226 status=ok
// SIG undefined writeAllProperties<physx::PxHeightFieldGeometry>(void)

void physx::Sn::writeAllProperties<physx::PxHeightFieldGeometry>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  PxHeightFieldGeometryGeneratedInfo local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  physx::PxHeightFieldGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_a8);
  local_c8 = param_5;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e8 = param_1;
  local_e0 = param_3;
  local_d8 = param_2;
  local_d0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldGeometry>_>::
  operator()<248,physx::PxHeightFieldGeometry,physx::PxHeightField_*___ptr64,physx::PxHeightField_*___ptr64>
            (&local_e8,local_a8,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_e8,local_88,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_e8,local_68,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_e8,local_48,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxTriangleMeshGeometry>_>::
  operator()<244,physx::PxTriangleMeshGeometry,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>_>
            (&local_e8,local_28,4);
  return;
}



// FUNCTION 143289480 writeAllProperties<physx::PxJointAngularLimitPair> body=293 status=ok
// SIG undefined writeAllProperties<physx::PxJointAngularLimitPair>(void)

void physx::Sn::writeAllProperties<physx::PxJointAngularLimitPair>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  PxJointAngularLimitPairGeneratedInfo::PxJointAngularLimitPairGeneratedInfo(local_f8);
  local_110 = 0;
  uStack_108 = 0;
  local_118 = param_5;
  local_138 = param_1;
  local_130 = param_3;
  local_128 = param_2;
  local_120 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_f8,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_d8,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_b8,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_98,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_78,4);
  local_110 = 0;
  uStack_108 = 0;
  local_118 = param_5;
  local_138 = param_1;
  local_130 = param_3;
  local_128 = param_2;
  local_120 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_58,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_38,1);
  return;
}



// FUNCTION 1432895b0 writeAllProperties<physx::PxJointLimitCone> body=293 status=ok
// SIG undefined writeAllProperties<physx::PxJointLimitCone>(void)

void physx::Sn::writeAllProperties<physx::PxJointLimitCone>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  PxJointLimitConeGeneratedInfo::PxJointLimitConeGeneratedInfo(local_f8);
  local_110 = 0;
  uStack_108 = 0;
  local_118 = param_5;
  local_138 = param_1;
  local_130 = param_3;
  local_128 = param_2;
  local_120 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_f8,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_d8,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_b8,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_98,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_78,4);
  local_110 = 0;
  uStack_108 = 0;
  local_118 = param_5;
  local_138 = param_1;
  local_130 = param_3;
  local_128 = param_2;
  local_120 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_58,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_38,1);
  return;
}



// FUNCTION 1432896e0 writeAllProperties<physx::PxJointLinearLimit> body=270 status=ok
// SIG undefined writeAllProperties<physx::PxJointLinearLimit>(void)

void physx::Sn::writeAllProperties<physx::PxJointLinearLimit>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  PxJointLinearLimitGeneratedInfo::PxJointLinearLimitGeneratedInfo(local_d8);
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = param_5;
  local_118 = param_1;
  local_110 = param_3;
  local_108 = param_2;
  local_100 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_118,local_d8,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_118,local_b8,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_118,local_98,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_118,local_78,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_118,local_58,4);
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = param_5;
  local_118 = param_1;
  local_110 = param_3;
  local_108 = param_2;
  local_100 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_118,local_38,0);
  return;
}



// FUNCTION 1432897f0 writeAllProperties<physx::PxJointLinearLimitPair> body=293 status=ok
// SIG undefined writeAllProperties<physx::PxJointLinearLimitPair>(void)

void physx::Sn::writeAllProperties<physx::PxJointLinearLimitPair>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  PxJointLinearLimitPairGeneratedInfo::PxJointLinearLimitPairGeneratedInfo(local_f8);
  local_110 = 0;
  uStack_108 = 0;
  local_118 = param_5;
  local_138 = param_1;
  local_130 = param_3;
  local_128 = param_2;
  local_120 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_f8,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_d8,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_b8,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_98,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_78,4);
  local_110 = 0;
  uStack_108 = 0;
  local_118 = param_5;
  local_138 = param_1;
  local_130 = param_3;
  local_128 = param_2;
  local_120 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_58,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_138,local_38,1);
  return;
}



// FUNCTION 143289920 writeAllProperties<physx::PxMaterial> body=253 status=ok
// SIG undefined writeAllProperties<physx::PxMaterial>(void)

void physx::Sn::writeAllProperties<physx::PxMaterial>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  PxMaterialGeneratedInfo local_118 [24];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [88];
  
  physx::PxMaterialGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_118);
  local_138 = param_5;
  local_130 = 0;
  uStack_128 = 0;
  local_158 = param_1;
  local_150 = param_3;
  local_148 = param_2;
  local_140 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_158,local_100,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_158,local_e0,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_158,local_c0,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxMaterial>_>::
  operator()<16,physx::PxMaterial,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxMaterialFlag::Enum,unsigned_short>_>
            (&local_158,local_a0,4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxMaterial>_>::
  operator()<17,physx::PxMaterial,enum_physx::PxCombineMode::Enum,enum_physx::PxCombineMode::Enum>
            (&local_158,local_80,5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxMaterial>_>::
  operator()<17,physx::PxMaterial,enum_physx::PxCombineMode::Enum,enum_physx::PxCombineMode::Enum>
            (&local_158,local_60,6);
  return;
}



// FUNCTION 143289a20 writeAllProperties<physx::PxParticleFluid> body=244 status=ok
// SIG undefined writeAllProperties<physx::PxParticleFluid>(void)

void physx::Sn::writeAllProperties<physx::PxParticleFluid>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  PxParticleFluidGeneratedInfo local_338 [696];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [56];
  
  physx::PxParticleFluidGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_338);
  local_350 = 0;
  uStack_348 = 0;
  local_358 = param_5;
  local_378 = param_1;
  local_370 = param_3;
  local_368 = param_2;
  local_360 = param_4;
  PxParticleFluidGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>_>
            (local_338,&local_378,0);
  local_350 = 0;
  uStack_348 = 0;
  local_358 = param_5;
  local_378 = param_1;
  local_370 = param_3;
  local_368 = param_2;
  local_360 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_378,local_80,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_378,local_60,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_378,local_40,2);
  return;
}



// FUNCTION 143289b20 writeAllProperties<physx::PxParticleSystem> body=187 status=ok
// SIG undefined writeAllProperties<physx::PxParticleSystem>(void)

void physx::Sn::writeAllProperties<physx::PxParticleSystem>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *local_328;
  longlong local_320;
  ulonglong local_318;
  undefined8 **local_310;
  undefined8 local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  PxParticleSystemGeneratedInfo local_2d8 [720];
  
  local_328 = *(undefined8 **)(param_3 + 0x10);
  local_320 = 0;
  local_318 = 0;
  physx::PxParticleSystemGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_2d8);
  local_310 = &local_328;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_308 = param_2;
  local_300 = param_1;
  local_2f8 = param_3;
  local_2f0 = param_4;
  PxParticleFluidGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxParticleFluid>_>_>
            (local_2d8,&local_310,0);
  if ((((local_318 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_318)) && (local_320 != 0)) {
    (**(code **)(*(longlong *)*local_328 + 0x10))();
  }
  return;
}



// FUNCTION 143289be0 writeAllProperties<physx::PxPrismaticJoint> body=271 status=ok
// SIG undefined writeAllProperties<physx::PxPrismaticJoint>(void)

void physx::Sn::writeAllProperties<physx::PxPrismaticJoint>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2a8 [520];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [56];
  
  PxPrismaticJointGeneratedInfo::PxPrismaticJointGeneratedInfo(local_2a8);
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2c8 = param_5;
  local_2e8 = param_1;
  local_2e0 = param_3;
  local_2d8 = param_2;
  local_2d0 = param_4;
  PxJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_>
            (local_2a8,&local_2e8,0);
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2c8 = param_5;
  local_2e8 = param_1;
  local_2e0 = param_3;
  local_2d8 = param_2;
  local_2d0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxPrismaticJoint>_>::
  operator()<485,physx::PxPrismaticJoint,physx::PxJointLinearLimitPair_const_&___ptr64,physx::PxJointLinearLimitPair>
            (&local_2e8,local_a0,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxPrismaticJoint>_>::
  operator()<486,physx::PxPrismaticJoint,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxPrismaticJointFlag::Enum,unsigned_short>_>
            (&local_2e8,local_80,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_2e8,local_60,4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_2e8,local_40,5);
  return;
}



// FUNCTION 143289cf0 writeAllProperties<physx::PxRevoluteJoint> body=340 status=ok
// SIG undefined writeAllProperties<physx::PxRevoluteJoint>(void)

void physx::Sn::writeAllProperties<physx::PxRevoluteJoint>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined1 local_318 [520];
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [56];
  
  PxRevoluteJointGeneratedInfo::PxRevoluteJointGeneratedInfo(local_318);
  local_330 = 0;
  uStack_328 = 0;
  local_338 = param_5;
  local_358 = param_1;
  local_350 = param_3;
  local_348 = param_2;
  local_340 = param_4;
  PxJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_>
            (local_318,&local_358,0);
  local_330 = 0;
  uStack_328 = 0;
  local_338 = param_5;
  local_358 = param_1;
  local_350 = param_3;
  local_348 = param_2;
  local_340 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<458,physx::PxD6Joint,physx::PxJointAngularLimitPair_const_&___ptr64,physx::PxJointAngularLimitPair>
            (&local_358,local_110,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_358,local_f0,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_358,local_d0,4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_358,local_b0,5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxRevoluteJoint>_>::
  operator()<498,physx::PxRevoluteJoint,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxRevoluteJointFlag::Enum,unsigned_short>_>
            (&local_358,local_90,6);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_358,local_70,7);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_358,local_50,8);
  return;
}



// FUNCTION 143289e50 writeAllProperties<physx::PxRigidDynamic> body=249 status=ok
// SIG undefined writeAllProperties<physx::PxRigidDynamic>(void)

void physx::Sn::writeAllProperties<physx::PxRigidDynamic>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  PxRigidDynamicGeneratedInfo local_418 [1024];
  
  physx::PxRigidDynamicGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_418);
  local_430 = 0;
  uStack_428 = 0;
  local_438 = param_5;
  local_458 = param_1;
  local_450 = param_3;
  local_448 = param_2;
  local_440 = param_4;
  uVar1 = PxRigidBodyGeneratedInfo::
          visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>
                    (local_418,&local_458,0);
  local_430 = 0;
  uStack_428 = 0;
  local_438 = param_5;
  local_458 = param_1;
  local_450 = param_3;
  local_448 = param_2;
  local_440 = param_4;
  PxRigidBodyGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>
            (local_418,&local_458,uVar1);
  local_430 = 0;
  uStack_428 = 0;
  local_438 = param_5;
  local_458 = param_1;
  local_450 = param_3;
  local_448 = param_2;
  local_440 = param_4;
  PxRigidDynamicGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxRigidDynamic>_>_>
            (local_418,&local_458,0);
  return;
}



// FUNCTION 143289f50 writeAllProperties<physx::PxRigidStatic> body=187 status=ok
// SIG undefined writeAllProperties<physx::PxRigidStatic>(void)

void physx::Sn::writeAllProperties<physx::PxRigidStatic>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  undefined8 **local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  PxRigidStaticGeneratedInfo local_178 [368];
  
  local_1c8 = *(undefined8 **)(param_3 + 0x10);
  local_1c0 = 0;
  local_1b8 = 0;
  physx::PxRigidStaticGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_178);
  local_1b0 = &local_1c8;
  local_188 = 0;
  uStack_180 = 0;
  local_1a8 = param_2;
  local_1a0 = param_1;
  local_198 = param_3;
  local_190 = param_4;
  PxRigidBodyGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationLink>_>_>
            (local_178,&local_1b0,0);
  if ((((local_1b8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1b8)) && (local_1c0 != 0)) {
    (**(code **)(*(longlong *)*local_1c8 + 0x10))();
  }
  return;
}



// FUNCTION 14328a010 writeAllProperties<physx::PxShape> body=130 status=ok
// SIG undefined writeAllProperties<physx::PxShape>(void)

void physx::Sn::writeAllProperties<physx::PxShape>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  PxShapeGeneratedInfo local_188 [384];
  
  physx::PxShapeGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_188);
  local_1a8 = param_5;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1c8 = param_1;
  local_1c0 = param_3;
  local_1b8 = param_2;
  local_1b0 = param_4;
  PxShapeGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxShape>_>_>
            (local_188,&local_1c8,0);
  return;
}



// FUNCTION 14328a0a0 writeAllProperties<physx::PxShape> body=187 status=ok
// SIG undefined writeAllProperties<physx::PxShape>(void)

void physx::Sn::writeAllProperties<physx::PxShape>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  undefined8 **local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  PxShapeGeneratedInfo local_188 [384];
  
  local_1d8 = *(undefined8 **)(param_3 + 0x10);
  local_1d0 = 0;
  local_1c8 = 0;
  physx::PxShapeGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_188);
  local_1c0 = &local_1d8;
  local_198 = 0;
  uStack_190 = 0;
  local_1b8 = param_2;
  local_1b0 = param_1;
  local_1a8 = param_3;
  local_1a0 = param_4;
  PxShapeGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxShape>_>_>
            (local_188,&local_1c0,0);
  if ((((local_1c8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1c8)) && (local_1d0 != 0)) {
    (**(code **)(*(longlong *)*local_1d8 + 0x10))();
  }
  return;
}



// FUNCTION 14328a160 writeAllProperties<physx::PxSphericalJoint> body=244 status=ok
// SIG undefined writeAllProperties<physx::PxSphericalJoint>(void)

void physx::Sn::writeAllProperties<physx::PxSphericalJoint>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 local_258 [472];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [56];
  
  PxSphericalJointGeneratedInfo::PxSphericalJointGeneratedInfo(local_258);
  local_270 = 0;
  uStack_268 = 0;
  local_278 = param_5;
  local_298 = param_1;
  local_290 = param_3;
  local_288 = param_2;
  local_280 = param_4;
  PxJointGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>_>
            (local_258,&local_298,0);
  local_270 = 0;
  uStack_268 = 0;
  local_278 = param_5;
  local_298 = param_1;
  local_290 = param_3;
  local_288 = param_2;
  local_280 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxD6Joint>_>::
  operator()<459,physx::PxD6Joint,physx::PxJointLimitCone_const_&___ptr64,physx::PxJointLimitCone>
            (&local_298,local_80,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxSphericalJoint>_>::
  operator()<505,physx::PxSphericalJoint,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>,physx::PxFlags<enum_physx::PxSphericalJointFlag::Enum,unsigned_short>_>
            (&local_298,local_60,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_298,local_40,2);
  return;
}



// FUNCTION 14328a260 writeGeometryProperty<physx::PxBoxGeometry> body=310 status=ok
// SIG undefined writeGeometryProperty<physx::PxBoxGeometry>(void)

void physx::Sn::RepXVisitorWriter<physx::PxShape>::writeGeometryProperty<physx::PxBoxGeometry>
               (longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  PxBoxGeometryGeneratedInfo local_48 [32];
  PxBoxGeometryGeneratedInfo local_28 [32];
  
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,"Geometry");
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_3);
  local_98 = 3;
  local_90 = 0;
  physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
            ((PxShapeGeometryPropertyHelper *)(param_2 + 0x18),(PxShape *)param_1[2],
             (PxBoxGeometry *)&local_98);
  physx::PxBoxGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_28);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[3];
  lVar4 = param_1[4];
  physx::PxBoxGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_48);
  local_70 = &local_98;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = lVar1;
  local_78 = lVar2;
  local_68 = lVar3;
  local_60 = lVar4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxBoxGeometry>_>::
  operator()<221,physx::PxBoxGeometry,physx::PxVec3,physx::PxVec3>(&local_80,local_48,0);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14328a3a0 writeGeometryProperty<physx::PxCapsuleGeometry> body=333 status=ok
// SIG undefined writeGeometryProperty<physx::PxCapsuleGeometry>(void)

void physx::Sn::RepXVisitorWriter<physx::PxShape>::writeGeometryProperty<physx::PxCapsuleGeometry>
               (longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  PxCapsuleGeometryGeneratedInfo local_88 [32];
  undefined1 local_68 [32];
  PxCapsuleGeometryGeneratedInfo local_48 [64];
  
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,"Geometry");
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_3);
  local_d8 = 2;
  local_d0 = 0;
  physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
            ((PxShapeGeometryPropertyHelper *)(param_2 + 0x18),(PxShape *)param_1[2],
             (PxCapsuleGeometry *)&local_d8);
  physx::PxCapsuleGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_48);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[3];
  lVar4 = param_1[4];
  physx::PxCapsuleGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_88);
  local_b8 = &local_d8;
  local_a0 = 0;
  uStack_98 = 0;
  local_c8 = lVar1;
  local_c0 = lVar2;
  local_b0 = lVar3;
  local_a8 = lVar4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_88,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_68,1);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14328a4f0 writeGeometryProperty<physx::PxConvexMeshGeometry> body=391 status=ok
// SIG undefined writeGeometryProperty<physx::PxConvexMeshGeometry>(void)

void physx::Sn::RepXVisitorWriter<physx::PxShape>::
     writeGeometryProperty<physx::PxConvexMeshGeometry>
               (longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined1 local_120;
  undefined2 local_11f;
  undefined1 local_11d;
  longlong local_118;
  longlong local_110;
  undefined4 *local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  PxConvexMeshGeometryGeneratedInfo local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  PxConvexMeshGeometryGeneratedInfo local_78 [96];
  
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,"Geometry");
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_3);
  local_12c = 0x3f800000;
  local_144 = 0x3f8000003f800000;
  uStack_13c = 0x3f800000;
  local_128 = 0;
  local_120 = 0;
  local_11f = 0;
  local_11d = 0;
  local_148 = 4;
  local_134 = 0;
  physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
            ((PxShapeGeometryPropertyHelper *)(param_2 + 0x18),(PxShape *)param_1[2],
             (PxConvexMeshGeometry *)&local_148);
  physx::PxConvexMeshGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_78);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[3];
  lVar4 = param_1[4];
  physx::PxConvexMeshGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_d8);
  local_108 = &local_148;
  local_f0 = 0;
  uStack_e8 = 0;
  local_118 = lVar1;
  local_110 = lVar2;
  local_100 = lVar3;
  local_f8 = lVar4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxConvexMeshGeometry>_>::
  operator()<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>
            (&local_118,local_d8,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxConvexMeshGeometry>_>::
  operator()<233,physx::PxConvexMeshGeometry,physx::PxConvexMesh_*___ptr64,physx::PxConvexMesh_*___ptr64>
            (&local_118,local_b8,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxConvexMeshGeometry>_>::
  operator()<234,physx::PxConvexMeshGeometry,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxConvexMeshGeometryFlag::Enum,unsigned_char>_>
            (&local_118,local_98,2);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14328a680 writeGeometryProperty<physx::PxHeightFieldGeometry> body=269 status=ok
// SIG undefined writeGeometryProperty<physx::PxHeightFieldGeometry>(void)

void physx::Sn::RepXVisitorWriter<physx::PxShape>::
     writeGeometryProperty<physx::PxHeightFieldGeometry>
               (longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined2 local_ab;
  undefined1 local_a9;
  PxHeightFieldGeometryGeneratedInfo local_a8 [160];
  
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,"Geometry");
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_3);
  local_c8[0] = 6;
  local_c0 = 0;
  local_ac = 0;
  local_ab = 0;
  local_a9 = 0;
  local_b8 = 0x3f800000;
  local_b4 = 0x3f800000;
  local_b0 = 0x3f800000;
  physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
            ((PxShapeGeometryPropertyHelper *)(param_2 + 0x18),(PxShape *)param_1[2],
             (PxHeightFieldGeometry *)local_c8);
  physx::PxHeightFieldGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_a8);
  writeAllProperties<physx::PxHeightFieldGeometry>
            (*param_1,local_c8,param_1[1],param_1[3],param_1[4]);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14328a790 writeGeometryProperty<physx::PxPlaneGeometry> body=236 status=ok
// SIG undefined writeGeometryProperty<physx::PxPlaneGeometry>(void)

void physx::Sn::RepXVisitorWriter<physx::PxShape>::writeGeometryProperty<physx::PxPlaneGeometry>
               (longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  PxPlaneGeometryGeneratedInfo local_res10 [8];
  undefined4 local_res20 [2];
  
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,"Geometry");
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_3);
  local_res20[0] = 1;
  physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
            ((PxShapeGeometryPropertyHelper *)(param_2 + 0x18),(PxShape *)param_1[2],
             (PxPlaneGeometry *)local_res20);
  physx::PxPlaneGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_res10);
  puVar1 = (undefined8 *)param_1[3];
  plVar2 = (longlong *)param_1[1];
  local_res8[0] = 0;
  (**(code **)*puVar1)(puVar1,local_res8,1);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_3,puVar1[4]);
  puVar1[3] = 0;
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14328a880 writeGeometryProperty<physx::PxSphereGeometry> body=310 status=ok
// SIG undefined writeGeometryProperty<physx::PxSphereGeometry>(void)

void physx::Sn::RepXVisitorWriter<physx::PxShape>::writeGeometryProperty<physx::PxSphereGeometry>
               (longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_c8;
  longlong local_c0;
  undefined4 *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  PxSphereGeometryGeneratedInfo local_90 [24];
  undefined1 local_78 [32];
  PxSphereGeometryGeneratedInfo local_58 [64];
  
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,"Geometry");
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_3);
  local_res8 = 0;
  local_resc = 0;
  physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
            ((PxShapeGeometryPropertyHelper *)(param_2 + 0x18),(PxShape *)param_1[2],
             (PxSphereGeometry *)&local_res8);
  physx::PxSphereGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_58);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[3];
  lVar4 = param_1[4];
  physx::PxSphereGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_90);
  local_b8 = &local_res8;
  local_a0 = 0;
  uStack_98 = 0;
  local_c8 = lVar1;
  local_c0 = lVar2;
  local_b0 = lVar3;
  local_a8 = lVar4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_78,1);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14328a9c0 writeGeometryProperty<physx::PxTriangleMeshGeometry> body=392 status=ok
// SIG undefined writeGeometryProperty<physx::PxTriangleMeshGeometry>(void)

void physx::Sn::RepXVisitorWriter<physx::PxShape>::
     writeGeometryProperty<physx::PxTriangleMeshGeometry>
               (longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined4 local_12c;
  undefined1 local_128;
  undefined2 local_127;
  undefined1 local_125;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  undefined4 *local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  PxTriangleMeshGeometryGeneratedInfo local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  PxTriangleMeshGeometryGeneratedInfo local_78 [96];
  
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,"Geometry");
  RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,param_3);
  local_12c = 0x3f800000;
  local_144 = 0x3f8000003f800000;
  uStack_13c = 0x3f800000;
  local_127 = 0;
  local_125 = 0;
  local_120 = 0;
  local_148 = 5;
  local_134 = 0;
  local_128 = 0;
  physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
            ((PxShapeGeometryPropertyHelper *)(param_2 + 0x18),(PxShape *)param_1[2],
             (PxTriangleMeshGeometry *)&local_148);
  physx::PxTriangleMeshGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_78);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[3];
  lVar4 = param_1[4];
  physx::PxTriangleMeshGeometryGeneratedInfo::_guard_xfg_dispatch_icall_nop(local_d8);
  local_108 = &local_148;
  local_f0 = 0;
  uStack_e8 = 0;
  local_118 = lVar1;
  local_110 = lVar2;
  local_100 = lVar3;
  local_f8 = lVar4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxConvexMeshGeometry>_>::
  operator()<232,physx::PxConvexMeshGeometry,physx::PxMeshScale,physx::PxMeshScale>
            (&local_118,local_d8,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxTriangleMeshGeometry>_>::
  operator()<244,physx::PxTriangleMeshGeometry,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>,physx::PxFlags<enum_physx::PxMeshGeometryFlag::Enum,unsigned_char>_>
            (&local_118,local_b8,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxTriangleMeshGeometry>_>::
  operator()<245,physx::PxTriangleMeshGeometry,physx::PxTriangleMesh_*___ptr64,physx::PxTriangleMesh_*___ptr64>
            (&local_118,local_98,2);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14328ab50 writeProperty<char_const_*___ptr64> body=125 status=ok
// SIG undefined writeProperty<char_const_*___ptr64>(void)

void physx::Sn::writeProperty<char_const_*___ptr64>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               char *param_5)

{
  longlong lVar1;
  
  if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (param_5[lVar1] != '\0');
    (**(code **)*param_3)(param_3);
  }
  param_5._0_1_ = 0;
  (**(code **)*param_3)(param_3,&param_5,1);
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_3[4]);
  param_3[3] = 0;
  return;
}



// FUNCTION 14328abd0 writeProperty<physx::PxMetaDataPlane> body=158 status=ok
// SIG undefined writeProperty<physx::PxMetaDataPlane>(void)

void physx::Sn::writeProperty<physx::PxMetaDataPlane>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               longlong param_5)

{
  longlong lVar1;
  
  lVar1 = param_5;
  physx::operator<<(param_3,param_5);
  (**(code **)*param_3)(param_3,&DAT_145af3920,1);
  toStream<double>(param_3,&DAT_145af391c,(double)*(float *)(lVar1 + 0xc));
  param_5._0_1_ = 0;
  (**(code **)*param_3)(param_3,&param_5,1);
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_3[4]);
  param_3[3] = 0;
  return;
}



// FUNCTION 14328ac70 writeProperty<physx::PxTransform> body=147 status=ok
// SIG undefined writeProperty<physx::PxTransform>(void)

void physx::Sn::writeProperty<physx::PxTransform>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               longlong param_5)

{
  longlong lVar1;
  
  lVar1 = param_5;
  physx::operator<<(param_3,param_5);
  (**(code **)*param_3)(param_3,&DAT_145af3920,1);
  physx::operator<<(param_3,lVar1 + 0x10);
  param_5._0_1_ = 0;
  (**(code **)*param_3)(param_3,&param_5,1);
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_3[4]);
  param_3[3] = 0;
  return;
}



// FUNCTION 14328ad10 writeProperty<bool> body=141 status=ok
// SIG undefined writeProperty<bool>(void)

void physx::Sn::writeProperty<bool>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               char param_5)

{
  char *pcVar1;
  longlong lVar2;
  
  pcVar1 = "false";
  if (param_5 != '\0') {
    pcVar1 = "true";
  }
  if (*pcVar1 != '\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (pcVar1[lVar2] != '\0');
    (**(code **)*param_3)(param_3);
  }
  param_5 = 0;
  (**(code **)*param_3)(param_3,&param_5,1);
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_3[4]);
  param_3[3] = 0;
  return;
}



// FUNCTION 14328ada0 writeReference<physx::PxConvexMesh> body=190 status=ok
// SIG undefined writeReference<physx::PxConvexMesh>(void)

void physx::Sn::writeReference<physx::PxConvexMesh>
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
  local_28 = "PxConvexMesh";
  local_20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,param_3,&local_28);
  return;
}



// FUNCTION 14328ae60 writeReference<physx::PxHeightField> body=190 status=ok
// SIG undefined writeReference<physx::PxHeightField>(void)

void physx::Sn::writeReference<physx::PxHeightField>
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
  local_28 = "PxHeightField";
  local_20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,param_3,&local_28);
  return;
}



// FUNCTION 14328af20 writeReference<physx::PxMaterial> body=190 status=ok
// SIG undefined writeReference<physx::PxMaterial>(void)

void physx::Sn::writeReference<physx::PxMaterial>
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
  local_28 = "PxMaterial";
  local_20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,param_3,&local_28);
  return;
}



// FUNCTION 14328afe0 writeReference<physx::PxRigidActor> body=190 status=ok
// SIG undefined writeReference<physx::PxRigidActor>(void)

void physx::Sn::writeReference<physx::PxRigidActor>
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
  local_28 = "PxRigidActor";
  local_20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,param_3,&local_28);
  return;
}



// FUNCTION 14328b0a0 writeReference<physx::PxShape> body=190 status=ok
// SIG undefined writeReference<physx::PxShape>(void)

void physx::Sn::writeReference<physx::PxShape>
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
  local_28 = "PxShape";
  local_20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,param_3,&local_28);
  return;
}



// FUNCTION 14328b160 RepXVisitorWriter<physx::PxArticulation> body=629 status=ok
// SIG undefined RepXVisitorWriter<physx::PxArticulation>(void)

undefined8 *
physx::Sn::RepXVisitorWriter<physx::PxArticulation>::RepXVisitorWriter<physx::PxArticulation>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
          longlong param_5,ulonglong param_6,undefined8 param_7)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong *puVar5;
  PxAllocatorCallback *pPVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *local_468;
  undefined1 local_460 [512];
  undefined1 local_260;
  undefined1 *local_258;
  undefined4 local_250;
  uint local_24c;
  undefined1 local_248 [512];
  undefined1 local_48;
  undefined1 *local_40;
  undefined4 local_38;
  uint local_34;
  
  uVar9 = 0;
  param_1[4] = param_6;
  *param_1 = param_2;
  param_1[5] = param_7;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  local_468 = *(undefined8 **)(param_5 + 0x10);
  local_258 = local_460;
  local_250 = 0;
  local_260 = 1;
  local_24c = 0x40;
  uVar4 = (**(code **)(*param_4 + 0xd0))(param_4);
  param_5 = 0;
  shdfnd::
  Array<physx::PxArticulationLink_*___ptr64,physx::shdfnd::InlineAllocator<512,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_*___ptr64>_>_>
  ::resize(&local_468,uVar4,&param_5);
  (**(code **)(*param_4 + 0xd8))(param_4,local_258,uVar4,0);
  if (uVar4 != 0) {
    uVar10 = (ulonglong)uVar4;
    uVar7 = uVar9;
    do {
      plVar1 = *(longlong **)(local_258 + uVar9);
      local_40 = local_248;
      local_38 = (undefined4)uVar7;
      local_48 = 1;
      local_34 = 0x40;
      uVar4 = (**(code **)(*plVar1 + 0x1c0))(plVar1);
      param_6 = uVar7;
      shdfnd::
      Array<physx::PxArticulationLink_*___ptr64,physx::shdfnd::InlineAllocator<512,physx::shdfnd::ReflectionAllocator<physx::PxArticulationLink_*___ptr64>_>_>
      ::resize(local_248,uVar4,&param_6);
      (**(code **)(*plVar1 + 0x1c8))(plVar1,local_40,uVar4,0);
      uVar8 = uVar7;
      if (uVar4 != 0) {
        uVar8 = (ulonglong)uVar4;
        do {
          uVar2 = *(ulonglong *)(local_40 + uVar7);
          param_6 = uVar2;
          puVar5 = (ulonglong *)
                   shdfnd::internal::
                   HashBase<physx::shdfnd::Pair<unsigned___int64_const_,physx::PxArticulationLink_const_*___ptr64>,unsigned___int64_const_,physx::shdfnd::Hash<unsigned___int64_const_>,physx::shdfnd::internal::HashMapBase<unsigned___int64_const_,physx::PxArticulationLink_const_*___ptr64,physx::shdfnd::Hash<unsigned___int64_const_>,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>,1>
                   ::create(param_1[5],&param_6,&param_5);
          if (((char)param_5 == '\0') && (puVar5 != (ulonglong *)0x0)) {
            *puVar5 = uVar2;
            puVar5[1] = (ulonglong)plVar1;
          }
          uVar7 = uVar7 + 8;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar3 = local_40;
      if (((((local_34 & 0x7fffffff) != 0) && (-1 < (int)local_34)) && (local_40 != local_248)) &&
         (local_40 != (undefined1 *)0x0)) {
        pPVar6 = physx::shdfnd::getAllocator();
        (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,puVar3);
      }
      uVar9 = uVar9 + 8;
      uVar10 = uVar10 - 1;
      uVar7 = uVar8;
    } while (uVar10 != 0);
  }
  if ((((local_24c & 0x7fffffff) != 0) && (-1 < (int)local_24c)) &&
     ((local_258 != local_460 && (local_258 != (undefined1 *)0x0)))) {
    (**(code **)(*(longlong *)*local_468 + 0x10))();
  }
  return param_1;
}



// FUNCTION 14328b3e0 operator<< body=181 status=ok
// SIG undefined operator<<(void)

undefined8 * physx::operator<<(undefined8 *param_1,float *param_2)

{
  toStream<double>(param_1,&DAT_145af391c,(double)*param_2);
  (**(code **)*param_1)(param_1,&DAT_145af3920,1);
  toStream<double>(param_1,&DAT_145af391c,(double)param_2[1]);
  (**(code **)*param_1)(param_1,&DAT_145af3920,1);
  toStream<double>(param_1,&DAT_145af391c,(double)param_2[2]);
  (**(code **)*param_1)(param_1,&DAT_145af3920,1);
  toStream<double>(param_1,&DAT_145af391c,(double)param_2[3]);
  return param_1;
}



// FUNCTION 14328b4a0 operator<< body=137 status=ok
// SIG undefined operator<<(void)

undefined8 * physx::operator<<(undefined8 *param_1,float *param_2)

{
  toStream<double>(param_1,&DAT_145af391c,(double)*param_2);
  (**(code **)*param_1)(param_1,&DAT_145af3920,1);
  toStream<double>(param_1,&DAT_145af391c,(double)param_2[1]);
  (**(code **)*param_1)(param_1,&DAT_145af3920,1);
  toStream<double>(param_1,&DAT_145af391c,(double)param_2[2]);
  return param_1;
}



// FUNCTION 14328b530 operator<< body=122 status=ok
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



// FUNCTION 14328b5b0 operator<< body=121 status=ok
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



// FUNCTION 14328b630 operator<< body=122 status=ok
// SIG undefined operator<<(void)

undefined8 * physx::operator<<(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char local_88 [128];
  
  ::_guard_xfg_dispatch_icall_nop(local_88,0,0x80);
  physx::shdfnd::snprintf(local_88,0x80,"%I64u");
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



// FUNCTION 14328b6b0 operator() body=153 status=ok
// SIG undefined operator()(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::operator()
               (longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  char *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined7 uStack_17;
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  lVar2 = *param_1;
  local_28 = "Links";
  local_18 = (undefined1)param_1[9];
  uStack_20 = uStack_20 & 0xffffff00;
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x45af4330;
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
  Sn::readProperty(param_1,param_1[6],param_2);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14328b750 operator() body=156 status=ok
// SIG undefined operator()(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationLink>_>::operator()
               (longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  char *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined7 uStack_17;
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  lVar2 = *param_1;
  local_28 = "Shapes";
  local_18 = (undefined1)param_1[9];
  uStack_20 = uStack_20 & 0xffffff00;
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x45af4348;
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
  Sn::readShapesProperty<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>,physx::PxRigidDynamic>
            (param_1,param_1[6],param_2,0);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14328b7f0 operator() body=149 status=ok
// SIG undefined operator()(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxRigidDynamic>_>::operator()
               (longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  char *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined7 uStack_17;
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  lVar2 = *param_1;
  local_28 = "Shapes";
  local_18 = (undefined1)param_1[9];
  uStack_20 = uStack_20 & 0xffffff00;
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x45af4348;
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
  Sn::RepXVisitorReader<physx::PxRigidDynamic>::handleShapes(param_1,param_2);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14328b890 operator() body=137 status=ok
// SIG undefined operator()(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxShape>_>::operator()
               (longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  char *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined7 uStack_17;
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  lVar2 = *param_1;
  local_28 = "Materials";
  local_18 = (undefined1)param_1[9];
  uStack_20 = uStack_20 & 0xffffff00;
  if ((*(uint *)(lVar2 + 0x14) & 0x7fffffff) <= *(uint *)(lVar2 + 0x10)) {
    shdfnd::
    Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
    ::growAndPushBack(lVar2,&local_28);
    Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
    return;
  }
  puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x45af41c0;
    puVar1[1] = 1;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    *(ulonglong *)(puVar1 + 4) = CONCAT71(uStack_17,local_18);
  }
  *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14328b920 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
physx::PxJointRepXSerializer<physx::PxD6Joint>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  PxAllocatorCallback *pPVar1;
  
  *param_1 = &PTR_FUN_145af3848;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pPVar1 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14328b970 FUN_14328b970 body=43 status=ok
// SIG undefined FUN_14328b970(void)

undefined8 * FUN_14328b970(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145af1ff8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14328b9a0 FUN_14328b9a0 body=43 status=ok
// SIG undefined FUN_14328b9a0(void)

undefined8 * FUN_14328b9a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af3848;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14328b9d0 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxArticulationLink_*___ptr64>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x14683a878,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 14328ba70 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxMaterial_*___ptr64>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x14683a8d8,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 14328bb10 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x14683a8a8,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 14328bbb0 create body=399 status=ok
// SIG undefined create(void)

longlong physx::shdfnd::internal::
         HashBase<physx::shdfnd::Pair<unsigned___int64_const_,physx::PxArticulationLink_const_*___ptr64>,unsigned___int64_const_,physx::shdfnd::Hash<unsigned___int64_const_>,physx::shdfnd::internal::HashMapBase<unsigned___int64_const_,physx::PxArticulationLink_const_*___ptr64,physx::shdfnd::Hash<unsigned___int64_const_>,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>_>::GetKey,physx::profile::PxProfileWrapperReflectionAllocator<physx::PxArticulationLink_const_*___ptr64>,1>
         ::create(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *param_3 = 0;
  }
  else {
    lVar1 = *param_2;
    uVar2 = ~(lVar1 << 0x20) + lVar1;
    uVar2 = uVar2 ^ uVar2 >> 0x16;
    uVar2 = uVar2 + ~(uVar2 << 0xd);
    uVar2 = (uVar2 >> 8 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    uVar2 = uVar2 + ~(uVar2 << 0x1b);
    uVar2 = (ulonglong)(((uint)(uVar2 >> 0x1f) ^ (uint)uVar2) & *(int *)(param_1 + 0x2c) - 1U);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x20) + uVar2 * 4);
    bVar5 = uVar3 == 0xffffffff;
    if (!bVar5) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 0x10) == lVar1) break;
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 4);
      } while (uVar3 != 0xffffffff);
      bVar5 = uVar3 == 0xffffffff;
    }
    *param_3 = !bVar5;
    if (!bVar5) {
      return (ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 0x10);
    }
  }
  if (*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0x28)) {
    uVar3 = *(uint *)(param_1 + 0x2c);
    uVar4 = 0x10;
    if (uVar3 != 0) {
      uVar4 = uVar3 * 2;
    }
    if (uVar3 < uVar4) {
      reserveInternal(param_1);
    }
    uVar2 = *param_2 + ~(*param_2 << 0x20);
    uVar2 = uVar2 ^ uVar2 >> 0x16;
    uVar2 = uVar2 + ~(uVar2 << 0xd);
    uVar2 = (uVar2 >> 8 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    uVar2 = uVar2 + ~(uVar2 << 0x1b);
    uVar2 = (ulonglong)(((uint)(uVar2 >> 0x1f) ^ (uint)uVar2) & *(int *)(param_1 + 0x2c) - 1U);
  }
  uVar3 = *(uint *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x34) = uVar3 + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x20) + uVar2 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x20) + uVar2 * 4) = uVar3;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return (ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 0x10);
}



// FUNCTION 14328be20 fileToObject body=164 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::RepXSerializerImpl<physx::PxArticulation>::fileToObject
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
    *param_2 = "PxArticulation";
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &DAT_145af3922;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14328bed0 fileToObject body=164 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::RepXSerializerImpl<physx::PxMaterial>::fileToObject
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
    *param_2 = "PxMaterial";
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &DAT_145af3922;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14328bf80 fileToObject body=164 status=ok
// SIG undefined fileToObject(void)

undefined8 *
physx::RepXSerializerImpl<physx::PxRigidDynamic>::fileToObject
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
    *param_2 = "PxRigidDynamic";
    param_2[2] = lVar2;
    return param_2;
  }
  *param_2 = &DAT_145af3922;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}


