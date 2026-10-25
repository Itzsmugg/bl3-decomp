// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1438e6020 FUN_1438e6020 body=1050 status=ok
// SIG undefined FUN_1438e6020(void)

void FUN_1438e6020(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined2 local_98;
  undefined4 local_96;
  undefined ***local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  ulonglong uStack_68;
  undefined **local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  int local_40;
  uint local_3c;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  sVar2 = *(short *)(param_2 + 4);
  uVar10 = 0;
  if (sVar2 == 0x11) {
LAB_1438e608d:
    lVar4 = *(longlong *)(param_1 + 0x48);
    local_58 = 0;
    local_50 = 0x1ffff;
    local_60 = hkaiReferencedArray<hkQTransform>::vftable;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0x80000000;
    iVar3 = *(int *)(lVar4 + 0x250);
    uVar8 = FUN_143703a50();
    if ((int)(local_3c & 0x3fffffff) < iVar3) {
      iVar7 = (local_3c & 0x3fffffff) * 2;
      iVar6 = iVar3;
      if (iVar3 < iVar7) {
        iVar6 = iVar7;
      }
      FUN_14370c310(uVar8,&local_48,iVar6,0x20);
    }
    uVar9 = uVar10;
    uVar11 = uVar10;
    uVar13 = uVar10;
    if (0 < *(int *)(lVar4 + 0x250)) {
      do {
        uVar12 = (int)uVar13 + 1;
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x248) + -8 + uVar11 + 8);
        uVar8 = *(undefined8 *)(lVar5 + 0x38);
        *(undefined8 *)(uVar9 + local_48) = *(undefined8 *)(lVar5 + 0x30);
        ((undefined8 *)(uVar9 + local_48))[1] = uVar8;
        uVar8 = *(undefined8 *)(lVar5 + 0x48);
        puVar1 = (undefined8 *)(uVar9 + 0x10 + local_48);
        *puVar1 = *(undefined8 *)(lVar5 + 0x40);
        puVar1[1] = uVar8;
        uVar9 = uVar9 + 0x20;
        uVar11 = uVar11 + 8;
        uVar13 = (ulonglong)uVar12;
      } while ((int)uVar12 < *(int *)(lVar4 + 0x250));
    }
    local_90 = &local_60;
    local_96 = 0x2a0800;
    local_98 = 0x10;
    local_70 = 0;
    uStack_68 = 0;
    local_40 = iVar3;
    FUN_14386a310(&local_88,&local_98);
    local_78 = local_88;
    local_70 = lStack_80;
    uVar9 = uVar10;
    if (lStack_80 != 0) {
      uVar9 = FUN_1437151a0();
    }
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    if ((uStack_68 & 1) != 0) {
      FUN_143733a60(uStack_68 & 0xfffffffffffffffe);
    }
    uStack_68 = uVar9;
    FUN_14378eaf0(*(undefined8 *)(param_1 + 0x40),param_1 + 0x18,&local_78,
                  *(undefined4 *)(param_1 + 0x38));
    if ((uStack_68 & 1) != 0) {
      FUN_143733a60(uStack_68 & 0xfffffffffffffffe);
    }
    uVar8 = FUN_143703a50();
    local_40 = 0;
    if (-1 < (int)local_3c) {
      FUN_143702e10(uVar8,local_48,0x20,local_3c & 0x3fffffff);
    }
    local_48 = 0;
    local_3c = 0x80000000;
    FUN_14370c000(&local_60);
  }
  else {
    if ((sVar2 != 0x1c) && (sVar2 != 0x20)) {
      if (sVar2 != 0x21) goto LAB_1438e6387;
      goto LAB_1438e608d;
    }
    if (*(char *)(param_2 + 8) != '\0') goto LAB_1438e608d;
  }
  local_58 = 0;
  local_60 = hkaiReferencedArray<hkaiReferenceFrame>::vftable;
  local_50 = 0x1ffff;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x130) + 0x40);
  uVar8 = FUN_143703a50();
  if ((int)(local_3c & 0x3fffffff) < iVar3) {
    iVar7 = (local_3c & 0x3fffffff) * 2;
    iVar6 = iVar3;
    if (iVar3 < iVar7) {
      iVar6 = iVar7;
    }
    FUN_14370c310(uVar8,&local_48,iVar6,0x60);
  }
  lStack_80 = (longlong)iVar3 * 0x60 + local_48;
  local_88 = local_48;
  local_40 = iVar3;
  FUN_14383f780(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x130),&local_88);
  local_90 = &local_60;
  local_98 = 0x10;
  local_96 = 0x2b0800;
  local_70 = 0;
  uStack_68 = 0;
  FUN_14386a310(&local_88,&local_98);
  local_78 = local_88;
  local_70 = lStack_80;
  uVar9 = uVar10;
  if (lStack_80 != 0) {
    uVar9 = FUN_1437151a0();
  }
  if ((uVar9 & 1) != 0) {
    FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
  }
  if ((uStack_68 & 1) != 0) {
    FUN_143733a60(uStack_68 & 0xfffffffffffffffe);
  }
  uStack_68 = uVar9;
  FUN_14378eaf0(*(undefined8 *)(param_1 + 0x40),param_1 + 0x18,&local_78,
                *(undefined4 *)(param_1 + 0x38));
  if ((uStack_68 & 1) != 0) {
    FUN_143733a60(uStack_68 & 0xfffffffffffffffe);
  }
  uVar8 = FUN_143703a50();
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(uVar8,local_48,0x60,local_3c & 0x3fffffff);
  }
  local_48 = 0;
  local_3c = 0x80000000;
  FUN_14370c000(&local_60);
