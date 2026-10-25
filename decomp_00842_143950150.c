// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143950150 complexProperty<physx::PxRepXPropertyAccessor<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>,physx::PxVehicleGearsDataGeneratedInfo_const_> body=271 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>,physx::PxVehicleGearsDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>::
     complexProperty<physx::PxRepXPropertyAccessor<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>,physx::PxVehicleGearsDataGeneratedInfo_const_>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
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
  
  cVar1 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)(**(code **)(param_3 + 0x18))(&local_98,*(undefined8 *)(param_1 + 0x30));
    local_128 = *puVar2;
    uStack_120 = puVar2[1];
    local_118 = puVar2[2];
    uStack_110 = puVar2[3];
    local_108 = puVar2[4];
    uStack_100 = puVar2[5];
    local_f8 = puVar2[6];
    uStack_f0 = puVar2[7];
    local_e8 = puVar2[8];
    uStack_e0 = puVar2[9];
    local_d8 = puVar2[10];
    uStack_d0 = puVar2[0xb];
    local_c8 = puVar2[0xc];
    uStack_c0 = puVar2[0xd];
    local_b8 = *(undefined4 *)(puVar2 + 0xe);
    uStack_b4 = *(undefined4 *)((longlong)puVar2 + 0x74);
    uStack_b0 = *(undefined4 *)(puVar2 + 0xf);
    uStack_ac = *(undefined4 *)((longlong)puVar2 + 0x7c);
    local_a8 = *(undefined4 *)(puVar2 + 0x10);
    uStack_a4 = *(undefined4 *)((longlong)puVar2 + 0x84);
    uStack_a0 = *(undefined4 *)(puVar2 + 0x11);
    uStack_9c = *(undefined4 *)((longlong)puVar2 + 0x8c);
    readComplexObj<physx::PxVehicleGearsData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleGearsDataGeneratedInfo>
              (param_1,&local_128,param_4);
    local_98 = local_128;
    uStack_90 = uStack_120;
    local_78 = local_108;
    uStack_70 = uStack_100;
    local_88 = local_118;
    uStack_80 = uStack_110;
    local_58 = local_e8;
    uStack_50 = uStack_e0;
    local_68 = local_f8;
    uStack_60 = uStack_f0;
    local_38 = local_c8;
    uStack_30 = uStack_c0;
    local_48 = local_d8;
    uStack_40 = uStack_d0;
    local_18 = local_a8;
    uStack_14 = uStack_a4;
    uStack_10 = uStack_a0;
    uStack_c = uStack_9c;
    local_28 = local_b8;
    uStack_24 = uStack_b4;
    uStack_20 = uStack_b0;
    uStack_1c = uStack_ac;
    (**(code **)(param_3 + 0x20))(*(undefined8 *)(param_1 + 0x30),&local_98);
  }
  return;
}



// FUNCTION 143950260 complexProperty<physx::PxRepXPropertyAccessor<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>,physx::PxVehicleClutchDataGeneratedInfo_const_> body=209 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>,physx::PxVehicleClutchDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleDriveSimData4W>::
     complexProperty<physx::PxRepXPropertyAccessor<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>,physx::PxVehicleClutchDataGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [24];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  puVar5 = (undefined4 *)(**(code **)(param_3 + 0x18))(local_80,param_1[2]);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  local_90 = *puVar5;
  uStack_8c = puVar5[1];
  uStack_88 = puVar5[2];
  uStack_84 = puVar5[3];
  uVar4 = param_1[4];
  PxVehicleClutchDataGeneratedInfo::PxVehicleClutchDataGeneratedInfo(local_68);
  local_b8 = &local_90;
  local_a0 = 0;
  uStack_98 = 0;
  local_c8 = uVar1;
  local_c0 = uVar2;
  local_b0 = uVar3;
  local_a8 = uVar4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_68,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleClutchData>_>::
  operator()<587,physx::PxVehicleClutchData,enum_physx::PxVehicleClutchAccuracyMode::Enum,enum_physx::PxVehicleClutchAccuracyMode::Enum>
            (&local_c8,local_48,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>(&local_c8,local_28,2);
  return;
}



// FUNCTION 143950340 complexProperty<physx::PxRepXPropertyAccessor<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>,physx::PxVehicleAutoBoxDataGeneratedInfo_const_> body=319 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>,physx::PxVehicleAutoBoxDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>::
     complexProperty<physx::PxRepXPropertyAccessor<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>,physx::PxVehicleAutoBoxDataGeneratedInfo_const_>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 local_208 [32];
  undefined8 local_108 [32];
  
  cVar13 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar13 != '\0') {
    puVar14 = (undefined8 *)(**(code **)(param_3 + 0x18))(local_108,*(undefined8 *)(param_1 + 0x30))
    ;
    lVar17 = 2;
    lVar16 = 2;
    puVar15 = local_208;
    do {
      uVar9 = puVar14[1];
      *puVar15 = *puVar14;
      puVar15[1] = uVar9;
      uVar9 = puVar14[3];
      puVar15[2] = puVar14[2];
      puVar15[3] = uVar9;
      uVar9 = puVar14[5];
      puVar15[4] = puVar14[4];
      puVar15[5] = uVar9;
      uVar9 = puVar14[7];
      puVar15[6] = puVar14[6];
      puVar15[7] = uVar9;
      uVar9 = puVar14[9];
      puVar15[8] = puVar14[8];
      puVar15[9] = uVar9;
      uVar9 = puVar14[0xb];
      puVar15[10] = puVar14[10];
      puVar15[0xb] = uVar9;
      uVar1 = *(undefined4 *)((longlong)puVar14 + 100);
      uVar2 = *(undefined4 *)(puVar14 + 0xd);
      uVar3 = *(undefined4 *)((longlong)puVar14 + 0x6c);
      *(undefined4 *)(puVar15 + 0xc) = *(undefined4 *)(puVar14 + 0xc);
      *(undefined4 *)((longlong)puVar15 + 100) = uVar1;
      *(undefined4 *)(puVar15 + 0xd) = uVar2;
      *(undefined4 *)((longlong)puVar15 + 0x6c) = uVar3;
      uVar1 = *(undefined4 *)((longlong)puVar14 + 0x74);
      uVar2 = *(undefined4 *)(puVar14 + 0xf);
      uVar3 = *(undefined4 *)((longlong)puVar14 + 0x7c);
      *(undefined4 *)(puVar15 + 0xe) = *(undefined4 *)(puVar14 + 0xe);
      *(undefined4 *)((longlong)puVar15 + 0x74) = uVar1;
      *(undefined4 *)(puVar15 + 0xf) = uVar2;
      *(undefined4 *)((longlong)puVar15 + 0x7c) = uVar3;
      lVar16 = lVar16 + -1;
      puVar14 = puVar14 + 0x10;
      puVar15 = puVar15 + 0x10;
    } while (lVar16 != 0);
    readComplexObj<physx::PxVehicleAutoBoxData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleAutoBoxDataGeneratedInfo>
              (param_1,local_208,param_4);
    puVar14 = local_208;
    puVar15 = local_108;
    do {
      uVar9 = puVar14[1];
      uVar10 = puVar14[2];
      uVar11 = puVar14[3];
      *puVar15 = *puVar14;
      puVar15[1] = uVar9;
      uVar9 = puVar14[4];
      uVar12 = puVar14[5];
      puVar15[2] = uVar10;
      puVar15[3] = uVar11;
      uVar10 = puVar14[6];
      uVar11 = puVar14[7];
      puVar15[4] = uVar9;
      puVar15[5] = uVar12;
      uVar9 = puVar14[8];
      uVar12 = puVar14[9];
      puVar15[6] = uVar10;
      puVar15[7] = uVar11;
      uVar10 = puVar14[10];
      uVar11 = puVar14[0xb];
      puVar15[8] = uVar9;
      puVar15[9] = uVar12;
      uVar1 = *(undefined4 *)(puVar14 + 0xc);
      uVar2 = *(undefined4 *)((longlong)puVar14 + 100);
      uVar3 = *(undefined4 *)(puVar14 + 0xd);
      uVar4 = *(undefined4 *)((longlong)puVar14 + 0x6c);
      puVar15[10] = uVar10;
      puVar15[0xb] = uVar11;
      uVar5 = *(undefined4 *)(puVar14 + 0xe);
      uVar6 = *(undefined4 *)((longlong)puVar14 + 0x74);
      uVar7 = *(undefined4 *)(puVar14 + 0xf);
      uVar8 = *(undefined4 *)((longlong)puVar14 + 0x7c);
      *(undefined4 *)(puVar15 + 0xc) = uVar1;
      *(undefined4 *)((longlong)puVar15 + 100) = uVar2;
      *(undefined4 *)(puVar15 + 0xd) = uVar3;
      *(undefined4 *)((longlong)puVar15 + 0x6c) = uVar4;
      *(undefined4 *)(puVar15 + 0xe) = uVar5;
      *(undefined4 *)((longlong)puVar15 + 0x74) = uVar6;
      *(undefined4 *)(puVar15 + 0xf) = uVar7;
      *(undefined4 *)((longlong)puVar15 + 0x7c) = uVar8;
      lVar17 = lVar17 + -1;
      puVar14 = puVar14 + 0x10;
      puVar15 = puVar15 + 0x10;
    } while (lVar17 != 0);
    (**(code **)(param_3 + 0x20))(*(undefined8 *)(param_1 + 0x30),local_108);
  }
  return;
}



// FUNCTION 143950480 complexProperty<physx::PxRepXPropertyAccessor<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData>,physx::PxVehicleAckermannGeometryDataGeneratedInfo_const_> body=287 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData>,physx::PxVehicleAckermannGeometryDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>::
     complexProperty<physx::PxRepXPropertyAccessor<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData>,physx::PxVehicleAckermannGeometryDataGeneratedInfo_const_>
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
    puVar2 = (undefined8 *)(**(code **)(param_3 + 0x18))(&local_88,param_1[6]);
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
    (**(code **)(param_3 + 0x20))(param_1[6],&local_88);
  }
  return;
}



// FUNCTION 1439505a0 complexProperty<physx::PxRepXPropertyAccessor<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>,physx::PxVehicleDriveDynDataGeneratedInfo_const_> body=207 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>,physx::PxVehicleDriveDynDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>::
     complexProperty<physx::PxRepXPropertyAccessor<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>,physx::PxVehicleDriveDynDataGeneratedInfo_const_>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
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
  
  cVar1 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)(**(code **)(param_3 + 0x18))(&local_68,*(undefined8 *)(param_1 + 0x30));
    local_c8 = *puVar2;
    uStack_c0 = puVar2[1];
    local_b8 = puVar2[2];
    uStack_b0 = puVar2[3];
    local_a8 = puVar2[4];
    uStack_a0 = puVar2[5];
    local_98 = puVar2[6];
    uStack_90 = puVar2[7];
    local_88 = *(undefined4 *)(puVar2 + 8);
    uStack_84 = *(undefined4 *)((longlong)puVar2 + 0x44);
    uStack_80 = *(undefined4 *)(puVar2 + 9);
    uStack_7c = *(undefined4 *)((longlong)puVar2 + 0x4c);
    local_78 = *(undefined4 *)(puVar2 + 10);
    uStack_74 = *(undefined4 *)((longlong)puVar2 + 0x54);
    uStack_70 = *(undefined4 *)(puVar2 + 0xb);
    uStack_6c = *(undefined4 *)((longlong)puVar2 + 0x5c);
    readComplexObj<physx::PxVehicleDriveDynData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>,physx::PxVehicleDriveDynDataGeneratedInfo>
              (param_1,&local_c8,param_4);
    local_68 = local_c8;
    uStack_60 = uStack_c0;
    local_58 = local_b8;
    uStack_50 = uStack_b0;
    local_48 = local_a8;
    uStack_40 = uStack_a0;
    local_38 = local_98;
    uStack_30 = uStack_90;
    local_28 = local_88;
    uStack_24 = uStack_84;
    uStack_20 = uStack_80;
    uStack_1c = uStack_7c;
    local_18 = local_78;
    uStack_14 = uStack_74;
    uStack_10 = uStack_70;
    uStack_c = uStack_6c;
    (**(code **)(param_3 + 0x20))(*(undefined8 *)(param_1 + 0x30),&local_68);
  }
  return;
}



// FUNCTION 143950670 complexProperty<physx::PxRepXPropertyAccessor<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>,physx::PxVehicleDriveDynDataGeneratedInfo_const_> body=227 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>,physx::PxVehicleDriveDynDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleDrive4W>::
     complexProperty<physx::PxRepXPropertyAccessor<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>,physx::PxVehicleDriveDynDataGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 local_258 [592];
  
  puVar5 = (undefined8 *)(**(code **)(param_3 + 0x18))(&local_318,param_1[2]);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  local_2b8 = *puVar5;
  uStack_2b0 = puVar5[1];
  uVar4 = param_1[4];
  local_2a8 = puVar5[2];
  uStack_2a0 = puVar5[3];
  local_298 = puVar5[4];
  uStack_290 = puVar5[5];
  local_288 = puVar5[6];
  uStack_280 = puVar5[7];
  local_278 = *(undefined4 *)(puVar5 + 8);
  uStack_274 = *(undefined4 *)((longlong)puVar5 + 0x44);
  uStack_270 = *(undefined4 *)(puVar5 + 9);
  uStack_26c = *(undefined4 *)((longlong)puVar5 + 0x4c);
  local_268 = *(undefined4 *)(puVar5 + 10);
  uStack_264 = *(undefined4 *)((longlong)puVar5 + 0x54);
  uStack_260 = *(undefined4 *)(puVar5 + 0xb);
  uStack_25c = *(undefined4 *)((longlong)puVar5 + 0x5c);
  PxVehicleDriveDynDataGeneratedInfo::PxVehicleDriveDynDataGeneratedInfo(local_258);
  local_308 = &local_2b8;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_318 = uVar1;
  local_310 = uVar2;
  local_300 = uVar3;
  local_2f8 = uVar4;
  PxVehicleDriveDynDataGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveDynData>_>_>
            (local_258,&local_318,0);
  return;
}



// FUNCTION 143950760 complexProperty<physx::PxRepXPropertyAccessor<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>,physx::PxVehicleDriveSimData4WGeneratedInfo_const_> body=324 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>,physx::PxVehicleDriveSimData4WGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>::
     complexProperty<physx::PxRepXPropertyAccessor<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>,physx::PxVehicleDriveSimData4WGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined8 local_498;
  undefined1 local_488 [528];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [528];
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
  
  cVar1 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(param_3 + 0x18))(local_248,param_1[6]);
    PxVehicleDriveSimData::PxVehicleDriveSimData(local_488,lVar2);
    local_278 = *(undefined8 *)(lVar2 + 0x210);
    uStack_270 = *(undefined8 *)(lVar2 + 0x218);
    local_268 = *(undefined8 *)(lVar2 + 0x220);
    uStack_260 = *(undefined8 *)(lVar2 + 0x228);
    local_258 = *(undefined8 *)(lVar2 + 0x230);
    uStack_250 = *(undefined8 *)(lVar2 + 0x238);
    local_498 = param_1[4];
    local_4a8 = *(undefined4 *)(param_1 + 2);
    uStack_4a4 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_4a0 = *(undefined4 *)(param_1 + 3);
    uStack_49c = *(undefined4 *)((longlong)param_1 + 0x1c);
    cVar1 = readAllProperties<physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4WGeneratedInfo_const_>
                      (&local_4a8,*param_1,param_1[1],param_1[5],local_488,param_1[7],param_1[8],
                       param_4);
    if (cVar1 == '\0') {
      *(undefined1 *)param_1[10] = 1;
    }
    PxVehicleDriveSimData::PxVehicleDriveSimData(local_248,local_488);
    local_38 = local_278;
    uStack_30 = uStack_270;
    local_18 = (undefined4)local_258;
    uStack_14 = local_258._4_4_;
    uStack_10 = (undefined4)uStack_250;
    uStack_c = uStack_250._4_4_;
    local_28 = (undefined4)local_268;
    uStack_24 = local_268._4_4_;
    uStack_20 = (undefined4)uStack_260;
    uStack_1c = uStack_260._4_4_;
    PxRepXPropertyAccessor<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>
    ::set(param_3,param_1[6],local_248);
  }
  return;
}



// FUNCTION 1439508b0 complexProperty<physx::PxRepXPropertyAccessor<716,physx::PxVehicleDriveTank,physx::PxVehicleDriveSimData,physx::PxVehicleDriveSimData>,physx::PxVehicleDriveSimDataGeneratedInfo_const_> body=354 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<716,physx::PxVehicleDriveTank,physx::PxVehicleDriveSimData,physx::PxVehicleDriveSimData>,physx::PxVehicleDriveSimDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveTank>::
     complexProperty<physx::PxRepXPropertyAccessor<716,physx::PxVehicleDriveTank,physx::PxVehicleDriveSimData,physx::PxVehicleDriveSimData>,physx::PxVehicleDriveSimDataGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_8b8 [8];
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined1 *local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined1 local_868;
  char *local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined1 local_848 [528];
  undefined1 local_638 [528];
  undefined1 local_428 [528];
  undefined1 local_218 [528];
  
  cVar1 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(param_3 + 0x18))(local_638,param_1[6]);
    PxVehicleDriveSimData::PxVehicleDriveSimData(local_848,uVar2);
    local_8b0 = *param_1;
    local_8a0 = param_1[2];
    uStack_898 = param_1[3];
    local_8a8 = param_1[1];
    local_888 = param_1[5];
    local_878 = param_1[7];
    local_870 = param_1[8];
    local_890 = param_1[4];
    local_880 = local_848;
    local_860 = local_8b8;
    local_8b8[0] = '\0';
    local_868 = 1;
    local_858 = 0;
    uStack_850 = 0;
    RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
    operator()<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>
              (&local_8b0,param_4,0);
    RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
    operator()<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>
              (&local_8b0,param_4 + 0x20,1);
    RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
    operator()<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>
              (&local_8b0,param_4 + 0x40,2);
    RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
    operator()<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>
              (&local_8b0,param_4 + 0x60,3);
    if (local_8b8[0] != '\0') {
      *(undefined1 *)param_1[10] = 1;
    }
    uVar3 = PxVehicleDriveSimData::PxVehicleDriveSimData(local_638,local_848);
    uVar2 = param_1[6];
    uVar3 = PxVehicleDriveSimData::PxVehicleDriveSimData(local_428,uVar3);
    uVar3 = PxVehicleDriveSimData::PxVehicleDriveSimData(local_218,uVar3);
    (**(code **)(param_3 + 0x20))(uVar2,uVar3);
  }
  return;
}



// FUNCTION 143950a20 complexProperty<physx::PxRepXPropertyAccessor<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW>,physx::PxVehicleDriveSimDataNWGeneratedInfo_const_> body=262 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW>,physx::PxVehicleDriveSimDataNWGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveNW>::
     complexProperty<physx::PxRepXPropertyAccessor<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW>,physx::PxVehicleDriveSimDataNWGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined1 local_448 [528];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [528];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar1 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(param_3 + 0x18))(local_228,param_1[6]);
    PxVehicleDriveSimData::PxVehicleDriveSimData(local_448,lVar2);
    local_238 = *(undefined8 *)(lVar2 + 0x210);
    uStack_230 = *(undefined8 *)(lVar2 + 0x218);
    local_458 = param_1[4];
    local_468 = *(undefined4 *)(param_1 + 2);
    uStack_464 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_460 = *(undefined4 *)(param_1 + 3);
    uStack_45c = *(undefined4 *)((longlong)param_1 + 0x1c);
    cVar1 = readAllProperties<physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNWGeneratedInfo_const_>
                      (&local_468,*param_1,param_1[1],param_1[5],local_448,param_1[7],param_1[8],
                       param_4);
    if (cVar1 == '\0') {
      *(undefined1 *)param_1[10] = 1;
    }
    PxVehicleDriveSimData::PxVehicleDriveSimData(local_228,local_448);
    local_18 = (undefined4)local_238;
    uStack_14 = local_238._4_4_;
    uStack_10 = (undefined4)uStack_230;
    uStack_c = uStack_230._4_4_;
    PxRepXPropertyAccessor<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW>
    ::set(param_3,param_1[6],local_228);
  }
  return;
}



// FUNCTION 143950b30 extendedDualIndexedProperty<637,physx::PxVehicleTireData,unsigned_int,unsigned_int,float> body=922 status=ok
// SIG undefined extendedDualIndexedProperty<637,physx::PxVehicleTireData,unsigned_int,unsigned_int,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleTireData>_>::
     extendedDualIndexedProperty<637,physx::PxVehicleTireData,unsigned_int,unsigned_int,float>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  int local_res8 [2];
  char *local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined7 uStack_8f;
  char *local_88;
  char local_80 [72];
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  local_res8[0] = 0x27d;
  piVar7 = local_res8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar7 = (int *)param_1[0xb];
  }
  uVar9 = 0;
  if (param_4 != 0) {
    do {
      local_80[0] = '\0';
      local_80[1] = '\0';
      local_80[2] = '\0';
      local_80[3] = '\0';
      local_80[4] = '\0';
      local_80[5] = '\0';
      local_80[6] = '\0';
      local_80[7] = '\0';
      local_80[8] = '\0';
      local_80[9] = '\0';
      local_80[10] = '\0';
      local_80[0xb] = '\0';
      local_80[0xc] = '\0';
      local_80[0xd] = '\0';
      local_80[0xe] = '\0';
      local_80[0xf] = '\0';
      local_80[0x10] = '\0';
      local_80[0x11] = '\0';
      local_80[0x12] = '\0';
      local_80[0x13] = '\0';
      local_80[0x14] = '\0';
      local_80[0x15] = '\0';
      local_80[0x16] = '\0';
      local_80[0x17] = '\0';
      local_80[0x18] = '\0';
      local_80[0x19] = '\0';
      local_80[0x1a] = '\0';
      local_80[0x1b] = '\0';
      local_80[0x1c] = '\0';
      local_80[0x1d] = '\0';
      local_80[0x1e] = '\0';
      local_80[0x1f] = 0;
      sprintf(local_80,"eId1_%u",uVar9);
      Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
      lVar2 = *param_1;
      local_a0 = local_80;
      local_90 = (undefined1)param_1[9];
      uStack_98 = uStack_98 & 0xffffff00;
      if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x18);
        if (plVar1 != (longlong *)0x0) {
          *plVar1 = (longlong)local_a0;
          *(uint *)(plVar1 + 1) = uStack_98;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_94;
          plVar1[2] = CONCAT71(uStack_8f,local_90);
        }
        *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
        ::growAndPushBack(lVar2,&local_a0);
      }
      uVar4 = 0;
      if (param_5 != 0) {
        do {
          local_80[0x20] = 0;
          local_80[0x21] = '\0';
          local_80[0x22] = '\0';
          local_80[0x23] = '\0';
          local_80[0x24] = '\0';
          local_80[0x25] = '\0';
          local_80[0x26] = '\0';
          local_80[0x27] = '\0';
          local_80[0x28] = '\0';
          local_80[0x29] = '\0';
          local_80[0x2a] = '\0';
          local_80[0x2b] = '\0';
          local_80[0x2c] = '\0';
          local_80[0x2d] = '\0';
          local_80[0x2e] = '\0';
          local_80[0x2f] = '\0';
          local_80[0x30] = '\0';
          local_80[0x31] = '\0';
          local_80[0x32] = '\0';
          local_80[0x33] = '\0';
          local_80[0x34] = '\0';
          local_80[0x35] = '\0';
          local_80[0x36] = '\0';
          local_80[0x37] = '\0';
          local_80[0x38] = '\0';
          local_80[0x39] = '\0';
          local_80[0x3a] = '\0';
          local_80[0x3b] = '\0';
          local_80[0x3c] = '\0';
          local_80[0x3d] = '\0';
          local_80[0x3e] = '\0';
          local_80[0x3f] = 0;
          sprintf(local_80 + 0x20,"eId2_%u",uVar4);
          Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
          lVar2 = *param_1;
          local_a0 = local_80 + 0x20;
          local_90 = (undefined1)param_1[9];
          uStack_98 = uStack_98 & 0xffffff00;
          if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
            plVar1 = (longlong *)
                     (*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 0x18);
            if (plVar1 != (longlong *)0x0) {
              *plVar1 = (longlong)local_a0;
              *(uint *)(plVar1 + 1) = uStack_98;
              *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_94;
              plVar1[2] = CONCAT71(uStack_8f,local_90);
            }
            *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
          }
          else {
            shdfnd::
            Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
            ::growAndPushBack(lVar2,&local_a0);
          }
          local_88 = (char *)0x0;
          if ((char)param_1[9] != '\0') {
            lVar2 = *param_1;
            if (*(int *)(lVar2 + 0x10) == 0) {
              pcVar6 = "bad__repx__name";
            }
            else {
              pcVar6 = *(char **)(*(longlong *)(lVar2 + 8) +
                                 (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18);
            }
            cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                              ((longlong *)param_1[5],pcVar6,&local_88);
            if (((cVar3 != '\0') && (local_88 != (char *)0x0)) && (*local_88 != '\0')) {
              uVar10 = Sn::strToFloat(local_88,local_80 + 0x40);
              (*(code *)param_3[2])(param_1[6],uVar9,uVar4,uVar10);
            }
          }
          lVar2 = *param_1;
          if (*(int *)(lVar2 + 0x10) != 0) {
            if ((*(char *)(*(longlong *)(lVar2 + 8) + 8 +
                          (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18) != '\0') &&
               (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 +
                         (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18) != '\0')) {
              (**(code **)(*(longlong *)param_1[5] + 0x48))();
            }
            *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
          }
          lVar2 = *param_1;
          *(undefined1 *)(param_1 + 9) = 1;
          if (*(int *)(lVar2 + 0x10) != 0) {
            uVar5 = (char)param_1[9];
            if (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 +
                         (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18) == '\0') {
              uVar5 = 0;
            }
            *(undefined1 *)(param_1 + 9) = uVar5;
          }
          *piVar7 = *piVar7 + 1;
          uVar8 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar8;
        } while (uVar8 < param_5);
      }
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
        uVar5 = (undefined1)param_1[9];
        if (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 +
                     (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18) == '\0') {
          uVar5 = 0;
        }
        *(undefined1 *)(param_1 + 9) = uVar5;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < param_4);
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
    uVar5 = (undefined1)param_1[9];
    if (*(char *)(*(longlong *)(lVar2 + 8) + 0x10 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 9) = uVar5;
  }
  return;
}



// FUNCTION 143950ed0 extendedDualIndexedProperty<637,physx::PxVehicleTireData,unsigned_int,unsigned_int,float> body=992 status=ok
// SIG undefined extendedDualIndexedProperty<637,physx::PxVehicleTireData,unsigned_int,unsigned_int,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleTireData>_>::
     extendedDualIndexedProperty<637,physx::PxVehicleTireData,unsigned_int,unsigned_int,float>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_res8 [8];
  int iVar12;
  int local_134;
  char local_130 [64];
  char *local_f0;
  undefined1 uStack_e8;
  uint7 uStack_e7;
  char *local_e0;
  undefined1 uStack_d8;
  uint7 uStack_d7;
  char local_c8 [144];
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  local_134 = 0x27d;
  piVar8 = &local_134;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar8 = (int *)param_1[5];
  }
  iVar12 = 0;
  if ((int *)param_1[6] != (int *)0x0) {
    iVar12 = *(int *)param_1[6];
  }
  uVar9 = 0;
  if (param_4 != 0) {
    do {
      local_130[0] = '\0';
      local_130[1] = '\0';
      local_130[2] = '\0';
      local_130[3] = '\0';
      local_130[4] = '\0';
      local_130[5] = '\0';
      local_130[6] = '\0';
      local_130[7] = '\0';
      local_130[8] = '\0';
      local_130[9] = '\0';
      local_130[10] = '\0';
      local_130[0xb] = '\0';
      local_130[0xc] = '\0';
      local_130[0xd] = '\0';
      local_130[0xe] = '\0';
      local_130[0xf] = '\0';
      local_130[0x10] = '\0';
      local_130[0x11] = '\0';
      local_130[0x12] = '\0';
      local_130[0x13] = '\0';
      local_130[0x14] = '\0';
      local_130[0x15] = '\0';
      local_130[0x16] = '\0';
      local_130[0x17] = '\0';
      local_130[0x18] = '\0';
      local_130[0x19] = '\0';
      local_130[0x1a] = '\0';
      local_130[0x1b] = '\0';
      local_130[0x1c] = '\0';
      local_130[0x1d] = '\0';
      local_130[0x1e] = '\0';
      local_130[0x1f] = 0;
      iVar10 = iVar12;
      sprintf(local_130,"eId1_%u",uVar9);
      lVar7 = *param_1;
      if ((*(int *)(lVar7 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10)
          == '\0')) {
        (**(code **)(*(longlong *)param_1[1] + 0x18))
                  ((longlong *)param_1[1],
                   *(undefined8 *)
                    (*(longlong *)(lVar7 + 8) + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10));
        *(undefined1 *)
         (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      }
      lVar7 = *param_1;
      local_f0 = local_130;
      uStack_e8 = 0;
      if (*(uint *)(lVar7 + 0x10) < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
        plVar3 = (longlong *)((ulonglong)*(uint *)(lVar7 + 0x10) * 0x10 + *(longlong *)(lVar7 + 8));
        if (plVar3 != (longlong *)0x0) {
          *plVar3 = (longlong)local_f0;
          plVar3[1] = (ulonglong)uStack_e7 << 8;
        }
        *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
        ::growAndPushBack(lVar7,&local_f0);
      }
      uVar5 = 0;
      if (param_5 != 0) {
        iVar10 = iVar12 + param_5 * 4;
        do {
          local_130[0x20] = 0;
          local_130[0x21] = '\0';
          local_130[0x22] = '\0';
          local_130[0x23] = '\0';
          local_130[0x24] = '\0';
          local_130[0x25] = '\0';
          local_130[0x26] = '\0';
          local_130[0x27] = '\0';
          local_130[0x28] = '\0';
          local_130[0x29] = '\0';
          local_130[0x2a] = '\0';
          local_130[0x2b] = '\0';
          local_130[0x2c] = '\0';
          local_130[0x2d] = '\0';
          local_130[0x2e] = '\0';
          local_130[0x2f] = '\0';
          local_130[0x30] = '\0';
          local_130[0x31] = '\0';
          local_130[0x32] = '\0';
          local_130[0x33] = '\0';
          local_130[0x34] = '\0';
          local_130[0x35] = '\0';
          local_130[0x36] = '\0';
          local_130[0x37] = '\0';
          local_130[0x38] = '\0';
          local_130[0x39] = '\0';
          local_130[0x3a] = '\0';
          local_130[0x3b] = '\0';
          local_130[0x3c] = '\0';
          local_130[0x3d] = '\0';
          local_130[0x3e] = '\0';
          local_130[0x3f] = 0;
          sprintf(local_130 + 0x20,"eId2_%u",uVar5);
          lVar7 = *param_1;
          if ((*(int *)(lVar7 + 0x10) != 0) &&
             (*(char *)(*(longlong *)(lVar7 + 8) + 8 +
                       (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) == '\0')) {
            uVar6 = (ulonglong)(*(int *)(lVar7 + 0x10) - 1);
            lVar1 = *(longlong *)param_1[1];
            (**(code **)(lVar1 + 0x18))
                      ((longlong *)param_1[1],
                       *(undefined8 *)(*(longlong *)(lVar7 + 8) + uVar6 * 0x10),uVar6 * 2,lVar1,
                       iVar10);
            *(undefined1 *)
             (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) =
                 1;
          }
          lVar7 = *param_1;
          local_e0 = local_130 + 0x20;
          uStack_d8 = 0;
          if (*(uint *)(lVar7 + 0x10) < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
            plVar3 = (longlong *)
                     ((ulonglong)*(uint *)(lVar7 + 0x10) * 0x10 + *(longlong *)(lVar7 + 8));
            if (plVar3 != (longlong *)0x0) {
              *plVar3 = (longlong)local_e0;
              plVar3[1] = (ulonglong)uStack_d7 << 8;
            }
            *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
          }
          else {
            shdfnd::
            Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
            ::growAndPushBack(lVar7,&local_e0);
          }
          (*(code *)param_3[3])(param_1[2],uVar9,uVar5);
          lVar7 = *param_1;
          if (*(int *)(lVar7 + 0x10) == 0) {
            pcVar11 = "bad__repx__name";
          }
          else {
            pcVar11 = *(char **)(*(longlong *)(lVar7 + 8) +
                                (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10);
          }
          puVar2 = (undefined8 *)param_1[3];
          plVar3 = (longlong *)param_1[1];
          ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
          physx::shdfnd::snprintf(local_c8,0x80,"%g");
          if (local_c8[0] != '\0') {
            lVar7 = -1;
            do {
              lVar1 = lVar7 + 1;
              lVar7 = lVar7 + 1;
            } while (local_c8[lVar1] != '\0');
            (**(code **)*puVar2)(puVar2,local_c8);
          }
          local_res8[0] = 0;
          (**(code **)*puVar2)(puVar2,local_res8,1);
          (**(code **)(*plVar3 + 0x10))(plVar3,pcVar11,puVar2[4]);
          puVar2[3] = 0;
          lVar7 = *param_1;
          if (*(int *)(lVar7 + 0x10) != 0) {
            if (*(char *)(*(longlong *)(lVar7 + 8) + 8 +
                         (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) != '\0') {
              (**(code **)(*(longlong *)param_1[1] + 0x20))();
            }
            *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
          }
          *piVar8 = *piVar8 + 1;
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < param_5);
      }
      lVar7 = *param_1;
      if (*(int *)(lVar7 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x20))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      uVar4 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar4;
      iVar12 = iVar10;
    } while (uVar4 < param_4);
  }
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 1439512b0 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<645,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleSuspensionData>,physx::PxVehicleSuspensionDataGeneratedInfo_const_> body=400 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<645,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleSuspensionData>,physx::PxVehicleSuspensionDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<645,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleSuspensionData>,physx::PxVehicleSuspensionDataGeneratedInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint local_res8 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70;
  uint *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar2 = param_1[1];
  local_res8[0] = *(uint *)(*param_1 + 0x10);
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (uint *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 4);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = local_res8[0];
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar2,local_res8);
  }
  cVar3 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar3 != '\0') {
    iVar4 = 0;
    cVar3 = RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    while (cVar3 != '\0') {
      local_b8 = *param_1;
      local_b0 = param_1[1];
      local_90 = param_1[5];
      local_80 = param_1[7];
      local_78 = param_1[8];
      local_e8 = 0;
      uStack_e0 = 0x3dcccccd3e99999a;
      local_88 = &local_e8;
      local_a8 = param_1[2];
      lStack_a0 = param_1[3];
      local_68 = local_res8;
      local_d8 = 0;
      uStack_d0 = 0;
      local_98 = param_1[4];
      local_c8 = 0x3f800000;
      local_60 = 0;
      uStack_58 = 0;
      uStack_c4 = 0x3f800000;
      local_res8[0] = local_res8[0] & 0xffffff00;
      local_70 = 1;
      PxVehicleSuspensionDataGeneratedInfo::
      visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleSuspensionData>_>_>
                (param_4,&local_b8,0);
      if ((char)local_res8[0] != '\0') {
        *(undefined1 *)param_1[10] = 1;
      }
      local_48 = local_e8;
      uStack_40 = uStack_e0;
      local_38 = (undefined4)local_d8;
      uStack_34 = local_d8._4_4_;
      uStack_30 = (undefined4)uStack_d0;
      uStack_2c = uStack_d0._4_4_;
      local_28 = local_c8;
      uStack_24 = uStack_c4;
      uStack_20 = uStack_c0;
      uStack_1c = uStack_bc;
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x10))(param_1[6],iVar4,&local_48);
      iVar4 = iVar4 + 1;
      if ((char)param_1[9] == '\0') break;
      cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  return;
}



// FUNCTION 143951440 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<645,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleSuspensionData>,physx::PxVehicleSuspensionDataGeneratedInfo_const_> body=885 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<645,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleSuspensionData>,physx::PxVehicleSuspensionDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<645,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleSuspensionData>,physx::PxVehicleSuspensionDataGeneratedInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  PxAllocatorCallback *pPVar9;
  uint uVar10;
  char local_488 [48];
  longlong local_458;
  longlong local_450;
  undefined8 *local_448;
  longlong local_440;
  longlong local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  char *local_420;
  undefined1 uStack_418;
  uint7 uStack_417;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined1 local_3d8 [240];
  undefined1 local_2e8;
  undefined1 *local_2e0;
  undefined4 local_2d8;
  uint local_2d4;
  undefined1 local_2c8 [72];
  undefined1 local_280 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [40];
  undefined1 local_178 [336];
  
  uVar6 = (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[2]);
  local_2e8 = 1;
  local_2e0 = local_3d8;
  local_2d4 = 5;
  uVar10 = 0;
  local_488[0x20] = '\0';
  local_488[0x21] = '\0';
  local_488[0x22] = -0x80;
  local_488[0x23] = '?';
  local_2d8 = 0;
  local_488[0x24] = '\0';
  local_488[0x25] = '\0';
  local_488[0x26] = -0x80;
  local_488[0x27] = '?';
  local_488[0] = '\0';
  local_488[1] = '\0';
  local_488[2] = '\0';
  local_488[3] = '\0';
  local_488[4] = '\0';
  local_488[5] = '\0';
  local_488[6] = '\0';
  local_488[7] = '\0';
  local_488[8] = -0x66;
  local_488[9] = -0x67;
  local_488[10] = -0x67;
  local_488[0xb] = '>';
  local_488[0xc] = -0x33;
  local_488[0xd] = -0x34;
  local_488[0xe] = -0x34;
  local_488[0xf] = '=';
  local_488[0x10] = 0;
  local_488[0x11] = '\0';
  local_488[0x12] = '\0';
  local_488[0x13] = '\0';
  local_488[0x14] = '\0';
  local_488[0x15] = '\0';
  local_488[0x16] = '\0';
  local_488[0x17] = '\0';
  local_488[0x18] = 0;
  local_488[0x19] = '\0';
  local_488[0x1a] = '\0';
  local_488[0x1b] = '\0';
  local_488[0x1c] = '\0';
  local_488[0x1d] = '\0';
  local_488[0x1e] = '\0';
  local_488[0x1f] = 0;
  shdfnd::
  Array<physx::PxVehicleSuspensionData,physx::shdfnd::InlineAllocator<240,physx::shdfnd::ReflectionAllocator<physx::PxVehicleSuspensionData>_>_>
  ::resize(local_3d8,uVar6,local_488);
  if (uVar6 != 0) {
    do {
      local_488[0] = '\0';
      local_488[1] = '\0';
      local_488[2] = '\0';
      local_488[3] = '\0';
      local_488[4] = '\0';
      local_488[5] = '\0';
      local_488[6] = '\0';
      local_488[7] = '\0';
      local_488[8] = '\0';
      local_488[9] = '\0';
      local_488[10] = '\0';
      local_488[0xb] = '\0';
      local_488[0xc] = '\0';
      local_488[0xd] = '\0';
      local_488[0xe] = '\0';
      local_488[0xf] = '\0';
      local_488[0x10] = 0;
      local_488[0x11] = '\0';
      local_488[0x12] = '\0';
      local_488[0x13] = '\0';
      local_488[0x14] = '\0';
      local_488[0x15] = '\0';
      local_488[0x16] = '\0';
      local_488[0x17] = '\0';
      local_488[0x18] = 0;
      local_488[0x19] = '\0';
      local_488[0x1a] = '\0';
      local_488[0x1b] = '\0';
      local_488[0x1c] = '\0';
      local_488[0x1d] = '\0';
      local_488[0x1e] = '\0';
      local_488[0x1f] = 0;
      sprintf(local_488,"id_%u",(ulonglong)uVar10);
      lVar1 = *param_1;
      if ((*(int *)(lVar1 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
          == '\0')) {
        (**(code **)(*(longlong *)param_1[1] + 0x18))
                  ((longlong *)param_1[1],
                   *(undefined8 *)
                    (*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10));
        *(undefined1 *)
         (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      }
      lVar1 = *param_1;
      local_420 = local_488;
      uStack_418 = 0;
      if (*(uint *)(lVar1 + 0x10) < (*(uint *)(lVar1 + 0x14) & 0x7fffffff)) {
        plVar7 = (longlong *)((ulonglong)*(uint *)(lVar1 + 0x10) * 0x10 + *(longlong *)(lVar1 + 8));
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)local_420;
          plVar7[1] = (ulonglong)uStack_417 << 8;
        }
        *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
        ::growAndPushBack(lVar1,&local_420);
      }
      puVar8 = (undefined8 *)
               (**(code **)(*(longlong *)(param_3 + 0x10) + 0x18))(&local_458,param_1[2],uVar10);
      local_410 = *puVar8;
      uStack_408 = puVar8[1];
      local_400 = puVar8[2];
      uStack_3f8 = puVar8[3];
      local_3f0 = puVar8[4];
      uStack_3e8 = puVar8[5];
      ::_guard_xfg_dispatch_icall_nop(local_178,0,0x148);
      PxVehicleSuspensionDataGeneratedInfo::PxVehicleSuspensionDataGeneratedInfo(local_178);
      lVar1 = *param_1;
      lVar2 = param_1[1];
      lVar3 = param_1[3];
      lVar4 = param_1[4];
      PxVehicleSuspensionDataGeneratedInfo::PxVehicleSuspensionDataGeneratedInfo(local_2c8);
      local_448 = &local_410;
      local_430 = 0;
      uStack_428 = 0;
      local_458 = lVar1;
      local_450 = lVar2;
      local_440 = lVar3;
      local_438 = lVar4;
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_280,3);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_260,4);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_240,5);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_220,6);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_200,7);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_1e0,8);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_1c0,9);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_1a0,10);
      lVar1 = *param_1;
      if (*(int *)(lVar1 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x20))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
  puVar5 = local_2e0;
  if (((((local_2d4 & 0x7fffffff) != 0) && (-1 < (int)local_2d4)) && (local_2e0 != local_3d8)) &&
     (local_2e0 != (undefined1 *)0x0)) {
    pPVar9 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar9 + 0x10))(pPVar9,puVar5);
  }
  return;
}



// FUNCTION 1439517c0 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<646,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleWheelData>,physx::PxVehicleWheelDataGeneratedInfo_const_> body=405 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<646,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleWheelData>,physx::PxVehicleWheelDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<646,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleWheelData>,physx::PxVehicleWheelDataGeneratedInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint local_res8 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70;
  uint *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar2 = param_1[1];
  local_res8[0] = *(uint *)(*param_1 + 0x10);
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (uint *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 4);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = local_res8[0];
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar2,local_res8);
  }
  cVar3 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar3 != '\0') {
    iVar4 = 0;
    cVar3 = RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    while (cVar3 != '\0') {
      local_b8 = *param_1;
      local_b0 = param_1[1];
      local_90 = param_1[5];
      local_80 = param_1[7];
      local_78 = param_1[8];
      local_e8 = 0;
      uStack_e0 = 0x41a00000;
      local_88 = &local_e8;
      local_a8 = param_1[2];
      lStack_a0 = param_1[3];
      local_68 = local_res8;
      local_d8 = 0x44bb80003e800000;
      uStack_d0 = 0;
      local_98 = param_1[4];
      local_c8 = 0;
      local_60 = 0;
      uStack_58 = 0;
      uStack_c0 = 0;
      local_res8[0] = local_res8[0] & 0xffffff00;
      local_70 = 1;
      PxVehicleWheelDataGeneratedInfo::
      visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelData>_>_>
                (param_4,&local_b8,0);
      if ((char)local_res8[0] != '\0') {
        *(undefined1 *)param_1[10] = 1;
      }
      local_48 = local_e8;
      uStack_40 = uStack_e0;
      local_38 = (undefined4)local_d8;
      uStack_34 = local_d8._4_4_;
      uStack_30 = (undefined4)uStack_d0;
      uStack_2c = uStack_d0._4_4_;
      local_28 = (undefined4)local_c8;
      uStack_24 = local_c8._4_4_;
      uStack_20 = uStack_c0;
      uStack_1c = uStack_bc;
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x10))(param_1[6],iVar4,&local_48);
      iVar4 = iVar4 + 1;
      if ((char)param_1[9] == '\0') break;
      cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  return;
}



// FUNCTION 143951960 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<646,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleWheelData>,physx::PxVehicleWheelDataGeneratedInfo_const_> body=893 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<646,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleWheelData>,physx::PxVehicleWheelDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<646,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleWheelData>,physx::PxVehicleWheelDataGeneratedInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  PxAllocatorCallback *pPVar9;
  uint uVar10;
  ulonglong uVar11;
  char local_488 [48];
  longlong local_458;
  longlong local_450;
  undefined8 *local_448;
  longlong local_440;
  longlong local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  char *local_420;
  undefined1 uStack_418;
  uint7 uStack_417;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined1 local_3d8 [240];
  undefined1 local_2e8;
  undefined1 *local_2e0;
  undefined4 local_2d8;
  uint local_2d4;
  undefined1 local_2c8 [48];
  undefined1 local_298 [32];
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [336];
  
  uVar6 = (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[2]);
  local_2e8 = 1;
  uVar11 = 0;
  local_2d4 = 5;
  local_2e0 = local_3d8;
  local_2d8 = 0;
  local_488[0] = '\0';
  local_488[1] = '\0';
  local_488[2] = '\0';
  local_488[3] = '\0';
  local_488[4] = '\0';
  local_488[5] = '\0';
  local_488[6] = '\0';
  local_488[7] = '\0';
  local_488[8] = '\0';
  local_488[9] = '\0';
  local_488[10] = -0x60;
  local_488[0xb] = 'A';
  local_488[0xc] = '\0';
  local_488[0xd] = '\0';
  local_488[0xe] = '\0';
  local_488[0xf] = '\0';
  local_488[0x20] = '\0';
  local_488[0x21] = '\0';
  local_488[0x22] = '\0';
  local_488[0x23] = '\0';
  local_488[0x24] = '\0';
  local_488[0x25] = '\0';
  local_488[0x26] = '\0';
  local_488[0x27] = '\0';
  local_488[0x10] = '\0';
  local_488[0x11] = '\0';
  local_488[0x12] = -0x80;
  local_488[0x13] = '>';
  local_488[0x14] = '\0';
  local_488[0x15] = -0x80;
  local_488[0x16] = -0x45;
  local_488[0x17] = 'D';
  local_488[0x18] = '\0';
  local_488[0x19] = '\0';
  local_488[0x1a] = '\0';
  local_488[0x1b] = '\0';
  local_488[0x1c] = 0;
  local_488[0x1d] = '\0';
  local_488[0x1e] = '\0';
  local_488[0x1f] = 0;
  local_488[0x28] = '\0';
  local_488[0x29] = '\0';
  local_488[0x2a] = '\0';
  local_488[0x2b] = '\0';
  shdfnd::
  Array<physx::PxVehicleWheelData,physx::shdfnd::InlineAllocator<240,physx::shdfnd::ReflectionAllocator<physx::PxVehicleWheelData>_>_>
  ::resize(local_3d8,uVar6,local_488);
  if (uVar6 != 0) {
    do {
      local_488[0] = '\0';
      local_488[1] = '\0';
      local_488[2] = '\0';
      local_488[3] = '\0';
      local_488[4] = '\0';
      local_488[5] = '\0';
      local_488[6] = '\0';
      local_488[7] = '\0';
      local_488[8] = '\0';
      local_488[9] = '\0';
      local_488[10] = '\0';
      local_488[0xb] = '\0';
      local_488[0xc] = '\0';
      local_488[0xd] = '\0';
      local_488[0xe] = '\0';
      local_488[0xf] = '\0';
      local_488[0x10] = '\0';
      local_488[0x11] = '\0';
      local_488[0x12] = '\0';
      local_488[0x13] = '\0';
      local_488[0x14] = '\0';
      local_488[0x15] = '\0';
      local_488[0x16] = '\0';
      local_488[0x17] = '\0';
      local_488[0x18] = '\0';
      local_488[0x19] = '\0';
      local_488[0x1a] = '\0';
      local_488[0x1b] = '\0';
      local_488[0x1c] = 0;
      local_488[0x1d] = '\0';
      local_488[0x1e] = '\0';
      local_488[0x1f] = 0;
      sprintf(local_488,"id_%u",uVar11);
      lVar1 = *param_1;
      if ((*(int *)(lVar1 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
          == '\0')) {
        (**(code **)(*(longlong *)param_1[1] + 0x18))
                  ((longlong *)param_1[1],
                   *(undefined8 *)
                    (*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10));
        *(undefined1 *)
         (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      }
      lVar1 = *param_1;
      local_420 = local_488;
      uStack_418 = 0;
      if (*(uint *)(lVar1 + 0x10) < (*(uint *)(lVar1 + 0x14) & 0x7fffffff)) {
        plVar7 = (longlong *)((ulonglong)*(uint *)(lVar1 + 0x10) * 0x10 + *(longlong *)(lVar1 + 8));
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)local_420;
          plVar7[1] = (ulonglong)uStack_417 << 8;
        }
        *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
        ::growAndPushBack(lVar1,&local_420);
      }
      puVar8 = (undefined8 *)
               (**(code **)(*(longlong *)(param_3 + 0x10) + 0x18))(&local_458,param_1[2],uVar11);
      local_410 = *puVar8;
      uStack_408 = puVar8[1];
      local_400 = puVar8[2];
      uStack_3f8 = puVar8[3];
      local_3f0 = puVar8[4];
      uStack_3e8 = puVar8[5];
      ::_guard_xfg_dispatch_icall_nop(local_178,0,0x150);
      PxVehicleWheelDataGeneratedInfo::PxVehicleWheelDataGeneratedInfo(local_178);
      lVar1 = *param_1;
      lVar2 = param_1[1];
      lVar3 = param_1[3];
      lVar4 = param_1[4];
      PxVehicleWheelDataGeneratedInfo::PxVehicleWheelDataGeneratedInfo(local_2c8);
      local_448 = &local_410;
      local_430 = 0;
      uStack_428 = 0;
      local_458 = lVar1;
      local_450 = lVar2;
      local_440 = lVar3;
      local_438 = lVar4;
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_298,2);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_278,3);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_258,4);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_238,5);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_218,6);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_1f8,7);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_1d8,8);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_1b8,9);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_458,local_198,10);
      lVar1 = *param_1;
      if (*(int *)(lVar1 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x20))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < uVar6);
  }
  puVar5 = local_2e0;
  if (((((local_2d4 & 0x7fffffff) != 0) && (-1 < (int)local_2d4)) && (local_2e0 != local_3d8)) &&
     (local_2e0 != (undefined1 *)0x0)) {
    pPVar9 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar9 + 0x10))(pPVar9,puVar5);
  }
  return;
}



// FUNCTION 143951ce0 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<647,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleTireData>,physx::PxVehicleTireDataGeneratedInfo_const_> body=460 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<647,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleTireData>,physx::PxVehicleTireDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<647,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleTireData>,physx::PxVehicleTireDataGeneratedInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint local_res8 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_80;
  uint *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar2 = param_1[1];
  local_res8[0] = *(uint *)(*param_1 + 0x10);
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (uint *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 4);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = local_res8[0];
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar2,local_res8);
  }
  cVar3 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar3 != '\0') {
    iVar4 = 0;
    cVar3 = RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    while (cVar3 != '\0') {
      local_c8 = *param_1;
      local_c0 = param_1[1];
      local_a0 = param_1[5];
      local_90 = param_1[7];
      local_88 = param_1[8];
      local_108 = 0x418f3d4d40000000;
      uStack_100 = 0x40b758b4447a0000;
      local_b8 = param_1[2];
      lStack_b0 = param_1[3];
      local_98 = &local_108;
      local_f8 = 0x3f80000000000000;
      uStack_f0 = 0x3f8000003dcccccd;
      local_a8 = param_1[4];
      local_78 = local_res8;
      uStack_e4 = 0x3f800000;
      local_70 = 0;
      uStack_68 = 0;
      local_e8 = 0x3f800000;
      uStack_dc = 0x3a83126f;
      local_d8 = 0x41200000;
      uStack_d4 = 0x3f8e38e4;
      local_res8[0] = local_res8[0] & 0xffffff00;
      local_80 = 1;
      PxVehicleTireDataGeneratedInfo::
      visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleTireData>_>_>
                (param_4,&local_c8,0);
      if ((char)local_res8[0] != '\0') {
        *(undefined1 *)param_1[10] = 1;
      }
      local_58 = local_108;
      uStack_50 = uStack_100;
      local_48 = local_f8;
      uStack_40 = uStack_f0;
      local_38 = local_e8;
      uStack_34 = (undefined4)uStack_e4;
      uStack_30 = uStack_e4._4_4_;
      uStack_2c = uStack_dc;
      local_28 = local_d8;
      uStack_24 = uStack_d4;
      uStack_20 = uStack_d0;
      uStack_1c = uStack_cc;
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x10))(param_1[6],iVar4,&local_58);
      iVar4 = iVar4 + 1;
      if ((char)param_1[9] == '\0') break;
      cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  return;
}



// FUNCTION 143951eb0 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<647,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleTireData>,physx::PxVehicleTireDataGeneratedInfo_const_> body=657 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<647,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleTireData>,physx::PxVehicleTireDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<647,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleTireData>,physx::PxVehicleTireDataGeneratedInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  PxAllocatorCallback *pPVar6;
  uint uVar7;
  char local_348 [64];
  char *local_308;
  undefined1 uStack_300;
  uint7 uStack_2ff;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [320];
  undefined1 local_178;
  undefined1 *local_170;
  undefined4 local_168;
  uint local_164;
  undefined1 local_158 [64];
  undefined1 local_118 [272];
  
  uVar3 = (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[2]);
  local_348[0x10] = 0;
  local_348[0x11] = '\0';
  local_348[0x12] = '\0';
  local_348[0x13] = '\0';
  local_348[0x14] = '\0';
  local_348[0x15] = '\0';
  local_348[0x16] = -0x80;
  local_348[0x17] = '?';
  local_348[0x18] = 0xcd;
  local_348[0x19] = -0x34;
  local_348[0x1a] = -0x34;
  local_348[0x1b] = '=';
  local_348[0x1c] = '\0';
  local_348[0x1d] = '\0';
  local_348[0x1e] = -0x80;
  local_348[0x1f] = 0x3f;
  local_170 = local_2b8;
  uVar7 = 0;
  local_348[0x2c] = 'o';
  local_348[0x2d] = '\x12';
  local_348[0x2e] = -0x7d;
  local_348[0x2f] = ':';
  local_348[0] = '\0';
  local_348[1] = '\0';
  local_348[2] = '\0';
  local_348[3] = '@';
  local_348[4] = 'M';
  local_348[5] = '=';
  local_348[6] = -0x71;
  local_348[7] = 'A';
  local_348[8] = 0;
  local_348[9] = '\0';
  local_348[10] = 'z';
  local_348[0xb] = 'D';
  local_348[0xc] = -0x4c;
  local_348[0xd] = 'X';
  local_348[0xe] = -0x49;
  local_348[0xf] = '@';
  local_168 = 0;
  local_348[0x34] = -0x1c;
  local_348[0x35] = '8';
  local_348[0x36] = -0x72;
  local_348[0x37] = '?';
  local_348[0x30] = '\0';
  local_348[0x31] = '\0';
  local_348[0x32] = ' ';
  local_348[0x33] = 'A';
  local_178 = 1;
  local_164 = 5;
  local_348[0x24] = '\0';
  local_348[0x25] = '\0';
  local_348[0x26] = -0x80;
  local_348[0x27] = '?';
  local_348[0x28] = '\0';
  local_348[0x29] = '\0';
  local_348[0x2a] = '\0';
  local_348[0x2b] = '\0';
  local_348[0x20] = '\0';
  local_348[0x21] = '\0';
  local_348[0x22] = -0x80;
  local_348[0x23] = '?';
  shdfnd::
  Array<physx::PxVehicleTireData,physx::shdfnd::InlineAllocator<320,physx::shdfnd::ReflectionAllocator<physx::PxVehicleTireData>_>_>
  ::resize(local_2b8,uVar3,local_348);
  if (uVar3 != 0) {
    do {
      local_348[0] = '\0';
      local_348[1] = '\0';
      local_348[2] = '\0';
      local_348[3] = '\0';
      local_348[4] = '\0';
      local_348[5] = '\0';
      local_348[6] = '\0';
      local_348[7] = '\0';
      local_348[8] = 0;
      local_348[9] = '\0';
      local_348[10] = '\0';
      local_348[0xb] = '\0';
      local_348[0xc] = '\0';
      local_348[0xd] = '\0';
      local_348[0xe] = '\0';
      local_348[0xf] = '\0';
      local_348[0x10] = 0;
      local_348[0x11] = '\0';
      local_348[0x12] = '\0';
      local_348[0x13] = '\0';
      local_348[0x14] = '\0';
      local_348[0x15] = '\0';
      local_348[0x16] = '\0';
      local_348[0x17] = '\0';
      local_348[0x18] = 0;
      local_348[0x19] = '\0';
      local_348[0x1a] = '\0';
      local_348[0x1b] = '\0';
      local_348[0x1c] = '\0';
      local_348[0x1d] = '\0';
      local_348[0x1e] = '\0';
      local_348[0x1f] = 0;
      sprintf(local_348,"id_%u",(ulonglong)uVar7);
      lVar1 = *param_1;
      if ((*(int *)(lVar1 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
          == '\0')) {
        (**(code **)(*(longlong *)param_1[1] + 0x18))
                  ((longlong *)param_1[1],
                   *(undefined8 *)
                    (*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10));
        *(undefined1 *)
         (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      }
      lVar1 = *param_1;
      local_308 = local_348;
      uStack_300 = 0;
      if (*(uint *)(lVar1 + 0x10) < (*(uint *)(lVar1 + 0x14) & 0x7fffffff)) {
        plVar4 = (longlong *)((ulonglong)*(uint *)(lVar1 + 0x10) * 0x10 + *(longlong *)(lVar1 + 8));
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)local_308;
          plVar4[1] = (ulonglong)uStack_2ff << 8;
        }
        *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
        ::growAndPushBack(lVar1,&local_308);
      }
      puVar5 = (undefined8 *)
               (**(code **)(*(longlong *)(param_3 + 0x10) + 0x18))(local_158,param_1[2],uVar7);
      local_2f8 = *puVar5;
      uStack_2f0 = puVar5[1];
      local_2e8 = puVar5[2];
      uStack_2e0 = puVar5[3];
      local_2d8 = puVar5[4];
      uStack_2d0 = puVar5[5];
      local_2c8 = puVar5[6];
      uStack_2c0 = puVar5[7];
      ::_guard_xfg_dispatch_icall_nop(local_118,0,0x110);
      PxVehicleTireDataGeneratedInfo::PxVehicleTireDataGeneratedInfo(local_118);
      writeAllProperties<physx::PxVehicleTireData>
                (*param_1,&local_2f8,param_1[1],param_1[3],param_1[4]);
      lVar1 = *param_1;
      if (*(int *)(lVar1 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x20))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  puVar2 = local_170;
  if (((((local_164 & 0x7fffffff) != 0) && (-1 < (int)local_164)) && (local_170 != local_2b8)) &&
     (local_170 != (undefined1 *)0x0)) {
    pPVar6 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,puVar2);
  }
  return;
}



// FUNCTION 143952150 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>,physx::PxUnknownClassInfo_const_> body=354 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>,physx::PxUnknownClassInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>,physx::PxUnknownClassInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *local_res8;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  lVar2 = param_1[1];
  local_res8 = (char *)CONCAT44(local_res8._4_4_,*(undefined4 *)(*param_1 + 0x10));
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
  cVar3 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar3 != '\0') {
    iVar5 = 0;
    cVar3 = RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    uVar6 = local_48;
    uVar7 = local_44;
    uVar8 = local_40;
    while (cVar3 != '\0') {
      pcVar4 = (char *)(**(code **)(*(longlong *)param_1[5] + 0x40))();
      if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
        *(undefined1 *)param_1[10] = 1;
      }
      else {
        local_res8 = pcVar4;
        uVar6 = strToFloat(pcVar4,&local_res8);
        uVar7 = strToFloat(local_res8,&local_res8);
        uVar8 = strToFloat(local_res8,&local_res8);
      }
      local_48 = uVar6;
      local_44 = uVar7;
      local_40 = uVar8;
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x10))(param_1[6],iVar5,&local_48);
      iVar5 = iVar5 + 1;
      if ((char)param_1[9] == '\0') break;
      cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  return;
}



// FUNCTION 1439522c0 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>,physx::PxUnknownClassInfo_const_> body=997 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>,physx::PxUnknownClassInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>,physx::PxUnknownClassInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  PxAllocatorCallback *pPVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined1 local_res8 [8];
  char local_168 [32];
  char *local_148;
  undefined1 uStack_140;
  uint7 uStack_13f;
  undefined1 local_138 [16];
  char local_128 [128];
  undefined1 local_a8 [60];
  undefined1 local_6c;
  undefined1 *local_68;
  undefined4 local_60;
  uint local_5c;
  
  uVar4 = (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[2]);
  local_60 = 0;
  local_6c = 1;
  local_68 = local_a8;
  local_5c = 5;
  shdfnd::
  Array<physx::PxVec3,physx::shdfnd::InlineAllocator<60,physx::shdfnd::ReflectionAllocator<physx::PxVec3>_>_>
  ::resize(local_a8,uVar4,local_138);
  uVar9 = 0;
  if (uVar4 != 0) {
    do {
      local_168[0] = '\0';
      local_168[1] = '\0';
      local_168[2] = '\0';
      local_168[3] = '\0';
      local_168[4] = '\0';
      local_168[5] = '\0';
      local_168[6] = '\0';
      local_168[7] = '\0';
      local_168[8] = '\0';
      local_168[9] = '\0';
      local_168[10] = '\0';
      local_168[0xb] = '\0';
      local_168[0xc] = '\0';
      local_168[0xd] = '\0';
      local_168[0xe] = '\0';
      local_168[0xf] = '\0';
      local_168[0x10] = '\0';
      local_168[0x11] = '\0';
      local_168[0x12] = '\0';
      local_168[0x13] = '\0';
      local_168[0x14] = '\0';
      local_168[0x15] = '\0';
      local_168[0x16] = '\0';
      local_168[0x17] = '\0';
      local_168[0x18] = '\0';
      local_168[0x19] = '\0';
      local_168[0x1a] = '\0';
      local_168[0x1b] = '\0';
      local_168[0x1c] = '\0';
      local_168[0x1d] = '\0';
      local_168[0x1e] = '\0';
      local_168[0x1f] = 0;
      sprintf(local_168,"id_%u",uVar9);
      lVar7 = *param_1;
      if ((*(int *)(lVar7 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10)
          == '\0')) {
        (**(code **)(*(longlong *)param_1[1] + 0x18))
                  ((longlong *)param_1[1],
                   *(undefined8 *)
                    (*(longlong *)(lVar7 + 8) + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10));
        *(undefined1 *)
         (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      }
      lVar7 = *param_1;
      local_148 = local_168;
      uStack_140 = 0;
      if (*(uint *)(lVar7 + 0x10) < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
        plVar5 = (longlong *)((ulonglong)*(uint *)(lVar7 + 0x10) * 0x10 + *(longlong *)(lVar7 + 8));
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)local_148;
          plVar5[1] = (ulonglong)uStack_13f << 8;
        }
        *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
        ::growAndPushBack(lVar7,&local_148);
      }
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x18))(local_138,param_1[2],uVar9);
      lVar7 = *param_1;
      if (*(int *)(lVar7 + 0x10) == 0) {
        pcVar10 = "bad__repx__name";
      }
      else {
        pcVar10 = *(char **)(*(longlong *)(lVar7 + 8) +
                            (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10);
      }
      puVar1 = (undefined8 *)param_1[3];
      plVar5 = (longlong *)param_1[1];
      ::_guard_xfg_dispatch_icall_nop(local_128,0,0x80);
      physx::shdfnd::snprintf(local_128,0x80,"%g");
      if (local_128[0] != '\0') {
        lVar7 = -1;
        do {
          lVar2 = lVar7 + 1;
          lVar7 = lVar7 + 1;
        } while (local_128[lVar2] != '\0');
        (**(code **)*puVar1)(puVar1,local_128);
      }
      (**(code **)*puVar1)(puVar1,&DAT_145af3920,1);
      ::_guard_xfg_dispatch_icall_nop(local_128,0,0x80);
      physx::shdfnd::snprintf(local_128,0x80,"%g");
      if (local_128[0] != '\0') {
        lVar7 = -1;
        do {
          lVar2 = lVar7 + 1;
          lVar7 = lVar7 + 1;
        } while (local_128[lVar2] != '\0');
        (**(code **)*puVar1)(puVar1,local_128);
      }
      (**(code **)*puVar1)(puVar1,&DAT_145af3920,1);
      ::_guard_xfg_dispatch_icall_nop(local_128,0,0x80);
      physx::shdfnd::snprintf(local_128,0x80,"%g");
      if (local_128[0] != '\0') {
        lVar7 = -1;
        do {
          lVar2 = lVar7 + 1;
          lVar7 = lVar7 + 1;
        } while (local_128[lVar2] != '\0');
        (**(code **)*puVar1)(puVar1,local_128);
      }
      local_res8[0] = 0;
      (**(code **)*puVar1)(puVar1,local_res8,1);
      (**(code **)(*plVar5 + 0x10))(plVar5,pcVar10,puVar1[4]);
      puVar1[3] = 0;
      lVar7 = *param_1;
      if (*(int *)(lVar7 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x20))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < uVar4);
  }
  puVar3 = local_68;
  if (((((local_5c & 0x7fffffff) != 0) && (-1 < (int)local_5c)) && (local_68 != local_a8)) &&
     (local_68 != (undefined1 *)0x0)) {
    pPVar6 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,puVar3);
  }
  return;
}



// FUNCTION 1439526b0 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<652,physx::PxVehicleWheelsSimData,unsigned_int_const_,int>,physx::PxUnknownClassInfo_const_> body=698 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<652,physx::PxVehicleWheelsSimData,unsigned_int_const_,int>,physx::PxUnknownClassInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<652,physx::PxVehicleWheelsSimData,unsigned_int_const_,int>,physx::PxUnknownClassInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  PxAllocatorCallback *pPVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *pcVar10;
  uint local_res8 [2];
  char local_118 [32];
  char *local_f8;
  undefined1 uStack_f0;
  uint7 uStack_ef;
  undefined1 local_e8 [20];
  undefined1 local_d4;
  undefined1 *local_d0;
  undefined4 local_c8;
  uint local_c4;
  char local_b8 [128];
  
  uVar4 = (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[2]);
  local_d4 = 1;
  local_c8 = 0;
  local_d0 = local_e8;
  local_c4 = 5;
  local_res8[0] = 0;
  shdfnd::Array<int,physx::shdfnd::InlineAllocator<20,physx::shdfnd::ReflectionAllocator<int>_>_>::
  resize(local_e8,uVar4,local_res8);
  uVar8 = 0;
  if (uVar4 != 0) {
    do {
      local_118[0] = '\0';
      local_118[1] = '\0';
      local_118[2] = '\0';
      local_118[3] = '\0';
      local_118[4] = '\0';
      local_118[5] = '\0';
      local_118[6] = '\0';
      local_118[7] = '\0';
      local_118[8] = '\0';
      local_118[9] = '\0';
      local_118[10] = '\0';
      local_118[0xb] = '\0';
      local_118[0xc] = '\0';
      local_118[0xd] = '\0';
      local_118[0xe] = '\0';
      local_118[0xf] = '\0';
      local_118[0x10] = '\0';
      local_118[0x11] = '\0';
      local_118[0x12] = '\0';
      local_118[0x13] = '\0';
      local_118[0x14] = '\0';
      local_118[0x15] = '\0';
      local_118[0x16] = '\0';
      local_118[0x17] = '\0';
      local_118[0x18] = '\0';
      local_118[0x19] = '\0';
      local_118[0x1a] = '\0';
      local_118[0x1b] = '\0';
      local_118[0x1c] = '\0';
      local_118[0x1d] = '\0';
      local_118[0x1e] = '\0';
      local_118[0x1f] = 0;
      sprintf(local_118,"id_%u",uVar8);
      lVar9 = *param_1;
      if ((*(int *)(lVar9 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar9 + 8) + 8 + (ulonglong)(*(int *)(lVar9 + 0x10) - 1) * 0x10)
          == '\0')) {
        (**(code **)(*(longlong *)param_1[1] + 0x18))
                  ((longlong *)param_1[1],
                   *(undefined8 *)
                    (*(longlong *)(lVar9 + 8) + (ulonglong)(*(int *)(lVar9 + 0x10) - 1) * 0x10));
        *(undefined1 *)
         (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      }
      lVar9 = *param_1;
      local_f8 = local_118;
      uStack_f0 = 0;
      if (*(uint *)(lVar9 + 0x10) < (*(uint *)(lVar9 + 0x14) & 0x7fffffff)) {
        plVar5 = (longlong *)((ulonglong)*(uint *)(lVar9 + 0x10) * 0x10 + *(longlong *)(lVar9 + 8));
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)local_f8;
          plVar5[1] = (ulonglong)uStack_ef << 8;
        }
        *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
        ::growAndPushBack(lVar9,&local_f8);
      }
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x18))(param_1[2]);
      lVar9 = *param_1;
      if (*(int *)(lVar9 + 0x10) == 0) {
        pcVar10 = "bad__repx__name";
      }
      else {
        pcVar10 = *(char **)(*(longlong *)(lVar9 + 8) +
                            (ulonglong)(*(int *)(lVar9 + 0x10) - 1) * 0x10);
      }
      puVar1 = (undefined8 *)param_1[3];
      plVar5 = (longlong *)param_1[1];
      ::_guard_xfg_dispatch_icall_nop(local_b8,0,0x80);
      physx::shdfnd::snprintf(local_b8,0x80,"%d");
      if (local_b8[0] != '\0') {
        lVar9 = -1;
        do {
          lVar2 = lVar9 + 1;
          lVar9 = lVar9 + 1;
        } while (local_b8[lVar2] != '\0');
        (**(code **)*puVar1)(puVar1,local_b8);
      }
      local_res8[0] = local_res8[0] & 0xffffff00;
      (**(code **)*puVar1)(puVar1,local_res8,1);
      (**(code **)(*plVar5 + 0x10))(plVar5,pcVar10,puVar1[4]);
      puVar1[3] = 0;
      lVar9 = *param_1;
      if (*(int *)(lVar9 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar9 + 8) + 8 + (ulonglong)(*(int *)(lVar9 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x20))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < uVar4);
  }
  puVar3 = local_d0;
  if (((((local_c4 & 0x7fffffff) != 0) && (-1 < (int)local_c4)) && (local_d0 != local_e8)) &&
     (local_d0 != (undefined1 *)0x0)) {
    pPVar6 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,puVar3);
  }
  return;
}



// FUNCTION 143952970 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<653,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxFilterData>,physx::PxUnknownClassInfo_const_> body=355 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<653,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxFilterData>,physx::PxUnknownClassInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<653,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxFilterData>,physx::PxUnknownClassInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  char *_Str;
  int iVar4;
  char *local_res8;
  ulong local_28;
  ulong uStack_24;
  ulong uStack_20;
  ulong uStack_1c;
  ulong local_18;
  ulong uStack_14;
  ulong uStack_10;
  ulong uStack_c;
  
  lVar2 = param_1[1];
  local_res8 = (char *)CONCAT44(local_res8._4_4_,*(undefined4 *)(*param_1 + 0x10));
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
  cVar3 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar3 != '\0') {
    iVar4 = 0;
    cVar3 = RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    while (cVar3 != '\0') {
      uStack_20 = 0;
      uStack_1c = 0;
      local_28 = 0;
      uStack_24 = 0;
      _Str = (char *)(**(code **)(*(longlong *)param_1[5] + 0x40))();
      if ((_Str == (char *)0x0) || (*_Str == '\0')) {
        *(undefined1 *)param_1[10] = 1;
      }
      else {
        local_res8 = _Str;
        local_28 = strtoul(_Str,&local_res8,10);
        uStack_24 = strtoul(local_res8,&local_res8,10);
        uStack_20 = strtoul(local_res8,&local_res8,10);
        uStack_1c = strtoul(local_res8,(char **)0x0,10);
      }
      local_18 = local_28;
      uStack_14 = uStack_24;
      uStack_10 = uStack_20;
      uStack_c = uStack_1c;
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x10))(param_1[6],iVar4,&local_18);
      iVar4 = iVar4 + 1;
      if ((char)param_1[9] == '\0') break;
      cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  return;
}



// FUNCTION 143952ae0 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<653,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxFilterData>,physx::PxUnknownClassInfo_const_> body=465 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<653,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxFilterData>,physx::PxUnknownClassInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<653,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxFilterData>,physx::PxUnknownClassInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  PxAllocatorCallback *pPVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  char *local_d8;
  ulonglong uStack_d0;
  char local_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [80];
  undefined1 local_48;
  undefined1 *local_40;
  undefined4 local_38;
  uint local_34;
  undefined1 local_28 [16];
  
  uVar3 = (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[2]);
  uVar8 = 0;
  local_48 = 1;
  local_38 = 0;
  local_40 = local_98;
  local_34 = 5;
  uStack_d0 = 0;
  local_d8 = (char *)0x0;
  shdfnd::
  Array<physx::PxFilterData,physx::shdfnd::InlineAllocator<80,physx::shdfnd::ReflectionAllocator<physx::PxFilterData>_>_>
  ::resize(local_98,uVar3,&local_d8);
  if (uVar3 != 0) {
    do {
      local_c8[0] = '\0';
      local_c8[1] = '\0';
      local_c8[2] = '\0';
      local_c8[3] = '\0';
      local_c8[4] = '\0';
      local_c8[5] = '\0';
      local_c8[6] = '\0';
      local_c8[7] = '\0';
      local_c8[8] = '\0';
      local_c8[9] = '\0';
      local_c8[10] = '\0';
      local_c8[0xb] = '\0';
      local_c8[0xc] = '\0';
      local_c8[0xd] = '\0';
      local_c8[0xe] = '\0';
      local_c8[0xf] = '\0';
      local_c8[0x10] = '\0';
      local_c8[0x11] = '\0';
      local_c8[0x12] = '\0';
      local_c8[0x13] = '\0';
      local_c8[0x14] = '\0';
      local_c8[0x15] = '\0';
      local_c8[0x16] = '\0';
      local_c8[0x17] = '\0';
      local_c8[0x18] = '\0';
      local_c8[0x19] = '\0';
      local_c8[0x1a] = '\0';
      local_c8[0x1b] = '\0';
      local_c8[0x1c] = '\0';
      local_c8[0x1d] = '\0';
      local_c8[0x1e] = '\0';
      local_c8[0x1f] = 0;
      sprintf(local_c8,"id_%u",uVar8);
      lVar1 = *param_1;
      if ((*(int *)(lVar1 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
          == '\0')) {
        (**(code **)(*(longlong *)param_1[1] + 0x18))
                  ((longlong *)param_1[1],
                   *(undefined8 *)
                    (*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10));
        *(undefined1 *)
         (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      }
      lVar1 = *param_1;
      local_d8 = local_c8;
      uStack_d0 = uStack_d0 & 0xffffffffffffff00;
      if (*(uint *)(lVar1 + 0x10) < (*(uint *)(lVar1 + 0x14) & 0x7fffffff)) {
        plVar4 = (longlong *)((ulonglong)*(uint *)(lVar1 + 0x10) * 0x10 + *(longlong *)(lVar1 + 8));
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)local_d8;
          plVar4[1] = uStack_d0;
        }
        *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
        ::growAndPushBack(lVar1,&local_d8);
      }
      puVar5 = (undefined4 *)
               (**(code **)(*(longlong *)(param_3 + 0x10) + 0x18))(local_28,param_1[2],uVar8);
      local_a8 = *puVar5;
      uStack_a4 = puVar5[1];
      uStack_a0 = puVar5[2];
      uStack_9c = puVar5[3];
      handleComplexObj<physx::PxFilterData,physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>_>
                (param_1,&local_a8,local_res8);
      lVar1 = *param_1;
      if (*(int *)(lVar1 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x20))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < uVar3);
  }
  puVar2 = local_40;
  if (((((local_34 & 0x7fffffff) != 0) && (-1 < (int)local_34)) && (local_40 != local_98)) &&
     (local_40 != (undefined1 *)0x0)) {
    pPVar6 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,puVar2);
  }
  return;
}



// FUNCTION 143952cc0 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<654,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleAntiRollBarData>,physx::PxVehicleAntiRollBarDataGeneratedInfo_const_> body=242 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<654,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleAntiRollBarData>,physx::PxVehicleAntiRollBarDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<654,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleAntiRollBarData>,physx::PxVehicleAntiRollBarDataGeneratedInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 local_res8 [2];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar2 = param_1[1];
  local_res8[0] = *(undefined4 *)(*param_1 + 0x10);
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_res8[0];
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar2,local_res8);
  }
  cVar3 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar3 != '\0') {
    iVar4 = 0;
    cVar3 = RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    while (cVar3 != '\0') {
      local_28 = 0xffffffffffffffff;
      uStack_20 = 0;
      readComplexObj<physx::PxVehicleAntiRollBarData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>,physx::PxVehicleAntiRollBarDataGeneratedInfo>
                (param_1,&local_28,param_4);
      local_18 = (undefined4)local_28;
      uStack_14 = local_28._4_4_;
      uStack_10 = uStack_20;
      uStack_c = uStack_1c;
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x10))(param_1[6],iVar4,&local_18);
      iVar4 = iVar4 + 1;
      if ((char)param_1[9] == '\0') break;
      cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  return;
}



// FUNCTION 143952dc0 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<654,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleAntiRollBarData>,physx::PxVehicleAntiRollBarDataGeneratedInfo_const_> body=702 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<654,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleAntiRollBarData>,physx::PxVehicleAntiRollBarDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<654,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleAntiRollBarData>,physx::PxVehicleAntiRollBarDataGeneratedInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  PxAllocatorCallback *pPVar9;
  uint uVar10;
  char *local_1e8;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  char local_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_168 [80];
  undefined1 local_118;
  undefined1 *local_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [16];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [96];
  
  uVar7 = (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[2]);
  local_118 = 1;
  uStack_1e0 = 0;
  local_110 = local_168;
  local_104 = 5;
  uVar10 = 0;
  local_108 = 0;
  local_1e8 = &DAT_ffffffffffffffff;
  shdfnd::
  Array<physx::PxVehicleAntiRollBarData,physx::shdfnd::InlineAllocator<80,physx::shdfnd::ReflectionAllocator<physx::PxVehicleAntiRollBarData>_>_>
  ::resize(local_168,uVar7,&local_1e8);
  if (uVar7 != 0) {
    do {
      local_1d8[0] = '\0';
      local_1d8[1] = '\0';
      local_1d8[2] = '\0';
      local_1d8[3] = '\0';
      local_1d8[4] = '\0';
      local_1d8[5] = '\0';
      local_1d8[6] = '\0';
      local_1d8[7] = '\0';
      local_1d8[8] = '\0';
      local_1d8[9] = '\0';
      local_1d8[10] = '\0';
      local_1d8[0xb] = '\0';
      local_1d8[0xc] = '\0';
      local_1d8[0xd] = '\0';
      local_1d8[0xe] = '\0';
      local_1d8[0xf] = '\0';
      local_1d8[0x10] = '\0';
      local_1d8[0x11] = '\0';
      local_1d8[0x12] = '\0';
      local_1d8[0x13] = '\0';
      local_1d8[0x14] = '\0';
      local_1d8[0x15] = '\0';
      local_1d8[0x16] = '\0';
      local_1d8[0x17] = '\0';
      local_1d8[0x18] = '\0';
      local_1d8[0x19] = '\0';
      local_1d8[0x1a] = '\0';
      local_1d8[0x1b] = '\0';
      local_1d8[0x1c] = '\0';
      local_1d8[0x1d] = '\0';
      local_1d8[0x1e] = '\0';
      local_1d8[0x1f] = 0;
      sprintf(local_1d8,"id_%u",(ulonglong)uVar10);
      lVar1 = *param_1;
      if ((*(int *)(lVar1 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
          == '\0')) {
        (**(code **)(*(longlong *)param_1[1] + 0x18))
                  ((longlong *)param_1[1],
                   *(undefined8 *)
                    (*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10));
        *(undefined1 *)
         (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      }
      uVar5 = uStack_1e0;
      lVar1 = *param_1;
      local_1e8 = local_1d8;
      uStack_1e0 = uStack_1e0 & 0xffffff00;
      if (*(uint *)(lVar1 + 0x10) < (*(uint *)(lVar1 + 0x14) & 0x7fffffff)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)*(uint *)(lVar1 + 0x10) * 0x10 + *(longlong *)(lVar1 + 8));
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = local_1e8;
          puVar8[1] = CONCAT44(uStack_1dc,uVar5) & 0xffffffffffffff00;
        }
        *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
        ::growAndPushBack(lVar1,&local_1e8);
      }
      puVar8 = (undefined8 *)
               (**(code **)(*(longlong *)(param_3 + 0x10) + 0x18))(local_f8,param_1[2],uVar10);
      local_180 = *puVar8;
      uStack_178 = puVar8[1];
      ::_guard_xfg_dispatch_icall_nop(local_88,0,0x60);
      PxVehicleAntiRollBarDataGeneratedInfo::PxVehicleAntiRollBarDataGeneratedInfo(local_88);
      lVar1 = *param_1;
      lVar2 = param_1[1];
      lVar3 = param_1[3];
      lVar4 = param_1[4];
      PxVehicleAntiRollBarDataGeneratedInfo::PxVehicleAntiRollBarDataGeneratedInfo(local_e8);
      local_1a8 = &local_180;
      local_190 = 0;
      uStack_188 = 0;
      local_1b8 = lVar1;
      local_1b0 = lVar2;
      local_1a0 = lVar3;
      local_198 = lVar4;
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
      operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>(&local_1b8,local_e8,0);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
      operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>(&local_1b8,local_c8,1);
      RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
      operator()<416,physx::PxClothStretchConfig,float,float>(&local_1b8,local_a8,2);
      lVar1 = *param_1;
      if (*(int *)(lVar1 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x20))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar7);
  }
  puVar6 = local_110;
  if (((((local_104 & 0x7fffffff) != 0) && (-1 < (int)local_104)) && (local_110 != local_168)) &&
     (local_110 != (undefined1 *)0x0)) {
    pPVar9 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar9 + 0x10))(pPVar9,puVar6);
  }
  return;
}



// FUNCTION 143953080 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<660,physx::PxVehicleWheelsSimData,unsigned_int_const_,bool>,physx::PxUnknownClassInfo_const_> body=618 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<660,physx::PxVehicleWheelsSimData,unsigned_int_const_,bool>,physx::PxUnknownClassInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<660,physx::PxVehicleWheelsSimData,unsigned_int_const_,bool>,physx::PxUnknownClassInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  PxAllocatorCallback *pPVar6;
  char *pcVar7;
  uint uVar8;
  longlong lVar9;
  char *pcVar10;
  undefined1 local_res8 [8];
  char *local_78;
  undefined1 uStack_70;
  uint7 uStack_6f;
  undefined1 local_68 [5];
  undefined1 local_63;
  undefined1 *local_60;
  undefined4 local_58;
  uint local_54;
  char local_50 [40];
  
  uVar4 = (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[2]);
  local_58 = 0;
  local_63 = 1;
  local_60 = local_68;
  local_54 = 5;
  local_res8[0] = 0;
  shdfnd::Array<bool,physx::shdfnd::InlineAllocator<5,physx::shdfnd::ReflectionAllocator<bool>_>_>::
  resize(local_68,uVar4,local_res8);
  uVar8 = 0;
  if (uVar4 != 0) {
    do {
      local_50[0] = '\0';
      local_50[1] = '\0';
      local_50[2] = '\0';
      local_50[3] = '\0';
      local_50[4] = '\0';
      local_50[5] = '\0';
      local_50[6] = '\0';
      local_50[7] = '\0';
      local_50[8] = '\0';
      local_50[9] = '\0';
      local_50[10] = '\0';
      local_50[0xb] = '\0';
      local_50[0xc] = '\0';
      local_50[0xd] = '\0';
      local_50[0xe] = '\0';
      local_50[0xf] = '\0';
      local_50[0x10] = '\0';
      local_50[0x11] = '\0';
      local_50[0x12] = '\0';
      local_50[0x13] = '\0';
      local_50[0x14] = '\0';
      local_50[0x15] = '\0';
      local_50[0x16] = '\0';
      local_50[0x17] = '\0';
      local_50[0x18] = '\0';
      local_50[0x19] = '\0';
      local_50[0x1a] = '\0';
      local_50[0x1b] = '\0';
      local_50[0x1c] = '\0';
      local_50[0x1d] = '\0';
      local_50[0x1e] = '\0';
      local_50[0x1f] = 0;
      sprintf(local_50,"id_%u",(ulonglong)uVar8);
      lVar9 = *param_1;
      if ((*(int *)(lVar9 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar9 + 8) + 8 + (ulonglong)(*(int *)(lVar9 + 0x10) - 1) * 0x10)
          == '\0')) {
        (**(code **)(*(longlong *)param_1[1] + 0x18))
                  ((longlong *)param_1[1],
                   *(undefined8 *)
                    (*(longlong *)(lVar9 + 8) + (ulonglong)(*(int *)(lVar9 + 0x10) - 1) * 0x10));
        *(undefined1 *)
         (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      }
      lVar9 = *param_1;
      local_78 = local_50;
      uStack_70 = 0;
      if (*(uint *)(lVar9 + 0x10) < (*(uint *)(lVar9 + 0x14) & 0x7fffffff)) {
        plVar5 = (longlong *)((ulonglong)*(uint *)(lVar9 + 0x10) * 0x10 + *(longlong *)(lVar9 + 8));
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)local_78;
          plVar5[1] = (ulonglong)uStack_6f << 8;
        }
        *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
        ::growAndPushBack(lVar9,&local_78);
      }
      cVar3 = (**(code **)(*(longlong *)(param_3 + 0x10) + 0x18))(param_1[2],uVar8);
      lVar9 = *param_1;
      if (*(int *)(lVar9 + 0x10) == 0) {
        pcVar10 = "bad__repx__name";
      }
      else {
        pcVar10 = *(char **)(*(longlong *)(lVar9 + 8) +
                            (ulonglong)(*(int *)(lVar9 + 0x10) - 1) * 0x10);
      }
      puVar1 = (undefined8 *)param_1[3];
      pcVar7 = "false";
      plVar5 = (longlong *)param_1[1];
      if (cVar3 != '\0') {
        pcVar7 = "true";
      }
      if (*pcVar7 != '\0') {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (pcVar7[lVar9] != '\0');
        (**(code **)*puVar1)(puVar1);
      }
      local_res8[0] = 0;
      (**(code **)*puVar1)(puVar1,local_res8,1);
      (**(code **)(*plVar5 + 0x10))(plVar5,pcVar10,puVar1[4]);
      puVar1[3] = 0;
      lVar9 = *param_1;
      if (*(int *)(lVar9 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar9 + 8) + 8 + (ulonglong)(*(int *)(lVar9 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x20))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  puVar2 = local_60;
  if (((((local_54 & 0x7fffffff) != 0) && (-1 < (int)local_54)) && (local_60 != local_68)) &&
     (local_60 != (undefined1 *)0x0)) {
    pPVar6 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,puVar2);
  }
  return;
}



// FUNCTION 1439532f0 extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>,physx::PxUnknownClassInfo_const_> body=721 status=ok
// SIG undefined extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>,physx::PxUnknownClassInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsDynData>::
     extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>,physx::PxUnknownClassInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  PxAllocatorCallback *pPVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  uint local_res8 [2];
  char local_118 [32];
  char *local_f8;
  undefined1 uStack_f0;
  uint7 uStack_ef;
  undefined1 local_e8 [20];
  undefined1 local_d4;
  undefined1 *local_d0;
  undefined4 local_c8;
  uint local_c4;
  char local_b8 [144];
  
  uVar4 = (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[2]);
  local_c8 = 0;
  local_res8[0] = 0;
  local_d0 = local_e8;
  local_d4 = 1;
  local_c4 = 5;
  shdfnd::
  Array<float,physx::shdfnd::InlineAllocator<20,physx::shdfnd::ReflectionAllocator<float>_>_>::
  resize(local_e8,uVar4,local_res8);
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      local_118[0] = '\0';
      local_118[1] = '\0';
      local_118[2] = '\0';
      local_118[3] = '\0';
      local_118[4] = '\0';
      local_118[5] = '\0';
      local_118[6] = '\0';
      local_118[7] = '\0';
      local_118[8] = '\0';
      local_118[9] = '\0';
      local_118[10] = '\0';
      local_118[0xb] = '\0';
      local_118[0xc] = '\0';
      local_118[0xd] = '\0';
      local_118[0xe] = '\0';
      local_118[0xf] = '\0';
      local_118[0x10] = '\0';
      local_118[0x11] = '\0';
      local_118[0x12] = '\0';
      local_118[0x13] = '\0';
      local_118[0x14] = '\0';
      local_118[0x15] = '\0';
      local_118[0x16] = '\0';
      local_118[0x17] = '\0';
      local_118[0x18] = '\0';
      local_118[0x19] = '\0';
      local_118[0x1a] = '\0';
      local_118[0x1b] = '\0';
      local_118[0x1c] = '\0';
      local_118[0x1d] = '\0';
      local_118[0x1e] = '\0';
      local_118[0x1f] = 0;
      sprintf(local_118,"id_%u",(ulonglong)uVar7);
      lVar8 = *param_1;
      if ((*(int *)(lVar8 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar8 + 8) + 8 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10)
          == '\0')) {
        (**(code **)(*(longlong *)param_1[1] + 0x18))
                  ((longlong *)param_1[1],
                   *(undefined8 *)
                    (*(longlong *)(lVar8 + 8) + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10));
        *(undefined1 *)
         (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      }
      lVar8 = *param_1;
      local_f8 = local_118;
      uStack_f0 = 0;
      if (*(uint *)(lVar8 + 0x10) < (*(uint *)(lVar8 + 0x14) & 0x7fffffff)) {
        plVar5 = (longlong *)((ulonglong)*(uint *)(lVar8 + 0x10) * 0x10 + *(longlong *)(lVar8 + 8));
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)local_f8;
          plVar5[1] = (ulonglong)uStack_ef << 8;
        }
        *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
        ::growAndPushBack(lVar8,&local_f8);
      }
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x18))(param_1[2],uVar7);
      lVar8 = *param_1;
      if (*(int *)(lVar8 + 0x10) == 0) {
        pcVar9 = "bad__repx__name";
      }
      else {
        pcVar9 = *(char **)(*(longlong *)(lVar8 + 8) +
                           (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10);
      }
      puVar1 = (undefined8 *)param_1[3];
      plVar5 = (longlong *)param_1[1];
      ::_guard_xfg_dispatch_icall_nop(local_b8,0,0x80);
      physx::shdfnd::snprintf(local_b8,0x80,"%g");
      if (local_b8[0] != '\0') {
        lVar8 = -1;
        do {
          lVar2 = lVar8 + 1;
          lVar8 = lVar8 + 1;
        } while (local_b8[lVar2] != '\0');
        (**(code **)*puVar1)(puVar1,local_b8);
      }
      local_res8[0] = local_res8[0] & 0xffffff00;
      (**(code **)*puVar1)(puVar1,local_res8,1);
      (**(code **)(*plVar5 + 0x10))(plVar5,pcVar9,puVar1[4]);
      puVar1[3] = 0;
      lVar8 = *param_1;
      if (*(int *)(lVar8 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x20))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  puVar3 = local_d0;
  if (((((local_c4 & 0x7fffffff) != 0) && (-1 < (int)local_c4)) && (local_d0 != local_e8)) &&
     (local_d0 != (undefined1 *)0x0)) {
    pPVar6 = physx::shdfnd::getAllocator();
    (**(code **)(*(longlong *)pPVar6 + 0x10))(pPVar6,puVar3);
  }
  return;
}



// FUNCTION 1439535d0 handleComplexObj<physx::PxFilterData,physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>_> body=262 status=ok
// SIG undefined handleComplexObj<physx::PxFilterData,physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>_>(void)

void physx::Sn::
     handleComplexObj<physx::PxFilterData,physx::Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>_>
               (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined1 local_res8 [8];
  
  lVar1 = *param_1;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  if (*(int *)(lVar1 + 0x10) == 0) {
    pcVar8 = "bad__repx__name";
  }
  else {
    pcVar8 = *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  puVar2 = (undefined8 *)param_1[3];
  plVar3 = (longlong *)param_1[1];
  puVar7 = (undefined8 *)physx::operator<<(puVar2,*param_2);
  (**(code **)*puVar7)(puVar7,&DAT_145af3920,1);
  puVar7 = (undefined8 *)physx::operator<<(puVar7,uVar4);
  (**(code **)*puVar7)(puVar7,&DAT_145af3920,1);
  puVar7 = (undefined8 *)physx::operator<<(puVar7,uVar5);
  (**(code **)*puVar7)(puVar7,&DAT_145af3920,1);
  physx::operator<<(puVar7,uVar6);
  local_res8[0] = 0;
  (**(code **)*puVar2)(puVar2,local_res8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,pcVar8,puVar2[4]);
  puVar2[3] = 0;
  return;
}



// FUNCTION 1439536e0 handleExtendedIndexProperty<645,physx::PxVehicleWheelsSimData,physx::PxVehicleSuspensionData,unsigned_int_const_,physx::PxVehicleSuspensionDataGeneratedInfo> body=149 status=ok
// SIG undefined handleExtendedIndexProperty<645,physx::PxVehicleWheelsSimData,physx::PxVehicleSuspensionData,unsigned_int_const_,physx::PxVehicleSuspensionDataGeneratedInfo>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
     handleExtendedIndexProperty<645,physx::PxVehicleWheelsSimData,physx::PxVehicleSuspensionData,unsigned_int_const_,physx::PxVehicleSuspensionDataGeneratedInfo>
               (longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 local_res10 [8];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 *local_18;
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  local_28[0] = 0;
  local_24 = 0;
  local_20 = param_2;
  local_18 = param_3;
  Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<645,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleSuspensionData>,physx::PxVehicleSuspensionDataGeneratedInfo_const_>
            (param_1,local_res10,local_28,param_4);
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



// FUNCTION 143953780 handleExtendedIndexProperty<646,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelData,unsigned_int_const_,physx::PxVehicleWheelDataGeneratedInfo> body=149 status=ok
// SIG undefined handleExtendedIndexProperty<646,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelData,unsigned_int_const_,physx::PxVehicleWheelDataGeneratedInfo>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
     handleExtendedIndexProperty<646,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelData,unsigned_int_const_,physx::PxVehicleWheelDataGeneratedInfo>
               (longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 local_res10 [8];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 *local_18;
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  local_28[0] = 0;
  local_24 = 0;
  local_20 = param_2;
  local_18 = param_3;
  Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<646,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleWheelData>,physx::PxVehicleWheelDataGeneratedInfo_const_>
            (param_1,local_res10,local_28,param_4);
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



// FUNCTION 143953820 handleExtendedIndexProperty<647,physx::PxVehicleWheelsSimData,physx::PxVehicleTireData,unsigned_int_const_,physx::PxVehicleTireDataGeneratedInfo> body=149 status=ok
// SIG undefined handleExtendedIndexProperty<647,physx::PxVehicleWheelsSimData,physx::PxVehicleTireData,unsigned_int_const_,physx::PxVehicleTireDataGeneratedInfo>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
     handleExtendedIndexProperty<647,physx::PxVehicleWheelsSimData,physx::PxVehicleTireData,unsigned_int_const_,physx::PxVehicleTireDataGeneratedInfo>
               (longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 local_res10 [8];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 *local_18;
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  local_28[0] = 0;
  local_24 = 0;
  local_20 = param_2;
  local_18 = param_3;
  Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<647,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleTireData>,physx::PxVehicleTireDataGeneratedInfo_const_>
            (param_1,local_res10,local_28,param_4);
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



// FUNCTION 1439538c0 handleExtendedIndexProperty<654,physx::PxVehicleWheelsSimData,physx::PxVehicleAntiRollBarData,unsigned_int_const_,physx::PxVehicleAntiRollBarDataGeneratedInfo> body=149 status=ok
// SIG undefined handleExtendedIndexProperty<654,physx::PxVehicleWheelsSimData,physx::PxVehicleAntiRollBarData,unsigned_int_const_,physx::PxVehicleAntiRollBarDataGeneratedInfo>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
     handleExtendedIndexProperty<654,physx::PxVehicleWheelsSimData,physx::PxVehicleAntiRollBarData,unsigned_int_const_,physx::PxVehicleAntiRollBarDataGeneratedInfo>
               (longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 local_res10 [8];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 *local_18;
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  local_28[0] = 0;
  local_24 = 0;
  local_20 = param_2;
  local_18 = param_3;
  Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<654,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleAntiRollBarData>,physx::PxVehicleAntiRollBarDataGeneratedInfo_const_>
            (param_1,local_res10,local_28,param_4);
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



// FUNCTION 143953960 indexedProperty<557,physx::PxVehicleGearsData,enum_physx::PxVehicleGearsData::Enum,float> body=537 status=ok
// SIG undefined indexedProperty<557,physx::PxVehicleGearsData,enum_physx::PxVehicleGearsData::Enum,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleGearsData>_>::
     indexedProperty<557,physx::PxVehicleGearsData,enum_physx::PxVehicleGearsData::Enum,float>
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
  int local_res8 [2];
  char *local_res20;
  undefined1 local_48 [8];
  undefined8 local_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined7 uStack_2f;
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  lVar2 = *param_4;
  local_res8[0] = 0x22d;
  piVar7 = local_res8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar7 = (int *)param_1[0xb];
  }
  while (lVar2 != 0) {
    Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
    lVar3 = *param_1;
    local_30 = (undefined1)param_1[9];
    uStack_38 = uStack_38 & 0xffffff00;
    local_40 = lVar2;
    if (*(uint *)(lVar3 + 0x10) < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
      puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        local_40._0_4_ = (undefined4)lVar2;
        local_40._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
        *puVar1 = (undefined4)local_40;
        puVar1[1] = local_40._4_4_;
        puVar1[2] = uStack_38;
        puVar1[3] = uStack_34;
        *(ulonglong *)(puVar1 + 4) = CONCAT71(uStack_2f,local_30);
      }
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
    }
    else {
      shdfnd::
      Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
      ::growAndPushBack(lVar3,&local_40);
    }
    lVar2 = param_4[1];
    local_res20 = (char *)0x0;
    if ((char)param_1[9] != '\0') {
      lVar3 = *param_1;
      if (*(int *)(lVar3 + 0x10) == 0) {
        pcVar6 = "bad__repx__name";
      }
      else {
        pcVar6 = *(char **)(*(longlong *)(lVar3 + 8) +
                           (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18);
      }
      cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                        ((longlong *)param_1[5],pcVar6,&local_res20);
      if (((cVar4 != '\0') && (local_res20 != (char *)0x0)) && (*local_res20 != '\0')) {
        uVar8 = Sn::strToFloat(local_res20,local_48);
        (*(code *)param_3[2])(param_1[6],(int)lVar2,uVar8);
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



// FUNCTION 143953b80 indexedProperty<557,physx::PxVehicleGearsData,enum_physx::PxVehicleGearsData::Enum,float> body=521 status=ok
// SIG undefined indexedProperty<557,physx::PxVehicleGearsData,enum_physx::PxVehicleGearsData::Enum,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleGearsData>_>::
     indexedProperty<557,physx::PxVehicleGearsData,enum_physx::PxVehicleGearsData::Enum,float>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 local_res8 [8];
  int local_res20 [2];
  char local_c8 [144];
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  local_res20[0] = 0x22d;
  piVar6 = local_res20;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar6 = (int *)param_1[5];
  }
  lVar5 = *param_4;
  while (lVar5 != 0) {
    Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,lVar5);
    (*(code *)param_3[3])(param_1[2],(int)param_4[1]);
    lVar5 = *param_1;
    if (*(int *)(lVar5 + 0x10) == 0) {
      pcVar4 = "bad__repx__name";
    }
    else {
      pcVar4 = *(char **)(*(longlong *)(lVar5 + 8) + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
      ;
    }
    puVar1 = (undefined8 *)param_1[3];
    plVar2 = (longlong *)param_1[1];
    ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
    physx::shdfnd::snprintf(local_c8,0x80,"%g");
    if (local_c8[0] != '\0') {
      lVar5 = -1;
      do {
        lVar3 = lVar5 + 1;
        lVar5 = lVar5 + 1;
      } while (local_c8[lVar3] != '\0');
      (**(code **)*puVar1)(puVar1,local_c8);
    }
    local_res8[0] = 0;
    (**(code **)*puVar1)(puVar1,local_res8,1);
    (**(code **)(*plVar2 + 0x10))(plVar2,pcVar4,puVar1[4]);
    puVar1[3] = 0;
    lVar5 = *param_1;
    if (*(int *)(lVar5 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
    *piVar6 = *piVar6 + 1;
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



// FUNCTION 143953d90 indexedProperty<564,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float> body=537 status=ok
// SIG undefined indexedProperty<564,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleAutoBoxData>_>::
     indexedProperty<564,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float>
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
  int local_res8 [2];
  char *local_res20;
  undefined1 local_48 [8];
  undefined8 local_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined7 uStack_2f;
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  lVar2 = *param_4;
  local_res8[0] = 0x234;
  piVar7 = local_res8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar7 = (int *)param_1[0xb];
  }
  while (lVar2 != 0) {
    Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
    lVar3 = *param_1;
    local_30 = (undefined1)param_1[9];
    uStack_38 = uStack_38 & 0xffffff00;
    local_40 = lVar2;
    if (*(uint *)(lVar3 + 0x10) < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
      puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        local_40._0_4_ = (undefined4)lVar2;
        local_40._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
        *puVar1 = (undefined4)local_40;
        puVar1[1] = local_40._4_4_;
        puVar1[2] = uStack_38;
        puVar1[3] = uStack_34;
        *(ulonglong *)(puVar1 + 4) = CONCAT71(uStack_2f,local_30);
      }
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
    }
    else {
      shdfnd::
      Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
      ::growAndPushBack(lVar3,&local_40);
    }
    lVar2 = param_4[1];
    local_res20 = (char *)0x0;
    if ((char)param_1[9] != '\0') {
      lVar3 = *param_1;
      if (*(int *)(lVar3 + 0x10) == 0) {
        pcVar6 = "bad__repx__name";
      }
      else {
        pcVar6 = *(char **)(*(longlong *)(lVar3 + 8) +
                           (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18);
      }
      cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                        ((longlong *)param_1[5],pcVar6,&local_res20);
      if (((cVar4 != '\0') && (local_res20 != (char *)0x0)) && (*local_res20 != '\0')) {
        uVar8 = Sn::strToFloat(local_res20,local_48);
        (*(code *)param_3[2])(param_1[6],(int)lVar2,uVar8);
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



// FUNCTION 143953fb0 indexedProperty<564,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float> body=521 status=ok
// SIG undefined indexedProperty<564,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleAutoBoxData>_>::
     indexedProperty<564,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 local_res8 [8];
  int local_res20 [2];
  char local_c8 [144];
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  local_res20[0] = 0x234;
  piVar6 = local_res20;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar6 = (int *)param_1[5];
  }
  lVar5 = *param_4;
  while (lVar5 != 0) {
    Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,lVar5);
    (*(code *)param_3[3])(param_1[2],(int)param_4[1]);
    lVar5 = *param_1;
    if (*(int *)(lVar5 + 0x10) == 0) {
      pcVar4 = "bad__repx__name";
    }
    else {
      pcVar4 = *(char **)(*(longlong *)(lVar5 + 8) + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
      ;
    }
    puVar1 = (undefined8 *)param_1[3];
    plVar2 = (longlong *)param_1[1];
    ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
    physx::shdfnd::snprintf(local_c8,0x80,"%g");
    if (local_c8[0] != '\0') {
      lVar5 = -1;
      do {
        lVar3 = lVar5 + 1;
        lVar5 = lVar5 + 1;
      } while (local_c8[lVar3] != '\0');
      (**(code **)*puVar1)(puVar1,local_c8);
    }
    local_res8[0] = 0;
    (**(code **)*puVar1)(puVar1,local_res8,1);
    (**(code **)(*plVar2 + 0x10))(plVar2,pcVar4,puVar1[4]);
    puVar1[3] = 0;
    lVar5 = *param_1;
    if (*(int *)(lVar5 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
    *piVar6 = *piVar6 + 1;
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



// FUNCTION 1439541c0 indexedProperty<565,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float> body=537 status=ok
// SIG undefined indexedProperty<565,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleAutoBoxData>_>::
     indexedProperty<565,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float>
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
  int local_res8 [2];
  char *local_res20;
  undefined1 local_48 [8];
  undefined8 local_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined7 uStack_2f;
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  lVar2 = *param_4;
  local_res8[0] = 0x235;
  piVar7 = local_res8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar7 = (int *)param_1[0xb];
  }
  while (lVar2 != 0) {
    Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
    lVar3 = *param_1;
    local_30 = (undefined1)param_1[9];
    uStack_38 = uStack_38 & 0xffffff00;
    local_40 = lVar2;
    if (*(uint *)(lVar3 + 0x10) < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
      puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        local_40._0_4_ = (undefined4)lVar2;
        local_40._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
        *puVar1 = (undefined4)local_40;
        puVar1[1] = local_40._4_4_;
        puVar1[2] = uStack_38;
        puVar1[3] = uStack_34;
        *(ulonglong *)(puVar1 + 4) = CONCAT71(uStack_2f,local_30);
      }
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
    }
    else {
      shdfnd::
      Array<physx::Sn::ReaderNameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::ReaderNameStackEntry>_>
      ::growAndPushBack(lVar3,&local_40);
    }
    lVar2 = param_4[1];
    local_res20 = (char *)0x0;
    if ((char)param_1[9] != '\0') {
      lVar3 = *param_1;
      if (*(int *)(lVar3 + 0x10) == 0) {
        pcVar6 = "bad__repx__name";
      }
      else {
        pcVar6 = *(char **)(*(longlong *)(lVar3 + 8) +
                           (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18);
      }
      cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                        ((longlong *)param_1[5],pcVar6,&local_res20);
      if (((cVar4 != '\0') && (local_res20 != (char *)0x0)) && (*local_res20 != '\0')) {
        uVar8 = Sn::strToFloat(local_res20,local_48);
        (*(code *)param_3[2])(param_1[6],(int)lVar2,uVar8);
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



// FUNCTION 1439543e0 indexedProperty<565,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float> body=521 status=ok
// SIG undefined indexedProperty<565,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleAutoBoxData>_>::
     indexedProperty<565,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float>
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 local_res8 [8];
  int local_res20 [2];
  char local_c8 [144];
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_3);
  local_res20[0] = 0x235;
  piVar6 = local_res20;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar6 = (int *)param_1[5];
  }
  lVar5 = *param_4;
  while (lVar5 != 0) {
    Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,lVar5);
    (*(code *)param_3[3])(param_1[2],(int)param_4[1]);
    lVar5 = *param_1;
    if (*(int *)(lVar5 + 0x10) == 0) {
      pcVar4 = "bad__repx__name";
    }
    else {
      pcVar4 = *(char **)(*(longlong *)(lVar5 + 8) + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
      ;
    }
    puVar1 = (undefined8 *)param_1[3];
    plVar2 = (longlong *)param_1[1];
    ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
    physx::shdfnd::snprintf(local_c8,0x80,"%g");
    if (local_c8[0] != '\0') {
      lVar5 = -1;
      do {
        lVar3 = lVar5 + 1;
        lVar5 = lVar5 + 1;
      } while (local_c8[lVar3] != '\0');
      (**(code **)*puVar1)(puVar1,local_c8);
    }
    local_res8[0] = 0;
    (**(code **)*puVar1)(puVar1,local_res8,1);
    (**(code **)(*plVar2 + 0x10))(plVar2,pcVar4,puVar1[4]);
    puVar1[3] = 0;
    lVar5 = *param_1;
    if (*(int *)(lVar5 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
      }
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
    }
    *piVar6 = *piVar6 + 1;
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



// FUNCTION 1439545f0 readAllProperties<physx::PxVehicleDrive4W> body=450 status=ok
// SIG undefined readAllProperties<physx::PxVehicleDrive4W>(void)

bool physx::Sn::readAllProperties<physx::PxVehicleDrive4W>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  undefined8 *local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  undefined8 **local_1a8;
  undefined8 **local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  undefined1 local_160;
  char *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_138 [216];
  undefined1 local_60 [72];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_1c0 = &local_res10;
  local_1b8 = 0;
  local_1d8 = &local_res10;
  local_1b0 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  PxVehicleDrive4WGeneratedInfo::PxVehicleDrive4WGeneratedInfo(local_138);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_1a8 = &local_1c0;
  uVar1 = param_1[2];
  local_1a0 = &local_1d8;
  local_res8[0] = '\0';
  local_158 = local_res8;
  local_168 = param_5;
  local_160 = 1;
  local_150 = 0;
  uStack_148 = 0;
  local_198 = uVar2;
  uStack_190 = uVar3;
  local_188 = uVar1;
  local_180 = param_2;
  local_178 = param_3;
  local_170 = param_4;
  PxVehicleDrive4WGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>_>
            (local_138,&local_1a8,0);
  local_1a8 = &local_1c0;
  local_1a0 = &local_1d8;
  local_158 = local_res8;
  local_168 = param_5;
  local_160 = 1;
  local_150 = 0;
  uStack_148 = 0;
  local_198 = uVar2;
  uStack_190 = uVar3;
  local_188 = uVar1;
  local_180 = param_2;
  local_178 = param_3;
  local_170 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>::
  operator()<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>
            (&local_1a8,local_60,1);
  bVar4 = local_res8[0] == '\0';
  if ((((local_1c8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1c8)) && (local_1d0 != 0)) {
    (**(code **)(*(longlong *)*local_1d8 + 0x10))();
  }
  if ((((local_1b0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1b0)) && (local_1b8 != 0)) {
    (**(code **)(*(longlong *)*local_1c0 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 1439547c0 readAllProperties<physx::PxVehicleDriveNW> body=450 status=ok
// SIG undefined readAllProperties<physx::PxVehicleDriveNW>(void)

bool physx::Sn::readAllProperties<physx::PxVehicleDriveNW>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  undefined8 *local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  undefined8 **local_1a8;
  undefined8 **local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  undefined1 local_160;
  char *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_138 [216];
  undefined1 local_60 [72];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_1c0 = &local_res10;
  local_1b8 = 0;
  local_1d8 = &local_res10;
  local_1b0 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  PxVehicleDriveNWGeneratedInfo::PxVehicleDriveNWGeneratedInfo(local_138);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_1a8 = &local_1c0;
  uVar1 = param_1[2];
  local_1a0 = &local_1d8;
  local_res8[0] = '\0';
  local_158 = local_res8;
  local_168 = param_5;
  local_160 = 1;
  local_150 = 0;
  uStack_148 = 0;
  local_198 = uVar2;
  uStack_190 = uVar3;
  local_188 = uVar1;
  local_180 = param_2;
  local_178 = param_3;
  local_170 = param_4;
  PxVehicleDrive4WGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>_>
            (local_138,&local_1a8,0);
  local_1a8 = &local_1c0;
  local_1a0 = &local_1d8;
  local_158 = local_res8;
  local_168 = param_5;
  local_160 = 1;
  local_150 = 0;
  uStack_148 = 0;
  local_198 = uVar2;
  uStack_190 = uVar3;
  local_188 = uVar1;
  local_180 = param_2;
  local_178 = param_3;
  local_170 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveNW>_>::
  operator()<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW>
            (&local_1a8,local_60,1);
  bVar4 = local_res8[0] == '\0';
  if ((((local_1c8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1c8)) && (local_1d0 != 0)) {
    (**(code **)(*(longlong *)*local_1d8 + 0x10))();
  }
  if ((((local_1b0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1b0)) && (local_1b8 != 0)) {
    (**(code **)(*(longlong *)*local_1c0 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 143954990 readAllProperties<physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4WGeneratedInfo_const_> body=293 status=ok
// SIG undefined readAllProperties<physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4WGeneratedInfo_const_>(void)

bool physx::Sn::
     readAllProperties<physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4WGeneratedInfo_const_>
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
  PxVehicleDriveSimData4WGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>_>
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
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
  operator()<702,physx::PxVehicleDriveSimData4W,physx::PxVehicleDifferential4WData_const_&___ptr64,physx::PxVehicleDifferential4WData>
            (&local_b8,param_8 + 0x80,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
  operator()<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData>
            (&local_b8,param_8 + 0xa0,1);
  return local_res8[0] == '\0';
}



// FUNCTION 143954ac0 readAllProperties<physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNWGeneratedInfo_const_> body=271 status=ok
// SIG undefined readAllProperties<physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNWGeneratedInfo_const_>(void)

bool physx::Sn::
     readAllProperties<physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNWGeneratedInfo_const_>
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
  PxVehicleDriveSimData4WGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>_>
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
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimDataNW>_>::
  operator()<719,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDifferentialNWData_const_&___ptr64,physx::PxVehicleDifferentialNWData>
            (&local_b8,param_8 + 0x80,0);
  return local_res8[0] == '\0';
}



// FUNCTION 143954bd0 readAllProperties<physx::PxVehicleDriveTank> body=470 status=ok
// SIG undefined readAllProperties<physx::PxVehicleDriveTank>(void)

bool physx::Sn::readAllProperties<physx::PxVehicleDriveTank>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  undefined8 *local_1e0;
  longlong local_1d8;
  ulonglong local_1d0;
  undefined8 **local_1c8;
  undefined8 **local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined1 local_180;
  char *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_158 [192];
  undefined1 local_98 [56];
  undefined1 local_60 [72];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_1e0 = &local_res10;
  local_1d8 = 0;
  local_1f8 = &local_res10;
  local_1d0 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  PxVehicleDriveTankGeneratedInfo::PxVehicleDriveTankGeneratedInfo(local_158);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_1c8 = &local_1e0;
  uVar1 = param_1[2];
  local_1c0 = &local_1f8;
  local_res8[0] = '\0';
  local_178 = local_res8;
  local_188 = param_5;
  local_180 = 1;
  local_170 = 0;
  uStack_168 = 0;
  local_1b8 = uVar2;
  uStack_1b0 = uVar3;
  local_1a8 = uVar1;
  local_1a0 = param_2;
  local_198 = param_3;
  local_190 = param_4;
  PxVehicleDrive4WGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>_>
            (local_158,&local_1c8,0);
  local_1c8 = &local_1e0;
  local_1c0 = &local_1f8;
  local_178 = local_res8;
  local_188 = param_5;
  local_180 = 1;
  local_170 = 0;
  uStack_168 = 0;
  local_1b8 = uVar2;
  uStack_1b0 = uVar3;
  local_1a8 = uVar1;
  local_1a0 = param_2;
  local_198 = param_3;
  local_190 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveTank>_>::
  operator()<714,physx::PxVehicleDriveTank,enum_physx::PxVehicleDriveTankControlModel::Enum_const_,enum_physx::PxVehicleDriveTankControlModel::Enum>
            (&local_1c8,local_98,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveTank>_>::
  operator()<716,physx::PxVehicleDriveTank,physx::PxVehicleDriveSimData,physx::PxVehicleDriveSimData>
            (&local_1c8,local_60,2);
  bVar4 = local_res8[0] == '\0';
  if ((((local_1e8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1e8)) && (local_1f0 != 0)) {
    (**(code **)(*(longlong *)*local_1f8 + 0x10))();
  }
  if ((((local_1d0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1d0)) && (local_1d8 != 0)) {
    (**(code **)(*(longlong *)*local_1e0 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 143954db0 readAllProperties<physx::PxVehicleNoDrive> body=510 status=ok
// SIG undefined readAllProperties<physx::PxVehicleNoDrive>(void)

bool physx::Sn::readAllProperties<physx::PxVehicleNoDrive>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_208;
  longlong local_200;
  ulonglong local_1f8;
  undefined8 *local_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  undefined8 **local_1d8;
  undefined8 **local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  char *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_168 [72];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [48];
  undefined1 local_b0 [48];
  undefined1 local_80 [104];
  
  local_res10 = (**(code **)(*param_4 + 0x18))();
  local_1f0 = &local_res10;
  local_1e8 = 0;
  local_208 = &local_res10;
  local_1e0 = 0;
  local_200 = 0;
  local_1f8 = 0;
  PxVehicleNoDriveGeneratedInfo::PxVehicleNoDriveGeneratedInfo(local_168);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_1d8 = &local_1f0;
  uVar1 = param_1[2];
  local_1d0 = &local_208;
  local_res8[0] = '\0';
  local_188 = local_res8;
  local_198 = param_5;
  local_190 = 1;
  local_180 = 0;
  uStack_178 = 0;
  local_1c8 = uVar2;
  uStack_1c0 = uVar3;
  local_1b8 = uVar1;
  local_1b0 = param_2;
  local_1a8 = param_3;
  local_1a0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>::
  operator()<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>
            (&local_1d8,local_120,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>::
  operator()<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData>
            (&local_1d8,local_100,4);
  local_1d8 = &local_1f0;
  local_1d0 = &local_208;
  local_188 = local_res8;
  local_198 = param_5;
  local_190 = 1;
  local_180 = 0;
  uStack_178 = 0;
  local_1c8 = uVar2;
  uStack_1c0 = uVar3;
  local_1b8 = uVar1;
  local_1b0 = param_2;
  local_1a8 = param_3;
  local_1a0 = param_4;
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsDynData>_>::
  operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>(&local_1d8,local_e0,0);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsDynData>_>::
  operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>(&local_1d8,local_b0,1);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsDynData>_>::
  operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>(&local_1d8,local_80,2);
  bVar4 = local_res8[0] == '\0';
  if ((((local_1f8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1f8)) && (local_200 != 0)) {
    (**(code **)(*(longlong *)*local_208 + 0x10))();
  }
  if ((((local_1e0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_1e0)) && (local_1e8 != 0)) {
    (**(code **)(*(longlong *)*local_1f0 + 0x10))();
  }
  return bVar4;
}



// FUNCTION 143954fb0 readComplexObj<physx::PxVehicleAntiRollBarData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>,physx::PxVehicleAntiRollBarDataGeneratedInfo> body=222 status=ok
// SIG undefined readComplexObj<physx::PxVehicleAntiRollBarData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>,physx::PxVehicleAntiRollBarDataGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxVehicleAntiRollBarData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>,physx::PxVehicleAntiRollBarDataGeneratedInfo>
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
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(&local_78,param_3,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(&local_78,param_3 + 0x20,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_78,param_3 + 0x40,2);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143955090 readComplexObj<physx::PxVehicleAutoBoxData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleAutoBoxDataGeneratedInfo> body=182 status=ok
// SIG undefined readComplexObj<physx::PxVehicleAutoBoxData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleAutoBoxDataGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxVehicleAutoBoxData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleAutoBoxDataGeneratedInfo>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  PxVehicleAutoBoxDataGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleAutoBoxData>_>_>
            (param_3,&local_78,0);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143955150 readComplexObj<physx::PxVehicleClutchData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleClutchDataGeneratedInfo> body=222 status=ok
// SIG undefined readComplexObj<physx::PxVehicleClutchData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleClutchDataGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxVehicleClutchData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleClutchDataGeneratedInfo>
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
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleClutchData>_>::
  operator()<587,physx::PxVehicleClutchData,enum_physx::PxVehicleClutchAccuracyMode::Enum,enum_physx::PxVehicleClutchAccuracyMode::Enum>
            (&local_78,param_3 + 0x20,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(&local_78,param_3 + 0x40,2);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143955230 readComplexObj<physx::PxVehicleDifferential4WData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleDifferential4WDataGeneratedInfo> body=182 status=ok
// SIG undefined readComplexObj<physx::PxVehicleDifferential4WData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleDifferential4WDataGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxVehicleDifferential4WData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleDifferential4WDataGeneratedInfo>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  PxVehicleDifferential4WDataGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDifferential4WData>_>_>
            (param_3,&local_78,0);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 1439552f0 readComplexObj<physx::PxVehicleDifferentialNWData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimDataNW>,physx::PxVehicleDifferentialNWDataGeneratedInfo> body=182 status=ok
// SIG undefined readComplexObj<physx::PxVehicleDifferentialNWData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimDataNW>,physx::PxVehicleDifferentialNWDataGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxVehicleDifferentialNWData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimDataNW>,physx::PxVehicleDifferentialNWDataGeneratedInfo>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(&local_78,param_3,0);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 1439553b0 readComplexObj<physx::PxVehicleDriveDynData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>,physx::PxVehicleDriveDynDataGeneratedInfo> body=182 status=ok
// SIG undefined readComplexObj<physx::PxVehicleDriveDynData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>,physx::PxVehicleDriveDynDataGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxVehicleDriveDynData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>,physx::PxVehicleDriveDynDataGeneratedInfo>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  PxVehicleDriveDynDataGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveDynData>_>_>
            (param_3,&local_78,0);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143955470 readComplexObj<physx::PxVehicleEngineData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleEngineDataGeneratedInfo> body=182 status=ok
// SIG undefined readComplexObj<physx::PxVehicleEngineData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleEngineDataGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxVehicleEngineData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleEngineDataGeneratedInfo>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  PxVehicleEngineDataGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleEngineData>_>_>
            (param_3,&local_78,0);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143955530 readComplexObj<physx::PxVehicleGearsData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleGearsDataGeneratedInfo> body=182 status=ok
// SIG undefined readComplexObj<physx::PxVehicleGearsData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleGearsDataGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxVehicleGearsData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleGearsDataGeneratedInfo>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  PxVehicleGearsDataGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleGearsData>_>_>
            (param_3,&local_78,0);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 1439555f0 readComplexObj<physx::PxVehicleWheelsDynData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>,physx::PxVehicleWheelsDynDataGeneratedInfo> body=206 status=ok
// SIG undefined readComplexObj<physx::PxVehicleWheelsDynData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>,physx::PxVehicleWheelsDynDataGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxVehicleWheelsDynData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>,physx::PxVehicleWheelsDynDataGeneratedInfo>
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
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsDynData>_>::
  operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>
            (&local_78,param_3 + 0x18,1);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsDynData>_>::
  operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>
            (&local_78,param_3 + 0x48,2);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 1439556c0 readComplexObj<physx::PxVehicleWheelsSimData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>,physx::PxVehicleWheelsSimDataGeneratedInfo> body=182 status=ok
// SIG undefined readComplexObj<physx::PxVehicleWheelsSimData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>,physx::PxVehicleWheelsSimDataGeneratedInfo>(void)

void physx::Sn::
     readComplexObj<physx::PxVehicleWheelsSimData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>,physx::PxVehicleWheelsSimDataGeneratedInfo>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  PxVehicleWheelsSimDataGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>_>
            (param_3,&local_78,0);
  if (local_res8[0] != '\0') {
    *(undefined1 *)param_1[10] = 1;
  }
  return;
}



// FUNCTION 143955780 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>_> body=285 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>_>(void)

int physx::PxVehicleDrive4WGeneratedInfo::
    visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>_>
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
  iVar1 = PxVehicleDriveGeneratedInfo::
          visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>_>
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
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>::
  operator()<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>
            (&local_78,param_1 + 0xa0,iVar1 + 1);
  return iVar1 + 2;
}



// FUNCTION 1439558a0 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>_> body=175 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>_>(void)

int physx::PxVehicleDriveGeneratedInfo::
    visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>_>
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
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>::
  operator()<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>
            (&local_78,param_1 + 0x48,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>::
  operator()<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData>
            (&local_78,param_1 + 0x68,param_3 + 4);
  return param_3 + 5;
}



// FUNCTION 143955950 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>_> body=206 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>_>(void)

int physx::PxVehicleDriveSimData4WGeneratedInfo::
    visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>_>
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
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
  operator()<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>
            (&local_78,param_1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
  operator()<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>
            (&local_78,param_1 + 0x20,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
  operator()<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>
            (&local_78,param_1 + 0x40,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
  operator()<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>
            (&local_78,param_1 + 0x60,param_3 + 3);
  return param_3 + 4;
}



// FUNCTION 143955a20 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>_> body=190 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>_>(void)

int physx::PxVehicleDrive4WGeneratedInfo::
    visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>_>
              (longlong param_1,undefined8 *param_2)

{
  int iVar1;
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
  iVar1 = PxVehicleDriveGeneratedInfo::
          visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>_>
                    (param_1,&local_48);
  local_48 = *param_2;
  local_40 = param_2[1];
  local_38 = param_2[2];
  local_30 = param_2[3];
  local_28 = param_2[4];
  local_20 = param_2[5];
  local_18 = param_2[6];
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>::
  operator()<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>
            (&local_48,param_1 + 0xa0,iVar1 + 1);
  return iVar1 + 2;
}



// FUNCTION 143955ae0 visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>_> body=122 status=ok
// SIG undefined visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>_>(void)

int physx::PxVehicleDriveGeneratedInfo::
    visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>_>
              (longlong param_1,undefined8 *param_2,int param_3)

{
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
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>::
  operator()<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>
            (&local_48,param_1 + 0x48,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>::
  operator()<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData>
            (&local_48,param_1 + 0x68,param_3 + 4);
  return param_3 + 5;
}



// FUNCTION 143955b60 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleAutoBoxData>_>_> body=118 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleAutoBoxData>_>_>(void)

int physx::PxVehicleAutoBoxDataGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleAutoBoxData>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 local_res18 [16];
  
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleAutoBoxData>_>::
  indexedProperty<564,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float>
            (param_2,param_3 + 1,param_1 + 0x20,&PTR_s_eREVERSE_14682d610,local_res18);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleAutoBoxData>_>::
  indexedProperty<565,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float>
            (param_2,param_3 + 2,param_1 + 0x40,&PTR_s_eREVERSE_14682d610,local_res18);
  return param_3 + 3;
}



// FUNCTION 143955be0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDifferential4WData>_>_> body=159 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDifferential4WData>_>_>(void)

int physx::PxVehicleDifferential4WDataGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDifferential4WData>_>_>
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
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xa0,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDifferential4WData>_>::
  operator()<574,physx::PxVehicleDifferential4WData,enum_physx::PxVehicleDifferential4WData::Enum,enum_physx::PxVehicleDifferential4WData::Enum>
            (param_2,param_1 + 0xc0,param_3 + 6);
  return param_3 + 7;
}



// FUNCTION 143955c80 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveDynData>_>_> body=368 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveDynData>_>_>(void)

int physx::PxVehicleDriveDynDataGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveDynData>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsDynData>_>::
  operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>(param_2,param_1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x30,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x50,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x70,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(param_2,param_1 + 0x90,param_3 + 4)
  ;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(param_2,param_1 + 0xb0,param_3 + 5)
  ;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xd0,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(param_2,param_1 + 0xf0,param_3 + 7)
  ;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x110,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x130,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x150,param_3 + 10);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x170,param_3 + 0xb);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 400,param_3 + 0xc);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>
            (param_2,param_1 + 0x1b0,param_3 + 0xd);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>
            (param_2,param_1 + 0x1d0,param_3 + 0xe);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x1f0,param_3 + 0xf);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x210,param_3 + 0x10);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x230,param_3 + 0x11);
  return param_3 + 0x12;
}



// FUNCTION 143955df0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleEngineData>_>_> body=235 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleEngineData>_>_>(void)

int physx::PxVehicleEngineDataGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleEngineData>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 local_res18 [8];
  undefined1 local_28 [4];
  undefined4 local_24;
  int local_20;
  undefined8 *local_18;
  
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x30));
  local_20 = param_3 + 2;
  local_28[0] = 0;
  local_24 = 0;
  local_18 = (undefined8 *)(param_1 + 0x30);
  Sn::RepXVisitorReaderBase<physx::PxVehicleEngineData>::
  PxFixedSizeLookupTableProperty<physx::Vd::PxPvdFixedSizeLookupTablePropertyAccessor<548,physx::PxVehicleEngineData,unsigned_int,float>,physx::PxUnknownClassInfo_const_>
            (param_2,local_res18,local_28,local_res18);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x68,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x88,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xa8,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 200,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xe8,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x108,param_3 + 8);
  return param_3 + 9;
}



// FUNCTION 143955ee0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleGearsData>_>_> body=121 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleGearsData>_>_>(void)

int physx::PxVehicleGearsDataGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleGearsData>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 local_res18 [16];
  
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleGearsData>_>::
  indexedProperty<557,physx::PxVehicleGearsData,enum_physx::PxVehicleGearsData::Enum,float>
            (param_2,param_3,param_1,&PTR_s_eREVERSE_14682d610,local_res18);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x20,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(param_2,param_1 + 0x40,param_3 + 2)
  ;
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x60,param_3 + 3);
  return param_3 + 4;
}



// FUNCTION 143955f60 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleSuspensionData>_>_> body=189 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleSuspensionData>_>_>(void)

int physx::PxVehicleSuspensionDataGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleSuspensionData>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x48,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x68,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x88,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xa8,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 200,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xe8,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x108,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x128,param_3 + 10);
  return param_3 + 0xb;
}



// FUNCTION 143956020 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleTireData>_>_> body=162 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleTireData>_>_>(void)

int physx::PxVehicleTireDataGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleTireData>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x48,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x68,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x88,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xa8,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>(param_2,param_1 + 200,param_3 + 7);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleTireData>_>::
  extendedDualIndexedProperty<637,physx::PxVehicleTireData,unsigned_int,unsigned_int,float>
            (param_2,param_3 + 8,param_1 + 0xe8,*(undefined4 *)(param_1 + 0x108),
             *(undefined4 *)(param_1 + 0x10c));
  return param_3 + 9;
}



// FUNCTION 1439560d0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelData>_>_> body=205 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelData>_>_>(void)

int physx::PxVehicleWheelDataGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelData>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x30,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x50,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x70,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x90,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xb0,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xd0,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xf0,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x110,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x130,param_3 + 10);
  return param_3 + 0xb;
}



// FUNCTION 1439561a0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>_> body=592 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>_>(void)

int physx::PxVehicleWheelsSimDataGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 local_res18 [8];
  undefined1 local_38 [4];
  undefined4 local_34;
  int local_30;
  undefined8 *local_28;
  
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
  operator()<645,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleSuspensionData>
            (param_2,param_1 + 0x18,param_3 + 1);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
  operator()<646,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleWheelData>
            (param_2,param_1 + 0x48,param_3 + 2);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
  operator()<647,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleTireData>
            (param_2,param_1 + 0x78,param_3 + 3);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0xa8));
  local_30 = param_3 + 4;
  local_38[0] = 0;
  local_34 = 0;
  local_28 = (undefined8 *)(param_1 + 0xa8);
  Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>,physx::PxUnknownClassInfo_const_>
            (param_2,local_res18,local_38,local_res18);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0xd8));
  local_30 = param_3 + 5;
  local_38[0] = 0;
  local_34 = 0;
  local_28 = (undefined8 *)(param_1 + 0xd8);
  Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>,physx::PxUnknownClassInfo_const_>
            (param_2,local_res18,local_38,local_res18);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x108));
  local_30 = param_3 + 6;
  local_38[0] = 0;
  local_34 = 0;
  local_28 = (undefined8 *)(param_1 + 0x108);
  Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>,physx::PxUnknownClassInfo_const_>
            (param_2,local_res18,local_38,local_res18);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x138));
  local_30 = param_3 + 7;
  local_38[0] = 0;
  local_34 = 0;
  local_28 = (undefined8 *)(param_1 + 0x138);
  Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>,physx::PxUnknownClassInfo_const_>
            (param_2,local_res18,local_38,local_res18);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
  operator()<652,physx::PxVehicleWheelsSimData,unsigned_int_const_,int>
            (param_2,param_1 + 0x168,param_3 + 8);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName
            (param_2,*(undefined8 *)(param_1 + 0x198));
  local_30 = param_3 + 9;
  local_38[0] = 0;
  local_34 = 0;
  local_28 = (undefined8 *)(param_1 + 0x198);
  Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<653,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxFilterData>,physx::PxUnknownClassInfo_const_>
            (param_2,local_res18,local_38,local_res18);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_2);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
  operator()<654,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleAntiRollBarData>
            (param_2,param_1 + 0x1c8,param_3 + 10);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
  operator()<655,physx::PxVehicleWheelsSimData,physx::PxVehicleTireLoadFilterData_const_&___ptr64,physx::PxVehicleTireLoadFilterData>
            (param_2,param_1 + 0x1f8,param_3 + 0xb);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x218,param_3 + 0xc);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x238,param_3 + 0xd);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>
            (param_2,param_1 + 600,param_3 + 0xe);
  RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxArticulation>_>::
  operator()<93,physx::PxArticulation,unsigned_int,unsigned_int>
            (param_2,param_1 + 0x278,param_3 + 0xf);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
  operator()<660,physx::PxVehicleWheelsSimData,unsigned_int_const_,bool>
            (param_2,param_1 + 0x298,param_3 + 0x10);
  return param_3 + 0x11;
}



// FUNCTION 1439563f0 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveDynData>_>_> body=368 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveDynData>_>_>(void)

int physx::PxVehicleDriveDynDataGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveDynData>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsDynData>_>::
  operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>(param_2,param_1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x30,param_3 + 1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x50,param_3 + 2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x70,param_3 + 3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>
            (param_2,param_1 + 0x90,param_3 + 4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>
            (param_2,param_1 + 0xb0,param_3 + 5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0xd0,param_3 + 6);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>
            (param_2,param_1 + 0xf0,param_3 + 7);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x110,param_3 + 8);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x130,param_3 + 9);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x150,param_3 + 10);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 0x170,param_3 + 0xb);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxArticulationJoint>_>::
  operator()<85,physx::PxArticulationJoint,bool,bool>(param_2,param_1 + 400,param_3 + 0xc);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>
            (param_2,param_1 + 0x1b0,param_3 + 0xd);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>
            (param_2,param_1 + 0x1d0,param_3 + 0xe);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x1f0,param_3 + 0xf);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x210,param_3 + 0x10);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x230,param_3 + 0x11);
  return param_3 + 0x12;
}



// FUNCTION 143956560 visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>_> body=499 status=ok
// SIG undefined visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>_>(void)

int physx::PxVehicleWheelsSimDataGeneratedInfo::
    visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>_>
              (longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 local_1b8 [96];
  undefined1 local_158 [336];
  
  ::_guard_xfg_dispatch_icall_nop(local_158,0,0x148);
  PxVehicleSuspensionDataGeneratedInfo::PxVehicleSuspensionDataGeneratedInfo(local_158);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
  handleExtendedIndexProperty<645,physx::PxVehicleWheelsSimData,physx::PxVehicleSuspensionData,unsigned_int_const_,physx::PxVehicleSuspensionDataGeneratedInfo>
            (param_2,param_3 + 1,param_1 + 0x18,local_158);
  ::_guard_xfg_dispatch_icall_nop(local_158,0,0x150);
  PxVehicleWheelDataGeneratedInfo::PxVehicleWheelDataGeneratedInfo(local_158);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
  handleExtendedIndexProperty<646,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelData,unsigned_int_const_,physx::PxVehicleWheelDataGeneratedInfo>
            (param_2,param_3 + 2,param_1 + 0x48,local_158);
  ::_guard_xfg_dispatch_icall_nop(local_158,0,0x110);
  PxVehicleTireDataGeneratedInfo::PxVehicleTireDataGeneratedInfo(local_158);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
  handleExtendedIndexProperty<647,physx::PxVehicleWheelsSimData,physx::PxVehicleTireData,unsigned_int_const_,physx::PxVehicleTireDataGeneratedInfo>
            (param_2,param_3 + 3,param_1 + 0x78,local_158);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
  operator()<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>
            (param_2,param_1 + 0xa8,param_3 + 4);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
  operator()<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>
            (param_2,param_1 + 0xd8,param_3 + 5);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
  operator()<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>
            (param_2,param_1 + 0x108,param_3 + 6);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
  operator()<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>
            (param_2,param_1 + 0x138,param_3 + 7);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
  operator()<652,physx::PxVehicleWheelsSimData,unsigned_int_const_,int>
            (param_2,param_1 + 0x168,param_3 + 8);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
  operator()<653,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxFilterData>
            (param_2,param_1 + 0x198,param_3 + 9);
  ::_guard_xfg_dispatch_icall_nop(local_1b8,0,0x60);
  PxVehicleAntiRollBarDataGeneratedInfo::PxVehicleAntiRollBarDataGeneratedInfo(local_1b8);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
  handleExtendedIndexProperty<654,physx::PxVehicleWheelsSimData,physx::PxVehicleAntiRollBarData,unsigned_int_const_,physx::PxVehicleAntiRollBarDataGeneratedInfo>
            (param_2,param_3 + 10,param_1 + 0x1c8,local_1b8);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
  operator()<655,physx::PxVehicleWheelsSimData,physx::PxVehicleTireLoadFilterData_const_&___ptr64,physx::PxVehicleTireLoadFilterData>
            (param_2,param_1 + 0x1f8,param_3 + 0xb);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x218,param_3 + 0xc);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(param_2,param_1 + 0x238,param_3 + 0xd);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>
            (param_2,param_1 + 600,param_3 + 0xe);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>
            (param_2,param_1 + 0x278,param_3 + 0xf);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
  operator()<660,physx::PxVehicleWheelsSimData,unsigned_int_const_,bool>
            (param_2,param_1 + 0x298,param_3 + 0x10);
  return param_3 + 0x11;
}



// FUNCTION 143956760 writeAllProperties<physx::PxVehicleAckermannGeometryData> body=202 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleAckermannGeometryData>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleAckermannGeometryData>
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
  
  PxVehicleAckermannGeometryDataGeneratedInfo::PxVehicleAckermannGeometryDataGeneratedInfo(local_88)
  ;
  local_a8 = param_5;
  local_a0 = 0;
  uStack_98 = 0;
  local_c8 = param_1;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_88,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_68,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_48,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_28,3);
  return;
}



// FUNCTION 143956830 writeAllProperties<physx::PxVehicleAutoBoxData> body=216 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleAutoBoxData>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleAutoBoxData>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  PxVehicleAutoBoxDataGeneratedInfo::PxVehicleAutoBoxDataGeneratedInfo(local_68);
  local_88 = param_5;
  local_80 = 0;
  uStack_78 = 0;
  local_a8 = param_1;
  local_a0 = param_3;
  local_98 = param_2;
  local_90 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_a8,local_68,0);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleAutoBoxData>_>::
  indexedProperty<564,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float>
            (&local_a8,1,local_48,&PTR_s_eREVERSE_14682d610,&param_5);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleAutoBoxData>_>::
  indexedProperty<565,physx::PxVehicleAutoBoxData,enum_physx::PxVehicleGearsData::Enum,float>
            (&local_a8,2,local_28,&PTR_s_eREVERSE_14682d610,&param_5);
  return;
}



// FUNCTION 143956910 writeAllProperties<physx::PxVehicleDifferential4WData> body=274 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleDifferential4WData>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleDifferential4WData>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  PxVehicleDifferential4WDataGeneratedInfo::PxVehicleDifferential4WDataGeneratedInfo(local_e8);
  local_108 = param_5;
  local_100 = 0;
  uStack_f8 = 0;
  local_128 = param_1;
  local_120 = param_3;
  local_118 = param_2;
  local_110 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_128,local_e8,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_128,local_c8,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_128,local_a8,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_128,local_88,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_128,local_68,4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_128,local_48,5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDifferential4WData>_>::
  operator()<574,physx::PxVehicleDifferential4WData,enum_physx::PxVehicleDifferential4WData::Enum,enum_physx::PxVehicleDifferential4WData::Enum>
            (&local_128,local_28,6);
  return;
}



// FUNCTION 143956a30 writeAllProperties<physx::PxVehicleDrive4W> body=199 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleDrive4W>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleDrive4W>
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
  undefined1 local_108 [216];
  undefined1 local_30 [40];
  
  PxVehicleDrive4WGeneratedInfo::PxVehicleDrive4WGeneratedInfo(local_108);
  local_120 = 0;
  uStack_118 = 0;
  local_128 = param_5;
  local_148 = param_1;
  local_140 = param_3;
  local_138 = param_2;
  local_130 = param_4;
  PxVehicleDrive4WGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>_>
            (local_108,&local_148,0);
  local_120 = 0;
  uStack_118 = 0;
  local_128 = param_5;
  local_148 = param_1;
  local_140 = param_3;
  local_138 = param_2;
  local_130 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>::
  operator()<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>
            (&local_148,local_30,1);
  return;
}



// FUNCTION 143956b00 writeAllProperties<physx::PxVehicleDriveNW> body=199 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleDriveNW>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleDriveNW>
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
  undefined1 local_108 [216];
  undefined1 local_30 [40];
  
  PxVehicleDriveNWGeneratedInfo::PxVehicleDriveNWGeneratedInfo(local_108);
  local_120 = 0;
  uStack_118 = 0;
  local_128 = param_5;
  local_148 = param_1;
  local_140 = param_3;
  local_138 = param_2;
  local_130 = param_4;
  PxVehicleDrive4WGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>_>
            (local_108,&local_148,0);
  local_120 = 0;
  uStack_118 = 0;
  local_128 = param_5;
  local_148 = param_1;
  local_140 = param_3;
  local_138 = param_2;
  local_130 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveNW>_>::
  operator()<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW>
            (&local_148,local_30,1);
  return;
}



// FUNCTION 143956bd0 writeAllProperties<physx::PxVehicleDriveSimData4W> body=270 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleDriveSimData4W>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleDriveSimData4W>
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
  
  PxVehicleDriveSimData4WGeneratedInfo::PxVehicleDriveSimData4WGeneratedInfo(local_d8);
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = param_5;
  local_118 = param_1;
  local_110 = param_3;
  local_108 = param_2;
  local_100 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>
            (&local_118,local_d8,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>
            (&local_118,local_b8,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>
            (&local_118,local_98,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>
            (&local_118,local_78,3);
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = param_5;
  local_118 = param_1;
  local_110 = param_3;
  local_108 = param_2;
  local_100 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<702,physx::PxVehicleDriveSimData4W,physx::PxVehicleDifferential4WData_const_&___ptr64,physx::PxVehicleDifferential4WData>
            (&local_118,local_58,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData>
            (&local_118,local_38,1);
  return;
}



// FUNCTION 143956ce0 writeAllProperties<physx::PxVehicleDriveSimData> body=202 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleDriveSimData>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleDriveSimData>
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
  
  PxVehicleDriveSimDataGeneratedInfo::PxVehicleDriveSimDataGeneratedInfo(local_88);
  local_a8 = param_5;
  local_a0 = 0;
  uStack_98 = 0;
  local_c8 = param_1;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>
            (&local_c8,local_88,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>
            (&local_c8,local_68,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>
            (&local_c8,local_48,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>
            (&local_c8,local_28,3);
  return;
}



// FUNCTION 143956db0 writeAllProperties<physx::PxVehicleDriveSimDataNW> body=268 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleDriveSimDataNW>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleDriveSimDataNW>
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
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  PxVehicleDriveSimDataNWGeneratedInfo::PxVehicleDriveSimDataNWGeneratedInfo(local_a8);
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = param_5;
  local_e8 = param_1;
  local_e0 = param_3;
  local_d8 = param_2;
  local_d0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>
            (&local_e8,local_a8,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>
            (&local_e8,local_88,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>
            (&local_e8,local_68,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
  operator()<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>
            (&local_e8,local_48,3);
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = param_5;
  local_e8 = param_1;
  local_e0 = param_3;
  local_d8 = param_2;
  local_d0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimDataNW>_>::
  operator()<719,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDifferentialNWData_const_&___ptr64,physx::PxVehicleDifferentialNWData>
            (&local_e8,local_28,0);
  return;
}



// FUNCTION 143956ec0 writeAllProperties<physx::PxVehicleDriveTank> body=220 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleDriveTank>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleDriveTank>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_128 [192];
  undefined1 local_68 [56];
  undefined1 local_30 [40];
  
  PxVehicleDriveTankGeneratedInfo::PxVehicleDriveTankGeneratedInfo(local_128);
  local_140 = 0;
  uStack_138 = 0;
  local_148 = param_5;
  local_168 = param_1;
  local_160 = param_3;
  local_158 = param_2;
  local_150 = param_4;
  PxVehicleDrive4WGeneratedInfo::
  visitBaseProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>_>
            (local_128,&local_168,0);
  local_140 = 0;
  uStack_138 = 0;
  local_148 = param_5;
  local_168 = param_1;
  local_160 = param_3;
  local_158 = param_2;
  local_150 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveTank>_>::
  operator()<714,physx::PxVehicleDriveTank,enum_physx::PxVehicleDriveTankControlModel::Enum_const_,enum_physx::PxVehicleDriveTankControlModel::Enum>
            (&local_168,local_68,0);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveTank>_>::
  operator()<716,physx::PxVehicleDriveTank,physx::PxVehicleDriveSimData,physx::PxVehicleDriveSimData>
            (&local_168,local_30,2);
  return;
}



// FUNCTION 143956fa0 writeAllProperties<physx::PxVehicleEngineData> body=280 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleEngineData>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleEngineData>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_138 [48];
  undefined1 local_108 [56];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  PxVehicleEngineDataGeneratedInfo::PxVehicleEngineDataGeneratedInfo(local_138);
  local_158 = param_5;
  local_150 = 0;
  uStack_148 = 0;
  local_178 = param_1;
  local_170 = param_3;
  local_168 = param_2;
  local_160 = param_4;
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleEngineData>_>::
  operator()<548,physx::PxVehicleEngineData,unsigned_int,float>(&local_178,local_108,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_178,local_d0,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_178,local_b0,4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_178,local_90,5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_178,local_70,6);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_178,local_50,7);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_178,local_30,8);
  return;
}



// FUNCTION 1439570c0 writeAllProperties<physx::PxVehicleGearsData> body=221 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleGearsData>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleGearsData>
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
  
  PxVehicleGearsDataGeneratedInfo::PxVehicleGearsDataGeneratedInfo(local_88);
  local_a8 = param_5;
  local_a0 = 0;
  uStack_98 = 0;
  local_c8 = param_1;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_4;
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleGearsData>_>::
  indexedProperty<557,physx::PxVehicleGearsData,enum_physx::PxVehicleGearsData::Enum,float>
            (&local_c8,0,local_88,&PTR_s_eREVERSE_14682d610,&param_5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_68,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>(&local_c8,local_48,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_c8,local_28,3);
  return;
}



// FUNCTION 1439571a0 writeAllProperties<physx::PxVehicleNoDrive> body=274 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleNoDrive>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleNoDrive>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_138 [72];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [48];
  undefined1 local_80 [48];
  undefined1 local_50 [72];
  
  PxVehicleNoDriveGeneratedInfo::PxVehicleNoDriveGeneratedInfo(local_138);
  local_150 = 0;
  uStack_148 = 0;
  local_158 = param_5;
  local_178 = param_1;
  local_170 = param_3;
  local_168 = param_2;
  local_160 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>::
  operator()<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>
            (&local_178,local_f0,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>::
  operator()<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData>
            (&local_178,local_d0,4);
  local_150 = 0;
  uStack_148 = 0;
  local_158 = param_5;
  local_178 = param_1;
  local_170 = param_3;
  local_168 = param_2;
  local_160 = param_4;
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsDynData>_>::
  operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>(&local_178,local_b0,0);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsDynData>_>::
  operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>(&local_178,local_80,1);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsDynData>_>::
  operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>(&local_178,local_50,2);
  return;
}



// FUNCTION 1439572c0 writeAllProperties<physx::PxVehicleTireData> body=274 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleTireData>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleTireData>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_128 [72];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined4 local_20;
  undefined4 local_1c;
  
  PxVehicleTireDataGeneratedInfo::PxVehicleTireDataGeneratedInfo(local_128);
  local_148 = param_5;
  local_140 = 0;
  uStack_138 = 0;
  local_168 = param_1;
  local_160 = param_3;
  local_158 = param_2;
  local_150 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_168,local_e0,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_168,local_c0,4);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_168,local_a0,5);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_168,local_80,6);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>(&local_168,local_60,7);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleTireData>_>::
  extendedDualIndexedProperty<637,physx::PxVehicleTireData,unsigned_int,unsigned_int,float>
            (&local_168,8,local_40,local_20,local_1c);
  return;
}



// FUNCTION 1439573e0 writeAllProperties<physx::PxVehicleTireLoadFilterData> body=205 status=ok
// SIG undefined writeAllProperties<physx::PxVehicleTireLoadFilterData>(void)

void physx::Sn::writeAllProperties<physx::PxVehicleTireLoadFilterData>
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
  undefined1 local_a8 [24];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  PxVehicleTireLoadFilterDataGeneratedInfo::PxVehicleTireLoadFilterDataGeneratedInfo(local_a8);
  local_c8 = param_5;
  local_c0 = 0;
  uStack_b8 = 0;
  local_e8 = param_1;
  local_e0 = param_3;
  local_d8 = param_2;
  local_d0 = param_4;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_e8,local_90,1);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_e8,local_70,2);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_e8,local_50,3);
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxClothStretchConfig>_>::
  operator()<416,physx::PxClothStretchConfig,float,float>(&local_e8,local_30,4);
  return;
}



// FUNCTION 1439574b0 PxVehicleDriveSimData body=337 status=ok
// SIG undefined PxVehicleDriveSimData(void)

void * physx::PxVehicleDriveSimData::PxVehicleDriveSimData(void *param_1,void *param_2)

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



// FUNCTION 143957610 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<int>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x1468494b8,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1439576b0 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxFilterData>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x146849488,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 143957750 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxVehicleAntiRollBarData>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x146849450,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1439577f0 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxVehicleSuspensionData>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x146849530,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 143957890 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxVehicleTireData>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x1468494d0,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 143957930 allocate body=154 status=ok
// SIG undefined allocate(void)

undefined8
physx::shdfnd::ReflectionAllocator<physx::PxVehicleWheelData>::allocate
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
      pcVar4 = (char *)__std_type_info_name(0x146849500,&DAT_146bcc1d0);
    }
    uVar5 = (**(code **)(*(longlong *)pPVar2 + 8))(pPVar2,param_2,pcVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1439579d0 create body=153 status=ok
// SIG undefined create(void)

void physx::shdfnd::
     Array<float,physx::shdfnd::InlineAllocator<20,physx::shdfnd::ReflectionAllocator<float>_>_>::
     create(int *param_1,int *param_2,int *param_3)

{
  if (*param_3 == 0) {
    if (param_1 < param_2) {
      ::_guard_xfg_dispatch_icall_nop
                (param_1,0,(ulonglong)((int)param_2 - (int)param_1 & 0xfffffffc));
      return;
    }
  }
  else if (param_1 < param_2) {
    if (0xf < ((longlong)param_2 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
      do {
        if (param_1 != (int *)0x0) {
          *param_1 = *param_3;
        }
        if (param_1 + 1 != (int *)0x0) {
          param_1[1] = *param_3;
        }
        if (param_1 != (int *)0xfffffffffffffff8) {
          param_1[2] = *param_3;
        }
        if (param_1 + 3 != (int *)0x0) {
          param_1[3] = *param_3;
        }
        param_1 = param_1 + 4;
      } while (param_1 < param_2 + -3);
    }
    for (; param_1 < param_2; param_1 = param_1 + 1) {
      if (param_1 != (int *)0x0) {
        *param_1 = *param_3;
      }
    }
  }
  return;
}



// FUNCTION 143957a70 create body=215 status=ok
// SIG undefined create(void)

void physx::shdfnd::
     Array<physx::PxVec3,physx::shdfnd::InlineAllocator<60,physx::shdfnd::ReflectionAllocator<physx::PxVec3>_>_>
     ::create(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1 < param_2) {
    if (0x2f < (ulonglong)((longlong)param_2 + (0xb - (longlong)param_1))) {
      puVar1 = param_1 + 5;
      do {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = *param_3;
          puVar1[-4] = param_3[1];
          puVar1[-3] = param_3[2];
        }
        if (puVar1 + -2 != (undefined4 *)0x0) {
          puVar1[-2] = *param_3;
          puVar1[-1] = param_3[1];
          *puVar1 = param_3[2];
        }
        if (puVar1 + 1 != (undefined4 *)0x0) {
          puVar1[1] = *param_3;
          puVar1[2] = param_3[1];
          puVar1[3] = param_3[2];
        }
        if (puVar1 + 4 != (undefined4 *)0x0) {
          puVar1[4] = *param_3;
          puVar1[5] = param_3[1];
          puVar1[6] = param_3[2];
        }
        param_1 = param_1 + 0xc;
        puVar1 = puVar1 + 0xc;
      } while (param_1 < param_2 + -9);
    }
    for (; param_1 < param_2; param_1 = param_1 + 3) {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
      }
    }
  }
  return;
}



// FUNCTION 143957b50 create body=196 status=ok
// SIG undefined create(void)

void physx::shdfnd::
     Array<physx::PxVehicleSuspensionData,physx::shdfnd::InlineAllocator<240,physx::shdfnd::ReflectionAllocator<physx::PxVehicleSuspensionData>_>_>
     ::create(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  iVar2 = ::_guard_xfg_dispatch_icall_nop(param_3,&local_38,0x30);
  if (iVar2 == 0) {
    if (param_1 < param_2) {
      ::_guard_xfg_dispatch_icall_nop
                (param_1,0,
                 (ulonglong)(uint)((int)(((longlong)param_2 - (longlong)param_1) / 0x30) * 0x30));
      return;
    }
  }
  else {
    for (; param_1 < param_2; param_1 = param_1 + 6) {
      if (param_1 != (undefined8 *)0x0) {
        uVar1 = param_3[1];
        *param_1 = *param_3;
        param_1[1] = uVar1;
        uVar1 = param_3[3];
        param_1[2] = param_3[2];
        param_1[3] = uVar1;
        uVar1 = param_3[5];
        param_1[4] = param_3[4];
        param_1[5] = uVar1;
      }
    }
  }
  return;
}



// FUNCTION 143957c20 create body=188 status=ok
// SIG undefined create(void)

void physx::shdfnd::
     Array<physx::PxVehicleTireData,physx::shdfnd::InlineAllocator<320,physx::shdfnd::ReflectionAllocator<physx::PxVehicleTireData>_>_>
     ::create(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  iVar2 = ::_guard_xfg_dispatch_icall_nop(param_3,&local_48,0x40);
  if (iVar2 == 0) {
    if (param_1 < param_2) {
      ::_guard_xfg_dispatch_icall_nop
                (param_1,0,(ulonglong)((int)param_2 - (int)param_1 & 0xffffffc0));
      return;
    }
  }
  else {
    for (; param_1 < param_2; param_1 = param_1 + 8) {
      if (param_1 != (undefined8 *)0x0) {
        uVar1 = param_3[1];
        *param_1 = *param_3;
        param_1[1] = uVar1;
        uVar1 = param_3[3];
        param_1[2] = param_3[2];
        param_1[3] = uVar1;
        uVar1 = param_3[5];
        param_1[4] = param_3[4];
        param_1[5] = uVar1;
        uVar1 = param_3[7];
        param_1[6] = param_3[6];
        param_1[7] = uVar1;
      }
    }
  }
  return;
}



// FUNCTION 143957d50 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxVehicleDrive4W>::fileToObjectImpl
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
  Sn::readAllProperties<physx::PxVehicleDrive4W>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 143957da0 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxVehicleDriveNW>::fileToObjectImpl
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
  Sn::readAllProperties<physx::PxVehicleDriveNW>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 143957df0 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxVehicleDriveTank>::fileToObjectImpl
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
  Sn::readAllProperties<physx::PxVehicleDriveTank>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 143957e40 fileToObjectImpl body=68 status=ok
// SIG undefined fileToObjectImpl(void)

void physx::RepXSerializerImpl<physx::PxVehicleNoDrive>::fileToObjectImpl
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
  Sn::readAllProperties<physx::PxVehicleNoDrive>(&local_28,param_3,param_2,param_4,param_6);
  return;
}



// FUNCTION 143957ef0 recreate body=190 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<int,physx::shdfnd::InlineAllocator<20,physx::shdfnd::ReflectionAllocator<int>_>_>::
     recreate(void *param_1,int param_2)

{
  void *pvVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 0x14) == '\0') && ((uint)(param_2 * 4) < 0x15)) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<int>::allocate
                             (param_1,param_2 * 4,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)((longlong)param_1 + 0x20) * 4)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 0x18),
               (ulonglong)(*(uint *)((longlong)param_1 + 0x20) * 4));
  }
  if (-1 < *(int *)((longlong)param_1 + 0x24)) {
    pvVar1 = *(void **)((longlong)param_1 + 0x18);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0x14) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(int *)((longlong)param_1 + 0x24) = param_2;
  *(void **)((longlong)param_1 + 0x18) = _Dst;
  return;
}



// FUNCTION 143957fb0 recreate body=188 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<float,physx::shdfnd::InlineAllocator<20,physx::shdfnd::ReflectionAllocator<float>_>_>::
     recreate(void *param_1,int param_2)

{
  void *pvVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 0x14) == '\0') && ((uint)(param_2 * 4) < 0x15)) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<float>::allocate
                             (param_1,param_2 * 4,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  if (_Dst < (void *)((longlong)_Dst + (ulonglong)*(uint *)((longlong)param_1 + 0x20) * 4)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 0x18),
               (ulonglong)(*(uint *)((longlong)param_1 + 0x20) * 4));
  }
  if (-1 < *(int *)((longlong)param_1 + 0x24)) {
    pvVar1 = *(void **)((longlong)param_1 + 0x18);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0x14) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(int *)((longlong)param_1 + 0x24) = param_2;
  *(void **)((longlong)param_1 + 0x18) = _Dst;
  return;
}



// FUNCTION 143958070 recreate body=190 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxFilterData,physx::shdfnd::InlineAllocator<80,physx::shdfnd::ReflectionAllocator<physx::PxFilterData>_>_>
     ::recreate(void *param_1,int param_2)

{
  void *pvVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 0x50) == '\0') && ((uint)(param_2 << 4) < 0x51)) {
    *(undefined1 *)((longlong)param_1 + 0x50) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::PxFilterData>::allocate
                             (param_1,param_2 << 4,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  if (_Dst < (void *)((ulonglong)*(uint *)((longlong)param_1 + 0x60) * 0x10 + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 0x58),
               (ulonglong)(*(uint *)((longlong)param_1 + 0x60) << 4));
  }
  if (-1 < *(int *)((longlong)param_1 + 100)) {
    pvVar1 = *(void **)((longlong)param_1 + 0x58);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0x50) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(int *)((longlong)param_1 + 100) = param_2;
  *(void **)((longlong)param_1 + 0x58) = _Dst;
  return;
}



// FUNCTION 143958130 recreate body=178 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxVec3,physx::shdfnd::InlineAllocator<60,physx::shdfnd::ReflectionAllocator<physx::PxVec3>_>_>
     ::recreate(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  PxAllocatorCallback *pPVar3;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else if ((*(char *)(param_1 + 0x3c) == '\0') && ((uint)(param_2 * 0xc) < 0x3d)) {
    *(undefined1 *)(param_1 + 0x3c) = 1;
    lVar2 = param_1;
  }
  else {
    lVar2 = ReflectionAllocator<physx::PxVec3>::allocate
                      (param_1,param_2 * 0xc,
                       "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                       ,0x25d);
  }
  Array<physx::PxVec3,physx::shdfnd::ReflectionAllocator<physx::PxVec3>_>::copy
            (lVar2,lVar2 + (ulonglong)*(uint *)(param_1 + 0x48) * 0xc,
             *(undefined8 *)(param_1 + 0x40));
  if (-1 < *(int *)(param_1 + 0x4c)) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 == param_1) {
      *(undefined1 *)(param_1 + 0x3c) = 0;
    }
    else if (lVar1 != 0) {
      pPVar3 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar1);
    }
  }
  *(int *)(param_1 + 0x4c) = param_2;
  *(longlong *)(param_1 + 0x40) = lVar2;
  return;
}



// FUNCTION 1439581f0 recreate body=190 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxVehicleAntiRollBarData,physx::shdfnd::InlineAllocator<80,physx::shdfnd::ReflectionAllocator<physx::PxVehicleAntiRollBarData>_>_>
     ::recreate(void *param_1,int param_2)

{
  void *pvVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 0x50) == '\0') && ((uint)(param_2 << 4) < 0x51)) {
    *(undefined1 *)((longlong)param_1 + 0x50) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::PxVehicleAntiRollBarData>::allocate
                             (param_1,param_2 << 4,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  if (_Dst < (void *)((ulonglong)*(uint *)((longlong)param_1 + 0x60) * 0x10 + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 0x58),
               (ulonglong)(*(uint *)((longlong)param_1 + 0x60) << 4));
  }
  if (-1 < *(int *)((longlong)param_1 + 100)) {
    pvVar1 = *(void **)((longlong)param_1 + 0x58);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0x50) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(int *)((longlong)param_1 + 100) = param_2;
  *(void **)((longlong)param_1 + 0x58) = _Dst;
  return;
}



// FUNCTION 1439582b0 recreate body=253 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxVehicleSuspensionData,physx::shdfnd::InlineAllocator<240,physx::shdfnd::ReflectionAllocator<physx::PxVehicleSuspensionData>_>_>
     ::recreate(void *param_1,int param_2)

{
  void *pvVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 0xf0) == '\0') && ((uint)(param_2 * 0x30) < 0xf1)) {
    *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::PxVehicleSuspensionData>::allocate
                             (param_1,param_2 * 0x30,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  uVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x100) * 0x30;
  if (_Dst < (void *)(uVar3 + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 0xf8),
               (ulonglong)(uint)((int)(uVar3 / 0x30) * 0x30));
  }
  if (-1 < *(int *)((longlong)param_1 + 0x104)) {
    pvVar1 = *(void **)((longlong)param_1 + 0xf8);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0xf0) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(int *)((longlong)param_1 + 0x104) = param_2;
  *(void **)((longlong)param_1 + 0xf8) = _Dst;
  return;
}



// FUNCTION 1439583b0 recreate body=221 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxVehicleTireData,physx::shdfnd::InlineAllocator<320,physx::shdfnd::ReflectionAllocator<physx::PxVehicleTireData>_>_>
     ::recreate(void *param_1,int param_2)

{
  void *pvVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 0x140) == '\0') && ((uint)(param_2 << 6) < 0x141)) {
    *(undefined1 *)((longlong)param_1 + 0x140) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::PxVehicleTireData>::allocate
                             (param_1,param_2 << 6,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  uVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x150) * 0x40;
  if (_Dst < (void *)(uVar3 + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,*(void **)((longlong)param_1 + 0x148),uVar3 & 0xffffffff);
  }
  if (-1 < *(int *)((longlong)param_1 + 0x154)) {
    pvVar1 = *(void **)((longlong)param_1 + 0x148);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0x140) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(int *)((longlong)param_1 + 0x154) = param_2;
  *(void **)((longlong)param_1 + 0x148) = _Dst;
  return;
}



// FUNCTION 143958490 recreate body=253 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<physx::PxVehicleWheelData,physx::shdfnd::InlineAllocator<240,physx::shdfnd::ReflectionAllocator<physx::PxVehicleWheelData>_>_>
     ::recreate(void *param_1,int param_2)

{
  void *pvVar1;
  void *_Dst;
  PxAllocatorCallback *pPVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 0xf0) == '\0') && ((uint)(param_2 * 0x30) < 0xf1)) {
    *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<physx::PxVehicleWheelData>::allocate
                             (param_1,param_2 * 0x30,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  uVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x100) * 0x30;
  if (_Dst < (void *)(uVar3 + (longlong)_Dst)) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 0xf8),
               (ulonglong)(uint)((int)(uVar3 / 0x30) * 0x30));
  }
  if (-1 < *(int *)((longlong)param_1 + 0x104)) {
    pvVar1 = *(void **)((longlong)param_1 + 0xf8);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 0xf0) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(int *)((longlong)param_1 + 0x104) = param_2;
  *(void **)((longlong)param_1 + 0xf8) = _Dst;
  return;
}



// FUNCTION 143958590 recreate body=178 status=ok
// SIG undefined recreate(void)

void physx::shdfnd::
     Array<bool,physx::shdfnd::InlineAllocator<5,physx::shdfnd::ReflectionAllocator<bool>_>_>::
     recreate(void *param_1,uint param_2)

{
  void *_Dst;
  void *pvVar1;
  PxAllocatorCallback *pPVar2;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if ((*(char *)((longlong)param_1 + 5) == '\0') && (param_2 < 6)) {
    *(undefined1 *)((longlong)param_1 + 5) = 1;
    _Dst = param_1;
  }
  else {
    _Dst = (void *)ReflectionAllocator<bool>::allocate
                             (param_1,param_2,
                              "t:\\ue4-code1-win64development\\main\\engine\\source\\thirdparty\\physx3\\pxshared\\src\\foundation\\include\\PsArray.h"
                              ,0x25d);
  }
  pvVar1 = (void *)((ulonglong)*(uint *)((longlong)param_1 + 0x10) + (longlong)_Dst);
  if (_Dst < pvVar1) {
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)((longlong)param_1 + 8),(ulonglong)(uint)((int)pvVar1 - (int)_Dst));
  }
  if (-1 < *(int *)((longlong)param_1 + 0x14)) {
    pvVar1 = *(void **)((longlong)param_1 + 8);
    if (pvVar1 == param_1) {
      *(undefined1 *)((longlong)param_1 + 5) = 0;
    }
    else if (pvVar1 != (void *)0x0) {
      pPVar2 = physx::shdfnd::getAllocator();
      (**(code **)(*(longlong *)pPVar2 + 0x10))(pPVar2,pvVar1);
    }
  }
  *(uint *)((longlong)param_1 + 0x14) = param_2;
  *(void **)((longlong)param_1 + 8) = _Dst;
  return;
}



// FUNCTION 143958650 registerReferences body=75 status=ok
// SIG undefined registerReferences(void)

void physx::PxSerializerDefaultAdapter<physx::PxVehicleDrive4W>::registerReferences
               (undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined **local_18;
  undefined8 *local_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  local_18 = &PTR_FUN_145af4070;
  local_10 = param_3;
  (**(code **)(*param_2 + 0x30))(param_2,&local_18);
  return;
}



// FUNCTION 1439586b0 resize body=149 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<int,physx::shdfnd::InlineAllocator<20,physx::shdfnd::ReflectionAllocator<int>_>_>::resize
               (longlong param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int *_Dst;
  
  if ((*(uint *)(param_1 + 0x24) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 4);
  _Dst = (int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 4);
  if (*param_3 == 0) {
    if (_Dst < piVar1) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)((int)piVar1 - (int)_Dst & 0xfffffffc));
      *(uint *)(param_1 + 0x20) = param_2;
      return;
    }
  }
  else {
    for (; _Dst < piVar1; _Dst = _Dst + 1) {
      if (_Dst != (int *)0x0) {
        *_Dst = *param_3;
      }
    }
  }
  *(uint *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 143958750 resize body=83 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<float,physx::shdfnd::InlineAllocator<20,physx::shdfnd::ReflectionAllocator<float>_>_>::
     resize(longlong param_1,uint param_2,undefined8 param_3)

{
  if ((*(uint *)(param_1 + 0x24) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  create(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 4,
         *(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 4,param_3);
  *(uint *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 1439587b0 resize body=168 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxFilterData,physx::shdfnd::InlineAllocator<80,physx::shdfnd::ReflectionAllocator<physx::PxFilterData>_>_>
     ::resize(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *_Dst;
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(uint *)(param_1 + 100) & 0x7fffffff) < param_2) {
    recreate();
  }
  lVar1 = *param_3;
  plVar2 = (longlong *)((ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 0x58));
  _Dst = (longlong *)((ulonglong)*(uint *)(param_1 + 0x60) * 0x10 + *(longlong *)(param_1 + 0x58));
  if (lVar1 == 0) {
    lVar1 = param_3[1];
  }
  if (lVar1 == 0) {
    if (_Dst < plVar2) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)((int)plVar2 - (int)_Dst & 0xfffffff0));
      *(uint *)(param_1 + 0x60) = param_2;
      return;
    }
  }
  else {
    for (; _Dst < plVar2; _Dst = _Dst + 2) {
      if (_Dst != (longlong *)0x0) {
        lVar1 = param_3[1];
        *_Dst = *param_3;
        _Dst[1] = lVar1;
      }
    }
  }
  *(uint *)(param_1 + 0x60) = param_2;
  return;
}



// FUNCTION 143958860 resize body=91 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxVec3,physx::shdfnd::InlineAllocator<60,physx::shdfnd::ReflectionAllocator<physx::PxVec3>_>_>
     ::resize(longlong param_1,uint param_2,undefined8 param_3)

{
  if ((*(uint *)(param_1 + 0x4c) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  create(*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x48) * 0xc,
         *(longlong *)(param_1 + 0x40) + (ulonglong)param_2 * 0xc,param_3);
  *(uint *)(param_1 + 0x48) = param_2;
  return;
}



// FUNCTION 1439588c0 resize body=168 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxVehicleAntiRollBarData,physx::shdfnd::InlineAllocator<80,physx::shdfnd::ReflectionAllocator<physx::PxVehicleAntiRollBarData>_>_>
     ::resize(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *_Dst;
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(uint *)(param_1 + 100) & 0x7fffffff) < param_2) {
    recreate();
  }
  lVar1 = *param_3;
  plVar2 = (longlong *)((ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 0x58));
  _Dst = (longlong *)((ulonglong)*(uint *)(param_1 + 0x60) * 0x10 + *(longlong *)(param_1 + 0x58));
  if (lVar1 == 0) {
    lVar1 = param_3[1];
  }
  if (lVar1 == 0) {
    if (_Dst < plVar2) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)((int)plVar2 - (int)_Dst & 0xfffffff0));
      *(uint *)(param_1 + 0x60) = param_2;
      return;
    }
  }
  else {
    for (; _Dst < plVar2; _Dst = _Dst + 2) {
      if (_Dst != (longlong *)0x0) {
        lVar1 = param_3[1];
        *_Dst = *param_3;
        _Dst[1] = lVar1;
      }
    }
  }
  *(uint *)(param_1 + 0x60) = param_2;
  return;
}



// FUNCTION 143958970 resize body=109 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxVehicleSuspensionData,physx::shdfnd::InlineAllocator<240,physx::shdfnd::ReflectionAllocator<physx::PxVehicleSuspensionData>_>_>
     ::resize(longlong param_1,uint param_2,undefined8 param_3)

{
  if ((*(uint *)(param_1 + 0x104) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  create((ulonglong)*(uint *)(param_1 + 0x100) * 0x30 + *(longlong *)(param_1 + 0xf8),
         (ulonglong)param_2 * 0x30 + *(longlong *)(param_1 + 0xf8),param_3);
  *(uint *)(param_1 + 0x100) = param_2;
  return;
}



// FUNCTION 1439589e0 resize body=104 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxVehicleTireData,physx::shdfnd::InlineAllocator<320,physx::shdfnd::ReflectionAllocator<physx::PxVehicleTireData>_>_>
     ::resize(longlong param_1,uint param_2,undefined8 param_3)

{
  if ((*(uint *)(param_1 + 0x154) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  create((ulonglong)*(uint *)(param_1 + 0x150) * 0x40 + *(longlong *)(param_1 + 0x148),
         (ulonglong)param_2 * 0x40 + *(longlong *)(param_1 + 0x148),param_3);
  *(uint *)(param_1 + 0x150) = param_2;
  return;
}



// FUNCTION 143958a50 resize body=109 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<physx::PxVehicleWheelData,physx::shdfnd::InlineAllocator<240,physx::shdfnd::ReflectionAllocator<physx::PxVehicleWheelData>_>_>
     ::resize(longlong param_1,uint param_2,undefined8 param_3)

{
  if ((*(uint *)(param_1 + 0x104) & 0x7fffffff) < param_2) {
    recreate(param_1,(ulonglong)param_2);
  }
  Array<physx::PxVehicleSuspensionData,physx::shdfnd::InlineAllocator<240,physx::shdfnd::ReflectionAllocator<physx::PxVehicleSuspensionData>_>_>
  ::create((ulonglong)*(uint *)(param_1 + 0x100) * 0x30 + *(longlong *)(param_1 + 0xf8),
           (ulonglong)param_2 * 0x30 + *(longlong *)(param_1 + 0xf8),param_3);
  *(uint *)(param_1 + 0x100) = param_2;
  return;
}



// FUNCTION 143958ac0 resize body=140 status=ok
// SIG undefined resize(void)

void physx::shdfnd::
     Array<bool,physx::shdfnd::InlineAllocator<5,physx::shdfnd::ReflectionAllocator<bool>_>_>::
     resize(longlong param_1,uint param_2,char *param_3)

{
  char *_Dst;
  char *pcVar1;
  
  if ((*(uint *)(param_1 + 0x14) & 0x7fffffff) < param_2) {
    recreate();
  }
  pcVar1 = (char *)((ulonglong)param_2 + *(longlong *)(param_1 + 8));
  _Dst = (char *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8));
  if (*param_3 == '\0') {
    if (_Dst < pcVar1) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uint)((int)pcVar1 - (int)_Dst));
      *(uint *)(param_1 + 0x10) = param_2;
      return;
    }
  }
  else {
    for (; _Dst < pcVar1; _Dst = _Dst + 1) {
      if (_Dst != (char *)0x0) {
        *_Dst = *param_3;
      }
    }
  }
  *(uint *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 143958b50 set body=117 status=ok
// SIG undefined set(void)

void physx::
     PxPropertyInfo<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>
     ::set(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_248 [528];
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
  
  PxVehicleDriveSimData::PxVehicleDriveSimData(local_248,param_3);
  local_38 = *(undefined8 *)(param_3 + 0x210);
  uStack_30 = *(undefined8 *)(param_3 + 0x218);
  local_28 = *(undefined4 *)(param_3 + 0x220);
  uStack_24 = *(undefined4 *)(param_3 + 0x224);
  uStack_20 = *(undefined4 *)(param_3 + 0x228);
  uStack_1c = *(undefined4 *)(param_3 + 0x22c);
  local_18 = *(undefined4 *)(param_3 + 0x230);
  uStack_14 = *(undefined4 *)(param_3 + 0x234);
  uStack_10 = *(undefined4 *)(param_3 + 0x238);
  uStack_c = *(undefined4 *)(param_3 + 0x23c);
  (**(code **)(param_1 + 0x18))(param_2,local_248);
  return;
}



// FUNCTION 143958bd0 set body=123 status=ok
// SIG undefined set(void)

void physx::
     PxRepXPropertyAccessor<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>
     ::set(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_248 [528];
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
  
  PxVehicleDriveSimData::PxVehicleDriveSimData(local_248,param_3);
  local_38 = *(undefined8 *)(param_3 + 0x210);
  uStack_30 = *(undefined8 *)(param_3 + 0x218);
  local_28 = *(undefined4 *)(param_3 + 0x220);
  uStack_24 = *(undefined4 *)(param_3 + 0x224);
  uStack_20 = *(undefined4 *)(param_3 + 0x228);
  uStack_1c = *(undefined4 *)(param_3 + 0x22c);
  local_18 = *(undefined4 *)(param_3 + 0x230);
  uStack_14 = *(undefined4 *)(param_3 + 0x234);
  uStack_10 = *(undefined4 *)(param_3 + 0x238);
  uStack_c = *(undefined4 *)(param_3 + 0x23c);
  PxPropertyInfo<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>
  ::set(param_1 + 8,param_2,local_248);
  return;
}



// FUNCTION 143958c50 set body=124 status=ok
// SIG undefined set(void)

void physx::
     PxRepXPropertyAccessor<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW>
     ::set(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_448 [528];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [528];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  PxVehicleDriveSimData::PxVehicleDriveSimData(local_448,param_3);
  local_238 = *(undefined4 *)(param_3 + 0x210);
  uStack_234 = *(undefined4 *)(param_3 + 0x214);
  uStack_230 = *(undefined4 *)(param_3 + 0x218);
  uStack_22c = *(undefined4 *)(param_3 + 0x21c);
  PxVehicleDriveSimData::PxVehicleDriveSimData(local_228,local_448);
  local_18 = local_238;
  uStack_14 = uStack_234;
  uStack_10 = uStack_230;
  uStack_c = uStack_22c;
  (**(code **)(param_1 + 0x20))(param_2,local_228);
  return;
}



// FUNCTION 143958cd0 topName body=34 status=ok
// SIG undefined topName(void)

char * physx::Sn::RepXVisitorWriterBase<physx::PxVehicleEngineData>::topName(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    return *(char **)(*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  return "bad__repx__name";
}



// FUNCTION 143958d00 PxVehicleSetBasisVectors body=185 status=ok
// SIG undefined PxVehicleSetBasisVectors(void)

void physx::PxVehicleSetBasisVectors(float *param_1,float *param_2)

{
  DAT_146b95f08 = param_2[2] * param_1[1] - param_2[1] * param_1[2];
  DAT_146b95f10 = *param_1 * param_2[1] - *param_2 * param_1[1];
  DAT_146b95f0c = *param_2 * param_1[2] - *param_1 * param_2[2];
  DAT_146b95ee8 = *param_1;
  DAT_146b95eec = param_1[1];
  DAT_146b95ef0 = param_1[2];
  DAT_146b95ef8 = *param_2;
  DAT_146b95efc = param_2[1];
  DAT_146b95f00 = param_2[2];
  return;
}



// FUNCTION 143958de0 PxVehicleSetSweepHitRejectionAngles body=51 status=ok
// SIG undefined PxVehicleSetSweepHitRejectionAngles(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::PxVehicleSetSweepHitRejectionAngles(float param_1,float param_2)

{
  DAT_146b95e04 = ::_guard_xfg_dispatch_icall_nop(param_1);
  _DAT_146b95e08 = ::_guard_xfg_dispatch_icall_nop(param_2);
  return;
}



// FUNCTION 143958e30 PxVehicleSuspensionRaycasts body=5 status=ok
// SIG undefined PxVehicleSuspensionRaycasts(void)

void physx::PxVehicleSuspensionRaycasts
               (undefined8 *param_1,uint param_2,longlong *param_3,uint param_4,ulonglong param_5,
               char *param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  undefined1 uStackX_10;
  undefined1 uStackX_11;
  undefined1 uStackX_12;
  undefined1 uStackX_13;
  longlong *plStackX_18;
  uint uStackX_20;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  ulonglong uStack_e0;
  uint uStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined2 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  
  uVar7 = (ulonglong)param_4;
  if (param_4 != 0) {
    puVar2 = (undefined1 *)(param_5 + 0x59);
    uVar11 = (ulonglong)param_4;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0x60;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  puVar3 = &uStack_90;
  lVar4 = 4;
  do {
    *puVar3 = 0;
    puVar3[-1] = 0;
    *(undefined2 *)(puVar3 + 1) = 3;
    *(undefined1 *)((longlong)puVar3 + 10) = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 0x14);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uStack_88 = 7;
  uStack_74 = 7;
  uStack_60 = 7;
  uStack_4c = 7;
  plStackX_18 = param_3;
  uStackX_20 = param_4;
  if (param_2 != 0) {
    uStack_e0 = (ulonglong)param_2;
    uVar11 = param_5;
    pcVar14 = param_6;
    do {
      uVar6 = 0;
      lStack_a8 = *plStackX_18;
      uVar1 = *(uint *)(lStack_a8 + 0x3c);
      lVar4 = *(longlong *)(lStack_a8 + 0x30);
      lVar12 = *(longlong *)(lStack_a8 + 0x70);
      uStack_c8 = *(undefined8 *)(lStack_a8 + 0xa0);
      uVar13 = uVar1 >> 2;
      uStack_d8 = uVar1 + uVar13 * -4;
      lStack_d0 = lVar4;
      pcStack_c0 = pcVar14;
      lStack_b8 = lVar12;
      if (uVar1 >> 2 != 0) {
        lVar10 = lStack_a8 + 0x50;
        puVar8 = (ulonglong *)(lVar12 + 0x1d8);
        uVar15 = 2;
        puVar3 = (undefined8 *)(lVar4 + 0x370);
        uVar7 = uVar11;
        lStack_b0 = lVar10;
        do {
          uStackX_10 = (*(uint *)(lVar10 + (ulonglong)(uVar15 - 2 >> 5) * 4) >> (uVar15 - 2 & 0x1f)
                       & 1) != 0;
          uStackX_11 = (*(uint *)(lVar10 + (ulonglong)(uVar15 - 1 >> 5) * 4) >> (uVar15 - 1 & 0x1f)
                       & 1) != 0;
          uStackX_12 = (*(uint *)(lVar10 + (ulonglong)(uVar15 >> 5) * 4) >> (uVar15 & 0x1f) & 1) !=
                       0;
          uStackX_13 = (*(uint *)(lVar10 + (ulonglong)(uVar15 + 1 >> 5) * 4) >> (uVar15 + 1 & 0x1f)
                       & 1) != 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          if (((param_6 == (char *)0x0) || (uVar11 = uVar7, *pcVar14 != '\0')) &&
             (uVar11 = uVar7 + 0x180, pcVar14 = pcStack_c0,
             uVar11 <= (ulonglong)uStackX_20 * 0x60 + param_5)) {
            uStack_98 = puVar3[-2];
            uStack_90 = puVar3[-1];
            uStack_84 = *puVar3;
            uStack_7c = puVar3[1];
            *puVar8 = uVar7;
            uStack_70 = puVar3[2];
            uStack_68 = puVar3[3];
            uStack_5c = *(undefined4 *)(puVar3 + 4);
            uStack_58 = *(undefined4 *)((longlong)puVar3 + 0x24);
            uStack_54 = *(undefined4 *)(puVar3 + 5);
            uStack_50 = *(undefined4 *)((longlong)puVar3 + 0x2c);
            PxVehicleWheels4SuspensionRaycasts
                      (param_1,uVar6 * 0x3b0 + lVar4,uVar6 * 0x220 + lVar12,&uStack_98,&uStackX_10,4
                       ,uStack_c8);
            lVar10 = lStack_b0;
            lVar12 = lStack_b8;
            pcVar14 = pcStack_c0;
          }
          uVar9 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar9;
          uVar15 = uVar15 + 4;
          puVar3 = puVar3 + 0x76;
          puVar8 = puVar8 + 0x44;
          uVar7 = uVar11;
        } while (uVar9 < uVar13);
        uVar7 = (ulonglong)uStackX_20;
      }
      uVar15 = uVar13 * 4;
      uVar6 = uVar11;
      if (uStack_d8 != 0) {
        uStack_e8 = (*(uint *)(lStack_a8 + 0x50 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar15 & 0x1f) &
                    1) != 0;
        uStack_e7 = (*(uint *)(lStack_a8 + 0x50 + (ulonglong)(uVar15 + 1 >> 5) * 4) >>
                     (uVar15 + 1 & 0x1f) & 1) != 0;
        uStack_e6 = (*(uint *)(lStack_a8 + 0x50 + (ulonglong)(uVar15 + 2 >> 5) * 4) >>
                     (uVar15 + 2 & 0x1f) & 1) != 0;
        uStack_e5 = (*(uint *)(lStack_a8 + 0x50 + (ulonglong)(uVar15 + 3 >> 5) * 4) >>
                     (uVar15 + 3 & 0x1f) & 1) != 0;
        uVar5 = (ulonglong)uVar13;
        lVar12 = uVar5 * 0x220 + lVar12;
        *(undefined8 *)(lVar12 + 0x1d8) = 0;
        *(undefined8 *)(lVar12 + 0x1e0) = 0;
        if (((param_6 == (char *)0x0) || (*pcVar14 != '\0')) &&
           (uVar6 = (ulonglong)uStack_d8 * 0x60 + uVar11, uVar6 <= uVar7 * 0x60 + param_5)) {
          if (uStack_d8 != 0) {
            puVar3 = (undefined8 *)(uVar5 * 0x3b0 + 0x360 + lStack_d0);
            uStack_98 = *puVar3;
            uStack_90 = puVar3[1];
          }
          if (1 < uStack_d8) {
            puVar3 = (undefined8 *)(uVar5 * 0x3b0 + 0x370 + lStack_d0);
            uStack_84 = *puVar3;
            uStack_7c = puVar3[1];
          }
          if (2 < uStack_d8) {
            puVar3 = (undefined8 *)(uVar5 * 0x3b0 + 0x380 + lStack_d0);
            uStack_70 = *puVar3;
            uStack_68 = puVar3[1];
          }
          *(ulonglong *)(lVar12 + 0x1d8) = uVar11;
          PxVehicleWheels4SuspensionRaycasts
                    (param_1,uVar5 * 0x3b0 + lStack_d0,lVar12,&uStack_98,&uStack_e8,uStack_d8,
                     uStack_c8);
        }
      }
      pcVar14 = pcVar14 + 1;
      plStackX_18 = plStackX_18 + 1;
      uStack_e0 = uStack_e0 - 1;
      uVar11 = uVar6;
    } while (uStack_e0 != 0);
    uStack_e0 = 0;
    pcStack_c0 = pcVar14;
  }
  (**(code **)*param_1)(param_1);
  return;
}



// FUNCTION 143958e40 PxVehicleSuspensionSweeps body=15 status=ok
// SIG undefined PxVehicleSuspensionSweeps(void)

void physx::PxVehicleSuspensionSweeps(void)

{
  PxVehicleUpdate::suspensionSweeps();
  return;
}



// FUNCTION 143958e60 FUN_143958e60 body=2368 status=ok
// SIG undefined FUN_143958e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_143958e60(longlong param_1,undefined4 param_2,float param_3,undefined4 param_4,float param_5
                 ,longlong *param_6)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
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
  float local_164;
  float local_160;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  longlong local_120;
  longlong local_118 [4];
  undefined1 local_f8 [192];
  
  plVar6 = *(longlong **)(param_1 + 0xa0);
  iVar14 = 0;
  if ((longlong *)*param_6 == plVar6) {
    fVar31 = 1.0;
    pfVar11 = (float *)(**(code **)(*(longlong *)*param_6 + 0xa0))();
    fVar18 = *(float *)(param_6 + 4);
    fVar30 = *(float *)((longlong)param_6 + 0x24);
    fVar23 = *(float *)(param_6 + 5);
    local_130 = pfVar11[4];
    fVar21 = *(float *)((longlong)param_6 + 0x2c);
    lVar15 = param_6[1];
    local_12c = pfVar11[5];
    local_128 = pfVar11[6];
    local_164 = *(float *)(param_6 + 6);
    local_160 = *(float *)((longlong)param_6 + 0x34);
    fVar17 = *(float *)(param_6 + 7);
  }
  else {
    fVar31 = -1.0;
    pfVar11 = (float *)(**(code **)(*(longlong *)param_6[1] + 0xa0))
                                 ((longlong *)param_6[1],local_118);
    fVar18 = *(float *)((longlong)param_6 + 0x3c);
    fVar30 = *(float *)(param_6 + 8);
    fVar23 = *(float *)((longlong)param_6 + 0x44);
    local_130 = pfVar11[4];
    fVar21 = *(float *)(param_6 + 9);
    lVar15 = *param_6;
    local_12c = pfVar11[5];
    local_128 = pfVar11[6];
    local_164 = *(float *)((longlong)param_6 + 0x4c);
    local_160 = *(float *)(param_6 + 10);
    fVar17 = *(float *)((longlong)param_6 + 0x54);
  }
  fVar10 = local_128;
  fVar9 = local_12c;
  fVar8 = local_130;
  fVar2 = *pfVar11;
  fVar3 = pfVar11[3];
  fVar4 = pfVar11[2];
  fVar5 = pfVar11[1];
  if (lVar15 != 0) {
    lVar12 = 0;
    if (*(short *)(lVar15 + 8) == 6) {
      lVar12 = lVar15;
    }
    if (lVar12 != 0) {
      bVar7 = true;
      goto LAB_143959047;
    }
  }
  bVar7 = false;
LAB_143959047:
  local_120 = param_1 + 0x70;
  fVar24 = DAT_146b95f10 * 2.0;
  fVar26 = DAT_146b95f08 * 2.0;
  fVar19 = DAT_146b95f0c * 2.0;
  fVar22 = fVar21 * fVar21 - 0.5;
  fVar20 = fVar30 * fVar19 + fVar18 * fVar26 + fVar23 * fVar24;
  fVar28 = (fVar30 * fVar24 - fVar23 * fVar19) * fVar21 + fVar22 * fVar26 + fVar18 * fVar20;
  fVar29 = (fVar23 * fVar26 - fVar18 * fVar24) * fVar21 + fVar22 * fVar19 + fVar30 * fVar20;
  fVar32 = (fVar18 * fVar19 - fVar30 * fVar26) * fVar21 + fVar22 * fVar24 + fVar23 * fVar20;
  local_140 = fVar2;
  local_13c = fVar5;
  local_138 = fVar4;
  local_134 = fVar3;
  physx::PxVehicleWheelsDynData::getWheelRotationAngle(local_120,param_2);
  (**(code **)(*plVar6 + 0xf0))(plVar6,local_f8);
  pfVar11 = (float *)physx::PxQuat::operator*(&local_140,local_118,local_f8);
  param_1 = param_1 + 0x10;
  fVar18 = *pfVar11;
  fVar30 = pfVar11[1];
  fVar23 = pfVar11[2];
  fVar21 = pfVar11[3];
  local_118[0] = param_1;
  pfVar11 = (float *)physx::PxVehicleWheelsSimData::getSuspTravelDirection(param_1,param_2);
  fVar22 = pfVar11[1] + pfVar11[1];
  fVar25 = pfVar11[2] + pfVar11[2];
  fVar26 = fVar21 * fVar21 - 0.5;
  fVar27 = *pfVar11 + *pfVar11;
  fVar24 = fVar22 * fVar30 + fVar18 * fVar27 + fVar25 * fVar23;
  fVar19 = (fVar25 * fVar30 - fVar22 * fVar23) * fVar21 + fVar26 * fVar27 + fVar18 * fVar24;
  fVar20 = (fVar27 * fVar23 - fVar18 * fVar25) * fVar21 + fVar26 * fVar22 + fVar24 * fVar30;
  fVar18 = (fVar18 * fVar22 - fVar27 * fVar30) * fVar21 + fVar26 * fVar25 + fVar24 * fVar23;
  if (*(uint *)(param_6 + 0xb) != 0) {
    lVar15 = 0;
    uVar16 = (ulonglong)*(uint *)(param_6 + 0xb);
    do {
      lVar12 = param_6[0xc];
      fVar30 = *(float *)(lVar15 + 4 + lVar12);
      fVar23 = *(float *)(lVar15 + 8 + lVar12);
      fVar21 = fVar30 * fVar29 + *(float *)(lVar15 + lVar12) * fVar28 + fVar23 * fVar32 +
               -(local_160 * fVar29 + local_164 * fVar28 + fVar17 * fVar32);
      fVar22 = (fVar23 - fVar32 * fVar21) - fVar17;
      fVar23 = (*(float *)(lVar15 + lVar12) - fVar28 * fVar21) - local_164;
      fVar30 = (fVar30 - fVar29 * fVar21) - local_160;
      fVar21 = SQRT(fVar30 * fVar30 + fVar23 * fVar23 + fVar22 * fVar22);
      if (0.0 < fVar21) {
        fVar24 = 1.0 / fVar21;
        fVar23 = fVar23 * fVar24;
        fVar30 = fVar30 * fVar24;
        fVar22 = fVar22 * fVar24;
      }
      fVar24 = fVar30 * fVar20 + fVar23 * fVar19 + fVar22 * fVar18;
      if (fVar24 <= DAT_146b95e04) {
        if (-(fVar31 * *(float *)(lVar15 + 0x24 + lVar12) * fVar20 +
              fVar31 * *(float *)(lVar15 + 0x20 + lVar12) * fVar19 +
             fVar31 * *(float *)(lVar15 + 0x28 + lVar12) * fVar18) <= _DAT_146b95e08) {
          if (-fVar24 <= param_5) {
            fVar24 = (float)physx::PxVehicleWheelsDynData::getWheelRotationSpeed(local_120,param_2);
            lVar12 = param_6[0xc];
            fVar24 = fVar24 * fVar21;
            fVar25 = (fVar23 * fVar32 - fVar22 * fVar28) * fVar24;
            fVar27 = (fVar30 * fVar28 - fVar23 * fVar29) * fVar24;
            fVar24 = (fVar22 * fVar29 - fVar30 * fVar32) * fVar24;
            fVar26 = fVar25 * *(float *)(lVar12 + 0x24 + lVar15) +
                     fVar24 * *(float *)(lVar12 + 0x20 + lVar15) +
                     fVar27 * *(float *)(lVar12 + 0x28 + lVar15);
            fVar22 = -param_3;
            fVar30 = *(float *)(lVar12 + 0x20 + lVar15);
            fVar23 = *(float *)(lVar12 + 0x24 + lVar15);
            fVar21 = *(float *)(lVar12 + 0x28 + lVar15);
            pbVar1 = (byte *)(lVar12 + (ulonglong)*(uint *)(param_6 + 0xb) * -0x30 + 0x2b);
            *pbVar1 = *pbVar1 | 0x10;
            lVar12 = param_6[0xc];
            *(float *)(lVar15 + 0x10 + lVar12) = (fVar24 - fVar26 * fVar30) * fVar22 * fVar31;
            *(float *)(lVar15 + 0x14 + lVar12) = (fVar25 - fVar26 * fVar23) * fVar22 * fVar31;
            *(float *)(lVar15 + 0x18 + lVar12) = (fVar27 - fVar26 * fVar21) * fVar22 * fVar31;
            if (bVar7) {
              pbVar1 = (byte *)(param_6[0xc] + (ulonglong)*(uint *)(param_6 + 0xb) * -0x30 + 0x2b);
              *pbVar1 = *pbVar1 | 0x20;
              *(undefined4 *)(lVar15 + 0x1c + param_6[0xc]) = param_4;
            }
            pfVar11 = (float *)physx::PxVehicleWheelsSimData::getSuspForceAppPointOffset
                                         (param_1,param_2);
            lVar13 = (**(code **)(*plVar6 + 0xf0))(plVar6,&local_140);
            lVar12 = param_6[0xc];
            fVar21 = (pfVar11[1] + *(float *)(lVar13 + 0x14)) * 2.0;
            fVar24 = (pfVar11[2] + *(float *)(lVar13 + 0x18)) * 2.0;
            fVar22 = (*(float *)(lVar13 + 0x10) + *pfVar11) * 2.0;
            fVar23 = fVar3 * fVar3 - 0.5;
            fVar30 = fVar2 * fVar22 + fVar5 * fVar21 + fVar4 * fVar24;
            *(float *)(lVar15 + lVar12) =
                 fVar8 + (fVar5 * fVar24 - fVar4 * fVar21) * fVar3 + fVar23 * fVar22 +
                         fVar2 * fVar30;
            *(float *)(lVar15 + 4 + lVar12) =
                 (fVar4 * fVar22 - fVar2 * fVar24) * fVar3 + fVar23 * fVar21 + fVar5 * fVar30 +
                 fVar9;
            *(float *)(lVar15 + 8 + lVar12) =
                 fVar10 + (fVar2 * fVar21 - fVar5 * fVar22) * fVar3 + fVar23 * fVar24 +
                          fVar4 * fVar30;
            param_1 = local_118[0];
          }
        }
        else {
          iVar14 = iVar14 + 1;
          *(undefined4 *)(lVar15 + 0x1c + lVar12) = 0;
        }
      }
      else {
        iVar14 = iVar14 + 1;
        *(undefined4 *)(lVar15 + 0x1c + lVar12) = 0;
      }
      lVar15 = lVar15 + 0x40;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return iVar14;
}



// FUNCTION 1439597b0 PxVehicleUpdates body=5 status=ok
// SIG undefined PxVehicleUpdates(void)

void physx::PxVehicleUpdates
               (undefined4 param_1,float *param_2,undefined8 param_3,uint param_4,longlong *param_5,
               longlong param_6,longlong param_7)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  
  uVar9 = 0;
  DAT_146b95ee0 = 0;
  lVar4 = 2;
  puVar2 = &DAT_146b95e40;
  do {
    puVar3 = puVar2;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    lVar4 = lVar4 + -1;
    puVar2 = puVar3 + 8;
  } while (lVar4 != 0);
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  DAT_146b95e38 = 0;
  DAT_146b95e30 = 0;
  fVar11 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
  fVar10 = 1.0 / fVar11;
  uVar7 = uVar9;
  if (param_4 != 0) {
    do {
      lVar4 = *param_5;
      uVar5 = uVar9;
      if (param_6 != 0) {
        uVar5 = uVar7 * 0x10 + param_6;
      }
      uVar8 = uVar9;
      if (param_7 != 0) {
        uVar8 = param_7 + uVar7 * 0x28;
      }
      cVar1 = *(char *)(lVar4 + 0xad);
      if (cVar1 == '\0') {
        FUN_143962a00(param_1,param_2,fVar11,fVar10,param_3,lVar4,uVar5,uVar8);
      }
      else if (cVar1 == '\x01') {
        FUN_1439661d0(param_1,param_2,fVar11,fVar10,param_3,lVar4,uVar5,uVar8);
      }
      else if (cVar1 == '\x02') {
        FUN_143968dd0(param_1,param_2,fVar11,fVar10,param_3,lVar4,uVar5,uVar8);
      }
      else if (cVar1 == '\x03') {
        FUN_14396b670(param_1,param_2,fVar11,fVar10,param_3,lVar4,uVar5,uVar8);
      }
      uVar6 = (int)uVar7 + 1;
      param_5 = param_5 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < param_4);
  }
  return;
}



// FUNCTION 1439597c0 PxVehiclePostUpdates body=5 status=ok
// SIG undefined PxVehiclePostUpdates(void)

void physx::PxVehiclePostUpdates(longlong *param_1,uint param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  byte *pbVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uStack_4f8;
  undefined8 uStack_4f4;
  undefined8 uStack_4ec;
  ulonglong uStack_4e0;
  ulonglong uStack_4d8;
  undefined4 auStack_4c8 [4];
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  longlong *plStack_458;
  longlong lStack_450;
  undefined8 auStack_448 [129];
  
  if (param_2 != 0) {
    uVar15 = (ulonglong)param_2;
    do {
      lVar9 = *param_3;
      plVar3 = *(longlong **)(lVar9 + 0xa0);
      if (*(char *)((longlong)param_1 + 0x24) == '\0') {
        uStack_4d8 = uVar15;
        lStack_450 = lVar9;
        if (*(char *)((longlong)param_1 + 0x25) != '\0') {
          (**(code **)(*plVar3 + 0x240))(plVar3);
        }
        if (DAT_146b95e00 == '\0') {
          (**(code **)(*plVar3 + 0x130))(plVar3,(longlong)param_1 + 0xc,0);
          (**(code **)(*plVar3 + 0x140))(plVar3,param_1 + 3,0);
        }
        else {
          (**(code **)(*plVar3 + 0x148))(plVar3,(longlong)param_1 + 0xc,3);
          (**(code **)(*plVar3 + 0x150))(plVar3,param_1 + 3,3);
        }
        uVar2 = *(uint *)(lVar9 + 0x3c);
        uVar12 = *(uint *)(lVar9 + 0x38);
        uVar11 = (ulonglong)uVar12;
        uStack_4f4 = 0;
        uStack_4ec = 0;
        uStack_4f8 = 4;
        if (uVar2 < 4) {
          uStack_4f8 = uVar2;
        }
        if (1 < uVar12 - 1) {
          puVar13 = &uStack_4f4;
          for (uVar5 = (ulonglong)(uVar12 - 2); uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)puVar13 = 4;
            puVar13 = (undefined8 *)((longlong)puVar13 + 4);
          }
        }
        (&uStack_4f8)[uVar12 - 1] = uVar2 + (1 - uVar12) * 4;
        if (uVar12 != 0) {
          puVar6 = &uStack_4f8;
          uStack_4e0 = uVar11;
          lVar14 = 0;
          lVar16 = 0x80;
          do {
            lVar4 = *param_1;
            uVar12 = *puVar6;
            lVar9 = *(longlong *)(lVar9 + 0x30);
            auStack_4c8[0] = *(undefined4 *)(lVar4 + -0x80 + lVar16);
            auStack_4c8[1] = *(undefined4 *)(lVar4 + -0x7c + lVar16);
            auStack_4c8[2] = *(undefined4 *)(lVar4 + -0x78 + lVar16);
            auStack_4c8[3] = *(undefined4 *)(lVar4 + -0x74 + lVar16);
            uStack_4b8 = *(undefined4 *)(lVar4 + -0x70 + lVar16);
            uStack_4b4 = *(undefined4 *)(lVar4 + -0x6c + lVar16);
            uStack_4b0 = *(undefined4 *)(lVar4 + -0x68 + lVar16);
            uStack_4ac = *(undefined4 *)(lVar4 + -0x40 + lVar16);
            uStack_4a8 = *(undefined4 *)(lVar4 + -0x3c + lVar16);
            uStack_4a4 = *(undefined4 *)(lVar4 + -0x38 + lVar16);
            uStack_4a0 = *(undefined4 *)(lVar4 + -0x34 + lVar16);
            uStack_49c = *(undefined4 *)(lVar4 + -0x30 + lVar16);
            uStack_498 = *(undefined4 *)(lVar4 + -0x2c + lVar16);
            uStack_494 = *(undefined4 *)(lVar4 + -0x28 + lVar16);
            uStack_490 = *(undefined4 *)(lVar4 + lVar16);
            uStack_48c = *(undefined4 *)(lVar4 + 4 + lVar16);
            uStack_488 = *(undefined4 *)(lVar4 + 8 + lVar16);
            uStack_484 = *(undefined4 *)(lVar4 + 0xc + lVar16);
            uStack_480 = *(undefined4 *)(lVar4 + 0x10 + lVar16);
            uStack_47c = *(undefined4 *)(lVar4 + 0x14 + lVar16);
            uStack_478 = *(undefined4 *)(lVar4 + 0x18 + lVar16);
            uStack_474 = *(undefined4 *)(lVar4 + 0x40 + lVar16);
            uStack_470 = *(undefined4 *)(lVar4 + 0x44 + lVar16);
            uStack_46c = *(undefined4 *)(lVar4 + 0x48 + lVar16);
            uStack_468 = *(undefined4 *)(lVar4 + 0x4c + lVar16);
            uStack_464 = *(undefined4 *)(lVar4 + 0x50 + lVar16);
            uStack_460 = *(undefined4 *)(lVar4 + 0x54 + lVar16);
            uStack_45c = *(undefined4 *)(lVar4 + 0x58 + lVar16);
            uStack_4e0 = uVar11;
            (**(code **)(*plVar3 + 0xd0))(plVar3,auStack_448);
            uVar15 = 0;
            if (uVar12 != 0) {
              pbVar10 = (byte *)(lVar14 + 0x3a0 + lVar9);
              do {
                bVar1 = *pbVar10;
                if (bVar1 != 0xff) {
                  if (bVar1 != 0xffffffff) {
                    if (bVar1 < 0x80) {
                      plVar7 = (longlong *)auStack_448[bVar1];
                    }
                    else {
                      (**(code **)(*plVar3 + 0xd0))(plVar3,&plStack_458);
                      plVar7 = plStack_458;
                    }
                    (**(code **)(*plVar7 + 0x88))(plVar7,auStack_4c8 + uVar15 * 7);
                  }
                }
                uVar8 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar8;
                pbVar10 = pbVar10 + 1;
                uVar11 = uStack_4e0;
              } while (uVar8 < uVar12);
            }
            lVar16 = lVar16 + 0x100;
            puVar6 = puVar6 + 1;
            lVar14 = lVar14 + 0x3b0;
            uVar11 = uVar11 - 1;
            uStack_4e0 = uVar11;
            lVar9 = lStack_450;
            uVar15 = uStack_4d8;
          } while (uVar11 != 0);
        }
        uVar11 = 0;
        if (uVar2 != 0) {
          lVar9 = 0;
          do {
            lVar14 = *param_1;
            lVar16 = *(longlong *)(lVar14 + 0x20 + lVar9);
            if (lVar16 != 0) {
              PxRigidBodyExt::addForceAtPos
                        (lVar16,lVar14 + uVar11 * 0x40 + 0x28,lVar14 + 0x34 + uVar11 * 0x40,0,1);
            }
            uVar12 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar12;
            lVar9 = lVar9 + 0x40;
          } while (uVar12 < uVar2);
        }
      }
      param_3 = param_3 + 1;
      param_1 = param_1 + 5;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}



// FUNCTION 1439597e0 PxVehicleUpdateSingleVehicleAndStoreTelemetryData body=5 status=ok
// SIG undefined PxVehicleUpdateSingleVehicleAndStoreTelemetryData(void)

void physx::PxVehicleUpdateSingleVehicleAndStoreTelemetryData
               (undefined4 param_1,float *param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5,undefined8 *param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined4 uStack_588;
  undefined4 auStack_578 [60];
  undefined4 auStack_488 [60];
  undefined1 auStack_398 [896];
  
  uStack_5a8 = 0;
  uStack_5a0 = 0;
  uStack_598 = 0;
  uStack_590 = 0;
  uStack_588 = 0;
  DAT_146b95ee0 = &uStack_5a8;
  ::_guard_xfg_dispatch_icall_nop(auStack_398,0,0x370);
  uVar5 = 0;
  uVar4 = uVar5;
  if ((*(uint *)(param_4 + 0x38) & 0x3fffffff) != 0) {
    do {
      uVar6 = (int)uVar4 + 1;
      (&DAT_146b95e40)[uVar4] = auStack_398 + uVar4 * 0x2c;
      uVar4 = (ulonglong)uVar6;
    } while (uVar6 < (uint)(*(int *)(param_4 + 0x38) << 2));
  }
  uVar6 = *(int *)(param_4 + 0x38) * 4;
  if (uVar6 < 0x14) {
    puVar7 = &DAT_146b95e40 + uVar6;
    for (uVar4 = (ulonglong)(*(int *)(param_4 + 0x38) * -4 + 0x14); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  ::_guard_xfg_dispatch_icall_nop(auStack_578,0,0xf0);
  DAT_146b95e38 = auStack_578;
  ::_guard_xfg_dispatch_icall_nop(auStack_488,0,0xf0);
  DAT_146b95e30 = auStack_488;
  cVar1 = *(char *)(param_4 + 0xad);
  fVar8 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
  fVar9 = 1.0 / fVar8;
  if (cVar1 == '\0') {
    FUN_143962a00(param_1,param_2,fVar8,fVar9,param_3,param_4,param_5,0);
    if (*(int *)(param_4 + 0x3c) != 0) {
      do {
        PxVehicleGraph::updateTimeSlice(uVar5 * 0x3de0 + param_6[1],auStack_398 + uVar5 * 0x2c);
        lVar2 = param_6[3];
        uVar6 = (int)uVar5 + 1;
        lVar3 = param_6[2];
        *(undefined4 *)(lVar2 + uVar5 * 0xc) = auStack_578[uVar5 * 3];
        *(undefined4 *)(lVar2 + 4 + uVar5 * 0xc) = auStack_578[uVar5 * 3 + 1];
        *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc) = auStack_578[uVar5 * 3 + 2];
        *(undefined4 *)(lVar3 + uVar5 * 0xc) = auStack_488[uVar5 * 3];
        *(undefined4 *)(lVar3 + 4 + uVar5 * 0xc) = auStack_488[uVar5 * 3 + 1];
        *(undefined4 *)(lVar3 + 8 + uVar5 * 0xc) = auStack_488[uVar5 * 3 + 2];
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_4 + 0x3c));
    }
  }
  else if (cVar1 == '\x01') {
    FUN_1439661d0(param_1,param_2,fVar8,fVar9,param_3,param_4,param_5,0);
    if (*(int *)(param_4 + 0x3c) != 0) {
      do {
        PxVehicleGraph::updateTimeSlice(uVar5 * 0x3de0 + param_6[1],auStack_398 + uVar5 * 0x2c);
        lVar2 = param_6[3];
        uVar6 = (int)uVar5 + 1;
        lVar3 = param_6[2];
        *(undefined4 *)(lVar2 + uVar5 * 0xc) = auStack_578[uVar5 * 3];
        *(undefined4 *)(lVar2 + 4 + uVar5 * 0xc) = auStack_578[uVar5 * 3 + 1];
        *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc) = auStack_578[uVar5 * 3 + 2];
        *(undefined4 *)(lVar3 + uVar5 * 0xc) = auStack_488[uVar5 * 3];
        *(undefined4 *)(lVar3 + 4 + uVar5 * 0xc) = auStack_488[uVar5 * 3 + 1];
        *(undefined4 *)(lVar3 + 8 + uVar5 * 0xc) = auStack_488[uVar5 * 3 + 2];
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_4 + 0x3c));
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        return;
      }
      FUN_14396b670(param_1,param_2,fVar8,fVar9,param_3,param_4,param_5,0);
      if (*(int *)(param_4 + 0x3c) == 0) {
        return;
      }
      do {
        PxVehicleGraph::updateTimeSlice(uVar5 * 0x3de0 + param_6[1],auStack_398 + uVar5 * 0x2c);
        lVar2 = param_6[3];
        uVar6 = (int)uVar5 + 1;
        *(undefined4 *)(lVar2 + uVar5 * 0xc) = auStack_578[uVar5 * 3];
        *(undefined4 *)(lVar2 + 4 + uVar5 * 0xc) = auStack_578[uVar5 * 3 + 1];
        *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc) = auStack_578[uVar5 * 3 + 2];
        lVar2 = param_6[2];
        *(undefined4 *)(lVar2 + uVar5 * 0xc) = auStack_488[uVar5 * 3];
        *(undefined4 *)(lVar2 + 4 + uVar5 * 0xc) = auStack_488[uVar5 * 3 + 1];
        *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc) = auStack_488[uVar5 * 3 + 2];
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_4 + 0x3c));
      return;
    }
    FUN_143968dd0(param_1,param_2,fVar8,fVar9,param_3,param_4,param_5,0);
    if (*(int *)(param_4 + 0x3c) != 0) {
      do {
        PxVehicleGraph::updateTimeSlice(uVar5 * 0x3de0 + param_6[1],auStack_398 + uVar5 * 0x2c);
        lVar2 = param_6[3];
        uVar6 = (int)uVar5 + 1;
        lVar3 = param_6[2];
        *(undefined4 *)(lVar2 + uVar5 * 0xc) = auStack_578[uVar5 * 3];
        *(undefined4 *)(lVar2 + 4 + uVar5 * 0xc) = auStack_578[uVar5 * 3 + 1];
        *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc) = auStack_578[uVar5 * 3 + 2];
        *(undefined4 *)(lVar3 + uVar5 * 0xc) = auStack_488[uVar5 * 3];
        *(undefined4 *)(lVar3 + 4 + uVar5 * 0xc) = auStack_488[uVar5 * 3 + 1];
        *(undefined4 *)(lVar3 + 8 + uVar5 * 0xc) = auStack_488[uVar5 * 3 + 2];
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_4 + 0x3c));
    }
  }
  PxVehicleGraph::updateTimeSlice(*param_6,&uStack_5a8);
  return;
}



// FUNCTION 1439597f0 PxVehicleComputeTireForceDefault body=845 status=ok
// SIG undefined PxVehicleComputeTireForceDefault(void)

void physx::PxVehicleComputeTireForceDefault
               (float *param_1,float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6,float param_7,undefined8 param_8,float param_9,float param_10,
               float param_11,float param_12,float param_13,float *param_14,float *param_15,
               float *param_16,float *param_17)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *param_14 = 0.0;
  *param_15 = 0.0;
  *param_16 = 0.0;
  *param_17 = 0.0;
  if (ABS(param_4) < DAT_146b95e24) {
    param_4 = 0.0;
  }
  if (ABS(param_3) < DAT_146b95e24) {
    param_3 = 0.0;
  }
  if (ABS(param_5) < DAT_146b95e24) {
    param_5 = 0.0;
  }
  if (((param_4 != 0.0) || (param_3 != 0.0)) || (param_5 != 0.0)) {
    fVar2 = (param_10 * 3.0) / *param_1;
    fVar6 = 1.0;
    fVar8 = (fVar2 - fVar2 * 0.33333 * fVar2) + fVar2 * 0.037037 * fVar2 * fVar2;
    fVar2 = param_1[2];
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    fVar8 = fVar8 * param_9 * param_1[1];
    fVar1 = ::_guard_xfg_dispatch_icall_nop(param_4 - (param_12 * param_1[3] * param_5) / fVar8);
    fVar4 = SQRT(fVar1 * fVar8 * fVar8 * fVar1 +
                 param_12 * fVar2 * param_3 * param_12 * fVar2 * param_3) *
            (1.0 / (param_2 * param_11));
    fVar3 = fVar4 * 0.33333 * fVar4;
    fVar2 = fVar4 * 0.037037 * fVar4 * fVar4;
    fVar7 = (fVar4 - fVar3) + fVar2;
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if (fVar4 <= 6.2831855) {
      fVar8 = param_13 * param_1[0xb] * fVar8;
      fVar6 = ::_guard_xfg_dispatch_icall_nop(fVar4 * 0.5);
      fVar6 = ((fVar8 + 1.0) - fVar6 * (1.0 - fVar8)) * 0.5;
    }
    fVar5 = fVar6 * fVar1;
    fVar6 = (param_2 * param_11) / SQRT(fVar5 * fVar6 * fVar1 + param_3 * param_3);
    fVar8 = fVar7 * param_3 * fVar6;
    *param_14 = -(fVar8 * param_7);
    *param_15 = fVar8;
    *param_16 = -(fVar5 * fVar7 * fVar6);
    *param_17 = fVar5 * (((fVar4 - fVar4 * fVar4) + fVar3 * fVar4) - fVar2 * fVar4) * fVar6;
  }
  return;
}



// FUNCTION 143959ba0 setVehicleDefaults body=188 status=ok
// SIG undefined setVehicleDefaults(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::setVehicleDefaults(void)

{
  DAT_146b95f08 = DAT_14682e300;
  DAT_146b95f0c = DAT_14682e304;
  DAT_146b95f10 = DAT_14682e308;
  DAT_146b95ee8 = DAT_14682e310;
  DAT_146b95eec = DAT_14682e314;
  DAT_146b95ef0 = DAT_14682e318;
  DAT_146b95ef8 = DAT_14682e320;
  DAT_146b95efc = DAT_14682e324;
  DAT_146b95f00 = DAT_14682e328;
  DAT_146b95e0c = 0x7f7fffff;
  DAT_146b95e00 = 0;
  DAT_146b95e04 = 0x3f34fdf4;
  _DAT_146b95e08 = 0x3f34fdf4;
  return;
}



// FUNCTION 143959c70 setVehicleToleranceScale body=101 status=ok
// SIG undefined setVehicleToleranceScale(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::setVehicleToleranceScale(float *param_1)

{
  _DAT_146b95e10 = *param_1 * 5.0;
  _DAT_146b95e14 = 1.0 / (*param_1 * 5.0);
  _DAT_146b95e18 = *param_1;
  DAT_146b95e1c = *param_1 * 0.2;
  DAT_146b95e20 = *param_1;
  DAT_146b95e24 = 0x3727c5ac;
  return;
}



// FUNCTION 143959ce0 resetVehicleToleranceScale body=61 status=ok
// SIG undefined resetVehicleToleranceScale(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::resetVehicleToleranceScale(void)

{
  _DAT_146b95e10 = 0;
  _DAT_146b95e14 = 0;
  _DAT_146b95e18 = 0;
  DAT_146b95e1c = 0;
  DAT_146b95e20 = 0;
  DAT_146b95e24 = 0;
  return;
}



// FUNCTION 143959d30 setSerializationRegistryPtr body=8 status=ok
// SIG undefined setSerializationRegistryPtr(void)

void physx::setSerializationRegistryPtr(undefined8 param_1)

{
  DAT_146b95e28 = param_1;
  return;
}



// FUNCTION 143959d40 resetSerializationRegistryPtr body=19 status=ok
// SIG undefined resetSerializationRegistryPtr(void)

undefined8 physx::resetSerializationRegistryPtr(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_146b95e28;
  DAT_146b95e28 = 0;
  return uVar1;
}



// FUNCTION 143959d60 computeSprungMasses body=1742 status=ok
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
  undefined8 local_1308;
  float local_1300;
  undefined8 local_12f8;
  float local_12f0;
  ulonglong local_12e8;
  float local_12d8;
  float local_12d4;
  float local_12d0;
  float local_12cc [20];
  uint local_127c;
  float local_1278;
  float local_1274;
  float local_1270;
  uint local_121c;
  float local_1218 [23];
  float local_11bc [23];
  float local_1160 [23];
  float local_1104 [460];
  uint local_9d4;
  undefined1 local_9c8 [2116];
  undefined4 local_184;
  
  uVar3 = (ulonglong)param_1;
  if (param_1 == 1) {
    *param_6 = param_4;
  }
  else if (param_1 == 2) {
    uVar3 = (ulonglong)param_5;
    fVar14 = *param_2;
    local_1308._0_4_ = param_2[3] - fVar14;
    fVar16 = param_2[1];
    local_1308._4_4_ = param_2[4] - fVar16;
    fVar17 = param_2[2];
    local_1300 = param_2[5] - fVar17;
    local_12f0 = fVar17;
    local_12f8._0_4_ = fVar14;
    local_12f8._4_4_ = fVar16;
    *(undefined4 *)((longlong)&local_12f8 + uVar3 * 4) = 0;
    *(undefined4 *)((longlong)&local_1308 + uVar3 * 4) = 0;
    fVar15 = SQRT(local_1308._4_4_ * local_1308._4_4_ + (float)local_1308 * (float)local_1308 +
                  local_1300 * local_1300);
    fVar18 = local_1308._4_4_;
    fVar19 = (float)local_1308;
    fVar20 = local_1300;
    if (0.0 < fVar15) {
      fVar15 = 1.0 / fVar15;
      fVar19 = (float)local_1308 * fVar15;
      fVar18 = local_1308._4_4_ * fVar15;
      fVar20 = local_1300 * fVar15;
    }
    local_1308._0_4_ = *param_3;
    local_1308._4_4_ = param_3[1];
    local_1300 = param_3[2];
    *(undefined4 *)((longlong)&local_1308 + uVar3 * 4) = 0;
    fVar15 = param_2[4];
    fVar13 = (local_1308._4_4_ - local_12f8._4_4_) * fVar18 +
             ((float)local_1308 - (float)local_12f8) * fVar19 + (local_1300 - local_12f0) * fVar20;
    fVar1 = param_2[3];
    local_1300 = fVar17;
    local_1308._0_4_ = fVar14;
    local_1308._4_4_ = fVar16;
    *(undefined4 *)((longlong)&local_1308 + uVar3 * 4) = 0;
    fVar16 = fVar19 * fVar13 + (float)local_12f8;
    fVar17 = fVar18 * fVar13 + local_12f8._4_4_;
    fVar13 = fVar20 * fVar13 + local_12f0;
    local_12f0 = param_2[5];
    local_12f8._0_4_ = fVar1;
    local_12f8._4_4_ = fVar15;
    *(undefined4 *)((longlong)&local_12f8 + uVar3 * 4) = 0;
    fVar14 = (local_12f8._4_4_ - fVar17) * fVar18 + ((float)local_12f8 - fVar16) * fVar19 +
             (local_12f0 - fVar13) * fVar20;
    fVar14 = (fVar14 * param_4) /
             (fVar14 - ((local_1308._4_4_ - fVar17) * fVar18 + ((float)local_1308 - fVar16) * fVar19
                       + (local_1300 - fVar13) * fVar20));
    *param_6 = fVar14;
    param_6[1] = param_4 - fVar14;
  }
  else {
    local_12d0 = param_4;
    if (param_1 == 3) {
      local_1160[0] = 1.0;
      local_1160[1] = 1.0;
      local_1160[2] = 1.0;
      uVar8 = (ulonglong)((param_5 + 1) % 3);
      local_1218[0] = param_2[uVar8];
      local_1218[1] = param_2[uVar8 + 3];
      local_1218[2] = param_2[uVar8 + 6];
      local_184 = 0;
      uVar3 = (ulonglong)((param_5 + 2) % 3);
      local_11bc[0] = param_2[uVar3];
      local_11bc[1] = param_2[uVar3 + 3];
      local_11bc[2] = param_2[uVar3 + 6];
      local_12d8 = param_4 * param_3[uVar8];
      local_12d4 = param_4 * param_3[uVar3];
      local_127c = param_1;
      local_121c = param_1;
      local_9d4 = param_1;
      MatrixNNLUSolver::decomposeLU(local_9c8,local_1218);
      MatrixNNLUSolver::solve(local_9c8,&local_12d8,&local_1278);
      *param_6 = local_1278;
      param_6[2] = local_1270;
      param_6[1] = local_1274;
    }
    else if (3 < param_1) {
      local_127c = param_1 + 3;
      uVar8 = (ulonglong)((param_5 + 1) % 3);
      local_12e8 = (ulonglong)((param_5 + 2) % 3);
      local_9d4 = local_127c;
      if (param_1 != 0) {
        pfVar4 = local_11bc;
        pfVar6 = param_2 + local_12e8;
        uVar9 = uVar3;
        do {
          pfVar4[-0x17] = pfVar6[uVar8 - local_12e8];
          *pfVar4 = *pfVar6;
          pfVar4[0x17] = 1.0;
          pfVar4 = pfVar4 + 1;
          uVar9 = uVar9 - 1;
          pfVar6 = pfVar6 + 3;
        } while (uVar9 != 0);
      }
      lVar11 = 0;
      if (param_1 < local_127c) {
        pfVar4 = local_11bc + uVar3;
        uVar9 = (ulonglong)(local_127c - param_1);
        do {
          pfVar4[-0x17] = 0.0;
          *pfVar4 = 0.0;
          pfVar4[0x17] = 0.0;
          pfVar4 = pfVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      local_12d8 = param_4 * param_3[uVar8];
      local_12d4 = param_4 * param_3[local_12e8];
      if (param_1 != 0) {
        uVar2 = param_1 + 1;
        local_1308 = uVar3 * 4;
        pfVar4 = local_12cc;
        for (uVar9 = uVar3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pfVar4 = (param_4 / (float)uVar3) * 2.0;
          pfVar4 = pfVar4 + 1;
        }
        local_12f8 = (ulonglong)(param_1 + 2) - (ulonglong)uVar2;
        lVar7 = 0x45;
        pfVar4 = local_1104 + uVar2;
        pfVar6 = param_2 + local_12e8;
        pfVar12 = local_1104;
        uVar9 = uVar3;
        do {
          pfVar10 = pfVar12;
          for (uVar5 = uVar3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pfVar10 = 0.0;
            pfVar10 = pfVar10 + 1;
          }
          local_1218[lVar7 + lVar11] = 2.0;
          lVar7 = lVar7 + 0x17;
          lVar11 = lVar11 + 1;
          pfVar4[uVar3 - uVar2] = pfVar6[uVar8 - local_12e8];
          *pfVar4 = *pfVar6;
          pfVar4[local_12f8] = 1.0;
          uVar9 = uVar9 - 1;
          pfVar4 = pfVar4 + 0x17;
          pfVar6 = pfVar6 + 3;
          pfVar12 = pfVar12 + 0x17;
        } while (uVar9 != 0);
      }
      local_121c = param_1 + 3;
      local_184 = 0;
      MatrixNNLUSolver::decomposeLU(local_9c8,local_1218);
      MatrixNNLUSolver::solve(local_9c8,&local_12d8,&local_1278);
      if (param_1 != 0) {
        ::_guard_xfg_dispatch_icall_nop(param_6,&local_1278,uVar3 << 2);
      }
    }
  }
  return;
}



// FUNCTION 14395a440 computeDirection body=266 status=ok
// SIG undefined computeDirection(void)

void physx::computeDirection(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0xffffffff;
  if ((((DAT_146b95f08 == 1.0) && (DAT_146b95f0c == 0.0)) && (DAT_146b95f10 == 0.0)) ||
     (((DAT_146b95f08 == -1.0 && (DAT_146b95f0c == 0.0)) && (DAT_146b95f10 == 0.0)))) {
    *param_1 = 0;
  }
  else if (DAT_146b95f08 == 0.0) {
    if (((DAT_146b95f0c == 1.0) && (DAT_146b95f10 == 0.0)) ||
       ((DAT_146b95f0c == -1.0 && (DAT_146b95f10 == 0.0)))) {
      *param_1 = 1;
    }
    else if ((DAT_146b95f0c == 0.0) &&
            ((DAT_146b95f10 == 1.0 || ((DAT_146b95f0c == 0.0 && (DAT_146b95f10 == -1.0)))))) {
      *param_1 = 2;
    }
  }
  *param_2 = 0xffffffff;
  if ((((DAT_146b95ee8 != 1.0) || (DAT_146b95eec != 0.0)) || (DAT_146b95ef0 != 0.0)) &&
     (((DAT_146b95ee8 != -1.0 || (DAT_146b95eec != 0.0)) || (DAT_146b95ef0 != 0.0)))) {
    if (DAT_146b95ee8 == 0.0) {
      if (((DAT_146b95eec == 1.0) && (DAT_146b95ef0 == 0.0)) ||
         ((DAT_146b95eec == -1.0 && (DAT_146b95ef0 == 0.0)))) {
        *param_2 = 1;
        return;
      }
      if ((DAT_146b95eec == 0.0) &&
         ((DAT_146b95ef0 == 1.0 || ((DAT_146b95eec == 0.0 && (DAT_146b95ef0 == -1.0)))))) {
        *param_2 = 2;
      }
    }
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14395a550 enable3WMode body=1154 status=ok
// SIG undefined enable3WMode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void physx::enable3WMode(uint param_1,int param_2,char param_3,undefined8 param_4,undefined8 param_5
                        ,longlong param_6)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  uint uVar15;
  float fVar16;
  undefined8 local_1298;
  float fStack_1290;
  undefined4 uStack_128c;
  undefined4 local_1288 [4];
  undefined4 local_1278 [4];
  float local_1268 [4];
  float local_1258;
  float fStack_1254;
  float fStack_1250;
  float fStack_124c;
  undefined8 local_1248;
  undefined8 uStack_1240;
  undefined4 local_120c;
  ulonglong local_1208;
  ulonglong uStack_1200;
  undefined4 local_11f8;
  undefined4 uStack_11f4;
  undefined4 uStack_11f0;
  undefined4 uStack_11ec;
  float local_11e8;
  float local_11e4;
  float local_11e0;
  undefined4 local_118c;
  float local_1188;
  float local_1184;
  float local_1180;
  float local_112c;
  float local_1128;
  float local_1124;
  undefined4 local_10d0;
  undefined4 local_10cc;
  undefined4 local_10c8;
  undefined4 local_944;
  undefined1 local_938 [2116];
  undefined4 local_f4;
  
  uVar12 = 0;
  uVar15 = 2;
  if (param_3 != '\0') {
    uVar15 = uVar12;
  }
  uVar14 = 3;
  if (param_3 != '\0') {
    uVar14 = 1;
  }
  PxVehicleWheelsSimData::disableWheel(param_4,uVar15);
  PxVehicleWheelsSimData::setWheelShapeMapping(param_4,uVar15,0xffffffff);
  PxVehicleWheelsDynData::setWheelRotationSpeed(param_5,uVar15,0);
  if (param_3 == '\0') {
    lVar3 = PxVehicleWheelsSimData::getWheelData(param_4,3);
    if (*(float *)(lVar3 + 0x1c) == 0.0) {
      uVar10 = 2;
      goto LAB_14395a616;
    }
  }
  else {
    lVar3 = PxVehicleWheelsSimData::getWheelData(param_4,1);
    if (*(float *)(lVar3 + 0x1c) == 0.0) {
      uVar10 = 0;
LAB_14395a616:
      lVar3 = PxVehicleWheelsSimData::getWheelData(param_4,uVar10);
      if (*(float *)(lVar3 + 0x1c) == 0.0) goto LAB_14395a641;
    }
  }
  fStack_1290 = *(float *)(param_6 + 0x238);
  uStack_128c = *(undefined4 *)(param_6 + 0x23c);
  local_1298 = (ulonglong)*(uint *)(param_6 + 0x234) << 0x20;
  PxVehicleDriveSimData4W::setAckermannGeometryData(param_6,&local_1298);
LAB_14395a641:
  local_1208 = *(ulonglong *)(param_6 + 0x210);
  uStack_1200 = *(ulonglong *)(param_6 + 0x218);
  local_11f8 = *(undefined4 *)(param_6 + 0x220);
  uStack_11f4 = *(undefined4 *)(param_6 + 0x224);
  uStack_11f0 = *(undefined4 *)(param_6 + 0x228);
  uStack_11ec = *(undefined4 *)(param_6 + 0x22c);
  if (param_3 == '\0') {
    uStack_11f4 = 0x7f7fffff;
    uStack_1200 = uStack_1200 & 0xffffffff00000000;
  }
  else {
    local_11f8 = 0x7f7fffff;
    local_1208 = local_1208 & 0xffffffff;
  }
  PxVehicleDriveSimData4W::setDiffData(param_6,&local_1208);
  puVar4 = (undefined4 *)PxVehicleWheelsSimData::getWheelCentreOffset(param_4,uVar14);
  uVar9 = (ulonglong)param_1;
  local_1288[0] = *puVar4;
  local_1288[1] = puVar4[1];
  local_1288[2] = puVar4[2];
  local_1288[uVar9] = 0;
  PxVehicleWheelsSimData::setWheelCentreOffset(param_4,uVar14,local_1288);
  puVar4 = (undefined4 *)PxVehicleWheelsSimData::getSuspForceAppPointOffset(param_4,uVar14);
  local_1278[0] = *puVar4;
  local_1278[1] = puVar4[1];
  local_1278[2] = puVar4[2];
  local_1278[uVar9] = 0;
  PxVehicleWheelsSimData::setSuspForceAppPointOffset(param_4,uVar14,local_1278);
  puVar5 = (undefined8 *)PxVehicleWheelsSimData::getTireForceAppPointOffset(param_4,uVar14);
  local_1298 = *puVar5;
  fStack_1290 = *(float *)(puVar5 + 1);
  *(undefined4 *)((longlong)&local_1298 + uVar9 * 4) = 0;
  PxVehicleWheelsSimData::setTireForceAppPointOffset(param_4,uVar14,&local_1298);
  lVar3 = PxVehicleWheelsSimData::getSuspensionData(param_4,1);
  lVar6 = PxVehicleWheelsSimData::getSuspensionData(param_4,0);
  fVar16 = *(float *)(lVar3 + 0x10);
  fVar1 = *(float *)(lVar6 + 0x10);
  lVar3 = PxVehicleWheelsSimData::getSuspensionData(param_4,2);
  fVar2 = *(float *)(lVar3 + 0x10);
  lVar3 = PxVehicleWheelsSimData::getSuspensionData(param_4,3);
  fVar16 = fVar16 + fVar1 + fVar2 + *(float *)(lVar3 + 0x10);
  pfVar7 = (float *)PxVehicleWheelsSimData::getWheelCentreOffset(param_4,uVar15 + 1);
  local_1268[0] = *pfVar7;
  local_1268[1] = pfVar7[1];
  local_1268[2] = pfVar7[2];
  pfVar7 = (float *)PxVehicleWheelsSimData::getWheelCentreOffset(param_4,uVar15 - 2 & 3);
  local_1268[3] = *pfVar7;
  local_1258 = pfVar7[1];
  fStack_1254 = pfVar7[2];
  pfVar7 = (float *)PxVehicleWheelsSimData::getWheelCentreOffset(param_4,uVar15 - 1 & 3);
  local_1298 = 0;
  fStack_1290 = 0.0;
  local_11e0 = fVar16;
  fStack_1250 = *pfVar7;
  fStack_124c = pfVar7[1];
  local_1248 = CONCAT44(local_1248._4_4_,pfVar7[2]);
  local_944 = 3;
  local_118c = 3;
  local_10d0 = 0x3f800000;
  local_10cc = 0x3f800000;
  local_10c8 = 0x3f800000;
  uVar13 = (ulonglong)((param_2 + 1U) % 3);
  local_f4 = 0;
  local_1188 = local_1268[uVar13];
  local_1180 = local_1268[uVar13 + 6];
  local_1184 = local_1268[uVar13 + 3];
  uVar9 = (ulonglong)((param_2 + 2U) % 3);
  local_112c = local_1268[uVar9];
  local_1124 = local_1268[uVar9 + 6];
  local_11e8 = fVar16 * *(float *)((longlong)&local_1298 + uVar13 * 4);
  local_120c = 3;
  local_1128 = local_1268[uVar9 + 3];
  local_11e4 = fVar16 * *(float *)((longlong)&local_1298 + uVar9 * 4);
  MatrixNNLUSolver::decomposeLU(local_938,&local_1188);
  MatrixNNLUSolver::solve(local_938,&local_11e8,local_1268);
  pfVar7 = (float *)&local_1298;
  fStack_1290 = local_1268[2];
  local_1298 = CONCAT44(local_1268[1],local_1268[0]);
  do {
    uVar11 = uVar15 + 1 + uVar12 & 3;
    pfVar8 = (float *)PxVehicleWheelsSimData::getSuspensionData(param_4,uVar11);
    local_1268[0] = *pfVar8;
    local_1268[1] = pfVar8[1];
    local_1268[2] = pfVar8[2];
    local_1268[3] = pfVar8[3];
    local_1258 = pfVar8[4];
    fStack_1254 = pfVar8[5];
    fStack_1250 = pfVar8[6];
    fStack_124c = pfVar8[7];
    fVar16 = SQRT(*pfVar8 / pfVar8[4]);
    local_1248 = *(undefined8 *)(pfVar8 + 8);
    uStack_1240 = *(undefined8 *)(pfVar8 + 10);
    local_1258 = *pfVar7;
    local_1268[0] = fVar16 * fVar16 * local_1258;
    PxVehicleWheelsSimData::setSuspensionData(param_4,uVar11,local_1268);
    uVar12 = uVar12 + 1;
    pfVar7 = pfVar7 + 1;
  } while (uVar12 < 3);
  return;
}



// FUNCTION 14395a9e0 processGears body=200 status=ok
// SIG undefined processGears(void)

void physx::processGears(float param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  
  if (((*(char *)(param_3 + 0x41) != '\0') &&
      (iVar2 = *(int *)(param_3 + 0x44), *(int *)(param_2 + 0x84) + -1 != iVar2)) &&
     (iVar2 == *(int *)(param_3 + 0x48))) {
    if (iVar2 == 0) {
      *(undefined4 *)(param_3 + 0x48) = 2;
    }
    else if (iVar2 == 1) {
      *(undefined4 *)(param_3 + 0x48) = 2;
    }
    else {
      *(int *)(param_3 + 0x48) = iVar2 + 1;
    }
    *(undefined4 *)(param_3 + 0x50) = 0;
    *(undefined4 *)(param_3 + 0x44) = 1;
  }
  if (((*(char *)(param_3 + 0x42) != '\0') && (iVar2 = *(int *)(param_3 + 0x44), iVar2 != 0)) &&
     (iVar2 == *(int *)(param_3 + 0x48))) {
    if (iVar2 == 2) {
      *(undefined8 *)(param_3 + 0x44) = 1;
    }
    else if (iVar2 == 1) {
      *(undefined8 *)(param_3 + 0x44) = 1;
    }
    else {
      *(undefined4 *)(param_3 + 0x44) = 1;
      *(int *)(param_3 + 0x48) = iVar2 + -1;
    }
    *(undefined4 *)(param_3 + 0x50) = 0;
  }
  if (*(int *)(param_3 + 0x44) != *(int *)(param_3 + 0x48)) {
    fVar1 = *(float *)(param_3 + 0x50);
    if (*(float *)(param_2 + 0x88) <= fVar1 && fVar1 != *(float *)(param_2 + 0x88)) {
      *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x48);
      *(undefined4 *)(param_3 + 0x50) = 0;
      *(undefined2 *)(param_3 + 0x41) = 0;
      return;
    }
    *(float *)(param_3 + 0x50) = fVar1 + param_1;
  }
  return;
}



// FUNCTION 14395aab0 computeTankDiff body=517 status=ok
// SIG undefined computeTankDiff(void)

void physx::computeTankDiff
               (float param_1,float param_2,uint param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7)

{
  uint uVar1;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar2;
  
  uVar7 = 0x3f800000;
  uVar4 = 0;
  fVar8 = 0.0;
  uVar2 = uVar4;
  if (param_3 == 0) {
LAB_14395ab38:
    fVar8 = 0.0;
  }
  else {
    do {
      if (*(char *)(uVar2 + param_4) != '\0') {
        fVar8 = fVar8 + 1.0;
      }
      uVar1 = (int)uVar2 + 2;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
    if (fVar8 <= 0.0) goto LAB_14395ab38;
    fVar8 = 1.0 / fVar8;
  }
  uVar3 = 1;
  fVar5 = 0.0;
  uVar2 = 1;
  if (1 < param_3) {
    do {
      if (*(char *)(uVar2 + param_4) != '\0') {
        fVar5 = fVar5 + 1.0;
      }
      uVar1 = (int)uVar2 + 2;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
    if (0.0 < fVar5) {
      fVar5 = 1.0 / fVar5;
      goto LAB_14395ab75;
    }
  }
  fVar5 = 0.0;
LAB_14395ab75:
  fVar6 = ABS(param_2) + ABS(param_1);
  fVar10 = 0.5;
  fVar11 = 0.5;
  if (0.001 < fVar6) {
    fVar10 = ((ABS(param_1) - ABS(param_2)) / fVar6) * 0.5;
    fVar11 = 0.5 - fVar10;
    fVar10 = fVar10 + 0.5;
  }
  uVar9 = 0x3f800000;
  if (0.001 < fVar6) {
    if (-param_1 < 0.0) {
      uVar9 = 0x3f800000;
    }
    else {
      uVar9 = 0;
    }
    if (param_1 < 0.0) {
      uVar9 = 0xbf800000;
    }
    if (0.0 <= -param_2) {
      uVar7 = 0;
    }
    if (param_2 < 0.0) {
      uVar7 = 0xbf800000;
    }
  }
  if (param_3 != 0) {
    do {
      if (*(char *)(uVar4 + param_4) != '\0') {
        *(float *)(param_5 + uVar4 * 4) = fVar8 * 0.5;
        *(float *)(param_6 + uVar4 * 4) = fVar10 * fVar8;
        *(undefined4 *)(param_7 + uVar4 * 4) = uVar9;
      }
      uVar1 = (int)uVar4 + 2;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
  }
  if (1 < param_3) {
    do {
      if (*(char *)(uVar3 + param_4) != '\0') {
        *(float *)(param_5 + uVar3 * 4) = fVar5 * 0.5;
        *(float *)(param_6 + uVar3 * 4) = fVar11 * fVar5;
        *(undefined4 *)(param_7 + uVar3 * 4) = uVar7;
      }
      uVar1 = (int)uVar3 + 2;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
  }
  return;
}



// FUNCTION 14395ad10 intersectRayPlane body=380 status=ok
// SIG undefined intersectRayPlane(void)

bool physx::intersectRayPlane(void)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float in_stack_00000028;
  float in_stack_00000030;
  float *in_stack_00000038;
  float *in_stack_00000040;
  float *in_stack_00000048;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  
  computeSuspensionRaycast();
  fVar4 = in_stack_00000038[1];
  fVar1 = *in_stack_00000038;
  fVar2 = in_stack_00000038[2];
  bVar3 = 0.0 <= fVar1 * local_68 + fVar4 * local_64 + fVar2 * local_60 + in_stack_00000038[3];
  if (bVar3) {
    in_stack_00000030 = in_stack_00000028 + in_stack_00000028 + in_stack_00000030;
    fVar4 = in_stack_00000030 -
            -((fVar4 * local_64 + fVar1 * local_68 + fVar2 * local_60 + in_stack_00000038[3]) /
             (local_54 * fVar4 + local_58 * fVar1 + local_50 * fVar2));
    *in_stack_00000040 = fVar4;
    in_stack_00000030 = in_stack_00000030 - fVar4;
    *in_stack_00000048 = local_58 * in_stack_00000030 + local_68;
    in_stack_00000048[1] = local_54 * in_stack_00000030 + local_64;
    in_stack_00000048[2] = local_50 * in_stack_00000030 + local_60;
  }
  return bVar3;
}



// FUNCTION 14395aea0 intersectPlanes body=561 status=ok
// SIG undefined intersectPlanes(void)

undefined8 physx::intersectPlanes(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
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
  
  fVar8 = param_2[1];
  fVar6 = 0.0;
  fVar7 = param_1[1];
  fVar1 = param_2[3];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  uVar5 = 1;
  fVar4 = param_1[3];
  fVar13 = fVar3 * fVar7 - fVar8 * param_1[2];
  fVar15 = fVar2 * param_1[2] - fVar3 * *param_1;
  fVar11 = fVar13 * fVar13;
  fVar9 = fVar15 * fVar15;
  fVar14 = fVar8 * *param_1 - fVar2 * fVar7;
  fVar12 = fVar14 * fVar14;
  if (((fVar12 <= fVar9) || (fVar12 <= fVar11)) || (fVar12 <= 0.0)) {
    if ((fVar9 <= fVar11) || (fVar9 <= 0.0)) {
      fVar7 = 0.0;
      if (fVar11 <= 0.0) {
        fVar10 = 0.0;
        uVar5 = 0;
      }
      else {
        fVar10 = (fVar1 * param_1[2] - fVar3 * fVar4) * (1.0 / fVar13);
        fVar6 = (fVar8 * fVar4 - fVar1 * param_1[1]) * (1.0 / fVar13);
      }
    }
    else {
      fVar10 = 0.0;
      fVar7 = -((fVar1 * param_1[2] - fVar3 * fVar4) * (1.0 / fVar15));
      fVar6 = -((fVar2 * fVar4 - fVar1 * *param_1) * (1.0 / fVar15));
    }
  }
  else {
    fVar10 = (fVar2 * fVar4 - fVar1 * *param_1) * (1.0 / fVar14);
    fVar7 = (fVar1 * fVar7 - fVar8 * fVar4) * (1.0 / fVar14);
  }
  fVar8 = 1.0 / SQRT(fVar9 + fVar11 + fVar12);
  *param_4 = fVar8 * fVar13;
  param_4[1] = fVar8 * fVar15;
  param_4[2] = fVar8 * fVar14;
  *param_3 = fVar7;
  param_3[1] = fVar10;
  param_3[2] = fVar6;
  return uVar5;
}



// FUNCTION 14395b0e0 intersectCylinderPlane body=1753 status=ok
// SIG undefined intersectCylinderPlane(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
physx::intersectCylinderPlane
          (float *param_1,float *param_2,float param_3,float param_4,float param_5,float *param_6,
          char param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  char cVar3;
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
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  
  if ((param_7 == '\0') ||
     (_DAT_146b95e08 <= -param_6[1] * param_2[1] + -*param_6 * *param_2 + -param_6[2] * param_2[2]))
  {
    fVar1 = *param_1;
    fVar8 = DAT_146b95f08 * 2.0;
    fVar12 = DAT_146b95f10 * 2.0;
    fVar2 = param_1[1];
    fVar5 = param_1[2];
    fVar13 = param_1[3];
    fVar15 = DAT_146b95f0c * 2.0;
    fVar10 = fVar13 * fVar13 - 0.5;
    fVar6 = fVar1 * fVar8 + fVar2 * fVar15 + fVar5 * fVar12;
    local_d8 = (fVar2 * fVar12 - fVar5 * fVar15) * fVar13 + fVar10 * fVar8 + fVar1 * fVar6;
    local_d4 = (fVar5 * fVar8 - fVar1 * fVar12) * fVar13 + fVar10 * fVar15 + fVar2 * fVar6;
    local_d0 = (fVar1 * fVar15 - fVar2 * fVar8) * fVar13 + fVar10 * fVar12 + fVar5 * fVar6;
    local_cc = -(local_d4 * param_1[5] + local_d8 * param_1[4] + local_d0 * param_1[6]);
    cVar3 = intersectPlanes(&local_d8,param_6,&local_c8,&local_b8);
    if (cVar3 == '\0') {
      *param_8 = 0.0;
      param_9[0] = 0.0;
      param_9[1] = 0.0;
      param_9[2] = 0.0;
    }
    else {
      fVar1 = *param_6;
      fVar2 = param_6[1];
      fVar5 = local_b4 * (param_1[5] - local_c4) + local_b8 * (param_1[4] - local_c8) +
              local_b0 * (param_1[6] - local_c0);
      local_c8 = local_c8 + local_b8 * fVar5;
      local_c4 = local_c4 + local_b4 * fVar5;
      local_c0 = local_c0 + local_b0 * fVar5;
      if (fVar2 * param_1[5] + fVar1 * param_1[4] + param_6[2] * param_1[6] + param_6[3] < 0.0) {
        local_d8 = param_1[4] - local_c8;
        local_d4 = param_1[5] - local_c4;
        local_d0 = param_1[6] - local_c0;
      }
      else {
        local_d8 = local_c8 - param_1[4];
        local_d4 = local_c4 - param_1[5];
        local_d0 = local_c0 - param_1[6];
      }
      fVar13 = 1.0;
      fVar5 = SQRT(local_d4 * local_d4 + local_d8 * local_d8 + local_d0 * local_d0);
      if (0.0 < fVar5) {
        fVar5 = 1.0 / fVar5;
        local_d8 = local_d8 * fVar5;
        local_d4 = local_d4 * fVar5;
        local_d0 = local_d0 * fVar5;
      }
      if ((param_7 == '\0') ||
         (DAT_146b95e04 <= local_d4 * param_2[1] + local_d8 * *param_2 + local_d0 * param_2[2])) {
        fVar5 = param_6[2];
        fVar6 = local_d8 * param_4 + param_1[4];
        param_5 = param_4 + param_5;
        fVar9 = local_d4 * param_4 + param_1[5];
        fVar11 = local_d0 * param_4 + param_1[6];
        if (0.0 <= fVar1 * (fVar6 - *param_2 * param_5) + fVar2 * (fVar9 - param_2[1] * param_5) +
                   fVar5 * (fVar11 - param_2[2] * param_5) + param_6[3]) {
          fVar4 = fVar8 * *param_1 + fVar15 * param_1[1] + fVar12 * param_1[2];
          fVar7 = (fVar12 * param_1[1] - fVar15 * param_1[2]) * param_1[3] + fVar10 * fVar8 +
                  fVar4 * *param_1;
          fVar14 = (fVar8 * param_1[2] - fVar12 * *param_1) * param_1[3] + fVar10 * fVar15 +
                   fVar4 * param_1[1];
          fVar10 = (fVar15 * *param_1 - fVar8 * param_1[1]) * param_1[3] + fVar10 * fVar12 +
                   fVar4 * param_1[2];
          fVar8 = fVar1 * fVar7 + fVar2 * fVar14 + fVar5 * fVar10;
          if (0.0 <= -fVar8) {
            fVar13 = 0.0;
          }
          if (fVar8 < 0.0) {
            fVar13 = -1.0;
          }
          param_3 = fVar13 * 0.5 * param_3;
          fVar5 = -((fVar1 * (fVar6 - param_3 * fVar7) + fVar2 * (fVar9 - param_3 * fVar14) +
                     fVar5 * (fVar11 - param_3 * fVar10) + param_6[3]) /
                   (fVar1 * *param_2 + fVar2 * param_2[1] + fVar5 * param_2[2]));
          *param_8 = -fVar5;
          fVar1 = *param_2;
          fVar2 = param_2[2];
          param_9[1] = fVar5 * param_2[1] + fVar9;
          *param_9 = fVar5 * fVar1 + fVar6;
          param_9[2] = fVar5 * fVar2 + fVar11;
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14395b7c0 intersectCylinderPlane body=243 status=ok
// SIG undefined intersectCylinderPlane(void)

void physx::intersectCylinderPlane(void)

{
  undefined4 *in_R9;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [40];
  
  local_38 = *in_R9;
  local_34 = in_R9[1];
  local_30 = in_R9[2];
  computeSuspensionSweep();
  intersectCylinderPlane
            (local_28,&local_38,in_stack_00000030,in_stack_00000038,
             CONCAT44(in_stack_00000028._4_4_,in_stack_00000040),in_stack_00000048,in_stack_00000050
             ,in_stack_00000058,in_stack_00000060);
  return;
}



// FUNCTION 14395b8c0 FUN_14395b8c0 body=631 status=ok
// SIG undefined FUN_14395b8c0(void)

void FUN_14395b8c0(longlong param_1,longlong param_2,undefined2 param_3,undefined8 *param_4,
                  undefined4 *param_5,uint param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13,longlong param_14,longlong param_15,longlong param_16,
                  longlong param_17,longlong param_18,longlong param_19,longlong param_20,
                  longlong param_21,longlong param_22)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined1 local_848 [8];
  longlong local_840;
  longlong local_838;
  uint auStack_830 [256];
  uint auStack_430 [256];
  byte local_30;
  
  uVar7 = 0;
  uVar8 = (ulonglong)param_6;
  uVar9 = (ulonglong)param_6;
  *(undefined4 *)(param_7 + uVar8 * 4) = 1;
  *(undefined4 *)(param_8 + uVar8 * 4) = *(undefined4 *)((longlong)param_4 + 0x34);
  *(undefined4 *)(param_9 + uVar9 * 0x10) = *param_5;
  *(undefined4 *)(param_9 + 4 + uVar9 * 0x10) = param_5[1];
  *(undefined4 *)(param_9 + 8 + uVar9 * 0x10) = param_5[2];
  *(undefined4 *)(param_9 + 0xc + uVar9 * 0x10) = param_5[3];
  plVar2 = (longlong *)param_4[1];
  uVar5 = uVar7;
  if ((plVar2 != (longlong *)0x0) && (uVar5 = 0, *(float *)((longlong)param_4 + 0x34) != 0.0)) {
    uVar5 = (**(code **)(*plVar2 + 0xd0))(plVar2,*(undefined4 *)(param_4 + 2));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  physx::VehicleSurfaceTypeHashTable::VehicleSurfaceTypeHashTable(local_848,uVar3);
  if (uVar5 != 0) {
    uVar1 = auStack_830[uVar5 >> (local_30 & 0x3f) & 0xff];
    while (uVar1 != 0xffffffff) {
      uVar6 = (ulonglong)uVar1;
      if (uVar5 == *(ulonglong *)(local_840 + uVar6 * 8)) {
        uVar7 = (ulonglong)*(uint *)(local_838 + uVar6 * 4);
        break;
      }
      uVar1 = auStack_430[uVar6];
    }
  }
  pcVar4 = *(code **)(*(longlong *)(param_2 + 0x80) + 0x28);
  uVar10 = physx::PxVehicleDrivableSurfaceToTireFrictionPairs::getTypePairFriction
                     (uVar3,uVar7,
                      *(undefined4 *)((uVar8 + 6) * 0x40 + *(longlong *)(param_2 + 0x70) + 0x28));
  if (pcVar4 != (code *)0x0) {
    uVar10 = (*pcVar4)(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + uVar8 * 8),uVar10,uVar7,
                       param_4 + 5);
  }
  *(undefined4 *)(param_10 + uVar8 * 4) = uVar10;
  *(undefined2 *)(param_11 + uVar8 * 2) = param_3;
  *(undefined8 *)(param_12 + uVar8 * 8) = param_4[1];
  *(undefined8 *)(param_13 + uVar8 * 8) = *param_4;
  *(ulonglong *)(param_14 + uVar8 * 8) = uVar5;
  *(int *)(param_15 + uVar8 * 4) = (int)uVar7;
  *(undefined4 *)(param_16 + uVar8 * 0xc) = *(undefined4 *)((longlong)param_4 + 0x1c);
  *(undefined4 *)(param_16 + 4 + uVar8 * 0xc) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(param_16 + 8 + uVar8 * 0xc) = *(undefined4 *)((longlong)param_4 + 0x24);
  *(undefined4 *)(param_17 + uVar8 * 0xc) = *(undefined4 *)(param_4 + 5);
  *(undefined4 *)(param_17 + 4 + uVar8 * 0xc) = *(undefined4 *)((longlong)param_4 + 0x2c);
  *(undefined4 *)(param_17 + 8 + uVar8 * 0xc) = *(undefined4 *)(param_4 + 6);
  *(undefined4 *)(param_18 + uVar8 * 4) = 1;
  *(undefined4 *)(param_19 + uVar9 * 0x10) = *param_5;
  *(undefined4 *)(param_19 + 4 + uVar9 * 0x10) = param_5[1];
  *(undefined4 *)(param_19 + 8 + uVar9 * 0x10) = param_5[2];
  *(undefined4 *)(param_19 + 0xc + uVar9 * 0x10) = param_5[3];
  *(undefined4 *)(param_20 + uVar8 * 4) = *(undefined4 *)((longlong)param_4 + 0x34);
  *(undefined4 *)(param_21 + uVar8 * 4) = uVar10;
  *(undefined2 *)(param_22 + uVar8 * 2) = param_3;
  return;
}



// FUNCTION 14395bb40 FUN_14395bb40 body=9713 status=ok
// SIG undefined FUN_14395bb40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14395bb40(uint param_1,float *param_2,char *param_3,longlong param_4)

{
  float *pfVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  undefined4 uVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte *pbVar17;
  ushort uVar18;
  int iVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  undefined4 uVar25;
  float *pfVar26;
  float *pfVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
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
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float *in_stack_ffffffffffffeab0;
  float *in_stack_ffffffffffffeab8;
  ulonglong local_14e8;
  uint local_14c8;
  float local_14b0;
  float local_1498;
  float local_1494;
  float local_1478 [2];
  longlong local_1470;
  longlong local_1468;
  code *local_1460;
  undefined1 local_1450 [4];
  float local_144c;
  float local_1448;
  float local_1444;
  float *local_1440;
  float local_1438;
  float local_1434;
  float local_1430;
  float local_142c;
  float local_1428;
  undefined4 local_1424;
  float local_1420;
  float local_141c;
  float local_1418;
  float local_1414;
  float local_1410;
  float local_140c;
  longlong local_1408;
  ushort auStack_1400 [4];
  float local_13f8;
  uint local_13e8;
  float local_13e4;
  float local_13e0;
  float local_13dc;
  float local_13d8;
  float local_13d4;
  float local_13d0;
  float local_13cc;
  float local_13c8;
  float local_13c4;
  float local_13c0;
  longlong local_13b8;
  undefined4 local_13b0;
  undefined4 local_13ac;
  undefined4 local_13a8;
  undefined4 local_13a0;
  undefined4 local_139c;
  undefined4 local_1398;
  undefined4 local_1390;
  undefined4 local_138c;
  undefined4 local_1388;
  undefined8 uStack_1380;
  undefined4 auStack_1378 [10];
  longlong local_1350;
  longlong local_1348;
  float local_1338 [2];
  undefined8 uStack_1330;
  float local_12f8;
  float local_12f4;
  float local_12f0;
  undefined4 local_12e8;
  undefined4 local_12e4;
  undefined4 local_12e0;
  float local_12d8;
  float local_12d4;
  float local_12d0;
  float local_12cc [7];
  undefined8 uStack_12b0;
  undefined4 auStack_12a8 [10];
  uint auStack_1280 [4];
  float afStack_1270 [4];
  undefined4 auStack_1260 [4];
  float afStack_1250 [4];
  longlong local_1240;
  longlong local_1238;
  longlong local_1230;
  float *local_1228;
  longlong local_1220;
  undefined1 local_1218 [16];
  longlong alStack_1208 [4];
  longlong alStack_11e8 [4];
  ulonglong auStack_11c8 [4];
  undefined1 *local_11a8;
  float *local_11a0;
  undefined1 *local_1198;
  float *local_1190;
  longlong *local_1188;
  undefined1 local_1180 [16];
  undefined1 local_1170 [32];
  undefined1 local_1150 [40];
  undefined1 local_1128 [8];
  longlong local_1120;
  longlong local_1118;
  uint auStack_1110 [256];
  uint auStack_d10 [258];
  undefined1 local_908 [8];
  longlong local_900;
  longlong local_8f8;
  uint auStack_8f0 [256];
  uint auStack_4f0 [298];
  undefined8 uStack_48;
  
  uStack_48 = 0x14395bb6c;
  uVar30 = 0;
  local_13e8 = MXCSR;
  MXCSR = 0x9fc0;
  if (DAT_146b95e40 != 0) {
    *(undefined4 *)(&DAT_146b95e40)[param_1] = 0;
    uVar11 = param_1 + 1;
    *(undefined4 *)(&DAT_146b95e40)[uVar11] = 0;
    uVar12 = param_1 + 2;
    *(undefined4 *)(&DAT_146b95e40)[uVar12] = 0;
    uVar13 = param_1 + 3;
    *(undefined4 *)(&DAT_146b95e40)[uVar13] = 0;
    if (DAT_146b95e40 != 0) {
      *(undefined4 *)((&DAT_146b95e40)[param_1] + 4) = 0;
      *(undefined4 *)((&DAT_146b95e40)[uVar11] + 4) = 0;
      *(undefined4 *)((&DAT_146b95e40)[uVar12] + 4) = 0;
      *(undefined4 *)((&DAT_146b95e40)[uVar13] + 4) = 0;
      if (DAT_146b95e40 != 0) {
        *(undefined4 *)((&DAT_146b95e40)[param_1] + 8) = 0;
        *(undefined4 *)((&DAT_146b95e40)[uVar11] + 8) = 0;
        *(undefined4 *)((&DAT_146b95e40)[uVar12] + 8) = 0;
        *(undefined4 *)((&DAT_146b95e40)[uVar13] + 8) = 0;
        if (DAT_146b95e40 != 0) {
          *(undefined4 *)((&DAT_146b95e40)[param_1] + 0xc) = 0;
          *(undefined4 *)((&DAT_146b95e40)[uVar11] + 0xc) = 0;
          *(undefined4 *)((&DAT_146b95e40)[uVar12] + 0xc) = 0;
          *(undefined4 *)((&DAT_146b95e40)[uVar13] + 0xc) = 0;
          if (DAT_146b95e40 != 0) {
            *(undefined4 *)((&DAT_146b95e40)[param_1] + 0x1c) = 0;
            *(undefined4 *)((&DAT_146b95e40)[uVar11] + 0x1c) = 0;
            *(undefined4 *)((&DAT_146b95e40)[uVar12] + 0x1c) = 0;
            *(undefined4 *)((&DAT_146b95e40)[uVar13] + 0x1c) = 0;
            if (DAT_146b95e40 != 0) {
              *(undefined4 *)((&DAT_146b95e40)[param_1] + 0x24) = 0;
              *(undefined4 *)((&DAT_146b95e40)[uVar11] + 0x24) = 0;
              *(undefined4 *)((&DAT_146b95e40)[uVar12] + 0x24) = 0;
              *(undefined4 *)((&DAT_146b95e40)[uVar13] + 0x24) = 0;
              if (DAT_146b95e40 != 0) {
                *(undefined4 *)((&DAT_146b95e40)[param_1] + 0x18) = 0;
                *(undefined4 *)((&DAT_146b95e40)[uVar11] + 0x18) = 0;
                *(undefined4 *)((&DAT_146b95e40)[uVar12] + 0x18) = 0;
                *(undefined4 *)((&DAT_146b95e40)[uVar13] + 0x18) = 0;
                if (DAT_146b95e40 != 0) {
                  *(undefined4 *)((&DAT_146b95e40)[param_1] + 0x20) = 0;
                  *(undefined4 *)((&DAT_146b95e40)[uVar11] + 0x20) = 0;
                  *(undefined4 *)((&DAT_146b95e40)[uVar12] + 0x20) = 0;
                  *(undefined4 *)((&DAT_146b95e40)[uVar13] + 0x20) = 0;
                  if (DAT_146b95e40 != 0) {
                    *(undefined4 *)((&DAT_146b95e40)[param_1] + 0x14) = 0;
                    *(undefined4 *)((&DAT_146b95e40)[uVar11] + 0x14) = 0;
                    *(undefined4 *)((&DAT_146b95e40)[uVar12] + 0x14) = 0;
                    *(undefined4 *)((&DAT_146b95e40)[uVar13] + 0x14) = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  fVar31 = *(float *)(param_3 + 0x34);
  pfVar1 = (float *)(param_3 + 0x28);
  fVar55 = *(float *)(param_3 + 0x2c);
  fVar50 = *pfVar1;
  fVar46 = *(float *)(param_3 + 0x30);
  cVar2 = *(char *)(param_2 + 8);
  lVar7 = *(longlong *)(param_3 + 0x70);
  local_13dc = *param_2;
  local_141c = param_2[1];
  local_13e0 = param_2[2];
  local_1430 = param_2[7];
  local_140c = param_2[6];
  local_1410 = param_2[9];
  local_1470 = *(longlong *)(param_3 + 0x78);
  fVar44 = DAT_146b95f10 * 2.0;
  fVar40 = DAT_146b95f08 * 2.0;
  local_1230 = *(longlong *)(param_3 + 0x80);
  fVar37 = DAT_146b95f0c * 2.0;
  local_1228 = *(float **)(param_3 + 0x88);
  fVar35 = fVar31 * fVar31 - 0.5;
  fVar33 = fVar40 * fVar50 + fVar37 * fVar55 + fVar44 * fVar46;
  local_13e4 = (fVar37 * fVar50 - fVar40 * fVar55) * fVar31 + fVar35 * fVar44 + fVar33 * fVar46;
  local_13d8 = (fVar40 * fVar46 - fVar44 * fVar50) * fVar31 + fVar35 * fVar37 + fVar33 * fVar55;
  local_12cc[3] = (fVar44 * fVar55 - fVar37 * fVar46) * fVar31 + fVar35 * fVar40 + fVar33 * fVar50;
  lVar23 = *(longlong *)(local_1470 + 0x1d8);
  local_1468 = *(longlong *)(param_3 + 0x20);
  local_1408 = *(longlong *)(local_1470 + 0x1e0);
  local_1350 = *(longlong *)(param_3 + 0x68);
  cVar3 = *param_3;
  local_1220 = *(longlong *)(param_3 + 0x18);
  local_1238 = *(longlong *)(param_3 + 0x10);
  local_1240 = *(longlong *)(param_3 + 8);
  local_1348 = *(longlong *)(param_3 + 0x60);
  local_13b8 = lVar23;
  if ((lVar23 == 0) && (local_1408 == 0)) {
    if (*(int *)(param_3 + 0x90) != 0) {
      do {
        uVar12 = (int)uVar30 + 1;
        uVar18 = *(ushort *)(local_1470 + 0xc0 + uVar30 * 2);
        afStack_1270[uVar30] = *(float *)(local_1470 + 0xb0 + uVar30 * 4);
        local_1338[uVar30 * 4] = *(float *)(local_1470 + 0x60 + uVar30 * 0x10);
        local_1338[uVar30 * 4 + 1] = *(float *)(local_1470 + 100 + uVar30 * 0x10);
        *(undefined4 *)(&uStack_1330 + uVar30 * 2) =
             *(undefined4 *)(local_1470 + 0x68 + uVar30 * 0x10);
        *(undefined4 *)((longlong)&uStack_1330 + uVar30 * 0x10 + 4) =
             *(undefined4 *)(local_1470 + 0x6c + uVar30 * 0x10);
        afStack_1250[uVar30] = *(float *)(local_1470 + 0xa0 + uVar30 * 4);
        uVar5 = *(ushort *)(local_1470 + 200 + uVar30 * 2);
        uVar11 = (uint)uVar18;
        *(uint *)(param_4 + 0x3ac + uVar30 * 4) = uVar11;
        auStack_1400[uVar30] = uVar5;
        *(undefined8 *)((longlong)&uStack_1380 + uVar30 * 0xc) = 0;
        auStack_1378[uVar30 * 3] = 0;
        *(undefined8 *)((longlong)&uStack_12b0 + uVar30 * 0xc) = 0;
        auStack_12a8[uVar30 * 3] = 0;
        *(undefined4 *)(param_4 + 0x3bc + uVar30 * 0x10) =
             *(undefined4 *)(local_1470 + 0x60 + uVar30 * 0x10);
        *(undefined4 *)(param_4 + 0x3c0 + uVar30 * 0x10) =
             *(undefined4 *)(local_1470 + 100 + uVar30 * 0x10);
        *(undefined4 *)(param_4 + 0x3c4 + uVar30 * 0x10) =
             *(undefined4 *)(local_1470 + 0x68 + uVar30 * 0x10);
        *(undefined4 *)(param_4 + 0x3c8 + uVar30 * 0x10) =
             *(undefined4 *)(local_1470 + 0x6c + uVar30 * 0x10);
        *(undefined4 *)(param_4 + 0x3fc + uVar30 * 4) =
             *(undefined4 *)(local_1470 + 0xb0 + uVar30 * 4);
        *(undefined4 *)(param_4 + 0x40c + uVar30 * 4) =
             *(undefined4 *)(local_1470 + 0xa0 + uVar30 * 4);
        *(undefined2 *)(param_4 + 0x41c + uVar30 * 2) =
             *(undefined2 *)(local_1470 + 200 + uVar30 * 2);
        auStack_1280[uVar30] = uVar11;
        alStack_1208[uVar30] = 0;
        alStack_11e8[uVar30] = 0;
        auStack_11c8[uVar30] = 0;
        auStack_1260[uVar30] = 0xffffffff;
        uVar30 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(param_3 + 0x90));
    }
  }
  else {
    local_14c8 = 0;
    if (*(int *)(param_3 + 0x90) != 0) {
      do {
        lVar24 = local_1408;
        bVar9 = false;
        uVar11 = (uint)uVar30;
        uVar18 = (ushort)(lVar23 == 0);
        if ((local_13b8 == 0) || (*(char *)(uVar30 * 0x60 + 0x59 + local_13b8) == '\0')) {
          if (local_1408 != 0) {
            lVar29 = uVar30 * 0x60;
            if (*(char *)(lVar29 + 0x59 + local_1408) != '\0') goto LAB_14395c15b;
            uVar12 = *(uint *)(lVar29 + 0x48 + local_1408);
            local_14e8 = (ulonglong)uVar12;
            if (uVar12 != 0) {
              local_13b0 = *(undefined4 *)(lVar7 + 0x310 + uVar30 * 0xc);
              local_13ac = *(undefined4 *)(lVar7 + 0x314 + uVar30 * 0xc);
              fVar31 = *(float *)(lVar7 + 8 + uVar30 * 0x30);
              local_13a8 = *(undefined4 *)(lVar7 + 0x318 + uVar30 * 0xc);
              fVar55 = *(float *)(lVar7 + (uVar30 + 4) * 0x30);
              in_stack_ffffffffffffeab8 =
                   (float *)((ulonglong)in_stack_ffffffffffffeab8 & 0xffffffff00000000);
              lVar15 = uVar30 * 0x10;
              in_stack_ffffffffffffeab0 =
                   (float *)((ulonglong)in_stack_ffffffffffffeab0 & 0xffffffff00000000);
              physx::computeSuspensionSweep
                        (pfVar1,local_1348 + lVar15,*(undefined4 *)(local_1350 + uVar30 * 4),
                         &local_13b0,lVar7 + 0x280 + uVar30 * 0xc,in_stack_ffffffffffffeab0,
                         in_stack_ffffffffffffeab8,local_1170,local_1218);
              uVar14 = 0;
              fVar50 = -3.4028235e+38;
              uVar11 = local_14c8;
              if (uVar12 != 0) {
                plVar20 = *(longlong **)(lVar29 + 0x40 + lVar24);
                pfVar26 = (float *)((longlong)plVar20 + 0x24);
                do {
                  fVar46 = pfVar26[4];
                  uVar16 = local_14e8;
                  if (fVar46 != 0.0) {
                    fVar33 = pfVar26[1];
                    local_11a8 = local_1218;
                    fVar35 = pfVar26[2];
                    fVar37 = pfVar26[3];
                    local_11a0 = &local_12f8;
                    local_1198 = local_1170;
                    local_1190 = &local_1438;
                    fVar44 = (fVar31 + fVar55) - fVar46;
                    fVar40 = -(fVar35 * pfVar26[-1] + fVar33 * pfVar26[-2] + fVar37 * *pfVar26);
                    local_1438 = fVar44;
                    local_12f8 = fVar33;
                    local_12f4 = fVar35;
                    local_12f0 = fVar37;
                    local_1188 = plVar20;
                    cVar10 = FUN_14396ec80(&local_11a8);
                    if ((cVar10 != '\0') && (fVar50 < fVar44)) {
                      plVar22 = *(longlong **)(pfVar26 + -7);
                      uVar28 = uVar14 & 0xffffffff;
                      afStack_1270[uVar30] = fVar46;
                      local_1338[uVar30 * 4] = fVar33;
                      local_1338[uVar30 * 4 + 1] = fVar35;
                      *(float *)(&uStack_1330 + uVar30 * 2) = fVar37;
                      *(float *)((longlong)&uStack_1330 + lVar15 + 4) = fVar40;
                      auStack_1280[uVar30] = 1;
                      uVar16 = uVar14;
                      if (plVar22 != (longlong *)0x0) {
                        uVar16 = (**(code **)(*plVar22 + 0xd0))(plVar22,pfVar26[-5]);
                      }
                      local_1440 = *(float **)(param_2 + 0xc);
                      physx::VehicleSurfaceTypeHashTable::VehicleSurfaceTypeHashTable
                                (local_908,local_1440);
                      if (uVar16 != 0) {
                        uVar12 = auStack_8f0[uVar16 >> ((byte)auStack_4f0[0x100] & 0x3f) & 0xff];
                        while (uVar12 != 0xffffffff) {
                          uVar14 = (ulonglong)uVar12;
                          if (uVar16 == *(ulonglong *)(local_900 + uVar14 * 8)) {
                            uVar28 = (ulonglong)*(uint *)(local_8f8 + uVar14 * 4);
                            goto LAB_14395c939;
                          }
                          uVar12 = auStack_4f0[uVar14];
                        }
                        uVar28 = 0;
                      }
LAB_14395c939:
                      local_1460 = *(code **)(*(longlong *)(param_3 + 0x80) + 0x28);
                      fVar50 = (float)physx::PxVehicleDrivableSurfaceToTireFrictionPairs::
                                      getTypePairFriction(local_1440,uVar28,
                                                          *(undefined4 *)
                                                           ((uVar30 + 6) * 0x40 +
                                                            *(longlong *)(param_3 + 0x70) + 0x28));
                      if (local_1460 != (code *)0x0) {
                        fVar50 = (float)(*local_1460)(*(undefined8 *)
                                                       (*(longlong *)(param_3 + 0x80) + uVar30 * 8),
                                                      fVar50,uVar28);
                      }
                      uVar14 = 0;
                      alStack_1208[uVar30] = plVar20[1];
                      alStack_11e8[uVar30] = *plVar20;
                      uVar25 = *(undefined4 *)((longlong)plVar20 + 0x1c);
                      auStack_11c8[uVar30] = uVar16;
                      *(undefined4 *)((longlong)&uStack_1380 + uVar30 * 0xc) = uVar25;
                      auStack_1378[uVar30 * 3 + -1] = (int)plVar20[4];
                      auStack_1378[uVar30 * 3] = *(undefined4 *)((longlong)plVar20 + 0x24);
                      *(int *)((longlong)&uStack_12b0 + uVar30 * 0xc) = (int)plVar20[5];
                      auStack_12a8[uVar30 * 3 + -1] = *(undefined4 *)((longlong)plVar20 + 0x2c);
                      lVar24 = plVar20[6];
                      *(undefined4 *)(param_4 + 0x3ac + uVar30 * 4) = 1;
                      *(float *)(lVar15 + 0x3bc + param_4) = fVar33;
                      *(float *)(lVar15 + 0x3c0 + param_4) = fVar35;
                      *(float *)(lVar15 + 0x3c4 + param_4) = fVar37;
                      *(float *)(lVar15 + 0x3c8 + param_4) = fVar40;
                      auStack_12a8[uVar30 * 3] = (int)lVar24;
                      *(undefined4 *)(param_4 + 0x3fc + uVar30 * 4) =
                           *(undefined4 *)((longlong)plVar20 + 0x34);
                      *(float *)(param_4 + 0x40c + uVar30 * 4) = fVar50;
                      auStack_1260[uVar30] = (int)uVar28;
                      bVar9 = true;
                      *(ushort *)(param_4 + 0x41c + uVar30 * 2) = uVar18;
                      afStack_1250[uVar30] = fVar50;
                      auStack_1400[uVar30] = uVar18;
                      uVar16 = local_14e8;
                      fVar50 = local_1438;
                    }
                  }
                  plVar20 = plVar20 + 8;
                  pfVar26 = pfVar26 + 0x10;
                  local_14e8 = uVar16 - 1;
                } while (local_14e8 != 0);
                if (bVar9) goto LAB_14395c39f;
              }
            }
          }
LAB_14395cabf:
          uVar14 = (ulonglong)uVar11;
          uVar30 = (ulonglong)uVar11;
          *(undefined4 *)(param_4 + 0x3ac + uVar14 * 4) = 0;
          *(undefined8 *)(param_4 + 0x3bc + uVar30 * 0x10) = 0;
          *(undefined8 *)(param_4 + 0x3c4 + uVar30 * 0x10) = 0;
          *(undefined4 *)(param_4 + 0x3fc + uVar14 * 4) = 0;
          *(undefined4 *)(param_4 + 0x40c + uVar14 * 4) = 0;
          *(undefined2 *)(param_4 + 0x41c + uVar14 * 2) = 0;
          auStack_1280[uVar14] = 0;
          afStack_1270[uVar14] = 0.0;
          (local_1338 + uVar30 * 4)[0] = 0.0;
          (local_1338 + uVar30 * 4)[1] = 0.0;
          (&uStack_1330)[uVar30 * 2] = 0;
          afStack_1250[uVar14] = 0.0;
          auStack_1400[uVar14] = 0;
          alStack_1208[uVar14] = 0;
          alStack_11e8[uVar14] = 0;
          auStack_11c8[uVar14] = 0;
          auStack_1260[uVar14] = 0xffffffff;
          *(undefined8 *)((longlong)&uStack_1380 + uVar14 * 0xc) = 0;
          auStack_1378[uVar14 * 3] = 0;
          *(undefined8 *)((longlong)&uStack_12b0 + uVar14 * 0xc) = 0;
          auStack_12a8[uVar14 * 3] = 0;
        }
        else {
LAB_14395c15b:
          lVar24 = local_13b8;
          if (local_13b8 == 0) {
            lVar24 = local_1408;
          }
          plVar20 = (longlong *)(uVar30 * 0x60 + lVar24);
          fVar31 = *(float *)((longlong)plVar20 + 0x34);
          if (fVar31 == 0.0) goto LAB_14395cabf;
          fVar55 = *(float *)(plVar20 + 5);
          fVar50 = *(float *)((longlong)plVar20 + 0x2c);
          fVar46 = *(float *)(plVar20 + 6);
          fVar33 = *(float *)(plVar20 + 4);
          plVar22 = (longlong *)plVar20[1];
          uVar25 = 0;
          fVar35 = *(float *)((longlong)plVar20 + 0x1c);
          uVar14 = 0;
          auStack_1280[uVar30] = 1;
          fVar37 = *(float *)((longlong)plVar20 + 0x24);
          afStack_1270[uVar30] = fVar31;
          local_1338[uVar30 * 4] = fVar55;
          local_1338[uVar30 * 4 + 1] = fVar50;
          *(float *)(&uStack_1330 + uVar30 * 2) = fVar46;
          fVar31 = -(fVar50 * fVar33 + fVar55 * fVar35 + fVar46 * fVar37);
          *(float *)((longlong)&uStack_1330 + uVar30 * 0x10 + 4) = fVar31;
          if (plVar22 != (longlong *)0x0) {
            uVar14 = (**(code **)(*plVar22 + 0xd0))(plVar22,(int)plVar20[2]);
          }
          local_1440 = *(float **)(param_2 + 0xc);
          physx::VehicleSurfaceTypeHashTable::VehicleSurfaceTypeHashTable(local_1128,local_1440);
          if (uVar14 != 0) {
            uVar11 = auStack_1110[uVar14 >> ((byte)auStack_d10[0x100] & 0x3f) & 0xff];
            while (uVar11 != 0xffffffff) {
              uVar16 = (ulonglong)uVar11;
              if (uVar14 == *(ulonglong *)(local_1120 + uVar16 * 8)) {
                uVar25 = *(undefined4 *)(local_1118 + uVar16 * 4);
                break;
              }
              uVar11 = auStack_d10[uVar16];
            }
          }
          pcVar8 = *(code **)(*(longlong *)(param_3 + 0x80) + 0x28);
          fVar33 = (float)physx::PxVehicleDrivableSurfaceToTireFrictionPairs::getTypePairFriction
                                    (local_1440,uVar25,
                                     *(undefined4 *)
                                      ((uVar30 + 6) * 0x40 + *(longlong *)(param_3 + 0x70) + 0x28));
          if (pcVar8 != (code *)0x0) {
            fVar33 = (float)(*pcVar8)(*(undefined8 *)(*(longlong *)(param_3 + 0x80) + uVar30 * 8),
                                      fVar33,uVar25,plVar20 + 5);
          }
          alStack_1208[uVar30] = plVar20[1];
          alStack_11e8[uVar30] = *plVar20;
          uVar6 = *(undefined4 *)((longlong)plVar20 + 0x1c);
          *(undefined4 *)(param_4 + 0x3ac + uVar30 * 4) = 1;
          *(undefined4 *)((longlong)&uStack_1380 + uVar30 * 0xc) = uVar6;
          auStack_1378[uVar30 * 3 + -1] = (int)plVar20[4];
          auStack_1378[uVar30 * 3] = *(undefined4 *)((longlong)plVar20 + 0x24);
          *(int *)((longlong)&uStack_12b0 + uVar30 * 0xc) = (int)plVar20[5];
          uVar6 = *(undefined4 *)((longlong)plVar20 + 0x2c);
          *(float *)(param_4 + 0x3bc + uVar30 * 0x10) = fVar55;
          *(float *)(param_4 + 0x3c0 + uVar30 * 0x10) = fVar50;
          *(float *)(param_4 + 0x3c4 + uVar30 * 0x10) = fVar46;
          *(float *)(param_4 + 0x3c8 + uVar30 * 0x10) = fVar31;
          auStack_12a8[uVar30 * 3 + -1] = uVar6;
          auStack_12a8[uVar30 * 3] = (int)plVar20[6];
          *(undefined4 *)(param_4 + 0x3fc + uVar30 * 4) = *(undefined4 *)((longlong)plVar20 + 0x34);
          *(float *)(param_4 + 0x40c + uVar30 * 4) = fVar33;
          *(ushort *)(param_4 + 0x41c + uVar30 * 2) = uVar18;
          afStack_1250[uVar30] = fVar33;
          auStack_1400[uVar30] = uVar18;
          auStack_11c8[uVar30] = uVar14;
          auStack_1260[uVar30] = uVar25;
        }
LAB_14395c39f:
        local_14c8 = local_14c8 + 1;
        uVar30 = (ulonglong)local_14c8;
      } while (local_14c8 < *(uint *)(param_3 + 0x90));
    }
  }
  uVar14 = 0;
  lVar23 = local_1468;
  lVar24 = local_1470;
  uVar30 = uVar14;
  do {
    lVar15 = (uVar30 + 6) * 0x40 + lVar7;
    local_1440 = (float *)((uVar30 + 4) * 0x30 + lVar7);
    pfVar26 = (float *)(uVar30 * 0x30 + lVar7);
    puVar21 = (undefined4 *)(uVar30 * 0xc + 0x310 + lVar7);
    *(undefined4 *)(param_4 + 0x230 + uVar30 * 4) = *(undefined4 *)(lVar24 + 0x30 + uVar30 * 4);
    lVar29 = lVar7 + uVar30 * 0xc;
    *(undefined4 *)(param_4 + 0x240 + uVar30 * 4) = *(undefined4 *)(lVar24 + 0x40 + uVar30 * 4);
    pfVar27 = (float *)(lVar29 + 0x280);
    iVar19 = (int)uVar14;
    if (DAT_146b95e40 != 0) {
      *(float *)(&DAT_146b95e40)[param_1 + iVar19] = -pfVar26[3];
    }
    *(float *)(param_4 + 0x158 + uVar30 * 4) = -pfVar26[3];
    *(undefined1 *)(uVar30 + 0x2c0 + param_4) = 0;
    *(undefined4 *)(param_4 + 0x2b0 + uVar30 * 4) = 0;
    *(undefined1 *)(uVar30 + 0x334 + param_4) = 0;
    fVar31 = local_1338[uVar30 * 4 + 1];
    fVar55 = local_1338[uVar30 * 4];
    fVar50 = *(float *)(&uStack_1330 + uVar30 * 2);
    *(undefined4 *)(param_4 + 0x324 + uVar30 * 4) = 0;
    *(undefined1 *)(uVar30 + 0x3a8 + param_4) = 0;
    *(undefined4 *)(param_4 + 0x398 + uVar30 * 4) = 0;
    *(undefined1 *)(uVar30 + 0x70 + param_4) = 1;
    fVar46 = *(float *)(param_3 + 0x34);
    fVar33 = *(float *)(param_3 + 0x2c);
    fVar35 = *pfVar1;
    fVar37 = *(float *)(param_3 + 0x30);
    fVar45 = *(float *)(lVar29 + 0x288) * 2.0;
    fVar41 = *pfVar27 * 2.0;
    fVar38 = *(float *)(lVar29 + 0x284) * 2.0;
    fVar44 = fVar46 * fVar46 - 0.5;
    fVar40 = fVar41 * fVar35 + fVar38 * fVar33 + fVar45 * fVar37;
    local_13f8 = fVar55;
    fVar48 = (fVar38 * fVar35 - fVar41 * fVar33) * fVar46 + fVar44 * fVar45 + fVar40 * fVar37;
    fVar51 = (fVar41 * fVar37 - fVar45 * fVar35) * fVar46 + fVar44 * fVar38 + fVar40 * fVar33;
    fVar46 = (fVar45 * fVar33 - fVar38 * fVar37) * fVar46 + fVar44 * fVar41 + fVar40 * fVar35;
    local_1460 = (code *)CONCAT44(local_1460._4_4_,fVar46);
    if ((((*(char *)(uVar30 + lVar23) != '\0') && (auStack_1280[uVar30] != 0)) &&
        (afStack_1270[uVar30] != 0.0)) &&
       (fVar33 = fVar55 * fVar46 + fVar31 * fVar51 + fVar50 * fVar48, fVar33 < 0.0)) {
      uVar11 = (uint)((ulonglong)in_stack_ffffffffffffeab0 >> 0x20);
      if (auStack_1400[uVar30] == 0) {
        in_stack_ffffffffffffeab8 = local_1338 + uVar14 * 4;
        in_stack_ffffffffffffeab0 = (float *)CONCAT44(uVar11,pfVar26[2]);
        cVar10 = physx::intersectRayPlane
                           (pfVar1,puVar21,pfVar27,local_1440[1],*local_1440,
                            in_stack_ffffffffffffeab0,in_stack_ffffffffffffeab8,&local_1434,
                            &local_13c8);
      }
      else {
        local_13a0 = *puVar21;
        local_139c = puVar21[1];
        fVar35 = *local_1440;
        fVar37 = local_1440[1];
        fVar40 = pfVar26[2];
        uVar16 = (ulonglong)in_stack_ffffffffffffeab8 & 0xffffffff00000000;
        local_1398 = puVar21[2];
        physx::computeSuspensionSweep
                  (pfVar1,local_1348 + uVar14 * 0x10,*(undefined4 *)(local_1350 + uVar30 * 4),
                   &local_13a0,pfVar27,(ulonglong)uVar11 << 0x20,uVar16,local_1150,&local_12e8);
        local_1390 = local_12e8;
        in_stack_ffffffffffffeab0 = local_1338 + uVar14 * 4;
        in_stack_ffffffffffffeab8 = (float *)(uVar16 & 0xffffffffffffff00);
        local_138c = local_12e4;
        local_1388 = local_12e0;
        cVar10 = physx::intersectCylinderPlane
                           (local_1150,&local_1390,fVar37,fVar35,fVar40,in_stack_ffffffffffffeab0,
                            in_stack_ffffffffffffeab8,&local_1434,&local_13c8);
      }
      lVar23 = local_1468;
      lVar24 = local_1470;
      if ((-pfVar26[3] < local_1434) && (cVar10 != '\0')) {
        plVar20 = (longlong *)alStack_11e8[uVar30];
        *(longlong *)(param_4 + 0x98 + uVar30 * 8) = alStack_1208[uVar30];
        uVar14 = auStack_11c8[uVar30];
        *(longlong **)(param_4 + 0x78 + uVar30 * 8) = plVar20;
        *(ulonglong *)(param_4 + 0xb8 + uVar30 * 8) = uVar14;
        *(undefined4 *)(param_4 + 0xd8 + uVar30 * 4) = auStack_1260[uVar30];
        *(undefined4 *)(param_4 + 0xe8 + uVar30 * 0xc) =
             *(undefined4 *)((longlong)&uStack_1380 + uVar30 * 0xc);
        *(undefined4 *)(param_4 + 0xec + uVar30 * 0xc) = auStack_1378[uVar30 * 3 + -1];
        *(undefined4 *)(param_4 + 0xf0 + uVar30 * 0xc) = auStack_1378[uVar30 * 3];
        *(undefined4 *)(param_4 + 0x118 + uVar30 * 0xc) =
             *(undefined4 *)((longlong)&uStack_12b0 + uVar30 * 0xc);
        *(undefined4 *)(param_4 + 0x11c + uVar30 * 0xc) = auStack_12a8[uVar30 * 3 + -1];
        *(undefined4 *)(param_4 + 0x120 + uVar30 * 0xc) = auStack_12a8[uVar30 * 3];
        *(undefined1 *)(uVar30 + 0x70 + param_4) = 0;
        *(float *)(param_4 + 0x2b0 + uVar30 * 4) = (pfVar26[2] - local_1434) * fVar33;
        *(bool *)(uVar30 + 0x2c0 + param_4) = pfVar26[2] <= local_1434 && local_1434 != pfVar26[2];
        *(undefined4 *)(param_4 + 0x250 + uVar30 * 0xc) = *puVar21;
        *(undefined4 *)(param_4 + 0x254 + uVar30 * 0xc) = puVar21[1];
        *(undefined4 *)(param_4 + 600 + uVar30 * 0xc) = puVar21[2];
        *(float *)(param_4 + 0x280 + uVar30 * 0xc) = *pfVar27;
        *(undefined4 *)(param_4 + 0x284 + uVar30 * 0xc) = *(undefined4 *)(lVar29 + 0x284);
        *(undefined4 *)(param_4 + 0x288 + uVar30 * 0xc) = *(undefined4 *)(lVar29 + 0x288);
        fVar33 = local_1434;
        if (pfVar26[2] <= local_1434) {
          fVar33 = pfVar26[2];
        }
        *(float *)(param_4 + 0x158 + uVar30 * 4) = fVar33;
        if (DAT_146b95e40 != 0) {
          *(float *)(&DAT_146b95e40)[param_1 + iVar19] = fVar33;
        }
        plVar22 = (longlong *)0x0;
        local_1494 = *(float *)(param_3 + 0x4c) +
                     (*(float *)(param_3 + 0x50) * (local_13c4 - *(float *)(param_3 + 0x3c)) -
                     *(float *)(param_3 + 0x54) * (local_13c8 - *(float *)(param_3 + 0x38)));
        local_1414 = 0.0;
        local_14b0 = *(float *)(param_3 + 0x44) +
                     (*(float *)(param_3 + 0x54) * (local_13c0 - *(float *)(param_3 + 0x40)) -
                     *(float *)(param_3 + 0x58) * (local_13c4 - *(float *)(param_3 + 0x3c)));
        local_144c = 0.0;
        local_1498 = *(float *)(param_3 + 0x48) +
                     (*(float *)(param_3 + 0x58) * (local_13c8 - *(float *)(param_3 + 0x38)) -
                     *(float *)(param_3 + 0x50) * (local_13c0 - *(float *)(param_3 + 0x40)));
        local_1448 = 0.0;
        if (plVar20 != (longlong *)0x0) {
          if ((short)plVar20[1] == 6) {
            plVar22 = plVar20;
          }
          if (plVar22 != (longlong *)0x0) {
            pfVar27 = (float *)physx::PxRigidBodyExt::getVelocityAtPos
                                         (local_1180,plVar22,&local_13c8);
            local_1414 = *pfVar27;
            local_144c = pfVar27[1];
            local_14b0 = local_14b0 - local_1414;
            local_1448 = pfVar27[2];
            local_1498 = local_1498 - local_144c;
            local_1494 = local_1494 - local_1448;
          }
        }
        fVar35 = *(float *)(local_1470 + 0x50 + uVar30 * 4);
        if (fVar35 == 3.4028235e+38) {
          fVar35 = 0.0;
        }
        else {
          fVar35 = (fVar33 - fVar35) * local_13e0;
        }
        fVar37 = param_2[3] * fVar46 + param_2[4] * fVar51 + param_2[5] * fVar48;
        if (fVar37 <= 0.0) {
          fVar37 = 0.0;
        }
        if (fVar37 == 0.0) {
          local_12cc[0] = 0.0;
          local_12cc[1] = 0.0;
          pfVar27 = local_12cc;
          local_12cc[2] = 0.0;
        }
        else {
          pfVar27 = &local_12d8;
          local_12d8 = param_2[3] - fVar37 * fVar46;
          local_12d0 = param_2[5] - fVar37 * fVar48;
          local_12d4 = param_2[4] - fVar37 * fVar51;
        }
        fVar40 = pfVar26[4];
        fVar37 = fVar37 * fVar40 + fVar33 * *pfVar26;
        if (fVar37 <= 0.0) {
          fVar37 = 0.0;
        }
        fVar37 = fVar35 * pfVar26[1] + fVar37;
        fVar55 = fVar55 * (fVar37 * -fVar46 - *pfVar27 * fVar40) +
                 fVar31 * (fVar37 * -fVar51 - pfVar27[1] * fVar40) +
                 fVar50 * (fVar37 * -fVar48 - pfVar27[2] * fVar40);
        if ((plVar22 != (longlong *)0x0) &&
           (pbVar17 = (byte *)(**(code **)(*plVar22 + 0x178))(plVar22,local_1450),
           (*pbVar17 & 1) == 0)) {
          fVar46 = (float)(**(code **)(*plVar22 + 0x108))(plVar22);
          fVar35 = (float)(**(code **)(*plVar22 + 0x100))(plVar22);
          if (-fVar55 < 0.0) {
            fVar37 = 1.0;
          }
          else {
            fVar37 = 0.0;
          }
          if (fVar55 < 0.0) {
            fVar37 = -1.0;
          }
          uVar25 = *(undefined4 *)((longlong)&uStack_1380 + uVar30 * 0xc);
          fVar40 = ABS(fVar55) * fVar46;
          if (DAT_146b95e0c <= ABS(fVar55) * fVar46) {
            fVar40 = DAT_146b95e0c;
          }
          *(longlong **)(param_4 + 0x428 + uVar30 * 8) = plVar22;
          fVar55 = fVar40 * fVar35 * fVar37;
          fVar46 = -(fVar55 * local_13dc);
          *(float *)(param_4 + 0x44c + uVar30 * 0xc) = fVar31 * fVar46;
          *(float *)(param_4 + 0x448 + uVar30 * 0xc) = local_13f8 * fVar46;
          *(float *)(param_4 + 0x450 + uVar30 * 0xc) = fVar50 * fVar46;
          *(undefined4 *)(param_4 + 0x478 + uVar30 * 0xc) = uVar25;
          *(undefined4 *)(param_4 + 0x47c + uVar30 * 0xc) = auStack_1378[uVar30 * 3 + -1];
          *(undefined4 *)(param_4 + 0x480 + uVar30 * 0xc) = auStack_1378[uVar30 * 3];
        }
        *(float *)(param_4 + 0x168 + uVar30 * 4) = fVar55;
        if (DAT_146b95e40 != 0) {
          *(float *)((&DAT_146b95e40)[iVar19 + param_1] + 4) = fVar55;
        }
        fVar46 = *(float *)(param_3 + 0x30);
        fVar35 = *(float *)(param_3 + 0x34);
        fVar37 = *pfVar1;
        fVar47 = local_13f8 * fVar55;
        fVar45 = fVar35 * fVar35 - 0.5;
        fVar51 = *(float *)(lVar7 + 0x2b0 + uVar30 * 0xc) * 2.0;
        fVar38 = *(float *)(lVar7 + 0x2b8 + uVar30 * 0xc) * 2.0;
        fVar48 = *(float *)(lVar7 + 0x2b4 + uVar30 * 0xc) * 2.0;
        fVar40 = *(float *)(param_3 + 0x2c);
        fVar49 = fVar31 * fVar55;
        fVar41 = fVar37 * fVar51 + fVar40 * fVar48 + fVar38 * fVar46;
        fVar52 = fVar50 * fVar55;
        fVar44 = (fVar37 * fVar48 - fVar40 * fVar51) * fVar35 + fVar45 * fVar38 + fVar41 * fVar46;
        fVar42 = (fVar51 * fVar46 - fVar37 * fVar38) * fVar35 + fVar45 * fVar48 + fVar40 * fVar41;
        fVar46 = (fVar40 * fVar38 - fVar48 * fVar46) * fVar35 + fVar45 * fVar51 + fVar37 * fVar41;
        *(float *)(param_4 + 0x218) = fVar47 + *(float *)(param_4 + 0x218);
        *(float *)(param_4 + 0x220) = fVar52 + *(float *)(param_4 + 0x220);
        *(float *)(param_4 + 0x21c) = fVar49 + *(float *)(param_4 + 0x21c);
        *(float *)(param_4 + 0x228) =
             (fVar44 * fVar47 - fVar46 * fVar52) + *(float *)(param_4 + 0x228);
        *(float *)(param_4 + 0x224) =
             (fVar42 * fVar52 - fVar44 * fVar49) + *(float *)(param_4 + 0x224);
        *(float *)(param_4 + 0x22c) =
             (fVar46 * fVar49 - fVar42 * fVar47) + *(float *)(param_4 + 0x22c);
        fVar35 = fVar55 * local_1430 * *(float *)(lVar7 + 0x350 + uVar30 * 4);
        local_1460 = (code *)CONCAT44(local_1460._4_4_,fVar35);
        if (*local_1228 < fVar35) {
          if (fVar35 < local_1228[2]) {
            fVar35 = (fVar35 - *local_1228) * (local_1228[3] - local_1228[1]) * local_1228[4] +
                     local_1228[1];
          }
          else {
            fVar35 = local_1228[3];
          }
        }
        else {
          fVar35 = local_1228[1];
        }
        local_142c = fVar35 * local_140c * *(float *)(lVar7 + 0x340 + uVar30 * 4);
        if (DAT_146b95e40 != 0) {
          *(float *)((&DAT_146b95e40)[iVar19 + param_1] + 8) = local_142c;
          if (DAT_146b95e40 != 0) {
            *(float *)((&DAT_146b95e40)[iVar19 + param_1] + 0xc) = fVar35;
          }
        }
        fVar45 = fVar31 * local_12cc[3] - local_13f8 * local_13d8;
        fVar37 = *(float *)(local_1220 + uVar30 * 4);
        fVar38 = local_13f8 * local_13e4 - fVar50 * local_12cc[3];
        fVar40 = fVar50 * local_13d8 - fVar31 * local_13e4;
        fVar41 = fVar31 * fVar45 - fVar50 * fVar38;
        fVar48 = local_13f8 * fVar38 - fVar31 * fVar40;
        fVar50 = fVar50 * fVar40 - local_13f8 * fVar45;
        fVar31 = SQRT(fVar40 * fVar40 + fVar38 * fVar38 + fVar45 * fVar45);
        if (0.0 < fVar31) {
          fVar31 = 1.0 / fVar31;
          fVar40 = fVar31 * fVar40;
          fVar38 = fVar31 * fVar38;
          fVar45 = fVar31 * fVar45;
        }
        fVar31 = SQRT(fVar41 * fVar41 + fVar50 * fVar50 + fVar48 * fVar48);
        if (0.0 < fVar31) {
          fVar31 = 1.0 / fVar31;
          fVar41 = fVar31 * fVar41;
          fVar50 = fVar31 * fVar50;
          fVar48 = fVar31 * fVar48;
        }
        fVar31 = _guard_xfg_dispatch_icall_nop(fVar37);
        fVar37 = _guard_xfg_dispatch_icall_nop(fVar37);
        fVar51 = fVar40 * fVar31 + fVar41 * fVar37;
        *(float *)(param_4 + 0x178 + uVar30 * 0xc) = fVar51;
        fVar52 = fVar41 * fVar31 - fVar40 * fVar37;
        fVar49 = fVar38 * fVar31 + fVar50 * fVar37;
        local_13cc = fVar50 * fVar31 - fVar38 * fVar37;
        *(float *)(param_4 + 0x17c + uVar30 * 0xc) = fVar49;
        local_1420 = fVar45 * fVar31 + fVar48 * fVar37;
        *(float *)(param_4 + 0x180 + uVar30 * 0xc) = local_1420;
        *(float *)(param_4 + 0x1a8 + uVar30 * 0xc) = fVar52;
        *(float *)(param_4 + 0x1ac + uVar30 * 0xc) = local_13cc;
        fVar31 = fVar48 * fVar31 - fVar45 * fVar37;
        *(float *)(param_4 + 0x1b0 + uVar30 * 0xc) = fVar31;
        fVar48 = local_14b0 * fVar51 + local_1498 * fVar49 + local_1494 * local_1420;
        *(float *)(param_4 + 0x1f8 + uVar30 * 4) = fVar48;
        cVar10 = *(char *)(uVar30 + local_1240);
        fVar41 = local_14b0 * fVar52 + local_1498 * local_13cc + local_1494 * fVar31;
        local_13b8 = CONCAT44(local_13b8._4_4_,fVar31);
        cVar4 = *(char *)(uVar30 + local_1238);
        fVar31 = *(float *)(local_1470 + uVar30 * 4);
        fVar45 = ABS(fVar48);
        fVar50 = *local_1440;
        fVar47 = fVar50 * fVar31;
        fVar40 = ABS(fVar47);
        local_13d4 = fVar45;
        local_13d0 = fVar48;
        fVar38 = _guard_xfg_dispatch_icall_nop(fVar41 / (fVar45 + _DAT_146b95e18));
        fVar37 = local_13cc;
        local_1408 = CONCAT44(local_1408._4_4_,fVar38);
        if ((fVar48 == 0.0) && (fVar31 == 0.0)) {
          fVar40 = 0.0;
        }
        else {
          if (cVar2 == '\0') {
            if ((cVar4 == '\0') && (cVar10 == '\0')) {
              if (fVar40 <= fVar45) {
                fVar40 = fVar45;
              }
              if (fVar40 <= local_1410) {
                fVar40 = local_1410;
              }
            }
            else {
              if (fVar40 <= fVar45) {
                fVar40 = fVar45;
              }
              fVar40 = fVar40 + DAT_146b95e20 * 0.1;
            }
          }
          else {
            if ((cVar4 != '\0') || (cVar10 != '\0')) {
              fVar40 = (fVar47 - fVar48) / (DAT_146b95e20 * 0.1 + fVar45);
              goto LAB_14395d8ef;
            }
            if (fVar40 <= fVar45) {
              fVar40 = fVar45;
            }
            if (fVar40 <= local_1410) {
              fVar40 = local_1410;
            }
          }
          fVar40 = (fVar47 - fVar48) / fVar40;
        }
LAB_14395d8ef:
        *(float *)(param_4 + 0x1d8 + uVar30 * 4) = fVar40;
        *(float *)(param_4 + 0x1e8 + uVar30 * 4) = fVar38;
        if (fVar33 <= 0.0) {
          local_1428 = pfVar26[5] - fVar33 * pfVar26[7] * pfVar26[9];
        }
        else {
          local_1428 = pfVar26[5] + fVar33 * pfVar26[6] * pfVar26[8];
        }
        fVar48 = ABS(fVar40);
        fVar33 = *(float *)(lVar15 + 0x1c);
        fVar45 = *(float *)(lVar15 + 0x24);
        if (*(float *)(lVar15 + 0x18) <= fVar48) {
          if (fVar48 < *(float *)(lVar15 + 0x20)) {
            fVar45 = (fVar48 - *(float *)(lVar15 + 0x18)) * (fVar45 - fVar33) *
                     *(float *)(lVar15 + 0x34) + fVar33;
          }
        }
        else {
          fVar45 = (fVar48 - *(float *)(lVar15 + 0x10)) * (fVar33 - *(float *)(lVar15 + 0x14)) *
                   *(float *)(lVar15 + 0x30) + *(float *)(lVar15 + 0x14);
        }
        fVar33 = afStack_1250[uVar30];
        fVar45 = fVar45 * fVar33;
        *(float *)(param_4 + 0x148 + uVar30 * 4) = fVar45;
        lVar23 = local_1468;
        lVar24 = local_1470;
        if (0.0 < local_142c * fVar33) {
          fVar33 = *(float *)(param_3 + 0x2c);
          fVar48 = *(float *)(param_3 + 0x34);
          fVar47 = *pfVar1;
          fVar32 = *(float *)(param_3 + 0x30);
          fVar53 = *(float *)(lVar7 + 0x2e8 + uVar30 * 0xc) * 2.0;
          fVar43 = *(float *)(lVar7 + 0x2e0 + uVar30 * 0xc) * 2.0;
          fVar39 = *(float *)(lVar7 + 0x2e4 + uVar30 * 0xc) * 2.0;
          fVar36 = fVar48 * fVar48 - 0.5;
          fVar34 = fVar43 * fVar47 + fVar39 * fVar33 + fVar53 * fVar32;
          fVar54 = (fVar39 * fVar47 - fVar43 * fVar33) * fVar48 + fVar36 * fVar53 + fVar34 * fVar32;
          fVar56 = (fVar43 * fVar32 - fVar53 * fVar47) * fVar48 + fVar36 * fVar39 + fVar34 * fVar33;
          fVar33 = (fVar53 * fVar33 - fVar39 * fVar32) * fVar48 + fVar36 * fVar43 + fVar34 * fVar47;
          if (((DAT_146b95e1c <= local_13d4) || (local_1440[9] * DAT_146b95e1c <= ABS(fVar31))) ||
             (cVar3 != '\0')) {
            fVar48 = 0.0;
          }
          else {
            fVar48 = local_141c + *(float *)(param_4 + 0x230 + uVar30 * 4);
          }
          cVar10 = '\0';
          fVar47 = 0.0;
          if ((((local_13d4 < DAT_146b95e1c) && (fVar31 == 0.0)) && (cVar3 == '\0')) ||
             (1.0 < fVar48)) {
            cVar10 = '\x01';
            fVar47 = local_13d0 * 0.01;
          }
          *(float *)(param_4 + 0x230 + uVar30 * 4) = fVar48;
          *(char *)(uVar30 + 0x334 + param_4) = cVar10;
          *(float *)(param_4 + 0x324 + uVar30 * 4) =
               fVar47 + local_1414 * fVar51 + local_144c * fVar49 + local_1448 * local_1420;
          *(float *)(param_4 + 0x2f4 + uVar30 * 0xc) = fVar51;
          *(float *)(param_4 + 0x2f8 + uVar30 * 0xc) = fVar49;
          *(float *)(param_4 + 0x2fc + uVar30 * 0xc) = local_1420;
          *(float *)(param_4 + 0x2c4 + uVar30 * 0xc) = fVar33;
          *(float *)(param_4 + 0x2c8 + uVar30 * 0xc) = fVar56;
          *(float *)(param_4 + 0x2cc + uVar30 * 0xc) = fVar54;
          if (cVar10 != '\0') {
            fVar40 = 0.0;
          }
          *(float *)(param_4 + 0x1d8 + uVar30 * 4) = fVar40;
          if ((DAT_146b95e1c <= ABS(fVar41)) || (cVar3 != '\0')) {
            fVar47 = 0.0;
          }
          else {
            fVar47 = local_141c + *(float *)(param_4 + 0x240 + uVar30 * 4);
          }
          cVar10 = '\0';
          fVar32 = 0.0;
          if ((0.0 < fVar48) && (1.0 < fVar47)) {
            cVar10 = '\x01';
            fVar32 = fVar41 * 0.1;
          }
          fVar41 = (float)local_13b8;
          *(float *)(param_4 + 0x240 + uVar30 * 4) = fVar47;
          *(char *)(uVar30 + 0x3a8 + param_4) = cVar10;
          *(float *)(param_4 + 0x398 + uVar30 * 4) =
               fVar32 + local_1414 * fVar52 + local_144c * local_13cc +
                        local_1448 * (float)local_13b8;
          *(float *)(param_4 + 0x368 + uVar30 * 0xc) = fVar52;
          *(float *)(param_4 + 0x36c + uVar30 * 0xc) = local_13cc;
          *(float *)(param_4 + 0x370 + uVar30 * 0xc) = (float)local_13b8;
          *(float *)(param_4 + 0x338 + uVar30 * 0xc) = fVar33;
          *(float *)(param_4 + 0x33c + uVar30 * 0xc) = fVar56;
          *(float *)(param_4 + 0x340 + uVar30 * 0xc) = fVar54;
          fVar48 = 0.0;
          if (cVar10 == '\0') {
            fVar48 = fVar38;
          }
          *(float *)(param_4 + 0x1e8 + uVar30 * 4) = fVar48;
          local_1424 = 0;
          local_1478[0] = 0.0;
          in_stack_ffffffffffffeab8 =
               (float *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffeab8 >> 0x20),fVar50);
          in_stack_ffffffffffffeab0 =
               (float *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffeab0 >> 0x20),fVar31);
          local_1444 = 0.0;
          local_1418 = 0.0;
          (**(code **)(local_1230 + 0x20))
                    (*(undefined8 *)(local_1230 + uVar30 * 8),fVar45,fVar40,fVar48,local_1428,
                     in_stack_ffffffffffffeab0,in_stack_ffffffffffffeab8,local_1440[9],
                     local_140c * *(float *)(lVar7 + 0x340 + uVar30 * 4),fVar35,local_142c,
                     local_140c,local_1430,&local_1424,local_1478,&local_1444,&local_1418);
          *(undefined4 *)(param_4 + 0x208 + uVar30 * 4) = local_1424;
          fVar50 = local_1444 * fVar52 + local_1478[0] * fVar51;
          fVar31 = local_1444 * fVar37 + local_1478[0] * fVar49;
          fVar35 = local_1444 * fVar41 + local_1478[0] * local_1420;
          *(float *)(param_4 + 0x218) = fVar50 + *(float *)(param_4 + 0x218);
          *(float *)(param_4 + 0x21c) = fVar31 + *(float *)(param_4 + 0x21c);
          *(float *)(param_4 + 0x220) = fVar35 + *(float *)(param_4 + 0x220);
          *(float *)(param_4 + 0x224) =
               (fVar35 * fVar56 - fVar31 * fVar54) + *(float *)(param_4 + 0x224);
          *(float *)(param_4 + 0x228) =
               (fVar50 * fVar54 - fVar35 * fVar33) + *(float *)(param_4 + 0x228);
          *(float *)(param_4 + 0x22c) =
               (fVar31 * fVar33 - fVar50 * fVar56) + *(float *)(param_4 + 0x22c);
          lVar23 = DAT_146b95e30;
          if (DAT_146b95e30 != 0) {
            fVar31 = *(float *)(param_3 + 0x38);
            fVar50 = *(float *)(param_3 + 0x40);
            *(float *)(DAT_146b95e30 + 4 + uVar30 * 0xc) = fVar56 + *(float *)(param_3 + 0x3c);
            *(float *)(lVar23 + uVar30 * 0xc) = fVar33 + fVar31;
            *(float *)(lVar23 + 8 + uVar30 * 0xc) = fVar54 + fVar50;
          }
          lVar23 = DAT_146b95e38;
          if (DAT_146b95e38 != 0) {
            fVar31 = *(float *)(param_3 + 0x3c);
            fVar50 = *(float *)(param_3 + 0x38);
            *(float *)(DAT_146b95e38 + 8 + uVar30 * 0xc) = fVar44 + *(float *)(param_3 + 0x40);
            *(float *)(lVar23 + 4 + uVar30 * 0xc) = fVar42 + fVar31;
            *(float *)(lVar23 + uVar30 * 0xc) = fVar46 + fVar50;
          }
          lVar23 = local_1468;
          lVar24 = local_1470;
          if (DAT_146b95e40 != 0) {
            uVar11 = param_1 + iVar19;
            fVar55 = 1.0 / fVar55;
            *(float *)((&DAT_146b95e40)[uVar11] + 0x1c) =
                 ABS(local_1478[0]) * local_1460._0_4_ * fVar55;
            if (DAT_146b95e40 != 0) {
              *(float *)((&DAT_146b95e40)[uVar11] + 0x24) =
                   ABS(local_1444) * local_1460._0_4_ * fVar55;
            }
            if (DAT_146b95e40 != 0) {
              *(float *)((&DAT_146b95e40)[uVar11] + 0x28) = local_1418 * local_1460._0_4_ * fVar55;
            }
            if (DAT_146b95e40 != 0) {
              *(undefined4 *)((&DAT_146b95e40)[uVar11] + 0x18) =
                   *(undefined4 *)(param_4 + 0x1d8 + uVar30 * 4);
            }
            if (DAT_146b95e40 != 0) {
              *(undefined4 *)((&DAT_146b95e40)[uVar11] + 0x20) =
                   *(undefined4 *)(param_4 + 0x1e8 + uVar30 * 4);
            }
            if (DAT_146b95e40 != 0) {
              *(undefined4 *)((&DAT_146b95e40)[uVar11] + 0x14) =
                   *(undefined4 *)(param_4 + 0x148 + uVar30 * 4);
            }
          }
        }
      }
    }
    uVar14 = (ulonglong)(iVar19 + 1U);
    uVar30 = uVar30 + 1;
    if (3 < iVar19 + 1U) {
      MXCSR = local_13e8 & 0xffffffc0;
      return;
    }
  } while( true );
}



// FUNCTION 14395e140 procesAntiRollSuspension body=1070 status=ok
// SIG undefined procesAntiRollSuspension(void)

void physx::procesAntiRollSuspension
               (longlong param_1,float *param_2,longlong param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
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
  uint local_e8 [2];
  float local_e0 [42];
  
  uVar5 = *(uint *)(param_1 + 0x3c);
  uVar11 = 0;
  if (uVar5 != 0) {
    do {
      puVar7 = (uint *)PxVehicleWheelsSimData::getAntiRollBarData(param_1,uVar11);
      fVar23 = (float)puVar7[1];
      lVar10 = (ulonglong)*puVar7 * 0xa0;
      lVar12 = (ulonglong)(uint)fVar23 * 0xa0;
      cVar3 = *(char *)(lVar10 + 0x1c + param_3);
      cVar4 = *(char *)(lVar12 + 0x1c + param_3);
      if ((cVar3 == '\0') || (cVar4 == '\0')) {
        local_e8[0] = 0xffffffff;
        local_e8[1] = 0xffffffff;
        fVar15 = (*(float *)(lVar10 + 0x58 + param_3) - *(float *)(lVar12 + 0x58 + param_3)) *
                 (float)puVar7[2];
        bVar14 = cVar3 == '\0';
        if (bVar14) {
          local_e8[1] = 0xffffffff;
          local_e8[0] = *puVar7;
          local_e0[0] = -fVar15;
        }
        uVar9 = (uint)bVar14;
        if (cVar4 == '\0') {
          uVar9 = uVar9 + 1;
          local_e0[bVar14] = fVar15;
          local_e0[(ulonglong)bVar14 - 2] = fVar23;
        }
        if (uVar9 != 0) {
          lVar10 = 0;
          uVar13 = (ulonglong)uVar9;
          do {
            uVar6 = *(undefined4 *)((longlong)local_e0 + lVar10 + -8);
            pfVar8 = (float *)PxVehicleWheelsSimData::getSuspTravelDirection(param_1,uVar6);
            fVar23 = param_2[3];
            fVar15 = param_2[1];
            fVar1 = *param_2;
            fVar2 = param_2[2];
            fVar20 = *pfVar8 + *pfVar8;
            fVar17 = pfVar8[1] + pfVar8[1];
            fVar19 = pfVar8[2] + pfVar8[2];
            fVar18 = fVar23 * fVar23 - 0.5;
            fVar16 = fVar1 * fVar20 + fVar15 * fVar17 + fVar2 * fVar19;
            fVar24 = *(float *)((longlong)local_e0 + lVar10);
            fVar25 = ((fVar15 * fVar19 - fVar2 * fVar17) * fVar23 + fVar18 * fVar20 + fVar1 * fVar16
                     ) * fVar24;
            fVar26 = ((fVar1 * fVar17 - fVar15 * fVar20) * fVar23 + fVar18 * fVar19 + fVar2 * fVar16
                     ) * fVar24;
            fVar24 = ((fVar2 * fVar20 - fVar1 * fVar19) * fVar23 + fVar18 * fVar17 + fVar15 * fVar16
                     ) * fVar24;
            pfVar8 = (float *)PxVehicleWheelsSimData::getSuspForceAppPointOffset(param_1,uVar6);
            fVar23 = param_2[3];
            fVar15 = param_2[1];
            fVar1 = *param_2;
            fVar20 = *pfVar8 + *pfVar8;
            fVar22 = pfVar8[1] + pfVar8[1];
            fVar2 = param_2[2];
            fVar19 = pfVar8[2] + pfVar8[2];
            fVar18 = fVar23 * fVar23 - 0.5;
            lVar10 = lVar10 + 4;
            fVar17 = fVar15 * fVar22 + fVar20 * fVar1 + fVar19 * fVar2;
            fVar21 = (fVar15 * fVar19 - fVar22 * fVar2) * fVar23 + fVar18 * fVar20 + fVar17 * fVar1;
            fVar16 = (fVar20 * fVar2 - fVar19 * fVar1) * fVar23 + fVar18 * fVar22 + fVar15 * fVar17;
            fVar23 = (fVar22 * fVar1 - fVar15 * fVar20) * fVar23 + fVar18 * fVar19 + fVar17 * fVar2;
            *param_4 = (fVar16 * fVar26 - fVar23 * fVar24) + *param_4;
            param_4[2] = (fVar21 * fVar24 - fVar16 * fVar25) + param_4[2];
            param_4[1] = (fVar23 * fVar25 - fVar21 * fVar26) + param_4[1];
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar5);
  }
  return;
}



// FUNCTION 14395e5c0 updateCachedHitData body=360 status=ok
// SIG undefined updateCachedHitData(void)

void physx::updateCachedHitData
               (undefined2 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined2 *param_5,longlong param_6)

{
  if ((*(longlong *)(param_6 + 0x1d8) != 0) || (*(longlong *)(param_6 + 0x1e0) != 0)) {
    *(undefined1 *)(param_6 + 0x1e8) = 1;
  }
  *(undefined2 *)(param_6 + 0xc0) = *param_1;
  *(undefined4 *)(param_6 + 0x60) = *param_2;
  *(undefined4 *)(param_6 + 100) = param_2[1];
  *(undefined4 *)(param_6 + 0x68) = param_2[2];
  *(undefined4 *)(param_6 + 0x6c) = param_2[3];
  *(undefined4 *)(param_6 + 0xb0) = *param_3;
  *(undefined4 *)(param_6 + 0xa0) = *param_4;
  *(undefined2 *)(param_6 + 200) = *param_5;
  *(undefined2 *)(param_6 + 0xc2) = param_1[2];
  *(undefined4 *)(param_6 + 0x70) = param_2[4];
  *(undefined4 *)(param_6 + 0x74) = param_2[5];
  *(undefined4 *)(param_6 + 0x78) = param_2[6];
  *(undefined4 *)(param_6 + 0x7c) = param_2[7];
  *(undefined4 *)(param_6 + 0xb4) = param_3[1];
  *(undefined4 *)(param_6 + 0xa4) = param_4[1];
  *(undefined2 *)(param_6 + 0xca) = param_5[1];
  *(undefined2 *)(param_6 + 0xc4) = param_1[4];
  *(undefined4 *)(param_6 + 0x80) = param_2[8];
  *(undefined4 *)(param_6 + 0x84) = param_2[9];
  *(undefined4 *)(param_6 + 0x88) = param_2[10];
  *(undefined4 *)(param_6 + 0x8c) = param_2[0xb];
  *(undefined4 *)(param_6 + 0xb8) = param_3[2];
  *(undefined4 *)(param_6 + 0xa8) = param_4[2];
  *(undefined2 *)(param_6 + 0xcc) = param_5[2];
  *(undefined2 *)(param_6 + 0xc6) = param_1[6];
  *(undefined4 *)(param_6 + 0x90) = param_2[0xc];
  *(undefined4 *)(param_6 + 0x94) = param_2[0xd];
  *(undefined4 *)(param_6 + 0x98) = param_2[0xe];
  *(undefined4 *)(param_6 + 0x9c) = param_2[0xf];
  *(undefined4 *)(param_6 + 0xbc) = param_3[3];
  *(undefined4 *)(param_6 + 0xac) = param_4[3];
  *(undefined2 *)(param_6 + 0xce) = param_5[3];
  return;
}



// FUNCTION 14395e730 solveDrive4WInternaDynamicsEnginePlusDrivenWheels body=969 status=ok
// SIG undefined solveDrive4WInternaDynamicsEnginePlusDrivenWheels(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void physx::solveDrive4WInternaDynamicsEnginePlusDrivenWheels(float *param_1,undefined8 *param_2)

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
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  float *pfVar18;
  longlong lVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  float local_12d8 [4];
  float local_12c8;
  undefined4 local_127c;
  float local_1278 [4];
  float local_1268;
  undefined4 local_121c;
  float local_1218 [4];
  float local_1208 [88];
  float local_10a8;
  float local_10a4;
  float local_10a0;
  float local_109c;
  float local_1098;
  undefined4 local_9d4;
  undefined1 local_9c8 [2116];
  undefined4 local_184;
  undefined8 uStack_48;
  
  uStack_48 = 0x14395e74f;
  pfVar18 = *(float **)(param_1 + 0xc);
  local_res8[0] = param_1[6];
  pfVar9 = (float *)*param_2;
  lVar10 = *(longlong *)(param_1 + 0x18);
  local_res10 = (longlong)local_1278 - (longlong)pfVar18;
  pcVar11 = *(char **)(param_1 + 0x10);
  lVar24 = (longlong)pfVar9 - (longlong)pfVar18;
  lVar25 = *(longlong *)(param_1 + 10) - (longlong)pfVar18;
  lVar26 = *(longlong *)(param_1 + 0xe) - (longlong)pfVar18;
  fVar30 = *param_1;
  lVar23 = *(longlong *)(param_1 + 0x12) - (longlong)pfVar18;
  fVar1 = param_1[8];
  fVar28 = param_1[4];
  fVar2 = param_1[3];
  fVar13 = *pfVar18;
  fVar14 = pfVar18[1];
  fVar15 = pfVar18[2];
  fVar16 = pfVar18[3];
  pfVar17 = (float *)(*(longlong *)(param_1 + 0x16) + 0xd0);
  lVar12 = param_2[1];
  local_res18 = (longlong)local_12d8 - (longlong)pfVar18;
  lVar19 = 4;
  fVar3 = *(float *)(lVar12 + 0x4c);
  pfVar20 = local_1208;
  local_9d4 = 5;
  local_121c = 5;
  local_127c = 5;
  pfVar21 = local_1218;
  pfVar22 = local_1218;
  do {
    fVar4 = *(float *)((longlong)pfVar18 + lVar24);
    fVar29 = fVar30 * pfVar17[6];
    *(float *)(local_res18 + (longlong)pfVar18) = fVar4;
    fVar27 = fVar29 * fVar28 * fVar2 * fVar28 * *(float *)(lVar25 + (longlong)pfVar18);
    fVar5 = *pfVar18;
    *pfVar22 = fVar27 * fVar13;
    pfVar22[1] = fVar27 * fVar14;
    pfVar22[2] = fVar27 * fVar15;
    pfVar22[3] = fVar27 * fVar16;
    pfVar22 = pfVar22 + 0x17;
    fVar6 = *pfVar17;
    pfVar17 = pfVar17 + 0xc;
    fVar7 = *(float *)(lVar26 + (longlong)pfVar18);
    fVar8 = *(float *)(lVar23 + (longlong)pfVar18);
    *pfVar21 = fVar27 * fVar5 + 1.0 + fVar29 * fVar6;
    pfVar21 = pfVar21 + 0x18;
    *pfVar20 = -(fVar29 * fVar28 * fVar2 * *(float *)(lVar25 + (longlong)pfVar18));
    pfVar20 = pfVar20 + 0x17;
    *(float *)(local_res10 + (longlong)pfVar18) = (fVar7 + fVar8) * fVar29 + fVar4;
    pfVar18 = pfVar18 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  pfVar20 = *(float **)(param_1 + 0xc);
  fVar30 = fVar30 * *(float *)(lVar10 + 0x68);
  local_1098 = (fVar1 + fVar2) * fVar30 + 1.0;
  local_1268 = fVar30 * param_1[7] + fVar3;
  fVar28 = fVar30 * fVar2 * fVar28;
  local_10a8 = -(fVar28 * *pfVar20);
  local_10a4 = -(fVar28 * pfVar20[1]);
  local_10a0 = -(fVar28 * pfVar20[2]);
  local_109c = -(fVar28 * pfVar20[3]);
  local_12c8 = fVar3;
  local_res20 = lVar10;
  if (param_1[5] == 1.4013e-45) {
    local_184 = 0;
    MatrixNNLUSolver::decomposeLU(local_9c8,local_1218);
    MatrixNNLUSolver::solve(local_9c8,local_1278,local_12d8);
  }
  else {
    MatrixNGaussSeidelSolver::solve
              (local_res8,local_res8[0],0x2edbe6ff,local_1218,local_1278,local_12d8);
  }
  if ((*pcVar11 != '\0') && (local_12d8[0] * *pfVar9 <= 0.0)) {
    local_12d8[0] = 0.0;
  }
  if ((pcVar11[1] != '\0') && (local_12d8[1] * pfVar9[1] <= 0.0)) {
    local_12d8[1] = 0.0;
  }
  if ((pcVar11[2] != '\0') && (local_12d8[2] * pfVar9[2] <= 0.0)) {
    local_12d8[2] = 0.0;
  }
  if ((pcVar11[3] != '\0') && (local_12d8[3] * pfVar9[3] <= 0.0)) {
    local_12d8[3] = 0.0;
  }
  if (local_12c8 <= 0.0) {
    local_12c8 = 0.0;
  }
  if (*(float *)(lVar10 + 0x58) <= local_12c8) {
    local_12c8 = *(float *)(lVar10 + 0x58);
  }
  *pfVar9 = local_12d8[0];
  pfVar9[1] = local_12d8[1];
  pfVar9[2] = local_12d8[2];
  pfVar9[3] = local_12d8[3];
  *(float *)(lVar12 + 0x4c) = local_12c8;
  return;
}



// FUNCTION 14395eb00 solveDriveNWInternalDynamicsEnginePlusDrivenWheels body=2015 status=ok
// SIG undefined solveDriveNWInternalDynamicsEnginePlusDrivenWheels(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void physx::solveDriveNWInternalDynamicsEnginePlusDrivenWheels(float *param_1,longlong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  longlong lVar24;
  float *pfVar25;
  float *pfVar26;
  ulonglong uVar27;
  float fVar28;
  ulonglong uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  ulonglong uVar33;
  char *pcVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float *local_res8;
  float local_res10;
  float *local_res18;
  float *local_res20;
  ulonglong local_1318;
  float local_12b8 [23];
  int local_125c;
  float local_1258 [23];
  float local_11fc;
  float local_11f8;
  float local_11f4 [528];
  int local_9b4;
  undefined1 local_9a8 [2116];
  undefined4 local_164;
  
  lVar7 = param_2[1];
  fVar41 = *param_1;
  fVar28 = 0.0;
  lVar23 = *(longlong *)(param_1 + 10);
  lVar8 = *param_2;
  lVar9 = *(longlong *)(param_1 + 0x10);
  fVar6 = param_1[0x15];
  uVar27 = (ulonglong)(uint)fVar6;
  lVar10 = *(longlong *)(param_1 + 0x12);
  local_res10 = param_1[6];
  pfVar26 = *(float **)(param_1 + 0xc);
  fVar38 = param_1[8];
  lVar11 = *(longlong *)(param_1 + 0xe);
  fVar32 = param_1[4];
  fVar40 = param_1[3];
  lVar12 = *(longlong *)(param_1 + 0x16);
  lVar13 = *(longlong *)(param_1 + 0x18);
  fVar3 = param_1[4];
  local_125c = (int)fVar6 + 1;
  fVar4 = *(float *)(lVar7 + 0x4c);
  local_11fc = (float)local_125c;
  local_9b4 = local_125c;
  if (fVar6 != 0.0) {
    local_res20 = local_11f4 + (uVar27 - 1);
    lVar24 = (longlong)local_11f4 - (longlong)pfVar26;
    local_res18 = &local_11f8;
    lVar37 = 0;
    uVar29 = 0;
    pfVar25 = pfVar26;
    local_1318 = uVar27;
    do {
      fVar5 = *(float *)((longlong)pfVar25 + (lVar23 - (longlong)pfVar26));
      uVar35 = (ulonglong)((uint)uVar29 & 3);
      uVar36 = uVar29 >> 2;
      uVar33 = 0;
      lVar17 = uVar36 * 0x3b0 + lVar12;
      lVar21 = uVar35 * 0x30;
      fVar42 = fVar41 * *(float *)(lVar21 + 0xe8 + lVar17);
      fVar39 = fVar42 * fVar32 * fVar40 * fVar3 * fVar5;
      if (7 < (uint)fVar6) {
        do {
          pfVar22 = pfVar26 + uVar33;
          fVar31 = pfVar22[1];
          fVar14 = pfVar22[2];
          fVar15 = pfVar22[3];
          lVar18 = uVar33 + lVar37;
          local_11f4[lVar18 + -1] = *pfVar22 * fVar39;
          local_11f4[lVar18] = fVar31 * fVar39;
          local_11f4[lVar18 + 1] = fVar14 * fVar39;
          local_11f4[lVar18 + 2] = fVar15 * fVar39;
          uVar19 = (ulonglong)((int)uVar33 + 4);
          uVar30 = (int)uVar33 + 8;
          uVar33 = (ulonglong)uVar30;
          pfVar22 = pfVar26 + uVar19;
          fVar31 = pfVar22[1];
          fVar14 = pfVar22[2];
          fVar15 = pfVar22[3];
          lVar18 = uVar19 + lVar37;
          local_11f4[lVar18 + -1] = *pfVar22 * fVar39;
          local_11f4[lVar18] = fVar31 * fVar39;
          local_11f4[lVar18 + 1] = fVar14 * fVar39;
          local_11f4[lVar18 + 2] = fVar15 * fVar39;
        } while (uVar30 < ((uint)fVar6 & 0xfffffff8));
      }
      fVar31 = (float)uVar33;
      if ((uint)fVar31 < (uint)fVar6) {
        if (3 < (uint)((int)fVar6 - (int)fVar31)) {
          uVar30 = (((int)fVar6 - (int)fVar31) - 4U >> 2) + 1;
          pfVar22 = pfVar26 + uVar33 + 1;
          uVar33 = (ulonglong)uVar30;
          fVar31 = (float)((int)fVar31 + uVar30 * 4);
          do {
            pfVar1 = pfVar22 + -1;
            fVar14 = *pfVar22;
            fVar15 = pfVar22[1];
            fVar16 = pfVar22[2];
            pfVar22 = pfVar22 + 4;
            pfVar2 = (float *)(lVar24 + -0x18 + (longlong)pfVar22);
            *pfVar2 = *pfVar1 * fVar39;
            pfVar2[1] = fVar14 * fVar39;
            pfVar2[2] = fVar15 * fVar39;
            pfVar2[3] = fVar16 * fVar39;
            uVar33 = uVar33 - 1;
          } while (uVar33 != 0);
        }
        if ((uint)fVar31 < (uint)fVar6) {
          uVar33 = (ulonglong)(uint)((int)fVar6 - (int)fVar31);
          pfVar22 = pfVar26 + (uint)fVar31;
          do {
            *(float *)(lVar24 + -8 + (longlong)(pfVar22 + 1)) = fVar39 * *pfVar22;
            uVar33 = uVar33 - 1;
            pfVar22 = pfVar22 + 1;
          } while (uVar33 != 0);
        }
      }
      uVar29 = uVar29 + 1;
      lVar24 = lVar24 + 0x5c;
      lVar37 = lVar37 + 0x17;
      fVar31 = *(float *)(lVar8 + (uVar36 * 0x88 + uVar35) * 4);
      *local_res18 = fVar42 * *(float *)(lVar21 + 0xd0 + lVar17) + fVar39 * *pfVar25 + 1.0;
      local_res18 = local_res18 + 0x18;
      *local_res20 = -(fVar42 * fVar32 * fVar40 * fVar5);
      local_res20 = local_res20 + 0x17;
      *(float *)((longlong)pfVar25 + ((longlong)local_1258 - (longlong)pfVar26)) =
           (*(float *)((longlong)pfVar25 + (lVar11 - (longlong)pfVar26)) +
           *(float *)((longlong)pfVar25 + (lVar10 - (longlong)pfVar26))) * fVar42 + fVar31;
      *(float *)((longlong)pfVar25 + ((longlong)local_12b8 - (longlong)pfVar26)) = fVar31;
      pfVar25 = pfVar25 + 1;
      local_1318 = local_1318 - 1;
    } while (local_1318 != 0);
  }
  fVar32 = 0.0;
  fVar41 = fVar41 * *(float *)(lVar13 + 0x68);
  fVar40 = fVar41 * param_1[3] * param_1[4];
  if (3 < (uint)fVar6) {
    lVar23 = uVar27 * 0x5c - (longlong)pfVar26;
    uVar30 = ((int)fVar6 - 4U >> 2) + 1;
    uVar29 = (ulonglong)uVar30;
    fVar32 = (float)(uVar30 * 4);
    pfVar25 = pfVar26 + 1;
    do {
      pfVar22 = pfVar25 + 4;
      fVar3 = *pfVar25;
      *(float *)((longlong)local_1258 + lVar23 + 0x4c + (longlong)pfVar22) = -(fVar40 * pfVar25[-1])
      ;
      fVar5 = pfVar25[1];
      *(float *)((longlong)local_1258 + lVar23 + 0x50 + (longlong)pfVar22) = -(fVar40 * fVar3);
      fVar3 = pfVar25[2];
      *(float *)((longlong)local_1258 + lVar23 + 0x54 + (longlong)pfVar22) = -(fVar40 * fVar5);
      *(float *)((longlong)local_1258 + lVar23 + 0x58 + (longlong)pfVar22) = -(fVar40 * fVar3);
      uVar29 = uVar29 - 1;
      pfVar25 = pfVar22;
    } while (uVar29 != 0);
  }
  if ((uint)fVar32 < (uint)fVar6) {
    uVar29 = (ulonglong)(uint)((int)fVar6 - (int)fVar32);
    pfVar25 = pfVar26 + (uint)fVar32;
    do {
      *(float *)((longlong)pfVar25 + (longlong)local_11f4 + (uVar27 * 0x5c - (longlong)pfVar26) + -4
                ) = -(fVar40 * *pfVar25);
      uVar29 = uVar29 - 1;
      pfVar25 = pfVar25 + 1;
    } while (uVar29 != 0);
  }
  fVar32 = param_1[3];
  local_12b8[uVar27] = fVar4;
  fVar3 = param_1[5];
  fVar40 = param_1[7];
  local_11f4[uVar27 * 0x18 + -1] = (fVar38 + fVar32) * fVar41 + 1.0;
  local_1258[uVar27] = fVar41 * fVar40 + fVar4;
  local_res8 = param_1;
  if (fVar3 == 1.4013e-45) {
    local_164 = 0;
    MatrixNNLUSolver::decomposeLU(local_9a8,&local_11f8);
    MatrixNNLUSolver::solve(local_9a8,local_1258,local_12b8);
  }
  else {
    MatrixNGaussSeidelSolver::solve
              (&local_res8,local_res10,0x2edbe6ff,&local_11f8,local_1258,local_12b8);
  }
  fVar41 = 0.0;
  if (3 < (uint)fVar6) {
    pcVar34 = (char *)(lVar9 + 1);
    pfVar26 = local_12b8 + 1;
    do {
      if ((pcVar34[-1] == '\0') ||
         (0.0 < *(float *)(lVar8 + (ulonglong)((uint)fVar41 >> 2) * 0x220) * pfVar26[-1])) {
        fVar38 = pfVar26[-1];
      }
      else {
        fVar38 = 0.0;
      }
      pfVar26[-1] = fVar38;
      if ((*pcVar34 == '\0') ||
         (0.0 < *(float *)(lVar8 + ((ulonglong)((int)fVar41 + 1U >> 2) * 0x88 +
                                   (ulonglong)((int)fVar41 + 1U & 3)) * 4) * *pfVar26)) {
        fVar38 = *pfVar26;
      }
      else {
        fVar38 = 0.0;
      }
      *pfVar26 = fVar38;
      if ((pcVar34[1] == '\0') ||
         (0.0 < *(float *)(lVar8 + ((ulonglong)((int)fVar41 + 2U >> 2) * 0x88 +
                                   (ulonglong)((int)fVar41 - 2U & 3)) * 4) * pfVar26[1])) {
        fVar38 = pfVar26[1];
      }
      else {
        fVar38 = 0.0;
      }
      pfVar26[1] = fVar38;
      if ((pcVar34[2] == '\0') ||
         (0.0 < *(float *)(lVar8 + ((ulonglong)((int)fVar41 + 3U >> 2) * 0x88 +
                                   (ulonglong)((int)fVar41 - 1U & 3)) * 4) * pfVar26[2])) {
        fVar38 = pfVar26[2];
      }
      else {
        fVar38 = 0.0;
      }
      pfVar26[2] = fVar38;
      pcVar34 = pcVar34 + 4;
      pfVar26 = pfVar26 + 4;
      fVar41 = (float)((int)fVar41 + 4);
    } while ((uint)fVar41 < (uint)((int)fVar6 + -3));
  }
  if ((uint)fVar41 < (uint)fVar6) {
    uVar29 = (ulonglong)(uint)fVar41;
    uVar33 = (ulonglong)(uint)((int)fVar6 - (int)fVar41);
    pcVar34 = (char *)(uVar29 + lVar9);
    pfVar26 = local_12b8 + uVar29;
    do {
      if ((*pcVar34 == '\0') ||
         (0.0 < *(float *)(lVar8 + ((uVar29 >> 2) * 0x88 + (ulonglong)((uint)uVar29 & 3)) * 4) *
                *pfVar26)) {
        fVar41 = *pfVar26;
      }
      else {
        fVar41 = 0.0;
      }
      *pfVar26 = fVar41;
      pcVar34 = pcVar34 + 1;
      pfVar26 = pfVar26 + 1;
      uVar29 = uVar29 + 1;
      uVar33 = uVar33 - 1;
    } while (uVar33 != 0);
  }
  fVar41 = local_12b8[uVar27];
  if (fVar41 <= 0.0) {
    fVar41 = 0.0;
  }
  fVar38 = *(float *)(lVar13 + 0x58);
  if (fVar38 <= fVar41) {
    fVar41 = fVar38;
  }
  local_12b8[uVar27] = fVar41;
  if (3 < (uint)fVar6) {
    pfVar26 = local_12b8 + 1;
    do {
      *(float *)(lVar8 + (ulonglong)((uint)fVar28 >> 2) * 0x220) = pfVar26[-1];
      *(float *)(lVar8 + ((ulonglong)((int)fVar28 + 1U >> 2) * 0x88 +
                         (ulonglong)((int)fVar28 + 1U & 3)) * 4) = *pfVar26;
      *(float *)(lVar8 + ((ulonglong)((int)fVar28 + 2U >> 2) * 0x88 +
                         (ulonglong)((int)fVar28 - 2U & 3)) * 4) = pfVar26[1];
      uVar30 = (int)fVar28 - 1;
      uVar20 = (int)fVar28 + 3;
      fVar28 = (float)((int)fVar28 + 4);
      *(float *)(lVar8 + ((ulonglong)(uVar20 >> 2) * 0x88 + (ulonglong)(uVar30 & 3)) * 4) =
           pfVar26[2];
      pfVar26 = pfVar26 + 4;
    } while ((uint)fVar28 < (uint)((int)fVar6 + -3));
  }
  if ((uint)fVar28 < (uint)fVar6) {
    uVar29 = (ulonglong)(uint)((int)fVar6 - (int)fVar28);
    uVar27 = (ulonglong)(uint)fVar28;
    pfVar26 = local_12b8 + (uint)fVar28;
    do {
      *(float *)(lVar8 + ((uVar27 >> 2) * 0x88 + (ulonglong)((uint)uVar27 & 3)) * 4) = *pfVar26;
      uVar29 = uVar29 - 1;
      uVar27 = uVar27 + 1;
      pfVar26 = pfVar26 + 1;
    } while (uVar29 != 0);
  }
  *(float *)(lVar7 + 0x4c) = fVar41;
  return;
}



// FUNCTION 14395f2f0 solveTankInternaDynamicsEnginePlusDrivenWheels body=4114 status=ok
// SIG undefined solveTankInternaDynamicsEnginePlusDrivenWheels(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void physx::solveTankInternaDynamicsEnginePlusDrivenWheels
               (float *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  longlong lVar18;
  uint uVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  float *pfVar26;
  float *pfVar27;
  longlong lVar28;
  float *pfVar29;
  longlong lVar30;
  longlong lVar31;
  char *pcVar32;
  float *pfVar33;
  longlong lVar34;
  uint uVar35;
  longlong lVar36;
  undefined4 *puVar37;
  longlong lVar38;
  longlong lVar39;
  float fVar40;
  ulonglong uVar41;
  longlong lVar42;
  float *pfVar43;
  longlong lVar44;
  char *pcVar45;
  ulonglong uVar46;
  longlong lVar47;
  char *pcVar48;
  float fVar49;
  float fVar50;
  char *pcVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  uint local_res20 [2];
  longlong local_14b0;
  longlong local_1488;
  float local_1458 [20];
  longlong local_1408;
  longlong local_13f8;
  char *local_13f0;
  float afStack_13e8 [20];
  float local_1398 [20];
  float local_1348 [20];
  float local_12f8 [20];
  float local_12a8 [23];
  uint local_124c;
  float local_1248;
  float local_1244;
  float local_1240 [22];
  float local_11e8 [23];
  float local_118c;
  float local_1188;
  float local_1184 [528];
  uint local_944;
  float local_938 [23];
  float local_8dc [506];
  uint local_f4;
  undefined8 uStack_48;
  
  uVar19 = MXCSR;
  uStack_48 = 0x14395f31d;
  lVar39 = *(longlong *)(param_1 + 0xe);
  lVar18 = *param_4;
  uVar24 = 0;
  pfVar27 = *(float **)(param_1 + 10);
  lVar28 = *(longlong *)(param_1 + 0xc);
  fVar14 = param_1[0x14];
  fVar15 = param_1[0x15];
  lVar30 = *(longlong *)(param_1 + 0x16);
  local_res20[0] = MXCSR;
  lVar25 = *(longlong *)(param_1 + 0x12);
  MXCSR = 0x9fc0;
  local_13f8 = *(longlong *)(param_1 + 0x18);
  local_1408 = param_4[1];
  uVar1 = (int)fVar14 - 1;
  uVar41 = (ulonglong)uVar1;
  fVar53 = param_1[4];
  fVar54 = param_1[3];
  fVar56 = *param_1;
  fVar7 = param_1[8];
  local_13f0 = *(char **)(param_1 + 0x10);
  if (uVar1 != 0) {
    puVar23 = (undefined4 *)(lVar30 + 0x118);
    uVar46 = uVar24;
    puVar37 = (undefined4 *)(lVar18 + 8);
    do {
      uVar8 = puVar23[-0xc];
      uVar9 = *puVar23;
      *(undefined4 *)((longlong)local_12f8 + uVar46) = puVar23[-0x12];
      *(undefined4 *)((longlong)local_12f8 + uVar46 + 4) = puVar23[-6];
      *(undefined4 *)((longlong)local_12f8 + uVar46 + 8) = puVar23[6];
      *(undefined4 *)((longlong)local_12f8 + uVar46 + 0xc) = puVar23[0x12];
      *(undefined4 *)((longlong)local_1398 + uVar46) = puVar37[-2];
      *(undefined4 *)((longlong)local_1398 + uVar46 + 4) = puVar37[-1];
      uVar16 = *puVar37;
      *(undefined4 *)((longlong)local_1348 + uVar46) = uVar8;
      uVar8 = puVar23[0xc];
      *(undefined4 *)((longlong)local_1348 + uVar46 + 4) = uVar9;
      uVar9 = puVar23[0x18];
      *(undefined4 *)((longlong)local_1348 + uVar46 + 8) = uVar8;
      uVar8 = puVar23[-0xd];
      *(undefined4 *)((longlong)local_1348 + uVar46 + 0xc) = uVar9;
      uVar9 = puVar23[-1];
      *(undefined4 *)((longlong)local_1398 + uVar46 + 8) = uVar16;
      uVar16 = puVar37[1];
      *(undefined4 *)((longlong)afStack_13e8 + uVar46) = uVar8;
      uVar8 = puVar23[0xb];
      *(undefined4 *)((longlong)afStack_13e8 + uVar46 + 4) = uVar9;
      uVar9 = puVar23[0x17];
      *(undefined4 *)((longlong)local_1398 + uVar46 + 0xc) = uVar16;
      *(undefined4 *)((longlong)afStack_13e8 + uVar46 + 8) = uVar8;
      *(undefined4 *)((longlong)afStack_13e8 + uVar46 + 0xc) = uVar9;
      uVar46 = uVar46 + 0x10;
      uVar41 = uVar41 - 1;
      puVar23 = puVar23 + 0xec;
      puVar37 = puVar37 + 0x88;
    } while (uVar41 != 0);
    uVar41 = (ulonglong)((int)fVar14 - 1);
  }
  uVar2 = (int)fVar15 + (1 - (int)fVar14) * 4;
  fVar49 = fVar15;
  if (3 < uVar2) {
    uVar35 = (int)uVar41 * 4 + 1;
    lVar28 = lVar18 + uVar41 * 0x220;
    pfVar29 = (float *)(lVar28 + 8);
    uVar21 = (uVar2 - 4 >> 2) + 1;
    uVar46 = (ulonglong)uVar21;
    uVar24 = (ulonglong)(uVar21 * 4);
    pfVar33 = (float *)(lVar30 + 0xd0 + uVar41 * 0x3b0);
    do {
      uVar21 = uVar35 - 1;
      fVar49 = pfVar33[0x2a];
      local_1348[uVar21] = pfVar33[6];
      local_12f8[uVar21] = *pfVar33;
      afStack_13e8[uVar21] = pfVar33[5];
      local_1398[uVar21] = pfVar29[-2];
      uVar21 = uVar35 + 1;
      local_1348[uVar35] = pfVar33[0x12];
      local_12f8[uVar35] = pfVar33[0xc];
      afStack_13e8[uVar35] = pfVar33[0x11];
      local_1398[uVar35] = pfVar29[-1];
      local_1348[uVar21] = pfVar33[0x1e];
      local_12f8[uVar21] = pfVar33[0x18];
      afStack_13e8[uVar21] = pfVar33[0x1d];
      local_1398[uVar21] = *pfVar29;
      uVar21 = uVar35 + 2;
      uVar35 = uVar35 + 4;
      local_1348[uVar21] = fVar49;
      fVar49 = pfVar33[0x29];
      local_12f8[uVar21] = pfVar33[0x24];
      pfVar26 = (float *)((longlong)pfVar29 + lVar28 + ((uVar41 * -0x220 + 4) - lVar18));
      pfVar29 = pfVar29 + 4;
      local_1398[uVar21] = *pfVar26;
      afStack_13e8[uVar21] = fVar49;
      uVar46 = uVar46 - 1;
      pfVar33 = pfVar33 + 0x30;
    } while (uVar46 != 0);
    lVar30 = *(longlong *)(param_1 + 0x16);
    lVar28 = *(longlong *)(param_1 + 0xc);
    fVar49 = param_1[0x15];
  }
  if ((uint)uVar24 < uVar2) {
    pfVar29 = (float *)(uVar24 * 0x30 + lVar30 + (ulonglong)uVar1 * 0x3b0 + 0xd0);
    lVar47 = uVar24 * 4;
    do {
      uVar21 = (int)uVar24 + uVar1 * 4;
      local_1348[uVar21] = pfVar29[6];
      uVar35 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar35;
      fVar17 = *pfVar29;
      fVar10 = pfVar29[5];
      pfVar29 = pfVar29 + 0xc;
      local_12f8[uVar21] = fVar17;
      local_1398[uVar21] = *(float *)(lVar47 + (ulonglong)uVar1 * 0x220 + lVar18);
      afStack_13e8[uVar21] = fVar10;
      lVar47 = lVar47 + 4;
    } while (uVar35 < uVar2);
  }
  fVar10 = *(float *)(lVar30 + 0xc0);
  uVar21 = (int)fVar49 + 1;
  fVar17 = *(float *)(lVar30 + 0xf0);
  local_944 = uVar21;
  local_124c = uVar21;
  fVar50 = 0.0;
  if (fVar49 != 0.0) {
    uVar24 = (ulonglong)(uint)fVar15;
    lVar25 = lVar25 - (longlong)pfVar27;
    lVar39 = lVar39 - (longlong)pfVar27;
    lVar42 = (longlong)local_12f8 - (longlong)pfVar27;
    lVar36 = (longlong)local_1398 - (longlong)pfVar27;
    lVar30 = lVar28 - (longlong)pfVar27;
    pfVar29 = local_1184 + (uVar24 - 1);
    lVar38 = (longlong)local_1184 - lVar28;
    lVar47 = (longlong)local_1348 - (longlong)pfVar27;
    lVar34 = param_3 - (longlong)pfVar27;
    pfVar33 = &local_1188;
    lVar44 = (longlong)local_12a8 - (longlong)pfVar27;
    do {
      fVar50 = *pfVar27;
      fVar55 = fVar56 * *(float *)(lVar47 + (longlong)pfVar27);
      uVar41 = 0;
      fVar40 = *(float *)(lVar34 + (longlong)pfVar27);
      fVar52 = fVar55 * fVar53 * fVar54 * fVar53 * fVar50 * fVar40;
      if (3 < (uint)fVar15) {
        lVar31 = param_3 - lVar28;
        uVar35 = ((int)fVar15 - 4U >> 2) + 1;
        uVar46 = (ulonglong)uVar35;
        uVar41 = (ulonglong)(uVar35 * 4);
        pfVar26 = (float *)(lVar28 + 4);
        do {
          fVar11 = *pfVar26;
          fVar12 = *(float *)((longlong)pfVar26 + lVar31);
          *(float *)((longlong)pfVar26 + lVar38 + -8) =
               fVar52 * pfVar26[-1] * *(float *)((longlong)pfVar26 + lVar31 + -4);
          fVar13 = pfVar26[1];
          *(float *)((longlong)pfVar26 + lVar38 + -4) = fVar52 * fVar11 * fVar12;
          fVar11 = pfVar26[2];
          fVar12 = *(float *)((longlong)pfVar26 + lVar31 + 8);
          *(float *)((longlong)pfVar26 + lVar38) =
               fVar52 * fVar13 * *(float *)((longlong)pfVar26 + lVar31 + 4);
          *(float *)((longlong)pfVar26 + lVar38 + 4) = fVar52 * fVar11 * fVar12;
          uVar46 = uVar46 - 1;
          pfVar26 = pfVar26 + 4;
        } while (uVar46 != 0);
      }
      if ((uint)(float)uVar41 < (uint)fVar15) {
        uVar46 = (ulonglong)(uint)((int)fVar15 - (int)(float)uVar41);
        pfVar26 = (float *)(uVar41 * 4 + lVar28);
        do {
          *(float *)(lVar38 + -8 + (longlong)(pfVar26 + 1)) =
               fVar52 * *pfVar26 * *(float *)((longlong)pfVar26 + (param_3 - lVar28));
          uVar46 = uVar46 - 1;
          pfVar26 = pfVar26 + 1;
        } while (uVar46 != 0);
      }
      lVar38 = lVar38 + 0x5c;
      *pfVar33 = fVar52 * *(float *)(lVar30 + (longlong)pfVar27) * fVar40 + 1.0 +
                 fVar55 * *(float *)(lVar42 + (longlong)pfVar27);
      pfVar33 = pfVar33 + 0x18;
      *pfVar29 = -(fVar55 * fVar53 * fVar54 * fVar50 * fVar40);
      pfVar29 = pfVar29 + 0x17;
      *(float *)(lVar44 + (longlong)pfVar27) =
           (*(float *)(lVar39 + (longlong)pfVar27) + *(float *)(lVar25 + (longlong)pfVar27)) *
           fVar55 + *(float *)(lVar36 + (longlong)pfVar27);
      pfVar27 = pfVar27 + 1;
      uVar24 = uVar24 - 1;
      fVar50 = fVar15;
    } while (uVar24 != 0);
  }
  uVar24 = (ulonglong)uVar21;
  fVar40 = 0.0;
  fVar56 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x68) * fVar56;
  fVar53 = fVar56 * fVar54 * fVar53;
  if (3 < (uint)fVar50) {
    lVar25 = (ulonglong)(uint)fVar50 * 0x5c - lVar28;
    lVar39 = param_3 - lVar28;
    uVar35 = ((int)param_1[0x15] - 4U >> 2) + 1;
    uVar41 = (ulonglong)uVar35;
    fVar40 = (float)(uVar35 * 4);
    pfVar27 = (float *)(lVar28 + 4);
    do {
      pfVar29 = pfVar27 + 4;
      fVar50 = *pfVar27;
      fVar52 = *(float *)((longlong)pfVar27 + lVar39);
      *(float *)((longlong)local_11e8 + lVar25 + 0x4c + (longlong)pfVar29) =
           -(fVar53 * pfVar27[-1] * *(float *)((longlong)pfVar27 + lVar39 + -4));
      fVar55 = pfVar27[1];
      *(float *)((longlong)local_11e8 + lVar25 + 0x50 + (longlong)pfVar29) =
           -(fVar53 * fVar50 * fVar52);
      fVar50 = pfVar27[2];
      fVar52 = *(float *)((longlong)pfVar27 + lVar39 + 8);
      *(float *)((longlong)local_11e8 + lVar25 + 0x54 + (longlong)pfVar29) =
           -(fVar53 * fVar55 * *(float *)((longlong)pfVar27 + lVar39 + 4));
      *(float *)((longlong)local_11e8 + lVar25 + 0x58 + (longlong)pfVar29) =
           -(fVar53 * fVar50 * fVar52);
      uVar41 = uVar41 - 1;
      pfVar27 = pfVar29;
    } while (uVar41 != 0);
    fVar50 = param_1[0x15];
  }
  lVar25 = 0;
  if ((uint)fVar40 < (uint)fVar50) {
    uVar41 = (ulonglong)(uint)((int)fVar50 - (int)fVar40);
    pfVar27 = (float *)((ulonglong)(uint)fVar40 * 4 + lVar28);
    do {
      *(float *)((longlong)pfVar27 +
                (longlong)local_1184 + ((ulonglong)(uint)fVar50 * 0x5c - lVar28) + -4) =
           -(fVar53 * *pfVar27 * *(float *)((longlong)pfVar27 + (param_3 - lVar28)));
      uVar41 = uVar41 - 1;
      pfVar27 = pfVar27 + 1;
    } while (uVar41 != 0);
  }
  uVar41 = (ulonglong)(uint)fVar50;
  local_f4 = uVar21;
  uVar35 = 2;
  fVar53 = param_1[7];
  local_1184[uVar41 * 0x18 + -1] = (fVar7 + fVar54) * fVar56 + 1.0;
  local_12a8[uVar41] = fVar56 * fVar53 + *(float *)(local_1408 + 0x4c);
  if (uVar21 != 0) {
    pfVar27 = local_1184 + (uVar41 - 1);
    lVar39 = lVar25;
    do {
      fVar53 = *(float *)((longlong)local_1184 + lVar39 + -4);
      fVar56 = 2.8026e-45;
      fVar54 = *(float *)((longlong)local_1184 + lVar39);
      if (2 < (uint)fVar50) {
        do {
          uVar41 = (ulonglong)(uint)fVar56;
          uVar22 = (int)fVar56 + 1;
          fVar56 = (float)((int)fVar56 + 2);
          fVar53 = fVar53 + local_1184[lVar25 + uVar41 + -1] * fVar10 * afStack_13e8[uVar41];
          fVar54 = fVar54 + local_1184[(ulonglong)uVar22 + lVar25 + -1] * fVar17 *
                            afStack_13e8[uVar22];
        } while ((uint)fVar56 < (uint)fVar50);
      }
      lVar25 = lVar25 + 0x17;
      *(float *)((longlong)local_938 + lVar39 + 8) = *pfVar27;
      pfVar27 = pfVar27 + 0x17;
      *(float *)((longlong)local_938 + lVar39) = fVar53;
      *(float *)((longlong)local_938 + lVar39 + 4) = fVar54;
      lVar39 = lVar39 + 0x5c;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  lVar39 = 0;
  local_944 = 3;
  local_1488 = 3;
  local_14b0 = 0xb8;
  pfVar27 = local_1240;
  lVar25 = lVar39;
  do {
    lVar34 = 3;
    lVar28 = local_14b0;
    lVar30 = lVar25;
    lVar47 = lVar39;
    do {
      fVar53 = 0.0;
      uVar22 = 0;
      if (3 < uVar21) {
        pfVar29 = (float *)((longlong)local_938 + lVar25);
        uVar22 = ((int)fVar49 - 3U >> 2) + 1;
        uVar24 = (ulonglong)uVar22;
        uVar22 = uVar22 * 4;
        do {
          pfVar6 = (float *)((longlong)pfVar29 + lVar28 + -0xb8);
          fVar54 = *pfVar29;
          pfVar4 = (float *)(lVar28 + -0x5c + (longlong)pfVar29);
          pfVar33 = pfVar29 + 0x17;
          pfVar3 = (float *)((longlong)pfVar29 + lVar28);
          pfVar26 = pfVar29 + 0x2e;
          pfVar43 = pfVar29 + 0x45;
          pfVar5 = (float *)(lVar28 + 0x5c + (longlong)pfVar29);
          pfVar29 = pfVar29 + 0x5c;
          fVar53 = fVar53 + *pfVar6 * fVar54 + *pfVar4 * *pfVar33 + *pfVar3 * *pfVar26 +
                   *pfVar43 * *pfVar5;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      if (uVar22 < uVar21) {
        pfVar29 = local_938 + (ulonglong)uVar22 * 0x17 + lVar47;
        uVar24 = (ulonglong)(uVar21 - uVar22);
        do {
          pfVar33 = (float *)((longlong)pfVar29 + lVar30);
          fVar54 = *pfVar29;
          pfVar29 = pfVar29 + 0x17;
          fVar53 = fVar53 + *pfVar33 * fVar54;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      *(float *)((longlong)pfVar27 + lVar28) = fVar53;
      lVar47 = lVar47 + 1;
      lVar28 = lVar28 + 4;
      lVar30 = lVar30 + -4;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    pfVar27 = pfVar27 + 0x18;
    local_14b0 = local_14b0 + -4;
    lVar25 = lVar25 + 4;
    local_1488 = local_1488 + -1;
  } while (local_1488 != 0);
  local_118c = 4.2039e-45;
  lVar25 = 3;
  do {
    fVar53 = 0.0;
    uVar22 = 0;
    if (3 < uVar21) {
      uVar22 = ((int)fVar49 - 3U >> 2) + 1;
      pfVar27 = local_12a8 + 1;
      pfVar29 = local_8dc + lVar39;
      uVar24 = (ulonglong)uVar22;
      uVar22 = uVar22 * 4;
      do {
        pfVar33 = pfVar29 + -0x17;
        pfVar26 = pfVar27 + -1;
        fVar54 = *pfVar27;
        fVar56 = *pfVar29;
        pfVar43 = pfVar29 + 0x17;
        pfVar3 = pfVar27 + 1;
        pfVar5 = pfVar29 + 0x2e;
        pfVar4 = pfVar27 + 2;
        pfVar29 = pfVar29 + 0x5c;
        pfVar27 = pfVar27 + 4;
        fVar53 = fVar53 + *pfVar33 * *pfVar26 + fVar54 * fVar56 + *pfVar43 * *pfVar3 +
                 *pfVar5 * *pfVar4;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if (uVar22 < uVar21) {
      pfVar27 = local_12a8 + uVar22;
      pfVar29 = local_938 + (ulonglong)uVar22 * 0x17 + lVar39;
      uVar24 = (ulonglong)(uVar21 - uVar22);
      do {
        fVar54 = *pfVar29;
        pfVar29 = pfVar29 + 0x17;
        fVar56 = *pfVar27;
        pfVar27 = pfVar27 + 1;
        fVar53 = fVar53 + fVar54 * fVar56;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    local_11e8[lVar39] = fVar53;
    lVar39 = lVar39 + 1;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  cVar20 = Matrix33Solver::solve(local_res20,&local_1188,local_11e8,&local_1248);
  if (cVar20 != '\0') {
    fVar53 = 2.8026e-45;
    if (local_1240[0] <= 0.0) {
      local_1240[0] = 0.0;
    }
    uVar24 = (ulonglong)(uint)fVar15;
    local_1458[0] = local_1248;
    local_1458[1] = local_1244;
    fVar54 = local_1240[0];
    if (*(float *)(local_13f8 + 0x58) <= local_1240[0]) {
      fVar54 = *(float *)(local_13f8 + 0x58);
    }
    if (2 < (uint)fVar15) {
      do {
        local_1458[(uint)fVar53] = local_1248;
        uVar21 = (int)fVar53 + 1;
        fVar53 = (float)((int)fVar53 + 2);
        local_1458[uVar21] = local_1244;
      } while ((uint)fVar53 < (uint)fVar15);
    }
    if (fVar15 != 0.0) {
      lVar25 = 0;
      pcVar32 = local_13f0;
      do {
        if ((*pcVar32 != '\0') &&
           (*(float *)((longlong)local_1458 + lVar25) * *(float *)((longlong)local_1398 + lVar25) <=
            0.0)) {
          *(undefined4 *)((longlong)local_1458 + lVar25) = 0;
        }
        pcVar32 = pcVar32 + 1;
        lVar25 = lVar25 + 4;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    uVar24 = 0;
    if (3 < uVar1) {
      pfVar27 = (float *)(lVar18 + 8);
      uVar21 = ((int)fVar14 - 5U >> 2) + 1;
      uVar41 = (ulonglong)uVar21;
      uVar24 = (ulonglong)(uVar21 * 4);
      do {
        if (*(char *)((ulonglong)(uVar35 - 2) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 - 2];
        }
        pfVar27[-2] = fVar53;
        if (*(char *)((ulonglong)(uVar35 - 1) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 - 1];
        }
        pfVar27[-1] = fVar53;
        if (*(char *)((ulonglong)uVar35 + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35];
        }
        *pfVar27 = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 1) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 1];
        }
        pfVar27[1] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 2) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 2];
        }
        pfVar27[0x86] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 3) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 3];
        }
        pfVar27[0x87] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 4) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 4];
        }
        pfVar27[0x88] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 5) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 5];
        }
        pfVar27[0x89] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 6) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 6];
        }
        pfVar27[0x10e] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 7) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 7];
        }
        pfVar27[0x10f] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 8) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 8];
        }
        pfVar27[0x110] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 9) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 9];
        }
        pfVar27[0x111] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 10) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 10];
        }
        pfVar27[0x196] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 0xb) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 0xb];
        }
        pfVar27[0x197] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 0xc) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 0xc];
        }
        pfVar27[0x198] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 0xd) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 0xd];
        }
        pfVar27[0x199] = fVar53;
        uVar35 = uVar35 + 0x10;
        pfVar27 = pfVar27 + 0x220;
        uVar41 = uVar41 - 1;
      } while (uVar41 != 0);
    }
    uVar21 = (uint)uVar24;
    if (uVar21 < uVar1) {
      pfVar43 = (float *)(lVar18 + 8 + uVar24 * 0x220);
      uVar35 = uVar21 * 4;
      pcVar32 = (char *)((ulonglong)(uVar35 + 3) + param_2);
      pcVar45 = (char *)((ulonglong)uVar35 + param_2);
      pfVar27 = local_1458 + uVar35;
      pcVar48 = (char *)((ulonglong)(uVar35 + 2) + param_2);
      pfVar29 = local_1458 + (uVar35 + 3);
      pfVar33 = local_1458 + (uVar35 + 2);
      pcVar51 = (char *)((ulonglong)(uVar35 + 1) + param_2);
      pfVar26 = local_1458 + (uVar35 + 1);
      uVar24 = (ulonglong)(uVar1 - uVar21);
      do {
        if (*pcVar45 == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = *pfVar27;
        }
        cVar20 = *pcVar51;
        pfVar43[-2] = fVar53;
        if (cVar20 == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = *pfVar26;
        }
        cVar20 = *pcVar48;
        pfVar43[-1] = fVar53;
        if (cVar20 == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = *pfVar33;
        }
        cVar20 = *pcVar32;
        *pfVar43 = fVar53;
        if (cVar20 == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = *pfVar29;
        }
        pfVar43[1] = fVar53;
        pcVar45 = pcVar45 + 4;
        pfVar43 = pfVar43 + 0x88;
        pfVar27 = pfVar27 + 4;
        pcVar51 = pcVar51 + 4;
        pfVar26 = pfVar26 + 4;
        pcVar48 = pcVar48 + 4;
        pfVar33 = pfVar33 + 4;
        pcVar32 = pcVar32 + 4;
        pfVar29 = pfVar29 + 4;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    uVar21 = 0;
    if (3 < uVar2) {
      pfVar27 = (float *)((ulonglong)uVar1 * 0x220 + lVar18);
      uVar21 = (uVar2 - 4 >> 2) + 1;
      uVar35 = uVar1 * 4 + 1;
      uVar24 = (ulonglong)uVar21;
      uVar21 = uVar21 * 4;
      do {
        if (*(char *)((ulonglong)(uVar35 - 1) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 - 1];
        }
        cVar20 = *(char *)((ulonglong)uVar35 + param_2);
        *pfVar27 = fVar53;
        if (cVar20 == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35];
        }
        pfVar27[1] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 1) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 1];
        }
        pfVar27[2] = fVar53;
        if (*(char *)((ulonglong)(uVar35 + 2) + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35 + 2];
        }
        pfVar27[3] = fVar53;
        uVar35 = uVar35 + 4;
        pfVar27 = pfVar27 + 4;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if (uVar21 < uVar2) {
      uVar35 = uVar21 + uVar1 * 4;
      uVar24 = (ulonglong)(uVar2 - uVar21);
      pfVar27 = (float *)(lVar18 + ((ulonglong)uVar1 * 0x88 + (ulonglong)uVar21) * 4);
      do {
        if (*(char *)((ulonglong)uVar35 + param_2) == '\0') {
          fVar53 = 0.0;
        }
        else {
          fVar53 = local_1458[uVar35];
        }
        *pfVar27 = fVar53;
        uVar35 = uVar35 + 1;
        pfVar27 = pfVar27 + 1;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    *(float *)(local_1408 + 0x4c) = fVar54;
  }
  MXCSR = uVar19 & 0xffffffc0;
  return;
}



// FUNCTION 143960310 integrateNoDriveWheelSpeeds body=410 status=ok
// SIG undefined integrateNoDriveWheelSpeeds(void)

void physx::integrateNoDriveWheelSpeeds
               (float param_1,float *param_2,char *param_3,float *param_4,float *param_5,
               float *param_6,longlong param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_1 * *(float *)(param_7 + 0xe8);
  fVar3 = param_1 * *(float *)(param_7 + 0x118);
  fVar4 = param_1 * *(float *)(param_7 + 0x148);
  param_1 = param_1 * *(float *)(param_7 + 0x178);
  fVar3 = ((param_4[1] + param_5[1] + param_2[1]) * fVar3 + param_8[1]) / (fVar3 * param_6[1] + 1.0)
  ;
  fVar5 = ((*param_4 + *param_5 + *param_2) * fVar2 + *param_8) / (fVar2 * *param_6 + 1.0);
  fVar2 = ((param_4[2] + param_5[2] + param_2[2]) * fVar4 + param_8[2]) / (fVar4 * param_6[2] + 1.0)
  ;
  fVar4 = ((param_4[3] + param_5[3] + param_2[3]) * param_1 + param_8[3]) /
          (param_1 * param_6[3] + 1.0);
  if ((*param_3 != '\0') && (*param_8 * fVar5 <= 0.0)) {
    fVar5 = 0.0;
  }
  if ((param_3[1] != '\0') && (param_8[1] * fVar3 <= 0.0)) {
    fVar3 = 0.0;
  }
  if ((param_3[2] != '\0') && (param_8[2] * fVar2 <= 0.0)) {
    fVar2 = 0.0;
  }
  if ((param_3[3] == '\0') || (fVar1 = 0.0, 0.0 < param_8[3] * fVar4)) {
    fVar1 = fVar4;
  }
  *param_8 = fVar5;
  param_8[1] = fVar3;
  param_8[2] = fVar2;
  param_8[3] = fVar1;
  return;
}



// FUNCTION 1439604b0 integrateUndriveWheelRotationSpeeds body=503 status=ok
// SIG undefined integrateUndriveWheelRotationSpeeds(void)

void physx::integrateUndriveWheelRotationSpeeds
               (float param_1,float param_2,float param_3,float *param_4,float *param_5,
               longlong param_6,float *param_7)

{
  float fVar1;
  
  fVar1 = param_1 * *(float *)(param_6 + 0xe8);
  fVar1 = ((*param_4 + *param_5) * fVar1 + *param_7) / (fVar1 * *(float *)(param_6 + 0xd0) + 1.0);
  if ((param_2 * *(float *)(param_6 + 0xd4) + param_3 * *(float *)(param_6 + 0xd8) == 0.0) ||
     (0.0 < fVar1 * *param_7)) {
    *param_7 = fVar1;
  }
  else {
    *param_7 = 0.0;
  }
  fVar1 = param_1 * *(float *)(param_6 + 0x118);
  fVar1 = ((param_4[1] + param_5[1]) * fVar1 + param_7[1]) /
          (fVar1 * *(float *)(param_6 + 0x100) + 1.0);
  if ((param_2 * *(float *)(param_6 + 0x104) + param_3 * *(float *)(param_6 + 0x108) == 0.0) ||
     (0.0 < fVar1 * param_7[1])) {
    param_7[1] = fVar1;
  }
  else {
    param_7[1] = 0.0;
  }
  fVar1 = param_1 * *(float *)(param_6 + 0x148);
  fVar1 = ((param_4[2] + param_5[2]) * fVar1 + param_7[2]) /
          (fVar1 * *(float *)(param_6 + 0x130) + 1.0);
  if ((param_2 * *(float *)(param_6 + 0x134) + param_3 * *(float *)(param_6 + 0x138) == 0.0) ||
     (0.0 < fVar1 * param_7[2])) {
    param_7[2] = fVar1;
  }
  else {
    param_7[2] = 0.0;
  }
  param_1 = param_1 * *(float *)(param_6 + 0x178);
  fVar1 = ((param_4[3] + param_5[3]) * param_1 + param_7[3]) /
          (param_1 * *(float *)(param_6 + 0x160) + 1.0);
  if ((param_2 * *(float *)(param_6 + 0x164) + param_3 * *(float *)(param_6 + 0x168) != 0.0) &&
     (fVar1 * param_7[3] <= 0.0)) {
    param_7[3] = 0.0;
    return;
  }
  param_7[3] = fVar1;
  return;
}



// FUNCTION 1439606b0 integrateWheelRotationAngles body=940 status=ok
// SIG undefined integrateWheelRotationAngles(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::integrateWheelRotationAngles
               (float param_1,float param_2,float param_3,float param_4,float *param_5,
               float *param_6,float *param_7,char *param_8,undefined8 param_9,longlong param_10,
               undefined8 param_11,float *param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_2 = param_2 * param_3;
  fVar4 = *param_12;
  if ((((-*(float *)(param_10 + 0xc) < *param_5) && (*param_8 == '\0')) &&
      (param_2 * *param_6 * param_4 == 0.0)) && (fVar1 = *param_7, ABS(fVar1) < _DAT_146b95e10)) {
    fVar4 = fVar1 * *(float *)(param_10 + 0xe4) * (1.0 - ABS(fVar1) * _DAT_146b95e14) +
            ABS(fVar1) * _DAT_146b95e14 * fVar4;
  }
  fVar2 = fVar4 * param_1 + param_12[8];
  fVar1 = fVar2;
  if (0.0 <= -fVar2 - 31.415926) {
    fVar1 = fVar2 + 31.415926;
  }
  fVar3 = fVar2 - 31.415926;
  if (fVar2 - 31.415926 < 0.0) {
    fVar3 = fVar1;
  }
  param_12[8] = fVar3;
  param_12[4] = fVar4;
  fVar4 = param_12[1];
  if (((-*(float *)(param_10 + 0x3c) < param_5[1]) && (param_8[1] == '\0')) &&
     ((param_2 * param_6[1] * param_4 == 0.0 && (fVar1 = param_7[1], ABS(fVar1) < _DAT_146b95e10))))
  {
    fVar4 = fVar1 * *(float *)(param_10 + 0x114) * (1.0 - ABS(fVar1) * _DAT_146b95e14) +
            ABS(fVar1) * _DAT_146b95e14 * fVar4;
  }
  fVar2 = fVar4 * param_1 + param_12[9];
  fVar1 = fVar2;
  if (0.0 <= -fVar2 - 31.415926) {
    fVar1 = fVar2 + 31.415926;
  }
  fVar3 = fVar2 - 31.415926;
  if (fVar2 - 31.415926 < 0.0) {
    fVar3 = fVar1;
  }
  param_12[9] = fVar3;
  param_12[5] = fVar4;
  fVar4 = param_12[2];
  if (((-*(float *)(param_10 + 0x6c) < param_5[2]) && (param_8[2] == '\0')) &&
     ((param_2 * param_6[2] * param_4 == 0.0 && (fVar1 = param_7[2], ABS(fVar1) < _DAT_146b95e10))))
  {
    fVar4 = fVar1 * *(float *)(param_10 + 0x144) * (1.0 - ABS(fVar1) * _DAT_146b95e14) +
            ABS(fVar1) * _DAT_146b95e14 * fVar4;
  }
  fVar2 = fVar4 * param_1 + param_12[10];
  fVar1 = fVar2;
  if (0.0 <= -fVar2 - 31.415926) {
    fVar1 = fVar2 + 31.415926;
  }
  fVar3 = fVar2 - 31.415926;
  if (fVar2 - 31.415926 < 0.0) {
    fVar3 = fVar1;
  }
  param_12[10] = fVar3;
  param_12[6] = fVar4;
  fVar4 = param_12[3];
  if ((((-*(float *)(param_10 + 0x9c) < param_5[3]) && (param_8[3] == '\0')) &&
      (param_2 * param_6[3] * param_4 == 0.0)) && (fVar1 = param_7[3], ABS(fVar1) < _DAT_146b95e10))
  {
    fVar4 = fVar1 * *(float *)(param_10 + 0x174) * (1.0 - ABS(fVar1) * _DAT_146b95e14) +
            ABS(fVar1) * _DAT_146b95e14 * fVar4;
  }
  fVar2 = fVar4 * param_1 + param_12[0xb];
  fVar1 = fVar2;
  if (0.0 <= -fVar2 - 31.415926) {
    fVar1 = fVar2 + 31.415926;
  }
  fVar3 = fVar2 - 31.415926;
  if (fVar2 - 31.415926 < 0.0) {
    fVar3 = fVar1;
  }
  param_12[0xb] = fVar3;
  param_12[7] = fVar4;
  MXCSR = MXCSR & 0xffffffc0;
  return;
}



// FUNCTION 143960a70 integrateNoDriveWheelRotationAngles body=712 status=ok
// SIG undefined integrateNoDriveWheelRotationAngles(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void physx::integrateNoDriveWheelRotationAngles
               (float param_1,float *param_2,float *param_3,float *param_4,char *param_5,
               longlong param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_7;
  if (((-*(float *)(param_6 + 0xc) < *param_3) && (*param_5 == '\0')) && (*param_2 == 0.0)) {
    fVar1 = ABS(*param_4);
    if (fVar1 < _DAT_146b95e10) {
      fVar1 = fVar1 * _DAT_146b95e14;
      fVar4 = *param_4 * *(float *)(param_6 + 0xe4) * (1.0 - fVar1) + fVar1 * fVar4;
    }
  }
  fVar2 = fVar4 * param_1 + param_7[8];
  fVar1 = fVar2;
  if (0.0 <= -fVar2 - 31.415926) {
    fVar1 = fVar2 + 31.415926;
  }
  fVar3 = fVar2 - 31.415926;
  if (fVar2 - 31.415926 < 0.0) {
    fVar3 = fVar1;
  }
  param_7[8] = fVar3;
  param_7[4] = fVar4;
  fVar4 = param_7[1];
  if (((-*(float *)(param_6 + 0x3c) < param_3[1]) && (param_5[1] == '\0')) && (param_2[1] == 0.0)) {
    fVar1 = ABS(param_4[1]);
    if (fVar1 < _DAT_146b95e10) {
      fVar1 = fVar1 * _DAT_146b95e14;
      fVar4 = param_4[1] * *(float *)(param_6 + 0x114) * (1.0 - fVar1) + fVar1 * fVar4;
    }
  }
  fVar2 = fVar4 * param_1 + param_7[9];
  fVar1 = fVar2;
  if (0.0 <= -fVar2 - 31.415926) {
    fVar1 = fVar2 + 31.415926;
  }
  fVar3 = fVar2 - 31.415926;
  if (fVar2 - 31.415926 < 0.0) {
    fVar3 = fVar1;
  }
  param_7[9] = fVar3;
  param_7[5] = fVar4;
  fVar4 = param_7[2];
  if (((-*(float *)(param_6 + 0x6c) < param_3[2]) && (param_5[2] == '\0')) && (param_2[2] == 0.0)) {
    fVar1 = ABS(param_4[2]);
    if (fVar1 < _DAT_146b95e10) {
      fVar1 = fVar1 * _DAT_146b95e14;
      fVar4 = param_4[2] * *(float *)(param_6 + 0x144) * (1.0 - fVar1) + fVar1 * fVar4;
    }
  }
  fVar2 = fVar4 * param_1 + param_7[10];
  fVar1 = fVar2;
  if (0.0 <= -fVar2 - 31.415926) {
    fVar1 = fVar2 + 31.415926;
  }
  fVar3 = fVar2 - 31.415926;
  if (fVar2 - 31.415926 < 0.0) {
    fVar3 = fVar1;
  }
  param_7[10] = fVar3;
  param_7[6] = fVar4;
  fVar4 = param_7[3];
  if (((-*(float *)(param_6 + 0x9c) < param_3[3]) && (param_5[3] == '\0')) && (param_2[3] == 0.0)) {
    fVar1 = ABS(param_4[3]);
    if (fVar1 < _DAT_146b95e10) {
      fVar1 = fVar1 * _DAT_146b95e14;
      fVar4 = param_4[3] * *(float *)(param_6 + 0x174) * (1.0 - fVar1) + fVar1 * fVar4;
    }
  }
  fVar2 = fVar4 * param_1 + param_7[0xb];
  fVar1 = fVar2;
  if (0.0 <= -fVar2 - 31.415926) {
    fVar1 = fVar2 + 31.415926;
  }
  if (fVar2 - 31.415926 < 0.0) {
    param_7[0xb] = fVar1;
  }
  else {
    param_7[0xb] = fVar2 - 31.415926;
  }
  param_7[7] = fVar4;
  return;
}



// FUNCTION 143960d40 computeWheelLocalPoses body=1814 status=ok
// SIG undefined computeWheelLocalPoses(void)

void physx::computeWheelLocalPoses
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,longlong param_5,
               longlong param_6)

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
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  ulonglong uVar16;
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
  
  fVar1 = *(float *)(param_5 + 0x10);
  fVar2 = *(float *)(param_5 + 0x14);
  fVar3 = *(float *)(param_5 + 0x18);
  if (param_4 != 0) {
    pfVar11 = (float *)(param_1 + 0x18);
    pfVar12 = (float *)(param_1 + 0x288);
    pfVar13 = (float *)(param_6 + 0x18);
    pfVar14 = (float *)(param_3 + 0x80);
    pfVar15 = (float *)(param_2 + 0x20);
    fVar33 = (DAT_146b95ef0 * DAT_146b95f0c - DAT_146b95f10 * DAT_146b95eec) * 2.0;
    uVar16 = (ulonglong)param_4;
    fVar23 = (DAT_146b95f10 * DAT_146b95ee8 - DAT_146b95ef0 * DAT_146b95f08) * 2.0;
    fVar26 = (DAT_146b95f08 * DAT_146b95eec - DAT_146b95f0c * DAT_146b95ee8) * 2.0;
    do {
      fVar29 = DAT_146b95f10;
      fVar25 = DAT_146b95f0c;
      fVar22 = DAT_146b95f08;
      fVar19 = DAT_146b95ef0;
      fVar28 = DAT_146b95ee8;
      fVar4 = pfVar14[-10];
      if (fVar4 <= 0.0) {
        fVar31 = pfVar11[-1] - fVar4 * pfVar11[1] * pfVar11[3];
      }
      else {
        fVar31 = pfVar11[-1] + fVar4 * *pfVar11 * pfVar11[2];
      }
      fVar5 = pfVar12[0x22];
      fVar6 = pfVar12[-2];
      fVar7 = pfVar12[0x23];
      fVar8 = pfVar12[-1];
      fVar9 = pfVar12[0x24];
      fVar10 = *pfVar12;
      fVar18 = *pfVar14;
      fVar17 = ::_guard_xfg_dispatch_icall_nop(fVar18 * 0.5);
      fVar18 = ::_guard_xfg_dispatch_icall_nop(fVar18 * 0.5);
      fVar28 = fVar17 * fVar28;
      fVar30 = fVar17 * DAT_146b95eec;
      fVar17 = fVar17 * fVar19;
      fVar20 = fVar30 * fVar23 + fVar28 * fVar33 + fVar17 * fVar26;
      fVar21 = fVar18 * fVar18 - 0.5;
      fVar19 = ::_guard_xfg_dispatch_icall_nop(fVar31 * 0.5);
      fVar31 = ::_guard_xfg_dispatch_icall_nop(fVar31 * 0.5);
      fVar27 = ((fVar30 * fVar26 - fVar17 * fVar23) * fVar18 + fVar21 * fVar33 + fVar28 * fVar20) *
               fVar19;
      fVar24 = ((fVar28 * fVar23 - fVar30 * fVar33) * fVar18 + fVar21 * fVar26 + fVar17 * fVar20) *
               fVar19;
      fVar19 = ((fVar17 * fVar33 - fVar28 * fVar26) * fVar18 + fVar21 * fVar23 + fVar30 * fVar20) *
               fVar19;
      fVar20 = (fVar31 * fVar28 + fVar27 * fVar18 + fVar19 * fVar17) - fVar24 * fVar30;
      fVar34 = (fVar31 * fVar30 + fVar19 * fVar18 + fVar24 * fVar28) - fVar27 * fVar17;
      fVar22 = fVar22 * 2.0;
      fVar29 = fVar29 * 2.0;
      fVar32 = (fVar31 * fVar17 + fVar24 * fVar18 + fVar27 * fVar30) - fVar19 * fVar28;
      fVar17 = ((fVar31 * fVar18 - fVar27 * fVar28) - fVar19 * fVar30) - fVar24 * fVar17;
      fVar25 = fVar25 * 2.0;
      fVar18 = fVar17 * fVar17 - 0.5;
      fVar31 = fVar34 * fVar25 + fVar20 * fVar22 + fVar32 * fVar29;
      fVar28 = *pfVar15;
      fVar19 = ::_guard_xfg_dispatch_icall_nop(fVar28 * 0.5);
      fVar28 = ::_guard_xfg_dispatch_icall_nop(fVar28 * 0.5);
      fVar24 = ((fVar34 * fVar29 - fVar32 * fVar25) * fVar17 + fVar18 * fVar22 + fVar20 * fVar31) *
               fVar19;
      fVar21 = ((fVar32 * fVar22 - fVar20 * fVar29) * fVar17 + fVar18 * fVar25 + fVar34 * fVar31) *
               fVar19;
      fVar19 = ((fVar20 * fVar25 - fVar34 * fVar22) * fVar17 + fVar18 * fVar29 + fVar32 * fVar31) *
               fVar19;
      pfVar13[-6] = (fVar24 * fVar17 + fVar28 * fVar20 + fVar21 * fVar32) - fVar19 * fVar34;
      pfVar13[-5] = (fVar21 * fVar17 + fVar28 * fVar34 + fVar19 * fVar20) - fVar24 * fVar32;
      pfVar13[-4] = (fVar19 * fVar17 + fVar28 * fVar32 + fVar24 * fVar34) - fVar21 * fVar20;
      pfVar13[-3] = ((fVar28 * fVar17 - fVar24 * fVar20) - fVar21 * fVar34) - fVar19 * fVar32;
      pfVar13[-2] = (fVar1 + fVar5) - fVar4 * fVar6;
      pfVar13[-1] = (fVar2 + fVar7) - fVar4 * fVar8;
      *pfVar13 = (fVar3 + fVar9) - fVar4 * fVar10;
      pfVar11 = pfVar11 + 0xc;
      pfVar13 = pfVar13 + 7;
      pfVar12 = pfVar12 + 3;
      pfVar14 = pfVar14 + 0x28;
      pfVar15 = pfVar15 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}



// FUNCTION 143961460 poseWheels body=191 status=ok
// SIG undefined poseWheels(void)

void physx::poseWheels(longlong param_1,longlong param_2,uint param_3,longlong *param_4)

{
  byte bVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *local_res20;
  undefined8 local_418 [128];
  
  (**(code **)(*param_4 + 0xd0))(param_4,local_418,0x80,0);
  uVar4 = 0;
  if (param_3 != 0) {
    pbVar5 = (byte *)(param_1 + 0x3a0);
    do {
      bVar1 = *pbVar5;
      if (bVar1 != 0xff) {
        if (bVar1 != 0xffffffff) {
          if (bVar1 < 0x80) {
            plVar2 = (longlong *)local_418[bVar1];
          }
          else {
            (**(code **)(*param_4 + 0xd0))(param_4,&local_res20,1);
            plVar2 = local_res20;
          }
          (**(code **)(*plVar2 + 0x88))(plVar2,uVar4 * 0x1c + param_2);
        }
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      pbVar5 = pbVar5 + 1;
    } while (uVar3 < param_3);
  }
  return;
}



// FUNCTION 143961530 updateSingleVehicleAndStoreTelemetryData body=1024 status=ok
// SIG undefined updateSingleVehicleAndStoreTelemetryData(void)

void physx::PxVehicleUpdate::updateSingleVehicleAndStoreTelemetryData
               (undefined4 param_1,float *param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5,undefined8 *param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined4 local_588;
  undefined4 local_578 [60];
  undefined4 local_488 [60];
  undefined1 local_398 [896];
  
  local_5a8 = 0;
  local_5a0 = 0;
  local_598 = 0;
  local_590 = 0;
  local_588 = 0;
  DAT_146b95ee0 = &local_5a8;
  ::_guard_xfg_dispatch_icall_nop(local_398,0,0x370);
  uVar5 = 0;
  uVar4 = uVar5;
  if ((*(uint *)(param_4 + 0x38) & 0x3fffffff) != 0) {
    do {
      uVar6 = (int)uVar4 + 1;
      (&DAT_146b95e40)[uVar4] = local_398 + uVar4 * 0x2c;
      uVar4 = (ulonglong)uVar6;
    } while (uVar6 < (uint)(*(int *)(param_4 + 0x38) << 2));
  }
  uVar6 = *(int *)(param_4 + 0x38) * 4;
  if (uVar6 < 0x14) {
    puVar7 = &DAT_146b95e40 + uVar6;
    for (uVar4 = (ulonglong)(*(int *)(param_4 + 0x38) * -4 + 0x14); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  ::_guard_xfg_dispatch_icall_nop(local_578,0,0xf0);
  DAT_146b95e38 = local_578;
  ::_guard_xfg_dispatch_icall_nop(local_488,0,0xf0);
  DAT_146b95e30 = local_488;
  cVar1 = *(char *)(param_4 + 0xad);
  fVar8 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
  fVar9 = 1.0 / fVar8;
  if (cVar1 == '\0') {
    FUN_143962a00(param_1,param_2,fVar8,fVar9,param_3,param_4,param_5,0);
    if (*(int *)(param_4 + 0x3c) != 0) {
      do {
        PxVehicleGraph::updateTimeSlice(uVar5 * 0x3de0 + param_6[1],local_398 + uVar5 * 0x2c);
        lVar2 = param_6[3];
        uVar6 = (int)uVar5 + 1;
        lVar3 = param_6[2];
        *(undefined4 *)(lVar2 + uVar5 * 0xc) = local_578[uVar5 * 3];
        *(undefined4 *)(lVar2 + 4 + uVar5 * 0xc) = local_578[uVar5 * 3 + 1];
        *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc) = local_578[uVar5 * 3 + 2];
        *(undefined4 *)(lVar3 + uVar5 * 0xc) = local_488[uVar5 * 3];
        *(undefined4 *)(lVar3 + 4 + uVar5 * 0xc) = local_488[uVar5 * 3 + 1];
        *(undefined4 *)(lVar3 + 8 + uVar5 * 0xc) = local_488[uVar5 * 3 + 2];
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_4 + 0x3c));
    }
  }
  else if (cVar1 == '\x01') {
    FUN_1439661d0(param_1,param_2,fVar8,fVar9,param_3,param_4,param_5,0);
    if (*(int *)(param_4 + 0x3c) != 0) {
      do {
        PxVehicleGraph::updateTimeSlice(uVar5 * 0x3de0 + param_6[1],local_398 + uVar5 * 0x2c);
        lVar2 = param_6[3];
        uVar6 = (int)uVar5 + 1;
        lVar3 = param_6[2];
        *(undefined4 *)(lVar2 + uVar5 * 0xc) = local_578[uVar5 * 3];
        *(undefined4 *)(lVar2 + 4 + uVar5 * 0xc) = local_578[uVar5 * 3 + 1];
        *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc) = local_578[uVar5 * 3 + 2];
        *(undefined4 *)(lVar3 + uVar5 * 0xc) = local_488[uVar5 * 3];
        *(undefined4 *)(lVar3 + 4 + uVar5 * 0xc) = local_488[uVar5 * 3 + 1];
        *(undefined4 *)(lVar3 + 8 + uVar5 * 0xc) = local_488[uVar5 * 3 + 2];
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_4 + 0x3c));
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        return;
      }
      FUN_14396b670(param_1,param_2,fVar8,fVar9,param_3,param_4,param_5,0);
      if (*(int *)(param_4 + 0x3c) == 0) {
        return;
      }
      do {
        PxVehicleGraph::updateTimeSlice(uVar5 * 0x3de0 + param_6[1],local_398 + uVar5 * 0x2c);
        lVar2 = param_6[3];
        uVar6 = (int)uVar5 + 1;
        *(undefined4 *)(lVar2 + uVar5 * 0xc) = local_578[uVar5 * 3];
        *(undefined4 *)(lVar2 + 4 + uVar5 * 0xc) = local_578[uVar5 * 3 + 1];
        *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc) = local_578[uVar5 * 3 + 2];
        lVar2 = param_6[2];
        *(undefined4 *)(lVar2 + uVar5 * 0xc) = local_488[uVar5 * 3];
        *(undefined4 *)(lVar2 + 4 + uVar5 * 0xc) = local_488[uVar5 * 3 + 1];
        *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc) = local_488[uVar5 * 3 + 2];
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_4 + 0x3c));
      return;
    }
    FUN_143968dd0(param_1,param_2,fVar8,fVar9,param_3,param_4,param_5,0);
    if (*(int *)(param_4 + 0x3c) != 0) {
      do {
        PxVehicleGraph::updateTimeSlice(uVar5 * 0x3de0 + param_6[1],local_398 + uVar5 * 0x2c);
        lVar2 = param_6[3];
        uVar6 = (int)uVar5 + 1;
        lVar3 = param_6[2];
        *(undefined4 *)(lVar2 + uVar5 * 0xc) = local_578[uVar5 * 3];
        *(undefined4 *)(lVar2 + 4 + uVar5 * 0xc) = local_578[uVar5 * 3 + 1];
        *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc) = local_578[uVar5 * 3 + 2];
        *(undefined4 *)(lVar3 + uVar5 * 0xc) = local_488[uVar5 * 3];
        *(undefined4 *)(lVar3 + 4 + uVar5 * 0xc) = local_488[uVar5 * 3 + 1];
        *(undefined4 *)(lVar3 + 8 + uVar5 * 0xc) = local_488[uVar5 * 3 + 2];
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_4 + 0x3c));
    }
  }
  PxVehicleGraph::updateTimeSlice(*param_6,&local_5a8);
  return;
}



// FUNCTION 143961940 update body=549 status=ok
// SIG undefined update(void)

void physx::PxVehicleUpdate::update
               (undefined4 param_1,float *param_2,undefined8 param_3,uint param_4,longlong *param_5,
               longlong param_6,longlong param_7)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  
  uVar9 = 0;
  DAT_146b95ee0 = 0;
  lVar4 = 2;
  puVar2 = &DAT_146b95e40;
  do {
    puVar3 = puVar2;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    lVar4 = lVar4 + -1;
    puVar2 = puVar3 + 8;
  } while (lVar4 != 0);
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  DAT_146b95e38 = 0;
  DAT_146b95e30 = 0;
  fVar11 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
  fVar10 = 1.0 / fVar11;
  uVar7 = uVar9;
  if (param_4 != 0) {
    do {
      lVar4 = *param_5;
      uVar5 = uVar9;
      if (param_6 != 0) {
        uVar5 = uVar7 * 0x10 + param_6;
      }
      uVar8 = uVar9;
      if (param_7 != 0) {
        uVar8 = param_7 + uVar7 * 0x28;
      }
      cVar1 = *(char *)(lVar4 + 0xad);
      if (cVar1 == '\0') {
        FUN_143962a00(param_1,param_2,fVar11,fVar10,param_3,lVar4,uVar5,uVar8);
      }
      else if (cVar1 == '\x01') {
        FUN_1439661d0(param_1,param_2,fVar11,fVar10,param_3,lVar4,uVar5,uVar8);
      }
      else if (cVar1 == '\x02') {
        FUN_143968dd0(param_1,param_2,fVar11,fVar10,param_3,lVar4,uVar5,uVar8);
      }
      else if (cVar1 == '\x03') {
        FUN_14396b670(param_1,param_2,fVar11,fVar10,param_3,lVar4,uVar5,uVar8);
      }
      uVar6 = (int)uVar7 + 1;
      param_5 = param_5 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < param_4);
  }
  return;
}



// FUNCTION 143961b70 updatePost body=1075 status=ok
// SIG undefined updatePost(void)

void physx::PxVehicleUpdate::updatePost(longlong *param_1,uint param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  byte *pbVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint local_4f8;
  undefined8 local_4f4;
  undefined8 local_4ec;
  ulonglong local_4e0;
  ulonglong local_4d8;
  undefined4 local_4c8 [4];
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  longlong *local_458;
  longlong local_450;
  undefined8 local_448 [129];
  
  if (param_2 != 0) {
    uVar15 = (ulonglong)param_2;
    do {
      lVar9 = *param_3;
      plVar3 = *(longlong **)(lVar9 + 0xa0);
      if (*(char *)((longlong)param_1 + 0x24) == '\0') {
        local_4d8 = uVar15;
        local_450 = lVar9;
        if (*(char *)((longlong)param_1 + 0x25) != '\0') {
          (**(code **)(*plVar3 + 0x240))(plVar3);
        }
        if (DAT_146b95e00 == '\0') {
          (**(code **)(*plVar3 + 0x130))(plVar3,(longlong)param_1 + 0xc,0);
          (**(code **)(*plVar3 + 0x140))(plVar3,param_1 + 3,0);
        }
        else {
          (**(code **)(*plVar3 + 0x148))(plVar3,(longlong)param_1 + 0xc,3);
          (**(code **)(*plVar3 + 0x150))(plVar3,param_1 + 3,3);
        }
        uVar2 = *(uint *)(lVar9 + 0x3c);
        uVar12 = *(uint *)(lVar9 + 0x38);
        uVar11 = (ulonglong)uVar12;
        local_4f4 = 0;
        local_4ec = 0;
        local_4f8 = 4;
        if (uVar2 < 4) {
          local_4f8 = uVar2;
        }
        if (1 < uVar12 - 1) {
          puVar13 = &local_4f4;
          for (uVar5 = (ulonglong)(uVar12 - 2); uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)puVar13 = 4;
            puVar13 = (undefined8 *)((longlong)puVar13 + 4);
          }
        }
        (&local_4f8)[uVar12 - 1] = uVar2 + (1 - uVar12) * 4;
        if (uVar12 != 0) {
          puVar6 = &local_4f8;
          local_4e0 = uVar11;
          lVar14 = 0;
          lVar16 = 0x80;
          do {
            lVar4 = *param_1;
            uVar12 = *puVar6;
            lVar9 = *(longlong *)(lVar9 + 0x30);
            local_4c8[0] = *(undefined4 *)(lVar4 + -0x80 + lVar16);
            local_4c8[1] = *(undefined4 *)(lVar4 + -0x7c + lVar16);
            local_4c8[2] = *(undefined4 *)(lVar4 + -0x78 + lVar16);
            local_4c8[3] = *(undefined4 *)(lVar4 + -0x74 + lVar16);
            local_4b8 = *(undefined4 *)(lVar4 + -0x70 + lVar16);
            local_4b4 = *(undefined4 *)(lVar4 + -0x6c + lVar16);
            local_4b0 = *(undefined4 *)(lVar4 + -0x68 + lVar16);
            local_4ac = *(undefined4 *)(lVar4 + -0x40 + lVar16);
            local_4a8 = *(undefined4 *)(lVar4 + -0x3c + lVar16);
            local_4a4 = *(undefined4 *)(lVar4 + -0x38 + lVar16);
            local_4a0 = *(undefined4 *)(lVar4 + -0x34 + lVar16);
            local_49c = *(undefined4 *)(lVar4 + -0x30 + lVar16);
            local_498 = *(undefined4 *)(lVar4 + -0x2c + lVar16);
            local_494 = *(undefined4 *)(lVar4 + -0x28 + lVar16);
            local_490 = *(undefined4 *)(lVar4 + lVar16);
            local_48c = *(undefined4 *)(lVar4 + 4 + lVar16);
            local_488 = *(undefined4 *)(lVar4 + 8 + lVar16);
            local_484 = *(undefined4 *)(lVar4 + 0xc + lVar16);
            local_480 = *(undefined4 *)(lVar4 + 0x10 + lVar16);
            local_47c = *(undefined4 *)(lVar4 + 0x14 + lVar16);
            local_478 = *(undefined4 *)(lVar4 + 0x18 + lVar16);
            local_474 = *(undefined4 *)(lVar4 + 0x40 + lVar16);
            local_470 = *(undefined4 *)(lVar4 + 0x44 + lVar16);
            local_46c = *(undefined4 *)(lVar4 + 0x48 + lVar16);
            local_468 = *(undefined4 *)(lVar4 + 0x4c + lVar16);
            local_464 = *(undefined4 *)(lVar4 + 0x50 + lVar16);
            local_460 = *(undefined4 *)(lVar4 + 0x54 + lVar16);
            local_45c = *(undefined4 *)(lVar4 + 0x58 + lVar16);
            local_4e0 = uVar11;
            (**(code **)(*plVar3 + 0xd0))(plVar3,local_448);
            uVar15 = 0;
            if (uVar12 != 0) {
              pbVar10 = (byte *)(lVar14 + 0x3a0 + lVar9);
              do {
                bVar1 = *pbVar10;
                if (bVar1 != 0xff) {
                  if (bVar1 != 0xffffffff) {
                    if (bVar1 < 0x80) {
                      plVar7 = (longlong *)local_448[bVar1];
                    }
                    else {
                      (**(code **)(*plVar3 + 0xd0))(plVar3,&local_458);
                      plVar7 = local_458;
                    }
                    (**(code **)(*plVar7 + 0x88))(plVar7,local_4c8 + uVar15 * 7);
                  }
                }
                uVar8 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar8;
                pbVar10 = pbVar10 + 1;
                uVar11 = local_4e0;
              } while (uVar8 < uVar12);
            }
            lVar16 = lVar16 + 0x100;
            puVar6 = puVar6 + 1;
            lVar14 = lVar14 + 0x3b0;
            uVar11 = uVar11 - 1;
            local_4e0 = uVar11;
            lVar9 = local_450;
            uVar15 = local_4d8;
          } while (uVar11 != 0);
        }
        uVar11 = 0;
        if (uVar2 != 0) {
          lVar9 = 0;
          do {
            lVar14 = *param_1;
            lVar16 = *(longlong *)(lVar14 + 0x20 + lVar9);
            if (lVar16 != 0) {
              PxRigidBodyExt::addForceAtPos
                        (lVar16,lVar14 + uVar11 * 0x40 + 0x28,lVar14 + 0x34 + uVar11 * 0x40,0,1);
            }
            uVar12 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar12;
            lVar9 = lVar9 + 0x40;
          } while (uVar12 < uVar2);
        }
      }
      param_3 = param_3 + 1;
      param_1 = param_1 + 5;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}



// FUNCTION 143961fb0 suspensionRaycasts body=1174 status=ok
// SIG undefined suspensionRaycasts(void)

void physx::PxVehicleUpdate::suspensionRaycasts
               (undefined8 *param_1,uint param_2,longlong *param_3,uint param_4,ulonglong param_5,
               char *param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  undefined1 local_res13;
  longlong *local_res18;
  uint local_res20;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  ulonglong local_e0;
  uint local_d8;
  longlong local_d0;
  undefined8 local_c8;
  char *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined2 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  
  uVar7 = (ulonglong)param_4;
  if (param_4 != 0) {
    puVar2 = (undefined1 *)(param_5 + 0x59);
    uVar11 = (ulonglong)param_4;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0x60;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  puVar3 = &uStack_90;
  lVar4 = 4;
  do {
    *puVar3 = 0;
    puVar3[-1] = 0;
    *(undefined2 *)(puVar3 + 1) = 3;
    *(undefined1 *)((longlong)puVar3 + 10) = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 0x14);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  local_88 = 7;
  local_74 = 7;
  local_60 = 7;
  local_4c = 7;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_2 != 0) {
    local_e0 = (ulonglong)param_2;
    uVar11 = param_5;
    pcVar14 = param_6;
    do {
      uVar6 = 0;
      local_a8 = *local_res18;
      uVar1 = *(uint *)(local_a8 + 0x3c);
      lVar4 = *(longlong *)(local_a8 + 0x30);
      lVar12 = *(longlong *)(local_a8 + 0x70);
      local_c8 = *(undefined8 *)(local_a8 + 0xa0);
      uVar13 = uVar1 >> 2;
      local_d8 = uVar1 + uVar13 * -4;
      local_d0 = lVar4;
      local_c0 = pcVar14;
      local_b8 = lVar12;
      if (uVar1 >> 2 != 0) {
        lVar10 = local_a8 + 0x50;
        puVar8 = (ulonglong *)(lVar12 + 0x1d8);
        uVar15 = 2;
        puVar3 = (undefined8 *)(lVar4 + 0x370);
        uVar7 = uVar11;
        local_b0 = lVar10;
        do {
          local_res10 = (*(uint *)(lVar10 + (ulonglong)(uVar15 - 2 >> 5) * 4) >> (uVar15 - 2 & 0x1f)
                        & 1) != 0;
          local_res11 = (*(uint *)(lVar10 + (ulonglong)(uVar15 - 1 >> 5) * 4) >> (uVar15 - 1 & 0x1f)
                        & 1) != 0;
          local_res12 = (*(uint *)(lVar10 + (ulonglong)(uVar15 >> 5) * 4) >> (uVar15 & 0x1f) & 1) !=
                        0;
          local_res13 = (*(uint *)(lVar10 + (ulonglong)(uVar15 + 1 >> 5) * 4) >> (uVar15 + 1 & 0x1f)
                        & 1) != 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          if (((param_6 == (char *)0x0) || (uVar11 = uVar7, *pcVar14 != '\0')) &&
             (uVar11 = uVar7 + 0x180, pcVar14 = local_c0,
             uVar11 <= (ulonglong)local_res20 * 0x60 + param_5)) {
            local_98 = puVar3[-2];
            uStack_90 = puVar3[-1];
            local_84 = *puVar3;
            uStack_7c = puVar3[1];
            *puVar8 = uVar7;
            local_70 = puVar3[2];
            uStack_68 = puVar3[3];
            local_5c = *(undefined4 *)(puVar3 + 4);
            uStack_58 = *(undefined4 *)((longlong)puVar3 + 0x24);
            uStack_54 = *(undefined4 *)(puVar3 + 5);
            uStack_50 = *(undefined4 *)((longlong)puVar3 + 0x2c);
            PxVehicleWheels4SuspensionRaycasts
                      (param_1,uVar6 * 0x3b0 + lVar4,uVar6 * 0x220 + lVar12,&local_98,&local_res10,4
                       ,local_c8);
            lVar10 = local_b0;
            lVar12 = local_b8;
            pcVar14 = local_c0;
          }
          uVar9 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar9;
          uVar15 = uVar15 + 4;
          puVar3 = puVar3 + 0x76;
          puVar8 = puVar8 + 0x44;
          uVar7 = uVar11;
        } while (uVar9 < uVar13);
        uVar7 = (ulonglong)local_res20;
      }
      uVar15 = uVar13 * 4;
      uVar6 = uVar11;
      if (local_d8 != 0) {
        local_e8 = (*(uint *)(local_a8 + 0x50 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar15 & 0x1f) & 1)
                   != 0;
        local_e7 = (*(uint *)(local_a8 + 0x50 + (ulonglong)(uVar15 + 1 >> 5) * 4) >>
                    (uVar15 + 1 & 0x1f) & 1) != 0;
        local_e6 = (*(uint *)(local_a8 + 0x50 + (ulonglong)(uVar15 + 2 >> 5) * 4) >>
                    (uVar15 + 2 & 0x1f) & 1) != 0;
        local_e5 = (*(uint *)(local_a8 + 0x50 + (ulonglong)(uVar15 + 3 >> 5) * 4) >>
                    (uVar15 + 3 & 0x1f) & 1) != 0;
        uVar5 = (ulonglong)uVar13;
        lVar12 = uVar5 * 0x220 + lVar12;
        *(undefined8 *)(lVar12 + 0x1d8) = 0;
        *(undefined8 *)(lVar12 + 0x1e0) = 0;
        if (((param_6 == (char *)0x0) || (*pcVar14 != '\0')) &&
           (uVar6 = (ulonglong)local_d8 * 0x60 + uVar11, uVar6 <= uVar7 * 0x60 + param_5)) {
          if (local_d8 != 0) {
            puVar3 = (undefined8 *)(uVar5 * 0x3b0 + 0x360 + local_d0);
            local_98 = *puVar3;
            uStack_90 = puVar3[1];
          }
          if (1 < local_d8) {
            puVar3 = (undefined8 *)(uVar5 * 0x3b0 + 0x370 + local_d0);
            local_84 = *puVar3;
            uStack_7c = puVar3[1];
          }
          if (2 < local_d8) {
            puVar3 = (undefined8 *)(uVar5 * 0x3b0 + 0x380 + local_d0);
            local_70 = *puVar3;
            uStack_68 = puVar3[1];
          }
          *(ulonglong *)(lVar12 + 0x1d8) = uVar11;
          PxVehicleWheels4SuspensionRaycasts
                    (param_1,uVar5 * 0x3b0 + local_d0,lVar12,&local_98,&local_e8,local_d8,local_c8);
        }
      }
      pcVar14 = pcVar14 + 1;
      local_res18 = local_res18 + 1;
      local_e0 = local_e0 - 1;
      uVar11 = uVar6;
    } while (local_e0 != 0);
    local_e0 = 0;
    local_c0 = pcVar14;
  }
  (**(code **)*param_1)(param_1);
  return;
}



// FUNCTION 143962450 suspensionSweeps body=1438 status=ok
// SIG undefined suspensionSweeps(void)

void physx::PxVehicleUpdate::suspensionSweeps
               (undefined8 *param_1,uint param_2,longlong *param_3,uint param_4,ulonglong param_5,
               undefined2 param_6,char *param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  char *pcVar12;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  undefined1 local_res13;
  longlong *local_res18;
  uint local_res20;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  uint local_164;
  uint local_160;
  char *local_158;
  undefined4 *local_150;
  longlong local_148;
  longlong local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 local_128;
  ulonglong local_120;
  longlong local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined2 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined2 local_bc;
  undefined4 local_b8 [30];
  
  if (param_4 != 0) {
    puVar2 = (undefined1 *)(param_5 + 0x59);
    uVar8 = (ulonglong)param_4;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0x60;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  lVar4 = 4;
  puVar3 = &uStack_100;
  do {
    *puVar3 = 0;
    puVar3[-1] = 0;
    *(undefined2 *)(puVar3 + 1) = 3;
    *(undefined1 *)((longlong)puVar3 + 10) = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 0x14);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  local_f8 = 0xf;
  local_e4 = 0xf;
  local_d0 = 0xf;
  local_bc = 0xf;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_2 != 0) {
    local_120 = (ulonglong)param_2;
    uVar8 = param_5;
    pcVar12 = param_7;
    do {
      lVar4 = *local_res18;
      local_130 = *(longlong *)(lVar4 + 0x70);
      uVar6 = *(uint *)(lVar4 + 0x3c);
      lVar10 = *(longlong *)(lVar4 + 0x30);
      local_164 = uVar6 >> 2;
      uVar11 = uVar6 + local_164 * -4;
      local_128 = *(undefined8 *)(lVar4 + 0xa0);
      local_160 = uVar11;
      local_158 = pcVar12;
      local_118 = lVar10;
      ::_guard_xfg_dispatch_icall_nop(local_b8,0xff,0x50);
      uVar5 = 0;
      if (uVar6 != 0) {
        do {
          uVar1 = PxVehicleWheelsSimData::getWheelShapeMapping(lVar4 + 0x10,uVar5);
          uVar6 = (int)uVar5 + 1;
          local_b8[uVar5] = uVar1;
          uVar5 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(lVar4 + 0x3c));
      }
      if (local_164 != 0) {
        local_150 = local_b8;
        uVar6 = 2;
        puVar3 = (undefined8 *)(lVar10 + 0x370);
        puVar7 = (ulonglong *)(local_130 + 0x1e0);
        uVar9 = 2;
        local_148 = local_130;
        local_140 = lVar10;
        local_138 = (ulonglong)local_164;
        uVar5 = uVar8;
        do {
          local_res10 = (*(uint *)(lVar4 + 0x50 + (uVar9 - 2 >> 5) * 4) >> (uVar6 - 2 & 0x1f) & 1)
                        != 0;
          local_res11 = (*(uint *)(lVar4 + 0x50 + (uVar9 - 1 >> 5) * 4) >> (uVar6 - 1 & 0x1f) & 1)
                        != 0;
          local_res12 = (*(uint *)(lVar4 + 0x50 + (uVar9 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0;
          local_res13 = (*(uint *)(lVar4 + 0x50 + (uVar9 + 1 >> 5) * 4) >> (uVar6 + 1 & 0x1f) & 1)
                        != 0;
          puVar7[-1] = 0;
          *puVar7 = 0;
          if (((param_7 == (char *)0x0) || (uVar8 = uVar5, *local_158 != '\0')) &&
             (uVar8 = uVar5 + 0x180, uVar8 <= (ulonglong)local_res20 * 0x60 + param_5)) {
            local_108 = puVar3[-2];
            uStack_100 = puVar3[-1];
            local_f4 = *puVar3;
            uStack_ec = puVar3[1];
            *puVar7 = uVar5;
            local_e0 = puVar3[2];
            uStack_d8 = puVar3[3];
            local_cc = *(undefined4 *)(puVar3 + 4);
            uStack_c8 = *(undefined4 *)((longlong)puVar3 + 0x24);
            uStack_c4 = *(undefined4 *)(puVar3 + 5);
            uStack_c0 = *(undefined4 *)((longlong)puVar3 + 0x2c);
            FUN_14396e000(param_1,local_140,local_148,&local_108,&local_res10,4,param_6,local_150,
                          local_128,param_8,param_9);
          }
          local_150 = local_150 + 4;
          local_148 = local_148 + 0x220;
          local_140 = local_140 + 0x3b0;
          uVar6 = uVar6 + 4;
          uVar9 = uVar9 + 4;
          puVar3 = puVar3 + 0x76;
          puVar7 = puVar7 + 0x44;
          local_138 = local_138 - 1;
          uVar5 = uVar8;
        } while (local_138 != 0);
        local_138 = 0;
        lVar10 = local_118;
        pcVar12 = local_158;
        uVar11 = local_160;
      }
      uVar5 = uVar8;
      if (uVar11 != 0) {
        uVar6 = local_164 * 4;
        local_168 = (*(uint *)(lVar4 + 0x50 + (ulonglong)((local_164 & 0x3fffffff) >> 3) * 4) >>
                     (uVar6 & 0x1f) & 1) != 0;
        local_167 = (*(uint *)(lVar4 + 0x50 + (ulonglong)(uVar6 + 1 >> 5) * 4) >> (uVar6 + 1 & 0x1f)
                    & 1) != 0;
        local_166 = (*(uint *)(lVar4 + 0x50 + (ulonglong)(uVar6 + 2 >> 5) * 4) >> (uVar6 + 2 & 0x1f)
                    & 1) != 0;
        local_165 = (*(uint *)(lVar4 + 0x50 + (ulonglong)(uVar6 + 3 >> 5) * 4) >> (uVar6 + 3 & 0x1f)
                    & 1) != 0;
        uVar9 = (ulonglong)local_164;
        lVar4 = uVar9 * 0x220 + local_130;
        *(undefined8 *)(lVar4 + 0x1d8) = 0;
        *(undefined8 *)(lVar4 + 0x1e0) = 0;
        if (((param_7 == (char *)0x0) || (*pcVar12 != '\0')) &&
           (uVar5 = (ulonglong)uVar11 * 0x60 + uVar8,
           uVar5 <= (ulonglong)local_res20 * 0x60 + param_5)) {
          if (uVar11 != 0) {
            puVar3 = (undefined8 *)(uVar9 * 0x3b0 + 0x360 + lVar10);
            local_108 = *puVar3;
            uStack_100 = puVar3[1];
          }
          if (1 < uVar11) {
            puVar3 = (undefined8 *)(uVar9 * 0x3b0 + 0x370 + lVar10);
            local_f4 = *puVar3;
            uStack_ec = puVar3[1];
          }
          if (2 < uVar11) {
            puVar3 = (undefined8 *)(uVar9 * 0x3b0 + 0x380 + lVar10);
            local_e0 = *puVar3;
            uStack_d8 = puVar3[1];
          }
          *(undefined8 *)(lVar4 + 0x1d8) = 0;
          *(ulonglong *)(lVar4 + 0x1e0) = uVar8;
          FUN_14396e000(param_1,uVar9 * 0x3b0 + lVar10,lVar4,&local_108,&local_168,uVar11,param_6,
                        local_b8 + uVar6,local_128,param_8,param_9);
        }
      }
      pcVar12 = pcVar12 + 1;
      local_res18 = local_res18 + 1;
      local_120 = local_120 - 1;
      uVar8 = uVar5;
    } while (local_120 != 0);
    local_120 = 0;
    local_158 = pcVar12;
  }
  (**(code **)*param_1)(param_1);
  return;
}



// FUNCTION 143962a00 FUN_143962a00 body=14226 status=ok
// SIG undefined FUN_143962a00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143962a00(float param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,longlong param_6,undefined8 *param_7,undefined8 *param_8)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  uint uVar17;
  float *pfVar18;
  uint uVar19;
  undefined4 *puVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  longlong lVar27;
  longlong lVar28;
  float fVar29;
  undefined4 uVar30;
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
  float *pfVar42;
  undefined1 *puVar43;
  float *pfVar44;
  float *pfVar45;
  float *pfVar46;
  uint local_26f8;
  undefined4 local_26dc;
  float local_26d8;
  uint local_26d0;
  uint local_26cc;
  undefined1 local_26c8;
  undefined1 local_26c7;
  undefined1 local_26c6;
  undefined1 local_26c5;
  float local_26c4;
  float local_26c0;
  float fStack_26bc;
  float fStack_26b8;
  float fStack_26b4;
  undefined1 local_26b0;
  undefined1 local_26af;
  undefined1 local_26ae;
  undefined1 local_26ad;
  float local_26ac;
  float local_26a8;
  float local_26a4;
  float local_26a0;
  float local_269c;
  longlong local_2698;
  float local_2688;
  undefined1 local_2684;
  undefined1 local_2683;
  undefined1 local_2682;
  undefined1 local_2681;
  undefined4 local_2680;
  undefined1 local_267c;
  undefined1 local_267b;
  undefined1 local_267a;
  undefined1 local_2679;
  float local_2678;
  float local_2674;
  float local_2670;
  undefined8 *local_2668;
  uint local_2660;
  undefined8 local_265c;
  undefined8 uStack_2654;
  undefined8 local_264c;
  undefined2 local_2644;
  ulonglong local_2640;
  float local_2638;
  float local_2634;
  float local_2630;
  uint local_262c;
  undefined1 local_2628 [4];
  float local_2624;
  float local_2620;
  float local_261c;
  float local_2618;
  float local_2614;
  float local_2610;
  float local_260c;
  uint local_2608;
  undefined8 local_25f8;
  undefined8 uStack_25f0;
  undefined8 local_25e8;
  undefined4 local_25e0;
  undefined4 uStack_25dc;
  undefined4 uStack_25d8;
  undefined4 uStack_25d4;
  undefined4 uStack_25d0;
  undefined4 uStack_25cc;
  undefined8 local_25c8;
  undefined8 local_25c0;
  undefined4 local_25b8;
  undefined8 local_25b4;
  undefined8 local_25ac;
  undefined8 local_25a4;
  undefined4 local_259c;
  undefined8 local_2598;
  undefined8 local_2590;
  float *local_2588;
  float local_2580;
  float local_257c;
  float local_2578;
  float local_2570;
  float local_256c;
  float local_2568;
  float local_2560;
  float local_255c;
  float local_2558;
  float local_2550;
  float local_254c;
  float local_2548;
  float local_2544;
  float local_2540;
  float local_253c;
  float local_2538;
  float local_2530;
  float local_252c;
  float local_2528;
  float local_2524;
  longlong *local_2520;
  undefined4 local_2518;
  float local_2514;
  float local_2510;
  undefined8 local_2508;
  undefined8 uStack_2500;
  undefined8 local_24f8;
  undefined4 uStack_24f0;
  undefined4 uStack_24ec;
  undefined4 local_24e8;
  undefined4 uStack_24e4;
  undefined4 uStack_24e0;
  undefined4 uStack_24dc;
  undefined8 local_24d8;
  undefined8 uStack_24d0;
  undefined8 local_24c8;
  undefined8 uStack_24c0;
  undefined8 local_24b8;
  undefined8 uStack_24b0;
  undefined8 local_24a8;
  undefined8 uStack_24a0;
  float local_2498;
  float local_2494;
  float local_2490;
  uint local_2488;
  undefined8 local_2484;
  undefined8 local_247c;
  float local_2470;
  uint local_2460;
  float local_245c;
  undefined4 local_2458;
  undefined4 local_2454;
  float local_2450;
  float local_244c;
  float local_2448;
  undefined8 *local_2440;
  float *local_2438;
  float local_2430;
  longlong local_2428;
  undefined8 local_2420;
  undefined8 uStack_2418;
  float local_2410;
  float local_240c;
  float local_2408;
  undefined8 local_2400;
  undefined8 uStack_23f8;
  float local_23f0;
  float local_23ec;
  float local_23e8;
  float local_23e4;
  longlong *local_23e0;
  float local_23d8;
  float local_23d4;
  float local_23d0;
  float local_23cc;
  float local_23c8;
  float local_23c4;
  float local_23c0;
  float local_23bc;
  undefined4 local_23b8;
  undefined4 local_23b4;
  undefined4 local_23b0;
  undefined4 local_23a8;
  undefined4 local_23a4;
  undefined4 local_23a0;
  undefined4 local_239c;
  float local_2398;
  float local_2394;
  float local_2390;
  float local_238c;
  longlong local_2378;
  float local_2370;
  float local_236c;
  float local_2368;
  float local_2364;
  float local_2360;
  float local_235c;
  undefined4 local_2358;
  undefined4 local_2354;
  undefined1 local_2350;
  undefined4 local_234c;
  longlong *local_2348;
  undefined8 local_2340;
  char local_2338 [8];
  undefined4 *local_2330;
  undefined1 *local_2328;
  undefined8 *local_2320;
  undefined1 *local_2318;
  float local_2310;
  float local_230c;
  float local_2308;
  float local_2304;
  float local_2300;
  float local_22fc;
  float local_22f8;
  float local_22f4;
  float local_22f0;
  float local_22ec;
  float local_22e8;
  float local_22e4;
  float local_22e0;
  undefined4 *local_22d8;
  undefined4 *local_22d0;
  longlong local_22c8;
  float *local_22c0;
  undefined1 *local_22b8;
  longlong local_22b0;
  uint local_22a8;
  char local_2298 [8];
  undefined4 *local_2290;
  undefined1 *local_2288;
  undefined4 *local_2280;
  undefined1 *local_2278;
  float local_2270;
  float local_226c;
  float local_2268;
  float local_2264;
  float local_2260;
  float local_225c;
  float local_2258;
  float local_2254;
  float local_2250;
  float local_224c;
  float local_2248;
  float local_2244;
  float local_2240;
  undefined4 *local_2238;
  undefined4 *local_2230;
  longlong local_2228;
  float *local_2220;
  undefined1 *local_2218;
  longlong local_2210;
  uint local_2208;
  float *local_21f8;
  float *local_21f0;
  float local_21e8;
  float local_21e4;
  float local_21e0;
  undefined4 local_21dc;
  float local_21d8;
  undefined4 local_21d4;
  undefined4 local_21d0;
  float local_21cc;
  float local_21c8;
  float *local_21c0;
  float *local_21b8;
  float *local_21b0;
  undefined1 *local_21a8;
  undefined1 *local_21a0;
  undefined4 local_2198;
  undefined4 local_2194;
  longlong local_2190;
  float *local_2188;
  undefined1 local_2178 [112];
  undefined1 local_2108 [104];
  undefined4 local_20a0 [32];
  undefined8 local_2020;
  undefined8 uStack_2018;
  undefined1 local_1f80 [16];
  undefined1 local_1f70 [16];
  float local_1f60;
  float local_1f5c;
  float local_1f58;
  float local_1f54;
  float local_1f50;
  float local_1f4c;
  float local_1f48;
  float fStack_1f44;
  float fStack_1f40;
  float fStack_1f3c;
  float local_1f38;
  float fStack_1f34;
  float fStack_1f30;
  float fStack_1f2c;
  undefined4 local_1f28;
  undefined4 local_1f24;
  undefined4 local_1f20;
  undefined4 local_1f1c;
  undefined4 local_1f18;
  undefined4 local_1f14;
  undefined4 local_1f10;
  undefined4 local_1f0c;
  undefined4 local_1f08;
  undefined4 local_1f04;
  undefined4 local_1f00;
  undefined4 local_1efc;
  undefined4 local_1ef8;
  undefined4 local_1ef4;
  undefined4 local_1ef0;
  undefined4 local_1eec;
  undefined4 local_1ee8;
  undefined4 local_1ee4;
  undefined4 local_1ee0;
  undefined4 local_1edc;
  undefined4 local_1ed8;
  undefined4 local_1ed4;
  undefined4 local_1ed0;
  undefined4 local_1ecc;
  undefined4 local_1ec8;
  undefined4 local_1ec4;
  undefined4 local_1ec0;
  undefined4 local_1ebc;
  undefined1 local_1eb8;
  undefined1 local_1eb7;
  undefined1 local_1eb6;
  undefined1 local_1eb5;
  undefined4 local_1eb4;
  undefined4 local_1eb0;
  undefined4 local_1eac;
  undefined4 local_1ea8;
  undefined4 local_1ea4;
  undefined4 local_1ea0;
  undefined4 local_1e9c;
  undefined4 local_1e98;
  undefined4 local_1e94;
  undefined4 local_1e90;
  undefined4 local_1e8c;
  undefined4 local_1e88;
  undefined4 local_1e84;
  undefined4 local_1e80;
  undefined4 local_1e7c;
  undefined4 local_1e78;
  undefined4 local_1e74;
  undefined4 local_1e70;
  undefined4 local_1e6c;
  undefined4 local_1e68;
  undefined4 local_1e64;
  undefined4 local_1e60;
  undefined4 local_1e5c;
  undefined4 local_1e58;
  undefined4 local_1e54;
  undefined4 local_1e50;
  undefined4 local_1e4c;
  undefined4 local_1e48;
  undefined1 local_1e44;
  undefined1 local_1e43;
  undefined1 local_1e42;
  undefined1 local_1e41;
  undefined4 local_1e40;
  undefined4 local_1e3c;
  undefined4 local_1e38;
  undefined4 local_1e34;
  undefined4 local_1e30;
  undefined4 local_1e2c;
  undefined4 local_1e28;
  undefined4 local_1e24;
  undefined4 local_1e20;
  undefined4 local_1e1c;
  undefined4 local_1e18;
  undefined4 local_1e14;
  undefined4 local_1e10;
  undefined4 local_1e0c;
  undefined4 local_1e08;
  undefined4 local_1e04;
  undefined4 local_1e00;
  undefined4 local_1dfc;
  undefined4 local_1df8;
  undefined4 local_1df4;
  undefined4 local_1df0;
  undefined4 local_1dec;
  undefined4 local_1de8;
  undefined4 local_1de4;
  undefined4 local_1de0;
  undefined4 local_1ddc;
  undefined4 local_1dd8;
  undefined4 local_1dd4;
  undefined1 local_1dd0;
  undefined1 local_1dcf;
  undefined1 local_1dce;
  undefined1 local_1dcd;
  undefined2 local_1dcc;
  undefined2 local_1dc8;
  undefined2 local_1dc4;
  undefined2 local_1dc0;
  undefined8 local_1dbc;
  undefined8 uStack_1db4;
  undefined8 local_1dac;
  undefined8 uStack_1da4;
  undefined8 local_1d9c;
  undefined8 uStack_1d94;
  undefined8 local_1d8c;
  undefined8 uStack_1d84;
  float local_1d7c;
  float local_1d78;
  float local_1d74;
  float local_1d70;
  undefined8 local_1d6c;
  undefined8 uStack_1d64;
  undefined2 local_1d5c;
  undefined2 local_1d5a;
  undefined2 local_1d58;
  undefined2 local_1d56;
  undefined1 local_1cc8 [112];
  undefined1 local_1c58 [104];
  undefined4 local_1bf0 [32];
  undefined8 local_1b70;
  undefined8 uStack_1b68;
  undefined1 local_1ad0 [32];
  float local_1ab0;
  float local_1aac;
  float local_1aa8;
  float local_1aa4;
  float local_1aa0;
  float local_1a9c;
  float local_1a98;
  float fStack_1a94;
  float fStack_1a90;
  float fStack_1a8c;
  float local_1a88;
  float fStack_1a84;
  float fStack_1a80;
  float fStack_1a7c;
  undefined8 local_1a78;
  undefined8 uStack_1a70;
  undefined8 local_1a68;
  undefined8 uStack_1a60;
  undefined8 local_1a58;
  undefined8 uStack_1a50;
  undefined8 local_1a48;
  undefined8 uStack_1a40;
  undefined8 local_1a38;
  undefined8 uStack_1a30;
  undefined8 local_1a28;
  undefined8 uStack_1a20;
  undefined8 local_1a18;
  undefined8 uStack_1a10;
  undefined1 local_1a08;
  undefined1 local_1a07;
  undefined1 local_1a06;
  undefined1 local_1a05;
  undefined8 local_1a04;
  undefined8 uStack_19fc;
  undefined8 local_19f4;
  undefined8 uStack_19ec;
  undefined8 local_19e4;
  undefined8 uStack_19dc;
  undefined8 local_19d4;
  undefined8 uStack_19cc;
  undefined8 local_19c4;
  undefined8 uStack_19bc;
  undefined8 local_19b4;
  undefined8 uStack_19ac;
  undefined8 local_19a4;
  undefined8 uStack_199c;
  undefined1 local_1994;
  undefined1 local_1993;
  undefined1 local_1992;
  undefined1 local_1991;
  undefined8 local_1990;
  undefined8 uStack_1988;
  undefined8 local_1980;
  undefined8 uStack_1978;
  undefined8 local_1970;
  undefined8 uStack_1968;
  undefined8 local_1960;
  undefined8 uStack_1958;
  undefined8 local_1950;
  undefined8 uStack_1948;
  undefined8 local_1940;
  undefined8 uStack_1938;
  undefined8 local_1930;
  undefined8 uStack_1928;
  undefined1 local_1920;
  undefined1 local_191f;
  undefined1 local_191e;
  undefined1 local_191d;
  undefined2 local_191c;
  undefined2 local_1918;
  undefined2 local_1914;
  undefined2 local_1910;
  undefined8 local_190c;
  undefined8 uStack_1904;
  undefined8 local_18fc;
  undefined8 uStack_18f4;
  undefined8 local_18ec;
  undefined8 uStack_18e4;
  undefined8 local_18dc;
  undefined8 uStack_18d4;
  float local_18cc;
  float local_18c8;
  float local_18c4;
  float local_18c0;
  undefined8 local_18bc;
  undefined8 uStack_18b4;
  undefined2 local_18ac;
  undefined2 local_18aa;
  undefined2 local_18a8;
  undefined2 local_18a6;
  float local_17d8 [5];
  float local_17c4;
  float afStack_17c0 [14];
  uint local_1788;
  float local_1774;
  float local_176c;
  float local_1768;
  float local_1764;
  float local_175c;
  float local_1758 [32];
  float local_16d8;
  undefined4 local_16c8;
  undefined4 local_16c4;
  undefined4 local_16c0;
  float local_16b8 [32];
  float local_1638 [32];
  undefined8 local_15b8;
  undefined8 uStack_15b0;
  undefined8 local_15a8;
  ulonglong uStack_15a0;
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined1 local_157c [12];
  undefined1 local_1570 [12];
  undefined1 local_1564 [28];
  undefined4 local_1548 [20];
  undefined1 local_14f8 [28];
  undefined1 local_14dc [28];
  undefined1 local_14c0 [40];
  undefined1 local_1498 [8];
  undefined8 local_1490 [4];
  longlong local_1470 [25];
  undefined1 local_13a8 [132];
  undefined8 local_1324;
  undefined8 uStack_131c;
  undefined4 uStack_1314;
  undefined4 local_1310;
  undefined4 auStack_130c [34];
  undefined8 local_1284;
  undefined8 uStack_127c;
  undefined4 local_1274;
  undefined4 local_1270;
  undefined4 local_126c;
  undefined4 local_11e4;
  undefined4 local_11e0;
  undefined4 local_11dc;
  undefined4 local_11d8;
  undefined4 local_11d4;
  undefined4 local_11d0;
  undefined4 local_11cc;
  undefined4 local_1144;
  undefined4 local_1140;
  undefined4 local_113c;
  undefined4 local_1138;
  undefined4 local_1134;
  undefined4 local_1130;
  undefined4 local_112c;
  undefined4 local_fec [561];
  undefined4 local_728 [80];
  undefined8 local_5e8 [3];
  undefined1 auStack_5d0 [1416];
  undefined8 uStack_48;
  
  uVar17 = MXCSR;
  uStack_48 = 0x143962a35;
  uVar25 = 0;
  local_262c = MXCSR;
  MXCSR = 0x9fc0;
  if (*(int *)(param_6 + 0x38) != 0) {
    uVar12 = 0;
    do {
      puVar20 = (undefined4 *)(uVar25 * 0x220 + *(longlong *)(param_6 + 0x70));
      iVar7 = (int)uVar12;
      if ((&DAT_146b95e40)[uVar12] != 0) {
        *(undefined4 *)((&DAT_146b95e40)[uVar12] + 0x10) = *puVar20;
        *(undefined4 *)((&DAT_146b95e40)[iVar7 + 1] + 0x10) = puVar20[1];
        *(undefined4 *)((&DAT_146b95e40)[iVar7 + 2] + 0x10) = puVar20[2];
        *(undefined4 *)((&DAT_146b95e40)[iVar7 + 3] + 0x10) = puVar20[3];
      }
      uVar23 = (int)uVar25 + 1;
      uVar25 = (ulonglong)uVar23;
      uVar12 = (ulonglong)(iVar7 + 4);
    } while (uVar23 < *(uint *)(param_6 + 0x38));
  }
  if (DAT_146b95ee0 != (undefined4 *)0x0) {
    *DAT_146b95ee0 = *(undefined4 *)(param_6 + 0x10c);
  }
  local_26d0 = *(uint *)(param_6 + 0x38);
  local_2698 = param_6 + 0x10;
  local_26cc = *(uint *)(param_6 + 0x3c);
  puVar8 = (undefined8 *)(param_6 + 0x70);
  lVar27 = *(longlong *)(param_6 + 0x30);
  pfVar18 = (float *)*puVar8;
  uVar23 = local_26cc + (1 - local_26d0) * 4;
  local_2440 = puVar8;
  local_2438 = pfVar18;
  local_2428 = lVar27;
  physx::PxVehicleDriveSimData::PxVehicleDriveSimData(local_17d8 + 4,param_6 + 0x120);
  local_15b8 = *(undefined8 *)(param_6 + 0x330);
  uStack_15b0 = *(undefined8 *)(param_6 + 0x338);
  local_2520 = *(longlong **)(param_6 + 0xa0);
  local_2588 = (float *)(param_6 + 0xc0);
  local_15a8 = *(undefined8 *)(param_6 + 0x340);
  uStack_15a0 = *(ulonglong *)(param_6 + 0x348);
  puVar15 = local_5e8;
  puVar26 = auStack_5d0;
  local_1598 = *(undefined8 *)(param_6 + 0x350);
  uStack_1590 = *(undefined8 *)(param_6 + 0x358);
  lVar28 = 0x14;
  lVar21 = 0x14;
  do {
    *(undefined4 *)puVar15 = 0;
    puVar15 = puVar15 + 8;
    *(undefined8 *)(puVar26 + -0x14) = 0;
    *(undefined8 *)(puVar26 + -0xc) = 0x3f800000;
    *(undefined8 *)(puVar26 + -4) = 0;
    *(undefined8 *)(puVar26 + 0x10) = 0;
    *(undefined8 *)(puVar26 + 0x18) = 0;
    *(undefined8 *)(puVar26 + 0x20) = 0;
    *(undefined8 *)(puVar26 + 8) = 0;
    puVar26 = puVar26 + 0x40;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  local_2660 = local_26cc;
  local_2668 = local_5e8;
  local_265c = 0;
  uStack_2654 = 0;
  local_264c = 0;
  bVar4 = false;
  local_2644 = 0;
  fVar29 = (float)physx::PxVehicleDriveDynData::getAnalogInput(local_2588,3);
  if ((((fVar29 != 0.0) ||
       (fVar29 = (float)physx::PxVehicleDriveDynData::getAnalogInput(local_2588,4), fVar29 != 0.0))
      || (fVar29 = (float)physx::PxVehicleDriveDynData::getAnalogInput(local_2588,0), fVar29 != 0.0)
      ) || ((*(char *)((longlong)local_2588 + 0x42) != '\0' ||
            (*(char *)((longlong)local_2588 + 0x41) != '\0')))) {
    bVar4 = true;
  }
  cVar5 = (**(code **)(*local_2520 + 0x1f0))(local_2520);
  if (cVar5 != '\0') {
    if ((!bVar4) && (cVar5 = FUN_143970090(local_2698,puVar8), cVar5 == '\0')) {
      physx::PxVehicleUpdate::setInternalDynamicsToZero(param_6);
      if (param_8 != (undefined8 *)0x0) {
        *(undefined1 *)((longlong)param_8 + 0x24) = 1;
      }
      goto LAB_143966130;
    }
    local_2644 = CONCAT11(1,(undefined1)local_2644);
  }
  uVar25 = (ulonglong)local_26d0;
  local_2484 = 0;
  local_247c = 0;
  uVar14 = local_26d0 - 1;
  local_2488 = 4;
  if (local_26cc < 4) {
    local_2488 = local_26cc;
  }
  if (1 < uVar14) {
    puVar8 = &local_2484;
    for (uVar12 = (ulonglong)(local_26d0 - 2); uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)puVar8 = 4;
      puVar8 = (undefined8 *)((longlong)puVar8 + 4);
    }
  }
  (&local_2488)[uVar14] = uVar23;
  uVar23 = 0;
  local_2640 = (ulonglong)uVar14;
  if (local_26d0 != 0) {
    plVar3 = *(longlong **)(param_6 + 0x78);
    puVar8 = local_1490;
    lVar21 = 0x10;
    plVar24 = local_1470;
    do {
      puVar8[-1] = *(undefined8 *)(lVar21 + -0x10 + *plVar3);
      *puVar8 = *(undefined8 *)(lVar21 + -8 + *plVar3);
      puVar8[1] = *(undefined8 *)(lVar21 + *plVar3);
      puVar8[2] = *(undefined8 *)(lVar21 + 8 + *plVar3);
      plVar24[-1] = plVar3[1];
      *plVar24 = plVar3[2];
      uVar25 = uVar25 - 1;
      puVar8 = puVar8 + 6;
      lVar21 = lVar21 + 0x20;
      plVar24 = plVar24 + 6;
    } while (uVar25 != 0);
    if (local_26d0 != 0) {
      pfVar9 = pfVar18 + 0x74;
      uVar25 = (ulonglong)local_26d0;
      do {
        (**(code **)(**(longlong **)(*(longlong *)pfVar9 + 0x168) + 0x40))();
        pfVar9 = pfVar9 + 0x88;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  puVar26 = local_13a8;
  puVar20 = auStack_130c;
  do {
    _guard_xfg_dispatch_icall_nop(puVar26,0,0xa0);
    plVar3 = local_2520;
    *(undefined1 *)(puVar20 + -0x20) = 1;
    puVar26 = puVar26 + 0xa0;
    puVar20[-0x19] = 0xffffffff;
    *(undefined8 *)(puVar20 + -6) = 0;
    puVar20[-4] = 0;
    *(undefined8 *)(puVar20 + -3) = 0x3f800000;
    *(undefined8 *)(puVar20 + -1) = 0;
    puVar20 = puVar20 + 0x28;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  puVar8 = (undefined8 *)(**(code **)(*local_2520 + 0xf0))(local_2520,local_14f8);
  local_2420 = *puVar8;
  uStack_2418 = puVar8[1];
  fVar29 = *(float *)(puVar8 + 2);
  fVar38 = *(float *)((longlong)puVar8 + 0x14);
  fVar39 = *(float *)(puVar8 + 3);
  local_2410 = fVar29;
  local_240c = fVar38;
  local_2408 = fVar39;
  pfVar9 = (float *)(**(code **)(*plVar3 + 0xa0))(plVar3,local_14dc);
  fVar39 = fVar39 * 2.0;
  fVar29 = fVar29 * 2.0;
  fVar1 = pfVar9[3];
  fVar2 = pfVar9[1];
  fVar36 = *pfVar9;
  fVar37 = pfVar9[2];
  fVar38 = fVar38 * 2.0;
  fVar35 = fVar1 * fVar1 - 0.5;
  fVar32 = fVar29 * fVar36 + fVar38 * fVar2 + fVar39 * fVar37;
  fVar41 = (fVar38 * fVar36 - fVar29 * fVar2) * fVar1 + fVar35 * fVar39 + fVar32 * fVar37 +
           pfVar9[6];
  fVar40 = (fVar29 * fVar37 - fVar39 * fVar36) * fVar1 + fVar35 * fVar38 + fVar32 * fVar2 +
           pfVar9[5];
  fVar29 = (fVar39 * fVar2 - fVar38 * fVar37) * fVar1 + fVar35 * fVar29 + fVar32 * fVar36 +
           pfVar9[4];
  local_2638 = fVar41;
  local_2634 = fVar40;
  local_2630 = fVar29;
  pfVar9 = (float *)physx::PxQuat::operator*(pfVar9,local_1564,&local_2420);
  local_26a8 = *pfVar9;
  local_26ac = pfVar9[1];
  local_26c4 = pfVar9[2];
  local_2678 = pfVar9[3];
  local_2550 = local_26a8;
  local_254c = local_26ac;
  local_2548 = local_26c4;
  local_2544 = local_2678;
  local_2540 = fVar29;
  local_253c = fVar40;
  local_2538 = fVar41;
  local_2398 = local_26a8;
  local_2394 = local_26ac;
  local_2390 = local_26c4;
  local_238c = local_2678;
  local_2528 = (float)(**(code **)(*plVar3 + 0x100))(plVar3);
  local_2528 = 1.0 / local_2528;
  puVar20 = (undefined4 *)(**(code **)(*plVar3 + 0x120))(plVar3,local_1570);
  local_23b8 = *puVar20;
  local_23b4 = puVar20[1];
  local_23b0 = puVar20[2];
  pfVar9 = (float *)(**(code **)(*plVar3 + 0x128))(plVar3,local_157c);
  local_2688 = *pfVar9;
  local_2670 = pfVar9[1];
  local_2674 = pfVar9[2];
  local_2580 = local_2688;
  local_257c = local_2670;
  local_2578 = local_2674;
  pfVar9 = (float *)(**(code **)(*plVar3 + 0x138))(plVar3);
  puVar8 = local_2440;
  lVar21 = local_2698;
  local_269c = *pfVar9;
  local_26a0 = pfVar9[1];
  local_26a4 = pfVar9[2];
  local_2560 = local_269c;
  local_255c = local_26a0;
  local_2558 = local_26a4;
  if (local_26cc != 0) {
    puVar20 = local_1548;
    puVar13 = local_728 + 2;
    do {
      iVar7 = physx::PxVehicleWheelsSimData::getWheelShapeMapping(lVar21);
      if (iVar7 != -1) {
        local_23e0 = (longlong *)0x0;
        (**(code **)(*plVar3 + 0xd0))(plVar3,&local_23e0,1);
        puVar10 = (undefined4 *)(**(code **)(*local_23e0 + 0x90))(local_23e0,local_14c0);
        puVar13[-2] = *puVar10;
        puVar13[-1] = puVar10[1];
        *puVar13 = puVar10[2];
        puVar13[1] = puVar10[3];
        uVar30 = physx::PxVehicleWheelsDynData::getWheelRotationAngle(puVar8);
        *puVar20 = uVar30;
      }
      uVar23 = uVar23 + 1;
      puVar13 = puVar13 + 4;
      puVar20 = puVar20 + 1;
      pfVar18 = local_2438;
      lVar27 = local_2428;
      uVar17 = local_262c;
    } while (uVar23 < local_26cc);
  }
  pfVar9 = local_2588;
  local_260c = *local_2588;
  if (*(char *)(local_2588 + 0x10) != '\0') {
    fVar29 = local_2588[0x11];
    if ((local_2588[0x12] != fVar29) && (fVar29 == 1.4013e-45)) {
      local_260c = 0.0;
    }
    if ((local_2588[0x12] != fVar29) || (local_2588[0x15] <= local_1638[0])) {
      local_2588[0x15] = local_2588[0x15] + param_1;
    }
    else {
      fVar38 = local_2588[0x13] * local_175c;
      cVar5 = '\0';
      if (local_16b8[(uint)fVar29] <= fVar38 && fVar38 != local_16b8[(uint)fVar29]) {
        cVar5 = '\0';
        if (fVar29 != 0.0) {
          cVar5 = '\x01';
        }
      }
      cVar6 = '\0';
      if ((fVar38 < local_1638[(uint)fVar29]) && (cVar6 = '\0', 2 < (uint)fVar29)) {
        cVar6 = '\x01';
      }
      if ((cVar5 != '\0') || (cVar6 != '\0')) {
        *(char *)((longlong)local_2588 + 0x41) = cVar5;
        *(char *)((longlong)local_2588 + 0x42) = cVar6;
        local_2588[0x15] = 0.0;
      }
    }
  }
  fVar29 = local_260c;
  physx::processGears();
  local_2430 = pfVar9[0x11];
  if (local_2430 == 1.4013e-45) {
    local_2518 = 0;
  }
  else {
    local_2518 = local_16c8;
  }
  local_2450 = local_16d8 * local_1758[(uint)local_2430];
  local_2454 = local_16c4;
  local_2458 = local_16c0;
  if (DAT_146b95ee0 != (undefined4 *)0x0) {
    DAT_146b95ee0[8] = local_2450;
  }
  fVar38 = pfVar9[4];
  fVar39 = pfVar9[3];
  fVar1 = pfVar9[1];
  fVar36 = fVar38 - fVar39;
  fVar2 = pfVar9[2];
  if ((fVar29 <= 0.0) || (local_2430 == 1.4013e-45)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  if (DAT_146b95ee0 != (undefined4 *)0x0) {
    DAT_146b95ee0[3] = fVar29;
    DAT_146b95ee0[4] = fVar1;
    DAT_146b95ee0[5] = fVar2;
    DAT_146b95ee0[6] = fVar39;
    DAT_146b95ee0[7] = fVar38;
  }
  uVar23 = *(uint *)(param_6 + 0x50);
  local_2684 = (uVar23 & 1) != 0;
  local_2683 = (uVar23 & 2) != 0;
  local_2682 = (uVar23 & 4) != 0;
  local_2681 = (uVar23 & 8) != 0;
  uVar25 = uStack_15a0 & 0xffffffff;
  local_26c0 = 0.0;
  fStack_26bc = 0.0;
  fStack_26b8 = 0.0;
  fStack_26b4 = 0.0;
  if (0.0 < fVar2) {
    if ((int)uStack_15a0 == 0) {
      uVar25 = 1;
    }
    else if ((int)uStack_15a0 == 3) {
      uVar25 = 4;
    }
  }
  switch(uVar25) {
  case 0:
  case 3:
    fStack_26b8 = (float)uStack_15b0 * (1.0 - (float)local_15b8);
    local_26c0 = (float)local_15b8 * local_15b8._4_4_;
    fStack_26bc = (float)local_15b8 * (1.0 - local_15b8._4_4_);
    fStack_26b4 = (1.0 - (float)uStack_15b0) * (1.0 - (float)local_15b8);
    break;
  case 1:
  case 4:
    fStack_26b8 = 0.0;
    fStack_26b4 = 0.0;
    local_26c0 = local_15b8._4_4_;
    fStack_26bc = 1.0 - local_15b8._4_4_;
    break;
  case 2:
  case 5:
    fStack_26b8 = (float)uStack_15b0;
    local_26c0 = 0.0;
    fStack_26bc = 0.0;
    fStack_26b4 = 1.0 - (float)uStack_15b0;
  }
  if (DAT_146b95ee0 != (undefined4 *)0x0) {
    DAT_146b95ee0[2] =
         (fStack_26bc * pfVar18[1] + local_26c0 * *pfVar18 + fStack_26b8 * pfVar18[2] +
         fStack_26b4 * pfVar18[3]) * local_2450 - pfVar9[0x13];
  }
  local_26dc = 0;
  if (cVar5 != '\0') {
    local_26dc = CONCAT13(fStack_26b4 != 0.0,
                          CONCAT12(fStack_26b8 != 0.0,CONCAT11(fStack_26bc != 0.0,local_26c0 != 0.0)
                                  ));
  }
  fVar38 = (float)local_1598;
  fVar39 = uStack_1590._4_4_;
  local_2400 = 0;
  uStack_23f8 = 0;
  fVar29 = *(float *)(lVar27 + 0xdc);
  if (*(float *)(lVar27 + 0xdc) <= *(float *)(lVar27 + 0x10c)) {
    fVar29 = *(float *)(lVar27 + 0x10c);
  }
  fVar29 = fVar36 * fVar29;
  if (fVar29 == 0.0) {
    local_2620 = 0.0;
    local_2624 = 0.0;
  }
  else {
    fVar32 = ABS(fVar29);
    fVar37 = _guard_xfg_dispatch_icall_nop(fVar32);
    fVar37 = _guard_xfg_dispatch_icall_nop(fVar39 / (fVar39 / fVar37 + local_1598._4_4_));
    local_2620 = (fVar37 - fVar32) * fVar38 + fVar32;
    local_2624 = fVar32;
    if (fVar29 < 0.0) {
      local_2624 = -local_2620;
      local_2620 = -fVar32;
    }
  }
  fVar37 = (float)uStack_1590;
  local_2400 = CONCAT44(local_2624 + *(float *)(lVar27 + 0x110),
                        local_2620 + *(float *)(lVar27 + 0xe0));
  fVar29 = *(float *)(lVar27 + 0x13c);
  if (*(float *)(lVar27 + 0x13c) <= *(float *)(lVar27 + 0x16c)) {
    fVar29 = *(float *)(lVar27 + 0x16c);
  }
  fVar36 = fVar36 * fVar29;
  if (fVar36 == 0.0) {
    local_2618 = 0.0;
    local_261c = 0.0;
  }
  else {
    fVar32 = ABS(fVar36);
    fVar29 = _guard_xfg_dispatch_icall_nop(fVar32);
    fVar29 = _guard_xfg_dispatch_icall_nop(fVar39 / (fVar39 / fVar29 + fVar37));
    local_2618 = (fVar29 - fVar32) * fVar38 + fVar32;
    local_261c = fVar32;
    if (fVar36 < 0.0) {
      local_261c = -local_2618;
      local_2618 = -fVar32;
    }
  }
  uStack_23f8 = CONCAT44(*(float *)(lVar27 + 0x170) - local_261c,
                         *(float *)(lVar27 + 0x140) - local_2618);
  if (local_26d0 != 0) {
    puVar26 = local_13a8;
    uVar25 = (ulonglong)local_26d0;
    pfVar9 = pfVar18;
    do {
      physx::PxVehicleUpdate::storeRaycasts(pfVar9,puVar26);
      puVar26 = puVar26 + 0x280;
      pfVar9 = pfVar9 + 0x88;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
    pfVar9 = (float *)(param_6 + 0xc0);
  }
  fVar29 = local_269c;
  local_2428 = CONCAT44(local_2428._4_4_,local_2688);
  local_245c = local_2670;
  local_244c = local_2674;
  local_2440 = (undefined8 *)CONCAT44(local_2440._4_4_,local_26a0);
  local_2438 = (float *)CONCAT44(local_2438._4_4_,local_26a4);
  fVar38 = DAT_146b95f00 * 2.0;
  fVar32 = DAT_146b95ef8 * 2.0;
  fVar36 = DAT_146b95efc * 2.0;
  fVar37 = local_2678 * local_2678 - 0.5;
  fVar39 = local_26ac * fVar36 + local_26a8 * fVar32 + local_26c4 * fVar38;
  local_2348 = local_2520;
  local_2470 = 1.0 / param_1;
  local_2350 = 0;
  local_234c = *(undefined4 *)(param_6 + 0x60);
  local_2460 = *(uint *)(param_6 + 0x5c);
  if (ABS(local_2688 *
          ((local_26ac * fVar38 - local_26c4 * fVar36) * local_2678 + fVar37 * fVar32 +
          local_26a8 * fVar39) +
          local_2670 *
          ((local_26c4 * fVar32 - local_26a8 * fVar38) * local_2678 + fVar37 * fVar36 +
          local_26ac * fVar39) +
          local_2674 *
          ((local_26a8 * fVar36 - local_26ac * fVar32) * local_2678 + fVar37 * fVar38 +
          local_26c4 * fVar39)) < *(float *)(param_6 + 0x54)) {
    local_2460 = *(uint *)(param_6 + 0x58);
  }
  local_2608 = 0;
  local_2370 = 1.0 / (float)local_2460;
  local_2448 = local_2370 * param_1;
  local_2360 = param_2[1];
  local_2368 = 1.0 / local_2448;
  local_2364 = *param_2;
  local_235c = param_2[2];
  local_2340 = param_5;
  fVar38 = local_26a4;
  fVar39 = local_26a0;
  fVar36 = local_269c;
  fVar37 = local_2674;
  fVar32 = local_2670;
  fVar35 = local_2688;
  local_236c = local_2448;
  local_2358 = param_3;
  local_2354 = param_4;
  if (local_2460 != 0) {
    uVar14 = local_2460 - 1;
    uVar23 = local_26d0;
    local_21f8 = pfVar18;
    local_21f0 = pfVar9;
    do {
      uVar17 = local_2608;
      local_22b0 = param_6 + 0x10;
      if (-*pfVar18 < 0.0) {
        fVar38 = 1.0;
      }
      else {
        fVar38 = 0.0;
      }
      if (*pfVar18 < 0.0) {
        fVar38 = -1.0;
      }
      local_23d8 = -(fVar1 * fVar38 * *(float *)(lVar27 + 0xd4)) -
                   fVar2 * fVar38 * *(float *)(lVar27 + 0xd8);
      local_26c8 = fVar2 * *(float *)(lVar27 + 0xd8) + fVar1 * *(float *)(lVar27 + 0xd4) != 0.0;
      if (-pfVar18[1] < 0.0) {
        fVar38 = 1.0;
      }
      else {
        fVar38 = 0.0;
      }
      if (pfVar18[1] < 0.0) {
        fVar38 = -1.0;
      }
      local_23d4 = -(fVar1 * fVar38 * *(float *)(lVar27 + 0x104)) -
                   fVar2 * fVar38 * *(float *)(lVar27 + 0x108);
      local_26c7 = fVar2 * *(float *)(lVar27 + 0x108) + fVar1 * *(float *)(lVar27 + 0x104) != 0.0;
      if (-pfVar18[2] < 0.0) {
        fVar38 = 1.0;
      }
      else {
        fVar38 = 0.0;
      }
      if (pfVar18[2] < 0.0) {
        fVar38 = -1.0;
      }
      local_23d0 = -(fVar1 * fVar38 * *(float *)(lVar27 + 0x134)) -
                   fVar2 * fVar38 * *(float *)(lVar27 + 0x138);
      local_26c6 = fVar2 * *(float *)(lVar27 + 0x138) + fVar1 * *(float *)(lVar27 + 0x134) != 0.0;
      if (-pfVar18[3] < 0.0) {
        fVar38 = 1.0;
      }
      else {
        fVar38 = 0.0;
      }
      if (pfVar18[3] < 0.0) {
        fVar38 = -1.0;
      }
      local_23cc = -(fVar1 * fVar38 * *(float *)(lVar27 + 0x164)) -
                   fVar2 * fVar38 * *(float *)(lVar27 + 0x168);
      local_26c5 = fVar2 * *(float *)(lVar27 + 0x168) + fVar1 * *(float *)(lVar27 + 0x164) != 0.0;
      local_2330 = &local_26dc;
      local_2328 = &local_26c8;
      local_2310 = local_26a8;
      local_2320 = &local_2400;
      local_2308 = local_26c4;
      local_2318 = &local_2684;
      local_2304 = local_2678;
      local_22d8 = local_728;
      local_2300 = local_2630;
      local_22d0 = local_1548;
      local_22e8 = local_269c;
      local_22b8 = local_1498;
      local_230c = local_26ac;
      local_22e4 = local_26a0;
      local_22fc = local_2634;
      local_22f8 = local_2638;
      local_22e0 = local_26a4;
      local_22a8 = local_2488;
      local_2338[0] = cVar5;
      local_22f4 = local_2688;
      local_22f0 = local_2670;
      local_22ec = local_2674;
      local_22c8 = lVar27;
      local_22c0 = pfVar18;
      _guard_xfg_dispatch_icall_nop(local_2178,0,0x4a8);
      puVar26 = local_2108;
      lVar21 = 4;
      puVar20 = local_20a0;
      do {
        *puVar26 = 1;
        puVar26 = puVar26 + 1;
        *puVar20 = 0xffffffff;
        puVar20 = puVar20 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      FUN_14395bb40(0,&local_2370,local_2338,local_2178);
      fVar38 = local_1f58;
      local_22c0[0xc] = (float)(~-(uint)(local_1f48 == local_22c0[0xc]) & (uint)local_1f48);
      local_22c0[0xd] = (float)(~-(uint)(fStack_1f44 == local_22c0[0xd]) & (uint)fStack_1f44);
      local_22c0[0xe] = (float)(~-(uint)(fStack_1f40 == local_22c0[0xe]) & (uint)fStack_1f40);
      local_22c0[0xf] = (float)(~-(uint)(fStack_1f3c == local_22c0[0xf]) & (uint)fStack_1f3c);
      local_22c0[0x10] = (float)(~-(uint)(local_1f38 == local_22c0[0x10]) & (uint)local_1f38);
      local_22c0[0x11] = (float)(~-(uint)(fStack_1f34 == local_22c0[0x11]) & (uint)fStack_1f34);
      local_22c0[0x12] = (float)(~-(uint)(fStack_1f30 == local_22c0[0x12]) & (uint)fStack_1f30);
      local_22c0[0x13] = (float)(~-(uint)(fStack_1f2c == local_22c0[0x13]) & (uint)fStack_1f2c);
      *(undefined8 *)(local_22c0 + 0x14) = local_2020;
      *(undefined8 *)(local_22c0 + 0x16) = uStack_2018;
      if (uVar14 == uVar17) {
        if ((*(longlong *)(pfVar18 + 0x76) != 0) || (*(longlong *)(pfVar18 + 0x78) != 0)) {
          *(undefined1 *)(pfVar18 + 0x7a) = 1;
        }
        *(undefined2 *)(pfVar18 + 0x30) = local_1dcc;
        *(undefined8 *)(pfVar18 + 0x18) = local_1dbc;
        *(undefined8 *)(pfVar18 + 0x1a) = uStack_1db4;
        pfVar18[0x2c] = local_1d7c;
        *(undefined2 *)(pfVar18 + 0x32) = local_1d5c;
        *(undefined2 *)((longlong)pfVar18 + 0xc2) = local_1dc8;
        *(undefined8 *)(pfVar18 + 0x1c) = local_1dac;
        *(undefined8 *)(pfVar18 + 0x1e) = uStack_1da4;
        pfVar18[0x2d] = local_1d78;
        *(undefined2 *)((longlong)pfVar18 + 0xca) = local_1d5a;
        *(undefined2 *)(pfVar18 + 0x31) = local_1dc4;
        *(undefined8 *)(pfVar18 + 0x20) = local_1d9c;
        *(undefined8 *)(pfVar18 + 0x22) = uStack_1d94;
        pfVar18[0x2e] = local_1d74;
        *(undefined2 *)(pfVar18 + 0x33) = local_1d58;
        *(undefined2 *)((longlong)pfVar18 + 0xc6) = local_1dc0;
        *(undefined8 *)(pfVar18 + 0x24) = local_1d8c;
        *(undefined8 *)(pfVar18 + 0x26) = uStack_1d84;
        pfVar18[0x2f] = local_1d70;
        *(undefined8 *)(pfVar18 + 0x28) = local_1d6c;
        *(undefined8 *)(pfVar18 + 0x2a) = uStack_1d64;
        *(undefined2 *)((longlong)pfVar18 + 0xce) = local_1d56;
      }
      local_2530 = local_1f60;
      local_2570 = local_1f60;
      local_252c = local_1f5c;
      local_256c = local_1f5c;
      local_2568 = local_1f58;
      local_2514 = local_1f54;
      local_2498 = local_1f54;
      local_2510 = local_1f50;
      local_2494 = local_1f50;
      local_2524 = local_1f4c;
      local_2490 = local_1f4c;
      if (uVar17 == 0) {
        lVar21 = *(longlong *)(pfVar18 + 0x74);
        *(undefined4 *)(lVar21 + 8) = local_1f28;
        *(undefined4 *)(lVar21 + 0xc) = local_1f24;
        *(undefined4 *)(lVar21 + 0x10) = local_1f20;
        *(undefined4 *)(lVar21 + 0x14) = local_1f1c;
        *(undefined4 *)(lVar21 + 0x18) = local_1f18;
        *(undefined4 *)(lVar21 + 0x1c) = local_1f14;
        *(undefined4 *)(lVar21 + 0x20) = local_1f10;
        *(undefined4 *)(lVar21 + 0x24) = local_1f0c;
        *(undefined4 *)(lVar21 + 0x28) = local_1f08;
        *(undefined4 *)(lVar21 + 0x2c) = local_1f04;
        *(undefined4 *)(lVar21 + 0x30) = local_1f00;
        *(undefined4 *)(lVar21 + 0x34) = local_1efc;
        *(undefined4 *)(lVar21 + 0x38) = local_1ef8;
        *(undefined4 *)(lVar21 + 0x3c) = local_1ef4;
        *(undefined4 *)(lVar21 + 0x40) = local_1ef0;
        *(undefined4 *)(lVar21 + 0x44) = local_1eec;
        *(undefined4 *)(lVar21 + 0x48) = local_1ee8;
        *(undefined4 *)(lVar21 + 0x4c) = local_1ee4;
        *(undefined4 *)(lVar21 + 0x50) = local_1ee0;
        *(undefined4 *)(lVar21 + 0x54) = local_1edc;
        *(undefined4 *)(lVar21 + 0x58) = local_1ed8;
        *(undefined4 *)(lVar21 + 0x5c) = local_1ed4;
        *(undefined4 *)(lVar21 + 0x60) = local_1ed0;
        *(undefined4 *)(lVar21 + 100) = local_1ecc;
        *(undefined4 *)(lVar21 + 0x68) = local_1ec8;
        *(undefined4 *)(lVar21 + 0x6c) = local_1ec4;
        *(undefined4 *)(lVar21 + 0x70) = local_1ec0;
        *(undefined4 *)(lVar21 + 0x74) = local_1ebc;
        *(undefined1 *)(lVar21 + 0x78) = local_1eb8;
        *(undefined1 *)(lVar21 + 0x79) = local_1eb7;
        *(undefined1 *)(lVar21 + 0x7a) = local_1eb6;
        *(undefined1 *)(lVar21 + 0x7b) = local_1eb5;
        *(undefined4 *)(lVar21 + 0x7c) = local_1eb4;
        *(undefined4 *)(lVar21 + 0x80) = local_1eb0;
        *(undefined4 *)(lVar21 + 0x84) = local_1eac;
        *(undefined4 *)(lVar21 + 0x88) = local_1ea8;
        *(undefined4 *)(lVar21 + 0x8c) = local_1ea4;
        *(undefined4 *)(lVar21 + 0x90) = local_1ea0;
        *(undefined4 *)(lVar21 + 0x94) = local_1e9c;
        *(undefined4 *)(lVar21 + 0x98) = local_1e98;
        *(undefined4 *)(lVar21 + 0x9c) = local_1e94;
        *(undefined4 *)(lVar21 + 0xa0) = local_1e90;
        *(undefined4 *)(lVar21 + 0xa4) = local_1e8c;
        *(undefined4 *)(lVar21 + 0xa8) = local_1e88;
        *(undefined4 *)(lVar21 + 0xac) = local_1e84;
        *(undefined4 *)(lVar21 + 0xb0) = local_1e80;
        *(undefined4 *)(lVar21 + 0xb4) = local_1e7c;
        *(undefined4 *)(lVar21 + 0xb8) = local_1e78;
        *(undefined4 *)(lVar21 + 0xbc) = local_1e74;
        *(undefined4 *)(lVar21 + 0xc0) = local_1e70;
        *(undefined4 *)(lVar21 + 0xc4) = local_1e6c;
        *(undefined4 *)(lVar21 + 200) = local_1e68;
        *(undefined4 *)(lVar21 + 0xcc) = local_1e64;
        *(undefined4 *)(lVar21 + 0xd0) = local_1e60;
        *(undefined4 *)(lVar21 + 0xd4) = local_1e5c;
        *(undefined4 *)(lVar21 + 0xd8) = local_1e58;
        *(undefined4 *)(lVar21 + 0xdc) = local_1e54;
        *(undefined4 *)(lVar21 + 0xe0) = local_1e50;
        *(undefined4 *)(lVar21 + 0xe4) = local_1e4c;
        *(undefined4 *)(lVar21 + 0xe8) = local_1e48;
        *(undefined1 *)(lVar21 + 0xec) = local_1e44;
        *(undefined1 *)(lVar21 + 0xed) = local_1e43;
        *(undefined1 *)(lVar21 + 0xee) = local_1e42;
        *(undefined1 *)(lVar21 + 0xef) = local_1e41;
        *(undefined4 *)(lVar21 + 0xf0) = local_1e40;
        *(undefined4 *)(lVar21 + 0xf4) = local_1e3c;
        *(undefined4 *)(lVar21 + 0xf8) = local_1e38;
        *(undefined4 *)(lVar21 + 0xfc) = local_1e34;
        *(undefined4 *)(lVar21 + 0x100) = local_1e30;
        *(undefined4 *)(lVar21 + 0x104) = local_1e2c;
        *(undefined4 *)(lVar21 + 0x108) = local_1e28;
        *(undefined4 *)(lVar21 + 0x10c) = local_1e24;
        *(undefined4 *)(lVar21 + 0x110) = local_1e20;
        *(undefined4 *)(lVar21 + 0x114) = local_1e1c;
        *(undefined4 *)(lVar21 + 0x118) = local_1e18;
        *(undefined4 *)(lVar21 + 0x11c) = local_1e14;
        *(undefined4 *)(lVar21 + 0x120) = local_1e10;
        *(undefined4 *)(lVar21 + 0x124) = local_1e0c;
        *(undefined4 *)(lVar21 + 0x128) = local_1e08;
        *(undefined4 *)(lVar21 + 300) = local_1e04;
        *(undefined4 *)(lVar21 + 0x130) = local_1e00;
        *(undefined4 *)(lVar21 + 0x134) = local_1dfc;
        *(undefined4 *)(lVar21 + 0x138) = local_1df8;
        *(undefined4 *)(lVar21 + 0x13c) = local_1df4;
        *(undefined4 *)(lVar21 + 0x140) = local_1df0;
        *(undefined4 *)(lVar21 + 0x144) = local_1dec;
        *(undefined4 *)(lVar21 + 0x148) = local_1de8;
        *(undefined4 *)(lVar21 + 0x14c) = local_1de4;
        *(undefined4 *)(lVar21 + 0x150) = local_1de0;
        *(undefined4 *)(lVar21 + 0x154) = local_1ddc;
        *(undefined4 *)(lVar21 + 0x158) = local_1dd8;
        *(undefined4 *)(lVar21 + 0x15c) = local_1dd4;
        *(undefined1 *)(lVar21 + 0x160) = local_1dd0;
        *(undefined1 *)(lVar21 + 0x161) = local_1dcf;
        *(undefined1 *)(lVar21 + 0x162) = local_1dce;
        *(undefined1 *)(lVar21 + 0x163) = local_1dcd;
      }
      physx::PxVehicleUpdate::storeSuspWheelTireResults(local_2178,local_2320,local_13a8,local_2488)
      ;
      physx::PxVehicleUpdate::storeHitActorForces(local_2178,local_2668,local_2488);
      fVar39 = local_2448;
      uVar25 = uStack_15a0 & 0xffffffff;
      if (0.0 < fVar2) {
        if ((int)uStack_15a0 == 0) {
          uVar25 = 1;
        }
        else if ((int)uStack_15a0 == 3) {
          uVar25 = 4;
        }
      }
      local_26d8 = pfVar18[1];
      fVar36 = *pfVar18;
      fVar37 = pfVar18[2];
      fVar40 = 1.0 - local_15b8._4_4_;
      local_2610 = pfVar18[3];
      local_2614 = uStack_15b0._4_4_;
      fVar32 = 1.0 - (float)local_15b8;
      fVar35 = 1.0 - (float)uStack_15b0;
      if (-fVar36 < 0.0) {
        fVar41 = 1.0;
      }
      else {
        fVar41 = 0.0;
      }
      if (fVar36 < 0.0) {
        fVar41 = -1.0;
      }
      local_23f0 = 0.0;
      local_23ec = 0.0;
      local_23e8 = 0.0;
      local_23e4 = 0.0;
      switch(uVar25) {
      case 0:
        if (fVar41 != 0.0) {
          if (-local_26d8 < 0.0) {
            fVar31 = 1.0;
          }
          else {
            fVar31 = 0.0;
          }
          if (local_26d8 < 0.0) {
            fVar31 = -1.0;
          }
          if (fVar41 == fVar31) {
            if (-fVar37 < 0.0) {
              fVar31 = 1.0;
            }
            else {
              fVar31 = 0.0;
            }
            if (fVar37 < 0.0) {
              fVar31 = -1.0;
            }
            if (fVar41 == fVar31) {
              if (-local_2610 < 0.0) {
                fVar31 = 1.0;
              }
              else {
                fVar31 = 0.0;
              }
              if (local_2610 < 0.0) {
                fVar31 = -1.0;
              }
              if (fVar41 == fVar31) {
                fVar31 = ABS(ABS(local_26d8 + fVar36));
                fVar33 = ABS(ABS(local_2610 + fVar37));
                fVar41 = fVar33;
                if (fVar33 <= fVar31) {
                  fVar41 = fVar31;
                }
                local_2614 = fVar33;
                if (fVar31 <= fVar33) {
                  local_2614 = fVar31;
                }
                local_2614 = uStack_15b0._4_4_ * local_2614;
                if (fVar41 - local_2614 < 0.0) {
                  fVar41 = 0.0;
                }
                else {
                  fVar41 = (fVar41 - local_2614) / fVar41;
                }
                if (fVar31 - fVar33 < 0.0) {
                  fVar34 = fVar41 + 1.0;
                }
                else {
                  fVar34 = 1.0 - fVar41;
                }
                if (fVar31 - fVar33 < 0.0) {
                  fVar41 = 1.0 - fVar41;
                }
                else {
                  fVar41 = fVar41 + 1.0;
                }
                fVar31 = ABS(local_26d8);
                fVar36 = ABS(fVar36);
                local_26d8 = 1.0 / (fVar41 * fVar32 + fVar34 * (float)local_15b8);
                local_23e8 = local_26d8 * fVar41 * fVar32;
                local_26d8 = local_26d8 * fVar34 * (float)local_15b8;
                fVar32 = fVar31;
                if (fVar31 <= fVar36) {
                  fVar32 = fVar36;
                }
                fVar41 = fVar31;
                if (fVar36 <= fVar31) {
                  fVar41 = fVar36;
                }
                fVar41 = fVar32 - (float)local_15a8 * fVar41;
                if (fVar41 < 0.0) {
                  fVar41 = 0.0;
                }
                else {
                  fVar41 = fVar41 / fVar32;
                }
                if (fVar36 - fVar31 < 0.0) {
                  fVar32 = fVar41 + 1.0;
                }
                else {
                  fVar32 = 1.0 - fVar41;
                }
                if (fVar36 - fVar31 < 0.0) {
                  fVar41 = 1.0 - fVar41;
                }
                else {
                  fVar41 = fVar41 + 1.0;
                }
                fVar33 = ABS(local_2610);
                fVar37 = ABS(fVar37);
                fVar31 = 1.0 / (fVar41 * fVar40 + fVar32 * local_15b8._4_4_);
                fVar36 = fVar33;
                if (fVar37 <= fVar33) {
                  fVar36 = fVar37;
                }
                fVar34 = fVar33;
                if (fVar33 <= fVar37) {
                  fVar34 = fVar37;
                }
                fVar36 = fVar34 - fVar36 * local_15a8._4_4_;
                if (fVar36 < 0.0) {
                  fVar36 = 0.0;
                }
                else {
                  fVar36 = fVar36 / fVar34;
                }
                if (fVar37 - fVar33 < 0.0) {
                  fVar34 = fVar36 + 1.0;
                }
                else {
                  fVar34 = 1.0 - fVar36;
                }
                if (fVar37 - fVar33 < 0.0) {
                  fVar36 = 1.0 - fVar36;
                }
                else {
                  fVar36 = fVar36 + 1.0;
                }
                local_23f0 = fVar31 * fVar32 * local_15b8._4_4_ * local_26d8;
                local_23ec = fVar31 * fVar41 * fVar40 * local_26d8;
                fVar37 = 1.0 / (fVar36 * fVar35 + fVar34 * (float)uStack_15b0);
                local_23e4 = fVar37 * fVar36 * fVar35 * local_23e8;
                local_23e8 = fVar37 * fVar34 * (float)uStack_15b0 * local_23e8;
                break;
              }
            }
          }
        }
      case 3:
        local_23e8 = (float)uStack_15b0 * fVar32;
        local_23e4 = fVar35 * fVar32;
        local_23f0 = (float)local_15b8 * local_15b8._4_4_;
        local_23ec = (float)local_15b8 * fVar40;
        break;
      case 1:
        if (fVar41 != 0.0) {
          if (-local_26d8 < 0.0) {
            fVar37 = 1.0;
          }
          else {
            fVar37 = 0.0;
          }
          if (local_26d8 < 0.0) {
            fVar37 = -1.0;
          }
          if (fVar41 == fVar37) {
            fVar32 = ABS(local_26d8);
            fVar36 = ABS(fVar36);
            fVar37 = fVar32;
            if (fVar32 <= fVar36) {
              fVar37 = fVar36;
            }
            fVar35 = fVar32;
            if (fVar36 <= fVar32) {
              fVar35 = fVar36;
            }
            fVar35 = fVar37 - fVar35 * (float)local_15a8;
            if (fVar35 < 0.0) {
              fVar35 = 0.0;
            }
            else {
              fVar35 = fVar35 / fVar37;
            }
            if (fVar36 - fVar32 < 0.0) {
              fVar37 = fVar35 + 1.0;
            }
            else {
              fVar37 = 1.0 - fVar35;
            }
            if (fVar36 - fVar32 < 0.0) {
              fVar35 = 1.0 - fVar35;
            }
            else {
              fVar35 = fVar35 + 1.0;
            }
            local_23f0 = 1.0 / (fVar35 * fVar40 + fVar37 * local_15b8._4_4_);
            local_23ec = local_23f0 * fVar35 * fVar40;
            local_23f0 = local_23f0 * fVar37 * local_15b8._4_4_;
            break;
          }
        }
      case 4:
        local_23ec = fVar40;
        local_23f0 = local_15b8._4_4_;
        break;
      case 2:
        if (-fVar37 < 0.0) {
          fVar36 = 1.0;
        }
        else {
          fVar36 = 0.0;
        }
        if ((fVar37 < 0.0) || (fVar36 != 0.0)) {
          if (-fVar37 < 0.0) {
            fVar36 = 1.0;
          }
          else {
            fVar36 = 0.0;
          }
          if (fVar37 < 0.0) {
            fVar36 = -1.0;
          }
          if (-local_2610 < 0.0) {
            fVar32 = 1.0;
          }
          else {
            fVar32 = 0.0;
          }
          if (local_2610 < 0.0) {
            fVar32 = -1.0;
          }
          if (fVar36 == fVar32) {
            fVar32 = ABS(local_2610);
            fVar37 = ABS(fVar37);
            fVar36 = fVar32;
            if (fVar32 <= fVar37) {
              fVar36 = fVar37;
            }
            fVar40 = fVar32;
            if (fVar37 <= fVar32) {
              fVar40 = fVar37;
            }
            fVar40 = fVar36 - fVar40 * local_15a8._4_4_;
            if (fVar40 < 0.0) {
              fVar40 = 0.0;
            }
            else {
              fVar40 = fVar40 / fVar36;
            }
            if (fVar37 - fVar32 < 0.0) {
              fVar36 = fVar40 + 1.0;
            }
            else {
              fVar36 = 1.0 - fVar40;
            }
            if (fVar37 - fVar32 < 0.0) {
              fVar40 = 1.0 - fVar40;
            }
            else {
              fVar40 = fVar40 + 1.0;
            }
            local_23e8 = 1.0 / (fVar40 * fVar35 + fVar36 * (float)uStack_15b0);
            local_23e4 = local_23e8 * fVar40 * fVar35;
            local_23e8 = local_23e8 * fVar36 * (float)uStack_15b0;
            break;
          }
        }
      case 5:
        local_23e8 = (float)uStack_15b0;
        local_23e4 = fVar35;
      }
      fVar36 = pfVar9[0x13] * local_175c;
      if (local_1788 == 0) {
        local_21cc = 0.0;
      }
      else {
        local_21cc = local_17c4;
        if ((local_1788 != 1) && (local_17d8[4] <= fVar36)) {
          uVar19 = 1;
          if (1 < local_1788) {
            uVar25 = 2;
            fVar37 = local_17d8[4];
            fVar32 = local_17c4;
            do {
              iVar7 = (int)uVar25;
              fVar35 = local_17d8[uVar25 + 4];
              if ((fVar37 <= fVar36) && (fVar36 < fVar35)) {
                local_21cc = ((fVar36 - fVar37) * (local_17d8[(ulonglong)(iVar7 + 1) + 4] - fVar32))
                             / (fVar35 - fVar37) + fVar32;
                goto LAB_143964c76;
              }
              uVar19 = uVar19 + 1;
              uVar25 = (ulonglong)(iVar7 + 2);
              fVar37 = fVar35;
              fVar32 = local_17d8[(ulonglong)(iVar7 + 1) + 4];
            } while (uVar19 < local_1788);
          }
          local_21cc = local_17d8[(ulonglong)(local_1788 * 2 - 1) + 4];
        }
      }
LAB_143964c76:
      local_21cc = local_1774 * local_260c * local_21cc;
      if (DAT_146b95ee0 != (undefined4 *)0x0) {
        DAT_146b95ee0[1] = local_21cc;
      }
      local_21c8 = local_1764;
      if (local_2430 != 1.4013e-45) {
        local_21c8 = local_1768;
      }
      local_21d4 = local_2454;
      local_21d0 = local_2458;
      local_21c0 = &local_23f0;
      local_21b8 = &local_26c0;
      local_21b0 = &local_23d8;
      local_21a8 = &local_26c8;
      local_21a0 = local_1f70;
      local_2188 = local_17d8 + 4;
      local_21e8 = local_2448;
      local_21c8 = (local_176c - local_21c8) * local_260c + local_21c8;
      local_21dc = local_2518;
      local_21d8 = local_2450;
      local_2198 = 1;
      local_2194 = 4;
      local_21e4 = fVar1;
      local_21e0 = fVar2;
      local_2190 = lVar27;
      physx::solveDrive4WInternaDynamicsEnginePlusDrivenWheels(&local_21e8,&local_21f8);
      pfVar44 = local_17d8 + 4;
      puVar26 = &local_26c8;
      puVar43 = local_1f80;
      pfVar42 = &local_23f0;
      puVar8 = &local_2020;
      lVar21 = lVar27;
      pfVar45 = pfVar9;
      pfVar46 = pfVar18;
      physx::integrateWheelRotationAngles();
      local_26f8 = 1;
      fVar36 = local_2530;
      fVar37 = local_252c;
      fVar32 = local_2570;
      fVar35 = local_256c;
      fVar40 = local_2568;
      if (1 < uVar23) {
        lVar28 = 1;
        do {
          lVar21 = lVar28 * 0x3b0;
          lVar22 = lVar28 * 0x220;
          local_23a8 = *(undefined4 *)(lVar21 + 0xe0 + lVar27);
          local_17d8[0] = 0.0;
          local_17d8[1] = 0.0;
          local_17d8[2] = 0.0;
          local_17d8[3] = 0.0;
          local_2680 = 0;
          local_23a0 = *(undefined4 *)(lVar21 + 0x140 + lVar27);
          local_23a4 = *(undefined4 *)(lVar21 + 0x110 + lVar27);
          local_239c = *(undefined4 *)(lVar21 + 0x170 + lVar27);
          if (-pfVar18[lVar28 * 0x88] < 0.0) {
            fVar32 = 1.0;
          }
          else {
            fVar32 = 0.0;
          }
          if (pfVar18[lVar28 * 0x88] < 0.0) {
            fVar32 = -1.0;
          }
          fVar35 = *(float *)(lVar21 + 0xd4 + lVar27);
          fVar40 = *(float *)(lVar21 + 0xd8 + lVar27);
          local_23c8 = -(fVar32 * fVar1 * fVar35) - fVar32 * fVar2 * fVar40;
          local_26b0 = fVar2 * fVar40 + fVar1 * fVar35 != 0.0;
          if (-pfVar18[lVar28 * 0x88 + 1] < 0.0) {
            fVar32 = 1.0;
          }
          else {
            fVar32 = 0.0;
          }
          if (pfVar18[lVar28 * 0x88 + 1] < 0.0) {
            fVar32 = -1.0;
          }
          fVar35 = *(float *)(lVar21 + 0x104 + lVar27);
          fVar40 = *(float *)(lVar21 + 0x108 + lVar27);
          local_23c4 = -(fVar32 * fVar1 * fVar35) - fVar32 * fVar2 * fVar40;
          local_26af = fVar2 * fVar40 + fVar1 * fVar35 != 0.0;
          if (-pfVar18[lVar28 * 0x88 + 2] < 0.0) {
            fVar32 = 1.0;
          }
          else {
            fVar32 = 0.0;
          }
          if (pfVar18[lVar28 * 0x88 + 2] < 0.0) {
            fVar32 = -1.0;
          }
          fVar35 = *(float *)(lVar21 + 0x134 + lVar27);
          fVar40 = *(float *)(lVar21 + 0x138 + lVar27);
          local_23c0 = -(fVar32 * fVar1 * fVar35) - fVar32 * fVar2 * fVar40;
          local_26ae = fVar2 * fVar40 + fVar1 * fVar35 != 0.0;
          if (-pfVar18[lVar28 * 0x88 + 3] < 0.0) {
            fVar32 = 1.0;
          }
          else {
            fVar32 = 0.0;
          }
          if (pfVar18[lVar28 * 0x88 + 3] < 0.0) {
            fVar32 = -1.0;
          }
          fVar35 = *(float *)(lVar21 + 0x164 + lVar27);
          fVar40 = *(float *)(lVar21 + 0x168 + lVar27);
          local_23bc = -(fVar32 * fVar1 * fVar35) - fVar32 * fVar2 * fVar40;
          local_26ad = fVar2 * fVar40 + fVar1 * fVar35 != 0.0;
          uVar17 = local_26f8 * 4;
          local_2270 = local_26a8;
          local_226c = local_26ac;
          local_2268 = local_26c4;
          local_2264 = local_2678;
          local_2260 = local_2630;
          local_225c = local_2634;
          local_2258 = local_2638;
          local_2254 = local_2688;
          local_2250 = local_2670;
          local_224c = local_2674;
          local_2248 = local_269c;
          local_267c = (*(uint *)(param_6 + 0x50 + (ulonglong)((local_26f8 & 0x3fffffff) >> 3) * 4)
                        >> (uVar17 & 0x1f) & 1) != 0;
          local_267b = (*(uint *)(param_6 + 0x50 + (ulonglong)(uVar17 + 1 >> 5) * 4) >>
                        (uVar17 + 1 & 0x1f) & 1) != 0;
          local_267a = (*(uint *)(param_6 + 0x50 + (ulonglong)(uVar17 + 2 >> 5) * 4) >>
                        (uVar17 + 2 & 0x1f) & 1) != 0;
          local_2679 = (*(uint *)(param_6 + 0x50 + (ulonglong)(uVar17 + 3 >> 5) * 4) >>
                        (uVar17 + 3 & 0x1f) & 1) != 0;
          local_2298[0] = cVar5;
          local_2290 = &local_2680;
          local_2288 = &local_26b0;
          local_2280 = &local_23a8;
          local_2278 = &local_267c;
          uVar25 = (ulonglong)local_26f8;
          local_2244 = local_26a0;
          local_2238 = local_728 + (ulonglong)local_26f8 * 4;
          local_2240 = local_26a4;
          local_2230 = local_1548 + uVar25;
          lVar21 = uVar25 * 0x3b0 + lVar27;
          local_2218 = local_1498 + uVar25 * 0x30;
          local_2210 = local_2698;
          local_2208 = (&local_2488)[lVar28];
          pfVar46 = pfVar18 + uVar25 * 0x88;
          local_2228 = lVar21;
          local_2220 = pfVar46;
          _guard_xfg_dispatch_icall_nop(local_1cc8,0,0x4a8);
          puVar26 = local_1c58;
          lVar16 = 4;
          puVar20 = local_1bf0;
          do {
            *puVar26 = 1;
            puVar26 = puVar26 + 1;
            *puVar20 = 0xffffffff;
            puVar20 = puVar20 + 1;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          FUN_14395bb40((ulonglong)uVar17,&local_2370,local_2298,local_1cc8);
          *(undefined8 *)(local_2220 + 0x14) = local_1b70;
          *(undefined8 *)(local_2220 + 0x16) = uStack_1b68;
          local_2220[0xc] = (float)(~-(uint)(local_2220[0xc] == local_1a98) & (uint)local_1a98);
          local_2220[0xd] = (float)(~-(uint)(local_2220[0xd] == fStack_1a94) & (uint)fStack_1a94);
          local_2220[0xe] = (float)(~-(uint)(local_2220[0xe] == fStack_1a90) & (uint)fStack_1a90);
          local_2220[0xf] = (float)(~-(uint)(local_2220[0xf] == fStack_1a8c) & (uint)fStack_1a8c);
          local_2220[0x10] = (float)(~-(uint)(local_2220[0x10] == local_1a88) & (uint)local_1a88);
          local_2220[0x11] = (float)(~-(uint)(local_2220[0x11] == fStack_1a84) & (uint)fStack_1a84);
          local_2220[0x12] = (float)(~-(uint)(local_2220[0x12] == fStack_1a80) & (uint)fStack_1a80);
          local_2220[0x13] = (float)(~-(uint)(local_2220[0x13] == fStack_1a7c) & (uint)fStack_1a7c);
          if (uVar14 == local_2608) {
            if ((*(longlong *)(pfVar18 + lVar28 * 0x88 + 0x76) != 0) ||
               (*(longlong *)(pfVar18 + lVar28 * 0x88 + 0x78) != 0)) {
              *(undefined1 *)(pfVar18 + lVar28 * 0x88 + 0x7a) = 1;
            }
            *(undefined2 *)(pfVar18 + lVar28 * 0x88 + 0x30) = local_191c;
            *(undefined8 *)(pfVar18 + lVar28 * 0x88 + 0x18) = local_190c;
            *(undefined8 *)(pfVar18 + lVar28 * 0x88 + 0x18 + 2) = uStack_1904;
            pfVar18[lVar28 * 0x88 + 0x2c] = local_18cc;
            *(undefined2 *)(pfVar18 + lVar28 * 0x88 + 0x32) = local_18ac;
            *(undefined2 *)(lVar22 + 0xc2 + (longlong)pfVar18) = local_1918;
            *(undefined8 *)(pfVar18 + lVar28 * 0x88 + 0x1c) = local_18fc;
            *(undefined8 *)(pfVar18 + lVar28 * 0x88 + 0x1c + 2) = uStack_18f4;
            pfVar18[lVar28 * 0x88 + 0x2d] = local_18c8;
            *(undefined2 *)(lVar22 + 0xca + (longlong)pfVar18) = local_18aa;
            *(undefined2 *)(pfVar18 + lVar28 * 0x88 + 0x31) = local_1914;
            *(undefined8 *)(pfVar18 + lVar28 * 0x88 + 0x20) = local_18ec;
            *(undefined8 *)(pfVar18 + lVar28 * 0x88 + 0x20 + 2) = uStack_18e4;
            pfVar18[lVar28 * 0x88 + 0x2e] = local_18c4;
            *(undefined2 *)(pfVar18 + lVar28 * 0x88 + 0x33) = local_18a8;
            *(undefined2 *)(lVar22 + 0xc6 + (longlong)pfVar18) = local_1910;
            *(undefined8 *)(pfVar18 + lVar28 * 0x88 + 0x24) = local_18dc;
            *(undefined8 *)(pfVar18 + lVar28 * 0x88 + 0x24 + 2) = uStack_18d4;
            pfVar18[lVar28 * 0x88 + 0x2f] = local_18c0;
            *(undefined8 *)(pfVar18 + lVar28 * 0x88 + 0x28) = local_18bc;
            *(undefined8 *)(pfVar18 + lVar28 * 0x88 + 0x28 + 2) = uStack_18b4;
            *(undefined2 *)(lVar22 + 0xce + (longlong)pfVar18) = local_18a6;
          }
          local_2514 = local_2514 + local_1aa4;
          fVar36 = fVar36 + local_1ab0;
          fVar37 = fVar37 + local_1aac;
          fVar38 = fVar38 + local_1aa8;
          local_2510 = local_2510 + local_1aa0;
          local_2524 = local_2524 + local_1a9c;
          if (local_2608 == 0) {
            lVar22 = *(longlong *)(pfVar18 + lVar28 * 0x88 + 0x74);
            *(undefined8 *)(lVar22 + 8) = local_1a78;
            *(undefined8 *)(lVar22 + 0x10) = uStack_1a70;
            *(undefined8 *)(lVar22 + 0x18) = local_1a68;
            *(undefined8 *)(lVar22 + 0x20) = uStack_1a60;
            *(undefined8 *)(lVar22 + 0x28) = local_1a58;
            *(undefined8 *)(lVar22 + 0x30) = uStack_1a50;
            *(undefined8 *)(lVar22 + 0x38) = local_1a48;
            *(undefined8 *)(lVar22 + 0x40) = uStack_1a40;
            *(undefined8 *)(lVar22 + 0x48) = local_1a38;
            *(undefined8 *)(lVar22 + 0x50) = uStack_1a30;
            *(undefined8 *)(lVar22 + 0x58) = local_1a28;
            *(undefined8 *)(lVar22 + 0x60) = uStack_1a20;
            *(undefined8 *)(lVar22 + 0x68) = local_1a18;
            *(undefined8 *)(lVar22 + 0x70) = uStack_1a10;
            *(undefined1 *)(lVar22 + 0x78) = local_1a08;
            *(undefined1 *)(lVar22 + 0x79) = local_1a07;
            *(undefined1 *)(lVar22 + 0x7a) = local_1a06;
            *(undefined1 *)(lVar22 + 0x7b) = local_1a05;
            *(undefined8 *)(lVar22 + 0x7c) = local_1a04;
            *(undefined8 *)(lVar22 + 0x84) = uStack_19fc;
            *(undefined8 *)(lVar22 + 0x8c) = local_19f4;
            *(undefined8 *)(lVar22 + 0x94) = uStack_19ec;
            *(undefined8 *)(lVar22 + 0x9c) = local_19e4;
            *(undefined8 *)(lVar22 + 0xa4) = uStack_19dc;
            *(undefined8 *)(lVar22 + 0xac) = local_19d4;
            *(undefined8 *)(lVar22 + 0xb4) = uStack_19cc;
            *(undefined8 *)(lVar22 + 0xbc) = local_19c4;
            *(undefined8 *)(lVar22 + 0xc4) = uStack_19bc;
            *(undefined8 *)(lVar22 + 0xcc) = local_19b4;
            *(undefined8 *)(lVar22 + 0xd4) = uStack_19ac;
            *(undefined8 *)(lVar22 + 0xdc) = local_19a4;
            *(undefined8 *)(lVar22 + 0xe4) = uStack_199c;
            *(undefined1 *)(lVar22 + 0xec) = local_1994;
            *(undefined1 *)(lVar22 + 0xed) = local_1993;
            *(undefined1 *)(lVar22 + 0xee) = local_1992;
            *(undefined1 *)(lVar22 + 0xef) = local_1991;
            *(undefined8 *)(lVar22 + 0xf0) = local_1990;
            *(undefined8 *)(lVar22 + 0xf8) = uStack_1988;
            *(undefined8 *)(lVar22 + 0x100) = local_1980;
            *(undefined8 *)(lVar22 + 0x108) = uStack_1978;
            *(undefined8 *)(lVar22 + 0x110) = local_1970;
            *(undefined8 *)(lVar22 + 0x118) = uStack_1968;
            *(undefined8 *)(lVar22 + 0x120) = local_1960;
            *(undefined8 *)(lVar22 + 0x128) = uStack_1958;
            *(undefined8 *)(lVar22 + 0x130) = local_1950;
            *(undefined8 *)(lVar22 + 0x138) = uStack_1948;
            *(undefined8 *)(lVar22 + 0x140) = local_1940;
            *(undefined8 *)(lVar22 + 0x148) = uStack_1938;
            *(undefined8 *)(lVar22 + 0x150) = local_1930;
            *(undefined8 *)(lVar22 + 0x158) = uStack_1928;
            *(undefined1 *)(lVar22 + 0x160) = local_1920;
            *(undefined1 *)(lVar22 + 0x161) = local_191f;
            *(undefined1 *)(lVar22 + 0x162) = local_191e;
            *(undefined1 *)(lVar22 + 0x163) = local_191d;
          }
          uVar23 = (&local_2488)[lVar28];
          local_2498 = local_2514;
          local_2494 = local_2510;
          local_2490 = local_2524;
          physx::PxVehicleUpdate::storeSuspWheelTireResults
                    (local_1cc8,local_2280,local_13a8 + (ulonglong)uVar17 * 0xa0,uVar23);
          physx::PxVehicleUpdate::storeHitActorForces
                    (local_1cc8,local_2668 + (ulonglong)uVar17 * 8,uVar23);
          physx::integrateUndriveWheelRotationSpeeds();
          pfVar44 = local_17d8 + 4;
          puVar26 = &local_26b0;
          puVar43 = local_1ad0;
          pfVar42 = local_17d8;
          puVar8 = &local_1b70;
          pfVar45 = local_2588;
          physx::integrateWheelRotationAngles();
          lVar28 = lVar28 + 1;
          local_26f8 = local_26f8 + 1;
          pfVar9 = local_2588;
          uVar17 = local_2608;
          uVar23 = local_26d0;
          fVar32 = fVar36;
          fVar35 = fVar37;
          fVar40 = fVar38;
        } while (local_26f8 < local_26d0);
      }
      local_2568 = fVar40;
      local_256c = fVar35;
      local_2570 = fVar32;
      physx::procesAntiRollSuspension
                (param_6 + 0x10,&local_2550,local_13a8,&local_2498,puVar8,pfVar42,puVar43,puVar26,
                 pfVar44,lVar21,pfVar45,pfVar46);
      uVar30 = (undefined4)((ulonglong)puVar8 >> 0x20);
      pbVar11 = (byte *)(**(code **)(*local_2520 + 0x60))(local_2520,local_2628);
      if ((*pbVar11 & 2) != 0) {
        fVar32 = 1.0 / local_2528;
        local_2570 = fVar36 + fVar32 * *param_2;
        local_2568 = fVar38 + fVar32 * param_2[2];
        local_256c = fVar37 + fVar32 * param_2[1];
      }
      physx::integrateBody
                (*pbVar11 & 2,&local_23b8,&local_2570,&local_2498,CONCAT44(uVar30,fVar39),
                 &local_2580,&local_2560,&local_2550);
      local_2608 = uVar17 + 1;
      fVar38 = local_2558;
      fVar39 = local_255c;
      fVar36 = local_2560;
      fVar37 = local_2578;
      fVar32 = local_257c;
      fVar35 = local_2580;
      uVar17 = local_262c;
      if (local_2460 <= local_2608) break;
      local_2638 = local_2538;
      local_2634 = local_253c;
      local_2630 = local_2540;
      local_2678 = local_2544;
      local_26c4 = local_2548;
      local_26ac = local_254c;
      local_26a8 = local_2550;
      local_26a4 = local_2558;
      local_26a0 = local_255c;
      local_269c = local_2560;
      local_2688 = local_2580;
      local_2674 = local_2578;
      local_2670 = local_257c;
    } while( true );
  }
  if (DAT_146b95e00 == '\0') {
    local_265c = CONCAT44(fVar32,fVar35);
    uStack_2654 = CONCAT44(fVar36,fVar37);
    local_264c = CONCAT44(fVar38,fVar39);
  }
  else {
    local_265c = CONCAT44(local_2470 * (fVar32 - local_245c),
                          local_2470 * (fVar35 - (float)local_2428));
    local_264c = CONCAT44(local_2470 * (fVar38 - local_2438._0_4_),
                          local_2470 * (fVar39 - local_2440._0_4_));
    uStack_2654 = CONCAT44(local_2470 * (fVar36 - fVar29),local_2470 * (fVar37 - local_244c));
  }
  local_25f8 = 0;
  uStack_25f0 = 0x3f80000000000000;
  local_25e8 = 0;
  local_25e0 = 0;
  uStack_25dc = 0;
  uStack_25d8 = 0;
  uStack_25d4 = 0;
  uStack_25d0 = 0x3f800000;
  uStack_25cc = 0;
  local_25c8 = 0;
  local_25c0 = 0;
  local_25b8 = 0;
  local_25b4 = 0x3f800000;
  local_25ac = 0;
  local_25a4 = 0;
  local_259c = 0;
  local_2598 = 0x3f800000;
  local_2590 = 0;
  physx::computeWheelLocalPoses(lVar27,pfVar18,local_13a8,local_2488,&local_2420,&local_25f8);
  local_1324 = local_25f8;
  uStack_131c = uStack_25f0;
  local_1270 = (undefined4)local_25c8;
  *local_2668 = local_25f8;
  local_2668[1] = uStack_25f0;
  *(undefined4 *)(local_2668 + 2) = (undefined4)local_25e8;
  uStack_1314 = (undefined4)local_25e8;
  *(undefined4 *)((longlong)local_2668 + 0x14) = local_25e8._4_4_;
  local_1310 = local_25e8._4_4_;
  *(undefined4 *)(local_2668 + 3) = local_25e0;
  auStack_130c[0] = local_25e0;
  local_2668[8] = CONCAT44(uStack_25d8,uStack_25dc);
  local_2668[9] = CONCAT44(uStack_25d0,uStack_25d4);
  local_1284 = CONCAT44(uStack_25d8,uStack_25dc);
  uStack_127c = CONCAT44(uStack_25d0,uStack_25d4);
  local_1274 = uStack_25cc;
  local_112c = local_2590._4_4_;
  local_126c = local_25c8._4_4_;
  local_11e4 = (undefined4)local_25c0;
  local_11e0 = local_25c0._4_4_;
  local_11dc = local_25b8;
  local_11d8 = (undefined4)local_25b4;
  local_11d4 = local_25b4._4_4_;
  local_11d0 = (undefined4)local_25ac;
  local_11cc = local_25ac._4_4_;
  local_1144 = (undefined4)local_25a4;
  local_1140 = local_25a4._4_4_;
  local_113c = local_259c;
  local_1138 = (undefined4)local_2598;
  local_1134 = local_2598._4_4_;
  local_1130 = (undefined4)local_2590;
  *(undefined4 *)(local_2668 + 10) = uStack_25cc;
  *(undefined4 *)((longlong)local_2668 + 0x54) = (undefined4)local_25c8;
  *(undefined4 *)(local_2668 + 0xb) = local_25c8._4_4_;
  *(undefined4 *)(local_2668 + 0x10) = (undefined4)local_25c0;
  *(undefined4 *)((longlong)local_2668 + 0x84) = local_25c0._4_4_;
  *(undefined4 *)(local_2668 + 0x11) = local_25b8;
  *(undefined4 *)((longlong)local_2668 + 0x8c) = (undefined4)local_25b4;
  *(undefined4 *)(local_2668 + 0x12) = local_25b4._4_4_;
  *(undefined4 *)((longlong)local_2668 + 0x94) = (undefined4)local_25ac;
  *(undefined4 *)(local_2668 + 0x13) = local_25ac._4_4_;
  *(undefined4 *)(local_2668 + 0x18) = (undefined4)local_25a4;
  *(undefined4 *)((longlong)local_2668 + 0xc4) = local_25a4._4_4_;
  *(undefined4 *)(local_2668 + 0x19) = local_259c;
  *(undefined4 *)((longlong)local_2668 + 0xcc) = (undefined4)local_2598;
  *(undefined4 *)(local_2668 + 0x1a) = local_2598._4_4_;
  *(undefined4 *)((longlong)local_2668 + 0xd4) = (undefined4)local_2590;
  *(undefined4 *)(local_2668 + 0x1b) = local_2590._4_4_;
  if (1 < local_26d0) {
    puVar8 = &local_2484;
    puVar20 = local_fec;
    uVar25 = local_2640;
    lVar21 = 0x180;
    do {
      pfVar18 = pfVar18 + 0x88;
      lVar27 = lVar27 + 0x3b0;
      local_2508 = 0;
      uStack_2500 = 0x3f80000000000000;
      local_24e8 = 0;
      uStack_24e4 = 0;
      uStack_24e0 = 0x3f800000;
      uStack_24dc = 0;
      local_24c8 = 0x3f80000000000000;
      uStack_24c0 = 0;
      local_24a8 = 0x3f800000;
      uStack_24a0 = 0;
      local_24f8 = 0;
      uStack_24f0 = 0;
      uStack_24ec = 0;
      local_24d8 = 0;
      uStack_24d0 = 0;
      local_24b8 = 0;
      uStack_24b0 = 0;
      physx::computeWheelLocalPoses
                (lVar27,pfVar18,puVar20 + -0x4f,*(undefined4 *)puVar8,&local_2420,&local_2508);
      *(undefined8 *)(puVar20 + -0x2e) = local_2508;
      *(undefined8 *)(puVar20 + -0x2c) = uStack_2500;
      puVar20[-0x2a] = (undefined4)local_24f8;
      puVar20[-0x29] = local_24f8._4_4_;
      puVar20[-0x28] = uStack_24f0;
      *(ulonglong *)(puVar20 + -6) = CONCAT44(local_24e8,uStack_24ec);
      *(ulonglong *)(puVar20 + -4) = CONCAT44(uStack_24e0,uStack_24e4);
      puVar20[-1] = (undefined4)local_24d8;
      puVar20[-2] = uStack_24dc;
      *puVar20 = local_24d8._4_4_;
      *(undefined8 *)((longlong)local_2668 + lVar21 + -0x80) = local_2508;
      *(undefined8 *)((longlong)local_2668 + lVar21 + -0x78) = uStack_2500;
      puVar20[0x22] = (undefined4)uStack_24d0;
      puVar20[0x23] = uStack_24d0._4_4_;
      puVar20[0x24] = (undefined4)local_24c8;
      puVar20[0x25] = local_24c8._4_4_;
      *(undefined4 *)((longlong)local_2668 + lVar21 + -0x70) = (undefined4)local_24f8;
      *(undefined4 *)((longlong)local_2668 + lVar21 + -0x6c) = local_24f8._4_4_;
      puVar20[0x26] = (undefined4)uStack_24c0;
      puVar20[0x27] = uStack_24c0._4_4_;
      puVar20[0x28] = (undefined4)local_24b8;
      *(undefined4 *)((longlong)local_2668 + lVar21 + -0x68) = uStack_24f0;
      puVar20[0x4a] = local_24b8._4_4_;
      puVar20[0x4b] = (undefined4)uStack_24b0;
      puVar20[0x4c] = uStack_24b0._4_4_;
      puVar20[0x4d] = (undefined4)local_24a8;
      *(ulonglong *)((longlong)local_2668 + lVar21 + -0x40) = CONCAT44(local_24e8,uStack_24ec);
      *(ulonglong *)((longlong)local_2668 + lVar21 + -0x38) = CONCAT44(uStack_24e0,uStack_24e4);
      *(undefined4 *)((longlong)local_2668 + lVar21 + -0x30) = uStack_24dc;
      puVar20[0x4e] = local_24a8._4_4_;
      puVar20[0x4f] = (undefined4)uStack_24a0;
      puVar20[0x50] = uStack_24a0._4_4_;
      puVar20 = puVar20 + 0xa0;
      *(undefined4 *)((longlong)local_2668 + lVar21 + -0x2c) = (undefined4)local_24d8;
      puVar8 = (undefined8 *)((longlong)puVar8 + 4);
      *(undefined4 *)((longlong)local_2668 + lVar21 + -0x28) = local_24d8._4_4_;
      puVar13 = (undefined4 *)((longlong)local_2668 + lVar21);
      *puVar13 = (undefined4)uStack_24d0;
      puVar13[1] = uStack_24d0._4_4_;
      puVar13[2] = (undefined4)local_24c8;
      puVar13[3] = local_24c8._4_4_;
      puVar13[4] = (undefined4)uStack_24c0;
      puVar13[5] = uStack_24c0._4_4_;
      puVar13[6] = (undefined4)local_24b8;
      *(undefined4 *)((longlong)local_2668 + lVar21 + 0x40) = local_24b8._4_4_;
      *(undefined4 *)((longlong)local_2668 + lVar21 + 0x44) = (undefined4)uStack_24b0;
      *(undefined4 *)((longlong)local_2668 + lVar21 + 0x48) = uStack_24b0._4_4_;
      *(undefined4 *)((longlong)local_2668 + lVar21 + 0x4c) = (undefined4)local_24a8;
      *(undefined4 *)((longlong)local_2668 + lVar21 + 0x50) = local_24a8._4_4_;
      *(undefined4 *)((longlong)local_2668 + lVar21 + 0x54) = (undefined4)uStack_24a0;
      *(undefined4 *)((longlong)local_2668 + lVar21 + 0x58) = uStack_24a0._4_4_;
      uVar25 = uVar25 - 1;
      lVar21 = lVar21 + 0x100;
      uVar17 = local_262c;
    } while (uVar25 != 0);
  }
  uVar23 = local_26cc;
  if ((param_7 != (undefined8 *)0x0) && ((void *)*param_7 != (void *)0x0)) {
    _guard_xfg_dispatch_icall_nop((void *)*param_7,local_13a8,(ulonglong)(local_26cc * 0xa0));
  }
  if (param_8 == (undefined8 *)0x0) {
    local_2378 = param_6;
    physx::PxVehicleUpdate::updatePost(&local_2668,1,&local_2378);
  }
  else {
    _guard_xfg_dispatch_icall_nop((void *)*param_8,local_2668,(ulonglong)(uVar23 << 6));
    *(undefined8 *)((longlong)param_8 + 0xc) = local_265c;
    *(undefined8 *)((longlong)param_8 + 0x14) = uStack_2654;
    *(undefined4 *)((longlong)param_8 + 0x1c) = (undefined4)local_264c;
    *(undefined4 *)(param_8 + 4) = local_264c._4_4_;
    *(undefined1 *)((longlong)param_8 + 0x24) = (undefined1)local_2644;
    *(undefined1 *)((longlong)param_8 + 0x25) = local_2644._1_1_;
  }
LAB_143966130:
  MXCSR = uVar17 & 0xffffffc0;
  return;
}



// FUNCTION 1439661d0 FUN_1439661d0 body=11247 status=ok
// SIG undefined FUN_1439661d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1439661d0(float param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,longlong param_6,undefined8 *param_7,undefined8 *param_8)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  uint uVar22;
  undefined4 uVar23;
  char cVar24;
  char cVar25;
  int iVar26;
  undefined8 *puVar27;
  float *pfVar28;
  undefined4 *puVar29;
  undefined1 *puVar30;
  byte *pbVar31;
  uint uVar32;
  ulonglong uVar33;
  uint *puVar34;
  undefined4 *puVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulonglong uVar39;
  float *pfVar40;
  float *pfVar42;
  longlong lVar43;
  longlong lVar44;
  longlong *plVar45;
  float *pfVar46;
  float *pfVar47;
  undefined1 *puVar48;
  undefined4 *puVar49;
  undefined4 *puVar50;
  ulonglong uVar51;
  longlong *plVar52;
  undefined4 *puVar53;
  uint uVar54;
  ulonglong uVar55;
  float *pfVar56;
  longlong lVar57;
  undefined1 *puVar58;
  longlong lVar59;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 *in_stack_ffffffffffffca28;
  float local_3580;
  char local_3578;
  float local_3568;
  undefined1 *local_3560;
  float local_354c;
  float local_3548;
  uint local_3540;
  float local_353c;
  float local_3538;
  float local_3534;
  float local_3530;
  undefined8 *local_3520;
  uint local_3518;
  undefined8 local_3514;
  undefined8 uStack_350c;
  undefined8 local_3504;
  undefined2 local_34fc;
  undefined8 local_34f8;
  undefined8 local_34f0;
  undefined4 local_34e8;
  float local_34dc;
  float local_34d8;
  undefined4 local_34d4;
  float local_34d0;
  float local_34cc;
  float local_34c8;
  undefined1 local_34c4 [12];
  undefined8 local_34b8;
  undefined8 uStack_34b0;
  undefined8 local_34a8;
  undefined4 local_34a0;
  undefined4 uStack_349c;
  undefined4 uStack_3498;
  undefined4 uStack_3494;
  undefined4 uStack_3490;
  undefined4 uStack_348c;
  undefined8 local_3488;
  undefined8 local_3480;
  undefined4 local_3478;
  undefined8 local_3474;
  undefined8 local_346c;
  undefined8 local_3464;
  undefined4 local_345c;
  undefined8 local_3458;
  undefined8 local_3450;
  longlong *local_3448;
  float local_3440;
  float local_343c;
  float local_3438;
  float local_3430;
  float local_342c;
  float local_3428;
  float local_3420;
  float local_341c;
  float local_3418;
  float local_3410;
  float local_340c;
  float local_3408;
  float local_3400;
  float local_33fc;
  float local_33f8;
  float local_33f4;
  float local_33f0;
  float local_33ec;
  float local_33e8;
  float local_33e4;
  float local_33e0;
  float local_33d8;
  undefined8 local_33c8;
  undefined8 uStack_33c0;
  undefined8 local_33b8;
  undefined4 uStack_33b0;
  undefined4 uStack_33ac;
  undefined4 local_33a8;
  undefined4 uStack_33a4;
  undefined4 uStack_33a0;
  undefined4 uStack_339c;
  undefined8 local_3398;
  undefined8 uStack_3390;
  undefined8 local_3388;
  undefined8 uStack_3380;
  undefined8 local_3378;
  undefined8 uStack_3370;
  undefined8 local_3368;
  undefined8 uStack_3360;
  float *local_3358;
  longlong local_3350;
  longlong local_3348;
  float local_3340;
  longlong *local_3338;
  float local_3330;
  undefined4 local_332c;
  float local_3328;
  float local_3324;
  float local_3320;
  float local_331c;
  float local_3318;
  undefined4 local_3314;
  float local_3310;
  float local_330c;
  float local_3308 [20];
  float local_32b8;
  uint local_32b0;
  undefined8 local_32ac;
  undefined8 local_32a4;
  undefined8 local_3298;
  undefined8 uStack_3290;
  float local_3288;
  float local_3284;
  float local_3280;
  undefined8 local_3278;
  undefined8 local_3270;
  undefined4 local_3268;
  undefined4 *local_3260;
  longlong local_3258;
  undefined1 *local_3250;
  longlong *local_3248;
  float *local_3240;
  undefined4 *local_3238;
  undefined8 local_3230;
  undefined8 local_3228;
  undefined4 local_3220;
  undefined4 local_3218;
  undefined4 local_3214;
  undefined4 local_3210;
  undefined8 local_3208;
  float fStack_3200;
  undefined4 uStack_31fc;
  float local_31f8;
  float local_31f4;
  float local_31f0;
  float local_31ec;
  undefined4 local_31d8 [20];
  longlong local_3188;
  float local_3180;
  float local_317c;
  float local_3178;
  float local_3174;
  float local_3170;
  float local_316c;
  undefined4 local_3168;
  undefined4 local_3164;
  undefined1 local_3160;
  undefined4 local_315c;
  longlong *local_3158;
  undefined8 local_3150;
  char local_3148 [8];
  longlong local_3140;
  longlong local_3138;
  float *local_3130;
  longlong local_3128;
  float local_3120;
  float local_311c;
  float local_3118;
  float local_3114;
  float local_3110;
  float local_310c;
  float local_3108;
  float local_3104;
  float local_3100;
  float local_30fc;
  float local_30f8;
  float local_30f4;
  float local_30f0;
  undefined4 *local_30e8;
  undefined4 *local_30e0;
  longlong local_30d8;
  longlong local_30d0;
  undefined1 *local_30c8;
  longlong local_30c0;
  uint local_30b8;
  longlong local_30a8;
  float *local_30a0;
  float local_3098;
  float local_3094;
  float local_3090;
  undefined4 local_308c;
  float local_3088;
  undefined4 local_3084;
  undefined4 local_3080;
  float local_307c;
  float local_3078;
  float *local_3070;
  float *local_3068;
  float *local_3060;
  undefined8 *local_3058;
  undefined4 *local_3050;
  uint local_3048;
  uint local_3044;
  longlong local_3040;
  float *local_3038;
  undefined1 local_2fe8 [12];
  undefined1 local_2fdc [36];
  float local_2fb8 [16];
  uint local_2f78;
  float local_2f64;
  float local_2f5c;
  float local_2f58;
  float local_2f54;
  float local_2f4c;
  float local_2f48 [32];
  float local_2ec8;
  undefined4 local_2eb8;
  undefined4 local_2eb4;
  undefined4 local_2eb0;
  float local_2ea8 [32];
  float local_2e28 [32];
  undefined8 local_2da8;
  undefined8 uStack_2da0;
  undefined1 local_2d98 [16];
  float local_2d88 [20];
  float local_2d38 [20];
  float local_2ce8 [20];
  undefined1 local_2c98 [28];
  undefined1 local_2c7c [28];
  undefined1 local_2c60 [40];
  undefined4 local_2c38 [20];
  undefined1 local_2be8 [132];
  undefined8 local_2b64;
  undefined8 uStack_2b5c;
  undefined4 uStack_2b54;
  undefined4 local_2b50;
  undefined4 auStack_2b4c [34];
  undefined8 local_2ac4;
  undefined8 uStack_2abc;
  undefined4 local_2ab4;
  undefined4 local_2ab0;
  undefined4 local_2aac;
  undefined4 local_2a24;
  undefined4 local_2a20;
  undefined4 local_2a1c;
  undefined4 local_2a18;
  undefined4 local_2a14;
  undefined4 local_2a10;
  undefined4 local_2a0c;
  undefined4 local_2984;
  undefined4 local_2980;
  undefined4 local_297c;
  undefined4 local_2978;
  undefined4 local_2974;
  undefined4 local_2970;
  undefined4 local_296c;
  undefined4 local_282c [561];
  undefined1 local_1f68 [8];
  undefined8 local_1f60 [4];
  longlong local_1f40 [25];
  undefined4 local_1e78 [80];
  undefined8 local_1d38 [3];
  undefined1 auStack_1d20 [1256];
  undefined1 local_1838 [280];
  undefined1 local_1720 [64];
  undefined1 local_16e0 [180];
  undefined4 local_162c [51];
  undefined4 local_1560 [77];
  undefined1 local_142c [5092];
  undefined8 uStack_48;
  ulonglong uVar41;
  
  uVar22 = MXCSR;
  uStack_48 = 0x143966205;
  uVar54 = 0;
  MXCSR = 0x9fc0;
  if (*(int *)(param_6 + 0x38) != 0) {
    uVar39 = 0;
    do {
      puVar50 = (undefined4 *)((ulonglong)uVar54 * 0x220 + *(longlong *)(param_6 + 0x70));
      iVar26 = (int)uVar39;
      if ((&DAT_146b95e40)[uVar39] != 0) {
        *(undefined4 *)((&DAT_146b95e40)[uVar39] + 0x10) = *puVar50;
        *(undefined4 *)((&DAT_146b95e40)[iVar26 + 1] + 0x10) = puVar50[1];
        *(undefined4 *)((&DAT_146b95e40)[iVar26 + 2] + 0x10) = puVar50[2];
        *(undefined4 *)((&DAT_146b95e40)[iVar26 + 3] + 0x10) = puVar50[3];
      }
      uVar54 = uVar54 + 1;
      uVar39 = (ulonglong)(iVar26 + 4);
    } while (uVar54 < *(uint *)(param_6 + 0x38));
  }
  if (DAT_146b95ee0 != (undefined4 *)0x0) {
    *DAT_146b95ee0 = *(undefined4 *)(param_6 + 0x10c);
  }
  local_3348 = *(longlong *)(param_6 + 0x30);
  plVar1 = (longlong *)(param_6 + 0x70);
  uVar54 = *(uint *)(param_6 + 0x38);
  uVar39 = (ulonglong)uVar54;
  uVar15 = *(uint *)(param_6 + 0x3c);
  local_3350 = param_6 + 0x10;
  lVar57 = *plVar1;
  physx::PxVehicleDriveSimData::PxVehicleDriveSimData(local_2fb8,param_6 + 0x120);
  local_2da8 = *(undefined8 *)(param_6 + 0x330);
  uStack_2da0 = *(undefined8 *)(param_6 + 0x338);
  pfVar28 = (float *)(param_6 + 0xc0);
  puVar27 = local_1d38;
  local_3448 = *(longlong **)(param_6 + 0xa0);
  puVar58 = auStack_1d20;
  lVar43 = 0x14;
  lVar44 = 0x14;
  do {
    *(undefined4 *)puVar27 = 0;
    puVar27 = puVar27 + 8;
    *(undefined8 *)(puVar58 + -0x14) = 0;
    *(undefined8 *)(puVar58 + -0xc) = 0x3f800000;
    *(undefined8 *)(puVar58 + -4) = 0;
    *(undefined8 *)(puVar58 + 0x10) = 0;
    *(undefined8 *)(puVar58 + 0x18) = 0;
    *(undefined8 *)(puVar58 + 0x20) = 0;
    *(undefined8 *)(puVar58 + 8) = 0;
    puVar58 = puVar58 + 0x40;
    lVar44 = lVar44 + -1;
  } while (lVar44 != 0);
  local_3520 = local_1d38;
  local_3514 = 0;
  uVar36 = uVar54 - 1;
  uStack_350c = 0;
  local_3504 = 0;
  local_34fc = 0;
  local_32b0 = 4;
  if (uVar15 < 4) {
    local_32b0 = uVar15;
  }
  local_32ac = 0;
  local_32a4 = 0;
  if (1 < uVar36) {
    puVar27 = &local_32ac;
    for (uVar33 = (ulonglong)(uVar54 - 2); uVar33 != 0; uVar33 = uVar33 - 1) {
      *(undefined4 *)puVar27 = 4;
      puVar27 = (undefined8 *)((longlong)puVar27 + 4);
    }
  }
  (&local_32b0)[uVar36] = (1 - uVar54) * 4 + uVar15;
  bVar21 = false;
  uVar33 = (ulonglong)uVar36;
  local_3518 = uVar15;
  local_3358 = pfVar28;
  fVar60 = (float)physx::PxVehicleDriveDynData::getAnalogInput(pfVar28);
  if ((((fVar60 != 0.0) ||
       (fVar60 = (float)physx::PxVehicleDriveDynData::getAnalogInput(pfVar28), fVar60 != 0.0)) ||
      (fVar60 = (float)physx::PxVehicleDriveDynData::getAnalogInput(pfVar28), fVar60 != 0.0)) ||
     ((*(char *)(param_6 + 0x102) != '\0' || (*(char *)(param_6 + 0x101) != '\0')))) {
    bVar21 = true;
  }
  cVar24 = (**(code **)(*local_3448 + 0x1f0))(local_3448);
  if (cVar24 != '\0') {
    if ((!bVar21) && (cVar24 = FUN_143970090(local_3350), cVar24 == '\0')) {
      *(undefined4 *)(param_6 + 0x10c) = 0;
      uVar54 = *(int *)(param_6 + 0x8c) + 3;
      if (uVar54 >> 2 != 0) {
        puVar50 = (undefined4 *)(*plVar1 + 0x50);
        uVar39 = (ulonglong)(uVar54 >> 2);
        do {
          *(undefined8 *)(puVar50 + -0x14) = 0;
          *(undefined8 *)(puVar50 + -0x10) = 0;
          *puVar50 = 0x7f7fffff;
          puVar50[1] = 0x7f7fffff;
          *(undefined8 *)(puVar50 + -0x12) = 0;
          *(undefined8 *)(puVar50 + -0xe) = 0;
          puVar50[2] = 0x7f7fffff;
          puVar50[3] = 0x7f7fffff;
          puVar50 = puVar50 + 0x88;
          uVar39 = uVar39 - 1;
        } while (uVar39 != 0);
      }
      *(undefined4 *)(param_6 + 0x10c) = 0;
      if (param_8 != (undefined8 *)0x0) {
        *(undefined1 *)((longlong)param_8 + 0x24) = 1;
      }
      goto LAB_143968d5c;
    }
    local_34fc = CONCAT11(1,(undefined1)local_34fc);
  }
  if (uVar54 != 0) {
    plVar45 = *(longlong **)(param_6 + 0x78);
    puVar27 = local_1f60;
    lVar44 = 0x10;
    plVar52 = local_1f40;
    uVar55 = uVar39;
    do {
      puVar27[-1] = *(undefined8 *)(lVar44 + -0x10 + *plVar45);
      *puVar27 = *(undefined8 *)(lVar44 + -8 + *plVar45);
      puVar27[1] = *(undefined8 *)(lVar44 + *plVar45);
      puVar27[2] = *(undefined8 *)(lVar44 + 8 + *plVar45);
      plVar52[-1] = plVar45[1];
      *plVar52 = plVar45[2];
      uVar55 = uVar55 - 1;
      puVar27 = puVar27 + 6;
      lVar44 = lVar44 + 0x20;
      plVar52 = plVar52 + 6;
    } while (uVar55 != 0);
    if (uVar54 != 0) {
      plVar45 = (longlong *)(lVar57 + 0x1d0);
      do {
        (**(code **)(**(longlong **)(*plVar45 + 0x168) + 0x40))();
        plVar45 = plVar45 + 0x44;
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
    }
  }
  puVar58 = local_2be8;
  puVar50 = auStack_2b4c;
  do {
    _guard_xfg_dispatch_icall_nop(puVar58,0,0xa0);
    plVar45 = local_3448;
    *(undefined1 *)(puVar50 + -0x20) = 1;
    puVar50[-0x19] = 0xffffffff;
    puVar58 = puVar58 + 0xa0;
    *(undefined8 *)(puVar50 + -6) = 0;
    puVar50[-4] = 0;
    *(undefined8 *)(puVar50 + -3) = 0x3f800000;
    *(undefined8 *)(puVar50 + -1) = 0;
    puVar50 = puVar50 + 0x28;
    lVar43 = lVar43 + -1;
  } while (lVar43 != 0);
  puVar27 = (undefined8 *)(**(code **)(*local_3448 + 0xf0))(local_3448,local_2c98);
  local_3298 = *puVar27;
  uStack_3290 = puVar27[1];
  fVar60 = *(float *)(puVar27 + 2);
  fVar67 = *(float *)((longlong)puVar27 + 0x14);
  fVar66 = *(float *)(puVar27 + 3);
  local_3288 = fVar60;
  local_3284 = fVar67;
  local_3280 = fVar66;
  pfVar28 = (float *)(**(code **)(*plVar45 + 0xa0))(plVar45,local_2c7c);
  fVar60 = fVar60 * 2.0;
  fVar68 = pfVar28[3];
  fVar70 = pfVar28[1];
  fVar65 = *pfVar28;
  fVar62 = pfVar28[2];
  fVar67 = fVar67 * 2.0;
  fVar66 = fVar66 * 2.0;
  fVar64 = fVar68 * fVar68 - 0.5;
  fVar63 = fVar65 * fVar60 + fVar70 * fVar67 + fVar62 * fVar66;
  fVar71 = (fVar65 * fVar67 - fVar70 * fVar60) * fVar68 + fVar64 * fVar66 + fVar62 * fVar63 +
           pfVar28[6];
  fVar69 = (fVar62 * fVar60 - fVar65 * fVar66) * fVar68 + fVar64 * fVar67 + fVar70 * fVar63 +
           pfVar28[5];
  local_3568 = (fVar70 * fVar66 - fVar62 * fVar67) * fVar68 + fVar64 * fVar60 + fVar65 * fVar63 +
               pfVar28[4];
  local_3400 = fVar71;
  local_33fc = fVar69;
  pfVar28 = (float *)physx::PxQuat::operator*(pfVar28,local_2d98,&local_3298);
  local_34c8 = *pfVar28;
  local_34cc = pfVar28[1];
  local_353c = pfVar28[2];
  local_34d0 = pfVar28[3];
  local_33f8 = local_34c8;
  local_33f4 = local_34cc;
  local_33f0 = local_353c;
  local_33ec = local_34d0;
  local_33e8 = local_3568;
  local_33e4 = fVar69;
  local_33e0 = fVar71;
  local_31f8 = local_34c8;
  local_31f4 = local_34cc;
  local_31f0 = local_353c;
  local_31ec = local_34d0;
  local_33d8 = (float)(**(code **)(*plVar45 + 0x100))(plVar45);
  local_33d8 = 1.0 / local_33d8;
  puVar50 = (undefined4 *)(**(code **)(*plVar45 + 0x120))(plVar45,local_2fe8);
  local_3218 = *puVar50;
  local_3214 = puVar50[1];
  local_3210 = puVar50[2];
  pfVar28 = (float *)(**(code **)(*plVar45 + 0x128))(plVar45,local_2fdc);
  local_354c = *pfVar28;
  local_3580 = pfVar28[1];
  local_3538 = pfVar28[2];
  local_3420 = local_354c;
  local_341c = local_3580;
  local_3418 = local_3538;
  pfVar28 = (float *)(**(code **)(*plVar45 + 0x138))(plVar45);
  lVar43 = local_3350;
  uVar36 = 0;
  fVar60 = *pfVar28;
  local_3530 = pfVar28[1];
  local_3534 = pfVar28[2];
  local_3410 = fVar60;
  local_340c = local_3530;
  local_3408 = local_3534;
  if (uVar15 != 0) {
    puVar50 = local_2c38;
    puVar35 = local_1e78 + 2;
    do {
      iVar26 = physx::PxVehicleWheelsSimData::getWheelShapeMapping(lVar43);
      if (iVar26 != -1) {
        local_3248 = (longlong *)0x0;
        (**(code **)(*plVar45 + 0xd0))(local_3448,&local_3248,1);
        puVar29 = (undefined4 *)(**(code **)(*local_3248 + 0x90))(local_3248,local_2c60);
        puVar35[-2] = *puVar29;
        puVar35[-1] = puVar29[1];
        *puVar35 = puVar29[2];
        puVar35[1] = puVar29[3];
        uVar61 = physx::PxVehicleWheelsDynData::getWheelRotationAngle(plVar1);
        *puVar50 = uVar61;
        plVar45 = local_3448;
      }
      uVar36 = uVar36 + 1;
      puVar35 = puVar35 + 4;
      puVar50 = puVar50 + 1;
    } while (uVar36 < uVar15);
  }
  pfVar28 = local_3358;
  uVar39 = (ulonglong)uVar54;
  local_34dc = *local_3358;
  if (*(char *)(local_3358 + 0x10) != '\0') {
    fVar67 = local_3358[0x11];
    if ((local_3358[0x12] != fVar67) && (fVar67 == 1.4013e-45)) {
      local_34dc = 0.0;
    }
    if ((local_3358[0x12] != fVar67) || (local_3358[0x15] <= local_2e28[0])) {
      local_3358[0x15] = local_3358[0x15] + param_1;
    }
    else {
      fVar66 = local_3358[0x13] * local_2f4c;
      cVar24 = '\0';
      if (local_2ea8[(uint)fVar67] <= fVar66 && fVar66 != local_2ea8[(uint)fVar67]) {
        cVar24 = '\0';
        if (fVar67 != 0.0) {
          cVar24 = '\x01';
        }
      }
      cVar25 = '\0';
      if ((fVar66 < local_2e28[(uint)fVar67]) && (cVar25 = '\0', 2 < (uint)fVar67)) {
        cVar25 = '\x01';
      }
      if ((cVar24 != '\0') || (cVar25 != '\0')) {
        *(char *)((longlong)local_3358 + 0x41) = cVar24;
        *(char *)((longlong)local_3358 + 0x42) = cVar25;
        local_3358[0x15] = 0.0;
      }
    }
  }
  fVar67 = local_34dc;
  physx::processGears();
  local_32b8 = pfVar28[0x11];
  if (local_32b8 == 1.4013e-45) {
    local_34d4 = 0;
  }
  else {
    local_34d4 = local_2eb8;
  }
  local_34d8 = local_2ec8 * local_2f48[(uint)local_32b8];
  local_3314 = local_2eb4;
  local_332c = local_2eb0;
  if (DAT_146b95ee0 != (undefined4 *)0x0) {
    DAT_146b95ee0[8] = local_34d8;
  }
  fVar66 = pfVar28[4];
  fVar68 = pfVar28[1];
  fVar70 = pfVar28[2];
  fVar65 = pfVar28[3];
  if ((fVar67 <= 0.0) || (local_3578 = '\x01', local_32b8 == 1.4013e-45)) {
    local_3578 = '\0';
  }
  if (DAT_146b95ee0 != (undefined4 *)0x0) {
    DAT_146b95ee0[3] = fVar67;
    DAT_146b95ee0[4] = fVar68;
    DAT_146b95ee0[5] = fVar70;
    DAT_146b95ee0[6] = fVar65;
    DAT_146b95ee0[7] = fVar66;
  }
  local_3278 = 0;
  local_3270 = 0;
  local_3268 = 0;
  if (uVar54 != 0) {
    uVar36 = 2;
    uVar51 = 0;
    uVar55 = uVar39;
    do {
      puVar58 = (undefined1 *)((longlong)&local_3278 + uVar51 + 2);
      if ((*(uint *)(param_6 + 0x50 + (uVar51 >> 5) * 4) >> (uVar36 - 2 & 0x1f) & 1) != 0) {
        *(undefined1 *)((longlong)&local_3278 + uVar51) = 1;
      }
      if ((*(uint *)(param_6 + 0x50 +
                    ((ulonglong)((longlong)puVar58 - ((longlong)&local_3278 + 1)) >> 5) * 4) >>
           (uVar36 - 1 & 0x1f) & 1) != 0) {
        *(undefined1 *)((longlong)&local_3278 + uVar51 + 1) = 1;
      }
      if ((*(uint *)(param_6 + 0x50 +
                    ((ulonglong)((longlong)puVar58 - (longlong)&local_3278) >> 5) * 4) >>
           (uVar36 & 0x1f) & 1) != 0) {
        *puVar58 = 1;
      }
      if ((*(uint *)(param_6 + 0x50 +
                    ((ulonglong)(puVar58 + (3 - ((longlong)&local_3278 + 2))) >> 5) * 4) >>
           (uVar36 + 1 & 0x1f) & 1) != 0) {
        *(undefined1 *)((longlong)&local_3278 + uVar51 + 3) = 1;
      }
      uVar51 = uVar51 + 4;
      uVar36 = uVar36 + 4;
      uVar55 = uVar55 - 1;
    } while (uVar55 != 0);
  }
  fVar67 = (float)uStack_2da0;
  local_3208 = local_2da8;
  fStack_3200 = (float)uStack_2da0;
  uStack_31fc = uStack_2da0._4_4_;
  local_3340 = fVar70;
  local_3330 = fVar68;
  _guard_xfg_dispatch_icall_nop(local_3308,0,0x50);
  uVar36 = 0;
  if (uVar15 != 0) {
    pfVar42 = local_3308;
    do {
      cVar24 = physx::PxVehicleDifferentialNWData::getIsDrivenWheel(&local_3208);
      fVar62 = fVar67;
      if (cVar24 == '\0') {
        fVar62 = 0.0;
      }
      *pfVar42 = fVar62;
      uVar36 = uVar36 + 1;
      pfVar42 = pfVar42 + 1;
    } while (uVar36 < uVar15);
  }
  if (DAT_146b95ee0 != (undefined4 *)0x0) {
    uVar36 = 0;
    fVar62 = 0.0;
    if (3 < uVar54) {
      uVar55 = 2;
      uVar36 = (uVar54 - 4 >> 2) + 1;
      pfVar42 = (float *)(lVar57 + 8);
      uVar51 = (ulonglong)uVar36;
      uVar36 = uVar36 * 4;
      do {
        iVar26 = (int)uVar55;
        pfVar47 = pfVar42 + -1;
        pfVar56 = pfVar42 + -2;
        pfVar13 = local_3308 + uVar55;
        fVar63 = *pfVar42;
        pfVar40 = pfVar42 + 1;
        pfVar46 = pfVar42 + 0x86;
        pfVar2 = pfVar42 + 0x87;
        pfVar3 = pfVar42 + 0x88;
        pfVar4 = pfVar42 + 0x89;
        pfVar5 = pfVar42 + 0x10e;
        pfVar6 = pfVar42 + 0x10f;
        pfVar7 = pfVar42 + 0x110;
        pfVar8 = pfVar42 + 0x111;
        pfVar9 = pfVar42 + 0x196;
        pfVar10 = pfVar42 + 0x197;
        pfVar11 = pfVar42 + 0x198;
        uVar55 = (ulonglong)(iVar26 + 0x10);
        pfVar12 = pfVar42 + 0x199;
        pfVar42 = pfVar42 + 0x220;
        fVar62 = local_3308[iVar26 - 2] * *pfVar56 + fVar62 + local_3308[iVar26 - 1] * *pfVar47 +
                 *pfVar13 * fVar63 + local_3308[iVar26 + 1] * *pfVar40 +
                 local_3308[iVar26 + 2] * *pfVar46 + local_3308[iVar26 + 3] * *pfVar2 +
                 local_3308[iVar26 + 4] * *pfVar3 + local_3308[iVar26 + 5] * *pfVar4 +
                 local_3308[iVar26 + 6] * *pfVar5 + local_3308[iVar26 + 7] * *pfVar6 +
                 local_3308[iVar26 + 8] * *pfVar7 + local_3308[iVar26 + 9] * *pfVar8 +
                 local_3308[iVar26 + 10] * *pfVar9 + local_3308[iVar26 + 0xb] * *pfVar10 +
                 local_3308[iVar26 + 0xc] * *pfVar11 + local_3308[iVar26 + 0xd] * *pfVar12;
        uVar51 = uVar51 - 1;
      } while (uVar51 != 0);
    }
    if (uVar36 < uVar54) {
      uVar37 = uVar36 * 4;
      pfVar46 = (float *)(lVar57 + 8 + (ulonglong)uVar36 * 0x220);
      pfVar42 = local_3308 + (uVar37 + 3);
      uVar55 = (ulonglong)(uVar54 - uVar36);
      pfVar47 = local_3308 + uVar37;
      pfVar56 = local_3308 + (uVar37 + 2);
      pfVar40 = local_3308 + (uVar37 + 1);
      do {
        pfVar2 = pfVar46 + -2;
        fVar63 = *pfVar47;
        pfVar47 = pfVar47 + 4;
        pfVar3 = pfVar46 + -1;
        fVar64 = *pfVar40;
        pfVar40 = pfVar40 + 4;
        fVar69 = *pfVar56;
        fVar71 = *pfVar46;
        pfVar56 = pfVar56 + 4;
        pfVar4 = pfVar46 + 1;
        pfVar46 = pfVar46 + 0x88;
        fVar14 = *pfVar42;
        pfVar42 = pfVar42 + 4;
        fVar62 = *pfVar2 * fVar63 + fVar62 + *pfVar3 * fVar64 + fVar69 * fVar71 + *pfVar4 * fVar14;
        uVar55 = uVar55 - 1;
      } while (uVar55 != 0);
    }
    DAT_146b95ee0[2] = fVar62 * local_34d8 - pfVar28[0x13];
  }
  local_34f8 = 0;
  local_34f0 = 0;
  local_34e8 = 0;
  if (local_3578 != '\0') {
    uVar36 = 0;
    if (3 < uVar54) {
      uVar37 = 8;
      uVar36 = (uVar54 - 4 >> 2) + 1;
      uVar55 = (ulonglong)uVar36;
      uVar36 = uVar36 * 4;
      do {
        uVar41 = (ulonglong)uVar37;
        uVar51 = (ulonglong)(uVar37 - 8);
        fVar62 = local_3308[uVar51 + 1];
        *(bool *)((longlong)&local_34f8 + uVar51) = local_3308[uVar37 - 8] != 0.0;
        fVar63 = local_3308[uVar51 + 2];
        *(bool *)((longlong)&local_34f8 + uVar51 + 1) = fVar62 != 0.0;
        fVar62 = local_3308[uVar51 + 3];
        *(bool *)((longlong)&local_34f8 + uVar51 + 2) = fVar63 != 0.0;
        *(bool *)((longlong)&local_34f8 + uVar51 + 3) = fVar62 != 0.0;
        uVar51 = (ulonglong)(uVar37 - 4);
        fVar62 = local_3308[uVar51 + 1];
        *(bool *)((longlong)&local_34f8 + uVar51) = local_3308[uVar37 - 4] != 0.0;
        fVar63 = local_3308[uVar51 + 2];
        *(bool *)((longlong)&local_34f8 + uVar51 + 1) = fVar62 != 0.0;
        fVar62 = local_3308[uVar51 + 3];
        *(bool *)((longlong)&local_34f8 + uVar51 + 2) = fVar63 != 0.0;
        *(bool *)((longlong)&local_34f8 + uVar51 + 3) = fVar62 != 0.0;
        fVar62 = local_3308[uVar41 + 1];
        *(bool *)((longlong)&local_34f8 + uVar41) = local_3308[uVar41] != 0.0;
        fVar63 = local_3308[uVar41 + 2];
        *(bool *)((longlong)&local_34f8 + uVar41 + 1) = fVar62 != 0.0;
        fVar62 = local_3308[uVar41 + 3];
        *(bool *)((longlong)&local_34f8 + uVar41 + 2) = fVar63 != 0.0;
        *(bool *)((longlong)&local_34f8 + uVar41 + 3) = fVar62 != 0.0;
        uVar51 = (ulonglong)(uVar37 + 4);
        fVar62 = local_3308[uVar51 + 1];
        *(bool *)((longlong)&local_34f8 + uVar51) = local_3308[uVar37 + 4] != 0.0;
        fVar63 = local_3308[uVar51 + 2];
        *(bool *)((longlong)&local_34f8 + uVar51 + 1) = fVar62 != 0.0;
        fVar62 = local_3308[uVar51 + 3];
        *(bool *)((longlong)&local_34f8 + uVar51 + 2) = fVar63 != 0.0;
        uVar37 = uVar37 + 0x10;
        *(bool *)((longlong)&local_34f8 + uVar51 + 3) = fVar62 != 0.0;
        uVar55 = uVar55 - 1;
      } while (uVar55 != 0);
    }
    if (uVar36 < uVar54) {
      lVar43 = (longlong)&local_34f8 + (ulonglong)(uVar36 * 4) + 2;
      uVar55 = (ulonglong)(uVar54 - uVar36);
      pfVar42 = local_3308 + (ulonglong)(uVar36 * 4) + 2;
      do {
        fVar62 = pfVar42[-1];
        *(bool *)(lVar43 + -2) = pfVar42[-2] != 0.0;
        fVar63 = *pfVar42;
        *(bool *)(lVar43 + -1) = fVar62 != 0.0;
        fVar62 = pfVar42[1];
        *(bool *)lVar43 = fVar63 != 0.0;
        *(bool *)(lVar43 + 1) = fVar62 != 0.0;
        pfVar42 = pfVar42 + 4;
        lVar43 = lVar43 + 4;
        uVar55 = uVar55 - 1;
      } while (uVar55 != 0);
    }
  }
  _guard_xfg_dispatch_icall_nop(local_2d38,0,0x50);
  uVar36 = 0;
  if (uVar15 != 0) {
    pfVar42 = local_2d38;
    do {
      lVar43 = physx::PxVehicleWheelsSimData::getWheelData(param_6 + 0x10);
      uVar36 = uVar36 + 1;
      *pfVar42 = *(float *)(lVar43 + 0x1c) * (fVar66 - fVar65) + *(float *)(lVar43 + 0x20);
      pfVar42 = pfVar42 + 1;
    } while (uVar36 < uVar15);
  }
  _guard_xfg_dispatch_icall_nop(local_2d88,0,0x50);
  uVar36 = 0;
  if (uVar15 != 0) {
    pfVar42 = local_2d88;
    do {
      cVar24 = physx::PxVehicleDifferentialNWData::getIsDrivenWheel(&local_3208);
      fVar66 = fVar67;
      if (cVar24 == '\0') {
        fVar66 = 0.0;
      }
      *pfVar42 = fVar66;
      uVar36 = uVar36 + 1;
      pfVar42 = pfVar42 + 1;
    } while (uVar36 < uVar15);
  }
  lVar43 = lVar57;
  if (uVar54 != 0) {
    do {
      physx::PxVehicleUpdate::storeRaycasts(lVar43);
      uVar39 = uVar39 - 1;
      lVar43 = lVar43 + 0x220;
      pfVar28 = local_3358;
    } while (uVar39 != 0);
  }
  fVar67 = DAT_146b95f00 * 2.0;
  fVar65 = DAT_146b95efc * 2.0;
  fVar63 = DAT_146b95ef8 * 2.0;
  fVar62 = local_34d0 * local_34d0 - 0.5;
  fVar66 = local_34cc * fVar65 + local_34c8 * fVar63 + local_353c * fVar67;
  uVar36 = *(uint *)(param_6 + 0x5c);
  if (ABS(local_354c *
          ((local_34cc * fVar67 - local_353c * fVar65) * local_34d0 + fVar62 * fVar63 +
          local_34c8 * fVar66) +
          local_3580 *
          ((local_353c * fVar63 - local_34c8 * fVar67) * local_34d0 + fVar62 * fVar65 +
          local_34cc * fVar66) +
          local_3538 *
          ((local_34c8 * fVar65 - local_34cc * fVar63) * local_34d0 + fVar62 * fVar67 +
          local_353c * fVar66)) < *(float *)(param_6 + 0x54)) {
    uVar36 = *(uint *)(param_6 + 0x58);
  }
  local_315c = *(undefined4 *)(param_6 + 0x60);
  local_3160 = 0;
  local_3158 = local_3448;
  local_3540 = 0;
  local_3328 = 1.0 / param_1;
  local_3180 = 1.0 / (float)uVar36;
  local_3170 = param_2[1];
  local_330c = local_3180 * param_1;
  local_3178 = 1.0 / local_330c;
  local_3174 = *param_2;
  local_316c = param_2[2];
  local_3150 = param_5;
  fVar67 = fVar60;
  local_3548 = fVar60;
  local_3324 = local_3538;
  local_3320 = local_3580;
  local_331c = local_354c;
  local_3318 = local_3534;
  local_3310 = local_3530;
  local_317c = local_330c;
  local_3168 = param_3;
  local_3164 = param_4;
  lVar43 = lVar57;
  if (uVar36 != 0) {
    do {
      local_30a0 = pfVar28;
      local_30a8 = lVar43;
      uVar39 = (ulonglong)uVar54;
      uVar37 = 0;
      fVar67 = 0.0;
      local_3430 = 0.0;
      local_342c = 0.0;
      local_3428 = 0.0;
      local_3440 = 0.0;
      local_343c = 0.0;
      local_3438 = 0.0;
      _guard_xfg_dispatch_icall_nop(local_2ce8,0,0x50);
      local_3230 = 0;
      local_3228 = 0;
      local_3220 = 0;
      if (uVar54 != 0) {
        lVar43 = (longlong)&local_3230 + 2;
        pfVar47 = (float *)(lVar57 + 8);
        pfVar42 = (float *)(local_3348 + 0xd4);
        pfVar28 = local_2ce8 + 2;
        do {
          fVar66 = fVar67;
          if (-pfVar47[-2] < 0.0) {
            fVar66 = 1.0;
          }
          if (pfVar47[-2] < 0.0) {
            fVar66 = -1.0;
          }
          fVar65 = *pfVar42;
          fVar62 = pfVar42[1];
          pfVar28[-2] = -(fVar68 * fVar66 * fVar65) - fVar70 * fVar66 * fVar62;
          fVar66 = pfVar47[-1];
          *(bool *)(lVar43 + -2) = fVar62 * fVar70 + fVar65 * fVar68 != 0.0;
          fVar65 = fVar67;
          if (-fVar66 < 0.0) {
            fVar65 = 1.0;
          }
          if (fVar66 < 0.0) {
            fVar65 = -1.0;
          }
          fVar66 = pfVar42[0xc];
          fVar62 = pfVar42[0xd];
          pfVar28[-1] = -(fVar68 * fVar65 * fVar66) - fVar70 * fVar65 * fVar62;
          fVar65 = *pfVar47;
          *(bool *)(lVar43 + -1) = fVar66 * fVar68 + fVar62 * fVar70 != 0.0;
          fVar66 = fVar67;
          if (-fVar65 < 0.0) {
            fVar66 = 1.0;
          }
          if (fVar65 < 0.0) {
            fVar66 = -1.0;
          }
          fVar65 = pfVar42[0x18];
          fVar62 = pfVar42[0x19];
          *pfVar28 = -(fVar68 * fVar66 * fVar65) - fVar70 * fVar66 * fVar62;
          fVar66 = pfVar47[1];
          *(bool *)lVar43 = fVar65 * fVar68 + fVar62 * fVar70 != 0.0;
          fVar65 = fVar67;
          if (-fVar66 < 0.0) {
            fVar65 = 1.0;
          }
          if (fVar66 < 0.0) {
            fVar65 = -1.0;
          }
          fVar66 = pfVar42[0x24];
          fVar62 = pfVar42[0x25];
          pfVar28[1] = -(fVar68 * fVar65 * fVar66) - fVar70 * fVar65 * fVar62;
          *(bool *)(lVar43 + 1) = fVar66 * fVar68 + fVar62 * fVar70 != 0.0;
          pfVar28 = pfVar28 + 4;
          lVar43 = lVar43 + 4;
          pfVar47 = pfVar47 + 0x88;
          pfVar42 = pfVar42 + 0xec;
          uVar39 = uVar39 - 1;
        } while (uVar39 != 0);
      }
      lVar43 = 5;
      puVar58 = local_1838;
      puVar48 = local_1720;
      do {
        lVar43 = lVar43 + -1;
        _guard_xfg_dispatch_icall_nop(puVar58,0,0x4a8);
        uVar61 = (undefined4)((ulonglong)in_stack_ffffffffffffca28 >> 0x20);
        puVar30 = puVar48 + -0xa8;
        lVar44 = 4;
        puVar50 = (undefined4 *)(puVar48 + -0x40);
        do {
          *puVar30 = 1;
          puVar30 = puVar30 + 1;
          *puVar50 = 0xffffffff;
          puVar50 = puVar50 + 1;
          lVar44 = lVar44 + -1;
        } while (lVar44 != 0);
        puVar58 = puVar58 + 0x4a8;
        puVar48 = puVar48 + 0x4a8;
      } while (lVar43 != 0);
      fVar66 = fVar67;
      fVar65 = fVar67;
      fVar62 = local_3440;
      fVar63 = local_343c;
      fVar64 = local_3438;
      fVar69 = local_3430;
      fVar71 = local_342c;
      fVar14 = local_3428;
      if (uVar54 != 0) {
        puVar34 = &local_32b0;
        local_3260 = local_2c38;
        local_3238 = local_1e78;
        local_3240 = local_2d38;
        local_3338 = (longlong *)(lVar57 + 0x1d0);
        puVar58 = local_142c;
        puVar50 = local_1560;
        local_3560 = local_2be8;
        lVar44 = 0;
        local_3250 = local_1f68;
        local_3258 = local_3348;
        lVar59 = 0;
        lVar43 = lVar57;
        fVar62 = fVar67;
        do {
          uVar38 = *puVar34;
          local_3120 = local_34c8;
          local_311c = local_34cc;
          local_3118 = local_353c;
          local_3148[0] = local_3578;
          local_3114 = local_34d0;
          local_3140 = (longlong)&local_34f8 + lVar59;
          local_3110 = local_3568;
          local_310c = local_33fc;
          local_3138 = (longlong)&local_3230 + lVar59;
          local_3108 = local_3400;
          local_30f8 = local_3548;
          local_3128 = (longlong)&local_3278 + lVar59;
          local_30f4 = local_3530;
          local_30f0 = local_3534;
          local_3104 = local_354c;
          local_3100 = local_3580;
          local_30fc = local_3538;
          local_30c0 = local_3350;
          local_3130 = local_3240;
          local_30e8 = local_3238;
          local_30e0 = local_3260;
          local_30d8 = local_3258;
          local_30d0 = lVar43;
          local_30c8 = local_3250;
          local_30b8 = uVar38;
          FUN_14395bb40(uVar37 * 4,&local_3180,local_3148,puVar58 + -0x40c);
          fVar68 = (float)puVar50[-0x2a];
          fVar70 = (float)puVar50[-0x29];
          fVar69 = (float)puVar50[-0x28];
          fVar71 = (float)puVar50[-0x27];
          *(undefined4 *)(local_30d0 + 0x50) = puVar50[-0x60];
          *(undefined4 *)(local_30d0 + 0x54) = puVar50[-0x5f];
          *(undefined4 *)(local_30d0 + 0x58) = puVar50[-0x5e];
          fVar14 = (float)puVar50[-0x26];
          fVar18 = (float)puVar50[-0x25];
          fVar19 = (float)puVar50[-0x24];
          fVar20 = (float)puVar50[-0x23];
          uVar61 = puVar50[-0x5d];
          *(uint *)(local_30d0 + 0x30) =
               ~-(uint)(*(float *)(local_30d0 + 0x30) == fVar68) & (uint)fVar68;
          *(uint *)(local_30d0 + 0x34) =
               ~-(uint)(*(float *)(local_30d0 + 0x34) == fVar70) & (uint)fVar70;
          *(uint *)(local_30d0 + 0x38) =
               ~-(uint)(*(float *)(local_30d0 + 0x38) == fVar69) & (uint)fVar69;
          *(uint *)(local_30d0 + 0x3c) =
               ~-(uint)(*(float *)(local_30d0 + 0x3c) == fVar71) & (uint)fVar71;
          *(undefined4 *)(local_30d0 + 0x5c) = uVar61;
          auVar17._4_4_ = ~-(uint)(fVar18 == *(float *)(local_30d0 + 0x44)) & (uint)fVar18;
          auVar17._0_4_ = ~-(uint)(fVar14 == *(float *)(local_30d0 + 0x40)) & (uint)fVar14;
          auVar17._8_4_ = ~-(uint)(fVar19 == *(float *)(local_30d0 + 0x48)) & (uint)fVar19;
          auVar17._12_4_ = ~-(uint)(fVar20 == *(float *)(local_30d0 + 0x4c)) & (uint)fVar20;
          *(undefined1 (*) [16])(local_30d0 + 0x40) = ZEXT416(0) | auVar17;
          if (uVar36 - 1 == local_3540) {
            in_stack_ffffffffffffca28 = puVar58 + 0x10;
            physx::updateCachedHitData
                      (puVar58 + -0x60,puVar58 + -0x50,puVar58 + -0x10,puVar58,
                       in_stack_ffffffffffffca28,lVar43);
          }
          fVar67 = fVar67 + (float)puVar50[-0x30];
          fVar66 = fVar66 + (float)puVar50[-0x2f];
          fVar65 = fVar65 + (float)puVar50[-0x2e];
          fVar62 = fVar62 + (float)puVar50[-0x2d];
          fVar63 = fVar63 + (float)puVar50[-0x2c];
          fVar64 = fVar64 + (float)puVar50[-0x2b];
          if (local_3540 == 0) {
            lVar16 = *local_3338;
            *(undefined4 *)(lVar16 + 8) = puVar50[-0x22];
            *(undefined4 *)(lVar16 + 0xc) = puVar50[-0x21];
            *(undefined4 *)(lVar16 + 0x10) = puVar50[-0x20];
            *(undefined4 *)(lVar16 + 0x14) = puVar50[-0x1f];
            *(undefined4 *)(lVar16 + 0x18) = puVar50[-0x1e];
            *(undefined4 *)(lVar16 + 0x1c) = puVar50[-0x1d];
            *(undefined4 *)(lVar16 + 0x20) = puVar50[-0x1c];
            *(undefined4 *)(lVar16 + 0x24) = puVar50[-0x1b];
            *(undefined4 *)(lVar16 + 0x28) = puVar50[-0x1a];
            *(undefined4 *)(lVar16 + 0x2c) = puVar50[-0x19];
            *(undefined4 *)(lVar16 + 0x30) = puVar50[-0x18];
            *(undefined4 *)(lVar16 + 0x34) = puVar50[-0x17];
            *(undefined4 *)(lVar16 + 0x38) = puVar50[-0x16];
            *(undefined4 *)(lVar16 + 0x3c) = puVar50[-0x15];
            *(undefined4 *)(lVar16 + 0x40) = puVar50[-0x14];
            *(undefined4 *)(lVar16 + 0x44) = puVar50[-0x13];
            *(undefined4 *)(lVar16 + 0x48) = puVar50[-0x12];
            *(undefined4 *)(lVar16 + 0x4c) = puVar50[-0x11];
            *(undefined4 *)(lVar16 + 0x50) = puVar50[-0x10];
            *(undefined4 *)(lVar16 + 0x54) = puVar50[-0xf];
            *(undefined4 *)(lVar16 + 0x58) = puVar50[-0xe];
            *(undefined4 *)(lVar16 + 0x5c) = puVar50[-0xd];
            *(undefined4 *)(lVar16 + 0x60) = puVar50[-0xc];
            *(undefined4 *)(lVar16 + 100) = puVar50[-0xb];
            *(undefined4 *)(lVar16 + 0x68) = puVar50[-10];
            *(undefined4 *)(lVar16 + 0x6c) = puVar50[-9];
            *(undefined4 *)(lVar16 + 0x70) = puVar50[-8];
            *(undefined4 *)(lVar16 + 0x74) = puVar50[-7];
            *(undefined4 *)(lVar16 + 0x78) = puVar50[-6];
            *(undefined4 *)(lVar16 + 0x7c) = puVar50[-5];
            *(undefined4 *)(lVar16 + 0x80) = puVar50[-4];
            *(undefined4 *)(lVar16 + 0x84) = puVar50[-3];
            *(undefined4 *)(lVar16 + 0x88) = puVar50[-2];
            *(undefined4 *)(lVar16 + 0x8c) = puVar50[-1];
            *(undefined4 *)(lVar16 + 0x90) = *puVar50;
            *(undefined4 *)(lVar16 + 0x94) = puVar50[1];
            *(undefined4 *)(lVar16 + 0x98) = puVar50[2];
            *(undefined4 *)(lVar16 + 0x9c) = puVar50[3];
            *(undefined4 *)(lVar16 + 0xa0) = puVar50[4];
            *(undefined4 *)(lVar16 + 0xa4) = puVar50[5];
            *(undefined4 *)(lVar16 + 0xa8) = puVar50[6];
            *(undefined4 *)(lVar16 + 0xac) = puVar50[7];
            *(undefined4 *)(lVar16 + 0xb0) = puVar50[8];
            *(undefined4 *)(lVar16 + 0xb4) = puVar50[9];
            *(undefined4 *)(lVar16 + 0xb8) = puVar50[10];
            *(undefined4 *)(lVar16 + 0xbc) = puVar50[0xb];
            *(undefined4 *)(lVar16 + 0xc0) = puVar50[0xc];
            *(undefined4 *)(lVar16 + 0xc4) = puVar50[0xd];
            *(undefined4 *)(lVar16 + 200) = puVar50[0xe];
            *(undefined4 *)(lVar16 + 0xcc) = puVar50[0xf];
            *(undefined4 *)(lVar16 + 0xd0) = puVar50[0x10];
            *(undefined4 *)(lVar16 + 0xd4) = puVar50[0x11];
            *(undefined4 *)(lVar16 + 0xd8) = puVar50[0x12];
            *(undefined4 *)(lVar16 + 0xdc) = puVar50[0x13];
            *(undefined4 *)(lVar16 + 0xe0) = puVar50[0x14];
            *(undefined4 *)(lVar16 + 0xe4) = puVar50[0x15];
            *(undefined4 *)(lVar16 + 0xe8) = puVar50[0x16];
            *(undefined4 *)(lVar16 + 0xec) = puVar50[0x17];
            *(undefined4 *)(lVar16 + 0xf0) = puVar50[0x18];
            *(undefined4 *)(lVar16 + 0xf4) = puVar50[0x19];
            *(undefined4 *)(lVar16 + 0xf8) = puVar50[0x1a];
            *(undefined4 *)(lVar16 + 0xfc) = puVar50[0x1b];
            *(undefined4 *)(lVar16 + 0x100) = puVar50[0x1c];
            *(undefined4 *)(lVar16 + 0x104) = puVar50[0x1d];
            *(undefined4 *)(lVar16 + 0x108) = puVar50[0x1e];
            *(undefined4 *)(lVar16 + 0x10c) = puVar50[0x1f];
            *(undefined4 *)(lVar16 + 0x110) = puVar50[0x20];
            *(undefined4 *)(lVar16 + 0x114) = puVar50[0x21];
            *(undefined4 *)(lVar16 + 0x118) = puVar50[0x22];
            *(undefined4 *)(lVar16 + 0x11c) = puVar50[0x23];
            *(undefined4 *)(lVar16 + 0x120) = puVar50[0x24];
            *(undefined4 *)(lVar16 + 0x124) = puVar50[0x25];
            *(undefined4 *)(lVar16 + 0x128) = puVar50[0x26];
            *(undefined4 *)(lVar16 + 300) = puVar50[0x27];
            *(undefined4 *)(lVar16 + 0x130) = puVar50[0x28];
            *(undefined4 *)(lVar16 + 0x134) = puVar50[0x29];
            *(undefined4 *)(lVar16 + 0x138) = puVar50[0x2a];
            *(undefined4 *)(lVar16 + 0x13c) = puVar50[0x2b];
            *(undefined4 *)(lVar16 + 0x140) = puVar50[0x2c];
            *(undefined4 *)(lVar16 + 0x144) = puVar50[0x2d];
            *(undefined4 *)(lVar16 + 0x148) = puVar50[0x2e];
            *(undefined4 *)(lVar16 + 0x14c) = puVar50[0x2f];
            *(undefined4 *)(lVar16 + 0x150) = puVar50[0x30];
            *(undefined4 *)(lVar16 + 0x154) = puVar50[0x31];
            *(undefined4 *)(lVar16 + 0x158) = puVar50[0x32];
            *(undefined4 *)(lVar16 + 0x15c) = puVar50[0x33];
            *(undefined4 *)(lVar16 + 0x160) = puVar50[0x34];
          }
          physx::PxVehicleUpdate::storeSuspWheelTireResults
                    (puVar58 + -0x40c,local_3130,local_3560,uVar38);
          physx::PxVehicleUpdate::storeHitActorForces
                    (puVar58 + -0x40c,(longlong)local_3520 + lVar44,uVar38);
          uVar61 = (undefined4)((ulonglong)in_stack_ffffffffffffca28 >> 0x20);
          uVar37 = uVar37 + 1;
          local_3240 = local_3240 + 4;
          local_3238 = local_3238 + 4;
          local_3260 = local_3260 + 1;
          local_3258 = local_3258 + 0x3b0;
          local_3250 = local_3250 + 0x30;
          local_3560 = local_3560 + 0x280;
          puVar34 = puVar34 + 1;
          local_3338 = local_3338 + 0x44;
          lVar59 = lVar59 + 4;
          lVar44 = lVar44 + 0x100;
          lVar43 = lVar43 + 0x220;
          puVar58 = puVar58 + 0x4a8;
          puVar50 = puVar50 + 0x12a;
          fVar68 = local_3330;
          fVar70 = local_3340;
          fVar69 = fVar67;
          fVar71 = fVar66;
          fVar14 = fVar65;
        } while (uVar37 < uVar54);
      }
      local_3428 = fVar14;
      local_342c = fVar71;
      local_3430 = fVar69;
      local_3438 = fVar64;
      local_343c = fVar63;
      local_3440 = fVar62;
      fVar62 = local_330c;
      lVar43 = local_3348;
      pfVar28 = local_3358;
      uVar37 = 0;
      if (3 < uVar54) {
        uVar38 = 2;
        uVar37 = (uVar54 - 4 >> 2) + 1;
        uVar39 = (ulonglong)uVar37;
        uVar37 = uVar37 * 4;
        puVar50 = local_162c;
        do {
          local_31d8[uVar38 - 2] = puVar50[-1];
          local_31d8[uVar38 - 1] = *puVar50;
          local_31d8[uVar38] = puVar50[1];
          local_31d8[uVar38 + 1] = puVar50[2];
          local_31d8[uVar38 + 2] = puVar50[0x129];
          local_31d8[uVar38 + 3] = puVar50[0x12a];
          local_31d8[uVar38 + 4] = puVar50[299];
          local_31d8[uVar38 + 5] = puVar50[300];
          local_31d8[uVar38 + 6] = puVar50[0x253];
          local_31d8[uVar38 + 7] = puVar50[0x254];
          local_31d8[uVar38 + 8] = puVar50[0x255];
          local_31d8[uVar38 + 9] = puVar50[0x256];
          local_31d8[uVar38 + 10] = puVar50[0x37d];
          local_31d8[uVar38 + 0xb] = puVar50[0x37e];
          local_31d8[uVar38 + 0xc] = puVar50[0x37f];
          uVar32 = uVar38 + 0xd;
          uVar38 = uVar38 + 0x10;
          local_31d8[uVar32] = puVar50[0x380];
          uVar39 = uVar39 - 1;
          puVar50 = puVar50 + 0x4a8;
        } while (uVar39 != 0);
      }
      if (uVar37 < uVar54) {
        uVar38 = uVar37 * 4;
        puVar50 = local_31d8 + uVar38;
        puVar29 = local_31d8 + (uVar38 + 2);
        uVar39 = (ulonglong)(uVar54 - uVar37);
        puVar35 = local_31d8 + (uVar38 + 1);
        puVar49 = local_162c + (ulonglong)uVar37 * 0x12a;
        puVar53 = local_31d8 + (uVar38 + 3);
        do {
          *puVar50 = puVar49[-1];
          puVar50 = puVar50 + 4;
          *puVar35 = *puVar49;
          puVar35 = puVar35 + 4;
          *puVar29 = puVar49[1];
          puVar29 = puVar29 + 4;
          *puVar53 = puVar49[2];
          uVar39 = uVar39 - 1;
          puVar49 = puVar49 + 0x12a;
          puVar53 = puVar53 + 4;
        } while (uVar39 != 0);
      }
      fVar63 = local_2f4c * local_3358[0x13];
      if (local_2f78 == 0) {
        fVar64 = 0.0;
      }
      else {
        fVar64 = local_2fb8[1];
        if ((local_2f78 != 1) && (local_2fb8[0] <= fVar63)) {
          uVar37 = 1;
          if (1 < local_2f78) {
            uVar39 = 2;
            fVar64 = local_2fb8[0];
            fVar69 = local_2fb8[1];
            do {
              iVar26 = (int)uVar39;
              fVar71 = local_2fb8[uVar39];
              if ((fVar64 <= fVar63) && (fVar63 < fVar71)) {
                fVar64 = ((fVar63 - fVar64) * (local_2fb8[iVar26 + 1] - fVar69)) / (fVar71 - fVar64)
                         + fVar69;
                goto LAB_143968256;
              }
              uVar37 = uVar37 + 1;
              uVar39 = (ulonglong)(iVar26 + 2);
              fVar64 = fVar71;
              fVar69 = local_2fb8[iVar26 + 1];
            } while (uVar37 < local_2f78);
          }
          fVar64 = local_2fb8[local_2f78 * 2 - 1];
        }
      }
LAB_143968256:
      fVar64 = local_2f64 * local_34dc * fVar64;
      if (DAT_146b95ee0 != (undefined4 *)0x0) {
        DAT_146b95ee0[1] = fVar64;
      }
      local_3078 = local_2f54;
      if (local_32b8 != 1.4013e-45) {
        local_3078 = local_2f58;
      }
      local_3084 = local_3314;
      local_3080 = local_332c;
      local_3070 = local_2d88;
      local_3068 = local_3308;
      local_3060 = local_2ce8;
      local_3058 = &local_3230;
      local_3050 = local_31d8;
      local_3038 = local_2fb8;
      local_3098 = local_330c;
      local_3078 = (local_2f5c - local_3078) * local_34dc + local_3078;
      local_308c = local_34d4;
      local_3088 = local_34d8;
      local_3040 = local_3348;
      local_3094 = fVar68;
      local_3090 = fVar70;
      local_307c = fVar64;
      local_3048 = uVar54;
      local_3044 = uVar15;
      physx::solveDriveNWInternalDynamicsEnginePlusDrivenWheels(&local_3098,&local_30a8);
      uVar23 = local_34d4;
      fVar63 = local_34d8;
      if (uVar54 != 0) {
        puVar58 = local_16e0;
        uVar39 = (ulonglong)uVar54;
        puVar27 = &local_3230;
        pfVar42 = local_2d88;
        lVar44 = lVar57;
        do {
          puVar48 = puVar58;
          physx::integrateWheelRotationAngles
                    (local_2fb8,uVar23,fVar63,fVar64,puVar58,pfVar42,puVar58 + 0xa0,puVar27,
                     local_2fb8,lVar43,pfVar28,lVar44);
          uVar61 = (undefined4)((ulonglong)puVar48 >> 0x20);
          lVar44 = lVar44 + 0x220;
          lVar43 = lVar43 + 0x3b0;
          puVar58 = puVar58 + 0x4a8;
          puVar27 = (undefined8 *)((longlong)puVar27 + 4);
          pfVar42 = pfVar42 + 4;
          uVar39 = uVar39 - 1;
        } while (uVar39 != 0);
      }
      physx::procesAntiRollSuspension(local_3350,&local_33f8,local_2be8,&local_3440);
      pbVar31 = (byte *)(**(code **)(*local_3448 + 0x60))(local_3448,local_34c4);
      if ((*pbVar31 & 2) != 0) {
        fVar63 = 1.0 / local_33d8;
        local_342c = fVar66 + fVar63 * param_2[1];
        local_3430 = fVar67 + fVar63 * *param_2;
        local_3428 = fVar65 + fVar63 * param_2[2];
      }
      in_stack_ffffffffffffca28 = (undefined1 *)CONCAT44(uVar61,fVar62);
      physx::integrateBody
                (*pbVar31 & 2,&local_3218,&local_3430,&local_3440,in_stack_ffffffffffffca28,
                 &local_3420,&local_3410,&local_33f8);
      local_3540 = local_3540 + 1;
      local_3580 = local_341c;
      local_354c = local_3420;
      local_3534 = local_3408;
      local_3530 = local_340c;
      fVar67 = local_3410;
      local_3538 = local_3418;
      if (uVar36 <= local_3540) break;
      local_3400 = local_33e0;
      local_33fc = local_33e4;
      local_3568 = local_33e8;
      local_34d0 = local_33ec;
      local_353c = local_33f0;
      local_34cc = local_33f4;
      local_34c8 = local_33f8;
      local_3548 = local_3410;
      lVar43 = local_30a8;
      pfVar28 = local_30a0;
    } while( true );
  }
  lVar43 = local_3348;
  if (DAT_146b95e00 != '\0') {
    local_3538 = (local_3538 - local_3324) * local_3328;
    local_3580 = (local_3580 - local_3320) * local_3328;
    local_354c = (local_354c - local_331c) * local_3328;
    local_3534 = (local_3534 - local_3318) * local_3328;
    local_3530 = (local_3530 - local_3310) * local_3328;
    fVar67 = (fVar67 - fVar60) * local_3328;
  }
  local_3504 = CONCAT44(local_3534,local_3530);
  uStack_350c = CONCAT44(fVar67,local_3538);
  local_3514 = CONCAT44(local_3580,local_354c);
  local_34b8 = 0;
  uStack_34b0 = 0x3f80000000000000;
  local_34a8 = 0;
  local_34a0 = 0;
  uStack_349c = 0;
  uStack_3498 = 0;
  uStack_3494 = 0;
  uStack_3490 = 0x3f800000;
  uStack_348c = 0;
  local_3488 = 0;
  local_3480 = 0;
  local_3478 = 0;
  local_3474 = 0x3f800000;
  local_346c = 0;
  local_3464 = 0;
  local_345c = 0;
  local_3458 = 0x3f800000;
  local_3450 = 0;
  physx::computeWheelLocalPoses(local_3348,lVar57,local_2be8,local_32b0,&local_3298,&local_34b8);
  local_2b64 = local_34b8;
  uStack_2b5c = uStack_34b0;
  uStack_2b54 = (undefined4)local_34a8;
  local_2b50 = local_34a8._4_4_;
  auStack_2b4c[0] = local_34a0;
  local_2ab0 = (undefined4)local_3488;
  local_2ac4 = CONCAT44(uStack_3498,uStack_349c);
  uStack_2abc = CONCAT44(uStack_3490,uStack_3494);
  *local_3520 = local_34b8;
  local_3520[1] = uStack_34b0;
  local_2ab4 = uStack_348c;
  local_296c = local_3450._4_4_;
  local_2aac = local_3488._4_4_;
  local_2a24 = (undefined4)local_3480;
  local_2a20 = local_3480._4_4_;
  local_2a1c = local_3478;
  local_2a18 = (undefined4)local_3474;
  local_2a14 = local_3474._4_4_;
  local_2a10 = (undefined4)local_346c;
  local_2a0c = local_346c._4_4_;
  local_2984 = (undefined4)local_3464;
  local_2980 = local_3464._4_4_;
  local_297c = local_345c;
  local_2978 = (undefined4)local_3458;
  local_2974 = local_3458._4_4_;
  local_2970 = (undefined4)local_3450;
  *(undefined4 *)(local_3520 + 2) = (undefined4)local_34a8;
  *(undefined4 *)((longlong)local_3520 + 0x14) = local_34a8._4_4_;
  *(undefined4 *)(local_3520 + 3) = local_34a0;
  local_3520[8] = CONCAT44(uStack_3498,uStack_349c);
  local_3520[9] = CONCAT44(uStack_3490,uStack_3494);
  *(undefined4 *)(local_3520 + 10) = uStack_348c;
  *(undefined4 *)((longlong)local_3520 + 0x54) = (undefined4)local_3488;
  *(undefined4 *)(local_3520 + 0xb) = local_3488._4_4_;
  *(undefined4 *)(local_3520 + 0x10) = (undefined4)local_3480;
  *(undefined4 *)((longlong)local_3520 + 0x84) = local_3480._4_4_;
  *(undefined4 *)(local_3520 + 0x11) = local_3478;
  *(undefined4 *)((longlong)local_3520 + 0x8c) = (undefined4)local_3474;
  *(undefined4 *)(local_3520 + 0x12) = local_3474._4_4_;
  *(undefined4 *)((longlong)local_3520 + 0x94) = (undefined4)local_346c;
  *(undefined4 *)(local_3520 + 0x13) = local_346c._4_4_;
  *(undefined4 *)(local_3520 + 0x18) = (undefined4)local_3464;
  *(undefined4 *)((longlong)local_3520 + 0xc4) = local_3464._4_4_;
  *(undefined4 *)(local_3520 + 0x19) = local_345c;
  *(undefined4 *)((longlong)local_3520 + 0xcc) = (undefined4)local_3458;
  *(undefined4 *)(local_3520 + 0x1a) = local_3458._4_4_;
  *(undefined4 *)((longlong)local_3520 + 0xd4) = (undefined4)local_3450;
  *(undefined4 *)(local_3520 + 0x1b) = local_3450._4_4_;
  if (1 < uVar54) {
    puVar50 = local_282c;
    puVar27 = &local_32ac;
    lVar44 = 0x180;
    do {
      lVar43 = lVar43 + 0x3b0;
      lVar57 = lVar57 + 0x220;
      local_33c8 = 0;
      uStack_33c0 = 0x3f80000000000000;
      local_33a8 = 0;
      uStack_33a4 = 0;
      uStack_33a0 = 0x3f800000;
      uStack_339c = 0;
      local_3388 = 0x3f80000000000000;
      uStack_3380 = 0;
      local_3368 = 0x3f800000;
      uStack_3360 = 0;
      local_33b8 = 0;
      uStack_33b0 = 0;
      uStack_33ac = 0;
      local_3398 = 0;
      uStack_3390 = 0;
      local_3378 = 0;
      uStack_3370 = 0;
      physx::computeWheelLocalPoses
                (lVar43,lVar57,puVar50 + -0x4f,*(undefined4 *)puVar27,&local_3298,&local_33c8);
      *(undefined8 *)(puVar50 + -0x2e) = local_33c8;
      *(undefined8 *)(puVar50 + -0x2c) = uStack_33c0;
      puVar50[-0x2a] = (undefined4)local_33b8;
      puVar50[-0x29] = local_33b8._4_4_;
      puVar50[-0x28] = uStack_33b0;
      *(ulonglong *)(puVar50 + -6) = CONCAT44(local_33a8,uStack_33ac);
      *(ulonglong *)(puVar50 + -4) = CONCAT44(uStack_33a0,uStack_33a4);
      puVar50[-1] = (undefined4)local_3398;
      puVar50[-2] = uStack_339c;
      *puVar50 = local_3398._4_4_;
      *(undefined8 *)((longlong)local_3520 + lVar44 + -0x80) = local_33c8;
      *(undefined8 *)((longlong)local_3520 + lVar44 + -0x78) = uStack_33c0;
      puVar50[0x22] = (undefined4)uStack_3390;
      puVar50[0x23] = uStack_3390._4_4_;
      puVar50[0x24] = (undefined4)local_3388;
      puVar50[0x25] = local_3388._4_4_;
      *(undefined4 *)((longlong)local_3520 + lVar44 + -0x70) = (undefined4)local_33b8;
      *(undefined4 *)((longlong)local_3520 + lVar44 + -0x6c) = local_33b8._4_4_;
      puVar50[0x26] = (undefined4)uStack_3380;
      puVar50[0x27] = uStack_3380._4_4_;
      puVar50[0x28] = (undefined4)local_3378;
      *(undefined4 *)((longlong)local_3520 + lVar44 + -0x68) = uStack_33b0;
      puVar50[0x4a] = local_3378._4_4_;
      puVar50[0x4b] = (undefined4)uStack_3370;
      puVar50[0x4c] = uStack_3370._4_4_;
      puVar50[0x4d] = (undefined4)local_3368;
      *(ulonglong *)((longlong)local_3520 + lVar44 + -0x40) = CONCAT44(local_33a8,uStack_33ac);
      *(ulonglong *)((longlong)local_3520 + lVar44 + -0x38) = CONCAT44(uStack_33a0,uStack_33a4);
      *(undefined4 *)((longlong)local_3520 + lVar44 + -0x30) = uStack_339c;
      puVar50[0x4e] = local_3368._4_4_;
      puVar50[0x4f] = (undefined4)uStack_3360;
      puVar50[0x50] = uStack_3360._4_4_;
      puVar50 = puVar50 + 0xa0;
      *(undefined4 *)((longlong)local_3520 + lVar44 + -0x2c) = (undefined4)local_3398;
      puVar27 = (undefined8 *)((longlong)puVar27 + 4);
      *(undefined4 *)((longlong)local_3520 + lVar44 + -0x28) = local_3398._4_4_;
      puVar35 = (undefined4 *)((longlong)local_3520 + lVar44);
      *puVar35 = (undefined4)uStack_3390;
      puVar35[1] = uStack_3390._4_4_;
      puVar35[2] = (undefined4)local_3388;
      puVar35[3] = local_3388._4_4_;
      puVar35[4] = (undefined4)uStack_3380;
      puVar35[5] = uStack_3380._4_4_;
      puVar35[6] = (undefined4)local_3378;
      *(undefined4 *)((longlong)local_3520 + lVar44 + 0x40) = local_3378._4_4_;
      *(undefined4 *)((longlong)local_3520 + lVar44 + 0x44) = (undefined4)uStack_3370;
      *(undefined4 *)((longlong)local_3520 + lVar44 + 0x48) = uStack_3370._4_4_;
      *(undefined4 *)((longlong)local_3520 + lVar44 + 0x4c) = (undefined4)local_3368;
      *(undefined4 *)((longlong)local_3520 + lVar44 + 0x50) = local_3368._4_4_;
      *(undefined4 *)((longlong)local_3520 + lVar44 + 0x54) = (undefined4)uStack_3360;
      *(undefined4 *)((longlong)local_3520 + lVar44 + 0x58) = uStack_3360._4_4_;
      uVar33 = uVar33 - 1;
      lVar44 = lVar44 + 0x100;
    } while (uVar33 != 0);
  }
  if ((param_7 != (undefined8 *)0x0) && ((void *)*param_7 != (void *)0x0)) {
    _guard_xfg_dispatch_icall_nop((void *)*param_7,local_2be8,(ulonglong)(uVar15 * 0xa0));
  }
  if (param_8 == (undefined8 *)0x0) {
    local_3188 = param_6;
    physx::PxVehicleUpdate::updatePost(&local_3520,1,&local_3188);
  }
  else {
    _guard_xfg_dispatch_icall_nop((void *)*param_8,local_3520,(ulonglong)(uVar15 << 6));
    *(undefined8 *)((longlong)param_8 + 0xc) = local_3514;
    *(undefined8 *)((longlong)param_8 + 0x14) = uStack_350c;
    *(undefined4 *)((longlong)param_8 + 0x1c) = (undefined4)local_3504;
    *(undefined4 *)(param_8 + 4) = local_3504._4_4_;
    *(undefined1 *)((longlong)param_8 + 0x24) = (undefined1)local_34fc;
    *(undefined1 *)((longlong)param_8 + 0x25) = local_34fc._1_1_;
  }
LAB_143968d5c:
  MXCSR = uVar22 & 0xffffffc0;
  return;
}



// FUNCTION 143968dd0 FUN_143968dd0 body=10389 status=ok
// SIG undefined FUN_143968dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143968dd0(float param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,longlong param_6,undefined8 *param_7,undefined8 *param_8)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  undefined4 uVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  undefined8 *puVar17;
  float *pfVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  ulonglong uVar22;
  uint *puVar23;
  undefined4 *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float *pfVar29;
  longlong lVar30;
  longlong lVar31;
  float *pfVar32;
  undefined1 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  ulonglong uVar36;
  longlong *plVar37;
  float *pfVar38;
  undefined4 *puVar39;
  uint uVar40;
  ulonglong uVar41;
  float *pfVar42;
  ulonglong uVar43;
  undefined1 *puVar44;
  undefined8 *puVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  char local_35b0;
  float local_35a8;
  float *local_3598;
  uint local_3588;
  float local_3584;
  undefined4 *local_3580;
  float local_3574;
  float local_3570;
  float local_356c;
  float local_3568;
  float local_3564;
  undefined8 *local_3550;
  uint local_3548;
  undefined8 local_3544;
  undefined8 uStack_353c;
  undefined8 local_3534;
  undefined2 local_352c;
  undefined8 local_3528;
  undefined8 local_3520;
  undefined4 local_3518;
  undefined1 local_3510 [4];
  float local_350c;
  float local_3508;
  undefined8 local_34f8;
  undefined8 uStack_34f0;
  undefined8 local_34e8;
  undefined4 local_34e0;
  undefined4 uStack_34dc;
  undefined4 uStack_34d8;
  undefined4 uStack_34d4;
  undefined4 uStack_34d0;
  undefined4 uStack_34cc;
  undefined8 local_34c8;
  undefined8 local_34c0;
  undefined4 local_34b8;
  undefined8 local_34b4;
  undefined8 local_34ac;
  undefined8 local_34a4;
  undefined4 local_349c;
  undefined8 local_3498;
  undefined8 local_3490;
  float local_3488;
  float local_3484;
  float local_3480;
  float local_3478;
  float local_3474;
  float local_3470;
  float local_3468;
  float local_3464;
  float local_3460;
  float local_3458;
  float local_3454;
  float local_3450;
  longlong *local_3448;
  float local_3440;
  float local_343c;
  float local_3438;
  float local_3430;
  float local_342c;
  float local_3428;
  float local_3424;
  float local_3420;
  float local_341c;
  float local_3418;
  undefined4 local_3410;
  float local_340c;
  undefined8 local_3408;
  undefined8 uStack_3400;
  undefined8 local_33f8;
  undefined4 uStack_33f0;
  undefined4 uStack_33ec;
  undefined4 local_33e8;
  undefined4 uStack_33e4;
  undefined4 uStack_33e0;
  undefined4 uStack_33dc;
  undefined8 local_33d8;
  undefined8 uStack_33d0;
  undefined8 local_33c8;
  undefined8 uStack_33c0;
  undefined8 local_33b8;
  undefined8 uStack_33b0;
  undefined8 local_33a8;
  undefined8 uStack_33a0;
  float local_3398;
  float local_3394;
  float local_3390;
  longlong local_3388;
  longlong local_3380;
  float local_3378;
  float local_3374;
  float local_3370;
  float local_336c;
  float local_3368;
  float local_3364;
  uint local_3360;
  undefined8 local_3358;
  undefined8 local_3350;
  undefined4 local_3348;
  uint local_3340;
  undefined8 local_333c;
  undefined8 local_3334;
  float local_3328;
  float local_3324;
  float local_3320;
  undefined8 local_3318;
  undefined8 uStack_3310;
  undefined4 local_3308;
  undefined4 local_3304;
  undefined4 local_3300;
  undefined4 *local_32f8;
  undefined4 *local_32f0;
  longlong local_32e8;
  undefined1 *local_32e0;
  longlong *local_32d8;
  undefined1 *local_32d0;
  undefined8 local_32c8;
  undefined8 local_32c0;
  undefined4 local_32b8;
  undefined4 local_32b0;
  undefined4 local_32ac;
  undefined4 local_32a8;
  float local_3298 [20];
  float local_3248;
  float local_3244;
  float local_3240;
  float local_323c;
  undefined4 local_3228 [20];
  longlong local_31d8;
  float local_31d0;
  float local_31cc;
  float local_31c8;
  float local_31c4;
  float local_31c0;
  float local_31bc;
  undefined4 local_31b8;
  undefined4 local_31b4;
  undefined1 local_31b0;
  undefined4 local_31ac;
  longlong *local_31a8;
  undefined8 local_31a0;
  char local_3198 [8];
  longlong local_3190;
  longlong local_3188;
  undefined1 *local_3180;
  longlong local_3178;
  float local_3170;
  float local_316c;
  float local_3168;
  float local_3164;
  float local_3160;
  float local_315c;
  float local_3158;
  float local_3154;
  float local_3150;
  float local_314c;
  float local_3148;
  float local_3144;
  float local_3140;
  undefined4 *local_3138;
  undefined4 *local_3130;
  longlong local_3128;
  float *local_3120;
  undefined1 *local_3118;
  longlong local_3110;
  uint local_3108;
  float *local_30f8;
  float *local_30f0;
  float local_30e8 [4];
  float local_30d8;
  undefined8 local_30d4;
  float local_30cc;
  float local_30c8;
  undefined1 *local_30c0;
  float *local_30b8;
  float *local_30b0;
  undefined8 *local_30a8;
  undefined4 *local_30a0;
  uint local_3098;
  uint local_3094;
  longlong local_3090;
  float *local_3088;
  undefined1 local_3038 [12];
  undefined1 local_302c [24];
  undefined1 local_3014 [28];
  float local_2ff8 [16];
  uint local_2fb8;
  float local_2fa4;
  float local_2f9c;
  float local_2f98;
  float local_2f94;
  float local_2f8c;
  float local_2f88 [32];
  float local_2f08;
  undefined4 local_2ef8;
  float local_2ee8 [32];
  float local_2e68 [32];
  undefined1 local_2de8 [80];
  float local_2d98 [20];
  undefined1 local_2d48 [80];
  undefined1 local_2cf8 [28];
  undefined1 local_2cdc [28];
  undefined1 local_2cc0 [28];
  undefined1 local_2ca4 [28];
  undefined4 local_2c88 [20];
  undefined1 local_2c38 [80];
  undefined1 local_2be8 [132];
  undefined8 local_2b64;
  undefined8 uStack_2b5c;
  undefined4 uStack_2b54;
  undefined4 local_2b50;
  undefined4 auStack_2b4c [34];
  undefined8 local_2ac4;
  undefined8 uStack_2abc;
  undefined4 local_2ab4;
  undefined4 local_2ab0;
  undefined4 local_2aac;
  undefined4 local_2a24;
  undefined4 local_2a20;
  undefined4 local_2a1c;
  undefined4 local_2a18;
  undefined4 local_2a14;
  undefined4 local_2a10;
  undefined4 local_2a0c;
  undefined4 local_2984;
  undefined4 local_2980;
  undefined4 local_297c;
  undefined4 local_2978;
  undefined4 local_2974;
  undefined4 local_2970;
  undefined4 local_296c;
  undefined4 local_282c [561];
  undefined1 local_1f68 [8];
  undefined8 local_1f60 [4];
  longlong local_1f40 [25];
  undefined4 local_1e78 [80];
  undefined8 local_1d38 [3];
  undefined1 auStack_1d20 [1256];
  undefined1 local_1838 [280];
  undefined1 local_1720 [64];
  undefined1 local_16e0 [180];
  undefined4 local_162c [51];
  undefined4 local_1560 [77];
  undefined1 local_142c [5092];
  undefined8 uStack_48;
  ulonglong uVar28;
  
  uVar12 = MXCSR;
  uStack_48 = 0x143968e05;
  uVar40 = 0;
  MXCSR = 0x9fc0;
  if (*(int *)(param_6 + 0x38) != 0) {
    uVar43 = 0;
    do {
      puVar35 = (undefined4 *)((ulonglong)uVar40 * 0x220 + *(longlong *)(param_6 + 0x70));
      iVar16 = (int)uVar43;
      if ((&DAT_146b95e40)[uVar43] != 0) {
        *(undefined4 *)((&DAT_146b95e40)[uVar43] + 0x10) = *puVar35;
        *(undefined4 *)((&DAT_146b95e40)[iVar16 + 1] + 0x10) = puVar35[1];
        *(undefined4 *)((&DAT_146b95e40)[iVar16 + 2] + 0x10) = puVar35[2];
        *(undefined4 *)((&DAT_146b95e40)[iVar16 + 3] + 0x10) = puVar35[3];
      }
      uVar40 = uVar40 + 1;
      uVar43 = (ulonglong)(iVar16 + 4);
    } while (uVar40 < *(uint *)(param_6 + 0x38));
  }
  if (DAT_146b95ee0 != (undefined4 *)0x0) {
    *DAT_146b95ee0 = *(undefined4 *)(param_6 + 0x10c);
  }
  local_3380 = *(longlong *)(param_6 + 0x30);
  puVar45 = (undefined8 *)(param_6 + 0x70);
  uVar40 = *(uint *)(param_6 + 0x38);
  uVar43 = (ulonglong)uVar40;
  uVar3 = *(uint *)(param_6 + 0x3c);
  local_3388 = param_6 + 0x10;
  pfVar42 = (float *)*puVar45;
  physx::PxVehicleDriveSimData::PxVehicleDriveSimData(local_2ff8,param_6 + 0x120);
  local_3448 = *(longlong **)(param_6 + 0xa0);
  lVar30 = 0x14;
  lVar31 = 0x14;
  puVar17 = local_1d38;
  puVar44 = auStack_1d20;
  do {
    *(undefined4 *)puVar17 = 0;
    puVar17 = puVar17 + 8;
    *(undefined8 *)(puVar44 + -0x14) = 0;
    *(undefined8 *)(puVar44 + -0xc) = 0x3f800000;
    *(undefined8 *)(puVar44 + -4) = 0;
    *(undefined8 *)(puVar44 + 0x10) = 0;
    *(undefined8 *)(puVar44 + 0x18) = 0;
    *(undefined8 *)(puVar44 + 0x20) = 0;
    *(undefined8 *)(puVar44 + 8) = 0;
    puVar44 = puVar44 + 0x40;
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  local_3550 = local_1d38;
  local_3544 = 0;
  uStack_353c = 0;
  local_3534 = 0;
  local_352c = 0;
  bVar11 = false;
  local_3548 = uVar3;
  fVar46 = (float)physx::PxVehicleDriveDynData::getAnalogInput(param_6 + 0xc0,3);
  if ((((fVar46 != 0.0) ||
       (fVar46 = (float)physx::PxVehicleDriveDynData::getAnalogInput(param_6 + 0xc0,4),
       fVar46 != 0.0)) ||
      (fVar46 = (float)physx::PxVehicleDriveDynData::getAnalogInput(param_6 + 0xc0,0), fVar46 != 0.0
      )) || ((*(char *)(param_6 + 0x102) != '\0' || (*(char *)(param_6 + 0x101) != '\0')))) {
    bVar11 = true;
  }
  cVar14 = (**(code **)(*local_3448 + 0x1f0))(local_3448);
  if (cVar14 != '\0') {
    if ((!bVar11) && (cVar14 = FUN_143970090(local_3388,puVar45), cVar14 == '\0')) {
      physx::PxVehicleUpdate::setInternalDynamicsToZero(param_6);
      if (param_8 != (undefined8 *)0x0) {
        *(undefined1 *)((longlong)param_8 + 0x24) = 1;
      }
      goto LAB_14396b602;
    }
    local_352c = CONCAT11(1,(undefined1)local_352c);
  }
  uVar25 = uVar40 - 1;
  local_333c = 0;
  local_3334 = 0;
  local_3340 = 4;
  if (uVar3 < 4) {
    local_3340 = uVar3;
  }
  if (1 < uVar25) {
    puVar17 = &local_333c;
    for (uVar22 = (ulonglong)(uVar40 - 2); uVar22 != 0; uVar22 = uVar22 - 1) {
      *(undefined4 *)puVar17 = 4;
      puVar17 = (undefined8 *)((longlong)puVar17 + 4);
    }
  }
  uVar22 = (ulonglong)uVar25;
  (&local_3340)[uVar25] = (1 - uVar40) * 4 + uVar3;
  if (uVar40 != 0) {
    plVar4 = *(longlong **)(param_6 + 0x78);
    puVar17 = local_1f60;
    lVar31 = 0x10;
    plVar37 = local_1f40;
    uVar41 = uVar43;
    do {
      lVar1 = lVar31 + 0x20;
      puVar17[-1] = *(undefined8 *)(*plVar4 + -0x30 + lVar1);
      *puVar17 = *(undefined8 *)(*plVar4 + -0x28 + lVar1);
      puVar17[1] = *(undefined8 *)(lVar31 + *plVar4);
      puVar17[2] = *(undefined8 *)(*plVar4 + -0x18 + lVar1);
      plVar37[-1] = plVar4[1];
      *plVar37 = plVar4[2];
      uVar41 = uVar41 - 1;
      puVar17 = puVar17 + 6;
      lVar31 = lVar1;
      plVar37 = plVar37 + 6;
    } while (uVar41 != 0);
    if (uVar40 != 0) {
      pfVar18 = pfVar42 + 0x74;
      do {
        (**(code **)(**(longlong **)(*(longlong *)pfVar18 + 0x168) + 0x40))();
        pfVar18 = pfVar18 + 0x88;
        uVar43 = uVar43 - 1;
      } while (uVar43 != 0);
    }
  }
  puVar44 = local_2be8;
  puVar35 = auStack_2b4c;
  do {
    _guard_xfg_dispatch_icall_nop(puVar44,0,0xa0);
    plVar4 = local_3448;
    *(undefined1 *)(puVar35 + -0x20) = 1;
    puVar35[-0x19] = 0xffffffff;
    puVar44 = puVar44 + 0xa0;
    *(undefined8 *)(puVar35 + -6) = 0;
    puVar35[-4] = 0;
    *(undefined8 *)(puVar35 + -3) = 0x3f800000;
    *(undefined8 *)(puVar35 + -1) = 0;
    puVar35 = puVar35 + 0x28;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  puVar17 = (undefined8 *)(**(code **)(*local_3448 + 0xf0))(local_3448,local_2cf8);
  local_3318 = *puVar17;
  uStack_3310 = puVar17[1];
  local_3304 = *(undefined4 *)((longlong)puVar17 + 0x14);
  local_3308 = *(undefined4 *)(puVar17 + 2);
  local_3300 = *(undefined4 *)(puVar17 + 3);
  lVar30 = (**(code **)(*plVar4 + 0xf0))(plVar4,local_2cdc);
  pfVar18 = (float *)(**(code **)(*plVar4 + 0xa0))(plVar4,local_2cc0);
  fVar46 = pfVar18[3];
  fVar2 = pfVar18[1];
  fVar48 = *pfVar18;
  fVar49 = pfVar18[2];
  fVar54 = *(float *)(lVar30 + 0x18) * 2.0;
  fVar53 = *(float *)(lVar30 + 0x10) * 2.0;
  fVar52 = *(float *)(lVar30 + 0x14) * 2.0;
  fVar51 = fVar46 * fVar46 - 0.5;
  fVar50 = fVar53 * fVar48 + fVar52 * fVar2 + fVar54 * fVar49;
  fVar56 = (fVar52 * fVar48 - fVar53 * fVar2) * fVar46 + fVar51 * fVar54 + fVar50 * fVar49 +
           pfVar18[6];
  fVar55 = (fVar53 * fVar49 - fVar54 * fVar48) * fVar46 + fVar51 * fVar52 + fVar50 * fVar2 +
           pfVar18[5];
  fVar46 = (fVar54 * fVar2 - fVar52 * fVar49) * fVar46 + fVar51 * fVar53 + fVar50 * fVar48 +
           pfVar18[4];
  local_3454 = fVar55;
  local_3450 = fVar46;
  local_340c = fVar56;
  pfVar18 = (float *)physx::PxQuat::operator*(pfVar18,local_3014,lVar30);
  local_3508 = *pfVar18;
  local_3574 = pfVar18[1];
  local_3584 = pfVar18[2];
  local_350c = pfVar18[3];
  local_3430 = local_3508;
  local_342c = local_3574;
  local_3428 = local_3584;
  local_3424 = local_350c;
  local_3420 = fVar46;
  local_341c = fVar55;
  local_3418 = fVar56;
  local_3248 = local_3508;
  local_3244 = local_3574;
  local_3240 = local_3584;
  local_323c = local_350c;
  local_343c = (float)(**(code **)(*plVar4 + 0x100))(plVar4);
  local_343c = 1.0 / local_343c;
  puVar35 = (undefined4 *)(**(code **)(*plVar4 + 0x120))(plVar4,local_3038);
  local_32b0 = *puVar35;
  local_32ac = puVar35[1];
  local_32a8 = puVar35[2];
  pfVar18 = (float *)(**(code **)(*plVar4 + 0x128))(plVar4,local_302c);
  local_3570 = *pfVar18;
  local_35a8 = pfVar18[1];
  fVar46 = pfVar18[2];
  local_3478 = local_3570;
  local_3474 = local_35a8;
  local_3470 = fVar46;
  local_3440 = fVar46;
  pfVar18 = (float *)(**(code **)(*plVar4 + 0x138))(plVar4);
  lVar30 = local_3388;
  plVar4 = local_3448;
  uVar25 = 0;
  fVar2 = *pfVar18;
  local_3568 = pfVar18[1];
  local_356c = pfVar18[2];
  local_3468 = fVar2;
  local_3464 = local_3568;
  local_3460 = local_356c;
  if (uVar3 != 0) {
    puVar35 = local_2c88;
    puVar24 = local_1e78 + 2;
    do {
      iVar16 = physx::PxVehicleWheelsSimData::getWheelShapeMapping(lVar30);
      if (iVar16 != -1) {
        local_32d8 = (longlong *)0x0;
        (**(code **)(*plVar4 + 0xd0))(plVar4,&local_32d8,1,iVar16);
        puVar19 = (undefined4 *)(**(code **)(*local_32d8 + 0x90))(local_32d8,local_2ca4);
        puVar24[-2] = *puVar19;
        puVar24[-1] = puVar19[1];
        *puVar24 = puVar19[2];
        puVar24[1] = puVar19[3];
        uVar47 = physx::PxVehicleWheelsDynData::getWheelRotationAngle(puVar45);
        *puVar35 = uVar47;
      }
      uVar25 = uVar25 + 1;
      puVar24 = puVar24 + 4;
      puVar35 = puVar35 + 1;
    } while (uVar25 < uVar3);
  }
  uVar43 = (ulonglong)uVar40;
  local_3458 = *(float *)(param_6 + 0xc0);
  local_3364 = *(float *)(param_6 + 0xc4);
  local_3328 = *(float *)(param_6 + 200);
  fVar48 = *(float *)(param_6 + 0xcc);
  fVar49 = *(float *)(param_6 + 0xd0);
  if (DAT_146b95ee0 != (undefined4 *)0x0) {
    DAT_146b95ee0[3] = local_3458;
    DAT_146b95ee0[4] = local_3364;
    DAT_146b95ee0[5] = local_3328;
    DAT_146b95ee0[6] = fVar48;
    DAT_146b95ee0[7] = fVar49;
  }
  if (*(int *)(param_6 + 0x330) == 1) {
    if ((*(char *)(param_6 + 0x100) != '\0') &&
       ((0.0 <= fVar48 * fVar49 || ((fVar48 == 0.0 && (fVar49 == 0.0)))))) {
LAB_143969712:
      uVar25 = *(uint *)(param_6 + 0x104);
      if ((*(uint *)(param_6 + 0x108) != uVar25) || (*(float *)(param_6 + 0x114) <= local_2e68[0]))
      {
        *(float *)(param_6 + 0x114) = *(float *)(param_6 + 0x114) + param_1;
      }
      else {
        fVar50 = *(float *)(param_6 + 0x10c) * local_2f8c;
        cVar14 = '\0';
        if (local_2ee8[uVar25] <= fVar50 && fVar50 != local_2ee8[uVar25]) {
          cVar14 = '\0';
          if (uVar25 != 0) {
            cVar14 = '\x01';
          }
        }
        cVar15 = '\0';
        if ((fVar50 < local_2e68[uVar25]) && (cVar15 = '\0', 2 < uVar25)) {
          cVar15 = '\x01';
        }
        if ((cVar14 != '\0') || (cVar15 != '\0')) {
          *(char *)(param_6 + 0x101) = cVar14;
          *(char *)(param_6 + 0x102) = cVar15;
          *(undefined4 *)(param_6 + 0x114) = 0;
        }
      }
    }
  }
  else if (((*(char *)(param_6 + 0x100) != '\0') && (local_3364 * fVar49 <= 0.0)) &&
          (local_3328 * fVar48 <= 0.0)) goto LAB_143969712;
  physx::processGears();
  local_3360 = *(uint *)(param_6 + 0x104);
  if (local_3360 == 1) {
    local_3410 = 0;
  }
  else {
    local_3410 = local_2ef8;
  }
  local_3438 = local_2f08 * local_2f88[local_3360];
  if (DAT_146b95ee0 != (undefined4 *)0x0) {
    DAT_146b95ee0[8] = local_3438;
  }
  local_3580 = DAT_146b95ee0;
  if (((ABS(fVar49) + ABS(fVar48)) * local_3458 <= 0.0) || (local_35b0 = '\x01', local_3360 == 1)) {
    local_35b0 = '\0';
  }
  local_3358 = 0;
  local_3350 = 0;
  local_3348 = 0;
  if (uVar40 != 0) {
    uVar25 = 2;
    uVar36 = 0;
    uVar41 = uVar43;
    do {
      puVar44 = (undefined1 *)((longlong)&local_3358 + uVar36 + 2);
      if ((*(uint *)(param_6 + 0x50 + (uVar36 >> 5) * 4) >> (uVar25 - 2 & 0x1f) & 1) != 0) {
        *(undefined1 *)((longlong)&local_3358 + uVar36) = 1;
      }
      if ((*(uint *)(param_6 + 0x50 +
                    ((ulonglong)((longlong)puVar44 - ((longlong)&local_3358 + 1)) >> 5) * 4) >>
           (uVar25 - 1 & 0x1f) & 1) != 0) {
        *(undefined1 *)((longlong)&local_3358 + uVar36 + 1) = 1;
      }
      if ((*(uint *)(param_6 + 0x50 +
                    ((ulonglong)((longlong)puVar44 - (longlong)&local_3358) >> 5) * 4) >>
           (uVar25 & 0x1f) & 1) != 0) {
        *puVar44 = 1;
      }
      if ((*(uint *)(param_6 + 0x50 +
                    ((ulonglong)(puVar44 + (3 - ((longlong)&local_3358 + 2))) >> 5) * 4) >>
           (uVar25 + 1 & 0x1f) & 1) != 0) {
        *(undefined1 *)((longlong)&local_3358 + uVar36 + 3) = 1;
      }
      uVar36 = uVar36 + 4;
      uVar25 = uVar25 + 4;
      uVar41 = uVar41 - 1;
    } while (uVar41 != 0);
  }
  _guard_xfg_dispatch_icall_nop(local_3298,0,0x50);
  _guard_xfg_dispatch_icall_nop(local_2de8,0,0x50);
  _guard_xfg_dispatch_icall_nop(local_2d48,0,0x50);
  pfVar18 = local_3298;
  physx::computeTankDiff();
  local_3528 = 0;
  local_3520 = 0;
  local_3518 = 0;
  if (local_35b0 != '\0') {
    uVar25 = 0;
    if (3 < uVar40) {
      uVar26 = 8;
      uVar25 = (uVar40 - 4 >> 2) + 1;
      uVar41 = (ulonglong)uVar25;
      uVar25 = uVar25 * 4;
      do {
        uVar28 = (ulonglong)uVar26;
        uVar36 = (ulonglong)(uVar26 - 8);
        fVar48 = local_3298[uVar36 + 1];
        *(bool *)((longlong)&local_3528 + uVar36) = local_3298[uVar26 - 8] != 0.0;
        fVar49 = local_3298[uVar36 + 2];
        *(bool *)((longlong)&local_3528 + uVar36 + 1) = fVar48 != 0.0;
        fVar48 = local_3298[uVar36 + 3];
        *(bool *)((longlong)&local_3528 + uVar36 + 2) = fVar49 != 0.0;
        *(bool *)((longlong)&local_3528 + uVar36 + 3) = fVar48 != 0.0;
        uVar36 = (ulonglong)(uVar26 - 4);
        fVar48 = local_3298[uVar36 + 1];
        *(bool *)((longlong)&local_3528 + uVar36) = local_3298[uVar26 - 4] != 0.0;
        fVar49 = local_3298[uVar36 + 2];
        *(bool *)((longlong)&local_3528 + uVar36 + 1) = fVar48 != 0.0;
        fVar48 = local_3298[uVar36 + 3];
        *(bool *)((longlong)&local_3528 + uVar36 + 2) = fVar49 != 0.0;
        *(bool *)((longlong)&local_3528 + uVar36 + 3) = fVar48 != 0.0;
        fVar48 = local_3298[uVar28 + 1];
        *(bool *)((longlong)&local_3528 + uVar28) = local_3298[uVar28] != 0.0;
        fVar49 = local_3298[uVar28 + 2];
        *(bool *)((longlong)&local_3528 + uVar28 + 1) = fVar48 != 0.0;
        fVar48 = local_3298[uVar28 + 3];
        *(bool *)((longlong)&local_3528 + uVar28 + 2) = fVar49 != 0.0;
        *(bool *)((longlong)&local_3528 + uVar28 + 3) = fVar48 != 0.0;
        uVar36 = (ulonglong)(uVar26 + 4);
        fVar48 = local_3298[uVar36 + 1];
        *(bool *)((longlong)&local_3528 + uVar36) = local_3298[uVar26 + 4] != 0.0;
        fVar49 = local_3298[uVar36 + 2];
        *(bool *)((longlong)&local_3528 + uVar36 + 1) = fVar48 != 0.0;
        fVar48 = local_3298[uVar36 + 3];
        *(bool *)((longlong)&local_3528 + uVar36 + 2) = fVar49 != 0.0;
        uVar26 = uVar26 + 0x10;
        *(bool *)((longlong)&local_3528 + uVar36 + 3) = fVar48 != 0.0;
        uVar41 = uVar41 - 1;
      } while (uVar41 != 0);
    }
    if (uVar25 < uVar40) {
      lVar30 = (longlong)&local_3528 + (ulonglong)(uVar25 * 4) + 2;
      uVar41 = (ulonglong)(uVar40 - uVar25);
      pfVar29 = local_3298 + (ulonglong)(uVar25 * 4) + 2;
      do {
        fVar48 = pfVar29[-1];
        *(bool *)(lVar30 + -2) = pfVar29[-2] != 0.0;
        fVar49 = *pfVar29;
        *(bool *)(lVar30 + -1) = fVar48 != 0.0;
        fVar48 = pfVar29[1];
        *(bool *)lVar30 = fVar49 != 0.0;
        *(bool *)(lVar30 + 1) = fVar48 != 0.0;
        pfVar29 = pfVar29 + 4;
        lVar30 = lVar30 + 4;
        uVar41 = uVar41 - 1;
      } while (uVar41 != 0);
    }
  }
  if (local_3580 != (undefined4 *)0x0) {
    local_3580[2] =
         (local_3298[1] * pfVar42[1] + local_3298[0] * *pfVar42 + local_3298[2] * pfVar42[2] +
         local_3298[3] * pfVar42[3]) * local_3438 - *(float *)(param_6 + 0x10c);
    local_3580 = DAT_146b95ee0;
  }
  _guard_xfg_dispatch_icall_nop(local_2c38,0,0x50);
  if (uVar40 != 0) {
    puVar44 = local_2be8;
    pfVar29 = pfVar42;
    do {
      physx::PxVehicleUpdate::storeRaycasts(pfVar29,puVar44);
      puVar44 = puVar44 + 0x280;
      pfVar29 = pfVar29 + 0x88;
      uVar43 = uVar43 - 1;
    } while (uVar43 != 0);
    local_3580 = DAT_146b95ee0;
  }
  fVar52 = DAT_146b95f00 * 2.0;
  fVar51 = DAT_146b95ef8 * 2.0;
  fVar49 = DAT_146b95efc * 2.0;
  fVar50 = local_350c * local_350c - 0.5;
  fVar48 = fVar49 * local_3574 + fVar51 * local_3508 + fVar52 * local_3584;
  uVar25 = *(uint *)(param_6 + 0x5c);
  if (ABS(((fVar51 * local_3584 - fVar52 * local_3508) * local_350c + fVar50 * fVar49 +
          fVar48 * local_3574) * local_35a8 +
          ((fVar52 * local_3574 - fVar49 * local_3584) * local_350c + fVar50 * fVar51 +
          fVar48 * local_3508) * local_3570 +
          ((fVar49 * local_3508 - fVar51 * local_3574) * local_350c + fVar50 * fVar52 +
          fVar48 * local_3584) * fVar46) < *(float *)(param_6 + 0x54)) {
    uVar25 = *(uint *)(param_6 + 0x58);
  }
  local_31d0 = 1.0 / (float)uVar25;
  local_3324 = local_31d0 * param_1;
  local_31ac = *(undefined4 *)(param_6 + 0x60);
  local_31c0 = param_2[1];
  local_31b0 = 1;
  local_31a8 = local_3448;
  local_3588 = 0;
  local_31c8 = 1.0 / local_3324;
  local_3320 = 1.0 / param_1;
  local_31c4 = *param_2;
  local_31bc = param_2[2];
  local_31a0 = param_5;
  lVar30 = local_3380;
  fVar48 = fVar2;
  local_3564 = fVar2;
  local_3378 = fVar46;
  local_3374 = local_35a8;
  local_3370 = local_3570;
  local_336c = local_356c;
  local_3368 = local_3568;
  local_31cc = local_3324;
  local_31b8 = param_3;
  local_31b4 = param_4;
  pfVar29 = pfVar42;
  pfVar38 = (float *)(param_6 + 0xc0);
  if (uVar25 != 0) {
    do {
      local_30f0 = pfVar38;
      local_30f8 = pfVar29;
      uVar43 = (ulonglong)uVar40;
      fVar46 = 0.0;
      local_3488 = 0.0;
      local_3484 = 0.0;
      local_3480 = 0.0;
      local_3398 = 0.0;
      local_3394 = 0.0;
      local_3390 = 0.0;
      _guard_xfg_dispatch_icall_nop(local_2d98,0,0x50);
      local_32c8 = 0;
      local_32c0 = 0;
      local_32b8 = 0;
      if (uVar40 != 0) {
        pfVar29 = (float *)(lVar30 + 0x104);
        lVar30 = (longlong)&local_32c8 + 2;
        pfVar38 = local_2d98 + 2;
        pfVar32 = pfVar42 + 2;
        do {
          fVar48 = fVar46;
          if (-pfVar32[-2] < 0.0) {
            fVar48 = 1.0;
          }
          if (pfVar32[-2] < 0.0) {
            fVar48 = -1.0;
          }
          fVar49 = pfVar29[-0xc];
          pfVar38[-2] = -(local_3364 * fVar48 * fVar49);
          fVar48 = pfVar32[-1];
          *(bool *)(lVar30 + -2) = fVar49 * local_3364 != 0.0;
          fVar49 = fVar46;
          if (-fVar48 < 0.0) {
            fVar49 = 1.0;
          }
          if (fVar48 < 0.0) {
            fVar49 = -1.0;
          }
          fVar48 = *pfVar29;
          pfVar38[-1] = -(local_3328 * fVar49 * fVar48);
          fVar49 = *pfVar32;
          *(bool *)(lVar30 + -1) = fVar48 * local_3328 != 0.0;
          fVar48 = fVar46;
          if (-fVar49 < 0.0) {
            fVar48 = 1.0;
          }
          if (fVar49 < 0.0) {
            fVar48 = -1.0;
          }
          fVar49 = pfVar29[0xc];
          *pfVar38 = -(local_3364 * fVar48 * fVar49);
          fVar48 = pfVar32[1];
          *(bool *)lVar30 = fVar49 * local_3364 != 0.0;
          fVar49 = fVar46;
          if (-fVar48 < 0.0) {
            fVar49 = 1.0;
          }
          if (fVar48 < 0.0) {
            fVar49 = -1.0;
          }
          fVar48 = pfVar29[0x18];
          pfVar38[1] = -(local_3328 * fVar49 * fVar48);
          *(bool *)(lVar30 + 1) = fVar48 * local_3328 != 0.0;
          pfVar38 = pfVar38 + 4;
          lVar30 = lVar30 + 4;
          pfVar32 = pfVar32 + 0x88;
          pfVar29 = pfVar29 + 0xec;
          uVar43 = uVar43 - 1;
        } while (uVar43 != 0);
      }
      lVar30 = 5;
      puVar44 = local_1838;
      puVar33 = local_1720;
      do {
        lVar30 = lVar30 + -1;
        _guard_xfg_dispatch_icall_nop(puVar44,0,0x4a8);
        fVar48 = local_3440;
        uVar47 = (undefined4)((ulonglong)pfVar18 >> 0x20);
        puVar20 = puVar33 + -0xa8;
        lVar31 = 4;
        puVar35 = (undefined4 *)(puVar33 + -0x40);
        do {
          *puVar20 = 1;
          puVar20 = puVar20 + 1;
          *puVar35 = 0xffffffff;
          puVar35 = puVar35 + 1;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        puVar44 = puVar44 + 0x4a8;
        puVar33 = puVar33 + 0x4a8;
      } while (lVar30 != 0);
      uVar43 = 0;
      fVar49 = fVar46;
      fVar50 = fVar46;
      fVar54 = local_3488;
      fVar55 = local_3484;
      fVar56 = local_3480;
      fVar51 = local_3398;
      fVar52 = local_3394;
      fVar53 = local_3390;
      if (uVar40 != 0) {
        puVar23 = &local_3340;
        local_32f0 = local_2c88;
        local_32f8 = local_1e78;
        local_32d0 = local_2c38;
        local_3598 = pfVar42 + 0x74;
        puVar44 = local_142c;
        local_32e8 = local_3380;
        local_32e0 = local_1f68;
        puVar35 = local_1560;
        uVar41 = uVar43;
        uVar36 = uVar43;
        pfVar29 = pfVar42;
        fVar51 = fVar46;
        fVar52 = fVar46;
        fVar53 = fVar46;
        puVar24 = (undefined4 *)local_2be8;
        do {
          local_3580 = puVar24;
          uVar26 = *puVar23;
          local_3170 = local_3508;
          local_316c = local_3574;
          local_3168 = local_3584;
          local_3198[0] = local_35b0;
          local_3164 = local_350c;
          local_3190 = (longlong)&local_3528 + uVar36;
          local_3160 = local_3450;
          local_315c = local_3454;
          local_3188 = (longlong)&local_32c8 + uVar36;
          local_3158 = local_340c;
          local_3148 = local_3564;
          local_3178 = (longlong)&local_3358 + uVar36;
          local_3144 = local_3568;
          local_3140 = local_356c;
          local_3154 = local_3570;
          local_3150 = local_35a8;
          local_314c = fVar48;
          local_3110 = local_3388;
          local_3180 = local_32d0;
          local_3138 = local_32f8;
          local_3130 = local_32f0;
          local_3128 = local_32e8;
          local_3120 = pfVar29;
          local_3118 = local_32e0;
          local_3108 = uVar26;
          FUN_14395bb40((int)uVar41 * 4,&local_31d0,local_3198,puVar44 + -0x40c);
          fVar54 = (float)puVar35[-0x2a];
          fVar55 = (float)puVar35[-0x29];
          fVar56 = (float)puVar35[-0x28];
          fVar6 = (float)puVar35[-0x27];
          local_3120[0x14] = (float)puVar35[-0x60];
          local_3120[0x15] = (float)puVar35[-0x5f];
          local_3120[0x16] = (float)puVar35[-0x5e];
          local_3120[0x17] = (float)puVar35[-0x5d];
          fVar7 = (float)puVar35[-0x26];
          fVar8 = (float)puVar35[-0x25];
          fVar9 = (float)puVar35[-0x24];
          fVar10 = (float)puVar35[-0x23];
          local_3120[0xc] = (float)(~-(uint)(fVar54 == local_3120[0xc]) & (uint)fVar54);
          local_3120[0xd] = (float)(~-(uint)(fVar55 == local_3120[0xd]) & (uint)fVar55);
          local_3120[0xe] = (float)(~-(uint)(fVar56 == local_3120[0xe]) & (uint)fVar56);
          local_3120[0xf] = (float)(~-(uint)(fVar6 == local_3120[0xf]) & (uint)fVar6);
          auVar5._4_4_ = ~-(uint)(local_3120[0x11] == fVar8) & (uint)fVar8;
          auVar5._0_4_ = ~-(uint)(local_3120[0x10] == fVar7) & (uint)fVar7;
          auVar5._8_4_ = ~-(uint)(local_3120[0x12] == fVar9) & (uint)fVar9;
          auVar5._12_4_ = ~-(uint)(local_3120[0x13] == fVar10) & (uint)fVar10;
          *(undefined1 (*) [16])(local_3120 + 0x10) = ZEXT416(0) | auVar5;
          if (uVar25 - 1 == local_3588) {
            pfVar18 = (float *)(puVar44 + 0x10);
            physx::updateCachedHitData
                      (puVar44 + -0x60,puVar44 + -0x50,puVar44 + -0x10,puVar44,pfVar18,pfVar29);
          }
          fVar46 = fVar46 + (float)puVar35[-0x30];
          fVar49 = fVar49 + (float)puVar35[-0x2f];
          fVar50 = fVar50 + (float)puVar35[-0x2e];
          fVar51 = fVar51 + (float)puVar35[-0x2d];
          fVar52 = fVar52 + (float)puVar35[-0x2c];
          fVar53 = fVar53 + (float)puVar35[-0x2b];
          if (local_3588 == 0) {
            lVar30 = *(longlong *)local_3598;
            *(undefined4 *)(lVar30 + 8) = puVar35[-0x22];
            *(undefined4 *)(lVar30 + 0xc) = puVar35[-0x21];
            *(undefined4 *)(lVar30 + 0x10) = puVar35[-0x20];
            *(undefined4 *)(lVar30 + 0x14) = puVar35[-0x1f];
            *(undefined4 *)(lVar30 + 0x18) = puVar35[-0x1e];
            *(undefined4 *)(lVar30 + 0x1c) = puVar35[-0x1d];
            *(undefined4 *)(lVar30 + 0x20) = puVar35[-0x1c];
            *(undefined4 *)(lVar30 + 0x24) = puVar35[-0x1b];
            *(undefined4 *)(lVar30 + 0x28) = puVar35[-0x1a];
            *(undefined4 *)(lVar30 + 0x2c) = puVar35[-0x19];
            *(undefined4 *)(lVar30 + 0x30) = puVar35[-0x18];
            *(undefined4 *)(lVar30 + 0x34) = puVar35[-0x17];
            *(undefined4 *)(lVar30 + 0x38) = puVar35[-0x16];
            *(undefined4 *)(lVar30 + 0x3c) = puVar35[-0x15];
            *(undefined4 *)(lVar30 + 0x40) = puVar35[-0x14];
            *(undefined4 *)(lVar30 + 0x44) = puVar35[-0x13];
            *(undefined4 *)(lVar30 + 0x48) = puVar35[-0x12];
            *(undefined4 *)(lVar30 + 0x4c) = puVar35[-0x11];
            *(undefined4 *)(lVar30 + 0x50) = puVar35[-0x10];
            *(undefined4 *)(lVar30 + 0x54) = puVar35[-0xf];
            *(undefined4 *)(lVar30 + 0x58) = puVar35[-0xe];
            *(undefined4 *)(lVar30 + 0x5c) = puVar35[-0xd];
            *(undefined4 *)(lVar30 + 0x60) = puVar35[-0xc];
            *(undefined4 *)(lVar30 + 100) = puVar35[-0xb];
            *(undefined4 *)(lVar30 + 0x68) = puVar35[-10];
            *(undefined4 *)(lVar30 + 0x6c) = puVar35[-9];
            *(undefined4 *)(lVar30 + 0x70) = puVar35[-8];
            *(undefined4 *)(lVar30 + 0x74) = puVar35[-7];
            *(undefined4 *)(lVar30 + 0x78) = puVar35[-6];
            *(undefined4 *)(lVar30 + 0x7c) = puVar35[-5];
            *(undefined4 *)(lVar30 + 0x80) = puVar35[-4];
            *(undefined4 *)(lVar30 + 0x84) = puVar35[-3];
            *(undefined4 *)(lVar30 + 0x88) = puVar35[-2];
            *(undefined4 *)(lVar30 + 0x8c) = puVar35[-1];
            *(undefined4 *)(lVar30 + 0x90) = *puVar35;
            *(undefined4 *)(lVar30 + 0x94) = puVar35[1];
            *(undefined4 *)(lVar30 + 0x98) = puVar35[2];
            *(undefined4 *)(lVar30 + 0x9c) = puVar35[3];
            *(undefined4 *)(lVar30 + 0xa0) = puVar35[4];
            *(undefined4 *)(lVar30 + 0xa4) = puVar35[5];
            *(undefined4 *)(lVar30 + 0xa8) = puVar35[6];
            *(undefined4 *)(lVar30 + 0xac) = puVar35[7];
            *(undefined4 *)(lVar30 + 0xb0) = puVar35[8];
            *(undefined4 *)(lVar30 + 0xb4) = puVar35[9];
            *(undefined4 *)(lVar30 + 0xb8) = puVar35[10];
            *(undefined4 *)(lVar30 + 0xbc) = puVar35[0xb];
            *(undefined4 *)(lVar30 + 0xc0) = puVar35[0xc];
            *(undefined4 *)(lVar30 + 0xc4) = puVar35[0xd];
            *(undefined4 *)(lVar30 + 200) = puVar35[0xe];
            *(undefined4 *)(lVar30 + 0xcc) = puVar35[0xf];
            *(undefined4 *)(lVar30 + 0xd0) = puVar35[0x10];
            *(undefined4 *)(lVar30 + 0xd4) = puVar35[0x11];
            *(undefined4 *)(lVar30 + 0xd8) = puVar35[0x12];
            *(undefined4 *)(lVar30 + 0xdc) = puVar35[0x13];
            *(undefined4 *)(lVar30 + 0xe0) = puVar35[0x14];
            *(undefined4 *)(lVar30 + 0xe4) = puVar35[0x15];
            *(undefined4 *)(lVar30 + 0xe8) = puVar35[0x16];
            *(undefined4 *)(lVar30 + 0xec) = puVar35[0x17];
            *(undefined4 *)(lVar30 + 0xf0) = puVar35[0x18];
            *(undefined4 *)(lVar30 + 0xf4) = puVar35[0x19];
            *(undefined4 *)(lVar30 + 0xf8) = puVar35[0x1a];
            *(undefined4 *)(lVar30 + 0xfc) = puVar35[0x1b];
            *(undefined4 *)(lVar30 + 0x100) = puVar35[0x1c];
            *(undefined4 *)(lVar30 + 0x104) = puVar35[0x1d];
            *(undefined4 *)(lVar30 + 0x108) = puVar35[0x1e];
            *(undefined4 *)(lVar30 + 0x10c) = puVar35[0x1f];
            *(undefined4 *)(lVar30 + 0x110) = puVar35[0x20];
            *(undefined4 *)(lVar30 + 0x114) = puVar35[0x21];
            *(undefined4 *)(lVar30 + 0x118) = puVar35[0x22];
            *(undefined4 *)(lVar30 + 0x11c) = puVar35[0x23];
            *(undefined4 *)(lVar30 + 0x120) = puVar35[0x24];
            *(undefined4 *)(lVar30 + 0x124) = puVar35[0x25];
            *(undefined4 *)(lVar30 + 0x128) = puVar35[0x26];
            *(undefined4 *)(lVar30 + 300) = puVar35[0x27];
            *(undefined4 *)(lVar30 + 0x130) = puVar35[0x28];
            *(undefined4 *)(lVar30 + 0x134) = puVar35[0x29];
            *(undefined4 *)(lVar30 + 0x138) = puVar35[0x2a];
            *(undefined4 *)(lVar30 + 0x13c) = puVar35[0x2b];
            *(undefined4 *)(lVar30 + 0x140) = puVar35[0x2c];
            *(undefined4 *)(lVar30 + 0x144) = puVar35[0x2d];
            *(undefined4 *)(lVar30 + 0x148) = puVar35[0x2e];
            *(undefined4 *)(lVar30 + 0x14c) = puVar35[0x2f];
            *(undefined4 *)(lVar30 + 0x150) = puVar35[0x30];
            *(undefined4 *)(lVar30 + 0x154) = puVar35[0x31];
            *(undefined4 *)(lVar30 + 0x158) = puVar35[0x32];
            *(undefined4 *)(lVar30 + 0x15c) = puVar35[0x33];
            *(undefined4 *)(lVar30 + 0x160) = puVar35[0x34];
          }
          physx::PxVehicleUpdate::storeSuspWheelTireResults
                    (puVar44 + -0x40c,local_3180,local_3580,uVar26);
          physx::PxVehicleUpdate::storeHitActorForces
                    (puVar44 + -0x40c,(longlong)local_3550 + uVar43,uVar26);
          uVar47 = (undefined4)((ulonglong)pfVar18 >> 0x20);
          uVar26 = (int)uVar41 + 1;
          uVar41 = (ulonglong)uVar26;
          local_32d0 = local_32d0 + 0x10;
          local_32f8 = local_32f8 + 4;
          local_32f0 = local_32f0 + 1;
          local_32e8 = local_32e8 + 0x3b0;
          local_32e0 = local_32e0 + 0x30;
          puVar24 = (undefined4 *)((longlong)local_3580 + 0x280);
          puVar23 = puVar23 + 1;
          local_3598 = local_3598 + 0x88;
          uVar36 = uVar36 + 4;
          uVar43 = uVar43 + 0x100;
          pfVar29 = pfVar29 + 0x88;
          puVar44 = puVar44 + 0x4a8;
          puVar35 = puVar35 + 0x12a;
          local_3580 = DAT_146b95ee0;
          fVar54 = fVar46;
          fVar55 = fVar49;
          fVar56 = fVar50;
        } while (uVar26 < uVar40);
      }
      local_3390 = fVar53;
      local_3394 = fVar52;
      local_3398 = fVar51;
      local_3480 = fVar56;
      local_3484 = fVar55;
      local_3488 = fVar54;
      fVar51 = local_3324;
      lVar30 = local_3380;
      uVar13 = local_3410;
      fVar48 = local_3438;
      uVar41 = (ulonglong)uVar40;
      uVar43 = 0;
      if (3 < uVar40) {
        uVar27 = 2;
        uVar26 = (uVar40 - 4 >> 2) + 1;
        uVar36 = (ulonglong)uVar26;
        uVar43 = (ulonglong)(uVar26 * 4);
        puVar35 = local_162c;
        do {
          local_3228[uVar27 - 2] = puVar35[-1];
          local_3228[uVar27 - 1] = *puVar35;
          local_3228[uVar27] = puVar35[1];
          local_3228[uVar27 + 1] = puVar35[2];
          local_3228[uVar27 + 2] = puVar35[0x129];
          local_3228[uVar27 + 3] = puVar35[0x12a];
          local_3228[uVar27 + 4] = puVar35[299];
          local_3228[uVar27 + 5] = puVar35[300];
          local_3228[uVar27 + 6] = puVar35[0x253];
          local_3228[uVar27 + 7] = puVar35[0x254];
          local_3228[uVar27 + 8] = puVar35[0x255];
          local_3228[uVar27 + 9] = puVar35[0x256];
          local_3228[uVar27 + 10] = puVar35[0x37d];
          local_3228[uVar27 + 0xb] = puVar35[0x37e];
          local_3228[uVar27 + 0xc] = puVar35[0x37f];
          uVar26 = uVar27 + 0xd;
          uVar27 = uVar27 + 0x10;
          local_3228[uVar26] = puVar35[0x380];
          uVar36 = uVar36 - 1;
          puVar35 = puVar35 + 0x4a8;
        } while (uVar36 != 0);
      }
      uVar26 = (uint)uVar43;
      if (uVar26 < uVar40) {
        uVar27 = uVar26 * 4;
        puVar35 = local_3228 + uVar27;
        puVar19 = local_3228 + (uVar27 + 2);
        uVar36 = (ulonglong)(uVar40 - uVar26);
        puVar24 = local_3228 + (uVar27 + 1);
        puVar34 = local_162c + uVar43 * 0x12a;
        puVar39 = local_3228 + (uVar27 + 3);
        do {
          *puVar35 = puVar34[-1];
          puVar35 = puVar35 + 4;
          *puVar24 = *puVar34;
          puVar24 = puVar24 + 4;
          *puVar19 = puVar34[1];
          puVar19 = puVar19 + 4;
          *puVar39 = puVar34[2];
          uVar36 = uVar36 - 1;
          puVar34 = puVar34 + 0x12a;
          puVar39 = puVar39 + 4;
        } while (uVar36 != 0);
      }
      fVar52 = local_2f8c * *(float *)(param_6 + 0x10c);
      if (local_2fb8 == 0) {
        fVar53 = 0.0;
      }
      else {
        fVar53 = local_2ff8[1];
        if ((local_2fb8 != 1) && (local_2ff8[0] <= fVar52)) {
          uVar26 = 1;
          if (1 < local_2fb8) {
            uVar43 = 2;
            fVar53 = local_2ff8[0];
            fVar54 = local_2ff8[1];
            do {
              iVar16 = (int)uVar43;
              fVar55 = local_2ff8[uVar43];
              if ((fVar53 <= fVar52) && (fVar52 < fVar55)) {
                fVar53 = ((local_2ff8[iVar16 + 1] - fVar54) * (fVar52 - fVar53)) / (fVar55 - fVar53)
                         + fVar54;
                goto LAB_14396ab46;
              }
              uVar26 = uVar26 + 1;
              uVar43 = (ulonglong)(iVar16 + 2);
              fVar53 = fVar55;
              fVar54 = local_2ff8[iVar16 + 1];
            } while (uVar26 < local_2fb8);
          }
          fVar53 = local_2ff8[local_2fb8 * 2 - 1];
        }
      }
LAB_14396ab46:
      fVar53 = local_2fa4 * local_3458 * fVar53;
      if (local_3580 != (undefined4 *)0x0) {
        local_3580[1] = fVar53;
      }
      local_30c8 = local_2f94;
      if (local_3360 != 1) {
        local_30c8 = local_2f98;
      }
      local_30c0 = local_2de8;
      local_30b8 = local_3298;
      local_30b0 = local_2d98;
      local_30e8[0] = local_3324;
      local_30a8 = &local_32c8;
      local_30c8 = (local_2f9c - local_30c8) * local_3458 + local_30c8;
      local_30a0 = local_3228;
      local_30e8[3] = (float)local_3410;
      local_3088 = local_2ff8;
      local_30d8 = local_3438;
      local_30e8[1] = 0.0;
      local_30e8[2] = 0.0;
      local_30d4 = 1;
      local_3090 = local_3380;
      local_30cc = fVar53;
      local_3098 = uVar40;
      local_3094 = uVar3;
      physx::solveTankInternaDynamicsEnginePlusDrivenWheels
                (local_30e8,&local_3358,local_2d48,&local_30f8);
      if (uVar40 != 0) {
        puVar44 = local_16e0;
        lVar31 = lVar30;
        pfVar18 = pfVar42;
        do {
          puVar33 = puVar44;
          physx::integrateWheelRotationAngles
                    (&local_32c8,uVar13,fVar48,fVar53,puVar44,local_2de8,puVar44 + 0xa0,&local_32c8,
                     local_2ff8,lVar31,param_6 + 0xc0,pfVar18);
          uVar47 = (undefined4)((ulonglong)puVar33 >> 0x20);
          pfVar18 = pfVar18 + 0x88;
          lVar31 = lVar31 + 0x3b0;
          puVar44 = puVar44 + 0x4a8;
          uVar41 = uVar41 - 1;
        } while (uVar41 != 0);
      }
      physx::procesAntiRollSuspension(local_3388,&local_3430,local_2be8,&local_3398);
      pbVar21 = (byte *)(**(code **)(*local_3448 + 0x60))(local_3448,local_3510);
      if ((*pbVar21 & 2) != 0) {
        fVar48 = 1.0 / local_343c;
        local_3484 = fVar49 + fVar48 * param_2[1];
        local_3488 = fVar46 + fVar48 * *param_2;
        local_3480 = fVar50 + fVar48 * param_2[2];
      }
      pfVar18 = (float *)CONCAT44(uVar47,fVar51);
      physx::integrateBody
                (*pbVar21 & 2,&local_32b0,&local_3488,&local_3398,pfVar18,&local_3478,&local_3468,
                 &local_3430);
      local_3588 = local_3588 + 1;
      local_356c = local_3460;
      local_3568 = local_3464;
      fVar48 = local_3468;
      fVar46 = local_3470;
      local_35a8 = local_3474;
      local_3570 = local_3478;
      if (uVar25 <= local_3588) break;
      local_340c = local_3418;
      local_3580 = DAT_146b95ee0;
      local_3454 = local_341c;
      local_3450 = local_3420;
      local_350c = local_3424;
      local_3584 = local_3428;
      local_3574 = local_342c;
      local_3508 = local_3430;
      local_3440 = local_3470;
      local_3564 = local_3468;
      pfVar29 = local_30f8;
      pfVar38 = local_30f0;
    } while( true );
  }
  lVar30 = local_3380;
  if (DAT_146b95e00 != '\0') {
    fVar46 = (fVar46 - local_3378) * local_3320;
    local_35a8 = (local_35a8 - local_3374) * local_3320;
    local_3570 = (local_3570 - local_3370) * local_3320;
    local_356c = (local_356c - local_336c) * local_3320;
    local_3568 = (local_3568 - local_3368) * local_3320;
    fVar48 = (fVar48 - fVar2) * local_3320;
  }
  local_3534 = CONCAT44(local_356c,local_3568);
  uStack_353c = CONCAT44(fVar48,fVar46);
  local_3544 = CONCAT44(local_35a8,local_3570);
  local_34f8 = 0;
  uStack_34f0 = 0x3f80000000000000;
  local_34e8 = 0;
  local_34e0 = 0;
  uStack_34dc = 0;
  uStack_34d8 = 0;
  uStack_34d4 = 0;
  uStack_34d0 = 0x3f800000;
  uStack_34cc = 0;
  local_34c8 = 0;
  local_34c0 = 0;
  local_34b8 = 0;
  local_34b4 = 0x3f800000;
  local_34ac = 0;
  local_34a4 = 0;
  local_349c = 0;
  local_3498 = 0x3f800000;
  local_3490 = 0;
  physx::computeWheelLocalPoses(local_3380,pfVar42,local_2be8,local_3340,&local_3318,&local_34f8);
  local_2b64 = local_34f8;
  uStack_2b5c = uStack_34f0;
  uStack_2b54 = (undefined4)local_34e8;
  local_2b50 = local_34e8._4_4_;
  auStack_2b4c[0] = local_34e0;
  local_2ab0 = (undefined4)local_34c8;
  local_2ac4 = CONCAT44(uStack_34d8,uStack_34dc);
  uStack_2abc = CONCAT44(uStack_34d0,uStack_34d4);
  *local_3550 = local_34f8;
  local_3550[1] = uStack_34f0;
  local_2ab4 = uStack_34cc;
  local_296c = local_3490._4_4_;
  local_2aac = local_34c8._4_4_;
  local_2a24 = (undefined4)local_34c0;
  local_2a20 = local_34c0._4_4_;
  local_2a1c = local_34b8;
  local_2a18 = (undefined4)local_34b4;
  local_2a14 = local_34b4._4_4_;
  local_2a10 = (undefined4)local_34ac;
  local_2a0c = local_34ac._4_4_;
  local_2984 = (undefined4)local_34a4;
  local_2980 = local_34a4._4_4_;
  local_297c = local_349c;
  local_2978 = (undefined4)local_3498;
  local_2974 = local_3498._4_4_;
  local_2970 = (undefined4)local_3490;
  *(undefined4 *)(local_3550 + 2) = (undefined4)local_34e8;
  *(undefined4 *)((longlong)local_3550 + 0x14) = local_34e8._4_4_;
  *(undefined4 *)(local_3550 + 3) = local_34e0;
  local_3550[8] = CONCAT44(uStack_34d8,uStack_34dc);
  local_3550[9] = CONCAT44(uStack_34d0,uStack_34d4);
  *(undefined4 *)(local_3550 + 10) = uStack_34cc;
  *(undefined4 *)((longlong)local_3550 + 0x54) = (undefined4)local_34c8;
  *(undefined4 *)(local_3550 + 0xb) = local_34c8._4_4_;
  *(undefined4 *)(local_3550 + 0x10) = (undefined4)local_34c0;
  *(undefined4 *)((longlong)local_3550 + 0x84) = local_34c0._4_4_;
  *(undefined4 *)(local_3550 + 0x11) = local_34b8;
  *(undefined4 *)((longlong)local_3550 + 0x8c) = (undefined4)local_34b4;
  *(undefined4 *)(local_3550 + 0x12) = local_34b4._4_4_;
  *(undefined4 *)((longlong)local_3550 + 0x94) = (undefined4)local_34ac;
  *(undefined4 *)(local_3550 + 0x13) = local_34ac._4_4_;
  *(undefined4 *)(local_3550 + 0x18) = (undefined4)local_34a4;
  *(undefined4 *)((longlong)local_3550 + 0xc4) = local_34a4._4_4_;
  *(undefined4 *)(local_3550 + 0x19) = local_349c;
  *(undefined4 *)((longlong)local_3550 + 0xcc) = (undefined4)local_3498;
  *(undefined4 *)(local_3550 + 0x1a) = local_3498._4_4_;
  *(undefined4 *)((longlong)local_3550 + 0xd4) = (undefined4)local_3490;
  *(undefined4 *)(local_3550 + 0x1b) = local_3490._4_4_;
  if (1 < uVar40) {
    puVar35 = local_282c;
    puVar45 = &local_333c;
    lVar31 = 0x180;
    do {
      lVar30 = lVar30 + 0x3b0;
      pfVar42 = pfVar42 + 0x88;
      local_3408 = 0;
      uStack_3400 = 0x3f80000000000000;
      local_33e8 = 0;
      uStack_33e4 = 0;
      uStack_33e0 = 0x3f800000;
      uStack_33dc = 0;
      local_33c8 = 0x3f80000000000000;
      uStack_33c0 = 0;
      local_33a8 = 0x3f800000;
      uStack_33a0 = 0;
      local_33f8 = 0;
      uStack_33f0 = 0;
      uStack_33ec = 0;
      local_33d8 = 0;
      uStack_33d0 = 0;
      local_33b8 = 0;
      uStack_33b0 = 0;
      physx::computeWheelLocalPoses
                (lVar30,pfVar42,puVar35 + -0x4f,*(undefined4 *)puVar45,&local_3318,&local_3408);
      *(undefined8 *)(puVar35 + -0x2e) = local_3408;
      *(undefined8 *)(puVar35 + -0x2c) = uStack_3400;
      puVar35[-0x2a] = (undefined4)local_33f8;
      puVar35[-0x29] = local_33f8._4_4_;
      puVar35[-0x28] = uStack_33f0;
      *(ulonglong *)(puVar35 + -6) = CONCAT44(local_33e8,uStack_33ec);
      *(ulonglong *)(puVar35 + -4) = CONCAT44(uStack_33e0,uStack_33e4);
      puVar35[-1] = (undefined4)local_33d8;
      puVar35[-2] = uStack_33dc;
      *puVar35 = local_33d8._4_4_;
      *(undefined8 *)((longlong)local_3550 + lVar31 + -0x80) = local_3408;
      *(undefined8 *)((longlong)local_3550 + lVar31 + -0x78) = uStack_3400;
      puVar35[0x22] = (undefined4)uStack_33d0;
      puVar35[0x23] = uStack_33d0._4_4_;
      puVar35[0x24] = (undefined4)local_33c8;
      puVar35[0x25] = local_33c8._4_4_;
      *(undefined4 *)((longlong)local_3550 + lVar31 + -0x70) = (undefined4)local_33f8;
      *(undefined4 *)((longlong)local_3550 + lVar31 + -0x6c) = local_33f8._4_4_;
      puVar35[0x26] = (undefined4)uStack_33c0;
      puVar35[0x27] = uStack_33c0._4_4_;
      puVar35[0x28] = (undefined4)local_33b8;
      *(undefined4 *)((longlong)local_3550 + lVar31 + -0x68) = uStack_33f0;
      puVar35[0x4a] = local_33b8._4_4_;
      puVar35[0x4b] = (undefined4)uStack_33b0;
      puVar35[0x4c] = uStack_33b0._4_4_;
      puVar35[0x4d] = (undefined4)local_33a8;
      *(ulonglong *)((longlong)local_3550 + lVar31 + -0x40) = CONCAT44(local_33e8,uStack_33ec);
      *(ulonglong *)((longlong)local_3550 + lVar31 + -0x38) = CONCAT44(uStack_33e0,uStack_33e4);
      *(undefined4 *)((longlong)local_3550 + lVar31 + -0x30) = uStack_33dc;
      puVar35[0x4e] = local_33a8._4_4_;
      puVar35[0x4f] = (undefined4)uStack_33a0;
      puVar35[0x50] = uStack_33a0._4_4_;
      puVar35 = puVar35 + 0xa0;
      *(undefined4 *)((longlong)local_3550 + lVar31 + -0x2c) = (undefined4)local_33d8;
      puVar45 = (undefined8 *)((longlong)puVar45 + 4);
      *(undefined4 *)((longlong)local_3550 + lVar31 + -0x28) = local_33d8._4_4_;
      puVar24 = (undefined4 *)((longlong)local_3550 + lVar31);
      *puVar24 = (undefined4)uStack_33d0;
      puVar24[1] = uStack_33d0._4_4_;
      puVar24[2] = (undefined4)local_33c8;
      puVar24[3] = local_33c8._4_4_;
      puVar24[4] = (undefined4)uStack_33c0;
      puVar24[5] = uStack_33c0._4_4_;
      puVar24[6] = (undefined4)local_33b8;
      *(undefined4 *)((longlong)local_3550 + lVar31 + 0x40) = local_33b8._4_4_;
      *(undefined4 *)((longlong)local_3550 + lVar31 + 0x44) = (undefined4)uStack_33b0;
      *(undefined4 *)((longlong)local_3550 + lVar31 + 0x48) = uStack_33b0._4_4_;
      *(undefined4 *)((longlong)local_3550 + lVar31 + 0x4c) = (undefined4)local_33a8;
      *(undefined4 *)((longlong)local_3550 + lVar31 + 0x50) = local_33a8._4_4_;
      *(undefined4 *)((longlong)local_3550 + lVar31 + 0x54) = (undefined4)uStack_33a0;
      *(undefined4 *)((longlong)local_3550 + lVar31 + 0x58) = uStack_33a0._4_4_;
      uVar22 = uVar22 - 1;
      lVar31 = lVar31 + 0x100;
    } while (uVar22 != 0);
  }
  if ((param_7 != (undefined8 *)0x0) && ((void *)*param_7 != (void *)0x0)) {
    _guard_xfg_dispatch_icall_nop((void *)*param_7,local_2be8,(ulonglong)(uVar3 * 0xa0));
  }
  if (param_8 == (undefined8 *)0x0) {
    local_31d8 = param_6;
    physx::PxVehicleUpdate::updatePost(&local_3550,1,&local_31d8);
  }
  else {
    _guard_xfg_dispatch_icall_nop((void *)*param_8,local_3550,(ulonglong)(uVar3 << 6));
    *(undefined8 *)((longlong)param_8 + 0xc) = local_3544;
    *(undefined8 *)((longlong)param_8 + 0x14) = uStack_353c;
    *(undefined4 *)((longlong)param_8 + 0x1c) = (undefined4)local_3534;
    *(undefined4 *)(param_8 + 4) = local_3534._4_4_;
    *(undefined1 *)((longlong)param_8 + 0x24) = (undefined1)local_352c;
    *(undefined1 *)((longlong)param_8 + 0x25) = local_352c._1_1_;
  }
LAB_14396b602:
  MXCSR = uVar12 & 0xffffffc0;
  return;
}



// FUNCTION 14396b670 FUN_14396b670 body=8084 status=ok
// SIG undefined FUN_14396b670(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14396b670(float param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,longlong param_6,undefined8 *param_7,undefined8 *param_8)

{
  float *pfVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar18;
  float *pfVar19;
  undefined4 *puVar20;
  longlong *plVar21;
  uint uVar22;
  undefined1 *puVar23;
  float fVar24;
  undefined4 uVar25;
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
  undefined8 in_stack_ffffffffffffe1a8;
  bool *pbVar36;
  longlong local_1e28;
  bool local_1e14;
  bool bStack_1e13;
  bool bStack_1e12;
  bool bStack_1e11;
  float local_1e10;
  float local_1e08;
  undefined4 local_1e00;
  uint local_1dfc;
  float local_1df8;
  float local_1df4;
  float local_1df0;
  undefined1 local_1de8;
  undefined1 local_1de7;
  undefined1 local_1de6;
  undefined1 local_1de5;
  uint local_1de4;
  float local_1de0;
  float local_1ddc;
  uint local_1dd8;
  ulonglong local_1dd0;
  undefined8 *local_1dc8;
  uint local_1dc0;
  undefined8 local_1dbc;
  undefined8 uStack_1db4;
  undefined8 local_1dac;
  undefined2 local_1da4;
  undefined1 local_1da0 [4];
  float local_1d9c;
  float local_1d98;
  float local_1d94;
  float local_1d90;
  float local_1d8c;
  float local_1d88;
  float local_1d84;
  uint local_1d80;
  float local_1d78;
  float local_1d74;
  float local_1d70;
  undefined4 local_1d68;
  undefined4 uStack_1d64;
  undefined4 uStack_1d60;
  undefined4 uStack_1d5c;
  undefined8 local_1d58;
  undefined4 local_1d50;
  undefined4 uStack_1d4c;
  undefined4 uStack_1d48;
  undefined4 uStack_1d44;
  undefined4 uStack_1d40;
  undefined4 uStack_1d3c;
  undefined8 local_1d38;
  undefined8 local_1d30;
  undefined4 local_1d28;
  undefined8 local_1d24;
  undefined8 local_1d1c;
  undefined8 local_1d14;
  undefined4 local_1d0c;
  undefined8 local_1d08;
  undefined8 local_1d00;
  float local_1cf8;
  float local_1cf4;
  float local_1cf0;
  float local_1ce8;
  float local_1ce4;
  float local_1ce0;
  longlong *local_1cd8;
  float local_1cd0;
  float local_1ccc;
  uint local_1cc8;
  float local_1cc4;
  float local_1cc0;
  float local_1cbc;
  float local_1cb8;
  float local_1cb4;
  float local_1cb0;
  float local_1cac;
  float local_1ca8;
  uint local_1ca0;
  float local_1c9c;
  undefined8 local_1c98;
  undefined8 uStack_1c90;
  undefined8 local_1c88;
  undefined4 uStack_1c80;
  undefined4 uStack_1c7c;
  undefined4 local_1c78;
  undefined4 uStack_1c74;
  undefined4 uStack_1c70;
  undefined4 uStack_1c6c;
  undefined8 local_1c68;
  undefined8 uStack_1c60;
  undefined8 local_1c58;
  undefined8 uStack_1c50;
  undefined8 local_1c48;
  undefined8 uStack_1c40;
  undefined4 local_1c38;
  undefined4 uStack_1c34;
  undefined4 uStack_1c30;
  undefined4 uStack_1c2c;
  longlong local_1c28;
  float local_1c20;
  float local_1c1c;
  float local_1c18;
  uint local_1c10;
  undefined8 local_1c0c;
  undefined8 local_1c04;
  float local_1bf8;
  float local_1bf4;
  float local_1bf0;
  float local_1bec;
  undefined4 local_1be8;
  undefined4 uStack_1be4;
  undefined4 uStack_1be0;
  undefined4 uStack_1bdc;
  float local_1bd8;
  float local_1bd4;
  float local_1bd0;
  float local_1bc8;
  float local_1bc4;
  float local_1bc0;
  float local_1bbc;
  longlong *local_1bb8;
  longlong local_1bb0;
  undefined4 local_1ba8;
  undefined4 local_1ba4;
  undefined4 local_1ba0;
  float local_1b98;
  float local_1b94;
  float local_1b90;
  float local_1b8c;
  float local_1b88;
  float local_1b84;
  float local_1b80;
  float local_1b7c;
  float local_1b68;
  float local_1b64;
  float local_1b60;
  float local_1b5c;
  float local_1b58;
  float local_1b54;
  float local_1b50;
  float local_1b4c;
  longlong local_1b48;
  float local_1b40;
  float local_1b3c;
  float local_1b38;
  float local_1b34;
  float local_1b30;
  float local_1b2c;
  undefined4 local_1b28;
  undefined4 local_1b24;
  undefined1 local_1b20;
  undefined4 local_1b1c;
  longlong *local_1b18;
  undefined8 local_1b10;
  char local_1b08 [8];
  undefined4 *local_1b00;
  bool *local_1af8;
  longlong local_1af0;
  undefined1 *local_1ae8;
  float local_1ae0;
  float local_1adc;
  float local_1ad8;
  float local_1ad4;
  float local_1ad0;
  float local_1acc;
  float local_1ac8;
  float local_1ac4;
  float local_1ac0;
  float local_1abc;
  float local_1ab8;
  float local_1ab4;
  float local_1ab0;
  undefined4 *local_1aa8;
  undefined4 *local_1aa0;
  longlong local_1a98;
  float *local_1a90;
  undefined1 *local_1a88;
  longlong local_1a80;
  uint local_1a78;
  undefined1 local_1a68 [112];
  undefined1 local_19f8 [104];
  undefined4 local_1990 [32];
  undefined8 local_1910;
  undefined8 uStack_1908;
  undefined1 local_1870 [16];
  float local_1860;
  float local_185c;
  float local_1858;
  float local_1854;
  float local_1850;
  float local_184c;
  float local_1848;
  float local_1844;
  float local_1840;
  float local_183c;
  float local_1838;
  float fStack_1834;
  float fStack_1830;
  float fStack_182c;
  float local_1828;
  float fStack_1824;
  float fStack_1820;
  float fStack_181c;
  undefined8 local_1818;
  undefined8 uStack_1810;
  undefined8 local_1808;
  undefined8 uStack_1800;
  undefined8 local_17f8;
  undefined8 uStack_17f0;
  undefined8 local_17e8;
  undefined8 uStack_17e0;
  undefined8 local_17d8;
  undefined8 uStack_17d0;
  undefined8 local_17c8;
  undefined8 uStack_17c0;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  undefined1 local_17a8;
  undefined1 local_17a7;
  undefined1 local_17a6;
  undefined1 local_17a5;
  undefined8 local_17a4;
  undefined8 uStack_179c;
  undefined8 local_1794;
  undefined8 uStack_178c;
  undefined8 local_1784;
  undefined8 uStack_177c;
  undefined8 local_1774;
  undefined8 uStack_176c;
  undefined8 local_1764;
  undefined8 uStack_175c;
  undefined8 local_1754;
  undefined8 uStack_174c;
  undefined8 local_1744;
  undefined8 uStack_173c;
  undefined1 local_1734;
  undefined1 local_1733;
  undefined1 local_1732;
  undefined1 local_1731;
  undefined8 local_1730;
  undefined8 uStack_1728;
  undefined8 local_1720;
  undefined8 uStack_1718;
  undefined8 local_1710;
  undefined8 uStack_1708;
  undefined8 local_1700;
  undefined8 uStack_16f8;
  undefined8 local_16f0;
  undefined8 uStack_16e8;
  undefined4 local_16e0;
  undefined4 uStack_16dc;
  undefined4 uStack_16d8;
  undefined4 uStack_16d4;
  undefined4 local_16d0;
  undefined4 uStack_16cc;
  undefined4 uStack_16c8;
  undefined4 uStack_16c4;
  undefined1 local_16c0;
  undefined1 local_16bf;
  undefined1 local_16be;
  undefined1 local_16bd;
  undefined2 local_16bc;
  undefined2 local_16b8;
  undefined2 local_16b4;
  undefined2 local_16b0;
  undefined8 local_16ac;
  undefined8 uStack_16a4;
  undefined8 local_169c;
  undefined8 uStack_1694;
  undefined8 local_168c;
  undefined8 uStack_1684;
  undefined8 local_167c;
  undefined8 uStack_1674;
  float local_166c;
  float local_1668;
  float local_1664;
  float local_1660;
  float local_165c;
  float fStack_1658;
  float fStack_1654;
  float fStack_1650;
  undefined2 local_164c;
  undefined2 local_164a;
  undefined2 local_1648;
  undefined2 local_1646;
  undefined1 local_1578 [12];
  undefined1 local_156c [12];
  undefined1 local_1560 [12];
  undefined1 local_1554 [16];
  undefined1 local_1544 [28];
  undefined1 local_1528 [28];
  undefined1 local_150c [36];
  undefined4 local_14e8 [20];
  undefined1 local_1498 [132];
  undefined8 local_1414;
  undefined8 uStack_140c;
  undefined4 uStack_1404;
  undefined4 local_1400;
  undefined4 auStack_13fc [34];
  undefined8 local_1374;
  undefined8 uStack_136c;
  undefined4 local_1364;
  undefined4 local_1360;
  undefined4 local_135c;
  undefined4 local_12d4;
  undefined4 local_12d0;
  undefined4 local_12cc;
  undefined4 local_12c8;
  undefined4 local_12c4;
  undefined4 local_12c0;
  undefined4 local_12bc;
  undefined4 local_1234;
  undefined4 local_1230;
  undefined4 local_122c;
  undefined4 local_1228;
  undefined4 local_1224;
  undefined4 local_1220;
  undefined4 local_121c;
  undefined4 local_10dc [561];
  undefined1 local_818 [8];
  undefined8 local_810 [4];
  longlong local_7f0 [25];
  undefined4 local_728 [80];
  undefined8 local_5e8 [3];
  undefined1 auStack_5d0 [1416];
  undefined8 uStack_48;
  ulonglong uVar17;
  
  uVar12 = MXCSR;
  uStack_48 = 0x14396b6a5;
  uVar17 = 0;
  local_1e10 = 5.73075e-41;
  local_1d80 = MXCSR;
  MXCSR = 0x9fc0;
  uVar10 = uVar17;
  uVar8 = uVar17;
  if (*(int *)(param_6 + 0x38) != 0) {
    do {
      iVar4 = (int)uVar10;
      puVar20 = (undefined4 *)(uVar8 * 0x220 + *(longlong *)(param_6 + 0x70));
      if ((&DAT_146b95e40)[uVar10] != 0) {
        *(undefined4 *)((&DAT_146b95e40)[uVar10] + 0x10) = *puVar20;
        *(undefined4 *)((&DAT_146b95e40)[iVar4 + 1] + 0x10) = puVar20[1];
        *(undefined4 *)((&DAT_146b95e40)[iVar4 + 2] + 0x10) = puVar20[2];
        *(undefined4 *)((&DAT_146b95e40)[iVar4 + 3] + 0x10) = puVar20[3];
      }
      uVar22 = (int)uVar8 + 1;
      uVar10 = (ulonglong)(iVar4 + 4);
      uVar8 = (ulonglong)uVar22;
    } while (uVar22 < *(uint *)(param_6 + 0x38));
  }
  local_1de4 = *(uint *)(param_6 + 0x38);
  puVar11 = local_5e8;
  local_1bb0 = *(longlong *)(param_6 + 0x30);
  lVar13 = 0x14;
  local_1dfc = *(uint *)(param_6 + 0x3c);
  lVar16 = 0x14;
  local_1c28 = *(longlong *)(param_6 + 0x70);
  puVar23 = auStack_5d0;
  uVar22 = local_1dfc + (1 - local_1de4) * 4;
  local_1cd8 = *(longlong **)(param_6 + 0xa0);
  do {
    *(undefined4 *)puVar11 = 0;
    puVar11 = puVar11 + 8;
    *(undefined8 *)(puVar23 + -0x14) = 0;
    *(undefined8 *)(puVar23 + -0xc) = 0x3f800000;
    *(undefined8 *)(puVar23 + -4) = 0;
    *(undefined8 *)(puVar23 + 0x10) = 0;
    *(undefined8 *)(puVar23 + 0x18) = 0;
    *(undefined8 *)(puVar23 + 0x20) = 0;
    *(undefined8 *)(puVar23 + 8) = 0;
    puVar23 = puVar23 + 0x40;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  bVar2 = false;
  local_1dbc = 0;
  uStack_1db4 = 0;
  local_1dc8 = local_5e8;
  local_1dac = 0;
  local_1da4 = 0;
  local_1dc0 = local_1dfc;
  if (local_1dfc != 0) {
    do {
      fVar24 = (float)physx::PxVehicleNoDrive::getDriveTorque(param_6,uVar17);
      if ((fVar24 != 0.0) ||
         (fVar24 = (float)physx::PxVehicleNoDrive::getSteerAngle(param_6,uVar17), fVar24 != 0.0)) {
        bVar2 = true;
        break;
      }
      uVar15 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar15;
    } while (uVar15 < local_1dfc);
  }
  cVar3 = (**(code **)(*local_1cd8 + 0x1f0))();
  if (cVar3 != '\0') {
    if ((!bVar2) && (cVar3 = FUN_143970090(param_6 + 0x10,param_6 + 0x70), cVar3 == '\0')) {
      uVar22 = *(int *)(param_6 + 0x8c) + 3;
      if (uVar22 >> 2 != 0) {
        puVar20 = (undefined4 *)(*(longlong *)(param_6 + 0x70) + 0x50);
        uVar10 = (ulonglong)(uVar22 >> 2);
        do {
          *(undefined8 *)(puVar20 + -0x14) = 0;
          *(undefined8 *)(puVar20 + -0x10) = 0;
          *puVar20 = 0x7f7fffff;
          puVar20[1] = 0x7f7fffff;
          *(undefined8 *)(puVar20 + -0x12) = 0;
          *(undefined8 *)(puVar20 + -0xe) = 0;
          puVar20[2] = 0x7f7fffff;
          puVar20[3] = 0x7f7fffff;
          puVar20 = puVar20 + 0x88;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (param_8 != (undefined8 *)0x0) {
        *(undefined1 *)((longlong)param_8 + 0x24) = 1;
      }
      goto LAB_14396d5a1;
    }
    local_1da4 = CONCAT11(1,(undefined1)local_1da4);
  }
  uVar10 = (ulonglong)local_1de4;
  local_1c0c = 0;
  local_1c04 = 0;
  uVar15 = local_1de4 - 1;
  local_1c10 = 4;
  if (local_1dfc < 4) {
    local_1c10 = local_1dfc;
  }
  if (1 < uVar15) {
    puVar11 = &local_1c0c;
    for (uVar8 = (ulonglong)(local_1de4 - 2); uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)puVar11 = 4;
      puVar11 = (undefined8 *)((longlong)puVar11 + 4);
    }
  }
  (&local_1c10)[uVar15] = uVar22;
  uVar22 = 0;
  local_1dd0 = (ulonglong)uVar15;
  if (local_1de4 != 0) {
    plVar18 = *(longlong **)(param_6 + 0x78);
    puVar11 = local_810;
    lVar16 = 0x10;
    plVar21 = local_7f0;
    uVar8 = uVar10;
    do {
      puVar11[-1] = *(undefined8 *)(lVar16 + -0x10 + *plVar18);
      *puVar11 = *(undefined8 *)(lVar16 + -8 + *plVar18);
      puVar11[1] = *(undefined8 *)(lVar16 + *plVar18);
      puVar11[2] = *(undefined8 *)(lVar16 + 8 + *plVar18);
      plVar21[-1] = plVar18[1];
      *plVar21 = plVar18[2];
      uVar8 = uVar8 - 1;
      puVar11 = puVar11 + 6;
      lVar16 = lVar16 + 0x20;
      plVar21 = plVar21 + 6;
    } while (uVar8 != 0);
    if (local_1de4 != 0) {
      plVar18 = (longlong *)(local_1c28 + 0x1d0);
      do {
        (**(code **)(**(longlong **)(*plVar18 + 0x168) + 0x40))();
        plVar18 = plVar18 + 0x44;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  puVar23 = local_1498;
  puVar20 = auStack_13fc;
  do {
    _guard_xfg_dispatch_icall_nop(puVar23,0,0xa0);
    plVar18 = local_1cd8;
    *(undefined1 *)(puVar20 + -0x20) = 1;
    puVar23 = puVar23 + 0xa0;
    puVar20[-0x19] = 0xffffffff;
    *(undefined8 *)(puVar20 + -6) = 0;
    puVar20[-4] = 0;
    *(undefined8 *)(puVar20 + -3) = 0x3f800000;
    *(undefined8 *)(puVar20 + -1) = 0;
    puVar20 = puVar20 + 0x28;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  puVar20 = (undefined4 *)(**(code **)(*local_1cd8 + 0xf0))(local_1cd8,local_1544);
  local_1be8 = *puVar20;
  uStack_1be4 = puVar20[1];
  uStack_1be0 = puVar20[2];
  uStack_1bdc = puVar20[3];
  fVar24 = (float)puVar20[4];
  fVar32 = (float)puVar20[5];
  fVar31 = (float)puVar20[6];
  local_1bd8 = fVar24;
  local_1bd4 = fVar32;
  local_1bd0 = fVar31;
  pfVar5 = (float *)(**(code **)(*plVar18 + 0xa0))(plVar18,local_1528);
  fVar24 = fVar24 * 2.0;
  fVar30 = pfVar5[3];
  fVar34 = pfVar5[1];
  fVar26 = *pfVar5;
  fVar28 = pfVar5[2];
  fVar32 = fVar32 * 2.0;
  fVar29 = fVar30 * fVar30 - 0.5;
  fVar31 = fVar31 * 2.0;
  fVar27 = fVar34 * fVar32 + fVar26 * fVar24 + fVar28 * fVar31;
  fVar35 = (fVar26 * fVar32 - fVar34 * fVar24) * fVar30 + fVar29 * fVar31 + fVar28 * fVar27 +
           pfVar5[6];
  fVar33 = (fVar28 * fVar24 - fVar26 * fVar31) * fVar30 + fVar29 * fVar32 + fVar34 * fVar27 +
           pfVar5[5];
  fVar24 = (fVar34 * fVar31 - fVar28 * fVar32) * fVar30 + fVar29 * fVar24 + fVar26 * fVar27 +
           pfVar5[4];
  local_1cd0 = fVar33;
  local_1ccc = fVar24;
  local_1c9c = fVar35;
  pfVar5 = (float *)physx::PxQuat::operator*(pfVar5,local_1554,&local_1be8);
  local_1d94 = *pfVar5;
  local_1d98 = pfVar5[1];
  local_1de0 = pfVar5[2];
  local_1d9c = pfVar5[3];
  local_1cc0 = local_1d94;
  local_1cbc = local_1d98;
  local_1cb8 = local_1de0;
  local_1cb4 = local_1d9c;
  local_1cb0 = fVar24;
  local_1cac = fVar33;
  local_1ca8 = fVar35;
  local_1b88 = local_1d94;
  local_1b84 = local_1d98;
  local_1b80 = local_1de0;
  local_1b7c = local_1d9c;
  local_1cc4 = (float)(**(code **)(*plVar18 + 0x100))(plVar18);
  local_1cc4 = 1.0 / local_1cc4;
  puVar20 = (undefined4 *)(**(code **)(*plVar18 + 0x120))(plVar18,local_1560);
  local_1ba8 = *puVar20;
  local_1ba4 = puVar20[1];
  local_1ba0 = puVar20[2];
  pfVar5 = (float *)(**(code **)(*plVar18 + 0x128))(plVar18,local_1578);
  fVar24 = *pfVar5;
  fVar32 = pfVar5[1];
  fVar31 = pfVar5[2];
  local_1d90 = fVar31;
  local_1d8c = fVar32;
  local_1d88 = fVar24;
  local_1cf8 = fVar24;
  local_1cf4 = fVar32;
  local_1cf0 = fVar31;
  pfVar5 = (float *)(**(code **)(*plVar18 + 0x138))(plVar18,local_156c);
  local_1ddc = *pfVar5;
  fVar30 = pfVar5[1];
  fVar34 = pfVar5[2];
  uVar15 = local_1dfc;
  local_1e10 = fVar34;
  local_1d84 = fVar30;
  local_1ce8 = local_1ddc;
  local_1ce4 = fVar30;
  local_1ce0 = fVar34;
  if (local_1dfc != 0) {
    puVar20 = local_14e8;
    puVar9 = local_728 + 2;
    do {
      iVar4 = physx::PxVehicleWheelsSimData::getWheelShapeMapping(param_6 + 0x10,uVar22);
      if (iVar4 != -1) {
        local_1bb8 = (longlong *)0x0;
        (**(code **)(*local_1cd8 + 0xd0))(local_1cd8,&local_1bb8,1);
        puVar6 = (undefined4 *)(**(code **)(*local_1bb8 + 0x90))(local_1bb8,local_150c);
        puVar9[-2] = *puVar6;
        puVar9[-1] = puVar6[1];
        *puVar9 = puVar6[2];
        puVar9[1] = puVar6[3];
        uVar25 = physx::PxVehicleWheelsDynData::getWheelRotationAngle(param_6 + 0x70,uVar22);
        *puVar20 = uVar25;
        uVar15 = local_1dfc;
      }
      uVar22 = uVar22 + 1;
      puVar9 = puVar9 + 4;
      puVar20 = puVar20 + 1;
    } while (uVar22 < uVar15);
  }
  uVar22 = 0;
  fVar26 = 0.0;
  fVar28 = 0.0;
  if (3 < uVar15) {
    lVar13 = *(longlong *)(param_6 + 200) - *(longlong *)(param_6 + 0xd0);
    uVar22 = (uVar15 - 4 >> 2) + 1;
    uVar10 = (ulonglong)uVar22;
    uVar22 = uVar22 * 4;
    pfVar5 = (float *)(*(longlong *)(param_6 + 0xd0) + 4);
    do {
      fVar27 = ABS(*(float *)(lVar13 + -4 + (longlong)pfVar5));
      if (fVar27 <= fVar26) {
        fVar27 = fVar26;
      }
      pfVar1 = pfVar5 + 4;
      fVar26 = ABS(pfVar5[-1]);
      if (ABS(pfVar5[-1]) <= fVar28) {
        fVar26 = fVar28;
      }
      fVar28 = ABS(*(float *)(lVar13 + (longlong)pfVar5));
      if (ABS(*(float *)(lVar13 + (longlong)pfVar5)) <= fVar27) {
        fVar28 = fVar27;
      }
      fVar27 = ABS(*(float *)(lVar13 + -0xc + (longlong)pfVar1));
      fVar29 = ABS(*pfVar5);
      if (ABS(*pfVar5) <= fVar26) {
        fVar29 = fVar26;
      }
      if (fVar27 <= fVar28) {
        fVar27 = fVar28;
      }
      fVar26 = ABS(*(float *)(lVar13 + -8 + (longlong)pfVar1));
      fVar33 = ABS(pfVar5[1]);
      if (ABS(pfVar5[1]) <= fVar29) {
        fVar33 = fVar29;
      }
      if (fVar26 <= fVar27) {
        fVar26 = fVar27;
      }
      fVar28 = ABS(pfVar5[2]);
      if (ABS(pfVar5[2]) <= fVar33) {
        fVar28 = fVar33;
      }
      uVar10 = uVar10 - 1;
      pfVar5 = pfVar1;
    } while (uVar10 != 0);
  }
  if (uVar22 < uVar15) {
    pfVar5 = (float *)(*(longlong *)(param_6 + 0xd0) + (ulonglong)uVar22 * 4);
    uVar10 = (ulonglong)(local_1dfc - uVar22);
    fVar27 = fVar26;
    fVar29 = fVar28;
    do {
      fVar26 = ABS(*(float *)((longlong)pfVar5 +
                             (*(longlong *)(param_6 + 200) - *(longlong *)(param_6 + 0xd0))));
      if (fVar26 <= fVar27) {
        fVar26 = fVar27;
      }
      fVar28 = ABS(*pfVar5);
      if (ABS(*pfVar5) <= fVar29) {
        fVar28 = fVar29;
      }
      pfVar5 = pfVar5 + 1;
      uVar10 = uVar10 - 1;
      fVar27 = fVar26;
      fVar29 = fVar28;
    } while (uVar10 != 0);
  }
  if ((fVar26 <= 0.0) || (fVar28 != 0.0)) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  uVar10 = (ulonglong)local_1de4;
  if (local_1de4 != 0) {
    puVar23 = local_1498;
    lVar13 = local_1c28;
    do {
      physx::PxVehicleUpdate::storeRaycasts(lVar13,puVar23);
      puVar23 = puVar23 + 0x280;
      lVar13 = lVar13 + 0x220;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    uVar10 = (ulonglong)local_1de4;
  }
  uVar22 = (uint)uVar10;
  local_1e08 = local_1ddc;
  fVar26 = DAT_146b95f00 * 2.0;
  local_1bf4 = fVar30;
  fVar27 = DAT_146b95ef8 * 2.0;
  local_1bf0 = fVar31;
  fVar30 = DAT_146b95efc * 2.0;
  local_1bf8 = fVar34;
  fVar28 = local_1d9c * local_1d9c - 0.5;
  fVar31 = local_1d98 * fVar30 + local_1d94 * fVar27 + local_1de0 * fVar26;
  local_1cc8 = *(uint *)(param_6 + 0x5c);
  if (ABS(((local_1de0 * fVar27 - local_1d94 * fVar26) * local_1d9c + fVar28 * fVar30 +
          local_1d98 * fVar31) * local_1d8c +
          ((local_1d98 * fVar26 - local_1de0 * fVar30) * local_1d9c + fVar28 * fVar27 +
          local_1d94 * fVar31) * local_1d88 +
          ((local_1d94 * fVar30 - local_1d98 * fVar27) * local_1d9c + fVar28 * fVar26 +
          local_1de0 * fVar31) * local_1d90) < *(float *)(param_6 + 0x54)) {
    local_1cc8 = *(uint *)(param_6 + 0x58);
  }
  local_1c20 = 1.0 / param_1;
  local_1b20 = 0;
  local_1b18 = local_1cd8;
  local_1b10 = param_5;
  local_1dd8 = 0;
  local_1b1c = *(undefined4 *)(param_6 + 0x60);
  local_1b40 = 1.0 / (float)local_1cc8;
  param_1 = (1.0 / (float)local_1cc8) * param_1;
  local_1b30 = param_2[1];
  local_1b28 = param_3;
  local_1bec = param_1;
  local_1b3c = param_1;
  local_1b24 = param_4;
  local_1b38 = 1.0 / param_1;
  local_1b34 = *param_2;
  local_1b2c = param_2[2];
  fVar31 = local_1d84;
  fVar30 = local_1ddc;
  fVar26 = local_1d90;
  fVar28 = local_1d8c;
  fVar27 = local_1d88;
  local_1c1c = fVar32;
  local_1c18 = fVar24;
  uVar15 = local_1cc8;
  if (local_1cc8 != 0) {
    while( true ) {
      uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffe1a8 >> 0x20);
      uVar8 = 0;
      local_1df0 = 0.0;
      local_1df8 = 0.0;
      local_1df4 = 0.0;
      local_1d78 = 0.0;
      local_1d74 = 0.0;
      local_1d70 = 0.0;
      local_1ca0 = 0;
      uVar12 = local_1dd8;
      if ((int)uVar10 != 0) {
        local_1e28 = 0;
        fVar24 = param_1;
        do {
          fVar30 = local_1df0;
          fVar31 = local_1df4;
          fVar32 = local_1df8;
          fVar34 = 1.0;
          uVar22 = (uint)uVar8 * 4;
          uVar10 = (ulonglong)uVar22;
          pfVar5 = (float *)(*(longlong *)(param_6 + 0xd0) + uVar10 * 4);
          local_1af0 = *(longlong *)(param_6 + 0xc0) + uVar10 * 4;
          pfVar1 = (float *)(*(longlong *)(param_6 + 200) + uVar10 * 4);
          local_1de8 = (*(uint *)(param_6 + 0x50 + (ulonglong)(((uint)uVar8 & 0x3fffffff) >> 3) * 4)
                        >> (uVar22 & 0x1f) & 1) != 0;
          local_1de7 = (*(uint *)(param_6 + 0x50 + (ulonglong)(uVar22 + 1 >> 5) * 4) >>
                        (uVar22 + 1 & 0x1f) & 1) != 0;
          local_1de6 = (*(uint *)(param_6 + 0x50 + (ulonglong)(uVar22 + 2 >> 5) * 4) >>
                        (uVar22 + 2 & 0x1f) & 1) != 0;
          local_1de5 = (*(uint *)(param_6 + 0x50 + (ulonglong)(uVar22 + 3 >> 5) * 4) >>
                        (uVar22 + 3 & 0x1f) & 1) != 0;
          pfVar19 = (float *)(local_1e28 * 0x220 + local_1c28);
          lVar13 = local_1e28 * 0x3b0 + local_1bb0;
          if (-*pfVar19 < 0.0) {
            fVar26 = 1.0;
          }
          else {
            fVar26 = 0.0;
          }
          if (*pfVar19 < 0.0) {
            fVar26 = -1.0;
          }
          fVar26 = -(fVar26 * *pfVar5);
          local_1bc8 = fVar26;
          if (0.0 <= -pfVar19[1]) {
            fVar34 = 0.0;
          }
          if (pfVar19[1] < 0.0) {
            fVar34 = -1.0;
          }
          fVar34 = -(fVar34 * pfVar5[1]);
          local_1bc4 = fVar34;
          if (-pfVar19[2] < 0.0) {
            fVar28 = 1.0;
          }
          else {
            fVar28 = 0.0;
          }
          if (pfVar19[2] < 0.0) {
            fVar28 = -1.0;
          }
          fVar28 = -(fVar28 * pfVar5[2]);
          local_1bc0 = fVar28;
          if (-pfVar19[3] < 0.0) {
            fVar27 = 1.0;
          }
          else {
            fVar27 = 0.0;
          }
          if (pfVar19[3] < 0.0) {
            fVar27 = -1.0;
          }
          fVar27 = -(fVar27 * pfVar5[3]);
          local_1bbc = fVar27;
          _local_1e14 = CONCAT13(pfVar5[3] != 0.0,
                                 CONCAT12(pfVar5[2] != 0.0,CONCAT11(pfVar5[1] != 0.0,*pfVar5 != 0.0)
                                         ));
          local_1e00 = 0;
          if (cVar3 != '\0') {
            local_1e00 = CONCAT13(pfVar1[3] != 0.0,
                                  CONCAT12(pfVar1[2] != 0.0,
                                           CONCAT11(pfVar1[1] != 0.0,*pfVar1 != 0.0)));
          }
          local_1ae0 = local_1d94;
          local_1b00 = &local_1e00;
          local_1adc = local_1d98;
          local_1af8 = &local_1e14;
          local_1ad8 = local_1de0;
          local_1ae8 = &local_1de8;
          local_1ad4 = local_1d9c;
          local_1ad0 = local_1ccc;
          local_1acc = local_1cd0;
          local_1ac8 = local_1c9c;
          local_1ac4 = local_1d88;
          local_1ac0 = local_1d8c;
          local_1ab8 = local_1ddc;
          local_1ab4 = local_1d84;
          local_1aa8 = local_728 + uVar8 * 4;
          local_1aa0 = local_14e8 + uVar8;
          local_1b08[0] = cVar3;
          uVar15 = (&local_1c10)[local_1e28];
          local_1a88 = local_818 + uVar8 * 0x30;
          local_1ab0 = local_1e10;
          local_1a80 = param_6 + 0x10;
          local_1abc = local_1d90;
          local_1a98 = lVar13;
          local_1a90 = pfVar19;
          local_1a78 = uVar15;
          _guard_xfg_dispatch_icall_nop(local_1a68,0,0x4a8);
          puVar23 = local_19f8;
          lVar16 = 4;
          puVar20 = local_1990;
          do {
            *puVar23 = 1;
            puVar23 = puVar23 + 1;
            *puVar20 = 0xffffffff;
            puVar20 = puVar20 + 1;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          FUN_14395bb40(uVar22,&local_1b40,local_1b08,local_1a68);
          uVar12 = local_1dd8;
          local_1a90[0xc] = (float)(~-(uint)(local_1a90[0xc] == local_1838) & (uint)local_1838);
          local_1a90[0xd] = (float)(~-(uint)(local_1a90[0xd] == fStack_1834) & (uint)fStack_1834);
          local_1a90[0xe] = (float)(~-(uint)(local_1a90[0xe] == fStack_1830) & (uint)fStack_1830);
          local_1a90[0xf] = (float)(~-(uint)(local_1a90[0xf] == fStack_182c) & (uint)fStack_182c);
          local_1a90[0x10] = (float)(~-(uint)(local_1828 == local_1a90[0x10]) & (uint)local_1828);
          local_1a90[0x11] = (float)(~-(uint)(fStack_1824 == local_1a90[0x11]) & (uint)fStack_1824);
          local_1a90[0x12] = (float)(~-(uint)(fStack_1820 == local_1a90[0x12]) & (uint)fStack_1820);
          local_1a90[0x13] = (float)(~-(uint)(fStack_181c == local_1a90[0x13]) & (uint)fStack_181c);
          *(undefined8 *)(local_1a90 + 0x14) = local_1910;
          *(undefined8 *)(local_1a90 + 0x16) = uStack_1908;
          if (local_1cc8 - 1 == local_1dd8) {
            if ((*(longlong *)(pfVar19 + 0x76) != 0) || (*(longlong *)(pfVar19 + 0x78) != 0)) {
              *(undefined1 *)(pfVar19 + 0x7a) = 1;
            }
            *(undefined2 *)(pfVar19 + 0x30) = local_16bc;
            *(undefined8 *)(pfVar19 + 0x18) = local_16ac;
            *(undefined8 *)(pfVar19 + 0x1a) = uStack_16a4;
            pfVar19[0x2c] = local_166c;
            *(undefined2 *)(pfVar19 + 0x32) = local_164c;
            *(undefined2 *)((longlong)pfVar19 + 0xc2) = local_16b8;
            *(undefined8 *)(pfVar19 + 0x1c) = local_169c;
            *(undefined8 *)(pfVar19 + 0x1e) = uStack_1694;
            pfVar19[0x2d] = local_1668;
            *(undefined2 *)((longlong)pfVar19 + 0xca) = local_164a;
            *(undefined2 *)(pfVar19 + 0x31) = local_16b4;
            *(undefined8 *)(pfVar19 + 0x20) = local_168c;
            *(undefined8 *)(pfVar19 + 0x22) = uStack_1684;
            pfVar19[0x2e] = local_1664;
            *(undefined2 *)(pfVar19 + 0x33) = local_1648;
            *(undefined2 *)((longlong)pfVar19 + 0xc6) = local_16b0;
            *(undefined8 *)(pfVar19 + 0x24) = local_167c;
            *(undefined8 *)(pfVar19 + 0x26) = uStack_1674;
            pfVar19[0x2f] = local_1660;
            pfVar19[0x28] = local_165c;
            pfVar19[0x29] = fStack_1658;
            pfVar19[0x2a] = fStack_1654;
            pfVar19[0x2b] = fStack_1650;
            *(undefined2 *)((longlong)pfVar19 + 0xce) = local_1646;
          }
          local_1d78 = local_1d78 + local_1844;
          local_1df8 = fVar32 + local_1850;
          local_1df4 = fVar31 + local_184c;
          local_1df0 = fVar30 + local_1848;
          local_1d74 = local_1d74 + local_1840;
          local_1d70 = local_1d70 + local_183c;
          if (local_1dd8 == 0) {
            lVar16 = *(longlong *)(pfVar19 + 0x74);
            *(undefined8 *)(lVar16 + 8) = local_1818;
            *(undefined8 *)(lVar16 + 0x10) = uStack_1810;
            *(undefined8 *)(lVar16 + 0x18) = local_1808;
            *(undefined8 *)(lVar16 + 0x20) = uStack_1800;
            *(undefined8 *)(lVar16 + 0x28) = local_17f8;
            *(undefined8 *)(lVar16 + 0x30) = uStack_17f0;
            *(undefined8 *)(lVar16 + 0x38) = local_17e8;
            *(undefined8 *)(lVar16 + 0x40) = uStack_17e0;
            *(undefined8 *)(lVar16 + 0x48) = local_17d8;
            *(undefined8 *)(lVar16 + 0x50) = uStack_17d0;
            *(undefined8 *)(lVar16 + 0x58) = local_17c8;
            *(undefined8 *)(lVar16 + 0x60) = uStack_17c0;
            *(undefined8 *)(lVar16 + 0x68) = local_17b8;
            *(undefined8 *)(lVar16 + 0x70) = uStack_17b0;
            *(undefined1 *)(lVar16 + 0x78) = local_17a8;
            *(undefined1 *)(lVar16 + 0x79) = local_17a7;
            *(undefined1 *)(lVar16 + 0x7a) = local_17a6;
            *(undefined1 *)(lVar16 + 0x7b) = local_17a5;
            *(undefined8 *)(lVar16 + 0x7c) = local_17a4;
            *(undefined8 *)(lVar16 + 0x84) = uStack_179c;
            *(undefined8 *)(lVar16 + 0x8c) = local_1794;
            *(undefined8 *)(lVar16 + 0x94) = uStack_178c;
            *(undefined8 *)(lVar16 + 0x9c) = local_1784;
            *(undefined8 *)(lVar16 + 0xa4) = uStack_177c;
            *(undefined8 *)(lVar16 + 0xac) = local_1774;
            *(undefined8 *)(lVar16 + 0xb4) = uStack_176c;
            *(undefined8 *)(lVar16 + 0xbc) = local_1764;
            *(undefined8 *)(lVar16 + 0xc4) = uStack_175c;
            *(undefined8 *)(lVar16 + 0xcc) = local_1754;
            *(undefined8 *)(lVar16 + 0xd4) = uStack_174c;
            *(undefined8 *)(lVar16 + 0xdc) = local_1744;
            *(undefined8 *)(lVar16 + 0xe4) = uStack_173c;
            *(undefined1 *)(lVar16 + 0xec) = local_1734;
            *(undefined1 *)(lVar16 + 0xed) = local_1733;
            *(undefined1 *)(lVar16 + 0xee) = local_1732;
            *(undefined1 *)(lVar16 + 0xef) = local_1731;
            *(undefined8 *)(lVar16 + 0xf0) = local_1730;
            *(undefined8 *)(lVar16 + 0xf8) = uStack_1728;
            *(undefined8 *)(lVar16 + 0x100) = local_1720;
            *(undefined8 *)(lVar16 + 0x108) = uStack_1718;
            *(undefined8 *)(lVar16 + 0x110) = local_1710;
            *(undefined8 *)(lVar16 + 0x118) = uStack_1708;
            *(undefined8 *)(lVar16 + 0x120) = local_1700;
            *(undefined8 *)(lVar16 + 0x128) = uStack_16f8;
            *(undefined8 *)(lVar16 + 0x130) = local_16f0;
            *(undefined8 *)(lVar16 + 0x138) = uStack_16e8;
            *(undefined4 *)(lVar16 + 0x140) = local_16e0;
            *(undefined4 *)(lVar16 + 0x144) = uStack_16dc;
            *(undefined4 *)(lVar16 + 0x148) = uStack_16d8;
            *(undefined4 *)(lVar16 + 0x14c) = uStack_16d4;
            *(undefined4 *)(lVar16 + 0x150) = local_16d0;
            *(undefined4 *)(lVar16 + 0x154) = uStack_16cc;
            *(undefined4 *)(lVar16 + 0x158) = uStack_16c8;
            *(undefined4 *)(lVar16 + 0x15c) = uStack_16c4;
            *(undefined1 *)(lVar16 + 0x160) = local_16c0;
            *(undefined1 *)(lVar16 + 0x161) = local_16bf;
            *(undefined1 *)(lVar16 + 0x162) = local_16be;
            *(undefined1 *)(lVar16 + 0x163) = local_16bd;
          }
          physx::PxVehicleUpdate::storeSuspWheelTireResults
                    (local_1a68,local_1af0,local_1498 + (ulonglong)uVar22 * 0xa0,uVar15);
          physx::PxVehicleUpdate::storeHitActorForces
                    (local_1a68,local_1dc8 + (ulonglong)uVar22 * 8,uVar15);
          param_1 = local_1bec;
          local_1b68 = fVar24 * *(float *)(lVar13 + 0xe8);
          local_1b64 = fVar24 * *(float *)(lVar13 + 0x118);
          local_1b98 = *(float *)(lVar13 + 0xd0);
          local_1b60 = fVar24 * *(float *)(lVar13 + 0x148);
          local_1b94 = *(float *)(lVar13 + 0x100);
          local_1b5c = fVar24 * *(float *)(lVar13 + 0x178);
          local_1b90 = *(float *)(lVar13 + 0x130);
          local_1b8c = *(float *)(lVar13 + 0x160);
          local_1b58 = ((local_1860 + *pfVar1 + fVar26) * local_1b68 + *pfVar19) /
                       (local_1b98 * local_1b68 + 1.0);
          local_1b54 = ((local_185c + pfVar1[1] + fVar34) * local_1b64 + pfVar19[1]) /
                       (local_1b94 * local_1b64 + 1.0);
          local_1b50 = ((local_1858 + pfVar1[2] + fVar28) * local_1b60 + pfVar19[2]) /
                       (local_1b90 * local_1b60 + 1.0);
          local_1b4c = ((local_1854 + pfVar1[3] + fVar27) * local_1b5c + pfVar19[3]) /
                       (local_1b8c * local_1b5c + 1.0);
          if ((local_1e14 != false) && (*pfVar19 * local_1b58 <= 0.0)) {
            local_1b58 = 0.0;
          }
          if ((bStack_1e13 != false) && (pfVar19[1] * local_1b54 <= 0.0)) {
            local_1b54 = 0.0;
          }
          if ((bStack_1e12 != false) && (pfVar19[2] * local_1b50 <= 0.0)) {
            local_1b50 = 0.0;
          }
          if ((bStack_1e11 != false) && (pfVar19[3] * local_1b4c <= 0.0)) {
            local_1b4c = 0.0;
          }
          pbVar36 = &local_1e14;
          *pfVar19 = local_1b58;
          pfVar19[1] = local_1b54;
          pfVar19[2] = local_1b50;
          pfVar19[3] = local_1b4c;
          physx::integrateNoDriveWheelRotationAngles
                    (local_1bec,pfVar1,&local_1910,local_1870,pbVar36,lVar13,pfVar19);
          uVar25 = (undefined4)((ulonglong)pbVar36 >> 0x20);
          local_1ca0 = local_1ca0 + 1;
          uVar8 = (ulonglong)local_1ca0;
          uVar10 = (ulonglong)local_1de4;
          local_1e28 = local_1e28 + 1;
          fVar24 = param_1;
          uVar15 = local_1cc8;
        } while (local_1ca0 < local_1de4);
      }
      fVar31 = local_1df0;
      fVar32 = local_1df4;
      fVar24 = local_1df8;
      uVar22 = (uint)uVar10;
      physx::procesAntiRollSuspension(param_6 + 0x10,&local_1cc0,local_1498,&local_1d78);
      pbVar7 = (byte *)(**(code **)(*local_1cd8 + 0x60))(local_1cd8,local_1da0);
      if ((*pbVar7 & 2) != 0) {
        fVar30 = 1.0 / local_1cc4;
        local_1df4 = fVar32 + fVar30 * param_2[1];
        local_1df8 = fVar24 + fVar30 * *param_2;
        local_1df0 = fVar31 + fVar30 * param_2[2];
      }
      in_stack_ffffffffffffe1a8 = CONCAT44(uVar25,param_1);
      physx::integrateBody
                (local_1cc4,&local_1ba8,&local_1df8,&local_1d78,in_stack_ffffffffffffe1a8,
                 &local_1cf8,&local_1ce8,&local_1cc0);
      local_1dd8 = uVar12 + 1;
      fVar31 = local_1ce4;
      fVar30 = local_1ce8;
      fVar26 = local_1cf0;
      fVar28 = local_1cf4;
      fVar27 = local_1cf8;
      fVar34 = local_1ce0;
      uVar12 = local_1d80;
      if (uVar15 <= local_1dd8) break;
      local_1c9c = local_1ca8;
      local_1cd0 = local_1cac;
      local_1ccc = local_1cb0;
      local_1d9c = local_1cb4;
      local_1de0 = local_1cb8;
      local_1d98 = local_1cbc;
      local_1d94 = local_1cc0;
      local_1d8c = local_1cf4;
      local_1d88 = local_1cf8;
      local_1e10 = local_1ce0;
      local_1d84 = local_1ce4;
      local_1ddc = local_1ce8;
      local_1d90 = local_1cf0;
    }
  }
  lVar13 = local_1bb0;
  lVar16 = local_1c28;
  if (DAT_146b95e00 == '\0') {
    local_1dbc = CONCAT44(fVar28,fVar27);
    uStack_1db4 = CONCAT44(fVar30,fVar26);
    local_1dac = CONCAT44(fVar34,fVar31);
  }
  else {
    local_1dbc = CONCAT44(local_1c20 * (fVar28 - local_1c1c),local_1c20 * (fVar27 - local_1c18));
    local_1dac = CONCAT44(local_1c20 * (fVar34 - local_1bf8),local_1c20 * (fVar31 - local_1bf4));
    uStack_1db4 = CONCAT44(local_1c20 * (fVar30 - local_1e08),local_1c20 * (fVar26 - local_1bf0));
  }
  local_1d68 = 0;
  uStack_1d64 = 0;
  uStack_1d60 = 0;
  uStack_1d5c = 0x3f800000;
  local_1d58 = 0;
  local_1d50 = 0;
  uStack_1d4c = 0;
  uStack_1d48 = 0;
  uStack_1d44 = 0;
  uStack_1d40 = 0x3f800000;
  uStack_1d3c = 0;
  local_1d38 = 0;
  local_1d30 = 0;
  local_1d28 = 0;
  local_1d24 = 0x3f800000;
  local_1d1c = 0;
  local_1d14 = 0;
  local_1d0c = 0;
  local_1d08 = 0x3f800000;
  local_1d00 = 0;
  physx::computeWheelLocalPoses(local_1bb0,local_1c28,local_1498,local_1c10,&local_1be8,&local_1d68)
  ;
  local_1414 = CONCAT44(uStack_1d64,local_1d68);
  uStack_140c = CONCAT44(uStack_1d5c,uStack_1d60);
  uStack_1404 = (undefined4)local_1d58;
  local_1360 = (undefined4)local_1d38;
  *local_1dc8 = CONCAT44(uStack_1d64,local_1d68);
  local_1dc8[1] = CONCAT44(uStack_1d5c,uStack_1d60);
  local_1400 = local_1d58._4_4_;
  *(undefined4 *)(local_1dc8 + 2) = (undefined4)local_1d58;
  auStack_13fc[0] = local_1d50;
  *(undefined4 *)((longlong)local_1dc8 + 0x14) = local_1d58._4_4_;
  local_1374 = CONCAT44(uStack_1d48,uStack_1d4c);
  uStack_136c = CONCAT44(uStack_1d40,uStack_1d44);
  *(undefined4 *)(local_1dc8 + 3) = local_1d50;
  local_1364 = uStack_1d3c;
  local_121c = local_1d00._4_4_;
  local_135c = local_1d38._4_4_;
  local_12d4 = (undefined4)local_1d30;
  local_12d0 = local_1d30._4_4_;
  local_12cc = local_1d28;
  local_12c8 = (undefined4)local_1d24;
  local_12c4 = local_1d24._4_4_;
  local_12c0 = (undefined4)local_1d1c;
  local_12bc = local_1d1c._4_4_;
  local_1234 = (undefined4)local_1d14;
  local_1230 = local_1d14._4_4_;
  local_122c = local_1d0c;
  local_1228 = (undefined4)local_1d08;
  local_1224 = local_1d08._4_4_;
  local_1220 = (undefined4)local_1d00;
  local_1dc8[8] = CONCAT44(uStack_1d48,uStack_1d4c);
  local_1dc8[9] = CONCAT44(uStack_1d40,uStack_1d44);
  *(undefined4 *)(local_1dc8 + 10) = uStack_1d3c;
  *(undefined4 *)((longlong)local_1dc8 + 0x54) = (undefined4)local_1d38;
  *(undefined4 *)(local_1dc8 + 0xb) = local_1d38._4_4_;
  *(undefined4 *)(local_1dc8 + 0x10) = (undefined4)local_1d30;
  *(undefined4 *)((longlong)local_1dc8 + 0x84) = local_1d30._4_4_;
  *(undefined4 *)(local_1dc8 + 0x11) = local_1d28;
  *(undefined4 *)((longlong)local_1dc8 + 0x8c) = (undefined4)local_1d24;
  *(undefined4 *)(local_1dc8 + 0x12) = local_1d24._4_4_;
  *(undefined4 *)((longlong)local_1dc8 + 0x94) = (undefined4)local_1d1c;
  *(undefined4 *)(local_1dc8 + 0x13) = local_1d1c._4_4_;
  *(undefined4 *)(local_1dc8 + 0x18) = (undefined4)local_1d14;
  *(undefined4 *)((longlong)local_1dc8 + 0xc4) = local_1d14._4_4_;
  *(undefined4 *)(local_1dc8 + 0x19) = local_1d0c;
  *(undefined4 *)((longlong)local_1dc8 + 0xcc) = (undefined4)local_1d08;
  *(undefined4 *)(local_1dc8 + 0x1a) = local_1d08._4_4_;
  *(undefined4 *)((longlong)local_1dc8 + 0xd4) = (undefined4)local_1d00;
  *(undefined4 *)(local_1dc8 + 0x1b) = local_1d00._4_4_;
  if (1 < uVar22) {
    puVar20 = local_10dc;
    puVar11 = &local_1c0c;
    uVar10 = local_1dd0;
    lVar14 = 0x180;
    do {
      lVar16 = lVar16 + 0x220;
      lVar13 = lVar13 + 0x3b0;
      local_1c98 = 0;
      uStack_1c90 = 0x3f80000000000000;
      local_1c78 = 0;
      uStack_1c74 = 0;
      uStack_1c70 = 0x3f800000;
      uStack_1c6c = 0;
      local_1c58 = 0x3f80000000000000;
      uStack_1c50 = 0;
      local_1c38 = 0x3f800000;
      uStack_1c34 = 0;
      uStack_1c30 = 0;
      uStack_1c2c = 0;
      local_1c88 = 0;
      uStack_1c80 = 0;
      uStack_1c7c = 0;
      local_1c68 = 0;
      uStack_1c60 = 0;
      local_1c48 = 0;
      uStack_1c40 = 0;
      physx::computeWheelLocalPoses
                (lVar13,lVar16,puVar20 + -0x4f,*(undefined4 *)puVar11,&local_1be8,&local_1c98);
      *(undefined8 *)(puVar20 + -0x2e) = local_1c98;
      *(undefined8 *)(puVar20 + -0x2c) = uStack_1c90;
      puVar20[-0x2a] = (undefined4)local_1c88;
      puVar20[-0x29] = local_1c88._4_4_;
      puVar20[-0x28] = uStack_1c80;
      *(ulonglong *)(puVar20 + -6) = CONCAT44(local_1c78,uStack_1c7c);
      *(ulonglong *)(puVar20 + -4) = CONCAT44(uStack_1c70,uStack_1c74);
      puVar20[-1] = (undefined4)local_1c68;
      puVar20[-2] = uStack_1c6c;
      *puVar20 = local_1c68._4_4_;
      *(undefined8 *)((longlong)local_1dc8 + lVar14 + -0x80) = local_1c98;
      *(undefined8 *)((longlong)local_1dc8 + lVar14 + -0x78) = uStack_1c90;
      puVar20[0x22] = (undefined4)uStack_1c60;
      puVar20[0x23] = uStack_1c60._4_4_;
      puVar20[0x24] = (undefined4)local_1c58;
      puVar20[0x25] = local_1c58._4_4_;
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + -0x70) = (undefined4)local_1c88;
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + -0x6c) = local_1c88._4_4_;
      puVar20[0x26] = (undefined4)uStack_1c50;
      puVar20[0x27] = uStack_1c50._4_4_;
      puVar20[0x28] = (undefined4)local_1c48;
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + -0x68) = uStack_1c80;
      puVar20[0x4a] = local_1c48._4_4_;
      puVar20[0x4b] = (undefined4)uStack_1c40;
      puVar20[0x4c] = uStack_1c40._4_4_;
      puVar20[0x4d] = local_1c38;
      *(ulonglong *)((longlong)local_1dc8 + lVar14 + -0x40) = CONCAT44(local_1c78,uStack_1c7c);
      *(ulonglong *)((longlong)local_1dc8 + lVar14 + -0x38) = CONCAT44(uStack_1c70,uStack_1c74);
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + -0x30) = uStack_1c6c;
      puVar20[0x4e] = uStack_1c34;
      puVar20[0x4f] = uStack_1c30;
      puVar20[0x50] = uStack_1c2c;
      puVar20 = puVar20 + 0xa0;
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + -0x2c) = (undefined4)local_1c68;
      puVar11 = (undefined8 *)((longlong)puVar11 + 4);
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + -0x28) = local_1c68._4_4_;
      puVar9 = (undefined4 *)((longlong)local_1dc8 + lVar14);
      *puVar9 = (undefined4)uStack_1c60;
      puVar9[1] = uStack_1c60._4_4_;
      puVar9[2] = (undefined4)local_1c58;
      puVar9[3] = local_1c58._4_4_;
      puVar9[4] = (undefined4)uStack_1c50;
      puVar9[5] = uStack_1c50._4_4_;
      puVar9[6] = (undefined4)local_1c48;
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + 0x40) = local_1c48._4_4_;
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + 0x44) = (undefined4)uStack_1c40;
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + 0x48) = uStack_1c40._4_4_;
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + 0x4c) = local_1c38;
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + 0x50) = uStack_1c34;
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + 0x54) = uStack_1c30;
      *(undefined4 *)((longlong)local_1dc8 + lVar14 + 0x58) = uStack_1c2c;
      uVar10 = uVar10 - 1;
      lVar14 = lVar14 + 0x100;
      uVar12 = local_1d80;
    } while (uVar10 != 0);
  }
  uVar22 = local_1dfc;
  if ((param_7 != (undefined8 *)0x0) && ((void *)*param_7 != (void *)0x0)) {
    _guard_xfg_dispatch_icall_nop((void *)*param_7,local_1498,(ulonglong)(local_1dfc * 0xa0));
  }
  if (param_8 == (undefined8 *)0x0) {
    local_1b48 = param_6;
    physx::PxVehicleUpdate::updatePost(&local_1dc8,1,&local_1b48);
  }
  else {
    _guard_xfg_dispatch_icall_nop((void *)*param_8,local_1dc8,(ulonglong)(uVar22 << 6));
    *(undefined8 *)((longlong)param_8 + 0xc) = local_1dbc;
    *(undefined8 *)((longlong)param_8 + 0x14) = uStack_1db4;
    *(undefined4 *)((longlong)param_8 + 0x1c) = (undefined4)local_1dac;
    *(undefined4 *)(param_8 + 4) = local_1dac._4_4_;
    *(undefined1 *)((longlong)param_8 + 0x24) = (undefined1)local_1da4;
    *(undefined1 *)((longlong)param_8 + 0x25) = local_1da4._1_1_;
  }
LAB_14396d5a1:
  MXCSR = uVar12 & 0xffffffc0;
  return;
}



// FUNCTION 14396d610 shiftOrigin body=1521 status=ok
// SIG undefined shiftOrigin(void)

void physx::PxVehicleUpdate::shiftOrigin(float *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  
  if (param_2 != 0) {
    uVar4 = (ulonglong)param_2;
    lVar9 = 0;
    do {
      lVar1 = *param_3;
      lVar2 = *(longlong *)(lVar1 + 0x70);
      if (*(uint *)(lVar1 + 0x38) != 0) {
        uVar6 = 2;
        pfVar7 = (float *)(lVar2 + 0x74);
        uVar5 = 2;
        uVar8 = (ulonglong)*(uint *)(lVar1 + 0x38);
        do {
          bVar10 = (*(uint *)(lVar1 + 0x50 + (uVar5 - 2 >> 5) * 4) >> (uVar6 - 2 & 0x1f) & 1) != 0;
          bVar11 = (*(uint *)(lVar1 + 0x50 + (uVar5 - 1 >> 5) * 4) >> (uVar6 - 1 & 0x1f) & 1) != 0;
          bVar12 = (*(uint *)(lVar1 + 0x50 + (uVar5 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0;
          bVar13 = (*(uint *)(lVar1 + 0x50 + (uVar5 + 1 >> 5) * 4) >> (uVar6 + 1 & 0x1f) & 1) != 0;
          if (*(longlong *)(pfVar7 + 0x59) == 0) {
            if (*(longlong *)(lVar9 + 0x1e0 + lVar2) != 0) {
              if (bVar10) {
                fVar14 = *param_1;
                pfVar7[0x2f] = pfVar7[0x2f] - fVar14;
                pfVar7[0x30] = pfVar7[0x30] - param_1[1];
                pfVar7[0x31] = pfVar7[0x31] - param_1[2];
                lVar3 = *(longlong *)(pfVar7 + 0x5b);
                if (*(char *)(lVar3 + 0x59) != '\0') {
                  *(float *)(lVar3 + 0x1c) = *(float *)(lVar3 + 0x1c) - fVar14;
                  *(float *)(lVar3 + 0x20) = *(float *)(lVar3 + 0x20) - param_1[1];
                  *(float *)(lVar3 + 0x24) = *(float *)(lVar3 + 0x24) - param_1[2];
                }
              }
              if (bVar11) {
                fVar14 = *param_1;
                pfVar7[0x36] = pfVar7[0x36] - fVar14;
                pfVar7[0x37] = pfVar7[0x37] - param_1[1];
                pfVar7[0x38] = pfVar7[0x38] - param_1[2];
                lVar3 = *(longlong *)(pfVar7 + 0x5b);
                if (*(char *)(lVar3 + 0xb9) != '\0') {
                  *(float *)(lVar3 + 0x7c) = *(float *)(lVar3 + 0x7c) - fVar14;
                  *(float *)(lVar3 + 0x80) = *(float *)(lVar3 + 0x80) - param_1[1];
                  *(float *)(lVar3 + 0x84) = *(float *)(lVar3 + 0x84) - param_1[2];
                }
              }
              if (bVar12) {
                fVar14 = *param_1;
                pfVar7[0x3d] = pfVar7[0x3d] - fVar14;
                pfVar7[0x3e] = pfVar7[0x3e] - param_1[1];
                pfVar7[0x3f] = pfVar7[0x3f] - param_1[2];
                lVar3 = *(longlong *)(pfVar7 + 0x5b);
                if (*(char *)(lVar3 + 0x119) != '\0') {
                  *(float *)(lVar3 + 0xdc) = *(float *)(lVar3 + 0xdc) - fVar14;
                  *(float *)(lVar3 + 0xe0) = *(float *)(lVar3 + 0xe0) - param_1[1];
                  *(float *)(lVar3 + 0xe4) = *(float *)(lVar3 + 0xe4) - param_1[2];
                }
              }
              if (bVar13) {
                fVar14 = *param_1;
                pfVar7[0x44] = pfVar7[0x44] - fVar14;
                pfVar7[0x45] = pfVar7[0x45] - param_1[1];
                pfVar7[0x46] = pfVar7[0x46] - param_1[2];
                lVar3 = *(longlong *)(pfVar7 + 0x5b);
                goto LAB_14396db4c;
              }
            }
          }
          else {
            if (bVar10) {
              fVar14 = *param_1;
              pfVar7[-5] = pfVar7[-5] - fVar14;
              pfVar7[-4] = pfVar7[-4] - param_1[1];
              pfVar7[-3] = pfVar7[-3] - param_1[2];
              lVar3 = *(longlong *)(pfVar7 + 0x59);
              if (*(char *)(lVar3 + 0x59) != '\0') {
                *(float *)(lVar3 + 0x1c) = *(float *)(lVar3 + 0x1c) - fVar14;
                *(float *)(lVar3 + 0x20) = *(float *)(lVar3 + 0x20) - param_1[1];
                *(float *)(lVar3 + 0x24) = *(float *)(lVar3 + 0x24) - param_1[2];
              }
            }
            if (bVar11) {
              fVar14 = *param_1;
              pfVar7[-2] = pfVar7[-2] - fVar14;
              pfVar7[-1] = pfVar7[-1] - param_1[1];
              *pfVar7 = *pfVar7 - param_1[2];
              lVar3 = *(longlong *)(pfVar7 + 0x59);
              if (*(char *)(lVar3 + 0xb9) != '\0') {
                *(float *)(lVar3 + 0x7c) = *(float *)(lVar3 + 0x7c) - fVar14;
                *(float *)(lVar3 + 0x80) = *(float *)(lVar3 + 0x80) - param_1[1];
                *(float *)(lVar3 + 0x84) = *(float *)(lVar3 + 0x84) - param_1[2];
              }
            }
            if (bVar12) {
              fVar14 = *param_1;
              pfVar7[1] = pfVar7[1] - fVar14;
              pfVar7[2] = pfVar7[2] - param_1[1];
              pfVar7[3] = pfVar7[3] - param_1[2];
              lVar3 = *(longlong *)(pfVar7 + 0x59);
              if (*(char *)(lVar3 + 0x119) != '\0') {
                *(float *)(lVar3 + 0xdc) = *(float *)(lVar3 + 0xdc) - fVar14;
                *(float *)(lVar3 + 0xe0) = *(float *)(lVar3 + 0xe0) - param_1[1];
                *(float *)(lVar3 + 0xe4) = *(float *)(lVar3 + 0xe4) - param_1[2];
              }
            }
            if (bVar13) {
              fVar14 = *param_1;
              pfVar7[4] = pfVar7[4] - fVar14;
              pfVar7[5] = pfVar7[5] - param_1[1];
              pfVar7[6] = pfVar7[6] - param_1[2];
              lVar3 = *(longlong *)(pfVar7 + 0x59);
LAB_14396db4c:
              if (*(char *)(lVar3 + 0x179) != '\0') {
                *(float *)(lVar3 + 0x13c) = *(float *)(lVar3 + 0x13c) - fVar14;
                *(float *)(lVar3 + 0x140) = *(float *)(lVar3 + 0x140) - param_1[1];
                *(float *)(lVar3 + 0x144) = *(float *)(lVar3 + 0x144) - param_1[2];
              }
            }
          }
          uVar6 = uVar6 + 4;
          uVar5 = uVar5 + 4;
          pfVar7 = pfVar7 + 0x88;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      lVar9 = lVar9 + 0x220;
      param_3 = param_3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 14396dc10 PxVehicleWheels4SuspensionRaycasts body=997 status=ok
// SIG undefined PxVehicleWheels4SuspensionRaycasts(void)

void PxVehicleWheels4SuspensionRaycasts
               (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,char *param_5,
               uint param_6,longlong *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
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
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_e8 [28];
  undefined1 local_cc [148];
  
  plVar5 = param_7;
  lVar6 = (**(code **)(*param_7 + 0xf0))(param_7,local_e8);
  pfVar7 = (float *)(**(code **)(*plVar5 + 0xa0))(plVar5,local_cc);
  fVar18 = *(float *)(lVar6 + 0x10) + *(float *)(lVar6 + 0x10);
  fVar14 = *(float *)(lVar6 + 0x14) + *(float *)(lVar6 + 0x14);
  fVar13 = pfVar7[3];
  fVar17 = *(float *)(lVar6 + 0x18) + *(float *)(lVar6 + 0x18);
  fVar12 = pfVar7[1];
  fVar16 = *pfVar7;
  fVar19 = pfVar7[2];
  fVar15 = fVar13 * fVar13 - 0.5;
  fVar11 = fVar16 * fVar18 + fVar12 * fVar14 + fVar19 * fVar17;
  fVar1 = pfVar7[4];
  fVar2 = pfVar7[6];
  fVar3 = pfVar7[5];
  puVar8 = (undefined8 *)physx::PxQuat::operator*(pfVar7,&local_128,lVar6);
  local_108 = *puVar8;
  uStack_100 = puVar8[1];
  param_7 = (longlong *)(ulonglong)param_6;
  if (param_6 != 0) {
    local_110 = -0x2e8 - param_2;
    param_3 = param_3 + 0x60;
    pfVar7 = (float *)(param_2 + 8);
    puVar10 = (undefined4 *)(param_2 + 0x318);
    local_118 = -0x318 - param_2;
    param_2 = param_2 + 0x280;
    lVar6 = 0x60;
    local_f8 = (fVar12 * fVar17 - fVar19 * fVar14) * fVar13 + fVar15 * fVar18 + fVar16 * fVar11 +
               fVar1;
    local_f4 = (fVar19 * fVar18 - fVar16 * fVar17) * fVar13 + fVar15 * fVar14 + fVar12 * fVar11 +
               fVar3;
    local_f0 = (fVar16 * fVar14 - fVar12 * fVar18) * fVar13 + fVar15 * fVar17 + fVar19 * fVar11 +
               fVar2;
    do {
      local_148 = *(undefined8 *)(puVar10 + -2);
      fVar13 = pfVar7[1];
      local_140 = *puVar10;
      fVar12 = pfVar7[0x2e];
      fVar16 = *pfVar7;
      if (*param_5 == '\0') {
        fVar13 = DAT_146b95e20 * 1e-05;
        local_148 = 0;
        local_140 = 0;
        fVar12 = fVar13;
        fVar16 = fVar13;
      }
      fVar19 = fVar16;
      physx::computeSuspensionRaycast
                (&local_108,&local_148,param_2,fVar12,fVar16,&local_128,&local_138);
      puVar9 = (undefined4 *)((longlong)puVar10 + local_118 + param_3);
      *puVar9 = local_128;
      puVar9[2] = local_120;
      puVar9[1] = local_124;
      *(undefined4 *)((longlong)puVar10 + param_3 + local_110) = local_138;
      *(undefined4 *)((longlong)puVar10 + param_3 + local_110 + 8) = local_130;
      fVar12 = fVar12 + fVar16 + fVar13 + fVar12 + fVar12;
      *(undefined4 *)((longlong)puVar10 + param_3 + local_110 + 4) = local_134;
      param_6 = CONCAT22(param_6._2_2_,0xf);
      lVar4 = *param_1;
      *(float *)(lVar6 + param_3) = fVar12;
      (**(code **)(lVar4 + 0x48))
                (param_1,&local_128,&local_138,fVar12,(uint)fVar19 & 0xffff0000,&param_6,param_4,0,0
                );
      param_2 = param_2 + 0xc;
      param_4 = param_4 + 0x14;
      lVar6 = lVar6 + 4;
      pfVar7 = pfVar7 + 0xc;
      param_5 = param_5 + 1;
      puVar10 = puVar10 + 3;
      param_7 = (longlong *)((longlong)param_7 - 1);
    } while (param_7 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 14396e000 FUN_14396e000 body=2415 status=ok
// SIG undefined FUN_14396e000(void)

/* WARNING: Exceeded maximum restarts with more pending */

void FUN_14396e000(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  char *param_5,uint param_6,undefined2 param_7,undefined4 *param_8,
                  longlong *param_9,float param_10,float param_11)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined2 uVar18;
  undefined1 uVar19;
  int iVar20;
  longlong lVar21;
  float *pfVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  longlong lVar25;
  undefined4 *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  longlong local_res20;
  undefined4 *in_stack_fffffffffffffdd8;
  undefined4 uVar35;
  undefined8 local_1f8;
  float local_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  float fStack_1e0;
  undefined1 uStack_1dc;
  undefined2 uStack_1db;
  undefined1 uStack_1d9;
  undefined1 uStack_1d8;
  undefined2 uStack_1d7;
  undefined1 uStack_1d5;
  float fStack_1d4;
  undefined1 uStack_1d0;
  undefined2 uStack_1cf;
  undefined1 uStack_1cd;
  undefined1 uStack_1cc;
  undefined2 uStack_1cb;
  undefined1 uStack_1c9;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b0;
  float local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  float fStack_19c;
  float fStack_198;
  undefined1 local_194;
  undefined2 uStack_193;
  undefined1 uStack_191;
  undefined1 local_190;
  undefined2 uStack_18f;
  undefined1 uStack_18d;
  float fStack_18c;
  undefined1 uStack_188;
  undefined2 uStack_187;
  undefined1 uStack_185;
  float fStack_184;
  undefined4 uStack_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined1 local_168;
  undefined2 local_167;
  undefined1 local_165;
  longlong local_160;
  longlong local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  
  plVar6 = param_9;
  lVar21 = (**(code **)(*param_9 + 0xf0))(param_9,&local_128);
  pfVar22 = (float *)(**(code **)(*plVar6 + 0xa0))(plVar6,&local_1b0);
  fVar31 = *(float *)(lVar21 + 0x18) + *(float *)(lVar21 + 0x18);
  fVar33 = *(float *)(lVar21 + 0x10) + *(float *)(lVar21 + 0x10);
  fVar28 = pfVar22[3];
  fVar34 = *(float *)(lVar21 + 0x14) + *(float *)(lVar21 + 0x14);
  fVar27 = pfVar22[1];
  fVar32 = *pfVar22;
  fVar2 = pfVar22[2];
  fVar30 = fVar28 * fVar28 - 0.5;
  fVar29 = fVar33 * fVar32 + fVar34 * fVar27 + fVar31 * fVar2;
  fVar3 = pfVar22[4];
  fVar4 = pfVar22[5];
  fVar5 = pfVar22[6];
  puVar23 = (undefined4 *)physx::PxQuat::operator*(pfVar22,&local_138,lVar21);
  fVar8 = param_11;
  fVar7 = param_10;
  local_e0 = *puVar23;
  uStack_dc = puVar23[1];
  uStack_d8 = puVar23[2];
  uStack_d4 = puVar23[3];
  local_140 = (ulonglong)param_6;
  if (param_6 != 0) {
    lVar25 = 0;
    lVar21 = param_3 + 0x60;
    puVar23 = (undefined4 *)(param_2 + 0x318);
    pfVar22 = (float *)(param_2 + 0xc);
    local_158 = 0;
    local_160 = param_2 + 0x280;
    param_3 = param_3 - (longlong)param_8;
    local_f8 = -0x318 - param_2;
    local_e8 = -0xc - param_2;
    local_f0 = 0x160 - (longlong)param_8;
    puVar26 = param_8;
    local_res20 = param_4;
    local_d0 = (fVar31 * fVar27 - fVar34 * fVar2) * fVar28 + fVar30 * fVar33 + fVar29 * fVar32 +
               fVar3;
    local_cc = (fVar33 * fVar2 - fVar31 * fVar32) * fVar28 + fVar30 * fVar34 + fVar29 * fVar27 +
               fVar4;
    local_c8 = (fVar34 * fVar32 - fVar33 * fVar27) * fVar28 + fVar30 * fVar31 + fVar29 * fVar2 +
               fVar5;
    do {
      uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
      (**(code **)(*plVar6 + 0xd0))(plVar6,&param_9,1,*puVar26);
      iVar20 = (**(code **)(*param_9 + 0x30))();
      if (iVar20 == 4) {
        local_190 = 4;
        uStack_18f = 0;
        uStack_18d = 0;
        local_170 = 0;
        local_168 = 0;
        local_167 = 0;
        local_165 = 0;
        fStack_18c = 1.0;
        uStack_188 = 0;
        uStack_187 = 0x8000;
        uStack_185 = 0x3f;
        fStack_184 = 1.0;
        uStack_180 = 0;
        local_17c = 0;
        local_174 = 0x3f800000;
        (**(code **)(*param_9 + 0x68))(param_9,&local_190);
        uVar9 = uStack_1c0;
        fStack_18c = fStack_18c *
                     ABS((DAT_146b95ef8 + DAT_146b95ee8) * fVar8 + DAT_146b95f08 * fVar7);
        fVar28 = (float)CONCAT13(uStack_185,CONCAT21(uStack_187,uStack_188)) *
                 ABS((DAT_146b95efc + DAT_146b95eec) * fVar8 + DAT_146b95f0c * fVar7);
        fStack_184 = fStack_184 *
                     ABS((DAT_146b95f00 + DAT_146b95ef0) * fVar8 + DAT_146b95f10 * fVar7);
        uStack_188 = SUB41(fVar28,0);
        uStack_187 = (undefined2)((uint)fVar28 >> 8);
        uStack_185 = (undefined1)((uint)fVar28 >> 0x18);
        uVar11 = uStack_1dc;
        uVar12 = uStack_1db;
        uVar13 = uStack_1d9;
        uVar14 = uStack_1d8;
        uVar15 = uStack_1d7;
        uVar16 = uStack_1d5;
        uVar17 = uStack_1d0;
        uVar18 = uStack_1cf;
        uVar19 = uStack_1cd;
        switch(CONCAT13(uStack_18d,CONCAT21(uStack_18f,local_190))) {
        case 0x14396e3fa:
                    /* WARNING: This code block may not be properly labeled as switch case */
          local_1c8 = local_170;
          uStack_1c0._0_3_ = CONCAT21(local_167,local_168);
          uStack_1c0._4_4_ = SUB84(uVar9,4);
          uStack_1c0._0_4_ = CONCAT13(local_165,(undefined3)uStack_1c0);
          uStack_1dc = SUB41(fStack_184,0);
          uStack_1db = (undefined2)((uint)fStack_184 >> 8);
          uStack_1d9 = (undefined1)((uint)fStack_184 >> 0x18);
          uStack_1e8 = CONCAT44(fStack_18c,4);
          uStack_1d8 = (undefined1)uStack_180;
          uStack_1d7 = (undefined2)((uint)uStack_180 >> 8);
          uStack_1d5 = (undefined1)((uint)uStack_180 >> 0x18);
          fStack_1d4 = (float)local_17c;
          uStack_1d0 = (undefined1)((ulonglong)local_17c >> 0x20);
          uStack_1cf = (undefined2)((ulonglong)local_17c >> 0x28);
          uStack_1cd = (undefined1)((ulonglong)local_17c >> 0x38);
          uStack_1cc = (undefined1)local_174;
          uStack_1cb = (undefined2)((uint)local_174 >> 8);
          uStack_1c9 = (undefined1)((uint)local_174 >> 0x18);
          fStack_1e0 = fVar28;
          uVar11 = uStack_1dc;
          uVar12 = uStack_1db;
          uVar13 = uStack_1d9;
          uVar14 = uStack_1d8;
          uVar15 = uStack_1d7;
          uVar16 = uStack_1d5;
          uVar17 = uStack_1d0;
          uVar18 = uStack_1cf;
          uVar19 = uStack_1cd;
        }
      }
      else {
        iVar20 = (**(code **)(*param_9 + 0x30))();
        if (iVar20 == 2) {
          local_1b0 = 2;
          local_1a8 = 0.0;
          (**(code **)(*param_9 + 0x58))(param_9,&local_1b0);
          uVar10 = uStack_1c0;
          uVar9 = local_1c8;
          uVar19 = uStack_1cd;
          uVar18 = uStack_1cf;
          uVar17 = uStack_1d0;
          uVar16 = uStack_1d5;
          uVar15 = uStack_1d7;
          uVar14 = uStack_1d8;
          uVar13 = uStack_1d9;
          uVar12 = uStack_1db;
          uVar11 = uStack_1dc;
          local_1a8 = local_1a8 * fVar7;
          local_1b0._4_4_ = local_1b0._4_4_ * fVar8;
          uStack_1dc = (undefined1)uStack_1a4;
          uStack_1d9 = (undefined1)((uint)uStack_1a4 >> 0x18);
          uStack_1db = (undefined2)((uint)uStack_1a4 >> 8);
          uStack_1d8 = (undefined1)uStack_1a0;
          uStack_1d5 = (undefined1)((uint)uStack_1a0 >> 0x18);
          uStack_1d7 = (undefined2)((uint)uStack_1a0 >> 8);
          uStack_1d0 = SUB41(fStack_198,0);
          uStack_1cd = (undefined1)((uint)fStack_198 >> 0x18);
          uStack_1cf = (undefined2)((uint)fStack_198 >> 8);
          switch((undefined4)local_1b0) {
          case 0:
            uStack_1e8 = local_1b0;
            break;
          case 1:
switchD_14396e52b_caseD_1:
            uStack_1cd = uVar19;
            uStack_1cf = uVar18;
            uStack_1d0 = uVar17;
            uStack_1d5 = uVar16;
            uStack_1d7 = uVar15;
            uStack_1d8 = uVar14;
            uStack_1d9 = uVar13;
            uStack_1db = uVar12;
            uStack_1dc = uVar11;
            uStack_1e8 = CONCAT44(uStack_1e8._4_4_,1);
            uVar11 = uStack_1dc;
            uVar12 = uStack_1db;
            uVar13 = uStack_1d9;
            uVar14 = uStack_1d8;
            uVar15 = uStack_1d7;
            uVar16 = uStack_1d5;
            uVar17 = uStack_1d0;
            uVar18 = uStack_1cf;
            uVar19 = uStack_1cd;
            break;
          case 2:
            uStack_1e8 = local_1b0;
            fStack_1e0 = local_1a8;
            break;
          case 3:
            uStack_1e8 = CONCAT44(local_1b0._4_4_,3);
            fStack_1e0 = local_1a8;
            uVar11 = uStack_1dc;
            uVar12 = uStack_1db;
            uVar13 = uStack_1d9;
            break;
          case 4:
            local_1c8 = CONCAT44(fStack_18c,CONCAT13(uStack_18d,CONCAT21(uStack_18f,local_190)));
            uStack_1c0._0_3_ = CONCAT21(uStack_187,uStack_188);
            fStack_1d4 = fStack_19c;
            uStack_1c0._4_4_ = SUB84(uVar10,4);
            uStack_1c0._0_4_ = CONCAT13(uStack_185,(undefined3)uStack_1c0);
            uStack_1e8 = CONCAT44(local_1b0._4_4_,4);
            fStack_1e0 = local_1a8;
            uVar11 = uStack_1dc;
            uVar12 = uStack_1db;
            uVar13 = uStack_1d9;
            uVar14 = uStack_1d8;
            uVar15 = uStack_1d7;
            uVar16 = uStack_1d5;
            uVar17 = uStack_1d0;
            uVar18 = uStack_1cf;
            uVar19 = uStack_1cd;
            uStack_1cc = local_194;
            uStack_1cb = uStack_193;
            uStack_1c9 = uStack_191;
            break;
          case 5:
            local_1c8._4_4_ = SUB84(uVar9,4);
            local_1c8._0_4_ = CONCAT13(uStack_18d,CONCAT21(uStack_18f,local_190));
            uStack_1c0 = CONCAT44(fStack_184,CONCAT13(uStack_185,CONCAT21(uStack_187,uStack_188)));
            fStack_1d4 = fStack_19c;
            uStack_1e8 = CONCAT44(local_1b0._4_4_,5);
            fStack_1e0 = local_1a8;
            uVar11 = uStack_1dc;
            uVar12 = uStack_1db;
            uVar13 = uStack_1d9;
            uVar14 = uStack_1d8;
            uVar15 = uStack_1d7;
            uVar16 = uStack_1d5;
            uVar17 = uStack_1d0;
            uVar18 = uStack_1cf;
            uVar19 = uStack_1cd;
            uStack_1cc = local_194;
            uStack_1cb = uStack_193;
            uStack_1c9 = uStack_191;
            break;
          case 6:
            uStack_1cc = local_194;
            uStack_1cb = uStack_193;
            fVar28 = fStack_198;
            fStack_1d4 = fStack_19c;
            uStack_1c9 = uStack_191;
            fStack_1e0 = local_1a8;
LAB_14396e7ca:
            uStack_1e8 = CONCAT44(uStack_1e8._4_4_,6);
            uStack_1d0 = SUB41(fVar28,0);
            uStack_1cf = (undefined2)((uint)fVar28 >> 8);
            uStack_1cd = (undefined1)((uint)fVar28 >> 0x18);
            uVar11 = uStack_1dc;
            uVar12 = uStack_1db;
            uVar13 = uStack_1d9;
            uVar14 = uStack_1d8;
            uVar15 = uStack_1d7;
            uVar16 = uStack_1d5;
            uVar17 = uStack_1d0;
            uVar18 = uStack_1cf;
            uVar19 = uStack_1cd;
          }
        }
        else {
          local_1f8 = 0;
          (**(code **)(*param_9 + 0x50))(param_9,&local_1f8);
          uVar19 = uStack_1cd;
          uVar18 = uStack_1cf;
          uVar17 = uStack_1d0;
          uVar13 = uStack_1d9;
          uVar12 = uStack_1db;
          uVar11 = uStack_1dc;
          local_1f8._4_4_ = local_1f8._4_4_ * fVar8;
          uStack_1dc = (undefined1)uStack_1ec;
          uStack_1d9 = (undefined1)((uint)uStack_1ec >> 0x18);
          uStack_1db = (undefined2)((uint)uStack_1ec >> 8);
          uStack_1d0 = SUB41(local_1f0,0);
          uStack_1cd = (undefined1)((uint)local_1f0 >> 0x18);
          uStack_1cf = (undefined2)((uint)local_1f0 >> 8);
          uVar14 = uStack_1d8;
          uVar15 = uStack_1d7;
          uVar16 = uStack_1d5;
          switch((undefined4)local_1f8) {
          case 0:
            uStack_1e8 = local_1f8;
            break;
          case 1:
            goto switchD_14396e52b_caseD_1;
          case 2:
            uStack_1e8 = local_1f8;
            fStack_1e0 = local_1f0;
            break;
          case 3:
            fStack_1e0 = local_1f0;
            uStack_1e8 = CONCAT44(local_1f8._4_4_,3);
            uVar11 = uStack_1dc;
            uVar12 = uStack_1db;
            uVar13 = uStack_1d9;
            break;
          case 4:
            uStack_1e8 = CONCAT44(local_1f8._4_4_,4);
            fStack_1e0 = local_1f0;
            uStack_1d8 = 4;
            uStack_1d7 = 0;
            uStack_1d5 = 0;
            local_1c8 = CONCAT44(local_1f8._4_4_,4);
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,local_1f0);
            uVar11 = uStack_1dc;
            uVar12 = uStack_1db;
            uVar13 = uStack_1d9;
            uVar14 = uStack_1d8;
            uVar15 = uStack_1d7;
            uVar16 = uStack_1d5;
            fStack_1d4 = local_1f8._4_4_;
            uVar17 = uStack_1d0;
            uVar18 = uStack_1cf;
            uVar19 = uStack_1cd;
            uStack_1cc = uStack_1dc;
            uStack_1cb = uStack_1db;
            uStack_1c9 = uStack_1d9;
            break;
          case 5:
            uStack_1e8 = CONCAT44(local_1f8._4_4_,5);
            fStack_1e0 = local_1f0;
            uStack_1d8 = 5;
            uStack_1d7 = 0;
            uStack_1d5 = 0;
            local_1c8 = CONCAT44(local_1c8._4_4_,5);
            uStack_1c0 = CONCAT17(uStack_1d9,CONCAT25(uStack_1db,CONCAT14(uStack_1dc,local_1f0)));
            uVar11 = uStack_1dc;
            uVar12 = uStack_1db;
            uVar13 = uStack_1d9;
            uVar14 = uStack_1d8;
            uVar15 = uStack_1d7;
            uVar16 = uStack_1d5;
            fStack_1d4 = local_1f8._4_4_;
            uVar17 = uStack_1d0;
            uVar18 = uStack_1cf;
            uVar19 = uStack_1cd;
            uStack_1cc = uStack_1dc;
            uStack_1cb = uStack_1db;
            uStack_1c9 = uStack_1d9;
            break;
          case 6:
            fStack_1e0 = local_1f0;
            uStack_1cc = uStack_1dc;
            uStack_1cb = uStack_1db;
            uStack_1d8 = 6;
            uStack_1d7 = 0;
            uStack_1d5 = 0;
            fVar28 = local_1f0;
            fStack_1d4 = uStack_1e8._4_4_;
            uStack_1c9 = uStack_1d9;
            goto LAB_14396e7ca;
          }
        }
      }
      uStack_1cd = uVar19;
      uStack_1cf = uVar18;
      uStack_1d0 = uVar17;
      uStack_1d5 = uVar16;
      uStack_1d7 = uVar15;
      uStack_1d8 = uVar14;
      uStack_1d9 = uVar13;
      uStack_1db = uVar12;
      uStack_1dc = uVar11;
      puVar24 = (undefined8 *)(**(code **)(*param_9 + 0x90))(param_9,&local_190);
      local_104 = puVar23[-1];
      local_100 = *puVar23;
      local_138 = *puVar24;
      uStack_130 = puVar24[1];
      fVar28 = *pfVar22;
      local_108 = puVar23[-2];
      fVar27 = pfVar22[0x2d];
      fVar32 = pfVar22[-1];
      if (*param_5 == '\0') {
        local_108 = 0;
        fVar28 = DAT_146b95e20 * 1e-05;
        local_104 = 0;
        local_100 = 0;
        fVar27 = fVar28;
        fVar32 = fVar28;
      }
      physx::computeSuspensionSweep
                (&local_e0,&local_138,*(undefined4 *)(param_3 + 0x20 + (longlong)puVar26),&local_108
                 ,local_160,fVar27,CONCAT44(uVar35,fVar32),&local_128,&local_150);
      puVar24 = (undefined8 *)(lVar25 + 0xc0 + lVar21);
      *puVar24 = local_128;
      puVar24[1] = uStack_120;
      *(undefined4 *)(lVar25 + 0xd0 + lVar21) = local_118;
      *(undefined4 *)(lVar25 + 0xd8 + lVar21) = local_110;
      *(undefined4 *)(lVar25 + 0xd4 + lVar21) = local_114;
      *(undefined4 *)((longlong)puVar23 + lVar21 + local_f8 + 0x130) = local_150;
      *(undefined4 *)((longlong)puVar23 + lVar21 + local_f8 + 0x138) = local_148;
      *(undefined4 *)((longlong)puVar23 + lVar21 + local_f8 + 0x134) = local_14c;
      fVar27 = fVar27 + fVar32 + fVar28 + fVar27;
      *(float *)((longlong)puVar26 + lVar21 + local_f0) = fVar27;
      in_stack_fffffffffffffdd8 = &param_6;
      puVar24 = (undefined8 *)((longlong)pfVar22 + lVar21 + local_e8);
      *puVar24 = uStack_1e8;
      puVar24[1] = CONCAT17(uStack_1d9,CONCAT25(uStack_1db,CONCAT14(uStack_1dc,fStack_1e0)));
      puVar1 = (undefined4 *)((longlong)pfVar22 + lVar21 + local_e8 + 0x10);
      *puVar1 = CONCAT13(uStack_1d5,CONCAT21(uStack_1d7,uStack_1d8));
      puVar1[1] = fStack_1d4;
      puVar1[2] = CONCAT13(uStack_1cd,CONCAT21(uStack_1cf,uStack_1d0));
      puVar1[3] = CONCAT13(uStack_1c9,CONCAT21(uStack_1cb,uStack_1cc));
      puVar1 = (undefined4 *)((longlong)pfVar22 + lVar21 + local_e8 + 0x20);
      *puVar1 = (undefined4)local_1c8;
      puVar1[1] = local_1c8._4_4_;
      puVar1[2] = (undefined4)uStack_1c0;
      puVar1[3] = uStack_1c0._4_4_;
      param_6 = CONCAT22(param_6._2_2_,0xf);
      (**(code **)(*param_1 + 0x58))
                (param_1,local_158 + lVar21,&local_128,&local_150,fVar27,param_7,
                 in_stack_fffffffffffffdd8,local_res20,0,0,0);
      local_160 = local_160 + 0xc;
      puVar26 = puVar26 + 1;
      local_res20 = local_res20 + 0x14;
      param_5 = param_5 + 1;
      local_158 = local_158 + 0x30;
      lVar25 = lVar25 + 0x1c;
      puVar23 = puVar23 + 3;
      pfVar22 = pfVar22 + 0xc;
      local_140 = local_140 - 1;
    } while (local_140 != 0);
  }
  return;
}



// FUNCTION 14396ea90 VehicleSurfaceTypeHashTable body=483 status=ok
// SIG undefined VehicleSurfaceTypeHashTable(void)

void physx::VehicleSurfaceTypeHashTable::VehicleSurfaceTypeHashTable(uint *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  uint local_28 [8];
  ulonglong uVar10;
  
  *param_1 = *(uint *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x10;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x10);
  lVar7 = 0x10;
  puVar1 = param_1 + 6;
  do {
    puVar1[0] = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    puVar1[6] = 0xffffffff;
    puVar1[7] = 0xffffffff;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0xffffffff;
    puVar1[10] = 0xffffffff;
    puVar1[0xb] = 0xffffffff;
    puVar1[0xc] = 0xffffffff;
    puVar1[0xd] = 0xffffffff;
    puVar1[0xe] = 0xffffffff;
    puVar1[0xf] = 0xffffffff;
    lVar7 = lVar7 + -1;
    puVar1 = puVar1 + 0x10;
  } while (lVar7 != 0);
  puVar1 = param_1 + 0x106;
  do {
    puVar1[0] = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    puVar1[6] = 0xffffffff;
    puVar1[7] = 0xffffffff;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0xffffffff;
    puVar1[10] = 0xffffffff;
    puVar1[0xb] = 0xffffffff;
    puVar1[0xc] = 0xffffffff;
    puVar1[0xd] = 0xffffffff;
    puVar1[0xe] = 0xffffffff;
    puVar1[0xf] = 0xffffffff;
    lVar3 = lVar3 + -1;
    puVar1 = puVar1 + 0x10;
  } while (lVar3 != 0);
  uVar9 = *param_1;
  if (uVar9 != 0) {
    uVar12 = 0;
    uVar4 = 2;
    uVar2 = uVar12;
    uVar5 = uVar12;
    while( true ) {
      uVar6 = 0;
      local_28[0] = 0;
      local_28[1] = 0;
      local_28[2] = 0;
      local_28[3] = 0;
      local_28[4] = 0;
      local_28[5] = 0;
      local_28[6] = 0;
      local_28[7] = 0;
      uVar10 = uVar12;
      uVar11 = uVar12;
      if (uVar9 == 0) break;
      do {
        uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 2) + uVar10 * 8) >> ((byte)uVar4 & 0x3f);
        uVar6 = 1 << ((byte)uVar8 & 0x1f);
        uVar9 = local_28[(uVar8 & 0xff) >> 5];
        if ((uVar6 & uVar9) == 0) {
          local_28[(uVar8 & 0xff) >> 5] = uVar9 | uVar6;
          uVar11 = (ulonglong)((int)uVar11 + 1);
        }
        uVar6 = (uint)uVar11;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < *param_1);
      if ((uVar6 <= (uint)uVar5) || (uVar9 = *param_1, uVar6 == uVar9)) break;
      uVar2 = (ulonglong)uVar4;
      uVar4 = uVar4 * 2;
      uVar5 = uVar11;
    }
    if (uVar6 == *param_1) {
      param_1[0x206] = uVar4;
    }
    else {
      param_1[0x206] = (uint)uVar2;
    }
    if (*param_1 != 0) {
      do {
        uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 2) + uVar12 * 8) >>
                ((byte)param_1[0x206] & 0x3f) & 0xff;
        if (param_1[uVar2 + 6] == 0xffffffff) {
          param_1[uVar12 + 0x106] = 0xffffffff;
        }
        else {
          param_1[uVar12 + 0x106] = param_1[uVar2 + 6];
        }
        param_1[uVar2 + 6] = (uint)uVar12;
        uVar9 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar9;
      } while (uVar9 < *param_1);
    }
  }
  return;
}



// FUNCTION 14396ec80 FUN_14396ec80 body=679 status=ok
// SIG undefined FUN_14396ec80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14396ec80(undefined8 *param_1)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
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
  
  pfVar1 = (float *)param_1[1];
  pfVar2 = (float *)*param_1;
  if (-pfVar1[1] * pfVar2[1] + -*pfVar1 * *pfVar2 + -pfVar1[2] * pfVar2[2] < _DAT_146b95e08) {
    return (ulonglong)pfVar1 & 0xffffffffffffff00;
  }
  fVar5 = *(float *)param_1[3];
  pfVar1 = (float *)param_1[2];
  fVar7 = pfVar1[3];
  fVar8 = pfVar1[2];
  fVar13 = DAT_146b95f08 * 2.0;
  fVar11 = fVar7 * fVar7 - 0.5;
  fVar12 = DAT_146b95f10 * 2.0;
  fVar6 = DAT_146b95f0c * 2.0;
  fVar9 = pfVar1[1];
  fVar10 = *pfVar1;
  lVar3 = param_1[4];
  fVar4 = fVar10 * fVar13 + fVar9 * fVar6 + fVar8 * fVar12;
  fVar14 = (fVar9 * fVar12 - fVar8 * fVar6) * fVar7 + fVar11 * fVar13 + fVar10 * fVar4;
  fVar15 = (fVar10 * fVar6 - fVar9 * fVar13) * fVar7 + fVar11 * fVar12 + fVar8 * fVar4;
  fVar10 = (fVar8 * fVar13 - fVar10 * fVar12) * fVar7 + fVar11 * fVar6 + fVar9 * fVar4;
  fVar8 = *(float *)(lVar3 + 0x1c) - (pfVar1[4] - fVar5 * *pfVar2);
  fVar9 = *(float *)(lVar3 + 0x20) - (pfVar1[5] - fVar5 * pfVar2[1]);
  fVar7 = *(float *)(lVar3 + 0x24) - (pfVar1[6] - fVar5 * pfVar2[2]);
  fVar5 = fVar9 * fVar10 + fVar8 * fVar14 + fVar7 * fVar15;
  return CONCAT71((int7)((ulonglong)(lVar3 + 0x1c) >> 8),
                  DAT_146b95e04 <=
                  (fVar9 - fVar5 * fVar10) * pfVar2[1] + (fVar8 - fVar5 * fVar14) * *pfVar2 +
                  (fVar7 - fVar5 * fVar15) * pfVar2[2]);
}



// FUNCTION 14396ef30 computeSuspensionRaycast body=716 status=ok
// SIG undefined computeSuspensionRaycast(void)

void physx::computeSuspensionRaycast
               (float *param_1,float *param_2,float *param_3,float param_4,float param_5,
               float *param_6,float *param_7)

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
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar11 = param_1[3];
  fVar5 = param_3[1] + param_3[1];
  fVar3 = *param_1;
  fVar6 = fVar11 * fVar11 - 0.5;
  fVar8 = param_3[2] + param_3[2];
  fVar10 = *param_3 + *param_3;
  fVar4 = fVar3 * fVar10 + fVar1 * fVar5 + fVar2 * fVar8;
  *param_7 = (fVar1 * fVar8 - fVar2 * fVar5) * fVar11 + fVar6 * fVar10 + fVar3 * fVar4;
  param_7[1] = (fVar2 * fVar10 - fVar3 * fVar8) * fVar11 + fVar6 * fVar5 + fVar1 * fVar4;
  param_7[2] = (fVar3 * fVar5 - fVar1 * fVar10) * fVar11 + fVar6 * fVar8 + fVar2 * fVar4;
  fVar1 = param_1[3];
  fVar7 = *param_2 + *param_2;
  fVar5 = param_2[1] + param_2[1];
  fVar2 = *param_1;
  fVar8 = param_2[2] + param_2[2];
  fVar11 = param_1[1];
  fVar3 = param_1[2];
  fVar6 = fVar1 * fVar1 - 0.5;
  param_4 = param_4 + param_5;
  fVar4 = fVar2 * fVar7 + fVar11 * fVar5 + fVar3 * fVar8;
  fVar9 = (fVar11 * fVar8 - fVar3 * fVar5) * fVar1 + fVar6 * fVar7 + fVar2 * fVar4 + param_1[4];
  fVar10 = (fVar3 * fVar7 - fVar2 * fVar8) * fVar1 + fVar6 * fVar5 + fVar11 * fVar4 + param_1[5];
  fVar11 = (fVar2 * fVar5 - fVar11 * fVar7) * fVar1 + fVar6 * fVar8 + fVar3 * fVar4 + param_1[6];
  *param_6 = fVar9;
  param_6[1] = fVar10;
  param_6[2] = fVar11;
  fVar1 = *param_7;
  fVar2 = param_7[1];
  param_6[2] = fVar11 - param_4 * param_7[2];
  *param_6 = fVar9 - param_4 * fVar1;
  param_6[1] = fVar10 - param_4 * fVar2;
  return;
}



// FUNCTION 14396f200 computeSuspensionSweep body=1145 status=ok
// SIG undefined computeSuspensionSweep(void)

void physx::computeSuspensionSweep
               (float *param_1,float *param_2,float param_3,float *param_4,float *param_5,
               float param_6,float param_7,undefined4 *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined1 local_98 [144];
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = *param_1;
  fVar13 = *param_5 + *param_5;
  fVar8 = param_5[1] + param_5[1];
  fVar9 = fVar3 * fVar3 - 0.5;
  fVar11 = param_5[2] + param_5[2];
  fVar7 = fVar4 * fVar13 + fVar1 * fVar8 + fVar2 * fVar11;
  *param_9 = (fVar1 * fVar11 - fVar2 * fVar8) * fVar3 + fVar9 * fVar13 + fVar4 * fVar7;
  param_9[1] = (fVar2 * fVar13 - fVar4 * fVar11) * fVar3 + fVar9 * fVar8 + fVar1 * fVar7;
  param_9[2] = (fVar4 * fVar8 - fVar1 * fVar13) * fVar3 + fVar9 * fVar11 + fVar2 * fVar7;
  fVar1 = param_1[3];
  fVar12 = *param_4 + *param_4;
  fVar9 = param_4[1] + param_4[1];
  fVar2 = param_1[1];
  fVar10 = param_4[2] + param_4[2];
  fVar3 = *param_1;
  fVar11 = fVar1 * fVar1 - 0.5;
  fVar4 = param_1[2];
  fVar8 = fVar3 * fVar12 + fVar2 * fVar9 + fVar4 * fVar10;
  fVar13 = (fVar2 * fVar10 - fVar4 * fVar9) * fVar1 + fVar11 * fVar12 + fVar3 * fVar8 + param_1[4];
  param_6 = param_6 + param_7;
  fVar14 = (fVar3 * fVar9 - fVar2 * fVar12) * fVar1 + fVar11 * fVar10 + fVar4 * fVar8 + param_1[6];
  fVar7 = param_1[5];
  param_8[4] = fVar13;
  param_8[6] = fVar14;
  param_8[5] = (fVar4 * fVar12 - fVar3 * fVar10) * fVar1 + fVar11 * fVar9 + fVar2 * fVar8 + fVar7;
  fVar1 = param_9[2];
  fVar2 = param_9[1];
  param_8[4] = fVar13 - param_6 * *param_9;
  param_8[5] = (float)param_8[5] - param_6 * fVar2;
  param_8[6] = fVar14 - param_6 * fVar1;
  fVar1 = param_2[3];
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar10 = DAT_146b95f08 * 2.0;
  fVar11 = fVar1 * fVar1 - 0.5;
  fVar9 = DAT_146b95f0c * 2.0;
  fVar13 = DAT_146b95f10 * 2.0;
  fVar8 = fVar2 * fVar10 + fVar3 * fVar9 + fVar4 * fVar13;
  fVar7 = ::_guard_xfg_dispatch_icall_nop(param_3 * -0.5);
  local_9c = ::_guard_xfg_dispatch_icall_nop(param_3 * -0.5);
  local_a8 = ((fVar3 * fVar13 - fVar4 * fVar9) * fVar1 + fVar11 * fVar10 + fVar2 * fVar8) * fVar7;
  local_a4 = ((fVar4 * fVar10 - fVar2 * fVar13) * fVar1 + fVar11 * fVar9 + fVar3 * fVar8) * fVar7;
  local_a0 = ((fVar2 * fVar9 - fVar3 * fVar10) * fVar1 + fVar11 * fVar13 + fVar4 * fVar8) * fVar7;
  uVar5 = PxQuat::operator*(&local_a8,local_98,param_2);
  puVar6 = (undefined4 *)PxQuat::operator*(param_1,&local_a8,uVar5);
  *param_8 = *puVar6;
  param_8[1] = puVar6[1];
  param_8[2] = puVar6[2];
  param_8[3] = puVar6[3];
  return;
}



// FUNCTION 14396f680 decomposeLU body=1438 status=ok
// SIG undefined decomposeLU(void)

void physx::MatrixNNLUSolver::decomposeLU(float *param_1,longlong param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  float fVar10;
  ulonglong uVar12;
  float *pfVar13;
  longlong lVar14;
  float fVar15;
  ulonglong uVar16;
  float fVar17;
  ulonglong uVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  longlong local_res18;
  longlong local_58;
  ulonglong uVar7;
  ulonglong uVar11;
  
  fVar1 = *(float *)(param_2 + 0x844);
  uVar12 = 0;
  fVar21 = fVar1;
  if (fVar1 != 0.0) {
    do {
      if (fVar21 != 0.0) {
        uVar8 = 0;
        do {
          uVar9 = (int)uVar8 + 1;
          lVar4 = uVar8 + uVar12 * 0x17;
          param_1[lVar4] = *(float *)(param_2 + lVar4 * 4);
          uVar8 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(param_2 + 0x844));
      }
      fVar21 = *(float *)(param_2 + 0x844);
      fVar15 = (float)((int)uVar12 + 1);
      uVar12 = (ulonglong)(uint)fVar15;
    } while ((uint)fVar15 < (uint)fVar21);
  }
  uVar12 = 0;
  param_1[0x211] = *(float *)(param_2 + 0x844);
  param_1[0x23e] = 1.0;
  if ((int)fVar1 - 1U != 0) {
    pfVar13 = param_1 + 0x228;
    pfVar2 = param_1 + 1;
    local_58 = 0;
    local_res18 = 0;
    pfVar19 = param_1;
    do {
      fVar20 = (float)uVar12;
      fVar21 = 0.0;
      fVar15 = fVar20;
      fVar17 = fVar20;
      if ((uint)fVar20 < (uint)fVar1) {
        uVar8 = uVar12;
        uVar11 = uVar12;
        uVar16 = uVar12;
        uVar18 = uVar12;
        do {
          uVar7 = uVar12;
          if (3 < (uint)((int)fVar1 - (int)fVar20)) {
            uVar9 = (int)fVar20 + 2;
            pfVar3 = param_1 + (uVar12 + 2) * 0x17 + uVar8;
            do {
              if (fVar21 < ABS(pfVar3[-0x2e])) {
                uVar16 = uVar7;
                uVar18 = uVar11;
                fVar21 = ABS(pfVar3[-0x2e]);
              }
              if (fVar21 < ABS(pfVar3[-0x17])) {
                uVar16 = (ulonglong)(uVar9 - 1);
                uVar18 = uVar11;
                fVar21 = ABS(pfVar3[-0x17]);
              }
              if (fVar21 < ABS(*pfVar3)) {
                uVar16 = (ulonglong)uVar9;
                uVar18 = uVar11;
                fVar21 = ABS(*pfVar3);
              }
              if (fVar21 < ABS(pfVar3[0x17])) {
                uVar16 = (ulonglong)(uVar9 + 1);
                uVar18 = uVar11;
                fVar21 = ABS(pfVar3[0x17]);
              }
              pfVar3 = pfVar3 + 0x5c;
              uVar6 = (int)uVar7 + 4;
              uVar7 = (ulonglong)uVar6;
              uVar9 = uVar9 + 4;
            } while (uVar6 < (int)fVar1 - 3U);
          }
          if ((uint)(float)uVar7 < (uint)fVar1) {
            pfVar3 = param_1 + uVar7 * 0x17 + uVar8;
            do {
              if (fVar21 < ABS(*pfVar3)) {
                uVar16 = uVar7;
                uVar18 = uVar11;
                fVar21 = ABS(*pfVar3);
              }
              pfVar3 = pfVar3 + 0x17;
              fVar15 = (float)((int)uVar7 + 1);
              uVar7 = (ulonglong)(uint)fVar15;
            } while ((uint)fVar15 < (uint)fVar1);
          }
          fVar17 = (float)uVar18;
          fVar15 = (float)uVar16;
          fVar10 = (float)((int)uVar11 + 1);
          uVar11 = (ulonglong)(uint)fVar10;
          uVar8 = uVar8 + 1;
        } while ((uint)fVar10 < (uint)fVar1);
      }
      pfVar13[-0x16] = fVar15;
      if (fVar15 != fVar20) {
        uVar12 = 0;
        param_1[0x23e] = -param_1[0x23e];
        if (3 < (uint)fVar1) {
          lVar4 = (ulonglong)(uint)fVar15 - local_res18;
          uVar9 = ((int)fVar1 - 4U >> 2) + 1;
          uVar8 = (ulonglong)uVar9;
          uVar12 = (ulonglong)(uVar9 * 4);
          pfVar3 = pfVar2;
          do {
            fVar21 = pfVar3[lVar4 * 0x17 + -1];
            pfVar3[lVar4 * 0x17 + -1] = pfVar3[-1];
            pfVar3[-1] = fVar21;
            fVar21 = pfVar3[lVar4 * 0x17];
            pfVar3[lVar4 * 0x17] = *pfVar3;
            *pfVar3 = fVar21;
            fVar21 = pfVar3[lVar4 * 0x17 + 1];
            pfVar3[lVar4 * 0x17 + 1] = pfVar3[1];
            pfVar3[1] = fVar21;
            fVar21 = pfVar3[lVar4 * 0x17 + 2];
            pfVar3[lVar4 * 0x17 + 2] = pfVar3[2];
            pfVar3[2] = fVar21;
            pfVar3 = pfVar3 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if ((uint)(float)uVar12 < (uint)fVar1) {
          pfVar3 = param_1 + uVar12 + local_58;
          uVar12 = (ulonglong)(uint)((int)fVar1 - (int)(float)uVar12);
          do {
            fVar21 = pfVar3[((ulonglong)(uint)fVar15 - local_res18) * 0x17];
            pfVar3[((ulonglong)(uint)fVar15 - local_res18) * 0x17] = *pfVar3;
            *pfVar3 = fVar21;
            pfVar3 = pfVar3 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      *pfVar13 = fVar17;
      if (fVar17 != fVar20) {
        fVar21 = 0.0;
        param_1[0x23e] = -param_1[0x23e];
        if (3 < (uint)fVar1) {
          lVar4 = (ulonglong)(uint)fVar17 - local_res18;
          uVar9 = ((int)fVar1 - 4U >> 2) + 1;
          pfVar3 = pfVar13 + -0x211;
          uVar12 = (ulonglong)uVar9;
          fVar21 = (float)(uVar9 * 4);
          do {
            fVar15 = pfVar3[lVar4 + -0x17];
            pfVar3[lVar4 + -0x17] = pfVar3[-0x17];
            pfVar3[-0x17] = fVar15;
            fVar15 = pfVar3[lVar4];
            pfVar3[lVar4] = *pfVar3;
            *pfVar3 = fVar15;
            fVar15 = pfVar3[lVar4 + 0x17];
            pfVar3[lVar4 + 0x17] = pfVar3[0x17];
            pfVar3[0x17] = fVar15;
            fVar15 = pfVar3[lVar4 + 0x2e];
            pfVar3[lVar4 + 0x2e] = pfVar3[0x2e];
            pfVar3[0x2e] = fVar15;
            pfVar3 = pfVar3 + 0x5c;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if ((uint)fVar21 < (uint)fVar1) {
          pfVar3 = param_1 + (ulonglong)(uint)fVar21 * 0x17 + local_res18;
          uVar12 = (ulonglong)(uint)((int)fVar1 - (int)fVar21);
          do {
            fVar21 = pfVar3[(ulonglong)(uint)fVar17 - local_res18];
            pfVar3[(ulonglong)(uint)fVar17 - local_res18] = *pfVar3;
            *pfVar3 = fVar21;
            pfVar3 = pfVar3 + 0x17;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      param_1[0x23e] = param_1[0x23e] * *pfVar19;
      if (*pfVar19 != 0.0) {
        fVar21 = (float)((int)fVar20 + 1);
        if ((uint)fVar21 < (uint)fVar1) {
          lVar4 = (ulonglong)(uint)fVar21 * 0x17;
          pfVar3 = param_1 + local_res18 + lVar4;
          lVar14 = (local_res18 - (ulonglong)(uint)fVar21) * 0x5c + 4;
          uVar12 = (ulonglong)(uint)((int)fVar1 - (int)fVar21);
          do {
            *pfVar3 = *pfVar3 / *pfVar19;
            if ((uint)fVar21 < (uint)fVar1) {
              fVar15 = fVar21;
              if (3 < (uint)((int)fVar1 - (int)fVar21)) {
                uVar9 = (((int)fVar1 - (int)fVar21) - 4U >> 2) + 1;
                pfVar5 = param_1 + (ulonglong)(uint)fVar21 + 1 + lVar4;
                uVar8 = (ulonglong)uVar9;
                fVar15 = (float)((int)fVar21 + uVar9 * 4);
                do {
                  pfVar5[-1] = pfVar5[-1] - *(float *)((longlong)pfVar5 + lVar14 + -8) * *pfVar3;
                  *pfVar5 = *pfVar5 - *(float *)((longlong)pfVar5 + lVar14 + -4) * *pfVar3;
                  pfVar5[1] = pfVar5[1] - *(float *)((longlong)pfVar5 + lVar14) * *pfVar3;
                  pfVar5[2] = pfVar5[2] - *(float *)((longlong)pfVar5 + lVar14 + 4) * *pfVar3;
                  pfVar5 = pfVar5 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              if ((uint)fVar15 < (uint)fVar1) {
                pfVar5 = param_1 + (ulonglong)(uint)fVar15 + lVar4;
                uVar8 = (ulonglong)(uint)((int)fVar1 - (int)fVar15);
                do {
                  *pfVar5 = *pfVar5 - *(float *)(lVar14 + -4 + (longlong)pfVar5) * *pfVar3;
                  pfVar5 = pfVar5 + 1;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
            }
            lVar4 = lVar4 + 0x17;
            pfVar3 = pfVar3 + 0x17;
            lVar14 = lVar14 + -0x5c;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      pfVar2 = pfVar2 + 0x17;
      local_res18 = local_res18 + 1;
      pfVar13 = pfVar13 + 1;
      local_58 = local_58 + 0x17;
      uVar12 = (ulonglong)((int)fVar20 + 1U);
      pfVar19 = pfVar19 + 0x18;
    } while ((int)fVar20 + 1U < (int)fVar1 - 1U);
  }
  param_1[0x23e] = param_1[(ulonglong)((int)fVar1 - 1U) * 0x18] * param_1[0x23e];
  return;
}



// FUNCTION 14396fc20 integrateBody body=1127 status=ok
// SIG undefined integrateBody(void)

void physx::integrateBody
               (float param_1,undefined8 param_2,float *param_3,float *param_4,float param_5,
               float *param_6,float *param_7,float *param_8)

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
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  
  param_1 = param_1 * param_5;
  fVar2 = *param_3;
  fVar3 = param_3[2];
  param_6[1] = param_1 * param_3[1] + param_6[1];
  *param_6 = param_1 * fVar2 + *param_6;
  param_6[2] = param_1 * fVar3 + param_6[2];
  fVar2 = param_8[2];
  fVar3 = param_8[1];
  fVar5 = param_8[3];
  fVar1 = *param_8;
  fVar9 = fVar3 + fVar3;
  fVar6 = fVar1 + fVar1;
  local_ec = (fVar2 + fVar2) * fVar5;
  fVar4 = (fVar2 + fVar2) * fVar2;
  local_f4 = local_ec + fVar6 * fVar3;
  local_f8 = (1.0 - fVar9 * fVar3) - fVar4;
  local_f0 = fVar6 * fVar2 - fVar9 * fVar5;
  local_ec = fVar6 * fVar3 - local_ec;
  local_e0 = fVar9 * fVar5 + fVar6 * fVar2;
  local_e8 = 1.0 - fVar1 * fVar6;
  local_e4 = fVar9 * fVar2 + fVar6 * fVar5;
  local_dc = fVar9 * fVar2 - fVar6 * fVar5;
  local_d8 = local_e8 - fVar9 * fVar3;
  local_e8 = local_e8 - fVar4;
  Cm::transformInertiaTensor(param_2,&local_f8,&local_d0);
  fVar2 = param_5 * param_4[2];
  fVar3 = param_5 * param_4[1];
  fVar5 = param_5 * *param_4;
  param_7[2] = local_c8 * fVar5 + local_bc * fVar3 + local_b0 * fVar2 + param_7[2];
  *param_7 = local_d0 * fVar5 + local_c4 * fVar3 + local_b8 * fVar2 + *param_7;
  param_7[1] = local_cc * fVar5 + local_c0 * fVar3 + local_b4 * fVar2 + param_7[1];
  fVar2 = param_6[1];
  fVar3 = param_6[2];
  param_8[4] = param_5 * *param_6 + param_8[4];
  param_8[5] = param_5 * fVar2 + param_8[5];
  param_8[6] = param_5 * fVar3 + param_8[6];
  fVar2 = param_8[3];
  fVar3 = *param_8;
  fVar5 = *param_7;
  fVar1 = param_8[2];
  fVar4 = param_7[1];
  fVar6 = param_8[1];
  fVar9 = param_7[2];
  param_5 = param_5 * 0.5;
  fVar7 = fVar3 + param_5 * ((fVar2 * fVar5 + fVar3 * 0.0 + fVar1 * fVar4) - fVar6 * fVar9);
  fVar8 = fVar6 + param_5 * ((fVar2 * fVar4 + fVar6 * 0.0 + fVar3 * fVar9) - fVar1 * fVar5);
  fVar10 = fVar1 + param_5 * ((fVar2 * fVar9 + fVar1 * 0.0 + fVar6 * fVar5) - fVar3 * fVar4);
  fVar2 = fVar2 + param_5 * (((fVar2 * 0.0 - fVar3 * fVar5) - fVar6 * fVar4) - fVar1 * fVar9);
  fVar3 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar10 * fVar10 + fVar2 * fVar2);
  if (fVar3 != 0.0) {
    fVar3 = 1.0 / fVar3;
    fVar7 = fVar7 * fVar3;
    fVar8 = fVar8 * fVar3;
    fVar10 = fVar10 * fVar3;
    fVar2 = fVar2 * fVar3;
  }
  *param_8 = fVar7;
  param_8[1] = fVar8;
  param_8[2] = fVar10;
  param_8[3] = fVar2;
  return;
}



// FUNCTION 143970090 FUN_143970090 body=244 status=ok
// SIG undefined FUN_143970090(void)

ulonglong FUN_143970090(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar11 = 0;
  param_2 = (longlong *)*param_2;
  if (uVar1 != 0) {
    iVar12 = 0;
    plVar10 = param_2 + 0x3c;
    do {
      lVar2 = plVar10[-1];
      lVar3 = *plVar10;
      if ((lVar2 != 0) || (lVar3 != 0)) {
        uVar8 = 0;
        pcVar9 = (char *)(lVar3 + 0x59);
        do {
          param_2 = (longlong *)
                    physx::PxVehicleWheelsSimData::getIsWheelDisabled(param_1,iVar12 + (int)uVar8);
          if ((char)param_2 == '\0') {
            if (lVar2 == 0) {
              cVar6 = *pcVar9;
            }
            else {
              cVar6 = pcVar9[lVar2 - lVar3];
            }
            lVar4 = lVar3;
            if (lVar2 != 0) {
              lVar4 = lVar2;
            }
            param_2 = (longlong *)(uVar8 * 0x60 + lVar4);
            if ((cVar6 != '\0') && (lVar4 = *param_2, lVar4 != 0)) {
              lVar5 = 0;
              if (*(short *)(lVar4 + 8) == 6) {
                lVar5 = lVar4;
              }
              param_2 = (longlong *)0x0;
              if (lVar5 != 0) {
                return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
              }
            }
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          pcVar9 = pcVar9 + 0x60;
        } while (uVar7 < 4);
      }
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 4;
      plVar10 = plVar10 + 0x44;
    } while (uVar11 < uVar1);
  }
  return (ulonglong)param_2 & 0xffffffffffffff00;
}



// FUNCTION 143970190 setInternalDynamicsToZero body=104 status=ok
// SIG undefined setInternalDynamicsToZero(void)

void physx::PxVehicleUpdate::setInternalDynamicsToZero(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(int *)(param_1 + 0x8c) + 3;
  if (uVar2 >> 2 != 0) {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x50);
    uVar3 = (ulonglong)(uVar2 >> 2);
    do {
      *(undefined8 *)(puVar1 + -0x14) = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *puVar1 = 0x7f7fffff;
      puVar1[1] = 0x7f7fffff;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -0xe) = 0;
      puVar1[2] = 0x7f7fffff;
      puVar1[3] = 0x7f7fffff;
      puVar1 = puVar1 + 0x88;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 0x10c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return;
}



// FUNCTION 143970200 solve body=569 status=ok
// SIG undefined solve(void)

bool physx::Matrix33Solver::solve(undefined8 param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar1 = param_2[2];
  fVar2 = param_2[0x2f];
  fVar3 = param_2[0x30];
  fVar4 = param_2[0x19];
  fVar5 = param_2[0x18];
  fVar6 = param_2[0x17];
  fVar7 = param_2[0x2e];
  fVar13 = fVar3 * fVar5 - fVar2 * fVar4;
  fVar8 = *param_2;
  fVar9 = param_2[1];
  fVar12 = fVar3 * fVar6 - fVar7 * fVar4;
  fVar14 = fVar2 * fVar6 - fVar7 * fVar5;
  fVar10 = (fVar13 * fVar8 - fVar12 * fVar9) + fVar14 * fVar1;
  if (fVar10 != 0.0) {
    fVar11 = 1.0 / fVar10;
    *param_4 = (-(fVar3 * fVar9 - fVar2 * fVar1) * param_3[1] + fVar13 * *param_3 +
               (fVar4 * fVar9 - fVar5 * fVar1) * param_3[2]) * fVar11;
    param_4[1] = ((fVar3 * fVar8 - fVar7 * fVar1) * param_3[1] + -fVar12 * *param_3 +
                 -(fVar4 * fVar8 - fVar6 * fVar1) * param_3[2]) * fVar11;
    param_4[2] = (-(fVar2 * fVar8 - fVar7 * fVar9) * param_3[1] + fVar14 * *param_3 +
                 (fVar5 * fVar8 - fVar6 * fVar9) * param_3[2]) * fVar11;
  }
  return fVar10 != 0.0;
}



// FUNCTION 143970440 solve body=1373 status=ok
// SIG undefined solve(void)

void physx::MatrixNGaussSeidelSolver::solve
               (undefined8 param_1,uint param_2,float param_3,longlong param_4,float *param_5,
               longlong param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
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
  uint local_res20;
  float afStack_e0 [25];
  uint local_7c;
  
  uVar8 = *(uint *)(param_4 + 0x844);
  uVar15 = 0;
  fVar30 = 0.0;
  local_7c = uVar8;
  if (3 < uVar8) {
    pfVar12 = (float *)(param_4 + 0xc0);
    pfVar11 = param_5 + 2;
    uVar9 = (uVar8 - 4 >> 2) + 1;
    uVar19 = (ulonglong)uVar9;
    uVar15 = (ulonglong)(uVar9 * 4);
    do {
      fVar29 = pfVar11[-2];
      *(float *)((longlong)afStack_e0 + -(longlong)param_5 + (longlong)pfVar11) =
           1.0 / pfVar12[-0x30];
      fVar20 = pfVar11[-1];
      *(float *)((longlong)afStack_e0 + -(longlong)param_5 + 4 + (longlong)pfVar11) =
           1.0 / pfVar12[-0x18];
      *(float *)((longlong)afStack_e0 + -(longlong)param_5 + 8 + (longlong)pfVar11) = 1.0 / *pfVar12
      ;
      pfVar3 = pfVar12 + 0x18;
      pfVar12 = pfVar12 + 0x60;
      fVar21 = *pfVar11;
      *(float *)((longlong)afStack_e0 + -(longlong)param_5 + 0xc + (longlong)pfVar11) =
           1.0 / *pfVar3;
      pfVar3 = pfVar11 + 1;
      pfVar11 = pfVar11 + 4;
      fVar30 = fVar30 + fVar29 * fVar29 + fVar20 * fVar20 + fVar21 * fVar21 + *pfVar3 * *pfVar3;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  if ((uint)uVar15 < uVar8) {
    pfVar12 = (float *)(uVar15 * 0x60 + param_4);
    pfVar11 = param_5 + uVar15;
    uVar15 = (ulonglong)(uVar8 - (uint)uVar15);
    do {
      fVar29 = *pfVar11;
      fVar20 = *pfVar12;
      pfVar12 = pfVar12 + 0x18;
      *(float *)((longlong)pfVar11 + (longlong)afStack_e0 + (8 - (longlong)param_5)) = 1.0 / fVar20;
      pfVar11 = pfVar11 + 1;
      fVar30 = fVar30 + fVar29 * fVar29;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  fVar29 = 3.4028235e+38;
  local_res20 = 0;
  if (param_2 != 0) {
    do {
      if (fVar29 <= param_3) {
        return;
      }
      if (uVar8 != 0) {
        lVar14 = 0;
        lVar16 = (param_6 - param_4) + 8;
        lVar17 = param_4 - param_6;
        uVar15 = 1;
        pfVar11 = afStack_e0 + 2;
        do {
          uVar19 = 0;
          uVar9 = (uint)uVar15;
          uVar18 = uVar9 - 1;
          fVar29 = 0.0;
          if (3 < uVar18) {
            pfVar12 = (float *)(lVar17 + param_6);
            uVar10 = (uVar9 - 5 >> 2) + 1;
            uVar13 = (ulonglong)uVar10;
            uVar19 = (ulonglong)(uVar10 * 4);
            do {
              pfVar4 = (float *)((longlong)pfVar12 + lVar16 + -4);
              pfVar3 = pfVar12 + 1;
              pfVar5 = (float *)((longlong)pfVar12 + lVar16 + -8);
              fVar20 = *pfVar12;
              pfVar6 = (float *)((longlong)pfVar12 + lVar16 + 4);
              pfVar7 = pfVar12 + 3;
              pfVar2 = (float *)((longlong)pfVar12 + lVar16);
              pfVar1 = pfVar12 + 2;
              pfVar12 = pfVar12 + 4;
              fVar29 = *pfVar4 * *pfVar3 + *pfVar5 * fVar20 + fVar29 + *pfVar2 * *pfVar1 +
                       *pfVar6 * *pfVar7;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          if ((uint)uVar19 < uVar18) {
            pfVar12 = (float *)(param_6 + uVar19 * 4);
            uVar19 = (ulonglong)(uVar18 - (uint)uVar19);
            do {
              pfVar3 = (float *)(lVar17 + (longlong)pfVar12);
              fVar20 = *pfVar12;
              pfVar12 = pfVar12 + 1;
              fVar29 = fVar29 + *pfVar3 * fVar20;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          fVar20 = 0.0;
          if (uVar9 < uVar8) {
            uVar18 = uVar9;
            if (3 < uVar8 - uVar9) {
              pfVar12 = (float *)((uVar15 + lVar14) * 4 + param_4);
              uVar18 = ((uVar8 - uVar9) - 4 >> 2) + 1;
              uVar15 = (ulonglong)uVar18;
              uVar18 = uVar9 + uVar18 * 4;
              do {
                pfVar4 = (float *)((longlong)pfVar12 + lVar16 + -4);
                pfVar3 = pfVar12 + 1;
                pfVar5 = (float *)((longlong)pfVar12 + lVar16 + -8);
                fVar21 = *pfVar12;
                pfVar6 = (float *)((longlong)pfVar12 + lVar16 + 4);
                pfVar7 = pfVar12 + 3;
                pfVar2 = (float *)((longlong)pfVar12 + lVar16);
                pfVar1 = pfVar12 + 2;
                pfVar12 = pfVar12 + 4;
                fVar20 = *pfVar4 * *pfVar3 + *pfVar5 * fVar21 + fVar20 + *pfVar2 * *pfVar1 +
                         *pfVar6 * *pfVar7;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            if (uVar18 < uVar8) {
              uVar15 = (ulonglong)(uVar8 - uVar18);
              pfVar12 = (float *)(param_6 + (ulonglong)uVar18 * 4);
              do {
                pfVar3 = (float *)(lVar17 + (longlong)pfVar12);
                fVar21 = *pfVar12;
                pfVar12 = pfVar12 + 1;
                fVar20 = fVar20 + *pfVar3 * fVar21;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
          }
          uVar15 = (ulonglong)(uVar9 + 1);
          lVar14 = lVar14 + 0x17;
          lVar16 = lVar16 + -0x5c;
          lVar17 = lVar17 + 0x5c;
          *(float *)((param_6 - (longlong)(afStack_e0 + 2)) + (longlong)pfVar11) =
               ((*(float *)(((longlong)param_5 - (longlong)(afStack_e0 + 2)) + (longlong)pfVar11) -
                fVar29) - fVar20) * *pfVar11;
          pfVar11 = pfVar11 + 1;
        } while (uVar9 < uVar8);
      }
      fVar29 = 0.0;
      if (uVar8 != 0) {
        lVar17 = param_4 - param_6;
        lVar14 = 0;
        lVar16 = (param_6 - param_4) + 8;
        uVar15 = (ulonglong)uVar8;
        pfVar11 = param_5;
        do {
          uVar19 = 0;
          fVar20 = -*pfVar11;
          if (7 < uVar8) {
            fVar21 = 0.0;
            fVar22 = 0.0;
            fVar23 = 0.0;
            fVar24 = 0.0;
            fVar25 = 0.0;
            fVar26 = 0.0;
            fVar27 = 0.0;
            fVar28 = 0.0;
            do {
              pfVar12 = (float *)(param_6 + uVar19 * 4);
              pfVar7 = (float *)(param_4 + (lVar14 + uVar19) * 4);
              uVar9 = (int)uVar19 + 4;
              uVar18 = (int)uVar19 + 8;
              uVar19 = (ulonglong)uVar18;
              pfVar3 = (float *)(param_6 + (ulonglong)uVar9 * 4);
              fVar21 = fVar21 + *pfVar7 * *pfVar12;
              fVar22 = fVar22 + pfVar7[1] * pfVar12[1];
              fVar23 = fVar23 + pfVar7[2] * pfVar12[2];
              fVar24 = fVar24 + pfVar7[3] * pfVar12[3];
              pfVar12 = (float *)(param_4 + ((ulonglong)uVar9 + lVar14) * 4);
              fVar25 = fVar25 + *pfVar12 * *pfVar3;
              fVar26 = fVar26 + pfVar12[1] * pfVar3[1];
              fVar27 = fVar27 + pfVar12[2] * pfVar3[2];
              fVar28 = fVar28 + pfVar12[3] * pfVar3[3];
            } while (uVar18 < (uVar8 & 0xfffffff8));
            fVar20 = fVar20 + fVar23 + fVar27 + fVar21 + fVar25 + fVar24 + fVar28 + fVar22 + fVar26;
          }
          uVar9 = (uint)uVar19;
          if (uVar9 < uVar8) {
            if (3 < uVar8 - uVar9) {
              pfVar12 = (float *)((uVar19 + lVar14) * 4 + param_4);
              uVar18 = ((uVar8 - uVar9) - 4 >> 2) + 1;
              uVar13 = (ulonglong)uVar18;
              uVar19 = (ulonglong)(uVar9 + uVar18 * 4);
              do {
                pfVar4 = (float *)((longlong)pfVar12 + lVar16 + -4);
                pfVar3 = pfVar12 + 1;
                pfVar5 = (float *)((longlong)pfVar12 + lVar16 + -8);
                fVar21 = *pfVar12;
                pfVar6 = (float *)((longlong)pfVar12 + lVar16 + 4);
                pfVar7 = pfVar12 + 3;
                pfVar2 = (float *)((longlong)pfVar12 + lVar16);
                pfVar1 = pfVar12 + 2;
                pfVar12 = pfVar12 + 4;
                fVar20 = *pfVar4 * *pfVar3 + *pfVar5 * fVar21 + fVar20 + *pfVar2 * *pfVar1 +
                         *pfVar6 * *pfVar7;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            if ((uint)uVar19 < uVar8) {
              pfVar12 = (float *)(param_6 + uVar19 * 4);
              uVar19 = (ulonglong)(uVar8 - (uint)uVar19);
              do {
                pfVar3 = (float *)(lVar17 + (longlong)pfVar12);
                fVar21 = *pfVar12;
                pfVar12 = pfVar12 + 1;
                fVar20 = fVar20 + *pfVar3 * fVar21;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
          }
          pfVar11 = pfVar11 + 1;
          lVar14 = lVar14 + 0x17;
          lVar16 = lVar16 + -0x5c;
          lVar17 = lVar17 + 0x5c;
          fVar29 = fVar29 + fVar20 * fVar20;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      local_res20 = local_res20 + 1;
      fVar29 = fVar29 / (fVar30 + 1e-10);
    } while (local_res20 < param_2);
  }
  return;
}



// FUNCTION 1439709a0 solve body=965 status=ok
// SIG undefined solve(void)

ulonglong physx::MatrixNNLUSolver::solve(float *param_1,longlong param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  float *pfVar6;
  ulonglong uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  
  fVar3 = param_3[0x17];
  uVar7 = (ulonglong)(uint)fVar3;
  fVar15 = *(float *)(param_2 + 0x5c);
  uVar5 = (ulonglong)(uint)fVar15;
  if (((fVar15 == fVar3) && (fVar15 == param_1[0x211])) && (param_1[0x23e] != 0.0)) {
    uVar5 = 0;
    if (fVar15 != 0.0) {
      do {
        param_3[uVar5] = *(float *)(param_2 + uVar5 * 4);
        uVar8 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_2 + 0x5c));
    }
    fVar15 = *(float *)(param_2 + 0x5c);
    uVar8 = (int)fVar3 - 1;
    uVar17 = (ulonglong)uVar8;
    uVar5 = 0;
    param_3[0x17] = fVar15;
    if (3 < uVar8) {
      uVar4 = ((int)fVar3 - 5U >> 2) + 1;
      uVar13 = (ulonglong)uVar4;
      uVar5 = (ulonglong)(uVar4 * 4);
      pfVar10 = param_3 + 1;
      do {
        uVar4 = *(uint *)((longlong)param_1 + (0x844 - (longlong)param_3) + (longlong)pfVar10);
        fVar15 = param_3[uVar4];
        param_3[uVar4] = pfVar10[-1];
        pfVar10[-1] = fVar15;
        uVar4 = *(uint *)((longlong)param_1 + (0x838 - (longlong)param_3) + (longlong)(pfVar10 + 4))
        ;
        fVar15 = param_3[uVar4];
        param_3[uVar4] = *pfVar10;
        *pfVar10 = fVar15;
        uVar4 = *(uint *)((longlong)pfVar10 + (longlong)param_1 + (0x84c - (longlong)param_3));
        fVar18 = param_3[uVar4];
        param_3[uVar4] = pfVar10[1];
        fVar15 = pfVar10[2];
        pfVar10[1] = fVar18;
        uVar4 = *(uint *)((longlong)pfVar10 + (longlong)param_1 + (0x850 - (longlong)param_3));
        fVar18 = param_3[uVar4];
        param_3[uVar4] = fVar15;
        pfVar10[2] = fVar18;
        uVar13 = uVar13 - 1;
        pfVar10 = pfVar10 + 4;
      } while (uVar13 != 0);
    }
    if ((uint)uVar5 < uVar8) {
      uVar13 = (ulonglong)(uVar8 - (uint)uVar5);
      pfVar10 = param_3 + uVar5;
      do {
        uVar4 = *(uint *)((longlong)param_1 + (0x848 - (longlong)param_3) + (longlong)pfVar10);
        fVar15 = *pfVar10;
        fVar18 = param_3[uVar4];
        param_3[uVar4] = fVar15;
        *pfVar10 = fVar18;
        uVar13 = uVar13 - 1;
        pfVar10 = pfVar10 + 1;
      } while (uVar13 != 0);
    }
    uVar5 = (ulonglong)(uint)fVar15;
    fVar15 = 1.4013e-45;
    if (1 < (uint)fVar3) {
      lVar11 = (longlong)param_3 + (-0x54 - (longlong)param_1);
      pfVar10 = param_3;
      pfVar9 = param_1;
      do {
        pfVar9 = pfVar9 + 0x17;
        pfVar10 = pfVar10 + 1;
        uVar13 = 0;
        if (3 < (uint)fVar15) {
          fVar18 = *pfVar10;
          uVar4 = ((int)fVar15 - 4U >> 2) + 1;
          uVar5 = (ulonglong)uVar4;
          uVar14 = (ulonglong)uVar4;
          uVar13 = (ulonglong)(uVar4 * 4);
          pfVar6 = pfVar9;
          do {
            fVar18 = fVar18 - *(float *)(lVar11 + -8 + (longlong)pfVar6) * *pfVar6;
            *pfVar10 = fVar18;
            fVar18 = fVar18 - *(float *)(lVar11 + -4 + (longlong)pfVar6) * pfVar6[1];
            *pfVar10 = fVar18;
            fVar18 = fVar18 - *(float *)(lVar11 + (longlong)pfVar6) * pfVar6[2];
            *pfVar10 = fVar18;
            pfVar2 = (float *)(lVar11 + 4 + (longlong)pfVar6);
            pfVar1 = pfVar6 + 3;
            pfVar6 = pfVar6 + 4;
            fVar18 = fVar18 - *pfVar2 * *pfVar1;
            *pfVar10 = fVar18;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        if ((uint)(float)uVar13 < (uint)fVar15) {
          fVar18 = *pfVar10;
          pfVar6 = param_3 + uVar13;
          uVar13 = (ulonglong)(uint)((int)fVar15 - (int)(float)uVar13);
          do {
            uVar5 = (longlong)pfVar9 - (longlong)param_3;
            pfVar1 = (float *)(uVar5 + (longlong)pfVar6);
            fVar19 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            fVar18 = fVar18 - *pfVar1 * fVar19;
            *pfVar10 = fVar18;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        fVar15 = (float)((int)fVar15 + 1);
        lVar11 = lVar11 + -0x5c;
      } while ((uint)fVar15 < (uint)fVar3);
    }
    if (fVar3 != 0.0) {
      uVar5 = uVar7 * 0x5c;
      lVar11 = uVar7 * 0x17;
      pfVar9 = param_3 + uVar7;
      lVar16 = (uVar5 - (longlong)param_3) + (longlong)param_1;
      pfVar10 = param_1 + uVar7 * 0x18;
      lVar12 = (longlong)param_3 + (uVar7 * -0x5c - (longlong)param_1) + 4;
      fVar15 = fVar3;
      do {
        uVar7 = (ulonglong)(uint)fVar15;
        lVar11 = lVar11 + -0x17;
        fVar18 = (float)((int)fVar15 + -1);
        lVar16 = lVar16 + -0x5c;
        pfVar10 = pfVar10 + -0x18;
        pfVar9 = pfVar9 + -1;
        if ((uint)fVar15 < (uint)fVar3) {
          uVar4 = (int)fVar3 - (int)fVar15;
          if (3 < uVar4) {
            fVar19 = *pfVar9;
            pfVar6 = param_1 + lVar11 + uVar7 + 2;
            uVar4 = (((int)fVar3 - (int)fVar15) - 4U >> 2) + 1;
            uVar5 = (ulonglong)uVar4;
            uVar7 = (ulonglong)((int)fVar15 + uVar4 * 4);
            do {
              fVar19 = fVar19 - *(float *)((longlong)pfVar6 + lVar12 + 0x50) * pfVar6[-2];
              *pfVar9 = fVar19;
              fVar19 = fVar19 - *(float *)((longlong)pfVar6 + lVar12 + 0x54) * pfVar6[-1];
              *pfVar9 = fVar19;
              fVar19 = fVar19 - *(float *)((longlong)pfVar6 + lVar12 + 0x58) * *pfVar6;
              *pfVar9 = fVar19;
              pfVar2 = (float *)((longlong)pfVar6 + lVar12 + 0x5c);
              pfVar1 = pfVar6 + 1;
              pfVar6 = pfVar6 + 4;
              fVar19 = fVar19 - *pfVar2 * *pfVar1;
              *pfVar9 = fVar19;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          uVar5 = (ulonglong)uVar4;
          if ((uint)(float)uVar7 < (uint)fVar3) {
            fVar15 = *pfVar9;
            pfVar6 = param_3 + uVar7;
            uVar5 = (ulonglong)(uint)((int)fVar3 - (int)(float)uVar7);
            do {
              pfVar1 = (float *)((longlong)pfVar6 + lVar16);
              fVar19 = *pfVar6;
              pfVar6 = pfVar6 + 1;
              fVar15 = fVar15 - *pfVar1 * fVar19;
              *pfVar9 = fVar15;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
        *pfVar9 = *pfVar9 / *pfVar10;
        lVar12 = lVar12 + 0x5c;
        fVar15 = fVar18;
      } while (fVar18 != 0.0);
    }
    if (uVar8 != 0) {
      pfVar10 = param_3 + uVar17;
      do {
        uVar8 = *(uint *)((longlong)pfVar10 + (longlong)param_1 + (0x89c - (longlong)param_3));
        pfVar10 = pfVar10 + -1;
        uVar5 = (ulonglong)(uint)*pfVar10;
        fVar3 = param_3[uVar8];
        param_3[uVar8] = *pfVar10;
        *pfVar10 = fVar3;
        uVar8 = (int)uVar17 - 1;
        uVar17 = (ulonglong)uVar8;
      } while (uVar8 != 0);
    }
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
  if (fVar3 != 0.0) {
    uVar5 = 0;
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      *param_3 = 0.0;
      param_3 = param_3 + 1;
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 143970d70 storeHitActorForces body=625 status=ok
// SIG undefined storeHitActorForces(void)

void physx::PxVehicleUpdate::storeHitActorForces(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  uVar7 = 0;
  if (3 < param_3) {
    puVar9 = (undefined8 *)(param_1 + 0x430);
    uVar4 = (param_3 - 4 >> 2) + 1;
    pfVar5 = (float *)(param_2 + 0x30);
    pfVar6 = (float *)(param_1 + 0x450);
    uVar8 = (ulonglong)uVar4;
    uVar7 = (ulonglong)(uVar4 * 4);
    do {
      *(undefined8 *)(pfVar5 + -4) = puVar9[-1];
      pfVar5[-2] = pfVar6[-2] + pfVar5[-2];
      pfVar5[-1] = pfVar6[-1] + pfVar5[-1];
      *pfVar5 = *pfVar6 + *pfVar5;
      pfVar5[1] = pfVar6[10];
      pfVar5[2] = pfVar6[0xb];
      pfVar5[3] = pfVar6[0xc];
      *(undefined8 *)(pfVar5 + 0xc) = *puVar9;
      pfVar5[0xe] = pfVar6[1] + pfVar5[0xe];
      pfVar5[0xf] = pfVar6[2] + pfVar5[0xf];
      pfVar5[0x10] = pfVar6[3] + pfVar5[0x10];
      pfVar5[0x11] = pfVar6[0xd];
      pfVar5[0x12] = pfVar6[0xe];
      pfVar5[0x13] = pfVar6[0xf];
      *(undefined8 *)(pfVar5 + 0x1c) = puVar9[1];
      pfVar5[0x1e] = pfVar6[4] + pfVar5[0x1e];
      pfVar5[0x1f] = pfVar6[5] + pfVar5[0x1f];
      pfVar5[0x20] = pfVar6[6] + pfVar5[0x20];
      pfVar5[0x21] = pfVar6[0x10];
      pfVar5[0x22] = pfVar6[0x11];
      pfVar5[0x23] = pfVar6[0x12];
      puVar1 = puVar9 + 2;
      puVar9 = puVar9 + 4;
      *(undefined8 *)(pfVar5 + 0x2c) = *puVar1;
      pfVar5[0x2e] = pfVar6[7] + pfVar5[0x2e];
      pfVar5[0x2f] = pfVar6[8] + pfVar5[0x2f];
      pfVar5[0x30] = pfVar6[9] + pfVar5[0x30];
      pfVar5[0x31] = pfVar6[0x13];
      pfVar5[0x32] = pfVar6[0x14];
      pfVar2 = pfVar6 + 0x15;
      pfVar6 = pfVar6 + 0xc;
      pfVar5[0x33] = *pfVar2;
      pfVar5 = pfVar5 + 0x40;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if ((uint)uVar7 < param_3) {
    pfVar6 = (float *)(param_2 + 0x30 + uVar7 * 0x40);
    puVar9 = (undefined8 *)(param_1 + 0x428 + uVar7 * 8);
    uVar8 = (ulonglong)(param_3 - (uint)uVar7);
    pfVar5 = (float *)(param_1 + (uVar7 + 0x5c) * 0xc);
    do {
      uVar3 = *puVar9;
      puVar9 = puVar9 + 1;
      *(undefined8 *)(pfVar6 + -4) = uVar3;
      pfVar6[-2] = pfVar5[-2] + pfVar6[-2];
      pfVar6[-1] = pfVar5[-1] + pfVar6[-1];
      *pfVar6 = *pfVar6 + *pfVar5;
      pfVar6[1] = pfVar5[10];
      pfVar6[2] = pfVar5[0xb];
      pfVar2 = pfVar5 + 0xc;
      pfVar5 = pfVar5 + 3;
      pfVar6[3] = *pfVar2;
      pfVar6 = pfVar6 + 0x10;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 143970ff0 storeRaycasts body=732 status=ok
// SIG undefined storeRaycasts(void)

void physx::PxVehicleUpdate::storeRaycasts(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)((longlong)param_2 + 0xa4) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_2 + 0x15) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)((longlong)param_2 + 0xac) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)((longlong)param_2 + 0xb4) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_2 + 0x17) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)((longlong)param_2 + 0x144) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_2 + 0x29) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)((longlong)param_2 + 0x14c) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_2 + 0x2a) = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)((longlong)param_2 + 0x154) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_2 + 0x2b) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)((longlong)param_2 + 0x1e4) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)(param_2 + 0x3d) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)((longlong)param_2 + 0x1ec) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_2 + 0x3e) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)((longlong)param_2 + 500) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_2 + 0x3f) = *(undefined4 *)(param_1 + 0xcc);
    return;
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_1 + 0x134);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 400);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x194);
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x198);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x1c0);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14c);
    *(undefined4 *)((longlong)param_2 + 0xa4) = *(undefined4 *)(param_1 + 0x150);
    *(undefined4 *)(param_2 + 0x15) = *(undefined4 *)(param_1 + 0x154);
    *(undefined4 *)((longlong)param_2 + 0xac) = *(undefined4 *)(param_1 + 0x19c);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined4 *)((longlong)param_2 + 0xb4) = *(undefined4 *)(param_1 + 0x1a4);
    *(undefined4 *)(param_2 + 0x17) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x168);
    *(undefined4 *)((longlong)param_2 + 0x144) = *(undefined4 *)(param_1 + 0x16c);
    *(undefined4 *)(param_2 + 0x29) = *(undefined4 *)(param_1 + 0x170);
    *(undefined4 *)((longlong)param_2 + 0x14c) = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined4 *)(param_2 + 0x2a) = *(undefined4 *)(param_1 + 0x1ac);
    *(undefined4 *)((longlong)param_2 + 0x154) = *(undefined4 *)(param_1 + 0x1b0);
    *(undefined4 *)(param_2 + 0x2b) = *(undefined4 *)(param_1 + 0x1c8);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)((longlong)param_2 + 0x1e4) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_2 + 0x3d) = *(undefined4 *)(param_1 + 0x18c);
    *(undefined4 *)((longlong)param_2 + 0x1ec) = *(undefined4 *)(param_1 + 0x1b4);
    *(undefined4 *)(param_2 + 0x3e) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined4 *)((longlong)param_2 + 500) = *(undefined4 *)(param_1 + 0x1bc);
    *(undefined4 *)(param_2 + 0x3f) = *(undefined4 *)(param_1 + 0x1cc);
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined4 *)(param_2 + 0x17) = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  *(undefined4 *)(param_2 + 0x2b) = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  return;
}



// FUNCTION 1439712d0 storeSuspWheelTireResults body=361 status=ok
// SIG undefined storeSuspWheelTireResults(void)

void physx::PxVehicleUpdate::storeSuspWheelTireResults
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_1 + 0x70);
    uVar1 = (ulonglong)param_4;
    puVar2 = (undefined8 *)(param_1 + 0x98);
    puVar4 = (undefined4 *)(param_3 + 0x44);
    puVar5 = (undefined4 *)(param_1 + 0xf0);
    puVar6 = (undefined4 *)(param_1 + 0x148);
    do {
      *(undefined1 *)(puVar4 + -10) = *puVar3;
      puVar3 = puVar3 + 1;
      *(undefined8 *)(puVar4 + -9) = puVar2[-4];
      *(undefined8 *)(puVar4 + -7) = *puVar2;
      *(undefined8 *)(puVar4 + -5) = puVar2[4];
      puVar4[-3] = puVar6[-0x1c];
      puVar4[-2] = puVar5[-2];
      puVar4[-1] = puVar5[-1];
      *puVar4 = *puVar5;
      puVar4[1] = puVar5[10];
      puVar4[2] = puVar5[0xb];
      puVar4[3] = puVar5[0xc];
      puVar4[4] = *puVar6;
      puVar4[5] = puVar6[4];
      puVar4[6] = puVar6[8];
      puVar4[7] = puVar5[0x22];
      puVar4[8] = puVar5[0x23];
      puVar4[9] = puVar5[0x24];
      puVar4[10] = puVar5[0x2e];
      puVar4[0xb] = puVar5[0x2f];
      puVar4[0xc] = puVar5[0x30];
      puVar4[0xd] = puVar6[0x24];
      puVar4[0xe] = puVar6[0x28];
      puVar4[0xf] = *(undefined4 *)((param_2 - param_1) + -0x14c + (longlong)(puVar6 + 1));
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 0x28;
      puVar5 = puVar5 + 3;
      puVar6 = puVar6 + 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143971440 vehicleSuspLimitConstraintSolverPrep body=2663 status=ok
// SIG undefined vehicleSuspLimitConstraintSolverPrep(void)

ulonglong physx::PxVehicleConstraintShader::vehicleSuspLimitConstraintSolverPrep(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  char *pcVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong in_stack_00000028;
  float *in_stack_00000030;
  
  uVar5 = 0;
  pcVar8 = (char *)(in_stack_00000028 + 0x70);
  pfVar11 = (float *)(in_stack_00000028 + 0x60);
  pfVar10 = (float *)(in_stack_00000028 + 0x34);
  lVar9 = 4;
  do {
    if (*pcVar8 != '\0') {
      fVar1 = in_stack_00000030[1];
      fVar2 = *in_stack_00000030;
      fVar3 = in_stack_00000030[3];
      fVar4 = in_stack_00000030[2];
      fVar16 = pfVar10[-1] + pfVar10[-1];
      fVar15 = pfVar10[1] + pfVar10[1];
      fVar14 = *pfVar10 + *pfVar10;
      fVar13 = fVar3 * fVar3 - 0.5;
      pfVar6 = (float *)(uVar5 * 0x50 + param_1);
      fVar12 = fVar2 * fVar16 + fVar1 * fVar14 + fVar4 * fVar15;
      *pfVar6 = (fVar1 * fVar15 - fVar4 * fVar14) * fVar3 + fVar13 * fVar16 + fVar2 * fVar12;
      pfVar6[1] = (fVar4 * fVar16 - fVar2 * fVar15) * fVar3 + fVar13 * fVar14 + fVar1 * fVar12;
      pfVar6[2] = (fVar2 * fVar14 - fVar1 * fVar16) * fVar3 + fVar13 * fVar15 + fVar4 * fVar12;
      fVar1 = in_stack_00000030[3];
      fVar16 = (pfVar10[-0xc] * pfVar10[1] - pfVar10[-0xb] * *pfVar10) * 2.0;
      fVar14 = (pfVar10[-0xd] * *pfVar10 - pfVar10[-0xc] * pfVar10[-1]) * 2.0;
      fVar15 = (pfVar10[-0xb] * pfVar10[-1] - pfVar10[-0xd] * pfVar10[1]) * 2.0;
      fVar2 = in_stack_00000030[1];
      fVar13 = fVar1 * fVar1 - 0.5;
      fVar3 = *in_stack_00000030;
      fVar4 = in_stack_00000030[2];
      uVar5 = (ulonglong)((int)uVar5 + 1);
      fVar12 = fVar3 * fVar16 + fVar2 * fVar15 + fVar4 * fVar14;
      pfVar6[4] = (fVar2 * fVar14 - fVar4 * fVar15) * fVar1 + fVar13 * fVar16 + fVar3 * fVar12;
      pfVar6[5] = (fVar4 * fVar16 - fVar3 * fVar14) * fVar1 + fVar13 * fVar15 + fVar2 * fVar12;
      pfVar6[6] = (fVar3 * fVar15 - fVar2 * fVar16) * fVar1 + fVar13 * fVar14 + fVar4 * fVar12;
      pfVar6[3] = *pfVar11;
      pfVar6[8] = 0.0;
      pfVar6[9] = 0.0;
      pfVar6[10] = 0.0;
      pfVar6[0xc] = 0.0;
      pfVar6[0xd] = 0.0;
      pfVar6[0xe] = 0.0;
      pfVar6[0xf] = 0.0;
      pfVar6[0xb] = -3.4028235e+38;
      pfVar6[7] = 0.0;
    }
    pfVar11 = pfVar11 + 1;
    pcVar8 = pcVar8 + 1;
    pfVar10 = pfVar10 + 3;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (*(char *)(in_stack_00000028 + 0xe4) != '\0') {
    puVar7 = (undefined4 *)(uVar5 * 0x50 + param_1);
    uVar5 = (ulonglong)((int)uVar5 + 1);
    *puVar7 = *(undefined4 *)(in_stack_00000028 + 0xa4);
    puVar7[1] = *(undefined4 *)(in_stack_00000028 + 0xa8);
    puVar7[2] = *(undefined4 *)(in_stack_00000028 + 0xac);
    fVar1 = *(float *)(in_stack_00000028 + 0x78);
    fVar2 = *(float *)(in_stack_00000028 + 0x7c);
    fVar3 = *(float *)(in_stack_00000028 + 0xac);
    fVar4 = *(float *)(in_stack_00000028 + 0xa8);
    fVar12 = *(float *)(in_stack_00000028 + 0xa4);
    fVar13 = *(float *)(in_stack_00000028 + 0x74);
    puVar7[4] = fVar1 * fVar3 - fVar2 * fVar4;
    puVar7[6] = fVar13 * fVar4 - fVar12 * fVar1;
    puVar7[5] = fVar12 * fVar2 - fVar13 * fVar3;
    puVar7[3] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    puVar7[10] = 0;
    *(undefined8 *)(puVar7 + 0xc) = 0;
    puVar7[0xe] = 0;
    puVar7[0xb] = 0xff7fffff;
    puVar7[0xf] = 0x7f7fffff;
    puVar7[7] = *(undefined4 *)(in_stack_00000028 + 0xd4);
    puVar7[0x11] = 0x447a0000;
    *(undefined2 *)(puVar7 + 0x13) = 3;
  }
  if (*(char *)(in_stack_00000028 + 0xe5) != '\0') {
    puVar7 = (undefined4 *)(uVar5 * 0x50 + param_1);
    uVar5 = (ulonglong)((int)uVar5 + 1);
    *puVar7 = *(undefined4 *)(in_stack_00000028 + 0xb0);
    puVar7[1] = *(undefined4 *)(in_stack_00000028 + 0xb4);
    puVar7[2] = *(undefined4 *)(in_stack_00000028 + 0xb8);
    fVar1 = *(float *)(in_stack_00000028 + 0x84);
    fVar2 = *(float *)(in_stack_00000028 + 0x88);
    fVar3 = *(float *)(in_stack_00000028 + 0xb8);
    fVar4 = *(float *)(in_stack_00000028 + 0xb4);
    fVar12 = *(float *)(in_stack_00000028 + 0xb0);
    fVar13 = *(float *)(in_stack_00000028 + 0x80);
    puVar7[4] = fVar1 * fVar3 - fVar2 * fVar4;
    puVar7[5] = fVar2 * fVar12 - fVar3 * fVar13;
    puVar7[6] = fVar4 * fVar13 - fVar1 * fVar12;
    puVar7[3] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    puVar7[10] = 0;
    *(undefined8 *)(puVar7 + 0xc) = 0;
    puVar7[0xe] = 0;
    puVar7[0xb] = 0xff7fffff;
    puVar7[0xf] = 0x7f7fffff;
    puVar7[7] = *(undefined4 *)(in_stack_00000028 + 0xd8);
    puVar7[0x11] = 0x447a0000;
    *(undefined2 *)(puVar7 + 0x13) = 3;
  }
  if (*(char *)(in_stack_00000028 + 0xe6) != '\0') {
    puVar7 = (undefined4 *)(uVar5 * 0x50 + param_1);
    uVar5 = (ulonglong)((int)uVar5 + 1);
    *puVar7 = *(undefined4 *)(in_stack_00000028 + 0xbc);
    puVar7[1] = *(undefined4 *)(in_stack_00000028 + 0xc0);
    puVar7[2] = *(undefined4 *)(in_stack_00000028 + 0xc4);
    fVar1 = *(float *)(in_stack_00000028 + 0x90);
    fVar2 = *(float *)(in_stack_00000028 + 0x94);
    fVar3 = *(float *)(in_stack_00000028 + 0xc4);
    fVar4 = *(float *)(in_stack_00000028 + 0xc0);
    fVar12 = *(float *)(in_stack_00000028 + 0xbc);
    fVar13 = *(float *)(in_stack_00000028 + 0x8c);
    puVar7[4] = fVar1 * fVar3 - fVar2 * fVar4;
    puVar7[5] = fVar2 * fVar12 - fVar3 * fVar13;
    puVar7[6] = fVar4 * fVar13 - fVar1 * fVar12;
    puVar7[3] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    puVar7[10] = 0;
    *(undefined8 *)(puVar7 + 0xc) = 0;
    puVar7[0xe] = 0;
    puVar7[0xb] = 0xff7fffff;
    puVar7[0xf] = 0x7f7fffff;
    puVar7[7] = *(undefined4 *)(in_stack_00000028 + 0xdc);
    puVar7[0x11] = 0x447a0000;
    *(undefined2 *)(puVar7 + 0x13) = 3;
  }
  if (*(char *)(in_stack_00000028 + 0xe7) != '\0') {
    puVar7 = (undefined4 *)(uVar5 * 0x50 + param_1);
    uVar5 = (ulonglong)((int)uVar5 + 1);
    *puVar7 = *(undefined4 *)(in_stack_00000028 + 200);
    puVar7[1] = *(undefined4 *)(in_stack_00000028 + 0xcc);
    puVar7[2] = *(undefined4 *)(in_stack_00000028 + 0xd0);
    fVar1 = *(float *)(in_stack_00000028 + 0x9c);
    fVar2 = *(float *)(in_stack_00000028 + 0xa0);
    fVar3 = *(float *)(in_stack_00000028 + 0xd0);
    fVar4 = *(float *)(in_stack_00000028 + 0xcc);
    fVar12 = *(float *)(in_stack_00000028 + 200);
    fVar13 = *(float *)(in_stack_00000028 + 0x98);
    puVar7[4] = fVar1 * fVar3 - fVar2 * fVar4;
    puVar7[5] = fVar2 * fVar12 - fVar3 * fVar13;
    puVar7[6] = fVar4 * fVar13 - fVar1 * fVar12;
    puVar7[3] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    puVar7[10] = 0;
    *(undefined8 *)(puVar7 + 0xc) = 0;
    puVar7[0xe] = 0;
    puVar7[0xb] = 0xff7fffff;
    puVar7[0xf] = 0x7f7fffff;
    puVar7[7] = *(undefined4 *)(in_stack_00000028 + 0xe0);
    puVar7[0x11] = 0x447a0000;
    *(undefined2 *)(puVar7 + 0x13) = 3;
  }
  if (*(char *)(in_stack_00000028 + 0x158) != '\0') {
    puVar7 = (undefined4 *)(uVar5 * 0x50 + param_1);
    uVar5 = (ulonglong)((int)uVar5 + 1);
    *puVar7 = *(undefined4 *)(in_stack_00000028 + 0x118);
    puVar7[1] = *(undefined4 *)(in_stack_00000028 + 0x11c);
    puVar7[2] = *(undefined4 *)(in_stack_00000028 + 0x120);
    fVar1 = *(float *)(in_stack_00000028 + 0xec);
    fVar2 = *(float *)(in_stack_00000028 + 0xf0);
    fVar3 = *(float *)(in_stack_00000028 + 0x120);
    fVar4 = *(float *)(in_stack_00000028 + 0x11c);
    fVar12 = *(float *)(in_stack_00000028 + 0x118);
    fVar13 = *(float *)(in_stack_00000028 + 0xe8);
    puVar7[4] = fVar1 * fVar3 - fVar2 * fVar4;
    puVar7[6] = fVar13 * fVar4 - fVar12 * fVar1;
    puVar7[5] = fVar12 * fVar2 - fVar13 * fVar3;
    puVar7[3] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    puVar7[10] = 0;
    *(undefined8 *)(puVar7 + 0xc) = 0;
    puVar7[0xe] = 0;
    puVar7[0xb] = 0xff7fffff;
    puVar7[0xf] = 0x7f7fffff;
    puVar7[7] = *(undefined4 *)(in_stack_00000028 + 0x148);
    puVar7[0x11] = 0x447a0000;
    *(undefined2 *)(puVar7 + 0x13) = 3;
  }
  if (*(char *)(in_stack_00000028 + 0x159) != '\0') {
    puVar7 = (undefined4 *)(uVar5 * 0x50 + param_1);
    uVar5 = (ulonglong)((int)uVar5 + 1);
    *puVar7 = *(undefined4 *)(in_stack_00000028 + 0x124);
    puVar7[1] = *(undefined4 *)(in_stack_00000028 + 0x128);
    puVar7[2] = *(undefined4 *)(in_stack_00000028 + 300);
    fVar1 = *(float *)(in_stack_00000028 + 0xf8);
    fVar2 = *(float *)(in_stack_00000028 + 0xfc);
    fVar3 = *(float *)(in_stack_00000028 + 300);
    fVar4 = *(float *)(in_stack_00000028 + 0x128);
    fVar12 = *(float *)(in_stack_00000028 + 0x124);
    fVar13 = *(float *)(in_stack_00000028 + 0xf4);
    puVar7[4] = fVar1 * fVar3 - fVar2 * fVar4;
    puVar7[5] = fVar2 * fVar12 - fVar3 * fVar13;
    puVar7[6] = fVar4 * fVar13 - fVar1 * fVar12;
    puVar7[3] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    puVar7[10] = 0;
    *(undefined8 *)(puVar7 + 0xc) = 0;
    puVar7[0xe] = 0;
    puVar7[0xb] = 0xff7fffff;
    puVar7[0xf] = 0x7f7fffff;
    puVar7[7] = *(undefined4 *)(in_stack_00000028 + 0x14c);
    puVar7[0x11] = 0x447a0000;
    *(undefined2 *)(puVar7 + 0x13) = 3;
  }
  if (*(char *)(in_stack_00000028 + 0x15a) != '\0') {
    puVar7 = (undefined4 *)(uVar5 * 0x50 + param_1);
    uVar5 = (ulonglong)((int)uVar5 + 1);
    *puVar7 = *(undefined4 *)(in_stack_00000028 + 0x130);
    puVar7[1] = *(undefined4 *)(in_stack_00000028 + 0x134);
    puVar7[2] = *(undefined4 *)(in_stack_00000028 + 0x138);
    fVar1 = *(float *)(in_stack_00000028 + 0x104);
    fVar2 = *(float *)(in_stack_00000028 + 0x108);
    fVar3 = *(float *)(in_stack_00000028 + 0x138);
    fVar4 = *(float *)(in_stack_00000028 + 0x134);
    fVar12 = *(float *)(in_stack_00000028 + 0x130);
    fVar13 = *(float *)(in_stack_00000028 + 0x100);
    puVar7[4] = fVar1 * fVar3 - fVar2 * fVar4;
    puVar7[5] = fVar2 * fVar12 - fVar3 * fVar13;
    puVar7[6] = fVar4 * fVar13 - fVar1 * fVar12;
    puVar7[3] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    puVar7[10] = 0;
    *(undefined8 *)(puVar7 + 0xc) = 0;
    puVar7[0xe] = 0;
    puVar7[0xb] = 0xff7fffff;
    puVar7[0xf] = 0x7f7fffff;
    puVar7[7] = *(undefined4 *)(in_stack_00000028 + 0x150);
    puVar7[0x11] = 0x447a0000;
    *(undefined2 *)(puVar7 + 0x13) = 3;
  }
  if (*(char *)(in_stack_00000028 + 0x15b) != '\0') {
    puVar7 = (undefined4 *)(uVar5 * 0x50 + param_1);
    *puVar7 = *(undefined4 *)(in_stack_00000028 + 0x13c);
    puVar7[1] = *(undefined4 *)(in_stack_00000028 + 0x140);
    puVar7[2] = *(undefined4 *)(in_stack_00000028 + 0x144);
    uVar5 = (ulonglong)((int)uVar5 + 1);
    fVar1 = *(float *)(in_stack_00000028 + 0x110);
    fVar2 = *(float *)(in_stack_00000028 + 0x114);
    fVar3 = *(float *)(in_stack_00000028 + 0x144);
    fVar4 = *(float *)(in_stack_00000028 + 0x140);
    fVar12 = *(float *)(in_stack_00000028 + 0x13c);
    fVar13 = *(float *)(in_stack_00000028 + 0x10c);
    puVar7[4] = fVar1 * fVar3 - fVar2 * fVar4;
    puVar7[5] = fVar2 * fVar12 - fVar3 * fVar13;
    puVar7[6] = fVar4 * fVar13 - fVar1 * fVar12;
    puVar7[3] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    puVar7[10] = 0;
    *(undefined8 *)(puVar7 + 0xc) = 0;
    puVar7[0xe] = 0;
    puVar7[0xb] = 0xff7fffff;
    puVar7[0xf] = 0x7f7fffff;
    puVar7[7] = *(undefined4 *)(in_stack_00000028 + 0x154);
    puVar7[0x11] = 0x447a0000;
    *(undefined2 *)(puVar7 + 0x13) = 3;
  }
  return uVar5;
}



// FUNCTION 143971eb0 allocate body=141 status=ok
// SIG undefined allocate(void)

longlong physx::PxVehicleWheelsSimData::allocate(int param_1)

{
  PxAllocatorCallback *pPVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = (param_1 + 3U >> 2) * 0x3d0 + 0x60;
  if (iVar3 == 0) {
    lVar2 = 0;
  }
  else {
    pPVar1 = physx::shdfnd::getAllocator();
    lVar2 = (**(code **)(*(longlong *)pPVar1 + 8))
                      (pPVar1,iVar3,"NonTrackedAlloc",
                       "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleWheels.cpp"
                       ,0x86);
  }
  *(longlong *)(lVar2 + 0x20) = lVar2 + 0x60;
  *(ulonglong *)(lVar2 + 0x30) = (ulonglong)(param_1 + 3U >> 2) * 0x3b0 + lVar2 + 0x60;
  PxVehicleWheelsSimData(lVar2,param_1);
  return lVar2;
}



// FUNCTION 143971f50 setChassisMass body=239 status=ok
// SIG undefined setChassisMass(void)

void physx::PxVehicleWheelsSimData::setChassisMass(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  float local_68;
  float fStack_64;
  undefined8 uStack_60;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar4 = 0;
  param_2 = (1.0 / (float)*(uint *)(param_1 + 0x2c)) * param_2;
  if (*(uint *)(param_1 + 0x2c) != 0) {
    do {
      lVar5 = (ulonglong)(uVar4 >> 2) * 0x3b0;
      lVar3 = (ulonglong)(uVar4 & 3) * 0x30 + *(longlong *)(param_1 + 0x20);
      uStack_60 = *(undefined8 *)(lVar3 + lVar5 + 8);
      lVar1 = lVar3 + 0x10 + lVar5;
      uStack_54 = *(undefined4 *)(lVar1 + 4);
      uStack_50 = *(undefined4 *)(lVar1 + 8);
      uStack_4c = *(undefined4 *)(lVar1 + 0xc);
      puVar2 = (undefined4 *)(lVar3 + 0x20 + lVar5);
      local_48 = *puVar2;
      uStack_44 = puVar2[1];
      uStack_40 = puVar2[2];
      uStack_3c = puVar2[3];
      _local_68 = CONCAT44(param_2 * 11.9784,param_2 * 93.3156);
      local_58 = param_2;
      PxVehicleWheels4SimData::setSuspensionData
                (*(longlong *)(param_1 + 0x20) + lVar5,uVar4 & 3,&local_68);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x2c));
  }
  return;
}



// FUNCTION 143972050 free body=33 status=ok
// SIG void free(void * _Memory)

void __cdecl physx::PxVehicleWheelsSimData::free(void *_Memory)

{
  PxAllocatorCallback *pPVar1;
  
  pPVar1 = physx::shdfnd::getAllocator();
                    /* WARNING: Could not recover jumptable at 0x00014397206d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pPVar1 + 0x10))(pPVar1,_Memory);
  return;
}



// FUNCTION 143972080 operator= body=178 status=ok
// SIG undefined operator=(void)

undefined8 * physx::PxVehicleWheelsSimData::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar5 = 0;
  if (*(int *)(param_2 + 5) != 0) {
    do {
      PxVehicleWheels4SimData::operator=
                (param_1[4] + (ulonglong)uVar5 * 0x3b0,param_2[4] + (ulonglong)uVar5 * 0x3b0);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 5));
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (*(int *)((longlong)param_2 + 0x3c) != 0) {
    do {
      uVar4 = (ulonglong)uVar6;
      uVar6 = uVar6 + 1;
      puVar1 = (undefined8 *)(param_2[6] + uVar4 * 0x10);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1[6] + uVar4 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
    } while (uVar6 < *(uint *)((longlong)param_2 + 0x3c));
  }
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 143972140 copy body=539 status=ok
// SIG undefined copy(void)

void physx::PxVehicleWheelsSimData::copy
               (longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  
  lVar6 = (ulonglong)(param_3 >> 2) * 0x3b0;
  uVar8 = param_4 & 3;
  uVar3 = (ulonglong)(param_3 & 3);
  lVar4 = (ulonglong)(param_4 >> 2) * 0x3b0;
  lVar5 = uVar3 * 0x30 + lVar6;
  PxVehicleWheels4SimData::setSuspensionData
            (lVar4 + *(longlong *)(param_1 + 0x20),uVar8,*(longlong *)(param_2 + 0x20) + lVar5);
  PxVehicleWheels4SimData::setWheelData
            (*(longlong *)(param_1 + 0x20) + lVar4,uVar8,
             *(longlong *)(param_2 + 0x20) + 0xc0 + lVar5);
  PxVehicleWheels4SimData::setTireData
            (*(longlong *)(param_1 + 0x20) + lVar4,uVar8,
             (uVar3 + 6) * 0x40 + *(longlong *)(param_2 + 0x20) + lVar6);
  lVar5 = lVar6 + uVar3 * 0xc;
  PxVehicleWheels4SimData::setSuspTravelDirection
            (lVar4 + *(longlong *)(param_1 + 0x20),uVar8,
             *(longlong *)(param_2 + 0x20) + 0x280 + lVar5);
  PxVehicleWheels4SimData::setSuspForceAppPointOffset
            (lVar4 + *(longlong *)(param_1 + 0x20),uVar8,
             *(longlong *)(param_2 + 0x20) + 0x2b0 + lVar5);
  PxVehicleWheels4SimData::setTireForceAppPointOffset
            (lVar4 + *(longlong *)(param_1 + 0x20),uVar8,
             *(longlong *)(param_2 + 0x20) + 0x2e0 + lVar5);
  PxVehicleWheels4SimData::setWheelCentreOffset
            (lVar4 + *(longlong *)(param_1 + 0x20),uVar8,
             *(longlong *)(param_2 + 0x20) + 0x310 + lVar5);
  bVar2 = *(byte *)((ulonglong)(param_3 & 3) + 0x3a0 + *(longlong *)(param_2 + 0x20) + lVar6);
  if (bVar2 == 0xff) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (ulonglong)bVar2;
  }
  PxVehicleWheels4SimData::setWheelShapeMapping(*(longlong *)(param_1 + 0x20) + lVar4,uVar8,uVar7);
  PxVehicleWheels4SimData::setSceneQueryFilterData
            (*(longlong *)(param_1 + 0x20) + lVar4,uVar8,
             (uVar3 + (ulonglong)(param_3 >> 2) * 0x3b + 0x36) * 0x10 +
             *(longlong *)(param_2 + 0x20));
  if ((*(uint *)(param_2 + 0x40 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) == 0) {
    puVar1 = (uint *)(param_1 + 0x40 + (ulonglong)(param_4 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)param_4 & 0x1f));
  }
  else {
    puVar1 = (uint *)(param_1 + 0x40 + (ulonglong)(param_4 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_4 & 0x1f);
  }
  return;
}



// FUNCTION 143972370 getSuspensionData body=36 status=ok
// SIG undefined getSuspensionData(void)

longlong physx::PxVehicleWheelsSimData::getSuspensionData(longlong param_1,uint param_2)

{
  return (ulonglong)(param_2 >> 2) * 0x3b0 + (ulonglong)(param_2 & 3) * 0x30 +
         *(longlong *)(param_1 + 0x20);
}



// FUNCTION 1439723a0 getWheelData body=40 status=ok
// SIG undefined getWheelData(void)

longlong physx::PxVehicleWheelsSimData::getWheelData(longlong param_1,uint param_2)

{
  return (ulonglong)(param_2 >> 2) * 0x3b0 + ((ulonglong)(param_2 & 3) + 4) * 0x30 +
         *(longlong *)(param_1 + 0x20);
}



// FUNCTION 1439723d0 getTireData body=36 status=ok
// SIG undefined getTireData(void)

longlong physx::PxVehicleWheelsSimData::getTireData(longlong param_1,uint param_2)

{
  return (ulonglong)(param_2 >> 2) * 0x3b0 + ((ulonglong)(param_2 & 3) + 6) * 0x40 +
         *(longlong *)(param_1 + 0x20);
}



// FUNCTION 143972400 getSuspTravelDirection body=42 status=ok
// SIG undefined getSuspTravelDirection(void)

longlong physx::PxVehicleWheelsSimData::getSuspTravelDirection(longlong param_1,uint param_2)

{
  return *(longlong *)(param_1 + 0x20) + 0x280 +
         (ulonglong)(param_2 >> 2) * 0x3b0 + (ulonglong)(param_2 & 3) * 0xc;
}



// FUNCTION 143972430 getSuspForceAppPointOffset body=42 status=ok
// SIG undefined getSuspForceAppPointOffset(void)

longlong physx::PxVehicleWheelsSimData::getSuspForceAppPointOffset(longlong param_1,uint param_2)

{
  return *(longlong *)(param_1 + 0x20) + 0x2b0 +
         (ulonglong)(param_2 >> 2) * 0x3b0 + (ulonglong)(param_2 & 3) * 0xc;
}



// FUNCTION 143972460 getTireForceAppPointOffset body=42 status=ok
// SIG undefined getTireForceAppPointOffset(void)

longlong physx::PxVehicleWheelsSimData::getTireForceAppPointOffset(longlong param_1,uint param_2)

{
  return *(longlong *)(param_1 + 0x20) + 0x2e0 +
         (ulonglong)(param_2 >> 2) * 0x3b0 + (ulonglong)(param_2 & 3) * 0xc;
}



// FUNCTION 143972490 getWheelCentreOffset body=42 status=ok
// SIG undefined getWheelCentreOffset(void)

longlong physx::PxVehicleWheelsSimData::getWheelCentreOffset(longlong param_1,uint param_2)

{
  return *(longlong *)(param_1 + 0x20) + 0x310 +
         (ulonglong)(param_2 >> 2) * 0x3b0 + (ulonglong)(param_2 & 3) * 0xc;
}



// FUNCTION 1439724c0 getWheelShapeMapping body=46 status=ok
// SIG undefined getWheelShapeMapping(void)

ulonglong physx::PxVehicleWheelsSimData::getWheelShapeMapping(longlong param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)((ulonglong)(param_2 & 3) + 0x3a0 +
                   (ulonglong)(param_2 >> 2) * 0x3b0 + *(longlong *)(param_1 + 0x20));
  if (bVar1 != 0xff) {
    return (ulonglong)bVar1;
  }
  return 0xffffffff;
}



// FUNCTION 143972500 getSceneQueryFilterData body=33 status=ok
// SIG undefined getSceneQueryFilterData(void)

longlong physx::PxVehicleWheelsSimData::getSceneQueryFilterData(longlong param_1,uint param_2)

{
  return ((ulonglong)(param_2 & 3) + 0x36 + (ulonglong)(param_2 >> 2) * 0x3b) * 0x10 +
         *(longlong *)(param_1 + 0x20);
}



// FUNCTION 143972530 getAntiRollBarData body=11 status=ok
// SIG undefined getAntiRollBarData(void)

longlong physx::PxVehicleWheelsSimData::getAntiRollBarData(longlong param_1,uint param_2)

{
  return (ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 0x30);
}



// FUNCTION 143972550 setSuspensionData body=35 status=ok
// SIG undefined setSuspensionData(void)

void physx::PxVehicleWheelsSimData::setSuspensionData(longlong param_1,uint param_2)

{
  PxVehicleWheels4SimData::setSuspensionData
            ((ulonglong)(param_2 >> 2) * 0x3b0 + *(longlong *)(param_1 + 0x20),param_2 & 3);
  return;
}



// FUNCTION 143972580 setWheelData body=35 status=ok
// SIG undefined setWheelData(void)

void physx::PxVehicleWheelsSimData::setWheelData(longlong param_1,uint param_2)

{
  PxVehicleWheels4SimData::setWheelData
            ((ulonglong)(param_2 >> 2) * 0x3b0 + *(longlong *)(param_1 + 0x20),param_2 & 3);
  return;
}



// FUNCTION 1439725b0 setTireData body=35 status=ok
// SIG undefined setTireData(void)

void physx::PxVehicleWheelsSimData::setTireData(longlong param_1,uint param_2)

{
  PxVehicleWheels4SimData::setTireData
            ((ulonglong)(param_2 >> 2) * 0x3b0 + *(longlong *)(param_1 + 0x20),param_2 & 3);
  return;
}



// FUNCTION 1439725e0 setSuspTravelDirection body=35 status=ok
// SIG undefined setSuspTravelDirection(void)

void physx::PxVehicleWheelsSimData::setSuspTravelDirection(longlong param_1,uint param_2)

{
  PxVehicleWheels4SimData::setSuspTravelDirection
            ((ulonglong)(param_2 >> 2) * 0x3b0 + *(longlong *)(param_1 + 0x20),param_2 & 3);
  return;
}



// FUNCTION 143972610 setSuspForceAppPointOffset body=35 status=ok
// SIG undefined setSuspForceAppPointOffset(void)

void physx::PxVehicleWheelsSimData::setSuspForceAppPointOffset(longlong param_1,uint param_2)

{
  PxVehicleWheels4SimData::setSuspForceAppPointOffset
            ((ulonglong)(param_2 >> 2) * 0x3b0 + *(longlong *)(param_1 + 0x20),param_2 & 3);
  return;
}



// FUNCTION 143972640 setTireForceAppPointOffset body=35 status=ok
// SIG undefined setTireForceAppPointOffset(void)

void physx::PxVehicleWheelsSimData::setTireForceAppPointOffset(longlong param_1,uint param_2)

{
  PxVehicleWheels4SimData::setTireForceAppPointOffset
            ((ulonglong)(param_2 >> 2) * 0x3b0 + *(longlong *)(param_1 + 0x20),param_2 & 3);
  return;
}



// FUNCTION 143972670 setWheelCentreOffset body=35 status=ok
// SIG undefined setWheelCentreOffset(void)

void physx::PxVehicleWheelsSimData::setWheelCentreOffset(longlong param_1,uint param_2)

{
  PxVehicleWheels4SimData::setWheelCentreOffset
            ((ulonglong)(param_2 >> 2) * 0x3b0 + *(longlong *)(param_1 + 0x20),param_2 & 3);
  return;
}



// FUNCTION 1439726a0 setWheelShapeMapping body=35 status=ok
// SIG undefined setWheelShapeMapping(void)

void physx::PxVehicleWheelsSimData::setWheelShapeMapping(longlong param_1,uint param_2)

{
  PxVehicleWheels4SimData::setWheelShapeMapping
            ((ulonglong)(param_2 >> 2) * 0x3b0 + *(longlong *)(param_1 + 0x20),param_2 & 3);
  return;
}



// FUNCTION 1439726d0 setSceneQueryFilterData body=35 status=ok
// SIG undefined setSceneQueryFilterData(void)

void physx::PxVehicleWheelsSimData::setSceneQueryFilterData(longlong param_1,uint param_2)

{
  PxVehicleWheels4SimData::setSceneQueryFilterData
            ((ulonglong)(param_2 >> 2) * 0x3b0 + *(longlong *)(param_1 + 0x20),param_2 & 3);
  return;
}



// FUNCTION 143972700 setTireLoadFilterData body=41 status=ok
// SIG undefined setTireLoadFilterData(void)

void physx::PxVehicleWheelsSimData::setTireLoadFilterData(float *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 4) = param_2[2];
  *(undefined8 *)(param_1 + 6) = uVar1;
  param_1[4] = 1.0 / (param_1[2] - *param_1);
  return;
}



// FUNCTION 143972730 addAntiRollBarData body=144 status=ok
// SIG undefined addAntiRollBarData(void)

ulonglong physx::PxVehicleWheelsSimData::addAntiRollBarData(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x3c);
  uVar7 = 0;
  if (uVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    do {
      iVar3 = *(int *)(lVar4 + uVar7 * 0x10);
      if (((iVar3 == *param_2) && (*(int *)(lVar4 + 4 + uVar7 * 0x10) == param_2[1])) ||
         ((*(int *)(lVar4 + 4 + uVar7 * 0x10) == *param_2 && (iVar3 == param_2[1])))) {
        *(int *)(lVar4 + 8 + uVar7 * 0x10) = param_2[2];
        return uVar7;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar2);
  }
  uVar5 = *(undefined8 *)(param_2 + 2);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar2 * 0x10);
  *puVar1 = *(undefined8 *)param_2;
  puVar1[1] = uVar5;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return (ulonglong)uVar2;
}



// FUNCTION 1439727d0 disableWheel body=30 status=ok
// SIG undefined disableWheel(void)

void physx::PxVehicleWheelsSimData::disableWheel(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + ((param_2 & 0xffffffff) >> 5) * 4 + 0x40);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_2 & 0x1f));
  return;
}



// FUNCTION 143972830 getIsWheelDisabled body=26 status=ok
// SIG undefined getIsWheelDisabled(void)

undefined4 physx::PxVehicleWheelsSimData::getIsWheelDisabled(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x40 + (ulonglong)(param_2 >> 5) * 4);
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_2 & 0x1f) & 1) == 0);
}



// FUNCTION 143972850 setSubStepCount body=14 status=ok
// SIG undefined setSubStepCount(void)

void physx::PxVehicleWheelsSimData::setSubStepCount
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  *(undefined4 *)(param_1 + 0x4c) = param_4;
  return;
}



// FUNCTION 143972870 FUN_143972870 body=6 status=ok
// SIG undefined FUN_143972870(void)

void FUN_143972870(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



// FUNCTION 143972880 isValid body=204 status=ok
// SIG undefined isValid(void)

undefined8 physx::PxVehicleWheelsSimData::isValid(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x28) != 1) {
    do {
      lVar2 = (ulonglong)uVar3 * 0x3b0;
      PxVehicleWheels4SimData::isValid(*(longlong *)(param_1 + 0x20) + lVar2,0);
      PxVehicleWheels4SimData::isValid(*(longlong *)(param_1 + 0x20) + lVar2,1);
      PxVehicleWheels4SimData::isValid(*(longlong *)(param_1 + 0x20) + lVar2,2);
      PxVehicleWheels4SimData::isValid(*(longlong *)(param_1 + 0x20) + lVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(int *)(param_1 + 0x28) - 1U);
  }
  uVar3 = *(int *)(param_1 + 0x2c) + (1 - *(int *)(param_1 + 0x28)) * 4;
  if (uVar3 != 0) {
    do {
      PxVehicleWheels4SimData::isValid
                ((ulonglong)(*(int *)(param_1 + 0x28) - 1) * 0x3b0 + *(longlong *)(param_1 + 0x20),
                 uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  return 1;
}



// FUNCTION 1439729b0 PxVehicleWheelsSimData body=706 status=ok
// SIG undefined PxVehicleWheelsSimData(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * physx::PxVehicleWheelsSimData::PxVehicleWheelsSimData(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 local_38;
  undefined8 local_30;
  
  param_1[1] = 0x3e6c56d6;
  uVar8 = 0;
  uVar3 = 0;
  *param_1 = 0;
  param_1[2] = 0x40400000;
  param_1[3] = 0x40400000;
  param_1[4] = 0x3eaaaaab;
  uVar9 = (ulonglong)param_2;
  param_1[0xb] = param_2;
  param_1[0xf] = 0;
  uVar2 = param_2 + 3 >> 2;
  param_1[10] = uVar2;
  uVar10 = uVar2 * 2;
  param_1[0xe] = uVar10;
  if (uVar2 != 0) {
    uVar7 = (ulonglong)uVar2;
    uVar6 = uVar8;
    do {
      if (*(longlong *)(param_1 + 8) + uVar6 != 0) {
        PxVehicleWheels4SimData::PxVehicleWheels4SimData();
      }
      uVar6 = uVar6 + 0x3b0;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (3 < uVar10) {
    uVar3 = (uVar10 - 4 >> 2) + 1;
    uVar7 = (ulonglong)uVar3;
    uVar3 = uVar3 * 4;
    uVar6 = uVar8;
    do {
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xc) + uVar6);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 1) = 0;
      }
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x10 + uVar6);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 1) = 0;
      }
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x20 + uVar6);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 1) = 0;
      }
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x30 + uVar6);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 1) = 0;
      }
      uVar6 = uVar6 + 0x40;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (uVar3 < uVar10) {
    lVar5 = (ulonglong)uVar3 << 4;
    uVar6 = (ulonglong)(uVar10 - uVar3);
    do {
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xc) + lVar5);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 1) = 0;
      }
      lVar5 = lVar5 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0x3e6c56d6;
  param_1[2] = 0x40400000;
  param_1[3] = 0x40400000;
  param_1[4] = 0x3eaaaaab;
  param_1[0x10] = 0;
  if (param_2 != 0) {
    uVar10 = 1;
    uVar6 = uVar8;
    do {
      uVar3 = (uint)uVar6 & 3;
      param_1[(uVar8 >> 5) + 0x10] = param_1[(uVar8 >> 5) + 0x10] | uVar10;
      lVar5 = (uVar8 >> 2) * 0x3b0;
      PxVehicleWheels4SimData::setWheelShapeMapping(*(longlong *)(param_1 + 8) + lVar5,uVar3,uVar6);
      local_30 = 0;
      local_38 = 0;
      PxVehicleWheels4SimData::setSceneQueryFilterData
                (*(longlong *)(param_1 + 8) + lVar5,uVar3,&local_38);
      uVar3 = (uint)uVar6 + 1;
      uVar6 = (ulonglong)uVar3;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      uVar8 = uVar8 + 1;
    } while (uVar3 < param_2);
  }
  if (param_2 < uVar2 * 4) {
    bVar1 = (byte)param_2 & 0x1f;
    uVar10 = 1 << bVar1 | 1U >> 0x20 - bVar1;
    uVar8 = uVar9;
    do {
      uVar3 = (uint)uVar9 & 3;
      param_1[(uVar8 >> 5) + 0x10] = param_1[(uVar8 >> 5) + 0x10] & ~uVar10;
      lVar5 = (uVar8 >> 2) * 0x3b0;
      PxVehicleWheels4SimData::setWheelShapeMapping
                (*(longlong *)(param_1 + 8) + lVar5,uVar3,0xffffffff);
      local_30 = 0;
      local_38 = 0;
      PxVehicleWheels4SimData::setSceneQueryFilterData(*(longlong *)(param_1 + 8) + lVar5,uVar3);
      uVar3 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar3;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      uVar8 = uVar8 + 1;
    } while (uVar3 < uVar2 * 4);
  }
  param_1[0x11] = DAT_146b95e20 * _DAT_14682e330;
  param_1[0x12] = DAT_14682e334;
  param_1[0x13] = DAT_14682e338;
  param_1[0x14] = DAT_14682e33c * DAT_146b95e20;
  return param_1;
}



// FUNCTION 143972c90 setToRestState body=219 status=ok
// SIG undefined setToRestState(void)

void physx::PxVehicleWheelsDynData::setToRestState(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(uint *)(param_1 + 3) != 0) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 3);
    lVar3 = 0;
    do {
      lVar1 = *param_1;
      *(undefined8 *)(lVar3 + lVar1) = 0;
      *(undefined8 *)(lVar3 + 0x10 + lVar1) = 0;
      *(undefined8 *)(lVar3 + 0x20 + lVar1) = 0;
      *(undefined8 *)(lVar3 + 0x30 + lVar1) = 0;
      *(undefined8 *)(lVar3 + 0x40 + lVar1) = 0;
      *(undefined4 *)(lVar3 + 0x50 + lVar1) = 0x7f7fffff;
      *(undefined4 *)(lVar3 + 0x54 + lVar1) = 0x7f7fffff;
      *(undefined8 *)(lVar3 + 8 + lVar1) = 0;
      *(undefined8 *)(lVar3 + 0x18 + lVar1) = 0;
      *(undefined8 *)(lVar3 + 0x28 + lVar1) = 0;
      *(undefined8 *)(lVar3 + 0x38 + lVar1) = 0;
      *(undefined8 *)(lVar3 + 0x48 + lVar1) = 0;
      *(undefined4 *)(lVar3 + 0x58 + lVar1) = 0x7f7fffff;
      *(undefined4 *)(lVar3 + 0x5c + lVar1) = 0x7f7fffff;
      ::_guard_xfg_dispatch_icall_nop((void *)(lVar1 + 0x60 + lVar3),0,0x170);
      *(undefined8 *)(lVar3 + 0x1d8 + lVar1) = 0;
      *(undefined8 *)(lVar3 + 0x1e0 + lVar1) = 0;
      *(undefined1 *)(lVar3 + 0x1e8 + lVar1) = 0;
      lVar3 = lVar3 + 0x220;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 143972d80 setTireForceShaderFunction body=9 status=ok
// SIG undefined setTireForceShaderFunction(void)

void physx::PxVehicleWheelsDynData::setTireForceShaderFunction(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_2;
  return;
}



// FUNCTION 143972d90 FUN_143972d90 body=9 status=ok
// SIG undefined FUN_143972d90(void)

void FUN_143972d90(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_2;
  return;
}



// FUNCTION 143972da0 setTireForceShaderData body=15 status=ok
// SIG undefined setTireForceShaderData(void)

void physx::PxVehicleWheelsDynData::setTireForceShaderData
               (longlong param_1,uint param_2,undefined8 param_3)

{
  *(undefined8 *)(**(longlong **)(param_1 + 8) + (ulonglong)param_2 * 8) = param_3;
  return;
}



// FUNCTION 143972de0 setWheelRotationSpeed body=37 status=ok
// SIG undefined setWheelRotationSpeed(void)

void physx::PxVehicleWheelsDynData::setWheelRotationSpeed
               (longlong *param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)(param_2 >> 2) * 0x220 + *param_1;
  *(undefined4 *)(lVar1 + (ulonglong)(param_2 & 3) * 4) = param_3;
  *(undefined4 *)(lVar1 + 0x10 + (ulonglong)(param_2 & 3) * 4) = param_3;
  return;
}



// FUNCTION 143972e10 getWheelRotationSpeed body=33 status=ok
// SIG undefined getWheelRotationSpeed(void)

undefined4 physx::PxVehicleWheelsDynData::getWheelRotationSpeed(longlong *param_1,uint param_2)

{
  return *(undefined4 *)
          (*param_1 + 0x10 + ((ulonglong)(param_2 >> 2) * 0x88 + (ulonglong)(param_2 & 3)) * 4);
}



// FUNCTION 143972e70 getWheelRotationAngle body=33 status=ok
// SIG undefined getWheelRotationAngle(void)

undefined4 physx::PxVehicleWheelsDynData::getWheelRotationAngle(longlong *param_1,uint param_2)

{
  return *(undefined4 *)
          (*param_1 + 0x20 + ((ulonglong)(param_2 >> 2) * 0x88 + (ulonglong)(param_2 & 3)) * 4);
}



// FUNCTION 143972ee0 copy body=559 status=ok
// SIG undefined copy(void)

void physx::PxVehicleWheelsDynData::copy
               (longlong *param_1,longlong *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = (ulonglong)(param_3 >> 2) * 0x220 + *param_2;
  uVar5 = (ulonglong)(param_3 & 3);
  lVar8 = (ulonglong)(param_4 >> 2) * 0x220 + *param_1;
  uVar6 = (ulonglong)(param_4 & 3);
  *(undefined4 *)(lVar8 + uVar6 * 4) = *(undefined4 *)(lVar7 + uVar5 * 4);
  *(undefined4 *)(lVar8 + 0x10 + uVar6 * 4) = *(undefined4 *)(lVar7 + 0x10 + uVar5 * 4);
  *(undefined4 *)(lVar8 + 0x30 + uVar6 * 4) = *(undefined4 *)(lVar7 + 0x30 + uVar5 * 4);
  *(undefined4 *)(lVar8 + 0x40 + uVar6 * 4) = *(undefined4 *)(lVar7 + 0x40 + uVar5 * 4);
  *(undefined4 *)(lVar8 + 0x20 + uVar6 * 4) = *(undefined4 *)(lVar7 + 0x20 + uVar5 * 4);
  if (*(longlong *)(lVar7 + 0x1d8) != 0) {
    *(undefined4 *)(lVar8 + 0x60 + uVar6 * 0xc) = *(undefined4 *)(lVar7 + 0x60 + uVar5 * 0xc);
    *(undefined4 *)(lVar8 + 100 + uVar6 * 0xc) = *(undefined4 *)(lVar7 + 100 + uVar5 * 0xc);
    *(undefined4 *)(lVar8 + 0x68 + uVar6 * 0xc) = *(undefined4 *)(lVar7 + 0x68 + uVar5 * 0xc);
    *(undefined4 *)(lVar8 + 0x90 + uVar6 * 0xc) = *(undefined4 *)(lVar7 + 0x90 + uVar5 * 0xc);
    *(undefined4 *)(lVar8 + 0x94 + uVar6 * 0xc) = *(undefined4 *)(lVar7 + 0x94 + uVar5 * 0xc);
    *(undefined4 *)(lVar8 + 0x98 + uVar6 * 0xc) = *(undefined4 *)(lVar7 + 0x98 + uVar5 * 0xc);
    *(undefined4 *)(lVar8 + 0xc0 + uVar6 * 4) = *(undefined4 *)(lVar7 + 0xc0 + uVar5 * 4);
    return;
  }
  uVar5 = (ulonglong)(param_3 & 3);
  uVar6 = (ulonglong)(param_4 & 3);
  if (*(longlong *)(lVar7 + 0x1e0) != 0) {
    lVar3 = uVar5 * 0x1c;
    lVar1 = uVar6 * 0x1c;
    *(undefined4 *)(lVar1 + 0x120 + lVar8) = *(undefined4 *)(lVar3 + 0x120 + lVar7);
    *(undefined4 *)(lVar1 + 0x124 + lVar8) = *(undefined4 *)(lVar3 + 0x124 + lVar7);
    *(undefined4 *)(lVar1 + 0x128 + lVar8) = *(undefined4 *)(lVar3 + 0x128 + lVar7);
    *(undefined4 *)(lVar1 + 300 + lVar8) = *(undefined4 *)(lVar3 + 300 + lVar7);
    *(undefined4 *)(lVar1 + 0x130 + lVar8) = *(undefined4 *)(lVar3 + 0x130 + lVar7);
    *(undefined4 *)(lVar1 + 0x134 + lVar8) = *(undefined4 *)(lVar3 + 0x134 + lVar7);
    *(undefined4 *)(lVar1 + 0x138 + lVar8) = *(undefined4 *)(lVar3 + 0x138 + lVar7);
    *(undefined4 *)(lVar8 + 400 + uVar6 * 0xc) = *(undefined4 *)(lVar7 + 400 + uVar5 * 0xc);
    *(undefined4 *)(lVar8 + 0x194 + uVar6 * 0xc) = *(undefined4 *)(lVar7 + 0x194 + uVar5 * 0xc);
    *(undefined4 *)(lVar8 + 0x198 + uVar6 * 0xc) = *(undefined4 *)(lVar7 + 0x198 + uVar5 * 0xc);
    *(undefined4 *)(lVar8 + 0x1c0 + uVar6 * 4) = *(undefined4 *)(lVar7 + 0x1c0 + uVar5 * 4);
    return;
  }
  puVar4 = (undefined4 *)(uVar5 * 0x10 + lVar7 + 0x60);
  puVar2 = (undefined4 *)(uVar6 * 0x10 + lVar8 + 0x60);
  *puVar2 = *puVar4;
  puVar2[1] = puVar4[1];
  puVar2[2] = puVar4[2];
  puVar2[3] = puVar4[3];
  *(undefined4 *)(lVar8 + 0xa0 + uVar6 * 4) = *(undefined4 *)(lVar7 + 0xa0 + uVar5 * 4);
  *(undefined2 *)(lVar8 + 0xc0 + uVar6 * 2) = *(undefined2 *)(lVar7 + 0xc0 + uVar5 * 2);
  *(undefined4 *)(lVar8 + 0xb0 + uVar6 * 4) = *(undefined4 *)(lVar7 + 0xb0 + uVar5 * 4);
  return;
}



// FUNCTION 143973150 FUN_143973150 body=126 status=ok
// SIG undefined FUN_143973150(void)

void FUN_143973150(int param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *param_2 = param_3;
  uVar4 = param_1 + 3U >> 2;
  uVar5 = (ulonglong)uVar4;
  param_3 = uVar5 * 0x220 + param_3;
  param_2[1] = param_3;
  param_3 = param_3 + 0x20;
  *(longlong *)param_2[1] = param_3;
  lVar2 = (ulonglong)uVar4 * 0x20;
  param_3 = param_3 + lVar2;
  param_2[2] = param_3;
  puVar1 = (undefined8 *)(param_3 + lVar2);
  if (param_1 + 3U >> 2 != 0) {
    lVar2 = 0;
    do {
      if (puVar1 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        *puVar1 = &PTR_GetAddress_145ca7150;
        puVar3 = puVar1;
      }
      puVar1 = puVar1 + 0x30;
      *(undefined8 **)(lVar2 + 0x1d0 + *param_2) = puVar3;
      lVar2 = lVar2 + 0x220;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1439731e0 FUN_1439731e0 body=495 status=ok
// SIG undefined FUN_1439731e0(void)

longlong * FUN_1439731e0(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = 0;
  *(int *)((longlong)param_1 + 0x1c) = param_2;
  uVar11 = param_2 + 3U >> 2;
  *(uint *)(param_1 + 3) = uVar11;
  if (param_2 + 3U >> 2 != 0) {
    uVar4 = (ulonglong)uVar11;
    uVar5 = uVar3;
    do {
      puVar6 = (undefined8 *)(*param_1 + uVar5);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        puVar6[2] = 0;
        puVar6[4] = 0;
        puVar6[6] = 0;
        puVar6[8] = 0;
        *(undefined4 *)(puVar6 + 10) = 0x7f7fffff;
        *(undefined4 *)((longlong)puVar6 + 0x54) = 0x7f7fffff;
        puVar6[1] = 0;
        puVar6[3] = 0;
        puVar6[5] = 0;
        puVar6[7] = 0;
        puVar6[9] = 0;
        *(undefined4 *)(puVar6 + 0xb) = 0x7f7fffff;
        *(undefined4 *)((longlong)puVar6 + 0x5c) = 0x7f7fffff;
        _guard_xfg_dispatch_icall_nop(puVar6 + 0xc,0,0x170);
        puVar6[0x3b] = 0;
        puVar6[0x3c] = 0;
        *(undefined1 *)(puVar6 + 0x3d) = 0;
      }
      uVar5 = uVar5 + 0x220;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar1 = uVar11 * 4;
  uVar10 = 0;
  if (uVar11 != 0) {
    uVar9 = uVar10;
    if (1 < uVar1) {
      plVar8 = (longlong *)param_1[1];
      plVar7 = (longlong *)*plVar8;
      if (((param_1 + 1 < plVar7) || (plVar7 + (uVar1 - 1) < param_1 + 1)) &&
         ((uVar5 = uVar3, plVar8 < plVar7 || (uVar5 = 0, plVar7 + (uVar1 - 1) < plVar8)))) {
        do {
          uVar9 = (int)uVar5 + 2;
          uVar5 = (ulonglong)uVar9;
        } while (uVar9 < uVar1);
        for (lVar2 = (ulonglong)(uVar1 + 1 >> 1) << 1; lVar2 != 0; lVar2 = lVar2 + -1) {
          *plVar7 = 0;
          plVar7 = plVar7 + 1;
        }
      }
    }
    if (uVar9 < uVar1) {
      uVar5 = (ulonglong)(uVar1 - uVar9);
      lVar2 = (ulonglong)uVar9 * 8;
      do {
        *(undefined8 *)(lVar2 + *(longlong *)param_1[1]) = 0;
        uVar5 = uVar5 - 1;
        lVar2 = lVar2 + 8;
      } while (uVar5 != 0);
    }
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(code **)(lVar2 + 8) = physx::PxVehicleComputeTireForceDefault;
  }
  if (uVar11 != 0) {
    if (1 < uVar1) {
      plVar8 = (longlong *)param_1[2];
      if ((param_1 + 2 < plVar8) || (uVar3 = 0, plVar8 + (uVar1 - 1) < param_1 + 2)) {
        do {
          uVar10 = (int)uVar3 + 2;
          uVar3 = (ulonglong)uVar10;
        } while (uVar10 < uVar1);
        for (lVar2 = (ulonglong)(uVar1 + 1 >> 1) << 1; lVar2 != 0; lVar2 = lVar2 + -1) {
          *plVar8 = 0;
          plVar8 = plVar8 + 1;
        }
      }
    }
    if (uVar10 < uVar1) {
      uVar3 = (ulonglong)(uVar1 - uVar10);
      lVar2 = (ulonglong)uVar10 * 8;
      do {
        *(undefined8 *)(lVar2 + param_1[2]) = 0;
        uVar3 = uVar3 - 1;
        lVar2 = lVar2 + 8;
      } while (uVar3 != 0);
    }
  }
  return param_1;
}



// FUNCTION 1439733e0 FUN_1439733e0 body=469 status=ok
// SIG undefined FUN_1439733e0(void)

float FUN_1439733e0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_c8 [16];
  undefined1 local_b8 [28];
  undefined1 local_9c [148];
  
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0xf0))
                    (*(longlong **)(param_1 + 0xa0),local_b8);
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0xa0))
                    (*(longlong **)(param_1 + 0xa0),local_9c);
  pfVar7 = (float *)physx::PxQuat::operator*(uVar6,local_c8,uVar5);
  fVar1 = pfVar7[3];
  fVar2 = *pfVar7;
  fVar3 = pfVar7[1];
  fVar4 = pfVar7[2];
  fVar11 = DAT_146b95f00 * 2.0;
  fVar12 = DAT_146b95ef8 * 2.0;
  fVar8 = DAT_146b95efc * 2.0;
  fVar10 = fVar1 * fVar1 - 0.5;
  fVar9 = fVar3 * fVar8 + fVar2 * fVar12 + fVar4 * fVar11;
  pfVar7 = (float *)(**(code **)(**(longlong **)(param_1 + 0xa0) + 0x128))
                              (*(longlong **)(param_1 + 0xa0),local_c8);
  return ((fVar4 * fVar12 - fVar2 * fVar11) * fVar1 + fVar10 * fVar8 + fVar3 * fVar9) * pfVar7[1] +
         ((fVar3 * fVar11 - fVar4 * fVar8) * fVar1 + fVar10 * fVar12 + fVar2 * fVar9) * *pfVar7 +
         ((fVar2 * fVar8 - fVar3 * fVar12) * fVar1 + fVar10 * fVar11 + fVar4 * fVar9) * pfVar7[2];
}



// FUNCTION 1439735c0 FUN_1439735c0 body=469 status=ok
// SIG undefined FUN_1439735c0(void)

float FUN_1439735c0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_c8 [16];
  undefined1 local_b8 [28];
  undefined1 local_9c [148];
  
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0xf0))
                    (*(longlong **)(param_1 + 0xa0),local_b8);
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0xa0))
                    (*(longlong **)(param_1 + 0xa0),local_9c);
  pfVar7 = (float *)physx::PxQuat::operator*(uVar6,local_c8,uVar5);
  fVar1 = pfVar7[3];
  fVar2 = *pfVar7;
  fVar3 = pfVar7[1];
  fVar4 = pfVar7[2];
  fVar11 = DAT_146b95f10 * 2.0;
  fVar12 = DAT_146b95f08 * 2.0;
  fVar8 = DAT_146b95f0c * 2.0;
  fVar10 = fVar1 * fVar1 - 0.5;
  fVar9 = fVar3 * fVar8 + fVar2 * fVar12 + fVar4 * fVar11;
  pfVar7 = (float *)(**(code **)(**(longlong **)(param_1 + 0xa0) + 0x128))
                              (*(longlong **)(param_1 + 0xa0),local_c8);
  return ((fVar4 * fVar12 - fVar2 * fVar11) * fVar1 + fVar10 * fVar8 + fVar3 * fVar9) * pfVar7[1] +
         ((fVar3 * fVar11 - fVar4 * fVar8) * fVar1 + fVar10 * fVar12 + fVar2 * fVar9) * *pfVar7 +
         ((fVar2 * fVar8 - fVar3 * fVar12) * fVar1 + fVar10 * fVar11 + fVar4 * fVar9) * pfVar7[2];
}



// FUNCTION 1439737a0 setToRestState body=219 status=ok
// SIG undefined setToRestState(void)

void physx::PxVehicleWheels::setToRestState(longlong param_1)

{
  byte *pbVar1;
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  
  pbVar1 = (byte *)(**(code **)(**(longlong **)(param_1 + 0xa0) + 0x178))
                             (*(longlong **)(param_1 + 0xa0),local_res8);
  if ((*pbVar1 & 1) == 0) {
    local_18 = 0;
    local_10 = 0;
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x130))
              (*(longlong **)(param_1 + 0xa0),&local_18,1);
    local_18 = 0;
    local_10 = 0;
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x140))
              (*(longlong **)(param_1 + 0xa0),&local_18,1);
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x158))(*(longlong **)(param_1 + 0xa0),3);
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x158))(*(longlong **)(param_1 + 0xa0),2);
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x160))(*(longlong **)(param_1 + 0xa0),3);
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x160))(*(longlong **)(param_1 + 0xa0),2);
  }
  PxVehicleWheelsDynData::setToRestState(param_1 + 0x70);
  return;
}



// FUNCTION 1439738a0 FUN_1439738a0 body=16 status=ok
// SIG undefined FUN_1439738a0(void)

int FUN_1439738a0(int param_1)

{
  return (param_1 + 3U >> 2) * 0x7b0 + 0x20;
}



// FUNCTION 1439738c0 patchupPointers body=43 status=ok
// SIG undefined patchupPointers(void)

void physx::PxVehicleWheels::patchupPointers(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  *(longlong *)(param_2 + 0x30) = param_3;
  uVar1 = (ulonglong)((int)param_1 + 3U >> 2);
  param_3 = uVar1 * 0x3b0 + param_3;
  *(longlong *)(param_2 + 0x40) = param_3;
  FUN_143973150(param_1,param_2 + 0x70,param_3 + uVar1 * 0x20);
  return;
}



// FUNCTION 143973900 init body=143 status=ok
// SIG undefined init(void)

void physx::PxVehicleWheels::init(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != -0x10) {
    PxVehicleWheelsSimData::PxVehicleWheelsSimData();
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    FUN_1439731e0(plVar1,param_2);
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      puVar2 = *(undefined8 **)(uVar4 * 0x220 + 0x1d0 + *plVar1);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_GetAddress_145ca7150;
        puVar2[0x2d] = 0;
        puVar2[0x2e] = param_1;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x38));
  }
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1439739a0 free body=90 status=ok
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



// FUNCTION 143973a00 setup body=1333 status=ok
// SIG undefined setup(void)

void physx::PxVehicleWheels::setup
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
  longlong *local_res8;
  longlong *local_res10;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float local_44;
  float local_40;
  
  *(undefined4 *)(param_1 + 0xa8) = param_6;
  local_res10 = param_2;
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
               (**(code **)(*local_res10 + 0xf0))
                         (local_res10,param_3,0,lVar4,
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
                  (*(longlong **)(param_1 + 0xa0),&local_58);
        local_78 = local_58;
        uStack_70 = uStack_50;
        lVar3 = (uVar9 >> 2) * 0x3b0 + (ulonglong)(uVar10 & 3) * 0xc;
        lVar4 = *(longlong *)(param_1 + 0x30);
        local_68 = local_48 + *(float *)(lVar3 + 0x310 + lVar4);
        local_64 = local_44 + *(float *)(lVar3 + 0x314 + lVar4);
        local_60 = local_40 + *(float *)(lVar3 + 0x318 + lVar4);
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0xd0))
                  (*(longlong **)(param_1 + 0xa0),&local_res8,1,uVar8);
        (**(code **)(*local_res8 + 0x88))(local_res8,&local_78);
      }
      uVar9 = (ulonglong)(uVar10 + 1);
    } while (uVar10 + 1 < *(uint *)(param_4 + 0x2c));
  }
  return;
}



// FUNCTION 143973f40 requires body=109 status=ok
// SIG undefined requires(void)

void physx::PxVehicleWheels::requires(longlong param_1,longlong *param_2)

{
  uint uVar1;
  
  (**(code **)(*param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0xa0));
  uVar1 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      (**(code **)(*param_2 + 8))
                (param_2,*(undefined8 *)
                          (*(longlong *)
                            ((ulonglong)uVar1 * 0x220 + 0x1d0 + *(longlong *)(param_1 + 0x70)) +
                          0x168));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 143973fc0 resolveReferences body=251 status=ok
// SIG undefined resolveReferences(void)

void physx::PxVehicleWheels::resolveReferences(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    uVar2 = (**(code **)*param_2)(param_2,0x80000000);
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
  }
  uVar6 = 0;
  uVar5 = uVar6;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      lVar1 = *(longlong *)(uVar5 * 0x220 + 0x1d0 + *(longlong *)(param_1 + 0x70));
      plVar3 = (longlong *)0x0;
      if (*(longlong *)(lVar1 + 0x168) != 0) {
        plVar3 = (longlong *)(**(code **)*param_2)(param_2,0x80000000,*(longlong *)(lVar1 + 0x168));
      }
      (**(code **)(*plVar3 + 0x98))
                (plVar3,lVar1,&PTR_vehicleSuspLimitConstraintSolverPrep_14682e340);
      uVar4 = (int)uVar5 + 1;
      *(longlong **)(lVar1 + 0x168) = plVar3;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    do {
      *(ulonglong *)(**(longlong **)(param_1 + 0x78) + uVar6 * 8) =
           (uVar6 >> 2) * 0x3b0 + ((ulonglong)((uint)uVar6 & 3) + 6) * 0x40 +
           *(longlong *)(param_1 + 0x30);
      uVar4 = (uint)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x3c));
  }
  return;
}



// FUNCTION 1439740c0 operator= body=1330 status=ok
// SIG undefined operator=(void)

undefined8 * physx::PxVehicleWheels4SimData::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  uVar1 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar1;
  uVar1 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar1;
  uVar1 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar1;
  uVar1 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar1;
  uVar1 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar1;
  uVar1 = param_2[0x25];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar1;
  uVar1 = param_2[0x27];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar1;
  uVar1 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar1;
  uVar1 = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar1;
  uVar1 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar1;
  uVar1 = param_2[0x2f];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = uVar1;
  uVar1 = param_2[0x31];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar1;
  uVar1 = param_2[0x33];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = uVar1;
  uVar1 = param_2[0x35];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = uVar1;
  uVar1 = param_2[0x37];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = uVar1;
  uVar1 = param_2[0x39];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = uVar1;
  uVar1 = param_2[0x3b];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = uVar1;
  uVar1 = param_2[0x3d];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = uVar1;
  uVar1 = param_2[0x3f];
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = uVar1;
  uVar1 = param_2[0x41];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = uVar1;
  uVar1 = param_2[0x43];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = uVar1;
  uVar1 = param_2[0x45];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = uVar1;
  uVar1 = param_2[0x47];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = uVar1;
  uVar1 = param_2[0x49];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = uVar1;
  uVar1 = param_2[0x4b];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = uVar1;
  uVar1 = param_2[0x4d];
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4d] = uVar1;
  uVar1 = param_2[0x4f];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x284) = *(undefined4 *)((longlong)param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_2 + 0x51);
  *(undefined4 *)((longlong)param_1 + 0x28c) = *(undefined4 *)((longlong)param_2 + 0x28c);
  *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(param_2 + 0x52);
  *(undefined4 *)((longlong)param_1 + 0x294) = *(undefined4 *)((longlong)param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x53) = *(undefined4 *)(param_2 + 0x53);
  *(undefined4 *)((longlong)param_1 + 0x29c) = *(undefined4 *)((longlong)param_2 + 0x29c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)((longlong)param_1 + 0x2a4) = *(undefined4 *)((longlong)param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x55) = *(undefined4 *)(param_2 + 0x55);
  *(undefined4 *)((longlong)param_1 + 0x2ac) = *(undefined4 *)((longlong)param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_2 + 0x56);
  *(undefined4 *)((longlong)param_1 + 0x2b4) = *(undefined4 *)((longlong)param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_2 + 0x57);
  *(undefined4 *)((longlong)param_1 + 700) = *(undefined4 *)((longlong)param_2 + 700);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x2c4) = *(undefined4 *)((longlong)param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x59) = *(undefined4 *)(param_2 + 0x59);
  *(undefined4 *)((longlong)param_1 + 0x2cc) = *(undefined4 *)((longlong)param_2 + 0x2cc);
  *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_2 + 0x5a);
  *(undefined4 *)((longlong)param_1 + 0x2d4) = *(undefined4 *)((longlong)param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_2 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x2dc) = *(undefined4 *)((longlong)param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x2e4) = *(undefined4 *)((longlong)param_2 + 0x2e4);
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_2 + 0x5d);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = *(undefined4 *)((longlong)param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0x5e);
  *(undefined4 *)((longlong)param_1 + 0x2f4) = *(undefined4 *)((longlong)param_2 + 0x2f4);
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(param_2 + 0x5f);
  *(undefined4 *)((longlong)param_1 + 0x2fc) = *(undefined4 *)((longlong)param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_2 + 0x61);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_2 + 0x62);
  *(undefined4 *)((longlong)param_1 + 0x314) = *(undefined4 *)((longlong)param_2 + 0x314);
  *(undefined4 *)(param_1 + 99) = *(undefined4 *)(param_2 + 99);
  *(undefined4 *)((longlong)param_1 + 0x31c) = *(undefined4 *)((longlong)param_2 + 0x31c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)((longlong)param_1 + 0x324) = *(undefined4 *)((longlong)param_2 + 0x324);
  *(undefined4 *)(param_1 + 0x65) = *(undefined4 *)(param_2 + 0x65);
  *(undefined4 *)((longlong)param_1 + 0x32c) = *(undefined4 *)((longlong)param_2 + 0x32c);
  *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_2 + 0x66);
  *(undefined4 *)((longlong)param_1 + 0x334) = *(undefined4 *)((longlong)param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x67);
  *(undefined4 *)((longlong)param_1 + 0x33c) = *(undefined4 *)((longlong)param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x344) = *(undefined4 *)((longlong)param_2 + 0x344);
  *(undefined4 *)(param_1 + 0x69) = *(undefined4 *)(param_2 + 0x69);
  *(undefined4 *)((longlong)param_1 + 0x34c) = *(undefined4 *)((longlong)param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(param_2 + 0x6a);
  *(undefined4 *)((longlong)param_1 + 0x354) = *(undefined4 *)((longlong)param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)(param_2 + 0x6b);
  *(undefined4 *)((longlong)param_1 + 0x35c) = *(undefined4 *)((longlong)param_2 + 0x35c);
  uVar1 = param_2[0x6d];
  param_1[0x6c] = param_2[0x6c];
  param_1[0x6d] = uVar1;
  uVar1 = param_2[0x6f];
  param_1[0x6e] = param_2[0x6e];
  param_1[0x6f] = uVar1;
  uVar1 = param_2[0x71];
  param_1[0x70] = param_2[0x70];
  param_1[0x71] = uVar1;
  uVar1 = param_2[0x73];
  param_1[0x72] = param_2[0x72];
  param_1[0x73] = uVar1;
  *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
  *(undefined1 *)((longlong)param_1 + 0x3a1) = *(undefined1 *)((longlong)param_2 + 0x3a1);
  *(undefined1 *)((longlong)param_1 + 0x3a2) = *(undefined1 *)((longlong)param_2 + 0x3a2);
  *(undefined1 *)((longlong)param_1 + 0x3a3) = *(undefined1 *)((longlong)param_2 + 0x3a3);
  *(undefined4 *)((longlong)param_1 + 0x3a4) = *(undefined4 *)((longlong)param_2 + 0x3a4);
  *(undefined4 *)(param_1 + 0x75) = *(undefined4 *)(param_2 + 0x75);
  *(undefined4 *)((longlong)param_1 + 0x3ac) = *(undefined4 *)((longlong)param_2 + 0x3ac);
  return param_1;
}



// FUNCTION 143974600 FUN_143974600 body=43 status=ok
// SIG undefined FUN_143974600(void)

undefined8 * FUN_143974600(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145af1588;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 143974640 onConstraintRelease body=70 status=ok
// SIG undefined onConstraintRelease(void)

void physx::PxVehicleConstraintShader::onConstraintRelease(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  PxAllocatorCallback *pPVar3;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x170) + 0xac);
  *pcVar1 = *pcVar1 + -1;
  lVar2 = *(longlong *)(param_1 + 0x170);
  if ((*(char *)(lVar2 + 0xac) == '\0') && (lVar2 != 0)) {
    pPVar3 = physx::shdfnd::getAllocator();
                    /* WARNING: Could not recover jumptable at 0x00014397467c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pPVar3 + 0x10))(pPVar3,lVar2);
    return;
  }
  return;
}



// FUNCTION 143974690 setEngineData body=125 status=ok
// SIG undefined setEngineData(void)

void physx::PxVehicleDriveSimData::setEngineData(void *param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop
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
  *(float *)((longlong)param_1 + 0x68) = 1.0 / *(float *)((longlong)param_2 + 0x50);
  *(float *)((longlong)param_1 + 0x6c) = 1.0 / *(float *)((longlong)param_2 + 0x58);
  return;
}



// FUNCTION 143974720 setGearsData body=99 status=ok
// SIG undefined setGearsData(void)

void physx::PxVehicleDriveSimData::setGearsData(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x80) = param_2[2];
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x90) = param_2[4];
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0xa0) = param_2[6];
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  uVar1 = param_2[9];
  *(undefined8 *)(param_1 + 0xb0) = param_2[8];
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = param_2[0xb];
  *(undefined8 *)(param_1 + 0xc0) = param_2[10];
  *(undefined8 *)(param_1 + 200) = uVar1;
  uVar1 = param_2[0xd];
  *(undefined8 *)(param_1 + 0xd0) = param_2[0xc];
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  uVar1 = param_2[0xf];
  *(undefined8 *)(param_1 + 0xe0) = param_2[0xe];
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  uVar1 = param_2[0x11];
  *(undefined8 *)(param_1 + 0xf0) = param_2[0x10];
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  return;
}



// FUNCTION 143974790 setClutchData body=11 status=ok
// SIG undefined setClutchData(void)

void physx::PxVehicleDriveSimData::setClutchData(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x100) = *param_2;
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  return;
}



// FUNCTION 1439747b0 setAutoBoxData body=100 status=ok
// SIG undefined setAutoBoxData(void)

void physx::PxVehicleDriveSimData::setAutoBoxData(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 2;
  puVar2 = (undefined8 *)(param_1 + 0x110);
  do {
    uVar1 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar1;
    uVar1 = param_2[3];
    puVar2[2] = param_2[2];
    puVar2[3] = uVar1;
    uVar1 = param_2[5];
    puVar2[4] = param_2[4];
    puVar2[5] = uVar1;
    uVar1 = param_2[7];
    puVar2[6] = param_2[6];
    puVar2[7] = uVar1;
    uVar1 = param_2[9];
    puVar2[8] = param_2[8];
    puVar2[9] = uVar1;
    uVar1 = param_2[0xb];
    puVar2[10] = param_2[10];
    puVar2[0xb] = uVar1;
    uVar1 = param_2[0xd];
    puVar2[0xc] = param_2[0xc];
    puVar2[0xd] = uVar1;
    uVar1 = param_2[0xf];
    puVar2[0xe] = param_2[0xe];
    puVar2[0xf] = uVar1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x10;
    param_2 = param_2 + 0x10;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 143974870 setAnalogInput body=8 status=ok
// SIG undefined setAnalogInput(void)

void physx::PxVehicleDriveDynData::setAnalogInput(longlong param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + (ulonglong)param_2 * 4) = param_3;
  return;
}



// FUNCTION 143974880 getAnalogInput body=8 status=ok
// SIG undefined getAnalogInput(void)

undefined4 physx::PxVehicleDriveDynData::getAnalogInput(longlong param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + (ulonglong)param_2 * 4);
}



// FUNCTION 1439748a0 PxVehicleDriveDynData body=66 status=ok
// SIG undefined PxVehicleDriveDynData(void)

undefined8 * physx::PxVehicleDriveDynData::PxVehicleDriveDynData(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 1;
  param_1[9] = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 143974900 setToRestState body=113 status=ok
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



// FUNCTION 143974980 thunk_FUN_1439738a0 body=5 status=ok
// SIG undefined thunk_FUN_1439738a0(void)

int thunk_FUN_1439738a0(int param_1)

{
  return (param_1 + 3U >> 2) * 0x7b0 + 0x20;
}



// FUNCTION 143974990 FUN_143974990 body=5 status=ok
// SIG undefined FUN_143974990(void)

void FUN_143974990(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  *(longlong *)(param_2 + 0x30) = param_3;
  uVar1 = (ulonglong)((int)param_1 + 3U >> 2);
  param_3 = uVar1 * 0x3b0 + param_3;
  *(longlong *)(param_2 + 0x40) = param_3;
  FUN_143973150(param_1,param_2 + 0x70,param_3 + uVar1 * 0x20);
  return;
}



// FUNCTION 1439749b0 free body=5 status=ok
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


