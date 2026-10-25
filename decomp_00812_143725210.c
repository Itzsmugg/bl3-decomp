// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143725210 FUN_143725210 body=1005 status=ok
// SIG undefined FUN_143725210(void)

void FUN_143725210(undefined8 *param_1,longlong param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  longlong lVar8;
  LPVOID pvVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 local_res20 [8];
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined1 local_b8 [128];
  
  FUN_1437151f0(param_2);
  lVar8 = *(longlong *)(param_2 + 8);
  if (lVar8 != 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_1 + 8);
    local_c8 = local_b8;
    local_bc = 0x80000080;
    local_c0 = 1;
    local_b8[0] = 0;
    lVar11 = *(longlong *)*param_1;
    uVar4 = FUN_143715430(lVar8);
    uVar5 = FUN_143714fc0(lVar8,&local_c8,0,0);
    uVar5 = (**(code **)(lVar11 + 8))(*param_1,uVar5,uVar4);
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_1 + 8) == (*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff)) {
      FUN_14370c460(uVar6,param_1 + 7,8);
    }
    *(undefined8 *)(param_1[7] + (longlong)*(int *)(param_1 + 8) * 8) = uVar5;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    *(undefined1 *)(param_1 + 9) = 1;
    local_c0 = 0;
    if (-1 < (int)local_bc) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_c8,1,local_bc & 0x3fffffff);
    }
  }
  FUN_14374a5c0(&local_d8,param_2);
  for (puVar13 = local_d8; puVar13 != local_d0; puVar13 = puVar13 + 1) {
    if ((param_3 != '\0') ||
       (pbVar7 = (byte *)FUN_143714f30(puVar13,local_res20), (~*pbVar7 & 1) != 0)) {
      uVar5 = *puVar13;
      uVar6 = FUN_1437151c0(puVar13);
      local_e0 = *param_1;
      local_e8 = hkSerialize::VersionedTypeBuilder::StaticTypeCB::vftable;
      lVar8 = FUN_143780490(&local_e8,uVar6,uVar5,1);
      if (lVar8 != 0) {
        uVar5 = FUN_143703a50();
        if (*(uint *)(param_1 + 6) == (*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff)) {
          FUN_14370c460(uVar5,param_1 + 5,8);
        }
        puVar1 = (undefined8 *)(param_1[5] + (longlong)*(int *)(param_1 + 6) * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
        }
        plVar10 = (longlong *)(param_1[5] + (longlong)*(int *)(param_1 + 6) * 8);
        *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
        lVar11 = *plVar10;
        if (lVar11 != 0) {
          FUN_1437802f0(lVar11);
          pvVar9 = TlsGetValue(DAT_146b7bf70);
          if (pvVar9 == (LPVOID)0x0) {
            pvVar9 = DAT_146b7bf68;
          }
          (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 0x10))
                    (*(longlong **)((longlong)pvVar9 + 0x58),lVar11,0x28);
        }
        *plVar10 = lVar8;
      }
    }
  }
  plVar10 = (longlong *)FUN_143715320(param_2);
  if ((plVar10 != (longlong *)0x0) && (iVar12 = 0, plVar3 = plVar10, (short)plVar10[1] != 0)) {
    do {
      plVar14 = plVar3 + 2;
      uVar5 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x10) == (*(uint *)((longlong)param_1 + 0x84) & 0x3fffffff)) {
        FUN_14370c460(uVar5,param_1 + 0xf,0x18);
      }
      puVar13 = (undefined8 *)(param_1[0xf] + (longlong)*(int *)(param_1 + 0x10) * 0x18);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = 0;
        puVar13[2] = 0;
      }
      plVar2 = (longlong *)(param_1[0xf] + (longlong)*(int *)(param_1 + 0x10) * 0x18);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      FUN_1437166c0(plVar2 + 2,plVar3[3]);
      if (*(char *)plVar3[3] == 't') {
        local_e0 = *param_1;
        local_e8 = hkSerialize::VersionedTypeBuilder::StaticTypeCB::vftable;
        lVar8 = *plVar14;
        uVar5 = FUN_1437151f0(lVar8);
        lVar11 = FUN_143780490(&local_e8,uVar5,lVar8,1);
        lVar8 = *plVar2;
        if (lVar8 != 0) {
          FUN_1437802f0(lVar8);
          pvVar9 = TlsGetValue(DAT_146b7bf70);
          if (pvVar9 == (LPVOID)0x0) {
            pvVar9 = DAT_146b7bf68;
          }
          (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 0x10))
                    (*(longlong **)((longlong)pvVar9 + 0x58),lVar8,0x28);
        }
        *plVar2 = lVar11;
        plVar2[1] = 0;
      }
      else {
        plVar2[1] = *plVar14;
        lVar8 = *plVar2;
        if (lVar8 != 0) {
          FUN_1437802f0(lVar8);
          pvVar9 = TlsGetValue(DAT_146b7bf70);
          if (pvVar9 == (LPVOID)0x0) {
            pvVar9 = DAT_146b7bf68;
          }
          (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 0x10))
                    (*(longlong **)((longlong)pvVar9 + 0x58),lVar8,0x28);
        }
        *plVar2 = 0;
      }
      iVar12 = iVar12 + 1;
      plVar3 = plVar14;
    } while (iVar12 < (int)(uint)*(ushort *)(plVar10 + 1));
  }
  return;
}



// FUNCTION 143725600 FUN_143725600 body=294 status=ok
// SIG undefined FUN_143725600(void)

void FUN_143725600(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = FUN_14372a9e0(param_1 + 0x98);
  if (*(int *)(param_1 + 0xa4) < iVar2) {
    local_18 = param_2;
    local_14 = param_3;
    local_10 = param_4;
    FUN_14372d740(param_1 + 0x98,param_2,&local_18);
LAB_1437256db:
    if ((-1 < *(int *)(param_1 + 0x4c)) &&
       (lVar3 = *(longlong *)
                 (*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x4c) * 8),
       lVar3 != 0)) {
      FUN_143725600(lVar3,param_2,param_3,param_4);
    }
    FUN_14372ee20(param_1,param_2,param_3,param_4);
    return;
  }
LAB_143725640:
  lVar3 = *(longlong *)(param_1 + 0x98);
  lVar5 = (longlong)iVar2;
  *(int *)(lVar3 + 4 + lVar5 * 0x10) = param_2;
  *(undefined4 *)(lVar3 + 8 + lVar5 * 0x10) = param_3;
  *(undefined4 *)(lVar3 + 0xc + lVar5 * 0x10) = param_4;
  iVar2 = iVar2 + 1;
  iVar1 = *(int *)(param_1 + 0xa4);
  lVar3 = (longlong)iVar2;
  do {
    if (iVar2 <= iVar1) {
      piVar4 = (int *)(lVar3 * 0x10 + *(longlong *)(param_1 + 0x98));
      do {
        if (*piVar4 == -1) {
          iVar2 = iVar1 + 1;
LAB_1437256a7:
          if (*(int *)(param_1 + 0xa4) < iVar2) goto LAB_1437256db;
          goto LAB_143725640;
        }
        if (*piVar4 == param_2) goto LAB_1437256a7;
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 4;
      } while (iVar2 <= iVar1);
    }
    iVar2 = 0;
    lVar3 = 0;
  } while( true );
}



// FUNCTION 143725730 FUN_143725730 body=178 status=ok
// SIG undefined FUN_143725730(void)

void FUN_143725730(longlong param_1,ulonglong param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  local_18 = (undefined4)param_2;
  uVar2 = param_2 & 0xffffffff;
  local_14 = param_3;
  local_10 = param_4;
  FUN_14372d740(param_1 + 0x98,param_2,&local_18);
  if ((-1 < *(int *)(param_1 + 0x4c)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x4c) * 8),
     lVar1 != 0)) {
    FUN_143725730(lVar1,uVar2,param_3,param_4);
  }
  if ((-1 < *(int *)(param_1 + 0x4c)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x4c) * 8),
     lVar1 != 0)) {
    FUN_143725730(lVar1,uVar2,param_3,param_4);
  }
  if (param_4 < 0) {
    param_4 = -1;
  }
  FUN_14372ee20(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 1437257f0 FUN_1437257f0 body=262 status=ok
// SIG undefined FUN_1437257f0(void)

void FUN_1437257f0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int local_18 [4];
  
  iVar4 = FUN_14372a9e0(param_1 + 0x98);
  if (*(int *)(param_1 + 0xa4) < iVar4) {
    local_18[1] = 0;
    local_18[2] = 0xffffffff;
    local_18[0] = param_2;
    FUN_14372d740(param_1 + 0x98,param_2,local_18);
LAB_1437258b7:
    if ((-1 < *(int *)(param_1 + 0x4c)) &&
       (lVar2 = *(longlong *)
                 (*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x4c) * 8),
       lVar2 != 0)) {
      FUN_1437257f0(lVar2,param_2);
    }
    FUN_14372ee20(param_1,param_2,0,0xffffffff);
    return;
  }
LAB_143725820:
  lVar2 = *(longlong *)(param_1 + 0x98);
  lVar6 = (longlong)iVar4;
  *(int *)(lVar2 + 4 + lVar6 * 0x10) = param_2;
  *(undefined4 *)(lVar2 + 8 + lVar6 * 0x10) = 0;
  *(undefined4 *)(lVar2 + 0xc + lVar6 * 0x10) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0xa4);
  lVar2 = (longlong)(iVar4 + 1);
  iVar3 = iVar4 + 1;
  do {
    do {
      iVar4 = iVar3;
      lVar6 = lVar2;
      lVar2 = 0;
      iVar3 = 0;
    } while (iVar1 < iVar4);
    piVar5 = (int *)(lVar6 * 0x10 + *(longlong *)(param_1 + 0x98));
    do {
      if (*piVar5 == -1) {
        iVar4 = iVar1 + 1;
LAB_143725889:
        if (*(int *)(param_1 + 0xa4) < iVar4) goto LAB_1437258b7;
        goto LAB_143725820;
      }
      if (*piVar5 == param_2) goto LAB_143725889;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (iVar4 <= iVar1);
  } while( true );
}



// FUNCTION 143725900 FUN_143725900 body=116 status=ok
// SIG undefined FUN_143725900(void)

uint FUN_143725900(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_res8 [2];
  undefined8 local_res10;
  
  uVar4 = *(uint *)(param_1 + 0xa8) & 0x7fffffff;
  local_res8[0] = uVar4;
  local_res10 = param_2;
  uVar3 = FUN_143703a50();
  iVar2 = FUN_14372aa90(param_1 + 0xa0,uVar3,&local_res10,local_res8);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)iVar2 * 0x10);
  if (uVar1 == uVar4) {
    FUN_1436ffce0(param_1,uVar1,param_2);
  }
  return uVar1;
}



// FUNCTION 143725980 FUN_143725980 body=591 status=ok
// SIG undefined FUN_143725980(void)

void FUN_143725980(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong local_res18;
  undefined8 local_res20;
  undefined1 local_148 [24];
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [64];
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_bc;
  
  plVar4 = (longlong *)FUN_143714d80(param_1,local_128);
  lVar1 = *plVar4;
  lVar7 = plVar4[1];
  plVar4 = (longlong *)FUN_143714d80(param_2,local_118);
  lVar2 = *plVar4;
  lVar5 = plVar4[1];
  FUN_14373bf20(local_148,local_res18 & 0xff);
  uVar11 = lVar5 - lVar2 >> 3;
  iVar10 = (int)uVar11;
  FUN_14373c3f0(local_148,uVar11 & 0xffffffff);
  iVar9 = 0;
  if (0 < iVar10) {
    do {
      lVar5 = FUN_1437151c0(lVar2 + (longlong)iVar9 * 8);
      if (lVar5 != 0) {
        FUN_14373c2f0(local_148,lVar5,(longlong)iVar9);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar10);
  }
  iVar9 = 0;
  iVar10 = (int)(lVar7 - lVar1 >> 3);
  if (0 < iVar10) {
    do {
      local_res18 = FUN_1437151c0(lVar1 + (longlong)iVar9 * 8);
      if (local_res18 != 0) {
        uVar6 = FUN_14373bfe0(local_148,local_res18);
        iVar3 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                          (local_148,uVar6);
        if (iVar3 == 0) {
          FUN_143745310(&local_c8,&DAT_145b8f480);
          FUN_143745710(&local_c8,local_res18,0xffffffff);
          uVar6 = FUN_14373bfe0(local_148,local_c8);
          iVar3 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                            (local_148,uVar6);
          if (iVar3 != 0) {
            if (2 < DAT_146b823d8) {
              local_res20 = FUN_1437151f0(param_1);
              FUN_14373a730(local_108,&DAT_146b823d0,3);
              lVar7 = FUN_14373bbd0(local_108,
                                    "Type {} adds a field named \"{}\" in versioning but that field is already present in the file, adjusting types to load from the file anyway. Either the file is invalid or the patches are incorrect"
                                    ,&DAT_145b744b0,&local_res20,&local_res18,0);
              *(char **)(lVar7 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
              *(undefined8 *)(lVar7 + 0x28) = 0x4f;
              FUN_14373a950(local_108);
            }
            iVar3 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::
                    getValue(local_148,uVar6);
            FUN_143714060(&local_130,*(undefined8 *)(lVar2 + (longlong)iVar3 * 8));
            uVar6 = hkReflectUtil::internCopy(local_res18,0xffffffff);
            puVar8 = (undefined8 *)FUN_1437143d0(local_130,0x80000);
            *puVar8 = uVar6;
          }
          local_c0 = 0;
          if (-1 < (int)local_bc) {
            FUN_143702e10(&PTR_vftable_1467f0638,local_c8,1,local_bc & 0x3fffffff);
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar10);
  }
  FUN_14373bf70(local_148);
  return;
}



// FUNCTION 143725bd0 FUN_143725bd0 body=40 status=ok
// SIG undefined FUN_143725bd0(void)

uint FUN_143725bd0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  uint *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (uint *)(**(code **)(*param_1 + 0x70))(param_1,local_res8,param_2,param_3,param_5);
  return *puVar1 >> 0x1f;
}



// FUNCTION 143725c00 FUN_143725c00 body=31 status=ok
// SIG undefined FUN_143725c00(void)

void FUN_143725c00(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))();
  return;
}



// FUNCTION 143725c20 FUN_143725c20 body=667 status=ok
// SIG undefined FUN_143725c20(void)

void FUN_143725c20(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong local_208;
  uint local_200;
  uint local_1fc;
  undefined1 local_1f8 [96];
  ulonglong local_198;
  undefined8 local_e8;
  undefined8 local_e0;
  
  plVar11 = (longlong *)param_1[5];
  uVar10 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1fc = 0x80000000;
  plVar1 = plVar11 + *(int *)(param_1 + 6);
  lVar3 = local_208;
  uVar12 = local_200;
  for (; local_208 = lVar3, local_200 = uVar12, plVar11 != plVar1; plVar11 = plVar11 + 1) {
    if ((*(ulonglong *)*plVar11 & 0xfffffffffffffffe) != 0) {
      if (*(int *)(*plVar11 + 0x1c) == 2) {
        *(undefined1 *)(param_1 + 0x12) = 1;
      }
      FUN_143737060(local_1f8);
      uVar4 = FUN_143731580(param_1,*plVar11,*param_1);
      UMovieScenePropertyTrack::SetSectionToKey(local_1f8,uVar4);
      puVar5 = (undefined8 *)FUN_143714490(uVar4,1);
      bVar9 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        bVar9 = (byte)*puVar5;
      }
      uVar6 = uVar10;
      if ((bVar9 & 0xf) == 1) {
        uVar6 = uVar4;
      }
      FUN_1437380c0(local_1f8,*(ulonglong *)*plVar11 & 0xfffffffffffffffe,0,-(uVar6 != 0) & 0x11);
      local_198 = local_198 | 0x600000;
      local_e0 = 0;
      local_e8 = param_1[0xc];
      uVar7 = (*(code *)**(undefined8 **)*param_1)();
      uVar7 = FUN_143737a80(local_1f8,uVar7);
      uVar8 = FUN_143703a50();
      if (local_200 == (local_1fc & 0x3fffffff)) {
        FUN_14370c460(uVar8,&local_208,8);
      }
      *(undefined8 *)(local_208 + (longlong)(int)local_200 * 8) = uVar7;
      local_200 = local_200 + 1;
      FUN_143737160(local_1f8);
    }
    lVar3 = local_208;
    uVar12 = local_200;
  }
  uVar7 = (*(code *)**(undefined8 **)*param_1)();
  uVar7 = FUN_143714780(lVar3,uVar12,0,uVar7);
  puVar5 = (undefined8 *)FUN_1437143d0(param_1[0xc],0x4000000);
  *puVar5 = uVar7;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    uVar7 = (*(code *)**(undefined8 **)*param_1)();
    uVar7 = FUN_143714810(iVar2,uVar7);
    param_1[0x11] = uVar7;
    uVar4 = uVar10;
    uVar6 = uVar10;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        *(ulonglong *)(param_1[0x11] + 0x18 + uVar10) =
             *(ulonglong *)(param_1[0xf] + 0x10 + uVar4) & 0xfffffffffffffffe;
        lVar3 = *(longlong *)(param_1[0xf] + uVar4);
        if (lVar3 == 0) {
          uVar7 = *(undefined8 *)(param_1[0xf] + 8 + uVar4);
        }
        else {
          uVar7 = FUN_143731580(param_1,lVar3,*param_1);
        }
        uVar12 = (int)uVar6 + 1;
        *(undefined8 *)(param_1[0x11] + 0x10 + uVar10) = uVar7;
        uVar10 = uVar10 + 0x10;
        uVar4 = uVar4 + 0x18;
        uVar6 = (ulonglong)uVar12;
      } while ((int)uVar12 < *(int *)(param_1 + 0x10));
    }
    uVar7 = param_1[0x11];
    puVar5 = (undefined8 *)FUN_1437143d0(param_1[0xc],0x40000);
    *puVar5 = uVar7;
  }
  uVar7 = FUN_143703a50();
  local_200 = 0;
  if (-1 < (int)local_1fc) {
    FUN_143702e10(uVar7,local_208,8,local_1fc & 0x3fffffff);
  }
  return;
}



// FUNCTION 143725ec0 FUN_143725ec0 body=503 status=ok
// SIG undefined FUN_143725ec0(void)

void FUN_143725ec0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong local_288;
  int local_280;
  uint local_27c;
  undefined1 local_1f8 [80];
  uint local_1a8;
  ulonglong local_198;
  undefined *local_180;
  longlong local_170;
  undefined8 local_130;
  undefined8 local_100;
  ulonglong local_d0;
  
  FUN_143737060(local_1f8);
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_143745310(&local_288,param_1[3] & 0xfffffffffffffffe);
    iVar4 = FUN_143746140(&local_288,0x3c,0,0x7fffffff);
    if (-1 < iVar4) {
      iVar7 = iVar4 + 1;
      if ((int)(local_27c & 0x3fffffff) < iVar7) {
        iVar2 = (local_27c & 0x3fffffff) * 2;
        iVar1 = iVar7;
        if (iVar7 < iVar2) {
          iVar1 = iVar2;
        }
        FUN_14370c310(&PTR_vftable_1467f0638,&local_288,iVar1,1);
      }
      *(undefined1 *)(iVar4 + local_288) = 0;
      local_280 = iVar7;
      FUN_143716690(param_1 + 3,&local_288);
    }
    local_280 = 0;
    if (-1 < (int)local_27c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_288,1,local_27c & 0x3fffffff);
    }
  }
  uVar5 = hkReflectUtil::internCopy(param_1[3] & 0xfffffffffffffffe,0xffffffff);
  FUN_143737ab0(local_1f8,uVar5,0);
  local_170 = (longlong)*(int *)(param_1 + 4);
  local_198 = local_198 | 0x14;
  local_180 = &DAT_146b82b68;
  FUN_143738110(local_1f8,*param_1);
  uVar3 = local_198;
  uVar6 = local_1a8 | 0x1000;
  local_130 = 0;
  if (*(char *)((longlong)param_1 + 0x59) == '\0') {
    local_1a8 = uVar6;
    if (*(char *)((longlong)param_1 + 0x5a) == '\0') goto LAB_14372606d;
  }
  else {
    uVar6 = local_1a8 | 0x1800;
  }
  local_1a8 = uVar6 | 0x20;
LAB_14372606d:
  local_d0 = (ulonglong)local_1a8;
  local_198 = local_198 | 0x1001000;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_198 = uVar3 | 0x1041000;
    local_100 = 0;
  }
  uVar5 = (*(code *)**(undefined8 **)*param_1)();
  uVar5 = FUN_143737a80(local_1f8,uVar5);
  param_1[0xc] = uVar5;
  param_1[10] = 0;
  FUN_143737160(local_1f8);
  return;
}



// FUNCTION 1437260c0 FUN_1437260c0 body=447 status=ok
// SIG undefined FUN_1437260c0(void)

void FUN_1437260c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 local_res8 [2];
  undefined8 local_res18 [2];
  undefined8 *local_58;
  int local_50;
  uint local_4c;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_4c = 0x80000000;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x10);
  (**(code **)(*plVar4 + 0x48))(plVar4,&local_58);
  puVar1 = local_58 + local_50;
  for (puVar8 = local_58; puVar8 != puVar1; puVar8 = puVar8 + 1) {
    uVar7 = *puVar8;
    plVar4 = (longlong *)FUN_1437149e0(uVar7,local_48,&DAT_1467e8740);
    lVar2 = *plVar4;
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
    if (lVar2 == 0) {
      uVar5 = FUN_1437151f0(uVar7);
      uVar3 = FUN_143715430(uVar7);
      local_res18[0] = FUN_14371f4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8),uVar5,uVar3)
      ;
      local_res8[0] = 0xffffffff;
      piVar6 = (int *)FUN_14372d420(param_1 + 0x50,local_res18,local_res8);
      if (-1 < *piVar6) {
        lVar2 = (longlong)*piVar6 * 8;
        (**(code **)(*(longlong *)(param_1 + 0x18) + 0x38))
                  (param_1 + 0x18,*(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x60)));
        lVar2 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x60));
        uVar7 = FUN_143703a50();
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar7,param_2,8);
        }
        *(undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8) = *(undefined8 *)(lVar2 + 0x60);
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      }
    }
  }
  uVar7 = FUN_143703a50();
  local_50 = 0;
  if (-1 < (int)local_4c) {
    FUN_143702e10(uVar7,local_58,8,local_4c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143726280 FUN_143726280 body=755 status=ok
// SIG undefined FUN_143726280(void)

undefined8 FUN_143726280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_res20;
  longlong local_118;
  int local_110;
  uint local_10c;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8 [2];
  ulonglong local_e8;
  undefined1 local_e0 [56];
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  
  local_res20 = param_4;
  FUN_143745310(&local_a8,&DAT_145b8f480);
  FUN_143745710(&local_a8,local_res20,0xffffffff);
  FUN_143714b80(param_3,&local_100,local_a8,0);
  uVar5 = 0;
  if (local_100 < 2) {
    FUN_143714b80(param_3,&local_108,local_res20,0);
    if (local_108 < 2) {
      if (DAT_146b823d8 != 0) {
        FUN_14373a730(local_e0,&DAT_146b823d0,1);
        lVar6 = FUN_14373bbd0(local_e0,
                              "Field {} not found applying patch {}/{}->{}/{}. This often indicates version mismatches or missing patches."
                              ,&DAT_145b8fb70,&local_res20,param_1,param_1 + 0x10,param_1 + 8,
                              param_1 + 0x14,0);
        *(char **)(lVar6 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
        *(undefined8 *)(lVar6 + 0x28) = 0xac3;
        FUN_14373a950(local_e0);
      }
      uVar5 = 0x80040200;
      goto LAB_143726530;
    }
    if (2 < DAT_146b823d8) {
      FUN_14373a730(local_e0,&DAT_146b823d0,3);
      lVar6 = FUN_14373bbd0(local_e0,
                            "Field {} was already present when applying patch {}/{}->{}/{}. This often indicates version mismatches or missing patches."
                            ,&DAT_145b8fb70,&local_res20,param_1,param_1 + 0x10,param_1 + 8,
                            param_1 + 0x14,0);
      *(char **)(lVar6 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
      *(undefined8 *)(lVar6 + 0x28) = 0xabe;
      FUN_14373a950(local_e0);
    }
  }
  else {
    FUN_143714060(&local_108);
    uVar1 = local_res20;
    puVar2 = (undefined8 *)FUN_1437143d0(local_108,0x80000);
    *puVar2 = uVar1;
    local_118 = 0;
    local_110 = 0;
    local_10c = 0x80000000;
    FUN_14372ae20(param_2,&local_118);
    lVar6 = local_118 + (longlong)local_110 * 0x18;
    for (lVar3 = local_118; lVar3 != lVar6; lVar3 = lVar3 + 0x18) {
      FUN_143741ed0(lVar3,local_f8,local_res20);
      if (local_f8[0] != 0) {
        FUN_1437449a0(local_f8);
      }
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
    }
    lVar6 = (longlong)(local_110 + -1);
    if (-1 < local_110 + -1) {
      puVar4 = (ulonglong *)(local_118 + lVar6 * 0x18 + 0x10);
      do {
        if ((*puVar4 & 1) != 0) {
          FUN_143733a60(*puVar4 & 0xfffffffffffffffe);
        }
        puVar4 = puVar4 + -3;
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
    local_110 = 0;
    if (-1 < (int)local_10c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_118,0x18,local_10c & 0x3fffffff);
      goto LAB_143726530;
    }
  }
  uVar5 = 0;
LAB_143726530:
  local_a0 = 0;
  if (-1 < (int)local_9c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_a8,1,local_9c & 0x3fffffff);
  }
  return uVar5;
}



// FUNCTION 143726580 FUN_143726580 body=243 status=ok
// SIG undefined FUN_143726580(void)

undefined8 FUN_143726580(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_res18;
  ulonglong local_res20;
  undefined8 local_48;
  undefined1 local_40 [56];
  
  local_res18 = param_3;
  FUN_143714b80(param_2,&local_res20,param_3,0);
  if (1 < local_res20) {
    FUN_143714060(&local_48);
    puVar1 = (undefined8 *)FUN_1437143d0(local_48,0x80000);
    *puVar1 = 0;
    return 0;
  }
  if (DAT_146b823d8 != '\0') {
    FUN_14373a730(local_40,&DAT_146b823d0,1);
    lVar2 = FUN_14373bbd0(local_40,"Field {} not found applying patch {}/{}->{}/{}",&DAT_145b8fb70,
                          &local_res18,param_1,param_1 + 0x10,param_1 + 8,param_1 + 0x14,0);
    *(char **)(lVar2 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
    *(undefined8 *)(lVar2 + 0x28) = 0xa9d;
    FUN_14373a950(local_40);
  }
  return 0x80040200;
}



// FUNCTION 143726680 FUN_143726680 body=257 status=ok
// SIG undefined FUN_143726680(void)

undefined8 FUN_143726680(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  ulonglong local_58;
  undefined8 local_50;
  undefined1 local_48 [64];
  
  local_res18[0] = param_3;
  FUN_143714b80(param_2,&local_58,param_3,0);
  if (1 < local_58) {
    FUN_143714060(&local_50);
    puVar1 = (undefined8 *)FUN_1437143d0(local_50,0x80000);
    *puVar1 = param_4;
    return 0;
  }
  if (DAT_146b823d8 != '\0') {
    FUN_14373a730(local_48,&DAT_146b823d0,1);
    lVar2 = FUN_14373bbd0(local_48,"Field {} not found applying patch {}/{}->{}/{}",&DAT_145b8fb70,
                          local_res18,param_1,param_1 + 0x10,param_1 + 8,param_1 + 0x14,0);
    *(char **)(lVar2 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
    *(undefined8 *)(lVar2 + 0x28) = 0xad3;
    FUN_14373a950(local_48);
  }
  return 0x80040200;
}



// FUNCTION 143726790 FUN_143726790 body=2772 status=ok
// SIG undefined FUN_143726790(void)

/* WARNING: Removing unreachable block (ram,0x000143726df6) */
/* WARNING: Removing unreachable block (ram,0x000143726ca7) */
/* WARNING: Removing unreachable block (ram,0x000143726cb0) */
/* WARNING: Removing unreachable block (ram,0x000143726cd7) */
/* WARNING: Removing unreachable block (ram,0x000143726ce3) */
/* WARNING: Removing unreachable block (ram,0x000143726cfb) */
/* WARNING: Removing unreachable block (ram,0x000143726d04) */
/* WARNING: Removing unreachable block (ram,0x000143726d11) */
/* WARNING: Removing unreachable block (ram,0x000143726d74) */
/* WARNING: Removing unreachable block (ram,0x000143726d8e) */
/* WARNING: Removing unreachable block (ram,0x000143726dba) */
/* WARNING: Removing unreachable block (ram,0x000143726dc6) */
/* WARNING: Removing unreachable block (ram,0x000143726dcb) */
/* WARNING: Removing unreachable block (ram,0x000143726dd7) */
/* WARNING: Removing unreachable block (ram,0x000143726de1) */

undefined4 * FUN_143726790(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  longlong lVar20;
  int iVar21;
  undefined8 *puVar22;
  ulonglong *puVar23;
  longlong lVar24;
  undefined8 *puVar25;
  int local_res20;
  undefined8 local_428;
  longlong local_420;
  ulonglong local_418;
  undefined8 *local_410;
  int local_408;
  uint local_404;
  undefined8 *local_400;
  int local_3f8;
  int local_3f4;
  undefined8 *local_3f0;
  int local_3e8;
  uint local_3e4;
  longlong local_3e0;
  undefined8 local_3d8;
  longlong local_3d0;
  longlong local_3c8;
  undefined8 local_3b8;
  undefined1 local_3b0 [32];
  undefined1 local_390 [32];
  undefined1 local_370 [8];
  longlong local_368;
  int local_360;
  uint local_35c;
  undefined8 local_2d8;
  undefined4 local_2d0;
  uint local_2cc;
  undefined1 local_248 [520];
  
  lVar20 = 0;
  uVar19 = 0;
  local_3c8 = 0;
  if (*param_3 == 0) {
    FUN_14371f4b0(param_1[1],param_3[1],*(undefined4 *)((longlong)param_3 + 0x14));
    uVar7 = *(undefined4 *)((longlong)param_3 + 0x14);
    lVar9 = param_3[1];
  }
  else {
    FUN_14371f4b0(param_1[1],*param_3,(int)param_3[2]);
    uVar7 = (undefined4)param_3[2];
    lVar9 = *param_3;
  }
  lVar9 = (**(code **)(*param_1 + 8))(param_1,lVar9,uVar7);
  local_3e0 = lVar9;
  if (lVar9 != 0) {
    do {
      uVar11 = *(undefined8 *)(lVar9 + 0x60);
      local_3d8 = uVar11;
      FUN_14377aba0(local_390,param_3);
      local_res20 = 0;
      local_3d0 = 0;
      if (0 < (int)param_3[4]) {
        do {
          piVar10 = (int *)(local_3d0 * 0x10 + param_3[3]);
          iVar8 = *piVar10;
          if ((iVar8 == 8) && (plVar13 = *(longlong **)(piVar10 + 2), plVar13 != (longlong *)0x0)) {
            if (*plVar13 != 0) {
              FUN_14372fda0(**(undefined8 **)(lVar9 + 0x38),lVar9);
            }
            if (plVar13[1] != 0) {
              if (*(int *)(lVar9 + 0x40) < 2) {
                uVar19 = 0x80040200;
              }
              else {
                lVar20 = *(longlong *)(*(longlong *)(lVar9 + 0x38) + 8);
                local_410 = (undefined8 *)0x0;
                local_408 = 0;
                local_404 = 0x80000000;
                FUN_14372ae20(lVar9,&local_410);
                puVar15 = local_410 + (longlong)local_408 * 3;
                for (puVar25 = local_410; puVar25 != puVar15; puVar25 = puVar25 + 3) {
                  local_420 = *(longlong *)(lVar20 + 0x60);
                  local_428 = *puVar25;
                  if (local_420 == 0) {
                    local_418 = 0;
                  }
                  else {
                    local_418 = FUN_1437151a0();
                  }
                  if ((local_418 & 1) != 0) {
                    FUN_1437329e0(local_418 & 0xfffffffffffffffe);
                  }
                  uVar14 = local_428;
                  uVar7 = FUN_1437152f0(local_420);
                  FUN_14370c720(uVar14,0,uVar7);
                  FUN_1437449a0(&local_428);
                  if ((local_418 & 1) != 0) {
                    FUN_143733a60(local_418 & 0xfffffffffffffffe);
                  }
                }
                FUN_143724e40(lVar20,lVar9);
                lVar20 = (longlong)(local_408 + -1);
                if (-1 < local_408 + -1) {
                  puVar23 = local_410 + lVar20 * 3 + 2;
                  do {
                    if ((*puVar23 & 1) != 0) {
                      FUN_143733a60(*puVar23 & 0xfffffffffffffffe);
                    }
                    puVar23 = puVar23 + -3;
                    lVar20 = lVar20 + -1;
                  } while (-1 < lVar20);
                }
                local_408 = 0;
                if (-1 < (int)local_404) {
                  FUN_143702e10(&PTR_vftable_1467f0638,local_410,0x18,local_404 & 0x3fffffff);
                }
                local_410 = (undefined8 *)0x0;
                local_404 = 0x80000000;
              }
            }
            uVar16 = 0;
            *(int *)(lVar9 + 0x40) = *(int *)(lVar9 + 0x40) + -1;
            lVar20 = *(longlong *)(lVar9 + 0x38);
            lVar24 = (longlong)*(int *)(lVar9 + 0x40) * 8;
            uVar18 = uVar16;
            if (0 < lVar24) {
              do {
                uVar17 = (int)uVar18 + 8;
                *(undefined8 *)(uVar16 + lVar20) = *(undefined8 *)(uVar16 + 8 + lVar20);
                uVar16 = uVar16 + 8;
                uVar18 = (ulonglong)uVar17;
              } while ((int)uVar17 < lVar24);
            }
            if (*(int *)(lVar9 + 0x40) == 0) {
              *(undefined8 *)(*(longlong *)(lVar9 + 0x60) + 8) = 0;
            }
            else {
              *(undefined8 *)(*(longlong *)(lVar9 + 0x60) + 8) =
                   *(undefined8 *)(**(longlong **)(lVar9 + 0x38) + 0x60);
            }
          }
          else if ((iVar8 == 2) && (*(undefined8 **)(piVar10 + 2) != (undefined8 *)0x0)) {
            iVar8 = FUN_143726580(param_3,uVar11,**(undefined8 **)(piVar10 + 2));
            if (iVar8 < 0) {
              uVar19 = 0x80040200;
            }
          }
          else if ((iVar8 == 1) && (*(longlong *)(piVar10 + 2) != 0)) {
            iVar8 = FUN_143726280(param_3,lVar9,uVar11);
            if (iVar8 < 0) {
              uVar19 = 0x80040200;
            }
          }
          else if ((iVar8 == 3) && (*(undefined8 **)(piVar10 + 2) != (undefined8 *)0x0)) {
            iVar8 = FUN_143726680(param_3,uVar11,**(undefined8 **)(piVar10 + 2));
            if (iVar8 < 0) {
              uVar19 = 0x80040200;
            }
          }
          else if ((iVar8 == 9) && (lVar20 = *(longlong *)(piVar10 + 2), lVar20 != 0)) {
            if (*(longlong *)(lVar20 + 8) == 0) {
              *param_2 = 0x80040278;
              FUN_14373bf70(local_390);
              return param_2;
            }
            local_3f4 = -0x80000000;
            local_400 = (undefined8 *)0x0;
            local_3f8 = 0;
            FUN_14372ae20(lVar9,&local_400);
            param_1[0x2d] = (longlong)local_390;
            puVar15 = local_400 + (longlong)local_3f8 * 3;
            for (puVar25 = local_400; puVar25 != puVar15; puVar25 = puVar25 + 3) {
              local_428 = *puVar25;
              local_418 = puVar25[2];
              local_420 = puVar25[1];
              if ((local_418 & 1) != 0) {
                FUN_1437329e0(local_418 & 0xfffffffffffffffe);
              }
              (**(code **)(lVar20 + 8))(&local_428,param_1 + 0x2b);
            }
            lVar20 = (longlong)(local_3f8 + -1);
            if (-1 < local_3f8 + -1) {
              puVar23 = local_400 + lVar20 * 3 + 2;
              do {
                if ((*puVar23 & 1) != 0) {
                  FUN_143733a60(*puVar23 & 0xfffffffffffffffe);
                }
                puVar23 = puVar23 + -3;
                lVar20 = lVar20 + -1;
              } while (-1 < lVar20);
            }
            local_3f8 = 0;
            if (-1 < local_3f4) {
              FUN_143702e10(&PTR_vftable_1467f0638,local_400,0x18);
            }
            local_400 = (undefined8 *)0x0;
            local_3f4 = 0x80000000;
          }
          else {
            puVar15 = (undefined8 *)0x0;
            puVar25 = puVar15;
            if (iVar8 == 0x12) {
              puVar25 = *(undefined8 **)(piVar10 + 2);
            }
            if (puVar25 == (undefined8 *)0x0) {
              if (iVar8 == 0xd) {
                puVar15 = *(undefined8 **)(piVar10 + 2);
              }
              if (puVar15 == (undefined8 *)0x0) {
                if ((iVar8 != 7) || (*(longlong *)(piVar10 + 2) == 0)) {
                  uVar19 = 0x80040200;
                  FUN_1437134a0(local_3b0,local_248,0x200);
                  Electra::FHTTPResourceRequest::URL(local_3b0,"Invalid patch component");
                  iVar8 = FUN_143732300(0x56e69c67,local_248,
                                        "Serialize\\Version\\hkVersionBundle.cpp",0xb90);
                  if (iVar8 != 0) {
                    pcVar3 = (code *)swi(3);
                    puVar12 = (undefined4 *)(*pcVar3)();
                    return puVar12;
                  }
                  FUN_143713520(local_3b0);
                }
              }
              else {
                FUN_143745310(&local_2d8,*puVar15);
                FUN_143745710(&local_2d8,&DAT_145b8fcbc,0xffffffff);
                iVar8 = FUN_143726680(param_3,uVar11,*puVar15,local_2d8);
                if ((iVar8 < 0) || (iVar8 = FUN_143726280(param_3,lVar9,uVar11,*puVar15), iVar8 < 0)
                   ) {
                  uVar19 = 0x80040200;
                }
                else {
                  local_3e4 = 0x80000000;
                  local_3f0 = (undefined8 *)0x0;
                  local_3e8 = 0;
                  FUN_14372ae20(lVar9,&local_3f0);
                  param_1[0x2d] = (longlong)local_390;
                  puVar25 = local_3f0 + (longlong)local_3e8 * 3;
                  uVar14 = local_2d8;
                  for (puVar22 = local_3f0; local_2d8 = uVar14, puVar22 != puVar25;
                      puVar22 = puVar22 + 3) {
                    local_428 = *puVar22;
                    local_418 = puVar22[2];
                    local_420 = puVar22[1];
                    if ((local_418 & 1) != 0) {
                      FUN_1437329e0(local_418 & 0xfffffffffffffffe);
                    }
                    (*(code *)puVar15[3])(&local_428,param_1 + 0x2b,uVar14,*puVar15);
                    uVar11 = local_3d8;
                    uVar14 = local_2d8;
                  }
                  iVar8 = FUN_143726580(param_3,uVar11,uVar14);
                  if (iVar8 < 0) {
                    uVar19 = 0x80040200;
                  }
                  lVar20 = (longlong)(local_3e8 + -1);
                  if (-1 < local_3e8 + -1) {
                    puVar23 = local_3f0 + lVar20 * 3 + 2;
                    do {
                      if ((*puVar23 & 1) != 0) {
                        FUN_143733a60(*puVar23 & 0xfffffffffffffffe);
                      }
                      puVar23 = puVar23 + -3;
                      lVar20 = lVar20 + -1;
                    } while (-1 < lVar20);
                  }
                  local_3e8 = 0;
                  if (-1 < (int)local_3e4) {
                    FUN_143702e10(&PTR_vftable_1467f0638,local_3f0,0x18,local_3e4 & 0x3fffffff);
                  }
                  local_3f0 = (undefined8 *)0x0;
                  local_3e4 = 0x80000000;
                }
                local_2d0 = 0;
                if (-1 < (int)local_2cc) {
                  FUN_143702e10(&PTR_vftable_1467f0638,local_2d8,1,local_2cc & 0x3fffffff);
                }
              }
            }
            else {
              FUN_143714b80(*(undefined8 *)(lVar9 + 0x60),&local_3b8,*puVar25,0);
              uVar11 = FUN_143729b00(param_1,local_3b8,0x4000,puVar25[2]);
              FUN_14374ac50(*(undefined8 *)(lVar9 + 0x60),*puVar25,uVar11);
              FUN_14372ae20(lVar9);
              plVar13 = (longlong *)(*(code *)puVar25[1])(local_370);
              local_420 = *plVar13;
              local_428 = puVar25[2];
              if (local_420 == 0) {
                local_418 = 0;
              }
              else {
                local_418 = FUN_1437151a0();
              }
              if ((local_418 & 1) != 0) {
                FUN_1437329e0(local_418 & 0xfffffffffffffffe);
              }
              uVar11 = local_3d8;
              if ((local_418 & 1) != 0) {
                FUN_143733a60(local_418 & 0xfffffffffffffffe);
                uVar11 = local_3d8;
              }
            }
          }
          local_res20 = local_res20 + 1;
          local_3d0 = local_3d0 + 1;
          lVar20 = local_3c8;
        } while (local_res20 < (int)param_3[4]);
      }
      iVar8 = *(int *)((longlong)param_3 + 0x14);
      plVar13 = (longlong *)FUN_1437143d0(uVar11,0x10);
      *plVar13 = (longlong)iVar8;
      FUN_143745310(&local_368,param_3[1]);
      iVar8 = FUN_143746140(&local_368,0x3c,0,0x7fffffff);
      if (-1 < iVar8) {
        iVar21 = iVar8 + 1;
        if ((int)(local_35c & 0x3fffffff) < iVar21) {
          iVar5 = (local_35c & 0x3fffffff) * 2;
          iVar4 = iVar21;
          if (iVar21 < iVar5) {
            iVar4 = iVar5;
          }
          FUN_14370c310(&PTR_vftable_1467f0638,&local_368,iVar4,1);
        }
        *(undefined1 *)(iVar8 + local_368) = 0;
        local_360 = iVar21;
      }
      uVar14 = hkReflectUtil::internCopy(local_368,0xffffffff);
      puVar15 = (undefined8 *)FUN_1437143d0(uVar11,8);
      *puVar15 = uVar14;
      if ((((param_3[1] != 0) && (*(int *)((longlong)param_3 + 0x14) != -1)) &&
          (lVar24 = (**(code **)(*param_1 + 8))(param_1), lVar24 != local_3e0)) &&
         ((lVar20 == 0 && (local_3c8 = lVar20, lVar24 != lVar9)))) {
        lVar20 = lVar24;
        local_3c8 = lVar24;
      }
      lVar24 = local_3e0;
      local_360 = 0;
      if (-1 < (int)local_35c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_368);
      }
      local_368 = 0;
      local_35c = 0x80000000;
      FUN_14373bf70(local_390);
      lVar9 = *(longlong *)(lVar9 + 0x50);
    } while (lVar9 != 0);
    if (lVar20 != 0) {
      plVar13 = (longlong *)(lVar20 + 0x50);
      lVar9 = *plVar13;
      lVar1 = lVar20;
      while (lVar9 != 0) {
        if (lVar1 == lVar24) goto LAB_143727241;
        lVar1 = *plVar13;
        plVar13 = (longlong *)(lVar1 + 0x50);
        lVar9 = *(longlong *)(lVar1 + 0x50);
      }
      if (lVar1 != lVar24) {
        plVar13 = (longlong *)(lVar24 + 0x50);
        lVar9 = *plVar13;
        lVar6 = lVar24;
        while (lVar9 != 0) {
          lVar2 = *plVar13;
          if (lVar2 == lVar20) {
            *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(*(longlong *)(lVar6 + 0x50) + 0x50);
            break;
          }
          plVar13 = (longlong *)(lVar2 + 0x50);
          lVar6 = lVar2;
          lVar9 = *plVar13;
        }
        *(longlong *)(lVar1 + 0x50) = lVar24;
      }
    }
  }
LAB_143727241:
  *param_2 = uVar19;
  return param_2;
}



// FUNCTION 143727270 FUN_143727270 body=1807 status=ok
// SIG undefined FUN_143727270(void)

undefined4 * FUN_143727270(undefined8 *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 local_318 [32];
  undefined8 local_2f8;
  undefined8 local_2e8;
  undefined4 local_2e0;
  uint local_2dc;
  undefined1 local_258 [32];
  undefined1 local_238 [512];
  
  *(undefined1 *)(param_1 + 0x12) = 1;
  if (*(char *)((longlong)param_3 + 0x24) == '\0') {
    *param_2 = 0x80040200;
  }
  else {
    FUN_14377aba0(local_318,param_3);
    iVar15 = (int)param_3[4] + -1;
    lVar7 = (longlong)iVar15;
    if (-1 < iVar15) {
      do {
        piVar8 = (int *)(lVar7 * 0x10 + param_3[3]);
        iVar15 = *piVar8;
        if ((iVar15 == 8) && (plVar1 = *(longlong **)(piVar8 + 2), plVar1 != (longlong *)0x0)) {
          if ((*(int *)(param_1 + 8) == 1) && ((*(char *)(param_1 + 9) != '\0' && (plVar1[1] != 0)))
             ) {
            uVar4 = FUN_14377ef20(local_318);
            uVar9 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar1[1],uVar4);
            *(undefined8 *)param_1[7] = uVar9;
          }
          if (*plVar1 == 0) {
            local_2f8 = 0;
            uVar9 = FUN_143703a50();
            uVar5 = *(uint *)((longlong)param_1 + 0x44) & 0x3fffffff;
            iVar15 = *(int *)(param_1 + 8) + 1;
            if (((int)uVar5 < iVar15) && ((int)uVar5 < iVar15)) {
              iVar6 = iVar15;
              if (iVar15 < (int)(uVar5 * 2)) {
                iVar6 = uVar5 * 2;
              }
              FUN_14370c310(uVar9,param_1 + 7,iVar6,8);
            }
            FUN_143732890(param_1[7] + 8);
            *(undefined8 *)param_1[7] = 0;
            *(int *)(param_1 + 8) = iVar15;
          }
          else {
            uVar4 = FUN_14377ef20(local_318);
            uVar9 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,*plVar1,uVar4);
            uVar10 = FUN_143703a50();
            uVar5 = *(uint *)((longlong)param_1 + 0x44) & 0x3fffffff;
            iVar15 = *(int *)(param_1 + 8) + 1;
            if (((int)uVar5 < iVar15) && ((int)uVar5 < iVar15)) {
              iVar6 = iVar15;
              if (iVar15 < (int)(uVar5 * 2)) {
                iVar6 = uVar5 * 2;
              }
              FUN_14370c310(uVar10,param_1 + 7,iVar6,8);
            }
            FUN_143732890(param_1[7] + 8);
            *(undefined8 *)param_1[7] = uVar9;
            *(int *)(param_1 + 8) = iVar15;
          }
          goto LAB_14372786d;
        }
        if ((iVar15 == 2) && (puVar11 = *(undefined8 **)(piVar8 + 2), puVar11 != (undefined8 *)0x0))
        {
          if ((*(int *)(puVar11 + 1) == 0xb) && (*(int *)(puVar11 + 3) == 0)) {
            iVar15 = 0;
            if (0 < *(int *)(param_1 + 6)) {
              lVar14 = 0;
              do {
                uVar13 = **(ulonglong **)(lVar14 + param_1[5]) & 0xfffffffffffffffe;
                if ((uVar13 != 0) && (iVar6 = hkString::strCmp(uVar13,*puVar11), iVar6 == 0))
                goto LAB_143727972;
                iVar15 = iVar15 + 1;
                lVar14 = lVar14 + 8;
              } while (iVar15 < *(int *)(param_1 + 6));
            }
            uVar9 = puVar11[2];
LAB_143727821:
            FUN_143724f90(param_1,local_318,*puVar11,uVar9,0);
            goto LAB_14372786d;
          }
LAB_143727972:
          *param_2 = 0x80040200;
          goto LAB_1437278f1;
        }
        if ((iVar15 != 1) || (puVar11 = *(undefined8 **)(piVar8 + 2), puVar11 == (undefined8 *)0x0))
        {
          if ((iVar15 == 3) &&
             (puVar11 = *(undefined8 **)(piVar8 + 2), puVar11 != (undefined8 *)0x0)) {
            bVar3 = false;
            iVar15 = 0;
            lVar14 = 0;
            if (0 < *(int *)(param_1 + 6)) {
              do {
                if (((**(ulonglong **)(param_1[5] + lVar14 * 8) & 0xfffffffffffffffe) != 0) &&
                   (iVar6 = hkString::strCmp(puVar11[1]), iVar6 == 0)) {
                  FUN_1437166c0(*(undefined8 *)(param_1[5] + lVar14 * 8),*puVar11);
                  bVar3 = true;
                  break;
                }
                iVar15 = iVar15 + 1;
                lVar14 = lVar14 + 1;
              } while (iVar15 < *(int *)(param_1 + 6));
            }
            iVar15 = 0;
            if (0 < *(int *)(param_1 + 6)) {
              lVar14 = 0;
              do {
                uVar13 = **(ulonglong **)(lVar14 + param_1[5]) & 0xfffffffffffffffe;
                if ((uVar13 != 0) && (iVar6 = hkString::strCmp(uVar13,puVar11[1]), iVar6 == 0))
                goto LAB_143727972;
                iVar15 = iVar15 + 1;
                lVar14 = lVar14 + 8;
              } while (iVar15 < *(int *)(param_1 + 6));
            }
            if (bVar3) goto LAB_14372786d;
          }
          else {
            if ((iVar15 == 0xd) &&
               (puVar11 = *(undefined8 **)(piVar8 + 2), puVar11 != (undefined8 *)0x0)) {
              iVar15 = 0;
              lVar14 = 0;
              if (param_4 == 1) {
                if (*(int *)(param_1 + 6) < 1) goto LAB_143727972;
                while (((**(ulonglong **)(param_1[5] + lVar14 * 8) & 0xfffffffffffffffe) == 0 ||
                       (iVar6 = hkString::strCmp(*puVar11), iVar6 != 0))) {
                  iVar15 = iVar15 + 1;
                  lVar14 = lVar14 + 1;
                  if (*(int *)(param_1 + 6) <= iVar15) {
                    *param_2 = 0x80040200;
                    goto LAB_1437278f1;
                  }
                }
                FUN_1437166c0(*(undefined8 *)(param_1[5] + lVar14 * 8),0);
              }
              else if (0 < *(int *)(param_1 + 6)) {
                do {
                  if (((**(ulonglong **)(param_1[5] + lVar14 * 8) & 0xfffffffffffffffe) != 0) &&
                     (iVar6 = hkString::strCmp(*puVar11), iVar6 == 0)) {
                    FUN_143745310(&local_2e8,&DAT_145b8f480);
                    FUN_143745710(&local_2e8,
                                  **(ulonglong **)(param_1[5] + lVar14 * 8) & 0xfffffffffffffffe,
                                  0xffffffff);
                    FUN_143716690(*(undefined8 *)(param_1[5] + lVar14 * 8),&local_2e8);
                    local_2e0 = 0;
                    if (-1 < (int)local_2dc) {
                      FUN_143702e10(&PTR_vftable_1467f0638,local_2e8,1,local_2dc & 0x3fffffff);
                    }
                    local_2e8 = 0;
                    local_2dc = 0x80000000;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                  lVar14 = lVar14 + 1;
                } while (iVar15 < *(int *)(param_1 + 6));
              }
              uVar9 = puVar11[1];
              goto LAB_143727821;
            }
            if ((((iVar15 == 9) && (*(longlong *)(piVar8 + 2) != 0)) ||
                ((iVar15 == 7 && (*(longlong *)(piVar8 + 2) != 0)))) ||
               ((iVar15 == 0x12 && (*(longlong *)(piVar8 + 2) != 0)))) goto LAB_14372786d;
            FUN_1437134a0(local_258,local_238,0x200);
            Electra::FHTTPResourceRequest::URL(local_258,"Unknown Component");
            iVar15 = FUN_143732300(0x2e53f5e2,local_238,"Serialize\\Version\\hkVersionBundle.cpp",
                                   0xc5e);
            if (iVar15 != 0) {
              pcVar2 = (code *)swi(3);
              puVar12 = (undefined4 *)(*pcVar2)();
              return puVar12;
            }
            FUN_143713520(local_258);
          }
          goto LAB_143727972;
        }
        if ((*(int *)(puVar11 + 1) != 0xb) || (*(int *)(puVar11 + 3) != 0)) goto LAB_143727972;
        iVar15 = 0;
        lVar14 = 0;
        if (param_4 != 1) {
          if (0 < *(int *)(param_1 + 6)) {
            while (((**(ulonglong **)(param_1[5] + lVar14 * 8) & 0xfffffffffffffffe) == 0 ||
                   (iVar6 = hkString::strCmp(*puVar11), iVar6 != 0))) {
              iVar15 = iVar15 + 1;
              lVar14 = lVar14 + 1;
              if (*(int *)(param_1 + 6) <= iVar15) {
                *param_2 = 0x80040200;
                goto LAB_1437278f1;
              }
            }
            FUN_143745310(&local_2e8,&DAT_145b8f480);
            FUN_143745710(&local_2e8,**(ulonglong **)(param_1[5] + lVar14 * 8) & 0xfffffffffffffffe,
                          0xffffffff);
            FUN_143716690(*(undefined8 *)(param_1[5] + lVar14 * 8),&local_2e8);
            local_2e0 = 0;
            if (-1 < (int)local_2dc) {
              FUN_143702e10(&PTR_vftable_1467f0638,local_2e8,1,local_2dc & 0x3fffffff);
            }
            local_2e8 = 0;
            local_2dc = 0x80000000;
            goto LAB_14372786d;
          }
          goto LAB_143727972;
        }
        if (*(int *)(param_1 + 6) < 1) goto LAB_143727972;
        while (((**(ulonglong **)(param_1[5] + lVar14 * 8) & 0xfffffffffffffffe) == 0 ||
               (iVar6 = hkString::strCmp(*puVar11), iVar6 != 0))) {
          iVar15 = iVar15 + 1;
          lVar14 = lVar14 + 1;
          if (*(int *)(param_1 + 6) <= iVar15) {
            *param_2 = 0x80040200;
            goto LAB_1437278f1;
          }
        }
        FUN_1437166c0(*(undefined8 *)(param_1[5] + lVar14 * 8),0);
LAB_14372786d:
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    FUN_1437166c0(param_1 + 1,param_3[1]);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_3 + 0x14);
    if ((((param_4 == 0) && (param_3[1] != 0)) && (*(int *)((longlong)param_3 + 0x14) != -1)) &&
       (((*param_3 != 0 && (iVar15 = hkString::strCmp(), iVar15 != 0)) &&
        (puVar11 = (undefined8 *)
                   (**(code **)(*(longlong *)*param_1 + 8))
                             ((longlong *)*param_1,param_3[1],
                              *(undefined4 *)((longlong)param_3 + 0x14)), puVar11 != param_1)))) {
      FUN_143724f20(param_1,puVar11);
    }
    *param_2 = 0;
LAB_1437278f1:
    FUN_14373bf70(local_318);
  }
  return param_2;
}



// FUNCTION 143727980 FUN_143727980 body=27 status=ok
// SIG undefined FUN_143727980(void)

undefined8 FUN_143727980(longlong param_1,undefined8 param_2)

{
  FUN_1437279a0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 1437279a0 FUN_1437279a0 body=6773 status=ok
// SIG undefined FUN_1437279a0(void)

longlong * FUN_1437279a0(ulonglong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  LPVOID pvVar8;
  ulonglong *puVar9;
  int *piVar10;
  longlong *plVar11;
  uint *puVar12;
  ulonglong *puVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  ulonglong local_res8;
  longlong *local_res10;
  longlong local_res18;
  uint local_1b8 [2];
  int *local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0 [2];
  ulonglong local_198;
  undefined8 *local_190;
  uint local_188;
  uint local_184;
  uint local_180;
  longlong *local_178;
  uint local_170;
  uint local_16c;
  longlong *local_168;
  uint local_160;
  uint local_15c;
  longlong *local_158;
  uint local_150 [2];
  int *local_148;
  longlong local_140;
  uint local_138;
  uint local_134;
  uint local_130;
  longlong *local_128;
  ulonglong *local_120;
  uint local_118;
  uint local_114;
  int local_110;
  uint local_10c;
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  uint local_c4;
  undefined4 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_a4;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 local_70 [56];
  
  uVar15 = 0;
  lVar20 = *(longlong *)(param_1 + 8) + 0x18;
  *(longlong *)(param_1 + 0x1c0) = param_3;
  local_190 = (undefined8 *)0x0;
  local_188 = 0;
  local_184 = 0x80000000;
  local_180 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_d8 = lVar20;
  FUN_14377a7a0(lVar20);
  lVar16 = *(longlong *)(local_res18 + 8);
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0x80000000;
  local_c0 = 0;
  iVar19 = (int)((longlong)*(int *)(local_res18 + 0x10) * 8 >> 3);
  uVar21 = uVar15;
  if (0 < iVar19) {
    do {
      FUN_14372eee0(param_1,&local_d0,*(undefined8 *)(lVar16 + uVar21 * 8));
      uVar21 = uVar21 + 1;
    } while ((longlong)uVar21 < (longlong)iVar19);
  }
  plVar11 = (longlong *)(param_1 + 0x18);
  local_120 = (ulonglong *)0x0;
  local_118 = 0;
  local_114 = 0x80000000;
  local_168 = (longlong *)0x0;
  local_160 = 0;
  local_15c = 0x80000000;
  uVar21 = uVar15;
  if (-1 < *(int *)(param_1 + 0x24)) {
    plVar5 = (longlong *)*plVar11;
    do {
      if (*plVar5 != -1) break;
      uVar21 = (ulonglong)((int)uVar21 + 1);
      uVar15 = uVar15 + 1;
      plVar5 = plVar5 + 2;
    } while ((longlong)uVar15 <= (longlong)*(int *)(param_1 + 0x24));
  }
  iVar19 = (int)uVar21;
  plVar5 = local_f0;
  local_b8 = plVar11;
  if (iVar19 <= *(int *)(param_1 + 0x24)) {
    do {
      lVar16 = *plVar11;
      uVar4 = FUN_143703a50();
      if (local_160 == (local_15c & 0x3fffffff)) {
        FUN_14370c460(uVar4,&local_168,8);
      }
      local_168[(int)local_160] = *(longlong *)((longlong)iVar19 * 0x10 + lVar16);
      iVar19 = iVar19 + 1;
      local_160 = local_160 + 1;
      if (iVar19 <= *(int *)(param_1 + 0x24)) {
        lVar16 = (longlong)iVar19;
        plVar5 = (longlong *)(lVar16 * 0x10 + *plVar11);
        do {
          if (*plVar5 != -1) break;
          iVar19 = iVar19 + 1;
          lVar16 = lVar16 + 1;
          plVar5 = plVar5 + 2;
        } while (lVar16 <= *(int *)(param_1 + 0x24));
      }
      uVar14 = local_160;
      plVar18 = local_168;
      plVar5 = local_f0;
    } while (iVar19 <= *(int *)(param_1 + 0x24));
    while (local_f0 = plVar18, local_168 = local_f0, uVar14 != 0) {
      local_158 = local_f0 + (int)uVar14;
      if (local_f0 != local_158) {
        plVar5 = (longlong *)(param_1 + 0xc0);
        local_148 = (int *)0xffffffffffffffff;
        lVar16 = param_1 + 0xb0;
        local_e8 = plVar5;
        do {
          uVar21 = local_res8;
          plVar11 = (longlong *)*local_f0;
          local_1b0 = (int *)0x0;
          local_1a8 = 0;
          local_1a4 = 0x80000000;
          local_128 = plVar11;
          local_108 = plVar11;
          piVar6 = (int *)FUN_14372d420(*(longlong *)(local_res8 + 8) + 0x98,&local_108,&local_148);
          iVar19 = *piVar6;
          if (-1 < iVar19) {
            do {
              if ((int)(local_188 - 1) < (int)(local_180 * 2)) {
                FUN_1436ffb50(&local_190,&local_10c,local_188 * 2);
              }
              uVar14 = iVar19 * -0x61c8864f;
              uVar14 = (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                       iVar19 * -0x4f000000) & local_188 - 1;
              iVar3 = *(int *)((longlong)local_190 + (longlong)(int)uVar14 * 4);
              while ((iVar27 = 1, iVar3 != -1 && (iVar27 = 0, iVar3 != iVar19))) {
                uVar14 = uVar14 + 1 & local_188 - 1;
                iVar3 = *(int *)((longlong)local_190 + (longlong)(int)uVar14 * 4);
              }
              local_180 = local_180 + iVar27;
              *(int *)((longlong)local_190 + (longlong)(int)uVar14 * 4) = iVar19;
              uVar4 = FUN_143703a50();
              if (local_1a8 == (local_1a4 & 0x3fffffff)) {
                FUN_14370c460(uVar4,&local_1b0,4);
              }
              local_1b0[(int)local_1a8] = iVar19;
              local_1a8 = local_1a8 + 1;
              lVar20 = *(longlong *)
                        (*(longlong *)(*(longlong *)(uVar21 + 8) + 0x88) + (longlong)iVar19 * 8);
              lVar17 = *(longlong *)(lVar20 + 8);
              if (lVar17 == 0) break;
              plVar5 = (longlong *)
                       FUN_14371f4b0(*(longlong *)(uVar21 + 8),lVar17,*(undefined4 *)(lVar20 + 0x14)
                                    );
              if (*(int *)(uVar21 + 0x70) + -1 < *(int *)(uVar21 + 0x78) * 2) {
                FUN_143720a20(uVar21 + 0x68,local_150,*(int *)(uVar21 + 0x70) * 2);
              }
              uVar25 = *(int *)(uVar21 + 0x70) - 1;
              iVar19 = (int)((ulonglong)plVar5 >> 0x20);
              uVar14 = iVar19 * -0x61c8864f;
              iVar3 = 1;
              uVar23 = (int)plVar5 * -0x61c8864f;
              uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                       iVar19 * -0x4f000000;
              uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                       (int)plVar5 * -0x4f000000;
              lVar20 = *(longlong *)(uVar21 + 0x68);
              uVar14 = (uVar23 + uVar14 * 0x40 + (uVar23 >> 2) + 0x9e3779b9 ^ uVar14) & uVar25;
              lVar7 = (longlong)(int)uVar14;
              lVar17 = *(longlong *)(lVar20 + lVar7 * 8);
              while (lVar17 != -1) {
                if (*(longlong **)(lVar20 + lVar7 * 8) == plVar5) {
                  iVar3 = 0;
                  break;
                }
                uVar14 = uVar14 + 1 & uVar25;
                lVar7 = (longlong)(int)uVar14;
                lVar17 = *(longlong *)(lVar20 + lVar7 * 8);
              }
              *(int *)(uVar21 + 0x78) = *(int *)(uVar21 + 0x78) + iVar3;
              local_e0 = -1;
              *(longlong **)(lVar20 + (longlong)(int)uVar14 * 8) = plVar5;
              local_108 = plVar5;
              piVar6 = (int *)FUN_14372d420(*(longlong *)(uVar21 + 8) + 0x98,&local_108,&local_e0);
              iVar19 = *piVar6;
            } while (-1 < iVar19);
            plVar5 = (longlong *)(uVar21 + 0xc0);
          }
          puVar13 = (ulonglong *)0x0;
          local_1b8[0] = *(uint *)(uVar21 + 200);
          uVar4 = FUN_143703a50();
          FUN_14372d690(lVar16,uVar4,&local_128,local_1b8);
          pvVar8 = TlsGetValue(DAT_146b7bf70);
          if (pvVar8 == (LPVOID)0x0) {
            pvVar8 = DAT_146b7bf68;
          }
          puVar9 = (ulonglong *)
                   (**(code **)(**(longlong **)((longlong)pvVar8 + 0x58) + 8))
                             (*(longlong **)((longlong)pvVar8 + 0x58),0xa8);
          if (puVar9 != (ulonglong *)0x0) {
            *puVar9 = uVar21;
            puVar9[1] = 0;
            *(undefined4 *)(puVar9 + 2) = 0xffffffff;
            puVar9[3] = 0;
            *(undefined4 *)(puVar9 + 4) = 0xffffffff;
            puVar9[5] = 0;
            *(undefined4 *)(puVar9 + 6) = 0;
            *(undefined4 *)((longlong)puVar9 + 0x34) = 0x80000000;
            puVar9[7] = 0;
            *(undefined4 *)(puVar9 + 8) = 0;
            *(undefined4 *)((longlong)puVar9 + 0x44) = 0x80000000;
            *(undefined1 *)(puVar9 + 9) = 0;
            *(undefined4 *)((longlong)puVar9 + 0x4c) = 0xffffffff;
            puVar9[10] = 0;
            *(undefined2 *)(puVar9 + 0xb) = 0;
            *(undefined1 *)((longlong)puVar9 + 0x5a) = 0;
            puVar9[0xc] = 0;
            puVar9[0xd] = 0;
            *(undefined4 *)(puVar9 + 0xe) = 0;
            *(undefined4 *)((longlong)puVar9 + 0x74) = 0x80000000;
            puVar9[0xf] = 0;
            *(undefined4 *)(puVar9 + 0x10) = 0;
            *(undefined4 *)((longlong)puVar9 + 0x84) = 0x80000000;
            puVar9[0x11] = 0;
            *(undefined1 *)(puVar9 + 0x12) = 0;
            FUN_143722ea0(puVar9 + 0x13);
            puVar13 = puVar9;
          }
          uVar4 = FUN_143703a50();
          if (*(uint *)(plVar5 + 1) == (*(uint *)((longlong)plVar5 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar4,plVar5,8);
          }
          *(ulonglong **)(*plVar5 + (longlong)(int)plVar5[1] * 8) = puVar13;
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          uVar4 = FUN_14371f140(*(undefined8 *)(uVar21 + 8),plVar11);
          uVar2 = FUN_14371f150(*(undefined8 *)(uVar21 + 8),plVar11);
          uVar4 = FUN_1437166c0(puVar13 + 3,uVar4);
          FUN_143716660(puVar13 + 1,uVar4);
          *(undefined4 *)(puVar13 + 4) = uVar2;
          *(undefined4 *)(puVar13 + 2) = uVar2;
          *(undefined1 *)(puVar13 + 0xb) = 1;
          uVar14 = *(uint *)(uVar21 + 0x40);
          uVar25 = uVar14 - 1;
          iVar3 = (int)plVar11;
          iVar19 = (int)((ulonglong)plVar11 >> 0x20);
          uVar23 = uVar14;
          if (0 < (int)uVar25) {
            uVar24 = iVar3 * -0x61c8864f;
            uVar23 = iVar19 * -0x61c8864f;
            uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                     iVar3 * -0x4f000000;
            uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                     iVar19 * -0x4f000000;
            lVar20 = *(longlong *)(uVar21 + 0x38);
            uVar24 = (uVar24 + uVar23 * 0x40 + (uVar24 >> 2) + 0x9e3779b9 ^ uVar23) & uVar25;
            lVar7 = (longlong)(int)uVar24;
            lVar17 = *(longlong *)(lVar20 + lVar7 * 8);
            while ((uVar23 = uVar14, lVar17 != -1 &&
                   (uVar23 = uVar24, *(longlong **)(lVar20 + lVar7 * 8) != plVar11))) {
              uVar24 = uVar24 + 1 & uVar25;
              lVar7 = (longlong)(int)uVar24;
              lVar17 = *(longlong *)(lVar20 + lVar7 * 8);
            }
          }
          *(bool *)((longlong)puVar13 + 0x59) = (int)uVar23 <= (int)uVar25;
          uVar14 = *(uint *)(uVar21 + 0x58);
          uVar25 = uVar14 - 1;
          uVar23 = uVar14;
          if (0 < (int)uVar25) {
            uVar24 = iVar3 * -0x61c8864f;
            uVar23 = iVar19 * -0x61c8864f;
            uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                     iVar3 * -0x4f000000;
            uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                     iVar19 * -0x4f000000;
            lVar20 = *(longlong *)(uVar21 + 0x50);
            uVar24 = (uVar24 + uVar23 * 0x40 + (uVar24 >> 2) + 0x9e3779b9 ^ uVar23) & uVar25;
            lVar7 = (longlong)(int)uVar24;
            lVar17 = *(longlong *)(lVar20 + lVar7 * 8);
            while ((uVar23 = uVar14, lVar17 != -1 &&
                   (uVar23 = uVar24, *(longlong **)(lVar20 + lVar7 * 8) != plVar11))) {
              uVar24 = uVar24 + 1 & uVar25;
              lVar7 = (longlong)(int)uVar24;
              lVar17 = *(longlong *)(lVar20 + lVar7 * 8);
            }
          }
          *(bool *)((longlong)puVar13 + 0x5a) = (int)uVar23 <= (int)uVar25;
          if (*(char *)((longlong)puVar13 + 0x59) != '\0') {
            uVar4 = FUN_143703a50();
            if ((uint)puVar13[8] == (*(uint *)((longlong)puVar13 + 0x44) & 0x3fffffff)) {
              FUN_14370c460(uVar4,puVar13 + 7,8);
            }
            *(undefined8 *)(puVar13[7] + (longlong)(int)puVar13[8] * 8) = 0;
            *(int *)(puVar13 + 8) = (int)puVar13[8] + 1;
          }
          uVar21 = local_res8;
          piVar6 = local_1b0 + (int)local_1a8;
          for (piVar26 = local_1b0; piVar26 != piVar6; piVar26 = piVar26 + 1) {
            iVar19 = *piVar26;
            uVar4 = FUN_143703a50();
            if ((uint)puVar13[0xe] == (*(uint *)((longlong)puVar13 + 0x74) & 0x3fffffff)) {
              FUN_14370c460(uVar4,puVar13 + 0xd,4);
            }
            *(int *)(puVar13[0xd] + (longlong)(int)puVar13[0xe] * 4) = iVar19;
            *(int *)(puVar13 + 0xe) = (int)puVar13[0xe] + 1;
            lVar20 = *(longlong *)
                      (*(longlong *)(*(longlong *)(uVar21 + 8) + 0x88) + (longlong)iVar19 * 8);
            if (*(longlong *)(lVar20 + 8) != 0) {
              uVar15 = FUN_14371f4b0(*(longlong *)(uVar21 + 8),*(longlong *)(lVar20 + 8),
                                     *(undefined4 *)(lVar20 + 0x14));
              local_198 = uVar15;
              if (*(char *)(lVar20 + 0x25) == '\0') {
                uVar4 = FUN_143703a50();
                FUN_14372d690(lVar16,uVar4,&local_198,local_1b8);
              }
              else {
                local_1a0[0] = 0xffffffff;
                piVar10 = (int *)FUN_14372d420(lVar16,&local_198,local_1a0);
                if (*piVar10 == -1) {
                  uVar4 = FUN_143703a50();
                  if (local_118 == (local_114 & 0x3fffffff)) {
                    FUN_14370c460(uVar4,&local_120,8);
                  }
                  local_120[(int)local_118] = uVar15;
                  local_118 = local_118 + 1;
                }
              }
            }
            plVar5 = local_e8;
          }
          uVar4 = FUN_143703a50();
          local_1a8 = 0;
          if (-1 < (int)local_1a4) {
            FUN_143702e10(uVar4,local_1b0,4,local_1a4 & 0x3fffffff);
          }
          local_f0 = local_f0 + 1;
          local_1b0 = (int *)0x0;
          local_1a4 = 0x80000000;
          plVar11 = local_b8;
          param_1 = local_res8;
        } while (local_f0 != local_158);
      }
      uVar14 = 0;
      local_160 = 0;
      puVar13 = local_120 + (int)local_118;
      lVar20 = local_d8;
      puVar9 = local_120;
      plVar5 = local_f0;
      if (local_120 == puVar13) break;
      do {
        uVar21 = *puVar9;
        local_198 = uVar21;
        iVar19 = FUN_14372a960(plVar11,&local_198);
        if (*(int *)((longlong)plVar11 + 0xc) < iVar19) {
          uVar4 = FUN_143703a50();
          if (local_160 == (local_15c & 0x3fffffff)) {
            FUN_14370c460(uVar4,&local_168,8);
          }
          local_148 = (int *)0x0;
          local_168[(int)local_160] = uVar21;
          local_160 = local_160 + 1;
          uVar4 = FUN_143703a50();
          FUN_14372d6e0(plVar11,uVar4,&local_198,&local_148);
          uVar14 = local_160;
        }
        puVar9 = puVar9 + 1;
        lVar20 = local_d8;
        param_1 = local_res8;
        plVar18 = local_168;
        plVar5 = local_f0;
      } while (puVar9 != puVar13);
    }
  }
  local_f0 = plVar5;
  uVar23 = local_188;
  lVar7 = (longlong)(int)local_188;
  lVar17 = 0;
  local_140 = 0;
  local_138 = 0;
  local_1b8[0] = local_188;
  local_134 = 0x80000000;
  uVar4 = FUN_143703a50();
  uVar14 = local_1b8[0];
  lVar16 = lVar17;
  if (local_1b8[0] != 0) {
    lVar16 = FUN_143702d60(uVar4,4,local_1b8);
  }
  local_134 = 0x80000000;
  if (local_1b8[0] != 0) {
    local_134 = local_1b8[0];
  }
  local_140 = lVar16;
  local_130 = local_180;
  if (0 < (int)uVar23) {
    do {
      *(undefined4 *)(lVar16 + lVar17 * 4) = *(undefined4 *)((longlong)local_190 + lVar17 * 4);
      lVar17 = lVar17 + 1;
    } while (lVar17 < lVar7);
  }
  while (local_138 = uVar14, (local_130 & 0x7fffffff) != 0) {
    plVar5 = (longlong *)0x0;
    local_1b8[0] = uVar14;
    uVar4 = FUN_143703a50();
    uVar23 = local_1b8[0];
    plVar11 = plVar5;
    if (local_1b8[0] != 0) {
      plVar11 = (longlong *)FUN_143702d60(uVar4,4,local_1b8);
    }
    uVar25 = 0x80000000;
    if (local_1b8[0] != 0) {
      uVar25 = local_1b8[0];
    }
    plVar18 = plVar5;
    if (0 < (int)uVar14) {
      do {
        *(undefined4 *)((longlong)plVar11 + (longlong)plVar18 * 4) =
             *(undefined4 *)(local_140 + (longlong)plVar18 * 4);
        plVar18 = (longlong *)((longlong)plVar18 + 1);
      } while ((longlong)plVar18 < (longlong)(int)uVar14);
    }
    local_150[0] = uVar25;
    local_108 = plVar11;
    FUN_143729ad0(&local_140);
    local_110 = uVar23 - 1;
    uVar14 = 0;
    lVar16 = (longlong)local_110;
    plVar18 = plVar5;
    if (-1 < local_110) {
      do {
        uVar14 = (uint)plVar18;
        if (*(int *)((longlong)plVar11 + (longlong)plVar5 * 4) != -1) break;
        uVar14 = uVar14 + 1;
        plVar18 = (longlong *)(ulonglong)uVar14;
        plVar5 = (longlong *)((longlong)plVar5 + 1);
      } while ((longlong)plVar5 <= lVar16);
    }
    local_148 = (int *)(longlong)(int)uVar14;
    local_f8 = lVar16;
    iVar19 = local_110;
    if ((int)uVar14 <= local_110) {
      do {
        uVar21 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) +
                  (longlong)*(int *)((longlong)plVar11 + (longlong)(int)local_148 * 4) * 8);
        iVar3 = *(int *)(uVar21 + 0x20) + -1;
        local_e0 = (longlong)iVar3;
        local_198 = uVar21;
        if (-1 < iVar3) {
          do {
            piVar6 = (int *)(local_e0 * 0x10 + *(longlong *)(uVar21 + 0x18));
            if ((*piVar6 == 7) &&
               (local_78 = *(undefined8 **)(piVar6 + 2), local_78 != (undefined8 *)0x0)) {
              local_80 = local_78 + 1;
              plVar11 = (longlong *)
                        FUN_14371f4b0(*(undefined8 *)(param_1 + 8),*local_78,
                                      *(undefined4 *)(local_78 + 1));
              local_128 = (longlong *)&DAT_ffffffffffffffff;
              local_158 = plVar11;
              local_e8 = plVar11;
              piVar6 = (int *)FUN_14372d420(*(longlong *)(param_1 + 8) + 0x98,&local_158,&local_128)
              ;
              iVar19 = *piVar6;
              if (iVar19 != -1) {
                uVar23 = local_188 - 1;
                uVar14 = local_188;
                if (0 < (int)uVar23) {
                  uVar14 = iVar19 * -0x61c8864f;
                  uVar25 = (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                           iVar19 * -0x4f000000) & uVar23;
                  iVar3 = *(int *)((longlong)local_190 + (longlong)(int)uVar25 * 4);
                  while ((uVar14 = local_188, iVar3 != -1 && (uVar14 = uVar25, iVar3 != iVar19))) {
                    uVar25 = uVar25 + 1 & uVar23;
                    iVar3 = *(int *)((longlong)local_190 + (longlong)(int)uVar25 * 4);
                  }
                }
                if ((int)uVar23 < (int)uVar14) {
                  if ((int)(local_138 - 1) < (int)(local_130 * 2)) {
                    FUN_1436ffb50(&local_140,&local_10c,local_138 * 2);
                  }
                  uVar14 = iVar19 * -0x61c8864f;
                  iVar27 = 1;
                  uVar14 = (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                           iVar19 * -0x4f000000) & local_138 - 1;
                  iVar3 = *(int *)(local_140 + (longlong)(int)uVar14 * 4);
                  while (iVar3 != -1) {
                    if (iVar3 == iVar19) {
                      iVar27 = 0;
                      break;
                    }
                    uVar14 = uVar14 + 1 & local_138 - 1;
                    iVar3 = *(int *)(local_140 + (longlong)(int)uVar14 * 4);
                  }
                  local_130 = local_130 + iVar27;
                  *(int *)(local_140 + (longlong)(int)uVar14 * 4) = iVar19;
                }
              }
              lVar16 = param_1 + 0xb0;
              local_100 = lVar16;
              iVar19 = FUN_14372a960(lVar16,&local_e8);
              uVar21 = local_198;
              if (*(int *)(param_1 + 0xbc) < iVar19) {
                local_1a4 = 0x80000000;
                local_1b0 = (int *)0x0;
                local_1a8 = 0;
                local_178 = (longlong *)0x0;
                local_170 = 0;
                local_16c = 0x80000000;
                uVar4 = FUN_143703a50();
                if (local_170 == (local_16c & 0x3fffffff)) {
                  FUN_14370c460(uVar4,&local_178,8);
                }
                bVar1 = false;
                local_90 = 0xffffffffffffffff;
                local_178[(int)local_170] = (longlong)plVar11;
                local_1b8[0] = *(uint *)(param_1 + 200);
                uVar14 = local_170 + 1;
                local_170 = uVar14;
                local_128 = plVar11;
                piVar6 = (int *)FUN_14372d420(*(longlong *)(param_1 + 8) + 0x98,&local_128,&local_90
                                             );
                iVar19 = *piVar6;
                if (iVar19 < 0) {
LAB_1437289d9:
                  uVar15 = 0;
                  uVar21 = (ulonglong)
                           ((longlong)(local_178 + (int)uVar14) + (7 - (longlong)local_178)) >> 3;
                  if (local_178 + (int)uVar14 < local_178) {
                    uVar21 = uVar15;
                  }
                  plVar5 = local_178;
                  if (uVar21 != 0) {
                    do {
                      local_100 = *plVar5;
                      uVar4 = FUN_143703a50();
                      FUN_14372d690(lVar16,uVar4,&local_100,local_1b8);
                      uVar15 = uVar15 + 1;
                      plVar5 = plVar5 + 1;
                    } while (uVar15 != uVar21);
                  }
                  pvVar8 = TlsGetValue(DAT_146b7bf70);
                  if (pvVar8 == (LPVOID)0x0) {
                    pvVar8 = DAT_146b7bf68;
                  }
                  puVar13 = (ulonglong *)
                            (**(code **)(**(longlong **)((longlong)pvVar8 + 0x58) + 8))
                                      (*(longlong **)((longlong)pvVar8 + 0x58),0xa8);
                  if (puVar13 != (ulonglong *)0x0) {
                    *puVar13 = param_1;
                    puVar13[1] = 0;
                    *(undefined4 *)(puVar13 + 2) = 0xffffffff;
                    puVar13[3] = 0;
                    *(undefined4 *)(puVar13 + 4) = 0xffffffff;
                    puVar13[5] = 0;
                    *(undefined4 *)(puVar13 + 6) = 0;
                    *(undefined4 *)((longlong)puVar13 + 0x34) = 0x80000000;
                    puVar13[7] = 0;
                    *(undefined4 *)(puVar13 + 8) = 0;
                    *(undefined4 *)((longlong)puVar13 + 0x44) = 0x80000000;
                    *(undefined1 *)(puVar13 + 9) = 0;
                    *(undefined4 *)((longlong)puVar13 + 0x4c) = 0xffffffff;
                    puVar13[10] = 0;
                    *(undefined2 *)(puVar13 + 0xb) = 0;
                    *(undefined1 *)((longlong)puVar13 + 0x5a) = 0;
                    puVar13[0xc] = 0;
                    puVar13[0xd] = 0;
                    *(undefined4 *)(puVar13 + 0xe) = 0;
                    *(undefined4 *)((longlong)puVar13 + 0x74) = 0x80000000;
                    puVar13[0xf] = 0;
                    *(undefined4 *)(puVar13 + 0x10) = 0;
                    *(undefined4 *)((longlong)puVar13 + 0x84) = 0x80000000;
                    puVar13[0x11] = 0;
                    *(undefined1 *)(puVar13 + 0x12) = 0;
                    FUN_143722ea0(puVar13 + 0x13);
                  }
                  uVar4 = FUN_143703a50();
                  if (*(uint *)(param_1 + 200) == (*(uint *)(param_1 + 0xcc) & 0x3fffffff)) {
                    FUN_14370c460(uVar4,(longlong *)(param_1 + 0xc0),8);
                  }
                  *(ulonglong **)
                   (*(longlong *)(param_1 + 0xc0) + (longlong)*(int *)(param_1 + 200) * 8) = puVar13
                  ;
                  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
                  uVar2 = FUN_14371f150(*(undefined8 *)(param_1 + 8),plVar11);
                  uVar4 = FUN_14371f140(*(undefined8 *)(param_1 + 8),plVar11);
                  uVar4 = FUN_1437166c0(puVar13 + 3,uVar4);
                  FUN_143716660(puVar13 + 1,uVar4);
                  *(undefined4 *)(puVar13 + 4) = uVar2;
                  *(undefined4 *)(puVar13 + 2) = uVar2;
                  *(undefined1 *)(puVar13 + 0xb) = 0;
                  piVar6 = local_1b0 + (int)local_1a8;
                  for (piVar26 = local_1b0; piVar26 != piVar6; piVar26 = piVar26 + 1) {
                    iVar19 = *piVar26;
                    uVar4 = FUN_143703a50();
                    if ((uint)puVar13[0xe] == (*(uint *)((longlong)puVar13 + 0x74) & 0x3fffffff)) {
                      FUN_14370c460(uVar4,puVar13 + 0xd,4);
                    }
                    *(int *)(puVar13[0xd] + (longlong)(int)puVar13[0xe] * 4) = iVar19;
                    *(int *)(puVar13 + 0xe) = (int)puVar13[0xe] + 1;
                  }
                }
                else {
                  do {
                    lVar17 = *(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) +
                              (longlong)iVar19 * 8);
                    if ((int)(local_188 - 1) < (int)(local_180 * 2)) {
                      FUN_1436ffb50(&local_190,&local_b8,local_188 * 2);
                    }
                    uVar14 = iVar19 * -0x61c8864f;
                    iVar27 = 1;
                    uVar14 = (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                             iVar19 * -0x4f000000) & local_188 - 1;
                    iVar3 = *(int *)((longlong)local_190 + (longlong)(int)uVar14 * 4);
                    while (iVar3 != -1) {
                      if (iVar3 == iVar19) {
                        iVar27 = 0;
                        break;
                      }
                      uVar14 = uVar14 + 1 & local_188 - 1;
                      iVar3 = *(int *)((longlong)local_190 + (longlong)(int)uVar14 * 4);
                    }
                    local_180 = local_180 + iVar27;
                    *(int *)((longlong)local_190 + (longlong)(int)uVar14 * 4) = iVar19;
                    uVar4 = FUN_143703a50();
                    if (local_1a8 == (local_1a4 & 0x3fffffff)) {
                      FUN_14370c460(uVar4,&local_1b0,4);
                    }
                    local_1b0[(int)local_1a8] = iVar19;
                    local_1a8 = local_1a8 + 1;
                    lVar7 = *(longlong *)(lVar17 + 8);
                    if (lVar7 == 0) break;
                    plVar5 = (longlong *)
                             FUN_14371f4b0(*(undefined8 *)(param_1 + 8),lVar7,
                                           *(undefined4 *)(lVar17 + 0x14));
                    local_88 = 0xffffffffffffffff;
                    local_158 = plVar5;
                    local_128 = plVar5;
                    piVar6 = (int *)FUN_14372d420(*(longlong *)(param_1 + 8) + 0x98,&local_158,
                                                  &local_88);
                    local_1a0[0] = 0xffffffff;
                    iVar19 = *piVar6;
                    puVar12 = (uint *)FUN_14372d420(lVar16,&local_128,local_1a0);
                    local_1a0[0] = *puVar12;
                    if (-1 < (int)local_1a0[0]) {
                      plVar11 = (longlong *)((longlong)(int)local_1a0[0] * 8);
                      lVar17 = *(longlong *)((longlong)plVar11 + *(longlong *)(param_1 + 0xc0));
                      local_158 = plVar11;
                      if ((*(char *)(lVar17 + 0x58) != '\0') && (1 < DAT_146b823d8)) {
                        FUN_14373a730(local_70,&DAT_146b823d0,2);
                        lVar17 = FUN_14373bbd0(local_70,
                                               "{} ({}) is in the file but there is a patch dependency on {} ({}) in patch {} ({}). This usually indicates patch dependencies are not correct."
                                               ,&DAT_145b8f8c8,lVar17 + 0x18,lVar17 + 0x20,local_78,
                                               local_80,local_198,local_198 + 0x10,0);
                        *(char **)(lVar17 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
                        *(undefined8 *)(lVar17 + 0x28) = 0x602;
                        FUN_14373a950(local_70);
                      }
                      iVar19 = 0;
                      plVar5 = plVar11;
                      if (0 < (int)local_1a8) {
                        lVar17 = 0;
                        do {
                          piVar6 = local_1b0;
                          lVar16 = *(longlong *)
                                    ((longlong)plVar11 + *(longlong *)(local_res8 + 0xc0));
                          uVar4 = FUN_143703a50();
                          iVar27 = *(int *)(lVar16 + 0x70);
                          uVar14 = *(uint *)(lVar16 + 0x74) & 0x3fffffff;
                          iVar3 = iVar27 + 1;
                          if (((int)uVar14 < iVar3) && ((int)uVar14 < iVar3)) {
                            iVar28 = iVar3;
                            if (iVar3 < (int)(uVar14 * 2)) {
                              iVar28 = uVar14 * 2;
                            }
                            FUN_14370c310(uVar4,lVar16 + 0x68,iVar28,4);
                          }
                          lVar20 = *(longlong *)(lVar16 + 0x68) + (longlong)iVar19 * 4;
                          FUN_143732890(lVar20 + 4,lVar20,(longlong)(iVar27 - iVar19) << 2);
                          iVar19 = iVar19 + 1;
                          *(undefined4 *)(*(longlong *)(lVar16 + 0x68) + lVar17) =
                               *(undefined4 *)((longlong)piVar6 + lVar17);
                          lVar17 = lVar17 + 4;
                          *(int *)(lVar16 + 0x70) = iVar3;
                          lVar20 = local_d8;
                          lVar16 = local_100;
                          param_1 = local_res8;
                          plVar5 = local_158;
                        } while (iVar19 < (int)local_1a8);
                      }
                      plVar11 = local_e8;
                      lVar17 = *(longlong *)(param_1 + 0xc0);
                      uVar2 = FUN_14371f150(*(undefined8 *)(param_1 + 8),local_e8);
                      uVar4 = FUN_14371f140(*(undefined8 *)(param_1 + 8),plVar11);
                      lVar17 = *(longlong *)(lVar17 + (longlong)plVar5);
                      uVar4 = FUN_1437166c0(lVar17 + 0x18,uVar4);
                      FUN_143716660(lVar17 + 8,uVar4);
                      *(undefined4 *)(lVar17 + 0x20) = uVar2;
                      *(undefined4 *)(lVar17 + 0x10) = uVar2;
                      uVar15 = 0;
                      uVar21 = (ulonglong)
                               ((longlong)(local_178 + (int)local_170) + (7 - (longlong)local_178))
                               >> 3;
                      if (local_178 + (int)local_170 < local_178) {
                        uVar21 = uVar15;
                      }
                      plVar5 = local_178;
                      if (uVar21 != 0) {
                        do {
                          local_158 = (longlong *)*plVar5;
                          uVar4 = FUN_143703a50();
                          FUN_14372d690(lVar16,uVar4,&local_158,local_1a0);
                          uVar15 = uVar15 + 1;
                          plVar5 = plVar5 + 1;
                        } while (uVar15 != uVar21);
                      }
                      bVar1 = true;
                      iVar19 = -1;
                      plVar5 = local_128;
                    }
                    uVar4 = FUN_143703a50();
                    if (local_170 == (local_16c & 0x3fffffff)) {
                      FUN_14370c460(uVar4,&local_178,8);
                    }
                    local_178[(int)local_170] = (longlong)plVar5;
                    local_170 = local_170 + 1;
                  } while (-1 < iVar19);
                  uVar14 = local_170;
                  if (!bVar1) goto LAB_1437289d9;
                }
                uVar4 = FUN_143703a50();
                local_170 = 0;
                if (-1 < (int)local_16c) {
                  FUN_143702e10(uVar4,local_178,8,local_16c & 0x3fffffff);
                }
                local_178 = (longlong *)0x0;
                local_16c = 0x80000000;
                uVar4 = FUN_143703a50();
                local_1a8 = 0;
                if (-1 < (int)local_1a4) {
                  FUN_143702e10(uVar4,local_1b0,4,local_1a4 & 0x3fffffff);
                }
                local_1b0 = (int *)0x0;
                local_1a4 = 0x80000000;
                uVar21 = local_198;
              }
            }
            local_e0 = local_e0 + -1;
            lVar16 = local_f8;
            plVar11 = local_108;
            iVar19 = local_110;
          } while (-1 < local_e0);
        }
        iVar3 = (int)local_148 + 1;
        for (lVar17 = (longlong)iVar3;
            (lVar17 <= lVar16 && (*(int *)((longlong)plVar11 + lVar17 * 4) == -1));
            lVar17 = lVar17 + 1) {
          iVar3 = iVar3 + 1;
        }
        local_148 = (int *)(longlong)iVar3;
        uVar25 = local_150[0];
      } while (iVar3 <= iVar19);
    }
    uVar15 = 0;
    iVar19 = local_138 - 1;
    uVar21 = uVar15;
    if (-1 < iVar19) {
      do {
        if (*(int *)(local_140 + uVar15 * 4) != -1) break;
        uVar21 = (ulonglong)((int)uVar21 + 1);
        uVar15 = uVar15 + 1;
      } while ((longlong)uVar15 <= (longlong)iVar19);
    }
    iVar3 = (int)uVar21;
    if (iVar3 <= iVar19) {
      do {
        iVar19 = *(int *)(local_140 + (longlong)iVar3 * 4);
        if ((int)(local_188 - 1) < (int)(local_180 * 2)) {
          FUN_1436ffb50(&local_190,&local_f0,local_188 * 2);
        }
        iVar28 = 1;
        uVar14 = iVar19 * -0x61c8864f;
        uVar14 = (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                 iVar19 * -0x4f000000) & local_188 - 1;
        iVar27 = *(int *)((longlong)local_190 + (longlong)(int)uVar14 * 4);
        while (iVar27 != -1) {
          if (iVar27 == iVar19) {
            iVar28 = 0;
            break;
          }
          uVar14 = uVar14 + 1 & local_188 - 1;
          iVar27 = *(int *)((longlong)local_190 + (longlong)(int)uVar14 * 4);
        }
        local_180 = local_180 + iVar28;
        iVar3 = iVar3 + 1;
        *(int *)((longlong)local_190 + (longlong)(int)uVar14 * 4) = iVar19;
        for (lVar16 = (longlong)iVar3;
            (lVar16 <= (int)(local_138 - 1) && (*(int *)(local_140 + lVar16 * 4) == -1));
            lVar16 = lVar16 + 1) {
          iVar3 = iVar3 + 1;
        }
      } while (iVar3 <= (int)(local_138 - 1));
    }
    uVar4 = FUN_143703a50();
    uVar14 = local_138;
    if (-1 < (int)uVar25) {
      FUN_143702e10(uVar4,plVar11,4,uVar25 & 0x3fffffff);
      uVar14 = local_138;
    }
  }
  local_1b8[0] = local_180 & 0x7fffffff;
  uVar4 = FUN_143703a50();
  uVar14 = local_1b8[0];
  local_10c = local_1b8[0];
  if (local_1b8[0] == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_143702d60(uVar4,4,local_1b8);
  }
  uVar23 = 0x80000000;
  if (local_1b8[0] != 0) {
    uVar23 = local_1b8[0];
  }
  uVar22 = 0;
  iVar19 = local_188 - 1;
  uVar25 = 0;
  uVar21 = uVar22;
  uVar15 = uVar22;
  if (-1 < iVar19) {
    do {
      uVar25 = (uint)uVar15;
      if (*(int *)((longlong)local_190 + uVar21 * 4) != -1) break;
      uVar25 = uVar25 + 1;
      uVar15 = (ulonglong)uVar25;
      uVar21 = uVar21 + 1;
    } while ((longlong)uVar21 <= (longlong)iVar19);
  }
  piVar26 = piVar6;
  if ((int)uVar25 <= iVar19) {
    do {
      lVar16 = (longlong)(int)uVar25;
      uVar25 = uVar25 + 1;
      *piVar26 = *(int *)((longlong)local_190 + lVar16 * 4);
      for (lVar16 = (longlong)(int)uVar25;
          (lVar16 <= (int)(local_188 - 1) && (*(int *)((longlong)local_190 + lVar16 * 4) == -1));
          lVar16 = lVar16 + 1) {
        uVar25 = uVar25 + 1;
      }
      piVar26 = piVar26 + 1;
    } while ((int)uVar25 <= (int)(local_188 - 1));
  }
  local_1a0[0] = uVar23;
  local_148 = piVar6;
  if (1 < (int)uVar14) {
    FUN_143722dd0(piVar6,0,uVar14 - 1,local_res8 & 0xff);
  }
  uVar21 = local_res8;
  if (0 < *(int *)(local_res8 + 200)) {
    lVar17 = 0;
    lVar16 = lVar17;
    do {
      lVar20 = *(longlong *)(lVar16 + *(longlong *)(uVar21 + 0xc0));
      local_198 = *(ulonglong *)(lVar20 + 8) & 0xfffffffffffffffe;
      local_1b8[0] = *(uint *)(lVar20 + 0x10);
      if (*(int *)(lVar20 + 0x70) != 0) {
        lVar7 = *(longlong *)
                 (*(longlong *)(*(longlong *)(uVar21 + 8) + 0x88) +
                 (longlong)
                 *(int *)(*(longlong *)(lVar20 + 0x68) +
                         (longlong)(*(int *)(lVar20 + 0x70) + -1) * 4) * 8);
        local_198 = *(ulonglong *)(lVar7 + 8);
        local_1b8[0] = *(uint *)(lVar7 + 0x14);
      }
      lVar29 = 0;
      lVar7 = lVar17;
      if ((((local_1b8[0] != 0x80000000) && (local_1b8[0] != 0xffffffff)) &&
          (lVar7 = lVar29, *(char *)(lVar20 + 0x59) == '\0')) && (*(char *)(lVar20 + 0x5a) == '\0'))
      {
        lVar29 = (**(code **)(**(longlong **)(uVar21 + 0x10) + 0x18))();
        if (lVar29 == 0) {
          if (1 < DAT_146b823d8) {
            FUN_14373a730(local_70,&DAT_146b823d0,2);
            lVar29 = FUN_14373bbd0(local_70,
                                   "Type {} was seen while loading but it is not registered. Most likely patches are not registered or missing"
                                   ,&DAT_145b74470,&local_198,0);
            *(char **)(lVar29 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
            *(undefined8 *)(lVar29 + 0x28) = 0x668;
            FUN_14373a950(local_70);
          }
        }
        else {
          uVar14 = FUN_143715430(lVar29);
          if (uVar14 == local_1b8[0]) {
            FUN_143725210(lVar20,lVar29,1);
            lVar7 = *(longlong *)(lVar29 + 8);
          }
          else if (1 < DAT_146b823d8) {
            local_150[0] = FUN_143715430(lVar29);
            FUN_14373a730(local_70,&DAT_146b823d0,2);
            lVar29 = FUN_14373bbd0(local_70,
                                   "Type {} version {} was seen while loading but the native version is {}. Most likely patches are not registered or missing"
                                   ,&DAT_145b8f900,&local_198,local_1b8,local_150,0);
            *(char **)(lVar29 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
            *(undefined8 *)(lVar29 + 0x28) = 0x66c;
            FUN_14373a950(local_70);
          }
        }
      }
      iVar19 = *(int *)(lVar20 + 0x70) + -1;
      lVar29 = (longlong)iVar19;
      if (-1 < iVar19) {
        do {
          FUN_143727270(lVar20,&local_f0,
                        *(undefined8 *)
                         (*(longlong *)(*(longlong *)(uVar21 + 8) + 0x88) +
                         (longlong)*(int *)(*(longlong *)(lVar20 + 0x68) + lVar29 * 4) * 8),0);
          lVar29 = lVar29 + -1;
        } while (-1 < lVar29);
      }
      if ((*(int *)(lVar20 + 0x40) == 1) && ((lVar7 != 0 || (*(char *)(lVar20 + 0x59) != '\0')))) {
        local_100 = FUN_14371f4b0(*(undefined8 *)(uVar21 + 8),
                                  *(ulonglong *)(lVar20 + 0x18) & 0xfffffffffffffffe,
                                  *(undefined4 *)(lVar20 + 0x20));
        local_f8 = -1;
        plVar11 = (longlong *)FUN_14372d420(uVar21 + 0x28,&local_100,&local_f8);
        local_f8 = *plVar11;
        if (local_f8 != -1) {
          local_110 = -1;
          piVar6 = (int *)FUN_14372d420(uVar21 + 0xb0,&local_f8,&local_110);
          lVar7 = *(longlong *)(*(longlong *)(uVar21 + 0xc0) + (longlong)*piVar6 * 8);
          if (**(longlong **)(lVar20 + 0x38) != lVar7) {
            **(longlong **)(lVar20 + 0x38) = lVar7;
          }
        }
      }
      uVar25 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar25;
      lVar16 = lVar16 + 8;
      lVar20 = local_d8;
      piVar6 = local_148;
      uVar14 = local_10c;
      uVar23 = local_1a0[0];
    } while ((int)uVar25 < *(int *)(uVar21 + 200));
  }
  uVar21 = local_res8;
  uVar15 = 0;
  FUN_14372a680(local_res8);
  iVar19 = *(int *)(uVar21 + 200);
  FUN_143729be0(uVar21,local_res18);
  if ((iVar19 != *(int *)(uVar21 + 200)) && (1 < DAT_146b823d8)) {
    FUN_14373a730(local_70,&DAT_146b823d0,2);
    lVar16 = FUN_14373bbd0(local_70,
                           "Types were added during versioning input handling, this usually indicates patches are not set up correctly"
                           ,&DAT_145b909f0,0);
    *(char **)(lVar16 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
    *(undefined8 *)(lVar16 + 0x28) = 0x69e;
    FUN_14373a950(local_70);
  }
  uVar22 = (ulonglong)((longlong)(piVar6 + (int)uVar14) + (3 - (longlong)piVar6)) >> 2;
  if (piVar6 + (int)uVar14 < piVar6) {
    uVar22 = uVar15;
  }
  piVar26 = piVar6;
  if (uVar22 != 0) {
    do {
      FUN_143726790(uVar21,&local_res8,
                    *(undefined8 *)
                     (*(longlong *)(*(longlong *)(uVar21 + 8) + 0x88) + (longlong)*piVar26 * 8));
      uVar15 = uVar15 + 1;
      piVar26 = piVar26 + 1;
    } while (uVar15 != uVar22);
  }
  local_a4 = 0x80000000;
  local_b0 = 0;
  local_a8 = 0;
  FUN_143734b10(local_a0);
  plVar11 = local_res10;
  *(undefined1 *)(uVar21 + 0x2f0) = 1;
  *local_res10 = uVar21 + 0x1c8;
  thunk_FUN_143734820(local_a0);
  uVar4 = FUN_143703a50();
  local_a8 = 0;
  if (-1 < (int)local_a4) {
    FUN_143702e10(uVar4,local_b0,0x10,local_a4 & 0x3fffffff);
  }
  local_b0 = 0;
  local_a4 = 0x80000000;
  uVar4 = FUN_143703a50();
  if (-1 < (int)uVar23) {
    FUN_143702e10(uVar4,piVar6,4,uVar23 & 0x3fffffff);
  }
  uVar4 = FUN_143703a50();
  local_138 = 0;
  if (-1 < (int)local_134) {
    FUN_143702e10(uVar4,local_140,4,local_134 & 0x3fffffff);
  }
  local_140 = 0;
  local_134 = 0x80000000;
  uVar4 = FUN_143703a50();
  local_160 = 0;
  if (-1 < (int)local_15c) {
    FUN_143702e10(uVar4,local_168,8,local_15c & 0x3fffffff);
  }
  local_168 = (longlong *)0x0;
  local_15c = 0x80000000;
  uVar4 = FUN_143703a50();
  local_118 = 0;
  if (-1 < (int)local_114) {
    FUN_143702e10(uVar4,local_120,8,local_114 & 0x3fffffff);
  }
  local_120 = (ulonglong *)0x0;
  local_114 = 0x80000000;
  uVar4 = FUN_143703a50();
  local_c8 = 0;
  if (-1 < (int)local_c4) {
    FUN_143702e10(uVar4,local_d0,8,local_c4 & 0x3fffffff);
  }
  local_d0 = 0;
  local_c4 = 0x80000000;
  FUN_14377a830(lVar20);
  uVar4 = FUN_143703a50();
  local_188 = 0;
  if (-1 < (int)local_184) {
    FUN_143702e10(uVar4,local_190,4,local_184 & 0x3fffffff);
  }
  return plVar11;
}



// FUNCTION 143729420 FUN_143729420 body=1158 status=ok
// SIG undefined FUN_143729420(void)

longlong FUN_143729420(longlong param_1,uint *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte bVar9;
  short *psVar10;
  int iVar11;
  uint *local_res10;
  uint *local_res18;
  longlong local_res20;
  longlong local_408;
  uint local_400;
  uint local_3fc;
  longlong local_3f8;
  short *local_3f0;
  undefined1 local_3e8 [80];
  uint local_398;
  undefined8 local_390;
  ulonglong local_388;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_320;
  ulonglong local_2c0;
  undefined1 local_208 [96];
  ulonglong local_1a8;
  undefined8 local_130;
  longlong local_f8;
  
  local_res10 = (uint *)0x0;
  local_res18 = param_2;
  plVar2 = (longlong *)FUN_14372d420(param_1 + 0x2d8,&local_res18,&local_res10);
  if (*plVar2 != 0) {
    return *plVar2;
  }
  FUN_143737060(local_3e8);
  FUN_143737b00(local_3e8,param_2,0xffffffff);
  local_388 = local_388 | 0x1000000;
  local_398 = local_398 | 0x1000;
  local_2c0 = (ulonglong)local_398;
  puVar3 = (undefined8 *)FUN_143714490(param_2,1);
  if (puVar3 == (undefined8 *)0x0) {
    bVar9 = 0;
  }
  else {
    bVar9 = (byte)*puVar3;
  }
  puVar4 = (uint *)0x0;
  if ((bVar9 & 0xf) == 7) {
    puVar4 = param_2;
  }
  if (puVar4 == (uint *)0x0) {
    puVar3 = (undefined8 *)FUN_143714490(param_2,1);
    if (puVar3 == (undefined8 *)0x0) {
      bVar9 = 0;
    }
    else {
      bVar9 = (byte)*puVar3;
    }
    puVar4 = (uint *)0x0;
    if ((bVar9 & 0xf) == 6) {
      puVar4 = param_2;
    }
    if (puVar4 != (uint *)0x0) goto LAB_14372950a;
    FUN_143738110(local_3e8,0);
  }
  else {
LAB_14372950a:
    FUN_143738110(local_3e8,param_1);
    local_388 = local_388 | 0x1000;
    local_320 = 0;
  }
  if ((~(byte)*param_2 & 1) == 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_2,1);
    bVar9 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar3;
    }
    puVar4 = (uint *)0x0;
    if ((bVar9 & 0xf) == 6) {
      puVar4 = param_2;
    }
    if (puVar4 == (uint *)0x0) {
      puVar3 = (undefined8 *)FUN_143714490(param_2,1);
      bVar9 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        bVar9 = (byte)*puVar3;
      }
      puVar4 = (uint *)0x0;
      if ((bVar9 & 0xf) == 8) {
        puVar4 = param_2;
      }
      if (puVar4 == (uint *)0x0) goto LAB_143729606;
      uVar5 = FUN_1437151a0(puVar4);
      local_370 = FUN_143720d90(param_1 + 0xd0,uVar5,param_1);
    }
    else {
      uVar5 = FUN_1437151a0(puVar4);
      local_370 = FUN_143720e00(param_1 + 0xd0,uVar5,param_1);
    }
    local_388 = local_388 | 4;
    plVar2 = (longlong *)FUN_143714420(puVar4,2);
    if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
      puVar3 = (undefined8 *)FUN_143714420(puVar4,2);
      if (puVar3 == (undefined8 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar3;
      }
      local_378 = FUN_143729420(param_1,uVar5);
      local_388 = local_388 | 2;
    }
  }
LAB_143729606:
  if (*(longlong *)(param_2 + 2) != 0) {
    local_390 = FUN_143729420(param_1);
  }
  local_3f8 = param_1 + 0xd0;
  local_res20 = FUN_143737a80(local_3e8,local_3f8);
  local_res10 = param_2;
  uVar5 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0x2d8,uVar5,&local_res10,&local_res20);
  if ((((*param_2 >> 0x1a & 1) != 0) &&
      (puVar3 = (undefined8 *)FUN_1437143d0(param_2), puVar3 != (undefined8 *)0x0)) &&
     (psVar10 = (short *)*puVar3, local_3f0 = psVar10, psVar10 != (short *)0x0)) {
    local_408 = 0;
    iVar11 = 0;
    local_400 = 0;
    local_3fc = 0x80000000;
    if (0 < (int)psVar10[1] + (int)*psVar10) {
      do {
        FUN_143714060(&local_res18,*(undefined8 *)(psVar10 + (longlong)iVar11 * 4 + 4));
        lVar6 = FUN_1437151c0(&local_res18);
        if ((lVar6 != 0) &&
           (pbVar7 = (byte *)FUN_143714f30(&local_res18,&local_res10), (~*pbVar7 & 1) != 0)) {
          uVar5 = FUN_143729420(param_1,*(undefined8 *)(local_res18 + 2));
          uVar8 = FUN_1437151c0(&local_res18);
          uVar8 = FUN_14370c890(uVar8,param_1 + 0xd0);
          FUN_143737060(local_208);
          UMovieScenePropertyTrack::SetSectionToKey(local_208,uVar5);
          uVar1 = FUN_143715270(&local_res18);
          FUN_1437380c0(local_208,uVar8,uVar1,0);
          local_1a8 = local_1a8 | 0x204000;
          local_130 = 0;
          local_f8 = local_res20;
          uVar5 = FUN_143737a80(local_208,local_3f8);
          uVar8 = FUN_143703a50();
          if (local_400 == (local_3fc & 0x3fffffff)) {
            FUN_14370c460(uVar8,&local_408,8);
          }
          *(undefined8 *)(local_408 + (longlong)(int)local_400 * 8) = uVar5;
          local_400 = local_400 + 1;
          FUN_143737160(local_208);
          psVar10 = local_3f0;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)psVar10[1] + (int)*psVar10);
    }
    uVar5 = FUN_143714780(local_408,local_400,0,local_3f8);
    puVar3 = (undefined8 *)FUN_1437143d0(local_res20,0x4000000);
    *puVar3 = uVar5;
    uVar5 = FUN_143703a50();
    local_400 = 0;
    if (-1 < (int)local_3fc) {
      FUN_143702e10(uVar5,local_408,8,local_3fc & 0x3fffffff);
    }
  }
  FUN_143737160(local_3e8);
  return local_res20;
}



// FUNCTION 1437298b0 FUN_1437298b0 body=493 status=ok
// SIG undefined FUN_1437298b0(void)

undefined * FUN_1437298b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  
  FUN_143745310(&local_98);
  FUN_143746fb0(&local_98);
  uVar3 = hkReflectUtil::internCopy(local_98,0xffffffff);
  uVar3 = FUN_14373c080(*(undefined8 *)(param_1 + 0x18),uVar3,0);
  puVar4 = (undefined *)
           hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getValue
                     (*(undefined8 *)(param_1 + 0x18),uVar3);
  if (puVar4 == (undefined *)0x0) {
    iVar2 = FUN_143745f70(&local_98,"const char*");
    if (iVar2 == 0) {
      puVar4 = &DAT_1467f04a0;
      FUN_14373c4e0(*(undefined8 *)(param_1 + 0x18),uVar3,&DAT_1467f04a0);
      goto LAB_143729a55;
    }
    puVar4 = (undefined *)FUN_14371d650(local_98);
    if (puVar4 == (undefined *)0x0) goto LAB_143729a39;
    puVar5 = (undefined8 *)FUN_143714490(puVar4,1);
    if (puVar5 == (undefined8 *)0x0) {
      bVar7 = 0;
    }
    else {
      bVar7 = (byte)*puVar5;
    }
    puVar6 = (undefined *)0x0;
    if ((bVar7 & 0xf) == 4) {
      puVar6 = puVar4;
    }
    if (puVar6 == (undefined *)0x0) {
      puVar5 = (undefined8 *)FUN_143714490(puVar4,1);
      if (puVar5 == (undefined8 *)0x0) {
        bVar7 = 0;
      }
      else {
        bVar7 = (byte)*puVar5;
      }
      puVar6 = (undefined *)0x0;
      if ((bVar7 & 0xf) == 5) {
        puVar6 = puVar4;
      }
      if (puVar6 == (undefined *)0x0) {
        puVar5 = (undefined8 *)FUN_143714490(puVar4,1);
        if (puVar5 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar5;
        }
        puVar6 = (undefined *)0x0;
        if ((bVar7 & 0xf) == 2) {
          puVar6 = puVar4;
        }
        if (puVar6 == (undefined *)0x0) {
          puVar5 = (undefined8 *)FUN_143714490(puVar4,1);
          if (puVar5 == (undefined8 *)0x0) {
            bVar7 = 0;
          }
          else {
            bVar7 = (byte)*puVar5;
          }
          puVar6 = (undefined *)0x0;
          if ((bVar7 & 0xf) == 3) {
            puVar6 = puVar4;
          }
          if (puVar6 == (undefined *)0x0) {
            puVar5 = (undefined8 *)FUN_143714490(puVar4,1);
            bVar7 = 0;
            if (puVar5 != (undefined8 *)0x0) {
              bVar7 = (byte)*puVar5;
            }
            puVar6 = (undefined *)0x0;
            if ((bVar7 & 0xf) == 8) {
              puVar6 = puVar4;
            }
            if (puVar6 != (undefined *)0x0) {
              cVar1 = FUN_143780f40();
              if (cVar1 != '\0') goto LAB_143729a28;
            }
LAB_143729a39:
            FUN_14373c4e0(*(undefined8 *)(param_1 + 0x18),uVar3,8);
            goto LAB_143729a53;
          }
        }
      }
    }
LAB_143729a28:
    FUN_14373c4e0(*(undefined8 *)(param_1 + 0x18),uVar3,puVar4);
  }
  else {
    if (puVar4 != (undefined *)0x8) goto LAB_143729a55;
LAB_143729a53:
    puVar4 = (undefined *)0x0;
  }
LAB_143729a55:
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return puVar4;
}



// FUNCTION 143729aa0 FUN_143729aa0 body=45 status=ok
// SIG undefined FUN_143729aa0(void)

void FUN_143729aa0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc) + 1;
  lVar3 = (longlong)iVar1;
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar2 + *param_1) = 0xffffffff;
      lVar3 = lVar3 + -1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 != 0);
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  return;
}



// FUNCTION 143729ad0 FUN_143729ad0 body=39 status=ok
// SIG undefined FUN_143729ad0(void)

void FUN_143729ad0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = 0;
  if (0 < (longlong)(int)lVar1) {
    do {
      *(undefined4 *)(*param_1 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)lVar1);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 143729b00 FUN_143729b00 body=213 status=ok
// SIG undefined FUN_143729b00(void)

ulonglong * FUN_143729b00(longlong param_1,ulonglong *param_2,int param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  uVar1 = *param_2;
  plVar8 = (longlong *)(param_1 + 0xd0);
  lVar6 = *plVar8;
  uVar2 = FUN_14372d660((longlong)param_3 | uVar1);
  puVar3 = (ulonglong *)(**(code **)(lVar6 + 8))(plVar8,uVar2);
  FUN_14370c700(puVar3,param_2,0x10);
  lVar6 = 0x20;
  *puVar3 = (longlong)param_3 | uVar1;
  uVar5 = 1;
  do {
    if ((*param_2 & (longlong)(int)uVar5) != 0) {
      puVar4 = (undefined8 *)FUN_1437143d0(param_2,uVar5);
      if (puVar4 == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *puVar4;
      }
      puVar4 = (undefined8 *)FUN_1437143d0(puVar3,uVar5);
      *puVar4 = uVar7;
    }
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar4 = (undefined8 *)FUN_1437143d0(puVar3,param_3);
  *puVar4 = param_4;
  return puVar3;
}



// FUNCTION 143729be0 FUN_143729be0 body=2274 status=ok
// SIG undefined FUN_143729be0(void)

void FUN_143729be0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong local_128;
  int local_120;
  uint local_11c;
  int local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  ulonglong local_f0;
  uint local_e8;
  longlong *local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  int local_cc;
  undefined1 local_c8 [136];
  
  local_e0 = param_1 + 0x39;
  bVar6 = false;
  iVar8 = 1;
  if (1 < (int)param_1[0x3d]) {
    iVar8 = (int)param_1[0x3d];
  }
  uVar11 = FUN_143703a50();
  uVar20 = *(uint *)((longlong)param_1 + 0x1ec) & 0x3fffffff;
  if ((int)uVar20 < iVar8) {
    iVar9 = uVar20 * 2;
    iVar7 = iVar8;
    if (iVar8 < iVar9) {
      iVar7 = iVar9;
    }
    FUN_14370c310(uVar11,param_1 + 0x3c,iVar7,0x18);
  }
  iVar7 = iVar8 - (int)param_1[0x3d];
  lVar22 = (longlong)iVar7;
  if (0 < iVar7) {
    puVar12 = (undefined1 *)(param_1[0x3c] + (longlong)(int)param_1[0x3d] * 0x18 + 0x10);
    do {
      if ((undefined8 *)(puVar12 + -0x10) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar12 + -0x10) = 0;
        *(undefined8 *)(puVar12 + -8) = 0;
        *puVar12 = 0;
        *(undefined4 *)(puVar12 + 4) = 0;
      }
      puVar12 = puVar12 + 0x18;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  *(int *)(param_1 + 0x3d) = iVar8;
  puVar15 = (undefined8 *)param_1[0x3c];
  puVar15[1] = *(undefined8 *)param_1[0x3a];
  *puVar15 = 0;
  *(undefined1 *)(puVar15 + 2) = 0;
  *(undefined4 *)((longlong)puVar15 + 0x14) = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x80000000;
  (**(code **)(*param_2 + 0x10))(param_2,&local_128);
  local_118 = 0;
  if (0 < local_120) {
    local_108 = 0;
    do {
      uVar13 = 0;
      lVar14 = *(longlong *)(local_128 + local_108 * 0x18);
      lVar22 = local_128 + local_108 * 0x18;
      local_110 = lVar14;
      if ((lVar14 != 0) || (1 < *(ulonglong *)(lVar22 + 8))) {
        if ((*(byte *)(lVar22 + 0x10) & 0xfd) == 0) {
          lVar18 = *(longlong *)(lVar22 + 8);
          local_100 = lVar14;
          local_f8 = lVar18;
          if (lVar18 != 0) {
            uVar13 = FUN_1437151a0(lVar18);
          }
          local_f0 = uVar13;
          if ((uVar13 & 1) != 0) {
            FUN_1437329e0(uVar13 & 0xfffffffffffffffe);
          }
          iVar8 = FUN_14372d070(param_1,lVar14);
          bVar4 = false;
          lVar14 = (longlong)iVar8;
          if (lVar18 == 0) {
            lVar22 = (longlong)(int)param_1[0x3d];
            iVar8 = (int)param_1[0x3d] + 1;
            if (iVar8 < (int)param_1[0x3d]) {
              iVar8 = (int)param_1[0x3d];
            }
            uVar11 = FUN_143703a50();
            uVar20 = *(uint *)((longlong)param_1 + 0x1ec) & 0x3fffffff;
            if ((int)uVar20 < iVar8) {
              iVar7 = uVar20 * 2;
              iVar9 = iVar8;
              if (iVar8 < iVar7) {
                iVar9 = iVar7;
              }
              FUN_14370c310(uVar11,param_1 + 0x3c,iVar9,0x18);
            }
            iVar7 = iVar8 - (int)param_1[0x3d];
            lVar14 = (longlong)iVar7;
            if (0 < iVar7) {
              puVar12 = (undefined1 *)(param_1[0x3c] + (longlong)(int)param_1[0x3d] * 0x18 + 0x10);
              do {
                if ((undefined8 *)(puVar12 + -0x10) != (undefined8 *)0x0) {
                  *(undefined8 *)(puVar12 + -0x10) = 0;
                  *(undefined8 *)(puVar12 + -8) = 0;
                  *puVar12 = 0;
                  *(undefined4 *)(puVar12 + 4) = 0;
                }
                puVar12 = puVar12 + 0x18;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
            }
            *(int *)(param_1 + 0x3d) = iVar8;
            lVar16 = lVar22 * 3;
            lVar14 = 0;
            lVar18 = param_1[0x3c];
            uVar11 = *(undefined8 *)param_1[0x3a];
            *(undefined1 *)(lVar18 + 0x10 + lVar22 * 0x18) = 0;
            *(undefined4 *)(lVar18 + 0x14 + lVar22 * 0x18) = 0;
          }
          else {
            cVar5 = FUN_14372d7f0(lVar18);
            if (cVar5 != '\0') {
              local_d8 = local_c8;
              local_cc = -0x7fffff80;
              local_d0 = 1;
              local_c8[0] = 0;
              uVar11 = FUN_143714fc0(lVar18,&local_d8,0,0);
              FUN_143715430(lVar18);
              lVar16 = (**(code **)(*param_1 + 8))(param_1,uVar11);
              if (*(char *)(lVar16 + 0x90) != '\0') {
                bVar4 = true;
                if (*(char *)(lVar22 + 0x10) == '\0') {
                  FUN_14372dd00(param_1);
                }
                else {
                  FUN_14372d970(param_1,iVar8,lVar22,lVar16,&local_128);
                }
              }
              local_d0 = 0;
              if (-1 < local_cc) {
                FUN_143702e10(&PTR_vftable_1467f0638,local_d8);
              }
              if (bVar4) goto joined_r0x00014372a421;
            }
            uVar11 = FUN_143729420(param_1,lVar18);
            iVar7 = FUN_143725900(param_1 + 0x39,uVar11);
            if (*(char *)(lVar22 + 0x10) == '\0') {
              iVar9 = iVar8 + 1;
              if (iVar8 + 1 < (int)param_1[0x3d]) {
                iVar9 = (int)param_1[0x3d];
              }
              uVar11 = FUN_143703a50();
              uVar20 = *(uint *)((longlong)param_1 + 0x1ec) & 0x3fffffff;
              if ((int)uVar20 < iVar9) {
                iVar8 = uVar20 * 2;
                iVar10 = iVar9;
                if (iVar9 < iVar8) {
                  iVar10 = iVar8;
                }
                FUN_14370c310(uVar11,param_1 + 0x3c,iVar10);
              }
              iVar8 = iVar9 - (int)param_1[0x3d];
              lVar22 = (longlong)iVar8;
              if (0 < iVar8) {
                puVar12 = (undefined1 *)(param_1[0x3c] + (longlong)(int)param_1[0x3d] * 0x18 + 0x10)
                ;
                do {
                  if ((undefined8 *)(puVar12 + -0x10) != (undefined8 *)0x0) {
                    *(undefined8 *)(puVar12 + -0x10) = 0;
                    *(undefined8 *)(puVar12 + -8) = 0;
                    *puVar12 = 0;
                    *(undefined4 *)(puVar12 + 4) = 0;
                  }
                  puVar12 = puVar12 + 0x18;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
              }
              lVar16 = lVar14 * 3;
              *(int *)(param_1 + 0x3d) = iVar9;
              lVar18 = param_1[0x3c];
              uVar11 = *(undefined8 *)(param_1[0x3a] + (longlong)iVar7 * 8);
              *(undefined1 *)(lVar18 + 0x10 + lVar14 * 0x18) = 0;
              *(undefined4 *)(lVar18 + 0x14 + lVar14 * 0x18) = 0;
              lVar14 = local_110;
            }
            else {
              if (*(char *)(lVar22 + 0x10) == '\x02') {
                iVar9 = *(int *)(lVar22 + 0x14);
              }
              else {
                iVar9 = 0;
              }
              uVar17 = local_f0;
              if (iVar9 < local_120) {
                bVar6 = true;
                lVar16 = (longlong)iVar9;
                lVar22 = *(longlong *)(local_128 + lVar16 * 0x18);
                lVar18 = *(longlong *)(local_128 + 8 + lVar16 * 0x18);
                if (lVar18 == 0) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = FUN_1437151a0(lVar18,local_128 + lVar16 * 0x18);
                }
                if ((uVar17 & 1) != 0) {
                  FUN_1437329e0(uVar17 & 0xfffffffffffffffe);
                }
                if (lVar22 == 0) goto LAB_14372a208;
                bVar4 = true;
              }
              else {
LAB_14372a208:
                bVar4 = false;
              }
              if ((bVar6) && (bVar6 = false, (uVar17 & 1) != 0)) {
                FUN_143733a60(uVar17 & 0xfffffffffffffffe);
              }
              if (bVar4) {
                lVar18 = (longlong)iVar9;
                uVar11 = *(undefined8 *)(local_128 + lVar18 * 0x18);
                lVar22 = *(longlong *)(local_128 + 8 + lVar18 * 0x18);
                if (lVar22 == 0) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = FUN_1437151a0(lVar22,local_128 + lVar18 * 0x18);
                }
                if ((uVar17 & 1) != 0) {
                  FUN_1437329e0(uVar17 & 0xfffffffffffffffe);
                }
                iVar9 = FUN_14372d070(param_1,uVar11);
                if ((uVar17 & 1) != 0) {
                  FUN_143733a60(uVar17 & 0xfffffffffffffffe);
                }
              }
              else {
                iVar9 = FUN_14372b500(param_1);
              }
              plVar1 = param_1 + 0x3c;
              iVar10 = iVar9;
              if (iVar9 < iVar8) {
                iVar10 = iVar8;
              }
              iVar2 = iVar10 + 1;
              if (iVar10 + 1 < (int)param_1[0x3d]) {
                iVar2 = (int)param_1[0x3d];
              }
              uVar11 = FUN_143703a50();
              uVar20 = *(uint *)((longlong)param_1 + 0x1ec) & 0x3fffffff;
              if ((int)uVar20 < iVar2) {
                iVar3 = uVar20 * 2;
                iVar10 = iVar2;
                if (iVar2 < iVar3) {
                  iVar10 = iVar3;
                }
                FUN_14370c310(uVar11,plVar1,iVar10);
              }
              iVar10 = iVar2 - (int)param_1[0x3d];
              lVar22 = (longlong)iVar10;
              if (0 < iVar10) {
                puVar12 = (undefined1 *)(*plVar1 + (longlong)(int)param_1[0x3d] * 0x18 + 0x10);
                do {
                  if ((undefined8 *)(puVar12 + -0x10) != (undefined8 *)0x0) {
                    *(undefined8 *)(puVar12 + -0x10) = 0;
                    *(undefined8 *)(puVar12 + -8) = 0;
                    *puVar12 = 0;
                    *(undefined4 *)(puVar12 + 4) = 0;
                  }
                  puVar12 = puVar12 + 0x18;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
              }
              *(int *)(param_1 + 0x3d) = iVar2;
              if (*(longlong *)(*plVar1 + (longlong)iVar9 * 0x18) == 0) {
                *(int *)(*plVar1 + 0x14 + (longlong)iVar9 * 0x18) = iVar8;
              }
              lVar16 = lVar14 * 3;
              lVar18 = *plVar1;
              uVar11 = *(undefined8 *)(param_1[0x3a] + (longlong)iVar7 * 8);
              *(undefined1 *)(lVar18 + 0x10 + lVar14 * 0x18) = 2;
              *(int *)(lVar18 + 0x14 + lVar14 * 0x18) = iVar9;
              lVar14 = local_110;
            }
          }
          *(undefined8 *)(lVar18 + 8 + lVar16 * 8) = uVar11;
          *(longlong *)(lVar18 + lVar16 * 8) = lVar14;
        }
        else {
          if (*(byte *)(lVar22 + 0x10) != 1) goto LAB_14372a432;
          lVar18 = *(longlong *)(lVar22 + 8);
          uVar20 = *(uint *)(lVar22 + 0x14);
          local_100 = lVar14;
          local_f8 = lVar18;
          if (lVar18 != 0) {
            uVar13 = FUN_1437151a0(lVar18);
          }
          local_f0 = uVar13;
          if ((uVar13 & 1) != 0) {
            FUN_1437329e0(uVar13 & 0xfffffffffffffffe);
          }
          local_e8 = uVar20;
          if (lVar18 != 0) {
            iVar8 = FUN_14372b220(param_1,lVar14);
            lVar22 = (longlong)iVar8;
            bVar4 = false;
            cVar5 = FUN_14372d7f0(lVar18);
            if (cVar5 == '\0') {
              puVar15 = (undefined8 *)FUN_143714490(lVar18,1);
              if (puVar15 == (undefined8 *)0x0) {
                bVar19 = 0;
              }
              else {
                bVar19 = (byte)*puVar15;
              }
              lVar14 = 0;
              if ((bVar19 & 0xf) == 6) {
                lVar14 = lVar18;
              }
              if (lVar14 == 0) goto LAB_143729eaf;
              FUN_14372dfd0(param_1,iVar8);
            }
            else {
              local_d8 = local_c8;
              local_cc = -0x7fffff80;
              local_d0 = 1;
              local_c8[0] = 0;
              uVar11 = FUN_143714fc0(lVar18,&local_d8,0,0);
              iVar7 = FUN_143715430(lVar18);
              if ((iVar7 != -1) &&
                 (lVar14 = (**(code **)(*param_1 + 8))(param_1,uVar11),
                 *(char *)(lVar14 + 0x90) != '\0')) {
                bVar4 = true;
                FUN_14372dfd0(param_1,iVar8,&local_100,lVar14);
              }
              local_d0 = 0;
              if (-1 < local_cc) {
                FUN_143702e10(&PTR_vftable_1467f0638,local_d8);
              }
              if (!bVar4) {
LAB_143729eaf:
                uVar11 = FUN_143729420(param_1,lVar18);
                iVar9 = FUN_143725900(param_1 + 0x39,uVar11);
                plVar1 = local_e0;
                iVar7 = iVar8 + 1;
                if (iVar8 + 1 < (int)local_e0[4]) {
                  iVar7 = (int)local_e0[4];
                }
                uVar11 = FUN_143703a50();
                uVar21 = *(uint *)((longlong)plVar1 + 0x24) & 0x3fffffff;
                if ((int)uVar21 < iVar7) {
                  iVar8 = uVar21 * 2;
                  iVar10 = iVar7;
                  if (iVar7 < iVar8) {
                    iVar10 = iVar8;
                  }
                  FUN_14370c310(uVar11,plVar1 + 3,iVar10);
                }
                iVar8 = iVar7 - (int)plVar1[4];
                lVar14 = (longlong)iVar8;
                if (0 < iVar8) {
                  puVar12 = (undefined1 *)(plVar1[3] + (longlong)(int)plVar1[4] * 0x18 + 0x10);
                  do {
                    if ((undefined8 *)(puVar12 + -0x10) != (undefined8 *)0x0) {
                      *(undefined8 *)(puVar12 + -0x10) = 0;
                      *(undefined8 *)(puVar12 + -8) = 0;
                      *puVar12 = 0;
                      *(undefined4 *)(puVar12 + 4) = 0;
                    }
                    puVar12 = puVar12 + 0x18;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                *(int *)(plVar1 + 4) = iVar7;
                uVar11 = *(undefined8 *)(plVar1[1] + (longlong)iVar9 * 8);
                lVar14 = plVar1[3];
                *(longlong *)(lVar14 + lVar22 * 0x18) = local_110;
                *(undefined8 *)(lVar14 + 8 + lVar22 * 0x18) = uVar11;
                *(undefined1 *)(lVar14 + 0x10 + lVar22 * 0x18) = 1;
                *(uint *)(lVar14 + 0x14 + lVar22 * 0x18) =
                     (uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f);
              }
            }
          }
        }
joined_r0x00014372a421:
        if ((uVar13 & 1) != 0) {
          FUN_143733a60(uVar13 & 0xfffffffffffffffe);
        }
      }
LAB_14372a432:
      local_118 = local_118 + 1;
      local_108 = local_108 + 1;
    } while (local_118 < local_120);
  }
  uVar11 = FUN_143703a50();
  local_120 = 0;
  if (-1 < (int)local_11c) {
    FUN_143702e10(uVar11,local_128,0x18,local_11c & 0x3fffffff);
  }
  return;
}



// FUNCTION 14372a4d0 FUN_14372a4d0 body=209 status=ok
// SIG undefined FUN_14372a4d0(void)

undefined8
FUN_14372a4d0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_48 = *param_4;
  local_38 = param_4[2];
  local_40 = param_4[1];
  if ((local_38 & 1) != 0) {
    FUN_1437329e0(local_38 & 0xfffffffffffffffe);
  }
  local_30 = *param_3;
  local_20 = param_3[2];
  local_28 = param_3[1];
  if ((local_20 & 1) != 0) {
    FUN_1437329e0(local_20 & 0xfffffffffffffffe);
  }
  lVar1 = *param_1;
  puVar2 = (undefined4 *)(**(code **)(lVar1 + 0x10))(param_1,local_res8,&local_48);
  (**(code **)(lVar1 + 0x18))(param_1,param_2,&local_30,*puVar2);
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_143733a60(param_3[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_4 + 2) & 1) != 0) {
    FUN_143733a60(param_4[2] & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14372a5b0 FUN_14372a5b0 body=184 status=ok
// SIG undefined FUN_14372a5b0(void)

undefined8 FUN_14372a5b0(longlong param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    return *(undefined8 *)(param_1 + 0x2e8);
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0xf0);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_143722ef0(lVar2,param_1);
  }
  if (lVar2 != 0) {
    FUN_14370c030(lVar2);
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_1 + 0x2e8) = lVar2;
  if (lVar2 != 0) {
    FUN_14370c150(lVar2);
    return *(undefined8 *)(param_1 + 0x2e8);
  }
  return 0;
}



// FUNCTION 14372a670 Stop body=9 status=ok
// SIG undefined Stop(void)

void CAkVPLSrcNode::Stop(longlong param_1)

{
  FUN_14372a5b0(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 14372a680 FUN_14372a680 body=578 status=ok
// SIG undefined FUN_14372a680(void)

void FUN_14372a680(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  
  uVar6 = 0;
  uVar5 = uVar6;
  uVar7 = uVar6;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      lVar1 = *(longlong *)(uVar7 + *(longlong *)(param_1 + 0xc0));
      FUN_143725ec0(lVar1);
      local_res10 = *(undefined8 *)(lVar1 + 0x60);
      local_res8 = lVar1;
      uVar2 = FUN_143703a50();
      FUN_14372d6e0(param_1 + 0x118,uVar2,&local_res10,&local_res8);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar7 = uVar7 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 200));
  }
  uVar5 = uVar6;
  uVar7 = uVar6;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      FUN_143725c20(*(undefined8 *)(uVar5 + *(longlong *)(param_1 + 0xc0)));
      uVar4 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(param_1 + 200));
  }
  local_40 = 0;
  local_38 = 0;
  local_34 = 0x80000000;
  local_30 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0x80000000;
  local_48 = 0;
  uVar5 = uVar6;
  uVar7 = uVar6;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      FUN_14372f5b0(param_1,&local_res8,*(undefined8 *)(uVar5 + *(longlong *)(param_1 + 0xc0)),
                    &local_40,&local_58);
      uVar4 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(param_1 + 200));
  }
  uVar5 = uVar6;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      lVar1 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0xc0));
      if (*(char *)(lVar1 + 0x58) != '\0') {
        local_res10 = FUN_14371f4b0(*(undefined8 *)(param_1 + 8),
                                    *(ulonglong *)(lVar1 + 0x18) & 0xfffffffffffffffe,
                                    *(undefined4 *)
                                     (*(longlong *)(uVar5 + *(longlong *)(param_1 + 0xc0)) + 0x20));
        local_res8 = 0;
        plVar3 = (longlong *)FUN_14372d420(param_1 + 0x18,&local_res10,&local_res8);
        if (*plVar3 != 0) {
          FUN_143725980(*plVar3,*(undefined8 *)
                                 (*(longlong *)(uVar5 + *(longlong *)(param_1 + 0xc0)) + 0x60));
        }
      }
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
      uVar5 = uVar5 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 200));
  }
  uVar2 = FUN_143703a50();
  local_50 = 0;
  if (-1 < (int)local_4c) {
    FUN_143702e10(uVar2,local_58,8,local_4c & 0x3fffffff);
  }
  local_58 = 0;
  local_4c = 0x80000000;
  uVar2 = FUN_143703a50();
  local_38 = 0;
  if (-1 < (int)local_34) {
    FUN_143702e10(uVar2,local_40,8,local_34 & 0x3fffffff);
  }
  return;
}



// FUNCTION 14372a8d0 FUN_14372a8d0 body=130 status=ok
// SIG undefined FUN_14372a8d0(void)

ulonglong FUN_14372a8d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = (int)param_1[1];
  uVar9 = iVar1 - 1;
  uVar5 = (longlong)iVar1;
  if (0 < (int)uVar9) {
    uVar8 = (int)param_2 * -0x61c8864f;
    iVar4 = (int)((ulonglong)param_2 >> 0x20);
    uVar7 = iVar4 * -0x61c8864f;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
            (int)param_2 * -0x4f000000;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar4 * -0x4f000000;
    lVar2 = *param_1;
    uVar7 = (uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7) & uVar9;
    lVar6 = (longlong)(int)uVar7;
    lVar3 = *(longlong *)(lVar2 + lVar6 * 8);
    while ((uVar5 = (longlong)iVar1, lVar3 != -1 &&
           (uVar5 = (ulonglong)uVar7, *(longlong *)(lVar2 + lVar6 * 8) != param_2))) {
      uVar7 = uVar7 + 1 & uVar9;
      lVar6 = (longlong)(int)uVar7;
      lVar3 = *(longlong *)(lVar2 + lVar6 * 8);
    }
  }
  return uVar5;
}



// FUNCTION 14372a960 FUN_14372a960 body=117 status=ok
// SIG undefined FUN_14372a960(void)

ulonglong FUN_14372a960(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar1) {
    lVar2 = *param_2;
    uVar7 = (int)lVar2 * -0x61c8864f;
    iVar4 = (int)((ulonglong)lVar2 >> 0x20);
    uVar5 = iVar4 * -0x61c8864f;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
            (int)lVar2 * -0x4f000000;
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar4 * -0x4f000000;
    uVar5 = (uVar5 * 0x40 + uVar7 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar5) & uVar1;
    plVar6 = (longlong *)((ulonglong)uVar5 * 0x10 + *param_1);
    lVar3 = *plVar6;
    while (lVar3 != -1) {
      if (*plVar6 == lVar2) {
        return (ulonglong)uVar5;
      }
      uVar5 = uVar5 + 1 & uVar1;
      plVar6 = (longlong *)((ulonglong)uVar5 * 0x10 + *param_1);
      lVar3 = *plVar6;
    }
  }
  return (longlong)(int)(uVar1 + 1);
}



// FUNCTION 14372a9e0 FUN_14372a9e0 body=72 status=ok
// SIG undefined FUN_14372a9e0(void)

ulonglong FUN_14372a9e0(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar3 = (int)((ulonglong)(longlong)param_2 >> 4) * -0x61c8864f & uVar1;
  piVar4 = (int *)((ulonglong)uVar3 * 0x10 + *param_1);
  iVar2 = *piVar4;
  while( true ) {
    if (iVar2 == -1) {
      return (longlong)(int)(uVar1 + 1);
    }
    if (*piVar4 == param_2) break;
    uVar3 = uVar3 + 1 & uVar1;
    piVar4 = (int *)((ulonglong)uVar3 * 0x10 + *param_1);
    iVar2 = *piVar4;
  }
  return (ulonglong)uVar3;
}



// FUNCTION 14372aa30 FUN_14372aa30 body=85 status=ok
// SIG undefined FUN_14372aa30(void)

ulonglong FUN_14372aa30(longlong *param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (int)((ulonglong)(longlong)param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar2 = uVar2 & *(uint *)((longlong)param_1 + 0xc);
    piVar1 = (int *)((ulonglong)uVar2 * 0x10 + *param_1);
    if (*piVar1 == -1) {
      return (longlong)(int)(*(uint *)((longlong)param_1 + 0xc) + 1);
    }
    if ((((*piVar1 == param_2) && (piVar1[1] == *param_3)) && (piVar1[2] == param_3[1])) &&
       (piVar1[3] == param_3[2])) break;
    uVar2 = uVar2 + 1;
  }
  return (ulonglong)uVar2;
}



// FUNCTION 14372aa90 FUN_14372aa90 body=208 status=ok
// SIG undefined FUN_14372aa90(void)

void FUN_14372aa90(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_14372fed0(param_1,local_res8,param_2,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  lVar1 = *param_3;
  lVar2 = *param_1;
  iVar4 = (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = iVar4 * -0x61c8864f;
  uVar7 = (int)lVar1 * -0x61c8864f;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar4 * -0x4f000000;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar5 = (uVar5 * 0x40 + uVar7 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar5) &
          *(uint *)((longlong)param_1 + 0xc);
  plVar6 = (longlong *)((ulonglong)uVar5 * 0x10 + lVar2);
  lVar3 = *plVar6;
  while( true ) {
    if (lVar3 == -1) {
      *(longlong *)(lVar2 + (ulonglong)uVar5 * 0x10) = lVar1;
      *(undefined4 *)(*param_1 + 8 + (ulonglong)uVar5 * 0x10) = *param_4;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      return;
    }
    if (*plVar6 == lVar1) break;
    uVar5 = uVar5 + 1 & *(uint *)((longlong)param_1 + 0xc);
    plVar6 = (longlong *)((ulonglong)uVar5 * 0x10 + lVar2);
    lVar3 = *plVar6;
  }
  return;
}



// FUNCTION 14372ab60 FUN_14372ab60 body=209 status=ok
// SIG undefined FUN_14372ab60(void)

void FUN_14372ab60(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_14372fed0(param_1,local_res8,param_2,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  lVar1 = *param_3;
  lVar2 = *param_1;
  iVar4 = (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = iVar4 * -0x61c8864f;
  uVar7 = (int)lVar1 * -0x61c8864f;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar4 * -0x4f000000;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar5 = (uVar5 * 0x40 + uVar7 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar5) &
          *(uint *)((longlong)param_1 + 0xc);
  plVar6 = (longlong *)((ulonglong)uVar5 * 0x10 + lVar2);
  lVar3 = *plVar6;
  while( true ) {
    if (lVar3 == -1) {
      *(longlong *)(lVar2 + (ulonglong)uVar5 * 0x10) = lVar1;
      *(undefined8 *)(*param_1 + 8 + (ulonglong)uVar5 * 0x10) = *param_4;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      return;
    }
    if (*plVar6 == lVar1) break;
    uVar5 = uVar5 + 1 & *(uint *)((longlong)param_1 + 0xc);
    plVar6 = (longlong *)((ulonglong)uVar5 * 0x10 + lVar2);
    lVar3 = *plVar6;
  }
  return;
}



// FUNCTION 14372ac40 FUN_14372ac40 body=366 status=ok
// SIG undefined FUN_14372ac40(void)

longlong FUN_14372ac40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  
  if (*(longlong *)(param_2 + 0x60) == 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    uVar5 = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe;
    if (*(int *)(param_2 + 0x70) != 0) {
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x88) +
               (longlong)
               *(int *)(*(longlong *)(param_2 + 0x68) +
                       (longlong)(*(int *)(param_2 + 0x70) + -1) * 4) * 8);
      uVar5 = *(ulonglong *)(lVar3 + 8);
      iVar2 = *(int *)(lVar3 + 0x14);
    }
    if ((iVar2 != -1) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x10),
       lVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,uVar5), lVar3 != 0)) {
      FUN_143725210(param_2,lVar3,0);
    }
    iVar2 = *(int *)(param_2 + 0x70) + -1;
    lVar3 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        plVar1 = *(longlong **)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x88) +
                  (longlong)*(int *)(*(longlong *)(param_2 + 0x68) + lVar3 * 4) * 8);
        if (*plVar1 != 0) {
          FUN_143727270(param_2,local_res10,plVar1,1);
          FUN_1437166c0(param_2 + 8,*plVar1);
          *(int *)(param_2 + 0x10) = (int)plVar1[2];
        }
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    FUN_143725ec0(param_2);
    FUN_143725c20(param_2);
    local_2c = 0x80000000;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    FUN_143730700(param_2,local_res10,&local_38);
    uVar4 = FUN_143703a50();
    local_30 = 0;
    if (-1 < (int)local_2c) {
      FUN_143702e10(uVar4,local_38,8,local_2c & 0x3fffffff);
    }
  }
  return param_2;
}



// FUNCTION 14372adb0 FUN_14372adb0 body=104 status=ok
// SIG undefined FUN_14372adb0(void)

undefined4 *
FUN_14372adb0(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_14372a960(param_1,param_3);
  if (iVar2 <= *(int *)((longlong)param_1 + 0xc)) {
    lVar1 = *param_1;
    *param_2 = 0;
    *param_4 = *(undefined8 *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14372ae20 FUN_14372ae20 body=1003 status=ok
// SIG undefined FUN_14372ae20(void)

/* WARNING: Removing unreachable block (ram,0x00014372b13c) */
/* WARNING: Removing unreachable block (ram,0x00014372b00d) */

void FUN_14372ae20(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  uint local_40;
  
  iVar11 = 0;
  if (-1 < *(int *)((longlong)param_1 + 0xa4)) {
    lVar10 = 0;
    piVar9 = (int *)param_1[0x13];
    do {
      if (*piVar9 != -1) break;
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 1;
      piVar9 = piVar9 + 4;
    } while (lVar10 <= *(int *)((longlong)param_1 + 0xa4));
  }
  if (iVar11 <= *(int *)((longlong)param_1 + 0xa4)) {
    do {
      puVar13 = (undefined4 *)(param_1[0x13] + 4 + (longlong)iVar11 * 0x10);
      plVar8 = (longlong *)*param_1;
      if ((int)puVar13[2] < 0) {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,&local_58,*puVar13);
        lVar10 = *plVar8;
        if ((local_48 & 1) != 0) {
          FUN_143733a60(local_48 & 0xfffffffffffffffe);
        }
        if (lVar10 != 0) {
          lVar10 = param_1[0xc];
          plVar8 = (longlong *)
                   (**(code **)(*(longlong *)*param_1 + 0x10))
                             ((longlong *)*param_1,&local_58,*puVar13);
          iVar12 = puVar13[1];
          lVar3 = *plVar8;
          if (lVar10 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_1437151a0(lVar10);
          }
          if ((uVar6 & 1) != 0) {
            FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
          }
          if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,param_2,0x18);
          }
          puVar1 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 0x18);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
          }
          plVar8 = (longlong *)(*param_2 + (longlong)(int)param_2[1] * 0x18);
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
          *plVar8 = iVar12 + lVar3;
          plVar8[1] = lVar10;
          if ((*(byte *)(plVar8 + 2) & 1) != 0) {
            FUN_143733a60(plVar8[2] & 0xfffffffffffffffe);
          }
          plVar8[2] = uVar6;
          goto LAB_14372b177;
        }
      }
      else {
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_58);
        iVar12 = 0;
        if (0 < (int)((local_40 ^ (int)local_40 >> 0x1f) - ((int)local_40 >> 0x1f))) {
          do {
            lVar3 = local_50;
            lVar10 = local_58;
            iVar5 = FUN_1437152f0(local_50);
            uVar6 = 0;
            if (lVar3 != 0) {
              uVar6 = FUN_1437151a0(lVar3);
            }
            if ((uVar6 & 1) != 0) {
              FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
            }
            if ((uVar6 & 1) != 0) {
              FUN_143733a60(uVar6 & 0xfffffffffffffffe);
            }
            lVar4 = local_50;
            lVar3 = local_58;
            if (iVar5 * iVar12 + lVar10 != 0) {
              lVar10 = param_1[0xc];
              iVar5 = FUN_1437152f0(local_50);
              uVar6 = 0;
              if (lVar4 != 0) {
                uVar6 = FUN_1437151a0(lVar4);
              }
              if ((uVar6 & 1) != 0) {
                FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
              }
              iVar2 = puVar13[1];
              if (lVar10 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = FUN_1437151a0(lVar10);
              }
              if ((uVar7 & 1) != 0) {
                FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
              }
              if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
                FUN_14370c460(&PTR_vftable_1467f0638,param_2,0x18);
              }
              puVar1 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 0x18);
              if (puVar1 != (undefined8 *)0x0) {
                *puVar1 = 0;
                puVar1[1] = 0;
                puVar1[2] = 0;
              }
              plVar8 = (longlong *)(*param_2 + (longlong)(int)param_2[1] * 0x18);
              *(int *)(param_2 + 1) = (int)param_2[1] + 1;
              *plVar8 = (longlong)iVar2 + lVar3 + iVar5 * iVar12;
              plVar8[1] = lVar10;
              if ((*(byte *)(plVar8 + 2) & 1) != 0) {
                FUN_143733a60(plVar8[2] & 0xfffffffffffffffe);
              }
              plVar8[2] = uVar7;
              if ((uVar6 & 1) != 0) {
                FUN_143733a60(uVar6 & 0xfffffffffffffffe);
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)((local_40 ^ (int)local_40 >> 0x1f) - ((int)local_40 >> 0x1f)));
        }
LAB_14372b177:
        if ((local_48 & 1) != 0) {
          FUN_143733a60(local_48 & 0xfffffffffffffffe);
        }
      }
      iVar11 = iVar11 + 1;
      if (iVar11 <= *(int *)((longlong)param_1 + 0xa4)) {
        lVar10 = (longlong)iVar11;
        piVar9 = (int *)(lVar10 * 0x10 + param_1[0x13]);
        do {
          if (*piVar9 != -1) break;
          iVar11 = iVar11 + 1;
          lVar10 = lVar10 + 1;
          piVar9 = piVar9 + 4;
        } while (lVar10 <= *(int *)((longlong)param_1 + 0xa4));
      }
    } while (iVar11 <= *(int *)((longlong)param_1 + 0xa4));
  }
  return;
}



// FUNCTION 14372b210 FUN_14372b210 body=11 status=ok
// SIG undefined FUN_14372b210(void)

longlong FUN_14372b210(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0xd0;
}



// FUNCTION 14372b220 FUN_14372b220 body=281 status=ok
// SIG undefined FUN_14372b220(void)

int FUN_14372b220(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_res10;
  
  local_res10 = param_2;
  uVar6 = FUN_143703a50();
  iVar4 = FUN_14372ab60(param_1 + 0x2c8,uVar6,&local_res10);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x2c8) + 8 + (longlong)iVar4 * 0x10);
  lVar10 = (longlong)iVar4;
  if (iVar4 == *(int *)(param_1 + 0x1e8)) {
    plVar1 = (longlong *)(param_1 + 0x1e0);
    iVar2 = iVar4 + 1;
    if (iVar4 + 1 < *(int *)(param_1 + 0x1e8)) {
      iVar2 = *(int *)(param_1 + 0x1e8);
    }
    uVar6 = FUN_143703a50();
    uVar8 = *(uint *)(param_1 + 0x1ec) & 0x3fffffff;
    if ((int)uVar8 < iVar2) {
      iVar3 = uVar8 * 2;
      iVar5 = iVar2;
      if (iVar2 < iVar3) {
        iVar5 = iVar3;
      }
      FUN_14370c310(uVar6,plVar1,iVar5);
    }
    iVar5 = iVar2 - *(int *)(param_1 + 0x1e8);
    lVar9 = (longlong)iVar5;
    if (0 < iVar5) {
      puVar7 = (undefined1 *)(*plVar1 + (longlong)*(int *)(param_1 + 0x1e8) * 0x18 + 0x10);
      do {
        if ((undefined8 *)(puVar7 + -0x10) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar7 + -0x10) = 0;
          *(undefined8 *)(puVar7 + -8) = 0;
          *puVar7 = 0;
          *(undefined4 *)(puVar7 + 4) = 0;
        }
        puVar7 = puVar7 + 0x18;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    *(int *)(param_1 + 0x1e8) = iVar2;
    lVar9 = *plVar1;
    *(undefined8 *)(lVar9 + 8 + lVar10 * 0x18) = **(undefined8 **)(param_1 + 0x1d0);
    *(undefined8 *)(lVar9 + lVar10 * 0x18) = 0;
    *(undefined1 *)(lVar9 + 0x10 + lVar10 * 0x18) = 1;
    *(undefined4 *)(lVar9 + 0x14 + lVar10 * 0x18) = 0;
  }
  return iVar4;
}



// FUNCTION 14372b340 FUN_14372b340 body=100 status=ok
// SIG undefined FUN_14372b340(void)

void FUN_14372b340(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = FUN_14372b800(*(undefined8 *)(param_1 + 8),param_3);
  local_18 = 0;
  uStack_10 = 0;
  FUN_14372d190(*(longlong *)(param_1 + 8) + 0x310,param_2,uVar1,1,param_4,&local_18);
  return;
}



// FUNCTION 14372b3b0 ABRGetPlaySpeed body=28 status=ok
// SIG undefined ABRGetPlaySpeed(void)

undefined8 Electra::FAdaptiveStreamSelector::ABRGetPlaySpeed(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))();
  return param_2;
}



// FUNCTION 14372b3d0 FUN_14372b3d0 body=304 status=ok
// SIG undefined FUN_14372b3d0(void)

undefined4 FUN_14372b3d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_28 [2];
  ulonglong local_18;
  
  lVar5 = FUN_143715410(param_2[1]);
  if (lVar5 == param_1) {
    uVar1 = param_2[1];
    uVar2 = *param_2;
    uVar3 = *(ulonglong *)((param_2[2] & 0xfffffffffffffffe) + 0x10);
    if ((uVar3 & 1) != 0) {
      FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
    }
    *param_2 = uVar2;
    param_2[1] = uVar1;
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
    }
    param_2[2] = uVar3;
  }
  else {
    plVar6 = (longlong *)(param_1 + 0x1c8);
    if ((param_2[2] & 0xfffffffffffffffe) == param_1 + 0x128U) goto LAB_14372b46e;
  }
  plVar6 = *(longlong **)(param_1 + 0x1c0);
LAB_14372b46e:
  (**(code **)(*plVar6 + 0x18))(plVar6,local_28,param_2);
  if (local_28[0] != 0) {
    uVar4 = FUN_14372d070(param_1);
    if ((local_18 & 1) != 0) {
      FUN_143733a60(local_18 & 0xfffffffffffffffe);
    }
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
    }
    return uVar4;
  }
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  }
  return 0;
}



// FUNCTION 14372b500 FUN_14372b500 body=231 status=ok
// SIG undefined FUN_14372b500(void)

int FUN_14372b500(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar1 = (longlong *)(param_1 + 0x1e0);
  iVar2 = *(int *)(param_1 + 0x1e8);
  lVar10 = (longlong)iVar2;
  iVar3 = iVar2 + 1;
  if (iVar2 + 1 < *(int *)(param_1 + 0x1e8)) {
    iVar3 = *(int *)(param_1 + 0x1e8);
  }
  uVar7 = FUN_143703a50();
  uVar5 = *(uint *)(param_1 + 0x1ec) & 0x3fffffff;
  if ((int)uVar5 < iVar3) {
    iVar4 = uVar5 * 2;
    iVar6 = iVar3;
    if (iVar3 < iVar4) {
      iVar6 = iVar4;
    }
    FUN_14370c310(uVar7,plVar1,iVar6);
  }
  iVar6 = iVar3 - *(int *)(param_1 + 0x1e8);
  lVar9 = (longlong)iVar6;
  if (0 < iVar6) {
    puVar8 = (undefined1 *)(*plVar1 + (longlong)*(int *)(param_1 + 0x1e8) * 0x18 + 0x10);
    do {
      if ((undefined8 *)(puVar8 + -0x10) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar8 + -0x10) = 0;
        *(undefined8 *)(puVar8 + -8) = 0;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 4) = 0;
      }
      puVar8 = puVar8 + 0x18;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(int *)(param_1 + 0x1e8) = iVar3;
  lVar9 = *plVar1;
  *(undefined8 *)(lVar9 + 8 + lVar10 * 0x18) = **(undefined8 **)(param_1 + 0x1d0);
  *(undefined8 *)(lVar9 + lVar10 * 0x18) = 0;
  *(undefined1 *)(lVar9 + 0x10 + lVar10 * 0x18) = 0;
  *(undefined4 *)(lVar9 + 0x14 + lVar10 * 0x18) = 0;
  return iVar2;
}



// FUNCTION 14372b5f0 FUN_14372b5f0 body=521 status=ok
// SIG undefined FUN_14372b5f0(void)

/* WARNING: Removing unreachable block (ram,0x00014372b7da) */

longlong * FUN_14372b5f0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  longlong local_20 [2];
  ulonglong local_10;
  
  lVar3 = FUN_143715410(param_3[1]);
  if (lVar3 == *(longlong *)(param_1 + 0xb0)) {
    local_38 = *param_3;
    local_28 = *(ulonglong *)((param_3[2] & 0xfffffffffffffffe) + 0x10);
    local_30 = param_3[1];
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x1c0);
    (**(code **)(*plVar5 + 0x18))(plVar5,local_20,&local_38);
    if ((local_20[0] != 0) && (iVar2 = FUN_14372d070(*(undefined8 *)(param_1 + 0xb0)), 0 < iVar2)) {
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x18);
      lVar3 = plVar5[1];
      *param_2 = *plVar5;
      param_2[1] = lVar3;
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1437151a0();
      }
      param_2[2] = uVar4;
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      if ((local_10 & 1) != 0) {
        FUN_143733a60(local_10 & 0xfffffffffffffffe);
      }
      if ((local_28 & 1) == 0) {
        return param_2;
      }
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
      return param_2;
    }
    if ((local_10 & 1) != 0) {
      FUN_143733a60(local_10 & 0xfffffffffffffffe);
    }
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
  }
  plVar5 = (longlong *)FUN_143714420(param_3[1],2);
  if ((((plVar5 == (longlong *)0x0) || (lVar3 = *plVar5, lVar3 == 0)) ||
      (lVar6 = FUN_143715410(lVar3), lVar6 != 0)) ||
     (cVar1 = FUN_143714910(lVar3,&DAT_1467e2850), cVar1 == '\0')) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    plVar5 = (longlong *)(lVar3 + (longlong)*(int *)*param_3 * 0x18);
    if (*(char *)(lVar3 + 0x10 + (longlong)*(int *)*param_3 * 0x18) != '\x02') {
      if ((*plVar5 != 0) || (*(int *)((longlong)plVar5 + 0x14) < 1)) goto LAB_14372b7c9;
      plVar5 = (longlong *)(lVar3 + (longlong)*(int *)((longlong)plVar5 + 0x14) * 0x18);
    }
    lVar3 = plVar5[1];
    *param_2 = *plVar5;
    param_2[1] = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1437151a0();
    }
    param_2[2] = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
  }
  else {
LAB_14372b7c9:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_2;
}



// FUNCTION 14372b800 FUN_14372b800 body=1416 status=ok
// SIG undefined FUN_14372b800(void)

byte * FUN_14372b800(longlong param_1,byte *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  longlong *plVar11;
  longlong lVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  int local_res10 [2];
  ulonglong local_res18;
  byte *local_res20;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  byte *local_c8;
  undefined1 *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a8 [136];
  
  local_b8 = local_a8;
  local_ac = 0x80000080;
  local_b0 = 1;
  local_a8[0] = 0;
  local_c8 = param_2;
  FUN_1437140a0(&local_res18);
  if (1 < local_res18) {
    if (local_res18 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_143714de0();
    }
    uVar7 = FUN_143714fc0(uVar6,&local_b8,0,0);
    uVar5 = FUN_143715430(uVar6);
    local_res20 = (byte *)FUN_14371f4b0(*(undefined8 *)(param_1 + 8),uVar7,uVar5);
    local_res10[0] = -1;
    piVar8 = (int *)FUN_14372d420(param_1 + 0xb0,&local_res20,local_res10);
    iVar1 = *piVar8;
    if (iVar1 < 0) {
      param_2 = (byte *)0x0;
    }
    else {
      lVar12 = *(longlong *)(param_1 + 0xc0);
      uVar6 = FUN_1437151c0(&local_res18);
      FUN_143714b80(*(undefined8 *)(*(longlong *)(lVar12 + (longlong)iVar1 * 8) + 0x60),&local_res20
                    ,uVar6,0);
      param_2 = (byte *)0x0;
      if ((byte *)0x1 < local_res20) {
        param_2 = local_res20;
      }
    }
    goto LAB_14372bd3b;
  }
  if ((~*param_2 & 1) == 0) {
    puVar9 = (undefined8 *)FUN_143714490(param_2,1);
    bVar4 = 0;
    if (puVar9 != (undefined8 *)0x0) {
      bVar4 = (byte)*puVar9;
    }
    pbVar10 = (byte *)0x0;
    if ((bVar4 & 0xf) == 6) {
      pbVar10 = param_2;
    }
    if (pbVar10 != (byte *)0x0) {
      uVar6 = 0;
      plVar11 = (longlong *)FUN_143714420(pbVar10,2);
      if ((plVar11 != (longlong *)0x0) && (*plVar11 != 0)) {
        uVar6 = FUN_14372b800(param_1);
      }
      param_2 = (byte *)FUN_14372d3c0(param_1 + 0x310,pbVar10,uVar6);
      goto LAB_14372bd3b;
    }
    puVar9 = (undefined8 *)FUN_143714490(param_2,1);
    bVar4 = 0;
    if (puVar9 != (undefined8 *)0x0) {
      bVar4 = (byte)*puVar9;
    }
    pbVar10 = (byte *)0x0;
    if ((bVar4 & 0xf) == 8) {
      pbVar10 = param_2;
    }
    local_c8 = pbVar10;
    if (pbVar10 == (byte *)0x0) {
      lVar12 = FUN_143714fc0(param_2,&local_b8,0,0);
      if (lVar12 != 0) {
        uVar5 = FUN_143715430(param_2);
        local_res20 = (byte *)FUN_14371f4b0(*(undefined8 *)(param_1 + 8),lVar12,uVar5);
        local_res10[0] = -1;
        piVar8 = (int *)FUN_14372d420(param_1 + 0xb0,&local_res20,local_res10);
        if (-1 < *piVar8) {
          param_2 = *(byte **)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)*piVar8 * 8)
                              + 0x60);
        }
      }
      goto LAB_14372bd3b;
    }
    local_res20 = (byte *)0x0;
    plVar11 = (longlong *)FUN_143714420(pbVar10,2);
    if ((plVar11 != (longlong *)0x0) && (*plVar11 != 0)) {
      local_res20 = (byte *)FUN_14372b800(param_1);
    }
    local_e8 = (undefined8 *)0x0;
    uStack_e0._0_4_ = 0;
    uStack_e0._4_4_ = 0x80000000;
    puVar9 = (undefined8 *)FUN_143715320(pbVar10);
    local_d8 = puVar9;
    if ((puVar9 != (undefined8 *)0x0) && (local_res10[0] = 0, *(short *)(puVar9 + 1) != 0)) {
      do {
        puVar14 = puVar9 + 2;
        uVar6 = FUN_143703a50();
        if ((uint)uStack_e0 == (uStack_e0._4_4_ & 0x3fffffff)) {
          FUN_14370c460(uVar6,&local_e8,0x10);
        }
        puVar2 = local_e8;
        uStack_e0._0_4_ = 1;
        uVar6 = hkReflectUtil::internCopy(puVar9[3],0xffffffff);
        puVar2[1] = uVar6;
        if (*(char *)puVar9[3] == 'v') {
          uVar6 = *puVar14;
        }
        else {
          uVar6 = FUN_14372b800(param_1,*puVar14);
        }
        *puVar2 = uVar6;
        local_res10[0] = local_res10[0] + 1;
        pbVar10 = local_c8;
        puVar9 = puVar14;
      } while (local_res10[0] < (int)(uint)*(ushort *)(local_d8 + 1));
    }
    puVar9 = (undefined8 *)FUN_143714420(pbVar10,1);
    if (puVar9 == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)((ulonglong)*puVar9 >> 8);
    }
    puStack_d0 = local_e8 + (longlong)(int)(uint)uStack_e0 * 2;
    local_d8 = local_e8;
    uVar6 = FUN_1437151f0(pbVar10);
    param_2 = (byte *)FUN_14372d190(param_1 + 0x310,uVar6,local_res20,0,uVar5,&local_d8);
  }
  else {
    puVar9 = (undefined8 *)FUN_14372b800(param_1);
    local_d8 = puVar9;
    pbVar10 = (byte *)FUN_143715320(param_2);
    local_res20 = pbVar10;
    if (pbVar10 == (byte *)0x0) {
      local_e8 = (undefined8 *)0x0;
      uStack_e0 = 0;
      uVar6 = FUN_1437151f0(param_2);
      param_2 = (byte *)FUN_14372d270(param_1 + 0x310,uVar6,puVar9,&local_e8);
      goto LAB_14372bd3b;
    }
    local_e8 = (undefined8 *)0x0;
    uStack_e0._0_4_ = 0;
    uVar3 = (uint)uStack_e0;
    uStack_e0._0_4_ = 0;
    uStack_e0._4_4_ = 0x80000000;
    local_res10[0] = 0;
    if (*(short *)(pbVar10 + 8) != 0) {
      do {
        pbVar13 = pbVar10 + 0x10;
        uVar6 = FUN_143703a50();
        if ((uint)uStack_e0 == (uStack_e0._4_4_ & 0x3fffffff)) {
          FUN_14370c460(uVar6,&local_e8,0x10);
        }
        puVar9 = local_e8;
        uStack_e0._0_4_ = 1;
        uVar6 = hkReflectUtil::internCopy(*(undefined8 *)(pbVar10 + 0x18),0xffffffff);
        puVar9[1] = uVar6;
        if (**(char **)(pbVar10 + 0x18) == 'v') {
          uVar6 = *(undefined8 *)pbVar13;
        }
        else {
          uVar6 = FUN_14372b800(param_1,*(undefined8 *)pbVar13);
        }
        *puVar9 = uVar6;
        local_res10[0] = local_res10[0] + 1;
        param_2 = local_c8;
        puVar9 = local_d8;
        pbVar10 = pbVar13;
        uVar3 = (uint)uStack_e0;
      } while (local_res10[0] < (int)(uint)*(ushort *)(local_res20 + 8));
    }
    uStack_e0._0_4_ = uVar3;
    puStack_d0 = local_e8 + (longlong)(int)(uint)uStack_e0 * 2;
    local_d8 = local_e8;
    uVar6 = FUN_1437151f0(param_2);
    param_2 = (byte *)FUN_14372d270(param_1 + 0x310,uVar6,puVar9,&local_d8);
  }
  uVar6 = FUN_143703a50();
  uVar3 = uStack_e0._4_4_;
  uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
  if (-1 < (int)uVar3) {
    FUN_143702e10(uVar6,local_e8,0x10,uVar3 & 0x3fffffff);
  }
LAB_14372bd3b:
  local_b0 = 0;
  if (-1 < (int)local_ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 14372bd90 FUN_14372bd90 body=8 status=ok
// SIG undefined FUN_14372bd90(void)

longlong FUN_14372bd90(longlong param_1)

{
  return param_1 + 0x128;
}



// FUNCTION 14372bda0 FUN_14372bda0 body=63 status=ok
// SIG undefined FUN_14372bda0(void)

void FUN_14372bda0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14372b800(*(undefined8 *)(param_1 + 8),param_3);
  FUN_14372d330(*(longlong *)(param_1 + 8) + 0x310,param_2,uVar1,1);
  return;
}



// FUNCTION 14372bde0 FUN_14372bde0 body=163 status=ok
// SIG undefined FUN_14372bde0(void)

undefined4 * FUN_14372bde0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  lVar1 = param_3[1];
  uVar5 = 0;
  *param_2 = 0;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(lVar1,1);
    if (puVar4 == (undefined8 *)0x0) {
      bVar3 = 0;
    }
    else {
      bVar3 = (byte)*puVar4;
    }
    if ((bVar3 & 0xf) == 6) {
      puVar2 = (undefined4 *)*param_3;
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar5 = param_3[2];
      if (puVar2 != (undefined4 *)0x0) {
        *param_2 = *puVar2;
      }
    }
  }
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_143733a60(param_3[2] & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14372be90 FUN_14372be90 body=24 status=ok
// SIG undefined FUN_14372be90(void)

undefined8 FUN_14372be90(longlong param_1)

{
  if ((*(int *)(param_1 + 0x1c) != 1) && (1 < *(int *)(param_1 + 0x1c) - 4U)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 14372beb0 FUN_14372beb0 body=607 status=ok
// SIG undefined FUN_14372beb0(void)

longlong FUN_14372beb0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  LPVOID pvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_38 [2];
  
  if ((param_2 == 0) || (param_3 == -1)) {
    return 0;
  }
  uVar3 = FUN_14371f4b0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
  local_res10[0] = CONCAT44(local_res10[0]._4_4_,0xffffffff);
  local_res20 = uVar3;
  piVar4 = (int *)FUN_14372d420(param_1 + 0x38,&local_res20,local_res10);
  if (*piVar4 < 0) {
    pvVar5 = TlsGetValue(DAT_146b7bf70);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = DAT_146b7bf68;
    }
    lVar6 = (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar5 + 0x58),0xa8);
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar9 = param_1;
      if (param_1 == 0x18) {
        lVar9 = lVar7;
      }
      lVar7 = FUN_143723c00(lVar6,lVar9);
    }
    uVar8 = FUN_1437166c0(lVar7 + 0x18,param_2);
    FUN_143716660(lVar7 + 8,uVar8);
    *(int *)(lVar7 + 0x20) = param_3;
    *(int *)(lVar7 + 0x10) = param_3;
    local_res10[0] = CONCAT44(local_res10[0]._4_4_,*(undefined4 *)(param_1 + 0x50));
    uVar8 = FUN_143703a50();
    FUN_14372d690(param_1 + 0x38,uVar8,&local_res20,local_res10);
    uVar8 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x50) == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
      FUN_14370c460(uVar8,param_1 + 0x48,8);
    }
    local_res10[0] = 0xffffffffffffffff;
    *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 8) = lVar7;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    *(undefined1 *)(lVar7 + 0x58) = 1;
    local_res20 = uVar3;
    piVar4 = (int *)FUN_14372d420(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x98,&local_res20,
                                  local_res10);
    iVar1 = *piVar4;
    while (-1 < iVar1) {
      uVar3 = FUN_143703a50();
      if (*(uint *)(lVar7 + 0x70) == (*(uint *)(lVar7 + 0x74) & 0x3fffffff)) {
        FUN_14370c460(uVar3,lVar7 + 0x68,4);
      }
      *(int *)(*(longlong *)(lVar7 + 0x68) + (longlong)*(int *)(lVar7 + 0x70) * 4) = iVar1;
      *(int *)(lVar7 + 0x70) = *(int *)(lVar7 + 0x70) + 1;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
      lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)iVar1 * 8);
      lVar2 = *(longlong *)(lVar9 + 8);
      if (lVar2 == 0) {
        uVar3 = FUN_143703a50();
        if (*(uint *)(lVar7 + 0x70) == (*(uint *)(lVar7 + 0x74) & 0x3fffffff)) {
          FUN_14370c460(uVar3,lVar7 + 0x68,4);
        }
        *(int *)(*(longlong *)(lVar7 + 0x68) + (longlong)*(int *)(lVar7 + 0x70) * 4) = iVar1;
        *(int *)(lVar7 + 0x70) = *(int *)(lVar7 + 0x70) + 1;
        return lVar7;
      }
      local_res20 = 0xffffffffffffffff;
      local_38[0] = FUN_14371f4b0(lVar6,lVar2,*(undefined4 *)(lVar9 + 0x14));
      piVar4 = (int *)FUN_14372d420(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x98,local_38,
                                    &local_res20);
      iVar1 = *piVar4;
    }
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)*piVar4 * 8);
  }
  return lVar7;
}



// FUNCTION 14372c110 FUN_14372c110 body=313 status=ok
// SIG undefined FUN_14372c110(void)

longlong FUN_14372c110(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  LPVOID pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  undefined8 local_res20;
  
  local_res20 = FUN_14371f4b0(*(undefined8 *)(param_1 + 8));
  local_res8[0] = 0xffffffff;
  piVar1 = (int *)FUN_14372d420(param_1 + 0xb0,&local_res20,local_res8);
  if (-1 < *piVar1) {
    return *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)*piVar1 * 8);
  }
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar2 + 0x58),0xa8);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_143723c00(lVar3,param_1);
  }
  uVar4 = FUN_1437166c0(lVar3 + 0x18,param_2);
  FUN_143716660(lVar3 + 8,uVar4);
  *(undefined4 *)(lVar3 + 0x20) = param_3;
  *(undefined4 *)(lVar3 + 0x10) = param_3;
  local_res8[0] = *(undefined4 *)(param_1 + 200);
  uVar4 = FUN_143703a50();
  FUN_14372d690(param_1 + 0xb0,uVar4,&local_res20,local_res8);
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 200) == (*(uint *)(param_1 + 0xcc) & 0x3fffffff)) {
    FUN_14370c460(uVar4,(longlong *)(param_1 + 0xc0),8);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)*(int *)(param_1 + 200) * 8) = lVar3;
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  return lVar3;
}



// FUNCTION 14372c250 FUN_14372c250 body=52 status=ok
// SIG undefined FUN_14372c250(void)

void FUN_14372c250(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14377ef20(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00014372c280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),param_2,uVar1);
  return;
}



// FUNCTION 14372c290 FUN_14372c290 body=188 status=ok
// SIG undefined FUN_14372c290(void)

undefined8 FUN_14372c290(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [128];
  
  local_98 = local_88;
  local_8c = 0x80000080;
  local_90 = 1;
  local_88[0] = 0;
  lVar1 = **(longlong **)(param_1 + 8);
  uVar2 = FUN_143715430(param_2);
  uVar3 = FUN_143714fc0(param_2,&local_98,0,0);
  uVar3 = (**(code **)(lVar1 + 8))(*(undefined8 *)(param_1 + 8),uVar3,uVar2);
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return uVar3;
}



// FUNCTION 14372c350 FUN_14372c350 body=530 status=ok
// SIG undefined FUN_14372c350(void)

undefined4 *
FUN_14372c350(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  undefined4 local_38;
  
  if (param_3 != (int *)0x0) {
    iVar2 = *param_3;
    lVar9 = (longlong)iVar2;
    if (iVar2 != 0) {
      uVar8 = 0;
      uVar10 = 0xffffffff;
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x2f0) == '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1e0);
        puVar1 = (undefined8 *)(lVar3 + lVar9 * 0x18);
        if (*(char *)(lVar3 + 0x10 + lVar9 * 0x18) == '\x01') {
          uVar6 = *(undefined4 *)((longlong)puVar1 + 0x14);
        }
        else {
          uVar6 = 0xffffffff;
        }
        local_48 = puVar1[1];
        local_50 = *puVar1;
        uVar7 = uVar8;
        if (local_48 != 0) {
          uVar7 = FUN_1437151a0();
        }
        local_40 = uVar7;
        if ((uVar7 & 1) != 0) {
          FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
        }
        local_38 = uVar6;
        FUN_14372dfd0(*(undefined8 *)(param_1 + 0x10),iVar2,&local_50,0);
        if ((uVar7 & 1) != 0) {
          FUN_143733a60(uVar7 & 0xfffffffffffffffe);
        }
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1e0);
      if (*(char *)(lVar3 + 0x10 + lVar9 * 0x18) == '\x01') {
        uVar10 = *(uint *)(lVar3 + 0x14 + lVar9 * 0x18);
      }
      lVar4 = *(longlong *)(lVar3 + 8 + lVar9 * 0x18);
      uVar5 = *(undefined8 *)(lVar3 + lVar9 * 0x18);
      uVar7 = uVar8;
      if (lVar4 != 0) {
        uVar7 = FUN_1437151a0(lVar4);
      }
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      uVar6 = 0;
      if (lVar4 != 0) {
        uVar6 = FUN_1437152f0(lVar4);
        uVar8 = FUN_1437151a0(lVar4);
        if ((uVar8 & 1) != 0) {
          FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
        }
      }
      *param_5 = uVar5;
      param_5[1] = lVar4;
      *(uint *)(param_5 + 2) = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
      *(undefined4 *)((longlong)param_5 + 0x14) = uVar6;
      if ((*(byte *)(param_5 + 3) & 1) != 0) {
        FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
      }
      param_5[3] = uVar8;
      *param_2 = 0;
      if ((uVar7 & 1) != 0) {
        FUN_143733a60(uVar7 & 0xfffffffffffffffe);
      }
      return param_2;
    }
  }
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = 0;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14372c570 FUN_14372c570 body=690 status=ok
// SIG undefined FUN_14372c570(void)

undefined4 *
FUN_14372c570(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong local_res8;
  longlong local_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  undefined4 local_38;
  
  iVar9 = 0;
  local_70 = 0;
  lStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
            (*(longlong **)(param_1 + 0x10),&local_res8,param_3,param_4,&local_70);
  puVar4 = (undefined8 *)FUN_143714420(param_4,1);
  if (puVar4 != (undefined8 *)0x0) {
    iVar9 = (int)((ulonglong)*puVar4 >> 8);
  }
  if (iVar9 < 1) {
    if (local_70 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      uVar10 = 0xffffffff;
      local_res8 = 0xffffffffffffffff;
      local_78 = local_70;
      piVar5 = (int *)FUN_14372d420(lVar1 + 0x2c8,&local_78,&local_res8);
      iVar9 = *piVar5;
      lVar8 = (longlong)iVar9;
      if (*(char *)(lVar1 + 0x2f0) == '\0') {
        puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x1e0) + lVar8 * 0x18);
        if (*(char *)(*(longlong *)(lVar1 + 0x1e0) + 0x10 + lVar8 * 0x18) == '\x01') {
          uVar3 = *(undefined4 *)((longlong)puVar4 + 0x14);
        }
        else {
          uVar3 = 0xffffffff;
        }
        local_48 = puVar4[1];
        local_50 = *puVar4;
        if (local_48 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_1437151a0();
        }
        local_40 = uVar6;
        if ((uVar6 & 1) != 0) {
          FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
        }
        local_38 = uVar3;
        FUN_14372dfd0(*(undefined8 *)(param_1 + 0x18),iVar9,&local_50,0);
        if ((uVar6 & 1) != 0) {
          FUN_143733a60(uVar6 & 0xfffffffffffffffe);
        }
      }
      uVar6 = 0;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1e0);
      if (*(char *)(lVar1 + 0x10 + lVar8 * 0x18) == '\x01') {
        uVar10 = *(uint *)(lVar1 + 0x14 + lVar8 * 0x18);
      }
      lVar2 = *(longlong *)(lVar1 + 8 + lVar8 * 0x18);
      lVar1 = *(longlong *)(lVar1 + lVar8 * 0x18);
      uVar7 = uVar6;
      if (lVar2 != 0) {
        uVar7 = FUN_1437151a0(lVar2);
      }
      local_res8 = CONCAT71(local_res8._1_7_,(char)uVar7) & 0xffffffffffffff01;
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      uVar3 = 0;
      if (lVar2 != 0) {
        uVar3 = FUN_1437152f0(lVar2);
        local_78 = CONCAT44(local_78._4_4_,uVar3);
        uVar6 = FUN_1437151a0(lVar2);
        if ((uVar6 & 1) != 0) {
          FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
        }
        uVar3 = (undefined4)local_78;
      }
      *param_5 = lVar1;
      param_5[1] = lVar2;
      *(uint *)(param_5 + 2) = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
      *(undefined4 *)((longlong)param_5 + 0x14) = uVar3;
      if ((*(byte *)(param_5 + 3) & 1) != 0) {
        FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
      }
      param_5[3] = uVar6;
      *param_2 = 0;
      if ((char)local_res8 != '\0') {
        FUN_143733a60(uVar7 & 0xfffffffffffffffe);
      }
      goto joined_r0x00014372c7ad;
    }
    *param_5 = 0;
  }
  else {
    *param_5 = local_70;
  }
  param_5[1] = lStack_68;
  *(undefined4 *)(param_5 + 2) = (undefined4)local_60;
  *(undefined4 *)((longlong)param_5 + 0x14) = local_60._4_4_;
  if ((local_58 & 1) != 0) {
    FUN_1437329e0(local_58 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  param_5[3] = local_58;
joined_r0x00014372c7ad:
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14372c830 FUN_14372c830 body=1214 status=ok
// SIG undefined FUN_14372c830(void)

undefined4 *
FUN_14372c830(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong *param_5)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined8 local_res8;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong lStack_d8;
  ulonglong local_d0;
  ulonglong local_c8 [2];
  undefined1 *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a8 [128];
  
  local_e0 = 0;
  lStack_d8 = 0;
  uVar13 = 0;
  local_d0 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
            (*(longlong **)(param_1 + 0x10),&local_res8,param_3,param_4,&local_e0);
  bVar14 = 0;
  if (((lStack_d8 == 0) || (lVar5 = FUN_143715410(), lVar5 != 0)) ||
     (uVar6 = FUN_1436f73d0(local_e0,lStack_d8), uVar6 == 0)) {
    if (local_e0 == 0) {
      *param_5 = 0;
      param_5[1] = 0;
      if ((param_5[2] & 1) != 0) {
        FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
      }
      param_5[2] = 0;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x18);
      local_res8 = 0xffffffffffffffff;
      local_e8 = local_e0;
      piVar8 = (int *)FUN_14372d420(lVar5 + 0x2c8,&local_e8,&local_res8);
      lVar5 = *(longlong *)(lVar5 + 0x1e0);
      uVar6 = *(ulonglong *)(lVar5 + 8 + (longlong)*piVar8 * 0x18);
      uVar12 = *(ulonglong *)(lVar5 + (longlong)*piVar8 * 0x18);
      if (uVar6 != 0) {
        uVar13 = FUN_1437151a0(uVar6);
      }
      if ((uVar13 & 1) != 0) {
        FUN_1437329e0(uVar13 & 0xfffffffffffffffe);
      }
      *param_5 = uVar12;
      param_5[1] = uVar6;
      if ((param_5[2] & 1) != 0) {
        FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
      }
      param_5[2] = uVar13;
    }
    *param_2 = 0;
    goto LAB_14372ccbd;
  }
  local_b8 = local_a8;
  local_ac = 0x80000080;
  local_b0 = 1;
  local_a8[0] = 0;
  FUN_1437140a0(local_c8,uVar6);
  uVar4 = 0;
  bVar2 = 0;
  if (local_c8[0] < 2) {
    puVar11 = (undefined8 *)FUN_143714490(uVar6,1);
    if (puVar11 != (undefined8 *)0x0) {
      bVar14 = (byte)*puVar11;
    }
    uVar12 = uVar13;
    if ((bVar14 & 0xf) == 7) {
      uVar12 = uVar6;
    }
    if (uVar12 == 0) {
      puVar11 = (undefined8 *)FUN_143714490(uVar6,1);
      bVar14 = bVar2;
      if (puVar11 != (undefined8 *)0x0) {
        bVar14 = (byte)*puVar11;
      }
      uVar12 = uVar13;
      if ((bVar14 & 0xf) == 6) {
        uVar12 = uVar6;
      }
      if (uVar12 != 0) {
        puVar11 = (undefined8 *)FUN_143714490(uVar6,1);
        bVar14 = bVar2;
        if (puVar11 != (undefined8 *)0x0) {
          bVar14 = (byte)*puVar11;
        }
        uVar12 = uVar13;
        if ((bVar14 & 0xf) == 6) {
          uVar12 = uVar6;
        }
        puVar9 = (ulonglong *)FUN_143714420(uVar12,2);
        uVar12 = uVar13;
        if (puVar9 != (ulonglong *)0x0) {
          uVar12 = *puVar9;
        }
        puVar11 = (undefined8 *)FUN_143714490(uVar12,1);
        bVar14 = bVar2;
        if (puVar11 != (undefined8 *)0x0) {
          bVar14 = (byte)*puVar11;
        }
        uVar10 = uVar13;
        if ((bVar14 & 0xf) == 7) {
          uVar10 = uVar12;
        }
        if (uVar10 != 0) goto LAB_14372ca81;
      }
    }
    else {
LAB_14372ca81:
      puVar11 = (undefined8 *)FUN_143714490(uVar6,1);
      if (puVar11 != (undefined8 *)0x0) {
        bVar2 = (byte)*puVar11;
      }
      uVar12 = uVar13;
      if ((bVar2 & 0xf) == 6) {
        uVar12 = uVar6;
      }
      if (uVar12 != 0) {
        puVar9 = (ulonglong *)FUN_143714420(uVar12,2);
        if (puVar9 == (ulonglong *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *puVar9;
        }
      }
      uVar7 = FUN_143714fc0(uVar6,&local_b8,0,0);
      uVar3 = FUN_143715430(uVar6);
      local_e8 = FUN_14371f4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar7,uVar3);
      lVar5 = *(longlong *)(param_1 + 0x18);
      local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
      piVar8 = (int *)FUN_14372d420(lVar5 + 0xb0,&local_e8,&local_res8);
      if (-1 < *piVar8) {
        uVar6 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0xc0) + (longlong)*piVar8 * 8) + 0x60);
      }
      if (uVar12 != 0) {
        uVar6 = FUN_14372d3c0(lVar5 + 0x310,uVar12,uVar6);
      }
    }
LAB_14372cb4b:
    if (uVar6 == 0) goto LAB_14372c98f;
    puVar11 = (undefined8 *)FUN_143714490(uVar6,1);
    if (puVar11 != (undefined8 *)0x0) {
      uVar4 = (uint)*puVar11;
    }
    uVar12 = FUN_1437157a0(uVar4 & 0xf);
    if (uVar12 != 0) {
      uVar13 = FUN_1437151a0(uVar12);
    }
    if ((uVar13 & 1) != 0) {
      FUN_1437329e0(uVar13 & 0xfffffffffffffffe);
    }
    *param_5 = uVar6;
    param_5[1] = uVar12;
    if ((param_5[2] & 1) != 0) {
      FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
    }
    param_5[2] = uVar13;
  }
  else {
    uVar6 = uVar13;
    if (local_c8[0] != 0) {
      uVar6 = FUN_143714de0();
    }
    uVar7 = FUN_143714fc0(uVar6,&local_b8,0,0);
    uVar3 = FUN_143715430(uVar6);
    local_e8 = FUN_14371f4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar7,uVar3);
    lVar5 = *(longlong *)(param_1 + 0x18);
    local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
    piVar8 = (int *)FUN_14372d420(lVar5 + 0xb0,&local_e8,&local_res8);
    iVar1 = *piVar8;
    if (-1 < iVar1) {
      lVar5 = *(longlong *)(lVar5 + 0xc0);
      uVar7 = FUN_1437151c0(local_c8);
      FUN_143714b80(*(undefined8 *)(*(longlong *)(lVar5 + (longlong)iVar1 * 8) + 0x60),&local_e8,
                    uVar7,0);
      uVar6 = local_e8;
      if (1 < local_e8) goto LAB_14372cb4b;
    }
LAB_14372c98f:
    *param_5 = 0;
    param_5[1] = 0;
    if ((param_5[2] & 1) != 0) {
      FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
    }
    param_5[2] = 0;
  }
  *param_2 = 0;
  local_b0 = 0;
  if (-1 < (int)local_ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
  }
  local_b8 = (undefined1 *)0x0;
  local_ac = 0x80000000;
LAB_14372ccbd:
  if ((local_d0 & 1) != 0) {
    FUN_143733a60(local_d0 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14372ccf0 FUN_14372ccf0 body=890 status=ok
// SIG undefined FUN_14372ccf0(void)

undefined4 *
FUN_14372ccf0(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  plVar6 = (longlong *)FUN_143714420(param_4,2);
  uVar11 = 0;
  uVar5 = 0;
  if (plVar6 == (longlong *)0x0) {
    lVar8 = 0;
LAB_14372cedd:
    if (param_3 == (longlong *)0x0) {
LAB_14372cff8:
      if (lVar8 != 0) {
        uVar11 = FUN_1437151a0(lVar8);
      }
      goto LAB_14372d011;
    }
    iVar4 = (int)*param_3;
    if (iVar4 == 0) goto LAB_14372cff8;
    lVar7 = (longlong)iVar4 * 0x18;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1e0);
    if ((*(char *)(lVar7 + 0x10 + lVar2) == '\x02') &&
       (iVar1 = *(int *)(lVar7 + 0x14 + lVar2), iVar1 != 0)) {
      lVar8 = *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x18);
      lVar7 = *(longlong *)(lVar2 + (longlong)iVar1 * 0x18);
      if (lVar8 != 0) {
        uVar11 = FUN_1437151a0(lVar8);
      }
    }
    else {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x2f0) == '\0') {
        local_28 = *(longlong *)(lVar7 + 8 + lVar2);
        local_30 = *(undefined8 *)(lVar7 + lVar2);
        uVar9 = uVar11;
        if (local_28 != 0) {
          uVar9 = FUN_1437151a0();
        }
        local_20 = uVar9;
        if ((uVar9 & 1) != 0) {
          FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
        }
        FUN_14372dd00(*(undefined8 *)(param_1 + 0x10),iVar4,&local_30,0);
        if ((uVar9 & 1) != 0) {
          FUN_143733a60(uVar9 & 0xfffffffffffffffe);
        }
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1e0);
      lVar8 = *(longlong *)(lVar7 + 8 + lVar2);
      lVar7 = *(longlong *)(lVar7 + lVar2);
      if (lVar8 != 0) {
        uVar11 = FUN_1437151a0(lVar8);
      }
    }
    if ((uVar11 & 1) != 0) {
      FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
    }
    *param_5 = lVar7;
  }
  else {
    lVar8 = *plVar6;
    if (((lVar8 == 0) || (lVar7 = FUN_143715410(lVar8), lVar7 != 0)) ||
       (cVar3 = FUN_143714910(lVar8,&DAT_1467e2850), cVar3 == '\0')) goto LAB_14372cedd;
    lVar7 = *param_3;
    if (lVar7 != 0) {
      FUN_1437140a0(&local_38,lVar7);
      if (local_38 < 2) {
        iVar4 = FUN_143715430(lVar7);
        if (iVar4 == -1) {
          uVar11 = FUN_1437151a0(&DAT_1467e2850);
          if ((uVar11 & 1) != 0) {
            FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
          }
          *param_5 = 0;
          param_5[1] = (longlong)&DAT_1467e2850;
          if ((*(byte *)(param_5 + 2) & 1) != 0) {
            FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
          }
          param_5[2] = uVar11;
          goto LAB_14372d046;
        }
LAB_14372cdcc:
        puVar10 = (undefined8 *)FUN_143714490(lVar7,1);
        if (puVar10 != (undefined8 *)0x0) {
          uVar5 = (uint)*puVar10;
        }
        lVar8 = FUN_1437157a0(uVar5 & 0xf);
        if (lVar8 != 0) {
          uVar11 = FUN_1437151a0(lVar8);
        }
        if ((uVar11 & 1) != 0) {
          FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
        }
        *param_5 = lVar7;
        param_5[1] = lVar8;
        if ((*(byte *)(param_5 + 2) & 1) != 0) {
          FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
        }
        param_5[2] = uVar11;
      }
      else {
        FUN_1437140a0(&local_38,lVar7);
        lVar8 = FUN_1437151c0(&local_38);
        if (lVar8 != 0) {
          uVar9 = uVar11;
          if (local_38 != 0) {
            uVar9 = FUN_143714de0();
          }
          iVar4 = FUN_143715430(uVar9);
          if (iVar4 != -1) goto LAB_14372cdcc;
        }
        *param_5 = 0;
        param_5[1] = 0;
        if ((*(byte *)(param_5 + 2) & 1) != 0) {
          FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
        }
        param_5[2] = 0;
      }
      goto LAB_14372d046;
    }
    uVar11 = FUN_1437151a0(lVar8);
LAB_14372d011:
    if ((uVar11 & 1) != 0) {
      FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
    }
    *param_5 = 0;
  }
  param_5[1] = lVar8;
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
  }
  param_5[2] = uVar11;
LAB_14372d046:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14372d070 FUN_14372d070 body=280 status=ok
// SIG undefined FUN_14372d070(void)

int FUN_14372d070(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_res10;
  
  local_res10 = param_2;
  uVar6 = FUN_143703a50();
  iVar4 = FUN_14372ab60(param_1 + 0x2c8,uVar6,&local_res10);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x2c8) + 8 + (longlong)iVar4 * 0x10);
  lVar10 = (longlong)iVar4;
  if (iVar4 == *(int *)(param_1 + 0x1e8)) {
    plVar1 = (longlong *)(param_1 + 0x1e0);
    iVar2 = iVar4 + 1;
    if (iVar4 + 1 < *(int *)(param_1 + 0x1e8)) {
      iVar2 = *(int *)(param_1 + 0x1e8);
    }
    uVar6 = FUN_143703a50();
    uVar8 = *(uint *)(param_1 + 0x1ec) & 0x3fffffff;
    if ((int)uVar8 < iVar2) {
      iVar3 = uVar8 * 2;
      iVar5 = iVar2;
      if (iVar2 < iVar3) {
        iVar5 = iVar3;
      }
      FUN_14370c310(uVar6,plVar1,iVar5);
    }
    iVar5 = iVar2 - *(int *)(param_1 + 0x1e8);
    lVar9 = (longlong)iVar5;
    if (0 < iVar5) {
      puVar7 = (undefined1 *)(*plVar1 + (longlong)*(int *)(param_1 + 0x1e8) * 0x18 + 0x10);
      do {
        if ((undefined8 *)(puVar7 + -0x10) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar7 + -0x10) = 0;
          *(undefined8 *)(puVar7 + -8) = 0;
          *puVar7 = 0;
          *(undefined4 *)(puVar7 + 4) = 0;
        }
        puVar7 = puVar7 + 0x18;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    *(int *)(param_1 + 0x1e8) = iVar2;
    lVar9 = *plVar1;
    *(undefined8 *)(lVar9 + 8 + lVar10 * 0x18) = **(undefined8 **)(param_1 + 0x1d0);
    *(undefined8 *)(lVar9 + lVar10 * 0x18) = 0;
    *(undefined1 *)(lVar9 + 0x10 + lVar10 * 0x18) = 0;
    *(undefined4 *)(lVar9 + 0x14 + lVar10 * 0x18) = 0;
  }
  return iVar4;
}



// FUNCTION 14372d190 FUN_14372d190 body=211 status=ok
// SIG undefined FUN_14372d190(void)

undefined8
FUN_14372d190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar2 = hkReflectUtil::internCopy(param_2,0xffffffff);
  puVar1 = (undefined4 *)CONCAT44(param_6._4_4_,(int)param_6);
  local_78 = *puVar1;
  uStack_74 = puVar1[1];
  uStack_70 = puVar1[2];
  uStack_6c = puVar1[3];
  local_58 = param_5;
  local_68 = param_3;
  local_60 = uVar2;
  local_54 = FUN_14372d5d0(&local_78);
  local_34 = param_5;
  local_50 = param_1;
  local_48 = param_3;
  local_40 = uVar2;
  local_38 = param_4;
  local_30 = extraout_XMM0_Da;
  uStack_2c = extraout_XMM0_Db;
  FUN_143722a20(param_1 + 0x20,&param_6,&local_68,&local_50);
  return *(undefined8 *)((longlong)(int)param_6 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x20));
}



// FUNCTION 14372d270 FUN_14372d270 body=177 status=ok
// SIG undefined FUN_14372d270(void)

undefined8 FUN_14372d270(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  int local_res8 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = hkReflectUtil::internCopy(param_2,0xffffffff);
  local_58 = *param_4;
  uStack_54 = param_4[1];
  uStack_50 = param_4[2];
  uStack_4c = param_4[3];
  local_38 = 0xffffffff;
  local_48 = param_3;
  local_40 = uVar1;
  local_34 = FUN_14372d5d0(&local_58);
  local_30 = param_1;
  local_28 = uVar1;
  local_20 = param_3;
  local_18 = extraout_XMM0_Da;
  uStack_14 = extraout_XMM0_Db;
  FUN_143722b90(param_1 + 0x40,local_res8,&local_48,&local_30);
  return *(undefined8 *)((longlong)local_res8[0] * 0x20 + 0x18 + *(longlong *)(param_1 + 0x40));
}



// FUNCTION 14372d330 FUN_14372d330 body=144 status=ok
// SIG undefined FUN_14372d330(void)

undefined8 FUN_14372d330(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int local_res8 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_40 = hkReflectUtil::internCopy(param_2,0xffffffff);
  local_38 = 0xffffffff;
  local_34 = 0;
  local_48 = param_3;
  local_30 = param_1;
  local_28 = param_3;
  local_20 = local_40;
  local_18 = param_4;
  FUN_1437228b0(param_1,local_res8,&local_48,&local_30);
  return *(undefined8 *)((longlong)local_res8[0] * 0x20 + 0x18 + *param_1);
}



// FUNCTION 14372d3c0 FUN_14372d3c0 body=89 status=ok
// SIG undefined FUN_14372d3c0(void)

void FUN_14372d3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_143715320(param_2);
  uVar2 = FUN_1437151f0(param_2);
  FUN_14372d330(param_1,uVar2,param_3,lVar1 != 0);
  return;
}



// FUNCTION 14372d420 FUN_14372d420 body=145 status=ok
// SIG undefined FUN_14372d420(void)

longlong FUN_14372d420(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar1) {
    lVar2 = *param_2;
    lVar3 = *param_1;
    iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    uVar7 = iVar5 * -0x61c8864f;
    uVar8 = (int)lVar2 * -0x61c8864f;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar5 * -0x4f000000;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
            (int)lVar2 * -0x4f000000;
    uVar7 = (uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7) & uVar1;
    lVar6 = (ulonglong)uVar7 * 0x10;
    lVar4 = *(longlong *)(lVar3 + lVar6);
    while (lVar4 != -1) {
      if (*(longlong *)(lVar3 + lVar6) == lVar2) {
        return lVar3 + 8 + lVar6;
      }
      uVar7 = uVar7 + 1 & uVar1;
      lVar6 = (ulonglong)uVar7 * 0x10;
      lVar4 = *(longlong *)(lVar3 + lVar6);
    }
  }
  return param_3;
}



// FUNCTION 14372d4c0 FUN_14372d4c0 body=28 status=ok
// SIG undefined FUN_14372d4c0(void)

undefined8 FUN_14372d4c0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  return param_2;
}



// FUNCTION 14372d4e0 FUN_14372d4e0 body=112 status=ok
// SIG undefined FUN_14372d4e0(void)

undefined8 * FUN_14372d4e0(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  lVar3 = (longlong)param_3;
  lVar1 = *(longlong *)(param_1 + 0x1e0);
  if (*(char *)(lVar1 + 0x10 + lVar3 * 0x18) == '\x01') {
    uVar5 = *(undefined4 *)(lVar1 + 0x14 + lVar3 * 0x18);
  }
  else {
    uVar5 = 0xffffffff;
  }
  lVar2 = *(longlong *)(lVar1 + 8 + lVar3 * 0x18);
  *param_2 = *(undefined8 *)(lVar1 + lVar3 * 0x18);
  param_2[1] = lVar2;
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1437151a0();
  }
  param_2[2] = uVar4;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  *(undefined4 *)(param_2 + 3) = uVar5;
  return param_2;
}



// FUNCTION 14372d550 FUN_14372d550 body=28 status=ok
// SIG undefined FUN_14372d550(void)

undefined8 FUN_14372d550(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return param_2;
}



// FUNCTION 14372d570 FUN_14372d570 body=82 status=ok
// SIG undefined FUN_14372d570(void)

undefined8 * FUN_14372d570(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8 + (longlong)param_3 * 0x18);
  *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + (longlong)param_3 * 0x18);
  param_2[1] = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1437151a0();
  }
  param_2[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14372d5d0 FUN_14372d5d0 body=134 status=ok
// SIG undefined FUN_14372d5d0(void)

uint FUN_14372d5d0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  puVar2 = (undefined8 *)*param_1;
  uVar7 = 0;
  iVar3 = (int)(param_1[1] - (longlong)puVar2 >> 4);
  lVar8 = (longlong)iVar3;
  if (0 < iVar3) {
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 2;
      iVar3 = (int)uVar1;
      uVar5 = iVar3 * -0x61c8864f;
      iVar4 = (int)((ulonglong)uVar1 >> 0x20);
      uVar6 = iVar4 * -0x61c8864f;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar3 * -0x4f000000;
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar4 * -0x4f000000;
      uVar6 = uVar5 + uVar6 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar6;
      uVar7 = uVar7 ^ uVar6 + (uVar6 >> 2) + 0x9e3779b9 + uVar7 * 0x40;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return uVar7;
}



// FUNCTION 14372d660 FUN_14372d660 body=38 status=ok
// SIG undefined FUN_14372d660(void)

longlong FUN_14372d660(ulonglong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 & param_1 - 1) {
    uVar1 = uVar1 + 1;
  }
  return (ulonglong)uVar1 * 8 + 0x10;
}



// FUNCTION 14372d690 FUN_14372d690 body=80 status=ok
// SIG undefined FUN_14372d690(void)

undefined4
FUN_14372d690(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_res8;
  
  iVar1 = FUN_143724d70();
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
  *(undefined4 *)(*param_1 + 8 + (longlong)iVar1 * 0x10) = *param_4;
  return local_res8;
}



// FUNCTION 14372d6e0 FUN_14372d6e0 body=81 status=ok
// SIG undefined FUN_14372d6e0(void)

undefined4
FUN_14372d6e0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 local_res8;
  
  iVar1 = FUN_143724d70();
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
  *(undefined8 *)(*param_1 + 8 + (longlong)iVar1 * 0x10) = *param_4;
  return local_res8;
}



// FUNCTION 14372d740 FUN_14372d740 body=162 status=ok
// SIG undefined FUN_14372d740(void)

void FUN_14372d740(longlong *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_res10 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_143730030(param_1,local_res10,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  lVar2 = *param_1;
  uVar3 = (int)((ulonglong)(longlong)param_2 >> 4) * -0x61c8864f &
          *(uint *)((longlong)param_1 + 0xc);
  iVar1 = *(int *)(lVar2 + (ulonglong)uVar3 * 0x10);
  while (iVar1 != -1) {
    uVar3 = uVar3 + 1 & *(uint *)((longlong)param_1 + 0xc);
    iVar1 = *(int *)(lVar2 + (ulonglong)uVar3 * 0x10);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  uVar4 = (ulonglong)uVar3;
  *(int *)(lVar2 + uVar4 * 0x10) = param_2;
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 4 + uVar4 * 0x10) = *param_3;
  *(undefined4 *)(lVar2 + 8 + uVar4 * 0x10) = param_3[1];
  *(undefined4 *)(lVar2 + 0xc + uVar4 * 0x10) = param_3[2];
  return;
}



// FUNCTION 14372d7f0 FUN_14372d7f0 body=381 status=ok
// SIG undefined FUN_14372d7f0(void)

undefined8 FUN_14372d7f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  lVar1 = FUN_1437151f0();
  if (lVar1 != 0) {
    uVar2 = FUN_1437151f0(param_1);
    uVar2 = hkString::strCmp(uVar2,"hkReflect::Detail::ForeignUtil");
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  lVar1 = FUN_1437151f0(param_1);
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_1,1);
    if (puVar3 == (undefined8 *)0x0) {
      bVar4 = 0;
    }
    else {
      bVar4 = (byte)*puVar3;
    }
    lVar1 = 0;
    if ((bVar4 & 0xf) == 4) {
      lVar1 = param_1;
    }
    if (lVar1 == 0) {
      puVar3 = (undefined8 *)FUN_143714490(param_1,1);
      if (puVar3 == (undefined8 *)0x0) {
        bVar4 = 0;
      }
      else {
        bVar4 = (byte)*puVar3;
      }
      lVar1 = 0;
      if ((bVar4 & 0xf) == 6) {
        lVar1 = param_1;
      }
      if (lVar1 == 0) {
        puVar3 = (undefined8 *)FUN_143714490(param_1,1);
        if (puVar3 == (undefined8 *)0x0) {
          bVar4 = 0;
        }
        else {
          bVar4 = (byte)*puVar3;
        }
        lVar1 = 0;
        if ((bVar4 & 0xf) == 3) {
          lVar1 = param_1;
        }
        if (lVar1 == 0) {
          puVar3 = (undefined8 *)FUN_143714490(param_1,1);
          if (puVar3 == (undefined8 *)0x0) {
            bVar4 = 0;
          }
          else {
            bVar4 = (byte)*puVar3;
          }
          lVar1 = 0;
          if ((bVar4 & 0xf) == 5) {
            lVar1 = param_1;
          }
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)FUN_143714490(param_1,1);
            if (puVar3 == (undefined8 *)0x0) {
              bVar4 = 0;
            }
            else {
              bVar4 = (byte)*puVar3;
            }
            lVar1 = 0;
            if ((bVar4 & 0xf) == 2) {
              lVar1 = param_1;
            }
            if (lVar1 == 0) {
              puVar3 = (undefined8 *)FUN_143714490(param_1,1);
              if (puVar3 == (undefined8 *)0x0) {
                bVar4 = 0;
              }
              else {
                bVar4 = (byte)*puVar3;
              }
              lVar1 = 0;
              if ((bVar4 & 0xf) == 8) {
                lVar1 = param_1;
              }
              if (lVar1 == 0) {
                puVar3 = (undefined8 *)FUN_143714490(param_1,1);
                if (puVar3 == (undefined8 *)0x0) {
                  bVar4 = 0;
                }
                else {
                  bVar4 = (byte)*puVar3;
                }
                lVar1 = 0;
                if ((bVar4 & 0xf) == 1) {
                  lVar1 = param_1;
                }
                if (lVar1 == 0) {
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



// FUNCTION 14372d970 FUN_14372d970 body=904 status=ok
// SIG undefined FUN_14372d970(void)

void FUN_14372d970(longlong param_1,int param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  longlong lVar20;
  bool bVar21;
  longlong lVar22;
  longlong lVar23;
  longlong local_res8;
  uint local_res10;
  int local_res18 [2];
  undefined4 local_res20;
  ulonglong local_50;
  
  lVar2 = param_3[1];
  bVar21 = false;
  uVar3 = *param_3;
  lVar22 = (longlong)param_2;
  local_res10 = 0;
  local_res8 = param_1;
  if (lVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_1437151a0(lVar2);
  }
  local_res10 = CONCAT31(local_res10._1_3_,(char)uVar11) & 0xffffff01;
  if ((uVar11 & 1) != 0) {
    FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
  }
  FUN_143730150(param_1 + 0x1c8,param_2);
  FUN_1437257f0(param_4,param_2);
  uVar4 = *(undefined8 *)(param_4 + 0x60);
  uVar8 = FUN_1437152f0(uVar4);
  local_res20 = uVar8;
  uVar12 = (**(code **)(*(longlong *)(param_1 + 0xd0) + 8))((longlong *)(param_1 + 0xd0),uVar8);
  FUN_14370c720(uVar12,0,uVar8);
  local_res18[0] = FUN_143725900(param_1 + 0x1c8,uVar4);
  plVar1 = param_5;
  if (*(char *)(param_3 + 2) == '\x02') {
    iVar9 = *(int *)((longlong)param_3 + 0x14);
  }
  else {
    iVar9 = 0;
  }
  if (iVar9 < (int)param_5[1]) {
    lVar13 = (longlong)iVar9;
    lVar23 = *param_5;
    lVar20 = *(longlong *)(lVar23 + lVar13 * 0x18);
    lVar14 = *(longlong *)(lVar23 + 8 + lVar13 * 0x18);
    if (lVar14 == 0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_1437151a0(lVar14,lVar23 + lVar13 * 0x18);
    }
    if ((local_50 & 1) != 0) {
      FUN_1437329e0(local_50 & 0xfffffffffffffffe);
    }
    bVar21 = true;
    if (lVar20 != 0) {
      bVar7 = true;
      goto LAB_14372dab5;
    }
  }
  bVar7 = false;
LAB_14372dab5:
  if ((bVar21) && ((local_50 & 1) != 0)) {
    FUN_143733a60(local_50 & 0xfffffffffffffffe);
  }
  lVar23 = local_res8;
  if (bVar7) {
    lVar14 = (longlong)iVar9;
    lVar23 = *plVar1;
    uVar16 = *(undefined8 *)(lVar23 + lVar14 * 0x18);
    lVar20 = *(longlong *)(lVar23 + 8 + lVar14 * 0x18);
    if (lVar20 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = FUN_1437151a0(lVar20,lVar23 + lVar14 * 0x18);
    }
    if ((uVar15 & 1) != 0) {
      FUN_1437329e0(uVar15 & 0xfffffffffffffffe);
    }
    lVar23 = local_res8;
    iVar9 = FUN_14372d070(local_res8,uVar16);
    if ((uVar15 & 1) != 0) {
      FUN_143733a60(uVar15 & 0xfffffffffffffffe);
    }
  }
  else {
    iVar9 = FUN_14372b500(local_res8);
  }
  plVar1 = (longlong *)(lVar23 + 0x1e0);
  iVar10 = iVar9;
  if (iVar9 < param_2) {
    iVar10 = param_2;
  }
  iVar5 = iVar10 + 1;
  if (iVar10 + 1 < *(int *)(lVar23 + 0x1e8)) {
    iVar5 = *(int *)(lVar23 + 0x1e8);
  }
  uVar16 = FUN_143703a50();
  uVar19 = *(uint *)(lVar23 + 0x1ec) & 0x3fffffff;
  if ((int)uVar19 < iVar5) {
    iVar6 = uVar19 * 2;
    iVar10 = iVar5;
    if (iVar5 < iVar6) {
      iVar10 = iVar6;
    }
    FUN_14370c310(uVar16,plVar1,iVar10,0x18);
  }
  iVar10 = iVar5 - *(int *)(lVar23 + 0x1e8);
  lVar20 = (longlong)iVar10;
  if (0 < iVar10) {
    puVar17 = (undefined1 *)(*plVar1 + (longlong)*(int *)(lVar23 + 0x1e8) * 0x18 + 0x10);
    do {
      if ((undefined8 *)(puVar17 + -0x10) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar17 + -0x10) = 0;
        *(undefined8 *)(puVar17 + -8) = 0;
        *puVar17 = 0;
        *(undefined4 *)(puVar17 + 4) = 0;
      }
      puVar17 = puVar17 + 0x18;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  *(int *)(lVar23 + 0x1e8) = iVar5;
  if (*(longlong *)(*plVar1 + (longlong)iVar9 * 0x18) == 0) {
    *(int *)(*plVar1 + 0x14 + (longlong)iVar9 * 0x18) = param_2;
  }
  uVar16 = *(undefined8 *)(*(longlong *)(lVar23 + 0x1d0) + (longlong)local_res18[0] * 8);
  lVar20 = *plVar1;
  *(undefined8 *)(lVar20 + lVar22 * 0x18) = uVar12;
  *(undefined8 *)(lVar20 + 8 + lVar22 * 0x18) = uVar16;
  *(undefined1 *)(lVar20 + 0x10 + lVar22 * 0x18) = 2;
  *(int *)(lVar20 + 0x14 + lVar22 * 0x18) = iVar9;
  puVar18 = (undefined8 *)FUN_14374ea80(lVar23 + 0x188,local_res18,lVar2,uVar4);
  uVar4 = *puVar18;
  local_res8 = lVar22;
  param_5 = (longlong *)uVar12;
  uVar16 = FUN_143703a50();
  FUN_14372d6e0(lVar23 + 0x2c8,uVar16,&param_5,&local_res8);
  local_res8 = lVar23;
  uVar8 = FUN_1437152f0(lVar2);
  FUN_143720e70(&local_res8,uVar4,uVar12,local_res20,uVar3,uVar8,local_res20,0,1);
  if ((char)local_res10 != '\0') {
    FUN_143733a60(uVar11 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 14372dd00 FUN_14372dd00 body=708 status=ok
// SIG undefined FUN_14372dd00(void)

void FUN_14372dd00(longlong *param_1,int param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *local_res8;
  int local_res10;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined1 *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined1 local_b8 [128];
  
  plVar14 = (longlong *)(longlong)param_2;
  if (((int)param_1[0x4c] <= param_2) || (*(char *)((longlong)plVar14 + param_1[0x4b]) == '\0')) {
    FUN_143730150(param_1 + 0x39,param_2);
    if (param_4 == 0) {
      local_c8 = local_b8;
      local_bc = 0x80000080;
      local_c0 = 1;
      local_b8[0] = 0;
      uVar7 = FUN_143714fc0(param_3[1],&local_c8,0,0);
      uVar4 = FUN_143715430(param_3[1]);
      param_4 = (**(code **)(*param_1 + 8))(param_1,uVar7,uVar4);
      local_c0 = 0;
      if (-1 < (int)local_bc) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_c8,1,local_bc & 0x3fffffff);
      }
      local_c8 = (undefined1 *)0x0;
      local_bc = 0x80000000;
    }
    FUN_1437257f0(param_4,param_2);
    local_e0 = *param_3;
    uVar7 = *(undefined8 *)(param_4 + 0x60);
    local_res8 = (longlong *)param_3[1];
    uVar4 = FUN_1437152f0(uVar7);
    uVar8 = (**(code **)(param_1[0x1a] + 8))(param_1 + 0x1a,uVar4);
    FUN_14370c720(uVar8,0,uVar4);
    local_res10 = FUN_143725900(param_1 + 0x39,uVar7);
    iVar1 = param_2 + 1;
    if (param_2 + 1 < (int)param_1[0x3d]) {
      iVar1 = (int)param_1[0x3d];
    }
    uVar9 = FUN_143703a50();
    uVar12 = *(uint *)((longlong)param_1 + 0x1ec) & 0x3fffffff;
    if ((int)uVar12 < iVar1) {
      iVar5 = uVar12 * 2;
      iVar2 = iVar1;
      if (iVar1 < iVar5) {
        iVar2 = iVar5;
      }
      FUN_14370c310(uVar9,param_1 + 0x3c,iVar2,0x18);
    }
    plVar3 = local_res8;
    iVar5 = iVar1 - (int)param_1[0x3d];
    lVar13 = (longlong)iVar5;
    if (0 < iVar5) {
      puVar10 = (undefined1 *)(param_1[0x3c] + (longlong)(int)param_1[0x3d] * 0x18 + 0x10);
      do {
        if ((undefined8 *)(puVar10 + -0x10) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar10 + -0x10) = 0;
          *(undefined8 *)(puVar10 + -8) = 0;
          *puVar10 = 0;
          *(undefined4 *)(puVar10 + 4) = 0;
        }
        puVar10 = puVar10 + 0x18;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    *(int *)(param_1 + 0x3d) = iVar1;
    uVar9 = *(undefined8 *)(param_1[0x3a] + (longlong)local_res10 * 8);
    lVar13 = param_1[0x3c];
    *(undefined8 *)(lVar13 + (longlong)plVar14 * 0x18) = uVar8;
    *(undefined8 *)(lVar13 + 8 + (longlong)plVar14 * 0x18) = uVar9;
    *(undefined1 *)(lVar13 + 0x10 + (longlong)plVar14 * 0x18) = 0;
    *(undefined4 *)(lVar13 + 0x14 + (longlong)plVar14 * 0x18) = 0;
    puVar11 = (undefined8 *)FUN_14374ea80(param_1 + 0x31,local_d8,local_res8,uVar7);
    uVar7 = *puVar11;
    local_res8 = plVar14;
    local_e8 = uVar8;
    uVar9 = FUN_143703a50();
    FUN_14372d6e0(param_1 + 0x59,uVar9,&local_e8,&local_res8);
    local_res8 = param_1;
    uVar6 = FUN_1437152f0(plVar3);
    FUN_143720e70(&local_res8,uVar7,uVar8,uVar4,local_e0,uVar6,uVar4,0,1);
  }
  return;
}



// FUNCTION 14372dfd0 FUN_14372dfd0 body=1682 status=ok
// SIG undefined FUN_14372dfd0(void)

void FUN_14372dfd0(longlong *param_1,int param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  byte *pbVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint uVar19;
  byte bVar20;
  byte *pbVar22;
  undefined8 in_stack_fffffffffffffcf8;
  undefined8 *in_stack_fffffffffffffd00;
  longlong local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  undefined1 *local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  undefined1 local_2a8 [128];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [480];
  byte *pbVar21;
  
  if (((int)param_1[0x4c] <= param_2) || (*(char *)((longlong)param_2 + param_1[0x4b]) == '\0')) {
    FUN_143730150(param_1 + 0x39,param_2);
    pbVar22 = (byte *)param_3[1];
    if (pbVar22 != (byte *)0x0) {
      local_2c0 = *param_3;
      pbVar21 = (byte *)0x0;
      bVar20 = 0;
      uVar19 = (int)*(uint *)(param_3 + 3) >> 0x1f;
      iVar4 = (*(uint *)(param_3 + 3) ^ uVar19) - uVar19;
      local_2d8 = 0;
      plVar14 = &local_2d8;
      cVar2 = FUN_14372d7f0(pbVar22);
      uVar19 = (uint)((ulonglong)in_stack_fffffffffffffcf8 >> 0x20);
      if (cVar2 == '\0') {
        bVar3 = *pbVar22;
        while ((~bVar3 & 1) != 0) {
          FUN_143737060(local_218);
          FUN_143737b00(local_218,pbVar22,0xffffffff);
          lVar11 = FUN_143737a80(local_218,param_1 + 0x1a);
          *plVar14 = lVar11;
          pbVar22 = *(byte **)(pbVar22 + 8);
          plVar14 = (longlong *)(lVar11 + 8);
          FUN_143737160(local_218);
          uVar19 = (uint)((ulonglong)in_stack_fffffffffffffcf8 >> 0x20);
          bVar3 = *pbVar22;
        }
      }
      cVar2 = FUN_14372d7f0(pbVar22);
      if (cVar2 == '\0') {
        puVar16 = (undefined8 *)FUN_143714490(pbVar22,1);
        bVar3 = bVar20;
        if (puVar16 != (undefined8 *)0x0) {
          bVar3 = (byte)*puVar16;
        }
        pbVar13 = pbVar21;
        if ((bVar3 & 0xf) == 6) {
          pbVar13 = pbVar22;
        }
        if (pbVar13 == (byte *)0x0) {
          puVar16 = (undefined8 *)FUN_143714490(pbVar22,1);
          bVar3 = bVar20;
          if (puVar16 != (undefined8 *)0x0) {
            bVar3 = (byte)*puVar16;
          }
          pbVar13 = pbVar21;
          if ((bVar3 & 0xf) == 8) {
            pbVar13 = pbVar22;
          }
          if (pbVar13 == (byte *)0x0) {
            puVar16 = (undefined8 *)FUN_143714490(pbVar22,1);
            if (puVar16 != (undefined8 *)0x0) {
              bVar20 = (byte)*puVar16;
            }
            if ((bVar20 & 0xf) == 3) {
              pbVar21 = pbVar22;
            }
            pbVar13 = pbVar22;
            if (pbVar21 != (byte *)0x0) {
              puVar16 = (undefined8 *)FUN_143714420(pbVar21,1);
              if (puVar16 == (undefined8 *)0x0) {
                uVar19 = 0;
              }
              else {
                uVar19 = (uint)*puVar16;
              }
              uVar12 = FUN_1437151f0(pbVar21);
              uVar12 = hkReflectUtil::internCopy(uVar12,0xffffffff);
              in_stack_fffffffffffffd00 =
                   (undefined8 *)
                   (CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd00 >> 8),(char)(uVar19 >> 7))
                   & 0xffffffffffffff01);
              pbVar13 = (byte *)FUN_143720d30(param_1 + 0x1a,4,4,param_1 + 0x2e,uVar12,
                                              in_stack_fffffffffffffd00,0x1000);
            }
          }
          else {
            cVar2 = FUN_143780f40(pbVar13);
            if (cVar2 == '\0') {
              puVar16 = (undefined8 *)FUN_143714420(pbVar13,2);
              if (puVar16 != (undefined8 *)0x0) {
                pbVar21 = (byte *)*puVar16;
              }
              if ((pbVar21 != (byte *)0x0) && (cVar2 = FUN_14372d7f0(pbVar21), cVar2 != '\0')) {
                local_2b8 = local_2a8;
                local_2ac = 0x80000080;
                local_2b0 = 1;
                local_2a8[0] = 0;
                uVar12 = FUN_143714fc0(pbVar21,&local_2b8,0,0);
                uVar5 = FUN_143715430(pbVar21);
                lVar11 = (**(code **)(*param_1 + 8))(param_1,uVar12,uVar5);
                local_2b0 = 0;
                if (-1 < (int)local_2ac) {
                  FUN_143702e10(&PTR_vftable_1467f0638,local_2b8,1,local_2ac & 0x3fffffff);
                }
                local_2b8 = (undefined1 *)0x0;
                local_2ac = 0x80000000;
                pbVar21 = *(byte **)(lVar11 + 0x60);
              }
              local_228 = 0;
              uStack_220 = 0;
              uVar12 = FUN_1437151f0(pbVar13);
              in_stack_fffffffffffffd00 = &local_228;
              pbVar13 = (byte *)FUN_14372d190(param_1 + 0x62,uVar12,pbVar21,1,
                                              (ulonglong)uVar19 << 0x20,&local_228);
            }
          }
        }
        else {
          puVar16 = (undefined8 *)FUN_143714420(pbVar13,2);
          if (puVar16 != (undefined8 *)0x0) {
            pbVar21 = (byte *)*puVar16;
          }
          if ((pbVar21 != (byte *)0x0) && (cVar2 = FUN_14372d7f0(pbVar21), cVar2 != '\0')) {
            local_2b8 = local_2a8;
            local_2ac = 0x80000080;
            local_2b0 = 1;
            local_2a8[0] = 0;
            uVar12 = FUN_143714fc0(pbVar21,&local_2b8,0,0);
            uVar5 = FUN_143715430(pbVar21);
            lVar11 = (**(code **)(*param_1 + 8))(param_1,uVar12,uVar5);
            local_2b0 = 0;
            if (-1 < (int)local_2ac) {
              FUN_143702e10(&PTR_vftable_1467f0638,local_2b8,1,local_2ac & 0x3fffffff);
            }
            local_2b8 = (undefined1 *)0x0;
            local_2ac = 0x80000000;
            pbVar21 = *(byte **)(lVar11 + 0x60);
          }
          pbVar13 = (byte *)FUN_14372d3c0(param_1 + 0x62,pbVar13,pbVar21);
        }
        uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffd00 >> 0x20);
      }
      else {
        if (param_4 == 0) {
          local_2b8 = local_2a8;
          local_2ac = 0x80000080;
          local_2b0 = 1;
          local_2a8[0] = 0;
          uVar12 = FUN_143714fc0(pbVar22,&local_2b8,0,0);
          uVar5 = FUN_143715430(pbVar22);
          param_4 = (**(code **)(*param_1 + 8))(param_1,uVar12,uVar5);
          local_2b0 = 0;
          if (-1 < (int)local_2ac) {
            FUN_143702e10(&PTR_vftable_1467f0638,local_2b8,1,local_2ac & 0x3fffffff);
          }
          local_2b8 = (undefined1 *)0x0;
          local_2ac = 0x80000000;
        }
        uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffd00 >> 0x20);
        pbVar13 = *(byte **)(param_4 + 0x60);
        FUN_143725600(param_4,param_2,0,iVar4);
      }
      *plVar14 = (longlong)pbVar13;
      iVar6 = FUN_1437152f0(pbVar13);
      plVar14 = (longlong *)0x0;
      iVar6 = iVar6 * iVar4;
      local_2d0 = (longlong *)0x0;
      if (iVar6 != 0) {
        plVar14 = (longlong *)(**(code **)(param_1[0x1a] + 8))(param_1 + 0x1a,iVar6);
        local_2d0 = plVar14;
        FUN_14370c720(plVar14,0,iVar6);
      }
      uVar7 = FUN_143725900(param_1 + 0x39,local_2d8);
      local_2d8 = CONCAT44(local_2d8._4_4_,uVar7);
      iVar10 = param_2 + 1;
      if (param_2 + 1 < (int)param_1[0x3d]) {
        iVar10 = (int)param_1[0x3d];
      }
      uVar12 = FUN_143703a50();
      uVar19 = *(uint *)((longlong)param_1 + 0x1ec) & 0x3fffffff;
      if ((int)uVar19 < iVar10) {
        iVar8 = uVar19 * 2;
        iVar1 = iVar10;
        if (iVar10 < iVar8) {
          iVar1 = iVar8;
        }
        FUN_14370c310(uVar12,param_1 + 0x3c,iVar1,0x18);
      }
      iVar8 = iVar10 - (int)param_1[0x3d];
      lVar11 = (longlong)iVar8;
      if (0 < iVar8) {
        puVar15 = (undefined1 *)(param_1[0x3c] + (longlong)(int)param_1[0x3d] * 0x18 + 0x10);
        do {
          if ((undefined8 *)(puVar15 + -0x10) != (undefined8 *)0x0) {
            *(undefined8 *)(puVar15 + -0x10) = 0;
            *(undefined8 *)(puVar15 + -8) = 0;
            *puVar15 = 0;
            *(undefined4 *)(puVar15 + 4) = 0;
          }
          puVar15 = puVar15 + 0x18;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      lVar18 = (longlong)param_2;
      *(int *)(param_1 + 0x3d) = iVar10;
      uVar12 = *(undefined8 *)(param_1[0x3a] + (longlong)(int)local_2d8 * 8);
      lVar11 = param_1[0x3c];
      *(longlong **)(lVar11 + lVar18 * 0x18) = plVar14;
      *(undefined8 *)(lVar11 + 8 + lVar18 * 0x18) = uVar12;
      *(undefined1 *)(lVar11 + 0x10 + lVar18 * 0x18) = 1;
      *(int *)(lVar11 + 0x14 + lVar18 * 0x18) = iVar4;
      FUN_143730150(param_1 + 0x39,param_2);
      if (iVar4 != 0) {
        puVar16 = (undefined8 *)FUN_14374ea80(param_1 + 0x31,&local_228,pbVar22,pbVar13);
        uVar12 = *puVar16;
        local_2c8 = local_2d0;
        local_2d8 = lVar18;
        uVar17 = FUN_143703a50();
        FUN_14372d6e0(param_1 + 0x59,uVar17,&local_2c8,&local_2d8);
        local_2c8 = param_1;
        uVar7 = FUN_1437152f0(pbVar22);
        uVar9 = FUN_1437152f0(pbVar13);
        iVar10 = FUN_1437152f0(pbVar22);
        FUN_143720e70(&local_2c8,uVar12,local_2d0,iVar6,local_2c0,CONCAT44(uVar5,iVar10 * iVar4),
                      uVar9,uVar7,iVar4);
      }
    }
  }
  return;
}



// FUNCTION 14372e670 FUN_14372e670 body=969 status=ok
// SIG undefined FUN_14372e670(void)

/* WARNING: Removing unreachable block (ram,0x00014372e6fd) */

longlong * FUN_14372e670(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong local_res8;
  uint local_res10 [2];
  longlong local_res18;
  int local_res20;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  
  iVar8 = param_4;
  if (param_4 == -1) {
    iVar8 = 1;
  }
  local_res8 = param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  iVar5 = FUN_1437152f0(*(undefined8 *)(param_3 + 0x60));
  plVar15 = (longlong *)(*(longlong *)(param_1 + 8) + 0xd0);
  lVar10 = (**(code **)(*plVar15 + 8))(plVar15,iVar5 * iVar8);
  FUN_14370c720(lVar10,0,iVar5 * iVar8);
  lVar2 = *(longlong *)(param_3 + 0x60);
  *param_2 = lVar10;
  iVar5 = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  param_2[1] = lVar2;
  *(int *)(param_2 + 2) = iVar8;
  param_2[3] = 0;
  if (lVar2 != 0) {
    uVar6 = FUN_1437152f0(lVar2);
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
    uVar11 = FUN_1437151a0(lVar2);
    if ((uVar11 & 1) != 0) {
      FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
    }
    if ((*(byte *)(param_2 + 3) & 1) != 0) {
      FUN_143733a60(param_2[3] & 0xfffffffffffffffe);
    }
    param_2[3] = uVar11;
  }
  if (0 < iVar8) {
    do {
      local_68 = (longlong)(*(int *)((longlong)param_2 + 0x14) * iVar5) + *param_2;
      local_60 = param_2[1];
      local_58 = (ulonglong)(((uint)*(byte *)(param_2 + 3) ^ *(uint *)(param_2 + 3)) & 1) ^
                 param_2[3];
      if ((local_58 & 1) != 0) {
        FUN_1437329e0(local_58 & 0xfffffffffffffffe);
      }
      FUN_1437449a0(&local_68);
      if ((local_58 & 1) != 0) {
        FUN_143733a60(local_58 & 0xfffffffffffffffe);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar8);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  uVar13 = *(undefined8 *)(param_3 + 0x60);
  uVar17 = *(uint *)(lVar2 + 0x270) & 0x7fffffff;
  iVar5 = *(int *)(lVar2 + 0x1e8);
  lVar18 = (longlong)iVar5;
  local_res10[0] = uVar17;
  local_70 = uVar13;
  uVar12 = FUN_143703a50();
  iVar7 = FUN_14372aa90(lVar2 + 0x268,uVar12,&local_70,local_res10);
  uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x268) + 8 + (longlong)iVar7 * 0x10);
  if (uVar1 == uVar17) {
    FUN_1436ffce0(lVar2 + 0x1c8,uVar1,uVar13);
  }
  lVar4 = local_res8;
  iVar7 = iVar5 + 1;
  lVar2 = *(longlong *)(local_res8 + 8);
  plVar15 = (longlong *)(lVar2 + 0x1e0);
  if (local_res20 == -1) {
    if (iVar7 < *(int *)(lVar2 + 0x1e8)) {
      iVar7 = *(int *)(lVar2 + 0x1e8);
    }
    uVar13 = FUN_143703a50();
    uVar17 = *(uint *)(lVar2 + 0x1ec) & 0x3fffffff;
    if ((int)uVar17 < iVar7) {
      iVar9 = uVar17 * 2;
      iVar8 = iVar7;
      if (iVar7 < iVar9) {
        iVar8 = iVar9;
      }
      FUN_14370c310(uVar13,plVar15,iVar8,0x18);
    }
    iVar8 = iVar7 - *(int *)(lVar2 + 0x1e8);
    lVar16 = (longlong)iVar8;
    if (0 < iVar8) {
      puVar14 = (undefined1 *)(*plVar15 + (longlong)*(int *)(lVar2 + 0x1e8) * 0x18 + 0x10);
      do {
        if ((undefined8 *)(puVar14 + -0x10) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar14 + -0x10) = 0;
          *(undefined8 *)(puVar14 + -8) = 0;
          *puVar14 = 0;
          *(undefined4 *)(puVar14 + 4) = 0;
        }
        puVar14 = puVar14 + 0x18;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    *(int *)(lVar2 + 0x1e8) = iVar7;
    lVar16 = *plVar15;
    *(undefined8 *)(lVar16 + 8 + lVar18 * 0x18) =
         *(undefined8 *)(*(longlong *)(lVar2 + 0x1d0) + (longlong)(int)uVar1 * 8);
    *(longlong *)(lVar16 + lVar18 * 0x18) = lVar10;
    *(undefined1 *)(lVar16 + 0x10 + lVar18 * 0x18) = 0;
    *(undefined4 *)(lVar16 + 0x14 + lVar18 * 0x18) = 0;
    FUN_1437257f0(local_res18,iVar5);
  }
  else {
    if (iVar7 < *(int *)(lVar2 + 0x1e8)) {
      iVar7 = *(int *)(lVar2 + 0x1e8);
    }
    uVar13 = FUN_143703a50();
    uVar17 = *(uint *)(lVar2 + 0x1ec) & 0x3fffffff;
    if ((int)uVar17 < iVar7) {
      iVar3 = uVar17 * 2;
      iVar9 = iVar7;
      if (iVar7 < iVar3) {
        iVar9 = iVar3;
      }
      FUN_14370c310(uVar13,plVar15,iVar9,0x18);
    }
    iVar9 = iVar7 - *(int *)(lVar2 + 0x1e8);
    lVar16 = (longlong)iVar9;
    if (0 < iVar9) {
      puVar14 = (undefined1 *)(*plVar15 + (longlong)*(int *)(lVar2 + 0x1e8) * 0x18 + 0x10);
      do {
        if ((undefined8 *)(puVar14 + -0x10) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar14 + -0x10) = 0;
          *(undefined8 *)(puVar14 + -8) = 0;
          *puVar14 = 0;
          *(undefined4 *)(puVar14 + 4) = 0;
        }
        puVar14 = puVar14 + 0x18;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    *(int *)(lVar2 + 0x1e8) = iVar7;
    lVar16 = *plVar15;
    *(undefined8 *)(lVar16 + 8 + lVar18 * 0x18) =
         *(undefined8 *)(*(longlong *)(lVar2 + 0x1d0) + (longlong)(int)uVar1 * 8);
    *(longlong *)(lVar16 + lVar18 * 0x18) = lVar10;
    *(undefined1 *)(lVar16 + 0x10 + lVar18 * 0x18) = 1;
    *(int *)(lVar16 + 0x14 + lVar18 * 0x18) = iVar8;
    FUN_143725600(local_res18,iVar5,0,iVar8);
  }
  FUN_143730150(*(longlong *)(lVar4 + 8) + 0x1c8,iVar5);
  if (lVar10 != 0) {
    lVar2 = *(longlong *)(lVar4 + 8);
    local_res8 = lVar18;
    local_res18 = lVar10;
    uVar13 = FUN_143703a50();
    FUN_14372d6e0(lVar2 + 0x2c8,uVar13,&local_res18,&local_res8);
  }
  return param_2;
}



// FUNCTION 14372ea40 FUN_14372ea40 body=261 status=ok
// SIG undefined FUN_14372ea40(void)

/* WARNING: Removing unreachable block (ram,0x00014372eb25) */

undefined8 * FUN_14372ea40(longlong param_1,undefined8 *param_2,char *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  char *local_res8;
  undefined1 local_48 [64];
  
  uVar1 = FUN_14377ef20(*(undefined8 *)(param_1 + 0x10),param_3);
  lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_3,uVar1)
  ;
  if (lVar2 == 0) {
    if (1 < DAT_146b823d8) {
      local_res8 = "<Unnamed>";
      if (param_3 != (char *)0x0) {
        local_res8 = param_3;
      }
      FUN_14373a730(local_48,&DAT_146b823d0,2);
      lVar2 = FUN_14373bbd0(local_48,
                            "Patch function asked to create type {} but no type builder was found. Patch may be missing dependencies"
                            ,&DAT_145b74470,&local_res8,0);
      *(char **)(lVar2 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
      *(undefined8 *)(lVar2 + 0x28) = 0xde8;
      FUN_14373a950(local_48);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    FUN_14372e670(param_1,param_2,lVar2,param_4);
  }
  return param_2;
}



// FUNCTION 14372eb50 FUN_14372eb50 body=368 status=ok
// SIG undefined FUN_14372eb50(void)

undefined8 * FUN_14372eb50(undefined8 *param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined8 local_res18 [2];
  longlong local_28 [2];
  
  puVar3 = (undefined8 *)FUN_143714490(param_3);
  if (puVar3 == (undefined8 *)0x0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (byte)*puVar3;
  }
  lVar4 = 0;
  if ((bVar8 & 0xf) == 7) {
    lVar4 = param_3;
  }
  if (lVar4 == 0) {
    if (param_4 == -1) {
      param_4 = 1;
    }
    lVar4 = *(longlong *)(param_1[1] + 0xd0);
    iVar1 = FUN_1437152f0(param_3);
    uVar6 = (**(code **)(lVar4 + 8))(param_1[1] + 0xd0,iVar1 * param_4);
    iVar1 = FUN_1437152f0(param_3);
    FUN_14370c720(uVar6,0,iVar1 * param_4);
    *param_2 = uVar6;
    param_2[1] = param_3;
    *(int *)(param_2 + 2) = param_4;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
    param_2[3] = 0;
    if ((*(byte *)(param_2 + 3) & 1) != 0) {
      FUN_1437329e0(0);
    }
    if (param_3 != 0) {
      uVar2 = FUN_1437152f0(param_3);
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
      uVar7 = FUN_1437151a0(param_3);
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      if ((*(byte *)(param_2 + 3) & 1) != 0) {
        FUN_143733a60(param_2[3] & 0xfffffffffffffffe);
      }
      param_2[3] = uVar7;
    }
  }
  else {
    local_res18[0] = 0;
    local_28[0] = param_3;
    plVar5 = (longlong *)FUN_14372d420(param_1[1] + 0x118,local_28,local_res18);
    if (*plVar5 == 0) {
      puVar3 = (undefined8 *)*param_1;
      uVar6 = FUN_1437151f0(param_3);
      (*(code *)*puVar3)(param_1,param_2,uVar6,param_4);
    }
    else {
      FUN_14372e670(param_1,param_2,*plVar5,param_4);
    }
  }
  return param_2;
}



// FUNCTION 14372ecc0 FUN_14372ecc0 body=275 status=ok
// SIG undefined FUN_14372ecc0(void)

void FUN_14372ecc0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  int param_5,undefined4 param_6)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (*(int *)(param_2 + 0x1c) != 3) {
    if (*(int *)(param_2 + 0x1c) == 5) {
      puVar3 = (undefined8 *)FUN_143714490(param_3,1);
      bVar1 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar3;
      }
      uVar5 = 0;
      if ((bVar1 & 0xf) == 8) {
        uVar5 = param_3;
      }
      puVar3 = (undefined8 *)FUN_143714420(uVar5,2);
      if (puVar3 == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar3;
      }
      iVar2 = FUN_1437152f0(uVar6);
      iVar7 = 0;
      if (0 < *(int *)(param_2 + 0x18)) {
        do {
          puVar3 = (undefined8 *)FUN_143714420(uVar5,2);
          if (puVar3 == (undefined8 *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *puVar3;
          }
          uVar4 = FUN_14372be90(param_2);
          FUN_14372ecc0(param_1,uVar4,uVar6,param_4,param_5,param_6);
          param_5 = param_5 + iVar2;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_2 + 0x18));
      }
    }
    return;
  }
  FUN_143725730(*(undefined8 *)(param_2 + 0x10),param_4,param_5,param_6);
  return;
}



// FUNCTION 14372ede0 FUN_14372ede0 body=49 status=ok
// SIG undefined FUN_14372ede0(void)

int * FUN_14372ede0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = FUN_143714910(param_2,&DAT_1467e6b20);
  if (((cVar1 == '\0') || (piVar2 = (int *)*param_3, piVar2 == (int *)0x0)) || (*piVar2 == 0)) {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



// FUNCTION 14372ee20 FUN_14372ee20 body=182 status=ok
// SIG undefined FUN_14372ee20(void)

void FUN_14372ee20(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong local_res8;
  
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = puVar5 + *(int *)(param_1 + 0x30);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    FUN_143714b80(*(undefined8 *)(param_1 + 0x60),&local_res8,
                  *(ulonglong *)*puVar5 & 0xfffffffffffffffe,0);
    uVar3 = local_res8;
    if (1 < local_res8) {
      uVar2 = *puVar5;
      iVar4 = FUN_143715270(&local_res8);
      FUN_14372ecc0(param_1,uVar2,uVar3,param_2,iVar4 + param_3,param_4);
    }
  }
  return;
}



// FUNCTION 14372eee0 FUN_14372eee0 body=1407 status=ok
// SIG undefined FUN_14372eee0(void)

void FUN_14372eee0(longlong param_1,longlong *param_2,byte *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint *puVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  byte *local_res18;
  longlong local_res20;
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  ulonglong local_d0;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a8 [136];
  
  if (param_3 == (byte *)0x0) {
    return;
  }
  bVar1 = *param_3;
  while (((~bVar1 & 1) != 0 && ((*param_3 >> 3 & 1) == 0))) {
    param_3 = *(byte **)(param_3 + 8);
    bVar1 = *param_3;
  }
  local_res18 = param_3;
  lVar7 = FUN_1437151f0(param_3);
  if (lVar7 != 0) {
    uVar8 = FUN_1437151f0(param_3);
    iVar5 = hkString::strCmp(uVar8,"hkReflect::Decl");
    if (iVar5 == 0) {
      return;
    }
    uVar8 = FUN_1437151f0(param_3);
    iVar5 = hkString::strCmp(uVar8,"hkReflect::FieldDecl");
    if (iVar5 == 0) {
      return;
    }
  }
  cVar4 = FUN_14372d7f0(param_3);
  if (cVar4 != '\0') {
    if ((int)param_2[1] + -1 < (int)param_2[2] * 2) {
      FUN_143720a20(param_2,&local_res20,(int)param_2[1] * 2);
    }
    uVar16 = (int)param_2[1] - 1;
    iVar5 = (int)((ulonglong)param_3 >> 0x20);
    uVar14 = iVar5 * -0x61c8864f;
    iVar17 = 1;
    uVar15 = (int)param_3 * -0x61c8864f;
    uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
             iVar5 * -0x4f000000;
    uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
             (int)param_3 * -0x4f000000;
    lVar7 = *param_2;
    uVar14 = (uVar15 + uVar14 * 0x40 + (uVar15 >> 2) + 0x9e3779b9 ^ uVar14) & uVar16;
    lVar9 = (longlong)(int)uVar14;
    lVar2 = *(longlong *)(lVar7 + lVar9 * 8);
    while (lVar2 != -1) {
      if (*(byte **)(lVar7 + lVar9 * 8) == param_3) {
        iVar17 = 0;
        break;
      }
      uVar14 = uVar14 + 1 & uVar16;
      lVar9 = (longlong)(int)uVar14;
      lVar2 = *(longlong *)(lVar7 + lVar9 * 8);
    }
    *(int *)(param_2 + 2) = (int)param_2[2] + iVar17;
    *(byte **)(lVar7 + (longlong)(int)uVar14 * 8) = param_3;
    if (iVar17 != 0) {
      local_b8 = local_a8;
      local_ac = 0x80000080;
      local_b0 = 1;
      local_a8[0] = 0;
      uVar8 = FUN_143714fc0(param_3,&local_b8,0,0);
      uVar6 = FUN_143715430(param_3);
      local_e8 = FUN_14371f4b0(*(undefined8 *)(param_1 + 8),uVar8,uVar6);
      puVar10 = (uint *)FUN_143715390(param_3,&local_res20);
      if ((*puVar10 >> 0xb & 1) != 0) {
        if (*(int *)(param_1 + 0x40) + -1 < *(int *)(param_1 + 0x48) * 2) {
          FUN_143720a20(param_1 + 0x38,&local_res20,*(int *)(param_1 + 0x40) * 2);
        }
        iVar17 = 1;
        uVar16 = *(int *)(param_1 + 0x40) - 1;
        iVar5 = (int)((ulonglong)local_e8 >> 0x20);
        uVar14 = iVar5 * -0x61c8864f;
        uVar15 = (int)local_e8 * -0x61c8864f;
        uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                 iVar5 * -0x4f000000;
        uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                 (int)local_e8 * -0x4f000000;
        lVar7 = *(longlong *)(param_1 + 0x38);
        uVar14 = (uVar15 + uVar14 * 0x40 + (uVar15 >> 2) + 0x9e3779b9 ^ uVar14) & uVar16;
        lVar9 = (longlong)(int)uVar14;
        lVar2 = *(longlong *)(lVar7 + lVar9 * 8);
        while (lVar2 != -1) {
          if (*(longlong *)(lVar7 + lVar9 * 8) == local_e8) {
            iVar17 = 0;
            break;
          }
          uVar14 = uVar14 + 1 & uVar16;
          lVar9 = (longlong)(int)uVar14;
          lVar2 = *(longlong *)(lVar7 + lVar9 * 8);
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar17;
        *(longlong *)(lVar7 + (longlong)(int)uVar14 * 8) = local_e8;
      }
      puVar10 = (uint *)FUN_143715390(param_3,&local_res20);
      if ((*puVar10 >> 5 & 1) != 0) {
        if (*(int *)(param_1 + 0x58) + -1 < *(int *)(param_1 + 0x60) * 2) {
          FUN_143720a20(param_1 + 0x50,&local_res20,*(int *)(param_1 + 0x58) * 2);
        }
        iVar17 = 1;
        uVar16 = *(int *)(param_1 + 0x58) - 1;
        iVar5 = (int)((ulonglong)local_e8 >> 0x20);
        uVar14 = iVar5 * -0x61c8864f;
        uVar15 = (int)local_e8 * -0x61c8864f;
        uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                 iVar5 * -0x4f000000;
        uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                 (int)local_e8 * -0x4f000000;
        lVar7 = *(longlong *)(param_1 + 0x50);
        uVar14 = (uVar15 + uVar14 * 0x40 + (uVar15 >> 2) + 0x9e3779b9 ^ uVar14) & uVar16;
        lVar9 = (longlong)(int)uVar14;
        lVar2 = *(longlong *)(lVar7 + lVar9 * 8);
        while (lVar2 != -1) {
          if (*(longlong *)(lVar7 + lVar9 * 8) == local_e8) {
            iVar17 = 0;
            break;
          }
          uVar14 = uVar14 + 1 & uVar16;
          lVar9 = (longlong)(int)uVar14;
          lVar2 = *(longlong *)(lVar7 + lVar9 * 8);
        }
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar17;
        *(longlong *)(lVar7 + (longlong)(int)uVar14 * 8) = local_e8;
      }
      uVar8 = FUN_143703a50();
      FUN_14372d6e0(param_1 + 0x18,uVar8,&local_e8,&local_res18);
      local_res20 = *(longlong *)(param_3 + 8);
      if (local_res20 != 0) {
        uVar8 = FUN_143714fc0(local_res20,&local_b8,0,0);
        uVar6 = FUN_143715430(local_res20);
        local_res20 = FUN_14371f4b0(*(undefined8 *)(param_1 + 8),uVar8,uVar6);
        uVar8 = FUN_143703a50();
        FUN_14372d6e0(param_1 + 0x28,uVar8,&local_e8,&local_res20);
      }
      hkReflect::DeclIterAll::DeclIterAll(&local_e0,param_3,0);
      while ((puVar12 = local_e0 + 1, local_e0 + 1 < local_d8 ||
             (cVar4 = FUN_1437144f0(&local_e0), puVar12 = local_e0, cVar4 != '\0'))) {
        local_e0 = puVar12;
        pbVar11 = (byte *)FUN_143714f30(local_e0,&local_res20);
        if ((*pbVar11 & 0x20) != 0) {
          FUN_143714060(&local_c0,*local_e0);
          FUN_14372eee0(param_1,param_2,local_c0);
        }
      }
      puVar12 = (undefined8 *)FUN_143715320(param_3);
      if ((puVar12 != (undefined8 *)0x0) &&
         (iVar5 = 0, puVar3 = puVar12, *(short *)(puVar12 + 1) != 0)) {
        do {
          if (*(char *)puVar3[3] == 't') {
            FUN_14372eee0(param_1,param_2,puVar3[2]);
          }
          iVar5 = iVar5 + 1;
          param_3 = local_res18;
          puVar3 = puVar3 + 2;
        } while (iVar5 < (int)(uint)*(ushort *)(puVar12 + 1));
      }
      plVar13 = (longlong *)FUN_143749cb0(&local_e0,param_3,&DAT_1467e2a90);
      puVar12 = (undefined8 *)*plVar13;
      if ((local_d0 & 1) != 0) {
        FUN_143733a60(local_d0 & 0xfffffffffffffffe);
      }
      if (puVar12 == (undefined8 *)0x0) {
        if (*(longlong *)(param_3 + 8) != 0) {
          FUN_14372eee0(param_1,param_2);
        }
      }
      else {
        local_res20 = local_e8;
        for (plVar13 = (longlong *)*puVar12; plVar13 != (longlong *)0x0;
            plVar13 = (longlong *)plVar13[2]) {
          if ((*plVar13 != 0) && ((int)plVar13[1] != -1)) {
            lVar7 = FUN_14371f4b0(*(undefined8 *)(param_1 + 8));
            local_e8 = lVar7;
            uVar8 = FUN_143703a50();
            FUN_14372d6e0(param_1 + 0x28,uVar8,&local_res20,&local_e8);
            local_res20 = lVar7;
            uVar8 = FUN_143703a50();
            FUN_14372d6e0(param_1 + 0x18,uVar8,&local_e8,&local_res18);
          }
        }
      }
      local_b0 = 0;
      if (-1 < (int)local_ac) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
      }
    }
  }
  return;
}



// FUNCTION 14372f460 FUN_14372f460 body=132 status=ok
// SIG undefined FUN_14372f460(void)

undefined8 FUN_14372f460(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    return 1;
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  plVar1 = plVar3 + *(int *)(param_1 + 0x30);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    if (((*(int *)(*plVar3 + 0x1c) == 3) && (*(longlong *)(*plVar3 + 0x10) != 0)) &&
       (cVar2 = FUN_14372f460(), cVar2 != '\0')) break;
    plVar3 = plVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return 1;
}



// FUNCTION 14372f4f0 FUN_14372f4f0 body=182 status=ok
// SIG undefined FUN_14372f4f0(void)

undefined4 *
FUN_14372f4f0(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 local_res10 [8];
  
  iVar1 = *(int *)(param_3 + 0x1c);
  *param_2 = 0;
  if (((iVar1 == 3) && (*(longlong *)(param_3 + 0x10) != 0)) &&
     (piVar2 = (int *)FUN_14372f5b0(param_1,local_res10,*(longlong *)(param_3 + 0x10),param_4,
                                    param_5), *piVar2 < 0)) {
    *param_2 = 0x80040200;
  }
  if ((((0 < *(int *)(param_3 + 0x18)) &&
       ((*(int *)(param_3 + 0x1c) == 1 || (*(int *)(param_3 + 0x1c) - 4U < 2)))) &&
      (*(longlong *)(param_3 + 0x10) != 0)) &&
     (piVar2 = (int *)FUN_14372f4f0(param_1,local_res10,*(longlong *)(param_3 + 0x10),param_4,
                                    param_5), *piVar2 < 0)) {
    *param_2 = 0x80040200;
  }
  return param_2;
}



// FUNCTION 14372f5b0 FUN_14372f5b0 body=882 status=ok
// SIG undefined FUN_14372f5b0(void)

undefined4 *
FUN_14372f5b0(undefined8 param_1,undefined4 *param_2,longlong param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong *local_res20;
  uint local_88 [2];
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 local_58 [64];
  
  uVar8 = 0;
  local_res20 = param_4;
  iVar3 = FUN_14372a8d0(param_4,param_3);
  if ((int)param_4[1] + -1 < iVar3) {
    if ((int)param_5[1] + -1 < (int)param_5[2] * 2) {
      FUN_143720a20(param_5,local_88,(int)param_5[1] * 2);
    }
    plVar2 = local_res20;
    uVar11 = (int)param_5[1] - 1;
    iVar3 = (int)((ulonglong)param_3 >> 0x20);
    uVar7 = iVar3 * -0x61c8864f;
    iVar12 = 1;
    uVar10 = (int)param_3 * -0x61c8864f;
    local_88[0] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                  iVar3 * -0x4f000000;
    uVar7 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
            (int)param_3 * -0x4f000000;
    lVar9 = *param_5;
    local_88[0] = local_88[0] * 0x40 + uVar7 + (uVar7 >> 2) + 0x9e3779b9 ^ local_88[0];
    uVar7 = local_88[0] & uVar11;
    lVar4 = (longlong)(int)uVar7;
    lVar1 = *(longlong *)(lVar9 + lVar4 * 8);
    while (lVar1 != -1) {
      if (*(longlong *)(lVar9 + lVar4 * 8) == param_3) {
        iVar12 = 0;
        break;
      }
      uVar7 = uVar7 + 1 & uVar11;
      lVar4 = (longlong)(int)uVar7;
      lVar1 = *(longlong *)(lVar9 + lVar4 * 8);
    }
    *(int *)(param_5 + 2) = (int)param_5[2] + iVar12;
    *(longlong *)(lVar9 + (longlong)(int)uVar7 * 8) = param_3;
    if (iVar12 == 0) {
      if (DAT_146b823d8 != '\0') {
        FUN_14373a730(local_58,&DAT_146b823d0,1);
        lVar9 = FUN_14373bbd0(local_58,
                              "Loop in field or parents detected while trying to process {}/{}",
                              &DAT_145b8fb10,param_3 + 0x18,param_3 + 0x20,0);
        *(char **)(lVar9 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
        *(undefined8 *)(lVar9 + 0x28) = 0x75e;
        FUN_14373a950(local_58);
      }
      uVar8 = 0x80040200;
    }
    else {
      iVar3 = 0;
      local_80 = (ulonglong)local_80._4_4_ << 0x20;
      if (0 < *(int *)(param_3 + 0x40)) {
        lVar9 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_3 + 0x38) + lVar9) != 0) {
            piVar5 = (int *)FUN_14372f5b0(param_1,local_78,
                                          *(undefined8 *)(*(longlong *)(param_3 + 0x38) + lVar9),
                                          plVar2,param_5);
            iVar3 = (int)local_80;
            if (*piVar5 < 0) {
              uVar8 = 0x80040200;
            }
          }
          iVar3 = iVar3 + 1;
          lVar9 = lVar9 + 8;
          local_80 = CONCAT44(local_80._4_4_,iVar3);
          param_4 = local_res20;
        } while (iVar3 < *(int *)(param_3 + 0x40));
      }
      local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffff00000000);
      if (0 < *(int *)(param_3 + 0x30)) {
        local_80 = 0;
        do {
          piVar5 = (int *)FUN_14372f4f0(param_1,local_78,
                                        *(undefined8 *)(local_80 + *(longlong *)(param_3 + 0x28)),
                                        param_4,param_5);
          if (*piVar5 < 0) {
            uVar8 = 0x80040200;
          }
          iVar3 = (int)local_res20 + 1;
          local_80 = local_80 + 8;
          local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar3);
        } while (iVar3 < *(int *)(param_3 + 0x30));
      }
      uVar7 = local_88[0];
      local_70 = 0;
      local_68 = 0;
      local_64 = 0x80000000;
      local_60 = 0;
      FUN_143730700(param_3,&local_res20,&local_70);
      if ((int)param_4[1] + -1 < (int)param_4[2] * 2) {
        FUN_143720a20(param_4,&local_res20,(int)param_4[1] * 2);
      }
      lVar9 = *param_4;
      uVar10 = (int)param_4[1] - 1;
      uVar7 = uVar7 & uVar10;
      lVar4 = (longlong)(int)uVar7;
      lVar1 = *(longlong *)(lVar9 + lVar4 * 8);
      while (lVar1 != -1) {
        if (*(longlong *)(lVar9 + lVar4 * 8) == param_3) {
          iVar3 = 0;
          goto LAB_14372f83c;
        }
        uVar7 = uVar7 + 1 & uVar10;
        lVar4 = (longlong)(int)uVar7;
        lVar1 = *(longlong *)(lVar9 + lVar4 * 8);
      }
      iVar3 = 1;
LAB_14372f83c:
      *(int *)(param_4 + 2) = (int)param_4[2] + iVar3;
      *(longlong *)(lVar9 + (longlong)(int)uVar7 * 8) = param_3;
      FUN_14372fc10(param_5,&local_res20,param_3);
      uVar6 = FUN_143703a50();
      local_68 = 0;
      if (-1 < (int)local_64) {
        FUN_143702e10(uVar6,local_70,8,local_64 & 0x3fffffff);
      }
    }
    *param_2 = uVar8;
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 14372f930 FUN_14372f930 body=332 status=ok
// SIG undefined FUN_14372f930(void)

void FUN_14372f930(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(undefined8 *)(*param_1 + (ulonglong)param_2 * 0x10) = 0xffffffffffffffff;
  uVar9 = *(uint *)((longlong)param_1 + 0xc);
  lVar1 = *param_1;
  uVar7 = uVar9 + param_2 & uVar9;
  lVar6 = *(longlong *)(lVar1 + (ulonglong)uVar7 * 0x10);
  while (lVar6 != -1) {
    uVar7 = uVar7 + uVar9 & uVar9;
    lVar6 = *(longlong *)(lVar1 + (ulonglong)uVar7 * 0x10);
  }
  uVar5 = param_2 + 1 & uVar9;
  uVar7 = uVar7 + 1 & uVar9;
  lVar6 = (ulonglong)uVar5 * 0x10;
  lVar1 = *(longlong *)(lVar1 + lVar6);
  while (lVar1 != -1) {
    lVar1 = *param_1;
    iVar2 = (int)*(undefined8 *)(lVar1 + lVar6);
    uVar8 = iVar2 * -0x61c8864f;
    iVar3 = (int)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20);
    uVar4 = iVar3 * -0x61c8864f;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar2 * -0x4f000000;
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | iVar3 * -0x4f000000;
    uVar9 = (uVar8 + uVar4 * 0x40 + -0x61c88647 + (uVar8 >> 2) ^ uVar4) & uVar9;
    if ((((uVar5 < uVar7) || (uVar9 <= param_2)) &&
        ((param_2 <= uVar5 || ((uVar9 <= param_2 && (uVar5 < uVar9)))))) &&
       ((uVar9 <= param_2 || (uVar7 <= uVar9)))) {
      FGenericPlatformString::Memcpy((ulonglong)param_2 * 0x10 + lVar1,lVar1 + lVar6,0x10);
      *(undefined8 *)(lVar6 + *param_1) = 0xffffffffffffffff;
      param_2 = uVar5;
    }
    uVar9 = *(uint *)((longlong)param_1 + 0xc);
    uVar5 = uVar5 + 1 & uVar9;
    lVar6 = (ulonglong)uVar5 * 0x10;
    lVar1 = *(longlong *)(lVar6 + *param_1);
  }
  return;
}



// FUNCTION 14372fa80 FUN_14372fa80 body=111 status=ok
// SIG undefined FUN_14372fa80(void)

undefined4 *
FUN_14372fa80(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = *param_4;
  local_14 = param_4[1];
  local_10 = param_4[2];
  uVar1 = FUN_14372aa30(param_1,param_3,&local_18);
  if ((int)uVar1 <= *(int *)(param_1 + 0xc)) {
    FUN_14372faf0(param_1,uVar1);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14372faf0 FUN_14372faf0 body=284 status=ok
// SIG undefined FUN_14372faf0(void)

void FUN_14372faf0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(undefined4 *)(*param_1 + (ulonglong)param_2 * 0x10) = 0xffffffff;
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  lVar3 = *param_1;
  uVar6 = uVar5 + param_2 & uVar5;
  iVar2 = *(int *)(lVar3 + (ulonglong)uVar6 * 0x10);
  while (iVar2 != -1) {
    uVar6 = uVar6 + uVar5 & uVar5;
    iVar2 = *(int *)(lVar3 + (ulonglong)uVar6 * 0x10);
  }
  uVar4 = param_2 + 1 & uVar5;
  uVar6 = uVar6 + 1 & uVar5;
  lVar7 = (ulonglong)uVar4 * 0x10;
  iVar2 = *(int *)(lVar3 + lVar7);
  while (iVar2 != -1) {
    iVar2 = *(int *)(*param_1 + lVar7);
    uVar5 = (int)((ulonglong)(longlong)iVar2 >> 4) * -0x61c8864f & uVar5;
    if ((((uVar4 < uVar6) || (uVar5 <= param_2)) &&
        ((param_2 <= uVar4 || ((uVar5 <= param_2 && (uVar4 < uVar5)))))) &&
       ((uVar5 <= param_2 || (uVar6 <= uVar5)))) {
      *(int *)(*param_1 + (ulonglong)param_2 * 0x10) = iVar2;
      lVar3 = *param_1 + lVar7;
      lVar1 = *param_1 + (ulonglong)param_2 * 0x10;
      *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(lVar3 + 4);
      *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(lVar3 + 8);
      *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(lVar3 + 0xc);
      *(undefined4 *)(lVar7 + *param_1) = 0xffffffff;
      param_2 = uVar4;
    }
    uVar5 = *(uint *)((longlong)param_1 + 0xc);
    uVar4 = uVar4 + 1 & uVar5;
    lVar7 = (ulonglong)uVar4 * 0x10;
    iVar2 = *(int *)(lVar7 + *param_1);
  }
  return;
}



// FUNCTION 14372fc10 FUN_14372fc10 body=87 status=ok
// SIG undefined FUN_14372fc10(void)

undefined4 * FUN_14372fc10(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14372a8d0(param_1,param_3);
  if ((int)uVar1 <= *(int *)(param_1 + 8) + -1) {
    FUN_14372fc70(param_1,uVar1);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14372fc70 FUN_14372fc70 body=299 status=ok
// SIG undefined FUN_14372fc70(void)

void FUN_14372fc70(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = (int)param_1[1] - 1;
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  *(undefined8 *)(*param_1 + (longlong)(int)param_2 * 8) = 0xffffffffffffffff;
  lVar1 = *param_1;
  uVar6 = param_2 + uVar9 & uVar9;
  lVar2 = *(longlong *)(lVar1 + (longlong)(int)uVar6 * 8);
  while (lVar2 != -1) {
    uVar6 = uVar6 + uVar9 & uVar9;
    lVar2 = *(longlong *)(lVar1 + (longlong)(int)uVar6 * 8);
  }
  uVar4 = param_2 + 1 & uVar9;
  uVar6 = uVar6 + 1 & uVar9;
  lVar2 = (longlong)(int)uVar4 * 8;
  lVar1 = *(longlong *)(lVar1 + (longlong)(int)uVar4 * 8);
  while (lVar1 != -1) {
    uVar3 = *(undefined8 *)(*param_1 + lVar2);
    uVar8 = (int)uVar3 * -0x61c8864f;
    iVar5 = (int)((ulonglong)uVar3 >> 0x20);
    uVar7 = iVar5 * -0x61c8864f;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
            (int)uVar3 * -0x4f000000;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar5 * -0x4f000000;
    uVar7 = (uVar8 + uVar7 * 0x40 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7) & uVar9;
    if ((((uVar4 < uVar6) || (uVar7 <= param_2)) &&
        ((param_2 <= uVar4 || ((uVar7 <= param_2 && (uVar4 < uVar7)))))) &&
       ((uVar7 <= param_2 || (uVar6 <= uVar7)))) {
      *(undefined8 *)(*param_1 + (longlong)(int)param_2 * 8) = uVar3;
      *(undefined8 *)(lVar2 + *param_1) = 0xffffffffffffffff;
      param_2 = uVar4;
    }
    uVar4 = uVar4 + 1 & uVar9;
    lVar2 = (longlong)(int)uVar4 * 8;
    lVar1 = *(longlong *)(lVar2 + *param_1);
  }
  return;
}



// FUNCTION 14372fda0 FUN_14372fda0 body=243 status=ok
// SIG undefined FUN_14372fda0(void)

void FUN_14372fda0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res10 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = 0;
  if (-1 < *(int *)(param_2 + 0xa4)) {
    piVar1 = *(int **)(param_2 + 0x98);
    lVar3 = 0;
    do {
      if (*piVar1 != -1) break;
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
      piVar1 = piVar1 + 4;
    } while (lVar3 <= *(int *)(param_2 + 0xa4));
  }
  if (iVar2 <= *(int *)(param_2 + 0xa4)) {
    do {
      lVar3 = (longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 0x98);
      do {
        local_14 = *(undefined4 *)(lVar3 + 8);
        local_18 = *(undefined4 *)(lVar3 + 4);
        local_10 = *(undefined4 *)(lVar3 + 0xc);
        piVar1 = (int *)FUN_14372fa80(param_1 + 0x98,local_res10,local_18,&local_18);
      } while (-1 < *piVar1);
      iVar2 = iVar2 + 1;
      if (iVar2 <= *(int *)(param_2 + 0xa4)) {
        lVar3 = (longlong)iVar2;
        piVar1 = (int *)(lVar3 * 0x10 + *(longlong *)(param_2 + 0x98));
        do {
          if (*piVar1 != -1) break;
          iVar2 = iVar2 + 1;
          lVar3 = lVar3 + 1;
          piVar1 = piVar1 + 4;
        } while (lVar3 <= *(int *)(param_2 + 0xa4));
      }
    } while (iVar2 <= *(int *)(param_2 + 0xa4));
  }
  return;
}



// FUNCTION 14372fea0 FUN_14372fea0 body=44 status=ok
// SIG undefined FUN_14372fea0(void)

void FUN_14372fea0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 local_res18 [16];
  
  iVar1 = 8;
  if (8 < param_3 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_3 * 2);
  }
  FUN_14372fed0(param_1,local_res18,param_2);
  return;
}



// FUNCTION 14372fed0 FUN_14372fed0 body=343 status=ok
// SIG undefined FUN_14372fed0(void)

undefined4 * FUN_14372fed0(longlong *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  longlong *local_res18;
  int local_res20;
  
  local_res20 = (int)param_1[1];
  plVar1 = (longlong *)*param_1;
  iVar2 = 8;
  if (8 < param_4) {
    iVar2 = param_4;
  }
  iVar8 = *(int *)((longlong)param_1 + 0xc) + 1;
  local_res10 = param_2;
  local_res18 = plVar1;
  lVar3 = (**(code **)(*param_3 + 8))(param_3,iVar2 << 4);
  if (lVar3 != 0) {
    *param_1 = lVar3;
    lVar3 = (longlong)iVar2;
    if (0 < iVar2) {
      lVar4 = 0;
      do {
        *(undefined8 *)(lVar4 + *param_1) = 0xffffffffffffffff;
        lVar3 = lVar3 + -1;
        lVar4 = lVar4 + 0x10;
      } while (lVar3 != 0);
    }
    iVar5 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    lVar3 = (longlong)iVar8;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + -1;
    plVar7 = plVar1;
    plVar6 = plVar1;
    if (0 < iVar8) {
      do {
        if (*plVar6 != -1) {
          iVar2 = FUN_143724d70(param_1,param_3,plVar1 + (longlong)iVar5 * 2,local_res8);
          FGenericPlatformString::Memcpy
                    ((longlong)iVar2 * 0x10 + *param_1,plVar1 + (longlong)iVar5 * 2,0x10);
        }
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + -1;
        plVar7 = local_res18;
        plVar6 = plVar6 + 2;
        param_2 = local_res10;
      } while (lVar3 != 0);
    }
    if (-1 < local_res20) {
      (**(code **)(*param_3 + 0x10))(param_3,plVar7,iVar8 * 0x10);
    }
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143730030 FUN_143730030 body=273 status=ok
// SIG undefined FUN_143730030(void)

undefined4 * FUN_143730030(longlong *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  lVar2 = param_1[1];
  iVar7 = *(int *)((longlong)param_1 + 0xc) + 1;
  lVar1 = *param_1;
  lVar5 = (longlong)param_3;
  plVar3 = (longlong *)FUN_143703a50();
  lVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_3 << 4);
  if (lVar4 == 0) {
    *param_2 = 0x80040200;
  }
  else {
    *param_1 = lVar4;
    if (0 < param_3) {
      lVar4 = 0;
      do {
        *(undefined4 *)(lVar4 + *param_1) = 0xffffffff;
        lVar5 = lVar5 + -1;
        lVar4 = lVar4 + 0x10;
      } while (lVar5 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(int *)((longlong)param_1 + 0xc) = param_3 + -1;
    lVar4 = (longlong)iVar7;
    if (0 < iVar7) {
      puVar6 = (undefined4 *)(lVar1 + 0xc);
      do {
        if (puVar6[-3] != -1) {
          local_38 = puVar6[-2];
          local_34 = puVar6[-1];
          local_30 = *puVar6;
          FUN_14372d740(param_1,puVar6[-3],&local_38);
        }
        puVar6 = puVar6 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (-1 < (int)lVar2) {
      (**(code **)(*plVar3 + 0x10))(plVar3,lVar1,iVar7 * 0x10);
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 143730150 FUN_143730150 body=166 status=ok
// SIG undefined FUN_143730150(void)

void FUN_143730150(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar5 = (param_2 - *(int *)(param_1 + 0x98)) + 1;
  if (0 < iVar5) {
    uVar2 = FUN_143703a50();
    iVar7 = *(int *)(param_1 + 0x98) + iVar5;
    uVar3 = *(uint *)(param_1 + 0x9c) & 0x3fffffff;
    if ((int)uVar3 < iVar7) {
      iVar1 = uVar3 * 2;
      if (iVar7 < iVar1) {
        iVar7 = iVar1;
      }
      FUN_14370c310(uVar2,(longlong *)(param_1 + 0x90),iVar7,1);
    }
    if (0 < iVar5) {
      puVar6 = (undefined1 *)((longlong)*(int *)(param_1 + 0x98) + *(longlong *)(param_1 + 0x90));
      for (lVar4 = (longlong)iVar5; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar5;
  }
  *(undefined1 *)((longlong)param_2 + *(longlong *)(param_1 + 0x90)) = 1;
  return;
}



// FUNCTION 143730200 FUN_143730200 body=1223 status=ok
// SIG undefined FUN_143730200(void)

undefined4 *
FUN_143730200(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *local_res18;
  longlong local_70;
  longlong local_68;
  undefined1 local_60 [56];
  
  iVar15 = 0;
  if (param_3 != (int *)0x0) {
    iVar15 = *param_3;
  }
  iVar14 = 0;
  uVar8 = 0;
  local_res18 = param_3;
  if (iVar15 != 0) {
    lVar7 = (longlong)iVar15 * 0x18;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1e0);
    if (*(char *)(lVar7 + 0x10 + lVar6) == '\x01') {
      uVar10 = *(uint *)(lVar7 + 0x14 + lVar6);
    }
    else {
      uVar10 = 0xffffffff;
    }
    if (*(longlong *)(lVar7 + 8 + lVar6) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1437151a0();
    }
    if ((uVar3 & 1) != 0) {
      FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
    }
    iVar14 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
    if ((uVar3 & 1) != 0) {
      FUN_143733a60(uVar3 & 0xfffffffffffffffe);
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1e0);
    uVar8 = *(undefined8 *)(lVar7 + lVar6);
    if (*(longlong *)(lVar7 + 8 + lVar6) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1437151a0();
    }
    if ((uVar3 & 1) != 0) {
      FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
    }
    if ((uVar3 & 1) != 0) {
      FUN_143733a60(uVar3 & 0xfffffffffffffffe);
    }
  }
  plVar4 = (longlong *)FUN_143714420(param_4,2);
  if (plVar4 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar4;
  }
  puVar5 = (undefined8 *)FUN_143714490(lVar7,1);
  if (puVar5 == (undefined8 *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)*puVar5;
  }
  lVar6 = 0;
  if ((uVar10 & 0xf) == 0) {
    lVar6 = lVar7;
  }
  if (lVar6 == 0) {
    puVar5 = (undefined8 *)FUN_143714420(param_4,2);
    if (puVar5 == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *puVar5;
    }
    iVar2 = FUN_1437152f0(uVar11);
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0xd0);
    local_70 = (**(code **)(*plVar4 + 8))(plVar4,iVar2 * param_5);
    if (iVar14 < param_5) {
      iVar16 = (param_5 - iVar14) * iVar2;
    }
    else {
      iVar16 = 0;
    }
    FUN_14370c720(iVar2 * iVar14 + local_70,0,iVar16);
    lVar7 = local_70;
    if (iVar15 == 0) {
      iVar15 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x1e8);
      lVar7 = (longlong)iVar15;
      puVar5 = (undefined8 *)FUN_143714420(param_4,2);
      uVar8 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        uVar8 = *puVar5;
      }
      iVar2 = FUN_143725900(*(longlong *)(param_1 + 0x10) + 0x1c8,uVar8);
      lVar6 = *(longlong *)(param_1 + 0x10);
      iVar14 = iVar15 + 1;
      if (iVar15 + 1 < *(int *)(lVar6 + 0x1e8)) {
        iVar14 = *(int *)(lVar6 + 0x1e8);
      }
      uVar8 = FUN_143703a50();
      uVar10 = *(uint *)(lVar6 + 0x1ec) & 0x3fffffff;
      if ((int)uVar10 < iVar14) {
        iVar16 = uVar10 * 2;
        iVar1 = iVar14;
        if (iVar14 < iVar16) {
          iVar1 = iVar16;
        }
        FUN_14370c310(uVar8,lVar6 + 0x1e0,iVar1,0x18);
      }
      lVar12 = local_70;
      iVar16 = iVar14 - *(int *)(lVar6 + 0x1e8);
      lVar13 = (longlong)iVar16;
      if (0 < iVar16) {
        puVar9 = (undefined1 *)
                 (*(longlong *)(lVar6 + 0x1e0) + (longlong)*(int *)(lVar6 + 0x1e8) * 0x18 + 0x10);
        do {
          if ((undefined8 *)(puVar9 + -0x10) != (undefined8 *)0x0) {
            *(undefined8 *)(puVar9 + -0x10) = 0;
            *(undefined8 *)(puVar9 + -8) = 0;
            *puVar9 = 0;
            *(undefined4 *)(puVar9 + 4) = 0;
          }
          puVar9 = puVar9 + 0x18;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      *(int *)(lVar6 + 0x1e8) = iVar14;
      lVar13 = *(longlong *)(lVar6 + 0x1e0);
      *(undefined8 *)(lVar13 + 8 + lVar7 * 0x18) =
           *(undefined8 *)(*(longlong *)(lVar6 + 0x1d0) + (longlong)iVar2 * 8);
      *(longlong *)(lVar13 + lVar7 * 0x18) = local_70;
      *(undefined1 *)(lVar13 + 0x10 + lVar7 * 0x18) = 1;
      *(int *)(lVar13 + 0x14 + lVar7 * 0x18) = param_5;
      FUN_143730150(*(longlong *)(param_1 + 0x10) + 0x1c8,iVar15);
      lVar6 = *(longlong *)(param_1 + 0x10);
      local_68 = lVar12;
      local_70 = lVar7;
      uVar8 = FUN_143703a50();
      FUN_14372d6e0(lVar6 + 0x2c8,uVar8,&local_68,&local_70);
      *local_res18 = iVar15;
    }
    else {
      iVar16 = param_5;
      if (iVar14 < param_5) {
        iVar16 = iVar14;
      }
      FUN_14370c700(local_70,uVar8,iVar16 * iVar2);
      puVar5 = (undefined8 *)FUN_143714420(param_4,2);
      if (puVar5 == (undefined8 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar5;
      }
      iVar2 = FUN_143725900(*(longlong *)(param_1 + 0x10) + 0x1c8,uVar8);
      lVar6 = *(longlong *)(param_1 + 0x10);
      iVar14 = iVar15 + 1;
      if (iVar15 + 1 < *(int *)(lVar6 + 0x1e8)) {
        iVar14 = *(int *)(lVar6 + 0x1e8);
      }
      uVar8 = FUN_143703a50();
      uVar10 = *(uint *)(lVar6 + 0x1ec) & 0x3fffffff;
      if ((int)uVar10 < iVar14) {
        iVar1 = uVar10 * 2;
        iVar16 = iVar14;
        if (iVar14 < iVar1) {
          iVar16 = iVar1;
        }
        FUN_14370c310(uVar8,lVar6 + 0x1e0,iVar16,0x18);
      }
      iVar16 = iVar14 - *(int *)(lVar6 + 0x1e8);
      lVar12 = (longlong)iVar16;
      if (0 < iVar16) {
        puVar9 = (undefined1 *)
                 (*(longlong *)(lVar6 + 0x1e0) + (longlong)*(int *)(lVar6 + 0x1e8) * 0x18 + 0x10);
        do {
          if ((undefined8 *)(puVar9 + -0x10) != (undefined8 *)0x0) {
            *(undefined8 *)(puVar9 + -0x10) = 0;
            *(undefined8 *)(puVar9 + -8) = 0;
            *puVar9 = 0;
            *(undefined4 *)(puVar9 + 4) = 0;
          }
          puVar9 = puVar9 + 0x18;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      *(int *)(lVar6 + 0x1e8) = iVar14;
      lVar12 = *(longlong *)(lVar6 + 0x1e0);
      local_res18 = (int *)(longlong)iVar15;
      *(undefined8 *)(lVar12 + 8 + (longlong)local_res18 * 0x18) =
           *(undefined8 *)(*(longlong *)(lVar6 + 0x1d0) + (longlong)iVar2 * 8);
      *(int *)(lVar12 + 0x14 + (longlong)local_res18 * 0x18) = param_5;
      *(longlong *)(lVar12 + (longlong)local_res18 * 0x18) = lVar7;
      *(undefined1 *)(lVar12 + 0x10 + (longlong)local_res18 * 0x18) = 1;
      lVar6 = *(longlong *)(param_1 + 0x10);
      local_70 = lVar7;
      uVar8 = FUN_143703a50();
      FUN_14372d6e0(lVar6 + 0x2c8,uVar8,&local_70,&local_res18);
    }
    *param_2 = 0;
  }
  else {
    if (DAT_146b823d8 != '\0') {
      FUN_14373a730(local_60,&DAT_146b823d0,1);
      lVar7 = FUN_14373bbd0(local_60,"Attempting to set the size of an untyped array",&DAT_145b909f0
                            ,0);
      *(char **)(lVar7 + 0x20) = "Serialize\\Version\\hkVersionBundle.cpp";
      *(undefined8 *)(lVar7 + 0x28) = 0x1b7;
      FUN_14373a950(local_60);
    }
    *param_2 = 0x80040200;
  }
  return param_2;
}



// FUNCTION 1437306d0 FUN_1437306d0 body=37 status=ok
// SIG undefined FUN_1437306d0(void)

undefined8 FUN_1437306d0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))();
  return param_2;
}



// FUNCTION 143730700 FUN_143730700 body=1220 status=ok
// SIG undefined FUN_143730700(void)

undefined4 * FUN_143730700(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  uint local_res8 [2];
  undefined4 *local_res10;
  longlong *local_res18;
  int local_res20 [2];
  int local_68 [2];
  longlong local_60;
  undefined1 local_58 [8];
  undefined1 local_50;
  longlong local_48;
  int local_40;
  uint local_3c;
  int local_38;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if ((int)param_3[1] + -1 < (int)param_3[2] * 2) {
    FUN_143720a20(param_3,local_res8,(int)param_3[1] * 2);
  }
  uVar17 = (int)local_res18[1] - 1;
  iVar3 = (int)((ulonglong)param_1 >> 0x20);
  uVar10 = iVar3 * -0x61c8864f;
  iVar12 = 0;
  uVar15 = (int)param_1 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
           (int)param_1 * -0x4f000000;
  lVar13 = *local_res18;
  uVar10 = (uVar15 + uVar10 * 0x40 + (uVar15 >> 2) + 0x9e3779b9 ^ uVar10) & uVar17;
  lVar4 = (longlong)(int)uVar10;
  lVar1 = *(longlong *)(lVar13 + lVar4 * 8);
  while ((iVar3 = 1, lVar1 != -1 && (iVar3 = 0, *(undefined8 **)(lVar13 + lVar4 * 8) != param_1))) {
    uVar10 = uVar10 + 1 & uVar17;
    lVar4 = (longlong)(int)uVar10;
    lVar1 = *(longlong *)(lVar13 + lVar4 * 8);
  }
  *(int *)(local_res18 + 2) = (int)local_res18[2] + iVar3;
  *(undefined8 **)(lVar13 + (longlong)(int)uVar10 * 8) = param_1;
  if (iVar3 == 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  iVar3 = FUN_1437152f0(param_1[0xc]);
  if (iVar3 != 0) goto LAB_143730b94;
  FUN_1437151f0(param_1[0xc]);
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  local_38 = 0;
  if (0 < *(int *)(param_1 + 6)) {
    local_60 = 0;
    local_res8[0] = 0;
    do {
      if ((*(int *)(*(longlong *)(local_60 + param_1[5]) + 0x1c) == 3) &&
         (lVar13 = *(longlong *)(*(longlong *)(local_60 + param_1[5]) + 0x10), lVar13 != 0)) {
        (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,lVar13);
        piVar5 = (int *)FUN_143730700(lVar13,local_res20);
        if (*piVar5 < 0) {
          if (local_40 + -1 < local_38 * 2) {
            FUN_1436ffb50(&local_48,local_68,local_40 * 2);
          }
          iVar18 = 1;
          uVar10 = (local_res8[0] >> 0x18 | (local_res8[0] & 0xff0000) >> 8 |
                    (local_res8[0] & 0xff00) << 8 | local_res8[0] << 0x18) & local_40 - 1U;
          iVar3 = *(int *)(local_48 + (longlong)(int)uVar10 * 4);
          while (iVar3 != -1) {
            if (iVar3 == iVar12) {
              iVar18 = 0;
              break;
            }
            uVar10 = uVar10 + 1 & local_40 - 1U;
            iVar3 = *(int *)(local_48 + (longlong)(int)uVar10 * 4);
          }
          local_38 = local_38 + iVar18;
          *(int *)(local_48 + (longlong)(int)uVar10 * 4) = iVar12;
          FUN_14374ac50(param_1[0xc],**(ulonglong **)(local_60 + param_1[5]) & 0xfffffffffffffffe);
        }
        else if (*(char *)(param_1 + 0x12) == '\0') {
          uVar2 = FUN_14372f460(lVar13);
          *(undefined1 *)(param_1 + 0x12) = uVar2;
        }
      }
      local_res8[0] = local_res8[0] + 0x9e3779b1;
      iVar12 = iVar12 + 1;
      local_60 = local_60 + 8;
    } while (iVar12 < *(int *)(param_1 + 6));
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar12 = -1;
    local_res8[0] = local_res8[0] & 0xffffff00;
    local_68[0] = -1;
    local_res20[0] = -1;
    if (0 < *(int *)(param_1 + 8)) {
      lVar13 = 0;
      do {
        if (*(longlong *)(lVar13 + param_1[7]) == 0) {
          cVar16 = (char)local_res8[0];
        }
        else {
          (**(code **)(*(longlong *)*param_1 + 0x38))();
          piVar5 = (int *)FUN_143730700(*(undefined8 *)(lVar13 + param_1[7]),&local_60,local_res18);
          if (*piVar5 < 0) {
            local_res20[0] = 0x400;
            local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
            cVar16 = '\x01';
            local_68[0] = iVar3;
          }
          else {
            iVar12 = FUN_1437152f0(*(undefined8 *)(*(longlong *)(lVar13 + param_1[7]) + 0x60));
            if (local_res20[0] < iVar12) {
              local_res20[0] =
                   FUN_1437152f0(*(undefined8 *)(*(longlong *)(lVar13 + param_1[7]) + 0x60));
              local_68[0] = iVar3;
            }
            cVar16 = (char)local_res8[0];
          }
          iVar12 = local_68[0];
          if (*(char *)(*(longlong *)(param_1[7] + lVar13) + 0x90) != '\0') {
            *(undefined1 *)(param_1 + 0x12) = 1;
          }
        }
        iVar3 = iVar3 + 1;
        lVar13 = lVar13 + 8;
      } while (iVar3 < *(int *)(param_1 + 8));
      if ((cVar16 == '\0') && (iVar12 != -1)) {
        *(undefined8 *)(param_1[0xc] + 8) =
             *(undefined8 *)(*(longlong *)(param_1[7] + (longlong)iVar12 * 8) + 0x60);
        goto LAB_143730a38;
      }
    }
    *(undefined **)(param_1[0xc] + 8) = &DAT_1467f1270;
  }
LAB_143730a38:
  FUN_143735ac0(local_58);
  lVar13 = FUN_143736480(local_58);
  *(undefined4 *)(lVar13 + 0xc) = 8;
  local_50 = 0;
  FUN_143735e50(param_1[0xc],local_58);
  if ((*(int *)(param_1 + 8) == 0) || (*(longlong *)param_1[7] == 0)) {
    *(undefined8 *)(param_1[0xc] + 8) = 0;
  }
  else {
    *(undefined8 *)(param_1[0xc] + 8) = *(undefined8 *)(*(longlong *)param_1[7] + 0x60);
  }
  uVar14 = 0;
  uVar10 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  iVar3 = local_40 + -1;
  uVar6 = uVar14;
  uVar11 = uVar14;
  if (-1 < iVar3) {
    do {
      uVar10 = (uint)uVar11;
      if (*(int *)(local_48 + uVar6 * 4) != -1) break;
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 <= (longlong)iVar3);
  }
  if ((int)uVar10 <= iVar3) {
    do {
      puVar8 = *(ulonglong **)
                (param_1[5] + (longlong)*(int *)(local_48 + (longlong)(int)uVar10 * 4) * 8);
      uVar6 = uVar14;
      if (*(int *)((longlong)puVar8 + 0x1c) == 3) {
        uVar6 = puVar8[2];
      }
      FUN_14374ac50(param_1[0xc],*puVar8 & 0xfffffffffffffffe,*(undefined8 *)(uVar6 + 0x60));
      uVar10 = uVar10 + 1;
      for (lVar13 = (longlong)(int)uVar10;
          (lVar13 <= local_40 + -1 && (*(int *)(local_48 + lVar13 * 4) == -1)); lVar13 = lVar13 + 1)
      {
        uVar10 = uVar10 + 1;
      }
    } while ((int)uVar10 <= local_40 + -1);
  }
  iVar3 = *(int *)(param_1 + 4);
  plVar7 = (longlong *)FUN_1437143d0(param_1[0xc],0x10);
  *plVar7 = (longlong)iVar3;
  uVar14 = param_1[3];
  puVar8 = (ulonglong *)FUN_1437143d0(param_1[0xc],8);
  *puVar8 = uVar14 & 0xfffffffffffffffe;
  uVar9 = FUN_143703a50();
  local_40 = 0;
  param_2 = local_res10;
  if (-1 < (int)local_3c) {
    FUN_143702e10(uVar9,local_48,4,local_3c & 0x3fffffff);
    param_2 = local_res10;
  }
LAB_143730b94:
  FUN_14372fc10(local_res18,local_res8,param_1);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143730bd0 FUN_143730bd0 body=170 status=ok
// SIG undefined FUN_143730bd0(void)

undefined4 *
FUN_143730bd0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (param_3[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar3;
    }
    if ((bVar2 & 0xf) == 6) {
      puVar1 = (undefined4 *)*param_3;
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_3[2];
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = param_4;
      }
    }
  }
  *param_2 = 0;
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_143733a60(param_3[2] & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143730c80 FUN_143730c80 body=104 status=ok
// SIG undefined FUN_143730c80(void)

undefined4 * FUN_143730c80(undefined8 param_1,undefined4 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  
  cVar2 = FUN_143755360(0xcd3e62f,"Serialize\\Version\\hkVersionBundle.cpp",0xcb0,
                        "hkSerialize::ForwardingPointerImpl::setValue",&DAT_145af3922,
                        "Not implemented",&DAT_145b909f0,0);
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143730cf0 FUN_143730cf0 body=258 status=ok
// SIG undefined FUN_143730cf0(void)

undefined4 *
FUN_143730cf0(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  longlong local_28;
  undefined4 local_20 [2];
  
  plVar4 = param_5;
  if (*param_5 == 0) {
    *(undefined4 *)param_3 = 0;
LAB_143730dce:
    *param_2 = 0;
  }
  else {
    if (param_5[1] == 0) {
LAB_143730d98:
      local_28 = *plVar4;
      piVar6 = (int *)FUN_14372adb0(*(longlong *)(param_1 + 0x10) + 0x2c8,&param_5,&local_28,
                                    local_20);
      if (-1 < *piVar6) {
        *(undefined4 *)param_3 = local_20[0];
        goto LAB_143730dce;
      }
    }
    else {
      lVar3 = FUN_143715410();
      if (lVar3 != 0) goto LAB_143730d98;
      lVar3 = FUN_1436f73d0(*plVar4,plVar4[1]);
      if (lVar3 == 0) goto LAB_143730d98;
      plVar4 = (longlong *)FUN_143714420(param_4,2);
      if ((plVar4 != (longlong *)0x0) && (lVar1 = *plVar4, lVar1 != 0)) {
        lVar5 = FUN_143715410(lVar1);
        if (lVar5 == 0) {
          cVar2 = FUN_143714910(lVar1,&DAT_1467e2850);
          if (cVar2 != '\0') {
            *param_3 = lVar3;
            goto LAB_143730dce;
          }
        }
      }
    }
    *param_2 = 0x80040200;
  }
  return param_2;
}



// FUNCTION 143730e00 FUN_143730e00 body=1849 status=ok
// SIG undefined FUN_143730e00(void)

void FUN_143730e00(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,int param_5,
                  int param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int *piVar19;
  bool bVar20;
  longlong lVar21;
  int iVar22;
  int *local_res18;
  undefined8 local_res20;
  longlong local_120;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  ulonglong local_f0;
  undefined4 local_e8;
  undefined1 *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined1 local_c8 [136];
  
  bVar20 = false;
  iVar22 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_3 != (int *)0x0) {
    iVar22 = *param_3;
    if (iVar22 != 0) {
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1e0);
      puVar1 = (undefined8 *)(lVar17 + (longlong)iVar22 * 0x18);
      if (*(char *)(lVar17 + 0x10 + (longlong)iVar22 * 0x18) == '\x01') {
        uVar8 = *(undefined4 *)((longlong)puVar1 + 0x14);
      }
      else {
        uVar8 = 0xffffffff;
      }
      local_f8 = puVar1[1];
      local_100 = *puVar1;
      if (local_f8 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_1437151a0();
      }
      local_f0 = uVar9;
      if ((uVar9 & 1) != 0) {
        FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
      }
      local_e8 = uVar8;
      FUN_14372dfd0(*(undefined8 *)(param_1 + 0x10),iVar22,&local_100,0);
      if ((uVar9 & 1) != 0) {
        FUN_143733a60(uVar9 & 0xfffffffffffffffe);
      }
    }
  }
  iVar18 = 0;
  local_120 = 0;
  uVar9 = local_f0;
  if (iVar22 != 0) {
    lVar17 = *(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1e0) + 8 + (longlong)iVar22 * 0x18);
    if (lVar17 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_1437151a0(lVar17);
    }
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    bVar20 = true;
    if (lVar17 != 0) {
      bVar3 = true;
      goto LAB_143730f35;
    }
  }
  bVar3 = false;
LAB_143730f35:
  if ((bVar20) && ((uVar9 & 1) != 0)) {
    FUN_143733a60(uVar9 & 0xfffffffffffffffe);
  }
  if (bVar3) {
    lVar11 = (longlong)iVar22 * 0x18;
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1e0);
    if (*(char *)(lVar17 + 0x10 + lVar11) == '\x01') {
      uVar14 = *(uint *)(lVar17 + 0x14 + lVar11);
    }
    else {
      uVar14 = 0xffffffff;
    }
    if (*(longlong *)(lVar17 + 8 + lVar11) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_1437151a0();
    }
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    iVar18 = (uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f);
    if ((uVar9 & 1) != 0) {
      FUN_143733a60(uVar9 & 0xfffffffffffffffe);
    }
    plVar10 = (longlong *)FUN_143714420(local_res20,2);
    if (((plVar10 == (longlong *)0x0) || (*plVar10 == 0)) && (lVar17 = param_7[1], lVar17 != 0)) {
      if ((param_6 != -1) && (param_6 != iVar18)) {
        *param_2 = 0x80040200;
        return;
      }
      iVar22 = 0;
      iVar18 = 0;
    }
    else {
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1e0);
      local_120 = *(longlong *)(lVar17 + lVar11);
      if (*(longlong *)(lVar17 + 8 + lVar11) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_1437151a0();
      }
      if ((uVar9 & 1) != 0) {
        FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
      }
      if ((uVar9 & 1) != 0) {
        FUN_143733a60(uVar9 & 0xfffffffffffffffe);
      }
      lVar17 = *(longlong *)(lVar11 + 8 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1e0));
      if (lVar17 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_1437151a0(lVar17);
      }
      if ((uVar9 & 1) != 0) {
        FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
      }
      if ((uVar9 & 1) != 0) {
        FUN_143733a60(uVar9 & 0xfffffffffffffffe);
      }
    }
  }
  else {
    lVar17 = param_7[1];
  }
  if (param_6 == -1) {
    param_6 = iVar18;
  }
  iVar5 = (*(int *)(param_7 + 2) - param_6) + iVar18;
  if (lVar17 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_1437152f0(lVar17);
  }
  plVar10 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0xd0);
  lVar11 = (**(code **)(*plVar10 + 8))(plVar10,iVar6 * iVar5);
  if (param_5 == -1) {
    param_5 = iVar18;
  }
  if (0 < param_5) {
    FUN_14370c700(lVar11,local_120,iVar6 * param_5);
  }
  if (*(int *)(param_7 + 2) != 0) {
    FUN_14374ea80(*(longlong *)(param_1 + 0x10) + 0x188,&local_108,param_7[1],lVar17);
    local_110 = *(longlong *)(param_1 + 0x10);
    iVar7 = *(int *)(param_7 + 2);
    FUN_143720e70(&local_110,local_108,iVar6 * param_5 + lVar11,iVar7 * iVar6,*param_7,
                  *(int *)((longlong)param_7 + 0x14) * iVar7,iVar6,
                  *(int *)((longlong)param_7 + 0x14),iVar7);
  }
  if (param_5 + param_6 < iVar18) {
    FUN_14370c700((*(int *)(param_7 + 2) + param_5) * iVar6 + lVar11,
                  (param_5 + param_6) * iVar6 + local_120,((iVar18 - param_5) - param_6) * iVar6);
  }
  if (iVar22 == 0) {
    if (*(int *)(param_7 + 2) != 0) {
      iVar22 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x1e8);
      lVar21 = (longlong)iVar22;
      iVar6 = FUN_143725900(*(longlong *)(param_1 + 0x10) + 0x1c8,lVar17);
      lVar15 = *(longlong *)(param_1 + 0x10);
      iVar18 = iVar22 + 1;
      if (iVar22 + 1 < *(int *)(lVar15 + 0x1e8)) {
        iVar18 = *(int *)(lVar15 + 0x1e8);
      }
      uVar12 = FUN_143703a50();
      uVar14 = *(uint *)(lVar15 + 0x1ec) & 0x3fffffff;
      if ((int)uVar14 < iVar18) {
        iVar7 = uVar14 * 2;
        iVar2 = iVar18;
        if (iVar18 < iVar7) {
          iVar2 = iVar7;
        }
        FUN_14370c310(uVar12,lVar15 + 0x1e0,iVar2,0x18);
      }
      iVar7 = iVar18 - *(int *)(lVar15 + 0x1e8);
      lVar16 = (longlong)iVar7;
      if (0 < iVar7) {
        puVar13 = (undefined1 *)
                  (*(longlong *)(lVar15 + 0x1e0) + (longlong)*(int *)(lVar15 + 0x1e8) * 0x18 + 0x10)
        ;
        do {
          if ((undefined8 *)(puVar13 + -0x10) != (undefined8 *)0x0) {
            *(undefined8 *)(puVar13 + -0x10) = 0;
            *(undefined8 *)(puVar13 + -8) = 0;
            *puVar13 = 0;
            *(undefined4 *)(puVar13 + 4) = 0;
          }
          puVar13 = puVar13 + 0x18;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      *(int *)(lVar15 + 0x1e8) = iVar18;
      uVar12 = *(undefined8 *)(*(longlong *)(lVar15 + 0x1d0) + (longlong)iVar6 * 8);
      lVar15 = *(longlong *)(lVar15 + 0x1e0);
      *(longlong *)(lVar15 + lVar21 * 0x18) = lVar11;
      *(undefined8 *)(lVar15 + 8 + lVar21 * 0x18) = uVar12;
      *(undefined1 *)(lVar15 + 0x10 + lVar21 * 0x18) = 1;
      *(int *)(lVar15 + 0x14 + lVar21 * 0x18) = iVar5;
      lVar15 = *(longlong *)(param_1 + 0x10);
      local_110 = lVar21;
      local_108 = lVar11;
      uVar12 = FUN_143703a50();
      FUN_14372d6e0(lVar15 + 0x2c8,uVar12,&local_108,&local_110);
      *local_res18 = iVar22;
      FUN_143730150(*(longlong *)(param_1 + 0x10) + 0x1c8,iVar22);
      cVar4 = FUN_14372d7f0(lVar17);
      if (cVar4 != '\0') {
        local_d8 = local_c8;
        local_cc = 0x80000080;
        local_d0 = 1;
        local_c8[0] = 0;
        uVar12 = FUN_143714fc0(lVar17,&local_d8,0,0);
        uVar8 = FUN_143715430(lVar17);
        uVar12 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                           (*(longlong **)(param_1 + 0x10),uVar12,uVar8);
        FUN_143725600(uVar12,iVar22,0,iVar5);
        local_d0 = 0;
        if (-1 < (int)local_cc) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_d8,1,local_cc & 0x3fffffff);
        }
      }
    }
  }
  else {
    iVar6 = FUN_143725900(*(longlong *)(param_1 + 0x10) + 0x1c8,lVar17);
    lVar17 = *(longlong *)(param_1 + 0x10);
    iVar18 = iVar22 + 1;
    if (iVar22 + 1 < *(int *)(lVar17 + 0x1e8)) {
      iVar18 = *(int *)(lVar17 + 0x1e8);
    }
    uVar12 = FUN_143703a50();
    uVar14 = *(uint *)(lVar17 + 0x1ec) & 0x3fffffff;
    if ((int)uVar14 < iVar18) {
      iVar7 = uVar14 * 2;
      iVar2 = iVar18;
      if (iVar18 < iVar7) {
        iVar2 = iVar7;
      }
      FUN_14370c310(uVar12,lVar17 + 0x1e0,iVar2,0x18);
    }
    iVar7 = iVar18 - *(int *)(lVar17 + 0x1e8);
    lVar15 = (longlong)iVar7;
    if (0 < iVar7) {
      puVar13 = (undefined1 *)
                (*(longlong *)(lVar17 + 0x1e0) + (longlong)*(int *)(lVar17 + 0x1e8) * 0x18 + 0x10);
      do {
        if ((undefined8 *)(puVar13 + -0x10) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar13 + -0x10) = 0;
          *(undefined8 *)(puVar13 + -8) = 0;
          *puVar13 = 0;
          *(undefined4 *)(puVar13 + 4) = 0;
        }
        puVar13 = puVar13 + 0x18;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    *(int *)(lVar17 + 0x1e8) = iVar18;
    lVar15 = *(longlong *)(lVar17 + 0x1e0);
    piVar19 = (int *)(longlong)iVar22;
    *(undefined8 *)(lVar15 + 8 + (longlong)piVar19 * 0x18) =
         *(undefined8 *)(*(longlong *)(lVar17 + 0x1d0) + (longlong)iVar6 * 8);
    *(int *)(lVar15 + 0x14 + (longlong)piVar19 * 0x18) = iVar5;
    *(longlong *)(lVar15 + (longlong)piVar19 * 0x18) = lVar11;
    *(undefined1 *)(lVar15 + 0x10 + (longlong)piVar19 * 0x18) = 1;
    FUN_143730150(*(longlong *)(param_1 + 0x10) + 0x1c8,iVar22);
    lVar17 = *(longlong *)(param_1 + 0x10);
    local_res18 = piVar19;
    local_110 = lVar11;
    uVar12 = FUN_143703a50();
    FUN_14372d6e0(lVar17 + 0x2c8,uVar12,&local_110,&local_res18);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 143731540 FUN_143731540 body=58 status=ok
// SIG undefined FUN_143731540(void)

undefined8 FUN_143731540(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))();
  return param_2;
}



// FUNCTION 143731580 FUN_143731580 body=793 status=ok
// SIG undefined FUN_143731580(void)

undefined8 FUN_143731580(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  int iVar11;
  bool bVar12;
  undefined8 in_stack_fffffffffffffd18;
  undefined4 uVar13;
  longlong *local_2c8;
  undefined8 uStack_2c0;
  longlong local_2a8;
  int local_2a0;
  uint local_29c;
  undefined1 local_218 [512];
  
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffd18 >> 0x20);
  local_2c8 = (longlong *)(**(code **)*param_3)(param_3);
  uVar9 = 0;
  FUN_143745310(&local_2a8,*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe);
  iVar4 = FUN_143746140(&local_2a8,0x3c,0,0x7fffffff);
  bVar12 = -1 < iVar4;
  if (bVar12) {
    iVar11 = iVar4 + 1;
    if ((int)(local_29c & 0x3fffffff) < iVar11) {
      iVar3 = (local_29c & 0x3fffffff) * 2;
      iVar2 = iVar11;
      if (iVar11 < iVar3) {
        iVar2 = iVar3;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,&local_2a8,iVar2,1);
    }
    *(undefined1 *)(iVar4 + local_2a8) = 0;
    local_2a0 = iVar11;
  }
  lVar7 = local_2a8;
  iVar4 = *(int *)(param_2 + 0x1c);
  switch(iVar4) {
  case 0:
    lVar7 = *(longlong *)(param_2 + 0x10);
    puVar5 = (undefined8 *)FUN_143714490(lVar7,1);
    if (puVar5 == (undefined8 *)0x0) {
      bVar10 = 0;
    }
    else {
      bVar10 = (byte)*puVar5;
    }
    lVar6 = 0;
    if ((bVar10 & 0xf) == 3) {
      lVar6 = lVar7;
    }
    if (lVar6 == 0) {
      if (*(int *)(param_2 + 0x1c) == 0) goto switchD_143731656_caseD_6;
    }
    else {
      uVar9 = hkReflectUtil::internCopy(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe,0xffffffff)
      ;
      uVar8 = (**(code **)(*param_3 + 0x28))();
      lVar7 = (**(code **)(*local_2c8 + 8))(local_2c8,0x38);
      if (lVar7 != 0) {
        uVar9 = FUN_143736d50(lVar7,8,8,uVar8,uVar9,1,0x1000);
        break;
      }
    }
    goto LAB_143731851;
  case 1:
    if (*(longlong *)(param_2 + 0x10) != 0) {
      uVar9 = FUN_143731580(param_1,*(longlong *)(param_2 + 0x10),param_3);
    }
    lVar7 = local_2a8;
    uVar8 = (**(code **)(*(longlong *)*param_1 + 0x48))();
    uVar9 = FUN_14372d330(uVar8,lVar7,uVar9,bVar12);
    break;
  case 2:
    uVar9 = (**(code **)(*(longlong *)*param_1 + 0x48))();
    uVar9 = FUN_14372d330(uVar9,lVar7,&DAT_1467e2850,bVar12);
    break;
  case 3:
    lVar7 = (**(code **)(*(longlong *)*param_1 + 0x38))
                      ((longlong *)*param_1,*(undefined8 *)(param_2 + 0x10));
    uVar9 = *(undefined8 *)(lVar7 + 0x60);
    break;
  case 4:
  case 5:
    if (((iVar4 == 1) || (iVar4 - 4U < 2)) && (*(longlong *)(param_2 + 0x10) != 0)) {
      uVar9 = FUN_143731580(param_1,*(longlong *)(param_2 + 0x10),param_3);
    }
    lVar7 = local_2a8;
    local_2c8 = (longlong *)0x0;
    uStack_2c0 = 0;
    uVar8 = (**(code **)(*(longlong *)*param_1 + 0x48))();
    uVar9 = FUN_14372d190(uVar8,lVar7,uVar9,bVar12,CONCAT44(uVar13,*(undefined4 *)(param_2 + 0x18)),
                          &local_2c8);
    break;
  case 6:
switchD_143731656_caseD_6:
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    break;
  default:
    FUN_1437134a0(&local_2c8,local_218,0x200);
    Electra::FHTTPResourceRequest::URL(&local_2c8,"Invalid field type");
    iVar4 = FUN_143732300(0x33b1b823,local_218,"Serialize\\Version\\hkVersionBundle.cpp",0x2b8);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return uVar9;
    }
    FUN_143713520(&local_2c8);
LAB_143731851:
    uVar9 = 0;
  }
  local_2a0 = 0;
  if (-1 < (int)local_29c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_2a8,1,local_29c & 0x3fffffff);
  }
  return uVar9;
}



// FUNCTION 1437318c0 FUN_1437318c0 body=99 status=ok
// SIG undefined FUN_1437318c0(void)

undefined8 FUN_1437318c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_14373c2c0(param_1 + 0x38,param_2,0xffffffffffffffff);
  if (-1 < iVar2) {
    lVar3 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x38))
                      (param_1 + 0x18,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 8));
    return *(undefined8 *)(lVar3 + 0x60);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00014373191f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return uVar4;
}



// FUNCTION 143731930 FUN_143731930 body=141 status=ok
// SIG undefined FUN_143731930(void)

undefined8 FUN_143731930(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [128];
  
  local_8c = 0x80000080;
  local_90 = 1;
  local_98 = local_88;
  local_88[0] = 0;
  uVar1 = FUN_143714fc0(param_2,&local_98,0,0);
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,uVar1);
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return uVar1;
}



// FUNCTION 1437319c0 FUN_1437319c0 body=71 status=ok
// SIG undefined FUN_1437319c0(void)

undefined8 * FUN_1437319c0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = hkSerialize::Detail::CloneToRegistered::vftable;
  if (param_2 != 0) {
    param_1[3] = param_2;
    return param_1;
  }
  uVar1 = FUN_14371d640();
  param_1[3] = uVar1;
  return param_1;
}



// FUNCTION 143731a10 FUN_143731a10 body=24 status=ok
// SIG undefined FUN_143731a10(void)

undefined8 *
FUN_143731a10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  param_1[3] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return param_1;
}



// FUNCTION 143731a30 FUN_143731a30 body=168 status=ok
// SIG undefined FUN_143731a30(void)

undefined8 * FUN_143731a30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 3) == (*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff)) {
    FUN_14370c460(uVar1,param_1 + 2,1);
  }
  local_res8 = 0;
  local_res10 = 0;
  *(undefined1 *)((longlong)*(int *)(param_1 + 3) + param_1[2]) = 1;
  *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
  uVar1 = FUN_143703a50();
  FUN_14372d6e0(param_1,uVar1,&local_res10,&local_res8);
  return param_1;
}



// FUNCTION 143731ae0 `scalar_deleting_destructor' body=66 status=ok
// SIG void * `scalar_deleting_destructor'(_AsyncTaskCollection * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::_AsyncTaskCollection::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2015 Release */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  FUN_14371b030(this + 8);
  *(undefined ***)this = hkReflect::Cloner::Callback::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 143731bd0 FUN_143731bd0 body=82 status=ok
// SIG undefined FUN_143731bd0(void)

uint FUN_143731bd0(longlong param_1,ulonglong param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (7 < param_2) {
    iVar1 = FUN_14370c6f0(param_1 + 4,&DAT_145b8fef0,4);
    if (iVar1 != 0) {
      in_EAX = FUN_14370c6f0(param_1 + 4,&DAT_145b8fef8,4);
      if (in_EAX != 0) goto LAB_143731c1a;
    }
    return 1;
  }
LAB_143731c1a:
  return in_EAX & 0xffffff00;
}



// FUNCTION 143731c30 FUN_143731c30 body=82 status=ok
// SIG undefined FUN_143731c30(void)

uint FUN_143731c30(longlong param_1,ulonglong param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (7 < param_2) {
    iVar1 = FUN_14370c6f0(param_1 + 4,&DAT_145b8fee0,4);
    if (iVar1 != 0) {
      in_EAX = FUN_14370c6f0(param_1 + 4,&DAT_145b8fee8,4);
      if (in_EAX != 0) goto LAB_143731c7a;
    }
    return 1;
  }
LAB_143731c7a:
  return in_EAX & 0xffffff00;
}



// FUNCTION 143731cb0 FUN_143731cb0 body=45 status=ok
// SIG undefined FUN_143731cb0(void)

bool FUN_143731cb0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong local_18;
  longlong local_10;
  
  local_10 = param_1 + param_2;
  local_18 = param_1;
  cVar1 = FUN_143750eb0(&local_18,"<compr>");
  return cVar1 != '\0';
}



// FUNCTION 143731ce0 FUN_143731ce0 body=107 status=ok
// SIG undefined FUN_143731ce0(void)

undefined * FUN_143731ce0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_DAT_1467f12e0;
  do {
    puVar1 = *ppuVar3;
    cVar2 = (**(code **)(puVar1 + 8))(param_1,param_2);
    if (cVar2 != '\0') {
      return puVar1;
    }
    ppuVar3 = ppuVar3 + 1;
  } while ((longlong)ppuVar3 < 0x1467f1330);
  return (undefined *)0x0;
}



// FUNCTION 143731d50 FUN_143731d50 body=172 status=ok
// SIG undefined FUN_143731d50(void)

undefined8 FUN_143731d50(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char *local_38;
  char *local_30;
  longlong local_28;
  longlong local_20;
  undefined1 local_18 [16];
  
  local_20 = param_1 + param_2;
  local_38 = "<hkpackfile ";
  local_30 = (char *)0x0;
  local_28 = param_1;
  iVar1 = FUN_14370c910("<hkpackfile ");
  local_30 = "<hkpackfile " + iVar1;
  plVar2 = (longlong *)FUN_143751080(&local_28,local_18,&local_38);
  if (*plVar2 == plVar2[1]) {
    local_30 = (char *)0x0;
    local_38 = "<hkpackfile>";
    iVar1 = FUN_14370c910("<hkpackfile>");
    local_30 = "<hkpackfile>" + iVar1;
    plVar2 = (longlong *)FUN_143751080(&local_28,local_18,&local_38);
    if (*plVar2 == plVar2[1]) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143731e00 FUN_143731e00 body=205 status=ok
// SIG undefined FUN_143731e00(void)

undefined8 FUN_143731e00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_128 [16];
  undefined1 local_118 [64];
  undefined1 local_d8 [208];
  
  FUN_143733ca0(local_118,param_1,param_2);
  FUN_1437516f0(local_d8,local_118);
  iVar1 = FUN_143751cd0(local_d8);
  do {
    if (iVar1 == 1) {
LAB_143731e55:
      uVar2 = FUN_143751f50(local_d8,local_128);
      iVar1 = FUN_143750fa0(uVar2,"hktagfile");
      if ((iVar1 == 0) &&
         ((piVar3 = (int *)FUN_143751fa0(local_d8,local_res20,"version",local_res18), *piVar3 < 0 ||
          (local_res18[0] < 3)))) {
        uVar2 = 1;
      }
      else {
LAB_143731eab:
        uVar2 = 0;
      }
      FUN_1436fc2e0(local_d8);
      FUN_143733ce0(local_118);
      return uVar2;
    }
    if (iVar1 - 6U < 2) {
      if (iVar1 != 1) goto LAB_143731eab;
      goto LAB_143731e55;
    }
    iVar1 = FUN_143751cd0(local_d8);
  } while( true );
}



// FUNCTION 143731ed0 FUN_143731ed0 body=205 status=ok
// SIG undefined FUN_143731ed0(void)

undefined8 FUN_143731ed0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_128 [16];
  undefined1 local_118 [64];
  undefined1 local_d8 [208];
  
  FUN_143733ca0(local_118,param_1,param_2);
  FUN_1437516f0(local_d8,local_118);
  iVar1 = FUN_143751cd0(local_d8);
  do {
    if (iVar1 == 1) {
LAB_143731f25:
      uVar2 = FUN_143751f50(local_d8,local_128);
      iVar1 = FUN_143750fa0(uVar2,"hktagfile");
      if (((iVar1 == 0) &&
          (piVar3 = (int *)FUN_143751fa0(local_d8,local_res20,"version",local_res18), -1 < *piVar3))
         && (local_res18[0] == 3)) {
        uVar2 = 1;
      }
      else {
LAB_143731f7b:
        uVar2 = 0;
      }
      FUN_1436fc2e0(local_d8);
      FUN_143733ce0(local_118);
      return uVar2;
    }
    if (iVar1 - 6U < 2) {
      if (iVar1 != 1) goto LAB_143731f7b;
      goto LAB_143731f25;
    }
    iVar1 = FUN_143751cd0(local_d8);
  } while( true );
}



// FUNCTION 143731fa0 FUN_143731fa0 body=45 status=ok
// SIG undefined FUN_143731fa0(void)

bool FUN_143731fa0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong local_18;
  longlong local_10;
  
  local_10 = param_1 + param_2;
  local_18 = param_1;
  cVar1 = FUN_143750eb0(&local_18,&DAT_145b8ff00);
  return cVar1 != '\0';
}



// FUNCTION 143731fd0 FUN_143731fd0 body=126 status=ok
// SIG undefined FUN_143731fd0(void)

int FUN_143731fd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_143732050();
  if (*(char *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1) == '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1) = 1;
    uVar2 = FUN_1437321c0(param_2);
    uVar3 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
      FUN_14370c460(uVar3,param_1 + 0x20,8);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 8) = uVar2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return iVar1;
}



// FUNCTION 143732050 FUN_143732050 body=309 status=ok
// SIG undefined FUN_143732050(void)

int FUN_143732050(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong local_res8;
  byte *local_res10;
  int local_res18 [2];
  
  pbVar2 = (byte *)FUN_1437321c0(param_2);
  local_res10 = pbVar2;
  piVar3 = (int *)FUN_14372adb0(param_1,&local_res8,&local_res10,local_res18);
  iVar1 = (int)param_1[3];
  if (-1 < *piVar3) {
    iVar1 = local_res18[0];
  }
  if (iVar1 == (int)param_1[3]) {
    if ((*pbVar2 >> 3 & 1) != 0) {
      lVar4 = FUN_14374a2a0(pbVar2);
      if (lVar4 != 0) {
        puVar5 = (uint *)FUN_143715390(pbVar2,&local_res8);
        if ((*puVar5 >> 5 & 1) == 0) {
          local_res10 = (byte *)FUN_14371d670(pbVar2);
          if ((local_res10 != (byte *)0x0) && (local_res10 != pbVar2)) {
            local_res8 = (longlong)(int)param_1[3];
            uVar6 = FUN_143703a50();
            iVar1 = FUN_14372ab60(param_1,uVar6,&local_res10,&local_res8);
            iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10);
          }
        }
      }
    }
    local_res8 = (longlong)iVar1;
    local_res10 = pbVar2;
    uVar6 = FUN_143703a50();
    FUN_14372d6e0(param_1,uVar6,&local_res10,&local_res8);
    if (iVar1 == (int)param_1[3]) {
      uVar6 = FUN_143703a50();
      if (*(uint *)(param_1 + 3) == (*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff)) {
        FUN_14370c460(uVar6,param_1 + 2,1);
      }
      *(undefined1 *)((longlong)(int)param_1[3] + param_1[2]) = 0;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
  }
  return iVar1;
}



// FUNCTION 143732190 FUN_143732190 body=36 status=ok
// SIG undefined FUN_143732190(void)

undefined8 FUN_143732190(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return 0;
  }
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  return *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8);
}



// FUNCTION 1437321c0 FUN_1437321c0 body=92 status=ok
// SIG undefined FUN_1437321c0(void)

undefined * FUN_1437321c0(undefined *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined1 local_res8 [32];
  
  if (param_1 != (undefined *)0x0) {
    puVar2 = (undefined8 *)FUN_143714490(param_1,1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    puVar4 = (undefined *)0x0;
    if ((bVar1 & 0xf) == 1) {
      puVar4 = param_1;
    }
    if ((puVar4 != (undefined *)0x0) &&
       (pbVar3 = (byte *)FUN_143715390(param_1,local_res8), (~*pbVar3 & 1) == 0)) {
      return &DAT_1467df8b8;
    }
  }
  return param_1;
}



// FUNCTION 143732220 FUN_143732220 body=13 status=ok
// SIG undefined FUN_143732220(void)

undefined8 FUN_143732220(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = 0;
  return 0x80040200;
}



// FUNCTION 143732230 FUN_143732230 body=72 status=ok
// SIG undefined FUN_143732230(void)

longlong FUN_143732230(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong local_res8;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
  if (lVar2 == 0) {
    iVar1 = FUN_143732220(param_2,*(undefined8 *)(param_1 + 0x18),&local_res8);
    lVar2 = 0;
    if (-1 < iVar1) {
      lVar2 = local_res8;
    }
  }
  return lVar2;
}



// FUNCTION 143732280 FUN_143732280 body=118 status=ok
// SIG undefined FUN_143732280(void)

void FUN_143732280(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(*DAT_146b84398 + 0x18))(DAT_146b84398,2,param_1,param_2,param_3,param_4);
  (**(code **)(*DAT_146b81f68 + 0x18))(DAT_146b81f68,2,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143732300 FUN_143732300 body=118 status=ok
// SIG undefined FUN_143732300(void)

void FUN_143732300(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(*DAT_146b84398 + 0x18))(DAT_146b84398,3,param_1,param_2,param_3,param_4);
  (**(code **)(*DAT_146b81f68 + 0x18))(DAT_146b81f68,3,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143732380 FUN_143732380 body=125 status=ok
// SIG undefined FUN_143732380(void)

void FUN_143732380(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  (**(code **)(*DAT_146b84398 + 0x18))(DAT_146b84398,4,param_1,param_2,param_3,param_4);
  (**(code **)(*DAT_146b81f68 + 0x18))(DAT_146b81f68,4,param_1,param_2,param_3,param_4);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
  return;
}



// FUNCTION 143732400 FUN_143732400 body=274 status=ok
// SIG undefined FUN_143732400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143732400(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 *local_11d8 [2];
  undefined1 *local_11c8;
  undefined4 local_11c0;
  uint local_11bc;
  undefined1 local_11b8 [128];
  undefined1 *local_1138;
  undefined1 *local_1130;
  undefined1 local_1128 [256];
  undefined1 local_1028 [4088];
  undefined8 uStack_30;
  
  uStack_30 = 0x143732419;
  local_1138 = local_1128;
  local_1130 = local_1028;
  local_11d8[0] = &stack0x00000030;
  uVar1 = FUN_1437810e0(&local_1138,param_5,local_11d8);
  FUN_1437325e0(&local_1138,uVar1);
  local_11c8 = local_11b8;
  local_1028[0] = 0;
  local_11bc = 0x80000080;
  local_11c0 = 1;
  local_11b8[0] = 0;
  plVar2 = (longlong *)FArchive::operator<<(&local_11c8);
  *plVar2 = (longlong)local_1028;
  *(undefined4 *)(plVar2 + 1) = 1;
  *(undefined4 *)((longlong)plVar2 + 0xc) = 0x80001000;
  ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation(&local_11c8,param_4,&local_1138);
  FUN_143732380(param_1,local_11c8,param_2,param_3);
  local_11c0 = 0;
  if (-1 < (int)local_11bc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_11c8,1,local_11bc & 0x3fffffff);
  }
  return;
}



// FUNCTION 143732520 FUN_143732520 body=118 status=ok
// SIG undefined FUN_143732520(void)

void FUN_143732520(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(*DAT_146b84398 + 0x18))(DAT_146b84398,1,param_1,param_2,param_3,param_4);
  (**(code **)(*DAT_146b81f68 + 0x18))(DAT_146b81f68,1,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1437325a0 setEnabled body=64 status=ok
// SIG undefined setEnabled(void)

void hkErrorFwd::setEnabled(undefined4 param_1,undefined1 param_2)

{
  (**(code **)(*DAT_146b84398 + 0x20))(DAT_146b84398,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001437325dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b81f68 + 0x20))(DAT_146b81f68,param_1,param_2);
  return;
}



// FUNCTION 1437325e0 FUN_1437325e0 body=246 status=ok
// SIG undefined FUN_1437325e0(void)

void FUN_1437325e0(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 local_res8;
  ulonglong local_res10 [3];
  
  local_res10[0] = param_2;
  if (0x10 < param_2) {
    local_res8 = 0x10;
    cVar2 = FUN_143755360(0,
                          "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Types/hkVarArgsV.h"
                          ,0x4e,"hkVarArgs::FixedArray<16>::setSize","size <= N",
                          "Invalid FixedArray size {} greater than array capacity {}.",
                          &DAT_145b90048,local_res10,&local_res8,0);
    if (cVar2 != '\0') {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((*param_1 == 0) && (local_res10[0] != 0)) {
    cVar2 = FUN_143755360(0,
                          "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Types/hkVarArgsV.h"
                          ,0x4f,"hkVarArgs::FixedArray<16>::setSize","m_begin || (size == 0)",
                          "Cannot setSize({}) with m_begin={}.",&DAT_145b75b78,local_res10,param_1,0
                         );
    if (cVar2 != '\0') {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1[1] = local_res10[0] * 0x10 + *param_1;
  return;
}



// FUNCTION 1437326e0 FUN_1437326e0 body=57 status=ok
// SIG undefined FUN_1437326e0(void)

undefined8 FUN_1437326e0(byte *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    param_2 = param_2 - (longlong)param_1;
    do {
      if (*param_1 < param_1[param_2]) {
        return 0xffffffff;
      }
      if (param_1[param_2] < *param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < param_3);
  }
  return 0;
}



// FUNCTION 143732720 Memcpy body=5 status=ok
// SIG undefined Memcpy(void)

void FGenericPlatformString::Memcpy(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memcpy(param_1,param_2,param_3);
  return;
}



// FUNCTION 143732730 FUN_143732730 body=343 status=ok
// SIG undefined FUN_143732730(void)

void FUN_143732730(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = param_3 & 0xfffffffffffffff8;
  if ((uVar6 != 0) && ((((byte)param_1 | (byte)param_2 | (byte)param_3) & 7) == 0)) {
    if (7 < (longlong)param_3) {
      puVar1 = (undefined8 *)
               (param_1 +
               (((longlong)(param_3 + ((uint)((longlong)param_3 >> 0x3f) & 7)) >> 3) + -1) * 8);
      uVar5 = param_3 >> 3;
      do {
        *puVar1 = *(undefined8 *)((param_2 - param_1) + (longlong)puVar1);
        puVar1 = puVar1 + -1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_1 = param_1 + uVar6;
    param_2 = param_2 + uVar6;
    param_3 = (ulonglong)((uint)param_3 & 7);
  }
  uVar6 = param_3 & 0xfffffffffffffffc;
  if ((uVar6 != 0) && ((((byte)param_1 | (byte)param_2 | (byte)param_3) & 3) == 0)) {
    if (3 < (longlong)param_3) {
      puVar2 = (undefined4 *)
               (param_1 +
               (((longlong)(param_3 + ((uint)((longlong)param_3 >> 0x3f) & 3)) >> 2) + -1) * 4);
      uVar5 = param_3 >> 2;
      do {
        *puVar2 = *(undefined4 *)((longlong)puVar2 + (param_2 - param_1));
        puVar2 = puVar2 + -1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_1 = param_1 + uVar6;
    param_2 = param_2 + uVar6;
    param_3 = (ulonglong)((uint)param_3 & 3);
  }
  uVar6 = param_3 & 0xfffffffffffffffe;
  if ((uVar6 != 0) && (((param_1 | param_2 | param_3) & 1) == 0)) {
    if (1 < (longlong)param_3) {
      puVar3 = (undefined2 *)(param_1 + ((longlong)param_3 / 2 + -1) * 2);
      uVar5 = param_3 >> 1;
      do {
        *puVar3 = *(undefined2 *)((longlong)puVar3 + (param_2 - param_1));
        puVar3 = puVar3 + -1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_1 = param_1 + uVar6;
    param_2 = param_2 + uVar6;
    param_3 = (ulonglong)((uint)param_3 & 1);
  }
  if (0 < (longlong)param_3) {
    puVar4 = (undefined1 *)((param_1 - 1) + param_3);
    do {
      *puVar4 = puVar4[param_2 - param_1];
      puVar4 = puVar4 + -1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143732890 FUN_143732890 body=19 status=ok
// SIG undefined FUN_143732890(void)

void FUN_143732890(void *param_1,void *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 < param_1) {
    uVar6 = param_3 & 0xfffffffffffffff8;
    if ((uVar6 != 0) && ((((byte)param_1 | (byte)param_2 | (byte)param_3) & 7) == 0)) {
      if (7 < (longlong)param_3) {
        puVar1 = (undefined8 *)
                 ((longlong)param_1 +
                 (((longlong)(param_3 + ((uint)((longlong)param_3 >> 0x3f) & 7)) >> 3) + -1) * 8);
        uVar5 = param_3 >> 3;
        do {
          *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
          puVar1 = puVar1 + -1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      param_1 = (void *)((longlong)param_1 + uVar6);
      param_2 = (void *)((longlong)param_2 + uVar6);
      param_3 = (ulonglong)((uint)param_3 & 7);
    }
    uVar6 = param_3 & 0xfffffffffffffffc;
    if ((uVar6 != 0) && ((((byte)param_1 | (byte)param_2 | (byte)param_3) & 3) == 0)) {
      if (3 < (longlong)param_3) {
        puVar2 = (undefined4 *)
                 ((longlong)param_1 +
                 (((longlong)(param_3 + ((uint)((longlong)param_3 >> 0x3f) & 3)) >> 2) + -1) * 4);
        uVar5 = param_3 >> 2;
        do {
          *puVar2 = *(undefined4 *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1));
          puVar2 = puVar2 + -1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      param_1 = (void *)((longlong)param_1 + uVar6);
      param_2 = (void *)((longlong)param_2 + uVar6);
      param_3 = (ulonglong)((uint)param_3 & 3);
    }
    uVar6 = param_3 & 0xfffffffffffffffe;
    if ((uVar6 != 0) && ((((ulonglong)param_1 | (ulonglong)param_2 | param_3) & 1) == 0)) {
      if (1 < (longlong)param_3) {
        puVar3 = (undefined2 *)((longlong)param_1 + ((longlong)param_3 / 2 + -1) * 2);
        uVar5 = param_3 >> 1;
        do {
          *puVar3 = *(undefined2 *)((longlong)puVar3 + ((longlong)param_2 - (longlong)param_1));
          puVar3 = puVar3 + -1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      param_1 = (void *)((longlong)param_1 + uVar6);
      param_2 = (void *)((longlong)param_2 + uVar6);
      param_3 = (ulonglong)((uint)param_3 & 1);
    }
    if (0 < (longlong)param_3) {
      puVar4 = (undefined1 *)((longlong)param_1 + (param_3 - 1));
      do {
        *puVar4 = puVar4[(longlong)param_2 - (longlong)param_1];
        puVar4 = puVar4 + -1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    return;
  }
  if (param_1 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00014373289b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    memmove(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1437328b0 Impl body=21 status=ok
// SIG undefined Impl(void)

undefined8 * hkReflect::Detail::Impl::Impl(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = vftable;
  return param_1;
}



// FUNCTION 1437328d0 FUN_1437328d0 body=171 status=ok
// SIG undefined FUN_1437328d0(void)

undefined8 *
FUN_1437328d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  uVar1 = param_3[2];
  param_1[5] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  param_1[6] = param_4;
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_143733a60(param_3[2] & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 143732980 FUN_143732980 body=11 status=ok
// SIG undefined FUN_143732980(void)

void FUN_143732980(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::Impl::vftable;
  return;
}



// FUNCTION 143732990 FUN_143732990 body=79 status=ok
// SIG undefined FUN_143732990(void)

undefined8 * FUN_143732990(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_143733a60(param_1[2] & 0xfffffffffffffffe);
  }
  param_1[2] = param_2[2];
  param_2[2] = 0;
  return param_1;
}



// FUNCTION 1437329e0 FUN_1437329e0 body=11 status=ok
// SIG undefined FUN_1437329e0(void)

int FUN_1437329e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1437329f0 FUN_1437329f0 body=648 status=ok
// SIG undefined FUN_1437329f0(void)

/* WARNING: Removing unreachable block (ram,0x000143732bbd) */
/* WARNING: Removing unreachable block (ram,0x000143732bd6) */

undefined8 *
FUN_1437329f0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  ulonglong local_28;
  
  if (param_3[6] == -1) {
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,local_50,*param_3,param_3[1]);
    bVar2 = false;
    bVar1 = true;
  }
  else {
    local_78 = param_3[2];
    local_88 = *param_3;
    local_80 = param_3[1];
    if ((local_78 & 1) != 0) {
      FUN_1437329e0(local_78 & 0xfffffffffffffffe);
    }
    local_60 = param_3[5];
    local_70 = param_3[3];
    local_68 = param_3[4];
    if ((local_60 & 1) != 0) {
      FUN_1437329e0(local_60 & 0xfffffffffffffffe);
    }
    puVar4 = &local_88;
    local_58 = param_3[6];
    bVar2 = true;
    bVar1 = false;
  }
  local_d8 = *puVar4;
  local_d0 = puVar4[1];
  local_c8 = puVar4[2];
  puVar4[2] = 0;
  local_c0 = puVar4[3];
  local_b8 = puVar4[4];
  local_b0 = puVar4[5];
  puVar4[5] = 0;
  local_a8 = puVar4[6];
  if (bVar1) {
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    if ((local_40 & 1) != 0) {
      FUN_143733a60(local_40 & 0xfffffffffffffffe);
    }
  }
  if (bVar2) {
    if ((local_60 & 1) != 0) {
      FUN_143733a60(local_60 & 0xfffffffffffffffe);
    }
    if ((local_78 & 1) != 0) {
      FUN_143733a60(local_78 & 0xfffffffffffffffe);
    }
  }
  do {
    if (local_a8 == -1) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0xffffffffffffffff;
      if ((local_b0 & 1) != 0) {
        FUN_143733a60(local_b0 & 0xfffffffffffffffe);
      }
      if ((local_c8 & 1) != 0) {
        FUN_143733a60(local_c8 & 0xfffffffffffffffe);
      }
LAB_143732c09:
      if ((*(byte *)(param_4 + 0x10) & 1) != 0) {
        FUN_143733a60(*(ulonglong *)(param_4 + 0x10) & 0xfffffffffffffffe);
      }
      return param_2;
    }
    local_a0 = local_c0;
    local_98 = local_b8;
    local_90 = local_b0;
    if ((local_b0 & 1) != 0) {
      FUN_1437329e0(local_b0 & 0xfffffffffffffffe);
    }
    iVar3 = FUN_143742340(&local_a0,param_4);
    if ((local_90 & 1) != 0) {
      FUN_143733a60(local_90 & 0xfffffffffffffffe);
    }
    if (iVar3 == 0) {
      *param_2 = local_d8;
      param_2[1] = local_d0;
      param_2[2] = local_c8;
      param_2[3] = local_c0;
      param_2[4] = local_b8;
      param_2[5] = local_b0;
      param_2[6] = local_a8;
      local_c8 = 0;
      local_b0 = 0;
      goto LAB_143732c09;
    }
    (**(code **)(*(longlong *)(local_c8 & 0xfffffffffffffffe) + 0x40))
              ((longlong *)(local_c8 & 0xfffffffffffffffe),&local_d8);
  } while( true );
}



// FUNCTION 143732c80 FUN_143732c80 body=862 status=ok
// SIG undefined FUN_143732c80(void)

/* WARNING: Removing unreachable block (ram,0x000143732f01) */
/* WARNING: Removing unreachable block (ram,0x000143732e0e) */
/* WARNING: Removing unreachable block (ram,0x000143732f1a) */

undefined8 *
FUN_143732c80(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 local_res20 [8];
  longlong local_98;
  longlong lStack_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined1 local_48 [32];
  
  uVar10 = 0;
  if (param_4[1] != 0) {
    puVar5 = (undefined8 *)FUN_143714490(param_4[1],1);
    bVar2 = 0;
    bVar3 = bVar2;
    if (puVar5 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar5;
    }
    uVar10 = 0;
    if ((bVar3 & 0xf) == 3) {
      lVar1 = *param_4;
      lVar7 = param_4[1];
      if ((*(byte *)(param_4 + 2) & 1) != 0) {
        FUN_1437329e0(param_4[2] & 0xfffffffffffffffe);
      }
      uVar10 = param_4[2];
      if (lVar1 != 0) {
        local_88 = 0;
        local_98 = 0;
        lStack_90 = 0;
        if (param_3[1] != 0) {
          puVar5 = (undefined8 *)FUN_143714490(param_3[1],1);
          if (puVar5 != (undefined8 *)0x0) {
            bVar2 = (byte)*puVar5;
          }
          if ((bVar2 & 0xf) == 7) {
            local_98 = *param_3;
            lStack_90 = param_3[1];
            if ((*(byte *)(param_3 + 2) & 1) != 0) {
              FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
            }
            if ((local_88 & 1) != 0) {
              FUN_143733a60(local_88 & 0xfffffffffffffffe);
            }
            local_88 = param_3[2];
          }
          if (local_98 != 0) {
            local_80 = 0;
            local_68 = (longlong *)(uVar10 & 0xfffffffffffffffe);
            (**(code **)(*local_68 + 0x38))(local_68,local_res20,lVar1,lVar7,&local_80);
            lVar1 = lStack_90;
            iVar11 = (int)param_3[6] + 1;
            if (param_3[6] == -1) {
              lVar7 = FUN_143733a80(lStack_90);
              iVar11 = 0;
            }
            else {
              lVar6 = FUN_143714de0(param_3[4]);
              puVar5 = (undefined8 *)FUN_143714490(lVar6,1);
              if (puVar5 == (undefined8 *)0x0) {
                lVar7 = 0;
              }
              else {
                lVar7 = 0;
                if (((byte)*puVar5 & 0xf) == 7) {
                  lVar7 = lVar6;
                }
              }
            }
            while (lVar7 != 0) {
              FUN_143714ed0(lVar7,&local_78);
              iVar9 = iVar11;
              if (iVar11 < (int)(local_70 - local_78 >> 3)) {
                do {
                  uVar8 = FUN_1437151c0(local_78 + (longlong)iVar9 * 8);
                  cVar4 = hkReflect::StringValue::operator==(&local_80,uVar8);
                  if (cVar4 != '\0') {
                    local_60 = local_98;
                    local_58 = lStack_90;
                    uVar8 = *(undefined8 *)(local_78 + (longlong)iVar9 * 8);
                    local_50 = local_88;
                    if ((local_88 & 1) != 0) {
                      FUN_1437329e0(local_88 & 0xfffffffffffffffe);
                    }
                    uVar8 = FUN_143741f50(&local_98,local_48,uVar8);
                    FUN_1437328d0(param_2,&local_60,uVar8,(longlong)iVar9);
                    if ((local_88 & 1) != 0) {
                      FUN_143733a60(local_88 & 0xfffffffffffffffe);
                    }
                    if ((uVar10 & 1) != 0) {
                      FUN_143733a60(local_68);
                    }
                    goto LAB_143732f29;
                  }
                  iVar9 = iVar9 + 1;
                } while (iVar9 < (int)(local_70 - local_78 >> 3));
              }
              lVar6 = FUN_143733930(lVar7,lVar1);
              if (lVar6 == 0) break;
              puVar5 = (undefined8 *)FUN_143714490(lVar6,1);
              if (puVar5 == (undefined8 *)0x0) {
                bVar3 = 0;
              }
              else {
                bVar3 = (byte)*puVar5;
              }
              lVar7 = 0;
              if ((bVar3 & 0xf) == 7) {
                lVar7 = lVar6;
              }
            }
          }
        }
        if ((local_88 & 1) != 0) {
          FUN_143733a60(local_88 & 0xfffffffffffffffe);
        }
      }
    }
  }
  if ((uVar10 & 1) != 0) {
    FUN_143733a60(uVar10 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0xffffffffffffffff;
LAB_143732f29:
  if ((*(byte *)(param_4 + 2) & 1) != 0) {
    FUN_143733a60(param_4[2] & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143732fe0 FUN_143732fe0 body=96 status=ok
// SIG undefined FUN_143732fe0(void)

undefined8 *
FUN_143732fe0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_res8 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x68))(0,local_res8,param_3,param_4,&local_28);
  *param_2 = uStack_20;
  *(undefined4 *)(param_2 + 1) = (undefined4)local_18;
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143733040 FUN_143733040 body=8 status=ok
// SIG undefined FUN_143733040(void)

void FUN_143733040(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_1437151a0(*param_3);
  return;
}



// FUNCTION 143733050 FUN_143733050 body=407 status=ok
// SIG undefined FUN_143733050(void)

byte FUN_143733050(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 local_res10 [8];
  undefined4 uVar11;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  uVar1 = param_3[1];
  puVar5 = (undefined8 *)FUN_143714490(uVar1,1);
  bVar3 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    bVar3 = (byte)*puVar5;
  }
  local_38 = 0;
  local_30 = 0;
  uVar9 = 0;
  if ((bVar3 & 0xf) == 8) {
    uVar9 = uVar1;
  }
  local_48 = 0;
  uStack_40 = 0;
  plVar6 = (longlong *)FUN_1437151a0(uVar9);
  puVar5 = &local_48;
  (**(code **)(*plVar6 + 0x68))(plVar6,local_res10,*param_3,uVar9,puVar5);
  uVar11 = (undefined4)((ulonglong)puVar5 >> 0x20);
  uVar10 = (undefined4)local_38;
  if ((ulonglong)param_3[6] < (local_38 & 0xffffffff)) {
    uVar10 = *(undefined4 *)(param_3 + 6);
  }
  plVar6 = (longlong *)FUN_1437151a0(uVar9);
  lVar2 = param_2[1];
  local_68 = *param_2;
  local_58 = 1;
  local_50 = 0;
  local_60 = lVar2;
  uVar7 = local_50;
  if (lVar2 != 0) {
    uVar4 = FUN_1437152f0(lVar2);
    local_58 = CONCAT44(uVar4,(undefined4)local_58);
    uVar7 = FUN_1437151a0(lVar2);
    if ((uVar7 & 1) != 0) {
      FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    }
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
  }
  local_50 = uVar7;
  puVar8 = (undefined4 *)
           (**(code **)(*plVar6 + 0x78))
                     (plVar6,local_res10,*param_3,uVar9,CONCAT44(uVar11,uVar10),0,&local_68);
  uVar10 = *puVar8;
  if ((local_50 & 1) != 0) {
    FUN_143733a60(local_50 & 0xfffffffffffffffe);
  }
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  }
  return (byte)((uint)uVar10 >> 0x1f) ^ 1;
}



// FUNCTION 1437331f0 FUN_1437331f0 body=375 status=ok
// SIG undefined FUN_1437331f0(void)

/* WARNING: Removing unreachable block (ram,0x00014373330f) */
/* WARNING: Removing unreachable block (ram,0x000143733328) */

undefined8 *
FUN_1437331f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_res20 [8];
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  puVar2 = (undefined8 *)FUN_143714490(param_4,1);
  uVar4 = 0;
  bVar1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar2;
  }
  local_28 = 0;
  local_20 = 0;
  uVar5 = uVar4;
  if ((bVar1 & 0xf) == 8) {
    uVar5 = param_4;
  }
  local_38 = 0;
  uStack_30 = 0;
  plVar3 = (longlong *)FUN_1437151a0(uVar5);
  (**(code **)(*plVar3 + 0x68))(plVar3,local_res20,param_3,uVar5,&local_38);
  if ((int)local_28 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0xffffffffffffffff;
  }
  else {
    local_68 = local_38;
    local_58 = ((uint)(byte)local_20 ^ (uint)local_20) & 1 ^ local_20;
    local_60 = uStack_30;
    if ((local_58 & 1) != 0) {
      FUN_1437329e0(local_58 & 0xfffffffffffffffe);
    }
    local_50 = param_3;
    local_48 = param_4;
    if (param_4 != 0) {
      uVar4 = FUN_1437151a0(param_4);
    }
    local_40 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    FUN_1437328d0(param_2,&local_50,&local_68,0);
  }
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143733370 FUN_143733370 body=256 status=ok
// SIG undefined FUN_143733370(void)

undefined8 FUN_143733370(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  puVar2 = (undefined8 *)FUN_143714490(param_4,1);
  bVar1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar2;
  }
  lVar4 = 0;
  if ((bVar1 & 0xf) == 6) {
    lVar4 = param_4;
  }
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1437151a0(lVar4);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  plVar5 = (longlong *)(uVar3 & 0xfffffffffffffffe);
  (**(code **)(*plVar5 + 0x50))(plVar5,local_res10,param_3,lVar4,&local_48);
  local_30 = param_3;
  local_28 = lVar4;
  local_20 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(plVar5);
  }
  FUN_1437328d0(param_2,&local_30,&local_48,0);
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(plVar5);
  }
  return param_2;
}



// FUNCTION 143733470 FUN_143733470 body=401 status=ok
// SIG undefined FUN_143733470(void)

/* WARNING: Removing unreachable block (ram,0x0001437335c2) */
/* WARNING: Removing unreachable block (ram,0x0001437335da) */

undefined8 *
FUN_143733470(undefined8 param_1,undefined8 *param_2,ulonglong *param_3,longlong param_4)

{
  ulonglong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong local_res20;
  ulonglong *local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong *local_50;
  longlong local_48;
  ulonglong local_40;
  undefined1 local_38 [32];
  
  puVar3 = (undefined8 *)FUN_143714490(param_4,1);
  if (puVar3 == (undefined8 *)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (byte)*puVar3;
  }
  lVar4 = 0;
  if ((bVar2 & 0xf) == 7) {
    lVar4 = param_4;
  }
  if (lVar4 != 0) {
    local_50 = param_3;
    local_48 = lVar4;
    local_40 = FUN_1437151a0(lVar4);
    if ((local_40 & 1) != 0) {
      FUN_1437329e0(local_40 & 0xfffffffffffffffe);
    }
    FUN_1437140a0(&local_res20,0);
    do {
      FUN_143714ed0(lVar4,&local_68);
      if ((int)(local_60 - (longlong)local_68 >> 3) != 0) {
        local_res20 = *local_68;
      }
      lVar4 = hkReflect::RecordType::getParentRecord(lVar4);
      uVar1 = local_res20;
    } while (lVar4 != 0);
    if (1 < local_res20) {
      local_68 = local_50;
      local_60 = local_48;
      local_58 = local_40;
      if ((local_40 & 1) != 0) {
        FUN_1437329e0(local_40 & 0xfffffffffffffffe);
      }
      uVar5 = FUN_143741f50(&local_50,local_38,uVar1);
      FUN_1437328d0(param_2,&local_68,uVar5,0);
      if ((local_40 & 1) == 0) {
        return param_2;
      }
      FUN_143733a60(local_40 & 0xfffffffffffffffe);
      return param_2;
    }
    if ((local_40 & 1) != 0) {
      FUN_143733a60(local_40 & 0xfffffffffffffffe);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0xffffffffffffffff;
  return param_2;
}



// FUNCTION 143733610 FUN_143733610 body=288 status=ok
// SIG undefined FUN_143733610(void)

void FUN_143733610(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_res10 [8];
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  uVar1 = param_2[1];
  puVar3 = (undefined8 *)FUN_143714490(uVar1,1);
  if (puVar3 == (undefined8 *)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (byte)*puVar3;
  }
  local_18 = 0;
  local_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uVar5 = 0;
  if ((bVar2 & 0xf) == 8) {
    uVar5 = uVar1;
  }
  plVar4 = (longlong *)FUN_1437151a0(uVar5);
  (**(code **)(*plVar4 + 0x68))(plVar4,local_res10,*param_2,uVar5,&local_28);
  uVar1 = uStack_20;
  if (*(int *)(param_2 + 6) + 1 < (int)local_18) {
    param_2[6] = param_2[6] + 1;
    uVar7 = ((uint)(byte)local_10 ^ (uint)local_10) & 1 ^ local_10;
    lVar6 = *(int *)(param_2 + 6) * local_18._4_4_ + local_28;
    if ((uVar7 & 1) != 0) {
      FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    }
    param_2[3] = lVar6;
    param_2[4] = uVar1;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_143733a60(param_2[5] & 0xfffffffffffffffe);
    }
    param_2[5] = uVar7;
  }
  else {
    param_2[6] = 0xffffffffffffffff;
  }
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143733730 FUN_143733730 body=9 status=ok
// SIG undefined FUN_143733730(void)

void FUN_143733730(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x30) = 0xffffffffffffffff;
  return;
}



// FUNCTION 143733740 FUN_143733740 body=482 status=ok
// SIG undefined FUN_143733740(void)

void FUN_143733740(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res10 [8];
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  if (param_2[6] != -1) {
    local_28 = 0;
    local_38 = 0;
    lStack_30 = 0;
    if (param_2[1] != 0) {
      puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
      bVar5 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        bVar5 = (byte)*puVar2;
      }
      if ((bVar5 & 0xf) == 7) {
        local_38 = *param_2;
        lStack_30 = param_2[1];
        if ((*(byte *)(param_2 + 2) & 1) != 0) {
          FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
        }
        if ((local_28 & 1) != 0) {
          FUN_143733a60(local_28 & 0xfffffffffffffffe);
        }
        local_28 = param_2[2];
      }
      if (local_38 != 0) {
        lVar3 = FUN_143714de0(param_2[4]);
        puVar2 = (undefined8 *)FUN_143714490(lVar3,1);
        if (puVar2 == (undefined8 *)0x0) {
          bVar5 = 0;
        }
        else {
          bVar5 = (byte)*puVar2;
        }
        lVar6 = 0;
        if ((bVar5 & 0xf) == 7) {
          lVar6 = lVar3;
        }
        iVar7 = (int)param_2[6] + 1;
        iVar1 = FUN_143715240(lVar6);
        if (iVar7 < iVar1) {
          param_2[6] = (longlong)iVar7;
LAB_1437338c4:
          puVar2 = (undefined8 *)FUN_143714e90(lVar6,local_res10,iVar7);
          uVar4 = FUN_143741f50(&local_38,local_20,*puVar2);
          FUN_143732990(param_2 + 3,uVar4);
          if ((local_10 & 1) != 0) {
            FUN_143733a60(local_10 & 0xfffffffffffffffe);
          }
          if ((local_28 & 1) == 0) {
            return;
          }
          FUN_143733a60(local_28 & 0xfffffffffffffffe);
          return;
        }
        param_2[6] = 0;
        lVar3 = FUN_143733930(lVar6,lStack_30);
        while (lVar3 != 0) {
          puVar2 = (undefined8 *)FUN_143714490(lVar3,1);
          if (puVar2 == (undefined8 *)0x0) {
            bVar5 = 0;
          }
          else {
            bVar5 = (byte)*puVar2;
          }
          lVar6 = 0;
          if ((bVar5 & 0xf) == 7) {
            lVar6 = lVar3;
          }
          iVar1 = FUN_143715240(lVar6);
          if (iVar1 != 0) {
            iVar7 = 0;
            goto LAB_1437338c4;
          }
          lVar3 = FUN_143733930(lVar6,lStack_30);
        }
      }
    }
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
  }
  param_2[6] = -1;
  return;
}



// FUNCTION 143733930 FUN_143733930 body=69 status=ok
// SIG undefined FUN_143733930(void)

byte * FUN_143733930(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)0x0;
  while( true ) {
    pbVar3 = param_2;
    if (pbVar3 == (byte *)0x0) {
      return pbVar4;
    }
    bVar1 = *pbVar3;
    pbVar2 = pbVar3;
    while ((~bVar1 & 1) != 0) {
      if (param_1 == pbVar2) {
        return pbVar4;
      }
      pbVar2 = *(byte **)(pbVar2 + 8);
      bVar1 = *pbVar2;
    }
    if (pbVar2 == param_1) break;
    param_2 = *(byte **)(pbVar2 + 8);
    pbVar4 = pbVar3;
  }
  return pbVar4;
}



// FUNCTION 143733980 FUN_143733980 body=214 status=ok
// SIG undefined FUN_143733980(void)

ulonglong FUN_143733980(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  if (param_2[6] != -1) {
    uVar2 = param_2[1];
    puVar3 = (undefined8 *)FUN_143714490(uVar2,1);
    if (puVar3 == (undefined8 *)0x0) {
      bVar6 = 0;
    }
    else {
      bVar6 = (byte)*puVar3;
    }
    uVar7 = 0;
    if ((bVar6 & 0xf) == 8) {
      uVar7 = uVar2;
    }
    plVar4 = (longlong *)FUN_1437151a0(uVar7);
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    puVar5 = (undefined4 *)
             (**(code **)(*plVar4 + 0x78))
                       (plVar4,local_res10,*param_2,uVar7,*(undefined4 *)(param_2 + 6),1,&local_28);
    uVar1 = *puVar5;
    if ((local_10 & 1) != 0) {
      FUN_143733a60(local_10 & 0xfffffffffffffffe);
    }
    return (ulonglong)(byte)((byte)((uint)uVar1 >> 0x1f) ^ 1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143733a60 FUN_143733a60 body=30 status=ok
// SIG undefined FUN_143733a60(void)

void FUN_143733a60(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (param_1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143733a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143733a80 FUN_143733a80 body=44 status=ok
// SIG undefined FUN_143733a80(void)

longlong FUN_143733a80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = hkReflect::RecordType::getParentRecord();
  while (lVar1 = lVar2, lVar1 != 0) {
    lVar2 = hkReflect::RecordType::getParentRecord(lVar1);
    param_1 = lVar1;
  }
  return param_1;
}



// FUNCTION 143733ab0 FUN_143733ab0 body=51 status=ok
// SIG undefined FUN_143733ab0(void)

undefined8 FUN_143733ab0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x78))();
  return param_2;
}



// FUNCTION 143733af0 FUN_143733af0 body=417 status=ok
// SIG undefined FUN_143733af0(void)

undefined4 *
FUN_143733af0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             int param_5,int param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  
  puVar4 = (undefined8 *)FUN_143714420(param_4,2);
  puVar1 = param_7;
  uVar7 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    uVar7 = *puVar4;
  }
  if ((param_7[1] == 0) || (cVar2 = FUN_143714870(uVar7), cVar2 != '\0')) {
    local_38 = 0;
    local_48[0] = 0;
    local_48[1] = 0;
    local_30 = 0;
    plVar5 = (longlong *)FUN_1437151a0(param_4);
    (**(code **)(*plVar5 + 0x68))(plVar5,&param_7,param_3,param_4,local_48);
    if (param_5 < 0) {
      param_5 = (int)local_38;
    }
    if (param_6 < 0) {
      param_6 = (int)local_38;
    }
    if (param_6 == *(int *)(puVar1 + 2)) {
      if (param_6 == 0) {
        *param_2 = 0;
        if ((local_30 & 1) != 0) {
          FUN_143733a60(local_30 & 0xfffffffffffffffe);
        }
      }
      else {
        pcVar6 = (code *)FUN_14374a240(uVar7);
        lVar8 = local_48[0];
        if (pcVar6 == (code *)0x0) {
          *param_2 = 0x80040200;
        }
        else {
          iVar3 = FUN_1437152f0(uVar7);
          lVar8 = iVar3 * param_5 + lVar8;
          FUN_143749de0(lVar8,uVar7,param_6);
          (*pcVar6)(lVar8,*puVar1,uVar7,param_6);
          *param_2 = 0;
        }
        if ((local_30 & 1) != 0) {
          FUN_143733a60(local_30 & 0xfffffffffffffffe);
        }
      }
    }
    else {
      *param_2 = 0x80040200;
      if ((local_30 & 1) != 0) {
        FUN_143733a60(local_30 & 0xfffffffffffffffe);
      }
    }
  }
  else {
    *param_2 = 0x80040200;
  }
  return param_2;
}



// FUNCTION 143733ca0 FUN_143733ca0 body=55 status=ok
// SIG undefined FUN_143733ca0(void)

undefined8 * FUN_143733ca0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  FUN_143734480();
  return param_1;
}



// FUNCTION 143733ce0 FUN_143733ce0 body=45 status=ok
// SIG undefined FUN_143733ce0(void)

void FUN_143733ce0(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1437345e0();
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143733d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 143733d10 FUN_143733d10 body=99 status=ok
// SIG undefined FUN_143733d10(void)

undefined8 * FUN_143733d10(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkIo::Detail::ReadBufferImpl::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 143733d80 FUN_143733d80 body=195 status=ok
// SIG undefined FUN_143733d80(void)

undefined8 * FUN_143733d80(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 3) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) {
    FUN_143702e10(uVar1,param_1[2],1,*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  if (param_1[1] != 0) {
    FUN_14370c150();
  }
  *param_1 = hkIo::Detail::ReadBufferImpl::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,0x28);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143733e50 FUN_143733e50 body=55 status=ok
// SIG undefined FUN_143733e50(void)

void FUN_143733e50(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  *(undefined8 *)(param_2 + 0x28) = 0;
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
    *(longlong *)(param_2 + 0x28) = (longlong)iVar1;
  }
  return;
}



// FUNCTION 143733e90 FUN_143733e90 body=204 status=ok
// SIG undefined FUN_143733e90(void)

void FUN_143733e90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res10 [8];
  undefined1 local_48 [64];
  
  lVar3 = param_2[1];
  lVar1 = *param_2;
  if (lVar3 - lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
    if (plVar2 == (longlong *)0x0) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
      if (1 < DAT_146b82638) {
        FUN_14373a730(local_48,&DAT_146b82630,2);
        lVar3 = FUN_14373bbd0(local_48,
                              "Could not detach cleanly from stream because it is not seekable.",
                              &DAT_145b909f0,0);
        *(char **)(lVar3 + 0x20) = "Serialize\\Detail\\hkReadBuffer.cpp";
        *(undefined8 *)(lVar3 + 0x28) = 0x4c;
        FUN_14373a950(local_48);
      }
    }
    else {
      (**(code **)(*plVar2 + 0x48))(plVar2,local_res10,-(int)(lVar3 - lVar1),1);
    }
  }
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[5] = 0;
  return;
}



// FUNCTION 143733f60 FUN_143733f60 body=302 status=ok
// SIG undefined FUN_143733f60(void)

longlong FUN_143733f60(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  
  plVar1 = param_2 + 3;
  plVar3 = param_2;
  if (param_2[3] != 0) {
    plVar3 = plVar1;
  }
  lVar8 = *param_2;
  lVar2 = *plVar3;
  lVar6 = param_2[2];
  lVar9 = param_2[1] - lVar2;
  if (lVar6 != lVar2) {
    param_2[5] = param_2[5] + (lVar2 - lVar6);
    FUN_143732890(lVar6,lVar2,lVar9);
  }
  uVar11 = param_3 + (lVar8 - lVar2);
  if (*(longlong *)(param_1 + 0x20) != -1) {
    uVar4 = 0x10000;
    if (0x10000 < (longlong)uVar11) {
      uVar4 = uVar11;
    }
    uVar11 = *(longlong *)(param_1 + 0x20) - param_2[5];
    if ((longlong)uVar4 < (longlong)uVar11) {
      uVar11 = uVar4;
    }
  }
  iVar10 = (int)uVar11;
  if ((longlong)*(int *)(param_1 + 0x18) < (longlong)uVar11) {
    uVar5 = FUN_143703a50();
    uVar7 = *(uint *)(param_1 + 0x1c) & 0x3fffffff;
    if ((int)uVar7 < iVar10) {
      uVar7 = uVar7 * 2;
      uVar11 = uVar11 & 0xffffffff;
      if (iVar10 < (int)uVar7) {
        uVar11 = (ulonglong)uVar7;
      }
      FUN_14370c310(uVar5,param_1 + 0x10,uVar11,1);
    }
    *(int *)(param_1 + 0x18) = iVar10;
    param_2[2] = *(longlong *)(param_1 + 0x10);
  }
  lVar6 = FUN_143734390(param_1,*(longlong *)(param_1 + 0x10) + lVar9,
                        (longlong)(iVar10 - (int)lVar9));
  if (lVar6 == 0) {
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  }
  lVar8 = *(longlong *)(param_1 + 0x10) + (lVar8 - lVar2);
  *param_2 = lVar8;
  param_2[1] = lVar6 + lVar9 + *(longlong *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    *plVar1 = *(longlong *)(param_1 + 0x10);
  }
  return param_2[1] - lVar8;
}



// FUNCTION 143734090 FUN_143734090 body=313 status=ok
// SIG undefined FUN_143734090(void)

void FUN_143734090(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 0x38))();
  if (plVar3 == (longlong *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff) == 0) {
      uVar4 = FUN_143703a50();
      uVar6 = *(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff;
      if (uVar6 < 0x10000) {
        uVar6 = uVar6 * 2;
        uVar8 = 0x10000;
        if (0x10000 < uVar6) {
          uVar8 = uVar6;
        }
        FUN_14370c310(uVar4,param_1 + 2,uVar8,1);
      }
    }
    uVar6 = *(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff;
    uVar7 = (ulonglong)uVar6;
    lVar5 = (**(code **)(*param_1 + 0x18))(param_1,param_2,uVar6);
    if ((longlong)uVar7 <= lVar5) {
      do {
        uVar7 = uVar7 * 2;
        lVar5 = (**(code **)(*param_1 + 0x18))(param_1,param_2,uVar7);
      } while ((longlong)uVar7 <= lVar5);
    }
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
    return;
  }
  iVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
  (**(code **)(*plVar3 + 0x48))(plVar3,local_res8,0,2);
  iVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
  (**(code **)(*plVar3 + 0x48))(plVar3,local_res8,iVar1,0);
  (**(code **)(*param_1 + 0x18))
            (param_1,param_2,((longlong)iVar2 - (longlong)iVar1) + (param_2[1] - *param_2));
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  return;
}



// FUNCTION 1437341d0 FUN_1437341d0 body=176 status=ok
// SIG undefined FUN_1437341d0(void)

longlong FUN_1437341d0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_2[1] - *param_2;
  lVar2 = param_4;
  if (lVar1 < param_4) {
    lVar2 = lVar1;
  }
  FGenericPlatformString::Memcpy(param_3,*param_2,lVar2);
  *param_2 = *param_2 + lVar2;
  lVar1 = lVar2;
  if (lVar2 != param_4) {
    do {
      param_4 = param_4 - lVar2;
      param_3 = param_3 + lVar2;
      lVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_4);
      if (lVar2 == 0) {
        return lVar1;
      }
      lVar3 = param_2[1] - *param_2;
      lVar2 = param_4;
      if (lVar3 < param_4) {
        lVar2 = lVar3;
      }
      FGenericPlatformString::Memcpy(param_3,*param_2,lVar2);
      *param_2 = *param_2 + lVar2;
      lVar1 = lVar1 + lVar2;
    } while (lVar2 != param_4);
  }
  return lVar1;
}



// FUNCTION 143734280 FUN_143734280 body=61 status=ok
// SIG undefined FUN_143734280(void)

undefined4 * FUN_143734280(longlong param_1,undefined4 *param_2,longlong param_3,longlong param_4)

{
  if (param_4 == -1) {
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
    *param_2 = 0;
    return param_2;
  }
  if ((*(longlong *)(param_3 + 0x28) - *(longlong *)(param_3 + 0x10)) + *(longlong *)(param_3 + 8)
      <= param_4) {
    *(longlong *)(param_1 + 0x20) = param_4;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1437342c0 FUN_1437342c0 body=204 status=ok
// SIG undefined FUN_1437342c0(void)

longlong FUN_1437342c0(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = param_2[1];
  lVar4 = lVar2 - *param_2;
  if (param_3 <= lVar4) {
    *param_2 = *param_2 + param_3;
    return param_3;
  }
  if (param_2[3] == 0) {
    uVar5 = param_3 - lVar4;
    *param_2 = lVar2;
    uVar6 = uVar5;
    if ((param_1[4] != -1) &&
       (uVar3 = ((param_2[2] - param_2[5]) - lVar2) + param_1[4], (longlong)uVar3 < (longlong)uVar5)
       ) {
      uVar6 = uVar3;
    }
    iVar1 = (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1],uVar6 & 0xffffffff)
    ;
    lVar2 = (longlong)iVar1;
    param_2[5] = param_2[5] + lVar2;
    if (lVar2 < (longlong)uVar5) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
    }
    lVar2 = lVar2 + lVar4;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    if (param_3 < lVar2) {
      lVar2 = param_3;
    }
    *param_2 = *param_2 + lVar2;
    if (lVar2 < param_3) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
      return lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 143734390 FUN_143734390 body=108 status=ok
// SIG undefined FUN_143734390(void)

ulonglong FUN_143734390(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = param_3;
  while( true ) {
    if (uVar2 == 0) {
      return param_3;
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                      (*(longlong **)(param_1 + 8),param_2,uVar2 & 0xffffffff);
    if (iVar1 < 1) break;
    param_2 = param_2 + iVar1;
    uVar2 = uVar2 - (longlong)iVar1;
  }
  return param_3 - uVar2;
}



// FUNCTION 143734400 FUN_143734400 body=120 status=ok
// SIG undefined FUN_143734400(void)

void FUN_143734400(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  FUN_1437345e0();
  plVar1 = (longlong *)*param_2;
  *param_2 = 0;
  puVar2 = (undefined8 *)param_1[7];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[7] = (longlong)plVar1;
  if (plVar1 == (longlong *)0x0) {
    lVar3 = param_2[1];
    param_1[2] = lVar3;
    *param_1 = lVar3;
    param_1[1] = param_2[2] + lVar3;
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,param_1);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}



// FUNCTION 143734480 FUN_143734480 body=72 status=ok
// SIG undefined FUN_143734480(void)

void FUN_143734480(longlong *param_1,longlong param_2,longlong param_3)

{
  FUN_1437345e0();
  *param_1 = param_2;
  param_1[1] = param_2 + param_3;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[5] = 0;
  return;
}



// FUNCTION 1437344d0 FUN_1437344d0 body=154 status=ok
// SIG undefined FUN_1437344d0(void)

undefined8 * FUN_1437344d0(longlong param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    return (undefined8 *)0x0;
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = hkIo::Detail::StreamReaderImpl::vftable;
    puVar2[1] = param_1;
    FUN_14370c030(param_1);
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x80000000;
    puVar2[4] = 0xffffffffffffffff;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143734570 thunk_FUN_1437344d0 body=5 status=ok
// SIG undefined thunk_FUN_1437344d0(void)

undefined8 * thunk_FUN_1437344d0(longlong param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    return (undefined8 *)0x0;
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = hkIo::Detail::StreamReaderImpl::vftable;
    puVar2[1] = param_1;
    FUN_14370c030(param_1);
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x80000000;
    puVar2[4] = 0xffffffffffffffff;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143734580 FUN_143734580 body=93 status=ok
// SIG undefined FUN_143734580(void)

undefined8 FUN_143734580(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res10 [24];
  
  plVar2 = (longlong *)FUN_143763a20(DAT_146b83e50,local_res10,param_1,1);
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    uVar3 = thunk_FUN_1437344d0(lVar1);
    FUN_14370c150(lVar1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1437345e0 FUN_1437345e0 body=70 status=ok
// SIG undefined FUN_1437345e0(void)

void FUN_1437345e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 143734630 FUN_143734630 body=24 status=ok
// SIG undefined FUN_143734630(void)

undefined8 FUN_143734630(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014373463f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1);
    return uVar2;
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143734650 implPrefetch body=25 status=ok
// SIG undefined implPrefetch(void)

undefined8 hkIo::ReadBuffer::implPrefetch(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143734662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143734670 implRead body=89 status=ok
// SIG undefined implRead(void)

longlong hkIo::ReadBuffer::implRead(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143734696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_1,param_2,param_3);
    return lVar2;
  }
  lVar2 = param_1[1] - *param_1;
  FGenericPlatformString::Memcpy(param_2,*param_1,lVar2);
  *param_1 = param_1[1];
  return lVar2;
}



// FUNCTION 1437346d0 implSkip body=25 status=ok
// SIG undefined implSkip(void)

undefined8 hkIo::ReadBuffer::implSkip(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437346e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1437346f0 FUN_1437346f0 body=30 status=ok
// SIG undefined FUN_1437346f0(void)

longlong FUN_1437346f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143734702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    return lVar2;
  }
  return param_1[1] - *param_1;
}



// FUNCTION 143734710 FUN_143734710 body=74 status=ok
// SIG undefined FUN_143734710(void)

undefined4 * FUN_143734710(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined1 local_res8 [32];
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*plVar1 + 0x38))(plVar1,local_res8,param_1,param_3);
    *param_2 = *puVar2;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143734760 FUN_143734760 body=12 status=ok
// SIG undefined FUN_143734760(void)

void FUN_143734760(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e6070);
  return;
}



// FUNCTION 143734770 FUN_143734770 body=23 status=ok
// SIG undefined FUN_143734770(void)

undefined8 FUN_143734770(undefined8 param_1)

{
  FUN_143734890();
  return param_1;
}



// FUNCTION 143734790 thunk_FUN_143734820 body=5 status=ok
// SIG undefined thunk_FUN_143734820(void)

void thunk_FUN_143734820(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    lVar2 = param_1[1];
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    FUN_143702c60(*(undefined8 *)((longlong)pvVar3 + 0x58),lVar1,8,(int)lVar2 + 1);
    FUN_143734b10(param_1);
  }
  return;
}



// FUNCTION 1437347a0 FUN_1437347a0 body=51 status=ok
// SIG undefined FUN_1437347a0(void)

longlong FUN_1437347a0(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_143734820();
    FUN_143734890(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1437347e0 FUN_1437347e0 body=60 status=ok
// SIG undefined FUN_1437347e0(void)

void FUN_1437347e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (((*param_1 != 0) && (*(int *)(*param_1 + 4) != -2)) && (iVar1 = 0, 0 < (int)param_1[1] + 1)) {
    lVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(lVar2 + 4 + *param_1) = 0xffffffff;
      lVar2 = lVar2 + 8;
    } while (iVar1 < (int)param_1[1] + 1);
  }
  return;
}



// FUNCTION 143734820 FUN_143734820 body=104 status=ok
// SIG undefined FUN_143734820(void)

void FUN_143734820(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    lVar2 = param_1[1];
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    FUN_143702c60(*(undefined8 *)((longlong)pvVar3 + 0x58),lVar1,8,(int)lVar2 + 1);
    FUN_143734b10(param_1);
  }
  return;
}



// FUNCTION 143734890 FUN_143734890 body=136 status=ok
// SIG undefined FUN_143734890(void)

void FUN_143734890(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  
  if (*(int *)(*param_2 + 4) == -2) {
    FUN_143734b10();
    return;
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  lVar1 = param_2[1];
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  uVar3 = FUN_143702b60(*(undefined8 *)((longlong)pvVar2 + 0x58),8,(int)lVar1 + 1);
  *param_1 = uVar3;
  FGenericPlatformString::Memcpy(uVar3,*param_2,(longlong)((int)param_2[1] + 1) << 3);
  return;
}



// FUNCTION 143734920 FUN_143734920 body=98 status=ok
// SIG undefined FUN_143734920(void)

void FUN_143734920(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  puVar1 = (undefined8 *)FUN_143734760(*param_1,param_1[1]);
  if (*(int *)(puVar1 + 1) != 0) {
    local_20 = *puVar1;
    local_10 = *(int *)(puVar1 + 1) * 8 + 8;
    local_28 = "buffer_hkHashMapDetail::Index";
    local_18 = 0;
    local_c = 0xffffffff;
    FUN_14376f920(param_2,&local_28,1);
  }
  return;
}



// FUNCTION 143734990 FUN_143734990 body=370 status=ok
// SIG undefined FUN_143734990(void)

void FUN_143734990(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  LPVOID pvVar3;
  longlong lVar4;
  uint *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  
  iVar1 = 4;
  if (4 < param_2) {
    iVar1 = param_2;
  }
  uVar8 = iVar1 * 2 - 1;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 >> 1 | uVar8;
  iVar1 = uVar8 + 1;
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  lVar4 = FUN_143702b60(*(undefined8 *)((longlong)pvVar3 + 0x58),8,iVar1);
  lVar9 = (longlong)iVar1;
  if (0 < iVar1) {
    puVar6 = (undefined4 *)(lVar4 + 4);
    do {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  lVar9 = *param_1;
  if ((lVar9 == 0) || (*(int *)(lVar9 + 4) == -2)) {
    *param_1 = lVar4;
    *(uint *)(param_1 + 1) = uVar8;
  }
  else {
    lVar2 = param_1[1];
    *(uint *)(param_1 + 1) = uVar8;
    *param_1 = lVar4;
    iVar1 = (int)lVar2 + 1;
    lVar4 = (longlong)iVar1;
    if (0 < iVar1) {
      puVar10 = (uint *)(lVar9 + 4);
      do {
        uVar8 = *puVar10;
        if (-1 < (int)uVar8) {
          lVar2 = *param_1;
          uVar7 = (ulonglong)(*(uint *)(param_1 + 1) & puVar10[-1]);
          puVar5 = (uint *)(lVar2 + uVar7 * 8);
          if (-1 < *(int *)(lVar2 + 4 + uVar7 * 8)) {
            do {
              uVar7 = ((longlong)puVar5 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 1);
              puVar5 = (uint *)(lVar2 + uVar7 * 8);
            } while (-1 < *(int *)(lVar2 + 4 + uVar7 * 8));
          }
          *puVar5 = puVar10[-1];
          puVar5[1] = uVar8;
        }
        puVar10 = puVar10 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    FUN_143702c60(*(undefined8 *)((longlong)pvVar3 + 0x58),lVar9,8,iVar1);
  }
  return;
}



// FUNCTION 143734b10 FUN_143734b10 body=18 status=ok
// SIG undefined FUN_143734b10(void)

void FUN_143734b10(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &DAT_1467f1330;
  return;
}



// FUNCTION 143734b30 FUN_143734b30 body=27 status=ok
// SIG undefined FUN_143734b30(void)

void FUN_143734b30(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}



// FUNCTION 143734b50 FUN_143734b50 body=456 status=ok
// SIG undefined FUN_143734b50(void)

/* WARNING: Removing unreachable block (ram,0x000143734c86) */

uint * FUN_143734b50(longlong *param_1,uint *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint *puVar8;
  longlong *plVar9;
  uint uVar10;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  lVar1 = *param_3;
  uVar10 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = iVar3 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar7 = uVar10 + uVar7 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar7;
  uVar6 = (ulonglong)(*(uint *)(param_1 + 3) & uVar7);
  puVar8 = (uint *)(param_1[2] + uVar6 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar6 * 8)) {
    do {
      lVar2 = *(longlong *)((longlong)(int)puVar8[1] * 0x20 + *param_1);
      if (((lVar2 == 0) && (lVar1 == 0)) ||
         ((lVar2 == lVar1 &&
          (*(longlong *)((longlong)(int)puVar8[1] * 0x20 + 8 + *param_1) == param_3[1])))) {
        *param_2 = puVar8[1];
        goto LAB_143734cf0;
      }
      lVar2 = param_1[2];
      uVar6 = ((longlong)puVar8 - lVar2 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar8 = (uint *)(lVar2 + uVar6 * 8);
    } while (-1 < *(int *)(lVar2 + 4 + uVar6 * 8));
  }
  uVar10 = *(uint *)(param_1 + 1);
  *puVar8 = uVar7;
  puVar8[1] = uVar10;
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar4,param_1,0x20);
  }
  puVar5 = (undefined8 *)((longlong)(int)param_1[1] * 0x20 + *param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
  }
  plVar9 = (longlong *)((longlong)(int)param_1[1] * 0x20 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *plVar9 = *param_3;
  plVar9[1] = param_3[1];
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(plVar9 + 2) & 1) != 0) {
    FUN_143733a60(plVar9[2] & 0xfffffffffffffffe);
  }
  plVar9[2] = param_3[2];
  *(undefined4 *)(plVar9 + 3) = *param_4;
  *param_2 = uVar10;
LAB_143734cf0:
  param_2[1] = (uint)((longlong)puVar8 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 143734d20 FUN_143734d20 body=30 status=ok
// SIG undefined FUN_143734d20(void)

undefined8 * FUN_143734d20(undefined8 *param_1)

{
  *param_1 = hkSerialize::Bundle::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  return param_1;
}



// FUNCTION 143734d40 FUN_143734d40 body=339 status=ok
// SIG undefined FUN_143734d40(void)

/* WARNING: Removing unreachable block (ram,0x000143734e33) */

undefined8 * FUN_143734d40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  param_1[1] = param_2;
  *param_1 = hkSerialize::BundleBuilder::vftable;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  FUN_143734b10(param_1 + 4);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  FUN_143734b10(param_1 + 0x14);
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0xb) == (*(uint *)((longlong)param_1 + 0x5c) & 0x3fffffff)) {
    FUN_14370c460(uVar1,param_1 + 10,0x20);
  }
  puVar2 = (undefined8 *)((longlong)*(int *)(param_1 + 0xb) * 0x20 + param_1[10]);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + 1;
  *(undefined1 *)((longlong)(*(int *)(param_1 + 0xb) + -1) * 0x20 + 0x18 + param_1[10]) = 0;
  *(undefined1 *)((longlong)(*(int *)(param_1 + 0xb) + -1) * 0x20 + 0x19 + param_1[10]) = 1;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],param_3);
  return param_1;
}



// FUNCTION 143734ea0 FUN_143734ea0 body=162 status=ok
// SIG undefined FUN_143734ea0(void)

void FUN_143734ea0(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar3 = (ulonglong *)(*param_1 + 0x10 + lVar4 * 0x20);
    do {
      if ((*puVar3 & 1) != 0) {
        FUN_143733a60(*puVar3 & 0xfffffffffffffffe);
      }
      puVar3 = puVar3 + -4;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x20,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 143734f50 FUN_143734f50 body=86 status=ok
// SIG undefined FUN_143734f50(void)

void FUN_143734f50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = hkSerialize::Bundle::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 2) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x14)) {
    FUN_143702e10(uVar1,param_1[1],8,*(uint *)((longlong)param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  param_1[1] = 0;
  return;
}



// FUNCTION 143734fb0 FUN_143734fb0 body=727 status=ok
// SIG undefined FUN_143734fb0(void)

void FUN_143734fb0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  
  *param_1 = hkSerialize::BundleBuilder::vftable;
  (**(code **)(*(longlong *)param_1[1] + 0x20))();
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x11)) {
    do {
      FUN_1437428e0(param_1[0x10] + (longlong)iVar5 * 0x18,3,1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x11));
  }
  lVar4 = (longlong)(*(int *)(param_1 + 0x11) + -1);
  if (-1 < *(int *)(param_1 + 0x11) + -1) {
    puVar7 = (ulonglong *)(param_1[0x10] + lVar4 * 0x18 + 0x10);
    do {
      if ((*puVar7 & 1) != 0) {
        FUN_143733a60(*puVar7 & 0xfffffffffffffffe);
      }
      puVar7 = puVar7 + -3;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  thunk_FUN_143734820(param_1 + 0x14);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x9c)) {
    FUN_143702e10(uVar2,param_1[0x12],8,*(uint *)((longlong)param_1 + 0x9c) & 0x3fffffff);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar4 = (longlong)(*(int *)(param_1 + 0x11) + -1);
  if (-1 < *(int *)(param_1 + 0x11) + -1) {
    puVar7 = (ulonglong *)(param_1[0x10] + lVar4 * 0x18 + 0x10);
    do {
      if ((*puVar7 & 1) != 0) {
        FUN_143733a60(*puVar7 & 0xfffffffffffffffe);
      }
      puVar7 = puVar7 + -3;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) {
    FUN_143702e10(uVar2,param_1[0x10],0x18,*(uint *)((longlong)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar4 = param_1[0xe];
  lVar6 = (longlong)(*(int *)(param_1 + 0xf) + -1);
  if (-1 < *(int *)(param_1 + 0xf) + -1) {
    do {
      lVar1 = *(longlong *)(lVar4 + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_143716650(lVar1);
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar3 + 0x58),lVar1,8);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    FUN_143702e10(uVar2,param_1[0xe],8,*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) {
    FUN_143702e10(uVar2,param_1[0xc],4,*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar4 = (longlong)(*(int *)(param_1 + 0xb) + -1);
  if (-1 < *(int *)(param_1 + 0xb) + -1) {
    puVar7 = (ulonglong *)(param_1[10] + 0x10 + lVar4 * 0x20);
    do {
      if ((*puVar7 & 1) != 0) {
        FUN_143733a60(*puVar7 & 0xfffffffffffffffe);
      }
      puVar7 = puVar7 + -4;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) {
    FUN_143702e10(uVar2,param_1[10],0x20,*(uint *)((longlong)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  FUN_143734ea0(param_1 + 2);
  FUN_143735290(param_1);
  return;
}



// FUNCTION 143735290 FUN_143735290 body=11 status=ok
// SIG undefined FUN_143735290(void)

void FUN_143735290(undefined8 *param_1)

{
  *param_1 = hkSerialize::IdFromVar::vftable;
  return;
}



// FUNCTION 1437352a0 FUN_1437352a0 body=15 status=ok
// SIG undefined FUN_1437352a0(void)

void FUN_1437352a0(undefined8 *param_1)

{
  *param_1 = hkSerialize::WriteFormat::vftable;
  FUN_14370c000();
  return;
}



// FUNCTION 1437352b0 FUN_1437352b0 body=120 status=ok
// SIG undefined FUN_1437352b0(void)

longlong FUN_1437352b0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_143734f50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x18);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
    }
  }
  return param_1;
}



// FUNCTION 143735330 FUN_143735330 body=52 status=ok
// SIG undefined FUN_143735330(void)

undefined8 FUN_143735330(undefined8 param_1,ulonglong param_2)

{
  FUN_143734fb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 143735370 FUN_143735370 body=52 status=ok
// SIG undefined FUN_143735370(void)

undefined8 FUN_143735370(undefined8 param_1,ulonglong param_2)

{
  FUN_143735290();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1437353b0 FUN_1437353b0 body=29 status=ok
// SIG undefined FUN_1437353b0(void)

void FUN_1437353b0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)*param_1)();
  FUN_143735810(param_1,uVar1);
  return;
}



// FUNCTION 1437353d0 FUN_1437353d0 body=40 status=ok
// SIG undefined FUN_1437353d0(void)

void FUN_1437353d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = (*(code *)*puVar1)();
                    /* WARNING: Could not recover jumptable at 0x0001437353f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)puVar1[2])(param_1,uVar2);
  return;
}



// FUNCTION 143735400 FUN_143735400 body=66 status=ok
// SIG undefined FUN_143735400(void)

undefined8 * FUN_143735400(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)((longlong)*(int *)(param_1 + 0x30) * 0x20 + *(longlong *)(param_1 + 0x50))
  ;
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  uVar1 = puVar2[2];
  param_2[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143735450 FUN_143735450 body=306 status=ok
// SIG undefined FUN_143735450(void)

/* WARNING: Removing unreachable block (ram,0x0001437354fa) */

int FUN_143735450(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int local_res10 [2];
  int local_res18 [2];
  
  if (*param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    local_res10[0] = iVar1;
    FUN_143734b50(param_1 + 0x10,local_res18,param_2,local_res10);
    iVar2 = *(int *)((longlong)local_res18[0] * 0x20 + 0x18 + *(longlong *)(param_1 + 0x10));
    if (iVar2 == iVar1) {
      plVar5 = (longlong *)(param_1 + 0x50);
      uVar3 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x58) == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
        FUN_14370c460(uVar3,plVar5,0x20);
      }
      puVar4 = (undefined8 *)((longlong)*(int *)(param_1 + 0x58) * 0x20 + *plVar5);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
      }
      plVar5 = (longlong *)((longlong)*(int *)(param_1 + 0x58) * 0x20 + *plVar5);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      *plVar5 = *param_2;
      plVar5[1] = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((*(byte *)(plVar5 + 2) & 1) != 0) {
        FUN_143733a60(plVar5[2] & 0xfffffffffffffffe);
      }
      plVar5[2] = param_2[2];
      *(undefined2 *)(plVar5 + 3) = 0;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = 0;
    }
    else {
      *(undefined1 *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x50)) = 0;
    }
    return iVar2;
  }
  return 0;
}



// FUNCTION 143735590 FUN_143735590 body=142 status=ok
// SIG undefined FUN_143735590(void)

/* WARNING: Removing unreachable block (ram,0x0001437355e9) */

undefined4 FUN_143735590(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  plVar1 = (longlong *)(param_1 + 0x50);
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x58) == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
    FUN_14370c460(uVar3,plVar1,0x20);
  }
  puVar4 = (undefined8 *)((longlong)*(int *)(param_1 + 0x58) * 0x20 + *plVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x58) * 0x20 + *plVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  *(undefined4 *)(lVar5 + 0x1c) = 0;
  *(undefined2 *)(lVar5 + 0x18) = 0x100;
  return uVar2;
}



// FUNCTION 143735620 FUN_143735620 body=126 status=ok
// SIG undefined FUN_143735620(void)

ulonglong FUN_143735620(longlong param_1)

{
  char *in_RAX;
  int iVar1;
  char *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar4 = (ulonglong)iVar1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x58))) {
    in_RAX = (char *)(uVar4 * 0x20);
    pcVar2 = in_RAX + *(longlong *)(param_1 + 0x50) + 0x18;
    do {
      if ((pcVar2[1] == '\0') && (*pcVar2 == '\0')) {
        *(int *)(param_1 + 0x30) = (int)uVar4;
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      pcVar2 = pcVar2 + 0x20;
    } while ((int)uVar3 < *(int *)(param_1 + 0x58));
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    in_RAX = (char *)(*(longlong *)(param_1 + 0x50) + 0x18);
    do {
      if ((in_RAX[1] == '\0') && (*in_RAX == '\0')) {
        *(int *)(param_1 + 0x30) = iVar1;
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      iVar1 = iVar1 + 1;
      in_RAX = in_RAX + 0x20;
    } while (iVar1 < *(int *)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1437356a0 FUN_1437356a0 body=226 status=ok
// SIG undefined FUN_1437356a0(void)

ulonglong FUN_1437356a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 local_res8 [8];
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_28 = 0;
  local_38 = 0;
  lStack_30 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res8,*param_2,param_2[1],&local_38)
  ;
  if ((local_38 != 0) && ((code *)param_1[7] != (code *)0x0)) {
    plVar1 = (longlong *)(*(code *)param_1[7])(local_20,param_2,param_1,param_1[9]);
    local_38 = *plVar1;
    lStack_30 = plVar1[1];
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    local_28 = plVar1[2];
    plVar1[2] = 0;
    if ((local_10 & 1) != 0) {
      FUN_143733a60(local_10 & 0xfffffffffffffffe);
    }
  }
  uVar2 = (**(code **)*param_1)(param_1,&local_38);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143735790 FUN_143735790 body=109 status=ok
// SIG undefined FUN_143735790(void)

undefined4 * FUN_143735790(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  cVar1 = FUN_143735620();
  while (cVar1 != '\0') {
    FUN_143735400(param_1,local_28);
    FUN_1437353b0(param_1,local_28);
    if ((local_18 & 1) != 0) {
      FUN_143733a60(local_18 & 0xfffffffffffffffe);
    }
    cVar1 = FUN_143735620(param_1);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143735800 FUN_143735800 body=13 status=ok
// SIG undefined FUN_143735800(void)

void FUN_143735800(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  return;
}



// FUNCTION 143735810 FUN_143735810 body=455 status=ok
// SIG undefined FUN_143735810(void)

void FUN_143735810(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  lVar3 = (longlong)param_2 * 0x20;
  if (*(char *)(param_1[10] + 0x19 + lVar3) == '\0') {
    *(undefined1 *)(param_1[10] + 0x18 + lVar3) = 0;
    if ((param_1[8] != 0) &&
       (puVar4 = (undefined8 *)(lVar3 + param_1[10]), *(int *)((longlong)puVar4 + 0x1c) == 0)) {
      local_48 = *puVar4;
      local_40 = puVar4[1];
      local_38 = puVar4[2];
      if ((local_38 & 1) != 0) {
        FUN_1437329e0(local_38 & 0xfffffffffffffffe);
      }
      (*(code *)param_1[8])(&local_48,param_1,param_1[9]);
      if ((local_38 & 1) != 0) {
        FUN_143733a60(local_38 & 0xfffffffffffffffe);
      }
    }
    uVar2 = FUN_143703a50();
    if (*(uint *)(param_1 + 0xd) == (*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff)) {
      FUN_14370c460(uVar2,param_1 + 0xc,4);
    }
    *(int *)(param_1[0xc] + (longlong)(int)param_1[0xd] * 4) = param_2;
    *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    if ((int)param_1[0xd] == 1) {
      iVar5 = 0;
      lVar3 = 0;
      do {
        iVar1 = *(int *)(lVar3 + param_1[0xc]);
        lVar6 = (longlong)iVar1 * 0x20;
        puVar4 = (undefined8 *)(param_1[10] + lVar6);
        if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
          local_48 = *puVar4;
          local_40 = puVar4[1];
          local_38 = puVar4[2];
          if ((local_38 & 1) != 0) {
            FUN_1437329e0(local_38 & 0xfffffffffffffffe);
          }
          if (*(int *)(lVar6 + 0x1c + param_1[10]) == 0) {
            (**(code **)(*(longlong *)param_1[1] + 0x28))
                      ((longlong *)param_1[1],local_res8,&local_48,param_1);
          }
          else {
            (**(code **)(*param_1 + 0x10))(param_1,iVar1);
            (**(code **)(*(longlong *)param_1[1] + 0x30))
                      ((longlong *)param_1[1],local_res10,
                       *(undefined4 *)(lVar6 + 0x1c + param_1[10]),&local_48,param_1);
          }
          if ((local_38 & 1) != 0) {
            FUN_143733a60(local_38 & 0xfffffffffffffffe);
          }
        }
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 4;
      } while (iVar5 < (int)param_1[0xd]);
      *(undefined4 *)(param_1 + 0xd) = 0;
    }
  }
  return;
}



// FUNCTION 1437359e0 FUN_1437359e0 body=39 status=ok
// SIG undefined FUN_1437359e0(void)

void FUN_1437359e0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = 0;
  lVar3 = 0;
  do {
    lVar2 = *(longlong *)(param_1 + 0x50) + lVar3;
    lVar3 = lVar3 + 1;
    *(char *)(lVar2 + 0x18 + (longlong)param_2 * 0x20) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



// FUNCTION 143735a10 FUN_143735a10 body=165 status=ok
// SIG undefined FUN_143735a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143735a10(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b827c8) {
    _Init_thread_header(&DAT_146b827c8);
    if (DAT_146b827c8 == -1) {
      _DAT_146b82810 = FUN_1437364b0;
      _DAT_146b82808 = AK::MemoryMgr::StartProfileThreadUsage;
      _DAT_146b82800 = AK::MemoryMgr::StartProfileThreadUsage;
      _DAT_146b827f8 = AK::MemoryMgr::StartProfileThreadUsage;
      _DAT_146b827f0 = AK::MemoryMgr::StartProfileThreadUsage;
      _DAT_146b827e8 = AK::MemoryMgr::StartProfileThreadUsage;
      _DAT_146b827e0 = AK::MemoryMgr::StartProfileThreadUsage;
      _DAT_146b827d8 = AK::MemoryMgr::StartProfileThreadUsage;
      DAT_146b827d0 = AK::MemoryMgr::StartProfileThreadUsage;
      _Init_thread_footer(&DAT_146b827c8);
    }
  }
  return param_1;
}



// FUNCTION 143735ac0 FUN_143735ac0 body=28 status=ok
// SIG undefined FUN_143735ac0(void)

undefined8 * FUN_143735ac0(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 1) = 0x101;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 143735ae0 FUN_143735ae0 body=83 status=ok
// SIG undefined FUN_143735ae0(void)

int FUN_143735ae0(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong local_res8;
  
  if ((*param_1 >> 0x17 & 1) != 0) {
    puVar3 = (undefined8 *)FUN_1437143d0(param_1,0x800000);
    if (puVar3 != (undefined8 *)0x0) {
      uVar1 = (uint)*puVar3;
      goto LAB_143735b0e;
    }
  }
  uVar1 = 0;
LAB_143735b0e:
  local_res8 = (ulonglong)uVar1;
  iVar2 = FUN_14374a9e0(&local_res8,param_3);
  if (param_2 < iVar2) {
    param_2 = iVar2;
  }
  return param_2;
}



// FUNCTION 143735b40 FUN_143735b40 body=142 status=ok
// SIG undefined FUN_143735b40(void)

int FUN_143735b40(uint *param_1,int param_2)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    if (param_1 == (uint *)0x0) {
      return iVar4;
    }
    if ((((*param_1 >> 0x17 & 1) != 0) &&
        (puVar2 = (ulonglong *)FUN_1437143d0(param_1,0x800000), puVar2 != (ulonglong *)0x0)) &&
       (*puVar2 != 0)) {
      iVar1 = 0;
      uVar3 = (*puVar2 & 0xffffffff) >> 0x1c;
      if (uVar3 != 0) {
        if ((int)uVar3 == 0xf) {
          iVar1 = param_2 * 4;
        }
        else {
          iVar1 = 1 << (sbyte)uVar3;
        }
      }
      if (iVar4 < iVar1) {
        iVar4 = iVar1;
      }
    }
    if ((*param_1 & 1) != 0) break;
    param_1 = *(uint **)(param_1 + 2);
  }
  return iVar4;
}



// FUNCTION 143735bd0 FUN_143735bd0 body=214 status=ok
// SIG undefined FUN_143735bd0(void)

int FUN_143735bd0(longlong param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  undefined8 *local_38;
  undefined8 *local_30;
  
  iVar3 = 1;
  hkReflect::DeclIterAll::DeclIterAll(&local_38,param_1,0);
  while ((puVar1 = local_38 + 1, local_38 + 1 < local_30 ||
         (cVar2 = FUN_1437144f0(&local_38), puVar1 = local_38, cVar2 != '\0'))) {
    local_38 = puVar1;
    pbVar4 = (byte *)FUN_143714f30(local_38,local_res8);
    if ((*pbVar4 & 0x20) != 0) {
      FUN_143714060(&local_res20,*local_38);
      iVar3 = FUN_143735ae0(local_res20,iVar3,param_2);
    }
  }
  while( true ) {
    if (param_1 == 0) {
      return iVar3;
    }
    puVar5 = (uint *)FUN_143715390(param_1,local_res8);
    if ((*puVar5 >> 7 & 1) != 0) break;
    param_1 = *(longlong *)(param_1 + 8);
  }
  if (param_3 < iVar3) {
    param_3 = iVar3;
  }
  return param_3;
}



// FUNCTION 143735cb0 FUN_143735cb0 body=404 status=ok
// SIG undefined FUN_143735cb0(void)

int FUN_143735cb0(uint *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 local_res8;
  
  while( true ) {
    if (param_1 == (uint *)0x0) {
      return 0;
    }
    if (((((*param_1 >> 0x1a & 1) != 0) &&
         (puVar5 = (undefined8 *)FUN_1437143d0(param_1,0x4000000), puVar5 != (undefined8 *)0x0)) &&
        (psVar1 = (short *)*puVar5, psVar1 != (short *)0x0)) && (*psVar1 != 0)) break;
    if ((((*param_1 >> 0x11 & 1) != 0) &&
        (plVar6 = (longlong *)FUN_1437143d0(param_1,0x20000), plVar6 != (longlong *)0x0)) &&
       (((longlong *)*plVar6 != (longlong *)0x0 &&
        (iVar4 = (int)((*(longlong *)*plVar6 << 4) >> 4), iVar4 != 0)))) {
      if (*(longlong *)(param_1 + 2) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_143735cb0(*(longlong *)(param_1 + 2),param_2);
      }
      uVar8 = param_2 + -1 + iVar2 & ~(param_2 - 1U);
      puVar7 = (uint *)FUN_143715390(param_1,&local_res8);
      uVar3 = uVar8 + param_2;
      if ((*puVar7 >> 7 & 1) == 0) {
        uVar3 = uVar8;
      }
      return uVar3 + iVar4 * param_2;
    }
    puVar7 = (uint *)FUN_143715390(param_1,&local_res8);
    if ((*puVar7 >> 7 & 1) != 0) {
      if (*(longlong *)(param_1 + 2) == 0) {
        return (param_2 - 1U & ~(param_2 - 1U)) + param_2;
      }
      iVar4 = FUN_143735cb0(*(longlong *)(param_1 + 2),param_2);
      return (iVar4 + -1 + param_2 & ~(param_2 - 1U)) + param_2;
    }
    param_1 = *(uint **)(param_1 + 2);
  }
  FUN_143714060(&local_res8,*(undefined8 *)(psVar1 + (longlong)(*psVar1 + -1) * 4 + 4));
  iVar4 = FUN_1437152f0(local_res8);
  iVar2 = FUN_143715270(&local_res8);
  return iVar2 + iVar4;
}



// FUNCTION 143735e50 FUN_143735e50 body=628 status=ok
// SIG undefined FUN_143735e50(void)

void FUN_143735e50(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar3 = (undefined8 *)FUN_143714490(param_1,1);
  puVar11 = (uint *)0x0;
  uVar1 = 0;
  uVar8 = 0;
  bVar7 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    bVar7 = (byte)*puVar3;
  }
  puVar4 = puVar11;
  if ((bVar7 & 0xf) == 1) {
    puVar4 = param_1;
  }
  if (puVar4 == (uint *)0x0) {
    puVar3 = (undefined8 *)FUN_143714490(param_1,1);
    if (puVar3 != (undefined8 *)0x0) {
      uVar8 = (uint)*puVar3;
    }
    puVar4 = puVar11;
    if ((uVar8 & 0xf) == 0) {
      puVar4 = param_1;
    }
    if (puVar4 == (uint *)0x0) {
      uVar8 = *param_1;
      while ((uVar8 >> 0x17 & 1) == 0) {
        param_1 = *(uint **)(param_1 + 2);
        uVar8 = *param_1;
      }
      uVar8 = uVar1;
      if (((*param_1 >> 0x17 & 1) != 0) &&
         (puVar3 = (undefined8 *)FUN_1437143d0(param_1,0x800000), puVar3 != (undefined8 *)0x0)) {
        uVar8 = (uint)*puVar3;
      }
      if ((short)uVar8 == 0) {
        if (*(longlong *)(param_1 + 2) != 0) {
          FUN_143735e50(*(longlong *)(param_1 + 2),param_2);
        }
        if ((((*param_1 & 1) != 0) &&
            (plVar5 = (longlong *)FUN_1437143d0(param_1,1), plVar5 != (longlong *)0x0)) &&
           (*plVar5 != 0)) {
          if ((((*param_1 >> 0x1a & 1) != 0) &&
              (plVar5 = (longlong *)FUN_1437143d0(param_1,0x4000000), plVar5 != (longlong *)0x0)) &&
             (*plVar5 != 0)) {
            FUN_1437360d0(param_1,param_2);
            return;
          }
          FUN_143735a10(&local_18);
          local_18 = *param_2;
          uStack_14 = param_2[1];
          uStack_10 = param_2[2];
          uStack_c = param_2[3];
          puVar3 = (undefined8 *)FUN_143714490(param_1,1);
          if (puVar3 != (undefined8 *)0x0) {
            uVar1 = (uint)*puVar3;
          }
          (*(code *)(&DAT_146b827d0)[uVar1 & 0xf])(&local_18,param_1);
          return;
        }
        puVar3 = (undefined8 *)FUN_143714420(*(undefined8 *)(param_1 + 2),0x800000);
        if (puVar3 != (undefined8 *)0x0) {
          uVar1 = (uint)*puVar3;
        }
        if (((*param_1 >> 0x17 & 1) != 0) &&
           (puVar3 = (undefined8 *)FUN_1437143d0(param_1,0x800000), puVar3 != (undefined8 *)0x0)) {
          puVar11 = (uint *)*puVar3;
        }
        local_res8 = (ulonglong)(uVar1 & 0xfffffff) | (ulonglong)puVar11 & 0xf0000000;
        uVar12 = ((ulonglong)puVar11 & 0xf0000000) >> 0x1c;
        if ((byte)uVar12 < (byte)(uVar1 >> 0x1c)) {
          uVar12 = (ulonglong)(uVar1 >> 0x1c);
        }
        local_res8 = local_res8 ^ (uVar12 << 0x1c ^ local_res8) & 0xf0000000;
        iVar2 = FUN_14374a9e0(&local_res8,param_2[1]);
        uVar12 = local_res8 ^ (iVar2 << 0x10 ^ (uint)local_res8) & 0xfff0000;
        uVar9 = local_res8 >> 0x1c;
        uVar10 = local_res8 & 0xffff;
        local_res8 = uVar12;
        puVar6 = (ulonglong *)FUN_1437143d0(param_1,0x800000);
        *puVar6 = ((uint)(uVar12 >> 0x10) & 0xfff | (int)uVar9 << 0xc) << 0x10 | uVar10;
      }
    }
  }
  return;
}



// FUNCTION 1437360d0 FUN_1437360d0 body=891 status=ok
// SIG undefined FUN_1437360d0(void)

void FUN_1437360d0(uint *param_1,int *param_2)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  longlong *plVar12;
  ushort *puVar13;
  ulonglong *puVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  short *psVar19;
  uint uVar20;
  longlong *plVar21;
  short *psVar22;
  int local_res10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  short *local_268;
  short *psStack_260;
  undefined1 local_248 [520];
  
  puVar2 = *(uint **)(param_1 + 2);
  uVar17 = 0;
  local_res10 = 0;
  iVar7 = 1;
  if (puVar2 != (uint *)0x0) {
    uVar6 = FUN_1437152f0(puVar2);
    uVar17 = (ulonglong)uVar6;
    iVar7 = FUN_143714d40(puVar2);
    if ((*(char *)((longlong)param_2 + 10) == '\0') || (uVar6 != 1)) {
      if (uVar6 != 0) {
LAB_14373616f:
        if ((char)param_2[2] == '\0') {
          if (((*(char *)((longlong)param_2 + 9) != '\0') &&
              (iVar15 = FUN_143735b40(puVar2,param_2[1]), iVar7 == iVar15)) &&
             ((iVar8 = FUN_143735bd0(puVar2,param_2[1],*param_2), iVar8 < iVar15 &&
              (uVar6 = FUN_143735cb0(puVar2,*param_2), local_res10 = iVar15, iVar7 = iVar8,
              (int)uVar6 < (int)uVar17)))) {
            uVar17 = (ulonglong)uVar6;
          }
        }
        else {
          uVar6 = FUN_143735cb0(puVar2,*param_2);
          if ((int)uVar6 < (int)uVar17) {
            uVar17 = (ulonglong)uVar6;
          }
        }
      }
    }
    else {
      uVar17 = 0;
      puVar11 = puVar2;
      do {
        if (((((*puVar11 >> 0x1a & 1) != 0) &&
             (puVar10 = (undefined8 *)FUN_1437143d0(puVar11,0x4000000), puVar10 != (undefined8 *)0x0
             )) && ((short *)*puVar10 != (short *)0x0)) && (*(short *)*puVar10 != 0)) {
          uVar17 = 1;
          goto LAB_14373616f;
        }
        puVar11 = *(uint **)(puVar11 + 2);
      } while (puVar11 != (uint *)0x0);
    }
  }
  iVar15 = (int)uVar17;
  iVar7 = FUN_143735ae0(param_1,iVar7,param_2[1]);
  puVar11 = (uint *)FUN_143715390(param_1,local_res18);
  if ((*puVar11 >> 7 & 1) != 0) {
    iVar8 = *param_2;
    if (iVar7 < iVar8) {
      iVar7 = iVar8;
    }
    if (iVar15 % iVar7 != 0) {
      iVar15 = iVar15 + (iVar7 - iVar15 % iVar7);
    }
    uVar17 = (ulonglong)(uint)(iVar15 + iVar8);
  }
  if ((((*param_1 >> 0x11 & 1) != 0) &&
      (plVar12 = (longlong *)FUN_1437143d0(param_1,0x20000), plVar12 != (longlong *)0x0)) &&
     (plVar12 = (longlong *)*plVar12, plVar12 != (longlong *)0x0)) {
    plVar21 = plVar12 + 1;
    iVar15 = (int)((*plVar12 << 4) >> 4);
    lVar18 = (longlong)iVar15;
    if (0 < iVar15) {
      do {
        iVar16 = (int)uVar17;
        lVar3 = *plVar21;
        iVar15 = FUN_1437152f0(lVar3);
        iVar8 = FUN_143714d40(lVar3);
        if (iVar7 < iVar8) {
          iVar7 = iVar8;
        }
        if (iVar16 % iVar8 != 0) {
          iVar16 = iVar16 + (iVar8 - iVar16 % iVar8);
        }
        uVar17 = (ulonglong)(uint)(iVar16 + iVar15);
        plVar21[1] = (longlong)iVar16;
        plVar21 = plVar21 + 2;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
  }
  psVar19 = (short *)0x0;
  uVar6 = (uint)uVar17;
  puVar10 = (undefined8 *)FUN_143714420(param_1,0x4000000);
  if (puVar10 != (undefined8 *)0x0) {
    psVar19 = (short *)*puVar10;
  }
  psVar22 = psVar19 + 4;
  psVar19 = psVar22 + (longlong)*psVar19 * 4;
  local_268 = psVar22;
  psStack_260 = psVar19;
  for (; psVar22 != psVar19; psVar22 = psVar22 + 4) {
    FUN_143714060(&local_res20,*(undefined8 *)psVar22);
    uVar5 = local_res20;
    FUN_143735e50(local_res20,param_2);
    uVar9 = FUN_143714d40(uVar5);
    iVar15 = FUN_143735ae0(uVar5,uVar9,param_2[1]);
    if (iVar15 != 0) {
      if (iVar7 < iVar15) {
        iVar7 = iVar15;
      }
      iVar8 = (int)uVar17 % iVar15;
      if (iVar8 != 0) {
        uVar17 = (ulonglong)(uint)((int)uVar17 + (iVar15 - iVar8));
      }
    }
    FUN_143714060(&local_268,local_res20);
    puVar13 = (ushort *)FUN_143714f30(&local_268,local_res18);
    uVar1 = *puVar13;
    puVar14 = (ulonglong *)FUN_1437143d0(local_268,0x100000);
    *puVar14 = (ulonglong)uVar1 << 0x10 | uVar17 & 0xffff;
    iVar15 = FUN_1437152f0(uVar5);
    uVar6 = (int)uVar17 + iVar15;
    uVar17 = (ulonglong)uVar6;
  }
  uVar20 = param_2[3];
  if (param_2[3] < (int)uVar6) {
    uVar20 = uVar6;
  }
  if (iVar7 < local_res10) {
    iVar7 = local_res10;
  }
  if ((iVar7 != 0) && ((int)uVar20 % iVar7 != 0)) {
    uVar20 = uVar20 + (iVar7 - (int)uVar20 % iVar7);
  }
  if ((int)uVar20 < 1) {
    uVar20 = 1;
  }
  if ((puVar2 != (uint *)0x0) && (iVar15 = FUN_1437152f0(puVar2), (int)uVar20 < iVar15)) {
    FUN_1437134a0(&local_268,local_248,0x200);
    Electra::FHTTPResourceRequest::URL
              (&local_268,
               "Child\'s final size is less than parent\'s! (Do you have a trailing unreflected field?)"
              );
    iVar15 = FUN_143732300(0x71544192,local_248,"Reflect\\Builder\\hkRecordLayout.cpp",0x129);
    if (iVar15 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_143713520(&local_268);
  }
  FUN_14374a630(param_1,uVar20,iVar7);
  return;
}



// FUNCTION 143736450 FUN_143736450 body=44 status=ok
// SIG undefined FUN_143736450(void)

void FUN_143736450(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  uVar1 = FUN_143735ac0(local_18);
  uVar1 = FUN_143736480(uVar1);
  FUN_143735e50(param_1,uVar1);
  return;
}



// FUNCTION 143736480 FUN_143736480 body=34 status=ok
// SIG undefined FUN_143736480(void)

undefined4 * FUN_143736480(undefined4 *param_1)

{
  *param_1 = 8;
  param_1[1] = 4;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1437364b0 FUN_1437364b0 body=250 status=ok
// SIG undefined FUN_1437364b0(void)

void FUN_1437364b0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)FUN_143714420(param_2,1);
  uVar5 = 0;
  uVar4 = 0;
  uVar7 = uVar5;
  if (puVar1 != (undefined8 *)0x0) {
    uVar7 = *puVar1;
  }
  if (0 < (int)((ulonglong)uVar7 >> 8)) {
    puVar1 = (undefined8 *)FUN_143714420(param_2,2);
    if (puVar1 != (undefined8 *)0x0) {
      uVar5 = *puVar1;
    }
    FUN_143735e50(uVar5,param_1);
    puVar1 = (undefined8 *)FUN_143714420(uVar5,0x800000);
    if (puVar1 != (undefined8 *)0x0) {
      uVar4 = (uint)*puVar1;
    }
    uVar6 = (ulonglong)uVar4 ^
            (ulonglong)(ushort)((short)((ulonglong)uVar7 >> 8) * (ushort)uVar4 ^ (ushort)uVar4);
    uVar3 = (longlong)*(int *)(param_1 + 0xc);
    if ((ulonglong)(longlong)*(int *)(param_1 + 0xc) < (uVar6 & 0xffff)) {
      uVar3 = uVar6 & 0xffff;
    }
    puVar2 = (ulonglong *)FUN_1437143d0(param_2,0x800000);
    *puVar2 = (ulonglong)(((uVar4 >> 0x1c) << 0xc | uVar4 >> 0x10 & 0xfff) << 0x10) |
              (uVar6 ^ (uVar3 ^ uVar6) & 0xffff) & 0xffff;
  }
  return;
}



// FUNCTION 1437365b0 FUN_1437365b0 body=66 status=ok
// SIG undefined FUN_1437365b0(void)

undefined8 * FUN_1437365b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 2) = param_3;
  *param_1 = hkTransientAllocator::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  param_1[4] = param_2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  return param_1;
}



// FUNCTION 143736600 FUN_143736600 body=44 status=ok
// SIG undefined FUN_143736600(void)

void FUN_143736600(undefined8 *param_1)

{
  *param_1 = hkTransientAllocator::vftable;
  FUN_143736840();
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  FUN_143702b50(param_1);
  return;
}



// FUNCTION 143736630 FUN_143736630 body=55 status=ok
// SIG undefined FUN_143736630(void)

undefined8 FUN_143736630(undefined8 param_1,byte param_2)

{
  FUN_143736600();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 143736670 FUN_143736670 body=188 status=ok
// SIG undefined FUN_143736670(void)

longlong FUN_143736670(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  
  uVar4 = param_2 + 0xfU & 0xfffffff0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar4;
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x10) <= (int)uVar4) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
    if (*(uint *)(param_1 + 0x40) == (*(uint *)(param_1 + 0x44) & 0x3fffffff)) {
      FUN_14370c460(*(undefined8 *)(param_1 + 0x20),param_1 + 0x38,0x10);
    }
    plVar3 = (longlong *)((longlong)*(int *)(param_1 + 0x40) * 0x10 + *(longlong *)(param_1 + 0x38))
    ;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    *plVar3 = lVar2;
    *(uint *)(plVar3 + 1) = uVar4;
    return lVar2;
  }
  FUN_143736910(param_1,uVar4);
  iVar1 = *(int *)(param_1 + 0x18);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x14) * 8);
  *(uint *)(param_1 + 0x18) = iVar1 + uVar4;
  return iVar1 + lVar2;
}



// FUNCTION 143736730 FUN_143736730 body=134 status=ok
// SIG undefined FUN_143736730(void)

void FUN_143736730(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = param_3 + 0xfU & 0xfffffff0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - uVar5;
  if (*(int *)(param_1 + 0x10) <= (int)uVar5) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      plVar3 = *(longlong **)(param_1 + 0x38);
      do {
        if (*plVar3 == param_2) {
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
          if (*(int *)(param_1 + 0x40) != iVar1) {
            lVar4 = 2;
            puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
            lVar6 = ((longlong)*(int *)(param_1 + 0x40) * 0x10 + *(longlong *)(param_1 + 0x38)) -
                    (longlong)puVar2;
            do {
              *puVar2 = *(undefined8 *)(lVar6 + (longlong)puVar2);
              puVar2 = puVar2 + 1;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
                    /* WARNING: Could not recover jumptable at 0x0001437367b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                    (*(longlong **)(param_1 + 0x20),param_2,uVar5);
          return;
        }
        iVar1 = iVar1 + 1;
        plVar3 = plVar3 + 2;
      } while (iVar1 < *(int *)(param_1 + 0x40));
      return;
    }
  }
  return;
}



// FUNCTION 1437367c0 FUN_1437367c0 body=120 status=ok
// SIG undefined FUN_1437367c0(void)

void FUN_1437367c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar2 = 0;
  *(uint *)(param_1 + 0x14) = (0 < *(int *)(param_1 + 0x30)) - 1;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                (*(longlong **)(param_1 + 0x20),
                 *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x38)),
                 *(undefined4 *)(lVar1 + 8 + *(longlong *)(param_1 + 0x38)));
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 143736840 FUN_143736840 body=207 status=ok
// SIG undefined FUN_143736840(void)

void FUN_143736840(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  FUN_1437367c0();
  uVar1 = 0;
  uVar3 = uVar1;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                (*(longlong **)(param_1 + 0x20),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar1),
                 *(undefined4 *)(param_1 + 0x10));
      uVar2 = (int)uVar3 + 1;
      uVar1 = uVar1 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < *(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),8,
                  *(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),0x10,
                  *(uint *)(param_1 + 0x44) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}



// FUNCTION 143736910 FUN_143736910 body=143 status=ok
// SIG undefined FUN_143736910(void)

void FUN_143736910(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x10) <= param_2) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    if (param_2 + *(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x10)) {
      return;
    }
    if (*(int *)(param_1 + 0x14) + 1 < (int)uVar1) goto LAB_14373698f;
  }
  if (uVar1 == (*(uint *)(param_1 + 0x34) & 0x3fffffff)) {
    FUN_14370c460(*(undefined8 *)(param_1 + 0x20),param_1 + 0x28,8);
  }
  iVar2 = *(int *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x28);
  *(int *)(param_1 + 0x30) = iVar2 + 1;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                    (*(longlong **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10));
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 8) = uVar4;
LAB_14373698f:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1437369a0 FUN_1437369a0 body=14 status=ok
// SIG undefined FUN_1437369a0(void)

void FUN_1437369a0(longlong param_1,ulonglong *param_2)

{
  *param_2 = (ulonglong)*(uint *)(param_1 + 8);
  param_2[2] = (ulonglong)*(uint *)(param_1 + 0xc);
  return;
}



// FUNCTION 1437369b0 FUN_1437369b0 body=7 status=ok
// SIG undefined FUN_1437369b0(void)

void FUN_1437369b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  return;
}



// FUNCTION 1437369c0 FUN_1437369c0 body=12 status=ok
// SIG undefined FUN_1437369c0(void)

void FUN_1437369c0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e5a00);
  return;
}



// FUNCTION 1437369d0 FUN_1437369d0 body=128 status=ok
// SIG undefined FUN_1437369d0(void)

undefined8 *
FUN_1437369d0(undefined8 *param_1,undefined8 param_2,ushort param_3,uint param_4,undefined8 param_5,
             undefined8 param_6,uint param_7)

{
  param_1[3] = 0;
  param_1[5] = param_6;
  *param_1 = 0x180000f;
  param_1[1] = 0;
  param_1[2] = 8;
  param_1[3] = param_2;
  param_1[4] = param_5;
  param_1[7] = (ulonglong)param_7;
  param_1[6] = (ulonglong)((param_4 & 0xfff) << 0x10) | (ulonglong)param_3;
  return param_1;
}



// FUNCTION 143736a50 FUN_143736a50 body=223 status=ok
// SIG undefined FUN_143736a50(void)

undefined8 *
FUN_143736a50(undefined8 *param_1,undefined8 param_2,ushort param_3,uint param_4,undefined8 param_5,
             undefined8 param_6,uint param_7,longlong *param_8)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar2 = 0;
  param_1[3] = 0;
  param_1[5] = param_6;
  param_1[3] = param_2;
  *param_1 = 0x184000f;
  param_1[1] = 0;
  param_1[2] = 8;
  param_1[4] = param_5;
  param_1[8] = (ulonglong)param_7;
  param_1[7] = (ulonglong)((param_4 & 0xfff) << 0x10) | (ulonglong)param_3;
  iVar3 = (int)(param_8[1] - *param_8 >> 4);
  param_1[10] = 0;
  iVar4 = 4;
  if (iVar3 < 4) {
    iVar4 = iVar3;
  }
  lVar5 = (longlong)iVar4;
  param_1[0xb] = lVar5;
  param_1[6] = param_1 + 10;
  if (0 < iVar4) {
    do {
      lVar1 = lVar2 + 0x10;
      *(undefined8 *)(param_1[6] + lVar1) = *(undefined8 *)(lVar2 + *param_8);
      *(undefined8 *)(param_1[6] + 8 + lVar1) = *(undefined8 *)(lVar2 + 8 + *param_8);
      lVar5 = lVar5 + -1;
      lVar2 = lVar1;
    } while (lVar5 != 0);
  }
  return param_1;
}



// FUNCTION 143736b30 FUN_143736b30 body=200 status=ok
// SIG undefined FUN_143736b30(void)

undefined8 *
FUN_143736b30(undefined8 *param_1,undefined8 param_2,ushort param_3,uint param_4,undefined8 param_5,
             undefined8 param_6,uint param_7)

{
  param_1[3] = 0;
  param_1[5] = param_6;
  *param_1 = 0x184000f;
  param_1[1] = 0;
  param_1[2] = 8;
  param_1[3] = param_2;
  param_1[4] = param_5;
  param_1[8] = (ulonglong)param_7;
  param_1[7] = (ulonglong)((param_4 & 0xfff) << 0x10) | (ulonglong)param_3;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[6] = param_1 + 10;
  param_1[0xc] = param_2;
  *(undefined **)(param_1[6] + 0x18) = &DAT_145b73d20;
  *(undefined **)(param_1[6] + 0x20) = &DAT_1467dff30;
  *(char **)(param_1[6] + 0x28) = "tAllocator";
  return param_1;
}



// FUNCTION 143736c00 FUN_143736c00 body=23 status=ok
// SIG undefined FUN_143736c00(void)

undefined8 *
FUN_143736c00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0x1000008;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  return param_1;
}



// FUNCTION 143736c20 FUN_143736c20 body=127 status=ok
// SIG undefined FUN_143736c20(void)

undefined8 *
FUN_143736c20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[4] = param_4;
  *param_1 = 0x1040008;
  iVar1 = (int)(param_5[1] - *param_5 >> 4);
  iVar3 = 4;
  if (iVar1 < 4) {
    iVar3 = iVar1;
  }
  lVar2 = 0;
  lVar4 = (longlong)iVar3;
  param_1[6] = 0;
  param_1[7] = lVar4;
  param_1[3] = param_1 + 6;
  if (0 < iVar3) {
    do {
      *(undefined8 *)(lVar2 + 0x10 + param_1[3]) = *(undefined8 *)(lVar2 + *param_5);
      *(undefined8 *)(lVar2 + 0x18 + param_1[3]) = *(undefined8 *)(lVar2 + 8 + *param_5);
      lVar4 = lVar4 + -1;
      lVar2 = lVar2 + 0x10;
    } while (lVar4 != 0);
  }
  return param_1;
}



// FUNCTION 143736ca0 FUN_143736ca0 body=64 status=ok
// SIG undefined FUN_143736ca0(void)

undefined8 *
FUN_143736ca0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5)

{
  param_1[7] = 0x80008;
  param_1[1] = 0;
  param_1[4] = &DAT_146b829e0;
  param_1[8] = (ulonglong)param_5;
  *param_1 = 0x184000f;
  param_1[2] = 6;
  param_1[3] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  return param_1;
}



// FUNCTION 143736ce0 FUN_143736ce0 body=98 status=ok
// SIG undefined FUN_143736ce0(void)

undefined8 * FUN_143736ce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  param_1[3] = param_2;
  param_1[7] = 0x80008;
  *param_1 = 0x184000f;
  param_1[1] = 0;
  param_1[2] = 6;
  param_1[5] = param_3;
  param_1[8] = (ulonglong)param_4;
  param_1[4] = &DAT_146b829e0;
  param_1[10] = 0;
  param_1[0xb] = 1;
  param_1[6] = param_1 + 10;
  param_1[0xc] = param_2;
  *(undefined **)(param_1[6] + 0x18) = &DAT_145b73d20;
  return param_1;
}



// FUNCTION 143736d50 FUN_143736d50 body=124 status=ok
// SIG undefined FUN_143736d50(void)

undefined8 *
FUN_143736d50(undefined8 *param_1,ushort param_2,uint param_3,undefined8 param_4,undefined8 param_5,
             char param_6,uint param_7)

{
  undefined8 uVar1;
  
  *param_1 = 0x180000d;
  param_1[1] = 0;
  param_1[3] = param_4;
  param_1[5] = (ulonglong)((param_3 & 0xfff) << 0x10) | (ulonglong)param_2;
  uVar1 = 3;
  if (param_6 != '\0') {
    uVar1 = 0x83;
  }
  param_1[2] = uVar1;
  param_1[4] = param_5;
  param_1[6] = (ulonglong)param_7;
  return param_1;
}



// FUNCTION 143736dd0 FUN_143736dd0 body=206 status=ok
// SIG undefined FUN_143736dd0(void)

undefined8 *
FUN_143736dd0(undefined8 *param_1,undefined8 param_2,int param_3,ushort param_4,uint param_5,
             undefined8 param_6,undefined8 param_7,uint param_8)

{
  param_1[3] = 0;
  param_1[5] = param_7;
  *param_1 = 0x184000f;
  param_1[1] = 0;
  param_1[3] = param_2;
  param_1[7] = (ulonglong)((param_5 & 0xfff) << 0x10) | (ulonglong)param_4;
  param_1[4] = param_6;
  param_1[8] = (ulonglong)param_8;
  param_1[2] = (longlong)(param_3 << 8) | 8U | (ulonglong)(-(uint)(param_3 != 0) & 0x20);
  param_1[10] = 0;
  param_1[0xb] = 1;
  param_1[6] = param_1 + 10;
  param_1[0xc] = param_2;
  *(undefined **)(param_1[6] + 0x18) = &DAT_145b73d20;
  return param_1;
}



// FUNCTION 143736ea0 FUN_143736ea0 body=260 status=ok
// SIG undefined FUN_143736ea0(void)

undefined8 *
FUN_143736ea0(undefined8 *param_1,undefined8 param_2,int param_3,ushort param_4,uint param_5,
             undefined8 param_6,undefined8 param_7,uint param_8,longlong *param_9)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  param_1[3] = 0;
  param_1[5] = param_7;
  param_1[3] = param_2;
  *param_1 = 0x184000f;
  param_1[1] = 0;
  param_1[7] = (ulonglong)((param_5 & 0xfff) << 0x10) | (ulonglong)param_4;
  param_1[4] = param_6;
  param_1[8] = (ulonglong)param_8;
  param_1[2] = (longlong)(param_3 << 8) | 8U | (ulonglong)(-(uint)(param_3 != 0) & 0x20);
  iVar2 = (int)(param_9[1] - *param_9 >> 4);
  param_1[10] = 0;
  iVar3 = 4;
  if (iVar2 < 4) {
    iVar3 = iVar2;
  }
  lVar4 = (longlong)iVar3;
  param_1[0xb] = lVar4;
  param_1[6] = param_1 + 10;
  lVar1 = 0;
  if (0 < iVar3) {
    do {
      *(undefined8 *)(lVar1 + 0x10 + param_1[6]) = *(undefined8 *)(lVar1 + *param_9);
      *(undefined8 *)(lVar1 + 0x18 + param_1[6]) = *(undefined8 *)(lVar1 + 8 + *param_9);
      lVar4 = lVar4 + -1;
      lVar1 = lVar1 + 0x10;
    } while (lVar4 != 0);
  }
  return param_1;
}



// FUNCTION 143736fb0 FUN_143736fb0 body=164 status=ok
// SIG undefined FUN_143736fb0(void)

undefined8 *
FUN_143736fb0(undefined8 *param_1,undefined8 param_2,int param_3,ushort param_4,uint param_5,
             undefined8 param_6,undefined8 param_7,uint param_8)

{
  param_1[3] = 0;
  param_1[5] = param_7;
  *param_1 = 0x180000f;
  param_1[1] = 0;
  param_1[3] = param_2;
  param_1[6] = (ulonglong)((param_5 & 0xfff) << 0x10) | (ulonglong)param_4;
  param_1[4] = param_6;
  param_1[7] = (ulonglong)param_8;
  param_1[2] = (longlong)(param_3 << 8) | 8U | (ulonglong)(-(uint)(param_3 != 0) & 0x20);
  return param_1;
}



// FUNCTION 143737060 FUN_143737060 body=250 status=ok
// SIG undefined FUN_143737060(void)

undefined8 * FUN_143737060(undefined8 *param_1)

{
  LPVOID pvVar1;
  
  *param_1 = hkReflect::TypeBuilder::vftable;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  FUN_1437365b0(param_1 + 1,*(undefined8 *)((longlong)pvVar1 + 0x50),0x4000);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x80000000;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x80000000;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x80000000;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000000;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1d2) = 0;
  FUN_14370c720(param_1 + 0xd,0,0x100);
  return param_1;
}



// FUNCTION 143737160 FUN_143737160 body=619 status=ok
// SIG undefined FUN_143737160(void)

void FUN_143737160(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  ulonglong *puVar6;
  
  *param_1 = hkReflect::TypeBuilder::vftable;
  iVar4 = *(int *)(param_1 + 0x37) + -1;
  if (-1 < iVar4) {
    puVar1 = (undefined8 *)((longlong)iVar4 * 0x1d8 + param_1[0x36]);
    puVar2 = puVar1;
    do {
      (**(code **)*puVar2)(puVar1,0);
      puVar1 = puVar1 + -0x3b;
      puVar2 = puVar2 + -0x3b;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1bc)) {
    FUN_143702e10(&PTR_vftable_1467f0638,param_1[0x36],0x1d8,
                  *(uint *)((longlong)param_1 + 0x1bc) & 0x3fffffff);
  }
  param_1[0x36] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1ac)) {
    FUN_143702e10(&PTR_vftable_1467f0638,param_1[0x34],0x10,
                  *(uint *)((longlong)param_1 + 0x1ac) & 0x3fffffff);
  }
  param_1[0x34] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x19c)) {
    FUN_143702e10(&PTR_vftable_1467f0638,param_1[0x32],0x10,
                  *(uint *)((longlong)param_1 + 0x19c) & 0x3fffffff);
  }
  param_1[0x32] = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x80000000;
  lVar3 = (longlong)(*(int *)(param_1 + 0x31) + -1);
  if (-1 < *(int *)(param_1 + 0x31) + -1) {
    puVar5 = (uint *)(param_1[0x30] + 0x2c + lVar3 * 0x38);
    do {
      puVar5[-1] = 0;
      if (-1 < (int)*puVar5) {
        FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(puVar5 + -3),8,*puVar5 & 0x3fffffff);
      }
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      *puVar5 = 0x80000000;
      puVar5 = puVar5 + -0xe;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x18c)) {
    FUN_143702e10(&PTR_vftable_1467f0638,param_1[0x30],0x38,
                  *(uint *)((longlong)param_1 + 0x18c) & 0x3fffffff);
  }
  param_1[0x30] = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x80000000;
  lVar3 = (longlong)(*(int *)(param_1 + 0x2f) + -1);
  if (-1 < *(int *)(param_1 + 0x2f) + -1) {
    puVar6 = (ulonglong *)(param_1[0x2e] + lVar3 * 0x18 + 0x10);
    do {
      if ((*puVar6 & 1) != 0) {
        FUN_143733a60(*puVar6 & 0xfffffffffffffffe);
      }
      puVar6 = puVar6 + -3;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x17c)) {
    FUN_143702e10(&PTR_vftable_1467f0638,param_1[0x2e],0x18,
                  *(uint *)((longlong)param_1 + 0x17c) & 0x3fffffff);
  }
  param_1[0x2e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x80000000;
  FUN_143736600(param_1 + 1);
  return;
}