LAB_1438e6387:
  local_70 = 0;
  uStack_68 = 0;
  FUN_14386a310(&local_88,param_2);
  local_78 = local_88;
  local_70 = lStack_80;
  if (lStack_80 != 0) {
    uVar10 = FUN_1437151a0();
  }
  if ((uVar10 & 1) != 0) {
    FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
  }
  if ((uStack_68 & 1) != 0) {
    FUN_143733a60(uStack_68 & 0xfffffffffffffffe);
  }
  uStack_68 = uVar10;
  FUN_14378eaf0(*(undefined8 *)(param_1 + 0x40),param_1 + 0x18,&local_78,
                *(undefined4 *)(param_1 + 0x38));
  if ((uStack_68 & 1) != 0) {
    FUN_143733a60(uStack_68 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1438e6440 FUN_1438e6440 body=7 status=ok
// SIG undefined FUN_1438e6440(void)

undefined4 FUN_1438e6440(void)

{
  return DAT_146b955e0;
}



// FUNCTION 1438e6450 FUN_1438e6450 body=113 status=ok
// SIG undefined FUN_1438e6450(void)

void FUN_1438e6450(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x48) + 0x38);
  uVar2 = (ulonglong)
          ((longlong)(puVar1 + *(int *)(*(longlong *)(param_1 + 0x48) + 0x40)) +
          (7 - (longlong)puVar1)) >> 3;
  if (puVar1 + *(int *)(*(longlong *)(param_1 + 0x48) + 0x40) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)(param_1 + 0x40) + 8))((longlong *)(param_1 + 0x40),*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 1438e64d0 FUN_1438e64d0 body=41 status=ok
// SIG undefined FUN_1438e64d0(void)

void FUN_1438e64d0(void)

{
  DAT_146b955e0 = FUN_14378a650(DAT_146b845b8,"AI/World Replay",FUN_1438e5fb0);
  return;
}



// FUNCTION 1438e6500 FUN_1438e6500 body=1490 status=ok
// SIG undefined FUN_1438e6500(void)

void FUN_1438e6500(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  LPVOID pvVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong local_res18;
  longlong local_res20;
  undefined8 local_128;
  longlong lStack_120;
  int local_118;
  uint local_114;
  longlong local_110;
  int local_108;
  uint local_104;
  longlong local_f8;
  int local_f0;
  uint local_ec;
  undefined8 local_d8;
  longlong local_d0;
  ulonglong uStack_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined2 local_a8;
  undefined4 local_a6;
  undefined1 local_a0 [72];
  undefined1 local_58;
  undefined1 local_48 [16];
  
  plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x38);
  local_c0 = plVar17 + *(int *)(*(longlong *)(param_1 + 0x48) + 0x40);
  if (plVar17 != local_c0) {
    do {
      lVar14 = *plVar17;
      local_res20 = lVar14;
      lVar7 = FUN_1436e53e0(param_1 + 0x50,&local_res20);
      if ((((lVar7 == 0) || (*(int *)(lVar7 + 4) < 0)) &&
          ((cVar4 = UPrimitiveComponent::IsWelded(lVar14), cVar4 == '\0' ||
           (cVar4 = APrimalCharacter::IsValidForStatusUpdate(lVar14), cVar4 == '\0')))) &&
         (*(int *)(param_1 + 0x58) == 0)) {
        pvVar8 = TlsGetValue(DAT_146b7bf70);
        if (pvVar8 == (LPVOID)0x0) {
          pvVar8 = DAT_146b7bf68;
        }
        lVar7 = (**(code **)(**(longlong **)((longlong)pvVar8 + 0x58) + 8))
                          (*(longlong **)((longlong)pvVar8 + 0x58),0x50);
        if (lVar7 == 0) {
          local_res18 = 0;
        }
        else {
          local_res18 = FUN_1438e5a20(lVar7,DAT_146b955e0,lVar14);
        }
        lVar7 = local_res18;
        FUN_143846ca0(lVar14,local_res18);
        FUN_14374b830(param_1 + 0x50,&local_res20,&local_res18);
        *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(param_1 + 0x10);
        if (*(longlong *)(param_1 + 0x10) != 0) {
          local_118 = 0;
          local_114 = 0x80000000;
          local_110 = 0;
          local_108 = 0;
          local_104 = 0x80000000;
          local_128 = 0;
          lStack_120 = 0;
          if ((lVar14 != 0) && (FUN_14370c030(lVar14), local_128 != 0)) {
            FUN_14370c150();
          }
          local_128 = lVar14;
          lVar9 = UFoliageType_InstancedStaticMesh::GetStaticMesh(lVar14);
          lVar1 = *(longlong *)(lVar9 + 0x20);
          uVar18 = (longlong)*(int *)(lVar9 + 0x28) * 8 >> 3;
          uVar10 = FUN_143703a50();
          iVar6 = (int)uVar18;
          if ((int)(local_114 & 0x3fffffff) < iVar6) {
            FUN_14370c310(uVar10,&lStack_120,uVar18 & 0xffffffff,8);
          }
          lVar9 = lStack_120 + (longlong)iVar6 * 8;
          iVar5 = (local_118 - iVar6) + -1;
          lVar15 = (longlong)iVar5;
          if (-1 < iVar5) {
            do {
              if (*(longlong *)(lVar9 + lVar15 * 8) != 0) {
                FUN_14370c150();
              }
              lVar15 = lVar15 + -1;
            } while (-1 < lVar15);
          }
          iVar5 = iVar6;
          if (local_118 < iVar6) {
            iVar5 = local_118;
          }
          FUN_1438e59b0(lStack_120,lVar1,iVar5);
          plVar16 = (longlong *)(lStack_120 + (longlong)iVar5 * 8);
          lVar9 = (longlong)(iVar6 - iVar5);
          if (0 < iVar6 - iVar5) {
            lVar15 = (longlong)iVar5 * 8 - (longlong)plVar16;
            do {
              if ((plVar16 != (longlong *)0x0) &&
                 (lVar2 = *(longlong *)(lVar1 + lVar15 + (longlong)plVar16), *plVar16 = lVar2,
                 lVar2 != 0)) {
                FUN_14370c030();
              }
              plVar16 = plVar16 + 1;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          local_118 = iVar6;
          lVar9 = UGeometryCacheComponent::GetGeometryCache(lVar14);
          lVar1 = *(longlong *)(lVar9 + 0x20);
          uVar18 = (longlong)*(int *)(lVar9 + 0x28) * 8 >> 3;
          uVar10 = FUN_143703a50();
          iVar6 = (int)uVar18;
          if ((int)(local_104 & 0x3fffffff) < iVar6) {
            FUN_14370c310(uVar10,&local_110,uVar18 & 0xffffffff,8);
          }
          lVar9 = local_110 + (longlong)iVar6 * 8;
          iVar5 = (local_108 - iVar6) + -1;
          lVar15 = (longlong)iVar5;
          if (-1 < iVar5) {
            do {
              if (*(longlong *)(lVar9 + lVar15 * 8) != 0) {
                FUN_14370c150();
              }
              lVar15 = lVar15 + -1;
            } while (-1 < lVar15);
          }
          iVar5 = iVar6;
          if (local_108 < iVar6) {
            iVar5 = local_108;
          }
          FUN_1438e59b0(local_110,lVar1,iVar5);
          plVar16 = (longlong *)(local_110 + (longlong)iVar5 * 8);
          lVar9 = (longlong)(iVar6 - iVar5);
          if (0 < iVar6 - iVar5) {
            lVar15 = (longlong)iVar5 * 8 - (longlong)plVar16;
            do {
              if ((plVar16 != (longlong *)0x0) &&
                 (lVar2 = *(longlong *)(lVar1 + lVar15 + (longlong)plVar16), *plVar16 = lVar2,
                 lVar2 != 0)) {
                FUN_14370c030();
              }
              plVar16 = plVar16 + 1;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          local_d0 = 0;
          uStack_c8 = 0;
          local_108 = iVar6;
          puVar11 = (undefined8 *)FUN_14371d5c0(local_48,&local_128,&DAT_14682ab70);
          local_d8 = *puVar11;
          local_d0 = puVar11[1];
          if (local_d0 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = FUN_1437151a0();
          }
          uVar13 = 0;
          if ((uVar18 & 1) != 0) {
            FUN_1437329e0(uVar18 & 0xfffffffffffffffe);
          }
          if ((uStack_c8 & 1) != 0) {
            FUN_143733a60(uStack_c8 & 0xfffffffffffffffe);
          }
          uStack_c8 = uVar18;
          FUN_14378eaf0(*(undefined8 *)(param_1 + 0x10),lVar7 + 0x18,&local_d8,DAT_146b955e0);
          if ((uStack_c8 & 1) != 0) {
            FUN_143733a60(uStack_c8 & 0xfffffffffffffffe);
          }
          FUN_1438e5ae0(&local_128);
          cVar4 = UPrimitiveComponent::IsWelded(lVar14);
          if (cVar4 != '\0') {
            FUN_143718d80(&local_128);
            iVar6 = FUN_14384c870(lVar14);
            local_128 = CONCAT44(iVar6,(undefined4)local_128);
            uVar10 = FUN_143703a50();
            if ((int)(local_ec & 0x3fffffff) < iVar6) {
              iVar5 = (local_ec & 0x3fffffff) * 2;
              iVar3 = iVar6;
              if (iVar6 < iVar5) {
                iVar3 = iVar5;
              }
              FUN_14370c310(uVar10,&local_f8,iVar3,1);
            }
            puVar12 = (undefined1 *)(local_f0 + local_f8);
            lVar14 = (longlong)(iVar6 - local_f0);
            if (0 < iVar6 - local_f0) {
              do {
                if (puVar12 != (undefined1 *)0x0) {
                  *puVar12 = 2;
                }
                puVar12 = puVar12 + 1;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
            }
            local_a8 = 0x60;
            local_a6 = 0x1a0800;
            local_f0 = iVar6;
            FUN_143718d80(local_a0);
            FUN_14384ba90(local_a0,&local_128);
            local_58 = 0;
            local_d0 = 0;
            uStack_c8 = 0;
            FUN_14386a310(&local_b8,&local_a8);
            local_d8 = local_b8;
            local_d0 = local_b0;
            if (local_b0 != 0) {
              uVar13 = FUN_1437151a0();
            }
            if ((uVar13 & 1) != 0) {
              FUN_1437329e0(uVar13 & 0xfffffffffffffffe);
            }
            if ((uStack_c8 & 1) != 0) {
              FUN_143733a60(uStack_c8 & 0xfffffffffffffffe);
            }
            uStack_c8 = uVar13;
            FUN_14378eaf0(*(undefined8 *)(param_1 + 0x10),lVar7 + 0x18,&local_d8,DAT_146b955e0);
            if ((uStack_c8 & 1) != 0) {
              FUN_143733a60(uStack_c8 & 0xfffffffffffffffe);
            }
            FUN_14384ba00(local_a0);
            uVar10 = FUN_143703a50();
            local_f0 = 0;
            if (-1 < (int)local_ec) {
              FUN_143702e10(uVar10,local_f8,1,local_ec & 0x3fffffff);
            }
            local_f8 = 0;
            local_ec = 0x80000000;
            FUN_143716650(&local_108);
            uVar10 = FUN_143703a50();
            local_118 = 0;
            if (-1 < (int)local_114) {
              FUN_143702e10(uVar10,lStack_120,4,local_114 & 0x3fffffff);
            }
          }
        }
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != local_c0);
  }
  return;
}



// FUNCTION 1438e6ae0 FUN_1438e6ae0 body=159 status=ok
// SIG undefined FUN_1438e6ae0(void)

void FUN_1438e6ae0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  undefined8 local_res10;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  local_res8 = 0;
  local_res10 = param_2;
  lVar2 = FUN_1436e53e0(plVar1,&local_res10);
  if (lVar2 == 0) {
    plVar3 = &local_res8;
  }
  else {
    plVar3 = (longlong *)(*plVar1 + 8 + (longlong)*(int *)(lVar2 + 4) * 0x10);
  }
  lVar2 = *plVar3;
  if (lVar2 != 0) {
    FUN_143847900(param_2,lVar2);
    *(undefined8 *)(lVar2 + 0x40) = 0;
    FUN_14370c150(lVar2);
    lVar2 = FUN_1436e53e0(plVar1,&local_res10);
    if (lVar2 != 0) {
      FUN_1438e5e90(plVar1,lVar2);
    }
  }
  return;
}



// FUNCTION 1438e6b80 FUN_1438e6b80 body=55 status=ok
// SIG undefined FUN_1438e6b80(void)

undefined8 * FUN_1438e6b80(undefined8 *param_1)

{
  FUN_1438eafc0();
  *param_1 = hkaiTraversalAnnotationViewer::vftable;
  param_1[3] = hkaiTraversalAnnotationViewer::vftable;
  param_1[0xb] = hkaiTraversalAnnotationViewer::vftable;
  return param_1;
}



// FUNCTION 1438e6bc0 FUN_1438e6bc0 body=164 status=ok
// SIG undefined FUN_1438e6bc0(void)

void FUN_1438e6bc0(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = param_1[0xc];
  *param_1 = hkaiTraversalAnnotationViewer::vftable;
  uVar4 = 0;
  param_1[3] = hkaiTraversalAnnotationViewer::vftable;
  param_1[0xb] = hkaiTraversalAnnotationViewer::vftable;
  if (lVar1 != 0) {
    for (uVar3 = uVar4; uVar2 = uVar4, (int)uVar3 < *(int *)(lVar1 + 0x40);
        uVar3 = (ulonglong)((int)uVar3 + 1)) {
    }
    while (lVar1 != 0) {
      if (*(int *)(param_1[0xc] + 0x50) <= (int)uVar2) break;
      FUN_1438e7a70(param_1 + 0xb,*(undefined8 *)(*(longlong *)(param_1[0xc] + 0x48) + uVar4));
      uVar4 = uVar4 + 8;
      uVar2 = (ulonglong)((int)uVar2 + 1);
      lVar1 = param_1[0xc];
    }
  }
  FUN_1438eb0e0(param_1);
  return;
}



// FUNCTION 1438e6c64 FUN_1438e6c64 body=9 status=ok
// SIG undefined FUN_1438e6c64(void)

void FUN_1438e6c64(longlong param_1)

{
  FUN_1438e6c80(param_1 + -0x18);
  return;
}



// FUNCTION 1438e6c70 FUN_1438e6c70 body=9 status=ok
// SIG undefined FUN_1438e6c70(void)

void FUN_1438e6c70(longlong param_1)

{
  FUN_1438e6c80(param_1 + -0x58);
  return;
}



// FUNCTION 1438e6c80 FUN_1438e6c80 body=136 status=ok
// SIG undefined FUN_1438e6c80(void)

longlong FUN_1438e6c80(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438e6bc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x68;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1438e6d10 FUN_1438e6d10 body=180 status=ok
// SIG undefined FUN_1438e6d10(void)

void FUN_1438e6d10(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1438d2540(param_2,param_3);
  switch(uVar1) {
  case 1:
    FUN_1438e7010(param_1,param_2,param_3);
    return;
  case 2:
    FUN_1438e7680(param_1,param_2,param_3);
    return;
  case 3:
    FUN_1438e7240(param_1,param_2,param_3);
    return;
  case 5:
    FUN_1438e6de0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1438e6de0 FUN_1438e6de0 body=560 status=ok
// SIG undefined FUN_1438e6de0(void)

void FUN_1438e6de0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  LPVOID pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  float *pfVar8;
  undefined4 uVar9;
  longlong local_68;
  uint local_60;
  uint local_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_res18[0] = param_3;
  uVar1 = hkaiVaultUtils::getNumHandPlantSegments(param_2,local_res18);
  uVar7 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  if (0 < (int)uVar1) {
    uVar6 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) {
      uVar6 = uVar7;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_68,uVar6,8);
  }
  uVar6 = uVar7;
  if (0 < (int)uVar1) {
    do {
      pfVar8 = &local_58;
      FUN_1438d3d90(param_2,local_res18,uVar6,&local_48,pfVar8);
      uVar9 = (undefined4)((ulonglong)pfVar8 >> 0x20);
      lVar3 = *(longlong *)(param_1 + 0x60);
      local_48 = local_48 + *(float *)(lVar3 + 0x80);
      fStack_44 = fStack_44 + *(float *)(lVar3 + 0x84);
      fStack_40 = fStack_40 + *(float *)(lVar3 + 0x88);
      fStack_3c = fStack_3c + *(float *)(lVar3 + 0x8c);
      local_58 = local_58 + *(float *)(lVar3 + 0x80);
      fStack_54 = fStack_54 + *(float *)(lVar3 + 0x84);
      fStack_50 = fStack_50 + *(float *)(lVar3 + 0x88);
      fStack_4c = fStack_4c + *(float *)(lVar3 + 0x8c);
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar2 + 0x58),0xa0);
      uVar4 = uVar7;
      if (lVar3 != 0) {
        uVar4 = FUN_143790f60(lVar3,&local_48,&local_58,0x3d23d70a,CONCAT44(uVar9,0xc),1);
      }
      if (local_60 == (local_5c & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,&local_68,8);
      }
      uVar5 = (int)uVar6 + 1;
      *(ulonglong *)(local_68 + (longlong)(int)local_60 * 8) = uVar4;
      local_60 = local_60 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)uVar1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
            (*(longlong **)(param_1 + 0x30),local_res8,local_res18[0],&local_68,&DAT_1467f0890,
             0xfff0f8ff,7,DAT_146b955e8);
  if (0 < (longlong)(int)uVar1) {
    do {
      FUN_14370c150(*(undefined8 *)(local_68 + uVar7 * 8));
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)(int)uVar1);
  }
  local_60 = 0;
  if (-1 < (int)local_5c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_68,8,local_5c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438e7010 FUN_1438e7010 body=560 status=ok
// SIG undefined FUN_1438e7010(void)

void FUN_1438e7010(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  LPVOID pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  float *pfVar8;
  undefined4 uVar9;
  longlong local_68;
  uint local_60;
  uint local_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_res18[0] = param_3;
  uVar1 = hkaiVaultUtils::getNumHandPlantSegments(param_2,local_res18);
  uVar7 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  if (0 < (int)uVar1) {
    uVar6 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) {
      uVar6 = uVar7;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_68,uVar6,8);
  }
  uVar6 = uVar7;
  if (0 < (int)uVar1) {
    do {
      pfVar8 = &local_58;
      FUN_1438d3d90(param_2,local_res18,uVar6,&local_48,pfVar8);
      uVar9 = (undefined4)((ulonglong)pfVar8 >> 0x20);
      lVar3 = *(longlong *)(param_1 + 0x60);
      local_48 = local_48 + *(float *)(lVar3 + 0x80);
      fStack_44 = fStack_44 + *(float *)(lVar3 + 0x84);
      fStack_40 = fStack_40 + *(float *)(lVar3 + 0x88);
      fStack_3c = fStack_3c + *(float *)(lVar3 + 0x8c);
      local_58 = local_58 + *(float *)(lVar3 + 0x80);
      fStack_54 = fStack_54 + *(float *)(lVar3 + 0x84);
      fStack_50 = fStack_50 + *(float *)(lVar3 + 0x88);
      fStack_4c = fStack_4c + *(float *)(lVar3 + 0x8c);
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar2 + 0x58),0xa0);
      uVar4 = uVar7;
      if (lVar3 != 0) {
        uVar4 = FUN_143790f60(lVar3,&local_48,&local_58,0x3d23d70a,CONCAT44(uVar9,0xc),1);
      }
      if (local_60 == (local_5c & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,&local_68,8);
      }
      uVar5 = (int)uVar6 + 1;
      *(ulonglong *)(local_68 + (longlong)(int)local_60 * 8) = uVar4;
      local_60 = local_60 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)uVar1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
            (*(longlong **)(param_1 + 0x30),local_res8,local_res18[0],&local_68,&DAT_1467f0890,
             0xffff1493,7,DAT_146b955e8);
  if (0 < (longlong)(int)uVar1) {
    do {
      FUN_14370c150(*(undefined8 *)(local_68 + uVar7 * 8));
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)(int)uVar1);
  }
  local_60 = 0;
  if (-1 < (int)local_5c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_68,8,local_5c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438e7240 FUN_1438e7240 body=981 status=ok
// SIG undefined FUN_1438e7240(void)

void FUN_1438e7240(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar9;
  longlong local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  local_res18[0] = param_3;
  iVar2 = hkaiVaultUtils::getNumHandPlantSegments(param_2,local_res18);
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80000000;
  FUN_14370c310(&PTR_vftable_1467f0638,&local_78,1);
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  lVar4 = (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar3 + 0x58),0x80);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_143791790(lVar4);
  }
  if (local_70 == (local_6c & 0x3fffffff)) {
    FUN_14370c460(&PTR_vftable_1467f0638,&local_78,8);
  }
  iVar8 = iVar2 * 8;
  *(longlong *)(local_78 + (longlong)(int)local_70 * 8) = lVar4;
  local_70 = local_70 + 1;
  uVar5 = FUN_143703a50();
  uVar7 = *(uint *)(lVar4 + 0x7c) & 0x3fffffff;
  if ((int)uVar7 < iVar8) {
    iVar1 = uVar7 * 2;
    if (iVar8 < iVar1) {
      iVar8 = iVar1;
    }
    FUN_14370c310(uVar5,lVar4 + 0x70,iVar8,0x10);
  }
  iVar8 = 0;
  if (0 < iVar2) {
    do {
      puVar6 = &local_48;
      FUN_1438d8140(param_2,local_res18,iVar8,&local_38,&local_68,puVar6,&local_58);
      uVar9 = (undefined4)((ulonglong)puVar6 >> 0x20);
      uVar5 = FUN_143703a50();
      if (*(uint *)(lVar4 + 0x78) == (*(uint *)(lVar4 + 0x7c) & 0x3fffffff)) {
        FUN_14370c460(uVar5,lVar4 + 0x70,0x10);
      }
      puVar6 = (undefined4 *)((longlong)*(int *)(lVar4 + 0x78) * 0x10 + *(longlong *)(lVar4 + 0x70))
      ;
      *puVar6 = local_38;
      puVar6[1] = uStack_34;
      puVar6[2] = uStack_30;
      puVar6[3] = uStack_2c;
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + 1;
      uVar5 = FUN_143703a50();
      if (*(uint *)(lVar4 + 0x78) == (*(uint *)(lVar4 + 0x7c) & 0x3fffffff)) {
        FUN_14370c460(uVar5,lVar4 + 0x70,0x10);
      }
      puVar6 = (undefined4 *)((longlong)*(int *)(lVar4 + 0x78) * 0x10 + *(longlong *)(lVar4 + 0x70))
      ;
      *puVar6 = local_68;
      puVar6[1] = uStack_64;
      puVar6[2] = uStack_60;
      puVar6[3] = uStack_5c;
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + 1;
      uVar5 = FUN_143703a50();
      if (*(uint *)(lVar4 + 0x78) == (*(uint *)(lVar4 + 0x7c) & 0x3fffffff)) {
        FUN_14370c460(uVar5,lVar4 + 0x70,0x10);
      }
      puVar6 = (undefined4 *)((longlong)*(int *)(lVar4 + 0x78) * 0x10 + *(longlong *)(lVar4 + 0x70))
      ;
      *puVar6 = local_68;
      puVar6[1] = uStack_64;
      puVar6[2] = uStack_60;
      puVar6[3] = uStack_5c;
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + 1;
      uVar5 = FUN_143703a50();
      if (*(uint *)(lVar4 + 0x78) == (*(uint *)(lVar4 + 0x7c) & 0x3fffffff)) {
        FUN_14370c460(uVar5,lVar4 + 0x70,0x10);
      }
      puVar6 = (undefined4 *)((longlong)*(int *)(lVar4 + 0x78) * 0x10 + *(longlong *)(lVar4 + 0x70))
      ;
      *puVar6 = local_58;
      puVar6[1] = uStack_54;
      puVar6[2] = uStack_50;
      puVar6[3] = uStack_4c;
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + 1;
      uVar5 = FUN_143703a50();
      if (*(uint *)(lVar4 + 0x78) == (*(uint *)(lVar4 + 0x7c) & 0x3fffffff)) {
        FUN_14370c460(uVar5,lVar4 + 0x70,0x10);
      }
      puVar6 = (undefined4 *)((longlong)*(int *)(lVar4 + 0x78) * 0x10 + *(longlong *)(lVar4 + 0x70))
      ;
      *puVar6 = local_58;
      puVar6[1] = uStack_54;
      puVar6[2] = uStack_50;
      puVar6[3] = uStack_4c;
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + 1;
      uVar5 = FUN_143703a50();
      if (*(uint *)(lVar4 + 0x78) == (*(uint *)(lVar4 + 0x7c) & 0x3fffffff)) {
        FUN_14370c460(uVar5,lVar4 + 0x70,0x10);
      }
      puVar6 = (undefined4 *)((longlong)*(int *)(lVar4 + 0x78) * 0x10 + *(longlong *)(lVar4 + 0x70))
      ;
      *puVar6 = local_48;
      puVar6[1] = uStack_44;
      puVar6[2] = uStack_40;
      puVar6[3] = uStack_3c;
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + 1;
      uVar5 = FUN_143703a50();
      if (*(uint *)(lVar4 + 0x78) == (*(uint *)(lVar4 + 0x7c) & 0x3fffffff)) {
        FUN_14370c460(uVar5,lVar4 + 0x70,0x10);
      }
      puVar6 = (undefined4 *)((longlong)*(int *)(lVar4 + 0x78) * 0x10 + *(longlong *)(lVar4 + 0x70))
      ;
      *puVar6 = local_48;
      puVar6[1] = uStack_44;
      puVar6[2] = uStack_40;
      puVar6[3] = uStack_3c;
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + 1;
      uVar5 = FUN_143703a50();
      if (*(uint *)(lVar4 + 0x78) == (*(uint *)(lVar4 + 0x7c) & 0x3fffffff)) {
        FUN_14370c460(uVar5,lVar4 + 0x70,0x10);
      }
      iVar8 = iVar8 + 1;
      puVar6 = (undefined4 *)((longlong)*(int *)(lVar4 + 0x78) * 0x10 + *(longlong *)(lVar4 + 0x70))
      ;
      *puVar6 = local_38;
      puVar6[1] = uStack_34;
      puVar6[2] = uStack_30;
      puVar6[3] = uStack_2c;
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + 1;
    } while (iVar8 < iVar2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
            (*(longlong **)(param_1 + 0x30),local_res8,local_res18[0],&local_78,&DAT_1467f0890,
             CONCAT44(uVar9,0xffadff2f),7,DAT_146b955e8);
  FUN_14370c150(lVar4);
  local_70 = 0;
  if (-1 < (int)local_6c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_78,8,local_6c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438e7620 FUN_1438e7620 body=89 status=ok
// SIG undefined FUN_1438e7620(void)

void FUN_1438e7620(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = UVariantSet::GetNumVariants(param_2);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_1438e6d10(param_1,param_2,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}



// FUNCTION 1438e7680 FUN_1438e7680 body=560 status=ok
// SIG undefined FUN_1438e7680(void)

void FUN_1438e7680(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  LPVOID pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  float *pfVar8;
  undefined4 uVar9;
  longlong local_68;
  uint local_60;
  uint local_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_res18[0] = param_3;
  uVar1 = hkaiVaultUtils::getNumHandPlantSegments(param_2,local_res18);
  uVar7 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  if (0 < (int)uVar1) {
    uVar6 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) {
      uVar6 = uVar7;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_68,uVar6,8);
  }
  uVar6 = uVar7;
  if (0 < (int)uVar1) {
    do {
      pfVar8 = &local_58;
      FUN_1438d3d90(param_2,local_res18,uVar6,&local_48,pfVar8);
      uVar9 = (undefined4)((ulonglong)pfVar8 >> 0x20);
      lVar3 = *(longlong *)(param_1 + 0x60);
      local_48 = local_48 + *(float *)(lVar3 + 0x80);
      fStack_44 = fStack_44 + *(float *)(lVar3 + 0x84);
      fStack_40 = fStack_40 + *(float *)(lVar3 + 0x88);
      fStack_3c = fStack_3c + *(float *)(lVar3 + 0x8c);
      local_58 = local_58 + *(float *)(lVar3 + 0x80);
      fStack_54 = fStack_54 + *(float *)(lVar3 + 0x84);
      fStack_50 = fStack_50 + *(float *)(lVar3 + 0x88);
      fStack_4c = fStack_4c + *(float *)(lVar3 + 0x8c);
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar2 + 0x58),0xa0);
      uVar4 = uVar7;
      if (lVar3 != 0) {
        uVar4 = FUN_143790f60(lVar3,&local_48,&local_58,0x3d23d70a,CONCAT44(uVar9,0xc),1);
      }
      if (local_60 == (local_5c & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,&local_68,8);
      }
      uVar5 = (int)uVar6 + 1;
      *(ulonglong *)(local_68 + (longlong)(int)local_60 * 8) = uVar4;
      local_60 = local_60 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)uVar1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
            (*(longlong **)(param_1 + 0x30),local_res8,local_res18[0],&local_68,&DAT_1467f0890,
             0xff6495ed,7,DAT_146b955e8);
  if (0 < (longlong)(int)uVar1) {
    do {
      FUN_14370c150(*(undefined8 *)(local_68 + uVar7 * 8));
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)(int)uVar1);
  }
  local_60 = 0;
  if (-1 < (int)local_5c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_68,8,local_5c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438e78b0 FUN_1438e78b0 body=99 status=ok
// SIG undefined FUN_1438e78b0(void)

longlong FUN_1438e78b0(undefined8 param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x68);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1438e6b80(lVar2,param_1);
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1438e7920 FUN_1438e7920 body=7 status=ok
// SIG undefined FUN_1438e7920(void)

undefined4 FUN_1438e7920(void)

{
  return DAT_146b955e8;
}



// FUNCTION 1438e7930 FUN_1438e7930 body=150 status=ok
// SIG undefined FUN_1438e7930(void)

void FUN_1438e7930(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar4 = 0;
  uVar2 = uVar4;
  for (uVar3 = uVar4; (lVar1 != 0 && ((int)uVar3 < *(int *)(lVar1 + 0x40)));
      uVar3 = (ulonglong)((int)uVar3 + 1)) {
    (**(code **)(*(longlong *)(param_1 + 0x40) + 8))
              ((longlong *)(param_1 + 0x40),*(undefined8 *)(*(longlong *)(lVar1 + 0x38) + uVar2));
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar2 = uVar2 + 8;
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  for (uVar2 = uVar4; (lVar1 != 0 && ((int)uVar2 < *(int *)(lVar1 + 0x50)));
      uVar2 = (ulonglong)((int)uVar2 + 1)) {
    (**(code **)(*(longlong *)(param_1 + 0x40) + 0x18))
              ((longlong *)(param_1 + 0x40),*(undefined8 *)(*(longlong *)(lVar1 + 0x48) + uVar4));
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar4 = uVar4 + 8;
  }
  return;
}



// FUNCTION 1438e79d0 FUN_1438e79d0 body=41 status=ok
// SIG undefined FUN_1438e79d0(void)

void FUN_1438e79d0(void)

{
  DAT_146b955e8 = FUN_14378a650(DAT_146b845b8,"AI/Traversal Annotations",FUN_1438e78b0);
  return;
}



// FUNCTION 1438e7a00 FUN_1438e7a00 body=91 status=ok
// SIG undefined FUN_1438e7a00(void)

void FUN_1438e7a00(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_res18 [16];
  
  uVar1 = UVariantSet::GetNumVariants(param_2);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    uVar3 = (ulonglong)uVar1;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                (*(longlong **)(param_1 + 0x30),local_res18,lVar2);
      lVar2 = lVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 1438e7a60 FUN_1438e7a60 body=9 status=ok
// SIG undefined FUN_1438e7a60(void)

void FUN_1438e7a60(longlong param_1)

{
  FUN_1438e7620(param_1 + -0x58);
  return;
}



// FUNCTION 1438e7a70 FUN_1438e7a70 body=9 status=ok
// SIG undefined FUN_1438e7a70(void)

void FUN_1438e7a70(longlong param_1)

{
  FUN_1438e7a00(param_1 + -0x58);
  return;
}



// FUNCTION 1438e7a80 FUN_1438e7a80 body=55 status=ok
// SIG undefined FUN_1438e7a80(void)

undefined8 * FUN_1438e7a80(undefined8 *param_1)

{
  FUN_1438eafc0();
  *param_1 = hkaiDynamicObstacleViewer::vftable;
  param_1[3] = hkaiDynamicObstacleViewer::vftable;
  param_1[0xb] = hkaiDynamicObstacleViewer::vftable;
  return param_1;
}



// FUNCTION 1438e7ab8 FUN_1438e7ab8 body=9 status=ok
// SIG undefined FUN_1438e7ab8(void)

void FUN_1438e7ab8(longlong param_1)

{
  FUN_1438e7ad0(param_1 + -0x18);
  return;
}



// FUNCTION 1438e7ac4 FUN_1438e7ac4 body=9 status=ok
// SIG undefined FUN_1438e7ac4(void)

void FUN_1438e7ac4(longlong param_1)

{
  FUN_1438e7ad0(param_1 + -0x58);
  return;
}



// FUNCTION 1438e7ad0 FUN_1438e7ad0 body=136 status=ok
// SIG undefined FUN_1438e7ad0(void)

longlong FUN_1438e7ad0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438eb0e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x68;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1438e7b60 FUN_1438e7b60 body=99 status=ok
// SIG undefined FUN_1438e7b60(void)

longlong FUN_1438e7b60(undefined8 param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x68);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1438e7a80(lVar2,param_1);
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1438e7bd0 FUN_1438e7bd0 body=7 status=ok
// SIG undefined FUN_1438e7bd0(void)

undefined4 FUN_1438e7bd0(void)

{
  return DAT_146b955f0;
}



// FUNCTION 1438e7be0 FUN_1438e7be0 body=41 status=ok
// SIG undefined FUN_1438e7be0(void)

void FUN_1438e7be0(void)

{
  DAT_146b955f0 = FUN_14378a650(DAT_146b845b8,"AI/Deprecated/Dynamic Obstacles",FUN_1438e7b60);
  return;
}



// FUNCTION 1438e7c10 FUN_1438e7c10 body=1149 status=ok
// SIG undefined FUN_1438e7c10(void)

/* WARNING: Removing unreachable block (ram,0x0001438e7cf0) */

void FUN_1438e7c10(longlong param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint local_res8;
  undefined1 local_res20 [8];
  longlong local_158;
  undefined1 local_148 [8];
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8 [4];
  undefined1 local_b8 [4];
  float fStack_b4;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    plVar8 = *(longlong **)(lVar2 + 0x38);
    local_130 = plVar8 + *(int *)(lVar2 + 0x40);
    if (plVar8 != local_130) {
      do {
        local_138 = *plVar8;
        lVar2 = *(longlong *)(param_1 + 0x48);
        local_res8 = 0;
        auVar1 = *(undefined1 (*) [16])(local_138 + 0x120);
        fVar3 = *(float *)(lVar2 + 0x80);
        fVar4 = *(float *)(lVar2 + 0x84);
        fVar5 = *(float *)(lVar2 + 0x88);
        fVar6 = *(float *)(lVar2 + 0x8c);
        fVar29 = auVar1._0_4_;
        fVar30 = auVar1._4_4_;
        fVar31 = auVar1._8_4_;
        local_140 = (longlong)*(int *)(local_138 + 0x260);
        fVar15 = fVar29 * fVar29;
        fVar18 = fVar30 * fVar30;
        local_158 = 0;
        auVar23._4_4_ = fVar18 + fVar15;
        auVar23._0_4_ = fVar18 + fVar15;
        auVar23._8_4_ = fVar18 + fVar15;
        auVar23._12_4_ = fVar18 + fVar15;
        fVar19 = fVar29 * fVar29 + fVar31 * fVar31;
        fVar20 = fVar31 * fVar31 + fVar29 * fVar29;
        auVar17._0_4_ = fVar19 + 0.0;
        auVar17._4_4_ = fVar19 + 0.0;
        auVar17._8_4_ = fVar20 + 0.0;
        auVar17._12_4_ = fVar20 + 0.0;
        uVar14 = -(uint)(fVar18 + fVar15 < auVar17._0_4_);
        fVar24 = (float)((uint)fVar29 & -(uint)(fVar18 + fVar15 < auVar17._8_4_));
        fVar22 = (float)(~-(uint)(fVar18 + fVar15 < auVar17._4_4_) & (uint)fVar29);
        fVar21 = (float)(~uVar14 & (uint)-fVar30 | (uint)-fVar31 & uVar14);
        auVar23 = maxps(auVar23,auVar17);
        auVar16._0_4_ = fVar22 * fVar29;
        auVar16._4_4_ = fVar24 * fVar30;
        auVar16._8_4_ = fVar21 * fVar31;
        auVar16._12_4_ = auVar1._12_4_ * 0.0;
        auVar17 = rsqrtps(auVar16,auVar23);
        fVar15 = auVar17._0_4_;
        fVar18 = auVar17._4_4_;
        fVar19 = auVar17._8_4_;
        fVar20 = auVar17._12_4_;
        fVar15 = (3.0 - auVar23._0_4_ * fVar15 * fVar15) * fVar15 * 0.5;
        fVar18 = (3.0 - auVar23._4_4_ * fVar18 * fVar18) * fVar18 * 0.5;
        fVar19 = (3.0 - auVar23._8_4_ * fVar19 * fVar19) * fVar19 * 0.5;
        fVar20 = (3.0 - auVar23._12_4_ * fVar20 * fVar20) * fVar20 * 0.5;
        fVar25 = fVar15 * fVar21;
        fVar26 = fVar18 * fVar22;
        fVar27 = fVar19 * fVar24;
        fVar28 = fVar20 * 0.0;
        if (0 < local_140) {
          do {
            lVar2 = *(longlong *)(*(longlong *)(local_138 + 600) + local_158 * 8);
            if ((*(char *)(lVar2 + 0x19) != '\0') && (0 < (int)*(uint *)(lVar2 + 0x78))) {
              uVar11 = 0;
              uVar12 = (ulonglong)*(uint *)(lVar2 + 0x78);
              lVar13 = 0;
              do {
                lVar9 = *(longlong *)(lVar2 + 0x70) + lVar13;
                FUN_143713830(&local_118,lVar2 + 0x20,lVar9);
                local_118 = local_118 + fVar3;
                fStack_114 = fStack_114 + fVar4;
                fStack_110 = fStack_110 + fVar5;
                fStack_10c = fStack_10c + fVar6;
                FUN_143713830(&local_128,lVar2 + 0x20,lVar9 + 0x10);
                local_128 = local_128 + fVar3;
                fStack_124 = fStack_124 + fVar4;
                fStack_120 = fStack_120 + fVar5;
                fStack_11c = fStack_11c + fVar6;
                (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa0))
                          (*(longlong **)(param_1 + 0x18),local_res20,
                           (longlong)(int)(local_res8 << 0x10) | uVar11,&local_118,&local_128,
                           0xff1e90ff,DAT_146b955f0);
                uVar11 = uVar11 + 1;
                lVar13 = lVar13 + 0x20;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            if (*(char *)(lVar2 + 0x18) != '\0') {
              lVar13 = (longlong)*(int *)(lVar2 + 0x68);
              uVar14 = 0;
              if (0 < lVar13) {
                lVar9 = 0;
                do {
                  lVar10 = *(longlong *)(lVar2 + 0x60) + lVar9;
                  FUN_143713830(&local_108,lVar2 + 0x20,lVar10);
                  local_108 = local_108 + fVar3;
                  fStack_104 = fStack_104 + fVar4;
                  fStack_100 = fStack_100 + fVar5;
                  fStack_fc = fStack_fc + fVar6;
                  fVar7 = *(float *)(lVar10 + 0xc);
                  lVar10 = 0xd;
                  local_e8 = fVar7 * fVar25 + local_108;
                  fStack_e4 = fVar7 * fVar26 + fStack_104;
                  fStack_e0 = fVar7 * fVar27 + fStack_100;
                  fStack_dc = fVar7 * fVar28 + fStack_fc;
                  local_d8 = 0.0;
                  fStack_d4 = 0.0;
                  fStack_d0 = 0.0;
                  fStack_cc = 0.0;
                  do {
                    local_d8 = local_d8 + 0.5235988;
                    fStack_d4 = fStack_d4 + 0.5235988;
                    fStack_d0 = fStack_d0 + 0.5235988;
                    fStack_cc = fStack_cc + 0.5235988;
                    FUN_143716280(&local_d8,local_c8,local_b8);
                    local_f8 = (fStack_b4 * fVar25 +
                               local_c8[0] * (fVar31 * fVar22 - auVar16._4_4_) * fVar15) * fVar7 +
                               local_108;
                    fStack_f4 = (fStack_b4 * fVar26 +
                                local_c8[0] * (fVar29 * fVar24 - auVar16._8_4_) * fVar18) * fVar7 +
                                fStack_104;
                    fStack_f0 = (fStack_b4 * fVar27 +
                                local_c8[0] * (fVar30 * fVar21 - auVar16._0_4_) * fVar19) * fVar7 +
                                fStack_100;
                    fStack_ec = (fStack_b4 * fVar28 +
                                local_c8[0] * (auVar1._12_4_ * 0.0 - auVar16._12_4_) * fVar20) *
                                fVar7 + fStack_fc;
                    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa0))
                              (*(longlong **)(param_1 + 0x18),local_148,
                               (longlong)(int)(uVar14 | (local_res8 | 0xffff8000) << 0x10),&local_e8
                               ,&local_f8,0xff1e90ff,DAT_146b955f0);
                    local_e8 = local_f8;
                    fStack_e4 = fStack_f4;
                    fStack_e0 = fStack_f0;
                    fStack_dc = fStack_ec;
                    lVar10 = lVar10 + -1;
                  } while (lVar10 != 0);
                  uVar14 = uVar14 + 1;
                  lVar9 = lVar9 + 0x20;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              }
            }
            local_res8 = local_res8 + 1;
            local_158 = local_158 + 1;
          } while (local_158 < local_140);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != local_130);
    }
  }
  return;
}



// FUNCTION 1438e8090 FUN_1438e8090 body=85 status=ok
// SIG undefined FUN_1438e8090(void)

undefined8 * FUN_1438e8090(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = hkaiCollisionAvoidanceCharacterViewer::vftable;
  param_1[8] = 0;
  param_1[10] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  *(undefined2 *)(param_1 + 9) = 0x100;
  return param_1;
}



// FUNCTION 1438e80f0 FUN_1438e80f0 body=60 status=ok
// SIG undefined FUN_1438e80f0(void)

void FUN_1438e80f0(undefined8 *param_1)

{
  *param_1 = hkaiCollisionAvoidanceCharacterViewer::vftable;
  if (param_1[10] != 0) {
    FUN_14370c150();
  }
  if (param_1[8] != 0) {
    FUN_14370c150();
  }
  FUN_143787880(param_1);
  return;
}



// FUNCTION 1438e8130 FUN_1438e8130 body=120 status=ok
// SIG undefined FUN_1438e8130(void)

longlong FUN_1438e8130(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1438e80f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x58);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 1438e81b0 FUN_1438e81b0 body=169 status=ok
// SIG undefined FUN_1438e81b0(void)

undefined8 FUN_1438e81b0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  plVar6 = plVar7 + (int)param_1[1];
  while( true ) {
    if (plVar7 == plVar6) {
      return 0;
    }
    plVar1 = (longlong *)*plVar7;
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    iVar2 = hkString::strCmp(&DAT_145c57600,uVar3);
    if (iVar2 == 0) break;
    plVar7 = plVar7 + 1;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar4 + 0x58),0x58);
  if (lVar5 == 0) {
    return 0;
  }
  plVar6 = plVar1 + -3;
  if (plVar1 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  uVar3 = FUN_1438e8090(lVar5,plVar6);
  return uVar3;
}



// FUNCTION 1438e8260 FUN_1438e8260 body=7 status=ok
// SIG undefined FUN_1438e8260(void)

undefined4 FUN_1438e8260(void)

{
  return DAT_146b95600;
}



// FUNCTION 1438e8270 FUN_1438e8270 body=41 status=ok
// SIG undefined FUN_1438e8270(void)

void FUN_1438e8270(void)

{
  DAT_146b95600 = FUN_14378a650(DAT_146b845b8,"AI/Collision Avoidance/Characters",FUN_1438e81b0);
  return;
}



// FUNCTION 1438e82a0 FUN_1438e82a0 body=1186 status=ok
// SIG undefined FUN_1438e82a0(void)

/* WARNING: Removing unreachable block (ram,0x0001438e8380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438e82a0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 unaff_XMM12 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  longlong *local_1d8;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  float fStack_16c;
  undefined1 *local_168;
  undefined4 local_160;
  uint local_15c;
  undefined1 local_158 [176];
  
  iVar13 = 0;
  plVar10 = *(longlong **)(param_1[10] + 0x68);
  local_1d8 = plVar10 + *(int *)(param_1[10] + 0x70);
  if (plVar10 != local_1d8) {
    uVar26 = 0x80000000;
    uVar27 = 0;
    uVar28 = 0;
    fVar29 = 0.0;
    local_178 = 0x80000000;
    uStack_174 = 0;
    uStack_170 = 0;
    fStack_16c = 0.0;
    do {
      lVar1 = *plVar10;
      auVar19 = *(undefined1 (*) [16])(lVar1 + 0x40);
      fVar3 = auVar19._0_4_;
      fVar4 = auVar19._4_4_;
      fVar5 = auVar19._8_4_;
      fVar6 = auVar19._12_4_;
      plVar12 = *(longlong **)(lVar1 + 0x50);
      fVar20 = fVar3 * fVar3;
      fVar21 = fVar4 * fVar4;
      local_1e0 = plVar12 + *(int *)(lVar1 + 0x58);
      fVar17 = fVar3 * fVar3 + fVar5 * fVar5;
      uVar14 = -(uint)(fVar21 + fVar20 < fVar17 + 0.0);
      uVar15 = -(uint)(fVar21 + fVar20 < fVar17 + 0.0);
      uVar16 = -(uint)(fVar21 + fVar20 < fVar5 * fVar5 + fVar3 * fVar3 + 0.0);
      fVar31 = (float)(~uVar14 & ((uint)fVar4 ^ uVar26) | ((uint)fVar5 ^ uVar26) & uVar14);
      fVar32 = (float)(~uVar15 & ((uint)fVar3 ^ uVar27) | uVar27 & uVar15);
      fVar33 = (float)(~uVar16 & uVar28 | ((uint)fVar3 ^ uVar28) & uVar16);
      fVar17 = fVar31 * fVar31;
      fVar20 = fVar32 * fVar32;
      auVar18._8_4_ = fVar33 * fVar33;
      auVar18._4_4_ = auVar18._8_4_;
      auVar18._0_4_ = auVar18._8_4_;
      auVar18._12_4_ = auVar18._8_4_;
      fVar22 = fVar20 + fVar17 + auVar18._8_4_;
      fVar23 = fVar20 + fVar17 + auVar18._8_4_;
      fVar24 = fVar20 + fVar17 + auVar18._8_4_;
      fVar25 = fVar20 + fVar17 + auVar18._8_4_;
      auVar19._4_4_ = fVar23;
      auVar19._0_4_ = fVar22;
      auVar19._8_4_ = fVar24;
      auVar19._12_4_ = fVar25;
      auVar19 = rsqrtps(auVar18,auVar19);
      fVar17 = auVar19._0_4_;
      fVar20 = auVar19._4_4_;
      fVar21 = auVar19._8_4_;
      fVar30 = auVar19._12_4_;
      fVar31 = fVar31 * (float)(~-(uint)(fVar22 <= 0.0) &
                               (uint)((3.0 - fVar22 * fVar17 * fVar17) * fVar17 * 0.5));
      fVar32 = fVar32 * (float)(~-(uint)(fVar23 <= 0.0) &
                               (uint)((3.0 - fVar23 * fVar20 * fVar20) * fVar20 * 0.5));
      fVar33 = fVar33 * (float)(~-(uint)(fVar24 <= 0.0) &
                               (uint)((3.0 - fVar24 * fVar21 * fVar21) * fVar21 * 0.5));
      fVar17 = fVar29 * (float)(~-(uint)(fVar25 <= 0.0) &
                               (uint)((3.0 - fVar25 * fVar30 * fVar30) * fVar30 * 0.5));
      if (plVar12 != local_1e0) {
        auVar7._8_4_ = 0x41800000;
        auVar7._0_8_ = 0x4180000041800000;
        auVar7._12_4_ = 0x41800000;
        unaff_XMM12 = rcpps(unaff_XMM12,auVar7);
        do {
          plVar2 = (longlong *)param_1[8];
          lVar1 = *plVar12;
          if (plVar2 == (longlong *)0x0) {
            uVar8 = hkColor::getPaletteColor(iVar13,0xff);
          }
          else {
            uVar8 = (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
          }
          local_1c8 = fVar3 * 0.1 + *(float *)(lVar1 + 0x30);
          fStack_1c4 = fVar4 * 0.1 + *(float *)(lVar1 + 0x34);
          fStack_1c0 = fVar5 * 0.1 + *(float *)(lVar1 + 0x38);
          fStack_1bc = fVar6 * 0.1 + *(float *)(lVar1 + 0x3c);
          if ((char)param_1[9] != '\0') {
            local_15c = 0x80000080;
            local_160 = 1;
            local_158[0] = 0;
            local_1f8 = fVar3 * 4.0 + *(float *)(lVar1 + 0x30);
            fStack_1f4 = fVar4 * 4.0 + *(float *)(lVar1 + 0x34);
            fStack_1f0 = fVar5 * 4.0 + *(float *)(lVar1 + 0x38);
            fStack_1ec = fVar6 * 4.0 + *(float *)(lVar1 + 0x3c);
            local_168 = local_158;
            hkStringBuf::printf((char *)&local_168,&DAT_145b8e1f0,*(undefined8 *)(lVar1 + 0x18));
            (**(code **)(*(longlong *)param_1[3] + 200))
                      ((longlong *)param_1[3],local_res18,0,local_168,&local_1f8,uVar8,DAT_146b95600
                      );
            local_160 = 0;
            if (-1 < (int)local_15c) {
              FUN_143702e10(&PTR_vftable_1467f0638,local_168,1,local_15c & 0x3fffffff);
            }
          }
          fVar29 = *(float *)(lVar1 + 0xa0);
          iVar11 = 1;
          local_1f8 = fVar29 * fVar31 + local_1c8;
          fStack_1f4 = fVar29 * fVar32 + fStack_1c4;
          fStack_1f0 = fVar29 * fVar33 + fStack_1c0;
          fStack_1ec = fVar29 * fVar17 + fStack_1bc;
          fVar20 = (2.0 - unaff_XMM12._0_4_ * 16.0) * unaff_XMM12._0_4_ * _DAT_1467f0a30;
          fVar21 = (2.0 - unaff_XMM12._4_4_ * 16.0) * unaff_XMM12._4_4_ * fRam00000001467f0a34;
          fVar30 = (2.0 - unaff_XMM12._8_4_ * 16.0) * unaff_XMM12._8_4_ * fRam00000001467f0a38;
          fVar22 = (2.0 - unaff_XMM12._12_4_ * 16.0) * unaff_XMM12._12_4_ * fRam00000001467f0a3c;
          do {
            fStack_19c = (float)iVar11;
            local_1a8 = fStack_19c * fVar20;
            fStack_1a4 = fStack_19c * fVar21;
            fStack_1a0 = fStack_19c * fVar30;
            fStack_19c = fStack_19c * fVar22;
            FUN_143716280(&local_1a8,&local_188,&local_198);
            plVar2 = (longlong *)param_1[3];
            local_1b8 = local_198 * fVar29 * fVar31 + local_1c8 +
                        local_188 * fVar29 * (fVar33 * fVar4 - fVar5 * fVar32);
            fStack_1b4 = fStack_194 * fVar29 * fVar32 + fStack_1c4 +
                         fStack_184 * fVar29 * (fVar31 * fVar5 - fVar3 * fVar33);
            fStack_1b0 = fStack_190 * fVar29 * fVar33 + fStack_1c0 +
                         fStack_180 * fVar29 * (fVar32 * fVar3 - fVar4 * fVar31);
            fStack_1ac = fStack_18c * fVar29 * fVar17 + fStack_1bc +
                         fStack_17c * fVar29 * (fVar17 * fVar6 - fVar6 * fVar17);
            uVar9 = (**(code **)(*param_1 + 0x10))(param_1);
            (**(code **)(*plVar2 + 0xa0))(plVar2,local_res20,0,&local_1f8,&local_1b8,uVar8,uVar9);
            iVar11 = iVar11 + 1;
            local_1f8 = local_1b8;
            fStack_1f4 = fStack_1b4;
            fStack_1f0 = fStack_1b0;
            fStack_1ec = fStack_1ac;
          } while (iVar11 < 0x11);
          if (*(char *)((longlong)param_1 + 0x49) != '\0') {
            plVar2 = (longlong *)param_1[3];
            uVar9 = (**(code **)(*param_1 + 0x10))(param_1);
            (**(code **)(*plVar2 + 0xa8))
                      (plVar2,local_1e8,0,&local_1c8,lVar1 + 0x40,uVar8,1,0,uVar9);
          }
          iVar13 = iVar13 + 1;
          plVar12 = plVar12 + 1;
          uVar26 = local_178;
          uVar27 = uStack_174;
          uVar28 = uStack_170;
          fVar29 = fStack_16c;
        } while (plVar12 != local_1e0);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != local_1d8);
  }
  return;
}



// FUNCTION 1438e8750 FUN_1438e8750 body=34 status=ok
// SIG undefined FUN_1438e8750(void)

longlong FUN_1438e8750(longlong param_1)

{
  FUN_143710920();
  *(undefined4 *)(param_1 + 0x10) = 0x7fffffff;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 1438e8780 FUN_1438e8780 body=79 status=ok
// SIG undefined FUN_1438e8780(void)

undefined8 * FUN_1438e8780(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = hkaiCollisionAvoidanceObstacleViewer::vftable;
  param_1[8] = 0;
  param_1[9] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  return param_1;
}



// FUNCTION 1438e87d0 FUN_1438e87d0 body=60 status=ok
// SIG undefined FUN_1438e87d0(void)

void FUN_1438e87d0(undefined8 *param_1)

{
  *param_1 = hkaiCollisionAvoidanceObstacleViewer::vftable;
  if (param_1[9] != 0) {
    FUN_14370c150();
  }
  if (param_1[8] != 0) {
    FUN_14370c150();
  }
  FUN_143787880(param_1);
  return;
}



// FUNCTION 1438e8810 FUN_1438e8810 body=120 status=ok
// SIG undefined FUN_1438e8810(void)

longlong FUN_1438e8810(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1438e87d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x50);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
    }
  }
  return param_1;
}



// FUNCTION 1438e8890 FUN_1438e8890 body=12 status=ok
// SIG undefined FUN_1438e8890(void)

void FUN_1438e8890(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}



// FUNCTION 1438e88a0 FUN_1438e88a0 body=169 status=ok
// SIG undefined FUN_1438e88a0(void)

undefined8 FUN_1438e88a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  plVar6 = plVar7 + (int)param_1[1];
  while( true ) {
    if (plVar7 == plVar6) {
      return 0;
    }
    plVar1 = (longlong *)*plVar7;
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    iVar2 = hkString::strCmp(&DAT_145c57600,uVar3);
    if (iVar2 == 0) break;
    plVar7 = plVar7 + 1;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar4 + 0x58),0x50);
  if (lVar5 == 0) {
    return 0;
  }
  plVar6 = plVar1 + -3;
  if (plVar1 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  uVar3 = FUN_1438e8780(lVar5,plVar6);
  return uVar3;
}



// FUNCTION 1438e8950 FUN_1438e8950 body=7 status=ok
// SIG undefined FUN_1438e8950(void)

undefined4 FUN_1438e8950(void)

{
  return DAT_146b95608;
}



// FUNCTION 1438e8960 FUN_1438e8960 body=41 status=ok
// SIG undefined FUN_1438e8960(void)

void FUN_1438e8960(void)

{
  DAT_146b95608 = FUN_14378a650(DAT_146b845b8,"AI/Collision Avoidance/Obstacles",FUN_1438e88a0);
  return;
}



// FUNCTION 1438e8990 FUN_1438e8990 body=938 status=ok
// SIG undefined FUN_1438e8990(void)

void FUN_1438e8990(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  longlong *local_res20;
  undefined4 *local_148;
  uint local_140;
  uint local_13c;
  undefined4 local_138 [2];
  longlong local_130;
  int local_128;
  uint local_124;
  longlong local_120;
  int local_118;
  uint local_114;
  undefined8 local_110;
  undefined4 local_108;
  uint local_104;
  undefined8 *local_f8;
  longlong *local_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 local_c8 [144];
  
  iVar7 = 0;
  local_130 = 0;
  local_128 = 0;
  local_124 = 0x80000000;
  local_120 = 0;
  local_118 = 0;
  local_114 = 0x80000000;
  FUN_1438e8750(&local_110);
  local_d8 = DAT_1467f08d0;
  uStack_d4 = uRam00000001467f08d4;
  uStack_d0 = uRam00000001467f08d8;
  uStack_cc = uRam00000001467f08dc;
  uStack_e0 = uRam00000001467f08d8 ^ 0x80000000;
  uStack_dc = uRam00000001467f08dc ^ 0x80000000;
  local_e8 = DAT_1467f08d0 ^ 0x80000000;
  uStack_e4 = uRam00000001467f08d4 ^ 0x80000000;
  local_res20 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x68);
  local_f0 = local_res20 + *(int *)(*(longlong *)(param_1 + 0x48) + 0x70);
  if (local_res20 != local_f0) {
    do {
      puVar9 = *(undefined8 **)(*local_res20 + 0x70);
      puVar8 = puVar9 + *(int *)(*local_res20 + 0x78);
      local_f8 = puVar8;
      if (puVar9 != puVar8) {
        do {
          plVar1 = *(longlong **)(param_1 + 0x40);
          plVar2 = (longlong *)*puVar9;
          if (plVar1 == (longlong *)0x0) {
            uVar3 = hkColor::getPaletteColor(iVar7,0xff);
          }
          else {
            uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,plVar2);
          }
          local_128 = 0;
          local_118 = 0;
          FUN_1438e8890(&local_110);
          (**(code **)(*plVar2 + 0x28))(plVar2,&local_e8,&local_130);
          lVar6 = (longlong)local_128 * 0x20 + local_130;
          for (lVar5 = local_130; lVar5 != lVar6; lVar5 = lVar5 + 0x20) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa0))
                      (*(longlong **)(param_1 + 0x18),local_res8,0,lVar5,lVar5 + 0x10,uVar3,
                       DAT_146b95608);
          }
          lVar6 = (longlong)local_118 * 0x20 + local_120;
          for (lVar5 = local_120; lVar5 != lVar6; lVar5 = lVar5 + 0x20) {
            FUN_1437913d0(local_c8,lVar5,1);
            local_148 = local_138;
            local_140 = 0;
            local_13c = 0x80000001;
            uVar4 = FUN_143703a50();
            if (local_140 == (local_13c & 0x3fffffff)) {
              FUN_14370c460(uVar4,&local_148,8);
            }
            *(undefined1 **)(local_148 + (longlong)(int)local_140 * 2) = local_c8;
            local_140 = local_140 + 1;
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf0))
                      (*(longlong **)(param_1 + 0x18),local_res18,0,&local_148,&DAT_1467f0890,uVar3,
                       DAT_146b95608);
            uVar4 = FUN_143703a50();
            local_140 = 0;
            if (-1 < (int)local_13c) {
              FUN_143702e10(uVar4,local_148,8,local_13c & 0x3fffffff);
            }
            local_148 = (undefined4 *)0x0;
            local_13c = 0x80000000;
            FUN_1437905e0(local_c8);
            puVar8 = local_f8;
          }
          iVar7 = iVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar8);
      }
      local_res20 = local_res20 + 1;
    } while (local_res20 != local_f0);
  }
  uVar4 = FUN_143703a50();
  local_108 = 0;
  if (-1 < (int)local_104) {
    FUN_143702e10(uVar4,local_110,0x10,local_104 & 0x3fffffff);
  }
  local_110 = 0;
  local_104 = 0x80000000;
  uVar4 = FUN_143703a50();
  local_118 = 0;
  if (-1 < (int)local_114) {
    FUN_143702e10(uVar4,local_120,0x20,local_114 & 0x3fffffff);
  }
  local_120 = 0;
  local_114 = 0x80000000;
  uVar4 = FUN_143703a50();
  local_128 = 0;
  if (-1 < (int)local_124) {
    FUN_143702e10(uVar4,local_130,0x20,local_124 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438e8d40 FUN_1438e8d40 body=79 status=ok
// SIG undefined FUN_1438e8d40(void)

undefined8 * FUN_1438e8d40(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = hkaiNavigatorViewer::vftable;
  param_1[8] = 0;
  param_1[9] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  return param_1;
}



// FUNCTION 1438e8d90 FUN_1438e8d90 body=60 status=ok
// SIG undefined FUN_1438e8d90(void)

void FUN_1438e8d90(undefined8 *param_1)

{
  *param_1 = hkaiNavigatorViewer::vftable;
  if (param_1[9] != 0) {
    FUN_14370c150();
  }
  if (param_1[8] != 0) {
    FUN_14370c150();
  }
  FUN_143787880(param_1);
  return;
}



// FUNCTION 1438e8dd0 FUN_1438e8dd0 body=120 status=ok
// SIG undefined FUN_1438e8dd0(void)

longlong FUN_1438e8dd0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1438e8d90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x50);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
    }
  }
  return param_1;
}



// FUNCTION 1438e8e50 FUN_1438e8e50 body=169 status=ok
// SIG undefined FUN_1438e8e50(void)

undefined8 FUN_1438e8e50(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  plVar6 = plVar7 + (int)param_1[1];
  while( true ) {
    if (plVar7 == plVar6) {
      return 0;
    }
    plVar1 = (longlong *)*plVar7;
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    iVar2 = hkString::strCmp(&DAT_145c57600,uVar3);
    if (iVar2 == 0) break;
    plVar7 = plVar7 + 1;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar4 + 0x58),0x50);
  if (lVar5 == 0) {
    return 0;
  }
  plVar6 = plVar1 + -3;
  if (plVar1 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  uVar3 = FUN_1438e8d40(lVar5,plVar6);
  return uVar3;
}



// FUNCTION 1438e8f00 FUN_1438e8f00 body=7 status=ok
// SIG undefined FUN_1438e8f00(void)

undefined4 FUN_1438e8f00(void)

{
  return DAT_146b95610;
}



// FUNCTION 1438e8f10 FUN_1438e8f10 body=41 status=ok
// SIG undefined FUN_1438e8f10(void)

void FUN_1438e8f10(void)

{
  DAT_146b95610 = FUN_14378a650(DAT_146b845b8,"AI/Navigators/Navigators",FUN_1438e8e50);
  return;
}



// FUNCTION 1438e8f40 FUN_1438e8f40 body=1037 status=ok
// SIG undefined FUN_1438e8f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438e8f40(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  float *in_stack_fffffffffffffed8;
  undefined4 uVar15;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 *local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [80];
  
  iVar12 = 0;
  puVar10 = *(undefined8 **)(*(longlong *)(param_1 + 0x48) + 0x38);
  local_d8 = puVar10 + *(int *)(*(longlong *)(param_1 + 0x48) + 0x40);
  if (puVar10 != local_d8) {
    do {
      local_e0 = *puVar10;
      lVar7 = UFoliageType_InstancedStaticMesh::GetStaticMesh(local_e0);
      puVar13 = *(undefined8 **)(lVar7 + 0x20);
      puVar1 = puVar13 + *(int *)(lVar7 + 0x28);
      for (; puVar13 != puVar1; puVar13 = puVar13 + 1) {
        plVar2 = *(longlong **)(param_1 + 0x40);
        uVar3 = *puVar13;
        if (plVar2 == (longlong *)0x0) {
          uVar5 = hkColor::getPaletteColor(iVar12,0xff);
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,uVar3);
        }
        fVar14 = (float)FUN_14385d670(uVar3);
        cVar4 = FUN_14385da40(uVar3);
        uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
        if (cVar4 != '\0') {
          puVar8 = (undefined4 *)FCulture::GetName(uVar3);
          local_b8 = *puVar8;
          uStack_b4 = puVar8[1];
          uStack_b0 = puVar8[2];
          uStack_ac = puVar8[3];
          in_stack_fffffffffffffed8 = (float *)CONCAT44(uVar15,uVar5);
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))
                    (*(longlong **)(param_1 + 0x18),local_res8,0,&local_b8,in_stack_fffffffffffffed8
                     ,1,fVar14,DAT_146b95610);
        }
        iVar6 = FWmfMediaTextureSample::GetFormat(uVar3);
        iVar11 = 0;
        if (0 < iVar6) {
          do {
            uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
            FUN_14385d7f0(uVar3,iVar11);
            in_stack_fffffffffffffed8 = (float *)CONCAT44(uVar15,uVar5);
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))
                      (*(longlong **)(param_1 + 0x18),local_res18,0,local_a8,
                       in_stack_fffffffffffffed8,1,fVar14 * 0.5,DAT_146b95610);
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar6);
        }
        piVar9 = (int *)UDynamicEntryBox::GetAllEntries(uVar3);
        if (*piVar9 == 0) {
          local_c8 = (float)piVar9[0xc] * _DAT_1467f0710;
          fStack_c4 = (float)piVar9[0xd] * fRam00000001467f0714;
          fStack_c0 = (float)piVar9[0xe] * fRam00000001467f0718;
          fStack_bc = (float)piVar9[0xf] * fRam00000001467f071c;
          in_stack_fffffffffffffed8 = &local_c8;
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa8))
                    (*(longlong **)(param_1 + 0x18),local_res20,0,piVar9 + 4,
                     in_stack_fffffffffffffed8,uVar5,1,0,DAT_146b95610);
        }
        iVar12 = iVar12 + 1;
      }
      lVar7 = UGeometryCacheComponent::GetGeometryCache(local_e0);
      puVar13 = *(undefined8 **)(lVar7 + 0x20);
      puVar1 = puVar13 + *(int *)(lVar7 + 0x28);
      for (; puVar13 != puVar1; puVar13 = puVar13 + 1) {
        plVar2 = *(longlong **)(param_1 + 0x40);
        uVar3 = *puVar13;
        if (plVar2 == (longlong *)0x0) {
          uVar5 = hkColor::getPaletteColor(iVar12,0xff);
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar3);
        }
        cVar4 = FUN_1438607c0(uVar3);
        uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
        if (cVar4 != '\0') {
          puVar8 = (undefined4 *)FCulture::GetName(uVar3);
          local_98 = *puVar8;
          uStack_94 = puVar8[1];
          uStack_90 = puVar8[2];
          uStack_8c = puVar8[3];
          in_stack_fffffffffffffed8 = (float *)CONCAT44(uVar15,uVar5);
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))
                    (*(longlong **)(param_1 + 0x18),local_f0,0,&local_98,in_stack_fffffffffffffed8,1
                     ,0x3f800000,DAT_146b95610);
        }
        iVar6 = FWmfMediaTextureSample::GetFormat(uVar3);
        iVar11 = 0;
        if (0 < iVar6) {
          do {
            uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
            hkaiVolumeNavigator::getGoalPositionWorld(uVar3,iVar11);
            in_stack_fffffffffffffed8 = (float *)CONCAT44(uVar15,uVar5);
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))
                      (*(longlong **)(param_1 + 0x18),local_ec,0,local_88,in_stack_fffffffffffffed8,
                       1,0x3f000000,DAT_146b95610);
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar6);
        }
        piVar9 = (int *)FUN_1407ffb90(uVar3);
        if (*piVar9 == 0) {
          local_c8 = (float)piVar9[0xc] * _DAT_1467f0710;
          fStack_c4 = (float)piVar9[0xd] * fRam00000001467f0714;
          fStack_c0 = (float)piVar9[0xe] * fRam00000001467f0718;
          fStack_bc = (float)piVar9[0xf] * fRam00000001467f071c;
          in_stack_fffffffffffffed8 = &local_c8;
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa8))
                    (*(longlong **)(param_1 + 0x18),local_e8,0,piVar9 + 4,in_stack_fffffffffffffed8,
                     uVar5,1,0,DAT_146b95610);
        }
        iVar12 = iVar12 + 1;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != local_d8);
  }
  return;
}



// FUNCTION 1438e9350 FUN_1438e9350 body=82 status=ok
// SIG undefined FUN_1438e9350(void)

undefined8 * FUN_1438e9350(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = hkaiNavigatorPathsViewer::vftable;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  return param_1;
}



// FUNCTION 1438e93b0 FUN_1438e93b0 body=60 status=ok
// SIG undefined FUN_1438e93b0(void)

void FUN_1438e93b0(undefined8 *param_1)

{
  *param_1 = hkaiNavigatorPathsViewer::vftable;
  if (param_1[10] != 0) {
    FUN_14370c150();
  }
  if (param_1[9] != 0) {
    FUN_14370c150();
  }
  FUN_143787880(param_1);
  return;
}



// FUNCTION 1438e93f0 FUN_1438e93f0 body=120 status=ok
// SIG undefined FUN_1438e93f0(void)

longlong FUN_1438e93f0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1438e93b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x58);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 1438e9470 FUN_1438e9470 body=169 status=ok
// SIG undefined FUN_1438e9470(void)

undefined8 FUN_1438e9470(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  plVar6 = plVar7 + (int)param_1[1];
  while( true ) {
    if (plVar7 == plVar6) {
      return 0;
    }
    plVar1 = (longlong *)*plVar7;
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    iVar2 = hkString::strCmp(&DAT_145c57600,uVar3);
    if (iVar2 == 0) break;
    plVar7 = plVar7 + 1;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar4 + 0x58),0x58);
  if (lVar5 == 0) {
    return 0;
  }
  plVar6 = plVar1 + -3;
  if (plVar1 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  uVar3 = FUN_1438e9350(lVar5,plVar6);
  return uVar3;
}



// FUNCTION 1438e9520 FUN_1438e9520 body=241 status=ok
// SIG undefined FUN_1438e9520(void)

void FUN_1438e9520(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  undefined1 local_68 [16];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  
  local_58[3] = param_3[3];
  local_48[3] = param_3[7];
  local_58[0] = *param_3;
  local_58[1] = param_3[1];
  local_58[2] = param_3[2];
  lVar1 = 0;
  local_48[0] = param_3[4];
  local_48[1] = param_3[5];
  local_48[2] = param_3[6];
  do {
    local_38[0] = local_58[0];
    local_38[1] = local_58[1];
    local_38[2] = local_58[2];
    *(undefined4 *)((longlong)local_38 + lVar1) = *(undefined4 *)((longlong)local_48 + lVar1);
    local_28[0] = local_48[0];
    local_28[1] = local_48[1];
    local_28[2] = local_48[2];
    *(undefined4 *)((longlong)local_28 + lVar1) = *(undefined4 *)((longlong)local_58 + lVar1);
    local_38[3] = local_58[3];
    local_28[3] = local_48[3];
    (**(code **)(*param_2 + 0xa0))(param_2,local_res18,param_1,local_58,local_38,param_4,param_5);
    (**(code **)(*param_2 + 0xa0))(param_2,local_68,param_1,local_48,local_28,param_4,param_5);
    lVar1 = lVar1 + 4;
  } while (lVar1 < 0xc);
  return;
}



// FUNCTION 1438e9620 FUN_1438e9620 body=7 status=ok
// SIG undefined FUN_1438e9620(void)

undefined4 FUN_1438e9620(void)

{
  return DAT_146b95618;
}



// FUNCTION 1438e9630 FUN_1438e9630 body=41 status=ok
// SIG undefined FUN_1438e9630(void)

void FUN_1438e9630(void)

{
  DAT_146b95618 = FUN_14378a650(DAT_146b845b8,"AI/Navigators/Paths",FUN_1438e9470);
  return;
}



// FUNCTION 1438e9660 FUN_1438e9660 body=833 status=ok
// SIG undefined FUN_1438e9660(void)

void FUN_1438e9660(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined8 *local_res20;
  longlong local_60;
  int local_58;
  uint local_54;
  undefined8 *local_50;
  int local_48;
  uint local_44;
  
  local_60 = 0;
  local_58 = 0;
  local_54 = 0x80000000;
  local_res20 = *(undefined8 **)(*(longlong *)(param_1 + 0x50) + 0x38);
  iVar14 = 0;
  puVar1 = local_res20 + *(int *)(*(longlong *)(param_1 + 0x50) + 0x40);
  for (; local_res20 != puVar1; local_res20 = local_res20 + 1) {
    uVar3 = *local_res20;
    lVar7 = UFoliageType_InstancedStaticMesh::GetStaticMesh(uVar3);
    puVar11 = *(undefined8 **)(lVar7 + 0x20);
    puVar2 = puVar11 + *(int *)(lVar7 + 0x28);
    for (; puVar11 != puVar2; puVar11 = puVar11 + 1) {
      plVar4 = *(longlong **)(param_1 + 0x48);
      uVar5 = *puVar11;
      if (plVar4 == (longlong *)0x0) {
        uVar6 = hkColor::getPaletteColor(iVar14,0xff);
      }
      else {
        uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,uVar5);
      }
      piVar8 = (int *)UDynamicEntryBox::GetAllEntries(uVar5);
      if (*piVar8 == 0) {
        local_58 = 0;
        FUN_14385c500(uVar5,&local_60);
        iVar13 = 0;
        if (0 < local_58 + -1) {
          do {
            iVar9 = iVar13 + 1;
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa0))
                      (*(longlong **)(param_1 + 0x18),&local_res8,0,
                       (longlong)iVar13 * 0x10 + local_60,(longlong)iVar9 * 0x10 + local_60,uVar6,
                       DAT_146b95618);
            iVar13 = iVar9;
          } while (iVar9 < local_58 + -1);
        }
      }
      iVar14 = iVar14 + 1;
    }
    lVar7 = UGeometryCacheComponent::GetGeometryCache(uVar3);
    puVar11 = *(undefined8 **)(lVar7 + 0x20);
    puVar2 = puVar11 + *(int *)(lVar7 + 0x28);
    for (; puVar11 != puVar2; puVar11 = puVar11 + 1) {
      plVar4 = *(longlong **)(param_1 + 0x48);
      uVar3 = *puVar11;
      if (plVar4 == (longlong *)0x0) {
        uVar6 = hkColor::getPaletteColor(iVar14,0xff);
      }
      else {
        uVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar3);
      }
      piVar8 = (int *)FUN_1407ffb90(uVar3);
      if (*piVar8 == 0) {
        local_58 = 0;
        FUN_14385f7e0(uVar3,&local_60);
        iVar13 = 0;
        if (0 < local_58 + -1) {
          do {
            iVar9 = iVar13 + 1;
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa0))
                      (*(longlong **)(param_1 + 0x18),&local_res18,0,
                       (longlong)iVar13 * 0x10 + local_60,(longlong)iVar9 * 0x10 + local_60,uVar6,
                       DAT_146b95618);
            iVar13 = iVar9;
          } while (iVar9 < local_58 + -1);
        }
        if (*(char *)(param_1 + 0x40) != '\0') {
          local_50 = (undefined8 *)0x0;
          local_48 = 0;
          local_44 = 0x80000000;
          FUN_14385f7b0(uVar3,&local_50);
          puVar12 = local_50 + (longlong)local_48 * 4;
          for (puVar10 = local_50; puVar10 != puVar12; puVar10 = puVar10 + 4) {
            FUN_1438e9520(0,*(undefined8 *)(param_1 + 0x18),puVar10,uVar6,DAT_146b95618);
          }
          local_48 = 0;
          if (-1 < (int)local_44) {
            FUN_143702e10(&PTR_vftable_1467f0638,local_50,0x20,local_44 & 0x3fffffff);
          }
          local_50 = (undefined8 *)0x0;
          local_44 = 0x80000000;
        }
      }
      iVar14 = iVar14 + 1;
    }
  }
  local_58 = 0;
  if (-1 < (int)local_54) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_60,0x10,local_54 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438e99b0 FUN_1438e99b0 body=148 status=ok
// SIG undefined FUN_1438e99b0(void)

void FUN_1438e99b0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiNavigator*___ptr64,hkaiNavigatorSignals::EnteredUserEdgeInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigatorEventsViewer,void_(__cdecl_hkaiNavigatorEventsViewer::*)(hkaiNavigator*___ptr64,hkaiNavigatorSignals::EnteredUserEdgeInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e9a50 FUN_1438e9a50 body=148 status=ok
// SIG undefined FUN_1438e9a50(void)

void FUN_1438e9a50(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiNavigator*___ptr64,hkaiNavigatorSignals::PathStaleInfo_const&___ptr64>::
              MemberSlot<hkaiNavigatorEventsViewer,void_(__cdecl_hkaiNavigatorEventsViewer::*)(hkaiNavigator*___ptr64,hkaiNavigatorSignals::PathStaleInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e9af0 FUN_1438e9af0 body=148 status=ok
// SIG undefined FUN_1438e9af0(void)

void FUN_1438e9af0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiNavigator*___ptr64,hkaiNavigatorSignals::PathfindFailedInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigatorEventsViewer,void_(__cdecl_hkaiNavigatorEventsViewer::*)(hkaiNavigator*___ptr64,hkaiNavigatorSignals::PathfindFailedInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e9b90 FUN_1438e9b90 body=148 status=ok
// SIG undefined FUN_1438e9b90(void)

void FUN_1438e9b90(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiNavigator*___ptr64,hkaiNavigatorSignals::PathfindSucceededInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigatorEventsViewer,void_(__cdecl_hkaiNavigatorEventsViewer::*)(hkaiNavigator*___ptr64,hkaiNavigatorSignals::PathfindSucceededInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e9c30 FUN_1438e9c30 body=148 status=ok
// SIG undefined FUN_1438e9c30(void)

void FUN_1438e9c30(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiNavigator*___ptr64,hkaiNavigatorSignals::PathfindTerminatedInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigatorEventsViewer,void_(__cdecl_hkaiNavigatorEventsViewer::*)(hkaiNavigator*___ptr64,hkaiNavigatorSignals::PathfindTerminatedInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e9cd0 FUN_1438e9cd0 body=148 status=ok
// SIG undefined FUN_1438e9cd0(void)

void FUN_1438e9cd0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiNavigator*___ptr64,hkaiNavigatorSignals::ReachedGoalInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigatorEventsViewer,void_(__cdecl_hkaiNavigatorEventsViewer::*)(hkaiNavigator*___ptr64,hkaiNavigatorSignals::ReachedGoalInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e9d70 FUN_1438e9d70 body=148 status=ok
// SIG undefined FUN_1438e9d70(void)

void FUN_1438e9d70(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiVolumeNavigator*___ptr64,hkaiVolumeNavigatorSignals::EnteredUserEdgeInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigatorEventsViewer,void_(__cdecl_hkaiNavigatorEventsViewer::*)(hkaiVolumeNavigator*___ptr64,hkaiVolumeNavigatorSignals::EnteredUserEdgeInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e9e10 FUN_1438e9e10 body=148 status=ok
// SIG undefined FUN_1438e9e10(void)

void FUN_1438e9e10(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiVolumeNavigator*___ptr64,hkaiVolumeNavigatorSignals::PathStaleInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigatorEventsViewer,void_(__cdecl_hkaiNavigatorEventsViewer::*)(hkaiVolumeNavigator*___ptr64,hkaiVolumeNavigatorSignals::PathStaleInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e9eb0 FUN_1438e9eb0 body=148 status=ok
// SIG undefined FUN_1438e9eb0(void)

void FUN_1438e9eb0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiVolumeNavigator*___ptr64,hkaiVolumeNavigatorSignals::PathfindFailedInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigatorEventsViewer,void_(__cdecl_hkaiNavigatorEventsViewer::*)(hkaiVolumeNavigator*___ptr64,hkaiVolumeNavigatorSignals::PathfindFailedInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e9f50 FUN_1438e9f50 body=148 status=ok
// SIG undefined FUN_1438e9f50(void)

void FUN_1438e9f50(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiVolumeNavigator*___ptr64,hkaiVolumeNavigatorSignals::PathfindSucceededInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigatorEventsViewer,void_(__cdecl_hkaiNavigatorEventsViewer::*)(hkaiVolumeNavigator*___ptr64,hkaiVolumeNavigatorSignals::PathfindSucceededInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438e9ff0 FUN_1438e9ff0 body=148 status=ok
// SIG undefined FUN_1438e9ff0(void)

void FUN_1438e9ff0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiVolumeNavigator*___ptr64,hkaiVolumeNavigatorSignals::PathfindTerminatedInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigatorEventsViewer,void_(__cdecl_hkaiNavigatorEventsViewer::*)(hkaiVolumeNavigator*___ptr64,hkaiVolumeNavigatorSignals::PathfindTerminatedInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438ea090 FUN_1438ea090 body=148 status=ok
// SIG undefined FUN_1438ea090(void)

void FUN_1438ea090(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *puVar4 = hkSlot::vftable;
    puVar4[1] = *param_1 & 0xfffffffffffffffc;
    puVar4[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar4;
    *puVar4 = hkSignal2<hkaiVolumeNavigator*___ptr64,hkaiVolumeNavigatorSignals::ReachedGoalInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigatorEventsViewer,void_(__cdecl_hkaiNavigatorEventsViewer::*)(hkaiVolumeNavigator*___ptr64,hkaiVolumeNavigatorSignals::ReachedGoalInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar4[3] = uVar1;
    puVar4[4] = uVar2;
    return;
  }
  return;
}



// FUNCTION 1438ea130 FUN_1438ea130 body=243 status=ok
// SIG undefined FUN_1438ea130(void)

undefined8 * FUN_1438ea130(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = hkaiNavigatorEventsViewer::vftable;
  param_1[8] = hkaiNavigatorEventsViewer::vftable;
  param_1[7] = 0;
  param_1[10] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  FUN_143734b10(param_1 + 0xd);
  *(undefined4 *)(param_1 + 9) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f000000;
  puVar3 = *(undefined8 **)(param_1[10] + 0x38);
  uVar2 = (ulonglong)((longlong)(puVar3 + *(int *)(param_1[10] + 0x40)) + (7 - (longlong)puVar3)) >>
          3;
  if (puVar3 + *(int *)(param_1[10] + 0x40) < puVar3) {
    uVar2 = uVar1;
  }
  if (uVar2 != 0) {
    do {
      FUN_1438ead00(param_1 + 8,*puVar3);
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar1 != uVar2);
  }
  FUN_1438da9a0(param_1[10],param_1 + 8);
  return param_1;
}



// FUNCTION 1438ea230 FUN_1438ea230 body=343 status=ok
// SIG undefined FUN_1438ea230(void)

void FUN_1438ea230(undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  *param_1 = hkaiNavigatorEventsViewer::vftable;
  param_1[8] = hkaiNavigatorEventsViewer::vftable;
  FUN_1438dabb0(param_1[10],param_1 + 8);
  uVar3 = 0;
  puVar4 = *(undefined8 **)(param_1[10] + 0x38);
  uVar2 = (ulonglong)((longlong)(puVar4 + *(int *)(param_1[10] + 0x40)) + (7 - (longlong)puVar4)) >>
          3;
  if (puVar4 + *(int *)(param_1[10] + 0x40) < puVar4) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_1438eaf80(param_1 + 8,*puVar4);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != uVar2);
  }
  thunk_FUN_143734820(param_1 + 0xd);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 100)) {
    FUN_143702e10(uVar1,param_1[0xb],0x10,*(uint *)((longlong)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  if (param_1[10] != 0) {
    FUN_14370c150();
  }
  param_1[8] = hkaiViewerContextWorldListener::vftable;
  *param_1 = hkProcess::vftable;
  if (param_1[6] != 0) {
    FUN_14370c150();
  }
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  if (param_1[2] != 0) {
    FUN_14370c150();
  }
  if (param_1[1] != 0) {
    FUN_14370c150();
  }
  return;
}



// FUNCTION 1438ea388 FUN_1438ea388 body=9 status=ok
// SIG undefined FUN_1438ea388(void)

void FUN_1438ea388(longlong param_1)

{
  FUN_1438ea3a0(param_1 + -0x40);
  return;
}



// FUNCTION 1438ea3a0 FUN_1438ea3a0 body=120 status=ok
// SIG undefined FUN_1438ea3a0(void)

longlong FUN_1438ea3a0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1438ea230();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x78);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
    }
  }
  return param_1;
}



// FUNCTION 1438ea420 FUN_1438ea420 body=99 status=ok
// SIG undefined FUN_1438ea420(void)

undefined8 * FUN_1438ea420(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkaiViewerContextWorldListener::vftable;
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



// FUNCTION 1438ea490 FUN_1438ea490 body=169 status=ok
// SIG undefined FUN_1438ea490(void)

undefined8 FUN_1438ea490(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  plVar6 = plVar7 + (int)param_1[1];
  while( true ) {
    if (plVar7 == plVar6) {
      return 0;
    }
    plVar1 = (longlong *)*plVar7;
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    iVar2 = hkString::strCmp(&DAT_145c57600,uVar3);
    if (iVar2 == 0) break;
    plVar7 = plVar7 + 1;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar4 + 0x58),0x78);
  if (lVar5 == 0) {
    return 0;
  }
  plVar6 = plVar1 + -3;
  if (plVar1 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  uVar3 = FUN_1438ea130(lVar5,plVar6);
  return uVar3;
}



// FUNCTION 1438ea540 FUN_1438ea540 body=110 status=ok
// SIG undefined FUN_1438ea540(void)

void FUN_1438ea540(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x150);
  uVar2 = FCulture::GetName(param_2);
  FUN_1438ea620(param_1,param_2,uVar2,lVar1 + 0x120,param_3,param_4);
  return;
}



// FUNCTION 1438ea5b0 FUN_1438ea5b0 body=110 status=ok
// SIG undefined FUN_1438ea5b0(void)

void FUN_1438ea5b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x108);
  uVar2 = FCulture::GetName(param_2);
  FUN_1438ea620(param_1,param_2,uVar2,lVar1 + 0x120,param_3,param_4);
  return;
}



// FUNCTION 1438ea620 FUN_1438ea620 body=374 status=ok
// SIG undefined FUN_1438ea620(void)

void FUN_1438ea620(longlong param_1,undefined8 param_2,float *param_3,float *param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  int local_res18 [2];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_98 [128];
  
  local_res8[0] = 0;
  local_res10 = param_2;
  FUN_1437b75a0(param_1 + 0x58,local_res18,&local_res10,local_res8);
  fVar2 = *(float *)(param_1 + 0x48);
  lVar4 = *(longlong *)(param_1 + 0x58) + (longlong)local_res18[0] * 0x10;
  local_b8 = fVar2 * *param_4 + *param_3;
  fStack_b4 = fVar2 * param_4[1] + param_3[1];
  fStack_b0 = fVar2 * param_4[2] + param_3[2];
  fStack_ac = fVar2 * param_4[3] + param_3[3];
  iVar3 = *(int *)(lVar4 + 8);
  if (iVar3 < 1) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 200))
              (*(longlong **)(param_1 + 0x18),local_res8,0,param_5,&local_b8,param_6,DAT_146b95620);
  }
  else {
    local_a8 = local_98;
    local_9c = 0x80000080;
    local_a0 = 1;
    local_98[0] = 0;
    FUN_143745cf0(&local_a8,iVar3,10);
    FUN_143745710(&local_a8,param_5,0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 200))
              (*(longlong **)(param_1 + 0x18),local_res8,0,local_a8,&local_b8,param_6,DAT_146b95620)
    ;
    local_a0 = 0;
    if (-1 < (int)local_9c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_a8,1,local_9c & 0x3fffffff);
    }
  }
  piVar1 = (int *)(lVar4 + 8);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 1438ea7a0 FUN_1438ea7a0 body=7 status=ok
// SIG undefined FUN_1438ea7a0(void)

undefined4 FUN_1438ea7a0(void)

{
  return DAT_146b95620;
}



// FUNCTION 1438ea7d0 FUN_1438ea7d0 body=89 status=ok
// SIG undefined FUN_1438ea7d0(void)

void FUN_1438ea7d0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined4 local_38 [4];
  char *local_28 [5];
  
  local_28[0] = "PathStale:DynamicCutting";
  local_28[1] = "PathStale:OffMesh";
  local_28[2] = "PathStale:Lost";
  local_38[1] = 0xffff0000;
  local_38[0] = 0xffffff00;
  local_38[2] = 0xffffff00;
  FUN_1438ea540(param_1,param_2,local_28[*param_3],local_38[*param_3]);
  return;
}



// FUNCTION 1438ea830 FUN_1438ea830 body=65 status=ok
// SIG undefined FUN_1438ea830(void)

void FUN_1438ea830(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *local_28 [5];
  
  local_28[0] = "PathfindFailed:InvalidStart";
  local_28[1] = "PathfindFailed:InvalidGoal";
  local_28[2] = "PathfindFailed:Unreachable";
  FUN_1438ea540(param_1,param_2,local_28[*(int *)(param_3 + 0x30)],0xffff0000);
  return;
}



// FUNCTION 1438ea8a0 FUN_1438ea8a0 body=65 status=ok
// SIG undefined FUN_1438ea8a0(void)

void FUN_1438ea8a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *local_28 [5];
  
  local_28[0] = "PathfindTerminated:IterationLimit";
  local_28[1] = "PathfindTerminated:OpenSet";
  local_28[2] = "PathfindTerminated:SearchState";
  FUN_1438ea540(param_1,param_2,local_28[*(int *)(param_3 + 0x30)],0xffff0000);
  return;
}



// FUNCTION 1438ea930 FUN_1438ea930 body=89 status=ok
// SIG undefined FUN_1438ea930(void)

void FUN_1438ea930(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined4 local_38 [4];
  char *local_28 [5];
  
  local_28[0] = "PathStale:DynamicCutting";
  local_28[1] = "PathStale:OffMesh";
  local_28[2] = "PathStale:Lost";
  local_38[1] = 0xffff0000;
  local_38[0] = 0xffffff00;
  local_38[2] = 0xffffff00;
  FUN_1438ea5b0(param_1,param_2,local_28[*param_3],local_38[*param_3]);
  return;
}



// FUNCTION 1438ea990 FUN_1438ea990 body=65 status=ok
// SIG undefined FUN_1438ea990(void)

void FUN_1438ea990(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *local_28 [5];
  
  local_28[0] = "PathfindFailed:InvalidStart";
  local_28[1] = "PathfindFailed:InvalidGoal";
  local_28[2] = "PathfindFailed:Unreachable";
  FUN_1438ea5b0(param_1,param_2,local_28[*(int *)(param_3 + 0x30)],0xffff0000);
  return;
}



// FUNCTION 1438eaa00 FUN_1438eaa00 body=65 status=ok
// SIG undefined FUN_1438eaa00(void)

void FUN_1438eaa00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *local_28 [5];
  
  local_28[0] = "PathfindTerminated:IterationLimit";
  local_28[1] = "PathfindTerminated:OpenSet";
  local_28[2] = "PathfindTerminated:SearchState";
  FUN_1438ea5b0(param_1,param_2,local_28[*(int *)(param_3 + 0x30)],0xffff0000);
  return;
}



// FUNCTION 1438eaa70 FUN_1438eaa70 body=41 status=ok
// SIG undefined FUN_1438eaa70(void)

void FUN_1438eaa70(void)

{
  DAT_146b95620 = FUN_14378a650(DAT_146b845b8,"AI/Navigators/Events",FUN_1438ea490);
  return;
}



// FUNCTION 1438eaaa0 FUN_1438eaaa0 body=23 status=ok
// SIG undefined FUN_1438eaaa0(void)

void FUN_1438eaaa0(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_1437347e0(param_1 + 0x68);
    return;
  }
  return;
}



// FUNCTION 1438eaac0 FUN_1438eaac0 body=45 status=ok
// SIG undefined FUN_1438eaac0(void)

void FUN_1438eaac0(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e99b0(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438eaaf0 FUN_1438eaaf0 body=45 status=ok
// SIG undefined FUN_1438eaaf0(void)

void FUN_1438eaaf0(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e9a50(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438eab20 FUN_1438eab20 body=45 status=ok
// SIG undefined FUN_1438eab20(void)

void FUN_1438eab20(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e9af0(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438eab50 FUN_1438eab50 body=45 status=ok
// SIG undefined FUN_1438eab50(void)

void FUN_1438eab50(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e9b90(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438eab80 FUN_1438eab80 body=45 status=ok
// SIG undefined FUN_1438eab80(void)

void FUN_1438eab80(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e9c30(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438eabb0 FUN_1438eabb0 body=45 status=ok
// SIG undefined FUN_1438eabb0(void)

void FUN_1438eabb0(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e9cd0(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438eabe0 FUN_1438eabe0 body=45 status=ok
// SIG undefined FUN_1438eabe0(void)

void FUN_1438eabe0(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e9d70(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438eac10 FUN_1438eac10 body=45 status=ok
// SIG undefined FUN_1438eac10(void)

void FUN_1438eac10(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e9e10(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438eac40 FUN_1438eac40 body=45 status=ok
// SIG undefined FUN_1438eac40(void)

void FUN_1438eac40(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e9eb0(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438eac70 FUN_1438eac70 body=45 status=ok
// SIG undefined FUN_1438eac70(void)

void FUN_1438eac70(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e9f50(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438eaca0 FUN_1438eaca0 body=45 status=ok
// SIG undefined FUN_1438eaca0(void)

void FUN_1438eaca0(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438e9ff0(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438eacd0 FUN_1438eacd0 body=45 status=ok
// SIG undefined FUN_1438eacd0(void)

void FUN_1438eacd0(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  FUN_1438ea090(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,"Unnamed");
  return;
}



// FUNCTION 1438ead00 FUN_1438ead00 body=640 status=ok
// SIG undefined FUN_1438ead00(void)

void FUN_1438ead00(longlong param_1,longlong param_2)

{
  code *local_18;
  undefined4 uStack_10;
  
  param_1 = param_1 + -0x40;
  local_18 = (code *)&LAB_1438ea880;
  uStack_10 = 0;
  FUN_1438e9b90(param_2 + 0x440,param_1,&local_18,"hkaiNavigatorEventsViewer::onPathfindSucceeded");
  local_18 = FUN_1438ea830;
  uStack_10 = 0;
  FUN_1438e9af0(param_2 + 0x448,param_1,&local_18,"hkaiNavigatorEventsViewer::onPathfindFailed");
  local_18 = FUN_1438ea8a0;
  uStack_10 = 0;
  FUN_1438e9c30(param_2 + 0x450,param_1,&local_18,"hkaiNavigatorEventsViewer::onPathfindTerminated")
  ;
  local_18 = FUN_1438ea7d0;
  uStack_10 = 0;
  FUN_1438e9a50(param_2 + 0x460,param_1,&local_18,"hkaiNavigatorEventsViewer::onPathStale");
  local_18 = (code *)&LAB_1438ea7b0;
  uStack_10 = 0;
  FUN_1438e99b0(param_2 + 0x468,param_1,&local_18,"hkaiNavigatorEventsViewer::onEnteredUserEdge");
  local_18 = (code *)&LAB_1438ea8f0;
  uStack_10 = 0;
  FUN_1438e9cd0(param_2 + 0x470,param_1,&local_18,"hkaiNavigatorEventsViewer::onReachedGoal");
  local_18 = (code *)&LAB_1438ea9e0;
  uStack_10 = 0;
  FUN_1438e9f50(param_2 + 0x480,param_1,&local_18,"hkaiNavigatorEventsViewer::onPathfindSucceeded");
  local_18 = FUN_1438ea990;
  uStack_10 = 0;
  FUN_1438e9eb0(param_2 + 0x488,param_1,&local_18,"hkaiNavigatorEventsViewer::onPathfindFailed");
  local_18 = FUN_1438eaa00;
  uStack_10 = 0;
  FUN_1438e9ff0(param_2 + 0x490,param_1,&local_18,"hkaiNavigatorEventsViewer::onPathfindTerminated")
  ;
  local_18 = FUN_1438ea930;
  uStack_10 = 0;
  FUN_1438e9e10(param_2 + 0x4a0,param_1,&local_18,"hkaiNavigatorEventsViewer::onPathStale");
  local_18 = (code *)&LAB_1438ea910;
  uStack_10 = 0;
  FUN_1438e9d70(param_2 + 0x4a8,param_1,&local_18,"hkaiNavigatorEventsViewer::onEnteredUserEdge");
  local_18 = (code *)&LAB_1438eaa50;
  uStack_10 = 0;
  FUN_1438ea090(param_2 + 0x4b0,param_1,&local_18,"hkaiNavigatorEventsViewer::onReachedGoal");
  return;
}



// FUNCTION 1438eaf80 FUN_1438eaf80 body=57 status=ok
// SIG undefined FUN_1438eaf80(void)

void FUN_1438eaf80(longlong param_1,longlong param_2)

{
  hkaiNavigatorSignals::unsubscribeAll(param_2 + 0x440,param_1 + -0x40);
  hkaiNavigatorSignals::unsubscribeAll(param_2 + 0x480,param_1 + -0x40);
  return;
}



// FUNCTION 1438eafc0 FUN_1438eafc0 body=275 status=ok
// SIG undefined FUN_1438eafc0(void)

undefined8 * FUN_1438eafc0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = hkaiViewerBase::vftable;
  param_1[3] = hkaiViewerBase::vftable;
  param_1[0xb] = hkaiViewerBase::vftable;
  param_1[0xc] = 0;
  uVar5 = uVar6;
  uVar7 = uVar6;
  if (0 < (int)param_2[1]) {
    do {
      uVar3 = (**(code **)(**(longlong **)(uVar7 + *param_2) + 8))();
      iVar2 = hkString::strCmp(&DAT_145c57600,uVar3);
      if (iVar2 == 0) {
        lVar1 = *(longlong *)(*param_2 + (longlong)(int)uVar5 * 8);
        uVar5 = lVar1 - 0x18;
        if (lVar1 == 0) {
          uVar5 = uVar6;
        }
        if (uVar5 != 0) {
          FUN_14370c030(uVar5);
        }
        if (param_1[0xc] != 0) {
          FUN_14370c150();
        }
        param_1[0xc] = uVar5;
        break;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar7 = uVar7 + 8;
    } while ((int)uVar4 < (int)param_2[1]);
  }
  if (param_1[0xc] != 0) {
    FUN_1438da9a0(param_1[0xc],param_1 + 0xb);
  }
  return param_1;
}



// FUNCTION 1438eb0e0 FUN_1438eb0e0 body=223 status=ok
// SIG undefined FUN_1438eb0e0(void)

void FUN_1438eb0e0(undefined8 *param_1)

{
  *param_1 = hkaiViewerBase::vftable;
  param_1[3] = hkaiViewerBase::vftable;
  param_1[0xb] = hkaiViewerBase::vftable;
  if (param_1[0xc] != 0) {
    FUN_1438dabb0(param_1[0xc],param_1 + 0xb);
    if (param_1[0xc] != 0) {
      FUN_14370c150();
    }
    param_1[0xc] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_14370c150();
  }
  param_1[0xb] = hkaiViewerContextWorldListener::vftable;
  param_1[3] = hkProcess::vftable;
  if (param_1[9] != 0) {
    FUN_14370c150();
  }
  if (param_1[8] != 0) {
    FUN_14370c150();
  }
  if (param_1[7] != 0) {
    FUN_14370c150();
  }
  if (param_1[6] != 0) {
    FUN_14370c150();
  }
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438eb1c0 FUN_1438eb1c0 body=270 status=ok
// SIG undefined FUN_1438eb1c0(void)

undefined8 * FUN_1438eb1c0(undefined8 *param_1,undefined4 *param_2)

{
  float fVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiCollisionAvoidance::Character::vftable;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x19) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x3f000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80000000;
  param_1[0x20] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x15) = param_2[2];
  fVar1 = (float)param_2[1];
  *(float *)((longlong)param_1 + 0xa4) = fVar1;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  param_1[0x21] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x17) = 0xf;
  *(float *)((longlong)param_1 + 0xac) = fVar1 * 4.0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x14);
  FUN_1438eb640(param_1);
  return param_1;
}



// FUNCTION 1438eb2d0 FUN_1438eb2d0 body=180 status=ok
// SIG undefined FUN_1438eb2d0(void)

void FUN_1438eb2d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = FUN_143703a50();
  lVar1 = *(longlong *)(param_1 + 0xe8);
  iVar3 = *(int *)(param_1 + 0xf0) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(lVar1 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xf4)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0xe8),8,*(uint *)(param_1 + 0xf4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x80000000;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438eb390 FUN_1438eb390 body=139 status=ok
// SIG undefined FUN_1438eb390(void)

longlong FUN_1438eb390(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438eb2d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x110;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x110);
    }
  }
  return param_1;
}



// FUNCTION 1438eb420 disableSteering body=40 status=ok
// SIG undefined disableSteering(void)

void hkaiCollisionAvoidance::Character::disableSteering(longlong param_1)

{
  if (*(char *)(param_1 + 0xf8) != '\0') {
    *(undefined1 *)(param_1 + 0xf8) = 0;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      FUN_1438ed270(*(longlong *)(param_1 + 0x100),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1438eb450 enableSteering body=40 status=ok
// SIG undefined enableSteering(void)

void hkaiCollisionAvoidance::Character::enableSteering(longlong param_1)

{
  if (*(char *)(param_1 + 0xf8) == '\0') {
    *(undefined1 *)(param_1 + 0xf8) = 1;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      FUN_1438ed2c0(*(longlong *)(param_1 + 0x100),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1438eb480 FUN_1438eb480 body=64 status=ok
// SIG undefined FUN_1438eb480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438eb480(longlong param_1,float *param_2)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar2 = *(longlong *)(param_1 + 0x100);
  uVar1 = *(uint *)(param_1 + 0xa0);
  uVar7 = -(uint)(*(float *)(lVar2 + 0x40) == 0.0);
  uVar8 = -(uint)(*(float *)(lVar2 + 0x44) == 0.0);
  uVar9 = -(uint)(*(float *)(lVar2 + 0x48) == 0.0);
  uVar10 = -(uint)(*(float *)(lVar2 + 0x4c) == 0.0);
  fVar11 = (float)(uVar1 & uVar7 | ~uVar7 & _DAT_1467f06e0);
  fVar12 = (float)(uVar1 & uVar8 | ~uVar8 & uRam00000001467f06e4);
  fVar13 = (float)(uVar1 & uVar9 | ~uVar9 & uRam00000001467f06e8);
  fVar14 = (float)(uVar1 & uVar10 | ~uVar10 & DAT_1467f06ec);
  fVar3 = *(float *)(param_1 + 0x30);
  fVar4 = *(float *)(param_1 + 0x34);
  fVar5 = *(float *)(param_1 + 0x38);
  fVar6 = *(float *)(param_1 + 0x3c);
  param_2[4] = fVar3 + fVar11;
  param_2[5] = fVar4 + fVar12;
  param_2[6] = fVar5 + fVar13;
  param_2[7] = fVar6 + fVar14;
  *param_2 = fVar3 - fVar11;
  param_2[1] = fVar4 - fVar12;
  param_2[2] = fVar5 - fVar13;
  param_2[3] = fVar6 - fVar14;
  return;
}



// FUNCTION 1438eb4c0 FUN_1438eb4c0 body=174 status=ok
// SIG undefined FUN_1438eb4c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438eb4c0(longlong param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x100);
  fVar3 = *(float *)(lVar2 + 0x40);
  fVar4 = *(float *)(lVar2 + 0x44);
  fVar5 = *(float *)(lVar2 + 0x48);
  fVar6 = *(float *)(lVar2 + 0x4c);
  uVar1 = *(uint *)(param_1 + 0xac);
  fVar7 = (float)(uVar1 & -(uint)(fVar3 == 0.0) | ~-(uint)(fVar3 == 0.0) & _DAT_1467f06e0);
  fVar8 = (float)(uVar1 & -(uint)(fVar4 == 0.0) | ~-(uint)(fVar4 == 0.0) & uRam00000001467f06e4);
  fVar10 = (float)(uVar1 & -(uint)(fVar5 == 0.0) | ~-(uint)(fVar5 == 0.0) & uRam00000001467f06e8);
  fVar11 = (float)(uVar1 & -(uint)(fVar6 == 0.0) | ~-(uint)(fVar6 == 0.0) & DAT_1467f06ec);
  auVar14._0_4_ = *(float *)(param_1 + 0x30) + fVar7;
  auVar14._4_4_ = *(float *)(param_1 + 0x34) + fVar8;
  auVar14._8_4_ = *(float *)(param_1 + 0x38) + fVar10;
  auVar14._12_4_ = *(float *)(param_1 + 0x3c) + fVar11;
  auVar12._0_4_ = *(float *)(param_1 + 0x30) - fVar7;
  auVar12._4_4_ = *(float *)(param_1 + 0x34) - fVar8;
  auVar12._8_4_ = *(float *)(param_1 + 0x38) - fVar10;
  auVar12._12_4_ = *(float *)(param_1 + 0x3c) - fVar11;
  fVar7 = *(float *)(param_1 + 0xb0);
  fVar8 = -*(float *)(param_1 + 0xb4);
  auVar13._0_4_ = auVar14._0_4_ + fVar7 * fVar3;
  auVar13._4_4_ = auVar14._4_4_ + fVar7 * fVar4;
  auVar13._8_4_ = auVar14._8_4_ + fVar7 * fVar5;
  auVar13._12_4_ = auVar14._12_4_ + fVar7 * fVar6;
  auVar15 = maxps(auVar14,auVar13);
  auVar16._0_4_ = auVar12._0_4_ + fVar7 * fVar3;
  auVar16._4_4_ = auVar12._4_4_ + fVar7 * fVar4;
  auVar16._8_4_ = auVar12._8_4_ + fVar7 * fVar5;
  auVar16._12_4_ = auVar12._12_4_ + fVar7 * fVar6;
  auVar13 = minps(auVar12,auVar16);
  auVar9._0_4_ = auVar15._0_4_ + fVar8 * fVar3;
  auVar9._4_4_ = auVar15._4_4_ + fVar8 * fVar4;
  auVar9._8_4_ = auVar15._8_4_ + fVar8 * fVar5;
  auVar9._12_4_ = auVar15._12_4_ + fVar8 * fVar6;
  auVar16 = maxps(auVar15,auVar9);
  auVar15._0_4_ = auVar13._0_4_ + fVar8 * fVar3;
  auVar15._4_4_ = auVar13._4_4_ + fVar8 * fVar4;
  auVar15._8_4_ = auVar13._8_4_ + fVar8 * fVar5;
  auVar15._12_4_ = auVar13._12_4_ + fVar8 * fVar6;
  param_2[1] = auVar16;
  auVar13 = minps(auVar13,auVar15);
  *param_2 = auVar13;
  return;
}



// FUNCTION 1438eb570 FUN_1438eb570 body=169 status=ok
// SIG undefined FUN_1438eb570(void)

void FUN_1438eb570(longlong param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  fVar2 = param_2[3];
  fVar7 = *(float *)(lVar1 + 0x40) * *param_2;
  fVar8 = *(float *)(lVar1 + 0x44) * param_2[1];
  fVar9 = *(float *)(lVar1 + 0x48) * param_2[2];
  auVar10._0_4_ = (fVar8 + fVar7 + fVar9) * *(float *)(lVar1 + 0x40);
  auVar10._4_4_ = (fVar8 + fVar7 + fVar9) * *(float *)(lVar1 + 0x44);
  auVar10._8_4_ = (fVar8 + fVar7 + fVar9) * *(float *)(lVar1 + 0x48);
  auVar10._12_4_ = (fVar8 + fVar7 + fVar9) * *(float *)(lVar1 + 0x4c);
  fVar17 = *param_2 - auVar10._0_4_;
  fVar18 = param_2[1] - auVar10._4_4_;
  fVar19 = param_2[2] - auVar10._8_4_;
  fVar7 = fVar17 * fVar17;
  fVar8 = fVar18 * fVar18;
  fVar9 = fVar19 * fVar19;
  fVar14 = fVar8 + fVar7 + fVar9;
  fVar15 = fVar8 + fVar7 + fVar9;
  fVar16 = fVar8 + fVar7 + fVar9;
  fVar9 = fVar8 + fVar7 + fVar9;
  auVar11._4_4_ = fVar15;
  auVar11._0_4_ = fVar14;
  auVar11._8_4_ = fVar16;
  auVar11._12_4_ = fVar9;
  auVar11 = rsqrtps(auVar10,auVar11);
  uVar3 = -(uint)(0.0 - fVar14 < 0.0);
  uVar4 = -(uint)(0.0 - fVar15 < 0.0);
  uVar5 = -(uint)(0.0 - fVar16 < 0.0);
  uVar6 = -(uint)(0.0 - fVar9 < 0.0);
  fVar7 = auVar11._0_4_;
  fVar8 = auVar11._4_4_;
  fVar12 = auVar11._8_4_;
  fVar13 = auVar11._12_4_;
  *(uint *)(param_1 + 0x80) =
       (uint)((float)(~-(uint)(fVar14 <= 0.0) & (uint)((3.0 - fVar7 * fVar14 * fVar7) * fVar7 * 0.5)
                     ) * fVar17) & uVar3 | ~uVar3 & (uint)fVar17;
  *(uint *)(param_1 + 0x84) =
       (uint)((float)(~-(uint)(fVar15 <= 0.0) & (uint)((3.0 - fVar8 * fVar15 * fVar8) * fVar8 * 0.5)
                     ) * fVar18) & uVar4 | ~uVar4 & (uint)fVar18;
  *(uint *)(param_1 + 0x88) =
       (uint)((float)(~-(uint)(fVar16 <= 0.0) &
                     (uint)((3.0 - fVar12 * fVar16 * fVar12) * fVar12 * 0.5)) * fVar19) & uVar5 |
       ~uVar5 & (uint)fVar19;
  *(uint *)(param_1 + 0x8c) =
       (uint)((float)(~-(uint)(fVar9 <= 0.0) &
                     (uint)((3.0 - fVar13 * fVar9 * fVar13) * fVar13 * 0.5)) *
             (fVar2 - auVar10._12_4_)) & uVar6 | ~uVar6 & (uint)(fVar2 - auVar10._12_4_);
  return;
}



// FUNCTION 1438eb620 setPxVehicleEngineDataMDampingRateZeroThrottleClutchEngaged body=6 status=ok
// SIG undefined setPxVehicleEngineDataMDampingRateZeroThrottleClutchEngaged(void)

void setPxVehicleEngineDataMDampingRateZeroThrottleClutchEngaged
               (longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}



// FUNCTION 1438eb630 provideHorizonPlane body=8 status=ok
// SIG undefined provideHorizonPlane(void)

void hkaiCollisionAvoidance::Character::provideHorizonPlane(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  return;
}



// FUNCTION 1438eb640 FUN_1438eb640 body=29 status=ok
// SIG undefined FUN_1438eb640(void)

void FUN_1438eb640(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x60) = 0x5f7ffff0;
  return;
}



// FUNCTION 1438eb660 FUN_1438eb660 body=107 status=ok
// SIG undefined FUN_1438eb660(void)

void FUN_1438eb660(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xe0);
  if (param_2 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    }
    if (param_2 != (longlong *)0x0) {
      FUN_14370c030(param_2);
    }
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      FUN_14370c150();
    }
    *(longlong **)(param_1 + 0xe0) = param_2;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x18))(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 1438eb6d0 FUN_1438eb6d0 body=77 status=ok
// SIG undefined FUN_1438eb6d0(void)

undefined8 * FUN_1438eb6d0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiCollisionAvoidance::DefaultBoundaryGatherer::vftable;
  param_1[3] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1438eb720 FUN_1438eb720 body=60 status=ok
// SIG undefined FUN_1438eb720(void)

void FUN_1438eb720(undefined8 *param_1)

{
  *param_1 = hkaiCollisionAvoidance::DefaultBoundaryGatherer::vftable;
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438eb760 FUN_1438eb760 body=139 status=ok
// SIG undefined FUN_1438eb760(void)

longlong FUN_1438eb760(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438eb720();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x38;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 1438eb7f0 FUN_1438eb7f0 body=697 status=ok
// SIG undefined FUN_1438eb7f0(void)

void FUN_1438eb7f0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  LPVOID pvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 local_res8 [2];
  float local_res10;
  undefined4 local_res14;
  longlong local_f8;
  int local_f0;
  uint local_ec;
  longlong local_e8;
  int local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88;
  undefined4 local_68;
  undefined4 local_64;
  
  FUN_1438a2d90(local_a8);
  local_68 = *(undefined4 *)(param_2 + 0x20);
  local_64 = *(undefined4 *)(param_1 + 0x20);
  local_88 = 0;
  FUN_1438a3410(local_res8,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x130),param_2 + 0x30,
                *(longlong *)(param_1 + 0x18) + 0x120,local_a8,local_d8);
  *(undefined4 *)(param_2 + 0x20) = local_res8[0];
  FUN_1438eb4c0(param_2,local_c8);
  uVar10 = 0;
  local_res14 = *(undefined4 *)(param_1 + 0x30);
  local_res10 = *(float *)(param_2 + 0xa0) + *(float *)(param_2 + 0xa0);
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0x80000000;
  local_e0 = 0x20;
  pvVar6 = TlsGetValue(DAT_146b7bf70);
  if (pvVar6 == (LPVOID)0x0) {
    pvVar6 = DAT_146b7bf68;
  }
  local_e8 = *(longlong *)((longlong)pvVar6 + 0x18);
  if ((*(int *)((longlong)pvVar6 + 0x10) < 0x200) ||
     (*(ulonglong *)((longlong)pvVar6 + 0x20) < local_e8 + 0x200U)) {
    local_e8 = FUN_1437138c0(pvVar6,0x200);
  }
  else {
    *(ulonglong *)((longlong)pvVar6 + 0x18) = local_e8 + 0x200U;
  }
  local_ec = 0x80000020;
  local_f8 = local_e8;
  FUN_143853700(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x130),local_res8[0],local_c8,
                &local_res10,*(undefined8 *)(param_1 + 0x28),1,param_2 + 0x30,
                *(longlong *)(param_1 + 0x18) + 0x120,&local_f8);
  uVar12 = uVar10;
  if (0 < local_f0 / 2) {
    do {
      uVar9 = *(undefined8 *)(uVar10 + local_f8);
      uVar1 = ((undefined8 *)(uVar10 + local_f8))[1];
      puVar8 = (undefined8 *)(uVar10 + 0x10 + local_f8);
      uVar2 = *puVar8;
      uVar3 = puVar8[1];
      uVar7 = FUN_143703a50();
      if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar7,param_3,0x20);
      }
      uVar11 = (int)uVar12 + 1;
      uVar10 = uVar10 + 0x20;
      puVar8 = (undefined8 *)((longlong)(int)param_3[1] * 0x20 + *param_3);
      *puVar8 = uVar9;
      puVar8[1] = uVar1;
      puVar8[2] = uVar2;
      puVar8[3] = uVar3;
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < local_f0 / 2);
  }
  iVar5 = local_e0;
  lVar4 = local_e8;
  if (local_e8 == local_f8) {
    local_f0 = 0;
  }
  pvVar6 = TlsGetValue(DAT_146b7bf70);
  if (pvVar6 == (LPVOID)0x0) {
    pvVar6 = DAT_146b7bf68;
  }
  uVar11 = iVar5 * 0x10 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar6 + 0x10) < (int)uVar11) ||
      ((int)uVar11 + lVar4 != *(longlong *)((longlong)pvVar6 + 0x18))) ||
     (*(longlong *)((longlong)pvVar6 + 0x28) == lVar4)) {
    FUN_143713ff0(pvVar6,lVar4);
  }
  else {
    *(longlong *)((longlong)pvVar6 + 0x18) = lVar4;
  }
  uVar9 = FUN_143703a50();
  local_f0 = 0;
  if (-1 < (int)local_ec) {
    FUN_143702e10(uVar9,local_f8,0x10,local_ec & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438ebab0 FUN_1438ebab0 body=8 status=ok
// SIG undefined FUN_1438ebab0(void)

void FUN_1438ebab0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  return;
}



// FUNCTION 1438ebad0 FUN_1438ebad0 body=216 status=ok
// SIG undefined FUN_1438ebad0(void)

void FUN_1438ebad0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    lVar3 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar4 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar3 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar3,param_2 + lVar3);
        *(undefined4 *)(lVar3 + 8) = 0x1ffff;
        *puVar1 = hkaiCollisionAvoidance::DefaultBoundaryGatherer::vftable;
        lVar2 = *(longlong *)(param_2 + 0x10 + lVar3);
        *(longlong *)(lVar3 + 0x10) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_2 + 0x18 + lVar3);
        lVar2 = *(longlong *)(param_2 + 0x20 + lVar3);
        *(longlong *)(lVar3 + 0x20) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_2 + 0x28 + lVar3);
      }
      lVar3 = lVar3 + 0x38;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1438ebc10 FUN_1438ebc10 body=74 status=ok
// SIG undefined FUN_1438ebc10(void)

void FUN_1438ebc10(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438ec870(param_1,local_res18);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438ebc60 FUN_1438ebc60 body=55 status=ok
// SIG undefined FUN_1438ebc60(void)

void FUN_1438ebc60(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438e8750(param_1);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438ebca0 FUN_1438ebca0 body=18 status=ok
// SIG undefined FUN_1438ebca0(void)

undefined8 * FUN_1438ebca0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14682b780;
  return param_2;
}



// FUNCTION 1438ebcc0 FUN_1438ebcc0 body=659 status=ok
// SIG undefined FUN_1438ebcc0(void)

void FUN_1438ebcc0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int local_res20 [2];
  int local_38 [2];
  int local_30 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    piVar9 = (int *)(param_1 + 0x68);
    lVar10 = (longlong)param_4;
    plVar11 = (longlong *)0x0;
    do {
      piVar1 = piVar9 + -0x1a;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar9 + -0x18,param_2 + -0x60 + (longlong)piVar9);
        piVar9[-0x16] = 0x1ffff;
        *(undefined ***)piVar1 = hkaiCollisionAvoidance::System::vftable;
        piVar9[-0x14] = 0;
        piVar9[-0x13] = 0;
        piVar9[-0x12] = 0;
        piVar9[-0x11] = 0;
        piVar9[-0x10] = 0;
        piVar9[-0xf] = 0;
        piVar9[-0xe] = 0;
        piVar9[-0xd] = 0;
        piVar9[-0xc] = 0;
        piVar9[-0xb] = 0;
        piVar1 = (int *)(param_2 + -0x28 + (longlong)piVar9);
        iVar4 = piVar1[1];
        iVar7 = piVar1[2];
        iVar3 = piVar1[3];
        piVar9[-10] = *piVar1;
        piVar9[-9] = iVar4;
        piVar9[-8] = iVar7;
        piVar9[-7] = iVar3;
        piVar9[-6] = 0;
        piVar9[-5] = 0;
        piVar9[-4] = 0;
        piVar9[-3] = -0x80000000;
        local_res20[0] = *(int *)(param_2 + -0x10 + (longlong)piVar9);
        lVar8 = (longlong)local_res20[0];
        uVar5 = FUN_143703a50();
        iVar4 = local_res20[0];
        plVar6 = plVar11;
        if (local_res20[0] != 0) {
          plVar6 = (longlong *)FUN_143702d60(uVar5,8,local_res20);
        }
        *(longlong **)(piVar9 + -6) = plVar6;
        piVar9[-4] = iVar4;
        iVar4 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar4 = local_res20[0];
        }
        piVar9[-3] = iVar4;
        if (0 < lVar8) {
          lVar12 = *(longlong *)(param_2 + -0x18 + (longlong)piVar9) - (longlong)plVar6;
          do {
            if ((plVar6 != (longlong *)0x0) &&
               (lVar2 = *(longlong *)(lVar12 + (longlong)plVar6), *plVar6 = lVar2, lVar2 != 0)) {
              FUN_14370c030();
            }
            plVar6 = plVar6 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        *piVar9 = 0;
        piVar9[1] = -0x80000000;
        iVar4 = *(int *)(param_2 + (longlong)piVar9);
        lVar8 = (longlong)iVar4;
        local_38[0] = iVar4;
        uVar5 = FUN_143703a50();
        iVar7 = local_38[0];
        plVar6 = plVar11;
        if (local_38[0] != 0) {
          plVar6 = (longlong *)FUN_143702d60(uVar5,8,local_38);
        }
        *(longlong **)(piVar9 + -2) = plVar6;
        *piVar9 = iVar7;
        iVar7 = -0x80000000;
        if (local_38[0] != 0) {
          iVar7 = local_38[0];
        }
        piVar9[1] = iVar7;
        if (0 < iVar4) {
          lVar12 = *(longlong *)(param_2 + -8 + (longlong)piVar9) - (longlong)plVar6;
          do {
            if (plVar6 != (longlong *)0x0) {
              *plVar6 = *(longlong *)(lVar12 + (longlong)plVar6);
            }
            plVar6 = plVar6 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        piVar9[2] = 0;
        piVar9[3] = 0;
        piVar9[4] = 0;
        piVar9[5] = -0x80000000;
        local_30[0] = *(int *)(param_2 + 0x10 + (longlong)piVar9);
        lVar8 = (longlong)local_30[0];
        uVar5 = FUN_143703a50();
        iVar4 = local_30[0];
        plVar6 = plVar11;
        if (local_30[0] != 0) {
          plVar6 = (longlong *)FUN_143702d60(uVar5,8,local_30);
        }
        *(longlong **)(piVar9 + 2) = plVar6;
        piVar9[4] = iVar4;
        iVar4 = -0x80000000;
        if (local_30[0] != 0) {
          iVar4 = local_30[0];
        }
        piVar9[5] = iVar4;
        if (0 < lVar8) {
          lVar12 = *(longlong *)(param_2 + 8 + (longlong)piVar9) - (longlong)plVar6;
          do {
            if ((plVar6 != (longlong *)0x0) &&
               (lVar2 = *(longlong *)(lVar12 + (longlong)plVar6), *plVar6 = lVar2, lVar2 != 0)) {
              FUN_14370c030();
            }
            plVar6 = plVar6 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        lVar8 = *(longlong *)(param_2 + 0x18 + (longlong)piVar9);
        *(longlong *)(piVar9 + 6) = lVar8;
        if (lVar8 != 0) {
          FUN_14370c030();
        }
      }
      piVar9 = piVar9 + 0x24;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 1438ebf60 FUN_1438ebf60 body=77 status=ok
// SIG undefined FUN_1438ebf60(void)

void FUN_1438ebf60(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438ec8d0(param_1,local_res18);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438ebfb0 FUN_1438ebfb0 body=216 status=ok
// SIG undefined FUN_1438ebfb0(void)

void FUN_1438ebfb0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    lVar3 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar4 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar3 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar3,param_2 + lVar3);
        *(undefined4 *)(lVar3 + 8) = 0x1ffff;
        *puVar1 = hkaiCollisionAvoidance::MediatorBoundaryGatherer::vftable;
        lVar2 = *(longlong *)(param_2 + 0x10 + lVar3);
        *(longlong *)(lVar3 + 0x10) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_2 + 0x18 + lVar3);
        lVar2 = *(longlong *)(param_2 + 0x20 + lVar3);
        *(longlong *)(lVar3 + 0x20) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_2 + 0x28 + lVar3);
      }
      lVar3 = lVar3 + 0x38;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1438ec090 FUN_1438ec090 body=18 status=ok
// SIG undefined FUN_1438ec090(void)

undefined8 * FUN_1438ec090(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14682b850;
  return param_2;
}



// FUNCTION 1438ec0b0 FUN_1438ec0b0 body=181 status=ok
// SIG undefined FUN_1438ec0b0(void)

void FUN_1438ec0b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    plVar2 = (longlong *)(param_2 + 0x18);
    lVar3 = (longlong)param_4;
    lVar4 = param_1 - param_2;
    do {
      lVar1 = lVar4 + -0x10 + (longlong)plVar2;
      FUN_1437182e0(lVar1,lVar1 + (param_2 - param_1));
      if (*plVar2 != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar4 + (longlong)plVar2) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar4 + (longlong)plVar2) = *plVar2;
      *(int *)(lVar4 + 8 + (longlong)plVar2) = (int)plVar2[1];
      if (plVar2[2] != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar4 + 0x10 + (longlong)plVar2) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar4 + 0x10 + (longlong)plVar2) = plVar2[2];
      *(int *)(lVar4 + 0x18 + (longlong)plVar2) = (int)plVar2[3];
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1438ec170 FUN_1438ec170 body=74 status=ok
// SIG undefined FUN_1438ec170(void)

void FUN_1438ec170(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438ec8a0(param_1,local_res18);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438ec1c0 FUN_1438ec1c0 body=18 status=ok
// SIG undefined FUN_1438ec1c0(void)

undefined8 * FUN_1438ec1c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14682b8b0;
  return param_2;
}



// FUNCTION 1438ec1e0 FUN_1438ec1e0 body=57 status=ok
// SIG undefined FUN_1438ec1e0(void)

undefined1 FUN_1438ec1e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x90);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0xa0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1438ec220 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiCollisionAvoidance::Character>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x110 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x22;
      plVar2 = plVar2 + -0x22;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1438ec280 FUN_1438ec280 body=77 status=ok
// SIG undefined FUN_1438ec280(void)

void FUN_1438ec280(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438ec7e0(param_1,local_res18);
      }
      param_1 = param_1 + 0x110;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438ec2d0 FUN_1438ec2d0 body=18 status=ok
// SIG undefined FUN_1438ec2d0(void)

undefined8 * FUN_1438ec2d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14682b950;
  return param_2;
}



// FUNCTION 1438ec2f0 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavVolumeDebugUtils::GeometryBuildSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143710920(param_1);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438ec330 FUN_1438ec330 body=139 status=ok
// SIG undefined FUN_1438ec330(void)

longlong FUN_1438ec330(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438ec930();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xd0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
    }
  }
  return param_1;
}



// FUNCTION 1438ec3c0 FUN_1438ec3c0 body=139 status=ok
// SIG undefined FUN_1438ec3c0(void)

longlong FUN_1438ec3c0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438ed9b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x38;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 1438ec450 func body=58 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiCollisionAvoidance::SimpleObstacleGenerator>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438ed3d0(param_1);
      }
      param_1 = param_1 + 0xd0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438ec490 FUN_1438ec490 body=602 status=ok
// SIG undefined FUN_1438ec490(void)

void FUN_1438ec490(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  int local_res20 [2];
  int local_38 [4];
  
  if (0 < param_4) {
    piVar13 = (int *)(param_1 + 0xa8);
    param_2 = param_2 - param_1;
    lVar14 = (longlong)param_4;
    do {
      piVar2 = piVar13 + -0x2a;
      if (piVar2 != (int *)0x0) {
        *(undefined ***)piVar2 = hkReferencedObject::vftable;
        FUN_143718270(piVar13 + -0x28,param_2 + -0xa0 + (longlong)piVar13);
        piVar13[-0x26] = 0x1ffff;
        *(undefined ***)piVar2 = hkaiCollisionAvoidance::ObstacleGenerator::vftable;
        *(undefined8 *)(piVar13 + -0x24) = *(undefined8 *)(param_2 + -0x90 + (longlong)piVar13);
        *(undefined ***)piVar2 = hkaiCollisionAvoidance::SimpleObstacleGenerator::vftable;
        *(undefined1 *)(piVar13 + -0x22) = *(undefined1 *)(param_2 + -0x88 + (longlong)piVar13);
        puVar12 = (undefined8 *)(param_2 + -0x78 + (longlong)piVar13);
        uVar10 = puVar12[1];
        *(undefined8 *)(piVar13 + -0x1e) = *puVar12;
        *(undefined8 *)(piVar13 + -0x1c) = uVar10;
        puVar12 = (undefined8 *)(param_2 + -0x68 + (longlong)piVar13);
        uVar10 = puVar12[1];
        *(undefined8 *)(piVar13 + -0x1a) = *puVar12;
        *(undefined8 *)(piVar13 + -0x18) = uVar10;
        puVar12 = (undefined8 *)(param_2 + -0x58 + (longlong)piVar13);
        uVar10 = puVar12[1];
        *(undefined8 *)(piVar13 + -0x16) = *puVar12;
        *(undefined8 *)(piVar13 + -0x14) = uVar10;
        puVar12 = (undefined8 *)(param_2 + -0x48 + (longlong)piVar13);
        uVar10 = puVar12[1];
        *(undefined8 *)(piVar13 + -0x12) = *puVar12;
        *(undefined8 *)(piVar13 + -0x10) = uVar10;
        piVar2 = (int *)(param_2 + -0x38 + (longlong)piVar13);
        iVar4 = piVar2[1];
        iVar9 = piVar2[2];
        iVar5 = piVar2[3];
        piVar13[-0xe] = *piVar2;
        piVar13[-0xd] = iVar4;
        piVar13[-0xc] = iVar9;
        piVar13[-0xb] = iVar5;
        piVar2 = (int *)(param_2 + -0x28 + (longlong)piVar13);
        iVar4 = piVar2[1];
        iVar9 = piVar2[2];
        iVar5 = piVar2[3];
        piVar13[-10] = *piVar2;
        piVar13[-9] = iVar4;
        piVar13[-8] = iVar9;
        piVar13[-7] = iVar5;
        piVar13[-6] = 0;
        piVar13[-5] = 0;
        piVar13[-4] = 0;
        piVar13[-3] = -0x80000000;
        iVar4 = *(int *)(param_2 + -0x10 + (longlong)piVar13);
        lVar15 = (longlong)iVar4;
        local_res20[0] = iVar4;
        uVar10 = FUN_143703a50();
        iVar9 = local_res20[0];
        lVar11 = 0;
        if (local_res20[0] != 0) {
          lVar11 = FUN_143702d60(uVar10,0x20,local_res20);
        }
        *(longlong *)(piVar13 + -6) = lVar11;
        piVar13[-4] = iVar9;
        iVar9 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar9 = local_res20[0];
        }
        piVar13[-3] = iVar9;
        if (0 < iVar4) {
          puVar12 = (undefined8 *)(lVar11 + 0x10);
          lVar11 = *(longlong *)(param_2 + -0x18 + (longlong)piVar13) - lVar11;
          do {
            puVar3 = (undefined4 *)(lVar11 + -0x10 + (longlong)puVar12);
            uVar6 = puVar3[1];
            uVar7 = puVar3[2];
            uVar8 = puVar3[3];
            *(undefined4 *)(puVar12 + -2) = *puVar3;
            *(undefined4 *)((longlong)puVar12 + -0xc) = uVar6;
            *(undefined4 *)(puVar12 + -1) = uVar7;
            *(undefined4 *)((longlong)puVar12 + -4) = uVar8;
            puVar1 = (undefined8 *)(lVar11 + (longlong)puVar12);
            uVar10 = puVar1[1];
            *puVar12 = *puVar1;
            puVar12[1] = uVar10;
            puVar12 = puVar12 + 4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        piVar13[-2] = 0;
        piVar13[-1] = 0;
        *piVar13 = 0;
        piVar13[1] = -0x80000000;
        iVar4 = *(int *)(param_2 + (longlong)piVar13);
        lVar15 = (longlong)iVar4;
        local_38[0] = iVar4;
        uVar10 = FUN_143703a50();
        iVar9 = local_38[0];
        lVar11 = 0;
        if (local_38[0] != 0) {
          lVar11 = FUN_143702d60(uVar10,0x20,local_38);
        }
        *(longlong *)(piVar13 + -2) = lVar11;
        *piVar13 = iVar9;
        iVar9 = -0x80000000;
        if (local_38[0] != 0) {
          iVar9 = local_38[0];
        }
        piVar13[1] = iVar9;
        if (0 < iVar4) {
          puVar12 = (undefined8 *)(lVar11 + 0x10);
          lVar11 = *(longlong *)(param_2 + -8 + (longlong)piVar13) - lVar11;
          do {
            puVar1 = (undefined8 *)(lVar11 + -0x10 + (longlong)puVar12);
            uVar10 = puVar1[1];
            puVar12[-2] = *puVar1;
            puVar12[-1] = uVar10;
            puVar1 = (undefined8 *)(lVar11 + (longlong)puVar12);
            uVar10 = puVar1[1];
            *puVar12 = *puVar1;
            puVar12[1] = uVar10;
            puVar12 = puVar12 + 4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        piVar2 = (int *)(param_2 + 8 + (longlong)piVar13);
        iVar4 = piVar2[1];
        iVar9 = piVar2[2];
        iVar5 = piVar2[3];
        piVar13[2] = *piVar2;
        piVar13[3] = iVar4;
        piVar13[4] = iVar9;
        piVar13[5] = iVar5;
        piVar2 = (int *)(param_2 + 0x18 + (longlong)piVar13);
        iVar4 = piVar2[1];
        iVar9 = piVar2[2];
        iVar5 = piVar2[3];
        piVar13[6] = *piVar2;
        piVar13[7] = iVar4;
        piVar13[8] = iVar9;
        piVar13[9] = iVar5;
      }
      piVar13 = piVar13 + 0x34;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 1438ec6f0 FUN_1438ec6f0 body=18 status=ok
// SIG undefined FUN_1438ec6f0(void)

undefined8 * FUN_1438ec6f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14682bb30;
  return param_2;
}



// FUNCTION 1438ec710 FUN_1438ec710 body=139 status=ok
// SIG undefined FUN_1438ec710(void)

longlong FUN_1438ec710(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438ecd50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x90;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
    }
  }
  return param_1;
}



// FUNCTION 1438ec7a0 FUN_1438ec7a0 body=64 status=ok
// SIG undefined FUN_1438ec7a0(void)

undefined1 FUN_1438ec7a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x50);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x60);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x70);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1438ec7e0 FUN_1438ec7e0 body=135 status=ok
// SIG undefined FUN_1438ec7e0(void)

undefined8 * FUN_1438ec7e0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiCollisionAvoidance::Character::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x19) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x3f000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80000000;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 1438ec870 FUN_1438ec870 body=35 status=ok
// SIG undefined FUN_1438ec870(void)

undefined8 * FUN_1438ec870(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiCollisionAvoidance::DefaultBoundaryGatherer::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1438ec8a0 FUN_1438ec8a0 body=35 status=ok
// SIG undefined FUN_1438ec8a0(void)

undefined8 * FUN_1438ec8a0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiCollisionAvoidance::MediatorBoundaryGatherer::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1438ec8d0 FUN_1438ec8d0 body=96 status=ok
// SIG undefined FUN_1438ec8d0(void)

undefined8 * FUN_1438ec8d0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiCollisionAvoidance::System::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
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
  return param_1;
}



// FUNCTION 1438ec930 FUN_1438ec930 body=167 status=ok
// SIG undefined FUN_1438ec930(void)

void FUN_1438ec930(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xac)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xa0),0x20,*(uint *)(param_1 + 0xac) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x9c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x90),0x20,*(uint *)(param_1 + 0x9c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438ec9e0 FUN_1438ec9e0 body=18 status=ok
// SIG undefined FUN_1438ec9e0(void)

undefined8 * FUN_1438ec9e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14682ba70;
  return param_2;
}



// FUNCTION 1438eca20 FUN_1438eca20 body=107 status=ok
// SIG undefined FUN_1438eca20(void)

undefined8 * FUN_1438eca20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkaiCollisionAvoidance::System::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = param_2[1];
  param_1[8] = *param_2;
  param_1[9] = uVar1;
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
  return param_1;
}



// FUNCTION 1438eca90 FUN_1438eca90 body=181 status=ok
// SIG undefined FUN_1438eca90(void)

void FUN_1438eca90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],0x10,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 3) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) {
    FUN_143702e10(uVar1,param_1[2],0x20,*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x20,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 1438ecb50 FUN_1438ecb50 body=306 status=ok
// SIG undefined FUN_1438ecb50(void)

void FUN_1438ecb50(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x60) + -1;
  if (-1 < iVar3) {
    lVar2 = (longlong)iVar3 * 0x60 + *(longlong *)(param_1 + 0x58);
    do {
      FUN_1438eca90(lVar2);
      lVar2 = lVar2 + -0x60;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (-1 < (int)*(uint *)(param_1 + 100)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x58),0x60,*(uint *)(param_1 + 100) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x54)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x48),0x20,*(uint *)(param_1 + 0x54) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),0x20,*(uint *)(param_1 + 0x44) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0x20,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438ecc90 FUN_1438ecc90 body=187 status=ok
// SIG undefined FUN_1438ecc90(void)

void FUN_1438ecc90(longlong param_1)

{
  FUN_1437967d0(param_1 + 0xf38);
  *(undefined ***)(param_1 + 0xf30) = hkTask::vftable;
  FUN_1437967d0(param_1 + 0xc28);
  *(undefined ***)(param_1 + 0xc20) = hkTask::vftable;
  *(undefined ***)(param_1 + 0xc10) = hkTask::vftable;
  *(undefined ***)(param_1 + 0xc00) = hkTask::vftable;
  *(undefined ***)(param_1 + 0xbf0) = hkTask::vftable;
  *(undefined ***)(param_1 + 0xbe0) = hkTask::vftable;
  *(undefined ***)(param_1 + 0xbd0) = hkTask::vftable;
  FUN_1437967d0(param_1 + 0x8c8);
  *(undefined ***)(param_1 + 0x8c0) = hkTask::vftable;
  FUN_1437967d0(param_1 + 0x5b8);
  *(undefined ***)(param_1 + 0x5b0) = hkTask::vftable;
  FUN_1437967d0(param_1 + 0x2a8);
  *(undefined ***)(param_1 + 0x2a0) = hkTask::vftable;
  *(undefined ***)(param_1 + 0x290) = hkTask::vftable;
  FUN_1438ecb50(param_1 + 0x220);
  FUN_14389f850(param_1);
  return;
}



// FUNCTION 1438ecd50 FUN_1438ecd50 body=436 status=ok
// SIG undefined FUN_1438ecd50(void)

void FUN_1438ecd50(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = hkaiCollisionAvoidance::System::vftable;
  plVar4 = (longlong *)param_1[10];
  plVar1 = plVar4 + *(int *)(param_1 + 0xb);
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    lVar2 = *plVar4;
    *(undefined8 *)(lVar2 + 0x100) = 0;
    *(undefined8 *)(lVar2 + 0x108) = 0xffffffffffffffff;
  }
  if (param_1[0x10] != 0) {
    FUN_14370c150();
  }
  uVar3 = FUN_143703a50();
  lVar2 = param_1[0xe];
  lVar5 = (longlong)(*(int *)(param_1 + 0xf) + -1);
  if (-1 < *(int *)(param_1 + 0xf) + -1) {
    do {
      if (*(longlong *)(lVar2 + lVar5 * 8) != 0) {
        FUN_14370c150();
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    FUN_143702e10(uVar3,param_1[0xe],8,*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) {
    FUN_143702e10(uVar3,param_1[0xc],8,*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  uVar3 = FUN_143703a50();
  lVar2 = param_1[10];
  lVar5 = (longlong)(*(int *)(param_1 + 0xb) + -1);
  if (-1 < *(int *)(param_1 + 0xb) + -1) {
    do {
      if (*(longlong *)(lVar2 + lVar5 * 8) != 0) {
        FUN_14370c150();
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) {
    FUN_143702e10(uVar3,param_1[10],8,*(uint *)((longlong)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  FUN_14370e7c0(param_1 + 7);
  FUN_14370e7c0(param_1 + 6);
  FUN_14370e7c0(param_1 + 5);
  FUN_14370e7c0(param_1 + 4);
  FUN_14370e7c0(param_1 + 3);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438ecf10 FUN_1438ecf10 body=244 status=ok
// SIG undefined FUN_1438ecf10(void)

void FUN_1438ecf10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *(longlong *)(param_2 + 0x100) = param_1;
  *(undefined4 *)(param_2 + 0x108) = *(undefined4 *)(param_1 + 0x58);
  FUN_14370c030(param_2);
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x58) == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1 + 0x50,8);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_1 + 0x58) * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_2;
    FUN_14370c030(param_2);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  FUN_14370c150(param_2);
  if (*(char *)(param_2 + 0xf8) == '\0') {
    *(undefined4 *)(param_2 + 0x10c) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)(param_1 + 0x68);
    uVar2 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x68) == (*(uint *)(param_1 + 0x6c) & 0x3fffffff)) {
      FUN_14370c460(uVar2,param_1 + 0x60,8);
    }
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x68) * 8);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = param_2;
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  }
  FUN_1438484d0(param_1 + 0x28,param_1,param_2);
  return;
}



// FUNCTION 1438ed010 FUN_1438ed010 body=153 status=ok
// SIG undefined FUN_1438ed010(void)

void FUN_1438ed010(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x78) == (*(uint *)(param_1 + 0x7c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1 + 0x70,8);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)*(int *)(param_1 + 0x78) * 8);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 = param_2, param_2 != 0)) {
    FUN_14370c030(param_2);
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  if (param_2 != 0) {
    FUN_14370c150(param_2);
  }
  FUN_1438484d0(param_1 + 0x18,param_1,param_2);
  return;
}



// FUNCTION 1438ed0b0 FUN_1438ed0b0 body=245 status=ok
// SIG undefined FUN_1438ed0b0(void)

void FUN_1438ed0b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)(*(int *)(param_1 + 0x58) + -1) * 8) +
   0x108) = *(undefined4 *)(param_2 + 0x108);
  iVar2 = *(int *)(param_2 + 0x108);
  lVar1 = (longlong)iVar2 * 8;
  if (*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x50)) != 0) {
    FUN_14370c150();
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
  if (*(int *)(param_1 + 0x58) != iVar2) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar1) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_1 + 0x58) * 8);
  }
  if (*(char *)(param_2 + 0xf8) != '\0') {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)(*(int *)(param_1 + 0x68) + -1) * 8) +
     0x10c) = *(undefined4 *)(param_2 + 0x10c);
    iVar2 = *(int *)(param_2 + 0x10c);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    if (*(int *)(param_1 + 0x68) != iVar2) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x68) * 8);
    }
  }
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0xffffffffffffffff;
  FUN_1438484d0(param_1 + 0x30,param_1,param_2);
  return;
}



// FUNCTION 1438ed1b0 FUN_1438ed1b0 body=187 status=ok
// SIG undefined FUN_1438ed1b0(void)

void FUN_1438ed1b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    plVar1 = *(longlong **)(param_1 + 0x70);
    uVar4 = uVar2;
    do {
      iVar3 = (int)uVar4;
      if (*plVar1 == param_2) goto LAB_1438ed206;
      uVar4 = (ulonglong)(iVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x78));
  }
  iVar3 = -1;
LAB_1438ed206:
  if (param_2 != 0) {
    FUN_14370c150(param_2);
  }
  if (*(longlong *)((longlong)iVar3 * 8 + *(longlong *)(param_1 + 0x70)) != 0) {
    FUN_14370c150();
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
  if (*(int *)(param_1 + 0x78) != iVar3) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar3 * 8) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)*(int *)(param_1 + 0x78) * 8);
  }
  FUN_1438484d0(param_1 + 0x20,param_1,param_2);
  return;
}



// FUNCTION 1438ed270 FUN_1438ed270 body=68 status=ok
// SIG undefined FUN_1438ed270(void)

void FUN_1438ed270(longlong param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)(*(int *)(param_1 + 0x68) + -1) * 8) +
   0x10c) = *(undefined4 *)(param_2 + 0x10c);
  iVar1 = *(int *)(param_2 + 0x10c);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  if (*(int *)(param_1 + 0x68) != iVar1) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 8) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x68) * 8);
  }
  return;
}



// FUNCTION 1438ed2c0 FUN_1438ed2c0 body=95 status=ok
// SIG undefined FUN_1438ed2c0(void)

void FUN_1438ed2c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)(param_1 + 0x68);
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x68) == (*(uint *)(param_1 + 0x6c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,(longlong *)(param_1 + 0x60),8);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x68) * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_2;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}



// FUNCTION 1438ed320 FUN_1438ed320 body=172 status=ok
// SIG undefined FUN_1438ed320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1438ed320(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  undefined1 local_1248 [4664];
  undefined8 uStack_10;
  
  uStack_10 = 0x1438ed33a;
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TthkaiCollisionAvoidance::System::step");
  }
  FUN_1438edac0(local_1248,param_1,param_3);
  FUN_143770b00(local_1248,param_2,0);
  FUN_143787740(param_1 + 0x38,param_1);
  FUN_1438ecc90(local_1248);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438ed3d0 FUN_1438ed3d0 body=182 status=ok
// SIG undefined FUN_1438ed3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1438ed3d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1438ee460();
  *param_1 = hkaiCollisionAvoidance::SimpleObstacleGenerator::vftable;
  *(undefined1 *)(param_1 + 4) = 1;
  uVar1 = uRam00000001467f0898;
  param_1[6] = _DAT_1467f0890;
  param_1[7] = uVar1;
  uVar1 = uRam00000001467f08a8;
  param_1[8] = _DAT_1467f08a0;
  param_1[9] = uVar1;
  uVar1 = uRam00000001467f08b8;
  param_1[10] = _DAT_1467f08b0;
  param_1[0xb] = uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  uVar1 = uRam00000001467f08d8;
  param_1[0x16] = _DAT_1467f08d0;
  param_1[0x17] = uVar1;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x16) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xb4) ^ 0x80000000;
  *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x17) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0xcc) = *(uint *)((longlong)param_1 + 0xbc) ^ 0x80000000;
  return param_1;
}



// FUNCTION 1438ed490 FUN_1438ed490 body=160 status=ok
// SIG undefined FUN_1438ed490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438ed490(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0xa8) == (*(uint *)(param_1 + 0xac) & 0x3fffffff)) {
    FUN_14370c460(uVar1,(longlong *)(param_1 + 0xa0),0x20);
  }
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)((longlong)*(int *)(param_1 + 0xa8) * 0x20 + *(longlong *)(param_1 + 0xa0))
  ;
  *puVar2 = *param_2;
  puVar2[1] = uVar1;
  uVar1 = param_2[3];
  puVar2[2] = param_2[2];
  puVar2[3] = uVar1;
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  uVar1 = uRam00000001467f08d8;
  *(undefined8 *)(param_1 + 0xb0) = _DAT_1467f08d0;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xb0) ^ 0x80000000;
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xb4) ^ 0x80000000;
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 0xb8) ^ 0x80000000;
  *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xbc) ^ 0x80000000;
  return;
}



// FUNCTION 1438ed530 FUN_1438ed530 body=160 status=ok
// SIG undefined FUN_1438ed530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438ed530(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x98) == (*(uint *)(param_1 + 0x9c) & 0x3fffffff)) {
    FUN_14370c460(uVar1,(longlong *)(param_1 + 0x90),0x20);
  }
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)((longlong)*(int *)(param_1 + 0x98) * 0x20 + *(longlong *)(param_1 + 0x90))
  ;
  *puVar2 = *param_2;
  puVar2[1] = uVar1;
  uVar1 = param_2[3];
  puVar2[2] = param_2[2];
  puVar2[3] = uVar1;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  uVar1 = uRam00000001467f08d8;
  *(undefined8 *)(param_1 + 0xb0) = _DAT_1467f08d0;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xb0) ^ 0x80000000;
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xb4) ^ 0x80000000;
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 0xb8) ^ 0x80000000;
  *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xbc) ^ 0x80000000;
  return;
}



// FUNCTION 1438ed5d0 FUN_1438ed5d0 body=646 status=ok
// SIG undefined FUN_1438ed5d0(void)

void FUN_1438ed5d0(longlong param_1,undefined1 (*param_2) [16],longlong *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar18;
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  pfVar10 = *(float **)(param_1 + 0x90);
  pfVar11 = pfVar10 + (longlong)*(int *)(param_1 + 0x98) * 8;
  pfVar9 = (float *)register0x00000020;
  for (; pfVar10 != pfVar11; pfVar10 = pfVar10 + 8) {
    local_48 = *pfVar10;
    fStack_44 = pfVar10[1];
    fStack_40 = pfVar10[2];
    fStack_3c = pfVar10[3];
    fStack_5c = pfVar10[3];
    local_68 = fStack_44 * *(float *)(param_1 + 0x40) + local_48 * *(float *)(param_1 + 0x30) +
               fStack_40 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x60);
    fStack_64 = fStack_44 * *(float *)(param_1 + 0x44) + local_48 * *(float *)(param_1 + 0x34) +
                fStack_40 * *(float *)(param_1 + 0x54) + *(float *)(param_1 + 100);
    fStack_60 = fStack_44 * *(float *)(param_1 + 0x48) + local_48 * *(float *)(param_1 + 0x38) +
                fStack_40 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x68);
    auVar14._4_4_ = fStack_64;
    auVar14._0_4_ = local_68;
    auVar14._8_4_ = fStack_60;
    auVar14._12_4_ =
         fStack_44 * *(float *)(param_1 + 0x4c) + local_48 * *(float *)(param_1 + 0x3c) +
         fStack_40 * *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x6c);
    auVar14 = maxps(auVar14,*param_2);
    auVar14 = minps(auVar14,param_2[1]);
    fVar13 = auVar14._0_4_ - local_68;
    fVar18 = auVar14._4_4_ - fStack_64;
    fVar19 = auVar14._8_4_ - fStack_60;
    if (fVar18 * fVar18 + fVar13 * fVar13 + fVar19 * fVar19 <= fStack_5c * fStack_5c) {
      FUN_143889180(param_1 + 0x30,&local_48,pfVar10 + 4,&local_58);
      uVar8 = FUN_143703a50();
      if (*(uint *)(param_3 + 3) == (*(uint *)((longlong)param_3 + 0x1c) & 0x3fffffff)) {
        FUN_14370c460(uVar8,param_3 + 2,0x20);
      }
      pfVar9 = (float *)((longlong)(int)param_3[3] * 0x20 + param_3[2]);
      *(ulonglong *)pfVar9 = CONCAT44(fStack_64,local_68);
      *(ulonglong *)(pfVar9 + 2) = CONCAT44(fStack_5c,fStack_60);
      *(undefined8 *)(pfVar9 + 4) = local_58;
      *(undefined8 *)(pfVar9 + 6) = uStack_50;
      *(int *)(param_3 + 3) = (int)param_3[3] + 1;
    }
  }
  pfVar10 = *(float **)(param_1 + 0xa0);
  pfVar11 = pfVar10 + (longlong)*(int *)(param_1 + 0xa8) * 8;
  for (; pfVar10 != pfVar11; pfVar10 = pfVar10 + 8) {
    fVar13 = *pfVar10;
    fVar18 = pfVar10[1];
    fVar19 = pfVar10[2];
    fVar2 = pfVar10[4];
    fVar3 = pfVar10[5];
    fVar4 = pfVar10[6];
    local_68 = fVar18 * *(float *)(param_1 + 0x40) + fVar13 * *(float *)(param_1 + 0x30) +
               fVar19 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x60);
    fStack_64 = fVar18 * *(float *)(param_1 + 0x44) + fVar13 * *(float *)(param_1 + 0x34) +
                fVar19 * *(float *)(param_1 + 0x54) + *(float *)(param_1 + 100);
    fStack_60 = fVar18 * *(float *)(param_1 + 0x48) + fVar13 * *(float *)(param_1 + 0x38) +
                fVar19 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x68);
    fStack_5c = fVar18 * *(float *)(param_1 + 0x4c) + fVar13 * *(float *)(param_1 + 0x3c) +
                fVar19 * *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x6c);
    local_48 = fVar2 * *(float *)(param_1 + 0x30) + fVar3 * *(float *)(param_1 + 0x40) +
               fVar4 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x60);
    fStack_44 = fVar2 * *(float *)(param_1 + 0x34) + fVar3 * *(float *)(param_1 + 0x44) +
                fVar4 * *(float *)(param_1 + 0x54) + *(float *)(param_1 + 100);
    fStack_40 = fVar2 * *(float *)(param_1 + 0x38) + fVar3 * *(float *)(param_1 + 0x48) +
                fVar4 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x68);
    fStack_3c = fVar2 * *(float *)(param_1 + 0x3c) + fVar3 * *(float *)(param_1 + 0x4c) +
                fVar4 * *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x6c);
    if (*(char *)(param_1 + 0x20) == '\0') {
      auVar15._4_4_ = fStack_64;
      auVar15._0_4_ = local_68;
      auVar15._8_4_ = fStack_60;
      auVar15._12_4_ = fStack_5c;
      auVar16._4_4_ = fStack_44;
      auVar16._0_4_ = local_48;
      auVar16._8_4_ = fStack_40;
      auVar16._12_4_ = fStack_3c;
      auVar16 = minps(auVar15,auVar16);
      auVar12._4_4_ = fStack_64;
      auVar12._0_4_ = local_68;
      auVar12._8_4_ = fStack_60;
      auVar12._12_4_ = fStack_5c;
      auVar1._4_4_ = fStack_44;
      auVar1._0_4_ = local_48;
      auVar1._8_4_ = fStack_40;
      auVar1._12_4_ = fStack_3c;
      auVar14 = maxps(auVar12,auVar1);
      auVar17._0_4_ =
           -(uint)(auVar16._0_4_ <= *(float *)param_2[1] && *(float *)*param_2 <= auVar14._0_4_);
      auVar17._4_4_ =
           -(uint)(*(float *)(*param_2 + 4) <= auVar14._4_4_ &&
                  auVar16._4_4_ <= *(float *)(param_2[1] + 4));
      auVar17._8_4_ =
           -(uint)(auVar16._8_4_ <= *(float *)(param_2[1] + 8) &&
                  *(float *)(*param_2 + 8) <= auVar14._8_4_);
      auVar17._12_4_ =
           -(uint)(*(float *)(*param_2 + 0xc) <= auVar14._12_4_ &&
                  auVar16._12_4_ <= *(float *)(param_2[1] + 0xc));
      uVar7 = movmskps((int)pfVar9,auVar17);
      pfVar9 = (float *)(ulonglong)(((byte)uVar7 & 7) == 7);
    }
    else {
      pfVar9 = (float *)FUN_1438a1be0(param_2,&local_68,&local_48);
    }
    fVar6 = fStack_3c;
    fVar5 = fStack_40;
    fVar4 = fStack_44;
    fVar3 = local_48;
    fVar2 = fStack_5c;
    fVar19 = fStack_60;
    fVar18 = fStack_64;
    fVar13 = local_68;
    if ((char)pfVar9 != '\0') {
      uVar8 = FUN_143703a50();
      if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar8,param_3,0x20);
      }
      pfVar9 = (float *)((longlong)(int)param_3[1] * 0x20 + *param_3);
      *pfVar9 = fVar13;
      pfVar9[1] = fVar18;
      pfVar9[2] = fVar19;
      pfVar9[3] = fVar2;
      pfVar9[4] = fVar3;
      pfVar9[5] = fVar4;
      pfVar9[6] = fVar5;
      pfVar9[7] = fVar6;
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
    }
  }
  return;
}



// FUNCTION 1438ed860 FUN_1438ed860 body=168 status=ok
// SIG undefined FUN_1438ed860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438ed860(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float *pfVar6;
  undefined1 (*pauVar7) [16];
  float *pfVar8;
  undefined1 (*pauVar9) [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  pfVar6 = *(float **)(param_1 + 0x90);
  pfVar8 = pfVar6 + (longlong)*(int *)(param_1 + 0x98) * 8;
  auVar16._0_8_ = (ulonglong)DAT_1467f08d0 ^ 0x8000000080000000;
  auVar16._8_4_ = DAT_1467f08d0._8_4_ ^ 0x80000000;
  auVar16._12_4_ = DAT_1467f08d0._12_4_ ^ 0x80000000;
  auVar18 = _DAT_1467f08d0;
  while (pfVar6 != pfVar8) {
    fVar13 = *pfVar6;
    pfVar3 = pfVar6 + 1;
    pfVar4 = pfVar6 + 2;
    fVar5 = pfVar6[3];
    pfVar6 = pfVar6 + 8;
    fVar10 = fVar13 - fVar5;
    fVar11 = *pfVar3 - fVar5;
    fVar12 = *pfVar4 - fVar5;
    fVar13 = fVar13 + fVar5;
    fVar14 = *pfVar3 + fVar5;
    fVar15 = *pfVar4 + fVar5;
    auVar17._4_4_ = fVar11;
    auVar17._0_4_ = fVar10;
    auVar17._8_4_ = fVar12;
    auVar17._12_4_ = fVar5 - fVar5;
    auVar17 = minps(auVar18,auVar17);
    auVar18._4_4_ = fVar11;
    auVar18._0_4_ = fVar10;
    auVar18._8_4_ = fVar12;
    auVar18._12_4_ = fVar5 - fVar5;
    auVar16 = maxps(auVar16,auVar18);
    auVar1._4_4_ = fVar14;
    auVar1._0_4_ = fVar13;
    auVar1._8_4_ = fVar15;
    auVar1._12_4_ = fVar5 + fVar5;
    auVar18 = minps(auVar17,auVar1);
    auVar2._4_4_ = fVar14;
    auVar2._0_4_ = fVar13;
    auVar2._8_4_ = fVar15;
    auVar2._12_4_ = fVar5 + fVar5;
    auVar16 = maxps(auVar16,auVar2);
  }
  pauVar7 = *(undefined1 (**) [16])(param_1 + 0xa0);
  pauVar9 = pauVar7 + (longlong)*(int *)(param_1 + 0xa8) * 2;
  for (; pauVar7 != pauVar9; pauVar7 = pauVar7 + 2) {
    auVar18 = minps(auVar18,*pauVar7);
    auVar16 = maxps(auVar16,*pauVar7);
    auVar18 = minps(auVar18,pauVar7[1]);
    auVar16 = maxps(auVar16,pauVar7[1]);
  }
  *(undefined1 (*) [16])(param_1 + 0xb0) = auVar18;
  *(undefined1 (*) [16])(param_1 + 0xc0) = auVar16;
  return;
}



// FUNCTION 1438ed910 FUN_1438ed910 body=64 status=ok
// SIG undefined FUN_1438ed910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438ed910(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar1 = uRam00000001467f08d8;
  *(undefined8 *)(param_1 + 0xb0) = _DAT_1467f08d0;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xb0) ^ 0x80000000;
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xb4) ^ 0x80000000;
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 0xb8) ^ 0x80000000;
  *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xbc) ^ 0x80000000;
  return;
}



// FUNCTION 1438ed950 FUN_1438ed950 body=45 status=ok
// SIG undefined FUN_1438ed950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438ed950(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_1467f06e0;
  uStack_14 = uRam00000001467f06e4;
  uStack_10 = uRam00000001467f06e8;
  uStack_c = DAT_1467f06ec;
  FUN_143717ce0(param_1 + 0x30,param_1 + 0xb0,&local_18,param_2);
  return;
}



// FUNCTION 1438ed980 FUN_1438ed980 body=44 status=ok
// SIG undefined FUN_1438ed980(void)

void FUN_1438ed980(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143dfc280(param_1 + 0xb0);
  if (cVar1 == '\0') {
    FUN_1438ed860(param_1);
    return;
  }
  return;
}



// FUNCTION 1438ed9b0 FUN_1438ed9b0 body=60 status=ok
// SIG undefined FUN_1438ed9b0(void)

void FUN_1438ed9b0(undefined8 *param_1)

{
  *param_1 = hkaiCollisionAvoidance::MediatorBoundaryGatherer::vftable;
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438ed9f0 FUN_1438ed9f0 body=109 status=ok
// SIG undefined FUN_1438ed9f0(void)

void FUN_1438ed9f0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [520];
  
  FUN_1438eb4c0(param_2,local_228);
  FUN_1437134a0(local_248,local_208,0x200);
  Electra::FHTTPResourceRequest::URL(local_248,&DAT_145c5ab90);
  iVar2 = FUN_143732300(0x23aa6a2e,local_208,"BoundaryGatherer\\hkaiMediatorBoundaryGatherer.cpp",
                        0x34);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_248);
  return;
}



// FUNCTION 1438eda60 FUN_1438eda60 body=96 status=ok
// SIG undefined FUN_1438eda60(void)

void FUN_1438eda60(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [520];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL(local_228,&DAT_145c5ab90);
  iVar2 = FUN_143732300(0x427d313d,local_208,"BoundaryGatherer\\hkaiMediatorBoundaryGatherer.cpp",
                        0x26);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  return;
}



// FUNCTION 1438edac0 FUN_1438edac0 body=2165 status=ok
// SIG undefined FUN_1438edac0(void)

undefined8 * FUN_1438edac0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined8 *local_res8;
  undefined4 local_res18 [4];
  
  puVar1 = param_1 + 0x44;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_1 + 5;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000010;
  param_1[0x35] = param_1 + 0x37;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x80000010;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0x80000000;
  *param_1 = hkaiCollisionAvoidance::StepTaskGraph::vftable;
  param_1[0x45] = 0;
  param_1[0x47] = param_2;
  *puVar1 = hkaiCollisionAvoidance::StepContext::vftable;
  *(undefined4 *)(param_1 + 0x46) = 0x1ffff;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x80000000;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x80000000;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x80000000;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x80000000;
  local_res8 = param_1;
  local_res18[0] = param_3;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(param_1 + 0x52,puVar1);
  FUN_1438ee510(param_1 + 0x54,puVar1);
  FUN_1438ee630(param_1 + 0xb6,puVar1);
  FUN_1438ee740(param_1 + 0x118,puVar1);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(param_1 + 0x17a,param_1 + 0x4b);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(param_1 + 0x17c,param_1 + 0x49);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(param_1 + 0x17e,local_res8 + 0x4d);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_res8 + 0x180,puVar1);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_res8 + 0x182,puVar1);
  FUN_1438ee5a0(local_res8 + 0x184,puVar1);
  FUN_1438ee480(local_res8 + 0x1e6,puVar1);
  puVar1 = local_res8;
  FUN_143770720(local_res8,0xb,0xf);
  puVar6 = (undefined2 *)FUN_1437702e0(puVar1,&local_res8,param_1 + 0x52,0x40);
  uVar5 = local_res18[0];
  *(undefined2 *)(puVar1 + 0x41) = *puVar6;
  puVar6 = (undefined2 *)FUN_143770380(puVar1,local_res18,param_1 + 0x54,local_res18[0],1,0x40);
  *(undefined2 *)((longlong)puVar1 + 0x20a) = *puVar6;
  puVar6 = (undefined2 *)FUN_143770380(puVar1,local_res18,param_1 + 0xb6,uVar5,1,0x40);
  *(undefined2 *)((longlong)puVar1 + 0x20c) = *puVar6;
  puVar6 = (undefined2 *)FUN_143770380(puVar1,local_res18,param_1 + 0x118,uVar5,1,0x40);
  *(undefined2 *)((longlong)puVar1 + 0x20e) = *puVar6;
  puVar6 = (undefined2 *)FUN_1437702e0(puVar1,local_res18,param_1 + 0x17a,0x40);
  *(undefined2 *)(puVar1 + 0x42) = *puVar6;
  puVar6 = (undefined2 *)FUN_1437702e0(puVar1,local_res18,param_1 + 0x17c,0x40);
  *(undefined2 *)((longlong)puVar1 + 0x212) = *puVar6;
  puVar6 = (undefined2 *)FUN_1437702e0(puVar1,local_res18,param_1 + 0x17e,0x40);
  *(undefined2 *)((longlong)puVar1 + 0x214) = *puVar6;
  puVar6 = (undefined2 *)FUN_1437702e0(puVar1,local_res18,puVar1 + 0x180,0x40);
  *(undefined2 *)((longlong)puVar1 + 0x216) = *puVar6;
  puVar6 = (undefined2 *)FUN_1437702e0(puVar1,local_res18,puVar1 + 0x182,0x40);
  *(undefined2 *)(puVar1 + 0x43) = *puVar6;
  puVar6 = (undefined2 *)FUN_143770380(puVar1,local_res18,puVar1 + 0x184,uVar5,1,0x40);
  *(undefined2 *)((longlong)puVar1 + 0x21a) = *puVar6;
  puVar6 = (undefined2 *)FUN_143770380(puVar1,local_res18,puVar1 + 0x1e6,uVar5,1,0x40);
  *(undefined2 *)((longlong)puVar1 + 0x21c) = *puVar6;
  uVar3 = *(undefined2 *)((longlong)puVar1 + 0x20a);
  uVar4 = *(undefined2 *)(puVar1 + 0x41);
  uVar7 = FUN_143703a50();
  plVar2 = puVar1 + 0x35;
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)((longlong)puVar1 + 0x20c);
  uVar4 = *(undefined2 *)(puVar1 + 0x41);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)((longlong)puVar1 + 0x20e);
  uVar4 = *(undefined2 *)(puVar1 + 0x41);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)(puVar1 + 0x43);
  uVar4 = *(undefined2 *)((longlong)puVar1 + 0x20a);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)((longlong)puVar1 + 0x216);
  uVar4 = *(undefined2 *)((longlong)puVar1 + 0x20a);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)(puVar1 + 0x42);
  uVar4 = *(undefined2 *)((longlong)puVar1 + 0x20c);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)((longlong)puVar1 + 0x212);
  uVar4 = *(undefined2 *)((longlong)puVar1 + 0x20c);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)((longlong)puVar1 + 0x214);
  uVar4 = *(undefined2 *)((longlong)puVar1 + 0x20e);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)((longlong)puVar1 + 0x216);
  uVar4 = *(undefined2 *)(puVar1 + 0x42);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)((longlong)puVar1 + 0x216);
  uVar4 = *(undefined2 *)((longlong)puVar1 + 0x212);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)(puVar1 + 0x43);
  uVar4 = *(undefined2 *)((longlong)puVar1 + 0x214);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)(puVar1 + 0x43);
  uVar4 = *(undefined2 *)((longlong)puVar1 + 0x212);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)((longlong)puVar1 + 0x21a);
  uVar4 = *(undefined2 *)((longlong)puVar1 + 0x216);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)((longlong)puVar1 + 0x21a);
  uVar4 = *(undefined2 *)(puVar1 + 0x43);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  uVar3 = *(undefined2 *)((longlong)puVar1 + 0x21c);
  uVar4 = *(undefined2 *)((longlong)puVar1 + 0x21a);
  uVar7 = FUN_143703a50();
  if (*(uint *)(puVar1 + 0x36) == (*(uint *)((longlong)puVar1 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar2,4);
  }
  puVar6 = (undefined2 *)(*plVar2 + (longlong)*(int *)(puVar1 + 0x36) * 4);
  *(int *)(puVar1 + 0x36) = *(int *)(puVar1 + 0x36) + 1;
  *puVar6 = uVar4;
  puVar6[1] = uVar3;
  return puVar1;
}



// FUNCTION 1438ee340 FUN_1438ee340 body=139 status=ok
// SIG undefined FUN_1438ee340(void)

longlong FUN_1438ee340(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438ecb50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x68;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
    }
  }
  return param_1;
}



// FUNCTION 1438ee3d0 FUN_1438ee3d0 body=139 status=ok
// SIG undefined FUN_1438ee3d0(void)

longlong FUN_1438ee3d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438ecc90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x1240;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1240);
    }
  }
  return param_1;
}



// FUNCTION 1438ee460 FUN_1438ee460 body=31 status=ok
// SIG undefined FUN_1438ee460(void)

undefined8 * FUN_1438ee460(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiCollisionAvoidance::ObstacleGenerator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1438ee480 FUN_1438ee480 body=136 status=ok
// SIG undefined FUN_1438ee480(void)

undefined8 * FUN_1438ee480(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x68);
  *param_1 = hkBatchTaskBase<hkTask,hkaiCollisionAvoidance::Tasks::ApplySolverOutput>::vftable;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[10] = param_1 + 0xc;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000005;
  param_1[0x34] = param_1 + 0x36;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000005;
  *(undefined4 *)(param_1 + 0x5e) = uVar1;
  FUN_143df9d10(param_1 + 1,uVar1,uVar2);
  param_1[0x60] = param_2;
  *param_1 = hkaiCollisionAvoidance::Tasks::ApplySolverOutput::vftable;
  return param_1;
}



// FUNCTION 1438ee510 FUN_1438ee510 body=136 status=ok
// SIG undefined FUN_1438ee510(void)

undefined8 * FUN_1438ee510(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x68);
  *param_1 = hkBatchTaskBase<hkTask,hkaiCollisionAvoidance::Tasks::ClearNeighborCollectors>::vftable
  ;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[10] = param_1 + 0xc;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000005;
  param_1[0x34] = param_1 + 0x36;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000005;
  *(undefined4 *)(param_1 + 0x5e) = uVar1;
  FUN_143df9d10(param_1 + 1,uVar1,uVar2);
  param_1[0x60] = param_2;
  *param_1 = hkaiCollisionAvoidance::Tasks::ClearNeighborCollectors::vftable;
  return param_1;
}



// FUNCTION 1438ee5a0 FUN_1438ee5a0 body=136 status=ok
// SIG undefined FUN_1438ee5a0(void)

undefined8 * FUN_1438ee5a0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x68);
  *param_1 = hkBatchTaskBase<hkTask,hkaiCollisionAvoidance::Tasks::GatherBoundariesAndSolveCharacters>
             ::vftable;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[10] = param_1 + 0xc;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000005;
  param_1[0x34] = param_1 + 0x36;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000005;
  *(undefined4 *)(param_1 + 0x5e) = uVar1;
  FUN_143df9d10(param_1 + 1,uVar1,uVar2);
  param_1[0x60] = param_2;
  *param_1 = hkaiCollisionAvoidance::Tasks::GatherBoundariesAndSolveCharacters::vftable;
  return param_1;
}



// FUNCTION 1438ee630 FUN_1438ee630 body=136 status=ok
// SIG undefined FUN_1438ee630(void)

undefined8 * FUN_1438ee630(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x58);
  *param_1 = hkBatchTaskBase<hkTask,hkaiCollisionAvoidance::Tasks::GatherCharacterAabbs>::vftable;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[10] = param_1 + 0xc;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000005;
  param_1[0x34] = param_1 + 0x36;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000005;
  *(undefined4 *)(param_1 + 0x5e) = uVar1;
  FUN_143df9d10(param_1 + 1,uVar1,uVar2);
  param_1[0x60] = param_2;
  *param_1 = hkaiCollisionAvoidance::Tasks::GatherCharacterAabbs::vftable;
  return param_1;
}



// FUNCTION 1438ee6c0 FBinaryArchiveFormatter body=18 status=ok
// SIG undefined FBinaryArchiveFormatter(void)

undefined8 *
FBinaryArchiveFormatter::FBinaryArchiveFormatter(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = hkaiCollisionAvoidance::Tasks::InitContext::vftable;
  return param_1;
}



// FUNCTION 1438ee6e0 FBinaryArchiveFormatter body=18 status=ok
// SIG undefined FBinaryArchiveFormatter(void)

undefined8 *
FBinaryArchiveFormatter::FBinaryArchiveFormatter(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = hkaiCollisionAvoidance::Tasks::ScanCharacterAabbs::vftable;
  return param_1;
}



// FUNCTION 1438ee700 FBinaryArchiveFormatter body=18 status=ok
// SIG undefined FBinaryArchiveFormatter(void)

undefined8 *
FBinaryArchiveFormatter::FBinaryArchiveFormatter(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = hkaiCollisionAvoidance::Tasks::ScanObstacleGeneratorAabbs::vftable;
  return param_1;
}



// FUNCTION 1438ee720 FBinaryArchiveFormatter body=18 status=ok
// SIG undefined FBinaryArchiveFormatter(void)

undefined8 *
FBinaryArchiveFormatter::FBinaryArchiveFormatter(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = hkaiCollisionAvoidance::Tasks::SortAabbs::vftable;
  return param_1;
}



// FUNCTION 1438ee740 FUN_1438ee740 body=136 status=ok
// SIG undefined FUN_1438ee740(void)

undefined8 * FUN_1438ee740(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x78);
  *param_1 = hkBatchTaskBase<hkTask,hkaiCollisionAvoidance::Tasks::UpdateAndGatherObstacleAabbs>::
             vftable;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[10] = param_1 + 0xc;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000005;
  param_1[0x34] = param_1 + 0x36;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000005;
  *(undefined4 *)(param_1 + 0x5e) = uVar1;
  FUN_143df9d10(param_1 + 1,uVar1,uVar2);
  param_1[0x60] = param_2;
  *param_1 = hkaiCollisionAvoidance::Tasks::UpdateAndGatherObstacleAabbs::vftable;
  return param_1;
}



// FUNCTION 1438ee7d0 FUN_1438ee7d0 body=129 status=ok
// SIG undefined FUN_1438ee7d0(void)

undefined8 * FUN_1438ee7d0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1437967d0(param_1 + 1);
  *param_1 = hkTask::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x300);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 1438ee860 FUN_1438ee860 body=129 status=ok
// SIG undefined FUN_1438ee860(void)

undefined8 * FUN_1438ee860(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1437967d0(param_1 + 1);
  *param_1 = hkTask::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x310);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x310);
  }
  return param_1;
}



// FUNCTION 1438ee8f0 FUN_1438ee8f0 body=51 status=ok
// SIG undefined FUN_1438ee8f0(void)

int FUN_1438ee8f0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  
  iVar1 = param_2 * 2 + 2;
  iVar2 = param_2 * 2 + 1;
  if ((int)param_1[1] <= iVar1) {
    return iVar2;
  }
  fVar4 = *(float *)(*param_1 + 8 + (longlong)iVar2 * 0x10);
  pfVar3 = (float *)(*param_1 + 8 + (longlong)iVar1 * 0x10);
  if (*pfVar3 <= fVar4 && fVar4 != *pfVar3) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// FUNCTION 1438ee930 FUN_1438ee930 body=157 status=ok
// SIG undefined FUN_1438ee930(void)

int FUN_1438ee930(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar7 = param_1[1];
  iVar8 = FUN_1438ee8f0();
  while( true ) {
    iVar6 = iVar8;
    if ((int)lVar7 <= iVar6) {
      return param_2;
    }
    lVar2 = *param_1;
    lVar9 = (longlong)param_2;
    lVar10 = (longlong)iVar6;
    if (*(float *)(lVar2 + 8 + lVar10 * 0x10) <= *(float *)(lVar2 + 8 + lVar9 * 0x10)) break;
    puVar1 = (undefined4 *)(lVar2 + lVar9 * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    *(undefined8 *)(lVar2 + lVar9 * 0x10) = *(undefined8 *)(lVar2 + lVar10 * 0x10);
    *(undefined4 *)(lVar2 + 8 + lVar9 * 0x10) = *(undefined4 *)(lVar2 + 8 + lVar10 * 0x10);
    puVar1 = (undefined4 *)(lVar2 + lVar10 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    *(undefined4 *)(lVar2 + 8 + lVar10 * 0x10) = uVar5;
    iVar8 = FUN_1438ee8f0(param_1,iVar6);
    param_2 = iVar6;
  }
  return param_2;
}



// FUNCTION 1438ee9d0 FUN_1438ee9d0 body=95 status=ok
// SIG undefined FUN_1438ee9d0(void)

void FUN_1438ee9d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x300) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x60);
  iVar1 = *(int *)(lVar2 + 0x68);
  *param_2 = lVar3;
  param_2[1] = lVar3 + (longlong)iVar1 * 8;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x300) + 0x58);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0x60);
  param_2[2] = lVar2;
  param_2[3] = (longlong)iVar1 * 0x60 + lVar2;
  return;
}



// FUNCTION 1438eea30 FUN_1438eea30 body=118 status=ok
// SIG undefined FUN_1438eea30(void)

void FUN_1438eea30(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x300) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x60);
  iVar1 = *(int *)(lVar2 + 0x68);
  *param_2 = lVar3;
  param_2[1] = lVar3 + (longlong)iVar1 * 8;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x300) + 0x58);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0x60);
  param_2[2] = lVar2;
  param_2[3] = (longlong)iVar1 * 0x60 + lVar2;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x300) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  param_2[4] = *(longlong *)(lVar2 + 0x40);
  param_2[5] = lVar3;
  return;
}



// FUNCTION 1438eeab0 FUN_1438eeab0 body=129 status=ok
// SIG undefined FUN_1438eeab0(void)

void FUN_1438eeab0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x300) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x50);
  iVar1 = *(int *)(lVar2 + 0x58);
  *param_2 = lVar3;
  param_2[1] = lVar3 + (longlong)iVar1 * 8;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x300) + 0x28);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0x30);
  param_2[2] = lVar2;
  param_2[3] = (longlong)iVar1 * 0x20 + lVar2;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x300) + 0x38);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0x40);
  param_2[4] = lVar2;
  param_2[5] = (longlong)iVar1 * 0x20 + lVar2;
  return;
}



// FUNCTION 1438eeb40 FUN_1438eeb40 body=87 status=ok
// SIG undefined FUN_1438eeb40(void)

void FUN_1438eeb40(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x300) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x70);
  iVar1 = *(int *)(lVar2 + 0x78);
  *param_2 = lVar3;
  param_2[1] = lVar3 + (longlong)iVar1 * 8;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x300) + 0x48);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0x50);
  param_2[2] = lVar2;
  param_2[3] = (longlong)iVar1 * 0x20 + lVar2;
  return;
}



// FUNCTION 1438eeba0 FUN_1438eeba0 body=183 status=ok
// SIG undefined FUN_1438eeba0(void)

void FUN_1438eeba0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  uVar1 = *param_2;
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1,0x10);
  }
  puVar3 = (undefined4 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  if (puVar3 != (undefined4 *)0x0) {
    local_18 = (undefined4)uVar1;
    uStack_14 = (undefined4)((ulonglong)uVar1 >> 0x20);
    *puVar3 = local_18;
    puVar3[1] = uStack_14;
    puVar3[2] = param_3;
    puVar3[3] = uStack_c;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  iVar4 = (int)param_1[1];
  if (iVar4 != (int)param_1[2] + 1) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    FUN_1438efc80(param_1,iVar4 + -1);
    FUN_1438efc20(param_1,0);
    return;
  }
  for (iVar4 = iVar4 + -2 >> 1; -1 < iVar4; iVar4 = iVar4 + -1) {
    FUN_1438ee930(param_1,iVar4);
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  FUN_1438efc20(param_1,0);
  return;
}



// FUNCTION 1438eec60 FUN_1438eec60 body=203 status=ok
// SIG undefined FUN_1438eec60(void)

void FUN_1438eec60(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar2 = *(int *)(param_2 + 0x18);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1438ee9d0(0,&local_38);
  while( true ) {
    while( true ) {
      puVar3 = (ulonglong *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x40 + (longlong)iVar2 * 0x40) *
                0x40 + *(longlong *)(param_1 + 0x1a0));
      LOCK();
      uVar1 = *puVar3;
      *puVar3 = *puVar3 + 1;
      UNLOCK();
      if ((uint)(uVar1 >> 0x20) <= (uint)uVar1) break;
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar1;
      FUN_1438efa20(param_1,&local_38,uVar1 & 0xffffffff);
    }
    FUN_143df9e40(param_1 + 8,local_res8,iVar2 + 1,local_res10);
    if (local_res8[0] < 0) break;
    FUN_1438efa20(param_1,&local_38,local_res10[0]);
  }
  return;
}



// FUNCTION 1438eed30 FUN_1438eed30 body=203 status=ok
// SIG undefined FUN_1438eed30(void)

void FUN_1438eed30(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar2 = *(int *)(param_2 + 0x18);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1438ee9d0(0,&local_38);
  while( true ) {
    while( true ) {
      puVar3 = (ulonglong *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x40 + (longlong)iVar2 * 0x40) *
                0x40 + *(longlong *)(param_1 + 0x1a0));
      LOCK();
      uVar1 = *puVar3;
      *puVar3 = *puVar3 + 1;
      UNLOCK();
      if ((uint)(uVar1 >> 0x20) <= (uint)uVar1) break;
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar1;
      FUN_1438efa50(param_1,&local_38,uVar1 & 0xffffffff);
    }
    FUN_143df9e40(param_1 + 8,local_res8,iVar2 + 1,local_res10);
    if (local_res8[0] < 0) break;
    FUN_1438efa50(param_1,&local_38,local_res10[0]);
  }
  return;
}



// FUNCTION 1438eee00 FUN_1438eee00 body=226 status=ok
// SIG undefined FUN_1438eee00(void)

void FUN_1438eee00(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar2 = *(int *)(param_2 + 0x18);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1438eea30(0,&local_58);
  while( true ) {
    while( true ) {
      puVar3 = (ulonglong *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x40 + (longlong)iVar2 * 0x40) *
                0x40 + *(longlong *)(param_1 + 0x1a0));
      LOCK();
      uVar1 = *puVar3;
      *puVar3 = *puVar3 + 1;
      UNLOCK();
      if ((uint)(uVar1 >> 0x20) <= (uint)uVar1) break;
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar1;
      FUN_1438efaa0(param_1,&local_58,uVar1 & 0xffffffff);
    }
    FUN_143df9e40(param_1 + 8,local_res8,iVar2 + 1,local_res10);
    if (local_res8[0] < 0) break;
    FUN_1438efaa0(param_1,&local_58,local_res10[0]);
  }
  return;
}



// FUNCTION 1438eeef0 FUN_1438eeef0 body=221 status=ok
// SIG undefined FUN_1438eeef0(void)

void FUN_1438eeef0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar2 = *(int *)(param_2 + 0x18);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1438eeab0(0,&local_48);
  while( true ) {
    while( true ) {
      puVar3 = (ulonglong *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x40 + (longlong)iVar2 * 0x40) *
                0x40 + *(longlong *)(param_1 + 0x1a0));
      LOCK();
      uVar1 = *puVar3;
      *puVar3 = *puVar3 + 1;
      UNLOCK();
      if ((uint)(uVar1 >> 0x20) <= (uint)uVar1) break;
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar1;
      FUN_1438efb10(param_1,&local_48,uVar1 & 0xffffffff);
    }
    FUN_143df9e40(param_1 + 8,local_res8,iVar2 + 1,local_res10);
    if (local_res8[0] < 0) break;
    FUN_1438efb10(param_1,&local_48,local_res10[0]);
  }
  return;
}



// FUNCTION 1438eefd0 FUN_1438eefd0 body=203 status=ok
// SIG undefined FUN_1438eefd0(void)

void FUN_1438eefd0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar2 = *(int *)(param_2 + 0x18);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1438eeb40(0,&local_38);
  while( true ) {
    while( true ) {
      puVar3 = (ulonglong *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x40 + (longlong)iVar2 * 0x40) *
                0x40 + *(longlong *)(param_1 + 0x1a0));
      LOCK();
      uVar1 = *puVar3;
      *puVar3 = *puVar3 + 1;
      UNLOCK();
      if ((uint)(uVar1 >> 0x20) <= (uint)uVar1) break;
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar1;
      FUN_1438efbb0(param_1,&local_38,uVar1 & 0xffffffff);
    }
    FUN_143df9e40(param_1 + 8,local_res8,iVar2 + 1,local_res10);
    if (local_res8[0] < 0) break;
    FUN_1438efbb0(param_1,&local_38,local_res10[0]);
  }
  return;
}



// FUNCTION 1438ef0a0 FUN_1438ef0a0 body=103 status=ok
// SIG undefined FUN_1438ef0a0(void)

void FUN_1438ef0a0(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtApplySolverOutput");
  }
  FUN_1438eec60(param_1,param_2);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438ef110 FUN_1438ef110 body=103 status=ok
// SIG undefined FUN_1438ef110(void)

void FUN_1438ef110(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtClearNeighborCollectors");
  }
  FUN_1438eed30(param_1,param_2);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438ef180 FUN_1438ef180 body=103 status=ok
// SIG undefined FUN_1438ef180(void)

void FUN_1438ef180(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtGatherBoundariesAndSolveCharacters");
  }
  FUN_1438eee00(param_1,param_2);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438ef1f0 FUN_1438ef1f0 body=103 status=ok
// SIG undefined FUN_1438ef1f0(void)

void FUN_1438ef1f0(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtGatherCharacterAabbs");
  }
  FUN_1438eeef0(param_1,param_2);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438ef260 FUN_1438ef260 body=515 status=ok
// SIG undefined FUN_1438ef260(void)

void FUN_1438ef260(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  
  pvVar6 = TlsGetValue(DAT_146b8198c);
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar6,"TtInitContext");
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar12 = *(longlong *)(lVar3 + 0x18);
  iVar1 = *(int *)(lVar12 + 0x68);
  iVar10 = *(int *)(lVar12 + 0x58);
  iVar2 = *(int *)(lVar12 + 0x78);
  iVar9 = iVar1 + 4;
  uVar7 = FUN_143703a50();
  uVar8 = *(uint *)(lVar3 + 0x34) & 0x3fffffff;
  if ((int)uVar8 < iVar9) {
    iVar5 = uVar8 * 2;
    iVar4 = iVar9;
    if (iVar9 < iVar5) {
      iVar4 = iVar5;
    }
    FUN_14370c310(uVar7,lVar3 + 0x28,iVar4,0x20);
  }
  *(int *)(lVar3 + 0x30) = iVar9;
  iVar10 = iVar10 + 4;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar7 = FUN_143703a50();
  uVar8 = *(uint *)(lVar3 + 0x44) & 0x3fffffff;
  if ((int)uVar8 < iVar10) {
    iVar4 = uVar8 * 2;
    iVar9 = iVar10;
    if (iVar10 < iVar4) {
      iVar9 = iVar4;
    }
    FUN_14370c310(uVar7,lVar3 + 0x38,iVar9,0x20);
  }
  *(int *)(lVar3 + 0x40) = iVar10;
  iVar2 = iVar2 + 4;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar7 = FUN_143703a50();
  uVar8 = *(uint *)(lVar3 + 0x54) & 0x3fffffff;
  if ((int)uVar8 < iVar2) {
    iVar9 = uVar8 * 2;
    iVar10 = iVar2;
    if (iVar2 < iVar9) {
      iVar10 = iVar9;
    }
    FUN_14370c310(uVar7,lVar3 + 0x48,iVar10,0x20);
  }
  *(int *)(lVar3 + 0x50) = iVar2;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar7 = FUN_143703a50();
  uVar8 = *(uint *)(lVar3 + 100) & 0x3fffffff;
  if ((int)uVar8 < iVar1) {
    iVar2 = uVar8 * 2;
    iVar10 = iVar1;
    if (iVar1 < iVar2) {
      iVar10 = iVar2;
    }
    FUN_14370c310(uVar7,lVar3 + 0x58,iVar10,0x60);
  }
  iVar10 = (*(int *)(lVar3 + 0x60) - iVar1) + -1;
  if (-1 < iVar10) {
    lVar12 = (longlong)iVar10 * 0x60 + (longlong)iVar1 * 0x60 + *(longlong *)(lVar3 + 0x58);
    do {
      FUN_1438eca90(lVar12);
      lVar12 = lVar12 + -0x60;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  iVar10 = iVar1 - *(int *)(lVar3 + 0x60);
  lVar12 = (longlong)iVar10;
  if (0 < iVar10) {
    puVar11 = (undefined4 *)
              ((longlong)*(int *)(lVar3 + 0x60) * 0x60 + 0x1c + *(longlong *)(lVar3 + 0x58));
    do {
      if ((undefined8 *)(puVar11 + -7) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar11 + -7) = 0;
        puVar11[-5] = 0;
        puVar11[-4] = 0x80000000;
        *(undefined8 *)(puVar11 + -3) = 0;
        puVar11[-1] = 0;
        *puVar11 = 0x80000000;
        FUN_1438e8750(puVar11 + 1);
      }
      puVar11 = puVar11 + 0x18;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(int *)(lVar3 + 0x60) = iVar1;
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d750(pvVar6,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438ef470 FUN_1438ef470 body=578 status=ok
// SIG undefined FUN_1438ef470(void)

void FUN_1438ef470(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  char cVar7;
  uint *puVar8;
  uint **ppuVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_res18;
  LPVOID local_res20;
  uint local_88 [2];
  uint *local_80;
  uint *local_78;
  uint *local_70;
  uint *local_68;
  int local_60;
  int local_5c [9];
  
  local_res20 = TlsGetValue(DAT_146b8198c);
  if (local_res20 != (LPVOID)0x0) {
    FUN_14370d5c0(local_res20,"TtScanCharacterAabbs");
  }
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_143df97b0(local_88,*(undefined8 *)(lVar1 + 0x28),*(int *)(lVar1 + 0x30) + -4,
                *(undefined8 *)(lVar1 + 0x38),*(int *)(lVar1 + 0x40) + -4);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
  lVar3 = *(longlong *)(lVar1 + 0x50);
  plVar4 = *(longlong **)(lVar1 + 0x80);
  puVar14 = local_68;
  puVar15 = local_70;
  uVar6 = local_88[0];
  puVar8 = local_80;
LAB_1438ef500:
  do {
    local_80 = puVar8;
    local_88[0] = uVar6;
    if ((local_60 < 1) || (local_5c[0] < 1)) {
      if (local_res20 != (LPVOID)0x0) {
        FUN_14370d750(local_res20,&DAT_145b8eda0);
      }
      return;
    }
    puVar8 = puVar15;
    puVar11 = local_78;
    if (local_88[0] != 0) {
      puVar8 = local_78;
      puVar11 = puVar14;
    }
    if (puVar8[3] != puVar11[3]) {
      lVar1 = *(longlong *)(lVar3 + (longlong)(int)puVar8[3] * 8);
      lVar5 = *(longlong *)(lVar3 + (longlong)(int)puVar11[3] * 8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar4 + 0x18))(plVar4,lVar1,lVar5), puVar14 = local_68,
         puVar15 = local_70, cVar7 != '\0')) {
        fVar17 = *(float *)(lVar1 + 0x30) - *(float *)(lVar5 + 0x30);
        fVar18 = *(float *)(lVar1 + 0x34) - *(float *)(lVar5 + 0x34);
        fVar19 = *(float *)(lVar1 + 0x38) - *(float *)(lVar5 + 0x38);
        local_res18 = lVar5;
        FUN_1438eeba0((longlong)*(int *)(lVar1 + 0x10c) * 0x60 + 0x20 + lVar2,&local_res18,
                      fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17);
        puVar14 = local_68;
        puVar15 = local_70;
      }
    }
    puVar12 = local_78 + 8;
    puVar13 = puVar12;
    puVar11 = local_80;
    uVar16 = local_88[0];
    do {
      if (*puVar13 < puVar11[4]) {
        do {
          uVar6 = uVar16;
          puVar8 = puVar11;
          local_78 = puVar13;
          if (-1 < (int)(puVar11[5] - puVar13[1] | puVar11[6] - puVar13[2] | puVar13[5] - puVar11[1]
                        | puVar13[6] - puVar11[2])) goto LAB_1438ef500;
          puVar13 = puVar13 + 8;
        } while (*puVar13 < puVar11[4]);
      }
      ppuVar9 = &local_70;
      if (uVar16 != 0) {
        ppuVar9 = &local_68;
      }
      *ppuVar9 = *ppuVar9 + 8;
      piVar10 = &local_60;
      if (uVar16 != 0) {
        piVar10 = local_5c;
      }
      *piVar10 = *piVar10 + -1;
      uVar16 = (uint)(*local_68 < *local_70);
      puVar13 = local_68;
      puVar11 = local_70;
      if (*local_68 < *local_70) {
        puVar13 = local_70;
        puVar11 = local_68;
      }
      puVar14 = local_68;
      puVar15 = local_70;
      uVar6 = local_88[0];
      puVar8 = local_80;
      local_78 = puVar12;
    } while ((0 < local_60) && (0 < local_5c[0]));
  } while( true );
}



// FUNCTION 1438ef6c0 FUN_1438ef6c0 body=586 status=ok
// SIG undefined FUN_1438ef6c0(void)

void FUN_1438ef6c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  char cVar8;
  LPVOID pvVar9;
  uint *puVar10;
  uint **ppuVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88 [2];
  uint *local_80;
  uint *local_78;
  uint *local_70;
  uint *local_68;
  int local_60;
  int local_5c [9];
  
  pvVar9 = TlsGetValue(DAT_146b8198c);
  if (pvVar9 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar9,"TtScanObstacleGeneratorAabbs");
  }
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_143df97b0(local_88,*(undefined8 *)(lVar1 + 0x28),*(int *)(lVar1 + 0x30) + -4,
                *(undefined8 *)(lVar1 + 0x48),*(int *)(lVar1 + 0x50) + -4);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
  lVar3 = *(longlong *)(lVar1 + 0x70);
  lVar4 = *(longlong *)(lVar1 + 0x50);
  plVar5 = *(longlong **)(lVar1 + 0x80);
  local_98 = DAT_1467f08d0;
  uStack_94 = uRam00000001467f08d4;
  uStack_90 = uRam00000001467f08d8;
  uStack_8c = uRam00000001467f08dc;
  uStack_a0 = uRam00000001467f08d8 ^ 0x80000000;
  uStack_9c = uRam00000001467f08dc ^ 0x80000000;
  local_a8 = DAT_1467f08d0 ^ 0x80000000;
  uStack_a4 = uRam00000001467f08d4 ^ 0x80000000;
  uVar7 = local_88[0];
  puVar14 = local_80;
LAB_1438ef780:
  do {
    local_80 = puVar14;
    local_88[0] = uVar7;
    if ((local_60 < 1) || (local_5c[0] < 1)) {
      if (pvVar9 != (LPVOID)0x0) {
        FUN_14370d750(pvVar9,&DAT_145b8eda0);
      }
      return;
    }
    puVar14 = local_70;
    puVar15 = local_78;
    if (local_88[0] != 0) {
      puVar14 = local_78;
      puVar15 = local_68;
    }
    lVar1 = *(longlong *)(lVar4 + (longlong)(int)puVar14[3] * 8);
    plVar6 = *(longlong **)(lVar3 + (longlong)(int)puVar15[3] * 8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar8 = (**(code **)(*plVar5 + 0x20))(plVar5,lVar1,plVar6), cVar8 != '\0')) {
      (**(code **)(*plVar6 + 0x28))
                (plVar6,&local_a8,(longlong)*(int *)(lVar1 + 0x10c) * 0x60 + lVar2);
    }
    puVar10 = local_78 + 8;
    puVar13 = puVar10;
    puVar15 = local_80;
    uVar16 = local_88[0];
    do {
      if (*puVar13 < puVar15[4]) {
        do {
          uVar7 = uVar16;
          puVar14 = puVar15;
          local_78 = puVar13;
          if (-1 < (int)(puVar15[5] - puVar13[1] | puVar15[6] - puVar13[2] | puVar13[5] - puVar15[1]
                        | puVar13[6] - puVar15[2])) goto LAB_1438ef780;
          puVar13 = puVar13 + 8;
        } while (*puVar13 < puVar15[4]);
      }
      ppuVar11 = &local_70;
      if (uVar16 != 0) {
        ppuVar11 = &local_68;
      }
      *ppuVar11 = *ppuVar11 + 8;
      piVar12 = &local_60;
      if (uVar16 != 0) {
        piVar12 = local_5c;
      }
      *piVar12 = *piVar12 + -1;
      uVar16 = (uint)(*local_68 < *local_70);
      puVar13 = local_68;
      puVar15 = local_70;
      if (*local_68 < *local_70) {
        puVar13 = local_70;
        puVar15 = local_68;
      }
      uVar7 = local_88[0];
      puVar14 = local_80;
      local_78 = puVar10;
    } while ((0 < local_60) && (0 < local_5c[0]));
  } while( true );
}



// FUNCTION 1438ef910 FUN_1438ef910 body=154 status=ok
// SIG undefined FUN_1438ef910(void)

void FUN_1438ef910(longlong param_1)

{
  int iVar1;
  LPVOID pvVar2;
  longlong lVar3;
  longlong lVar4;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtSortAabbs");
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  lVar3 = (longlong)(iVar1 + -4);
  if (lVar3 < iVar1) {
    lVar4 = iVar1 - lVar3;
    lVar3 = lVar3 << 5;
    do {
      *(undefined4 *)(lVar3 + **(longlong **)(param_1 + 8)) = 0xffffffff;
      lVar4 = lVar4 + -1;
      lVar3 = lVar3 + 0x20;
    } while (lVar4 != 0);
  }
  FUN_143df9960(**(undefined8 **)(param_1 + 8),*(int *)(*(undefined8 **)(param_1 + 8) + 1) + -4);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438ef9b0 FUN_1438ef9b0 body=103 status=ok
// SIG undefined FUN_1438ef9b0(void)

void FUN_1438ef9b0(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtUpdateAndGatherObstacleAabbs");
  }
  FUN_1438eefd0(param_1,param_2);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438efa20 FUN_1438efa20 body=40 status=ok
// SIG undefined FUN_1438efa20(void)

void FUN_1438efa20(undefined8 param_1,longlong *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar2 = *(longlong *)(*param_2 + (longlong)param_3 * 8);
  puVar1 = (undefined4 *)((longlong)param_3 * 0x60 + 0x40 + param_2[2]);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(lVar2 + 0x90) = *puVar1;
  *(undefined4 *)(lVar2 + 0x94) = uVar3;
  *(undefined4 *)(lVar2 + 0x98) = uVar4;
  *(undefined4 *)(lVar2 + 0x9c) = uVar5;
  FUN_1438eb640();
  return;
}



// FUNCTION 1438efa50 FUN_1438efa50 body=74 status=ok
// SIG undefined FUN_1438efa50(void)

void FUN_1438efa50(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*param_2 + (longlong)param_3 * 8);
  lVar2 = (longlong)param_3 * 0x60 + param_2[2];
  *(undefined4 *)(lVar2 + 8) = 0;
  *(undefined4 *)(lVar2 + 0x18) = 0;
  FUN_1438e8890(lVar2 + 0x20);
  FUN_1421e2d30(lVar2 + 0x20,*(undefined4 *)(lVar1 + 0xb8));
  return;
}



// FUNCTION 1438efaa0 FUN_1438efaa0 body=100 status=ok
// SIG undefined FUN_1438efaa0(void)

void FUN_1438efaa0(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*param_2 + (longlong)param_3 * 8);
  lVar3 = (longlong)param_3 * 0x60 + param_2[2];
  plVar2 = *(longlong **)(lVar1 + 0xe0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,lVar1,lVar3);
  }
  param_2[6] = lVar1;
  param_2[7] = lVar3;
  FUN_1438efd00(param_2 + 4,lVar3 + 0x40);
  return;
}



// FUNCTION 1438efb10 FUN_1438efb10 body=149 status=ok
// SIG undefined FUN_1438efb10(void)

void FUN_1438efb10(undefined8 param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_28 [32];
  
  lVar2 = *(longlong *)(*param_2 + (longlong)param_3 * 8);
  FUN_1438eb480(lVar2,local_28);
  FUN_143df9900((longlong)param_3 * 0x20 + param_2[4],local_28,param_3);
  if (*(char *)(lVar2 + 0xf8) != '\0') {
    iVar1 = *(int *)(lVar2 + 0x10c);
    FUN_1438eb4c0(lVar2,local_28);
    FUN_143df9900((longlong)iVar1 * 0x20 + param_2[2],local_28,param_3);
  }
  return;
}



// FUNCTION 1438efbb0 FUN_1438efbb0 body=104 status=ok
// SIG undefined FUN_1438efbb0(void)

void FUN_1438efbb0(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  undefined1 local_28 [32];
  
  plVar1 = *(longlong **)(*param_2 + (longlong)param_3 * 8);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1,local_28);
  FUN_143df9900((longlong)param_3 * 0x20 + param_2[2],local_28,param_3);
  return;
}



// FUNCTION 1438efc20 FUN_1438efc20 body=94 status=ok
// SIG undefined FUN_1438efc20(void)

void FUN_1438efc20(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar7 = (int)param_1[1] + -1;
  lVar10 = (longlong)param_2;
  if (param_2 == iVar7) {
    *(int *)(param_1 + 1) = iVar7;
    return;
  }
  lVar8 = *param_1;
  lVar9 = (longlong)iVar7;
  fVar2 = *(float *)(lVar8 + 8 + lVar10 * 0x10);
  fVar3 = *(float *)(lVar8 + 8 + lVar9 * 0x10);
  *(undefined8 *)(lVar8 + lVar10 * 0x10) = *(undefined8 *)(lVar8 + lVar9 * 0x10);
  *(undefined4 *)(lVar8 + 8 + lVar10 * 0x10) = *(undefined4 *)(lVar8 + 8 + lVar9 * 0x10);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (fVar2 < fVar3) {
    while( true ) {
      iVar7 = param_2 + -1 >> 1;
      if (iVar7 < 0) {
        return;
      }
      lVar10 = *param_1;
      lVar9 = (longlong)param_2;
      lVar8 = (longlong)iVar7;
      if (*(float *)(lVar10 + 8 + lVar9 * 0x10) < *(float *)(lVar10 + 8 + lVar8 * 0x10)) break;
      puVar1 = (undefined4 *)(lVar10 + lVar9 * 0x10);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      *(undefined8 *)(lVar10 + lVar9 * 0x10) = *(undefined8 *)(lVar10 + lVar8 * 0x10);
      *(undefined4 *)(lVar10 + 8 + lVar9 * 0x10) = *(undefined4 *)(lVar10 + 8 + lVar8 * 0x10);
      puVar1 = (undefined4 *)(lVar10 + lVar8 * 0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      *(undefined4 *)(lVar10 + 8 + lVar8 * 0x10) = uVar6;
      param_2 = iVar7;
    }
    return;
  }
  FUN_1438ee930();
  return;
}



// FUNCTION 1438efc80 FUN_1438efc80 body=98 status=ok
// SIG undefined FUN_1438efc80(void)

void FUN_1438efc80(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  while( true ) {
    iVar6 = param_2 + -1 >> 1;
    if (iVar6 < 0) {
      return;
    }
    lVar2 = *param_1;
    lVar8 = (longlong)param_2;
    lVar7 = (longlong)iVar6;
    if (*(float *)(lVar2 + 8 + lVar8 * 0x10) < *(float *)(lVar2 + 8 + lVar7 * 0x10)) break;
    puVar1 = (undefined4 *)(lVar2 + lVar8 * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    *(undefined8 *)(lVar2 + lVar8 * 0x10) = *(undefined8 *)(lVar2 + lVar7 * 0x10);
    *(undefined4 *)(lVar2 + 8 + lVar8 * 0x10) = *(undefined4 *)(lVar2 + 8 + lVar7 * 0x10);
    puVar1 = (undefined4 *)(lVar2 + lVar7 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    *(undefined4 *)(lVar2 + 8 + lVar7 * 0x10) = uVar5;
    param_2 = iVar6;
  }
  return;
}



// FUNCTION 1438efcf0 FUN_1438efcf0 body=11 status=ok
// SIG undefined FUN_1438efcf0(void)

longlong FUN_1438efcf0(longlong *param_1,int param_2)

{
  return (longlong)param_2 * 0x10 + *param_1;
}



// FUNCTION 1438efd00 FUN_1438efd00 body=1822 status=ok
// SIG undefined FUN_1438efd00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438efd00(undefined1 (*param_1) [16],undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
  undefined1 *puVar9;
  byte bVar10;
  int iVar11;
  LPVOID pvVar12;
  LPVOID pvVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  byte bVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  undefined1 local_5a8 [8];
  float fStack_5a0;
  float fStack_59c;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined1 local_588 [8];
  float fStack_580;
  float fStack_57c;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined8 local_568;
  undefined8 uStack_560;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  float local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined1 local_4c8 [96];
  undefined1 (*local_468) [16];
  longlong local_460;
  undefined1 local_458 [496];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 *local_258;
  longlong local_250;
  undefined1 local_248 [496];
  undefined8 local_58;
  undefined8 uStack_50;
  
  pvVar12 = TlsGetValue(DAT_146b8198c);
  if (pvVar12 != (LPVOID)0x0) {
    FUN_14370d620(pvVar12,"LtsolveSingleAgent","Stinit");
  }
  lVar3 = *(longlong *)param_1[1];
  _local_5a8 = *param_1;
  _local_588 = *(undefined1 (*) [16])(lVar3 + 0x80);
  fVar29 = *(float *)(lVar3 + 0xa8);
  fVar22 = *(float *)*(undefined1 (*) [16])(lVar3 + 0x80) * fVar29;
  fVar25 = *(float *)(lVar3 + 0x84) * fVar29;
  fVar27 = *(float *)(lVar3 + 0x88) * fVar29;
  local_568 = CONCAT44(fVar29,fVar29);
  uStack_560 = CONCAT44(fVar29,fVar29);
  bVar4 = 1e-05 <= fVar25 * fVar25 + fVar22 * fVar22 + fVar27 * fVar27;
  if (!bVar4) {
    local_568 = 0;
    uStack_560 = 0;
    fStack_580 = (float)local_5a8._0_4_;
    local_588 = local_5a8._4_8_;
    fStack_57c = (float)local_5a8._12_4_;
  }
  local_538 = *(float *)(lVar3 + 0xa4);
  local_558 = *(float *)(lVar3 + 0x40);
  fStack_554 = *(float *)(lVar3 + 0x44);
  fStack_550 = *(float *)(lVar3 + 0x48);
  fStack_54c = *(float *)(lVar3 + 0x4c);
  fVar22 = local_558 * local_558;
  fVar25 = fStack_554 * fStack_554;
  fVar29 = fStack_550 * fStack_550;
  auVar20._4_4_ = fVar29;
  auVar20._0_4_ = fVar29;
  auVar20._8_4_ = fVar29;
  auVar20._12_4_ = fVar29;
  if (local_538 * local_538 < fVar25 + fVar22 + fVar29) {
    fVar23 = fVar25 + fVar22 + fVar29;
    fVar26 = fVar25 + fVar22 + fVar29;
    fVar28 = fVar25 + fVar22 + fVar29;
    fVar29 = fVar25 + fVar22 + fVar29;
    auVar5._4_4_ = fVar26;
    auVar5._0_4_ = fVar23;
    auVar5._8_4_ = fVar28;
    auVar5._12_4_ = fVar29;
    auVar20 = rsqrtps(auVar20,auVar5);
    fVar22 = auVar20._0_4_;
    fVar25 = auVar20._4_4_;
    fVar27 = auVar20._8_4_;
    fVar24 = auVar20._12_4_;
    local_558 = (float)(~-(uint)(fVar23 <= 0.0) &
                       (uint)((3.0 - fVar23 * fVar22 * fVar22) * fVar22 * 0.5)) * local_558 *
                local_538;
    fStack_554 = (float)(~-(uint)(fVar26 <= 0.0) &
                        (uint)((3.0 - fVar26 * fVar25 * fVar25) * fVar25 * 0.5)) * fStack_554 *
                 local_538;
    fStack_550 = (float)(~-(uint)(fVar28 <= 0.0) &
                        (uint)((3.0 - fVar28 * fVar27 * fVar27) * fVar27 * 0.5)) * fStack_550 *
                 local_538;
    fStack_54c = (float)(~-(uint)(fVar29 <= 0.0) &
                        (uint)((3.0 - fVar29 * fVar24 * fVar24) * fVar24 * 0.5)) * fStack_54c *
                 local_538;
  }
  local_258 = local_248;
  local_468 = (undefined1 (*) [16])local_458;
  local_548 = 0x5f7ffff0;
  uStack_544 = 0x5f7ffff0;
  uStack_540 = 0x5f7ffff0;
  uStack_53c = 0x5f7ffff0;
  local_250 = 0x80;
  local_58 = 0;
  uStack_50 = 0;
  local_460 = 0x80;
  local_268 = 0;
  uStack_260 = 0;
  fStack_534 = local_538;
  fStack_530 = local_538;
  fStack_52c = local_538;
  hkaiVelocityCandidateScores::setAll(&local_258,&local_548);
  local_5b8 = _DAT_1467f06e0;
  fStack_5b4 = (float)uRam00000001467f06e4;
  fStack_5b0 = (float)uRam00000001467f06e8;
  fStack_5ac = (float)DAT_1467f06ec;
  hkaiVelocityCandidateScores::setAll(&local_468,&local_5b8);
  pauVar8 = local_468;
  if (bVar4) {
    uVar2 = *(undefined4 *)(lVar3 + 0xc4);
    auVar7._4_4_ = uVar2;
    auVar7._0_4_ = uVar2;
    auVar7._8_4_ = uVar2;
    auVar7._12_4_ = 0;
    *local_468 = auVar7;
  }
  else {
    uVar2 = *(undefined4 *)(lVar3 + 0xc4);
    *(undefined4 *)*local_468 = 0;
    *(undefined4 *)(*pauVar8 + 4) = 0;
    *(undefined4 *)(*pauVar8 + 8) = 0;
    *(undefined4 *)(*pauVar8 + 0xc) = uVar2;
  }
  local_598 = 0;
  uStack_590 = 0;
  fStack_520 = (float)local_5a8._4_4_ * (float)local_588._0_4_ -
               (float)local_588._4_4_ * (float)local_5a8._0_4_;
  local_528 = fStack_5a0 * (float)local_588._4_4_ - fStack_580 * (float)local_5a8._4_4_;
  fStack_524 = (float)local_5a8._0_4_ * fStack_580 - (float)local_588._0_4_ * fStack_5a0;
  fVar29 = local_528 * local_528;
  fVar22 = fStack_524 * fStack_524;
  auVar21._8_4_ = fStack_520 * fStack_520;
  auVar21._4_4_ = auVar21._8_4_;
  auVar21._0_4_ = auVar21._8_4_;
  auVar21._12_4_ = auVar21._8_4_;
  fVar24 = fVar22 + fVar29 + auVar21._8_4_;
  fVar23 = fVar22 + fVar29 + auVar21._8_4_;
  fVar26 = fVar22 + fVar29 + auVar21._8_4_;
  fVar28 = fVar22 + fVar29 + auVar21._8_4_;
  auVar6._4_4_ = fVar23;
  auVar6._0_4_ = fVar24;
  auVar6._8_4_ = fVar26;
  auVar6._12_4_ = fVar28;
  auVar20 = rsqrtps(auVar21,auVar6);
  fVar29 = auVar20._0_4_;
  fVar22 = auVar20._4_4_;
  fVar25 = auVar20._8_4_;
  fVar27 = auVar20._12_4_;
  local_528 = local_528 *
              (float)(~-(uint)(fVar24 <= 0.0) &
                     (uint)((3.0 - fVar24 * fVar29 * fVar29) * fVar29 * 0.5));
  fStack_524 = fStack_524 *
               (float)(~-(uint)(fVar23 <= 0.0) &
                      (uint)((3.0 - fVar23 * fVar22 * fVar22) * fVar22 * 0.5));
  fStack_520 = fStack_520 *
               (float)(~-(uint)(fVar26 <= 0.0) &
                      (uint)((3.0 - fVar26 * fVar25 * fVar25) * fVar25 * 0.5));
  fStack_51c = (fStack_59c * fStack_57c - fStack_57c * fStack_59c) *
               (float)(~-(uint)(fVar28 <= 0.0) &
                      (uint)((3.0 - fVar28 * fVar27 * fVar27) * fVar27 * 0.5));
  FUN_1438ca880(local_4c8,local_588,&local_528,&local_558,&local_538,&local_568);
  local_578 = *(undefined4 *)(lVar3 + 0xd0);
  bVar18 = 0;
  uStack_574 = local_578;
  uStack_570 = local_578;
  uStack_56c = local_578;
  pvVar13 = TlsGetValue(DAT_146b8198c);
  if (pvVar13 != (LPVOID)0x0) {
    FUN_14370d800(pvVar13,"StscoreBoundaryObstacles");
  }
  fVar29 = *(float *)(lVar3 + 0x60);
  fVar22 = *(float *)(lVar3 + 0xa0);
  local_5b8 = (fVar22 + fVar29) * (fVar22 + fVar29);
  fStack_5b4 = (fVar22 + fVar29) * (fVar22 + fVar29);
  fStack_5b0 = (fVar22 + fVar29) * (fVar22 + fVar29);
  fStack_5ac = (fVar22 + fVar29) * (fVar22 + fVar29);
  lVar16 = **(longlong **)(param_1[1] + 8);
  lVar19 = (longlong)(int)(*(longlong **)(param_1[1] + 8))[1] * 0x20 + lVar16;
  for (; lVar16 != lVar19; lVar16 = lVar16 + 0x20) {
    bVar10 = FUN_1438f10d0(lVar3,lVar16,local_5a8,&local_5b8,&local_578,local_4c8,&local_258,
                           &local_468,&local_598);
    bVar18 = bVar18 | bVar10;
  }
  pvVar13 = TlsGetValue(DAT_146b8198c);
  if (pvVar13 != (LPVOID)0x0) {
    FUN_14370d800(pvVar13,"StscoreSphereObstacles");
  }
  lVar16 = *(longlong *)(*(longlong *)(param_1[1] + 8) + 0x10);
  lVar19 = (longlong)*(int *)(*(longlong *)(param_1[1] + 8) + 0x18) * 0x20 + lVar16;
  for (; lVar16 != lVar19; lVar16 = lVar16 + 0x20) {
    bVar10 = FUN_1438f1360(lVar3,lVar16,local_5a8,&local_578,local_4c8,&local_258,&local_468,
                           &local_598);
    bVar18 = bVar18 | bVar10;
  }
  pvVar13 = TlsGetValue(DAT_146b8198c);
  if (pvVar13 != (LPVOID)0x0) {
    FUN_14370d800(pvVar13,"StscoreAgentObstacles");
  }
  local_5b8 = *(float *)(lVar3 + 200);
  fStack_5b4 = local_5b8;
  fStack_5b0 = local_5b8;
  fStack_5ac = local_5b8;
  iVar11 = IStreamingManager::GetNumWantingResources(*(longlong *)(param_1[1] + 8) + 0x20);
  iVar15 = 0;
  if (0 < iVar11) {
    do {
      puVar14 = (undefined8 *)FUN_1438efcf0(*(longlong *)(param_1[1] + 8) + 0x20,iVar15);
      bVar10 = FUN_1438f0630(lVar3,*puVar14,local_5a8,local_4c8,&local_5b8,&local_578,&local_258,
                             &local_468,&local_598);
      bVar18 = bVar18 | bVar10;
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar11);
  }
  pvVar13 = TlsGetValue(DAT_146b8198c);
  if (pvVar13 != (LPVOID)0x0) {
    FUN_14370d800(pvVar13,"StapplyModifiers");
  }
  plVar17 = *(longlong **)(lVar3 + 0xe8);
  plVar1 = plVar17 + *(int *)(lVar3 + 0xf0);
  if (plVar17 != plVar1) {
    do {
      lVar16 = *plVar17 + 0x18;
      if (*plVar17 == 0) {
        lVar16 = 0;
      }
      FUN_1438f0420(lVar3,lVar16,local_4c8,&local_468);
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar1);
  }
  pvVar13 = TlsGetValue(DAT_146b8198c);
  if (pvVar13 != (LPVOID)0x0) {
    FUN_14370d800(pvVar13,"StchooseBestCandidate");
  }
  fStack_50c = *(float *)(lVar3 + 0xa0);
  local_518 = fStack_50c * _DAT_1467f0720;
  fStack_514 = fStack_50c * fRam00000001467f0724;
  fStack_510 = fStack_50c * fRam00000001467f0728;
  fStack_50c = fStack_50c * fRam00000001467f072c;
  local_5b8 = *(float *)(lVar3 + 0xc0);
  local_508 = *(undefined4 *)(lVar3 + 0xcc);
  local_4f8 = *(undefined4 *)(lVar3 + 0xbc);
  local_4e8 = _DAT_1467f06e0;
  uStack_4e4 = uRam00000001467f06e4;
  uStack_4e0 = uRam00000001467f06e8;
  uStack_4dc = DAT_1467f06ec;
  fStack_5b4 = local_5b8;
  fStack_5b0 = local_5b8;
  fStack_5ac = local_5b8;
  uStack_504 = local_508;
  uStack_500 = local_508;
  uStack_4fc = local_508;
  uStack_4f4 = local_4f8;
  uStack_4f0 = local_4f8;
  uStack_4ec = local_4f8;
  FUN_1438cb020(local_4c8,&local_258,&local_468,&local_598,&local_4e8,&local_4f8,&local_508,
                &local_568,&local_518,&local_5b8,lVar3 + 0x70,&local_4d8);
  pauVar8 = local_468;
  *param_2 = local_4d8;
  param_2[1] = uStack_4d4;
  param_2[2] = uStack_4d0;
  param_2[3] = uStack_4cc;
  *(byte *)(param_2 + 4) = bVar18;
  if (local_460 < 0) {
    pvVar13 = TlsGetValue(DAT_146b7bf70);
    if (pvVar13 == (LPVOID)0x0) {
      pvVar13 = DAT_146b7bf68;
    }
    FUN_1437038e0(*(undefined8 *)((longlong)pvVar13 + 0x58),pauVar8);
  }
  puVar9 = local_258;
  if (local_250 < 0) {
    pvVar13 = TlsGetValue(DAT_146b7bf70);
    if (pvVar13 == (LPVOID)0x0) {
      pvVar13 = DAT_146b7bf68;
    }
    FUN_1437038e0(*(undefined8 *)((longlong)pvVar13 + 0x58),puVar9);
  }
  if (pvVar12 != (LPVOID)0x0) {
    FUN_14370d7a0(pvVar12,&DAT_145b8dd34);
  }
  return;
}



// FUNCTION 1438f0420 FUN_1438f0420 body=524 status=ok
// SIG undefined FUN_1438f0420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438f0420(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined6 uVar4;
  undefined8 uVar5;
  unkbyte10 Var6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar20 [16];
  undefined1 uVar28;
  undefined1 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 unaff_XMM9_Ba;
  undefined1 unaff_XMM9_Bb;
  undefined1 unaff_XMM9_Bc;
  undefined1 unaff_XMM9_Bd;
  undefined1 unaff_XMM9_Be;
  undefined1 unaff_XMM9_Bf;
  undefined1 uVar34;
  undefined1 unaff_XMM9_Bg;
  undefined1 unaff_XMM9_Bh;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  
  fVar7 = *(float *)(param_3 + 2);
  fVar12 = *(float *)((longlong)param_3 + 0x14);
  fVar13 = *(float *)(param_3 + 3);
  fVar19 = *(float *)(param_3 + 6) * *(float *)(param_3 + 10);
  fVar25 = *(float *)((longlong)param_3 + 0x34) * *(float *)((longlong)param_3 + 0x54);
  fVar26 = *(float *)(param_3 + 7) * *(float *)(param_3 + 0xb);
  fVar27 = *(float *)((longlong)param_3 + 0x3c) * *(float *)((longlong)param_3 + 0x5c);
  lVar16 = *param_4;
  fVar30 = *(float *)(param_3 + 8) * *(float *)(param_3 + 10);
  fVar31 = *(float *)((longlong)param_3 + 0x44) * *(float *)((longlong)param_3 + 0x54);
  fVar32 = *(float *)(param_3 + 9) * *(float *)(param_3 + 0xb);
  fVar33 = *(float *)((longlong)param_3 + 0x4c) * *(float *)((longlong)param_3 + 0x5c);
  fVar8 = *(float *)(param_3 + 4);
  fVar14 = *(float *)((longlong)param_3 + 0x24);
  fVar15 = *(float *)(param_3 + 5);
  local_78 = fVar7 * fVar19 + fVar8 * fVar30;
  fStack_74 = fVar7 * fVar25 + fVar8 * fVar31;
  fStack_70 = fVar7 * fVar26 + fVar8 * fVar32;
  fStack_6c = fVar7 * fVar27 + fVar8 * fVar33;
  fVar7 = fVar13 * fVar25 + fVar15 * fVar31;
  fVar8 = fVar13 * fVar26 + fVar15 * fVar32;
  fVar9 = fVar13 * fVar27 + fVar15 * fVar33;
  local_68 = fVar12 * fVar19 + fVar14 * fVar30;
  fStack_64 = fVar12 * fVar25 + fVar14 * fVar31;
  fStack_60 = fVar12 * fVar26 + fVar14 * fVar32;
  fStack_5c = fVar12 * fVar27 + fVar14 * fVar33;
  local_58[4] = SUB41(fVar7,0);
  local_58._0_4_ = fVar13 * fVar19 + fVar15 * fVar30;
  local_58[5] = (char)((uint)fVar7 >> 8);
  local_58[6] = (char)((uint)fVar7 >> 0x10);
  local_58[7] = (char)((uint)fVar7 >> 0x18);
  local_58[8] = SUB41(fVar8,0);
  local_58[9] = (char)((uint)fVar8 >> 8);
  local_58[10] = (char)((uint)fVar8 >> 0x10);
  local_58[0xb] = (char)((uint)fVar8 >> 0x18);
  local_58[0xc] = SUB41(fVar9,0);
  local_58[0xd] = (char)((uint)fVar9 >> 8);
  local_58[0xe] = (char)((uint)fVar9 >> 0x10);
  local_58[0xf] = (char)((uint)fVar9 >> 0x18);
  (**(code **)(*param_2 + 0x10))(param_2,param_1,&local_78,lVar16);
  iVar17 = 1;
  uVar10 = CONCAT13(unaff_XMM9_Bd,CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))) ^
           CONCAT13(unaff_XMM9_Bd,CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba)));
  uVar11 = CONCAT13(unaff_XMM9_Bh,CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))) ^
           CONCAT13(unaff_XMM9_Bh,CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be)));
  uVar34 = (undefined1)(uVar11 >> 8);
  do {
    lVar16 = lVar16 + 0x10;
    uVar1 = *(undefined8 *)((longlong)(iVar17 * 8) + *param_3);
    uVar28 = (undefined1)((ulonglong)uVar1 >> 0x20);
    uVar29 = (undefined1)((ulonglong)uVar1 >> 0x28);
    uVar2 = CONCAT11((char)uVar10,(char)uVar1);
    uVar3 = CONCAT13((char)(uVar10 >> 8),CONCAT12((char)((ulonglong)uVar1 >> 8),uVar2));
    uVar4 = CONCAT15((char)(uVar10 >> 0x10),CONCAT14((char)((ulonglong)uVar1 >> 0x10),uVar3));
    uVar5 = CONCAT17((char)(uVar10 >> 0x18),CONCAT16((char)((ulonglong)uVar1 >> 0x18),uVar4));
    Var6 = CONCAT19((char)uVar11,CONCAT18(uVar28,uVar5));
    auVar24[10] = uVar29;
    auVar24._0_10_ = Var6;
    auVar24[0xb] = uVar34;
    auVar24._12_2_ = (short)((ulonglong)uVar5 >> 0x30);
    auVar24._14_2_ = (short)(uVar11 >> 0x10);
    auVar23._12_4_ = auVar24._12_4_;
    auVar23._10_2_ = (short)uVar11;
    auVar23._0_10_ = Var6;
    auVar22._10_6_ = auVar23._10_6_;
    auVar22._8_2_ = (short)((uint6)uVar4 >> 0x20);
    auVar22._0_8_ = uVar5;
    auVar21._8_8_ = auVar22._8_8_;
    auVar21._6_2_ = (short)(uVar10 >> 0x10);
    auVar21._0_6_ = uVar4;
    auVar20._6_10_ = auVar21._6_10_;
    auVar20._4_2_ = (short)((uint)uVar3 >> 0x10);
    auVar20._0_4_ = uVar3;
    uVar18 = CONCAT44(auVar20._4_4_ >> 0x10,uVar10) & 0xffffffff0000ffff;
    fVar7 = *(float *)(param_3 + 4);
    fVar12 = *(float *)((longlong)param_3 + 0x24);
    fVar13 = *(float *)(param_3 + 5);
    fVar8 = *(float *)(param_3 + 2);
    fVar14 = *(float *)((longlong)param_3 + 0x14);
    fVar15 = *(float *)(param_3 + 3);
    fVar19 = (((float)(int)uVar18 * 65536.0 + (float)uVar2) * _DAT_1467f0860 + _DAT_1467f06d0) *
             *(float *)(param_3 + 10);
    fVar25 = (((float)(int)(uVar18 >> 0x20) * 65536.0 + (float)(auVar20._4_4_ & 0xffff)) *
              fRam00000001467f0864 + fRam00000001467f06d4) * *(float *)((longlong)param_3 + 0x54);
    fVar26 = (((float)(auVar22._8_4_ >> 0x10) * 65536.0 + (float)(auVar22._8_4_ & 0xffff)) *
              fRam00000001467f0868 + fRam00000001467f06d8) * *(float *)(param_3 + 0xb);
    fVar27 = (((float)(auVar23._12_4_ >> 0x10) * 65536.0 + (float)(auVar23._12_4_ & 0xffff)) *
              fRam00000001467f086c + fRam00000001467f06dc) * *(float *)((longlong)param_3 + 0x5c);
    fVar30 = (((float)CONCAT11((char)uVar11,uVar28) + 0.0) * _DAT_1467f0860 + _DAT_1467f06d0) *
             *(float *)(param_3 + 10);
    fVar31 = (((float)CONCAT11(uVar34,uVar29) + 0.0) * fRam00000001467f0864 + fRam00000001467f06d4)
             * *(float *)((longlong)param_3 + 0x54);
    fVar32 = (((float)CONCAT11((char)(uVar11 >> 0x10),(char)((ulonglong)uVar1 >> 0x30)) + 0.0) *
              fRam00000001467f0868 + fRam00000001467f06d8) * *(float *)(param_3 + 0xb);
    fVar33 = (((float)CONCAT11((char)(uVar11 >> 0x18),(char)((ulonglong)uVar1 >> 0x38)) + 0.0) *
              fRam00000001467f086c + fRam00000001467f06dc) * *(float *)((longlong)param_3 + 0x5c);
    local_78 = fVar8 * fVar19 + fVar7 * fVar30;
    fStack_74 = fVar8 * fVar25 + fVar7 * fVar31;
    fStack_70 = fVar8 * fVar26 + fVar7 * fVar32;
    fStack_6c = fVar8 * fVar27 + fVar7 * fVar33;
    fVar7 = fVar15 * fVar25 + fVar13 * fVar31;
    fVar8 = fVar15 * fVar26 + fVar13 * fVar32;
    fVar9 = fVar15 * fVar27 + fVar13 * fVar33;
    local_68 = fVar14 * fVar19 + fVar12 * fVar30;
    fStack_64 = fVar14 * fVar25 + fVar12 * fVar31;
    fStack_60 = fVar14 * fVar26 + fVar12 * fVar32;
    fStack_5c = fVar14 * fVar27 + fVar12 * fVar33;
    local_58[4] = SUB41(fVar7,0);
    local_58._0_4_ = fVar15 * fVar19 + fVar13 * fVar30;
    local_58[5] = (char)((uint)fVar7 >> 8);
    local_58[6] = (char)((uint)fVar7 >> 0x10);
    local_58[7] = (char)((uint)fVar7 >> 0x18);
    local_58[8] = SUB41(fVar8,0);
    local_58[9] = (char)((uint)fVar8 >> 8);
    local_58[10] = (char)((uint)fVar8 >> 0x10);
    local_58[0xb] = (char)((uint)fVar8 >> 0x18);
    local_58[0xc] = SUB41(fVar9,0);
    local_58[0xd] = (char)((uint)fVar9 >> 8);
    local_58[0xe] = (char)((uint)fVar9 >> 0x10);
    local_58[0xf] = (char)((uint)fVar9 >> 0x18);
    (**(code **)(*param_2 + 0x10))(param_2,param_1,&local_78,lVar16);
    iVar17 = iVar17 + 1;
  } while (iVar17 != 0x20);
  return;
}



// FUNCTION 1438f0630 FUN_1438f0630 body=2717 status=ok
// SIG undefined FUN_1438f0630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1438f0630(longlong param_1,longlong param_2,float *param_3,undefined1 (*param_4) [16],
                       float *param_5,float *param_6,longlong *param_7,longlong *param_8,
                       float *param_9)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [14];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [15];
  unkuint9 Var27;
  undefined1 auVar28 [11];
  undefined1 auVar29 [13];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [12];
  unkbyte10 Var33;
  undefined1 auVar34 [12];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  uint6 uVar37;
  ulonglong in_RAX;
  longlong lVar38;
  uint *puVar39;
  longlong lVar40;
  float *pfVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  float fVar50;
  ulonglong uVar51;
  float fVar58;
  float fVar59;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar85;
  float fVar94;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  ushort uVar87;
  float fVar86;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar76 [16];
  uint uVar99;
  ushort uVar100;
  float fVar101;
  float fVar102;
  undefined1 auVar104 [12];
  float fVar120;
  float fVar121;
  float fVar123;
  float fVar124;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  uint uVar103;
  uint uVar122;
  uint uVar125;
  uint uVar126;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar105 [12];
  undefined1 auVar112 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  undefined1 auVar130 [16];
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  undefined1 uVar167;
  undefined1 uVar168;
  undefined1 uVar169;
  undefined1 uVar170;
  undefined1 uVar171;
  undefined1 uVar172;
  undefined1 uVar173;
  undefined1 uVar174;
  float fVar175;
  float fVar176;
  ulonglong *local_108;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  
  fVar97 = fRam00000001467f086c;
  fVar95 = fRam00000001467f0868;
  fVar86 = fRam00000001467f0864;
  fVar68 = _DAT_1467f0860;
  fVar67 = fRam00000001467f06dc;
  fVar94 = fRam00000001467f06d8;
  fVar85 = fRam00000001467f06d4;
  fVar66 = _DAT_1467f06d0;
  fVar69 = *(float *)(param_2 + 0xd4);
  if (fVar69 == 0.0) {
    return in_RAX & 0xffffffffffffff00;
  }
  fVar50 = *param_3;
  fVar58 = param_3[1];
  fVar59 = param_3[2];
  fVar163 = param_3[3];
  fVar96 = *(float *)(param_1 + 0x3c);
  fVar98 = *(float *)(param_2 + 0x3c);
  fVar145 = *(float *)(param_1 + 0x30) - *(float *)(param_2 + 0x30);
  fVar146 = *(float *)(param_1 + 0x34) - *(float *)(param_2 + 0x34);
  fVar147 = *(float *)(param_1 + 0x38) - *(float *)(param_2 + 0x38);
  fVar60 = fVar50 * fVar145;
  fVar79 = fVar58 * fVar146;
  fVar88 = fVar59 * fVar147;
  fVar152 = *(float *)(param_1 + 0xa0);
  fVar3 = *(float *)(param_2 + 0xa0);
  fVar145 = fVar145 - (fVar79 + fVar60 + fVar88) * fVar50;
  fVar146 = fVar146 - (fVar79 + fVar60 + fVar88) * fVar58;
  fVar147 = fVar147 - (fVar79 + fVar60 + fVar88) * fVar59;
  fVar149 = fVar152 + fVar3;
  fVar150 = fVar152 + fVar3;
  fVar151 = fVar152 + fVar3;
  fVar152 = fVar152 + fVar3;
  fVar142 = fVar145 * fVar145;
  fVar143 = fVar146 * fVar146;
  fVar144 = fVar147 * fVar147;
  fVar61 = fVar50 * *(float *)(param_1 + 0x40);
  fVar80 = fVar58 * *(float *)(param_1 + 0x44);
  fVar89 = fVar59 * *(float *)(param_1 + 0x48);
  fVar3 = (fVar143 + fVar142 + fVar144) - fVar149 * fVar149;
  fVar155 = (fVar143 + fVar142 + fVar144) - fVar150 * fVar150;
  fVar158 = (fVar143 + fVar142 + fVar144) - fVar151 * fVar151;
  fVar161 = (fVar143 + fVar142 + fVar144) - fVar152 * fVar152;
  fVar153 = *(float *)(param_2 + 0x40) - (*(float *)(param_1 + 0x50) - *(float *)(param_2 + 0x50));
  fVar156 = *(float *)(param_2 + 0x44) - (*(float *)(param_1 + 0x54) - *(float *)(param_2 + 0x54));
  fVar159 = *(float *)(param_2 + 0x48) - (*(float *)(param_1 + 0x58) - *(float *)(param_2 + 0x58));
  fVar62 = fVar50 * fVar153;
  fVar81 = fVar58 * fVar156;
  fVar90 = fVar59 * fVar159;
  fVar175 = *(float *)(param_1 + 0x40) - (fVar80 + fVar61 + fVar89) * fVar50;
  fVar176 = *(float *)(param_1 + 0x44) - (fVar80 + fVar61 + fVar89) * fVar58;
  fVar61 = *(float *)(param_1 + 0x48) - (fVar80 + fVar61 + fVar89) * fVar59;
  fVar153 = fVar153 - (fVar81 + fVar62 + fVar90) * fVar50;
  fVar156 = fVar156 - (fVar81 + fVar62 + fVar90) * fVar58;
  fVar159 = fVar159 - (fVar81 + fVar62 + fVar90) * fVar59;
  fVar50 = fVar175 - fVar153;
  fVar58 = fVar176 - fVar156;
  fVar59 = fVar61 - fVar159;
  if (*(int *)(param_1 + 0xd8) < *(int *)(param_2 + 0xd8)) {
    uVar167 = SUB41(DAT_1467f06f0,0);
    uVar168 = (undefined1)((uint)DAT_1467f06f0 >> 8);
    uVar169 = (undefined1)((uint)DAT_1467f06f0 >> 0x10);
    uVar170 = (undefined1)((uint)DAT_1467f06f0 >> 0x18);
    uVar171 = SUB41(fRam00000001467f06f4,0);
    uVar172 = (undefined1)((uint)fRam00000001467f06f4 >> 8);
    uVar173 = (undefined1)((uint)fRam00000001467f06f4 >> 0x10);
    uVar174 = (undefined1)((uint)fRam00000001467f06f4 >> 0x18);
    auVar73 = ZEXT816(0);
    fVar62 = fRam00000001467f06f8;
    fVar80 = fRam00000001467f06fc;
  }
  else {
    auVar109._4_4_ = fVar69;
    auVar109._0_4_ = fVar69;
    auVar109._8_4_ = fVar69;
    auVar109._12_4_ = fVar69;
    fVar62 = fVar175 * fVar175;
    fVar80 = fVar176 * fVar176;
    fVar81 = fVar61 * fVar61;
    fVar164 = DAT_1467f06f0 - fVar69;
    fVar165 = fRam00000001467f06f4 - fVar69;
    fVar166 = fRam00000001467f06f8 - fVar69;
    fVar148 = fRam00000001467f06fc - fVar69;
    auVar130._0_4_ = fVar80 + fVar62 + fVar81;
    auVar130._4_4_ = fVar80 + fVar62 + fVar81;
    auVar130._8_4_ = fVar80 + fVar62 + fVar81;
    auVar130._12_4_ = fVar80 + fVar62 + fVar81;
    fVar62 = fVar153 * fVar153;
    fVar80 = fVar156 * fVar156;
    auVar54._8_4_ = fVar159 * fVar159;
    auVar73._4_4_ = fVar62;
    auVar73._0_4_ = fVar62;
    auVar73._8_4_ = fVar62;
    auVar73._12_4_ = fVar62;
    auVar54._4_4_ = auVar54._8_4_;
    auVar54._0_4_ = auVar54._8_4_;
    auVar54._12_4_ = auVar54._8_4_;
    fVar81 = fVar80 + fVar62 + auVar54._8_4_;
    fVar89 = fVar80 + fVar62 + auVar54._8_4_;
    fVar90 = fVar80 + fVar62 + auVar54._8_4_;
    fVar62 = fVar80 + fVar62 + auVar54._8_4_;
    if (fVar81 < auVar130._0_4_) {
      auVar6._4_4_ = fVar89;
      auVar6._0_4_ = fVar81;
      auVar6._8_4_ = fVar90;
      auVar6._12_4_ = fVar62;
      auVar73 = rsqrtps(auVar73,auVar6);
      auVar52._0_4_ = auVar73._0_4_ * fVar81;
      auVar52._4_4_ = auVar73._4_4_ * fVar89;
      auVar52._8_4_ = auVar73._8_4_ * fVar90;
      auVar52._12_4_ = auVar73._12_4_ * fVar62;
      auVar73 = rsqrtps(auVar52,auVar130);
      fVar164 = fVar164 * (float)(~-(uint)(fVar81 <= 0.0) & (uint)auVar52._0_4_);
      fVar165 = fVar165 * (float)(~-(uint)(fVar89 <= 0.0) & (uint)auVar52._4_4_);
      fVar166 = fVar166 * (float)(~-(uint)(fVar90 <= 0.0) & (uint)auVar52._8_4_);
      fVar148 = fVar148 * (float)(~-(uint)(fVar62 <= 0.0) & (uint)auVar52._12_4_);
      auVar54._0_4_ =
           (float)(~-(uint)(auVar130._0_4_ <= 0.0) & (uint)(auVar73._0_4_ * auVar130._0_4_));
      auVar54._4_4_ =
           (float)(~-(uint)(auVar130._4_4_ <= 0.0) & (uint)(auVar73._4_4_ * auVar130._4_4_));
      auVar54._8_4_ =
           (float)(~-(uint)(auVar130._8_4_ <= 0.0) & (uint)(auVar73._8_4_ * auVar130._8_4_));
      auVar54._12_4_ =
           (float)(~-(uint)(auVar130._12_4_ <= 0.0) & (uint)(auVar73._12_4_ * auVar130._12_4_));
      auVar109._0_4_ = fVar69 * auVar54._0_4_;
      auVar109._4_4_ = fVar69 * auVar54._4_4_;
      auVar109._8_4_ = fVar69 * auVar54._8_4_;
      auVar109._12_4_ = fVar69 * auVar54._12_4_;
    }
    fVar69 = auVar109._0_4_;
    uVar42 = -(uint)(fVar69 == 0.0);
    auVar53._4_12_ = auVar109._4_12_;
    auVar53._0_4_ = uVar42;
    if ((uVar42 & 1) != 0) {
      return (ulonglong)(uint3)(uVar42 >> 8) << 8;
    }
    auVar73 = rcpps(auVar53,auVar109);
    fVar69 = (2.0 - fVar69 * auVar73._0_4_) * auVar73._0_4_ * (fVar164 + fVar69);
    uVar167 = SUB41(fVar69,0);
    uVar168 = (undefined1)((uint)fVar69 >> 8);
    uVar169 = (undefined1)((uint)fVar69 >> 0x10);
    uVar170 = (undefined1)((uint)fVar69 >> 0x18);
    fVar62 = (2.0 - auVar109._4_4_ * auVar73._4_4_) * auVar73._4_4_ * (fVar165 + auVar109._4_4_);
    uVar171 = SUB41(fVar62,0);
    uVar172 = (undefined1)((uint)fVar62 >> 8);
    uVar173 = (undefined1)((uint)fVar62 >> 0x10);
    uVar174 = (undefined1)((uint)fVar62 >> 0x18);
    fVar62 = (2.0 - auVar109._8_4_ * auVar73._8_4_) * auVar73._8_4_ * (fVar166 + auVar109._8_4_);
    fVar80 = (2.0 - auVar109._12_4_ * auVar73._12_4_) * auVar73._12_4_ * (fVar148 + auVar109._12_4_)
    ;
    auVar10[4] = uVar171;
    auVar10._0_4_ = fVar69;
    auVar10[5] = uVar172;
    auVar10[6] = uVar173;
    auVar10[7] = uVar174;
    auVar10._8_2_ = SUB42(fVar62,0);
    auVar10._10_2_ = (short)((uint)fVar62 >> 0x10);
    auVar10._12_2_ = SUB42(fVar80,0);
    auVar10._14_2_ = (short)((uint)fVar80 >> 0x10);
    auVar73 = rcpps(auVar54,auVar10);
  }
  auVar54 = param_4[5];
  fVar69 = auVar54._0_4_;
  fVar81 = auVar54._4_4_;
  fVar89 = auVar54._12_4_;
  fVar90 = *(float *)param_4[4];
  fVar164 = *(float *)(param_4[4] + 4);
  fVar165 = *(float *)(param_4[4] + 8);
  fVar166 = *(float *)(param_4[4] + 0xc);
  fVar134 = auVar54._8_4_;
  fVar148 = *(float *)param_4[2];
  fVar22 = *(float *)(param_4[2] + 4);
  fVar23 = *(float *)(param_4[2] + 8);
  auVar54 = rcpps(*param_4,auVar54);
  fVar153 = (fVar175 -
            (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))) * fVar175) -
            fVar153;
  fVar156 = (fVar176 -
            (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))) * fVar176) -
            fVar156;
  fVar159 = (fVar61 - fVar62 * fVar61) - fVar159;
  fVar61 = *(float *)param_4[1];
  fVar175 = *(float *)(param_4[1] + 4);
  fVar176 = *(float *)(param_4[1] + 8);
  fVar154 = *(float *)param_4[3];
  fVar157 = *(float *)(param_4[3] + 4);
  fVar160 = *(float *)(param_4[3] + 8);
  fVar162 = *(float *)(param_4[3] + 0xc);
  fVar127 = (float)(~-(uint)(fVar69 == 0.0) & auVar54._0_4_) * auVar73._0_4_;
  fVar131 = (float)(~-(uint)(fVar81 == 0.0) & auVar54._4_4_) * auVar73._4_4_;
  fVar135 = (float)(~-(uint)(fVar134 == 0.0) & auVar54._8_4_) * auVar73._8_4_;
  fVar137 = (float)(~-(uint)(fVar89 == 0.0) & auVar54._12_4_) * auVar73._12_4_;
  fVar63 = fVar61 * fVar153;
  fVar82 = fVar175 * fVar156;
  fVar91 = fVar176 * fVar159;
  fVar101 = fVar148 * fVar153;
  fVar120 = fVar22 * fVar156;
  fVar123 = fVar23 * fVar159;
  fVar102 = fVar148 * fVar145;
  fVar121 = fVar22 * fVar146;
  fVar124 = fVar23 * fVar147;
  fVar128 = fVar69 * (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167)));
  fVar132 = fVar81 * (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171)));
  fVar136 = fVar134 * fVar62;
  fVar138 = fVar89 * fVar80;
  fVar64 = fVar61 * fVar145;
  fVar83 = fVar175 * fVar146;
  fVar92 = fVar176 * fVar147;
  fVar139 = fVar50 * fVar50;
  fVar140 = fVar58 * fVar58;
  fVar141 = fVar59 * fVar59;
  fVar65 = fVar50 * fVar145;
  fVar84 = fVar58 * fVar146;
  fVar93 = fVar59 * fVar147;
  auVar55._4_4_ = fVar65;
  auVar55._0_4_ = fVar65;
  auVar55._8_4_ = fVar65;
  auVar55._12_4_ = fVar65;
  auVar106._0_4_ = fVar84 + fVar65 + fVar93;
  auVar106._4_4_ = fVar84 + fVar65 + fVar93;
  auVar106._8_4_ = fVar84 + fVar65 + fVar93;
  auVar106._12_4_ = fVar84 + fVar65 + fVar93;
  auVar54 = rcpps(auVar55,auVar106);
  auVar70._0_4_ =
       (float)(~-(uint)(auVar106._0_4_ == 0.0) &
              (uint)(auVar54._0_4_ * (fVar140 + fVar139 + fVar141) * *param_5));
  auVar70._4_4_ =
       (float)(~-(uint)(auVar106._4_4_ == 0.0) &
              (uint)(auVar54._4_4_ * (fVar140 + fVar139 + fVar141) * param_5[1]));
  auVar70._8_4_ =
       (float)(~-(uint)(auVar106._8_4_ == 0.0) &
              (uint)(auVar54._8_4_ * (fVar140 + fVar139 + fVar141) * param_5[2]));
  auVar70._12_4_ =
       (float)(~-(uint)(auVar106._12_4_ == 0.0) &
              (uint)(auVar54._12_4_ * (fVar140 + fVar139 + fVar141) * param_5[3]));
  auVar107._0_4_ = fVar140 + fVar139 + fVar141;
  auVar107._4_4_ = fVar140 + fVar139 + fVar141;
  auVar107._8_4_ = fVar140 + fVar139 + fVar141;
  auVar107._12_4_ = fVar140 + fVar139 + fVar141;
  auVar54 = rsqrtps(auVar70,auVar107);
  fVar139 = auVar54._0_4_;
  fVar140 = auVar54._4_4_;
  fVar141 = auVar54._8_4_;
  fVar65 = *param_3;
  fVar84 = param_3[1];
  fVar93 = param_3[2];
  fVar129 = (float)(~-(uint)(auVar107._0_4_ <= 0.0) &
                   (uint)((3.0 - auVar107._0_4_ * fVar139 * fVar139) * fVar139 * 0.5)) * fVar50;
  fVar133 = (float)(~-(uint)(auVar107._4_4_ <= 0.0) &
                   (uint)((3.0 - auVar107._4_4_ * fVar140 * fVar140) * fVar140 * 0.5)) * fVar58;
  fVar140 = (float)(~-(uint)(auVar107._8_4_ <= 0.0) &
                   (uint)((3.0 - auVar107._8_4_ * fVar141 * fVar141) * fVar141 * 0.5)) * fVar59;
  fVar139 = (fVar140 * fVar84 - fVar93 * fVar133) * fVar145;
  fVar140 = (fVar129 * fVar93 - fVar65 * fVar140) * fVar146;
  fVar141 = (fVar133 * fVar65 - fVar84 * fVar129) * fVar147;
  auVar108._0_4_ = fVar140 + fVar139 + fVar141;
  auVar108._4_4_ = fVar140 + fVar139 + fVar141;
  auVar108._8_4_ = fVar140 + fVar139 + fVar141;
  auVar108._12_4_ = fVar140 + fVar139 + fVar141;
  uVar4 = CONCAT44(auVar108._4_4_,auVar108._0_4_);
  auVar71._0_8_ = uVar4 & 0x7fffffff7fffffff;
  auVar71._8_4_ = ABS(auVar108._8_4_);
  auVar71._12_4_ = ABS(auVar108._12_4_);
  auVar8._4_4_ = fVar150;
  auVar8._0_4_ = fVar149;
  auVar8._8_4_ = fVar151;
  auVar8._12_4_ = fVar152;
  auVar54 = maxps(auVar71,auVar8);
  auVar109 = rcpps(auVar108,auVar54);
  fVar149 = auVar70._0_4_ * (2.0 - auVar109._0_4_ * auVar54._0_4_) * auVar109._0_4_ * fVar149;
  fVar150 = auVar70._4_4_ * (2.0 - auVar109._4_4_ * auVar54._4_4_) * auVar109._4_4_ * fVar150;
  fVar151 = auVar70._8_4_ * (2.0 - auVar109._8_4_ * auVar54._8_4_) * auVar109._8_4_ * fVar151;
  fVar152 = auVar70._12_4_ * (2.0 - auVar109._12_4_ * auVar54._12_4_) * auVar109._12_4_ * fVar152;
  fVar141 = fVar84 * fVar145 - fVar146 * *param_3;
  fVar139 = fVar93 * fVar146 - fVar147 * param_3[1];
  fVar140 = fVar65 * fVar147 - fVar145 * param_3[2];
  fVar50 = fVar139 * fVar50;
  fVar58 = fVar140 * fVar58;
  fVar59 = fVar141 * fVar59;
  puVar39 = (uint *)*param_7;
  pfVar41 = (float *)*param_8;
  fVar139 = (float)(-(uint)(fVar58 + fVar50 + fVar59 < 0.0) & 0x80000000 ^ (uint)fVar139);
  fVar140 = (float)(-(uint)(fVar58 + fVar50 + fVar59 < 0.0) & 0x80000000 ^ (uint)fVar140);
  fVar141 = (float)(-(uint)(fVar58 + fVar50 + fVar59 < 0.0) & 0x80000000 ^ (uint)fVar141);
  fVar58 = fVar69 * fVar139;
  fVar65 = fVar81 * fVar140;
  fVar93 = fVar134 * fVar141;
  fVar139 = fVar139 * fVar153;
  fVar140 = fVar140 * fVar156;
  fVar141 = fVar141 * fVar159;
  fVar50 = fVar61 * fVar58;
  fVar59 = fVar175 * fVar65;
  fVar84 = fVar176 * fVar93;
  fVar58 = fVar148 * fVar58;
  fVar65 = fVar22 * fVar65;
  fVar93 = fVar23 * fVar93;
  uVar42 = -(uint)(0.0 <= fVar149);
  uVar44 = -(uint)(0.0 <= fVar150);
  uVar46 = -(uint)(0.0 <= fVar151);
  uVar48 = -(uint)(0.0 <= fVar152);
  uVar103 = uVar42 & _DAT_1467f0920;
  uVar122 = uVar44 & uRam00000001467f0924;
  uVar125 = uVar46 & uRam00000001467f0928;
  uVar126 = uVar48 & uRam00000001467f092c;
  local_108 = SUB168(*param_4,0);
  if (fVar3 <= 0.0) {
    fVar90 = fVar90 * fVar69;
    fVar164 = fVar164 * fVar81;
    fVar165 = fVar165 * fVar134;
    fVar166 = fVar166 * fVar89;
    fVar154 = fVar154 * fVar69;
    fVar157 = fVar157 * fVar81;
    fVar160 = fVar160 * fVar134;
    fVar162 = fVar162 * fVar89;
    auVar72._4_4_ = fVar22;
    auVar72._0_4_ = fVar22;
    auVar72._8_4_ = fVar22;
    auVar72._12_4_ = fVar22;
    fVar152 = fVar154 * fVar61 + fVar90 * fVar148;
    fVar50 = fVar157 * fVar61 + fVar164 * fVar148;
    fVar58 = fVar160 * fVar61 + fVar165 * fVar148;
    fVar59 = fVar162 * fVar61 + fVar166 * fVar148;
    fVar149 = fVar154 * fVar175 + fVar90 * fVar22;
    fVar150 = fVar157 * fVar175 + fVar164 * fVar22;
    fVar151 = fVar160 * fVar175 + fVar165 * fVar22;
    fVar65 = fVar162 * fVar175 + fVar166 * fVar22;
    fVar90 = fVar154 * fVar176 + fVar90 * fVar23;
    fVar164 = fVar157 * fVar176 + fVar164 * fVar23;
    fVar165 = fVar160 * fVar176 + fVar165 * fVar23;
    fVar166 = fVar162 * fVar176 + fVar166 * fVar23;
    auVar110._0_4_ = fVar143 + fVar142 + fVar144;
    auVar110._4_4_ = fVar143 + fVar142 + fVar144;
    auVar110._8_4_ = fVar143 + fVar142 + fVar144;
    auVar110._12_4_ = fVar143 + fVar142 + fVar144;
    auVar73 = rsqrtps(auVar72,auVar110);
    fVar66 = auVar73._0_4_;
    fVar85 = auVar73._4_4_;
    fVar94 = auVar73._8_4_;
    fVar95 = auVar73._12_4_;
    auVar74._0_4_ = fVar66 * 0.5;
    auVar74._4_4_ = fVar85 * 0.5;
    auVar74._8_4_ = fVar94 * 0.5;
    auVar74._12_4_ = fVar95 * 0.5;
    auVar111._0_4_ = 0.0 - fVar3;
    auVar111._4_4_ = 0.0 - fVar155;
    auVar111._8_4_ = 0.0 - fVar158;
    auVar111._12_4_ = 0.0 - fVar161;
    auVar73 = rsqrtps(auVar74,auVar111);
    fVar145 = (float)(~-(uint)(auVar110._0_4_ <= 0.0) &
                     (uint)((3.0 - auVar110._0_4_ * fVar66 * fVar66) * auVar74._0_4_)) * fVar145;
    fVar146 = (float)(~-(uint)(auVar110._4_4_ <= 0.0) &
                     (uint)((3.0 - auVar110._4_4_ * fVar85 * fVar85) * auVar74._4_4_)) * fVar146;
    fVar147 = (float)(~-(uint)(auVar110._8_4_ <= 0.0) &
                     (uint)((3.0 - auVar110._8_4_ * fVar94 * fVar94) * auVar74._8_4_)) * fVar147;
    fVar67 = auVar73._0_4_;
    fVar68 = auVar73._4_4_;
    fVar86 = auVar73._8_4_;
    fVar97 = auVar73._12_4_;
    auVar75._0_4_ = fVar67 * 0.5;
    auVar75._4_4_ = fVar68 * 0.5;
    auVar75._8_4_ = fVar86 * 0.5;
    auVar75._12_4_ = fVar97 * 0.5;
    auVar9[1] = uVar168;
    auVar9[0] = uVar167;
    auVar9[2] = uVar169;
    auVar9[3] = uVar170;
    auVar9[4] = uVar171;
    auVar9[5] = uVar172;
    auVar9[6] = uVar173;
    auVar9[7] = uVar174;
    auVar9._8_2_ = SUB42(fVar62,0);
    auVar9._10_2_ = (short)((uint)fVar62 >> 0x10);
    auVar9._12_2_ = SUB42(fVar80,0);
    auVar9._14_2_ = (short)((uint)fVar80 >> 0x10);
    auVar73 = rcpps(auVar75,auVar9);
    fVar66 = param_6[1];
    fVar85 = param_6[2];
    fVar94 = param_6[3];
    *param_9 = (float)(~-(uint)(auVar111._0_4_ <= 0.0) &
                      (uint)((3.0 - fVar67 * auVar111._0_4_ * fVar67) * auVar75._0_4_ *
                            auVar111._0_4_)) *
               (2.0 - (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))) *
                      auVar73._0_4_) * auVar73._0_4_ * *param_6 * fVar145 + *param_9;
    param_9[1] = (float)(~-(uint)(auVar111._4_4_ <= 0.0) &
                        (uint)((3.0 - fVar68 * auVar111._4_4_ * fVar68) * auVar75._4_4_ *
                              auVar111._4_4_)) *
                 (2.0 - (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))) *
                        auVar73._4_4_) * auVar73._4_4_ * fVar66 * fVar146 + param_9[1];
    param_9[2] = (float)(~-(uint)(auVar111._8_4_ <= 0.0) &
                        (uint)((3.0 - fVar86 * auVar111._8_4_ * fVar86) * auVar75._8_4_ *
                              auVar111._8_4_)) * (2.0 - fVar62 * auVar73._8_4_) * auVar73._8_4_ *
                 fVar85 * fVar147 + param_9[2];
    param_9[3] = (float)(~-(uint)(auVar111._12_4_ <= 0.0) &
                        (uint)((3.0 - fVar97 * auVar111._12_4_ * fVar97) * auVar75._12_4_ *
                              auVar111._12_4_)) * (2.0 - fVar80 * auVar73._12_4_) * auVar73._12_4_ *
                 fVar94 * (float)(~-(uint)(auVar110._12_4_ <= 0.0) &
                                 (uint)((3.0 - auVar110._12_4_ * fVar95 * fVar95) * auVar74._12_4_))
                          * ((fVar96 - fVar98) - (fVar79 + fVar60 + fVar88) * fVar163) + param_9[3];
    fVar67 = fRam00000001467f086c;
    fVar94 = fRam00000001467f0868;
    fVar85 = fRam00000001467f0864;
    fVar66 = _DAT_1467f0860;
    lVar38 = 0x20;
    do {
      local_108 = local_108 + 1;
      uVar4 = *local_108;
      auVar104._8_4_ = 0;
      auVar104._0_8_ = uVar4;
      auVar14._12_2_ = 0;
      auVar14._0_12_ = auVar104;
      auVar14[0xe] = (char)(uVar4 >> 0x38);
      auVar15[0xc] = (char)(uVar4 >> 0x30);
      auVar15._0_12_ = auVar104;
      auVar15._13_2_ = auVar14._13_2_;
      auVar17._8_4_ = 0;
      auVar17._0_8_ = uVar4;
      auVar17._12_3_ = auVar15._12_3_;
      auVar18._8_2_ = 0;
      auVar18._0_8_ = uVar4;
      auVar18[10] = (char)(uVar4 >> 0x28);
      auVar18._11_4_ = auVar17._11_4_;
      auVar19._8_2_ = 0;
      auVar19._0_8_ = uVar4;
      auVar19._10_5_ = auVar18._10_5_;
      auVar20[8] = (char)(uVar4 >> 0x20);
      auVar20._0_8_ = uVar4;
      auVar20._9_6_ = auVar19._9_6_;
      auVar26._7_8_ = 0;
      auVar26._0_7_ = auVar20._8_7_;
      Var27 = CONCAT81(SUB158(auVar26 << 0x40,7),(char)(uVar4 >> 0x18));
      auVar35._9_6_ = 0;
      auVar35._0_9_ = Var27;
      auVar28._1_10_ = SUB1510(auVar35 << 0x30,5);
      auVar28[0] = (char)(uVar4 >> 0x10);
      auVar36._11_4_ = 0;
      auVar36._0_11_ = auVar28;
      auVar29._1_12_ = SUB1512(auVar36 << 0x20,3);
      auVar29[0] = (char)(uVar4 >> 8);
      uVar100 = CONCAT11(0,(byte)uVar4);
      auVar21._2_13_ = auVar29;
      auVar21._0_2_ = uVar100;
      uVar87 = (ushort)Var27;
      auVar16._10_2_ = 0;
      auVar16._0_10_ = auVar21._0_10_;
      auVar16._12_2_ = uVar87;
      uVar37 = CONCAT42(auVar16._10_4_,auVar28._0_2_);
      auVar30._6_8_ = 0;
      auVar30._0_6_ = uVar37;
      uVar103 = (uint)uVar37;
      uVar42 = -(uint)((fVar152 * (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167)
                                                                  )) + fVar153) * fVar145 +
                       (fVar149 * (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167)
                                                                  )) + fVar156) * fVar146 +
                       (fVar90 * (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))
                                                ) + fVar159) * fVar147 <= 0.0);
      uVar44 = -(uint)((fVar50 * (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))
                                                ) + fVar153) * fVar145 +
                       (fVar150 * (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171)
                                                                  )) + fVar156) * fVar146 +
                       (fVar164 * (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171)
                                                                  )) + fVar159) * fVar147 <= 0.0);
      uVar46 = -(uint)((fVar58 * fVar62 + fVar153) * fVar145 +
                       (fVar151 * fVar62 + fVar156) * fVar146 +
                       (fVar165 * fVar62 + fVar159) * fVar147 <= 0.0);
      uVar48 = -(uint)((fVar59 * fVar80 + fVar153) * fVar145 + (fVar65 * fVar80 + fVar156) * fVar146
                       + (fVar166 * fVar80 + fVar159) * fVar147 <= 0.0);
      fVar155 = (((float)uVar100 + 0.0) * fVar66 + _DAT_1467f06d0) * fVar69;
      fVar158 = (((float)(int)CONCAT82(SUB148(auVar30 << 0x40,6),auVar29._0_2_) + 0.0) * fVar85 +
                fRam00000001467f06d4) * fVar81;
      fVar161 = (((float)(uVar103 >> 0x10) * 65536.0 + (float)(uVar103 & 0xffff)) * fVar94 +
                fRam00000001467f06d8) * fVar134;
      fVar163 = (((float)uVar87 + 0.0) * fVar67 + fRam00000001467f06dc) * fVar89;
      fVar68 = (((float)auVar20._8_2_ + 0.0) * fVar66 + _DAT_1467f06d0) * fVar69;
      fVar86 = (((float)auVar18._10_2_ + 0.0) * fVar85 + fRam00000001467f06d4) * fVar81;
      fVar95 = (fVar94 * 0.0 + fRam00000001467f06d8) * fVar134;
      fVar97 = (((float)(auVar17._11_4_ >> 0x18) + 0.0) * fVar67 + fRam00000001467f06dc) * fVar89;
      fVar152 = fVar155 * fVar61 + fVar68 * fVar148;
      fVar50 = fVar158 * fVar61 + fVar86 * fVar148;
      fVar58 = fVar161 * fVar61 + fVar95 * fVar148;
      fVar59 = fVar163 * fVar61 + fVar97 * fVar148;
      fVar149 = fVar155 * fVar175 + fVar68 * fVar22;
      fVar150 = fVar158 * fVar175 + fVar86 * fVar22;
      fVar151 = fVar161 * fVar175 + fVar95 * fVar22;
      fVar65 = fVar163 * fVar175 + fVar97 * fVar22;
      fVar90 = fVar155 * fVar176 + fVar68 * fVar23;
      fVar164 = fVar158 * fVar176 + fVar86 * fVar23;
      fVar165 = fVar161 * fVar176 + fVar95 * fVar23;
      fVar166 = fVar163 * fVar176 + fVar97 * fVar23;
      *puVar39 = ~uVar42 & *puVar39 | uVar42 & (uint)fVar66;
      puVar39[1] = ~uVar44 & puVar39[1] | uVar44 & (uint)fVar85;
      puVar39[2] = ~uVar46 & puVar39[2] | uVar46 & (uint)fVar94;
      puVar39[3] = ~uVar48 & puVar39[3] | uVar48 & (uint)fVar67;
      puVar39 = puVar39 + 4;
      lVar38 = lVar38 + -1;
    } while (lVar38 != 0);
  }
  else {
    uVar11 = CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))) ^
             CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167)));
    uVar12 = CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))) ^
             CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171)));
    uVar13 = uVar11 & 0xffff | 0x80000000;
    lVar40 = (longlong)puVar39 - (longlong)pfVar41;
    lVar38 = 0x20;
    uVar4 = CONCAT44(uVar11,uVar11) & 0xffff0000ffff;
    uVar24 = uVar11 & 0xffff;
    uVar25 = uVar11 & 0xffff;
    do {
      local_108 = local_108 + 1;
      fVar69 = fVar154 + (fVar82 + fVar63 + fVar91) * fVar127;
      fVar163 = fVar157 + (fVar82 + fVar63 + fVar91) * fVar131;
      fVar96 = fVar160 + (fVar82 + fVar63 + fVar91) * fVar135;
      fVar98 = fVar162 + (fVar82 + fVar63 + fVar91) * fVar137;
      fVar60 = fVar90 + (fVar120 + fVar101 + fVar123) * fVar127;
      fVar61 = fVar164 + (fVar120 + fVar101 + fVar123) * fVar131;
      fVar62 = fVar165 + (fVar120 + fVar101 + fVar123) * fVar135;
      fVar79 = fVar166 + (fVar120 + fVar101 + fVar123) * fVar137;
      uVar43 = -(uint)(fVar90 * (fVar65 + fVar58 + fVar93) + fVar154 * (fVar59 + fVar50 + fVar84) <
                      (float)(~uVar42 & (uint)((fVar140 + fVar139 + fVar141) * (0.0 - auVar73._0_4_)
                                              ) | uVar103));
      uVar45 = -(uint)(fVar164 * (fVar65 + fVar58 + fVar93) + fVar157 * (fVar59 + fVar50 + fVar84) <
                      (float)(~uVar44 & (uint)((fVar140 + fVar139 + fVar141) * (0.0 - auVar73._4_4_)
                                              ) | uVar122));
      uVar47 = -(uint)(fVar165 * (fVar65 + fVar58 + fVar93) + fVar160 * (fVar59 + fVar50 + fVar84) <
                      (float)(~uVar46 & (uint)((fVar140 + fVar139 + fVar141) * (0.0 - auVar73._8_4_)
                                              ) | uVar125));
      uVar49 = -(uint)(fVar166 * (fVar65 + fVar58 + fVar93) + fVar162 * (fVar59 + fVar50 + fVar84) <
                      (float)(~uVar48 & (uint)((fVar140 + fVar139 + fVar141) *
                                              (0.0 - auVar73._12_4_)) | uVar126));
      fVar80 = fVar60 * (fVar121 + fVar102 + fVar124) * fVar128 +
               fVar69 * (fVar83 + fVar64 + fVar92) * fVar128;
      fVar81 = fVar61 * (fVar121 + fVar102 + fVar124) * fVar132 +
               fVar163 * (fVar83 + fVar64 + fVar92) * fVar132;
      fVar88 = fVar62 * (fVar121 + fVar102 + fVar124) * fVar136 +
               fVar96 * (fVar83 + fVar64 + fVar92) * fVar136;
      fVar89 = fVar79 * (fVar121 + fVar102 + fVar124) * fVar138 +
               fVar98 * (fVar83 + fVar64 + fVar92) * fVar138;
      fVar60 = (fVar60 * fVar60 + fVar69 * fVar69) * fVar128 * fVar128;
      fVar61 = (fVar61 * fVar61 + fVar163 * fVar163) * fVar132 * fVar132;
      fVar62 = (fVar62 * fVar62 + fVar96 * fVar96) * fVar136 * fVar136;
      fVar79 = (fVar79 * fVar79 + fVar98 * fVar98) * fVar138 * fVar138;
      fVar69 = fVar80 * fVar80 - fVar60 * fVar3;
      fVar163 = fVar81 * fVar81 - fVar61 * fVar155;
      fVar96 = fVar88 * fVar88 - fVar62 * fVar158;
      fVar98 = fVar89 * fVar89 - fVar79 * fVar161;
      *pfVar41 = (float)((uint)(*pfVar41 + fVar149) & uVar43 | ~uVar43 & (uint)*pfVar41);
      pfVar41[1] = (float)((uint)(pfVar41[1] + fVar150) & uVar45 | ~uVar45 & (uint)pfVar41[1]);
      pfVar41[2] = (float)((uint)(pfVar41[2] + fVar151) & uVar47 | ~uVar47 & (uint)pfVar41[2]);
      pfVar41[3] = (float)((uint)(pfVar41[3] + fVar152) & uVar49 | ~uVar49 & (uint)pfVar41[3]);
      uVar51 = *local_108;
      auVar105._8_4_ = 0;
      auVar105._0_8_ = uVar51;
      auVar119._12_2_ = 0;
      auVar119._0_12_ = auVar105;
      auVar119[0xe] = (char)(uVar51 >> 0x38);
      auVar119[0xf] = (char)(uVar12 >> 0x18);
      auVar118._14_2_ = auVar119._14_2_;
      auVar118[0xc] = 0;
      auVar118._0_12_ = auVar105;
      auVar118[0xd] = (char)(uVar12 >> 0x10);
      auVar117._13_3_ = auVar118._13_3_;
      auVar117[0xc] = (char)(uVar51 >> 0x30);
      auVar117._0_12_ = auVar105;
      auVar116._12_4_ = auVar117._12_4_;
      auVar116._8_3_ = 0;
      auVar116._0_8_ = uVar51;
      auVar116[0xb] = (char)(uVar12 >> 8);
      auVar115._11_5_ = auVar116._11_5_;
      auVar115._8_2_ = 0;
      auVar115._0_8_ = uVar51;
      auVar115[10] = (char)(uVar51 >> 0x28);
      auVar114._10_6_ = auVar115._10_6_;
      auVar114[8] = 0;
      auVar114._0_8_ = uVar51;
      auVar114[9] = (char)uVar12;
      auVar113._9_7_ = auVar114._9_7_;
      auVar113[8] = (char)(uVar51 >> 0x20);
      auVar113._0_8_ = uVar51;
      Var33 = CONCAT91(CONCAT81(auVar113._8_8_,(char)(uVar11 >> 0x18)),(char)(uVar51 >> 0x18));
      auVar32._2_10_ = Var33;
      auVar32[1] = (char)(uVar11 >> 0x10);
      auVar32[0] = (char)(uVar51 >> 0x10);
      auVar31._2_12_ = auVar32;
      auVar31[1] = (char)(uVar11 >> 8);
      auVar31[0] = (char)(uVar51 >> 8);
      auVar112._0_2_ = CONCAT11((char)uVar11,(char)uVar51);
      auVar112._2_14_ = auVar31;
      auVar78._0_12_ = auVar112._0_12_;
      auVar78._12_2_ = (short)Var33;
      auVar78._14_2_ = (short)(uVar12 >> 0x10);
      auVar77._12_4_ = auVar78._12_4_;
      auVar77._0_10_ = auVar112._0_10_;
      auVar77._10_2_ = (short)uVar12;
      auVar76._10_6_ = auVar77._10_6_;
      auVar76._0_8_ = auVar112._0_8_;
      auVar76._8_2_ = auVar32._0_2_;
      auVar34._4_8_ = auVar76._8_8_;
      auVar34._2_2_ = (short)(uVar11 >> 0x10);
      auVar34._0_2_ = auVar31._0_2_;
      uVar51 = CONCAT44(auVar34._0_4_ >> 0x10,uVar11) & 0xffffffff0000ffff;
      auVar56._0_4_ = (float)auVar113._8_2_;
      auVar56._4_4_ = (float)auVar115._10_2_;
      auVar56._8_4_ = 0;
      auVar56._12_4_ = (float)(auVar116._12_4_ >> 0x10);
      auVar5._4_4_ = fVar163;
      auVar5._0_4_ = fVar69;
      auVar5._8_4_ = fVar96;
      auVar5._12_4_ = fVar98;
      auVar54 = rsqrtps(auVar56,auVar5);
      fVar154 = ((float)(int)uVar51 * 65536.0 + (float)auVar112._0_2_) * fVar68 + fVar66;
      fVar157 = ((float)(int)(uVar51 >> 0x20) * 65536.0 + (float)(auVar34._0_4_ & 0xffff)) * fVar86
                + fVar85;
      fVar160 = ((float)(auVar76._8_4_ >> 0x10) * 65536.0 + (float)(auVar76._8_4_ & 0xffff)) *
                fVar95 + fVar94;
      fVar162 = ((float)(auVar77._12_4_ >> 0x10) * 65536.0 + (float)(auVar77._12_4_ & 0xffff)) *
                fVar97 + fVar67;
      auVar57._0_4_ = auVar54._0_4_ * fVar69;
      auVar57._4_4_ = auVar54._4_4_ * fVar163;
      auVar57._8_4_ = auVar54._8_4_ * fVar96;
      auVar57._12_4_ = auVar54._12_4_ * fVar98;
      fVar90 = (auVar56._0_4_ + 0.0) * fVar68 + fVar66;
      fVar164 = (auVar56._4_4_ + 0.0) * fVar86 + fVar85;
      fVar165 = fVar95 * 0.0 + fVar94;
      fVar166 = (auVar56._12_4_ + 0.0) * fVar97 + fVar67;
      fVar80 = (float)((uint)fVar80 ^ (uVar24 | 0x80000000)) -
               (float)(~-(uint)(fVar69 <= 0.0) & (uint)auVar57._0_4_);
      fVar81 = (float)((uint)fVar81 ^ (uVar25 | 0x80000000)) -
               (float)(~-(uint)(fVar163 <= 0.0) & (uint)auVar57._4_4_);
      fVar88 = (float)((uint)fVar88 ^ uVar13) -
               (float)(~-(uint)(fVar96 <= 0.0) & (uint)auVar57._8_4_);
      fVar89 = (float)((uint)fVar89 ^ uVar13) -
               (float)(~-(uint)(fVar98 <= 0.0) & (uint)auVar57._12_4_);
      auVar7._4_4_ = fVar61;
      auVar7._0_4_ = fVar60;
      auVar7._8_4_ = fVar62;
      auVar7._12_4_ = fVar79;
      auVar54 = rcpps(auVar57,auVar7);
      fVar60 = fVar80 * (float)(~-(uint)(fVar60 == 0.0) & auVar54._0_4_ |
                               -(uint)(fVar60 == 0.0) & 0x7f7fffee);
      fVar61 = fVar81 * (float)(~-(uint)(fVar61 == 0.0) & auVar54._4_4_ |
                               -(uint)(fVar61 == 0.0) & 0x7f7fffee);
      fVar62 = fVar88 * (float)(~-(uint)(fVar62 == 0.0) & auVar54._8_4_ |
                               -(uint)(fVar62 == 0.0) & 0x7f7fffee);
      fVar79 = fVar89 * (float)(~-(uint)(fVar79 == 0.0) & auVar54._12_4_ |
                               -(uint)(fVar79 == 0.0) & 0x7f7fffee);
      pfVar1 = (float *)(lVar40 + (longlong)pfVar41);
      uVar45 = -(uint)((0.0 < fVar80 && 0.0 <= fVar69) && fVar60 < *pfVar1);
      uVar47 = -(uint)((0.0 < fVar81 && 0.0 <= fVar163) && fVar61 < pfVar1[1]);
      uVar49 = -(uint)((0.0 < fVar88 && 0.0 <= fVar96) && fVar62 < pfVar1[2]);
      uVar99 = -(uint)((0.0 < fVar89 && 0.0 <= fVar98) && fVar79 < pfVar1[3]);
      puVar39 = (uint *)(lVar40 + (longlong)pfVar41);
      uVar24 = puVar39[1];
      uVar25 = puVar39[2];
      uVar43 = puVar39[3];
      puVar2 = (uint *)(lVar40 + (longlong)pfVar41);
      *puVar2 = ~uVar45 & *puVar39 | uVar45 & (uint)fVar60;
      puVar2[1] = ~uVar47 & uVar24 | uVar47 & (uint)fVar61;
      puVar2[2] = ~uVar49 & uVar25 | uVar49 & (uint)fVar62;
      puVar2[3] = ~uVar99 & uVar43 | uVar99 & (uint)fVar79;
      pfVar41 = pfVar41 + 4;
      lVar38 = lVar38 + -1;
      uVar24 = (uint)uVar4;
      uVar25 = (uint)(uVar4 >> 0x20);
    } while (lVar38 != 0);
  }
  return (ulonglong)(fVar3 <= 0.0);
}



// FUNCTION 1438f10d0 FUN_1438f10d0 body=645 status=ok
// SIG undefined FUN_1438f10d0(void)

ulonglong FUN_1438f10d0(longlong param_1,float *param_2,float *param_3,float *param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  bool bVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  fVar12 = *param_3;
  fVar15 = param_3[1];
  fVar18 = param_3[2];
  fVar10 = fVar12 * *(float *)(param_1 + 0x30);
  fVar13 = fVar15 * *(float *)(param_1 + 0x34);
  fVar16 = fVar18 * *(float *)(param_1 + 0x38);
  local_78 = *(float *)(param_1 + 0xa0);
  fVar11 = fVar12 * param_2[4];
  fVar14 = fVar15 * param_2[5];
  fVar17 = fVar18 * param_2[6];
  local_88 = *(float *)(param_1 + 0x30) - (fVar13 + fVar10 + fVar16) * fVar12;
  fStack_84 = *(float *)(param_1 + 0x34) - (fVar13 + fVar10 + fVar16) * fVar15;
  fStack_80 = *(float *)(param_1 + 0x38) - (fVar13 + fVar10 + fVar16) * fVar18;
  fStack_7c = *(float *)(param_1 + 0x3c) - (fVar13 + fVar10 + fVar16) * param_3[3];
  fVar10 = fVar12 * *param_2;
  fVar13 = fVar15 * param_2[1];
  fVar16 = fVar18 * param_2[2];
  local_58 = param_2[4] - (fVar14 + fVar11 + fVar17) * fVar12;
  fStack_54 = param_2[5] - (fVar14 + fVar11 + fVar17) * fVar15;
  fStack_50 = param_2[6] - (fVar14 + fVar11 + fVar17) * fVar18;
  local_68 = *param_2 - (fVar13 + fVar10 + fVar16) * fVar12;
  fStack_64 = param_2[1] - (fVar13 + fVar10 + fVar16) * fVar15;
  fStack_60 = param_2[2] - (fVar13 + fVar10 + fVar16) * fVar18;
  bVar1 = (fStack_54 - fStack_64) * (fStack_54 - fStack_64) +
          (local_58 - local_68) * (local_58 - local_68) +
          (fStack_50 - fStack_60) * (fStack_50 - fStack_60) == 0.0;
  fStack_6c = local_78;
  if (bVar1) {
    local_78 = local_58;
    fStack_74 = fStack_54;
    fStack_70 = fStack_50;
    fStack_5c = fStack_6c;
    fStack_4c = fStack_6c;
    uVar3 = FUN_1438cce60(&local_88,&local_78,param_5,param_6,param_7,param_8,param_9);
  }
  else {
    fVar16 = local_68 - local_58;
    fVar17 = fStack_64 - fStack_54;
    fVar20 = fStack_60 - fStack_50;
    fVar12 = fVar16 * fVar16;
    fVar15 = fVar17 * fVar17;
    fVar18 = fVar20 * fVar20;
    fVar11 = fVar15 + fVar12 + fVar18;
    fVar13 = fVar15 + fVar12 + fVar18;
    fVar14 = fVar15 + fVar12 + fVar18;
    fVar18 = fVar15 + fVar12 + fVar18;
    fVar12 = (local_68 - local_88) * fVar16;
    fVar15 = (fStack_64 - fStack_84) * fVar17;
    fVar10 = (fStack_60 - fStack_80) * fVar20;
    auVar8._4_4_ = fVar12;
    auVar8._0_4_ = fVar12;
    auVar8._8_4_ = fVar12;
    auVar8._12_4_ = fVar12;
    auVar2._4_4_ = fVar13;
    auVar2._0_4_ = fVar11;
    auVar2._8_4_ = fVar14;
    auVar2._12_4_ = fVar18;
    auVar9 = rcpps(auVar8,auVar2);
    fVar11 = (2.0 - fVar11 * auVar9._0_4_) * auVar9._0_4_ * (fVar15 + fVar12 + fVar10);
    fVar13 = (2.0 - fVar13 * auVar9._4_4_) * auVar9._4_4_ * (fVar15 + fVar12 + fVar10);
    fVar14 = (2.0 - fVar14 * auVar9._8_4_) * auVar9._8_4_ * (fVar15 + fVar12 + fVar10);
    fVar12 = (2.0 - fVar18 * auVar9._12_4_) * auVar9._12_4_ * (fVar15 + fVar12 + fVar10);
    uVar4 = -(uint)(fVar11 < DAT_1467f06f0);
    uVar5 = -(uint)(fVar13 < fRam00000001467f06f4);
    uVar6 = -(uint)(fVar14 < fRam00000001467f06f8);
    uVar7 = -(uint)(fVar12 < fRam00000001467f06fc);
    auVar19._0_4_ = (uint)fVar11 & uVar4;
    auVar19._4_4_ = (uint)fVar13 & uVar5;
    auVar19._8_4_ = (uint)fVar14 & uVar6;
    auVar19._12_4_ = (uint)fVar12 & uVar7;
    auVar9._4_4_ = ~uVar5 & (uint)fRam00000001467f06f4;
    auVar9._0_4_ = ~uVar4 & (uint)DAT_1467f06f0;
    auVar9._8_4_ = ~uVar6 & (uint)fRam00000001467f06f8;
    auVar9._12_4_ = ~uVar7 & (uint)fRam00000001467f06fc;
    auVar9 = maxps(ZEXT816(0),auVar19 | auVar9);
    fVar12 = (local_68 - local_88) - auVar9._0_4_ * fVar16;
    fVar15 = (fStack_64 - fStack_84) - auVar9._4_4_ * fVar17;
    fVar18 = (fStack_60 - fStack_80) - auVar9._8_4_ * fVar20;
    fVar12 = fVar15 * fVar15 + fVar12 * fVar12 + fVar18 * fVar18;
    if (fVar12 < *param_4 || fVar12 == *param_4) {
      fStack_74 = local_78;
      fStack_70 = local_78;
      fStack_5c = local_78;
      fStack_4c = local_78;
      uVar3 = FUN_1438cc7a0(&local_88,&local_58,&local_68,&local_78,param_5,param_6,param_7,param_8,
                            param_9);
    }
    else {
      uVar3 = (ulonglong)(-(uint)bVar1 & 0xffffff00);
    }
  }
  return uVar3;
}



// FUNCTION 1438f1360 FUN_1438f1360 body=266 status=ok
// SIG undefined FUN_1438f1360(void)

void FUN_1438f1360(longlong param_1,float *param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = fVar1 * *(float *)(param_1 + 0x30);
  fVar5 = fVar2 * *(float *)(param_1 + 0x34);
  fVar6 = fVar3 * *(float *)(param_1 + 0x38);
  local_18 = *(float *)(param_1 + 0x30) - (fVar5 + fVar4 + fVar6) * fVar1;
  fStack_14 = *(float *)(param_1 + 0x34) - (fVar5 + fVar4 + fVar6) * fVar2;
  fStack_10 = *(float *)(param_1 + 0x38) - (fVar5 + fVar4 + fVar6) * fVar3;
  fStack_c = *(float *)(param_1 + 0x3c) - (fVar5 + fVar4 + fVar6) * param_3[3];
  fVar4 = fVar1 * *param_2;
  fVar5 = fVar2 * param_2[1];
  fVar6 = fVar3 * param_2[2];
  local_28 = *param_2 - (fVar5 + fVar4 + fVar6) * fVar1;
  fStack_24 = param_2[1] - (fVar5 + fVar4 + fVar6) * fVar2;
  fStack_20 = param_2[2] - (fVar5 + fVar4 + fVar6) * fVar3;
  fStack_1c = *(float *)(param_1 + 0xa0) + param_2[3];
  local_38 = param_2[4] - *(float *)(param_1 + 0x50);
  fStack_34 = param_2[5] - *(float *)(param_1 + 0x54);
  fStack_30 = param_2[6] - *(float *)(param_1 + 0x58);
  fVar4 = fVar1 * local_38;
  fVar5 = fVar2 * fStack_34;
  fVar6 = fVar3 * fStack_30;
  local_38 = local_38 - (fVar5 + fVar4 + fVar6) * fVar1;
  fStack_34 = fStack_34 - (fVar5 + fVar4 + fVar6) * fVar2;
  fStack_30 = fStack_30 - (fVar5 + fVar4 + fVar6) * fVar3;
  fStack_2c = (param_2[7] - *(float *)(param_1 + 0x5c)) - (fVar5 + fVar4 + fVar6) * param_3[3];
  FUN_1438cc210(&local_18,&local_28,&local_38,local_38,param_5,param_6,param_7,param_8);
  return;
}



// FUNCTION 1438f1470 FUN_1438f1470 body=97 status=ok
// SIG undefined FUN_1438f1470(void)

int FUN_1438f1470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vsnwprintf_s(*puVar2,param_1,0x400,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 1438f14e0 FUN_1438f14e0 body=103 status=ok
// SIG undefined FUN_1438f14e0(void)

void FUN_1438f14e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = TritonRuntime::TritonAcoustics::vftable;
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1,param_3,param_4,0xfffffffffffffffe);
    }
    *plVar1 = 0;
    puVar2 = (undefined8 *)plVar1[1];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    (**(code **)(*DAT_146b95ca8 + 0x18))(DAT_146b95ca8,plVar1);
  }
  return;
}



// FUNCTION 1438f1550 FUN_1438f1550 body=35 status=ok
// SIG undefined FUN_1438f1550(void)

void FUN_1438f1550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*DAT_146b95ca8 + 0x18))(DAT_146b95ca8,param_1,param_3,param_4,0xfffffffffffffffe);
  return;
}



// FUNCTION 1438f1580 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRuntimePhysXPlatformModule::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1438f14e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1438f15c0 FUN_1438f15c0 body=124 status=ok
// SIG undefined FUN_1438f15c0(void)

void FUN_1438f15c0(void)

{
  if (DAT_146b95ca0 != '\0') {
    if (DAT_146b95c98 != (undefined8 *)0x0) {
      (**(code **)*DAT_146b95c98)(DAT_146b95c98,1);
    }
    DAT_146b95c98 = (undefined8 *)0x0;
    DAT_146b95ca0 = '\0';
  }
  if (DAT_146b95ca1 != '\0') {
    if (DAT_146b95ca8 != (undefined8 *)0x0) {
      (**(code **)*DAT_146b95ca8)(DAT_146b95ca8,5);
    }
    DAT_146b95ca8 = (undefined8 *)0x0;
    DAT_146b95ca1 = '\0';
  }
  DAT_146b95cb0 = 0;
  DAT_146b95cb8 = 0;
  DAT_146b95ca4 = 0;
  DAT_146b95ca2 = 0;
  return;
}



// FUNCTION 1438f1640 FUN_1438f1640 body=127 status=ok
// SIG undefined FUN_1438f1640(void)

undefined8 *
FUN_1438f1640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)
           (**(code **)(*DAT_146b95ca8 + 8))(DAT_146b95ca8,0x10,param_3,param_4,0xfffffffffffffffe);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = TritonRuntime::TritonAcoustics::vftable;
    puVar2 = (undefined8 *)(**(code **)(*DAT_146b95ca8 + 8))(DAT_146b95ca8,0x10);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = 0;
      DAT_146b95ca2 = 1;
    }
    puVar1[1] = puVar2;
  }
  return puVar1;
}



// FUNCTION 1438f16c0 FUN_1438f16c0 body=42 status=ok
// SIG undefined FUN_1438f16c0(void)

void FUN_1438f16c0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*DAT_146b95ca8 + 0x18))(DAT_146b95ca8,param_1);
  }
  return;
}



// FUNCTION 1438f16f0 FUN_1438f16f0 body=90 status=ok
// SIG undefined FUN_1438f16f0(void)

ulonglong FUN_1438f16f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       void *param_5)

{
  void *pvVar1;
  ulonglong uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  if (**(longlong **)(param_1 + 8) == 0) {
    pvVar1 = _guard_xfg_dispatch_icall_nop(param_5,0,0x80);
    return (ulonglong)pvVar1 & 0xffffffffffffff00;
  }
  local_28 = CONCAT44(param_3,param_2);
  local_20 = param_4;
  local_10 = param_4;
  uVar2 = FUN_1438f45e0(**(longlong **)(param_1 + 8),&local_28,param_5,0);
  return uVar2;
}



// FUNCTION 1438f1750 FUN_1438f1750 body=54 status=ok
// SIG undefined FUN_1438f1750(void)

ulonglong FUN_1438f1750(longlong param_1,undefined8 param_2,void *param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  
  if (**(longlong **)(param_1 + 8) == 0) {
    pvVar1 = _guard_xfg_dispatch_icall_nop(param_3,0,0x80);
    return (ulonglong)pvVar1 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1438f4680();
  return uVar2;
}



// FUNCTION 1438f1790 FUN_1438f1790 body=8 status=ok
// SIG undefined FUN_1438f1790(void)

undefined8 FUN_1438f1790(void)

{
  return DAT_146b95ca8;
}



// FUNCTION 1438f17a0 FUN_1438f17a0 body=25 status=ok
// SIG undefined FUN_1438f17a0(void)

void FUN_1438f17a0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (**(longlong **)(param_1 + 8) == 0) {
    *param_3 = 0;
    *param_2 = 0;
    return;
  }
  FUN_1438f4dd0();
  return;
}



// FUNCTION 1438f17c0 FUN_1438f17c0 body=83 status=ok
// SIG undefined FUN_1438f17c0(void)

ulonglong FUN_1438f17c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 *param_5)

{
  ulonglong uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  if (**(longlong **)(param_1 + 8) == 0) {
    *param_5 = 0x3f800000;
    return (ulonglong)param_5 & 0xffffffffffffff00;
  }
  local_28 = CONCAT44(param_3,param_2);
  local_20 = param_4;
  local_10 = param_4;
  uVar1 = FUN_1438f4e30(**(longlong **)(param_1 + 8),&local_28,param_5,0);
  return uVar1;
}



// FUNCTION 1438f1820 FUN_1438f1820 body=30 status=ok
// SIG undefined FUN_1438f1820(void)

ulonglong FUN_1438f1820(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (*plVar1 == 0) {
    *param_3 = 0x3f800000;
    return (ulonglong)plVar1 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1438f4ed0();
  return uVar2;
}



// FUNCTION 1438f1840 FUN_1438f1840 body=38 status=ok
// SIG undefined FUN_1438f1840(void)

ulonglong FUN_1438f1840(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                       undefined4 *param_5)

{
  ulonglong uVar1;
  
  if (**(longlong **)(param_1 + 8) == 0) {
    *param_5 = 0;
    *param_4 = 0;
    *param_3 = 0;
    return (ulonglong)param_5 & 0xffffffffffffff00;
  }
  uVar1 = FUN_1438f5290();
  return uVar1;
}



// FUNCTION 1438f1870 FUN_1438f1870 body=8 status=ok
// SIG undefined FUN_1438f1870(void)

undefined8 FUN_1438f1870(void)

{
  return DAT_146b95cb8;
}



// FUNCTION 1438f1880 FUN_1438f1880 body=8 status=ok
// SIG undefined FUN_1438f1880(void)

undefined8 FUN_1438f1880(void)

{
  return DAT_146b95cb0;
}



// FUNCTION 1438f1890 FUN_1438f1890 body=34 status=ok
// SIG undefined FUN_1438f1890(void)

bool FUN_1438f1890(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1438f1d40(*param_1,param_1[1],param_1[2],param_1[3]);
  return cVar1 != '\0';
}



// FUNCTION 1438f18c0 FUN_1438f18c0 body=52 status=ok
// SIG undefined FUN_1438f18c0(void)

void FUN_1438f18c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  local_10 = param_4[6];
  local_18 = *(undefined8 *)(param_4 + 4);
  FUN_1438f1900(*(undefined8 *)(param_1 + 8),local_18,param_3,&local_28);
  return;
}



// FUNCTION 1438f1900 FUN_1438f1900 body=213 status=ok
// SIG undefined FUN_1438f1900(void)

char FUN_1438f1900(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
    *param_1 = 0;
  }
  lVar3 = (**(code **)(*DAT_146b95ca8 + 8))(DAT_146b95ca8,0x978);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1438f31b0(lVar3);
  }
  *param_1 = lVar3;
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  local_18 = *(undefined8 *)(param_4 + 4);
  local_10 = param_4[6];
  cVar2 = FUN_1438f5540(local_28,param_2,param_3,&local_28);
  if (cVar2 == '\0') {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *param_1 = 0;
  }
  return cVar2;
}



// FUNCTION 1438f19e0 FUN_1438f19e0 body=20 status=ok
// SIG undefined FUN_1438f19e0(void)

ulonglong FUN_1438f19e0(longlong param_1)

{
  ulonglong uVar1;
  
  if (**(longlong **)(param_1 + 8) == 0) {
    return (ulonglong)*(longlong **)(param_1 + 8) & 0xffffffffffffff00;
  }
  uVar1 = FUN_1438f5dd0();
  return uVar1;
}



// FUNCTION 1438f1a00 FUN_1438f1a00 body=93 status=ok
// SIG undefined FUN_1438f1a00(void)

ulonglong FUN_1438f1a00(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 == 0) {
    return (ulonglong)*(longlong **)(param_1 + 8) & 0xffffffffffffff00;
  }
  local_28 = CONCAT44(param_3,param_2);
  local_20 = param_4;
  local_10 = param_4;
  uVar2 = FUN_1438f61b0(lVar1,&local_28,param_5,param_6,param_7);
  return uVar2;
}



// FUNCTION 1438f1a60 FUN_1438f1a60 body=237 status=ok
// SIG undefined FUN_1438f1a60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1438f1a60(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_1078 [32];
  undefined8 local_1058;
  undefined8 local_1050;
  undefined1 *local_1048;
  undefined1 local_1038 [2048];
  undefined1 local_838 [2048];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1078;
  if ((DAT_146b95c98 != (longlong *)0x0) && (DAT_146b95ca3 == '\0')) {
    puVar1 = (undefined8 *)__local_stdio_printf_options();
    local_1050 = 0;
    local_1058 = param_4;
    local_1048 = &stack0x00000028;
    __stdio_common_vsnwprintf_s(*puVar1,local_1038,0x400);
    local_1058 = CONCAT44(local_1058._4_4_,param_3);
    FUN_1438f1470(local_838,0x400,L"%s, Ln%d",param_2);
    (**(code **)(*DAT_146b95c98 + 8))(DAT_146b95c98,param_1,local_838,local_1038);
  }
  return;
}



// FUNCTION 1438f1b50 FUN_1438f1b50 body=18 status=ok
// SIG undefined FUN_1438f1b50(void)

void FUN_1438f1b50(longlong param_1)

{
  FUN_1438f1b70(*(undefined8 *)(param_1 + 8));
  return;
}


