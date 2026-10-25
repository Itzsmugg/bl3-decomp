// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143373ff0 FUN_143373ff0 body=226 status=ok
// SIG undefined FUN_143373ff0(void)

RefCountImpl * FUN_143373ff0(longlong param_1,ulonglong param_2,int param_3,int *param_4)

{
  int iVar1;
  RefCountImpl *pRVar2;
  undefined1 local_48 [8];
  RefCountImpl *local_40;
  undefined1 local_38 [24];
  RefCountImpl *local_20;
  RefCountImpl *pRStack_18;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + (param_2 & 0xffffffff) * 0x14);
  if (iVar1 != 0) {
    local_20 = (RefCountImpl *)0x0;
    pRStack_18 = (RefCountImpl *)0x0;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))
              (*(longlong **)(param_1 + 0x58),iVar1,local_38);
    pRVar2 = local_20;
    if (pRStack_18 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRStack_18);
    }
    if (local_20 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_20);
    }
    return pRVar2;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) +
                  (ulonglong)
                  (uint)(*(int *)(*(longlong *)(param_1 + 0x28) + 4 + (param_2 & 0xffffffff) * 0x14)
                        + param_3) * 4);
  if (iVar1 != 0) {
    local_40 = (RefCountImpl *)0x0;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
              (*(longlong **)(param_1 + 0x58),iVar1,local_48);
    pRVar2 = local_40;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar1;
    }
    if (local_40 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_40);
    }
    return pRVar2;
  }
  return (RefCountImpl *)0x0;
}



// FUNCTION 1433740e0 FUN_1433740e0 body=303 status=ok
// SIG undefined FUN_1433740e0(void)

undefined8 * FUN_1433740e0(longlong param_1,undefined8 *param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 local_48 [8];
  RefCountImpl *local_40;
  undefined1 local_38 [24];
  RefCountImpl *local_20;
  RefCountImpl *pRStack_18;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + (param_3 & 0xffffffff) * 0x14);
  if (iVar1 == 0) {
    local_40 = (RefCountImpl *)0x0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x10);
    (**(code **)(*plVar2 + 0x20))
              (plVar2,*(undefined4 *)
                       (*(longlong *)(param_1 + 0x40) +
                       (ulonglong)
                       (uint)(*(int *)(*(longlong *)(param_1 + 0x28) + 4 +
                                      (param_3 & 0xffffffff) * 0x14) + param_4) * 4),local_48);
    *(undefined4 *)param_2 = *(undefined4 *)(local_40 + 0x20);
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(local_40 + 0x24);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(local_40 + 0x28);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(local_40 + 0x2c);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(local_40 + 0x30);
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(local_40 + 0x34);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(local_40 + 0x38);
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(local_40 + 0x3c);
    Scaleform::RefCountImpl::Release(local_40);
    return param_2;
  }
  local_20 = (RefCountImpl *)0x0;
  pRStack_18 = (RefCountImpl *)0x0;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x10);
  (**(code **)(*plVar2 + 0x28))(plVar2,iVar1,local_38);
  if (local_20 == (RefCountImpl *)0x0) {
    *param_2 = 0x3f800000;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined8 *)((longlong)param_2 + 0x14) = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
    if (pRStack_18 == (RefCountImpl *)0x0) {
      return param_2;
    }
  }
  else {
    *(undefined4 *)param_2 = *(undefined4 *)(local_20 + 0x20);
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(local_20 + 0x24);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(local_20 + 0x28);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(local_20 + 0x2c);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(local_20 + 0x30);
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(local_20 + 0x34);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(local_20 + 0x38);
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(local_20 + 0x3c);
    if (pRStack_18 == (RefCountImpl *)0x0) goto LAB_1433741fc;
  }
  Scaleform::RefCountImpl::Release(pRStack_18);
LAB_1433741fc:
  if (local_20 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_20);
  }
  return param_2;
}



// FUNCTION 143374220 FUN_143374220 body=717 status=ok
// SIG undefined FUN_143374220(void)

undefined8
FUN_143374220(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,uint param_5)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined2 local_res8;
  undefined4 local_resa;
  undefined1 *puVar5;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined *puStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined *puStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [8];
  RefCountImpl *local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined8 local_2cc;
  undefined8 local_2c4;
  undefined8 local_2bc;
  undefined8 local_2b4;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined1 local_2a4;
  undefined1 local_298 [32];
  undefined1 local_278 [32];
  undefined1 local_258 [384];
  undefined4 local_d8;
  undefined8 local_c8;
  undefined1 local_b8 [144];
  undefined1 *local_28;
  undefined4 uVar6;
  
  if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + (ulonglong)param_5 * 0x14) == 2) {
    puVar3 = &local_348;
    local_348 = *(undefined8 *)(param_1 + 0x70);
    uStack_340 = *(undefined8 *)(param_1 + 0x78);
  }
  else {
    puVar3 = (undefined8 *)FUN_143373ec0(param_1,&local_338);
  }
  local_2f8 = *puVar3;
  uStack_2f0 = puVar3[1];
  local_2d8 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_5 * 0x14);
  local_2a8 = 0x3f800000;
  local_2d4 = 0;
  local_2cc = 0;
  local_2c4 = 0;
  local_2bc = 0;
  local_2b4 = 0;
  local_2ac = 0;
  local_2a4 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
            (*(longlong **)(param_1 + 0x58),&local_2d8,local_278,&local_348);
  iVar1 = local_348._4_4_;
  if ((int)local_348 != 0) {
    iVar1 = (int)local_348;
  }
  local_2e0 = (RefCountImpl *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
            (*(longlong **)(param_1 + 0x58),iVar1,local_2e8);
  uVar4 = (**(code **)(*param_2 + 0x128))(param_2);
  (**(code **)(**(longlong **)(local_2e0 + 0x10) + 0xb8))
            (*(longlong **)(local_2e0 + 0x10),local_298,uVar4);
  puVar5 = local_298;
  FUN_1433d0c20(local_258,DAT_146b62f28,param_3,&local_2f8,puVar5,local_2e0 + 0x20);
  uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
  if ((int)local_c8 == 0) {
    local_resa = 0;
    puStack_310 = &DAT_1467ce6c8;
    local_res8 = 0;
    local_318 = 1;
    local_338 = 0;
    puStack_330 = (undefined *)0x0;
    uStack_314 = 3;
    local_308 = 0;
    uStack_300 = 0;
    cVar2 = (**(code **)(*param_4 + 8))(param_4,&local_318,1,&DAT_14621c810);
    if (cVar2 == '\0') goto LAB_143374442;
    (**(code **)(*param_4 + 0x18))(param_4,0,0,&local_338,CONCAT44(uVar6,1));
    (**(code **)(*param_4 + 0x20))(param_4,0,0,&local_res8,3);
  }
  else {
    puStack_330 = &DAT_1467ce6c8;
    local_338 = CONCAT44((int)local_c8,local_d8);
    local_328 = 0;
    local_320 = 0;
    local_318 = 0x3f800000;
    uStack_314 = 0;
    puStack_310 = (undefined *)0x0;
    local_308 = 0x3f80000000000000;
    uStack_300 = 0;
    cVar2 = (**(code **)(*param_4 + 8))(param_4,&local_338,1,&local_318);
    if (cVar2 == '\0') {
LAB_143374442:
      uVar4 = 0;
      goto LAB_143374489;
    }
    (**(code **)(*param_4 + 0x18))(param_4,0,0,local_258,CONCAT44(uVar6,local_d8));
    (**(code **)(*param_4 + 0x20))(param_4,0,0,local_28,(int)local_c8);
  }
  (**(code **)(*param_4 + 0x10))(param_4);
  uVar4 = 1;
LAB_143374489:
  if (local_28 != local_b8) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  local_28 = local_b8;
  local_c8 = 0;
  if (local_2e0 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_2e0);
  }
  return uVar4;
}



// FUNCTION 143374500 FUN_143374500 body=2136 status=ok
// SIG undefined FUN_143374500(void)

ulonglong FUN_143374500(longlong param_1,longlong *param_2,longlong param_3,uint param_4,
                       longlong param_5,undefined8 param_6,uint param_7)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined ***pppuVar10;
  uint uVar11;
  float fVar12;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined **local_118;
  longlong local_110;
  undefined **local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [128];
  
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0xf0))(param_2);
  uVar1 = *(undefined4 *)(param_5 + 0x80);
  puVar6 = (undefined8 *)FUN_1432d8640(param_2);
  uVar11 = 0;
  local_f8 = *puVar6;
  uStack_f0 = puVar6[1];
  local_e8 = puVar6[2];
  uStack_e0 = puVar6[3];
  local_d8 = puVar6[4];
  uStack_d0 = puVar6[5];
  local_c8 = puVar6[6];
  uStack_c0 = puVar6[7];
  local_b8 = puVar6[8];
  local_b0 = *(undefined4 *)(puVar6 + 9);
  local_108 = &PTR_FUN_145b02eb8;
  local_118 = &PTR_FUN_145b02ee0;
  local_100 = (undefined8 *)0x0;
  local_110 = 0;
  local_138 = 0x3f800000;
  uStack_130 = 0;
  local_128 = 0;
  uStack_124 = 0x3f800000;
  uStack_120 = 0;
  uStack_11c = 0;
  if (param_3 == 0) {
    cVar2 = FUN_143324990((undefined8 *)(param_5 + 0x60),local_a8,&local_138);
    if (cVar2 == '\0') {
      bVar3 = FUN_1433756d0(param_1,param_6,param_4,param_7);
      goto LAB_143374d24;
    }
    local_100 = &local_138;
    pppuVar10 = &local_108;
  }
  else {
    local_138 = *(undefined8 *)(param_5 + 0x60);
    uStack_130 = *(undefined8 *)(param_5 + 0x68);
    pppuVar10 = &local_118;
    local_128 = *(undefined4 *)(param_5 + 0x70);
    uStack_124 = *(undefined4 *)(param_5 + 0x74);
    uStack_120 = *(undefined4 *)(param_5 + 0x78);
    uStack_11c = *(undefined4 *)(param_5 + 0x7c);
    local_110 = param_3;
  }
  plVar9 = puVar5 + 0x14;
  while( true ) {
    (**(code **)(*plVar9 + 8))(plVar9);
    (**(code **)(puVar5[0xc1] + 8))(puVar5 + 0xc1);
    (**(code **)(puVar5[0xcc] + 8))();
    (**(code **)(puVar5[0xe6] + 8))();
    (**(code **)(puVar5[0x13a] + 8))();
    if (puVar5[4] != 0) {
      plVar8 = (longlong *)(puVar5[2] + (puVar5[4] * 3 + -3) * 8);
      do {
        puVar5[4] = puVar5[4] + -1;
        if (*plVar8 != 0) {
          (**(code **)(*(longlong *)*puVar5 + 0x60))();
        }
        plVar8 = plVar8 + -3;
      } while (puVar5[4] != 0);
      puVar5[4] = puVar5[4] + -1;
      (**(code **)(*(longlong *)*puVar5 + 0x60))((longlong *)*puVar5,puVar5[2]);
    }
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    if (puVar5[9] != 0) {
      plVar8 = (longlong *)(puVar5[7] + (puVar5[9] * 3 + -3) * 8);
      do {
        puVar5[9] = puVar5[9] + -1;
        if (*plVar8 != 0) {
          (**(code **)(*(longlong *)puVar5[5] + 0x60))();
        }
        plVar8 = plVar8 + -3;
      } while (puVar5[9] != 0);
      puVar5[9] = puVar5[9] + -1;
      (**(code **)(*(longlong *)puVar5[5] + 0x60))((longlong *)puVar5[5],puVar5[7]);
    }
    puVar5[8] = 0;
    puVar5[7] = 0;
    puVar5[9] = 0;
    if (puVar5[0xe] != 0) {
      plVar8 = (longlong *)(puVar5[0xc] + (puVar5[0xe] * 3 + -3) * 8);
      do {
        puVar5[0xe] = puVar5[0xe] + -1;
        if (*plVar8 != 0) {
          (**(code **)(*(longlong *)puVar5[10] + 0x60))();
        }
        plVar8 = plVar8 + -3;
      } while (puVar5[0xe] != 0);
      puVar5[0xe] = puVar5[0xe] + -1;
      (**(code **)(*(longlong *)puVar5[10] + 0x60))((longlong *)puVar5[10],puVar5[0xc]);
    }
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xe] = 0;
    if (puVar5[0x13] != 0) {
      plVar8 = (longlong *)(puVar5[0x11] + (puVar5[0x13] * 3 + -3) * 8);
      do {
        puVar5[0x13] = puVar5[0x13] + -1;
        if (*plVar8 != 0) {
          (**(code **)(*(longlong *)puVar5[0xf] + 0x60))();
        }
        plVar8 = plVar8 + -3;
      } while (puVar5[0x13] != 0);
      puVar5[0x13] = puVar5[0x13] + -1;
      (**(code **)(*(longlong *)puVar5[0xf] + 0x60))((longlong *)puVar5[0xf],puVar5[0x11]);
    }
    puVar5[0x12] = 0;
    puVar5[0x11] = 0;
    puVar5[0x13] = 0;
    Scaleform::Render::Tessellator::SetFillRule(plVar9,1);
    Scaleform::Render::Tessellator::SetToleranceParam(plVar9,&local_f8);
    if (((byte)param_7 & 3) == 1) {
      fVar12 = (float)uStack_c0 * 0.5;
    }
    else {
      fVar12 = 0.0;
    }
    Scaleform::Render::Tessellator::SetEdgeAAWidth(plVar9,fVar12);
    FUN_143376130(param_1,puVar5,&local_f8,pppuVar10,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_4 * 0x14),uVar1);
    if (((param_7 & 1) != 0) && (0x7fff < *(uint *)(puVar5 + 0x23))) {
      Scaleform::Render::MeshGenerator::Clear(puVar5);
      Scaleform::Render::Tessellator::SetEdgeAAWidth(plVar9,0);
      FUN_143376130(param_1,puVar5,&local_f8,pppuVar10,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_4 * 0x14),uVar1
                   );
      param_7 = param_7 & 0xfffffffe;
    }
    FUN_143336f70(plVar9,0);
    uVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
    if (uVar4 < 0xffff) break;
    param_7 = param_7 & 0xfffffffe;
    uVar11 = uVar11 + 1;
    local_f8 = CONCAT44(local_f8._4_4_ * 4.0,(undefined4)local_f8);
    if (3 < uVar11) {
      (**(code **)(*plVar9 + 8))(plVar9);
      (**(code **)(puVar5[0xc1] + 8))();
      (**(code **)(puVar5[0xcc] + 8))();
      (**(code **)(puVar5[0xe6] + 8))();
      (**(code **)(puVar5[0x13a] + 8))();
      if (puVar5[4] != 0) {
        plVar9 = (longlong *)(puVar5[2] + (puVar5[4] * 3 + -3) * 8);
        do {
          puVar5[4] = puVar5[4] + -1;
          if (*plVar9 != 0) {
            (**(code **)(*(longlong *)*puVar5 + 0x60))();
          }
          plVar9 = plVar9 + -3;
        } while (puVar5[4] != 0);
        puVar5[4] = puVar5[4] + -1;
        (**(code **)(*(longlong *)*puVar5 + 0x60))((longlong *)*puVar5,puVar5[2]);
      }
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[4] = 0;
      if (puVar5[9] != 0) {
        plVar9 = (longlong *)(puVar5[7] + (puVar5[9] * 3 + -3) * 8);
        do {
          puVar5[9] = puVar5[9] + -1;
          if (*plVar9 != 0) {
            (**(code **)(*(longlong *)puVar5[5] + 0x60))();
          }
          plVar9 = plVar9 + -3;
        } while (puVar5[9] != 0);
        puVar5[9] = puVar5[9] + -1;
        (**(code **)(*(longlong *)puVar5[5] + 0x60))((longlong *)puVar5[5],puVar5[7]);
      }
      puVar5[8] = 0;
      puVar5[7] = 0;
      puVar5[9] = 0;
      if (puVar5[0xe] != 0) {
        plVar9 = (longlong *)(puVar5[0xc] + (puVar5[0xe] * 3 + -3) * 8);
        do {
          puVar5[0xe] = puVar5[0xe] + -1;
          if (*plVar9 != 0) {
            (**(code **)(*(longlong *)puVar5[10] + 0x60))();
          }
          plVar9 = plVar9 + -3;
        } while (puVar5[0xe] != 0);
        puVar5[0xe] = puVar5[0xe] + -1;
        (**(code **)(*(longlong *)puVar5[10] + 0x60))((longlong *)puVar5[10],puVar5[0xc]);
      }
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[0xe] = 0;
      if (puVar5[0x13] != 0) {
        plVar9 = (longlong *)(puVar5[0x11] + (puVar5[0x13] * 3 + -3) * 8);
        do {
          puVar5[0x13] = puVar5[0x13] + -1;
          if (*plVar9 != 0) {
            (**(code **)(*(longlong *)puVar5[0xf] + 0x60))();
          }
          plVar9 = plVar9 + -3;
        } while (puVar5[0x13] != 0);
        puVar5[0x13] = puVar5[0x13] + -1;
        (**(code **)(*(longlong *)puVar5[0xf] + 0x60))((longlong *)puVar5[0xf],puVar5[0x11]);
      }
      puVar5[0x12] = 0;
      puVar5[0x11] = 0;
      puVar5[0x13] = 0;
      uVar7 = FUN_1433756d0(param_1,param_6,param_4,param_7);
      return uVar7;
    }
  }
  bVar3 = FUN_1433757b0(param_1,plVar9,&local_138,param_6,param_4,0,param_7,uVar1);
  (**(code **)(*plVar9 + 8))(plVar9);
  (**(code **)(puVar5[0xc1] + 8))();
  (**(code **)(puVar5[0xcc] + 8))();
  (**(code **)(puVar5[0xe6] + 8))();
  (**(code **)(puVar5[0x13a] + 8))();
  if (puVar5[4] != 0) {
    plVar9 = (longlong *)(puVar5[2] + (puVar5[4] * 3 + -3) * 8);
    do {
      puVar5[4] = puVar5[4] + -1;
      if (*plVar9 != 0) {
        (**(code **)(*(longlong *)*puVar5 + 0x60))();
      }
      plVar9 = plVar9 + -3;
    } while (puVar5[4] != 0);
    puVar5[4] = puVar5[4] + -1;
    (**(code **)(*(longlong *)*puVar5 + 0x60))((longlong *)*puVar5,puVar5[2]);
  }
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[4] = 0;
  if (puVar5[9] != 0) {
    plVar9 = (longlong *)(puVar5[7] + (puVar5[9] * 3 + -3) * 8);
    do {
      puVar5[9] = puVar5[9] + -1;
      if (*plVar9 != 0) {
        (**(code **)(*(longlong *)puVar5[5] + 0x60))();
      }
      plVar9 = plVar9 + -3;
    } while (puVar5[9] != 0);
    puVar5[9] = puVar5[9] + -1;
    (**(code **)(*(longlong *)puVar5[5] + 0x60))((longlong *)puVar5[5],puVar5[7]);
  }
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[9] = 0;
  if (puVar5[0xe] != 0) {
    plVar9 = (longlong *)(puVar5[0xc] + (puVar5[0xe] * 3 + -3) * 8);
    do {
      puVar5[0xe] = puVar5[0xe] + -1;
      if (*plVar9 != 0) {
        (**(code **)(*(longlong *)puVar5[10] + 0x60))();
      }
      plVar9 = plVar9 + -3;
    } while (puVar5[0xe] != 0);
    puVar5[0xe] = puVar5[0xe] + -1;
    (**(code **)(*(longlong *)puVar5[10] + 0x60))((longlong *)puVar5[10],puVar5[0xc]);
  }
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xe] = 0;
  if (puVar5[0x13] != 0) {
    plVar9 = (longlong *)(puVar5[0x11] + (puVar5[0x13] * 3 + -3) * 8);
    do {
      puVar5[0x13] = puVar5[0x13] + -1;
      if (*plVar9 != 0) {
        (**(code **)(*(longlong *)puVar5[0xf] + 0x60))();
      }
      plVar9 = plVar9 + -3;
    } while (puVar5[0x13] != 0);
    puVar5[0x13] = puVar5[0x13] + -1;
    (**(code **)(*(longlong *)puVar5[0xf] + 0x60))((longlong *)puVar5[0xf],puVar5[0x11]);
  }
  puVar5[0x12] = 0;
  puVar5[0x11] = 0;
  puVar5[0x13] = 0;
LAB_143374d24:
  return (ulonglong)bVar3;
}



// FUNCTION 143374d60 FUN_143374d60 body=1745 status=ok
// SIG undefined FUN_143374d60(void)

undefined1
FUN_143374d60(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,uint param_5,
             longlong param_6,undefined8 param_7,uint param_8)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined ***pppuVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 in_stack_fffffffffffffe68;
  undefined4 uVar25;
  undefined8 uVar24;
  float local_148;
  float local_144;
  undefined4 local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  float local_12c;
  float local_128;
  float local_124;
  uint local_120;
  float local_11c;
  uint local_118;
  RefCountImpl *local_110;
  RefCountImpl *pRStack_108;
  undefined **local_100;
  longlong local_f8;
  undefined **local_f0;
  float *local_e8;
  
  uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
  lVar9 = (**(code **)(*param_2 + 0xf0))(param_2);
  uVar22 = *(undefined4 *)(param_6 + 0x68);
  uVar1 = *(undefined4 *)(param_6 + 0x80);
  fVar21 = *(float *)(param_6 + 0x60);
  fVar19 = *(float *)(param_6 + 100);
  fVar17 = *(float *)(param_6 + 0x6c);
  fVar2 = *(float *)(param_6 + 0x70);
  fVar20 = *(float *)(param_6 + 0x74);
  fVar18 = *(float *)(param_6 + 0x7c);
  uVar11 = *(undefined4 *)(param_6 + 0x78);
  lVar10 = FUN_1432d8640(param_2);
  local_110 = (RefCountImpl *)0x0;
  pRStack_108 = (RefCountImpl *)0x0;
  FUN_143371ff0(param_1,param_4,&local_128,*(undefined4 *)(param_6 + 0x80));
  if ((char)(local_118 >> 0x18) == '\0') {
    Scaleform::Render::MeshGenerator::Clear(lVar9);
    uVar7 = FUN_1433756d0(param_1,param_7,param_5,param_8);
    goto LAB_1433753a3;
  }
  uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_5 * 0x14);
  if (local_11c < 1.0) {
    local_11c = 1.0;
  }
  uVar4 = local_120 & 1;
  if ((local_120 & 1) != 0) {
    fVar23 = -0.5;
    if (0.0 <= fVar17) {
      fVar16 = 0.5;
    }
    else {
      fVar16 = -0.5;
    }
    fVar17 = _guard_xfg_dispatch_icall_nop(fVar17 + fVar16);
    if (0.0 <= fVar18) {
      fVar23 = 0.5;
    }
    fVar18 = _guard_xfg_dispatch_icall_nop(fVar18 + fVar23);
  }
  local_f0 = &PTR_FUN_145b02eb8;
  local_100 = &PTR_FUN_145b02ee0;
  local_e8 = (float *)0x0;
  local_f8 = 0;
  pppuVar15 = &local_100;
  lVar12 = param_3;
  if (param_3 == 0) {
    local_e8 = &local_148;
    pppuVar15 = &local_f0;
    lVar12 = local_f8;
  }
  local_f8 = lVar12;
  local_148 = fVar21;
  local_144 = fVar19;
  local_140 = uVar22;
  local_13c = fVar17;
  local_138 = fVar2;
  local_134 = fVar20;
  local_130 = uVar11;
  local_12c = fVar18;
  Scaleform::Render::MeshGenerator::Clear(lVar9);
  if (param_3 == 0) {
    uVar8 = local_120 & 6;
    if (uVar8 == 0) {
      fVar19 = fVar19 * 0.70710677 + fVar21 * 0.70710677;
      fVar20 = fVar20 * 0.70710677 + fVar2 * 0.70710677;
LAB_143375024:
      fVar21 = fVar20 * fVar20 + fVar19 * fVar19;
    }
    else {
      if (uVar8 != 2) {
        if (uVar8 != 4) goto LAB_143375038;
        goto LAB_143375024;
      }
      fVar21 = fVar2 * fVar2 + fVar21 * fVar21;
    }
    local_124 = _guard_xfg_dispatch_icall_nop(fVar21);
  }
LAB_143375038:
  fVar21 = 0.5;
  local_128 = local_128 * local_124;
  if (((byte)param_8 & 3) != 1) {
    fVar21 = 0.0;
    local_128 = _guard_xfg_dispatch_icall_nop(local_128);
    local_128 = local_128 + 1.0;
  }
  if (uVar4 == 0) {
    uVar22 = 0x3e800000;
  }
  else if ((local_128 < 1.26) ||
          (fVar19 = _guard_xfg_dispatch_icall_nop(local_128 - 0.25), ((int)fVar19 & 1U) != 0)) {
    uVar22 = 0x3f000000;
  }
  else {
    uVar22 = 0;
  }
  if (((local_118 & 0xff000000) < 0xf0000000) || (local_110 != (RefCountImpl *)0x0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  bVar5 = false;
  if ((param_8 & 2) == 0) {
    bVar5 = bVar6;
  }
  if (((1.25 <= local_128) || (bVar5)) || (fVar21 <= 0.0)) {
    uVar11 = 2;
    uVar13 = 2;
    uVar14 = 2;
    if ((local_120 & 0x30) == 0x10) {
      uVar13 = 3;
    }
    else if ((local_120 & 0x30) == 0x20) {
      uVar13 = 0;
    }
    if ((local_120 & 0xc0) == 0x40) {
      uVar14 = 0;
    }
    else if ((local_120 & 0xc0) == 0x80) {
      uVar14 = 1;
    }
    if ((local_120 & 0x300) == 0x100) {
      uVar11 = 0;
    }
    else if ((local_120 & 0x300) == 0x200) {
      uVar11 = 1;
    }
    local_128 = local_128 - (fVar21 + fVar21);
    if (0.1 <= local_128) {
LAB_1433751e9:
      if (bVar5) {
        lVar12 = lVar9 + 0x9d0;
        *(float *)(lVar9 + 0x9f4) = local_128 * 0.5;
        *(float *)(lVar9 + 0x9f0) = local_128 * 0.5;
        fVar21 = fVar21 * *(float *)(lVar10 + 0x38);
        fVar21 = fVar21 + fVar21;
        *(float *)(lVar9 + 0x9fc) = fVar21;
        *(float *)(lVar9 + 0x9f8) = fVar21;
        *(undefined4 *)(lVar9 + 0x9e0) = uVar11;
        *(undefined4 *)(lVar9 + 0x9d8) = uVar13;
        *(undefined4 *)(lVar9 + 0x9dc) = uVar14;
        *(float *)(lVar9 + 0x9e4) = local_11c;
        Scaleform::Render::StrokerAA::SetToleranceParam(lVar12,lVar10);
        FUN_143376f90(param_1,lVar9,lVar12,lVar10,pppuVar15,uVar3,param_4,uVar22,uVar1);
        uVar22 = (undefined4)((ulonglong)pppuVar15 >> 0x20);
        goto LAB_14337533a;
      }
    }
    else {
      if (bVar5) {
        local_128 = 0.0;
        goto LAB_1433751e9;
      }
      fVar21 = fVar21 + -0.05;
      local_128 = 0.1;
    }
    *(undefined4 *)(lVar9 + 0x64c) = uVar11;
    *(undefined4 *)(lVar9 + 0x644) = uVar13;
    *(undefined4 *)(lVar9 + 0x648) = uVar14;
    *(float *)(lVar9 + 0x640) = local_128 * 0.5;
    *(float *)(lVar9 + 0x650) = local_11c;
    Scaleform::Render::Stroker::SetToleranceParam(lVar9 + 0x608,lVar10);
    lVar12 = lVar9 + 0xa0;
    Scaleform::Render::Tessellator::SetFillRule(lVar12,2);
    Scaleform::Render::Tessellator::SetEdgeAAWidth(lVar12,fVar21 * *(float *)(lVar10 + 0x38));
    uVar24 = CONCAT44(uVar25,uVar3);
    FUN_143376cb0(param_1,lVar9,lVar10,pppuVar15,uVar24,param_4,uVar22,uVar1);
    uVar22 = (undefined4)((ulonglong)uVar24 >> 0x20);
    FUN_143336f70(lVar12,0);
  }
  else {
    if (1.0 <= local_128) {
      fVar21 = (local_128 - 1.0) + fVar21;
    }
    lVar12 = lVar9 + 0x730;
    *(float *)(lVar9 + 0x748) = fVar21 + fVar21;
    Scaleform::Render::Hairliner::SetToleranceParam(lVar12,lVar10);
    FUN_143376f90(param_1,lVar9,lVar12,lVar10,pppuVar15,uVar3,param_4,uVar22,uVar1);
    uVar22 = (undefined4)((ulonglong)pppuVar15 >> 0x20);
    FUN_143349820(lVar12);
  }
LAB_14337533a:
  uVar7 = FUN_1433757b0(param_1,lVar12,&local_148,param_7,CONCAT44(uVar22,param_5),param_4,param_8,
                        uVar1);
  Scaleform::Render::MeshGenerator::Clear(lVar9);
  local_100 = &PTR_FUN_145af97b8;
  local_f0 = &PTR_FUN_145af97b8;
LAB_1433753a3:
  if (pRStack_108 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRStack_108);
  }
  if (local_110 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_110);
  }
  return uVar7;
}



// FUNCTION 143375440 FUN_143375440 body=648 status=ok
// SIG undefined FUN_143375440(void)

void FUN_143375440(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  float local_2a8;
  float local_2a4 [3];
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  int local_278;
  int local_274;
  undefined4 local_268;
  undefined8 local_264;
  undefined8 local_25c;
  undefined8 local_254;
  undefined8 local_24c;
  undefined8 local_244;
  undefined4 local_23c;
  undefined4 local_238;
  undefined1 local_234;
  undefined1 local_230 [24];
  RefCountImplCore local_218 [512];
  
  bVar1 = true;
  local_298 = 1.0;
  fStack_294 = 0.0;
  fStack_290 = 0.0;
  fStack_28c = 0.0;
  local_268 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (param_3 & 0xffffffff) * 0x14);
  local_238 = 0x3f800000;
  local_264 = 0;
  local_25c = 0;
  local_254 = 0;
  local_24c = 0;
  local_244 = 0;
  local_23c = 0;
  local_234 = 0;
  local_2b8 = 0x7149f2ca7149f2ca;
  uStack_2b0 = 0xf149f2caf149f2ca;
  local_288 = 0.0;
  fStack_284 = 1.0;
  uStack_280 = 0;
  uStack_27c = 0;
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
                    (*(longlong **)(param_1 + 0x58),&local_268,local_230,&local_278);
  uVar2 = local_2b8;
  while ((local_2b8 = uVar2, iVar7 != 0 && ((bVar1 || (iVar7 != 2))))) {
    bVar1 = false;
    if ((local_278 == param_4) || (local_274 == param_4)) {
      FUN_14332fd60(*(undefined8 *)(param_1 + 0x58),&local_298,&local_268,local_230,&local_2b8);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))
                (*(longlong **)(param_1 + 0x58),&local_268);
    }
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
                      (*(longlong **)(param_1 + 0x58),&local_268,local_230,&local_278);
    uVar2 = local_2b8;
  }
  fVar5 = (float)uStack_2b0;
  local_2b8._0_4_ = (float)uVar2;
  fVar3 = (float)local_2b8;
  param_5[1] = 0;
  *(undefined4 *)(param_5 + 2) = 0;
  *(undefined4 *)((longlong)param_5 + 0x1c) = 0;
  *param_5 = 0x3f800000;
  *(undefined8 *)((longlong)param_5 + 0x14) = 0x3f800000;
  if ((float)local_2b8 < (float)uStack_2b0) {
    local_2b8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    fVar4 = local_2b8._4_4_;
    uStack_2b0._4_4_ = (float)((ulonglong)uStack_2b0 >> 0x20);
    fVar6 = uStack_2b0._4_4_;
    if (local_2b8._4_4_ < uStack_2b0._4_4_) {
      local_298 = 1.0;
      fStack_294 = 0.0;
      fStack_290 = 0.0;
      fStack_28c = 0.0;
      local_288 = 0.0;
      fStack_284 = 1.0;
      uStack_280 = 0;
      uStack_27c = 0;
      FUN_1433cf640(local_218,param_2,&local_298);
      uStack_2b0 = CONCAT44(fVar4,fVar5);
      local_2a8 = fVar5;
      local_2a4[0] = fVar6;
      local_2b8 = uVar2;
      FUN_1433cfab0(local_218,&local_2b8,(longlong)&local_2b8 + 4);
      FUN_1433cfab0(local_218,&uStack_2b0,(longlong)&uStack_2b0 + 4);
      FUN_1433cfab0(local_218,&local_2a8,local_2a4);
      local_298 = fVar3;
      fStack_294 = fVar4;
      fStack_290 = fVar5;
      fStack_28c = fVar4;
      local_288 = fVar5;
      fStack_284 = fVar6;
      FUN_143326520(param_5,&local_298,&local_2b8);
      Scaleform::RefCountImplCore::~RefCountImplCore(local_218);
    }
  }
  return;
}



// FUNCTION 1433756d0 FUN_1433756d0 body=213 status=ok
// SIG undefined FUN_1433756d0(void)

undefined1 FUN_1433756d0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined4 local_res10;
  undefined2 local_res14;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [24];
  undefined8 local_10;
  
  local_58 = 0;
  local_50 = 0;
  local_res10 = 0;
  local_res14 = 0;
  FUN_1432d1f70(local_28,3);
  local_40 = local_10;
  local_48 = 1;
  local_44 = 3;
  local_38 = 0;
  local_30 = 0;
  cVar1 = (**(code **)(*param_2 + 8))(param_2,&local_48,1,&DAT_14621c810);
  if (cVar1 == '\0') {
    return 0;
  }
  (**(code **)(*param_2 + 0x18))(param_2,0,0,&local_58,1);
  (**(code **)(*param_2 + 0x20))(param_2,0,0,&local_res10,3);
  (**(code **)(*param_2 + 0x10))(param_2);
  return 1;
}



// FUNCTION 1433757b0 FUN_1433757b0 body=2412 status=ok
// SIG undefined FUN_1433757b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1
FUN_1433757b0(longlong param_1,longlong *param_2,Matrix2x4<float> *param_3,longlong *param_4,
             uint param_5,int param_6,undefined4 param_7,float param_8)

{
  ushort uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  ushort *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  uint local_29f8;
  uint local_29f4;
  uint local_29f0;
  int local_29ec;
  uint local_29e8;
  uint local_29e0 [2];
  RefCountImpl *local_29d8;
  undefined8 local_29c8;
  RefCountImpl *pRStack_29c0;
  undefined8 local_29b8;
  undefined8 uStack_29b0;
  uint local_29a8 [2];
  RefCountImpl *local_29a0;
  undefined1 *local_2998;
  longlong *local_2988;
  ulonglong local_2980;
  ulonglong local_2978;
  undefined8 local_2970;
  undefined8 uStack_2968;
  undefined8 local_2960;
  undefined8 uStack_2958;
  undefined4 local_2950;
  undefined4 uStack_294c;
  undefined4 uStack_2948;
  undefined4 uStack_2944;
  undefined8 local_2940;
  undefined8 uStack_2938;
  undefined8 *local_2930;
  uint local_2928 [2];
  RefCountImpl *local_2920;
  uint local_2918 [2];
  RefCountImpl *local_2910;
  undefined1 local_2908 [4];
  uint local_2904;
  uint local_2900;
  uint local_28fc;
  int local_28f0;
  undefined1 local_28e8 [4];
  undefined1 local_28e4 [4];
  undefined1 local_28e0 [8];
  undefined1 local_28d8 [16];
  uint local_28c8;
  RefCountImpl *local_28c0;
  RefCountImpl *pRStack_28b8;
  undefined1 local_28a8 [32];
  longlong *local_2888;
  ulonglong local_2880;
  undefined8 local_2878;
  undefined1 local_2870 [512];
  undefined1 *local_2670;
  undefined1 local_2668 [1536];
  undefined1 local_2068 [4];
  uint local_2064 [767];
  undefined1 local_1468 [12];
  ushort local_145c [2578];
  
  uVar15 = 0;
  local_2888 = DAT_146b62f28;
  local_2988 = DAT_146b62f28;
  local_2670 = local_2870;
  local_2930 = &local_2970;
  local_28c0 = (RefCountImpl *)0x0;
  pRStack_28b8 = (RefCountImpl *)0x0;
  local_2880 = 0;
  local_2878 = 0x10;
  local_2980 = 0;
  local_2978 = 0x10;
  iVar6 = (**(code **)(*param_2 + 0x50))(param_2);
  if ((iVar6 != 0) && (iVar6 = (**(code **)(*param_2 + 0x48))(param_2), iVar6 != 0)) {
    if (param_6 == 0) {
      iVar6 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
      if (iVar6 + 1U != 0) {
        uVar13 = (ulonglong)(iVar6 + 1U);
        do {
          if (local_2980 < 0x10) {
            *(undefined4 *)((longlong)&local_2970 + local_2980 * 4) = 0;
          }
          else {
            if (local_2980 == 0x10) {
              if (local_2988 == (longlong *)0x0) {
                lVar11 = local_2978 << 3;
                local_2978 = local_2978 * 2;
                local_2930 = (undefined8 *)
                             (**(code **)(*DAT_146b62f28 + 0x70))
                                       (DAT_146b62f28,&local_2988,lVar11,0);
              }
              else {
                lVar11 = local_2978 << 3;
                local_2978 = local_2978 * 2;
                local_2930 = (undefined8 *)(**(code **)(*local_2988 + 0x50))(local_2988,lVar11,0);
              }
              *local_2930 = local_2970;
              local_2930[1] = uStack_2968;
              local_2930[2] = local_2960;
              local_2930[3] = uStack_2958;
              *(undefined4 *)(local_2930 + 4) = local_2950;
              *(undefined4 *)((longlong)local_2930 + 0x24) = uStack_294c;
              *(undefined4 *)(local_2930 + 5) = uStack_2948;
              *(undefined4 *)((longlong)local_2930 + 0x2c) = uStack_2944;
              local_2930[6] = local_2940;
              local_2930[7] = uStack_2938;
            }
            else if (local_2978 <= local_2980) {
              lVar11 = local_2978 << 3;
              local_2978 = local_2978 * 2;
              local_2930 = (undefined8 *)
                           (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,local_2930,lVar11);
            }
            *(undefined4 *)((longlong)local_2930 + local_2980 * 4) = 0;
          }
          local_2980 = local_2980 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar7 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x50))
                        (param_1 + 0x10,(ulonglong)param_5,param_7);
      uVar18 = 0;
      if (uVar7 != 0) {
        do {
          *(uint *)((longlong)local_2930 +
                   (ulonglong)
                   *(uint *)(*(longlong *)(param_1 + 0x40) +
                            (ulonglong)
                            (*(int *)(*(longlong *)(param_1 + 0x28) + 4 + (ulonglong)param_5 * 0x14)
                            + uVar18) * 4) * 4) = uVar18;
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar7);
      }
    }
    else {
      FUN_143371ff0(param_1,param_6,local_28d8,param_8);
    }
    local_29c8 = 0x3f800000;
    pRStack_29c0 = (RefCountImpl *)0x0;
    local_29b8 = 0x3f80000000000000;
    uStack_29b0 = 0;
    Scaleform::Render::Matrix2x4<float>::SetInverse((Matrix2x4<float> *)&local_29c8,param_3);
    (**(code **)(*param_2 + 0x38))(param_2,&local_29c8);
    (**(code **)(*param_2 + 0x40))(param_2,local_28a8,0xc6fff800,0xc6fff800,0x46fff800,0x46fff800);
    uVar18 = 0;
    iVar6 = (**(code **)(*param_2 + 0x50))(param_2);
    if (iVar6 != 0) {
      uVar15 = 0;
      do {
        (**(code **)(*param_2 + 0x68))(param_2,uVar18,local_2908);
        iVar6 = (**(code **)(*param_2 + 0x58))(param_2,uVar18);
        local_29c8 = CONCAT44(local_29c8._4_4_,iVar6);
        iVar8 = (**(code **)(*param_2 + 0x60))(param_2,uVar18);
        local_29c8 = CONCAT44(iVar8 * 3,(uint)local_29c8);
        if ((iVar6 != 0) && (iVar8 * 3 != 0)) {
          pRStack_29c0 = (RefCountImpl *)&DAT_1467cdbb8;
          local_29b8 = 0;
          if (param_6 == 0) {
            local_29b8 = CONCAT44(*(undefined4 *)((longlong)local_2930 + (ulonglong)local_2900 * 4),
                                  *(undefined4 *)((longlong)local_2930 + (ulonglong)local_2904 * 4))
            ;
          }
          uVar9 = 1;
          if ((local_28fc & 0x8000) != 0) {
            uVar9 = 3;
          }
          uStack_29b0 = CONCAT44(uVar18,uVar9);
          FUN_14337af30(&local_2888,&local_29c8);
          uVar15 = uVar15 + local_28f0;
        }
        uVar18 = uVar18 + 1;
        uVar7 = (**(code **)(*param_2 + 0x50))(param_2);
      } while (uVar18 < uVar7);
    }
    if (local_2880 != 0) {
      if (uVar15 < 0x10000) {
        cVar4 = (**(code **)(*param_4 + 8))(param_4,local_2670,local_2880 & 0xffffffff,local_28a8);
        if (cVar4 == '\0') {
          uVar5 = 0;
        }
        else {
          uVar18 = 0;
          uVar15 = 0;
          uVar13 = 0;
          local_29f8 = 0;
          local_29f4 = 0;
          local_29d8 = (RefCountImpl *)0x0;
          local_29a0 = (RefCountImpl *)0x0;
          local_29f0 = 0;
          if (local_2880 != 0) {
            do {
              local_2998 = local_2670 + uVar13 * 0x20;
              (**(code **)(*param_2 + 0x68))(param_2,*(undefined4 *)(local_2998 + 0x1c),local_2908);
              iVar6 = 0;
              local_29ec = 0;
              local_29e8 = (**(code **)(*param_2 + 0x70))(param_2,local_2908,local_1468,0x100);
              while (local_29e8 != 0) {
                uVar19 = (ulonglong)local_29e8;
                if (local_29e8 != 0) {
                  puVar16 = local_2064;
                  puVar14 = local_145c;
                  do {
                    fVar20 = *(float *)(puVar14 + -6);
                    if (0.0 <= fVar20) {
                      fVar20 = fVar20 + 0.5;
                    }
                    else {
                      fVar20 = fVar20 - 0.5;
                    }
                    fVar21 = _guard_xfg_dispatch_icall_nop(fVar20);
                    fVar20 = *(float *)(puVar14 + -4);
                    *(short *)(puVar16 + -1) = (short)(int)fVar21;
                    if (0.0 <= fVar20) {
                      fVar20 = fVar20 + 0.5;
                    }
                    else {
                      fVar20 = fVar20 - 0.5;
                    }
                    fVar20 = _guard_xfg_dispatch_icall_nop(fVar20);
                    *(short *)((longlong)puVar16 + -2) = (short)(int)fVar20;
                    uVar7 = local_28c8;
                    if (param_6 == 0) {
                      uVar1 = puVar14[2];
                      *puVar16 = 0;
                      if (-1 < (short)uVar1) {
                        if ((uVar1 & 0x10) == 0) {
                          uVar1 = puVar14[uVar1 >> 5 & 1];
                          uVar7 = local_29e0[0];
                          if (uVar18 != uVar1) {
                            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                                      (*(longlong **)(param_1 + 0x58),(uint)uVar1,local_29e0);
                            if ((*(longlong *)(param_1 + 0x60) != 0) && (param_8 != 0.0)) {
                              pRStack_29c0 = (RefCountImpl *)0x0;
                              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x10);
                              (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,&local_29c8);
                              if (local_29d8 == (RefCountImpl *)0x0) {
                                local_29f4 = (uint)local_29c8;
                                local_29f8 = local_29e0[0];
                                puVar12 = (uint *)Scaleform::Render::Color::Blend
                                                            (local_28e0,&local_29f8,&local_29f4,
                                                             param_8);
                                local_29e0[0] = *puVar12;
                              }
                              if (pRStack_29c0 != (RefCountImpl *)0x0) {
                                Scaleform::RefCountImpl::Release(pRStack_29c0);
                              }
                            }
                            uVar18 = (uint)puVar14[puVar14[2] >> 5 & 1];
                            uVar7 = local_29e0[0];
                          }
                        }
                        else {
                          uVar1 = *puVar14;
                          if (uVar18 != uVar1) {
                            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                                      (*(longlong **)(param_1 + 0x58),(uint)uVar1,local_29e0);
                            if ((*(longlong *)(param_1 + 0x60) != 0) && (param_8 != 0.0)) {
                              local_2920 = (RefCountImpl *)0x0;
                              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x10);
                              (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,local_2928);
                              if (local_29d8 == (RefCountImpl *)0x0) {
                                local_29f4 = local_2928[0];
                                local_29f8 = local_29e0[0];
                                puVar12 = (uint *)Scaleform::Render::Color::Blend
                                                            (local_28e8,&local_29f8,&local_29f4,
                                                             param_8);
                                local_29e0[0] = *puVar12;
                              }
                              if (local_2920 != (RefCountImpl *)0x0) {
                                Scaleform::RefCountImpl::Release(local_2920);
                              }
                            }
                            uVar18 = (uint)*puVar14;
                          }
                          uVar1 = puVar14[1];
                          if (uVar15 != uVar1) {
                            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                                      (*(longlong **)(param_1 + 0x58),(uint)uVar1,local_29a8);
                            if ((*(longlong *)(param_1 + 0x60) != 0) && (param_8 != 0.0)) {
                              local_2910 = (RefCountImpl *)0x0;
                              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x10);
                              (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,local_2918);
                              if (local_29a0 == (RefCountImpl *)0x0) {
                                local_29f4 = local_2918[0];
                                local_29f8 = local_29a8[0];
                                puVar12 = (uint *)Scaleform::Render::Color::Blend
                                                            (local_28e4,&local_29f8,&local_29f4,
                                                             param_8);
                                local_29a8[0] = *puVar12;
                              }
                              if (local_2910 != (RefCountImpl *)0x0) {
                                Scaleform::RefCountImpl::Release(local_2910);
                              }
                            }
                            uVar15 = (uint)puVar14[1];
                          }
                          uVar7 = (local_29a8[0] | local_29e0[0]) >> 1 & 0x7f7f7f7f;
                        }
                        goto LAB_143375eb5;
                      }
                    }
                    else {
LAB_143375eb5:
                      *puVar16 = uVar7;
                    }
                    uVar1 = puVar14[2];
                    puVar14 = puVar14 + 10;
                    *(undefined *)(puVar16 + 1) = (&DAT_145b02d20)[uVar1 & 3];
                    *(undefined *)((longlong)puVar16 + 5) = (&DAT_145b02d20)[uVar1 >> 2 & 3];
                    puVar16 = puVar16 + 3;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                  uVar13 = (ulonglong)local_29f0;
                  iVar6 = local_29ec;
                  local_29f8 = uVar18;
                  local_29f4 = uVar15;
                }
                uVar7 = local_29e8;
                (**(code **)(*param_4 + 0x18))(param_4,uVar13,iVar6,local_2068,local_29e8);
                iVar6 = iVar6 + uVar7;
                local_29ec = iVar6;
                local_29e8 = (**(code **)(*param_2 + 0x70))(param_2,local_2908,local_1468,0x100);
              }
              uVar17 = 0;
              uVar10 = (**(code **)(*param_2 + 0x60))(param_2,*(undefined4 *)(local_2998 + 0x1c));
              puVar3 = local_2998;
              uVar7 = local_29f0;
              if (uVar10 != 0) {
                do {
                  iVar6 = 0x100;
                  if ((uVar10 < uVar17 + 0x100) &&
                     (iVar6 = uVar10 - uVar17, uVar15 = local_29f4, uVar18 = local_29f8, iVar6 == 0)
                     ) break;
                  (**(code **)(*param_2 + 0x78))
                            (param_2,*(undefined4 *)(puVar3 + 0x1c),local_2668,uVar17,iVar6);
                  (**(code **)(*param_4 + 0x20))(param_4,uVar7,uVar17 * 3,local_2668,iVar6 * 3);
                  uVar17 = uVar17 + iVar6;
                  uVar15 = local_29f4;
                  uVar18 = local_29f8;
                } while (uVar17 < uVar10);
              }
              local_29f0 = local_29f0 + 1;
              uVar13 = (ulonglong)local_29f0;
            } while (uVar13 < local_2880);
          }
          (**(code **)(*param_4 + 0x10))(param_4);
          uVar5 = 1;
          if (local_29a0 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(local_29a0);
          }
          if (local_29d8 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(local_29d8);
          }
        }
        goto LAB_14337605e;
      }
      lVar11 = Scaleform::Log::GetGlobalLog();
      if ((lVar11 != 0) || (lVar11 = FUN_1432c1b30(), lVar11 != 0)) {
        FUN_14337ae30(lVar11,
                      "Render_ShapeMeshProvider: More than 65535 vertices, the shape cannot be displayed"
                     );
      }
    }
  }
  uVar5 = FUN_1433756d0(param_1,param_4,param_5,param_7);
LAB_14337605e:
  if (local_2930 != &local_2970) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  local_2930 = &local_2970;
  local_2980 = 0;
  if (local_2670 != local_2870) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  local_2670 = local_2870;
  local_2880 = 0;
  if (pRStack_28b8 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRStack_28b8);
  }
  if (local_28c0 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_28c0);
  }
  return uVar5;
}



// FUNCTION 143376130 FUN_143376130 body=1522 status=ok
// SIG undefined FUN_143376130(void)

void FUN_143376130(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  undefined4 param_5,float param_6)

{
  longlong *plVar1;
  RefCountImpl *this;
  RefCountImpl *this_00;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  int local_1b0;
  int local_1ac;
  float local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  float local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 local_f8;
  uint uStack_f4;
  undefined **local_e8;
  undefined8 local_e0;
  RefCountImpl *local_d8;
  RefCountImpl *local_d0;
  float local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined1 local_48 [8];
  RefCountImpl *local_40;
  undefined1 local_38 [8];
  RefCountImpl *local_30;
  
  local_178 = param_5;
  local_128 = param_5;
  local_174 = 0;
  this = *(RefCountImpl **)(param_1 + 0x58);
  this_00 = *(RefCountImpl **)(param_1 + 0x60);
  local_16c = 0;
  local_164 = 0;
  bVar2 = true;
  local_15c = 0;
  local_154 = 0;
  local_14c = 0;
  local_148 = 0x3f800000;
  local_144 = 0;
  local_e8 = &PTR_FUN_145b02e00;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  local_fc = 0;
  local_f8 = 0x3f800000;
  uStack_f4 = uStack_f4 & 0xffffff00;
  local_e0 = 1;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  local_d8 = this;
  if (this_00 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this_00);
  }
  local_c4 = CONCAT44(uStack_124,local_128);
  uStack_bc = CONCAT44(uStack_11c,uStack_120);
  local_b4 = CONCAT44(uStack_114,uStack_118);
  uStack_ac = CONCAT44(uStack_10c,uStack_110);
  local_a4 = CONCAT44(uStack_104,uStack_108);
  uStack_9c = CONCAT44(local_fc,uStack_100);
  local_c8 = param_6;
  local_94 = CONCAT44(uStack_f4,local_f8);
  local_d0 = this_00;
  local_8c = local_c4;
  uStack_84 = uStack_bc;
  local_7c = local_b4;
  uStack_74 = uStack_ac;
  local_6c = local_a4;
  uStack_64 = uStack_9c;
  local_5c = local_94;
LAB_143376251:
  do {
    if (local_d0 == (RefCountImpl *)0x0) {
      iVar3 = (**(code **)(*(longlong *)local_d8 + 0x40))();
    }
    else {
      local_138 = 0;
      local_188 = 0;
      local_180 = 0;
      local_140 = 0;
      local_130 = 0;
      iVar3 = (**(code **)(*(longlong *)(local_d0 + 0x48) + 0x40))
                        (local_d0 + 0x48,&local_178,&local_1c8,&local_1b0);
      (**(code **)(*(longlong *)(local_d0 + 0xb0) + 0x40))
                (local_d0 + 0xb0,&local_c4,&local_140,&local_188);
      if (iVar3 == 0) {
LAB_1433766dc:
        if (local_d0 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_d0);
        }
        if (local_d8 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_d8);
        }
        Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_e8);
        return;
      }
      local_1c8 = local_1c8 + ((float)local_140 - local_1c8) * local_c8;
      local_1c4 = local_1c4 + (local_140._4_4_ - local_1c4) * local_c8;
    }
    iVar5 = 0;
    if ((iVar3 == 0) || ((!bVar2 && (iVar3 == 2)))) goto LAB_1433766dc;
    bVar2 = false;
    if (local_1b0 != local_1ac) {
      (**(code **)(*param_4 + 8))(param_4,&local_1c8,&local_1c4);
      plVar1 = (longlong *)(param_2 + 0xa0);
      do {
        (**(code **)(*plVar1 + 0x20))(plVar1,local_1c8,local_1c4);
        iVar3 = iVar5;
LAB_143376360:
        if (local_d0 != (RefCountImpl *)0x0) {
          local_1a0 = 0.0;
          local_19c = 0;
          local_194 = 0;
          local_18c = 0.0;
          iVar4 = (**(code **)(*(longlong *)(local_d0 + 0x48) + 0x48))
                            (local_d0 + 0x48,&local_178,&local_1c8);
          (**(code **)(*(longlong *)(local_d0 + 0xb0) + 0x48))(local_d0 + 0xb0,&local_c4,&local_1a0)
          ;
          if (iVar4 != 0) {
            local_1c8 = local_1c8 + (local_1a0 - local_1c8) * local_c8;
            local_1c4 = local_1c4 + ((float)local_19c - local_1c4) * local_c8;
            if (iVar4 - 2U < 2) {
              local_1c0 = local_1c0 + (local_19c._4_4_ - local_1c0) * local_c8;
              local_1bc = local_1bc + ((float)local_194 - local_1bc) * local_c8;
              if (iVar4 == 3) {
                local_1b8 = local_1b8 + (local_194._4_4_ - local_1b8) * local_c8;
                local_1b4 = local_1b4 + (local_18c - local_1b4) * local_c8;
              }
            }
            goto LAB_143376492;
          }
LAB_1433765ae:
          bVar2 = false;
          if (iVar3 == 0) {
            if (*(longlong *)(param_2 + 0x118) != 0) {
              *(longlong *)(param_2 + 0x118) = *(longlong *)(param_2 + 0x118) + -1;
            }
          }
          else {
            if (local_1ac == 0) {
              bVar6 = false;
            }
            else {
              local_40 = (RefCountImpl *)0x0;
              (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                        (*(longlong **)(param_1 + 0x58),local_1ac,local_48);
              bVar6 = local_40 != (RefCountImpl *)0x0;
              if (local_40 != (RefCountImpl *)0x0) {
                Scaleform::RefCountImpl::Release(local_40);
              }
            }
            if (local_1b0 == 0) {
              bVar7 = false;
            }
            else {
              local_30 = (RefCountImpl *)0x0;
              (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                        (*(longlong **)(param_1 + 0x58),local_1b0,local_38);
              bVar7 = local_30 != (RefCountImpl *)0x0;
              if (local_30 != (RefCountImpl *)0x0) {
                Scaleform::RefCountImpl::Release(local_30);
              }
            }
            (**(code **)(*plVar1 + 0x30))(plVar1,local_1b0,local_1ac,bVar7,bVar6);
          }
          goto LAB_143376251;
        }
        iVar4 = (**(code **)(*(longlong *)local_d8 + 0x48))();
LAB_143376492:
        if (iVar4 == 0) goto LAB_1433765ae;
        iVar5 = iVar3 + 1;
        if (iVar4 != 1) {
          if (iVar4 == 2) {
            (**(code **)(*param_4 + 8))(param_4,&local_1c8,&local_1c4);
            (**(code **)(*param_4 + 8))(param_4,&local_1c0,&local_1bc);
            FUN_1433bd900(plVar1,param_3,local_1c8,local_1c4,local_1c0,local_1bc);
            iVar3 = iVar5;
          }
          else if (iVar4 == 3) {
            (**(code **)(*param_4 + 8))(param_4,&local_1c8,&local_1c4);
            (**(code **)(*param_4 + 8))(param_4,&local_1c0,&local_1bc);
            (**(code **)(*param_4 + 8))(param_4,&local_1b8,&local_1b4);
            FUN_1433bda10(plVar1,param_3,local_1c8,local_1c4,local_1c0,local_1bc,local_1b8,local_1b4
                         );
            iVar3 = iVar5;
          }
          goto LAB_143376360;
        }
        (**(code **)(*param_4 + 8))(param_4,&local_1c8,&local_1c4);
      } while( true );
    }
    if (local_d0 == (RefCountImpl *)0x0) {
      (**(code **)(*(longlong *)local_d8 + 0x50))();
    }
    else {
      (**(code **)(*(longlong *)(local_d0 + 0x48) + 0x50))(local_d0 + 0x48,&local_178);
      (**(code **)(*(longlong *)(local_d0 + 0xb0) + 0x50))(local_d0 + 0xb0,&local_c4);
    }
  } while( true );
}



// FUNCTION 143376730 FUN_143376730 body=1394 status=ok
// SIG undefined FUN_143376730(void)

void FUN_143376730(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  undefined4 param_5,int param_6,float param_7,float param_8)

{
  longlong *plVar1;
  RefCountImpl *pRVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float in_stack_fffffffffffffde8;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  float local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined4 local_18c;
  undefined4 local_188;
  undefined1 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 local_138;
  uint uStack_134;
  undefined1 local_130 [8];
  int local_128;
  undefined **local_118;
  undefined8 local_110;
  RefCountImpl *local_108;
  RefCountImpl *local_100;
  float local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined1 local_78 [8];
  byte local_70;
  RefCountImpl *local_60;
  RefCountImpl *pRStack_58;
  
  local_1b4 = 0;
  local_1ac = 0;
  local_1a4 = 0;
  local_19c = 0;
  local_194 = 0;
  local_18c = 0;
  local_184 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  local_13c = 0;
  uStack_134 = uStack_134 & 0xffffff00;
  local_1b8 = param_5;
  local_188 = 0x3f800000;
  local_168 = param_5;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  local_138 = 0x3f800000;
  local_60 = (RefCountImpl *)0x0;
  pRStack_58 = (RefCountImpl *)0x0;
  FUN_143371ff0(param_1,param_6,local_78,param_8);
  pRVar2 = *(RefCountImpl **)(param_1 + 0x60);
  local_108 = *(RefCountImpl **)(param_1 + 0x58);
  local_118 = &PTR_FUN_145b02e00;
  local_110 = 1;
  if (local_108 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(local_108);
  }
  if (pRVar2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRVar2);
  }
  local_f4 = CONCAT44(uStack_164,local_168);
  uStack_ec = CONCAT44(uStack_15c,uStack_160);
  bVar3 = true;
  local_e4 = CONCAT44(uStack_154,uStack_158);
  uStack_dc = CONCAT44(uStack_14c,uStack_150);
  local_d4 = CONCAT44(uStack_144,uStack_148);
  uStack_cc = CONCAT44(local_13c,uStack_140);
  local_c4 = CONCAT44(uStack_134,local_138);
  local_f8 = param_8;
  local_100 = pRVar2;
  local_bc = local_f4;
  uStack_b4 = uStack_ec;
  local_ac = local_e4;
  uStack_a4 = uStack_dc;
  local_9c = local_d4;
  uStack_94 = uStack_cc;
  local_8c = local_c4;
LAB_143376880:
  while( true ) {
    if (local_100 == (RefCountImpl *)0x0) {
      iVar4 = (**(code **)(*(longlong *)local_108 + 0x40))();
    }
    else {
      local_1c8 = 0;
      local_1c0 = 0;
      local_180 = 0;
      local_178 = 0;
      local_170 = 0;
      iVar4 = (**(code **)(*(longlong *)(local_100 + 0x48) + 0x40))
                        (local_100 + 0x48,&local_1b8,&local_1f8,local_130);
      (**(code **)(*(longlong *)(local_100 + 0xb0) + 0x40))
                (local_100 + 0xb0,&local_f4,&local_180,&local_1c8);
      if (iVar4 != 0) {
        local_1f8 = local_1f8 + ((float)local_180 - local_1f8) * local_f8;
        local_1f4 = local_1f4 + (local_180._4_4_ - local_1f4) * local_f8;
      }
    }
    if ((iVar4 == 0) || ((!bVar3 && (iVar4 == 2)))) {
      FUN_143328100(param_2 + 0x660);
      pRVar2 = pRStack_58;
      if (pRStack_58 != (RefCountImpl *)0x0) {
        uVar5 = (**(code **)(*param_4 + 0x10))(param_4);
        FUN_143328ae0(param_2 + 0x660,pRVar2,param_3,uVar5);
      }
      FUN_1433286c0(param_2 + 0x660,param_4);
      if ((local_70 & 1) == 0) {
        if (0.0 < param_7) {
          FUN_143328490(param_2 + 0x660,param_7,param_7);
        }
      }
      else if (pRStack_58 == (RefCountImpl *)0x0) {
        FUN_143328730(param_2 + 0x660,param_7,param_7);
      }
      if (local_100 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_100);
      }
      if (local_108 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_108);
      }
      Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_118);
      if (pRStack_58 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(pRStack_58);
      }
      if (local_60 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_60);
      }
      return;
    }
    bVar3 = false;
    if (local_128 == param_6) break;
    if (local_100 == (RefCountImpl *)0x0) {
      (**(code **)(*(longlong *)local_108 + 0x50))();
    }
    else {
      (**(code **)(*(longlong *)(local_100 + 0x48) + 0x50))(local_100 + 0x48,&local_1b8);
      (**(code **)(*(longlong *)(local_100 + 0xb0) + 0x50))(local_100 + 0xb0,&local_f4);
    }
  }
  plVar1 = (longlong *)(param_2 + 0x660);
  fVar6 = local_1f8;
  do {
    FUN_143327f30(plVar1,local_1f8,local_1f4,fVar6);
    while( true ) {
      if (local_100 == (RefCountImpl *)0x0) {
        iVar4 = (**(code **)(*(longlong *)local_108 + 0x48))();
      }
      else {
        local_1e0 = 0.0;
        local_1dc = 0;
        local_1d4 = 0;
        local_1cc = 0.0;
        iVar4 = (**(code **)(*(longlong *)(local_100 + 0x48) + 0x48))
                          (local_100 + 0x48,&local_1b8,&local_1f8);
        (**(code **)(*(longlong *)(local_100 + 0xb0) + 0x48))(local_100 + 0xb0,&local_f4,&local_1e0)
        ;
        if (iVar4 != 0) {
          local_1f8 = local_1f8 + (local_1e0 - local_1f8) * local_f8;
          local_1f4 = local_1f4 + ((float)local_1dc - local_1f4) * local_f8;
          if (iVar4 - 2U < 2) {
            local_1f0 = local_1f0 + (local_1dc._4_4_ - local_1f0) * local_f8;
            local_1ec = local_1ec + ((float)local_1d4 - local_1ec) * local_f8;
            if (iVar4 == 3) {
              local_1e8 = local_1e8 + (local_1d4._4_4_ - local_1e8) * local_f8;
              local_1e4 = local_1e4 + (local_1cc - local_1e4) * local_f8;
            }
          }
        }
      }
      if (iVar4 == 0) {
        in_stack_fffffffffffffde8 = (float)((uint)in_stack_fffffffffffffde8 & 0xffffff00);
        (**(code **)(*plVar1 + 0x30))(plVar1,0,0,0,in_stack_fffffffffffffde8);
        goto LAB_143376880;
      }
      fVar6 = local_1f0;
      if (iVar4 == 1) break;
      if (iVar4 == 2) {
        in_stack_fffffffffffffde8 = local_1ec;
        FUN_143328050(plVar1,local_1f8,local_1f4,local_1f0,local_1ec);
      }
      else if (iVar4 == 3) {
        in_stack_fffffffffffffde8 = local_1ec;
        FUN_1433280a0(plVar1,local_1f8,local_1f4,local_1f0,local_1ec,local_1e8,local_1e4);
      }
    }
  } while( true );
}



// FUNCTION 143376cb0 FUN_143376cb0 body=726 status=ok
// SIG undefined FUN_143376cb0(void)

void FUN_143376cb0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  
  FUN_143376730(param_8,param_7,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1 = (longlong *)(param_2 + 0x608);
  (**(code **)(*plVar1 + 8))(plVar1);
  uVar11 = 0;
  if (*(int *)(param_2 + 0x708) != 0) {
    do {
      uVar8 = 0;
      uVar12 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_2 + 0x720) + (ulonglong)(uVar11 >> 4) * 8) + 4 +
                        (ulonglong)(uVar11 & 0xf) * 8) & 0xfffffff;
      if (uVar12 != 0) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x720) + (ulonglong)(uVar11 >> 4) * 8);
          uVar5 = *(uint *)(lVar3 + 4 + (ulonglong)(uVar11 & 0xf) * 8) & 0xfffffff;
          uVar4 = uVar8;
          if (uVar5 <= uVar8) {
            uVar4 = uVar8 - uVar5;
          }
          uVar4 = uVar4 + *(int *)(lVar3 + (ulonglong)(uVar11 & 0xf) * 8);
          uVar5 = uVar8 + 1;
          puVar7 = (undefined4 *)
                   ((ulonglong)(uVar4 & 0xf) * 0x10 +
                   *(longlong *)(*(longlong *)(param_2 + 0x6f8) + (ulonglong)(uVar4 >> 4) * 8));
          cVar2 = *(char *)(puVar7 + 3);
          if (cVar2 == '\x01') {
            (**(code **)(*plVar1 + 0x20))(plVar1,*puVar7,puVar7[1]);
          }
          else if (cVar2 == '\x02') {
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x720) + (ulonglong)(uVar11 >> 4) * 8);
            uVar4 = *(uint *)(lVar3 + 4 + (ulonglong)(uVar11 & 0xf) * 8) & 0xfffffff;
            if (uVar4 <= uVar5) {
              uVar5 = uVar5 - uVar4;
            }
            uVar5 = uVar5 + *(int *)(lVar3 + (ulonglong)(uVar11 & 0xf) * 8);
            puVar10 = (undefined4 *)
                      ((ulonglong)(uVar5 & 0xf) * 0x10 +
                      *(longlong *)(*(longlong *)(param_2 + 0x6f8) + (ulonglong)(uVar5 >> 4) * 8));
            FUN_1433bd900(plVar1,param_3,*puVar7,puVar7[1],*puVar10,puVar10[1]);
            uVar5 = uVar8 + 2;
          }
          else if (cVar2 == '\x03') {
            uVar9 = (ulonglong)(uVar11 & 0xf);
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x720) + (ulonglong)(uVar11 >> 4) * 8);
            uVar4 = *(uint *)(lVar3 + 4 + uVar9 * 8) & 0xfffffff;
            if (uVar4 <= uVar5) {
              uVar5 = uVar5 - uVar4;
            }
            uVar5 = uVar5 + *(int *)(lVar3 + uVar9 * 8);
            uVar4 = uVar8 + 2;
            puVar10 = (undefined4 *)
                      ((ulonglong)(uVar5 & 0xf) * 0x10 +
                      *(longlong *)(*(longlong *)(param_2 + 0x6f8) + (ulonglong)(uVar5 >> 4) * 8));
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x720) + (ulonglong)(uVar11 >> 4) * 8);
            uVar5 = *(uint *)(lVar3 + 4 + uVar9 * 8) & 0xfffffff;
            if (uVar5 <= uVar4) {
              uVar4 = uVar4 - uVar5;
            }
            uVar4 = uVar4 + *(int *)(lVar3 + uVar9 * 8);
            puVar6 = (undefined4 *)
                     ((ulonglong)(uVar4 & 0xf) * 0x10 +
                     *(longlong *)(*(longlong *)(param_2 + 0x6f8) + (ulonglong)(uVar4 >> 4) * 8));
            FUN_1433bda10(plVar1,param_3,*puVar7,puVar7[1],*puVar10,puVar10[1],*puVar6,puVar6[1]);
            uVar5 = uVar8 + 3;
          }
          uVar8 = uVar5;
        } while (uVar8 < uVar12);
      }
      FUN_143326900(plVar1,param_2 + 0xa0);
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_2 + 0x708));
  }
  return;
}



// FUNCTION 143376f90 FUN_143376f90 body=733 status=ok
// SIG undefined FUN_143376f90(void)

void FUN_143376f90(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  FUN_143376730(param_9,param_8,param_4,param_5,param_6,param_7,param_8,param_9);
  (**(code **)(*param_3 + 8))(param_3);
  uVar10 = 0;
  if (*(int *)(param_2 + 0x708) != 0) {
    do {
      uVar7 = 0;
      uVar11 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_2 + 0x720) + (ulonglong)(uVar10 >> 4) * 8) + 4 +
                        (ulonglong)(uVar10 & 0xf) * 8) & 0xfffffff;
      if (uVar11 != 0) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x720) + (ulonglong)(uVar10 >> 4) * 8);
          uVar4 = *(uint *)(lVar2 + 4 + (ulonglong)(uVar10 & 0xf) * 8) & 0xfffffff;
          uVar3 = uVar7;
          if (uVar4 <= uVar7) {
            uVar3 = uVar7 - uVar4;
          }
          uVar3 = uVar3 + *(int *)(lVar2 + (ulonglong)(uVar10 & 0xf) * 8);
          uVar4 = uVar7 + 1;
          puVar6 = (undefined4 *)
                   ((ulonglong)(uVar3 & 0xf) * 0x10 +
                   *(longlong *)(*(longlong *)(param_2 + 0x6f8) + (ulonglong)(uVar3 >> 4) * 8));
          cVar1 = *(char *)(puVar6 + 3);
          if (cVar1 == '\x01') {
            (**(code **)(*param_3 + 0x20))(param_3,*puVar6,puVar6[1]);
          }
          else if (cVar1 == '\x02') {
            lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x720) + (ulonglong)(uVar10 >> 4) * 8);
            uVar3 = *(uint *)(lVar2 + 4 + (ulonglong)(uVar10 & 0xf) * 8) & 0xfffffff;
            if (uVar3 <= uVar4) {
              uVar4 = uVar4 - uVar3;
            }
            uVar4 = uVar4 + *(int *)(lVar2 + (ulonglong)(uVar10 & 0xf) * 8);
            puVar9 = (uint *)((ulonglong)(uVar4 & 0xf) * 0x10 +
                             *(longlong *)
                              (*(longlong *)(param_2 + 0x6f8) + (ulonglong)(uVar4 >> 4) * 8));
            param_6 = *puVar9;
            FUN_1433bd900(param_3,param_4,*puVar6,puVar6[1],param_6,puVar9[1]);
            uVar4 = uVar7 + 2;
          }
          else if (cVar1 == '\x03') {
            uVar8 = (ulonglong)(uVar10 & 0xf);
            lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x720) + (ulonglong)(uVar10 >> 4) * 8);
            uVar3 = *(uint *)(lVar2 + 4 + uVar8 * 8) & 0xfffffff;
            if (uVar3 <= uVar4) {
              uVar4 = uVar4 - uVar3;
            }
            uVar4 = uVar4 + *(int *)(lVar2 + uVar8 * 8);
            uVar3 = uVar7 + 2;
            puVar9 = (uint *)((ulonglong)(uVar4 & 0xf) * 0x10 +
                             *(longlong *)
                              (*(longlong *)(param_2 + 0x6f8) + (ulonglong)(uVar4 >> 4) * 8));
            lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x720) + (ulonglong)(uVar10 >> 4) * 8);
            uVar4 = *(uint *)(lVar2 + 4 + uVar8 * 8) & 0xfffffff;
            if (uVar4 <= uVar3) {
              uVar3 = uVar3 - uVar4;
            }
            uVar3 = uVar3 + *(int *)(lVar2 + uVar8 * 8);
            puVar5 = (undefined4 *)
                     ((ulonglong)(uVar3 & 0xf) * 0x10 +
                     *(longlong *)(*(longlong *)(param_2 + 0x6f8) + (ulonglong)(uVar3 >> 4) * 8));
            param_6 = *puVar9;
            FUN_1433bda10(param_3,param_4,*puVar6,puVar6[1],param_6,puVar9[1],*puVar5,puVar5[1]);
            uVar4 = uVar7 + 3;
          }
          uVar7 = uVar4;
        } while (uVar7 < uVar11);
      }
      param_6 = param_6 & 0xffffff00;
      (**(code **)(*param_3 + 0x30))(param_3,0,0,0,param_6);
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_2 + 0x708));
  }
  return;
}



// FUNCTION 143377280 FUN_143377280 body=74 status=ok
// SIG undefined FUN_143377280(void)

ulonglong FUN_143377280(longlong *param_1,int param_2)

{
  ulonglong in_RAX;
  bool bVar1;
  undefined1 local_18 [8];
  RefCountImpl *local_10;
  
  if (param_2 != 0) {
    local_10 = (RefCountImpl *)0x0;
    (**(code **)(*param_1 + 0x20))(param_1,param_2,local_18);
    bVar1 = local_10 != (RefCountImpl *)0x0;
    if (local_10 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_10);
    }
    return (ulonglong)bVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1433772d0 FUN_1433772d0 body=1058 status=ok
// SIG undefined FUN_1433772d0(void)

undefined4
FUN_1433772d0(longlong *param_1,undefined4 *param_2,int param_3,float *param_4,longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  longlong *plVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float in_stack_ffffffffffffff08;
  undefined1 local_d8 [8];
  int local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  
  plVar18 = (longlong *)(param_5 + 0xa8);
  bVar4 = true;
  (**(code **)(*plVar18 + 8))(plVar18);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  uVar11 = param_2[6];
  uVar12 = param_2[7];
  uVar13 = param_2[8];
  uVar14 = param_2[9];
  uVar15 = param_2[10];
  uVar16 = param_2[0xb];
  uVar22 = (undefined4)*(undefined8 *)(param_2 + 0xc);
  uVar24 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
  iVar17 = (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_c8,local_d8);
  while ((uVar19 = 0, iVar17 != 0 && ((iVar17 != 2 || (uVar19 = 2, bVar4))))) {
    if (local_d0 == param_3) {
      fVar20 = local_c8 * param_4[4];
      local_c8 = local_c8 * *param_4 + local_c4 * param_4[1] + param_4[3];
      local_c4 = local_c4 * param_4[5] + fVar20 + param_4[7];
      FUN_143327f30(plVar18,local_c8,local_c4,1);
      iVar17 = (**(code **)(*param_1 + 0x48))(param_1,param_2,&local_c8);
      while (iVar17 != 0) {
        if (iVar17 == 1) {
          fVar20 = local_c8 * param_4[4];
          local_c8 = local_c8 * *param_4 + local_c4 * param_4[1] + param_4[3];
          local_c4 = local_c4 * param_4[5] + fVar20 + param_4[7];
          FUN_143327f30(plVar18,local_c8,local_c4,1);
        }
        else if (iVar17 == 2) {
          fVar20 = param_4[4] * local_c8;
          fVar23 = param_4[4] * local_c0;
          local_c8 = *param_4 * local_c8 + param_4[1] * local_c4 + param_4[3];
          local_c0 = *param_4 * local_c0 + param_4[1] * local_bc + param_4[3];
          local_c4 = fVar20 + param_4[5] * local_c4 + param_4[7];
          in_stack_ffffffffffffff08 = fVar23 + param_4[5] * local_bc + param_4[7];
          local_bc = in_stack_ffffffffffffff08;
          FUN_143328050(plVar18,local_c8,local_c4,local_c0,in_stack_ffffffffffffff08);
        }
        else if (iVar17 == 3) {
          fVar20 = param_4[1];
          fVar23 = *param_4;
          fVar1 = param_4[5];
          fVar21 = param_4[4];
          fVar2 = param_4[7];
          fVar3 = param_4[3];
          fVar25 = fVar21 * local_c8;
          local_c8 = fVar23 * local_c8 + fVar20 * local_c4 + fVar3;
          local_c4 = fVar25 + fVar1 * local_c4 + fVar2;
          fVar25 = fVar21 * local_c0;
          fVar21 = fVar21 * local_b8;
          local_b8 = fVar23 * local_b8 + fVar20 * local_b4 + fVar3;
          local_c0 = fVar23 * local_c0 + fVar20 * local_bc + fVar3;
          in_stack_ffffffffffffff08 = fVar1 * local_bc + fVar25 + fVar2;
          local_b4 = fVar1 * local_b4 + fVar21 + fVar2;
          local_bc = in_stack_ffffffffffffff08;
          FUN_1433280a0(plVar18,local_c8,local_c4,local_c0,in_stack_ffffffffffffff08,local_b8,
                        local_b4);
        }
        iVar17 = (**(code **)(*param_1 + 0x48))(param_1,param_2,&local_c8);
      }
      in_stack_ffffffffffffff08 = (float)((uint)in_stack_ffffffffffffff08 & 0xffffff00);
      (**(code **)(*plVar18 + 0x30))(plVar18,0,0,0,in_stack_ffffffffffffff08);
    }
    else {
      (**(code **)(*param_1 + 0x50))(param_1,param_2);
    }
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    uVar9 = param_2[4];
    uVar10 = param_2[5];
    uVar11 = param_2[6];
    uVar12 = param_2[7];
    bVar4 = false;
    uVar13 = param_2[8];
    uVar14 = param_2[9];
    uVar15 = param_2[10];
    uVar16 = param_2[0xb];
    uVar22 = (undefined4)*(undefined8 *)(param_2 + 0xc);
    uVar24 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
    iVar17 = (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_c8,local_d8);
  }
  *param_2 = uVar5;
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
  param_2[4] = uVar9;
  param_2[5] = uVar10;
  param_2[6] = uVar11;
  param_2[7] = uVar12;
  param_2[8] = uVar13;
  param_2[9] = uVar14;
  param_2[10] = uVar15;
  param_2[0xb] = uVar16;
  *(ulonglong *)(param_2 + 0xc) = CONCAT44(uVar24,uVar22);
  FUN_143328100(plVar18);
  return uVar19;
}



// FUNCTION 143377700 FUN_143377700 body=676 status=ok
// SIG undefined FUN_143377700(void)

undefined4
FUN_143377700(longlong *param_1,undefined4 *param_2,int param_3,longlong *param_4,longlong param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  longlong *plVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint in_stack_ffffffffffffff48;
  undefined1 local_98 [8];
  int local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74 [19];
  
  plVar15 = (longlong *)(param_5 + 0xa8);
  bVar1 = true;
  (**(code **)(*plVar15 + 8))(plVar15);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  uVar10 = param_2[8];
  uVar11 = param_2[9];
  uVar12 = param_2[10];
  uVar13 = param_2[0xb];
  uVar17 = (undefined4)*(undefined8 *)(param_2 + 0xc);
  uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
  iVar14 = (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_88,local_98);
  while ((uVar16 = 0, iVar14 != 0 && ((iVar14 != 2 || (uVar16 = 2, bVar1))))) {
    if (local_90 == param_3) {
      (**(code **)(*param_4 + 8))(param_4,&local_88,&local_84);
      FUN_143327f30(plVar15,local_88,local_84,1);
      iVar14 = (**(code **)(*param_1 + 0x48))(param_1,param_2,&local_88);
      while (iVar14 != 0) {
        if (iVar14 == 1) {
          (**(code **)(*param_4 + 8))(param_4,&local_88,&local_84);
          FUN_143327f30(plVar15,local_88,local_84,1);
        }
        else if (iVar14 == 2) {
          (**(code **)(*param_4 + 8))(param_4,&local_88,&local_84);
          (**(code **)(*param_4 + 8))(param_4,&local_80,&local_7c);
          in_stack_ffffffffffffff48 = local_7c;
          FUN_143328050(plVar15,local_88,local_84,local_80,local_7c);
        }
        else if (iVar14 == 3) {
          (**(code **)(*param_4 + 8))(param_4,&local_88,&local_84);
          (**(code **)(*param_4 + 8))(param_4,&local_80,&local_7c);
          (**(code **)(*param_4 + 8))(param_4,&local_78,local_74);
          in_stack_ffffffffffffff48 = local_7c;
          FUN_1433280a0(plVar15,local_88,local_84,local_80,local_7c,local_78,local_74[0]);
        }
        iVar14 = (**(code **)(*param_1 + 0x48))(param_1,param_2,&local_88);
      }
      in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffff00;
      (**(code **)(*plVar15 + 0x30))(plVar15,0,0,0,in_stack_ffffffffffffff48);
    }
    else {
      (**(code **)(*param_1 + 0x50))(param_1,param_2);
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    bVar1 = false;
    uVar10 = param_2[8];
    uVar11 = param_2[9];
    uVar12 = param_2[10];
    uVar13 = param_2[0xb];
    uVar17 = (undefined4)*(undefined8 *)(param_2 + 0xc);
    uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
    iVar14 = (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_88,local_98);
  }
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  param_2[4] = uVar6;
  param_2[5] = uVar7;
  param_2[6] = uVar8;
  param_2[7] = uVar9;
  param_2[8] = uVar10;
  param_2[9] = uVar11;
  param_2[10] = uVar12;
  param_2[0xb] = uVar13;
  *(ulonglong *)(param_2 + 0xc) = CONCAT44(uVar18,uVar17);
  FUN_143328100(plVar15);
  return uVar16;
}



// FUNCTION 1433779b0 FUN_1433779b0 body=120 status=ok
// SIG undefined FUN_1433779b0(void)

undefined4 * FUN_1433779b0(undefined4 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  
  *param_1 = 0x7149f2ca;
  param_1[1] = 0x7149f2ca;
  param_1[2] = 0xf149f2ca;
  param_1[3] = 0xf149f2ca;
  FUN_14332fc40(param_2,param_3,param_1);
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_2 + 0x38))(param_2);
    FUN_143379040(param_2,param_3,param_1);
  }
  return param_1;
}



// FUNCTION 143377a30 FUN_143377a30 body=416 status=ok
// SIG undefined FUN_143377a30(void)

float * FUN_143377a30(float *param_1,longlong *param_2,float *param_3,undefined8 param_4,
                     undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float local_48 [2];
  uint local_40;
  RefCountImpl *local_30;
  RefCountImpl *pRStack_28;
  
  *param_1 = 1e+30;
  lVar1 = *param_2;
  param_1[1] = 1e+30;
  param_1[2] = -1e+30;
  param_1[3] = -1e+30;
  local_30 = (RefCountImpl *)0x0;
  pRStack_28 = (RefCountImpl *)0x0;
  (**(code **)(lVar1 + 0x28))(param_2,*(undefined4 *)(param_6 + 8),local_48);
  fVar2 = 1.0;
  local_40 = local_40 & 6;
  if (local_40 == 0) {
    fVar3 = param_3[1] * 0.70710677 + *param_3 * 0.70710677;
    fVar2 = param_3[5] * 0.70710677 + param_3[4] * 0.70710677;
    fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
  }
  else if (local_40 == 2) {
    fVar2 = *param_3 * *param_3 + param_3[4] * param_3[4];
  }
  else {
    if (local_40 != 4) goto LAB_143377b27;
    fVar2 = param_3[1] * param_3[1] + param_3[5] * param_3[5];
  }
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar2);
LAB_143377b27:
  FUN_14332fd60(param_2,param_3,param_4,param_5,param_1);
  if (*param_1 <= param_1[2]) {
    if (param_1[1] <= param_1[3]) {
      fVar2 = local_48[0] * fVar2 * 0.5;
      *param_1 = *param_1 - fVar2;
      param_1[1] = param_1[1] - fVar2;
      param_1[2] = param_1[2] + fVar2;
      param_1[3] = param_1[3] + fVar2;
    }
  }
  if (pRStack_28 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRStack_28);
  }
  if (local_30 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_30);
  }
  return param_1;
}



// FUNCTION 143377bd0 FUN_143377bd0 body=2746 status=ok
// SIG undefined FUN_143377bd0(void)

float * FUN_143377bd0(float *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                     undefined8 param_5,float param_6,longlong param_7)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  longlong lVar9;
  ulonglong uVar10;
  float *pfVar11;
  ulonglong uVar12;
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
  float local_res8 [2];
  ulonglong local_e0;
  ulonglong local_d8;
  
  lVar2 = param_7;
  *param_1 = 1e+30;
  param_1[1] = 1e+30;
  param_1[2] = -1e+30;
  param_1[3] = -1e+30;
  FUN_1433772d0(param_2,param_3,param_4,param_5,param_7);
  local_d8 = (ulonglong)*(uint *)(lVar2 + 0x150);
  if (*(uint *)(lVar2 + 0x150) != 0) {
    lVar9 = *(longlong *)(lVar2 + 0x168);
    local_e0 = 0;
    do {
      uVar10 = local_e0 >> 4;
      uVar12 = (ulonglong)((uint)local_e0 & 0xf);
      fVar22 = 0.0;
      fVar21 = 0.0;
      uVar7 = 0;
      uVar3 = *(uint *)(*(longlong *)(lVar9 + uVar10 * 8) + 4 + uVar12 * 8) & 0xfffffff;
      if (uVar3 != 0) {
        do {
          lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x168) + uVar10 * 8);
          uVar5 = *(uint *)(lVar9 + 4 + uVar12 * 8) & 0xfffffff;
          uVar4 = uVar7;
          if (uVar5 <= uVar7) {
            uVar4 = uVar7 - uVar5;
          }
          uVar4 = uVar4 + *(int *)(lVar9 + uVar12 * 8);
          uVar5 = uVar7 + 1;
          pfVar8 = (float *)((ulonglong)(uVar4 & 0xf) * 0x10 +
                            *(longlong *)
                             (*(longlong *)(lVar2 + 0x140) + (ulonglong)(uVar4 >> 4) * 8));
          bVar1 = *(byte *)(pfVar8 + 3);
          if (bVar1 < 2) {
            fVar13 = pfVar8[1];
            fVar23 = *pfVar8;
            fVar21 = param_1[1];
            if (fVar13 <= param_1[1]) {
              fVar21 = fVar13;
            }
            fVar22 = *param_1;
            if (fVar23 <= *param_1) {
              fVar22 = fVar23;
            }
            param_1[1] = fVar21;
            *param_1 = fVar22;
            fVar21 = param_1[3];
            if (param_1[3] <= fVar13) {
              fVar21 = fVar13;
            }
            fVar22 = param_1[2];
            if (param_1[2] <= fVar23) {
              fVar22 = fVar23;
            }
LAB_14337856a:
            param_1[2] = fVar22;
            param_1[3] = fVar21;
            fVar21 = fVar13;
            fVar22 = fVar23;
          }
          else {
            if (bVar1 == 2) {
              fVar15 = *pfVar8;
              lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x168) + uVar10 * 8);
              uVar4 = *(uint *)(lVar9 + 4 + uVar12 * 8) & 0xfffffff;
              if (uVar4 <= uVar5) {
                uVar5 = uVar5 - uVar4;
              }
              uVar4 = uVar5 + *(int *)(lVar9 + uVar12 * 8);
              uVar5 = uVar7 + 2;
              pfVar6 = (float *)((ulonglong)(uVar4 & 0xf) * 0x10 +
                                *(longlong *)
                                 (*(longlong *)(lVar2 + 0x140) + (ulonglong)(uVar4 >> 4) * 8));
              fVar23 = *pfVar6;
              fVar13 = ((fVar15 + fVar15) - fVar22) - fVar23;
              if (((fVar13 != 0.0) && (fVar13 = (fVar15 - fVar22) / fVar13, 0.0 < fVar13)) &&
                 (fVar13 < 1.0)) {
                fVar18 = pfVar8[1];
                fVar19 = (fVar15 - fVar22) * fVar13 + fVar22;
                fVar14 = (fVar18 - fVar21) * fVar13 + fVar21;
                fVar14 = (((pfVar6[1] - fVar18) * fVar13 + fVar18) - fVar14) * fVar13 + fVar14;
                fVar19 = (((fVar23 - fVar15) * fVar13 + fVar15) - fVar19) * fVar13 + fVar19;
                fVar13 = param_1[1];
                if (fVar14 <= param_1[1]) {
                  fVar13 = fVar14;
                }
                fVar18 = *param_1;
                if (fVar19 <= *param_1) {
                  fVar18 = fVar19;
                }
                param_1[1] = fVar13;
                *param_1 = fVar18;
                fVar13 = param_1[3];
                if (param_1[3] <= fVar14) {
                  fVar13 = fVar14;
                }
                fVar18 = param_1[2];
                if (param_1[2] <= fVar19) {
                  fVar18 = fVar19;
                }
                param_1[3] = fVar13;
                param_1[2] = fVar18;
              }
              fVar18 = pfVar8[1];
              fVar13 = pfVar6[1];
              fVar14 = ((fVar18 + fVar18) - fVar21) - fVar13;
              if (((fVar14 != 0.0) && (fVar14 = (fVar18 - fVar21) / fVar14, 0.0 < fVar14)) &&
                 (fVar14 < 1.0)) {
                fVar22 = (fVar15 - fVar22) * fVar14 + fVar22;
                fVar21 = (fVar18 - fVar21) * fVar14 + fVar21;
                fVar21 = (((fVar13 - fVar18) * fVar14 + fVar18) - fVar21) * fVar14 + fVar21;
                fVar22 = (((fVar23 - fVar15) * fVar14 + fVar15) - fVar22) * fVar14 + fVar22;
                fVar15 = param_1[1];
                if (fVar21 <= param_1[1]) {
                  fVar15 = fVar21;
                }
                fVar18 = *param_1;
                if (fVar22 <= *param_1) {
                  fVar18 = fVar22;
                }
                param_1[1] = fVar15;
                fVar15 = param_1[3];
                if (param_1[3] <= fVar21) {
                  fVar15 = fVar21;
                }
                *param_1 = fVar18;
                fVar21 = param_1[2];
                if (param_1[2] <= fVar22) {
                  fVar21 = fVar22;
                }
                param_1[3] = fVar15;
                param_1[2] = fVar21;
              }
              fVar21 = *param_1;
              if (fVar23 <= *param_1) {
                fVar21 = fVar23;
              }
              fVar22 = param_1[1];
              if (fVar13 <= param_1[1]) {
                fVar22 = fVar13;
              }
              *param_1 = fVar21;
              param_1[1] = fVar22;
              fVar22 = param_1[2];
              if (param_1[2] <= fVar23) {
                fVar22 = fVar23;
              }
              fVar21 = param_1[3];
              if (param_1[3] <= fVar13) {
                fVar21 = fVar13;
              }
              goto LAB_14337856a;
            }
            if (bVar1 == 3) {
              fVar13 = *pfVar8;
              lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x168) + uVar10 * 8);
              uVar4 = *(uint *)(lVar9 + 4 + uVar12 * 8) & 0xfffffff;
              if (uVar4 <= uVar5) {
                uVar5 = uVar5 - uVar4;
              }
              uVar5 = uVar5 + *(int *)(lVar9 + uVar12 * 8);
              uVar4 = uVar7 + 2;
              pfVar6 = (float *)((ulonglong)(uVar5 & 0xf) * 0x10 +
                                *(longlong *)
                                 (*(longlong *)(lVar2 + 0x140) + (ulonglong)(uVar5 >> 4) * 8));
              fVar15 = *pfVar6;
              lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x168) + uVar10 * 8);
              uVar5 = *(uint *)(lVar9 + 4 + uVar12 * 8) & 0xfffffff;
              if (uVar5 <= uVar4) {
                uVar4 = uVar4 - uVar5;
              }
              uVar4 = uVar4 + *(int *)(lVar9 + uVar12 * 8);
              uVar5 = uVar7 + 3;
              pfVar11 = (float *)((ulonglong)(uVar4 & 0xf) * 0x10 +
                                 *(longlong *)
                                  (*(longlong *)(lVar2 + 0x140) + (ulonglong)(uVar4 >> 4) * 8));
              fVar23 = *pfVar11;
              FUN_143332460(fVar22,fVar13,fVar15,fVar23,&param_7,local_res8);
              if ((0.0 < (float)param_7) && ((float)param_7 < 1.0)) {
                fVar18 = pfVar8[1];
                fVar14 = pfVar6[1];
                fVar20 = (fVar15 - fVar13) * (float)param_7 + fVar13;
                fVar17 = (fVar13 - fVar22) * (float)param_7 + fVar22;
                fVar16 = (fVar14 - fVar18) * (float)param_7 + fVar18;
                fVar19 = (fVar18 - fVar21) * (float)param_7 + fVar21;
                fVar17 = (fVar20 - fVar17) * (float)param_7 + fVar17;
                fVar19 = (fVar16 - fVar19) * (float)param_7 + fVar19;
                fVar19 = (((((pfVar11[1] - fVar14) * (float)param_7 + fVar14) - fVar16) *
                           (float)param_7 + fVar16) - fVar19) * (float)param_7 + fVar19;
                fVar18 = param_1[1];
                if (fVar19 <= param_1[1]) {
                  fVar18 = fVar19;
                }
                param_1[1] = fVar18;
                fVar18 = param_1[3];
                if (param_1[3] <= fVar19) {
                  fVar18 = fVar19;
                }
                param_1[3] = fVar18;
                fVar17 = (((((fVar23 - fVar15) * (float)param_7 + fVar15) - fVar20) * (float)param_7
                          + fVar20) - fVar17) * (float)param_7 + fVar17;
                fVar18 = *param_1;
                if (fVar17 <= *param_1) {
                  fVar18 = fVar17;
                }
                *param_1 = fVar18;
                fVar18 = param_1[2];
                if (param_1[2] <= fVar17) {
                  fVar18 = fVar17;
                }
                param_1[2] = fVar18;
              }
              if ((0.0 < local_res8[0]) && (local_res8[0] < 1.0)) {
                fVar18 = pfVar8[1];
                fVar14 = pfVar6[1];
                fVar16 = (fVar15 - fVar13) * local_res8[0] + fVar13;
                fVar19 = (fVar13 - fVar22) * local_res8[0] + fVar22;
                fVar13 = (fVar14 - fVar18) * local_res8[0] + fVar18;
                fVar18 = (fVar18 - fVar21) * local_res8[0] + fVar21;
                fVar19 = (fVar16 - fVar19) * local_res8[0] + fVar19;
                fVar18 = (fVar13 - fVar18) * local_res8[0] + fVar18;
                fVar18 = (((((pfVar11[1] - fVar14) * local_res8[0] + fVar14) - fVar13) *
                           local_res8[0] + fVar13) - fVar18) * local_res8[0] + fVar18;
                fVar13 = param_1[1];
                if (fVar18 <= param_1[1]) {
                  fVar13 = fVar18;
                }
                param_1[1] = fVar13;
                fVar13 = param_1[3];
                if (param_1[3] <= fVar18) {
                  fVar13 = fVar18;
                }
                param_1[3] = fVar13;
                fVar19 = (((((fVar23 - fVar15) * local_res8[0] + fVar15) - fVar16) * local_res8[0] +
                          fVar16) - fVar19) * local_res8[0] + fVar19;
                fVar13 = *param_1;
                if (fVar19 <= *param_1) {
                  fVar13 = fVar19;
                }
                *param_1 = fVar13;
                fVar13 = param_1[2];
                if (param_1[2] <= fVar19) {
                  fVar13 = fVar19;
                }
                param_1[2] = fVar13;
              }
              fVar13 = pfVar11[1];
              fVar18 = pfVar6[1];
              fVar14 = pfVar8[1];
              FUN_143332460(fVar21,fVar14,fVar18,fVar13,&param_7,local_res8);
              if ((0.0 < (float)param_7) && ((float)param_7 < 1.0)) {
                fVar19 = *pfVar8;
                fVar20 = (fVar15 - fVar19) * (float)param_7 + fVar19;
                fVar17 = (fVar14 - fVar21) * (float)param_7 + fVar21;
                fVar16 = (fVar19 - fVar22) * (float)param_7 + fVar22;
                fVar19 = (fVar18 - fVar14) * (float)param_7 + fVar14;
                fVar16 = (fVar20 - fVar16) * (float)param_7 + fVar16;
                fVar17 = (fVar19 - fVar17) * (float)param_7 + fVar17;
                fVar17 = (((((fVar13 - fVar18) * (float)param_7 + fVar18) - fVar19) * (float)param_7
                          + fVar19) - fVar17) * (float)param_7 + fVar17;
                fVar19 = param_1[1];
                if (fVar17 <= param_1[1]) {
                  fVar19 = fVar17;
                }
                param_1[1] = fVar19;
                fVar19 = param_1[3];
                if (param_1[3] <= fVar17) {
                  fVar19 = fVar17;
                }
                param_1[3] = fVar19;
                fVar16 = (((((fVar23 - fVar15) * (float)param_7 + fVar15) - fVar20) * (float)param_7
                          + fVar20) - fVar16) * (float)param_7 + fVar16;
                fVar19 = *param_1;
                if (fVar16 <= *param_1) {
                  fVar19 = fVar16;
                }
                *param_1 = fVar19;
                fVar19 = param_1[2];
                if (param_1[2] <= fVar16) {
                  fVar19 = fVar16;
                }
                param_1[2] = fVar19;
              }
              if ((0.0 < local_res8[0]) && (local_res8[0] < 1.0)) {
                fVar19 = *pfVar8;
                fVar16 = (fVar15 - fVar19) * local_res8[0] + fVar19;
                fVar21 = (fVar14 - fVar21) * local_res8[0] + fVar21;
                fVar22 = (fVar19 - fVar22) * local_res8[0] + fVar22;
                fVar14 = (fVar18 - fVar14) * local_res8[0] + fVar14;
                fVar22 = (fVar16 - fVar22) * local_res8[0] + fVar22;
                fVar21 = (fVar14 - fVar21) * local_res8[0] + fVar21;
                fVar21 = (((((fVar13 - fVar18) * local_res8[0] + fVar18) - fVar14) * local_res8[0] +
                          fVar14) - fVar21) * local_res8[0] + fVar21;
                fVar18 = param_1[1];
                if (fVar21 <= param_1[1]) {
                  fVar18 = fVar21;
                }
                param_1[1] = fVar18;
                fVar18 = param_1[3];
                if (param_1[3] <= fVar21) {
                  fVar18 = fVar21;
                }
                param_1[3] = fVar18;
                fVar22 = (((((fVar23 - fVar15) * local_res8[0] + fVar15) - fVar16) * local_res8[0] +
                          fVar16) - fVar22) * local_res8[0] + fVar22;
                fVar21 = *param_1;
                if (fVar22 <= *param_1) {
                  fVar21 = fVar22;
                }
                *param_1 = fVar21;
                fVar21 = param_1[2];
                if (param_1[2] <= fVar22) {
                  fVar21 = fVar22;
                }
                param_1[2] = fVar21;
              }
              fVar21 = *param_1;
              if (fVar23 <= *param_1) {
                fVar21 = fVar23;
              }
              fVar22 = param_1[1];
              if (fVar13 <= param_1[1]) {
                fVar22 = fVar13;
              }
              *param_1 = fVar21;
              param_1[1] = fVar22;
              fVar22 = param_1[2];
              if (param_1[2] <= fVar23) {
                fVar22 = fVar23;
              }
              fVar21 = param_1[3];
              if (param_1[3] <= fVar13) {
                fVar21 = fVar13;
              }
              goto LAB_14337856a;
            }
          }
          uVar7 = uVar5;
        } while (uVar7 < uVar3);
        lVar9 = *(longlong *)(lVar2 + 0x168);
      }
      local_e0 = local_e0 + 1;
      local_d8 = local_d8 - 1;
    } while (local_d8 != 0);
  }
  if (*param_1 <= param_1[2]) {
    if (param_1[1] <= param_1[3]) {
      param_6 = param_6 * 0.5;
      *param_1 = *param_1 - param_6;
      param_1[1] = param_1[1] - param_6;
      param_1[2] = param_1[2] + param_6;
      param_1[3] = param_1[3] + param_6;
    }
  }
  return param_1;
}



// FUNCTION 143378690 FUN_143378690 body=1428 status=ok
// SIG undefined FUN_143378690(void)

float * FUN_143378690(float *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                     float *param_5,longlong param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_98 [2];
  uint local_90;
  undefined4 local_8c;
  RefCountImpl *local_80;
  RefCountImpl *pRStack_78;
  
  local_80 = (RefCountImpl *)0x0;
  pRStack_78 = (RefCountImpl *)0x0;
  (**(code **)(*param_2 + 0x28))(param_2,param_4,local_98);
  fVar18 = 1.0;
  uVar5 = local_90 & 6;
  if (uVar5 == 0) {
    fVar19 = param_5[1] * 0.70710677 + *param_5 * 0.70710677;
    fVar18 = param_5[5] * 0.70710677 + param_5[4] * 0.70710677;
    fVar18 = fVar18 * fVar18 + fVar19 * fVar19;
  }
  else if (uVar5 == 2) {
    fVar18 = *param_5 * *param_5 + param_5[4] * param_5[4];
  }
  else {
    if (uVar5 != 4) goto LAB_14337876c;
    fVar18 = param_5[1] * param_5[1] + param_5[5] * param_5[5];
  }
  fVar18 = _guard_xfg_dispatch_icall_nop(fVar18);
LAB_14337876c:
  uVar5 = local_90 & 0x30;
  if ((uVar5 == 0) && ((local_90 & 0xc0) == 0)) {
    FUN_143377bd0(param_1,param_2,param_3,param_4,param_5,local_98[0] * fVar18,param_6);
    if (pRStack_78 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRStack_78);
    }
    if (local_80 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_80);
    }
  }
  else {
    uVar6 = 2;
    uVar10 = 2;
    uVar16 = 2;
    if (uVar5 == 0x10) {
      uVar6 = 3;
    }
    else if (uVar5 == 0x20) {
      uVar6 = 0;
    }
    if ((local_90 & 0xc0) == 0x40) {
      uVar16 = 0;
    }
    else if ((local_90 & 0xc0) == 0x80) {
      uVar16 = 1;
    }
    if ((local_90 & 0x300) == 0x100) {
      uVar10 = 0;
    }
    else if ((local_90 & 0x300) == 0x200) {
      uVar10 = 1;
    }
    *(undefined4 *)(param_6 + 0x8c) = uVar6;
    *(float *)(param_6 + 0x88) = local_98[0] * fVar18 * 0.5;
    *(undefined4 *)(param_6 + 0x94) = uVar10;
    *(undefined4 *)(param_6 + 0x98) = local_8c;
    *(undefined4 *)(param_6 + 0x90) = uVar16;
    Scaleform::Render::Stroker::SetToleranceParam(param_6 + 0x50,param_7);
    FUN_1433772d0(param_2,param_3,param_4,param_5,param_6);
    (**(code **)(*(longlong *)(param_6 + 0x50) + 8))(param_6 + 0x50);
    fVar18 = -1e+30;
    uVar5 = 0;
    fVar19 = -1e+30;
    fVar20 = 1e+30;
    fVar21 = 1e+30;
    if (*(int *)(param_6 + 0x150) != 0) {
      do {
        (**(code **)(*(longlong *)(param_6 + 0x178) + 8))();
        uVar12 = 0;
        uVar17 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_6 + 0x168) + (ulonglong)(uVar5 >> 4) * 8) + 4 +
                          (ulonglong)(uVar5 & 0xf) * 8) & 0xfffffff;
        if (uVar17 != 0) {
          do {
            lVar4 = *(longlong *)(*(longlong *)(param_6 + 0x168) + (ulonglong)(uVar5 >> 4) * 8);
            uVar11 = *(uint *)(lVar4 + 4 + (ulonglong)(uVar5 & 0xf) * 8) & 0xfffffff;
            uVar7 = uVar12;
            if (uVar11 <= uVar12) {
              uVar7 = uVar12 - uVar11;
            }
            uVar7 = uVar7 + *(int *)(lVar4 + (ulonglong)(uVar5 & 0xf) * 8);
            uVar11 = uVar12 + 1;
            puVar15 = (undefined4 *)
                      ((ulonglong)(uVar7 & 0xf) * 0x10 +
                      *(longlong *)(*(longlong *)(param_6 + 0x140) + (ulonglong)(uVar7 >> 4) * 8));
            bVar3 = *(byte *)(puVar15 + 3);
            if (bVar3 < 2) {
              (**(code **)(*(longlong *)(param_6 + 0x50) + 0x20))
                        (param_6 + 0x50,*puVar15,puVar15[1]);
            }
            else if (bVar3 == 2) {
              lVar4 = *(longlong *)(*(longlong *)(param_6 + 0x168) + (ulonglong)(uVar5 >> 4) * 8);
              uVar7 = *(uint *)(lVar4 + 4 + (ulonglong)(uVar5 & 0xf) * 8) & 0xfffffff;
              if (uVar7 <= uVar11) {
                uVar11 = uVar11 - uVar7;
              }
              uVar11 = uVar11 + *(int *)(lVar4 + (ulonglong)(uVar5 & 0xf) * 8);
              puVar13 = (undefined4 *)
                        ((ulonglong)(uVar11 & 0xf) * 0x10 +
                        *(longlong *)(*(longlong *)(param_6 + 0x140) + (ulonglong)(uVar11 >> 4) * 8)
                        );
              FUN_1433bd900(param_6 + 0x50,param_7,*puVar15,puVar15[1],*puVar13,puVar13[1]);
              uVar11 = uVar12 + 2;
            }
            else if (bVar3 == 3) {
              uVar8 = (ulonglong)(uVar5 & 0xf);
              lVar4 = *(longlong *)(*(longlong *)(param_6 + 0x168) + (ulonglong)(uVar5 >> 4) * 8);
              uVar7 = *(uint *)(lVar4 + 4 + uVar8 * 8) & 0xfffffff;
              if (uVar7 <= uVar11) {
                uVar11 = uVar11 - uVar7;
              }
              uVar11 = uVar11 + *(int *)(lVar4 + uVar8 * 8);
              uVar7 = uVar12 + 2;
              puVar13 = (undefined4 *)
                        ((ulonglong)(uVar11 & 0xf) * 0x10 +
                        *(longlong *)(*(longlong *)(param_6 + 0x140) + (ulonglong)(uVar11 >> 4) * 8)
                        );
              lVar4 = *(longlong *)(*(longlong *)(param_6 + 0x168) + (ulonglong)(uVar5 >> 4) * 8);
              uVar11 = *(uint *)(lVar4 + 4 + uVar8 * 8) & 0xfffffff;
              if (uVar11 <= uVar7) {
                uVar7 = uVar7 - uVar11;
              }
              uVar7 = uVar7 + *(int *)(lVar4 + uVar8 * 8);
              puVar14 = (undefined4 *)
                        ((ulonglong)(uVar7 & 0xf) * 0x10 +
                        *(longlong *)(*(longlong *)(param_6 + 0x140) + (ulonglong)(uVar7 >> 4) * 8))
              ;
              FUN_1433bda10(param_6 + 0x50,param_7,*puVar15,puVar15[1],*puVar13,puVar13[1],*puVar14,
                            puVar14[1]);
              uVar11 = uVar12 + 3;
            }
            uVar12 = uVar11;
          } while (uVar12 < uVar17);
        }
        FUN_143326900();
        uVar12 = 0;
        if (*(ulonglong *)(param_6 + 0x188) != 0) {
          uVar8 = 0;
          do {
            uVar9 = (ulonglong)((uint)uVar8 & 0xf);
            lVar4 = *(longlong *)(*(longlong *)(param_6 + 0x1a0) + (uVar8 >> 4) * 8);
            fVar1 = *(float *)(lVar4 + uVar9 * 8);
            fVar2 = *(float *)(lVar4 + 4 + uVar9 * 8);
            if (fVar1 <= fVar21) {
              fVar21 = fVar1;
            }
            if (fVar2 <= fVar20) {
              fVar20 = fVar2;
            }
            if (fVar19 <= fVar1) {
              fVar19 = fVar1;
            }
            if (fVar18 <= fVar2) {
              fVar18 = fVar2;
            }
            uVar12 = uVar12 + 1;
            uVar8 = (ulonglong)uVar12;
          } while (uVar8 < *(ulonglong *)(param_6 + 0x188));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_6 + 0x150));
    }
    *param_1 = fVar21;
    param_1[1] = fVar20;
    param_1[2] = fVar19;
    param_1[3] = fVar18;
    if (pRStack_78 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRStack_78);
    }
    if (local_80 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_80);
    }
  }
  return param_1;
}



// FUNCTION 143378c30 FUN_143378c30 body=720 status=ok
// SIG undefined FUN_143378c30(void)

void FUN_143378c30(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,float *param_6)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_c8;
  undefined4 *local_c0;
  longlong *local_b8;
  undefined1 local_b0 [8];
  uint local_a8;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50 [24];
  
  local_88 = *param_2;
  uStack_80 = param_2[1];
  bVar2 = true;
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  local_c0 = (undefined4 *)((longlong)&local_c8 + 4);
  local_b8 = (longlong *)*param_4;
  local_c8 = 0x20;
  local_68 = *(undefined4 *)(param_2 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_60 = *(undefined4 *)(param_2 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_58 = param_2[6];
  iVar4 = (**(code **)(*param_1 + 0x40))(local_68,(int)local_58,local_50,local_b0);
  while ((iVar4 != 0 && ((iVar4 != 2 || (bVar2))))) {
    if ((local_a8 != 0) &&
       (((uint)local_c8 <= local_a8 ||
        ((1 << ((byte)local_a8 & 0x1f) & local_c0[local_a8 >> 5]) == 0)))) {
      FUN_143378690(&local_98,param_1,&local_88,local_a8,param_3,param_4,param_5);
      uVar3 = local_a8;
      if ((local_98 <= local_90) && (local_94 <= local_8c)) {
        fVar7 = *param_6;
        if (local_98 <= *param_6) {
          fVar7 = local_98;
        }
        fVar8 = param_6[1];
        if (local_94 <= param_6[1]) {
          fVar8 = local_94;
        }
        if (local_90 <= fVar7) {
          fVar7 = local_90;
        }
        if (local_8c <= fVar8) {
          fVar8 = local_8c;
        }
        *param_6 = fVar7;
        param_6[1] = fVar8;
        fVar7 = param_6[2];
        if (param_6[2] <= local_98) {
          fVar7 = local_98;
        }
        fVar8 = param_6[3];
        if (param_6[3] <= local_94) {
          fVar8 = local_94;
        }
        if (fVar7 <= local_90) {
          fVar7 = local_90;
        }
        if (fVar8 <= local_8c) {
          fVar8 = local_8c;
        }
        param_6[2] = fVar7;
        param_6[3] = fVar8;
      }
      if ((uint)local_c8 <= local_a8) {
        uVar6 = (uint)local_c8 + 0x1f >> 5;
        uVar5 = local_a8 + 0x20 >> 5;
        uVar1 = uVar6 * 2;
        if (uVar6 * 2 <= uVar5) {
          uVar1 = uVar5;
        }
        if (uVar6 < uVar1) {
          if (local_c0 == (undefined4 *)((longlong)&local_c8 + 4)) {
            local_c0 = (undefined4 *)
                       (**(code **)(*local_b8 + 0x50))(local_b8,(ulonglong)uVar1 << 2,0);
            *local_c0 = local_c8._4_4_;
          }
          else {
            local_c0 = (undefined4 *)
                       (**(code **)(*local_b8 + 0x58))(local_b8,local_c0,(ulonglong)uVar1 << 2);
          }
          _guard_xfg_dispatch_icall_nop(local_c0 + uVar6,0,(ulonglong)(uVar1 - uVar6) << 2);
          local_c8 = CONCAT44(local_c8._4_4_,uVar1 << 5);
        }
      }
      local_c0[uVar3 >> 5] = local_c0[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
    }
    (**(code **)(*param_1 + 0x50))(param_1,param_2);
    local_88 = *param_2;
    uStack_80 = param_2[1];
    local_78 = param_2[2];
    uStack_70 = param_2[3];
    bVar2 = false;
    local_68 = *(undefined4 *)(param_2 + 4);
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_60 = *(undefined4 *)(param_2 + 5);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_58 = param_2[6];
    iVar4 = (**(code **)(*param_1 + 0x40))(param_1,param_2,local_50,local_b0);
  }
  *param_2 = local_88;
  param_2[1] = uStack_80;
  param_2[2] = local_78;
  param_2[3] = uStack_70;
  *(undefined4 *)(param_2 + 4) = local_68;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_64;
  *(undefined4 *)(param_2 + 5) = uStack_60;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_5c;
  param_2[6] = local_58;
  if (local_c0 != (undefined4 *)((longlong)&local_c8 + 4)) {
    (**(code **)(*local_b8 + 0x60))();
  }
  return;
}



// FUNCTION 143378f00 FUN_143378f00 body=307 status=ok
// SIG undefined FUN_143378f00(void)

void FUN_143378f00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined1 local_b8 [16];
  undefined1 local_a8 [24];
  undefined4 local_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined4 local_60;
  uint uStack_5c;
  
  uVar14 = (**(code **)(*param_1 + 0x30))();
  uStack_74 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_8c._0_4_ = 0;
  uVar1 = (undefined4)uStack_8c;
  uStack_8c._4_4_ = 0;
  uVar2 = uStack_8c._4_4_;
  uStack_84._0_4_ = 0;
  uVar3 = (undefined4)uStack_84;
  uStack_6c = 0;
  uStack_84._4_4_ = 0;
  uVar4 = uStack_84._4_4_;
  uStack_7c._0_4_ = 0;
  uVar5 = (undefined4)uStack_7c;
  uStack_7c._4_4_ = 0;
  uVar6 = uStack_7c._4_4_;
  uStack_74._0_4_ = 0;
  uVar7 = (undefined4)uStack_74;
  local_64 = 0;
  uStack_74._4_4_ = 0;
  uVar8 = uStack_74._4_4_;
  uStack_6c._0_4_ = 0;
  uVar9 = (undefined4)uStack_6c;
  uStack_6c._4_4_ = 0;
  uVar10 = uStack_6c._4_4_;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar13 = uStack_5c;
  _local_60 = CONCAT44(uStack_5c,0x3f800000);
  local_90 = uVar14;
  iVar15 = (**(code **)(*param_1 + 0x40))(param_1,&local_90,local_a8,local_b8);
  local_60 = 0x3f800000;
  local_90 = uVar14;
  local_64 = 0;
  uStack_8c._0_4_ = uVar1;
  uStack_8c._4_4_ = uVar2;
  uStack_84._0_4_ = uVar3;
  uStack_84._4_4_ = uVar4;
  uStack_7c._0_4_ = uVar5;
  uStack_7c._4_4_ = uVar6;
  uStack_74._0_4_ = uVar7;
  uStack_74._4_4_ = uVar8;
  uStack_6c._0_4_ = uVar9;
  uStack_6c._4_4_ = uVar10;
  uStack_5c = uVar13;
  while (iVar15 != 0) {
    FUN_143378c30(param_1,&local_90,param_2,param_3,param_4,param_5);
    uVar13 = uStack_5c;
    uVar12 = local_60;
    uVar11 = local_64;
    uVar14 = uStack_6c._4_4_;
    uVar10 = (undefined4)uStack_6c;
    uVar9 = uStack_74._4_4_;
    uVar8 = (undefined4)uStack_74;
    uVar7 = uStack_7c._4_4_;
    uVar6 = (undefined4)uStack_7c;
    uVar5 = uStack_84._4_4_;
    uVar4 = (undefined4)uStack_84;
    uVar3 = uStack_8c._4_4_;
    uVar2 = (undefined4)uStack_8c;
    uVar1 = local_90;
    iVar15 = (**(code **)(*param_1 + 0x40))(param_1,&local_90,local_a8,local_b8);
    local_60 = uVar12;
    local_90 = uVar1;
    local_64 = uVar11;
    uStack_8c._0_4_ = uVar2;
    uStack_8c._4_4_ = uVar3;
    uStack_84._0_4_ = uVar4;
    uStack_84._4_4_ = uVar5;
    uStack_7c._0_4_ = uVar6;
    uStack_7c._4_4_ = uVar7;
    uStack_74._0_4_ = uVar8;
    uStack_74._4_4_ = uVar9;
    uStack_6c._0_4_ = uVar10;
    uStack_6c._4_4_ = uVar14;
    uStack_5c = uVar13;
  }
  return;
}



// FUNCTION 143379040 FUN_143379040 body=332 status=ok
// SIG undefined FUN_143379040(void)

void FUN_143379040(longlong *param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 local_78 [8];
  int local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_40 = (**(code **)(*param_1 + 0x30))();
  local_10 = 0x3f800000;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_40,local_58,local_78);
  while (iVar1 != 0) {
    if (local_70 == 0) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_40);
    }
    else {
      FUN_143377a30(&local_68,param_1,param_2,&local_40,local_58,local_78);
      if ((local_68 <= local_60) && (local_64 <= local_5c)) {
        fVar2 = *param_3;
        if (local_68 <= *param_3) {
          fVar2 = local_68;
        }
        fVar3 = param_3[1];
        if (local_64 <= param_3[1]) {
          fVar3 = local_64;
        }
        if (local_60 <= fVar2) {
          fVar2 = local_60;
        }
        if (local_5c <= fVar3) {
          fVar3 = local_5c;
        }
        *param_3 = fVar2;
        param_3[1] = fVar3;
        fVar2 = param_3[2];
        if (param_3[2] <= local_68) {
          fVar2 = local_68;
        }
        fVar3 = param_3[3];
        if (param_3[3] <= local_64) {
          fVar3 = local_64;
        }
        if (fVar2 <= local_60) {
          fVar2 = local_60;
        }
        if (fVar3 <= local_5c) {
          fVar3 = local_5c;
        }
        param_3[2] = fVar2;
        param_3[3] = fVar3;
      }
    }
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_40,local_58,local_78);
  }
  return;
}



// FUNCTION 143379190 FUN_143379190 body=1275 status=ok
// SIG undefined FUN_143379190(void)

bool FUN_143379190(longlong *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_118;
  int local_114;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  
  local_f0 = (**(code **)(*param_1 + 0x30))();
  local_c0 = 0x3f800000;
  local_ec = 0;
  local_e4 = 0;
  uVar3 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_bc = 0;
  iVar2 = (**(code **)(*param_1 + 0x40))(param_1,&local_f0,&local_108,&local_118);
  while( true ) {
    if (iVar2 == 0) {
      return uVar3 != 0;
    }
    if ((iVar2 == 2) && (bVar4 = uVar3 != 0, uVar3 = 0, bVar4)) break;
    if ((local_118 == 0) == (local_114 == 0)) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_f0);
    }
    else {
      fVar13 = local_104 * param_2[1] + local_108 * *param_2 + param_2[3];
      fVar12 = local_108 * param_2[4] + local_104 * param_2[5] + param_2[7];
      local_108 = fVar13;
      local_104 = fVar12;
      iVar2 = (**(code **)(*param_1 + 0x48))(param_1,&local_f0,&local_108);
      while (iVar2 != 0) {
        if (iVar2 == 1) {
          fVar9 = local_104 * param_2[1] + local_108 * *param_2 + param_2[3];
          fVar8 = local_108 * param_2[4] + local_104 * param_2[5] + param_2[7];
          fVar5 = fVar12;
          fVar10 = fVar9;
          fVar11 = fVar8;
          if (fVar8 < fVar12) {
            fVar5 = fVar8;
            fVar10 = fVar13;
            fVar11 = fVar12;
            fVar13 = fVar9;
          }
          local_108 = fVar9;
          local_104 = fVar8;
          if (((fVar5 <= param_4) && (param_4 < fVar11)) &&
             (0.0 < (fVar11 - fVar5) * (param_3 - fVar10) - (fVar10 - fVar13) * (param_4 - fVar11)))
          {
            uVar3 = uVar3 ^ 1;
          }
        }
        else if (iVar2 == 2) {
          fVar9 = param_2[4] * local_108;
          local_108 = *param_2 * local_108 + param_2[1] * local_104 + param_2[3];
          fVar8 = param_2[4] * local_100;
          local_100 = *param_2 * local_100 + param_2[1] * local_fc + param_2[3];
          local_104 = fVar9 + param_2[5] * local_104 + param_2[7];
          local_fc = param_2[5] * local_fc + fVar8 + param_2[7];
          uVar3 = FUN_1433d75e0(uVar3,fVar13,fVar12,local_108,local_104,local_100,local_fc,param_3,
                                param_4);
          fVar8 = local_fc;
          fVar9 = local_100;
        }
        else {
          fVar8 = fVar12;
          fVar9 = fVar13;
          if (iVar2 == 3) {
            fVar8 = param_2[1];
            fVar9 = *param_2;
            fVar5 = param_2[3];
            fVar10 = param_2[5];
            fVar11 = param_2[4];
            fVar1 = param_2[7];
            fVar6 = fVar11 * local_108;
            local_108 = fVar9 * local_108 + fVar8 * local_104 + fVar5;
            fVar7 = fVar11 * local_100;
            local_104 = fVar10 * local_104 + fVar6 + fVar1;
            fVar11 = fVar11 * local_f8;
            local_100 = fVar9 * local_100 + fVar8 * local_fc + fVar5;
            local_f8 = fVar9 * local_f8 + fVar8 * local_f4 + fVar5;
            local_fc = fVar10 * local_fc + fVar7 + fVar1;
            local_f4 = fVar10 * local_f4 + fVar11 + fVar1;
            uVar3 = FUN_1433d7690(uVar3,fVar13,fVar12,local_108,local_104,local_100,local_fc,
                                  local_f8,local_f4,param_3,param_4);
            fVar8 = local_f4;
            fVar9 = local_f8;
          }
        }
        iVar2 = (**(code **)(*param_1 + 0x48))(param_1,&local_f0,&local_108);
        fVar13 = fVar9;
        fVar12 = fVar8;
      }
    }
    iVar2 = (**(code **)(*param_1 + 0x40))(param_1,&local_f0,&local_108,&local_118);
  }
  return true;
}



// FUNCTION 143379690 FUN_143379690 body=851 status=ok
// SIG undefined FUN_143379690(void)

bool FUN_143379690(longlong *param_1,longlong *param_2,float param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_c8;
  int local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  
  local_a0 = (**(code **)(*param_1 + 0x30))();
  local_70 = 0x3f800000;
  local_9c = 0;
  local_94 = 0;
  uVar2 = 0;
  local_8c = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_a0,&local_b8,&local_c8);
  while( true ) {
    if (iVar1 == 0) {
      return uVar2 != 0;
    }
    if ((iVar1 == 2) && (bVar3 = uVar2 != 0, uVar2 = 0, bVar3)) break;
    if ((local_c8 == 0) == (local_c4 == 0)) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_a0);
    }
    else {
      (**(code **)(*param_2 + 8))(param_2,&local_b8,&local_b4);
      fVar7 = local_b4;
      fVar8 = local_b8;
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1,&local_a0,&local_b8);
      while (iVar1 != 0) {
        if (iVar1 == 1) {
          (**(code **)(*param_2 + 8))(param_2,&local_b8,&local_b4);
          fVar4 = fVar7;
          fVar5 = local_b8;
          fVar6 = local_b4;
          fVar9 = fVar8;
          if (local_b4 < fVar7) {
            fVar4 = local_b4;
            fVar5 = fVar8;
            fVar6 = fVar7;
            fVar9 = local_b8;
          }
          fVar7 = local_b4;
          fVar8 = local_b8;
          if (((fVar4 <= param_4) && (param_4 < fVar6)) &&
             (0.0 < (fVar6 - fVar4) * (param_3 - fVar5) - (fVar5 - fVar9) * (param_4 - fVar6))) {
            uVar2 = uVar2 ^ 1;
          }
        }
        else if (iVar1 == 2) {
          (**(code **)(*param_2 + 8))(param_2,&local_b8,&local_b4);
          (**(code **)(*param_2 + 8))(param_2,&local_b0,&local_ac);
          uVar2 = FUN_1433d75e0(uVar2,fVar8,fVar7,local_b8,local_b4,local_b0,local_ac,param_3,
                                param_4);
          fVar7 = local_ac;
          fVar8 = local_b0;
        }
        else if (iVar1 == 3) {
          (**(code **)(*param_2 + 8))(param_2,&local_b8,&local_b4);
          (**(code **)(*param_2 + 8))(param_2,&local_b0,&local_ac);
          (**(code **)(*param_2 + 8))(param_2,&local_a8,&local_a4);
          uVar2 = FUN_1433d7690(uVar2,fVar8,fVar7,local_b8,local_b4,local_b0,local_ac,local_a8,
                                local_a4,param_3,param_4);
          fVar7 = local_a4;
          fVar8 = local_a8;
        }
        iVar1 = (**(code **)(*param_1 + 0x48))(param_1,&local_a0,&local_b8);
      }
    }
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_a0,&local_b8,&local_c8);
  }
  return true;
}



// FUNCTION 1433799f0 FUN_1433799f0 body=651 status=ok
// SIG undefined FUN_1433799f0(void)

undefined8
FUN_1433799f0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 *param_6,undefined8 param_7)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 local_c8;
  undefined4 *local_c0;
  longlong *local_b8;
  undefined1 local_b0 [8];
  uint local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68 [64];
  
  local_a0 = *param_2;
  uStack_98 = param_2[1];
  local_90 = param_2[2];
  uStack_88 = param_2[3];
  bVar2 = true;
  local_c0 = (undefined4 *)((longlong)&local_c8 + 4);
  local_c8 = 0x20;
  local_b8 = (longlong *)*param_6;
  local_80 = *(undefined4 *)(param_2 + 4);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_78 = *(undefined4 *)(param_2 + 5);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_70 = param_2[6];
  iVar5 = (**(code **)(*param_1 + 0x40))(local_80,(int)local_70,local_68,local_b0);
  while ((iVar5 != 0 && ((iVar5 != 2 || (bVar2))))) {
    if ((local_a8 != 0) &&
       (((uint)local_c8 <= local_a8 ||
        ((1 << ((byte)local_a8 & 0x1f) & local_c0[local_a8 >> 5]) == 0)))) {
      cVar4 = FUN_14337a0c0(param_1,&local_a0,local_a8,param_3,param_4,param_5,param_6,param_7);
      uVar3 = local_a8;
      if (cVar4 != '\0') {
        uVar7 = 1;
        goto LAB_143379c12;
      }
      if ((uint)local_c8 <= local_a8) {
        uVar8 = (uint)local_c8 + 0x1f >> 5;
        uVar6 = local_a8 + 0x20 >> 5;
        uVar1 = uVar8 * 2;
        if (uVar8 * 2 <= uVar6) {
          uVar1 = uVar6;
        }
        if (uVar8 < uVar1) {
          if (local_c0 == (undefined4 *)((longlong)&local_c8 + 4)) {
            local_c0 = (undefined4 *)
                       (**(code **)(*local_b8 + 0x50))(local_b8,(ulonglong)uVar1 << 2,0);
            *local_c0 = local_c8._4_4_;
          }
          else {
            local_c0 = (undefined4 *)
                       (**(code **)(*local_b8 + 0x58))(local_b8,local_c0,(ulonglong)uVar1 << 2);
          }
          _guard_xfg_dispatch_icall_nop(local_c0 + uVar8,0,(ulonglong)(uVar1 - uVar8) << 2);
          local_c8 = CONCAT44(local_c8._4_4_,uVar1 << 5);
        }
      }
      local_c0[uVar3 >> 5] = local_c0[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
    }
    (**(code **)(*param_1 + 0x50))(param_1,param_2);
    local_a0 = *param_2;
    uStack_98 = param_2[1];
    local_90 = param_2[2];
    uStack_88 = param_2[3];
    bVar2 = false;
    local_80 = *(undefined4 *)(param_2 + 4);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_78 = *(undefined4 *)(param_2 + 5);
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_70 = param_2[6];
    iVar5 = (**(code **)(*param_1 + 0x40))(param_1,param_2,local_68,local_b0);
  }
  uVar7 = 0;
  *param_2 = local_a0;
  param_2[1] = uStack_98;
  param_2[2] = local_90;
  param_2[3] = uStack_88;
  *(undefined4 *)(param_2 + 4) = local_80;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_7c;
  *(undefined4 *)(param_2 + 5) = uStack_78;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_74;
  param_2[6] = local_70;
LAB_143379c12:
  if (local_c0 != (undefined4 *)((longlong)&local_c8 + 4)) {
    (**(code **)(*local_b8 + 0x60))();
  }
  return uVar7;
}



// FUNCTION 143379c80 FUN_143379c80 body=735 status=ok
// SIG undefined FUN_143379c80(void)

undefined8
FUN_143379c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,longlong param_8,
             undefined8 param_9)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  
  FUN_143377700(param_1,param_2,param_3,param_4,param_8);
  uVar11 = 0;
  if (*(int *)(param_8 + 0x150) != 0) {
    plVar1 = (longlong *)(param_8 + 0x178);
    do {
      uVar12 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_8 + 0x168) + (ulonglong)(uVar11 >> 4) * 8) + 4 +
                        (ulonglong)(uVar11 & 0xf) * 8);
      (**(code **)(*plVar1 + 8))(plVar1);
      uVar9 = 0;
      uVar12 = uVar12 & 0xfffffff;
      if (uVar12 != 0) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x168) + (ulonglong)(uVar11 >> 4) * 8);
          uVar5 = *(uint *)(lVar2 + 4 + (ulonglong)(uVar11 & 0xf) * 8) & 0xfffffff;
          uVar4 = uVar9;
          if (uVar5 <= uVar9) {
            uVar4 = uVar9 - uVar5;
          }
          uVar4 = uVar4 + *(int *)(lVar2 + (ulonglong)(uVar11 & 0xf) * 8);
          uVar5 = uVar9 + 1;
          puVar8 = (undefined4 *)
                   ((ulonglong)(uVar4 & 0xf) * 0x10 +
                   *(longlong *)(*(longlong *)(param_8 + 0x140) + (ulonglong)(uVar4 >> 4) * 8));
          if (*(byte *)(puVar8 + 3) < 2) {
            (**(code **)(*plVar1 + 0x20))(plVar1,*puVar8,puVar8[1]);
          }
          else if (*(byte *)(puVar8 + 3) == 2) {
            lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x168) + (ulonglong)(uVar11 >> 4) * 8);
            uVar4 = *(uint *)(lVar2 + 4 + (ulonglong)(uVar11 & 0xf) * 8) & 0xfffffff;
            if (uVar4 <= uVar5) {
              uVar5 = uVar5 - uVar4;
            }
            uVar5 = uVar5 + *(int *)(lVar2 + (ulonglong)(uVar11 & 0xf) * 8);
            puVar6 = (undefined4 *)
                     ((ulonglong)(uVar5 & 0xf) * 0x10 +
                     *(longlong *)(*(longlong *)(param_8 + 0x140) + (ulonglong)(uVar5 >> 4) * 8));
            FUN_1433bd900(plVar1,param_9,*puVar8,puVar8[1],*puVar6,puVar6[1]);
            uVar5 = uVar9 + 2;
          }
          uVar9 = uVar5;
          if (*(char *)(puVar8 + 3) == '\x03') {
            uVar10 = (ulonglong)(uVar11 & 0xf);
            lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x168) + (ulonglong)(uVar11 >> 4) * 8);
            uVar5 = *(uint *)(lVar2 + 4 + uVar10 * 8) & 0xfffffff;
            uVar4 = uVar9;
            if (uVar5 <= uVar9) {
              uVar4 = uVar9 - uVar5;
            }
            uVar4 = uVar4 + *(int *)(lVar2 + uVar10 * 8);
            uVar5 = uVar9 + 1;
            puVar6 = (undefined4 *)
                     ((ulonglong)(uVar4 & 0xf) * 0x10 +
                     *(longlong *)(*(longlong *)(param_8 + 0x140) + (ulonglong)(uVar4 >> 4) * 8));
            lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x168) + (ulonglong)(uVar11 >> 4) * 8);
            uVar4 = *(uint *)(lVar2 + 4 + uVar10 * 8) & 0xfffffff;
            if (uVar4 <= uVar5) {
              uVar5 = uVar5 - uVar4;
            }
            uVar5 = uVar5 + *(int *)(lVar2 + uVar10 * 8);
            uVar9 = uVar9 + 2;
            puVar7 = (undefined4 *)
                     ((ulonglong)(uVar5 & 0xf) * 0x10 +
                     *(longlong *)(*(longlong *)(param_8 + 0x140) + (ulonglong)(uVar5 >> 4) * 8));
            FUN_1433bda10(plVar1,param_9,*puVar8,puVar8[1],*puVar6,puVar6[1],*puVar7,puVar7[1]);
          }
        } while (uVar9 < uVar12);
      }
      cVar3 = FUN_1433d7890(plVar1,param_5,param_6,param_7);
      if (cVar3 != '\0') {
        return 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_8 + 0x150));
  }
  return 0;
}



// FUNCTION 143379f60 FUN_143379f60 body=344 status=ok
// SIG undefined FUN_143379f60(void)

undefined8
FUN_143379f60(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  char cVar14;
  undefined4 uVar15;
  int iVar16;
  undefined1 local_c8 [16];
  undefined1 local_b8 [24];
  undefined4 local_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined4 local_70;
  uint uStack_6c;
  
  uVar15 = (**(code **)(*param_1 + 0x30))();
  uStack_84 = 0;
  uStack_9c = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_9c._0_4_ = 0;
  uVar1 = (undefined4)uStack_9c;
  uStack_9c._4_4_ = 0;
  uVar2 = uStack_9c._4_4_;
  uStack_94._0_4_ = 0;
  uVar3 = (undefined4)uStack_94;
  uStack_7c = 0;
  uStack_94._4_4_ = 0;
  uVar4 = uStack_94._4_4_;
  uStack_8c._0_4_ = 0;
  uVar5 = (undefined4)uStack_8c;
  uStack_8c._4_4_ = 0;
  uVar6 = uStack_8c._4_4_;
  uStack_84._0_4_ = 0;
  uVar7 = (undefined4)uStack_84;
  local_74 = 0;
  uStack_84._4_4_ = 0;
  uVar8 = uStack_84._4_4_;
  uStack_7c._0_4_ = 0;
  uVar9 = (undefined4)uStack_7c;
  uStack_7c._4_4_ = 0;
  uVar10 = uStack_7c._4_4_;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar13 = uStack_6c;
  _local_70 = CONCAT44(uStack_6c,0x3f800000);
  local_a0 = uVar15;
  iVar16 = (**(code **)(*param_1 + 0x40))(param_1,&local_a0,local_b8,local_c8);
  local_70 = 0x3f800000;
  local_a0 = uVar15;
  local_74 = 0;
  uStack_9c._0_4_ = uVar1;
  uStack_9c._4_4_ = uVar2;
  uStack_94._0_4_ = uVar3;
  uStack_94._4_4_ = uVar4;
  uStack_8c._0_4_ = uVar5;
  uStack_8c._4_4_ = uVar6;
  uStack_84._0_4_ = uVar7;
  uStack_84._4_4_ = uVar8;
  uStack_7c._0_4_ = uVar9;
  uStack_7c._4_4_ = uVar10;
  uStack_6c = uVar13;
  while( true ) {
    if (iVar16 == 0) {
      return 0;
    }
    cVar14 = FUN_1433799f0(param_1,&local_a0,param_2,param_3,param_4,param_5,param_6);
    uVar13 = uStack_6c;
    uVar12 = local_70;
    uVar11 = local_74;
    uVar15 = uStack_7c._4_4_;
    uVar10 = (undefined4)uStack_7c;
    uVar9 = uStack_84._4_4_;
    uVar8 = (undefined4)uStack_84;
    uVar7 = uStack_8c._4_4_;
    uVar6 = (undefined4)uStack_8c;
    uVar5 = uStack_94._4_4_;
    uVar4 = (undefined4)uStack_94;
    uVar3 = uStack_9c._4_4_;
    uVar2 = (undefined4)uStack_9c;
    uVar1 = local_a0;
    if (cVar14 != '\0') break;
    iVar16 = (**(code **)(*param_1 + 0x40))(param_1,&local_a0,local_b8,local_c8);
    local_70 = uVar12;
    local_a0 = uVar1;
    local_74 = uVar11;
    uStack_9c._0_4_ = uVar2;
    uStack_9c._4_4_ = uVar3;
    uStack_94._0_4_ = uVar4;
    uStack_94._4_4_ = uVar5;
    uStack_8c._0_4_ = uVar6;
    uStack_8c._4_4_ = uVar7;
    uStack_84._0_4_ = uVar8;
    uStack_84._4_4_ = uVar9;
    uStack_7c._0_4_ = uVar10;
    uStack_7c._4_4_ = uVar15;
    uStack_6c = uVar13;
  }
  return 1;
}



// FUNCTION 14337a0c0 FUN_14337a0c0 body=1245 status=ok
// SIG undefined FUN_14337a0c0(void)

undefined1
FUN_14337a0c0(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
             undefined4 param_5,undefined4 param_6,longlong param_7,undefined8 param_8)

{
  byte bVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  uint uVar16;
  float fVar17;
  undefined8 in_stack_ffffffffffffff58;
  float local_78 [2];
  uint local_70;
  undefined4 local_6c;
  RefCountImpl *local_60;
  RefCountImpl *pRStack_58;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  local_60 = (RefCountImpl *)0x0;
  pRStack_58 = (RefCountImpl *)0x0;
  (**(code **)(*param_1 + 0x28))(0,param_3,local_78);
  fVar17 = 1.0;
  uVar13 = local_70 & 6;
  if (uVar13 == 0) {
    fVar17 = (float)(**(code **)(*param_4 + 0x10))(param_4);
  }
  else if (uVar13 == 2) {
    fVar17 = (float)(**(code **)(*param_4 + 0x18))(param_4);
  }
  else if (uVar13 == 4) {
    fVar17 = (float)(**(code **)(*param_4 + 0x20))(param_4);
  }
  uVar13 = local_70 & 0x30;
  if ((uVar13 == 0) && ((local_70 & 0xc0) == 0)) {
    uVar3 = FUN_143379c80(param_1,param_2,param_3,param_4,CONCAT44(uVar6,local_78[0] * fVar17),
                          param_5,param_6,param_7,param_8);
  }
  else {
    uVar6 = 2;
    uVar14 = 2;
    uVar12 = 2;
    if (uVar13 == 0x10) {
      uVar6 = 3;
    }
    else if (uVar13 == 0x20) {
      uVar6 = 0;
    }
    if ((local_70 & 0xc0) == 0x40) {
      uVar14 = 0;
    }
    else if ((local_70 & 0xc0) == 0x80) {
      uVar14 = 1;
    }
    if ((local_70 & 0x300) == 0x100) {
      uVar12 = 0;
    }
    else if ((local_70 & 0x300) == 0x200) {
      uVar12 = 1;
    }
    *(undefined4 *)(param_7 + 0x8c) = uVar6;
    *(float *)(param_7 + 0x88) = local_78[0] * fVar17 * 0.5;
    *(undefined4 *)(param_7 + 0x98) = local_6c;
    *(undefined4 *)(param_7 + 0x90) = uVar14;
    *(undefined4 *)(param_7 + 0x94) = uVar12;
    Scaleform::Render::Stroker::SetToleranceParam(param_7 + 0x50,param_8);
    FUN_143377700(param_1,param_2,param_3,param_4,param_7);
    (**(code **)(*(longlong *)(param_7 + 0x50) + 8))(param_7 + 0x50);
    uVar13 = 0;
    if (*(int *)(param_7 + 0x150) != 0) {
      do {
        (**(code **)(*(longlong *)(param_7 + 0x178) + 8))(param_7 + 0x178);
        uVar11 = 0;
        uVar16 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_7 + 0x168) + (ulonglong)(uVar13 >> 4) * 8) + 4 +
                          (ulonglong)(uVar13 & 0xf) * 8) & 0xfffffff;
        if (uVar16 != 0) {
          do {
            lVar2 = *(longlong *)(*(longlong *)(param_7 + 0x168) + (ulonglong)(uVar13 >> 4) * 8);
            uVar7 = *(uint *)(lVar2 + 4 + (ulonglong)(uVar13 & 0xf) * 8) & 0xfffffff;
            uVar5 = uVar11;
            if (uVar7 <= uVar11) {
              uVar5 = uVar11 - uVar7;
            }
            uVar5 = uVar5 + *(int *)(lVar2 + (ulonglong)(uVar13 & 0xf) * 8);
            uVar7 = uVar11 + 1;
            puVar10 = (undefined4 *)
                      ((ulonglong)(uVar5 & 0xf) * 0x10 +
                      *(longlong *)(*(longlong *)(param_7 + 0x140) + (ulonglong)(uVar5 >> 4) * 8));
            bVar1 = *(byte *)(puVar10 + 3);
            if (bVar1 < 2) {
              (**(code **)(*(longlong *)(param_7 + 0x50) + 0x20))
                        (param_7 + 0x50,*puVar10,puVar10[1]);
            }
            else if (bVar1 == 2) {
              lVar2 = *(longlong *)(*(longlong *)(param_7 + 0x168) + (ulonglong)(uVar13 >> 4) * 8);
              uVar5 = *(uint *)(lVar2 + 4 + (ulonglong)(uVar13 & 0xf) * 8) & 0xfffffff;
              if (uVar5 <= uVar7) {
                uVar7 = uVar7 - uVar5;
              }
              uVar7 = uVar7 + *(int *)(lVar2 + (ulonglong)(uVar13 & 0xf) * 8);
              puVar8 = (undefined4 *)
                       ((ulonglong)(uVar7 & 0xf) * 0x10 +
                       *(longlong *)(*(longlong *)(param_7 + 0x140) + (ulonglong)(uVar7 >> 4) * 8));
              FUN_1433bd900(param_7 + 0x50,param_8,*puVar10,puVar10[1],*puVar8,puVar8[1]);
              uVar7 = uVar11 + 2;
            }
            else if (bVar1 == 3) {
              uVar15 = (ulonglong)(uVar13 & 0xf);
              lVar2 = *(longlong *)(*(longlong *)(param_7 + 0x168) + (ulonglong)(uVar13 >> 4) * 8);
              uVar5 = *(uint *)(lVar2 + 4 + uVar15 * 8) & 0xfffffff;
              if (uVar5 <= uVar7) {
                uVar7 = uVar7 - uVar5;
              }
              uVar7 = uVar7 + *(int *)(lVar2 + uVar15 * 8);
              uVar5 = uVar11 + 2;
              puVar8 = (undefined4 *)
                       ((ulonglong)(uVar7 & 0xf) * 0x10 +
                       *(longlong *)(*(longlong *)(param_7 + 0x140) + (ulonglong)(uVar7 >> 4) * 8));
              lVar2 = *(longlong *)(*(longlong *)(param_7 + 0x168) + (ulonglong)(uVar13 >> 4) * 8);
              uVar7 = *(uint *)(lVar2 + 4 + uVar15 * 8) & 0xfffffff;
              if (uVar7 <= uVar5) {
                uVar5 = uVar5 - uVar7;
              }
              uVar5 = uVar5 + *(int *)(lVar2 + uVar15 * 8);
              puVar9 = (undefined4 *)
                       ((ulonglong)(uVar5 & 0xf) * 0x10 +
                       *(longlong *)(*(longlong *)(param_7 + 0x140) + (ulonglong)(uVar5 >> 4) * 8));
              FUN_1433bda10(param_7 + 0x50,param_8,*puVar10,puVar10[1],*puVar8,puVar8[1],*puVar9,
                            puVar9[1]);
              uVar7 = uVar11 + 3;
            }
            uVar11 = uVar7;
          } while (uVar11 < uVar16);
        }
        FUN_143326900(param_7 + 0x50,param_7 + 0x178);
        cVar4 = FUN_1433d7b30(param_7 + 0x178,param_5,param_6);
        if (cVar4 != '\0') {
          uVar3 = 1;
          goto LAB_14337a527;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_7 + 0x150));
    }
    uVar3 = 0;
  }
LAB_14337a527:
  if (pRStack_58 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRStack_58);
  }
  if (local_60 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_60);
  }
  return uVar3;
}



// FUNCTION 14337a5a0 ~MorphShapeData body=142 status=ok
// SIG undefined ~MorphShapeData(void)

void Scaleform::Render::MorphShapeData::~MorphShapeData(RefCountImplCore *param_1)

{
  FUN_1432ef960(param_1 + 0xe0);
  FUN_1432ef860(param_1 + 200);
  RefCountImplCore::~RefCountImplCore(param_1 + 0xb0);
  FUN_1432ef960(param_1 + 0x78);
  FUN_1432ef860(param_1 + 0x60);
  RefCountImplCore::~RefCountImplCore(param_1 + 0x48);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x30));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x18));
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 14337a640 FUN_14337a640 body=110 status=ok
// SIG undefined FUN_14337a640(void)

RefCountImplCore * FUN_14337a640(RefCountImplCore *param_1,ulonglong param_2)

{
  FUN_1432ef960(param_1 + 0x30);
  FUN_1432ef860(param_1 + 0x18);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14337a6b0 FUN_14337a6b0 body=43 status=ok
// SIG undefined FUN_14337a6b0(void)

undefined8 * FUN_14337a6b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af97b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14337a6e0 FUN_14337a6e0 body=120 status=ok
// SIG undefined FUN_14337a6e0(void)

RefCountImplCore * FUN_14337a6e0(RefCountImplCore *param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14337a760 FUN_14337a760 body=89 status=ok
// SIG undefined FUN_14337a760(void)

undefined8 FUN_14337a760(undefined8 param_1,ulonglong param_2)

{
  Scaleform::Render::MorphShapeData::~MorphShapeData();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 14337a7c0 FUN_14337a7c0 body=89 status=ok
// SIG undefined FUN_14337a7c0(void)

undefined8 FUN_14337a7c0(undefined8 param_1,ulonglong param_2)

{
  FUN_143371120();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14337a820 Clear body=114 status=ok
// SIG undefined Clear(void)

void Scaleform::Render::MeshGenerator::Clear(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))();
  (**(code **)(*(longlong *)(param_1 + 0x608) + 8))();
  (**(code **)(*(longlong *)(param_1 + 0x660) + 8))();
  (**(code **)(*(longlong *)(param_1 + 0x730) + 8))();
  (**(code **)(*(longlong *)(param_1 + 0x9d0) + 8))();
  LinearHeap::ClearAndRelease(param_1);
  LinearHeap::ClearAndRelease(param_1 + 0x28);
  LinearHeap::ClearAndRelease(param_1 + 0x50);
  LinearHeap::ClearAndRelease(param_1 + 0x78);
  return;
}



// FUNCTION 14337a8a0 FUN_14337a8a0 body=274 status=ok
// SIG undefined FUN_14337a8a0(void)

void FUN_14337a8a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *local_res8;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  uVar3 = plVar2[1];
  uVar1 = uVar3 + 1;
  local_res8 = plVar2;
  if (uVar1 < uVar3) {
    uVar4 = uVar1;
    if ((ulonglong)plVar2[2] >> 1 <= uVar1) goto LAB_14337a90e;
  }
  else {
    if (uVar1 <= (ulonglong)plVar2[2]) goto LAB_14337a90e;
    uVar4 = (uVar1 >> 2) + uVar1;
  }
  FUN_143333390(plVar2,plVar2,uVar4);
LAB_14337a90e:
  plVar2[1] = uVar1;
  *(undefined1 *)(uVar3 + *plVar2) = 5;
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_2);
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_3);
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_4);
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_5);
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_6);
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_7);
  *(undefined4 *)(param_1 + 0x5c) = param_6;
  *(undefined4 *)(param_1 + 0x60) = param_7;
  *(undefined4 *)(param_1 + 0x10) = 4;
  return;
}



// FUNCTION 14337a9c0 FUN_14337a9c0 body=164 status=ok
// SIG undefined FUN_14337a9c0(void)

void FUN_14337a9c0(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  undefined1 local_28 [8];
  undefined4 local_20 [2];
  RefCountImpl *local_18;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(float *)(param_1 + 0x20) != 0.0)) {
    local_18 = (RefCountImpl *)0x0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x10);
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2,local_20);
    if (*(longlong *)(param_3 + 2) == 0) {
      local_res8[0] = local_20[0];
      local_res20[0] = *param_3;
      puVar2 = (undefined4 *)
               Scaleform::Render::Color::Blend
                         (local_28,local_res20,local_res8,*(undefined4 *)(param_1 + 0x20));
      *param_3 = *puVar2;
    }
    if (local_18 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_18);
    }
  }
  return;
}



// FUNCTION 14337aa90 GetScale body=68 status=ok
// SIG float GetScale(Matrix2x4<float> * this)

/* public: float __cdecl Scaleform::Render::Matrix2x4<float>::GetScale(void)const __ptr64 */

float __thiscall Scaleform::Render::Matrix2x4<float>::GetScale(Matrix2x4<float> *this)

{
  float fVar1;
  float fVar2;
  
                    /* 0x337aa90  203  ?GetScale@?$Matrix2x4@M@Render@Scaleform@@QEBAMXZ */
  fVar2 = *(float *)(this + 4) * 0.70710677 + *(float *)this * 0.70710677;
  fVar1 = *(float *)(this + 0x14) * 0.70710677 + *(float *)(this + 0x10) * 0.70710677;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(fVar1 * fVar1 + fVar2 * fVar2);
  return fVar1;
}



// FUNCTION 14337ab40 FUN_14337ab40 body=32 status=ok
// SIG undefined FUN_14337ab40(void)

void FUN_14337ab40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014337ab51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x48) + 0x30))(lVar1 + 0x48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014337ab5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
  return;
}



// FUNCTION 14337ab60 FUN_14337ab60 body=209 status=ok
// SIG undefined FUN_14337ab60(void)

void FUN_14337ab60(longlong param_1,undefined4 param_2,float *param_3)

{
  longlong *plVar1;
  float *pfVar2;
  undefined4 local_res8 [2];
  float local_res20 [2];
  undefined1 local_38 [8];
  float local_30 [4];
  undefined4 local_20;
  RefCountImpl *local_18;
  RefCountImpl *pRStack_10;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(float *)(param_1 + 0x20) != 0.0)) {
    local_18 = (RefCountImpl *)0x0;
    pRStack_10 = (RefCountImpl *)0x0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x10);
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2,local_30);
    *param_3 = (local_30[0] - *param_3) * *(float *)(param_1 + 0x20) + *param_3;
    if (*(longlong *)(param_3 + 6) == 0) {
      local_res8[0] = local_20;
      local_res20[0] = param_3[4];
      pfVar2 = (float *)Scaleform::Render::Color::Blend
                                  (local_38,local_res20,local_res8,*(undefined4 *)(param_1 + 0x20));
      param_3[4] = *pfVar2;
    }
    if (pRStack_10 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRStack_10);
    }
    if (local_18 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_18);
    }
  }
  return;
}



// FUNCTION 14337aca0 FUN_14337aca0 body=62 status=ok
// SIG undefined FUN_14337aca0(void)

void FUN_14337aca0(longlong param_1)

{
  FUN_1433719a0(param_1 + -0x10);
  return;
}



// FUNCTION 14337ace0 FUN_14337ace0 body=45 status=ok
// SIG undefined FUN_14337ace0(void)

Matrix2x4<float> * FUN_14337ace0(Matrix2x4<float> *param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28 = *(undefined8 *)param_1;
  uStack_20 = *(undefined8 *)(param_1 + 8);
  local_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_10 = *(undefined8 *)(param_1 + 0x18);
  Scaleform::Render::Matrix2x4<float>::SetInverse(param_1,(Matrix2x4<float> *)&local_28);
  return param_1;
}



// FUNCTION 14337ad10 FUN_14337ad10 body=82 status=ok
// SIG undefined FUN_14337ad10(void)

undefined1 FUN_14337ad10(float *param_1,float param_2)

{
  if ((param_2 < ABS(param_1[1] * 0.0 + *param_1 + 0.0)) &&
     (param_2 < ABS(param_1[5] * 0.0 + param_1[4] + 0.0))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14337ad70 FUN_14337ad70 body=181 status=ok
// SIG undefined FUN_14337ad70(void)

void FUN_14337ad70(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *local_res8;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  uVar1 = plVar2[1] + 1;
  local_res8 = plVar2;
  if (uVar1 < (ulonglong)plVar2[1]) {
    uVar3 = uVar1;
    if ((ulonglong)plVar2[2] >> 1 <= uVar1) goto LAB_14337add4;
  }
  else {
    if (uVar1 <= (ulonglong)plVar2[2]) goto LAB_14337add4;
    uVar3 = (uVar1 >> 2) + uVar1;
  }
  FUN_143333390(plVar2,plVar2,uVar3);
LAB_14337add4:
  plVar2[1] = uVar1;
  *(undefined1 *)(*plVar2 + -1 + uVar1) = 3;
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_2);
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_3);
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 4;
  return;
}



// FUNCTION 14337ae30 FUN_14337ae30 body=51 status=ok
// SIG undefined FUN_14337ae30(void)

void FUN_14337ae30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [6];
  
  local_18[0] = 0x21000;
  local_res18 = param_3;
  local_res20 = param_4;
  (**(code **)(*param_1 + 8))(param_1,local_18,param_2,&local_res18);
  return;
}



// FUNCTION 14337ae70 FUN_14337ae70 body=191 status=ok
// SIG undefined FUN_14337ae70(void)

void FUN_14337ae70(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *local_res8;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  uVar1 = plVar2[1] + 1;
  local_res8 = plVar2;
  if (uVar1 < (ulonglong)plVar2[1]) {
    uVar3 = uVar1;
    if ((ulonglong)plVar2[2] >> 1 <= uVar1) goto LAB_14337aed4;
  }
  else {
    if (uVar1 <= (ulonglong)plVar2[2]) goto LAB_14337aed4;
    uVar3 = (uVar1 >> 2) + uVar1;
  }
  FUN_143333390(plVar2,plVar2,uVar3);
LAB_14337aed4:
  plVar2[1] = uVar1;
  *(undefined1 *)(*plVar2 + -1 + uVar1) = 2;
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_2);
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_3);
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 3;
  return;
}



// FUNCTION 14337af30 FUN_14337af30 body=322 status=ok
// SIG undefined FUN_14337af30(void)

void FUN_14337af30(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar1 = param_1[1];
  if (0xf < uVar1) {
    if (uVar1 == 0x10) {
      lVar7 = param_1[2];
      param_1[2] = lVar7 * 2;
      plVar5 = (longlong *)*param_1;
      lVar7 = lVar7 << 6;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,lVar7,0);
      }
      else {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))(plVar5,lVar7,0);
      }
      param_1[0x43] = (longlong)plVar5;
      lVar7 = 4;
      plVar6 = param_1 + 3;
      do {
        lVar3 = plVar6[1];
        *plVar5 = *plVar6;
        plVar5[1] = lVar3;
        lVar3 = plVar6[3];
        plVar5[2] = plVar6[2];
        plVar5[3] = lVar3;
        lVar3 = plVar6[5];
        plVar5[4] = plVar6[4];
        plVar5[5] = lVar3;
        lVar3 = plVar6[7];
        plVar5[6] = plVar6[6];
        plVar5[7] = lVar3;
        lVar3 = plVar6[9];
        plVar5[8] = plVar6[8];
        plVar5[9] = lVar3;
        lVar3 = plVar6[0xb];
        plVar5[10] = plVar6[10];
        plVar5[0xb] = lVar3;
        lVar3 = plVar6[0xd];
        plVar5[0xc] = plVar6[0xc];
        plVar5[0xd] = lVar3;
        lVar3 = plVar6[0xf];
        plVar5[0xe] = plVar6[0xe];
        plVar5[0xf] = lVar3;
        lVar7 = lVar7 + -1;
        plVar5 = plVar5 + 0x10;
        plVar6 = plVar6 + 0x10;
      } while (lVar7 != 0);
    }
    else {
      uVar2 = param_1[2];
      if (uVar2 <= uVar1) {
        param_1[2] = uVar2 * 2;
        lVar7 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[0x43],uVar2 << 6);
        param_1[0x43] = lVar7;
      }
    }
    lVar7 = param_1[1];
    lVar3 = param_1[0x43];
    lVar4 = param_2[1];
    plVar5 = (longlong *)(lVar3 + lVar7 * 0x20);
    *plVar5 = *param_2;
    plVar5[1] = lVar4;
    lVar4 = param_2[3];
    plVar5 = (longlong *)(lVar3 + 0x10 + lVar7 * 0x20);
    *plVar5 = param_2[2];
    plVar5[1] = lVar4;
    param_1[1] = param_1[1] + 1;
    return;
  }
  lVar7 = param_2[1];
  param_1[uVar1 * 4 + 3] = *param_2;
  (param_1 + uVar1 * 4 + 3)[1] = lVar7;
  lVar7 = param_2[3];
  param_1[uVar1 * 4 + 5] = param_2[2];
  (param_1 + uVar1 * 4 + 5)[1] = lVar7;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 14337b080 FUN_14337b080 body=346 status=ok
// SIG undefined FUN_14337b080(void)

void FUN_14337b080(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar1 = param_1[1];
  if (0x1f < uVar1) {
    if (uVar1 == 0x20) {
      lVar7 = param_1[2];
      param_1[2] = lVar7 * 2;
      plVar5 = (longlong *)*param_1;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)
                 (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,lVar7 * 0x30,0);
      }
      else {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))(plVar5,lVar7 * 0x30,0);
      }
      param_1[99] = (longlong)plVar5;
      lVar7 = 6;
      plVar6 = param_1 + 3;
      do {
        lVar3 = plVar6[1];
        *plVar5 = *plVar6;
        plVar5[1] = lVar3;
        lVar3 = plVar6[3];
        plVar5[2] = plVar6[2];
        plVar5[3] = lVar3;
        lVar3 = plVar6[5];
        plVar5[4] = plVar6[4];
        plVar5[5] = lVar3;
        lVar3 = plVar6[7];
        plVar5[6] = plVar6[6];
        plVar5[7] = lVar3;
        lVar3 = plVar6[9];
        plVar5[8] = plVar6[8];
        plVar5[9] = lVar3;
        lVar3 = plVar6[0xb];
        plVar5[10] = plVar6[10];
        plVar5[0xb] = lVar3;
        lVar3 = plVar6[0xd];
        plVar5[0xc] = plVar6[0xc];
        plVar5[0xd] = lVar3;
        lVar3 = plVar6[0xf];
        plVar5[0xe] = plVar6[0xe];
        plVar5[0xf] = lVar3;
        lVar7 = lVar7 + -1;
        plVar5 = plVar5 + 0x10;
        plVar6 = plVar6 + 0x10;
      } while (lVar7 != 0);
    }
    else {
      uVar2 = param_1[2];
      if (uVar2 <= uVar1) {
        param_1[2] = uVar2 * 2;
        lVar7 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[99],uVar2 * 0x30);
        param_1[99] = lVar7;
      }
    }
    lVar7 = param_1[1];
    lVar4 = param_2[1];
    lVar3 = param_1[99];
    plVar5 = (longlong *)(lVar3 + lVar7 * 0x18);
    *plVar5 = *param_2;
    plVar5[1] = lVar4;
    *(longlong *)(lVar3 + 0x10 + lVar7 * 0x18) = param_2[2];
    param_1[1] = param_1[1] + 1;
    return;
  }
  lVar7 = param_2[1];
  param_1[uVar1 * 3 + 3] = *param_2;
  (param_1 + uVar1 * 3 + 3)[1] = lVar7;
  param_1[uVar1 * 3 + 5] = param_2[2];
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 14337b1e0 FUN_14337b1e0 body=233 status=ok
// SIG undefined FUN_14337b1e0(void)

void FUN_14337b1e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *local_res8;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  uVar1 = plVar2[1] + 1;
  local_res8 = plVar2;
  if (uVar1 < (ulonglong)plVar2[1]) {
    uVar3 = uVar1;
    if ((ulonglong)plVar2[2] >> 1 <= uVar1) goto LAB_14337b24e;
  }
  else {
    if (uVar1 <= (ulonglong)plVar2[2]) goto LAB_14337b24e;
    uVar3 = (uVar1 >> 2) + uVar1;
  }
  FUN_143333390(plVar2,plVar2,uVar3);
LAB_14337b24e:
  plVar2[1] = uVar1;
  *(undefined1 *)(*plVar2 + -1 + uVar1) = 4;
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_2);
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_3);
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_4);
  Scaleform::Render::
  PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
  WriteFloat(&local_res8,param_5);
  *(undefined4 *)(param_1 + 0x5c) = param_4;
  *(undefined4 *)(param_1 + 0x60) = param_5;
  *(undefined4 *)(param_1 + 0x10) = 4;
  return;
}



// FUNCTION 14337b2d0 FUN_14337b2d0 body=307 status=ok
// SIG undefined FUN_14337b2d0(void)

ulonglong FUN_14337b2d0(longlong param_1,undefined8 param_2,float *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  float local_28;
  undefined8 local_24;
  undefined8 local_1c;
  float local_14;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))();
    return uVar2;
  }
  local_24 = 0;
  local_1c = 0;
  local_28 = 0.0;
  local_14 = 0.0;
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48) + 0x48))();
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0);
  (**(code **)(*plVar3 + 0x48))(plVar3,param_1 + 0x24,&local_28);
  if (uVar1 != 0) {
    *param_3 = (local_28 - *param_3) * *(float *)(param_1 + 0x20) + *param_3;
    param_3[1] = ((float)local_24 - param_3[1]) * *(float *)(param_1 + 0x20) + param_3[1];
    if (uVar1 - 2 < 2) {
      param_3[2] = (local_24._4_4_ - param_3[2]) * *(float *)(param_1 + 0x20) + param_3[2];
      param_3[3] = ((float)local_1c - param_3[3]) * *(float *)(param_1 + 0x20) + param_3[3];
      if (uVar1 == 3) {
        param_3[4] = (local_1c._4_4_ - param_3[4]) * *(float *)(param_1 + 0x20) + param_3[4];
        param_3[5] = (local_14 - param_3[5]) * *(float *)(param_1 + 0x20) + param_3[5];
      }
    }
  }
  return (ulonglong)uVar1;
}



// FUNCTION 14337b410 FUN_14337b410 body=192 status=ok
// SIG undefined FUN_14337b410(void)

ulonglong FUN_14337b410(longlong param_1,undefined8 param_2,float *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))();
    return uVar2;
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48) + 0x40))();
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0);
  (**(code **)(*plVar3 + 0x40))(plVar3,param_1 + 0x24,&local_28,&local_38);
  if (uVar1 != 0) {
    *param_3 = ((float)local_28 - *param_3) * *(float *)(param_1 + 0x20) + *param_3;
    param_3[1] = (local_28._4_4_ - param_3[1]) * *(float *)(param_1 + 0x20) + param_3[1];
  }
  return (ulonglong)uVar1;
}



// FUNCTION 14337b4d0 FUN_14337b4d0 body=165 status=ok
// SIG undefined FUN_14337b4d0(void)

void FUN_14337b4d0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0x14,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14337b580 FUN_14337b580 body=165 status=ok
// SIG undefined FUN_14337b580(void)

void FUN_14337b580(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0x28,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14337b630 FUN_14337b630 body=192 status=ok
// SIG undefined FUN_14337b630(void)

void FUN_14337b630(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(*param_1 + -0x10 + (lVar2 + param_3) * 0x28);
      do {
        if ((RefCountImpl *)puVar1[1] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)puVar1[1]);
        }
        if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
        }
        puVar1 = puVar1 + -5;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_14337b580(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_14337b580(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 14337b6f0 FUN_14337b6f0 body=38 status=ok
// SIG undefined FUN_14337b6f0(void)

void FUN_14337b6f0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x5c);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 100);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x7c);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x84);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x8c);
  return;
}



// FUNCTION 14337b720 SetLerp body=197 status=ok
// SIG void SetLerp(Matrix2x4<float> * this, Matrix2x4<float> * param_1, Matrix2x4<float> * param_2, float param_3)

/* public: void __cdecl Scaleform::Render::Matrix2x4<float>::SetLerp(class
   Scaleform::Render::Matrix2x4<float> const & __ptr64,class Scaleform::Render::Matrix2x4<float>
   const & __ptr64,float) __ptr64 */

void __thiscall
Scaleform::Render::Matrix2x4<float>::SetLerp
          (Matrix2x4<float> *this,Matrix2x4<float> *param_1,Matrix2x4<float> *param_2,float param_3)

{
                    /* 0x337b720  418  ?SetLerp@?$Matrix2x4@M@Render@Scaleform@@QEAAXAEBV123@0M@Z */
  *(float *)this = (*(float *)param_2 - *(float *)param_1) * param_3 + *(float *)param_1;
  *(float *)(this + 0x10) =
       (*(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x10)) * param_3 +
       *(float *)(param_1 + 0x10);
  *(float *)(this + 4) =
       (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) * param_3 + *(float *)(param_1 + 4);
  *(float *)(this + 0x14) =
       (*(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14)) * param_3 +
       *(float *)(param_1 + 0x14);
  *(float *)(this + 8) =
       (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) * param_3 + *(float *)(param_1 + 8);
  *(float *)(this + 0x18) =
       (*(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x18)) * param_3 +
       *(float *)(param_1 + 0x18);
  *(float *)(this + 0xc) =
       (*(float *)(param_2 + 0xc) - *(float *)(param_1 + 0xc)) * param_3 + *(float *)(param_1 + 0xc)
  ;
  *(float *)(this + 0x1c) =
       (*(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x1c)) * param_3 +
       *(float *)(param_1 + 0x1c);
  return;
}



// FUNCTION 14337b7f0 SkipPathData body=72 status=ok
// SIG undefined SkipPathData(void)

void Scaleform::Render::MorphInterpolator::SkipPathData(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014337b80e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))();
    return;
  }
  (**(code **)(*(longlong *)(lVar1 + 0x48) + 0x50))(lVar1 + 0x48);
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00014337b834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2,param_1 + 0x24);
  return;
}



// FUNCTION 14337b840 StartLayer body=114 status=ok
// SIG undefined StartLayer(void)

void Scaleform::Render::
     ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
     StartLayer(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  uVar2 = plVar1[1] + 1;
  if (uVar2 < (ulonglong)plVar1[1]) {
    uVar3 = uVar2;
    if ((ulonglong)plVar1[2] >> 1 <= uVar2) goto LAB_14337b88f;
  }
  else {
    if (uVar2 <= (ulonglong)plVar1[2]) goto LAB_14337b88f;
    uVar3 = (uVar2 >> 2) + uVar2;
  }
  FUN_143333390(plVar1,plVar1,uVar3);
LAB_14337b88f:
  plVar1[1] = uVar2;
  *(undefined1 *)(*plVar1 + -1 + uVar2) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 14337b8c0 FUN_14337b8c0 body=195 status=ok
// SIG undefined FUN_14337b8c0(void)

void FUN_14337b8c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *local_res8;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  local_res8 = plVar2;
  if (*(int *)(param_1 + 0x10) == 0) {
    Scaleform::Render::
    ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
    StartLayer();
  }
  uVar1 = plVar2[1] + 1;
  if (uVar1 < (ulonglong)plVar2[1]) {
    uVar3 = uVar1;
    if ((ulonglong)plVar2[2] >> 1 <= uVar1) goto LAB_14337b931;
  }
  else {
    if (uVar1 <= (ulonglong)plVar2[2]) goto LAB_14337b931;
    uVar3 = (uVar1 >> 2) + uVar1;
  }
  FUN_143333390(plVar2,plVar2,uVar3);
LAB_14337b931:
  plVar2[1] = uVar1;
  *(undefined1 *)(*plVar2 + -1 + uVar1) = 1;
  FUN_1433355d0(&local_res8,param_2);
  FUN_1433355d0(&local_res8,param_3);
  FUN_1433355d0(&local_res8,param_4);
  *(undefined4 *)(param_1 + 0x10) = 2;
  return;
}



// FUNCTION 14337b9f0 WriteFloat body=344 status=ok
// SIG undefined WriteFloat(void)

void Scaleform::Render::
     PathDataEncoder<Scaleform::ArrayLH_POD<unsigned_char,2,Scaleform::ArrayDefaultPolicy>_>::
     WriteFloat(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_res10;
  undefined1 uStackX_11;
  undefined1 uStackX_12;
  undefined1 uStackX_13;
  
  plVar1 = (longlong *)*param_1;
  uVar3 = plVar1[1] + 1;
  if (uVar3 < (ulonglong)plVar1[1]) {
    uVar4 = uVar3;
    if (uVar3 < (ulonglong)plVar1[2] >> 1) {
LAB_14337ba39:
      FUN_143333390(plVar1,plVar1,uVar4);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar3) {
    uVar4 = (uVar3 >> 2) + uVar3;
    goto LAB_14337ba39;
  }
  local_res10 = (undefined1)param_2;
  plVar1[1] = uVar3;
  *(undefined1 *)(*plVar1 + -1 + uVar3) = local_res10;
  plVar1 = (longlong *)*param_1;
  uVar3 = plVar1[1] + 1;
  if (uVar3 < (ulonglong)plVar1[1]) {
    uVar4 = uVar3;
    if (uVar3 < (ulonglong)plVar1[2] >> 1) {
LAB_14337ba85:
      FUN_143333390(plVar1,plVar1,uVar4);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar3) {
    uVar4 = (uVar3 >> 2) + uVar3;
    goto LAB_14337ba85;
  }
  uStackX_11 = (undefined1)((uint)param_2 >> 8);
  plVar1[1] = uVar3;
  *(undefined1 *)(*plVar1 + -1 + uVar3) = uStackX_11;
  plVar1 = (longlong *)*param_1;
  uVar3 = plVar1[1] + 1;
  if (uVar3 < (ulonglong)plVar1[1]) {
    uVar4 = uVar3;
    if (uVar3 < (ulonglong)plVar1[2] >> 1) {
LAB_14337bad1:
      FUN_143333390(plVar1,plVar1,uVar4);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar3) {
    uVar4 = (uVar3 >> 2) + uVar3;
    goto LAB_14337bad1;
  }
  uStackX_12 = (undefined1)((uint)param_2 >> 0x10);
  plVar1[1] = uVar3;
  *(undefined1 *)(*plVar1 + -1 + uVar3) = uStackX_12;
  param_1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  uVar3 = lVar2 + 1;
  if (uVar3 < (ulonglong)param_1[1]) {
    uVar4 = uVar3;
    if ((ulonglong)param_1[2] >> 1 <= uVar3) goto LAB_14337bb28;
  }
  else {
    if (uVar3 <= (ulonglong)param_1[2]) goto LAB_14337bb28;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_143333390(param_1,param_1,uVar4);
LAB_14337bb28:
  uStackX_13 = (undefined1)((uint)param_2 >> 0x18);
  param_1[1] = uVar3;
  *(undefined1 *)(lVar2 + *param_1) = uStackX_13;
  return;
}



// FUNCTION 14337bb50 FUN_14337bb50 body=501 status=ok
// SIG undefined FUN_14337bb50(void)

ulonglong FUN_14337bb50(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  Matrix2x4<float> *this;
  float *extraout_RAX;
  float *extraout_RAX_00;
  ulonglong uVar6;
  longlong lVar7;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [80];
  
  local_88 = 0.0;
  fStack_84 = 0.0;
  fStack_80 = 0.0;
  fStack_7c = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  local_78[3] = 0.0;
  pfVar5 = (float *)register0x00000020;
  if ((*(float *)(param_1 + 0x78) <= *(float *)(param_1 + 0x70)) ||
     (*(float *)(param_1 + 0x7c) <= *(float *)(param_1 + 0x74))) {
    lVar7 = *(longlong *)(param_1 + 0x90);
    if (lVar7 == 0) goto LAB_14337bc7b;
    pfVar5 = (float *)(**(code **)(*(longlong *)(lVar7 + 0x10) + 0x28))(lVar7 + 0x10,local_58);
    fStack_7c = pfVar5[3];
    fStack_80 = pfVar5[2];
    fStack_84 = pfVar5[1];
    local_88 = *pfVar5;
  }
  else {
    local_88 = *(float *)(param_1 + 0x70);
    fStack_84 = *(float *)(param_1 + 0x74);
    fStack_80 = *(float *)(param_1 + 0x78);
    fStack_7c = *(float *)(param_1 + 0x7c);
  }
  if ((local_88 < fStack_80) && (fStack_84 < fStack_7c)) {
    local_68 = CONCAT44(fStack_84,local_88);
    uStack_60 = CONCAT44(fStack_7c,fStack_80);
    FUN_143361900(param_1,&local_88,0);
    if ((*(ushort *)(param_1 + 10) >> 9 & 1) == 0) {
      this = (Matrix2x4<float> *)FUN_1433620e0(param_1);
      Scaleform::Render::Matrix2x4<float>::EncloseTransform
                (this,(Rect<float> *)local_78,(Rect<float> *)&local_88);
      pfVar5 = extraout_RAX;
    }
    else {
      Scaleform::Render::Matrix3x4<float>::EncloseTransform
                ((Matrix3x4<float> *)(param_1 + 0x10),(Rect<float> *)local_78,
                 (Rect<float> *)&local_88);
      pfVar5 = extraout_RAX_00;
    }
  }
LAB_14337bc7b:
  fVar4 = local_78[3];
  fVar3 = local_78[2];
  fVar2 = local_78[1];
  fVar1 = local_78[0];
  if (((((local_88 == *(float *)(param_1 + 0x70)) && (fStack_80 == *(float *)(param_1 + 0x78))) &&
       (fStack_84 == *(float *)(param_1 + 0x74))) &&
      ((fStack_7c == *(float *)(param_1 + 0x7c) && (local_78[0] == local_88)))) &&
     ((local_78[2] == fStack_80 && ((local_78[1] == fStack_84 && (local_78[3] == fStack_7c)))))) {
    uVar6 = (ulonglong)pfVar5 & 0xffffffffffffff00;
  }
  else {
    lVar7 = FUN_1432cd080(param_2,8);
    *(float *)(lVar7 + 0x70) = local_88;
    *(float *)(lVar7 + 0x74) = fStack_84;
    *(float *)(lVar7 + 0x78) = fStack_80;
    *(float *)(lVar7 + 0x7c) = fStack_7c;
    *(float *)(lVar7 + 0x80) = fVar1;
    *(float *)(lVar7 + 0x84) = fVar2;
    *(float *)(lVar7 + 0x88) = fVar3;
    *(float *)(lVar7 + 0x8c) = fVar4;
    FUN_143361f40(lVar7,&local_68);
    uVar6 = (ulonglong)(*(byte *)(param_1 + 10) & 1);
  }
  return uVar6;
}



// FUNCTION 14337bd50 FUN_14337bd50 body=371 status=ok
// SIG undefined FUN_14337bd50(void)

longlong FUN_14337bd50(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      longlong param_5,undefined2 param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar7;
  
  lVar1 = param_5;
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar3 = *(longlong *)(param_5 + 0x28);
  if (lVar3 == 0) {
    lVar3 = FUN_1432cd220(param_5);
    lVar3 = *(longlong *)(lVar3 + 0x90);
    iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x48))(lVar3 + 0x10);
    if (param_3 == 0) {
      uVar5 = 4;
LAB_14337bdc3:
      uVar6 = *(ushort *)(param_1 + 10) & 0xc;
      if ((*(ushort *)(param_1 + 10) & 0xc) == 0) {
        uVar6 = uVar5;
      }
    }
    else {
      uVar5 = *(ushort *)(param_3 + 0x4a) & 0xc;
      uVar6 = uVar5;
      if (uVar5 != 0xc) goto LAB_14337bdc3;
    }
    uVar6 = (*(ushort *)(param_1 + 10) & 0x20) * 2 | *(ushort *)(param_3 + 0x4a) & 0xc0 |
            *(ushort *)(param_1 + 10) & 0x221 | uVar6;
    lVar4 = FUN_143321150(param_1 + 0x40,2);
    if (lVar4 != 0) {
      uVar6 = uVar6 | 0x80;
    }
    if (iVar2 == 1) {
      lVar3 = FUN_14337c4c0(param_2,param_3,lVar3,0,CONCAT44(uVar7,uVar6),lVar1,
                            *(undefined4 *)(param_1 + 0x98));
LAB_14337be73:
      if (lVar3 != 0) {
        *(longlong *)(lVar1 + 0x28) = lVar3;
        goto LAB_14337be83;
      }
    }
    else {
      param_5._0_4_ = 0x47;
      lVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_3,0xa0,&param_5);
      if (lVar3 != 0) {
        lVar3 = Scaleform::Render::TreeCacheShape::TreeCacheShape(lVar3,lVar1,uVar6);
        goto LAB_14337be73;
      }
    }
    lVar3 = 0;
  }
  else {
LAB_14337be83:
    FUN_14334e060(lVar3,param_2,param_3,param_4,param_1,param_6);
  }
  return lVar3;
}



// FUNCTION 14337bed0 FUN_14337bed0 body=136 status=ok
// SIG undefined FUN_14337bed0(void)

void FUN_14337bed0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,0xa0,0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_143364310(puVar1,param_1);
    *puVar1 = &PTR_FUN_145af92d8;
    if (*(RefCountImpl **)(param_1 + 0x90) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x90));
    }
    puVar1[0x12] = *(undefined8 *)(param_1 + 0x90);
    *(undefined4 *)(puVar1 + 0x13) = *(undefined4 *)(param_1 + 0x98);
  }
  FUN_1432ceba0(param_2,puVar1);
  return;
}



// FUNCTION 14337bf60 TreeCacheShape body=71 status=ok
// SIG undefined TreeCacheShape(void)

undefined8 * Scaleform::Render::TreeCacheShape::TreeCacheShape(undefined8 *param_1)

{
  FUN_14334df70();
  param_1[0xe] = param_1 + 0xc;
  param_1[0xf] = param_1 + 0xc;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x80000000;
  *param_1 = &PTR_FUN_145b02f20;
  return param_1;
}



// FUNCTION 14337bfb0 FUN_14337bfb0 body=148 status=ok
// SIG undefined FUN_14337bfb0(void)

void FUN_14337bfb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_145b02f20;
  puVar2 = param_1 + 0xc;
  if (param_1 == (undefined8 *)0xffffffffffffff90) {
    puVar2 = (undefined8 *)0x0;
  }
  while ((undefined8 *)param_1[0xf] != puVar2) {
    puVar1 = (undefined8 *)param_1[0xf];
    *(undefined8 *)(puVar1[2] + 0x18) = puVar1[3];
    *(undefined8 *)(puVar1[3] + 0x10) = puVar1[2];
    puVar1[2] = 0xffffffffffffffff;
    puVar1[3] = 0xffffffffffffffff;
    puVar1[2] = 0;
    puVar1[6] = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143350470(param_1);
  return;
}



// FUNCTION 14337c050 FUN_14337c050 body=236 status=ok
// SIG undefined FUN_14337c050(void)

void FUN_14337c050(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ushort uVar6;
  
  if ((param_3 & 0x20) == 0) goto LAB_14337c0b4;
  lVar2 = param_1[6];
  lVar1 = FUN_1432cd220(param_1[5]);
  if (lVar2 == 0) {
    uVar3 = 4;
LAB_14337c09b:
    uVar6 = *(ushort *)(lVar1 + 10) & 0xc;
    if ((*(ushort *)(lVar1 + 10) & 0xc) == 0) {
      uVar6 = uVar3;
    }
  }
  else {
    uVar3 = *(ushort *)(lVar2 + 0x4a) & 0xc;
    if (uVar3 != 0xc) goto LAB_14337c09b;
    uVar6 = 0xc;
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2,uVar6);
LAB_14337c0b4:
  if (((param_3 & 0x10) != 0) && (param_1[4] != 0)) {
    FUN_143351bd0(param_1[4],param_1,1);
    plVar4 = (longlong *)param_1[0xf];
    plVar5 = param_1 + 0xc;
    if (param_1 == (longlong *)0xffffffffffffff90) {
      plVar5 = (longlong *)0x0;
    }
    for (; plVar4 != plVar5; plVar4 = (longlong *)plVar4[3]) {
      lVar2 = plVar4[5];
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(plVar4[6] + 0x28);
      }
      lVar2 = FUN_1432cd220(lVar2);
      if (*(char *)(*(longlong *)(lVar2 + 0x90) + 0x80) != '\0') {
        FUN_14337c9c0(plVar4,param_2);
      }
    }
  }
  return;
}



// FUNCTION 14337c150 FUN_14337c150 body=295 status=ok
// SIG undefined FUN_14337c150(void)

void FUN_14337c150(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar9;
  ulonglong in_stack_ffffffffffffffb8;
  undefined4 uVar10;
  ulonglong uVar8;
  
  FUN_14334e1f0();
  lVar2 = *(longlong *)(param_3 + 0x90);
  uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x48))(lVar2 + 0x10);
  uVar8 = 0;
  uVar5 = param_1 + 0x60;
  if (param_1 == -0x70) {
    uVar5 = uVar8;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x78);
  if (*(ulonglong *)(param_1 + 0x78) == uVar5) {
    lVar9 = *(longlong *)(uVar6 + 0x10);
    if (uVar3 != 0) {
      do {
        uVar10 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
        uVar1 = *(ushort *)(param_1 + 0x4a);
        lVar4 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
        in_stack_ffffffffffffffb8 = CONCAT44(uVar10,(uint)uVar1) & 0xffffffff0000000c | 1;
        lVar4 = FUN_14337c4c0(param_2,param_1,lVar2,uVar8,in_stack_ffffffffffffffb8,0,
                              *(undefined4 *)(lVar4 + 0x98));
        if (lVar4 != 0) {
          in_stack_ffffffffffffffb8 = 0;
          FUN_14334e060(lVar4,param_2,param_1,lVar9,0,param_4);
          lVar9 = lVar4;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar3);
    }
  }
  else {
    uVar5 = param_1 + 0x60;
    if (param_1 == -0x70) {
      uVar5 = uVar8;
    }
    for (; uVar6 != uVar5; uVar6 = *(ulonglong *)(uVar6 + 0x18)) {
      *(undefined2 *)(uVar6 + 0x48) = param_4;
      *(undefined8 *)(uVar6 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
  }
  return;
}



// FUNCTION 14337c280 FUN_14337c280 body=376 status=ok
// SIG undefined FUN_14337c280(void)

void FUN_14337c280(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
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
  undefined1 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_f8 = *param_4;
  uStack_f0 = param_4[1];
  local_b8 = param_4[8];
  local_28 = param_4[0x1a];
  uStack_20 = param_4[0x1b];
  local_b0 = param_4[9];
  local_68 = *(undefined1 *)(param_4 + 0x12);
  local_58 = param_4[0x14];
  uStack_50 = param_4[0x15];
  local_98 = param_4[0xc];
  uStack_90 = param_4[0xd];
  local_48 = param_4[0x16];
  uStack_40 = param_4[0x17];
  local_38 = param_4[0x18];
  uStack_30 = param_4[0x19];
  local_a8 = param_4[10];
  uStack_a0 = param_4[0xb];
  local_78 = *(undefined4 *)(param_4 + 0x10);
  uStack_74 = *(undefined4 *)((longlong)param_4 + 0x84);
  uStack_70 = *(undefined4 *)(param_4 + 0x11);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0x8c);
  local_88 = *(undefined4 *)(param_4 + 0xe);
  uStack_84 = *(undefined4 *)((longlong)param_4 + 0x74);
  uStack_80 = *(undefined4 *)(param_4 + 0xf);
  uStack_7c = *(undefined4 *)((longlong)param_4 + 0x7c);
  if ((char)param_5 < '\0') {
    local_e8 = param_4[2];
    uStack_e0 = param_4[3];
    local_d8 = *(undefined4 *)(param_4 + 4);
    uStack_d4 = *(undefined4 *)((longlong)param_4 + 0x24);
    uStack_d0 = *(undefined4 *)(param_4 + 5);
    uStack_cc = *(undefined4 *)((longlong)param_4 + 0x2c);
    local_c8 = *(undefined4 *)(param_4 + 6);
    uStack_c4 = *(undefined4 *)((longlong)param_4 + 0x34);
    uStack_c0 = *(undefined4 *)(param_4 + 7);
    uStack_bc = *(undefined4 *)((longlong)param_4 + 0x3c);
  }
  uVar4 = param_5 | 0x20;
  puVar7 = &local_f8;
  FUN_14334e6d0();
  uVar1 = *(undefined4 *)(param_3 + 0x8c);
  uVar2 = *(undefined4 *)(param_3 + 0x88);
  uVar3 = *(undefined4 *)(param_3 + 0x84);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_3 + 0x80);
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xfbff;
  lVar5 = *(longlong *)(param_1 + 0x78);
  lVar6 = param_1 + 0x60;
  if (param_1 == -0x70) {
    lVar6 = 0;
  }
  for (; lVar5 != lVar6; lVar5 = *(longlong *)(lVar5 + 0x18)) {
    puVar7 = (undefined8 *)(CONCAT44((int)((ulonglong)puVar7 >> 0x20),param_5) & 0xffffffffffffffef)
    ;
    FUN_14337cd90(lVar5,param_2,param_3,&local_f8,puVar7,uVar4);
  }
  return;
}



// FUNCTION 14337c400 FUN_14337c400 body=101 status=ok
// SIG undefined FUN_14337c400(void)

undefined8 *
FUN_14337c400(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_143352910();
  *param_1 = &PTR_FUN_145b02f88;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  iVar1 = *(int *)(*param_3 + 8);
  *(undefined4 *)((longlong)param_1 + 0xd4) = param_4;
  *(bool *)(param_1 + 0x1a) = iVar1 == 2;
  return param_1;
}



// FUNCTION 14337c470 FUN_14337c470 body=67 status=ok
// SIG undefined FUN_14337c470(void)

void FUN_14337c470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b02f88;
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if (param_1[0x18] != 0) {
    FUN_143325070();
  }
  FUN_1433529e0(param_1);
  return;
}



// FUNCTION 14337c4c0 FUN_14337c4c0 body=327 status=ok
// SIG undefined FUN_14337c4c0(void)

undefined8 *
FUN_14337c4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_28 [2];
  longlong *local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_20 = (longlong *)0x0;
  FUN_14337c610(&local_18,param_1,param_2,param_3,param_4,param_5,&local_20,param_7);
  local_28[0] = 0x47;
  puVar2 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,0xe0,local_28);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_143352910(puVar2,param_6,&local_18,param_5);
    *puVar2 = &PTR_FUN_145b02f88;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    lVar1 = local_18[1];
    *(undefined4 *)((longlong)puVar2 + 0xd4) = param_4;
    *(bool *)(puVar2 + 0x1a) = (int)lVar1 == 2;
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 8))(local_20);
    }
    if ((longlong *)puVar2[0x19] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar2[0x19] + 0x10))();
    }
    puVar2[0x19] = local_20;
  }
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x10))();
  }
  return puVar2;
}



// FUNCTION 14337c610 FUN_14337c610 body=370 status=ok
// SIG undefined FUN_14337c610(void)

undefined8
FUN_14337c610(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined4 param_5,uint param_6,undefined8 param_7,undefined4 param_8)

{
  undefined2 *puVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  RefCountNTSImpl *this;
  byte bVar7;
  byte bVar8;
  undefined1 local_38 [32];
  
  this = (RefCountNTSImpl *)0x0;
  bVar8 = ((byte)param_6 & 0xc) == 4;
  if ((param_6 & 0x40) != 0) {
    bVar8 = 2;
  }
  bVar3 = bVar8 | 8;
  if ((param_6 & 0x80) == 0) {
    bVar3 = bVar8;
  }
  bVar8 = (byte)(param_6 >> 9) & 1;
  do {
    puVar1 = (undefined2 *)(param_3 + 0x4a);
    param_3 = *(longlong *)(param_3 + 0x30);
    bVar7 = bVar8 | (byte)((ushort)*puVar1 >> 9) & 1;
    if (param_3 == 0) break;
    bVar8 = 0;
  } while (bVar7 == 0);
  plVar2 = (longlong *)(param_4 + 0x10);
  uVar4 = (**(code **)(*(longlong *)(param_4 + 0x10) + 0x50))(plVar2,param_5,bVar3);
  if (uVar4 < 2) {
    if (param_2 != (longlong *)0x0) {
      uVar5 = (**(code **)(*param_2 + 0x128))(param_2);
      uVar6 = (**(code **)(*param_2 + 0xd8))(param_2);
      FUN_1432d1f70(local_38,3);
      (**(code **)(*plVar2 + 0x58))(plVar2,local_38,param_5,0,bVar3);
      this = (RefCountNTSImpl *)FUN_1432d2240(uVar6,local_38,param_7,uVar5,param_8);
    }
    FUN_1433d97a0(param_1,this,bVar7);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  else {
    FUN_1433d9800(param_1,plVar2,bVar7);
  }
  return param_1;
}



// FUNCTION 14337c790 FUN_14337c790 body=553 status=ok
// SIG undefined FUN_14337c790(void)

void FUN_14337c790(longlong param_1,undefined8 param_2,longlong param_3,float *param_4,
                  Matrix4x4<float> *param_5)

{
  longlong lVar1;
  Matrix3x4<float> *pMVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_88 [32];
  Matrix4x4<float> local_68 [96];
  
  plVar3 = (longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_b8);
  lVar1 = FUN_1432d8640(param_2);
  pMVar2 = (Matrix3x4<float> *)FUN_1432c08b0(param_1 + 0xb0);
  Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(local_68,param_5,pMVar2);
  FUN_1432cd220(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28));
  FUN_1432bf230(local_68,&local_b8);
  local_a8 = local_b8;
  local_a0 = local_b0;
  local_98 = local_b0;
  local_94 = local_ac;
  local_a4 = local_b4;
  local_9c = local_b4;
  FUN_143326520(param_4,&local_a8,local_88);
  if (ABS(*param_4 * param_4[5] - param_4[1] * param_4[4]) < *(float *)(lVar1 + 0x40)) {
    fVar5 = param_4[1] * 0.70710677 + *param_4 * 0.70710677;
    fVar4 = param_4[4] * 0.70710677 + param_4[5] * 0.70710677;
    fVar4 = _guard_xfg_dispatch_icall_nop(fVar4 * fVar4 + fVar5 * fVar5);
    *param_4 = fVar4;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
    param_4[3] = 0.0;
    param_4[4] = 0.0;
    param_4[5] = fVar4;
    param_4[6] = 0.0;
    param_4[7] = 0.0;
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_3 + 0x90) + 0x28) + 0xc +
              (ulonglong)*(uint *)(param_1 + 0xd4) * 0x14) != 0) {
    fVar5 = param_4[1] * 0.70710677 + *param_4 * 0.70710677;
    fVar4 = param_4[4] * 0.70710677 + param_4[5] * 0.70710677;
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar4 * fVar4 + fVar5 * fVar5);
    fVar4 = *(float *)(lVar1 + 0x44);
    param_4[1] = 0.0;
    param_4[2] = 0.0;
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    *param_4 = fVar4;
    param_4[3] = 0.0;
    param_4[4] = 0.0;
    param_4[5] = fVar4;
    param_4[6] = 0.0;
    param_4[7] = 0.0;
  }
  return;
}



// FUNCTION 14337c9c0 FUN_14337c9c0 body=420 status=ok
// SIG undefined FUN_14337c9c0(void)

void FUN_14337c9c0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  RefCountNTSImpl *this;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x98) + 8);
      *piVar1 = *piVar1 + 1;
    }
    this = *(RefCountNTSImpl **)(param_1 + 0x98);
    Scaleform::Render::Bundle::RemoveEntry(this,param_1 + 0x70);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x98) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x98));
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0x82) = 0;
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
  }
  lVar5 = FUN_1432cd220(lVar6);
  lVar6 = *(longlong *)(param_1 + 0x28);
  uVar3 = *(undefined2 *)(param_1 + 0x4a);
  uVar4 = *(undefined4 *)(param_1 + 0xd4);
  uVar2 = *(undefined4 *)(lVar5 + 0x98);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
  }
  lVar6 = FUN_1432cd220(lVar6);
  puVar7 = (undefined8 *)
           FUN_14337c610(&local_28,param_2,param_1,*(undefined8 *)(lVar6 + 0x90),uVar4,uVar3,
                         param_1 + 200,uVar2);
  (**(code **)(*(longlong *)*puVar7 + 8))((longlong *)*puVar7,puVar7[1]);
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
            (*(longlong **)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x88) = *puVar7;
  *(undefined8 *)(param_1 + 0x90) = puVar7[1];
  (**(code **)(*local_28 + 0x10))(local_28,local_20);
  *(bool *)(param_1 + 0xd0) = *(int *)(*(longlong *)(param_1 + 0x88) + 8) == 2;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_143325070();
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_143351c00(*(longlong *)(param_1 + 0x20),*(longlong *)(param_1 + 0x30),0x1000001);
  }
  return;
}



// FUNCTION 14337cb70 FUN_14337cb70 body=76 status=ok
// SIG undefined FUN_14337cb70(void)

void FUN_14337cb70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
  }
  lVar1 = FUN_1432cd220(lVar1);
  if (*(char *)(*(longlong *)(lVar1 + 0x90) + 0x80) != '\0') {
    FUN_14337c9c0(param_1,param_2);
  }
  return;
}



// FUNCTION 14337cbf0 FUN_14337cbf0 body=199 status=ok
// SIG undefined FUN_14337cbf0(void)

void FUN_14337cbf0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  
  if ((param_3 & 0x20) == 0) goto LAB_14337cc59;
  lVar2 = param_1[6];
  lVar1 = FUN_1432cd220(param_1[5]);
  if (lVar2 == 0) {
    uVar3 = 4;
LAB_14337cc3b:
    uVar4 = *(ushort *)(lVar1 + 10) & 0xc;
    if ((*(ushort *)(lVar1 + 10) & 0xc) == 0) {
      uVar4 = uVar3;
    }
  }
  else {
    uVar3 = *(ushort *)(lVar2 + 0x4a) & 0xc;
    if (uVar3 != 0xc) goto LAB_14337cc3b;
    uVar4 = 0xc;
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2,uVar4);
LAB_14337cc59:
  if (((param_3 & 0x10) != 0) && (param_1[4] != 0)) {
    FUN_143351bd0(param_1[4],param_1,1);
    lVar2 = param_1[5];
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(param_1[6] + 0x28);
    }
    lVar2 = FUN_1432cd220(lVar2);
    if (*(char *)(*(longlong *)(lVar2 + 0x90) + 0x80) != '\0') {
      FUN_14337c9c0(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 14337ccc0 FUN_14337ccc0 body=197 status=ok
// SIG undefined FUN_14337ccc0(void)

void FUN_14337ccc0(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong lVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x30) + 0x4a) & 0xc0 |
          (*(ushort *)(param_1 + 0x4a) & 0x20) * 2 | *(ushort *)(param_1 + 0x4a) & 0xffbf;
  if (param_3 != 0) {
    lVar1 = FUN_143321150(param_3 + 0x40,2);
    if (lVar1 != 0) {
      uVar2 = uVar2 | 0x80;
    }
    if ((*(ushort *)(param_3 + 10) >> 9 & 1) != 0) {
      uVar2 = uVar2 | 0x200;
    }
  }
  if (uVar2 != *(ushort *)(param_1 + 0x4a)) {
    *(ushort *)(param_1 + 0x4a) = uVar2;
    FUN_14337c9c0(param_1,param_2);
  }
  if (param_3 != 0) {
    FUN_14334e380(param_1,param_2,param_3,param_4,1);
  }
  return;
}



// FUNCTION 14337cd90 FUN_14337cd90 body=746 status=ok
// SIG undefined FUN_14337cd90(void)

void FUN_14337cd90(longlong *param_1,longlong *param_2,longlong param_3,undefined4 *param_4,
                  uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  ushort uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  
  uVar10 = param_5;
  local_a8 = *param_4;
  uStack_a4 = param_4[1];
  uStack_a0 = param_4[2];
  uStack_9c = param_4[3];
  FUN_14334e6d0(local_a8,param_2,param_3,param_4,&local_a8,param_5 | 0x20);
  uVar1 = *(undefined4 *)(param_3 + 0x8c);
  uVar2 = *(undefined4 *)(param_3 + 0x88);
  uVar3 = *(undefined4 *)(param_3 + 0x84);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0x80);
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar1;
  *(ushort *)((longlong)param_1 + 0x4a) = *(ushort *)((longlong)param_1 + 0x4a) & 0xfbff;
  lVar6 = *param_1;
  uVar11 = (**(code **)(*param_2 + 0x100))(param_2);
  (**(code **)(lVar6 + 0x68))(param_1,param_4,uVar11,uVar10);
  if (((uVar10 & 1) != 0) && (param_1[0x18] != 0)) {
    uVar12 = 0;
    bVar8 = false;
    param_5 = 0;
    if (((char)uVar10 < '\0') && (param_1[4] != 0)) {
      uVar11 = FUN_1433535a0(param_4);
      FUN_14337c790(param_1,param_2,param_3,&local_98,uVar11);
    }
    else {
      local_98 = *(undefined8 *)(param_4 + 0x28);
      uStack_90 = *(undefined8 *)(param_4 + 0x2a);
      local_88 = param_4[0x2c];
      uStack_84 = param_4[0x2d];
      uStack_80 = param_4[0x2e];
      uStack_7c = param_4[0x2f];
    }
    uVar5 = *(ushort *)((longlong)param_1 + 0x4a);
    if ((uVar5 & 0x40) == 0) {
      if (((byte)uVar5 & 0xc) == 4) {
        uVar12 = 1;
      }
    }
    else {
      uVar12 = 2;
    }
    uVar10 = uVar12 | 8;
    if ((uVar5 & 0x80) == 0) {
      uVar10 = uVar12;
    }
    cVar9 = FUN_14337d950(param_1,param_2,*(undefined8 *)(param_3 + 0x90),
                          *(undefined4 *)(param_3 + 0x98),&local_98,uVar10,&param_5);
    uVar10 = param_5;
    if ((cVar9 != '\0') &&
       ((bVar8 = true, *(float *)(param_3 + 0x98) != 0.0 || ((param_5 & 0x10) != 0)))) {
      FUN_14337dc60(param_1,param_2);
    }
    if (((*(byte *)(*(longlong *)param_1[0x16] + 0xf) & 0x10) == 0) && (((byte)uVar10 & 7) == 3)) {
      local_78 = param_4[0x28];
      local_74 = param_4[0x29];
      local_70 = param_4[0x2a];
      local_68 = param_4[0x2c];
      fVar4 = (float)param_4[0x2f];
      local_64 = param_4[0x2d];
      local_60 = param_4[0x2e];
      fVar14 = -0.5;
      if (0.0 <= (float)param_4[0x2b]) {
        fVar13 = 0.5;
      }
      else {
        fVar13 = -0.5;
      }
      local_6c = _guard_xfg_dispatch_icall_nop((float)param_4[0x2b] + fVar13);
      if (0.0 <= fVar4) {
        fVar14 = 0.5;
      }
      local_5c = _guard_xfg_dispatch_icall_nop(fVar4 + fVar14);
      FUN_1432c0490(param_1 + 0x16,&local_78);
    }
    plVar7 = (longlong *)param_1[0x13];
    if ((plVar7 != (longlong *)0x0) && (bVar8)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,param_2,param_1 + 0xe);
    }
  }
  return;
}



// FUNCTION 14337d0b0 FUN_14337d0b0 body=108 status=ok
// SIG undefined FUN_14337d0b0(void)

void FUN_14337d0b0(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar1 = FUN_1432cd220();
    lVar1 = FUN_143321150(lVar1 + 0x40,2);
    if (lVar1 != 0) {
      param_3 = param_3 | 0x80;
    }
  }
  param_3 = *(ushort *)(param_1 + 0x4a) & 0xffffff7f | param_3;
  if (param_3 != *(ushort *)(param_1 + 0x4a)) {
    *(short *)(param_1 + 0x4a) = (short)param_3;
    FUN_14337c9c0(param_1,param_2);
  }
  return;
}



// FUNCTION 14337d130 FUN_14337d130 body=112 status=ok
// SIG undefined FUN_14337d130(void)

void FUN_14337d130(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if (((*(longlong *)(param_1 + 0x28) != 0) && (lVar1 = FUN_1432cd220(), param_3 != 0xc)) &&
     (uVar2 = *(ushort *)(lVar1 + 10) & 0xc, (*(ushort *)(lVar1 + 10) & 0xc) == 0)) {
    uVar2 = param_3;
  }
  if ((*(ushort *)(param_1 + 0x4a) & 0xc) != uVar2) {
    *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xfff3 | (ushort)uVar2;
    FUN_14337c9c0(param_1,param_2);
  }
  return;
}



// FUNCTION 14337d1c0 FUN_14337d1c0 body=642 status=ok
// SIG undefined FUN_14337d1c0(void)

undefined8 FUN_14337d1c0(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar9;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uVar8;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     ((*(longlong *)(param_1 + 0xc0) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x20) == 0)))) {
    uVar1 = *(ushort *)(param_1 + 0x4a);
    if ((uVar1 & 0x40) == 0) {
      uVar6 = 0;
      if (((byte)uVar1 & 0xc) == 4) {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 2;
    }
    lVar5 = **(longlong **)(param_1 + 0xb0);
    uVar2 = uVar6 | 8;
    if ((uVar1 & 0x80) == 0) {
      uVar2 = uVar6;
    }
    if ((*(byte *)(lVar5 + 0xf) & 0x10) == 0) {
      lVar4 = (ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar5 + 0xf) & 0xf) * 5] + 1;
      local_78 = *(undefined4 *)(lVar5 + lVar4 * 0x10);
      local_74 = *(undefined4 *)(lVar5 + 4 + lVar4 * 0x10);
      local_70 = *(undefined4 *)(lVar5 + 8 + lVar4 * 0x10);
      local_6c = *(undefined4 *)(lVar5 + 0xc + lVar4 * 0x10);
      local_68 = *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x10);
      local_64 = *(undefined4 *)(lVar5 + 0x14 + lVar4 * 0x10);
      local_60 = *(undefined4 *)(lVar5 + 0x18 + lVar4 * 0x10);
      local_5c = *(undefined4 *)(lVar5 + 0x1c + lVar4 * 0x10);
    }
    else {
      FUN_143350290(param_1,&local_58);
      lVar5 = *(longlong *)(param_1 + 0x28);
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
      }
      uVar3 = FUN_1432cd220(lVar5);
      FUN_14337c790(param_1,param_2,uVar3,&local_78,&local_58);
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
    }
    lVar4 = FUN_1432cd220(lVar5);
    lVar5 = *(longlong *)(param_1 + 0x28);
    uVar8 = *(undefined4 *)(lVar4 + 0x98);
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
    }
    lVar5 = FUN_1432cd220(lVar5);
    puVar7 = &local_78;
    uVar9 = 0;
    FUN_14337d950(param_1,param_2,*(undefined8 *)(lVar5 + 0x90),uVar8,puVar7,uVar2,0);
    uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
    if (((*(char *)(param_1 + 0xd0) == '\0') && (*(longlong *)(param_1 + 0x98) != 0)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x58) + 0x20) != 0)) {
      local_58 = 0x3f800000;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      local_48 = 0;
      uStack_44 = 0x3f800000;
      uStack_40 = 0;
      uStack_3c = 0;
      lVar5 = FUN_14337e030(param_1);
      (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x60))
                (lVar5 + 0x10,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x20),
                 &local_58,CONCAT44(uVar8,*(undefined4 *)(param_1 + 0xd4)),0,CONCAT44(uVar9,uVar2));
      FUN_1432c0630(param_1 + 0xb0,&local_58,0);
    }
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x20);
}



// FUNCTION 14337d450 FUN_14337d450 body=43 status=ok
// SIG undefined FUN_14337d450(void)

void FUN_14337d450(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_143325070();
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  return;
}



// FUNCTION 14337d490 FUN_14337d490 body=371 status=ok
// SIG undefined FUN_14337d490(void)

void FUN_14337d490(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_18;
  longlong local_10;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
  }
  lVar2 = FUN_1432cd220(lVar3);
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(lVar2 + 0x90);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
  }
  lVar3 = FUN_1432cd220(lVar3);
  FUN_14337c610(&local_18,param_2,param_1,uVar1,*(undefined4 *)(param_1 + 0xd4),
                *(undefined2 *)(param_1 + 0x4a),param_1 + 200,*(undefined4 *)(lVar3 + 0x98));
  if ((local_18 == *(longlong **)(param_1 + 0x88)) && (local_10 == *(longlong *)(param_1 + 0x90))) {
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      FUN_14337dc60(param_1,param_2);
    }
  }
  else {
    FUN_14337dfb0(param_1 + 0x70);
    (**(code **)(*local_18 + 8))(local_18,local_10);
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
              (*(longlong **)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
    *(longlong **)(param_1 + 0x88) = local_18;
    *(longlong *)(param_1 + 0x90) = local_10;
    *(bool *)(param_1 + 0xd0) = *(int *)(*(longlong *)(param_1 + 0x88) + 8) == 2;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      FUN_143325070();
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
    if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      FUN_143351bd0(*(longlong *)(param_1 + 0x20),*(longlong *)(param_1 + 0x30),0x1000401);
    }
  }
  (**(code **)(*local_18 + 0x10))(local_18,local_10);
  return;
}



// FUNCTION 14337d610 FUN_14337d610 body=813 status=ok
// SIG undefined FUN_14337d610(void)

uint FUN_14337d610(longlong param_1,longlong param_2,undefined4 *param_3,uint param_4,
                  longlong param_5,longlong param_6,undefined4 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  Matrix2x4<float> *pMVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  RefCountImpl *local_48;
  
  uVar13 = 1;
  if ((*(byte *)(param_1 + 0x4a) & 0x80) != 0) {
    lVar12 = param_1;
    if (*(longlong *)(param_1 + 0x28) == 0) {
      lVar12 = *(longlong *)(param_1 + 0x30);
    }
    local_68 = 0x3f800000;
    uStack_60 = 0;
    local_58 = 0x3f80000000000000;
    uStack_50 = (RefCountImpl *)0x0;
    while (lVar2 = lVar12, lVar2 != 0) {
      lVar12 = 0;
      lVar7 = FUN_1432cd220(*(undefined8 *)(lVar2 + 0x28));
      lVar8 = FUN_143321150(lVar7 + 0x40,8);
      lVar9 = lVar12;
      if (lVar8 != 0) {
        lVar9 = *(longlong *)(lVar8 + 8);
      }
      if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x28) != 0xbad)) {
        lVar12 = *(longlong *)(lVar9 + 0x28);
      }
      lVar9 = FUN_143321150(lVar7 + 0x40,2);
      if (lVar9 != 0) {
        uVar1 = *(undefined8 *)(*(longlong *)(lVar9 + 8) + 0x18);
        *(undefined8 *)(param_6 + 0x10) = *(undefined8 *)(*(longlong *)(lVar9 + 8) + 0x10);
        *(undefined8 *)(param_6 + 0x18) = uVar1;
        uVar14 = *(undefined4 *)(lVar7 + 0x70);
        uVar16 = *(undefined4 *)(lVar7 + 0x7c);
        uVar15 = *(undefined4 *)(lVar7 + 0x78);
        *(undefined4 *)(param_6 + 0x24) = *(undefined4 *)(lVar7 + 0x74);
        *(undefined4 *)(param_6 + 0x28) = uVar15;
        *(undefined4 *)(param_6 + 0x2c) = uVar16;
        *(undefined4 *)(param_6 + 0x20) = uVar14;
        *(undefined8 *)(param_6 + 0x30) = local_68;
        *(ulonglong *)(param_6 + 0x38) = uStack_60;
        *(undefined4 *)(param_6 + 0x40) = (undefined4)local_58;
        *(undefined4 *)(param_6 + 0x44) = local_58._4_4_;
        *(undefined4 *)(param_6 + 0x48) = (undefined4)uStack_50;
        *(undefined4 *)(param_6 + 0x4c) = uStack_50._4_4_;
        puVar11 = (undefined4 *)FUN_1433620e0(lVar7);
        *(undefined4 *)(param_6 + 0x50) = *puVar11;
        *(undefined4 *)(param_6 + 0x54) = puVar11[1];
        *(undefined4 *)(param_6 + 0x58) = puVar11[2];
        *(undefined4 *)(param_6 + 0x5c) = puVar11[3];
        *(undefined4 *)(param_6 + 0x60) = puVar11[4];
        *(undefined4 *)(param_6 + 100) = puVar11[5];
        *(undefined4 *)(param_6 + 0x68) = puVar11[6];
        *(undefined4 *)(param_6 + 0x6c) = puVar11[7];
        *(undefined4 *)(param_6 + 0x70) = *param_3;
        *(undefined4 *)(param_6 + 0x74) = param_3[1];
        *(undefined4 *)(param_6 + 0x78) = param_3[2];
        *(undefined4 *)(param_6 + 0x7c) = param_3[3];
        *(undefined4 *)(param_6 + 0x80) = param_3[4];
        *(undefined4 *)(param_6 + 0x84) = param_3[5];
        *(undefined4 *)(param_6 + 0x88) = param_3[6];
        *(undefined4 *)(param_6 + 0x8c) = param_3[7];
        lVar12 = FUN_143321150(lVar7 + 0x40,10);
        if (lVar12 == 0) {
          uVar16 = *(undefined4 *)(lVar7 + 0x7c);
          uVar15 = *(undefined4 *)(lVar7 + 0x78);
          uVar14 = *(undefined4 *)(lVar7 + 0x74);
          uVar4 = *(undefined4 *)(lVar7 + 0x70);
        }
        else {
          puVar11 = (undefined4 *)(*(longlong *)(lVar12 + 8) + 0x10);
          if (*(longlong *)(lVar12 + 8) == 0) {
            puVar11 = (undefined4 *)0x0;
          }
          uVar16 = puVar11[3];
          uVar15 = puVar11[2];
          uVar14 = puVar11[1];
          uVar4 = *puVar11;
        }
        uVar13 = 0x11;
        *(undefined4 *)(param_6 + 0x2c) = uVar16;
        *(undefined4 *)(param_6 + 0x28) = uVar15;
        *(undefined4 *)(param_6 + 0x24) = uVar14;
        *(undefined4 *)(param_6 + 0x20) = uVar4;
        break;
      }
      pMVar10 = (Matrix2x4<float> *)FUN_1433620e0(lVar7);
      Scaleform::Render::Matrix2x4<float>::Append((Matrix2x4<float> *)&local_68,pMVar10);
      if (lVar12 == 0) {
        lVar12 = *(longlong *)(lVar2 + 0x30);
      }
    }
  }
  cVar3 = '\x01';
  if ((uVar13 & 0x10) == 0) {
    cVar3 = FUN_143324990(param_3,param_5,0);
    iVar6 = *(int *)(*(longlong *)(param_2 + 0x28) + 0xc + (ulonglong)param_4 * 0x14);
    if (iVar6 != 0) {
      uStack_50 = (RefCountImpl *)0x0;
      local_48 = (RefCountImpl *)0x0;
      FUN_143371ff0(param_2,iVar6,&local_68,0);
      uVar5 = ((uint)uStack_60 & 1) + 2;
      uVar13 = uVar5 | 0x20;
      if ((uStack_60 & 6) != 0) {
        uVar13 = uVar5;
      }
      if (local_48 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_48);
      }
      if (uStack_50 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(uStack_50);
      }
    }
  }
  else {
    FUN_1433d3370(param_6);
  }
  lVar12 = *(longlong *)(param_1 + 0x28);
  uVar5 = uVar13 | 0x8000;
  if (cVar3 != '\0') {
    uVar5 = uVar13;
  }
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
  }
  lVar12 = FUN_1432cd220(lVar12);
  uVar13 = uVar5 | 0x100;
  if (*(char *)(*(longlong *)(lVar12 + 0x90) + 0x80) == '\0') {
    uVar13 = uVar5;
  }
  iVar6 = FUN_143324970(uVar13);
  *(undefined4 *)(param_5 + (ulonglong)(iVar6 - 1) * 4) = param_7;
  return uVar13;
}



// FUNCTION 14337d950 FUN_14337d950 body=774 status=ok
// SIG undefined FUN_14337d950(void)

undefined8
FUN_14337d950(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,uint param_6,uint *param_7)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  RefCountImpl *this;
  uint uVar8;
  uint uVar9;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_138 [4];
  undefined **local_128;
  undefined8 local_120;
  undefined1 local_98 [96];
  
  uVar4 = FUN_1432d8640(param_2);
  uVar1 = *(undefined4 *)(param_1 + 0xd4);
  uVar8 = (param_6 & 1) << 6;
  local_128 = &PTR_FUN_145b02f18;
  local_120 = 1;
  uVar3 = FUN_14337d610(param_1,param_3,param_5,uVar1,local_98,&local_128,param_4);
  uVar9 = uVar8 | 0x80;
  if ((param_6 & 2) == 0) {
    uVar9 = uVar8;
  }
  uVar9 = uVar3 | uVar9;
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar9;
  }
  uVar5 = (**(code **)(*param_2 + 0xe8))(param_2);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    puVar10 = local_98;
    lVar6 = FUN_143325c50(uVar5,param_3,uVar1,uVar9,puVar10,uVar4);
    uVar11 = (undefined4)((ulonglong)puVar10 >> 0x20);
    uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
LAB_14337daa9:
    if (lVar6 != 0) {
      if (*(longlong *)(lVar6 + 0x20) == 0) {
        if (*(char *)(param_1 + 0xd0) == '\0') {
          local_res10[0] = 0x44;
          lVar7 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0xe0,local_res10);
          if (lVar7 == 0) goto LAB_14337db8f;
          lVar7 = Scaleform::Render::Mesh::Mesh
                            (lVar7,*(undefined8 *)(lVar6 + 0x18),param_5,param_4,
                             CONCAT44(uVar11,uVar1),CONCAT44(uVar12,param_6));
        }
        else {
          local_res8[0] = 0x44;
          lVar7 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x130,local_res8);
          if (lVar7 == 0) {
LAB_14337db8f:
            lVar7 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(lVar6 + 0x18);
            uVar5 = (**(code **)(*param_2 + 0xd8))(param_2);
            lVar7 = FUN_1432d3390(lVar7,uVar4,uVar5,param_5,CONCAT44(uVar11,param_4),
                                  CONCAT44(uVar12,uVar1),param_6);
          }
        }
        this = (RefCountImpl *)0x0;
        if (*(RefCountImpl **)(lVar6 + 0x20) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar6 + 0x20));
        }
        *(longlong *)(lVar6 + 0x20) = lVar7;
        if (lVar7 == 0) {
          FUN_143325070(lVar6);
          goto LAB_14337dbb1;
        }
        if ((uVar3 & 0x10) != 0) {
          local_138[0] = 2;
          lVar7 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x90,local_138);
          if (lVar7 != 0) {
            this = (RefCountImpl *)FUN_14337dd50(lVar7,&local_128);
          }
          Scaleform::Render::MeshBase::SetScale9Grid(*(undefined8 *)(lVar6 + 0x20),this);
          if (this != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(this);
          }
        }
      }
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        FUN_143325070();
      }
      *(longlong *)(param_1 + 0xc0) = lVar6;
      uVar4 = 1;
      goto LAB_14337dc26;
    }
  }
  else {
    cVar2 = FUN_143324da0(*(longlong *)(param_1 + 0xc0),uVar1,uVar9,local_98,uVar4);
    if (cVar2 == '\0') {
      puVar10 = local_98;
      lVar6 = FUN_143325d80(uVar5,*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x18),uVar1,uVar9,
                            puVar10,uVar4);
      uVar11 = (undefined4)((ulonglong)puVar10 >> 0x20);
      uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
      goto LAB_14337daa9;
    }
  }
LAB_14337dbb1:
  uVar4 = 0;
LAB_14337dc26:
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)&local_128);
  return uVar4;
}



// FUNCTION 14337dc60 FUN_14337dc60 body=227 status=ok
// SIG undefined FUN_14337dc60(void)

void FUN_14337dc60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (((*(char *)(param_1 + 0xd0) == '\0') && (*(longlong *)(param_1 + 0x98) != 0)) &&
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x58) + 0x20) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    local_28 = 0x3f800000;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    local_18 = 0;
    uStack_14 = 0x3f800000;
    uStack_10 = 0;
    uStack_c = 0;
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
    }
    lVar3 = FUN_1432cd220(lVar3);
    lVar3 = *(longlong *)(lVar3 + 0x90);
    lVar1 = *(longlong *)(lVar3 + 0x10);
    uVar2 = FUN_14337e0a0(param_1);
    (**(code **)(lVar1 + 0x60))
              (lVar3 + 0x10,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x20),&local_28,
               *(undefined4 *)(param_1 + 0xd4),0,uVar2);
    FUN_1432c0630(param_1 + 0xb0,&local_28,0);
  }
  return;
}



// FUNCTION 14337dd50 FUN_14337dd50 body=271 status=ok
// SIG undefined FUN_14337dd50(void)

undefined8 * FUN_14337dd50(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b02f18;
  *(undefined4 *)(param_1 + 1) = 1;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  return param_1;
}



// FUNCTION 14337de60 FUN_14337de60 body=89 status=ok
// SIG undefined FUN_14337de60(void)

RefCountImplCore * FUN_14337de60(RefCountImplCore *param_1,uint param_2)

{
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14337dec0 FUN_14337dec0 body=89 status=ok
// SIG undefined FUN_14337dec0(void)

undefined8 FUN_14337dec0(undefined8 param_1,ulonglong param_2)

{
  FUN_14337bfb0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14337df20 FUN_14337df20 body=137 status=ok
// SIG undefined FUN_14337df20(void)

undefined8 * FUN_14337df20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b02f88;
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if (param_1[0x18] != 0) {
    FUN_143325070();
  }
  FUN_1433529e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14337dfb0 FUN_14337dfb0 body=96 status=ok
// SIG undefined FUN_14337dfb0(void)

void FUN_14337dfb0(longlong param_1)

{
  int *piVar1;
  RefCountNTSImpl *this;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
      *piVar1 = *piVar1 + 1;
    }
    this = *(RefCountNTSImpl **)(param_1 + 0x28);
    Scaleform::Render::Bundle::RemoveEntry(this,param_1);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x28) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  return;
}



// FUNCTION 14337e010 GetDeterminant body=24 status=ok
// SIG float GetDeterminant(Matrix2x4<float> * this)

/* public: float __cdecl Scaleform::Render::Matrix2x4<float>::GetDeterminant(void)const __ptr64 */

float __thiscall Scaleform::Render::Matrix2x4<float>::GetDeterminant(Matrix2x4<float> *this)

{
                    /* 0x337e010  149  ?GetDeterminant@?$Matrix2x4@M@Render@Scaleform@@QEBAMXZ */
  return *(float *)(this + 0x14) * *(float *)this - *(float *)(this + 0x10) * *(float *)(this + 4);
}



// FUNCTION 14337e030 FUN_14337e030 body=41 status=ok
// SIG undefined FUN_14337e030(void)

undefined8 FUN_14337e030(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
  }
  lVar1 = FUN_1432cd220(lVar1);
  return *(undefined8 *)(lVar1 + 0x90);
}



// FUNCTION 14337e060 SetScale9Grid body=58 status=ok
// SIG undefined SetScale9Grid(void)

void Scaleform::Render::MeshBase::SetScale9Grid(longlong param_1,RefCountImpl *param_2)

{
  if (param_2 != (RefCountImpl *)0x0) {
    RefCountImpl::AddRef(param_2);
  }
  if (*(RefCountImpl **)(param_1 + 0x58) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x58));
  }
  *(RefCountImpl **)(param_1 + 0x58) = param_2;
  return;
}



// FUNCTION 14337e0a0 FUN_14337e0a0 body=60 status=ok
// SIG undefined FUN_14337e0a0(void)

byte FUN_14337e0a0(longlong param_1)

{
  ushort uVar1;
  byte bVar2;
  bool bVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x4a);
  if ((uVar1 & 0x40) != 0) {
    bVar2 = 10;
    if ((uVar1 & 0x80) == 0) {
      bVar2 = 2;
    }
    return bVar2;
  }
  bVar3 = ((byte)uVar1 & 0xc) == 4;
  bVar2 = bVar3 | 8;
  if ((uVar1 & 0x80) == 0) {
    bVar2 = bVar3;
  }
  return bVar2;
}



// FUNCTION 14337e0e0 FUN_14337e0e0 body=342 status=ok
// SIG undefined FUN_14337e0e0(void)

undefined8 * FUN_14337e0e0(undefined8 *param_1,undefined8 param_2,RefCountImpl *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_145b03070;
  param_1[4] = 0;
  param_1[5] = param_2;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  param_1[6] = param_3;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  puVar1 = (undefined8 *)param_1[5];
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar2 = (longlong *)*puVar1;
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0xa0,0);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1432ef4d0(puVar3,2);
    *puVar3 = &PTR_FUN_145af8f68;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
  }
  uVar4 = FUN_1432ceba0(puVar1,puVar3);
  if (param_1[4] != 0) {
    plVar2 = (longlong *)(param_1[4] + 0x18);
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      FUN_1432ccf00();
    }
  }
  param_1[4] = uVar4;
  FUN_14337e870(param_1);
  return param_1;
}



// FUNCTION 14337e240 FUN_14337e240 body=177 status=ok
// SIG undefined FUN_14337e240(void)

void FUN_14337e240(RefCountNTSImplCore *param_1)

{
  longlong *plVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145b03070;
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  }
  if (*(RefCountImpl **)(param_1 + 0x70) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x70));
  }
  if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
  }
  if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x48));
  }
  if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
  }
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      FUN_1432ccf00();
    }
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 14337e300 FUN_14337e300 body=176 status=ok
// SIG undefined FUN_14337e300(void)

undefined8 FUN_14337e300(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
    if (cVar1 == '\0') {
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x80;
      if ((param_2 != '\0') && ((*(byte *)(param_1 + 0xd0) & 0x10) != 0)) {
        FUN_14337f7f0(param_1);
      }
      if ((*(byte *)(param_1 + 0xd0) & 8) != 0) {
        local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x10);
        local_10 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x2c);
        FUN_143380a40(&local_18);
        *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xf7;
      }
      if (param_2 != '\0') {
        *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 1;
        return 1;
      }
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfe;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14337e3d0 FUN_14337e3d0 body=206 status=ok
// SIG undefined FUN_14337e3d0(void)

void FUN_14337e3d0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  if ((*(byte *)(param_1 + 0xd0) & 0x10) != 0) {
    FUN_14337f7f0();
    *(undefined8 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0x800000;
    *(undefined4 *)(param_1 + 200) = 0x800000;
    FUN_14337f400(param_1);
  }
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x14;
  *(undefined4 *)(param_1 + 0x40) = param_2;
  if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar2 = *(longlong *)(param_1 + 0x38);
  FUN_1432f2630(lVar2 + 0x30,lVar2 + 0x30,*(longlong *)(lVar2 + 0x38) + 1);
  puVar3 = (undefined4 *)(*(longlong *)(lVar2 + 0x30) + -0x10 + *(longlong *)(lVar2 + 0x38) * 0x10);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *(undefined4 *)(param_1 + 0x40);
    if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x48));
    }
    *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_1 + 0x48);
  }
  uVar1 = *(undefined4 *)(lVar2 + 0x38);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  return;
}



// FUNCTION 14337e4d0 FUN_14337e4d0 body=83 status=ok
// SIG undefined FUN_14337e4d0(void)

void FUN_14337e4d0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0xd0) & 0x10) != 0) {
    FUN_14337f7f0();
    *(undefined4 *)(param_1 + 0xcc) = 0x800000;
    *(undefined8 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 200) = 0x800000;
    FUN_14337f400(param_1);
    *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x14;
    return;
  }
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x14;
  return;
}



// FUNCTION 14337e530 FUN_14337e530 body=817 status=ok
// SIG undefined FUN_14337e530(void)

void FUN_14337e530(longlong param_1,int param_2,longlong param_3,float *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  RefCountImpl *pRVar5;
  RefCountImpl *pRVar6;
  RefCountImpl *pRVar7;
  undefined4 *puVar8;
  undefined4 local_res8 [2];
  undefined4 local_e8 [2];
  RefCountImpl *local_e0;
  longlong local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pRVar6 = (RefCountImpl *)0x0;
  if ((*(byte *)(param_1 + 0xd0) & 0x10) != 0) {
    FUN_14337f7f0();
    *(undefined8 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0x800000;
    *(undefined4 *)(param_1 + 200) = 0x800000;
    FUN_14337f400(param_1);
  }
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x14;
  iVar3 = FUN_14337f6a0(param_1);
  if (iVar3 == 0) {
    return;
  }
  local_e0 = (RefCountImpl *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
            (*(longlong **)(param_1 + 0x38),iVar3,local_e8);
  pRVar5 = (RefCountImpl *)
           (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x50))
                     ((longlong *)**(undefined8 **)(param_1 + 0x28),0x50);
  pRVar7 = pRVar6;
  if (pRVar5 != (RefCountImpl *)0x0) {
    *(longlong *)(pRVar5 + 8) = 0;
    *(undefined ***)pRVar5 = &PTR_FUN_144f70a50;
    *(undefined ***)pRVar5 = &PTR_FUN_145affbc0;
    *(undefined4 *)(pRVar5 + 8) = 1;
    *(longlong *)(pRVar5 + 0x10) = 0;
    *(longlong *)(pRVar5 + 0x18) = 0;
    *(longlong *)(pRVar5 + 0x20) = 0x3f800000;
    *(longlong *)(pRVar5 + 0x28) = 0;
    *(undefined4 *)(pRVar5 + 0x30) = 0;
    *(undefined8 *)(pRVar5 + 0x34) = 0x3f800000;
    *(undefined4 *)(pRVar5 + 0x3c) = 0;
    *(undefined2 *)(pRVar5 + 0x40) = 0;
    *(undefined4 *)(pRVar5 + 0x44) = 0xffffffff;
    pRVar7 = pRVar5;
  }
  if (local_e0 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_e0);
  }
  local_b8 = *param_4 * 20.0;
  fStack_b4 = param_4[1] * 20.0;
  fStack_b0 = param_4[2] * 20.0;
  fStack_ac = param_4[3] * 20.0;
  local_a8 = param_4[4] * 20.0;
  fStack_a4 = param_4[5] * 20.0;
  fStack_a0 = param_4[6] * 20.0;
  fStack_9c = param_4[7] * 20.0;
  local_d8 = 0x3f800000;
  lStack_d0 = 0;
  local_c8 = 0x3f80000000000000;
  uStack_c0 = 0;
  local_e0 = pRVar7;
  Scaleform::Render::Matrix2x4<float>::SetInverse
            ((Matrix2x4<float> *)&local_d8,(Matrix2x4<float> *)&local_b8);
  plVar1 = *(longlong **)(param_3 + 0x18);
  *(longlong *)(pRVar7 + 0x20) = local_d8;
  *(longlong *)(pRVar7 + 0x28) = lStack_d0;
  lVar2 = *plVar1;
  *(undefined4 *)(pRVar7 + 0x30) = (undefined4)local_c8;
  *(undefined4 *)(pRVar7 + 0x34) = local_c8._4_4_;
  *(undefined4 *)(pRVar7 + 0x38) = (undefined4)uStack_c0;
  *(undefined4 *)(pRVar7 + 0x3c) = uStack_c0._4_4_;
  iVar4 = (**(code **)(lVar2 + 0x18))();
  if (iVar4 == 0) {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      local_res8[0] = 0x21000;
      FUN_1433db230(local_res8,"ImageCreator is null in BeginBitmapFill");
      pRVar7 = local_e0 + 0x10;
      goto LAB_14337e781;
    }
    local_90 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    local_98[0] = 3;
    local_88 = 1;
    local_84 = 1;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    pRVar6 = (RefCountImpl *)
             (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                       (*(longlong **)(param_1 + 0x30),local_98,*(undefined8 *)(param_3 + 0x18));
  }
  else {
    pRVar6 = *(RefCountImpl **)(param_3 + 0x18);
    if (pRVar6 != (RefCountImpl *)0x0) {
      (**(code **)(*(longlong *)pRVar6 + 8))(pRVar6);
    }
  }
  pRVar7 = local_e0 + 0x10;
  if (pRVar6 != (RefCountImpl *)0x0) {
    (**(code **)(*(longlong *)pRVar6 + 8))(pRVar6);
  }
LAB_14337e781:
  if (*(longlong **)pRVar7 != (longlong *)0x0) {
    (**(code **)(**(longlong **)pRVar7 + 0x10))();
  }
  *(RefCountImpl **)pRVar7 = pRVar6;
  if (param_2 == 0x40) {
    *(undefined2 *)(local_e0 + 0x40) = 0x100;
  }
  else if (param_2 == 0x41) {
    *(undefined2 *)(local_e0 + 0x40) = 0x101;
  }
  else if (param_2 == 0x42) {
    *(undefined2 *)(local_e0 + 0x40) = 0;
  }
  else if (param_2 == 0x43) {
    *(undefined2 *)(local_e0 + 0x40) = 1;
  }
  puVar8 = (undefined4 *)
           ((ulonglong)(iVar3 - 1) * 0x10 + *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30));
  *puVar8 = local_e8[0];
  if (local_e0 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(local_e0);
  }
  if (*(RefCountImpl **)(puVar8 + 2) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(puVar8 + 2));
  }
  *(RefCountImpl **)(puVar8 + 2) = local_e0;
  if (pRVar6 != (RefCountImpl *)0x0) {
    (**(code **)(*(longlong *)pRVar6 + 0x10))(pRVar6);
  }
  if (local_e0 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_e0);
  }
  return;
}



// FUNCTION 14337e870 FUN_14337e870 body=319 status=ok
// SIG undefined FUN_14337e870(void)

void FUN_14337e870(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  
  puVar4 = (undefined8 *)
           (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x50))
                     ((longlong *)**(undefined8 **)(param_1 + 0x28),0x80,0);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar1 = puVar4 + 0xc;
    uVar2 = **(undefined8 **)(param_1 + 0x28);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_144f70a50;
    *(undefined4 *)(puVar4 + 1) = 1;
    puVar4[2] = puVar1;
    puVar4[3] = puVar1;
    *(undefined4 *)(puVar4 + 4) = 0x3f800000;
    *(undefined4 *)(puVar4 + 5) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x3f800000;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *puVar4 = &PTR_FUN_145b03018;
    *puVar1 = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = uVar2;
  }
  iVar6 = 0;
  if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
  }
  *(undefined8 **)(param_1 + 0x38) = puVar4;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x800000;
  *(undefined4 *)(param_1 + 200) = 0x800000;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  lVar5 = FUN_1432cd1e0(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(ulonglong *)(lVar5 + 0x90);
  if (uVar3 != 0) {
    if ((uVar3 & 1) != 0) {
      *(int *)(param_1 + 0x84) = (int)*(undefined8 *)((uVar3 & 0xfffffffffffffffe) + 8);
      goto LAB_14337e998;
    }
    iVar6 = (*(longlong *)(lVar5 + 0x98) != 0) + 1;
  }
  *(int *)(param_1 + 0x84) = iVar6;
LAB_14337e998:
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x80;
  return;
}



// FUNCTION 14337e9c0 FUN_14337e9c0 body=273 status=ok
// SIG undefined FUN_14337e9c0(void)

void FUN_14337e9c0(longlong param_1,float *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FUN_14337f400();
  uVar4 = 0;
  lVar1 = FUN_1432cd1e0(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(ulonglong *)(lVar1 + 0x90);
  if (uVar3 != 0) {
    if ((uVar3 & 1) == 0) {
      uVar3 = (ulonglong)(*(longlong *)(lVar1 + 0x98) != 0) + 1;
    }
    else {
      uVar3 = *(ulonglong *)((uVar3 & 0xfffffffffffffffe) + 8);
    }
    if (uVar3 != 0) {
      do {
        lVar1 = FUN_1432cd1e0(*(undefined8 *)(param_1 + 0x20));
        puVar2 = (ulonglong *)(lVar1 + 0x90);
        if ((*(byte *)puVar2 & 1) != 0) {
          puVar2 = (ulonglong *)((*puVar2 & 0xfffffffffffffffe) + 0x10);
        }
        lVar1 = FUN_1432cd1e0(puVar2[uVar4]);
        (**(code **)(*(longlong *)(*(longlong *)(lVar1 + 0x90) + 0x10) + 0x28))
                  (*(longlong *)(lVar1 + 0x90) + 0x10,&local_18);
        if (uVar4 == 0) {
          *param_2 = local_18;
          param_2[1] = fStack_14;
          param_2[2] = fStack_10;
          param_2[3] = fStack_c;
        }
        else {
          fVar8 = local_18;
          if (*param_2 <= local_18) {
            fVar8 = *param_2;
          }
          fVar7 = param_2[2];
          if (param_2[2] <= fStack_10) {
            fVar7 = fStack_10;
          }
          fVar6 = fStack_14;
          if (param_2[1] <= fStack_14) {
            fVar6 = param_2[1];
          }
          fVar5 = param_2[3];
          if (param_2[3] <= fStack_c) {
            fVar5 = fStack_c;
          }
          *param_2 = fVar8;
          param_2[2] = fVar7;
          param_2[1] = fVar6;
          param_2[3] = fVar5;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
  }
  return;
}



// FUNCTION 14337eae0 FUN_14337eae0 body=307 status=ok
// SIG undefined FUN_14337eae0(void)

RefCountImpl * FUN_14337eae0(longlong param_1)

{
  int iVar1;
  RefCountImpl *this;
  undefined4 *puVar2;
  undefined4 local_18 [2];
  RefCountImpl *local_10;
  
  iVar1 = FUN_14337f6a0();
  this = (RefCountImpl *)
         (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x50))
                   ((longlong *)**(undefined8 **)(param_1 + 0x28),0x50);
  if (this != (RefCountImpl *)0x0) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined ***)this = &PTR_FUN_144f70a50;
    *(undefined ***)this = &PTR_FUN_145affbc0;
    *(undefined4 *)(this + 8) = 1;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0x3f800000;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x34) = 0x3f800000;
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined2 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x44) = 0xffffffff;
  }
  local_10 = (RefCountImpl *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
            (*(longlong **)(param_1 + 0x38),iVar1,local_18);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  if (local_10 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_10);
  }
  puVar2 = (undefined4 *)
           ((ulonglong)(iVar1 - 1) * 0x10 + *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30));
  *puVar2 = local_18[0];
  local_10 = this;
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  if (*(RefCountImpl **)(puVar2 + 2) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(puVar2 + 2));
  }
  *(RefCountImpl **)(puVar2 + 2) = local_10;
  if (local_10 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_10);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return this;
}



// FUNCTION 14337ec20 FUN_14337ec20 body=490 status=ok
// SIG undefined FUN_14337ec20(void)

RefCountImpl * FUN_14337ec20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  RefCountImpl *pRVar3;
  RefCountImpl *this;
  ulonglong uVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  RefCountImpl *local_20;
  RefCountImpl *pRStack_18;
  
  if ((*(byte *)(param_1 + 0xd0) & 2) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    FUN_14337b630(lVar2 + 0x48,lVar2 + 0x48,*(longlong *)(lVar2 + 0x50) + 1);
    lVar1 = *(longlong *)(lVar2 + 0x48) + (*(longlong *)(lVar2 + 0x50) * 5 + -5) * 8;
    if (lVar1 != 0) {
      FUN_14337fa30(lVar1,param_1 + 0x50);
    }
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar2 + 0x50);
  }
  this = (RefCountImpl *)
         (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x50))
                   ((longlong *)**(undefined8 **)(param_1 + 0x28),0x50);
  if (this != (RefCountImpl *)0x0) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined ***)this = &PTR_FUN_144f70a50;
    *(undefined ***)this = &PTR_FUN_145affbc0;
    *(undefined4 *)(this + 8) = 1;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0x3f800000;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x34) = 0x3f800000;
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined2 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x44) = 0xffffffff;
  }
  local_20 = (RefCountImpl *)0x0;
  pRStack_18 = (RefCountImpl *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
            (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x78),&local_38);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  if (local_20 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_20);
  }
  uVar4 = (ulonglong)(*(int *)(param_1 + 0x78) - 1);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x48);
  *(undefined4 *)(lVar1 + uVar4 * 0x28) = local_38;
  *(undefined4 *)(lVar1 + 4 + uVar4 * 0x28) = local_34;
  *(undefined4 *)(lVar1 + 8 + uVar4 * 0x28) = local_30;
  *(undefined4 *)(lVar1 + 0xc + uVar4 * 0x28) = local_2c;
  *(undefined4 *)(lVar1 + 0x10 + uVar4 * 0x28) = local_28;
  local_20 = this;
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  pRVar3 = *(RefCountImpl **)(lVar1 + 0x18 + uVar4 * 0x28);
  if (pRVar3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar3);
  }
  *(RefCountImpl **)(lVar1 + 0x18 + uVar4 * 0x28) = local_20;
  if (pRStack_18 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(pRStack_18);
  }
  pRVar3 = *(RefCountImpl **)(lVar1 + 0x20 + uVar4 * 0x28);
  if (pRVar3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar3);
  }
  *(RefCountImpl **)(lVar1 + 0x20 + uVar4 * 0x28) = pRStack_18;
  if (pRStack_18 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRStack_18);
  }
  if (local_20 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_20);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return this;
}



// FUNCTION 14337ee10 FUN_14337ee10 body=53 status=ok
// SIG undefined FUN_14337ee10(void)

void FUN_14337ee10(longlong param_1)

{
  FUN_14337f7f0();
  *(undefined4 *)(param_1 + 0xcc) = 0x800000;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 200) = 0x800000;
  FUN_14337f400(param_1);
  return;
}



// FUNCTION 14337ee50 FUN_14337ee50 body=256 status=ok
// SIG undefined FUN_14337ee50(void)

void FUN_14337ee50(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uStack_34;
  
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  uStack_34 = uStack_34 & 0xffffff00;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(ulonglong *)(param_1 + 0xb8) = CONCAT44(uStack_34,0x3f800000);
  if (((*(byte *)(param_1 + 0xd0) & 4) == 0) && ((*(byte *)(param_1 + 0xd0) & 0x10) != 0)) {
    fVar1 = *(float *)(param_1 + 0xc0);
    if ((fVar1 != *(float *)(param_1 + 200)) ||
       (fVar1 = *(float *)(param_1 + 0xc4), fVar1 != *(float *)(param_1 + 0xcc))) {
      FUN_14337ef60(fVar1,*(float *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
    }
  }
  FUN_14337f740(param_1,param_2,param_3);
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfb;
  *(undefined4 *)(param_1 + 200) = param_2;
  *(undefined4 *)(param_1 + 0xcc) = param_3;
  return;
}



// FUNCTION 14337ef60 FUN_14337ef60 body=123 status=ok
// SIG undefined FUN_14337ef60(void)

void FUN_14337ef60(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 0xd0) & 8) == 0) {
    FUN_14337f740(param_1,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
  }
  FUN_14337ff50(*(undefined8 *)(param_1 + 0x38),param_1 + 0x88,param_2,param_3);
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfd;
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x80;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  return;
}



// FUNCTION 14337eff0 FUN_14337eff0 body=175 status=ok
// SIG undefined FUN_14337eff0(void)

void FUN_14337eff0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  if ((*(byte *)(param_1 + 0xd0) & 8) == 0) {
    FUN_14337f740(param_1,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
  }
  FUN_14337ffd0(*(undefined8 *)(param_1 + 0x38),param_1 + 0x88,param_2,param_3,param_4,param_5);
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfd;
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x80;
  *(undefined4 *)(param_1 + 0xc0) = param_4;
  *(undefined4 *)(param_1 + 0xc4) = param_5;
  return;
}



// FUNCTION 14337f0b0 FUN_14337f0b0 body=280 status=ok
// SIG undefined FUN_14337f0b0(void)

undefined8 FUN_14337f0b0(longlong param_1,float *param_2,char param_3)

{
  float fVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  FUN_14337f400();
  uVar5 = 0;
  lVar2 = FUN_1432cd1e0(*(undefined8 *)(param_1 + 0x20));
  uVar6 = *(ulonglong *)(lVar2 + 0x90);
  if (uVar6 != 0) {
    if ((uVar6 & 1) == 0) {
      uVar6 = (ulonglong)(*(longlong *)(lVar2 + 0x98) != 0) + 1;
    }
    else {
      uVar6 = *(ulonglong *)((uVar6 & 0xfffffffffffffffe) + 8);
    }
    if (uVar6 != 0) {
      do {
        lVar2 = FUN_1432cd1e0(*(undefined8 *)(param_1 + 0x20));
        puVar3 = (ulonglong *)(lVar2 + 0x90);
        if ((*(byte *)puVar3 & 1) != 0) {
          puVar3 = (ulonglong *)((*puVar3 & 0xfffffffffffffffe) + 0x10);
        }
        lVar2 = FUN_1432cd1e0(puVar3[uVar5]);
        lVar2 = *(longlong *)(lVar2 + 0x90);
        (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x28))(lVar2 + 0x10,&local_28);
        if ((((*param_2 <= local_20) && (local_28 <= *param_2)) &&
            (fVar1 = param_2[1], fVar1 <= local_1c)) && (local_24 <= fVar1)) {
          if (param_3 != '\0') {
            uVar4 = FUN_143379190(*(undefined8 *)(lVar2 + 0x58),&DAT_14621c810,*param_2,fVar1);
            return uVar4;
          }
          return 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
  }
  return 0;
}



// FUNCTION 14337f1d0 SetNoLine body=15 status=ok
// SIG undefined SetNoLine(void)

void Scaleform::GFx::DrawingContext::SetNoLine(longlong param_1)

{
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfd;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 14337f1f0 FUN_14337f1f0 body=7 status=ok
// SIG undefined FUN_14337f1f0(void)

void FUN_14337f1f0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x7c) = 0;
  return;
}



// FUNCTION 14337f200 FUN_14337f200 body=433 status=ok
// SIG undefined FUN_14337f200(void)

void FUN_14337f200(longlong param_1,float param_2,ulonglong param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined8 local_48;
  undefined4 local_40;
  
  if ((param_3 & 0xff000000) == 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x78) != 0)) {
      if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) &&
         (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))(), cVar1 == '\0')) {
        *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x80;
        if ((*(byte *)(param_1 + 0xd0) & 8) != 0) {
          local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x10);
          local_40 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x2c);
          FUN_143380a40(&local_48);
          *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xf7;
        }
        *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfe;
      }
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfd;
      *(undefined4 *)(param_1 + 0x78) = 0;
      return;
    }
  }
  else {
    if (param_2 <= 0.0) {
      param_2 = 0.05;
    }
    cVar1 = FUN_14337f920(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (cVar1 == '\0') {
      if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) &&
         (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))(), cVar1 == '\0')) {
        *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x80;
        if ((*(byte *)(param_1 + 0xd0) & 8) != 0) {
          local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x10);
          local_40 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x2c);
          FUN_143380a40(&local_48);
          *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xf7;
        }
        *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfe;
      }
      FUN_14337f870(param_1,param_2,param_3 & 0xffffffff,param_4,param_5,param_6,param_7,param_8);
    }
  }
  return;
}



// FUNCTION 14337f3c0 NoLine body=45 status=ok
// SIG undefined NoLine(void)

undefined8 Scaleform::GFx::DrawingContext::NoLine(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 14337f400 FUN_14337f400 body=664 status=ok
// SIG undefined FUN_14337f400(void)

void FUN_14337f400(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  RefCountImpl *this;
  longlong lVar9;
  RefCountImpl *pRVar10;
  RefCountImpl *pRVar11;
  undefined8 local_28;
  undefined4 local_20;
  
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0x7f;
  pRVar11 = (RefCountImpl *)0x0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_143364170(*(undefined8 *)(param_1 + 0x20),0,*(int *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))(), cVar6 == '\0')) {
    iVar2 = *(int *)(param_1 + 0x7c);
    iVar3 = *(int *)(param_1 + 0x78);
    if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) &&
       (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))(), cVar6 == '\0')) {
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x80;
      if ((*(byte *)(param_1 + 0xd0) & 0x10) != 0) {
        FUN_14337f7f0(param_1);
      }
      if ((*(byte *)(param_1 + 0xd0) & 8) != 0) {
        local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x10);
        local_20 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x2c);
        FUN_143380a40(&local_28);
        *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xf7;
      }
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 1;
    }
    FUN_14337fc50(*(undefined8 *)(param_1 + 0x38));
    lVar8 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x50))
                      ((longlong *)**(undefined8 **)(param_1 + 0x28),0x90,0);
    this = pRVar11;
    if (lVar8 != 0) {
      this = (RefCountImpl *)FUN_143371000(lVar8,*(undefined8 *)(param_1 + 0x38),0);
    }
    lVar8 = FUN_1432edf60(*(undefined8 *)(param_1 + 0x28));
    FUN_1432f2e20(lVar8,this);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar9 = FUN_1432cd1e0(uVar4);
    uVar5 = *(ulonglong *)(lVar9 + 0x90);
    pRVar10 = pRVar11;
    if (uVar5 != 0) {
      if ((uVar5 & 1) == 0) {
        pRVar10 = (RefCountImpl *)((ulonglong)(*(longlong *)(lVar9 + 0x98) != 0) + 1);
      }
      else {
        pRVar10 = *(RefCountImpl **)((uVar5 & 0xfffffffffffffffe) + 8);
      }
    }
    FUN_143364100(uVar4,pRVar10,lVar8);
    pRVar10 = (RefCountImpl *)
              (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x50))
                        ((longlong *)**(undefined8 **)(param_1 + 0x28),0x80,0);
    if (pRVar10 != (RefCountImpl *)0x0) {
      uVar4 = **(undefined8 **)(param_1 + 0x28);
      pRVar11 = pRVar10 + 0x60;
      *(undefined8 *)(pRVar10 + 8) = 0;
      *(undefined ***)pRVar10 = &PTR_FUN_144f70a50;
      *(undefined4 *)(pRVar10 + 8) = 1;
      *(RefCountImpl **)(pRVar10 + 0x10) = pRVar11;
      *(RefCountImpl **)(pRVar10 + 0x18) = pRVar11;
      *(undefined4 *)(pRVar10 + 0x20) = 0x3f800000;
      *(undefined4 *)(pRVar10 + 0x28) = 0;
      *(undefined4 *)(pRVar10 + 0x2c) = 0x3f800000;
      *(undefined8 *)(pRVar10 + 0x30) = 0;
      *(undefined8 *)(pRVar10 + 0x38) = 0;
      *(undefined8 *)(pRVar10 + 0x40) = 0;
      *(undefined8 *)(pRVar10 + 0x48) = 0;
      *(undefined8 *)(pRVar10 + 0x50) = 0;
      *(undefined8 *)(pRVar10 + 0x58) = 0;
      *(undefined ***)pRVar10 = &PTR_FUN_145b03018;
      *(undefined8 *)pRVar11 = 0;
      *(undefined8 *)(pRVar10 + 0x68) = 0;
      *(undefined8 *)(pRVar10 + 0x70) = 0;
      *(undefined8 *)(pRVar10 + 0x78) = uVar4;
      pRVar11 = pRVar10;
    }
    if (*(RefCountImpl **)(param_1 + 0x38) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x38));
    }
    *(RefCountImpl **)(param_1 + 0x38) = pRVar11;
    if (iVar2 != 0) {
      uVar7 = FUN_14337fb80(*(undefined8 *)(param_1 + 0x38),param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x7c) = uVar7;
      if ((*(byte *)(param_1 + 0xd0) & 0x10) != 0) {
        FUN_14337ee10(param_1);
      }
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x14;
    }
    if (iVar3 != 0) {
      uVar7 = FUN_14337fbf0(*(undefined8 *)(param_1 + 0x38),param_1 + 0x50);
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 2;
      *(undefined4 *)(param_1 + 0x78) = uVar7;
    }
    if (lVar8 != 0) {
      plVar1 = (longlong *)(lVar8 + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00(lVar8);
      }
    }
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 14337f6a0 FUN_14337f6a0 body=151 status=ok
// SIG undefined FUN_14337f6a0(void)

void FUN_14337f6a0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar1 = *(longlong *)(param_1 + 0x38);
  FUN_1432f2630(lVar1 + 0x30,lVar1 + 0x30,*(longlong *)(lVar1 + 0x38) + 1);
  puVar2 = (undefined4 *)(*(longlong *)(lVar1 + 0x30) + -0x10 + *(longlong *)(lVar1 + 0x38) * 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *(undefined4 *)(param_1 + 0x40);
    if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x48));
    }
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(param_1 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar1 + 0x38);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 14337f740 FUN_14337f740 body=156 status=ok
// SIG undefined FUN_14337f740(void)

void FUN_14337f740(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  FUN_14337e300(param_1,*(byte *)(param_1 + 0xd0) & 1);
  uVar1 = 1;
  if ((*(byte *)(param_1 + 0xd0) & 5) != 0) {
    uVar1 = 2;
  }
  FUN_143380990(*(undefined8 *)(param_1 + 0x38),param_1 + 0x88,uVar1,*(undefined4 *)(param_1 + 0x7c)
                ,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x78),param_2,param_3);
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfe;
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x88;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  return;
}



// FUNCTION 14337f7f0 FUN_14337f7f0 body=114 status=ok
// SIG undefined FUN_14337f7f0(void)

void FUN_14337f7f0(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 200);
  if ((((fVar1 != 1.1754944e-38) || (*(float *)(param_1 + 0xcc) != 1.1754944e-38)) ||
      ((*(byte *)(param_1 + 0xd0) & 8) != 0)) && ((*(byte *)(param_1 + 0xd0) & 0x10) != 0)) {
    fVar2 = *(float *)(param_1 + 0xc0);
    *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xef;
    if ((fVar2 != fVar1) ||
       (fVar2 = *(float *)(param_1 + 0xc4), fVar2 != *(float *)(param_1 + 0xcc))) {
      FUN_14337ef60(fVar2,fVar1,*(undefined4 *)(param_1 + 0xcc));
      return;
    }
  }
  return;
}



// FUNCTION 14337f870 FUN_14337f870 body=165 status=ok
// SIG undefined FUN_14337f870(void)

void FUN_14337f870(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4,uint param_5,
                  uint param_6,uint param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(uint *)(param_1 + 0x58) = param_4 != '\0' | param_5 | param_6 | param_7;
  *(undefined4 *)(param_1 + 0x5c) = param_8;
  *(undefined4 *)(param_1 + 0x54) = 0x3d4ccccd;
  FUN_14337b630(lVar3 + 0x48,lVar3 + 0x48,*(longlong *)(lVar3 + 0x50) + 1);
  lVar1 = *(longlong *)(lVar3 + 0x48) + (*(longlong *)(lVar3 + 0x50) * 5 + -5) * 8;
  if (lVar1 != 0) {
    FUN_14337fa30(lVar1,param_1 + 0x50);
  }
  uVar2 = *(undefined4 *)(lVar3 + 0x50);
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 2;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  return;
}



// FUNCTION 14337f920 FUN_14337f920 body=268 status=ok
// SIG undefined FUN_14337f920(void)

ulonglong FUN_14337f920(longlong param_1,float param_2,int param_3,char param_4,uint param_5,
                       uint param_6,uint param_7,float param_8)

{
  ulonglong uVar1;
  float local_48 [2];
  uint local_40;
  float local_3c;
  int local_38;
  RefCountImpl *local_30;
  RefCountImpl *pRStack_28;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
  if (((int)uVar1 == 0) || (*(int *)(param_1 + 0x78) == 0)) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    local_30 = (RefCountImpl *)0x0;
    pRStack_28 = (RefCountImpl *)0x0;
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
              (*(longlong **)(param_1 + 0x38),*(int *)(param_1 + 0x78),local_48);
    if ((((local_30 == (RefCountImpl *)0x0) && (local_38 == param_3)) &&
        ((int)(local_48[0] * 20.0) == (int)(param_2 * 20.0))) &&
       ((local_40 == (param_4 != '\0' | param_5 | param_6 | param_7) &&
        ((int)(local_3c * 20.0) == (int)(param_8 * 20.0))))) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    if (pRStack_28 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRStack_28);
    }
    if (local_30 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_30);
    }
  }
  return uVar1;
}



// FUNCTION 14337fa30 FUN_14337fa30 body=102 status=ok
// SIG undefined FUN_14337fa30(void)

undefined4 * FUN_14337fa30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  if (*(RefCountImpl **)(param_2 + 6) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 6));
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  if (*(RefCountImpl **)(param_2 + 8) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 8));
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 14337faa0 FUN_14337faa0 body=89 status=ok
// SIG undefined FUN_14337faa0(void)

undefined8 FUN_14337faa0(undefined8 param_1,ulonglong param_2)

{
  FUN_14337e240();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14337fb00 FUN_14337fb00 body=127 status=ok
// SIG undefined FUN_14337fb00(void)

RefCountImplCore * FUN_14337fb00(RefCountImplCore *param_1,uint param_2)

{
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x60));
  FUN_1432ef960(param_1 + 0x48);
  FUN_1432ef860(param_1 + 0x30);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14337fb80 FUN_14337fb80 body=107 status=ok
// SIG undefined FUN_14337fb80(void)

undefined4 FUN_14337fb80(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  FUN_1432f2630(param_1 + 0x30,param_1 + 0x30,*(longlong *)(param_1 + 0x38) + 1);
  puVar1 = (undefined4 *)
           (*(longlong *)(param_1 + 0x30) + -0x10 + *(longlong *)(param_1 + 0x38) * 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    if (*(RefCountImpl **)(param_2 + 2) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 2));
    }
    *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 2);
  }
  return *(undefined4 *)(param_1 + 0x38);
}



// FUNCTION 14337fbf0 FUN_14337fbf0 body=93 status=ok
// SIG undefined FUN_14337fbf0(void)

undefined4 FUN_14337fbf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_14337b630(param_1 + 0x48,param_1 + 0x48,*(longlong *)(param_1 + 0x50) + 1);
  lVar1 = *(longlong *)(param_1 + 0x48) + (*(longlong *)(param_1 + 0x50) * 5 + -5) * 8;
  if (lVar1 != 0) {
    FUN_14337fa30(lVar1,param_2);
  }
  return *(undefined4 *)(param_1 + 0x50);
}



// FUNCTION 14337fc50 FUN_14337fc50 body=101 status=ok
// SIG undefined FUN_14337fc50(void)

void FUN_14337fc50(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  uVar3 = plVar1[1] + 1;
  if (uVar3 < (ulonglong)plVar1[1]) {
    uVar4 = uVar3;
    if ((ulonglong)plVar1[2] >> 1 <= uVar3) goto LAB_14337fc98;
  }
  else {
    if (uVar3 <= (ulonglong)plVar1[2]) goto LAB_14337fc98;
    uVar4 = (uVar3 >> 2) + uVar3;
  }
  FUN_143380880(plVar1,plVar1[3],uVar4);
LAB_14337fc98:
  plVar1[1] = uVar3;
  puVar2 = (undefined1 *)(*plVar1 + -1 + uVar3);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  return;
}



// FUNCTION 14337fcc0 FUN_14337fcc0 body=259 status=ok
// SIG undefined FUN_14337fcc0(void)

void FUN_14337fcc0(longlong param_1,uint param_2,undefined4 *param_3)

{
  RefCountImpl *pRVar1;
  undefined4 *puVar2;
  
  if (*(ulonglong *)(param_1 + 0x38) < (ulonglong)param_2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b644d8) {
      _Init_thread_header(&DAT_146b644d8);
      if (DAT_146b644d8 == -1) {
        DAT_146b644c8 = 0;
        DAT_146b644d0 = (RefCountImpl *)0x0;
        atexit((_func_5014 *)&LAB_143ec4910);
        _Init_thread_footer(&DAT_146b644d8);
      }
    }
    *param_3 = DAT_146b644c8;
    if (DAT_146b644d0 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(DAT_146b644d0);
    }
    pRVar1 = DAT_146b644d0;
    if (*(RefCountImpl **)(param_3 + 2) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_3 + 2));
      *(RefCountImpl **)(param_3 + 2) = DAT_146b644d0;
      return;
    }
  }
  else {
    puVar2 = (undefined4 *)((ulonglong)(param_2 - 1) * 0x10 + *(longlong *)(param_1 + 0x30));
    *param_3 = *puVar2;
    if (*(RefCountImpl **)(puVar2 + 2) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(puVar2 + 2));
    }
    if (*(RefCountImpl **)(param_3 + 2) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_3 + 2));
    }
    pRVar1 = *(RefCountImpl **)(puVar2 + 2);
  }
  *(RefCountImpl **)(param_3 + 2) = pRVar1;
  return;
}



// FUNCTION 14337fdd0 FUN_14337fdd0 body=345 status=ok
// SIG undefined FUN_14337fdd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14337fdd0(longlong param_1,uint param_2,undefined4 *param_3)

{
  if (*(ulonglong *)(param_1 + 0x50) < (ulonglong)param_2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b644c0) {
      _Init_thread_header(&DAT_146b644c0);
      if (DAT_146b644c0 == -1) {
        _DAT_146b64498 = 0;
        _DAT_146b644a0 = 0;
        DAT_146b644a8 = 0;
        DAT_146b644b0 = (RefCountImpl *)0x0;
        DAT_146b644b8 = (RefCountImpl *)0x0;
        atexit(FUN_143ec4930);
        _Init_thread_footer(&DAT_146b644c0);
      }
    }
    *param_3 = DAT_146b64498;
    param_3[1] = DAT_146b6449c;
    param_3[2] = DAT_146b644a0;
    param_3[3] = DAT_146b644a4;
    param_3[4] = DAT_146b644a8;
    if (DAT_146b644b0 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(DAT_146b644b0);
    }
    if (*(RefCountImpl **)(param_3 + 6) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_3 + 6));
    }
    *(RefCountImpl **)(param_3 + 6) = DAT_146b644b0;
    if (DAT_146b644b8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(DAT_146b644b8);
    }
    if (*(RefCountImpl **)(param_3 + 8) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_3 + 8));
    }
    *(RefCountImpl **)(param_3 + 8) = DAT_146b644b8;
    return;
  }
  FUN_1432efc80(param_3,*(longlong *)(param_1 + 0x48) + (ulonglong)(param_2 - 1) * 0x28);
  return;
}



// FUNCTION 14337ff50 FUN_14337ff50 body=124 status=ok
// SIG undefined FUN_14337ff50(void)

void FUN_14337ff50(longlong param_1,longlong param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_18;
  float local_10;
  
  local_10 = *(float *)(param_1 + 0x2c);
  local_18 = *(undefined8 *)(param_1 + 0x10);
  iVar2 = (int)(local_10 * param_3) - *(int *)(param_2 + 0xc);
  iVar1 = (int)(local_10 * param_4) - *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    FUN_143380ab0(&local_18,iVar2);
  }
  else if (iVar2 == 0) {
    FUN_143382dc0(&local_18,iVar1);
  }
  else {
    FUN_143380d00(&local_18,iVar2,iVar1);
  }
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar2;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + iVar1;
  return;
}



// FUNCTION 14337ffd0 FUN_14337ffd0 body=136 status=ok
// SIG undefined FUN_14337ffd0(void)

void FUN_14337ffd0(longlong param_1,longlong param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  int iVar1;
  int iVar2;
  undefined8 local_18;
  float local_10;
  
  local_10 = *(float *)(param_1 + 0x2c);
  local_18 = *(undefined8 *)(param_1 + 0x10);
  iVar2 = (int)(local_10 * param_5) - *(int *)(param_2 + 0xc);
  iVar1 = (int)(local_10 * param_6) - *(int *)(param_2 + 0x10);
  FUN_143381390(&local_18,(int)(local_10 * param_3) - *(int *)(param_2 + 0xc),
                (int)(local_10 * param_4) - *(int *)(param_2 + 0x10),iVar2,iVar1);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar2;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + iVar1;
  return;
}



// FUNCTION 143380060 FUN_143380060 body=1668 status=ok
// SIG undefined FUN_143380060(void)

int FUN_143380060(undefined8 *param_1,uint param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte local_17 [4];
  byte local_13;
  undefined2 local_12;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  byte local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  pbVar4 = local_17;
  lVar3 = *(longlong *)*param_1;
  bVar1 = *(byte *)((ulonglong)param_2 + lVar3);
  bVar2 = (&DAT_145b03008)[bVar1 & 0xf];
  if (bVar2 != 0) {
    uVar5 = (ulonglong)bVar2;
    do {
      param_2 = param_2 + 1;
      *pbVar4 = *(byte *)(lVar3 + (ulonglong)param_2);
      pbVar4 = pbVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  switch(bVar1 & 0xf) {
  case 0:
    *param_3 = 0;
    break;
  case 1:
    *param_3 = 0;
    param_3[1] = (((int)(char)local_17[2] << 8 | (int)(char)local_17[1]) << 8 | (uint)local_17[0])
                 << 4 | (uint)(bVar1 >> 4);
    return bVar2 + 1;
  case 2:
    *param_3 = 1;
    break;
  case 3:
    *param_3 = 1;
    param_3[1] = (((int)(char)local_17[2] << 8 | (int)(char)local_17[1]) << 8 | (uint)local_17[0])
                 << 4 | (uint)(bVar1 >> 4);
    return bVar2 + 1;
  case 4:
    *param_3 = 2;
    param_3[1] = (int)((uint)(bVar1 >> 2) | (int)(char)(local_17[0] << 6)) >> 2;
    param_3[2] = (int)(char)local_17[0] >> 2;
    return bVar2 + 1;
  case 5:
    *param_3 = 2;
    param_3[2] = (uint)(local_17[0] >> 6) | (int)(char)local_17[1] << 2;
    param_3[1] = (int)(char)(local_17[0] << 2) << 2 | (uint)(bVar1 >> 4);
    return bVar2 + 1;
  case 6:
    *param_3 = 2;
    param_3[1] = ((int)(char)(local_17[1] << 6) << 2 | (uint)local_17[0]) << 4 | (uint)(bVar1 >> 4);
    param_3[2] = (uint)(local_17[1] >> 2) | (int)(char)local_17[2] << 6;
    return bVar2 + 1;
  case 7:
    *param_3 = 2;
    param_3[1] = ((((int)(char)(local_17[3] << 6) << 2 | (uint)local_17[2]) << 8 | (uint)local_17[1]
                  ) << 8 | (uint)local_17[0]) << 4 | (uint)(bVar1 >> 4);
    param_3[2] = (int)CONCAT21(local_12,local_13) << 6 | (uint)(local_17[3] >> 2);
    return bVar2 + 1;
  case 8:
    *param_3 = 3;
    param_3[1] = (int)((uint)(bVar1 >> 1) | (int)(char)(local_17[0] << 7)) >> 3;
    param_3[2] = (int)(char)(local_17[0] << 2) >> 3;
    param_3[4] = (int)(char)local_17[1] >> 3;
    param_3[3] = (int)((uint)(local_17[0] >> 3) | (int)(char)(local_17[1] << 5)) >> 3;
    return bVar2 + 1;
  case 9:
    param_3[1] = (int)((uint)(bVar1 >> 3) | (int)(char)(local_17[0] << 5)) >> 1;
    param_3[4] = (int)(char)local_17[2] >> 1;
    *param_3 = 3;
    param_3[2] = (int)((uint)(local_17[0] >> 2) | (int)(char)(local_17[1] << 6)) >> 1;
    param_3[3] = (int)((uint)(local_17[1] >> 1) | (int)(char)(local_17[2] << 7)) >> 1;
    return bVar2 + 1;
  case 10:
    *param_3 = 3;
    param_3[1] = (char)(local_17[0] << 3) * 2 | (uint)(bVar1 >> 4);
    param_3[2] = (char)(local_17[1] << 2) * 2 | (uint)(local_17[0] >> 5);
    param_3[3] = (uint)(local_17[1] >> 6) | (char)(local_17[2] * '\x02') * 2;
    param_3[4] = (uint)(local_17[2] >> 7) | (char)local_17[3] * 2;
    return bVar2 + 1;
  case 0xb:
    *param_3 = 3;
    param_3[1] = (int)(char)(local_17[0] * '\x02') << 3 | (uint)(bVar1 >> 4);
    param_3[2] = ((int)(char)(local_17[2] << 6) << 2 | (uint)local_17[1]) * 2 |
                 (uint)(local_17[0] >> 7);
    param_3[3] = (int)(char)(local_17[3] << 3) << 3 | (uint)(local_17[2] >> 2);
    param_3[4] = (uint)(local_17[3] >> 5) | (int)(char)local_13 << 3;
    return bVar2 + 1;
  case 0xc:
    *param_3 = 3;
    param_3[1] = ((char)(local_17[1] << 7) * 2 | (uint)local_17[0]) << 4 | (uint)(bVar1 >> 4);
    param_3[2] = (int)(char)(local_17[2] << 2) << 5 | (uint)(local_17[1] >> 1);
    param_3[3] = ((int)(char)(local_13 << 5) << 3 | (uint)local_17[3]) << 2 |
                 (uint)(local_17[2] >> 6);
    param_3[4] = (uint)(local_13 >> 3) | (int)(char)(byte)local_12 << 5;
    return bVar2 + 1;
  case 0xd:
    *param_3 = 3;
    param_3[1] = ((int)(char)(local_17[1] << 5) << 3 | (uint)local_17[0]) << 4 | (uint)(bVar1 >> 4);
    param_3[2] = ((int)(char)(local_17[3] << 6) << 2 | (uint)local_17[2]) << 5 |
                 (uint)(local_17[1] >> 3);
    param_3[3] = ((char)((byte)local_12 << 7) * 2 | (uint)local_13) << 6 | (uint)(local_17[3] >> 2);
    param_3[4] = (uint)((byte)local_12 >> 1) | (int)(char)local_12._1_1_ << 7;
    return bVar2 + 1;
  case 0xe:
    *param_3 = 3;
    param_3[1] = ((((int)(char)(local_17[3] << 5) << 3 | (uint)local_17[2]) << 8 | (uint)local_17[1]
                  ) << 8 | (uint)local_17[0]) << 4 | (uint)(bVar1 >> 4);
    param_3[2] = ((((int)(char)(local_10 << 6) << 2 | (uint)local_12._1_1_) << 8 |
                  (uint)(byte)local_12) << 8 | (uint)local_13) << 5 | (uint)(local_17[3] >> 3);
    param_3[3] = ((((char)(local_c << 7) * 2 | (uint)local_d) << 8 | (uint)local_e) << 8 |
                 (uint)local_f) << 6 | (uint)(local_10 >> 2);
    param_3[4] = (int)CONCAT21(CONCAT11(local_9,local_a),local_b) << 7 | (uint)(local_c >> 1);
    return bVar2 + 1;
  case 0xf:
    *param_3 = 4;
    return bVar2 + 1;
  }
  param_3[1] = (uint)(bVar1 >> 4) | (int)(char)local_17[0] << 4;
  return bVar2 + 1;
}



// FUNCTION 143380740 FUN_143380740 body=309 status=ok
// SIG undefined FUN_143380740(void)

undefined8 FUN_143380740(longlong param_1,int *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar3 = FUN_143380060(param_1,*param_2,&local_28);
  *param_2 = *param_2 + iVar3;
  if (local_28 == 0) {
    param_2[3] = param_2[3] + local_24;
  }
  else if (local_28 == 1) {
    param_2[4] = param_2[4] + local_24;
  }
  else {
    if (local_28 != 2) {
      if (local_28 != 3) {
        return 0;
      }
      iVar3 = param_2[4];
      iVar1 = param_2[3];
      iVar2 = param_2[4];
      *param_3 = (float)(local_24 + param_2[3]) * *(float *)(param_1 + 8);
      param_3[1] = (float)(local_20 + iVar3) * *(float *)(param_1 + 8);
      param_3[2] = (float)(local_1c + iVar1) * *(float *)(param_1 + 8);
      param_3[3] = (float)(local_18 + iVar2) * *(float *)(param_1 + 8);
      param_2[3] = local_1c + iVar1;
      param_2[4] = local_18 + iVar2;
      return 2;
    }
    param_2[3] = param_2[3] + local_24;
    param_2[4] = param_2[4] + local_20;
  }
  *param_3 = (float)param_2[3] * *(float *)(param_1 + 8);
  param_3[1] = (float)param_2[4] * *(float *)(param_1 + 8);
  return 1;
}



// FUNCTION 143380880 FUN_143380880 body=163 status=ok
// SIG undefined FUN_143380880(void)

void FUN_143380880(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*param_2 + 0x50))(param_2,uVar2,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143380930 ResizeNoConstruct body=82 status=ok
// SIG undefined ResizeNoConstruct(void)

void Scaleform::
     ArrayDataBase<unsigned_char,Scaleform::AllocatorDH<unsigned_char,2>,Scaleform::ArrayDefaultPolicy>
     ::ResizeNoConstruct(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (param_3 < *(ulonglong *)(param_1 + 8)) {
    uVar1 = param_3;
    if (param_3 < *(ulonglong *)(param_1 + 0x10) >> 1) {
LAB_14338096e:
      FUN_143380880(param_1,param_2,uVar1);
      *(ulonglong *)(param_1 + 8) = param_3;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_3) {
    uVar1 = (param_3 >> 2) + param_3;
    goto LAB_14338096e;
  }
  *(ulonglong *)(param_1 + 8) = param_3;
  return;
}



// FUNCTION 143380990 FUN_143380990 body=171 status=ok
// SIG undefined FUN_143380990(void)

void FUN_143380990(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,float param_7,float param_8)

{
  float fVar1;
  undefined8 local_28;
  float local_20;
  
  local_28 = *(undefined8 *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x2c);
  local_20 = fVar1;
  FUN_1433828f0(&local_28,param_3);
  FUN_143382a30(&local_28,param_4);
  FUN_143382a30(&local_28,param_5);
  FUN_143382a30(&local_28,param_6);
  *(int *)(param_2 + 0xc) = (int)(fVar1 * param_7);
  *(int *)(param_2 + 4) = (int)(fVar1 * param_7);
  FUN_143382540(&local_28);
  *(int *)(param_2 + 0x10) = (int)(fVar1 * param_8);
  *(int *)(param_2 + 8) = (int)(fVar1 * param_8);
  FUN_143382540(&local_28);
  return;
}



// FUNCTION 143380a40 FUN_143380a40 body=105 status=ok
// SIG undefined FUN_143380a40(void)

undefined8 FUN_143380a40(longlong *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  param_1 = (longlong *)*param_1;
  uVar2 = param_1[1] + 1;
  if (uVar2 < (ulonglong)param_1[1]) {
    uVar3 = uVar2;
    if ((ulonglong)param_1[2] >> 1 <= uVar2) goto LAB_143380a87;
  }
  else {
    if (uVar2 <= (ulonglong)param_1[2]) goto LAB_143380a87;
    uVar3 = (uVar2 >> 2) + uVar2;
  }
  FUN_143380880(param_1,param_1[3],uVar3);
LAB_143380a87:
  param_1[1] = uVar2;
  puVar1 = (undefined1 *)(*param_1 + -1 + uVar2);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0xf;
  }
  return 1;
}



// FUNCTION 143380ab0 FUN_143380ab0 body=578 status=ok
// SIG undefined FUN_143380ab0(void)

undefined8 FUN_143380ab0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  
  plVar1 = (longlong *)*param_1;
  bVar5 = (char)param_2 << 4;
  uVar4 = plVar1[1] + 1;
  uVar6 = (undefined1)(param_2 >> 4);
  if (0xfff < param_2 + 0x800U) {
    if (uVar4 < (ulonglong)plVar1[1]) {
      uVar7 = uVar4;
      if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143380bbe:
        FUN_143380880(plVar1,plVar1[3],uVar7);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar4) {
      uVar7 = (uVar4 >> 2) + uVar4;
      goto LAB_143380bbe;
    }
    plVar1[1] = uVar4;
    pbVar2 = (byte *)(*plVar1 + -1 + uVar4);
    if (pbVar2 != (byte *)0x0) {
      *pbVar2 = bVar5 | 1;
    }
    plVar1 = (longlong *)*param_1;
    uVar4 = plVar1[1] + 1;
    if (uVar4 < (ulonglong)plVar1[1]) {
      uVar7 = uVar4;
      if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143380c12:
        FUN_143380880(plVar1,plVar1[3],uVar7);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar4) {
      uVar7 = (uVar4 >> 2) + uVar4;
      goto LAB_143380c12;
    }
    plVar1[1] = uVar4;
    puVar3 = (undefined1 *)(*plVar1 + -1 + uVar4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = uVar6;
    }
    plVar1 = (longlong *)*param_1;
    uVar4 = plVar1[1] + 1;
    if (uVar4 < (ulonglong)plVar1[1]) {
      uVar7 = uVar4;
      if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143380c66:
        FUN_143380880(plVar1,plVar1[3],uVar7);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar4) {
      uVar7 = (uVar4 >> 2) + uVar4;
      goto LAB_143380c66;
    }
    plVar1[1] = uVar4;
    puVar3 = (undefined1 *)(*plVar1 + -1 + uVar4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = (char)(param_2 >> 0xc);
    }
    param_1 = (longlong *)*param_1;
    uVar4 = param_1[1] + 1;
    if (uVar4 < (ulonglong)param_1[1]) {
      uVar7 = uVar4;
      if ((ulonglong)param_1[2] >> 1 <= uVar4) goto LAB_143380cc0;
    }
    else {
      if (uVar4 <= (ulonglong)param_1[2]) goto LAB_143380cc0;
      uVar7 = (uVar4 >> 2) + uVar4;
    }
    FUN_143380880(param_1,param_1[3],uVar7);
LAB_143380cc0:
    param_1[1] = uVar4;
    puVar3 = (undefined1 *)(*param_1 + -1 + uVar4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = (char)(param_2 >> 0x14);
    }
    return 3;
  }
  if (uVar4 < (ulonglong)plVar1[1]) {
    uVar7 = uVar4;
    if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143380b1d:
      FUN_143380880(plVar1,plVar1[3],uVar7);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar4) {
    uVar7 = (uVar4 >> 2) + uVar4;
    goto LAB_143380b1d;
  }
  plVar1[1] = uVar4;
  pbVar2 = (byte *)(*plVar1 + -1 + uVar4);
  if (pbVar2 != (byte *)0x0) {
    *pbVar2 = bVar5;
  }
  param_1 = (longlong *)*param_1;
  uVar4 = param_1[1] + 1;
  if (uVar4 < (ulonglong)param_1[1]) {
    uVar7 = uVar4;
    if ((ulonglong)param_1[2] >> 1 <= uVar4) goto LAB_143380b77;
  }
  else {
    if (uVar4 <= (ulonglong)param_1[2]) goto LAB_143380b77;
    uVar7 = (uVar4 >> 2) + uVar4;
  }
  FUN_143380880(param_1,param_1[3],uVar7);
LAB_143380b77:
  param_1[1] = uVar4;
  puVar3 = (undefined1 *)(*param_1 + -1 + uVar4);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = uVar6;
  }
  return 2;
}



// FUNCTION 143380d00 FUN_143380d00 body=1670 status=ok
// SIG undefined FUN_143380d00(void)

undefined8 FUN_143380d00(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  char cVar5;
  byte bVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar6;
  
  cVar2 = (char)param_3;
  cVar5 = (char)param_2;
  bVar6 = (byte)(param_2 >> 4);
  if ((0x3f < param_2 + 0x20U) || (0x3f < param_3 + 0x20U)) {
    if ((0x3ff < param_2 + 0x200U) || (0x3ff < param_3 + 0x200U)) {
      uVar8 = (undefined1)(param_3 >> 6);
      bVar7 = (byte)(param_2 >> 0xc);
      if ((0x3fff < param_2 + 0x2000U) || (0x3fff < param_3 + 0x2000U)) {
        plVar1 = (longlong *)*param_1;
        uVar9 = plVar1[1] + 1;
        if (uVar9 < (ulonglong)plVar1[1]) {
          uVar10 = uVar9;
          if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_1433810fb:
            FUN_143380880(plVar1,plVar1[3],uVar10);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar9) {
          uVar10 = (uVar9 >> 2) + uVar9;
          goto LAB_1433810fb;
        }
        plVar1[1] = uVar9;
        pbVar3 = (byte *)(*plVar1 + -1 + uVar9);
        if (pbVar3 != (byte *)0x0) {
          *pbVar3 = cVar5 << 4 | 7;
        }
        plVar1 = (longlong *)*param_1;
        uVar9 = plVar1[1] + 1;
        if (uVar9 < (ulonglong)plVar1[1]) {
          uVar10 = uVar9;
          if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_14338114f:
            FUN_143380880(plVar1,plVar1[3],uVar10);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar9) {
          uVar10 = (uVar9 >> 2) + uVar9;
          goto LAB_14338114f;
        }
        plVar1[1] = uVar9;
        pbVar3 = (byte *)(*plVar1 + -1 + uVar9);
        if (pbVar3 != (byte *)0x0) {
          *pbVar3 = bVar6;
        }
        plVar1 = (longlong *)*param_1;
        uVar9 = plVar1[1] + 1;
        if (uVar9 < (ulonglong)plVar1[1]) {
          uVar10 = uVar9;
          if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_1433811a3:
            FUN_143380880(plVar1,plVar1[3],uVar10);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar9) {
          uVar10 = (uVar9 >> 2) + uVar9;
          goto LAB_1433811a3;
        }
        plVar1[1] = uVar9;
        pbVar3 = (byte *)(*plVar1 + -1 + uVar9);
        if (pbVar3 != (byte *)0x0) {
          *pbVar3 = bVar7;
        }
        plVar1 = (longlong *)*param_1;
        uVar9 = plVar1[1] + 1;
        if (uVar9 < (ulonglong)plVar1[1]) {
          uVar10 = uVar9;
          if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_1433811f7:
            FUN_143380880(plVar1,plVar1[3],uVar10);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar9) {
          uVar10 = (uVar9 >> 2) + uVar9;
          goto LAB_1433811f7;
        }
        plVar1[1] = uVar9;
        puVar4 = (undefined1 *)(*plVar1 + -1 + uVar9);
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = (char)(param_2 >> 0x14);
        }
        plVar1 = (longlong *)*param_1;
        uVar9 = plVar1[1] + 1;
        if (uVar9 < (ulonglong)plVar1[1]) {
          uVar10 = uVar9;
          if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_143381255:
            FUN_143380880(plVar1,plVar1[3],uVar10);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar9) {
          uVar10 = (uVar9 >> 2) + uVar9;
          goto LAB_143381255;
        }
        plVar1[1] = uVar9;
        pbVar3 = (byte *)(*plVar1 + -1 + uVar9);
        if (pbVar3 != (byte *)0x0) {
          *pbVar3 = (byte)(param_2 >> 0x1c) & 3 | cVar2 << 2;
        }
        plVar1 = (longlong *)*param_1;
        uVar9 = plVar1[1] + 1;
        if (uVar9 < (ulonglong)plVar1[1]) {
          uVar10 = uVar9;
          if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_1433812a8:
            FUN_143380880(plVar1,plVar1[3],uVar10);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar9) {
          uVar10 = (uVar9 >> 2) + uVar9;
          goto LAB_1433812a8;
        }
        plVar1[1] = uVar9;
        puVar4 = (undefined1 *)(*plVar1 + -1 + uVar9);
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = uVar8;
        }
        plVar1 = (longlong *)*param_1;
        uVar9 = plVar1[1] + 1;
        if (uVar9 < (ulonglong)plVar1[1]) {
          uVar10 = uVar9;
          if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_1433812fc:
            FUN_143380880(plVar1,plVar1[3],uVar10);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar9) {
          uVar10 = (uVar9 >> 2) + uVar9;
          goto LAB_1433812fc;
        }
        plVar1[1] = uVar9;
        puVar4 = (undefined1 *)(*plVar1 + -1 + uVar9);
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = (char)(param_3 >> 0xe);
        }
        param_1 = (longlong *)*param_1;
        uVar9 = param_1[1] + 1;
        if (uVar9 < (ulonglong)param_1[1]) {
          uVar10 = uVar9;
          if ((ulonglong)param_1[2] >> 1 <= uVar9) goto LAB_143381356;
        }
        else {
          if (uVar9 <= (ulonglong)param_1[2]) goto LAB_143381356;
          uVar10 = (uVar9 >> 2) + uVar9;
        }
        FUN_143380880(param_1,param_1[3],uVar10);
LAB_143381356:
        param_1[1] = uVar9;
        puVar4 = (undefined1 *)(*param_1 + -1 + uVar9);
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = (char)(param_3 >> 0x16);
        }
        return 8;
      }
      plVar1 = (longlong *)*param_1;
      uVar9 = plVar1[1] + 1;
      if (uVar9 < (ulonglong)plVar1[1]) {
        uVar10 = uVar9;
        if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_143380f91:
          FUN_143380880(plVar1,plVar1[3],uVar10);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar9) {
        uVar10 = (uVar9 >> 2) + uVar9;
        goto LAB_143380f91;
      }
      plVar1[1] = uVar9;
      pbVar3 = (byte *)(*plVar1 + -1 + uVar9);
      if (pbVar3 != (byte *)0x0) {
        *pbVar3 = cVar5 << 4 | 6;
      }
      plVar1 = (longlong *)*param_1;
      uVar9 = plVar1[1] + 1;
      if (uVar9 < (ulonglong)plVar1[1]) {
        uVar10 = uVar9;
        if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_143380fe5:
          FUN_143380880(plVar1,plVar1[3],uVar10);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar9) {
        uVar10 = (uVar9 >> 2) + uVar9;
        goto LAB_143380fe5;
      }
      plVar1[1] = uVar9;
      pbVar3 = (byte *)(*plVar1 + -1 + uVar9);
      if (pbVar3 != (byte *)0x0) {
        *pbVar3 = bVar6;
      }
      plVar1 = (longlong *)*param_1;
      uVar9 = plVar1[1] + 1;
      if (uVar9 < (ulonglong)plVar1[1]) {
        uVar10 = uVar9;
        if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_143381045:
          FUN_143380880(plVar1,plVar1[3],uVar10);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar9) {
        uVar10 = (uVar9 >> 2) + uVar9;
        goto LAB_143381045;
      }
      plVar1[1] = uVar9;
      pbVar3 = (byte *)(*plVar1 + -1 + uVar9);
      if (pbVar3 != (byte *)0x0) {
        *pbVar3 = cVar2 << 2 | bVar7 & 3;
      }
      param_1 = (longlong *)*param_1;
      uVar9 = param_1[1] + 1;
      if (uVar9 < (ulonglong)param_1[1]) {
        uVar10 = uVar9;
        if ((ulonglong)param_1[2] >> 1 <= uVar9) goto LAB_14338109f;
      }
      else {
        if (uVar9 <= (ulonglong)param_1[2]) goto LAB_14338109f;
        uVar10 = (uVar9 >> 2) + uVar9;
      }
      FUN_143380880(param_1,param_1[3],uVar10);
LAB_14338109f:
      param_1[1] = uVar9;
      puVar4 = (undefined1 *)(*param_1 + -1 + uVar9);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = uVar8;
      }
      return 4;
    }
    plVar1 = (longlong *)*param_1;
    uVar9 = plVar1[1] + 1;
    if (uVar9 < (ulonglong)plVar1[1]) {
      uVar10 = uVar9;
      if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_143380e5b:
        FUN_143380880(plVar1,plVar1[3],uVar10);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar9) {
      uVar10 = (uVar9 >> 2) + uVar9;
      goto LAB_143380e5b;
    }
    plVar1[1] = uVar9;
    pbVar3 = (byte *)(*plVar1 + -1 + uVar9);
    if (pbVar3 != (byte *)0x0) {
      *pbVar3 = cVar5 << 4 | 5;
    }
    plVar1 = (longlong *)*param_1;
    uVar9 = plVar1[1] + 1;
    if (uVar9 < (ulonglong)plVar1[1]) {
      uVar10 = uVar9;
      if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_143380eb9:
        FUN_143380880(plVar1,plVar1[3],uVar10);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar9) {
      uVar10 = (uVar9 >> 2) + uVar9;
      goto LAB_143380eb9;
    }
    plVar1[1] = uVar9;
    pbVar3 = (byte *)(*plVar1 + -1 + uVar9);
    if (pbVar3 != (byte *)0x0) {
      *pbVar3 = bVar6 & 0x3f | cVar2 << 6;
    }
    param_1 = (longlong *)*param_1;
    uVar9 = param_1[1] + 1;
    if (uVar9 < (ulonglong)param_1[1]) {
      uVar10 = uVar9;
      if ((ulonglong)param_1[2] >> 1 <= uVar9) goto LAB_143380f12;
    }
    else {
      if (uVar9 <= (ulonglong)param_1[2]) goto LAB_143380f12;
      uVar10 = (uVar9 >> 2) + uVar9;
    }
    FUN_143380880(param_1,param_1[3],uVar10);
LAB_143380f12:
    param_1[1] = uVar9;
    puVar4 = (undefined1 *)(*param_1 + -1 + uVar9);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = (char)(param_3 >> 2);
    }
    return 3;
  }
  plVar1 = (longlong *)*param_1;
  uVar9 = plVar1[1] + 1;
  if (uVar9 < (ulonglong)plVar1[1]) {
    uVar10 = uVar9;
    if (uVar9 < (ulonglong)plVar1[2] >> 1) {
LAB_143380d79:
      FUN_143380880(plVar1,plVar1[3],uVar10);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar9) {
    uVar10 = (uVar9 >> 2) + uVar9;
    goto LAB_143380d79;
  }
  plVar1[1] = uVar9;
  pbVar3 = (byte *)(*plVar1 + -1 + uVar9);
  if (pbVar3 != (byte *)0x0) {
    *pbVar3 = cVar5 << 4 | 4;
  }
  param_1 = (longlong *)*param_1;
  uVar9 = param_1[1] + 1;
  if (uVar9 < (ulonglong)param_1[1]) {
    uVar10 = uVar9;
    if ((ulonglong)param_1[2] >> 1 <= uVar9) goto LAB_143380ddd;
  }
  else {
    if (uVar9 <= (ulonglong)param_1[2]) goto LAB_143380ddd;
    uVar10 = (uVar9 >> 2) + uVar9;
  }
  FUN_143380880(param_1,param_1[3],uVar10);
LAB_143380ddd:
  param_1[1] = uVar9;
  pbVar3 = (byte *)(*param_1 + -1 + uVar9);
  if (pbVar3 != (byte *)0x0) {
    *pbVar3 = bVar6 & 3 | cVar2 << 2;
  }
  return 2;
}



// FUNCTION 143381390 FUN_143381390 body=4526 status=ok
// SIG undefined FUN_143381390(void)

undefined8 FUN_143381390(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  char cVar7;
  byte bVar9;
  char cVar10;
  undefined1 uVar11;
  char cVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar8;
  
  iVar3 = param_2;
  if (param_2 < param_3) {
    iVar3 = param_3;
  }
  iVar4 = param_2;
  if (param_3 < param_2) {
    iVar4 = param_3;
  }
  if (param_4 < iVar4) {
    iVar4 = param_4;
  }
  if (iVar3 < param_4) {
    iVar3 = param_4;
  }
  if (param_5 < iVar4) {
    iVar4 = param_5;
  }
  if (iVar3 < param_5) {
    iVar3 = param_5;
  }
  cVar7 = (char)param_2;
  cVar10 = (char)param_5;
  cVar12 = (char)param_3;
  bVar8 = (byte)(param_2 >> 4);
  cVar2 = (char)param_4;
  bVar14 = (byte)(param_4 >> 2);
  if ((iVar4 < -0x10) || (0xf < iVar3)) {
    bVar13 = (byte)(param_3 >> 5);
    bVar15 = (byte)(param_4 >> 6);
    if ((iVar4 < -0x40) || (0x3f < iVar3)) {
      if ((iVar4 < -0x100) || (0xff < iVar3)) {
        if ((iVar4 < -0x400) || (0x3ff < iVar3)) {
          bVar9 = (byte)(param_2 >> 0xc);
          if ((iVar4 < -0x1000) || (0xfff < iVar3)) {
            bVar14 = (byte)(param_3 >> 0xd);
            bVar16 = (byte)(param_4 >> 0xe);
            uVar11 = (undefined1)(param_5 >> 7);
            if ((iVar4 < -0x4000) || (0x3fff < iVar3)) {
              plVar1 = (longlong *)*param_1;
              uVar18 = plVar1[1] + 1;
              if (uVar18 < (ulonglong)plVar1[1]) {
                uVar17 = uVar18;
                if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_1433820f9:
                  FUN_143380880(plVar1,plVar1[3],uVar17);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar18) {
                uVar17 = (uVar18 >> 2) + uVar18;
                goto LAB_1433820f9;
              }
              plVar1[1] = uVar18;
              pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
              if (pbVar5 != (byte *)0x0) {
                *pbVar5 = cVar7 << 4 | 0xe;
              }
              plVar1 = (longlong *)*param_1;
              uVar18 = plVar1[1] + 1;
              if (uVar18 < (ulonglong)plVar1[1]) {
                uVar17 = uVar18;
                if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143382156:
                  FUN_143380880(plVar1,plVar1[3],uVar17);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar18) {
                uVar17 = (uVar18 >> 2) + uVar18;
                goto LAB_143382156;
              }
              plVar1[1] = uVar18;
              pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
              if (pbVar5 != (byte *)0x0) {
                *pbVar5 = bVar8;
              }
              plVar1 = (longlong *)*param_1;
              uVar18 = plVar1[1] + 1;
              if (uVar18 < (ulonglong)plVar1[1]) {
                uVar17 = uVar18;
                if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_1433821b3:
                  FUN_143380880(plVar1,plVar1[3],uVar17);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar18) {
                uVar17 = (uVar18 >> 2) + uVar18;
                goto LAB_1433821b3;
              }
              plVar1[1] = uVar18;
              pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
              if (pbVar5 != (byte *)0x0) {
                *pbVar5 = bVar9;
              }
              plVar1 = (longlong *)*param_1;
              uVar18 = plVar1[1] + 1;
              if (uVar18 < (ulonglong)plVar1[1]) {
                uVar17 = uVar18;
                if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143382210:
                  FUN_143380880(plVar1,plVar1[3],uVar17);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar18) {
                uVar17 = (uVar18 >> 2) + uVar18;
                goto LAB_143382210;
              }
              plVar1[1] = uVar18;
              puVar6 = (undefined1 *)(*plVar1 + -1 + uVar18);
              if (puVar6 != (undefined1 *)0x0) {
                *puVar6 = (char)(param_2 >> 0x14);
              }
              plVar1 = (longlong *)*param_1;
              uVar18 = plVar1[1] + 1;
              if (uVar18 < (ulonglong)plVar1[1]) {
                uVar17 = uVar18;
                if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143382275:
                  FUN_143380880(plVar1,plVar1[3],uVar17);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar18) {
                uVar17 = (uVar18 >> 2) + uVar18;
                goto LAB_143382275;
              }
              plVar1[1] = uVar18;
              pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
              if (pbVar5 != (byte *)0x0) {
                *pbVar5 = (byte)(param_2 >> 0x1c) & 7 | cVar12 << 3;
              }
              plVar1 = (longlong *)*param_1;
              uVar18 = plVar1[1] + 1;
              if (uVar18 < (ulonglong)plVar1[1]) {
                uVar17 = uVar18;
                if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_1433822cc:
                  FUN_143380880(plVar1,plVar1[3],uVar17);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar18) {
                uVar17 = (uVar18 >> 2) + uVar18;
                goto LAB_1433822cc;
              }
              plVar1[1] = uVar18;
              pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
              if (pbVar5 != (byte *)0x0) {
                *pbVar5 = bVar13;
              }
              plVar1 = (longlong *)*param_1;
              uVar18 = plVar1[1] + 1;
              if (uVar18 < (ulonglong)plVar1[1]) {
                uVar17 = uVar18;
                if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143382322:
                  FUN_143380880(plVar1,plVar1[3],uVar17);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar18) {
                uVar17 = (uVar18 >> 2) + uVar18;
                goto LAB_143382322;
              }
              plVar1[1] = uVar18;
              pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
              if (pbVar5 != (byte *)0x0) {
                *pbVar5 = bVar14;
              }
              plVar1 = (longlong *)*param_1;
              uVar18 = plVar1[1] + 1;
              if (uVar18 < (ulonglong)plVar1[1]) {
                uVar17 = uVar18;
                if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143382378:
                  FUN_143380880(plVar1,plVar1[3],uVar17);
                }
              }
              else if ((ulonglong)plVar1[2] < uVar18) {
                uVar17 = (uVar18 >> 2) + uVar18;
                goto LAB_143382378;
              }
              plVar1[1] = uVar18;
              puVar6 = (undefined1 *)(*plVar1 + -1 + uVar18);
              if (puVar6 != (undefined1 *)0x0) {
                *puVar6 = (char)(param_3 >> 0x15);
              }
              plVar1 = (longlong *)*param_1;
              uVar18 = plVar1[1] + 1;
              if (uVar18 < (ulonglong)plVar1[1]) {
                uVar17 = uVar18;
                if ((ulonglong)plVar1[2] >> 1 <= uVar18) goto LAB_1433823e0;
              }
              else {
                if (uVar18 <= (ulonglong)plVar1[2]) goto LAB_1433823e0;
                uVar17 = (uVar18 >> 2) + uVar18;
              }
              FUN_143380880(plVar1,plVar1[3],uVar17);
LAB_1433823e0:
              plVar1[1] = uVar18;
              pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
              if (pbVar5 != (byte *)0x0) {
                *pbVar5 = (byte)(param_3 >> 0x1d) & 3 | cVar2 << 2;
              }
              plVar1 = (longlong *)*param_1;
              Scaleform::
              ArrayDataBase<unsigned_char,Scaleform::AllocatorDH<unsigned_char,2>,Scaleform::ArrayDefaultPolicy>
              ::ResizeNoConstruct(plVar1,plVar1[3],plVar1[1] + 1);
              pbVar5 = (byte *)(*plVar1 + -1 + plVar1[1]);
              if (pbVar5 != (byte *)0x0) {
                *pbVar5 = bVar15;
              }
              plVar1 = (longlong *)*param_1;
              Scaleform::
              ArrayDataBase<unsigned_char,Scaleform::AllocatorDH<unsigned_char,2>,Scaleform::ArrayDefaultPolicy>
              ::ResizeNoConstruct(plVar1,plVar1[3],plVar1[1] + 1);
              pbVar5 = (byte *)(*plVar1 + -1 + plVar1[1]);
              if (pbVar5 != (byte *)0x0) {
                *pbVar5 = bVar16;
              }
              plVar1 = (longlong *)*param_1;
              Scaleform::
              ArrayDataBase<unsigned_char,Scaleform::AllocatorDH<unsigned_char,2>,Scaleform::ArrayDefaultPolicy>
              ::ResizeNoConstruct(plVar1,plVar1[3],plVar1[1] + 1);
              puVar6 = (undefined1 *)(plVar1[1] + -1 + *plVar1);
              if (puVar6 != (undefined1 *)0x0) {
                *puVar6 = (char)(param_4 >> 0x16);
              }
              plVar1 = (longlong *)*param_1;
              Scaleform::
              ArrayDataBase<unsigned_char,Scaleform::AllocatorDH<unsigned_char,2>,Scaleform::ArrayDefaultPolicy>
              ::ResizeNoConstruct(plVar1,plVar1[3],plVar1[1] + 1);
              pbVar5 = (byte *)(plVar1[1] + -1 + *plVar1);
              if (pbVar5 != (byte *)0x0) {
                *pbVar5 = (byte)(param_4 >> 0x1e) & 1 | cVar10 * '\x02';
              }
              plVar1 = (longlong *)*param_1;
              Scaleform::
              ArrayDataBase<unsigned_char,Scaleform::AllocatorDH<unsigned_char,2>,Scaleform::ArrayDefaultPolicy>
              ::ResizeNoConstruct(plVar1,plVar1[3],plVar1[1] + 1);
              puVar6 = (undefined1 *)(*plVar1 + -1 + plVar1[1]);
              if (puVar6 != (undefined1 *)0x0) {
                *puVar6 = uVar11;
              }
              plVar1 = (longlong *)*param_1;
              Scaleform::
              ArrayDataBase<unsigned_char,Scaleform::AllocatorDH<unsigned_char,2>,Scaleform::ArrayDefaultPolicy>
              ::ResizeNoConstruct(plVar1,plVar1[3],plVar1[1] + 1);
              puVar6 = (undefined1 *)(*plVar1 + -1 + plVar1[1]);
              if (puVar6 != (undefined1 *)0x0) {
                *puVar6 = (char)(param_5 >> 0xf);
              }
              param_1 = (longlong *)*param_1;
              Scaleform::
              ArrayDataBase<unsigned_char,Scaleform::AllocatorDH<unsigned_char,2>,Scaleform::ArrayDefaultPolicy>
              ::ResizeNoConstruct(param_1,param_1[3],param_1[1] + 1);
              puVar6 = (undefined1 *)(*param_1 + -1 + param_1[1]);
              if (puVar6 != (undefined1 *)0x0) {
                *puVar6 = (char)(param_5 >> 0x17);
              }
              return 0x10;
            }
            plVar1 = (longlong *)*param_1;
            uVar18 = plVar1[1] + 1;
            if (uVar18 < (ulonglong)plVar1[1]) {
              uVar17 = uVar18;
              if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381e0f:
                FUN_143380880(plVar1,plVar1[3],uVar17);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar18) {
              uVar17 = (uVar18 >> 2) + uVar18;
              goto LAB_143381e0f;
            }
            plVar1[1] = uVar18;
            pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
            if (pbVar5 != (byte *)0x0) {
              *pbVar5 = cVar7 << 4 | 0xd;
            }
            plVar1 = (longlong *)*param_1;
            uVar18 = plVar1[1] + 1;
            if (uVar18 < (ulonglong)plVar1[1]) {
              uVar17 = uVar18;
              if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381e6c:
                FUN_143380880(plVar1,plVar1[3],uVar17);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar18) {
              uVar17 = (uVar18 >> 2) + uVar18;
              goto LAB_143381e6c;
            }
            plVar1[1] = uVar18;
            pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
            if (pbVar5 != (byte *)0x0) {
              *pbVar5 = bVar8;
            }
            plVar1 = (longlong *)*param_1;
            uVar18 = plVar1[1] + 1;
            if (uVar18 < (ulonglong)plVar1[1]) {
              uVar17 = uVar18;
              if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381ed1:
                FUN_143380880(plVar1,plVar1[3],uVar17);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar18) {
              uVar17 = (uVar18 >> 2) + uVar18;
              goto LAB_143381ed1;
            }
            plVar1[1] = uVar18;
            pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
            if (pbVar5 != (byte *)0x0) {
              *pbVar5 = bVar9 & 7 | cVar12 << 3;
            }
            plVar1 = (longlong *)*param_1;
            uVar18 = plVar1[1] + 1;
            if (uVar18 < (ulonglong)plVar1[1]) {
              uVar17 = uVar18;
              if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381f28:
                FUN_143380880(plVar1,plVar1[3],uVar17);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar18) {
              uVar17 = (uVar18 >> 2) + uVar18;
              goto LAB_143381f28;
            }
            plVar1[1] = uVar18;
            pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
            if (pbVar5 != (byte *)0x0) {
              *pbVar5 = bVar13;
            }
            plVar1 = (longlong *)*param_1;
            uVar18 = plVar1[1] + 1;
            if (uVar18 < (ulonglong)plVar1[1]) {
              uVar17 = uVar18;
              if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381f88:
                FUN_143380880(plVar1,plVar1[3],uVar17);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar18) {
              uVar17 = (uVar18 >> 2) + uVar18;
              goto LAB_143381f88;
            }
            plVar1[1] = uVar18;
            pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
            if (pbVar5 != (byte *)0x0) {
              *pbVar5 = bVar14 & 3 | cVar2 << 2;
            }
            plVar1 = (longlong *)*param_1;
            uVar18 = plVar1[1] + 1;
            if (uVar18 < (ulonglong)plVar1[1]) {
              uVar17 = uVar18;
              if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381fde:
                FUN_143380880(plVar1,plVar1[3],uVar17);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar18) {
              uVar17 = (uVar18 >> 2) + uVar18;
              goto LAB_143381fde;
            }
            plVar1[1] = uVar18;
            pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
            if (pbVar5 != (byte *)0x0) {
              *pbVar5 = bVar15;
            }
            plVar1 = (longlong *)*param_1;
            uVar18 = plVar1[1] + 1;
            if (uVar18 < (ulonglong)plVar1[1]) {
              uVar17 = uVar18;
              if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_14338203d:
                FUN_143380880(plVar1,plVar1[3],uVar17);
              }
            }
            else if ((ulonglong)plVar1[2] < uVar18) {
              uVar17 = (uVar18 >> 2) + uVar18;
              goto LAB_14338203d;
            }
            plVar1[1] = uVar18;
            pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
            if (pbVar5 != (byte *)0x0) {
              *pbVar5 = bVar16 & 1 | cVar10 * '\x02';
            }
            param_1 = (longlong *)*param_1;
            uVar18 = param_1[1] + 1;
            if (uVar18 < (ulonglong)param_1[1]) {
              uVar17 = uVar18;
              if ((ulonglong)param_1[2] >> 1 <= uVar18) goto LAB_143382097;
            }
            else {
              if (uVar18 <= (ulonglong)param_1[2]) goto LAB_143382097;
              uVar17 = (uVar18 >> 2) + uVar18;
            }
            FUN_143380880(param_1,param_1[3],uVar17);
LAB_143382097:
            param_1[1] = uVar18;
            puVar6 = (undefined1 *)(*param_1 + -1 + uVar18);
            if (puVar6 != (undefined1 *)0x0) {
              *puVar6 = uVar11;
            }
            return 8;
          }
          plVar1 = (longlong *)*param_1;
          uVar18 = plVar1[1] + 1;
          if (uVar18 < (ulonglong)plVar1[1]) {
            uVar17 = uVar18;
            if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381b64:
              FUN_143380880(plVar1,plVar1[3],uVar17);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar18) {
            uVar17 = (uVar18 >> 2) + uVar18;
            goto LAB_143381b64;
          }
          plVar1[1] = uVar18;
          pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
          if (pbVar5 != (byte *)0x0) {
            *pbVar5 = cVar7 << 4 | 0xc;
          }
          plVar1 = (longlong *)*param_1;
          uVar18 = plVar1[1] + 1;
          if (uVar18 < (ulonglong)plVar1[1]) {
            uVar17 = uVar18;
            if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381bc1:
              FUN_143380880(plVar1,plVar1[3],uVar17);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar18) {
            uVar17 = (uVar18 >> 2) + uVar18;
            goto LAB_143381bc1;
          }
          plVar1[1] = uVar18;
          pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
          if (pbVar5 != (byte *)0x0) {
            *pbVar5 = bVar8;
          }
          plVar1 = (longlong *)*param_1;
          uVar18 = plVar1[1] + 1;
          if (uVar18 < (ulonglong)plVar1[1]) {
            uVar17 = uVar18;
            if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381c25:
              FUN_143380880(plVar1,plVar1[3],uVar17);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar18) {
            uVar17 = (uVar18 >> 2) + uVar18;
            goto LAB_143381c25;
          }
          plVar1[1] = uVar18;
          pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
          if (pbVar5 != (byte *)0x0) {
            *pbVar5 = bVar9 & 1 | cVar12 * '\x02';
          }
          plVar1 = (longlong *)*param_1;
          uVar18 = plVar1[1] + 1;
          if (uVar18 < (ulonglong)plVar1[1]) {
            uVar17 = uVar18;
            if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381c86:
              FUN_143380880(plVar1,plVar1[3],uVar17);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar18) {
            uVar17 = (uVar18 >> 2) + uVar18;
            goto LAB_143381c86;
          }
          plVar1[1] = uVar18;
          pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
          if (pbVar5 != (byte *)0x0) {
            *pbVar5 = (byte)(param_3 >> 7) & 0x3f | cVar2 << 6;
          }
          plVar1 = (longlong *)*param_1;
          uVar18 = plVar1[1] + 1;
          if (uVar18 < (ulonglong)plVar1[1]) {
            uVar17 = uVar18;
            if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381cdc:
              FUN_143380880(plVar1,plVar1[3],uVar17);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar18) {
            uVar17 = (uVar18 >> 2) + uVar18;
            goto LAB_143381cdc;
          }
          plVar1[1] = uVar18;
          pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
          if (pbVar5 != (byte *)0x0) {
            *pbVar5 = bVar14;
          }
          plVar1 = (longlong *)*param_1;
          uVar18 = plVar1[1] + 1;
          if (uVar18 < (ulonglong)plVar1[1]) {
            uVar17 = uVar18;
            if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381d3c:
              FUN_143380880(plVar1,plVar1[3],uVar17);
            }
          }
          else if ((ulonglong)plVar1[2] < uVar18) {
            uVar17 = (uVar18 >> 2) + uVar18;
            goto LAB_143381d3c;
          }
          plVar1[1] = uVar18;
          pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
          if (pbVar5 != (byte *)0x0) {
            *pbVar5 = (byte)(param_4 >> 10) & 7 | cVar10 << 3;
          }
          param_1 = (longlong *)*param_1;
          uVar18 = param_1[1] + 1;
          if (uVar18 < (ulonglong)param_1[1]) {
            uVar17 = uVar18;
            if ((ulonglong)param_1[2] >> 1 <= uVar18) goto LAB_143381d96;
          }
          else {
            if (uVar18 <= (ulonglong)param_1[2]) goto LAB_143381d96;
            uVar17 = (uVar18 >> 2) + uVar18;
          }
          FUN_143380880(param_1,param_1[3],uVar17);
LAB_143381d96:
          param_1[1] = uVar18;
          puVar6 = (undefined1 *)(*param_1 + -1 + uVar18);
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = (char)(param_5 >> 5);
          }
          return 7;
        }
        plVar1 = (longlong *)*param_1;
        uVar18 = plVar1[1] + 1;
        if (uVar18 < (ulonglong)plVar1[1]) {
          uVar17 = uVar18;
          if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381916:
            FUN_143380880(plVar1,plVar1[3],uVar17);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar18) {
          uVar17 = (uVar18 >> 2) + uVar18;
          goto LAB_143381916;
        }
        plVar1[1] = uVar18;
        pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = cVar7 << 4 | 0xb;
        }
        plVar1 = (longlong *)*param_1;
        uVar18 = plVar1[1] + 1;
        if (uVar18 < (ulonglong)plVar1[1]) {
          uVar17 = uVar18;
          if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_14338197b:
            FUN_143380880(plVar1,plVar1[3],uVar17);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar18) {
          uVar17 = (uVar18 >> 2) + uVar18;
          goto LAB_14338197b;
        }
        plVar1[1] = uVar18;
        pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = bVar8 & 0x7f | cVar12 << 7;
        }
        plVar1 = (longlong *)*param_1;
        uVar18 = plVar1[1] + 1;
        if (uVar18 < (ulonglong)plVar1[1]) {
          uVar17 = uVar18;
          if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_1433819d1:
            FUN_143380880(plVar1,plVar1[3],uVar17);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar18) {
          uVar17 = (uVar18 >> 2) + uVar18;
          goto LAB_1433819d1;
        }
        plVar1[1] = uVar18;
        puVar6 = (undefined1 *)(*plVar1 + -1 + uVar18);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = (char)(param_3 >> 1);
        }
        plVar1 = (longlong *)*param_1;
        uVar18 = plVar1[1] + 1;
        if (uVar18 < (ulonglong)plVar1[1]) {
          uVar17 = uVar18;
          if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381a31:
            FUN_143380880(plVar1,plVar1[3],uVar17);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar18) {
          uVar17 = (uVar18 >> 2) + uVar18;
          goto LAB_143381a31;
        }
        plVar1[1] = uVar18;
        pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = (byte)(param_3 >> 9) & 3 | cVar2 << 2;
        }
        plVar1 = (longlong *)*param_1;
        uVar18 = plVar1[1] + 1;
        if (uVar18 < (ulonglong)plVar1[1]) {
          uVar17 = uVar18;
          if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381a91:
            FUN_143380880(plVar1,plVar1[3],uVar17);
          }
        }
        else if ((ulonglong)plVar1[2] < uVar18) {
          uVar17 = (uVar18 >> 2) + uVar18;
          goto LAB_143381a91;
        }
        plVar1[1] = uVar18;
        pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = bVar15 & 0x1f | cVar10 << 5;
        }
        param_1 = (longlong *)*param_1;
        uVar18 = param_1[1] + 1;
        if (uVar18 < (ulonglong)param_1[1]) {
          uVar17 = uVar18;
          if ((ulonglong)param_1[2] >> 1 <= uVar18) goto LAB_143381aeb;
        }
        else {
          if (uVar18 <= (ulonglong)param_1[2]) goto LAB_143381aeb;
          uVar17 = (uVar18 >> 2) + uVar18;
        }
        FUN_143380880(param_1,param_1[3],uVar17);
LAB_143381aeb:
        param_1[1] = uVar18;
        puVar6 = (undefined1 *)(*param_1 + -1 + uVar18);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = (char)(param_5 >> 3);
        }
        return 6;
      }
      plVar1 = (longlong *)*param_1;
      uVar18 = plVar1[1] + 1;
      if (uVar18 < (ulonglong)plVar1[1]) {
        uVar17 = uVar18;
        if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_14338171e:
          FUN_143380880(plVar1,plVar1[3],uVar17);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar18) {
        uVar17 = (uVar18 >> 2) + uVar18;
        goto LAB_14338171e;
      }
      plVar1[1] = uVar18;
      pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = cVar7 << 4 | 10;
      }
      plVar1 = (longlong *)*param_1;
      uVar18 = plVar1[1] + 1;
      if (uVar18 < (ulonglong)plVar1[1]) {
        uVar17 = uVar18;
        if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381783:
          FUN_143380880(plVar1,plVar1[3],uVar17);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar18) {
        uVar17 = (uVar18 >> 2) + uVar18;
        goto LAB_143381783;
      }
      plVar1[1] = uVar18;
      pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = bVar8 & 0x1f | cVar12 << 5;
      }
      plVar1 = (longlong *)*param_1;
      uVar18 = plVar1[1] + 1;
      if (uVar18 < (ulonglong)plVar1[1]) {
        uVar17 = uVar18;
        if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_1433817e4:
          FUN_143380880(plVar1,plVar1[3],uVar17);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar18) {
        uVar17 = (uVar18 >> 2) + uVar18;
        goto LAB_1433817e4;
      }
      plVar1[1] = uVar18;
      pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = (byte)(param_3 >> 3) & 0x3f | cVar2 << 6;
      }
      plVar1 = (longlong *)*param_1;
      uVar18 = plVar1[1] + 1;
      if (uVar18 < (ulonglong)plVar1[1]) {
        uVar17 = uVar18;
        if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381844:
          FUN_143380880(plVar1,plVar1[3],uVar17);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar18) {
        uVar17 = (uVar18 >> 2) + uVar18;
        goto LAB_143381844;
      }
      plVar1[1] = uVar18;
      pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = bVar14 & 0x7f | cVar10 << 7;
      }
      param_1 = (longlong *)*param_1;
      uVar18 = param_1[1] + 1;
      if (uVar18 < (ulonglong)param_1[1]) {
        uVar17 = uVar18;
        if ((ulonglong)param_1[2] >> 1 <= uVar18) goto LAB_14338189d;
      }
      else {
        if (uVar18 <= (ulonglong)param_1[2]) goto LAB_14338189d;
        uVar17 = (uVar18 >> 2) + uVar18;
      }
      FUN_143380880(param_1,param_1[3],uVar17);
LAB_14338189d:
      param_1[1] = uVar18;
      puVar6 = (undefined1 *)(*param_1 + -1 + uVar18);
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = (char)(param_5 >> 1);
      }
      return 5;
    }
    plVar1 = (longlong *)*param_1;
    uVar18 = plVar1[1] + 1;
    if (uVar18 < (ulonglong)plVar1[1]) {
      uVar17 = uVar18;
      if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_14338157b:
        FUN_143380880(plVar1,plVar1[3],uVar17);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar18) {
      uVar17 = (uVar18 >> 2) + uVar18;
      goto LAB_14338157b;
    }
    plVar1[1] = uVar18;
    pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = cVar7 << 4 | 9;
    }
    plVar1 = (longlong *)*param_1;
    uVar18 = plVar1[1] + 1;
    if (uVar18 < (ulonglong)plVar1[1]) {
      uVar17 = uVar18;
      if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_1433815e0:
        FUN_143380880(plVar1,plVar1[3],uVar17);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar18) {
      uVar17 = (uVar18 >> 2) + uVar18;
      goto LAB_1433815e0;
    }
    plVar1[1] = uVar18;
    pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = bVar8 & 7 | cVar12 << 3;
    }
    plVar1 = (longlong *)*param_1;
    uVar18 = plVar1[1] + 1;
    if (uVar18 < (ulonglong)plVar1[1]) {
      uVar17 = uVar18;
      if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_143381641:
        FUN_143380880(plVar1,plVar1[3],uVar17);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar18) {
      uVar17 = (uVar18 >> 2) + uVar18;
      goto LAB_143381641;
    }
    plVar1[1] = uVar18;
    pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = bVar13 & 3 | cVar2 << 2;
    }
    param_1 = (longlong *)*param_1;
    uVar18 = param_1[1] + 1;
    if (uVar18 < (ulonglong)param_1[1]) {
      uVar17 = uVar18;
      if ((ulonglong)param_1[2] >> 1 <= uVar18) goto LAB_1433816a5;
    }
    else {
      if (uVar18 <= (ulonglong)param_1[2]) goto LAB_1433816a5;
      uVar17 = (uVar18 >> 2) + uVar18;
    }
    FUN_143380880(param_1,param_1[3],uVar17);
LAB_1433816a5:
    param_1[1] = uVar18;
    pbVar5 = (byte *)(*param_1 + -1 + uVar18);
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = bVar15 & 1 | cVar10 * '\x02';
    }
    return 4;
  }
  plVar1 = (longlong *)*param_1;
  uVar18 = plVar1[1] + 1;
  if (uVar18 < (ulonglong)plVar1[1]) {
    uVar17 = uVar18;
    if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_14338143a:
      FUN_143380880(plVar1,plVar1[3],uVar17);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar18) {
    uVar17 = (uVar18 >> 2) + uVar18;
    goto LAB_14338143a;
  }
  plVar1[1] = uVar18;
  pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
  if (pbVar5 != (byte *)0x0) {
    *pbVar5 = cVar7 << 4 | 8;
  }
  plVar1 = (longlong *)*param_1;
  uVar18 = plVar1[1] + 1;
  if (uVar18 < (ulonglong)plVar1[1]) {
    uVar17 = uVar18;
    if (uVar18 < (ulonglong)plVar1[2] >> 1) {
LAB_1433814a3:
      FUN_143380880(plVar1,plVar1[3],uVar17);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar18) {
    uVar17 = (uVar18 >> 2) + uVar18;
    goto LAB_1433814a3;
  }
  plVar1[1] = uVar18;
  pbVar5 = (byte *)(*plVar1 + -1 + uVar18);
  if (pbVar5 != (byte *)0x0) {
    *pbVar5 = bVar8 & 1 | cVar12 * '\x02' & 0x3fU | cVar2 << 6;
  }
  param_1 = (longlong *)*param_1;
  uVar18 = param_1[1] + 1;
  if (uVar18 < (ulonglong)param_1[1]) {
    uVar17 = uVar18;
    if ((ulonglong)param_1[2] >> 1 <= uVar18) goto LAB_143381507;
  }
  else {
    if (uVar18 <= (ulonglong)param_1[2]) goto LAB_143381507;
    uVar17 = (uVar18 >> 2) + uVar18;
  }
  FUN_143380880(param_1,param_1[3],uVar17);
LAB_143381507:
  param_1[1] = uVar18;
  pbVar5 = (byte *)(*param_1 + -1 + uVar18);
  if (pbVar5 != (byte *)0x0) {
    *pbVar5 = bVar14 & 7 | cVar10 << 3;
  }
  return 3;
}



// FUNCTION 143382540 FUN_143382540 body=933 status=ok
// SIG undefined FUN_143382540(void)

undefined8 FUN_143382540(longlong *param_1,int param_2)

{
  longlong *plVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  plVar1 = (longlong *)*param_1;
  uVar8 = plVar1[1] + 1;
  if (param_2 + 0x20U < 0x40) {
    if (uVar8 < (ulonglong)plVar1[1]) {
      uVar9 = uVar8;
      if ((ulonglong)plVar1[2] >> 1 <= uVar8) goto LAB_1433825a2;
    }
    else {
      if (uVar8 <= (ulonglong)plVar1[2]) goto LAB_1433825a2;
      uVar9 = (uVar8 >> 2) + uVar8;
    }
    FUN_143380880(plVar1,plVar1[3],uVar9);
LAB_1433825a2:
    plVar1[1] = uVar8;
    pcVar2 = (char *)(*plVar1 + -1 + uVar8);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = (char)param_2 << 2;
    }
    return 1;
  }
  bVar7 = (char)param_2 << 2;
  uVar5 = (undefined1)(param_2 >> 6);
  if (0x3fff < param_2 + 0x2000U) {
    uVar6 = (undefined1)(param_2 >> 0xe);
    if (0x3fffff < param_2 + 0x200000U) {
      if (uVar8 < (ulonglong)plVar1[1]) {
        uVar9 = uVar8;
        if (uVar8 < (ulonglong)plVar1[2] >> 1) {
LAB_1433827b2:
          FUN_143380880(plVar1,plVar1[3],uVar9);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar8) {
        uVar9 = (uVar8 >> 2) + uVar8;
        goto LAB_1433827b2;
      }
      plVar1[1] = uVar8;
      pbVar3 = (byte *)(*plVar1 + -1 + uVar8);
      if (pbVar3 != (byte *)0x0) {
        *pbVar3 = bVar7 | 3;
      }
      plVar1 = (longlong *)*param_1;
      uVar8 = plVar1[1] + 1;
      if (uVar8 < (ulonglong)plVar1[1]) {
        uVar9 = uVar8;
        if (uVar8 < (ulonglong)plVar1[2] >> 1) {
LAB_143382806:
          FUN_143380880(plVar1,plVar1[3],uVar9);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar8) {
        uVar9 = (uVar8 >> 2) + uVar8;
        goto LAB_143382806;
      }
      plVar1[1] = uVar8;
      puVar4 = (undefined1 *)(*plVar1 + -1 + uVar8);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = uVar5;
      }
      plVar1 = (longlong *)*param_1;
      uVar8 = plVar1[1] + 1;
      if (uVar8 < (ulonglong)plVar1[1]) {
        uVar9 = uVar8;
        if (uVar8 < (ulonglong)plVar1[2] >> 1) {
LAB_14338285a:
          FUN_143380880(plVar1,plVar1[3],uVar9);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar8) {
        uVar9 = (uVar8 >> 2) + uVar8;
        goto LAB_14338285a;
      }
      plVar1[1] = uVar8;
      puVar4 = (undefined1 *)(*plVar1 + -1 + uVar8);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = uVar6;
      }
      param_1 = (longlong *)*param_1;
      uVar8 = param_1[1] + 1;
      if (uVar8 < (ulonglong)param_1[1]) {
        uVar9 = uVar8;
        if ((ulonglong)param_1[2] >> 1 <= uVar8) goto LAB_1433828b4;
      }
      else {
        if (uVar8 <= (ulonglong)param_1[2]) goto LAB_1433828b4;
        uVar9 = (uVar8 >> 2) + uVar8;
      }
      FUN_143380880(param_1,param_1[3],uVar9);
LAB_1433828b4:
      param_1[1] = uVar8;
      puVar4 = (undefined1 *)(*param_1 + -1 + uVar8);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = (char)(param_2 >> 0x16);
      }
      return 4;
    }
    if (uVar8 < (ulonglong)plVar1[1]) {
      uVar9 = uVar8;
      if (uVar8 < (ulonglong)plVar1[2] >> 1) {
LAB_1433826be:
        FUN_143380880(plVar1,plVar1[3],uVar9);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar8) {
      uVar9 = (uVar8 >> 2) + uVar8;
      goto LAB_1433826be;
    }
    plVar1[1] = uVar8;
    pbVar3 = (byte *)(*plVar1 + -1 + uVar8);
    if (pbVar3 != (byte *)0x0) {
      *pbVar3 = bVar7 | 2;
    }
    plVar1 = (longlong *)*param_1;
    uVar8 = plVar1[1] + 1;
    if (uVar8 < (ulonglong)plVar1[1]) {
      uVar9 = uVar8;
      if (uVar8 < (ulonglong)plVar1[2] >> 1) {
LAB_143382712:
        FUN_143380880(plVar1,plVar1[3],uVar9);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar8) {
      uVar9 = (uVar8 >> 2) + uVar8;
      goto LAB_143382712;
    }
    plVar1[1] = uVar8;
    puVar4 = (undefined1 *)(*plVar1 + -1 + uVar8);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = uVar5;
    }
    param_1 = (longlong *)*param_1;
    uVar8 = param_1[1] + 1;
    if (uVar8 < (ulonglong)param_1[1]) {
      uVar9 = uVar8;
      if ((ulonglong)param_1[2] >> 1 <= uVar8) goto LAB_14338276c;
    }
    else {
      if (uVar8 <= (ulonglong)param_1[2]) goto LAB_14338276c;
      uVar9 = (uVar8 >> 2) + uVar8;
    }
    FUN_143380880(param_1,param_1[3],uVar9);
LAB_14338276c:
    param_1[1] = uVar8;
    puVar4 = (undefined1 *)(*param_1 + -1 + uVar8);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = uVar6;
    }
    return 3;
  }
  if (uVar8 < (ulonglong)plVar1[1]) {
    uVar9 = uVar8;
    if (uVar8 < (ulonglong)plVar1[2] >> 1) {
LAB_143382609:
      FUN_143380880(plVar1,plVar1[3],uVar9);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar8) {
    uVar9 = (uVar8 >> 2) + uVar8;
    goto LAB_143382609;
  }
  plVar1[1] = uVar8;
  pbVar3 = (byte *)(*plVar1 + -1 + uVar8);
  if (pbVar3 != (byte *)0x0) {
    *pbVar3 = bVar7 | 1;
  }
  param_1 = (longlong *)*param_1;
  uVar8 = param_1[1] + 1;
  if (uVar8 < (ulonglong)param_1[1]) {
    uVar9 = uVar8;
    if ((ulonglong)param_1[2] >> 1 <= uVar8) goto LAB_143382663;
  }
  else {
    if (uVar8 <= (ulonglong)param_1[2]) goto LAB_143382663;
    uVar9 = (uVar8 >> 2) + uVar8;
  }
  FUN_143380880(param_1,param_1[3],uVar9);
LAB_143382663:
  param_1[1] = uVar8;
  puVar4 = (undefined1 *)(*param_1 + -1 + uVar8);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = uVar5;
  }
  return 2;
}



// FUNCTION 1433828f0 FUN_1433828f0 body=318 status=ok
// SIG undefined FUN_1433828f0(void)

undefined8 FUN_1433828f0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  plVar1 = (longlong *)*param_1;
  uVar5 = plVar1[1] + 1;
  if (param_2 < 0x80) {
    if (uVar5 < (ulonglong)plVar1[1]) {
      uVar6 = uVar5;
      if ((ulonglong)plVar1[2] >> 1 <= uVar5) goto LAB_14338294f;
    }
    else {
      if (uVar5 <= (ulonglong)plVar1[2]) goto LAB_14338294f;
      uVar6 = (uVar5 >> 2) + uVar5;
    }
    FUN_143380880(plVar1,plVar1[3],uVar6);
LAB_14338294f:
    plVar1[1] = uVar5;
    pcVar2 = (char *)(*plVar1 + -1 + uVar5);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = (char)param_2 * '\x02';
    }
    return 1;
  }
  if (uVar5 < (ulonglong)plVar1[1]) {
    uVar6 = uVar5;
    if (uVar5 < (ulonglong)plVar1[2] >> 1) {
LAB_1433829a2:
      FUN_143380880(plVar1,plVar1[3],uVar6);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar5) {
    uVar6 = (uVar5 >> 2) + uVar5;
    goto LAB_1433829a2;
  }
  plVar1[1] = uVar5;
  pbVar3 = (byte *)(*plVar1 + -1 + uVar5);
  if (pbVar3 != (byte *)0x0) {
    *pbVar3 = (char)param_2 * '\x02' | 1;
  }
  param_1 = (longlong *)*param_1;
  uVar5 = param_1[1] + 1;
  if (uVar5 < (ulonglong)param_1[1]) {
    uVar6 = uVar5;
    if ((ulonglong)param_1[2] >> 1 <= uVar5) goto LAB_143382a01;
  }
  else {
    if (uVar5 <= (ulonglong)param_1[2]) goto LAB_143382a01;
    uVar6 = (uVar5 >> 2) + uVar5;
  }
  FUN_143380880(param_1,param_1[3],uVar6);
LAB_143382a01:
  param_1[1] = uVar5;
  puVar4 = (undefined1 *)(*param_1 + -1 + uVar5);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = (char)(param_2 >> 7);
  }
  return 2;
}



// FUNCTION 143382a30 FUN_143382a30 body=912 status=ok
// SIG undefined FUN_143382a30(void)

undefined8 FUN_143382a30(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  plVar1 = (longlong *)*param_1;
  uVar7 = plVar1[1] + 1;
  lVar2 = plVar1[3];
  if (param_2 < 0x40) {
    if (uVar7 < (ulonglong)plVar1[1]) {
      uVar8 = uVar7;
      if ((ulonglong)plVar1[2] >> 1 <= uVar7) goto LAB_143382a8f;
    }
    else {
      if (uVar7 <= (ulonglong)plVar1[2]) goto LAB_143382a8f;
      uVar8 = (uVar7 >> 2) + uVar7;
    }
    FUN_143380880(plVar1,lVar2,uVar8);
LAB_143382a8f:
    plVar1[1] = uVar7;
    pcVar3 = (char *)(*plVar1 + -1 + uVar7);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = (char)param_2 << 2;
    }
    return 1;
  }
  bVar6 = (char)param_2 << 2;
  if (0x3fff < param_2) {
    if (0x3fffff < param_2) {
      if (uVar7 < (ulonglong)plVar1[1]) {
        uVar8 = uVar7;
        if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143382c8d:
          FUN_143380880(plVar1,lVar2,uVar8);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar7) {
        uVar8 = (uVar7 >> 2) + uVar7;
        goto LAB_143382c8d;
      }
      plVar1[1] = uVar7;
      pbVar4 = (byte *)(*plVar1 + -1 + uVar7);
      if (pbVar4 != (byte *)0x0) {
        *pbVar4 = bVar6 | 3;
      }
      plVar1 = (longlong *)*param_1;
      uVar7 = plVar1[1] + 1;
      if (uVar7 < (ulonglong)plVar1[1]) {
        uVar8 = uVar7;
        if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143382ce1:
          FUN_143380880(plVar1,plVar1[3],uVar8);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar7) {
        uVar8 = (uVar7 >> 2) + uVar7;
        goto LAB_143382ce1;
      }
      plVar1[1] = uVar7;
      puVar5 = (undefined1 *)(*plVar1 + -1 + uVar7);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = (char)(param_2 >> 6);
      }
      plVar1 = (longlong *)*param_1;
      uVar7 = plVar1[1] + 1;
      if (uVar7 < (ulonglong)plVar1[1]) {
        uVar8 = uVar7;
        if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143382d35:
          FUN_143380880(plVar1,plVar1[3],uVar8);
        }
      }
      else if ((ulonglong)plVar1[2] < uVar7) {
        uVar8 = (uVar7 >> 2) + uVar7;
        goto LAB_143382d35;
      }
      plVar1[1] = uVar7;
      puVar5 = (undefined1 *)(*plVar1 + -1 + uVar7);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = (char)(param_2 >> 0xe);
      }
      param_1 = (longlong *)*param_1;
      uVar7 = param_1[1] + 1;
      if (uVar7 < (ulonglong)param_1[1]) {
        uVar8 = uVar7;
        if ((ulonglong)param_1[2] >> 1 <= uVar7) goto LAB_143382d8f;
      }
      else {
        if (uVar7 <= (ulonglong)param_1[2]) goto LAB_143382d8f;
        uVar8 = (uVar7 >> 2) + uVar7;
      }
      FUN_143380880(param_1,param_1[3],uVar8);
LAB_143382d8f:
      param_1[1] = uVar7;
      puVar5 = (undefined1 *)(*param_1 + -1 + uVar7);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = (char)(param_2 >> 0x16);
      }
      return 4;
    }
    if (uVar7 < (ulonglong)plVar1[1]) {
      uVar8 = uVar7;
      if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143382b99:
        FUN_143380880(plVar1,lVar2,uVar8);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar7) {
      uVar8 = (uVar7 >> 2) + uVar7;
      goto LAB_143382b99;
    }
    plVar1[1] = uVar7;
    pbVar4 = (byte *)(*plVar1 + -1 + uVar7);
    if (pbVar4 != (byte *)0x0) {
      *pbVar4 = bVar6 | 2;
    }
    plVar1 = (longlong *)*param_1;
    uVar7 = plVar1[1] + 1;
    if (uVar7 < (ulonglong)plVar1[1]) {
      uVar8 = uVar7;
      if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143382bed:
        FUN_143380880(plVar1,plVar1[3],uVar8);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar7) {
      uVar8 = (uVar7 >> 2) + uVar7;
      goto LAB_143382bed;
    }
    plVar1[1] = uVar7;
    puVar5 = (undefined1 *)(*plVar1 + -1 + uVar7);
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = (char)(param_2 >> 6);
    }
    param_1 = (longlong *)*param_1;
    uVar7 = param_1[1] + 1;
    if (uVar7 < (ulonglong)param_1[1]) {
      uVar8 = uVar7;
      if ((ulonglong)param_1[2] >> 1 <= uVar7) goto LAB_143382c47;
    }
    else {
      if (uVar7 <= (ulonglong)param_1[2]) goto LAB_143382c47;
      uVar8 = (uVar7 >> 2) + uVar7;
    }
    FUN_143380880(param_1,param_1[3],uVar8);
LAB_143382c47:
    param_1[1] = uVar7;
    puVar5 = (undefined1 *)(*param_1 + -1 + uVar7);
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = (char)(param_2 >> 0xe);
    }
    return 3;
  }
  if (uVar7 < (ulonglong)plVar1[1]) {
    uVar8 = uVar7;
    if (uVar7 < (ulonglong)plVar1[2] >> 1) {
LAB_143382aed:
      FUN_143380880(plVar1,lVar2,uVar8);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar7) {
    uVar8 = (uVar7 >> 2) + uVar7;
    goto LAB_143382aed;
  }
  plVar1[1] = uVar7;
  pbVar4 = (byte *)(*plVar1 + -1 + uVar7);
  if (pbVar4 != (byte *)0x0) {
    *pbVar4 = bVar6 | 1;
  }
  param_1 = (longlong *)*param_1;
  uVar7 = param_1[1] + 1;
  if (uVar7 < (ulonglong)param_1[1]) {
    uVar8 = uVar7;
    if ((ulonglong)param_1[2] >> 1 <= uVar7) goto LAB_143382b47;
  }
  else {
    if (uVar7 <= (ulonglong)param_1[2]) goto LAB_143382b47;
    uVar8 = (uVar7 >> 2) + uVar7;
  }
  FUN_143380880(param_1,param_1[3],uVar8);
LAB_143382b47:
  param_1[1] = uVar7;
  puVar5 = (undefined1 *)(*param_1 + -1 + uVar7);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = (char)(param_2 >> 6);
  }
  return 2;
}



// FUNCTION 143382dc0 FUN_143382dc0 body=582 status=ok
// SIG undefined FUN_143382dc0(void)

undefined8 FUN_143382dc0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  
  plVar1 = (longlong *)*param_1;
  bVar5 = (char)param_2 << 4;
  uVar4 = plVar1[1] + 1;
  uVar6 = (undefined1)(param_2 >> 4);
  if (0xfff < param_2 + 0x800U) {
    if (uVar4 < (ulonglong)plVar1[1]) {
      uVar7 = uVar4;
      if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143382ed2:
        FUN_143380880(plVar1,plVar1[3],uVar7);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar4) {
      uVar7 = (uVar4 >> 2) + uVar4;
      goto LAB_143382ed2;
    }
    plVar1[1] = uVar4;
    pbVar2 = (byte *)(*plVar1 + -1 + uVar4);
    if (pbVar2 != (byte *)0x0) {
      *pbVar2 = bVar5 | 3;
    }
    plVar1 = (longlong *)*param_1;
    uVar4 = plVar1[1] + 1;
    if (uVar4 < (ulonglong)plVar1[1]) {
      uVar7 = uVar4;
      if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143382f26:
        FUN_143380880(plVar1,plVar1[3],uVar7);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar4) {
      uVar7 = (uVar4 >> 2) + uVar4;
      goto LAB_143382f26;
    }
    plVar1[1] = uVar4;
    puVar3 = (undefined1 *)(*plVar1 + -1 + uVar4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = uVar6;
    }
    plVar1 = (longlong *)*param_1;
    uVar4 = plVar1[1] + 1;
    if (uVar4 < (ulonglong)plVar1[1]) {
      uVar7 = uVar4;
      if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143382f7a:
        FUN_143380880(plVar1,plVar1[3],uVar7);
      }
    }
    else if ((ulonglong)plVar1[2] < uVar4) {
      uVar7 = (uVar4 >> 2) + uVar4;
      goto LAB_143382f7a;
    }
    plVar1[1] = uVar4;
    puVar3 = (undefined1 *)(*plVar1 + -1 + uVar4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = (char)(param_2 >> 0xc);
    }
    param_1 = (longlong *)*param_1;
    uVar4 = param_1[1] + 1;
    if (uVar4 < (ulonglong)param_1[1]) {
      uVar7 = uVar4;
      if ((ulonglong)param_1[2] >> 1 <= uVar4) goto LAB_143382fd4;
    }
    else {
      if (uVar4 <= (ulonglong)param_1[2]) goto LAB_143382fd4;
      uVar7 = (uVar4 >> 2) + uVar4;
    }
    FUN_143380880(param_1,param_1[3],uVar7);
LAB_143382fd4:
    param_1[1] = uVar4;
    puVar3 = (undefined1 *)(*param_1 + -1 + uVar4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = (char)(param_2 >> 0x14);
    }
    return 3;
  }
  if (uVar4 < (ulonglong)plVar1[1]) {
    uVar7 = uVar4;
    if (uVar4 < (ulonglong)plVar1[2] >> 1) {
LAB_143382e31:
      FUN_143380880(plVar1,plVar1[3],uVar7);
    }
  }
  else if ((ulonglong)plVar1[2] < uVar4) {
    uVar7 = (uVar4 >> 2) + uVar4;
    goto LAB_143382e31;
  }
  plVar1[1] = uVar4;
  pbVar2 = (byte *)(*plVar1 + -1 + uVar4);
  if (pbVar2 != (byte *)0x0) {
    *pbVar2 = bVar5 | 2;
  }
  param_1 = (longlong *)*param_1;
  uVar4 = param_1[1] + 1;
  if (uVar4 < (ulonglong)param_1[1]) {
    uVar7 = uVar4;
    if ((ulonglong)param_1[2] >> 1 <= uVar4) goto LAB_143382e8b;
  }
  else {
    if (uVar4 <= (ulonglong)param_1[2]) goto LAB_143382e8b;
    uVar7 = (uVar4 >> 2) + uVar4;
  }
  FUN_143380880(param_1,param_1[3],uVar7);
LAB_143382e8b:
  param_1[1] = uVar4;
  puVar3 = (undefined1 *)(*param_1 + -1 + uVar4);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = uVar6;
  }
  return 2;
}



// FUNCTION 143383010 FUN_143383010 body=49 status=ok
// SIG undefined FUN_143383010(void)

undefined8 FUN_143383010(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x10))
                       ();
                    /* WARNING: Could not recover jumptable at 0x000143383033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143383050 FUN_143383050 body=37 status=ok
// SIG undefined FUN_143383050(void)

void FUN_143383050(longlong param_1,char param_2)

{
  byte bVar1;
  
  if (param_2 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x138) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x138) | 0x10;
  }
  *(byte *)(param_1 + 0x138) = bVar1;
  if (param_2 != '\0') {
    FUN_143370870(param_1,0);
    return;
  }
  return;
}



// FUNCTION 143383080 FUN_143383080 body=67 status=ok
// SIG undefined FUN_143383080(void)

void FUN_143383080(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  FUN_14336e5a0();
  bVar1 = *(byte *)(param_1 + 0x6d);
  if (bVar1 != 0) {
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)bVar1 * 4) + 0x10))
                       (param_1 + (ulonglong)bVar1 * 4);
    (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
  }
  return;
}



// FUNCTION 1433830d0 FUN_1433830d0 body=3 status=ok
// SIG undefined FUN_1433830d0(void)

void FUN_1433830d0(void)

{
  return;
}



// FUNCTION 1433830e0 FUN_1433830e0 body=389 status=ok
// SIG undefined FUN_1433830e0(void)

undefined8 *
FUN_1433830e0(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5,undefined4 *param_6,char param_7)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  param_6._0_4_ = *param_6;
  FUN_14336f060(param_1,param_3,param_4,param_5,&param_6);
  *param_1 = &PTR_FUN_145b030a0;
  param_1[3] = &PTR_LAB_145b034b0;
  if (param_2 != (longlong *)0x0) {
    Scaleform::GFx::Resource::AddRef(param_2);
  }
  param_1[0x22] = param_2;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[4] = param_4;
  uVar5 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((uVar5 & 0xff00) == 0x8400) {
    puVar2 = (undefined4 *)param_2[10];
    if (puVar2 == (undefined4 *)0x0) {
      local_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
    }
    else {
      local_18 = *puVar2;
      uStack_14 = puVar2[1];
      uStack_10 = puVar2[2];
      uStack_c = puVar2[3];
    }
    FUN_14336f290(param_1,&local_18);
    *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) | 0x40;
  }
  cVar3 = param_7;
  *(ushort *)((longlong)param_1 + 0x6a) = *(ushort *)((longlong)param_1 + 0x6a) | 0x400;
  bVar1 = *(byte *)(param_1 + 0x27);
  bVar4 = bVar1 & 0xdd;
  *(byte *)(param_1 + 0x27) = bVar4 | 1;
  if (param_7 == '\0') {
    bVar4 = bVar1 & 0xcd | 1;
  }
  else {
    bVar4 = bVar4 | 0x11;
  }
  *(byte *)(param_1 + 0x27) = bVar4;
  if (((param_5 == (longlong *)0x0) || (param_7 != '\0')) ||
     (lVar6 = (**(code **)(*param_5 + 0x218))(param_5), lVar6 == param_3)) {
    uVar7 = 0;
    if (cVar3 == '\0') {
      return param_1;
    }
  }
  else {
    uVar7 = 1;
  }
  FUN_143370870(param_1,uVar7);
  return param_1;
}



// FUNCTION 143383270 FUN_143383270 body=152 status=ok
// SIG undefined FUN_143383270(void)

void FUN_143383270(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_145b030a0;
  param_1[3] = &PTR_LAB_145b034b0;
  FUN_1433d4de0(param_1 + 0x1b,param_1);
  FSettingsModule::ShutdownModule(param_1);
  piVar1 = (int *)param_1[0x25];
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
    FUN_14336bed0(piVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
  }
  if ((RefCountNTSImpl *)param_1[0x24] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x24]);
  }
  if (param_1[0x22] != 0) {
    FUN_1432de450();
  }
  FUN_14336f0d0(param_1);
  return;
}



// FUNCTION 143383310 FUN_143383310 body=118 status=ok
// SIG undefined FUN_143383310(void)

void FUN_143383310(RefCountNTSImpl *param_1,undefined1 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  if (((((byte)param_1[0xb8] & 0xc) == 0) && ((*(ushort *)(param_1 + 0x6a) & 0x1000) == 0)) &&
     (-2 < *(int *)(param_1 + 0x2c))) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    if (param_1[0x6d] != (RefCountNTSImpl)0x0) {
      plVar1 = (longlong *)
               (**(code **)(*(longlong *)(param_1 + (ulonglong)(byte)param_1[0x6d] * 4) + 0x10))();
      (**(code **)(*plVar1 + 0xd0))(plVar1,param_2,param_3);
    }
    Scaleform::RefCountNTSImpl::Release(param_1);
  }
  return;
}



// FUNCTION 143383390 FUN_143383390 body=447 status=ok
// SIG undefined FUN_143383390(void)

float * FUN_143383390(longlong param_1,float *param_2,Matrix2x4<float> *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38 [12];
  
  FUN_1433d5fd0(param_1 + 0xd8);
  if (*(longlong *)(param_1 + 0x120) != 0) {
    local_38[0] = 0.0;
    local_38[1] = 0.0;
    local_38[2] = 0.0;
    local_38[3] = 0.0;
    FUN_14337e9c0(*(longlong *)(param_1 + 0x120),local_38);
    if ((local_38[0] < local_38[2]) && (local_38[1] < local_38[3])) {
      Scaleform::Render::Matrix2x4<float>::EncloseTransform
                (param_3,(Rect<float> *)&local_48,(Rect<float> *)local_38);
      fVar5 = *param_2;
      fVar7 = param_2[2];
      if (fVar5 < fVar7) {
        fVar1 = param_2[1];
        fVar8 = param_2[3];
        if (fVar1 < fVar8) {
          if (fVar7 <= fStack_40) {
            fVar7 = fStack_40;
          }
          if (fVar8 <= fStack_3c) {
            fVar8 = fStack_3c;
          }
          fVar6 = local_48;
          if (fVar5 <= local_48) {
            fVar6 = fVar5;
          }
          fVar5 = fStack_44;
          if (fVar1 <= fStack_44) {
            fVar5 = fVar1;
          }
          param_2[2] = fVar7;
          param_2[3] = fVar8;
          *param_2 = fVar6;
          param_2[1] = fVar5;
          goto LAB_14338345a;
        }
      }
      *(ulonglong *)param_2 = CONCAT44(fStack_44,local_48);
      *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_3c,fStack_40);
    }
  }
LAB_14338345a:
  pdVar4 = *(double **)(param_1 + 0x80);
  if (pdVar4 != (double *)0x0) {
    local_38[3] = (float)pdVar4[3];
    local_38[2] = (float)pdVar4[2];
    local_38[1] = (float)pdVar4[1];
    local_38[0] = (float)*pdVar4;
    dVar2 = *pdVar4;
    dVar3 = pdVar4[1];
    Scaleform::Render::Matrix2x4<float>::EncloseTransform
              (param_3,(Rect<float> *)&local_48,(Rect<float> *)local_38);
    FUN_143384ff0(param_2,local_48,fStack_44,fStack_40,fStack_3c);
    *param_2 = -(float)dVar2 + *param_2;
    param_2[2] = -(float)dVar2 + param_2[2];
    param_2[3] = -(float)dVar3 + param_2[3];
    param_2[1] = -(float)dVar3 + param_2[1];
  }
  return param_2;
}



// FUNCTION 143383560 FUN_143383560 body=194 status=ok
// SIG undefined FUN_143383560(void)

undefined8 FUN_143383560(longlong param_1)

{
  RefCountNTSImpl *this;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x120) == 0) {
    this = (RefCountNTSImpl *)FUN_14336cc10();
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      FUN_14336cc90(param_1,0,1);
    }
    uVar1 = FUN_1432ec700(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
    if (*(RefCountNTSImpl **)(param_1 + 0x120) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x120));
    }
    *(undefined8 *)(param_1 + 0x120) = uVar1;
    uVar1 = FUN_143366100(param_1);
    FUN_143364100(uVar1,0,*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x20));
    if (this != (RefCountNTSImpl *)0x0) {
      FUN_14336cc90(param_1,this,1);
      Scaleform::RefCountNTSImpl::Release(this);
    }
    return *(undefined8 *)(param_1 + 0x120);
  }
  return *(undefined8 *)(param_1 + 0x120);
}



// FUNCTION 143383630 Eval body=30 status=ok
// SIG undefined Eval(void)

undefined8 UMovieSceneStringSection::Eval(longlong param_1,undefined8 param_2)

{
  FUN_1433d6200(param_1 + 0xd8);
  return param_2;
}



// FUNCTION 143383660 FUN_143383660 body=352 status=ok
// SIG undefined FUN_143383660(void)

int FUN_143383660(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  iVar3 = FUN_14336f5a0();
  if (iVar3 != 3) {
    return iVar3;
  }
  if (param_1[0x24] == 0) {
    return 3;
  }
  lVar4 = (**(code **)(*param_1 + 0x3d0))(param_1);
  if ((*(char *)(param_1[4] + 0x20) != '\x02') || (*(char *)((longlong)param_3 + 0x24) == '\0')) {
    bVar1 = *(byte *)((longlong)param_1 + 0x6d);
    if (bVar1 != 0) {
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)((longlong)param_1 + (ulonglong)bVar1 * 4) + 8))
                         ((longlong)param_1 + (ulonglong)bVar1 * 4);
      cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5);
      if (cVar2 != '\0') goto LAB_1433836f9;
    }
    if (lVar4 == 0) {
      return 3;
    }
    if ((*(char *)((longlong)param_3 + 0x24) == '\0') &&
       (cVar2 = FUN_143384f70(lVar4), cVar2 == '\0')) {
      return 3;
    }
  }
LAB_1433836f9:
  cVar2 = FUN_14337f0b0(param_1[0x24],param_3 + 1,1,param_1);
  if (cVar2 == '\0') {
    return 3;
  }
  if ((lVar4 != 0) &&
     ((*(char *)((longlong)param_3 + 0x24) != '\0' || (cVar2 = FUN_143384f70(lVar4), cVar2 != '\0'))
     )) {
    *param_3 = lVar4;
    param_3[3] = (longlong)param_1;
    return 1;
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x3c8))(param_1);
  if (*(char *)(param_1[4] + 0x20) == '\x01') {
    plVar6 = plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_143383774;
    do {
      plVar6 = (longlong *)plVar6[7];
      if (plVar6 == (longlong *)0x0) goto LAB_14338377e;
    } while (plVar6 != param_1);
  }
  else {
    if (plVar5 == (longlong *)0x0) goto LAB_143383774;
    plVar6 = (longlong *)*param_3;
    if (((plVar6 != (longlong *)0x0) && (plVar6 != param_1)) &&
       (*(char *)((longlong)plVar6 + 0x6a) < '\0')) {
      return 3;
    }
  }
  if (plVar5 != (longlong *)param_3[3]) {
LAB_14338377e:
    *param_3 = 0;
    return 2;
  }
LAB_143383774:
  *param_3 = (longlong)param_1;
  return 1;
}



// FUNCTION 143383820 FUN_143383820 body=64 status=ok
// SIG undefined FUN_143383820(void)

ulonglong FUN_143383820(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  
  uVar1 = thunk_FUN_14336b350();
  if (*(longlong *)(param_1 + 0x120) != 0) {
    lVar2 = FUN_1432cd1e0(uVar1);
    puVar3 = (ulonglong *)(lVar2 + 0x90);
    if ((*(byte *)puVar3 & 1) != 0) {
      puVar3 = (ulonglong *)((*puVar3 & 0xfffffffffffffffe) + 0x10);
    }
    uVar1 = puVar3[1];
  }
  return uVar1;
}



// FUNCTION 143383880 FUN_143383880 body=243 status=ok
// SIG undefined FUN_143383880(void)

undefined8 FUN_143383880(longlong *param_1,float *param_2,byte param_3)

{
  char cVar1;
  float *pfVar2;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((*(uint *)(param_1 + 0x17) >> 0xb & 1) != 0) {
    return 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x6a) & 1) == 0) {
    local_28 = 0x3f800000;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    local_18 = 0;
    uStack_14 = 0x3f800000;
    uStack_10 = 0;
    uStack_c = 0;
    pfVar2 = (float *)(**(code **)(*param_1 + 0x1f0))(0x3f800000,local_38,&local_28);
    if (pfVar2[2] < *param_2) {
      return 0;
    }
    if (*param_2 < *pfVar2) {
      return 0;
    }
    if (pfVar2[3] < param_2[1]) {
      return 0;
    }
    if (param_2[1] < pfVar2[1]) {
      return 0;
    }
  }
  if (((param_3 & 2) != 0) && (cVar1 = (**(code **)(*param_1 + 0x1d8))(param_1), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = FUN_14336fce0(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    return 1;
  }
  if ((param_1[0x24] != 0) &&
     (cVar1 = FUN_14337f0b0(param_1[0x24],param_2,param_3 & 1,param_1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143383980 FUN_143383980 body=31 status=ok
// SIG undefined FUN_143383980(void)

void FUN_143383980(longlong param_1)

{
  FUN_14336d4b0();
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}



// FUNCTION 1433839b0 FUN_1433839b0 body=280 status=ok
// SIG undefined FUN_1433839b0(void)

Rect<float> * FUN_1433839b0(longlong *param_1,Rect<float> *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x3c8))();
  local_28 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_14 = 0x3f800000;
  uStack_10 = 0;
  uStack_c = 0;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*plVar1 + 0x10))(plVar1);
    local_28 = *puVar2;
    uStack_24 = puVar2[1];
    uStack_20 = puVar2[2];
    uStack_1c = puVar2[3];
    local_18 = puVar2[4];
    uStack_14 = puVar2[5];
    uStack_10 = puVar2[6];
    uStack_c = puVar2[7];
    (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_48);
    Scaleform::Render::Matrix2x4<float>::EncloseTransform
              ((Matrix2x4<float> *)&local_28,param_2,(Rect<float> *)&local_48);
    return param_2;
  }
  local_48 = 0x3f800000;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  uStack_34 = 0x3f800000;
  uStack_30 = 0;
  uStack_2c = 0;
  (**(code **)(*param_1 + 0x1f0))(param_1,param_2,&local_48);
  return param_2;
}



// FUNCTION 143383ad0 FUN_143383ad0 body=124 status=ok
// SIG undefined FUN_143383ad0(void)

void FUN_143383ad0(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  
  if ((*(byte *)(param_1 + 0x138) & 8) == 0) {
    *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) | 8;
    if (*(byte *)(param_1 + 0x6d) != 0) {
      plVar2 = (longlong *)
               (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x10
                           ))();
      (**(code **)(*plVar2 + 0xe8))(plVar2,0);
    }
    FUN_143384330(param_1,0);
    bVar1 = *(byte *)(param_1 + 0x6d);
    if (bVar1 != 0) {
      plVar2 = (longlong *)
               (**(code **)(*(longlong *)(param_1 + (ulonglong)bVar1 * 4) + 0x10))
                         (param_1 + (ulonglong)bVar1 * 4);
                    /* WARNING: Could not recover jumptable at 0x000143383b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xd8))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143383b60 ForceShutdown body=61 status=ok
// SIG undefined ForceShutdown(void)

void Scaleform::GFx::Sprite::ForceShutdown(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  
  DisplayObjContainer::ForceShutdown();
  bVar1 = *(byte *)(param_1 + 0x6d);
  if (bVar1 != 0) {
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)bVar1 * 4) + 0x10))
                       (param_1 + (ulonglong)bVar1 * 4);
    (**(code **)(*plVar2 + 0xf0))(plVar2);
  }
  FUN_14336ead0(param_1);
  return;
}



// FUNCTION 143383bb0 FUN_143383bb0 body=134 status=ok
// SIG undefined FUN_143383bb0(void)

ulonglong FUN_143383bb0(longlong param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (param_2 == 1) {
    uVar2 = FUN_14336e480();
    return uVar2;
  }
  cVar1 = *(char *)(param_1 + 0x139);
  if ((cVar1 == '\0') && (*(byte *)(param_1 + 0x6d) != 0)) {
    plVar3 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x10))
                       ();
                    /* WARNING: Could not recover jumptable at 0x000143383bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
    return uVar2;
  }
  if (cVar1 != '\x02') {
    return (ulonglong)(cVar1 == '\x01');
  }
  if (*(byte *)(param_1 + 0x6d) != 0) {
    plVar3 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143383c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143383c40 FUN_143383c40 body=138 status=ok
// SIG undefined FUN_143383c40(void)

ulonglong FUN_143383c40(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x10))
                       ();
    uVar3 = (**(code **)(*plVar2 + 0x100))(plVar2);
    if ((char)uVar3 != '\0') goto LAB_143383cbd;
  }
  bVar1 = *(byte *)(param_1 + 0x6d);
  uVar3 = 0;
  if (bVar1 != 0) {
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)bVar1 * 4) + 0x10))
                       (param_1 + (ulonglong)bVar1 * 4);
    uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
    if ((char)uVar3 != '\0') goto LAB_143383cbd;
  }
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143383cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x328))(plVar2,param_2);
    return uVar3;
  }
LAB_143383cbd:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143383cd0 FUN_143383cd0 body=56 status=ok
// SIG undefined FUN_143383cd0(void)

undefined8 FUN_143383cd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x10))
                       ();
                    /* WARNING: Could not recover jumptable at 0x000143383cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143383d10 FUN_143383d10 body=182 status=ok
// SIG undefined FUN_143383d10(void)

void FUN_143383d10(longlong *param_1)

{
  byte bVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(ushort *)((longlong)param_1 + 0x6a) = *(ushort *)((longlong)param_1 + 0x6a) | 0x1000;
  if (param_1[0x25] != 0) {
    lVar3 = (**(code **)(*param_1 + 0x3c8))();
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x130) = 0;
    }
    piVar2 = (int *)param_1[0x25];
    if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 < 1)) {
      FUN_14336bed0(piVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar2);
    }
    param_1[0x25] = 0;
    bVar1 = *(byte *)((longlong)param_1 + 0x6d);
    if (bVar1 != 0) {
      plVar4 = (longlong *)
               (**(code **)(*(longlong *)((longlong)param_1 + (ulonglong)bVar1 * 4) + 0x10))
                         ((longlong)param_1 + (ulonglong)bVar1 * 4);
      (**(code **)(*plVar4 + 0x110))(plVar4,0);
    }
  }
  FUN_1433d4de0(param_1 + 0x1b,param_1);
  FUN_14336e4d0(param_1);
  return;
}



// FUNCTION 143383dd0 FUN_143383dd0 body=154 status=ok
// SIG undefined FUN_143383dd0(void)

void FUN_143383dd0(longlong *param_1,undefined1 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  
  if ((param_3 == 2) && (*(byte *)((longlong)param_1 + 0x6d) != 0)) {
    plVar3 = (longlong *)
             (**(code **)(*(longlong *)
                           ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x6d) * 4)
                         + 8))();
    cVar1 = (**(code **)(*plVar3 + 0x60))(plVar3);
    if (cVar1 != '\0') {
      uVar2 = *(uint *)(*(longlong *)(param_1[4] + 0x10) + 0x52f0) >> 0x1c & 3;
      if (uVar2 == 3) {
        uVar2 = 0xffffffff;
      }
      if (uVar2 != 1) {
        local_28 = 0x2000;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_16 = 0;
        local_17 = param_2;
        (**(code **)(*param_1 + 0x328))(param_1,&local_28);
      }
    }
  }
  return;
}



// FUNCTION 143383e70 FUN_143383e70 body=435 status=ok
// SIG undefined FUN_143383e70(void)

ulonglong FUN_143383e70(longlong *param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 local_28;
  int iStack_20;
  uint uStack_1c;
  int local_18;
  
  if (*(byte *)((longlong)param_1 + 0x6d) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x6d) * 4);
  if (*param_2 != 0x40) {
    plVar6 = (longlong *)(**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00014338401f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar6 + 0x40))(plVar6,param_2);
    return uVar7;
  }
  plVar6 = (longlong *)(**(code **)(lVar1 + 0x10))();
  bVar2 = (**(code **)(*plVar6 + 0x40))(plVar6,param_2);
  if (((*param_3 & 0x10000) == 0) && (iVar4 = FUN_14338a780(param_2), iVar4 != 0)) {
    plVar6 = (longlong *)
             (**(code **)(*(longlong *)
                           ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x6d) * 4)
                         + 0x10))
                       ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x6d) * 4);
    iStack_20 = (int)(short)iVar4;
    local_28 = 0x20000;
    uStack_1c = uStack_1c & 0xffffff00;
    local_18 = 0;
    bVar2 = (**(code **)(*plVar6 + 0x40))(plVar6,&local_28);
    if (bVar2 != 0) {
      *param_3 = *param_3 | 0x10000;
    }
  }
  lVar1 = *(longlong *)(param_1[4] + 0x10);
  cVar3 = FUN_143385110(lVar1,param_1,(int)*(char *)((longlong)param_2 + 0x11));
  if ((cVar3 != '\0') && ((param_2[2] == 0xd || (param_2[2] == 0x20)))) {
    cVar3 = (**(code **)(*param_1 + 0x2c8))();
    if (cVar3 == '\0') {
      uVar5 = *(uint *)(lVar1 + 0x52f0) >> 0x1a & 3;
      if (uVar5 == 3) {
        uVar5 = 0xffffffff;
      }
      if (uVar5 != 1) goto LAB_143383feb;
    }
    local_18 = param_2[4];
    local_28._4_4_ = param_2[1];
    iStack_20 = param_2[2];
    uStack_1c = param_2[3];
    local_28._0_4_ = 0x400;
    plVar6 = (longlong *)
             (**(code **)(*(longlong *)
                           ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x6d) * 4)
                         + 0x10))
                       ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x6d) * 4);
    (**(code **)(*plVar6 + 0x40))(plVar6,&local_28);
    local_28 = CONCAT44(local_28._4_4_,0x800);
    plVar6 = (longlong *)
             (**(code **)(*(longlong *)
                           ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x6d) * 4)
                         + 0x10))
                       ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x6d) * 4);
    (**(code **)(*plVar6 + 0x40))(plVar6,&local_28);
  }
LAB_143383feb:
  return (ulonglong)bVar2;
}



// FUNCTION 143384030 FUN_143384030 body=187 status=ok
// SIG undefined FUN_143384030(void)

undefined8 FUN_143384030(longlong *param_1,undefined8 param_2,uint param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  
  if (param_4 == 2) {
    if (*(byte *)((longlong)param_1 + 0x6d) != 0) {
      plVar4 = (longlong *)
               (**(code **)(*(longlong *)
                             ((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x6d) * 4
                             ) + 8))();
      cVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
      if (cVar2 != '\0') {
        lVar1 = *(longlong *)(param_1[4] + 0x10);
        if (*(char *)((ulonglong)*(byte *)((ulonglong)param_3 + 0x52c4 + lVar1) * 0x60 + 0x4d10 +
                     lVar1) != '\0') {
          uVar3 = *(uint *)(lVar1 + 0x52f0) >> 0x1c & 3;
          if (uVar3 == 3) {
            uVar3 = 0xffffffff;
          }
          if (uVar3 != 1) {
            local_28 = 0x4000;
            local_20 = 0;
            local_1c = 0;
            local_18 = 0;
            local_16 = 0;
            local_17 = (undefined1)param_3;
            (**(code **)(*param_1 + 0x328))(param_1,&local_28);
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 143384100 FUN_143384100 body=61 status=ok
// SIG undefined FUN_143384100(void)

void FUN_143384100(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  uVar2 = FUN_1433d4ed0(param_1 + 0xd8,param_1);
  bVar1 = *(byte *)(param_1 + 0x6d);
  if (bVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143384133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + (ulonglong)bVar1 * 4) + 0x58))
              (param_1 + (ulonglong)bVar1 * 4,uVar2);
    return;
  }
  return;
}



// FUNCTION 143384150 FUN_143384150 body=100 status=ok
// SIG undefined FUN_143384150(void)

undefined8 FUN_143384150(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x10))
                       ();
                    /* WARNING: Could not recover jumptable at 0x00014338419b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 200))(plVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1433841c0 CreateAndReplaceDisplayObject body=66 status=ok
// SIG undefined CreateAndReplaceDisplayObject(void)

void Scaleform::GFx::Sprite::CreateAndReplaceDisplayObject
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  FUN_14336fb40();
  if ((param_4 != (longlong *)0x0) && (*param_4 != 0)) {
    *(undefined4 *)(*param_4 + 0x30) = *(undefined4 *)(param_1 + 0x11c);
  }
  return;
}



// FUNCTION 143384210 FUN_143384210 body=221 status=ok
// SIG undefined FUN_143384210(void)

uint FUN_143384210(longlong *param_1,char param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  
  uVar5 = 0;
  if (((*(byte *)(param_1 + 0x17) & 0xc) == 0) &&
     ((~(*(byte *)((longlong)param_1 + 0x6a) >> 6) & 1) != 0)) {
    bVar2 = false;
    iVar4 = (**(code **)(*param_1 + 0x3a0))();
    if (iVar4 == 0) {
      return (uint)(param_2 == '\0');
    }
  }
  else {
    bVar2 = true;
  }
  if (param_2 == '\0') {
    if ((!bVar2) && (bVar1 = *(byte *)((longlong)param_1 + 0x6d), bVar1 != 0)) {
      plVar6 = (longlong *)
               (**(code **)(*(longlong *)((longlong)param_1 + (ulonglong)bVar1 * 4) + 0x10))
                         ((longlong)param_1 + (ulonglong)bVar1 * 4);
      cVar3 = (**(code **)(*plVar6 + 0x108))(plVar6);
      uVar5 = 0;
      if (cVar3 != '\0') {
        uVar5 = 1;
      }
    }
  }
  else if (bVar2) {
    uVar5 = 0xffffffff;
  }
  else {
    bVar1 = *(byte *)((longlong)param_1 + 0x6d);
    if (bVar1 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      plVar6 = (longlong *)
               (**(code **)(*(longlong *)((longlong)param_1 + (ulonglong)bVar1 * 4) + 0x10))
                         ((longlong)param_1 + (ulonglong)bVar1 * 4);
      cVar3 = (**(code **)(*plVar6 + 0x108))(plVar6);
      uVar5 = (cVar3 != '\0') - 1;
    }
  }
  return uVar5;
}



// FUNCTION 143384300 DefaultOnEventLoad body=27 status=ok
// SIG undefined DefaultOnEventLoad(void)

void Scaleform::GFx::Sprite::DefaultOnEventLoad(longlong param_1)

{
  FUN_143384330(param_1,0);
  *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) | 0x20;
  return;
}



// FUNCTION 143384330 FUN_143384330 body=189 status=ok
// SIG undefined FUN_143384330(void)

void FUN_143384330(RefCountNTSImpl *param_1,uint param_2)

{
  RefCountNTSImpl RVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong local_18;
  uint local_10;
  
  if (((*(ushort *)(param_1 + 0x6a) >> 0xb & 1) != 0) || (param_2 == 0)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    uVar2 = (**(code **)(*(longlong *)param_1 + 0x380))();
    if (param_2 < uVar2) {
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x58))
                (*(longlong **)(param_1 + 0x110),&local_18,param_2);
      uVar4 = 0;
      if (local_10 != 0) {
        do {
          plVar3 = *(longlong **)(local_18 + uVar4 * 8);
          (**(code **)(*plVar3 + 0x10))(plVar3,param_1,4);
          uVar2 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar2;
        } while (uVar2 < local_10);
      }
      RVar1 = param_1[0x6d];
      if (RVar1 != (RefCountNTSImpl)0x0) {
        plVar3 = (longlong *)
                 (**(code **)(*(longlong *)(param_1 + (ulonglong)(byte)RVar1 * 4) + 0x10))
                           (param_1 + (ulonglong)(byte)RVar1 * 4);
        (**(code **)(*plVar3 + 0xe0))(plVar3,param_2);
      }
    }
    Scaleform::RefCountNTSImpl::Release(param_1);
  }
  return;
}



// FUNCTION 143384400 FUN_143384400 body=225 status=ok
// SIG undefined FUN_143384400(void)

void FUN_143384400(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_38;
  uint local_30;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x70) + 0x18);
  uVar4 = Scaleform::GFx::MovieDataDef::LoadTaskData::GetInitActionListSize(plVar1[8]);
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      local_38 = 0;
      local_30 = 0;
      cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,&local_38,uVar7 & 0xffffffff);
      if ((cVar3 != '\0') && (uVar6 = 0, local_30 != 0)) {
        do {
          plVar2 = *(longlong **)(local_38 + uVar6 * 8);
          cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
          if (cVar3 == '\0') {
            (**(code **)(*plVar2 + 0x10))(plVar2,param_1,0);
          }
          else {
            FUN_1433136c0();
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < local_30);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  return;
}



// FUNCTION 1433844f0 GetBytesLoaded body=27 status=ok
// SIG undefined GetBytesLoaded(void)

undefined4 Scaleform::GFx::Sprite::GetBytesLoaded(void)

{
  longlong lVar1;
  
  lVar1 = DisplayObjContainer::FindRootNode();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x2c);
  }
  return 0;
}



// FUNCTION 143384520 FUN_143384520 body=72 status=ok
// SIG undefined FUN_143384520(void)

longlong FUN_143384520(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar1 = Scaleform::GFx::CharacterHandle::ResolveCharacter
                      (*(longlong *)(param_1 + 0x128),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
    if (lVar1 != 0) {
      lVar2 = 0;
      if ((*(ushort *)(lVar1 + 0x6a) >> 10 & 1) != 0) {
        lVar2 = lVar1;
      }
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1433845a0 FUN_1433845a0 body=150 status=ok
// SIG undefined FUN_1433845a0(void)

void FUN_1433845a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xe0);
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0xd8));
      if (((plVar1 != (longlong *)0x0) &&
          (plVar3 = (longlong *)(**(code **)(*plVar1 + 0x210))(plVar1), plVar3 != (longlong *)0x0))
         && (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3), (uVar2 & 0xff00) == 0x8200)) {
        FUN_1433a4790(param_2,plVar1);
      }
      lVar5 = lVar5 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143384640 FUN_143384640 body=683 status=ok
// SIG undefined FUN_143384640(void)

void FUN_143384640(longlong *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 ***local_40;
  undefined8 ***local_38;
  longlong *local_30;
  undefined4 local_28;
  
  if ((((*(ushort *)((longlong)param_1 + 0x6a) >> 0xb & 1) != 0) &&
      ((*(ushort *)((longlong)param_1 + 0x6a) & 0x1000) == 0)) &&
     (-2 < *(int *)((longlong)param_1 + 0x2c))) {
    iVar2 = (**(code **)(*param_1 + 0x380))(param_1);
    uVar5 = *(uint *)((longlong)param_1 + 0x11c);
    uVar4 = iVar2 - 1U;
    if ((int)param_2 < (int)(iVar2 - 1U)) {
      uVar4 = param_2;
    }
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    if (uVar4 < uVar5) {
      uVar5 = uVar4 - 1;
      if (uVar4 == 0) {
        uVar5 = 0;
      }
      FUN_1433d5090(param_1 + 0x1b,param_1,uVar5);
      if (uVar4 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
      }
      else {
        local_68 = (**(code **)(**(longlong **)(param_1[4] + 0x10) + 0x180))();
        local_40 = &local_40;
        local_88 = 0;
        uStack_80 = 0;
        local_38 = &local_40;
        local_78 = 0x32;
        local_70 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_28 = 1;
        local_48 = local_68;
        local_30 = param_1;
        FUN_1433aafb0(&local_88,param_1[0x22],0,uVar4 - 1);
        *(uint *)((longlong)param_1 + 0x11c) = uVar4;
        FUN_1433ab050(&local_88,param_1);
        FUN_143384e80(&local_88);
      }
      bVar1 = *(byte *)((longlong)param_1 + 0x6d);
      if (bVar1 != 0) {
        plVar3 = (longlong *)
                 (**(code **)(*(longlong *)((longlong)param_1 + (ulonglong)bVar1 * 4) + 0x10))
                           ((longlong)param_1 + (ulonglong)bVar1 * 4);
        (**(code **)(*plVar3 + 0xe8))(plVar3,uVar4);
      }
      FUN_143384330(param_1,uVar4);
      FUN_1433d5140(param_1 + 0x1b,param_1);
    }
    else if (uVar5 < uVar4) {
      if ((uVar4 < 2) || (uVar4 <= uVar5 + 1)) {
        *(uint *)((longlong)param_1 + 0x11c) = uVar4;
      }
      else {
        local_68 = *(undefined8 *)(*(longlong *)(param_1[4] + 0x10) + 0x48);
        local_40 = &local_40;
        local_38 = &local_40;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0x32;
        local_70 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_28 = 0;
        local_48 = local_68;
        local_30 = param_1;
        FUN_1433aafb0(&local_88,param_1[0x22],uVar5 + 1,uVar4 - 1);
        if (*(char *)((longlong)param_1 + 0x6d) != '\0') {
          uVar5 = *(uint *)((longlong)param_1 + 0x11c);
          while (uVar5 = uVar5 + 1, uVar5 < uVar4) {
            plVar3 = (longlong *)
                     (**(code **)(*(longlong *)
                                   ((longlong)param_1 +
                                   (ulonglong)*(byte *)((longlong)param_1 + 0x6d) * 4) + 0x10))
                               ((longlong)param_1 +
                                (ulonglong)*(byte *)((longlong)param_1 + 0x6d) * 4);
            (**(code **)(*plVar3 + 0xe8))(plVar3,uVar5);
          }
        }
        *(uint *)((longlong)param_1 + 0x11c) = uVar4;
        FUN_1433ab050(&local_88,param_1);
        FUN_143384e80(&local_88);
      }
      bVar1 = *(byte *)((longlong)param_1 + 0x6d);
      if (bVar1 != 0) {
        plVar3 = (longlong *)
                 (**(code **)(*(longlong *)((longlong)param_1 + (ulonglong)bVar1 * 4) + 0x10))
                           ((longlong)param_1 + (ulonglong)bVar1 * 4);
        (**(code **)(*plVar3 + 0xe8))(plVar3,uVar4);
      }
      FUN_143384330(param_1,uVar4);
    }
    *(undefined4 *)(param_1 + 0x23) = 1;
  }
  return;
}



// FUNCTION 143384900 FUN_143384900 body=132 status=ok
// SIG undefined FUN_143384900(void)

undefined8 FUN_143384900(longlong *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int local_res8 [2];
  
  local_res8[0] = -1;
  cVar1 = (**(code **)(*(longlong *)param_1[0x22] + 0x68))
                    ((longlong *)param_1[0x22],param_2,local_res8,0);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x378))(param_1,local_res8[0] + param_3);
    return 1;
  }
  FUN_143385180(param_1 + 3,"MovieImpl::GotoLabeledFrame(\'%s\') unknown label",param_2);
  return 0;
}



// FUNCTION 143384990 FUN_143384990 body=184 status=ok
// SIG undefined FUN_143384990(void)

void FUN_143384990(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *(int *)((longlong)param_1 + 0x11c) = *(int *)((longlong)param_1 + 0x11c) + 1;
  uVar1 = (**(code **)(*param_1 + 0x380))();
  uVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x50))();
  if ((uVar1 < uVar2) && (uVar1 <= *(uint *)((longlong)param_1 + 0x11c))) {
    if (uVar1 != 0) {
      *(uint *)((longlong)param_1 + 0x11c) = uVar1 - 1;
      return;
    }
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
    return;
  }
  if (uVar2 <= *(uint *)((longlong)param_1 + 0x11c)) {
    *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) | 2;
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
    if (1 < uVar2) {
      FUN_1433d5090(param_1 + 0x1b,param_1,0);
      return;
    }
    (**(code **)(*param_1 + 0x398))(param_1,1);
  }
  return;
}



// FUNCTION 143384a50 IsLevelMovie body=49 status=ok
// SIG undefined IsLevelMovie(void)

undefined8 Scaleform::GFx::Sprite::IsLevelMovie(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x10))
                       ();
                    /* WARNING: Could not recover jumptable at 0x000143384a73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x100))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143384a90 GetLevel body=35 status=ok
// SIG undefined GetLevel(void)

void Scaleform::GFx::Sprite::GetLevel(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x10))()
  ;
                    /* WARNING: Could not recover jumptable at 0x000143384aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xf8))(plVar1);
  return;
}



// FUNCTION 143384ac0 FUN_143384ac0 body=72 status=ok
// SIG undefined FUN_143384ac0(void)

void FUN_143384ac0(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    local_28 = 0x1000007;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xff00;
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x10))
                       ();
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
  }
  return;
}



// FUNCTION 143384b20 FUN_143384b20 body=72 status=ok
// SIG undefined FUN_143384b20(void)

void FUN_143384b20(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    local_28 = 0x1000002;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xff00;
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 0x10))
                       ();
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
  }
  return;
}



// FUNCTION 143384b80 FUN_143384b80 body=148 status=ok
// SIG undefined FUN_143384b80(void)

void FUN_143384b80(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  
  FUN_1433d5090(param_1 + 0xd8,param_1,0);
  *(undefined8 *)(param_1 + 0x118) = 0;
  bVar1 = *(byte *)(param_1 + 0x6d);
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) & 0xfd | 1;
  if (bVar1 != 0) {
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)bVar1 * 4) + 0x10))
                       (param_1 + (ulonglong)bVar1 * 4);
    (**(code **)(*plVar2 + 0xe8))(plVar2,*(undefined4 *)(param_1 + 0x11c));
  }
  FUN_143384330(param_1,*(undefined4 *)(param_1 + 0x11c));
  FUN_1433d5140(param_1 + 0xd8,param_1);
  return;
}



// FUNCTION 143384c20 FUN_143384c20 body=205 status=ok
// SIG undefined FUN_143384c20(void)

void FUN_143384c20(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x3c8))();
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x130) = 0;
  }
  if ((param_2 == (longlong *)0x0) || (param_2 == param_1)) {
    piVar2 = (int *)param_1[0x25];
    if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 < 1)) {
      FUN_14336bed0(piVar2);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar2);
    }
    param_1[0x25] = 0;
  }
  else {
    lVar3 = param_2[0xe];
    if (lVar3 == 0) {
      lVar3 = FUN_14336c170(param_2);
    }
    FUN_1432efba0(param_1 + 0x25,lVar3);
    param_2[0x26] = (longlong)param_1;
  }
  bVar1 = *(byte *)((longlong)param_1 + 0x6d);
  if (bVar1 != 0) {
    plVar4 = (longlong *)
             (**(code **)(*(longlong *)((longlong)param_1 + (ulonglong)bVar1 * 4) + 0x10))
                       ((longlong)param_1 + (ulonglong)bVar1 * 4);
    (**(code **)(*plVar4 + 0x110))(plVar4,param_2);
  }
  return;
}



// FUNCTION 143384d40 SetRootNodeLoadingStat body=36 status=ok
// SIG undefined SetRootNodeLoadingStat(void)

void Scaleform::GFx::Sprite::SetRootNodeLoadingStat
               (longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x108) + 0x2c) = param_2;
    if (*(char *)(*(longlong *)(param_1 + 0x108) + 0x30) != '\0') {
      param_3 = 0;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x108) + 0x28) = param_3;
  }
  return;
}



// FUNCTION 143384d70 FUN_143384d70 body=171 status=ok
// SIG undefined FUN_143384d70(void)

void FUN_143384d70(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  
  cVar3 = (char)param_2;
  FUN_1433660b0();
  if ((cVar3 == '\0') &&
     (param_2 = *(ulonglong *)(param_1[4] + 0x10), (*(uint *)(param_2 + 0x52f0) >> 0xb & 1) != 0)) {
    param_2 = CONCAT71((int7)(param_2 >> 8),1);
  }
  else {
    param_2 = param_2 & 0xffffffffffffff00;
  }
  uVar2 = *(uint *)(param_1 + 0x17);
  if ((byte)param_2 != ((byte)(uVar2 >> 3) & 1)) {
    if ((byte)param_2 == 0) {
      uVar2 = uVar2 & 0xfffffff7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
    *(uint *)(param_1 + 0x17) = uVar2;
    if (((uVar2 >> 0x15 & 1) == 0) || ((uVar2 >> 0x16 & 1) != 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71((int7)(param_2 >> 8),1);
    }
    iVar1 = FUN_143384210(param_1,uVar4);
    if (iVar1 == -1) {
      *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) | 0x400000;
    }
    else if (iVar1 == 1) {
      FUN_14336e960(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143384e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x348))(param_1);
  return;
}



// FUNCTION 143384e20 FUN_143384e20 body=85 status=ok
// SIG undefined FUN_143384e20(void)

void FUN_143384e20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(uint *)(param_1 + 0xb8) >> 0x15 & 1) == 0) ||
     ((*(uint *)(param_1 + 0xb8) >> 0x16 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  iVar1 = FUN_143384210(param_1,uVar2);
  if (iVar1 == -1) {
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0x400000;
  }
  else if (iVar1 == 1) {
    FUN_14336e960(param_1);
    return;
  }
  return;
}



// FUNCTION 143384e80 FUN_143384e80 body=130 status=ok
// SIG undefined FUN_143384e80(void)

void FUN_143384e80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = param_1 + 9;
  plVar3 = (longlong *)param_1[10];
  while (plVar3 != plVar4) {
    plVar1 = (longlong *)plVar3[1];
    *plVar3 = param_1[3];
    param_1[3] = (longlong)plVar3;
    plVar3 = plVar1;
  }
  *plVar4 = (longlong)plVar4;
  param_1[10] = (longlong)plVar4;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[5]);
  lVar2 = *param_1;
  while (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 6000);
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return;
}



// FUNCTION 143384f10 FUN_143384f10 body=89 status=ok
// SIG undefined FUN_143384f10(void)

undefined8 FUN_143384f10(undefined8 param_1,ulonglong param_2)

{
  FUN_143383270();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 143384f70 FUN_143384f70 body=46 status=ok
// SIG undefined FUN_143384f70(void)

undefined8 FUN_143384f70(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0x6d) != 0) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + (ulonglong)*(byte *)(param_1 + 0x6d) * 4) + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143384f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143384ff0 FUN_143384ff0 body=142 status=ok
// SIG undefined FUN_143384ff0(void)

float * FUN_143384ff0(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[3];
  if (param_3 <= fVar1) {
    fVar4 = param_1[1];
    if (((fVar4 <= param_5) && (fVar3 = *param_1, fVar3 <= param_4)) &&
       (fVar2 = param_1[2], param_2 <= fVar2)) {
      if (fVar3 <= param_2) {
        fVar3 = param_2;
      }
      if (fVar2 <= param_4) {
        param_4 = fVar2;
      }
      if (fVar4 <= param_3) {
        fVar4 = param_3;
      }
      if (fVar1 <= param_5) {
        param_5 = fVar1;
      }
      *param_1 = fVar3;
      param_1[2] = param_4;
      param_1[1] = fVar4;
      param_1[3] = param_5;
      return param_1;
    }
  }
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return param_1;
}



// FUNCTION 143385080 FUN_143385080 body=135 status=ok
// SIG undefined FUN_143385080(void)

bool FUN_143385080(longlong param_1,RefCountNTSImpl *param_2)

{
  int *piVar1;
  RefCountNTSImpl *this;
  
  piVar1 = *(int **)(param_1 + 0x28);
  this = (RefCountNTSImpl *)0x0;
  if (piVar1 != (int *)0x0) {
    this = *(RefCountNTSImpl **)(piVar1 + 2);
    if (this == (RefCountNTSImpl *)0x0) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
      this = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this + 8) == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return this == param_2;
}



// FUNCTION 143385110 FUN_143385110 body=103 status=ok
// SIG undefined FUN_143385110(void)

ulonglong FUN_143385110(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_143385080(param_1 + 0x4cc0 +
                        (ulonglong)*(byte *)((param_3 & 0xffffffff) + 0x52c4 + param_1) * 0x60);
  if (((char)uVar1 != '\0') &&
     (uVar1 = (ulonglong)*(byte *)((param_3 & 0xffffffff) + 0x52c4 + param_1),
     *(char *)(uVar1 * 0x60 + 0x4d10 + param_1) != '\0')) {
    return 1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143385180 FUN_143385180 body=92 status=ok
// SIG undefined FUN_143385180(void)

void FUN_143385180(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [4];
  
  plVar1 = (longlong *)(param_1 + -0x18);
  if (param_1 == 0) {
    plVar1 = (longlong *)0x0;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x268))();
  if (plVar1 != (longlong *)0x0) {
    local_18[0] = 0x21000;
    (**(code **)(*plVar1 + 8))(plVar1,local_18,param_2,&local_res18);
  }
  return;
}



// FUNCTION 1433851e0 GetStateAddRef body=141 status=ok
// SIG undefined GetStateAddRef(void)

undefined8 Scaleform::GFx::FontManagerStates::GetStateAddRef(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0x14) {
    if (*(RefCountImpl **)(param_1 + 8) != (RefCountImpl *)0x0) {
      RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 8));
    }
    return *(undefined8 *)(param_1 + 8);
  }
  if (param_2 == 0x17) {
    if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
      RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x10));
    }
    return *(undefined8 *)(param_1 + 0x10);
  }
  if (param_2 == 0x16) {
    if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
      RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x18));
    }
    return *(undefined8 *)(param_1 + 0x18);
  }
  if (param_2 == 1) {
    if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
      RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x20));
    }
    return *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x000143385269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
  return uVar1;
}



// FUNCTION 143385280 FUN_143385280 body=240 status=ok
// SIG undefined FUN_143385280(void)

byte FUN_143385280(longlong param_1,RefCountImpl *param_2,RefCountImpl *param_3,
                  RefCountImpl *param_4,RefCountImpl *param_5)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(RefCountImpl **)(param_1 + 0x18) != param_2) {
    bVar1 = 1;
    if (param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_2);
    }
    if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
    }
    *(RefCountImpl **)(param_1 + 0x18) = param_2;
  }
  if (*(RefCountImpl **)(param_1 + 0x20) != param_3) {
    bVar1 = bVar1 | 2;
    if (param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_3);
    }
    if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
    }
    *(RefCountImpl **)(param_1 + 0x20) = param_3;
  }
  if (*(RefCountImpl **)(param_1 + 0x28) != param_4) {
    bVar1 = bVar1 | 4;
    if (param_4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_4);
    }
    if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x28));
    }
    *(RefCountImpl **)(param_1 + 0x28) = param_4;
  }
  if (*(RefCountImpl **)(param_1 + 0x30) != param_5) {
    bVar1 = bVar1 | 8;
    if (param_5 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_5);
    }
    if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
    }
    *(RefCountImpl **)(param_1 + 0x30) = param_5;
  }
  return bVar1;
}



// FUNCTION 143385380 FUN_143385380 body=3992 status=ok
// SIG undefined FUN_143385380(void)

RefCountImpl *
FUN_143385380(RefCountImpl *param_1,int *param_2,uint param_3,undefined8 *param_4,int *param_5)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  RefCountImpl *pRVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  RefCountImpl *pRVar9;
  char *pcVar10;
  int *piVar11;
  RefCountImpl *pRVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  int *piVar17;
  RefCountImpl *pRVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  uint local_res18;
  int *piVar23;
  undefined4 uVar24;
  RefCountImpl *local_158;
  int *local_150;
  int local_148;
  longlong *local_140;
  longlong *local_138;
  longlong local_130;
  longlong lStack_128;
  int *local_120;
  undefined1 *local_118 [6];
  longlong local_e8;
  longlong local_e0;
  int local_d8 [2];
  undefined8 local_d0;
  ulonglong local_c8;
  longlong local_c0;
  int *local_b8;
  uint local_b0;
  int *local_a8;
  uint local_a0;
  int *local_98;
  uint local_90;
  int *local_88;
  uint local_80;
  
  piVar2 = param_5;
  pRVar18 = (RefCountImpl *)0x0;
  lVar7 = *(longlong *)(param_1 + 0x40);
  local_158 = (RefCountImpl *)0x0;
  local_e8 = *(longlong *)(lVar7 + 0x28);
  local_138 = *(longlong **)(lVar7 + 0x18);
  local_c0 = *(longlong *)(lVar7 + 0x20);
  local_148 = 0;
  local_140 = (longlong *)0x0;
  local_d8[0] = 0;
  local_d0 = 0;
  local_b8 = param_2;
  local_b0 = param_3;
  FUN_1432c2f70(&local_c8);
  local_120 = (int *)0x0;
  bVar1 = false;
  pRVar9 = pRVar18;
  local_res18 = param_3;
  do {
    plVar16 = local_140;
    if (piVar2 == (int *)0x0) {
      if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_1433854fa;
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(lVar7 + (longlong)param_2) != '\0');
      uVar8 = FUN_1432c4390(param_2,lVar7,0x1505);
      lVar7 = FUN_1433876c0(param_1 + 0x10,&local_b8,
                            (local_res18 & 3 ^ uVar8) &
                            *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 8));
      plVar16 = local_140;
      if ((lVar7 < 0) ||
         (plVar15 = (longlong *)((lVar7 + 1) * 0x20 + *(longlong *)(param_1 + 0x10)),
         plVar15 == (longlong *)0x0)) goto LAB_1433854fa;
      if (((local_res18 & 0x10) == 0) &&
         (pRVar5 = (RefCountImpl *)*plVar15,
         ((*(uint *)(*(longlong *)(pRVar5 + 0x30) + 0x1c) | *(uint *)(pRVar5 + 0x18)) & 0x10) != 0))
      {
        plVar16 = plVar15;
        if ((char)plVar15[1] == '\0') goto LAB_1433854fa;
        Scaleform::RefCountImpl::AddRef(pRVar5);
        pRVar9 = (RefCountImpl *)*plVar15;
      }
      else {
LAB_14338577c:
        Scaleform::RefCountImpl::AddRef((RefCountImpl *)*plVar15);
        pRVar9 = (RefCountImpl *)*plVar15;
      }
      goto LAB_143386295;
    }
    local_148 = local_148 + 1;
    local_120 = local_d8;
    *piVar2 = *piVar2 + 1;
LAB_1433854fa:
    local_140 = plVar16;
    plVar16 = *(longlong **)(param_1 + 0x30);
    pRVar5 = pRVar18;
    if (plVar16 != (longlong *)0x0) {
      pRVar5 = (RefCountImpl *)(**(code **)(*plVar16 + 0xe0))(plVar16,param_2,local_res18,local_120)
      ;
    }
    piVar23 = local_d8;
    FUN_1433880e0(piVar2,param_2,local_res18,
                  *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) != 0,piVar23);
    local_e0 = 0;
    if (pRVar5 == (RefCountImpl *)0x0) {
      if (*(longlong *)(param_1 + 0x68) != 0) {
        pRVar5 = (RefCountImpl *)
                 FUN_1432edcc0(*(longlong *)(param_1 + 0x68),param_2,local_res18,&local_e0);
        if (pRVar5 != (RefCountImpl *)0x0) goto LAB_143385619;
        if (piVar2 != (int *)0x0) {
          FUN_1432c5960(local_118,DAT_146b62f28);
          Scaleform::StringBuffer::AppendString(local_118,"Registered fonts: \"",0xffffffffffffffff)
          ;
          Scaleform::StringBuffer::AppendString(local_118,param_2,0xffffffffffffffff);
          Scaleform::StringBuffer::AppendString(local_118,&DAT_145afa020,0xffffffffffffffff);
          uVar6 = Scaleform::GFx::FontFlagsToString(local_res18);
          Scaleform::StringBuffer::AppendString(local_118,uVar6,0xffffffffffffffff);
          Scaleform::StringBuffer::AppendString(local_118," not found.",0xffffffffffffffff);
          FUN_143388000(piVar2);
          Scaleform::StringBuffer::~StringBuffer(local_118);
        }
      }
    }
    else {
LAB_143385619:
      if ((~(byte)(*(uint *)((longlong)*(longlong **)(pRVar5 + 0x18) + 0x1c) >> 6) & 1) != 0) {
        if (((local_res18 & 3) != 0) &&
           (cVar3 = (**(code **)(**(longlong **)(pRVar5 + 0x18) + 0x98))(), cVar3 == '\0')) {
          if (param_4 != (undefined8 *)0x0) {
            *param_4 = pRVar5;
          }
          pRVar9 = (RefCountImpl *)0x0;
          if (local_140 != (longlong *)0x0) {
            *(undefined8 *)(*local_140 + 0x10) = 0;
            FUN_143387010(param_1 + 0x10,local_140);
          }
          goto LAB_143386295;
        }
        pRVar9 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))();
        lVar7 = local_e0;
        if (pRVar9 == (RefCountImpl *)0x0) {
          local_158 = (RefCountImpl *)0x0;
          pRVar9 = pRVar18;
        }
        else {
          pRVar12 = param_1;
          if (piVar2 != (int *)0x0) {
            pRVar12 = pRVar18;
          }
          piVar23 = (int *)((ulonglong)piVar23 & 0xffffffff00000000);
          FUN_143387900(pRVar9,pRVar12,*(undefined8 *)(pRVar5 + 0x18),param_2,piVar23);
          *(undefined ***)pRVar9 = &PTR_FUN_145b034e8;
          if (lVar7 != 0) {
            Scaleform::GFx::Resource::AddRef(lVar7);
          }
          *(longlong *)(pRVar9 + 0x38) = lVar7;
          local_158 = pRVar9;
        }
      }
    }
    if (local_140 != (longlong *)0x0) {
      if (pRVar9 == (RefCountImpl *)0x0) {
        *(undefined1 *)(local_140 + 1) = 1;
        Scaleform::RefCountImpl::AddRef((RefCountImpl *)*local_140);
        pRVar9 = (RefCountImpl *)*local_140;
        goto LAB_143386295;
      }
      pRVar5 = param_1 + 0x10;
      *(undefined8 *)(*local_140 + 0x10) = 0;
      FUN_143387010(pRVar5);
      if (*(longlong *)pRVar5 != 0) {
        if ((*(ulonglong *)(*(ulonglong *)(pRVar9 + 0x20) & 0xfffffffffffffffc) & 0x7fffffffffffffff
            ) == 0) {
          lVar7 = (**(code **)(**(longlong **)(pRVar9 + 0x30) + 8))();
        }
        else {
          lVar7 = (longlong)(*(ulonglong *)(pRVar9 + 0x20) & 0xfffffffffffffffc) + 0xc;
        }
        uVar20 = *(uint *)(pRVar9 + 0x18);
        uVar19 = *(uint *)(*(longlong *)(pRVar9 + 0x30) + 0x1c);
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while (*(char *)(lVar7 + lVar13) != '\0');
        uVar8 = FUN_1432c4390(lVar7,lVar13,0x1505);
        lVar7 = FUN_143387590(pRVar5,&local_158,
                              ((uVar19 & 3 | (uVar20 | uVar19) & 3) ^ uVar8) &
                              *(ulonglong *)(*(longlong *)pRVar5 + 8));
        if (-1 < lVar7) {
          local_140 = (longlong *)((lVar7 + 1) * 0x20 + *(longlong *)pRVar5);
          if (local_140 != (longlong *)0x0) {
            *(undefined8 *)(pRVar9 + 0x10) = 0;
            Scaleform::RefCountImpl::Release(pRVar9);
            plVar15 = local_140;
            goto LAB_14338577c;
          }
          goto LAB_143385791;
        }
      }
      local_140 = (longlong *)0x0;
    }
LAB_143385791:
    fVar22 = 1.0;
    param_5._0_4_ = local_res18;
    fVar21 = 0.0;
    local_150 = param_2;
    if (pRVar9 == (RefCountImpl *)0x0) {
      piVar17 = param_2;
      uVar20 = 0;
      if ((local_c0 != 0) &&
         (cVar3 = FUN_1433016a0(local_c0,param_1 + 0x50,param_2), uVar20 = 0, cVar3 != '\0')) {
        piVar11 = (int *)((*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc) + 0xc);
        if (*(uint *)(param_1 + 0x5c) != 0x10) {
          param_5._0_4_ = *(uint *)(param_1 + 0x5c) & 0xfffffff3 | local_res18 & 0xfffffffc;
        }
        uVar20 = *(uint *)(param_1 + 0x5c);
        fVar22 = *(float *)(param_1 + 0x58);
        uVar19 = 0;
        if ((uVar20 & 0xc) != 0) {
          uVar19 = (int)uVar20 >> 2;
        }
        fVar21 = *(float *)(param_1 + 0x60);
        uVar20 = uVar19 & 3 | uVar20 & 0x20;
        local_150 = piVar11;
        if (piVar2 == (int *)0x0) {
          pRVar5 = param_1 + 0x10;
          local_a8 = piVar11;
          local_a0 = (uint)param_5;
          if (*(longlong *)pRVar5 != 0) {
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (*(char *)((longlong)piVar11 + lVar7) != '\0');
            FUN_1432c4390(piVar11,lVar7,0x1505);
            lVar7 = FUN_1433876c0(pRVar5);
            if ((lVar7 < 0) ||
               (plVar16 = (longlong *)((lVar7 + 1) * 0x20 + *(longlong *)pRVar5),
               plVar16 == (longlong *)0x0)) goto LAB_14338597b;
            pRVar9 = (RefCountImpl *)*plVar16;
            if ((*(float *)(pRVar9 + 0x28) != fVar22) || (*(float *)(pRVar9 + 0x2c) != fVar21)) {
              pRVar9 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))();
              if (pRVar9 == (RefCountImpl *)0x0) {
                local_158 = (RefCountImpl *)0x0;
              }
              else {
                piVar23 = (int *)CONCAT44((int)((ulonglong)piVar23 >> 0x20),local_res18);
                lVar7 = *(longlong *)(*plVar16 + 0x38);
                FUN_143387900(pRVar9,param_1,*(undefined8 *)(*plVar16 + 0x30),param_2,piVar23);
                *(undefined ***)pRVar9 = &PTR_FUN_145b034e8;
                if (lVar7 != 0) {
                  Scaleform::GFx::Resource::AddRef(lVar7);
                }
                *(longlong *)(pRVar9 + 0x38) = lVar7;
                local_158 = pRVar9;
              }
              *(float *)(local_158 + 0x28) = fVar22;
              *(float *)(local_158 + 0x2c) = fVar21;
              pRVar9 = local_158;
              goto LAB_14338597b;
            }
LAB_1433861c9:
            Scaleform::RefCountImpl::AddRef(pRVar9);
            pRVar9 = (RefCountImpl *)*plVar16;
            goto LAB_143386295;
          }
LAB_14338597b:
          local_98 = param_2;
          local_90 = (uint)param_5;
          if (*(longlong *)pRVar5 != 0) {
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (*(char *)(lVar7 + (longlong)param_2) != '\0');
            FUN_1432c4390(param_2,lVar7,0x1505);
            lVar7 = FUN_1433876c0(pRVar5);
            if ((-1 < lVar7) &&
               (plVar16 = (longlong *)((lVar7 + 1) * 0x20 + *(longlong *)pRVar5),
               plVar16 != (longlong *)0x0)) {
              pRVar9 = (RefCountImpl *)*plVar16;
              if ((*(float *)(pRVar9 + 0x28) == fVar22) && (*(float *)(pRVar9 + 0x2c) == fVar21))
              goto LAB_1433861c9;
              lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))();
              if (lVar7 == 0) {
                local_158 = (RefCountImpl *)0x0;
              }
              else {
                piVar23 = (int *)CONCAT44((int)((ulonglong)piVar23 >> 0x20),local_res18);
                local_158 = (RefCountImpl *)
                            Scaleform::GFx::FontHandle::FontHandle
                                      (lVar7,param_1,*(undefined8 *)(*plVar16 + 0x30),param_2,
                                       piVar23,*(undefined8 *)(*plVar16 + 0x38));
              }
              *(float *)(local_158 + 0x28) = fVar22;
              *(float *)(local_158 + 0x2c) = fVar21;
              pRVar9 = local_158;
            }
          }
          piVar17 = local_150;
          if (pRVar9 != (RefCountImpl *)0x0) goto LAB_143385d57;
        }
        else {
          FUN_143387d00(piVar2,"Applying FontMap: \"",param_2,"\"  mapped to \"",piVar11,
                        &DAT_145afa020,(uint)param_5);
          piVar17 = local_150;
          piVar23 = piVar11;
        }
      }
      if (local_138 != (longlong *)0x0) {
        local_130 = 0;
        lStack_128 = 0;
        pRVar5 = (RefCountImpl *)(*(longlong *)(param_1 + 0x40) + 0x10);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          pRVar5 = pRVar18;
        }
        piVar23 = *(int **)(param_1 + 0x30);
        cVar3 = (**(code **)(*local_138 + 8))
                          (local_138,&local_130,piVar17,(uint)param_5,piVar23,pRVar5,
                           *(undefined8 *)(param_1 + 0x38));
        uVar24 = (undefined4)((ulonglong)piVar23 >> 0x20);
        if (cVar3 == '\0') {
          if (piVar2 != (int *)0x0) {
            FUN_1432c5960(local_118,DAT_146b62f28);
            Scaleform::StringBuffer::AppendString
                      (local_118,"Searching FontLib: \"",0xffffffffffffffff);
            Scaleform::StringBuffer::AppendString(local_118,piVar17,0xffffffffffffffff);
            Scaleform::StringBuffer::AppendString(local_118,&DAT_145b037b0,0xffffffffffffffff);
            uVar6 = Scaleform::GFx::FontFlagsToString((uint)param_5);
            Scaleform::StringBuffer::AppendString(local_118,uVar6,0xffffffffffffffff);
            Scaleform::StringBuffer::AppendString(local_118," not found.",0xffffffffffffffff);
            FUN_143388000(piVar2);
            Scaleform::StringBuffer::~StringBuffer(local_118);
          }
        }
        else if (uVar20 == 0) {
          pRVar9 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
          lVar7 = local_130;
          uVar24 = (undefined4)((ulonglong)piVar23 >> 0x20);
          if (pRVar9 == (RefCountImpl *)0x0) {
            local_158 = (RefCountImpl *)0x0;
          }
          else {
            pRVar5 = param_1;
            if (piVar2 != (int *)0x0) {
              pRVar5 = pRVar18;
            }
            uVar8 = (ulonglong)piVar23 & 0xffffffff00000000;
            FUN_143387900(pRVar9,pRVar5,*(undefined8 *)(lStack_128 + 0x18),param_2,uVar8);
            uVar24 = (undefined4)(uVar8 >> 0x20);
            *(undefined ***)pRVar9 = &PTR_FUN_145b034e8;
            if (lVar7 != 0) {
              Scaleform::GFx::Resource::AddRef(lVar7);
            }
            *(longlong *)(pRVar9 + 0x38) = lVar7;
            piVar17 = local_150;
            local_158 = pRVar9;
          }
          pRVar9 = local_158;
          *(float *)(local_158 + 0x28) = fVar22;
          piVar23 = (int *)CONCAT44(uVar24,(uint)param_5);
          *(float *)(local_158 + 0x2c) = fVar21;
          FUN_143387f20(piVar2,"Searching FontLib: \"",piVar17,&DAT_145b037b0,piVar23," found.");
        }
        else {
          local_88 = param_2;
          local_80 = uVar20;
          if (*(longlong *)(param_1 + 0x10) != 0) {
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (*(char *)(lVar7 + (longlong)param_2) != '\0');
            uVar8 = FUN_1432c4390(param_2,lVar7,0x1505);
            lVar7 = FUN_1433876c0(param_1 + 0x10,&local_88,
                                  (uVar20 & 3 ^ uVar8) &
                                  *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 8));
            if ((-1 < lVar7) &&
               (plVar16 = (longlong *)((lVar7 + 1) * 0x20 + *(longlong *)(param_1 + 0x10)),
               plVar16 != (longlong *)0x0)) {
              Scaleform::RefCountImpl::AddRef((RefCountImpl *)*plVar16);
              pRVar9 = (RefCountImpl *)*plVar16;
              FUN_1432bc540(&local_130);
              goto LAB_143386295;
            }
          }
          pRVar9 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
          lVar7 = local_130;
          if (pRVar9 == (RefCountImpl *)0x0) {
            local_158 = (RefCountImpl *)0x0;
          }
          else {
            pRVar5 = param_1;
            if (piVar2 != (int *)0x0) {
              pRVar5 = pRVar18;
            }
            uVar6 = CONCAT44(uVar24,uVar20);
            FUN_143387900(pRVar9,pRVar5,*(undefined8 *)(lStack_128 + 0x18),param_2,uVar6);
            uVar24 = (undefined4)((ulonglong)uVar6 >> 0x20);
            *(undefined ***)pRVar9 = &PTR_FUN_145b034e8;
            if (lVar7 != 0) {
              Scaleform::GFx::Resource::AddRef(lVar7);
            }
            *(longlong *)(pRVar9 + 0x38) = lVar7;
            local_158 = pRVar9;
          }
          pRVar9 = local_158;
          *(float *)(local_158 + 0x28) = fVar22;
          piVar23 = (int *)CONCAT44(uVar24,uVar20);
          *(float *)(local_158 + 0x2c) = fVar21;
          FUN_143387f20(piVar2,"Searching FontLib: \"",param_2,&DAT_145b037b0,piVar23," found.");
        }
        FUN_1432bc540(&local_130);
      }
    }
LAB_143385d57:
    piVar17 = local_150;
    if ((!bVar1) && (piVar2 != (int *)0x0)) {
      if (pRVar9 == (RefCountImpl *)0x0) {
        if ((local_138 == (longlong *)0x0) && (local_d8[0] == 2)) {
          FUN_143388000(piVar2,"FontLib not installed.");
        }
        goto LAB_143385d99;
      }
LAB_143385fb7:
      if (piVar2 == (int *)0x0) goto LAB_143385fe2;
      if (pRVar9 == (RefCountImpl *)0x0) {
        if ((local_e8 == 0) && (local_d8[0] == 2)) {
          FUN_143388000(piVar2,"FontProvider not installed.");
        }
        goto LAB_143385feb;
      }
LAB_143386209:
      if (piVar2 == (int *)0x0) {
        if ((*(ulonglong *)(*(ulonglong *)(pRVar9 + 0x20) & 0xfffffffffffffffc) & 0x7fffffffffffffff
            ) == 0) {
          lVar7 = (**(code **)(**(longlong **)(pRVar9 + 0x30) + 8))();
        }
        else {
          lVar7 = (longlong)(*(ulonglong *)(pRVar9 + 0x20) & 0xfffffffffffffffc) + 0xc;
        }
        uVar20 = *(uint *)(pRVar9 + 0x18);
        uVar19 = *(uint *)(*(longlong *)(pRVar9 + 0x30) + 0x1c);
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while (*(char *)(lVar7 + lVar13) != '\0');
        uVar8 = FUN_1432c4390(lVar7,lVar13,0x1505);
        FUN_143387320(param_1 + 0x10,param_1 + 0x10,&local_158,
                      (uVar19 & 3 | (uVar20 | uVar19) & 3) ^ uVar8);
      }
      else {
        *piVar2 = *piVar2 - local_148;
      }
      goto LAB_143386295;
    }
    if (pRVar9 == (RefCountImpl *)0x0) {
LAB_143385d99:
      piVar17 = local_150;
      if (local_e8 != 0) {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_143385fae;
          uVar6 = *(undefined8 *)(param_1 + 0x38);
        }
        else {
          uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28) + 0x28);
        }
        lVar7 = FUN_14339baf0(local_150,(uint)param_5,local_e8,uVar6);
        if (lVar7 == 0) {
          if (piVar2 != (int *)0x0) {
            FUN_1432c5960(local_118,DAT_146b62f28);
            Scaleform::StringBuffer::AppendString
                      (local_118,"Searching FontProvider: \"",0xffffffffffffffff);
            Scaleform::StringBuffer::AppendString(local_118,piVar17,0xffffffffffffffff);
            Scaleform::StringBuffer::AppendString(local_118,&DAT_145b037b0,0xffffffffffffffff);
            uVar6 = Scaleform::GFx::FontFlagsToString((uint)param_5);
            Scaleform::StringBuffer::AppendString(local_118,uVar6,0xffffffffffffffff);
            Scaleform::StringBuffer::AppendString(local_118," not found.",0xffffffffffffffff);
            FUN_143388000(piVar2);
            Scaleform::StringBuffer::~StringBuffer(local_118);
          }
        }
        else {
          if (piVar2 != (int *)0x0) {
            FUN_1432c5960(local_118,DAT_146b62f28);
            Scaleform::StringBuffer::AppendString(local_118,"Searching FontProvider: \"");
            Scaleform::StringBuffer::AppendString(local_118,piVar17);
            Scaleform::StringBuffer::AppendString(local_118,&DAT_145b037b0);
            uVar6 = Scaleform::GFx::FontFlagsToString((uint)param_5);
            Scaleform::StringBuffer::AppendString(local_118,uVar6);
            Scaleform::StringBuffer::AppendString(local_118," found.");
            puVar14 = &DAT_145af3922;
            if (local_118[0] != (undefined1 *)0x0) {
              puVar14 = local_118[0];
            }
            FUN_143388000(piVar2,puVar14);
            Scaleform::StringBuffer::~StringBuffer(local_118);
          }
          pRVar9 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))();
          if (pRVar9 == (RefCountImpl *)0x0) {
            local_158 = (RefCountImpl *)0x0;
          }
          else {
            pRVar5 = param_1;
            if (piVar2 != (int *)0x0) {
              pRVar5 = pRVar18;
            }
            FUN_143387900(pRVar9,pRVar5,*(undefined8 *)(lVar7 + 0x18),param_2,
                          (ulonglong)piVar23 & 0xffffffff00000000);
            *(undefined ***)pRVar9 = &PTR_FUN_145b034e8;
            *(undefined8 *)(pRVar9 + 0x38) = 0;
            local_158 = pRVar9;
          }
          pRVar9 = local_158;
          *(float *)(local_158 + 0x28) = fVar22;
          *(float *)(local_158 + 0x2c) = fVar21;
          FUN_1432de450(lVar7);
        }
      }
    }
LAB_143385fae:
    if (!bVar1) goto LAB_143385fb7;
LAB_143385fe2:
    if (pRVar9 != (RefCountImpl *)0x0) goto LAB_143386209;
LAB_143385feb:
    if ((local_138 != (longlong *)0x0) && (((uint)param_5 & 0x10) != 0)) {
      local_130 = 0;
      lStack_128 = 0;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      pRVar5 = (RefCountImpl *)(*(longlong *)(param_1 + 0x40) + 0x10);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        pRVar5 = pRVar18;
      }
      cVar3 = (**(code **)(*local_138 + 8))
                        (local_138,&local_130,piVar17,(uint)param_5 & 0xffffffef,uVar6,pRVar5,0);
      uVar24 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (cVar3 == '\0') {
        pcVar10 = " not found.";
      }
      else {
        pRVar9 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
        lVar7 = local_130;
        if (pRVar9 == (RefCountImpl *)0x0) {
          local_158 = (RefCountImpl *)0x0;
        }
        else {
          pRVar5 = param_1;
          if (piVar2 != (int *)0x0) {
            pRVar5 = pRVar18;
          }
          uVar6 = CONCAT44(uVar24,0x10);
          FUN_143387900(pRVar9,pRVar5,*(undefined8 *)(lStack_128 + 0x18),param_2,uVar6);
          uVar24 = (undefined4)((ulonglong)uVar6 >> 0x20);
          *(undefined ***)pRVar9 = &PTR_FUN_145b034e8;
          if (lVar7 != 0) {
            Scaleform::GFx::Resource::AddRef(lVar7);
          }
          *(longlong *)(pRVar9 + 0x38) = lVar7;
          local_158 = pRVar9;
        }
        *(float *)(local_158 + 0x28) = fVar22;
        pcVar10 = " found.";
        *(float *)(local_158 + 0x2c) = fVar21;
        pRVar9 = local_158;
      }
      FUN_143387f20(piVar2,"Searching FontLib without [Device] flag: \"",piVar17,&DAT_145b037b0,
                    CONCAT44(uVar24,(uint)param_5) & 0xffffffffffffffef,pcVar10);
      FUN_1432bc540(&local_130);
      if (pRVar9 != (RefCountImpl *)0x0) goto LAB_143386209;
    }
    if ((local_res18 & 0x10) == 0) {
      pRVar9 = pRVar18;
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 - local_148;
      }
LAB_143386295:
      iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_c8 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar4 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_c8 & 0xfffffffffffffffc);
      }
      FUN_143316b80(&local_d0);
      return pRVar9;
    }
    FUN_143388000(piVar2,"Searching again without [Device] flag:");
    local_res18 = local_res18 & 0xffffffef;
    local_e8 = 0;
    local_138 = (longlong *)0x0;
    bVar1 = true;
    local_b0 = local_res18;
  } while( true );
}



// FUNCTION 143386320 FUN_143386320 body=983 status=ok
// SIG undefined FUN_143386320(void)

undefined8 * FUN_143386320(longlong param_1,undefined8 param_2,uint param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  RefCountImpl *this;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int local_res20;
  int *piVar10;
  undefined8 *local_88;
  longlong local_80;
  uint local_78;
  undefined1 *local_70 [7];
  
  local_res20 = 0;
  if (param_4 != (int *)0x0) {
    local_res20 = *param_4;
    FUN_143387f20(param_4,"Searching for font: \"",param_2,&DAT_145b037b0,param_3,&DAT_145af3922);
  }
  local_80 = 0;
  piVar10 = param_4;
  puVar3 = (undefined8 *)FUN_143385380(param_1,param_2,param_3,&local_80,param_4);
  lVar8 = -1;
  if ((puVar3 == (undefined8 *)0x0) && ((param_3 & 3) != 0)) {
    if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + 1;
      FUN_143387f20(param_4,"Searching for font: \"",param_2,&DAT_145b037b0,
                    CONCAT44((int)((ulonglong)piVar10 >> 0x20),param_3) & 0xfffffffffffffffc,
                    &DAT_145af3922);
    }
    piVar10 = param_4;
    this = (RefCountImpl *)FUN_143385380(param_1,param_2,param_3 & 0xfffffffc,0,param_4);
    if (this != (RefCountImpl *)0x0) {
      lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
      if (lVar4 == 0) {
        local_88 = (undefined8 *)0x0;
      }
      else {
        local_88 = (undefined8 *)Scaleform::GFx::FontHandle::FontHandle(lVar4,this);
      }
      puVar3 = local_88;
      *(uint *)(local_88 + 3) = *(uint *)(local_88 + 3) | param_3 & 3;
      if (param_4 == (int *)0x0) {
        if ((*(ulonglong *)(local_88[4] & 0xfffffffffffffffc) & 0x7fffffffffffffff) == 0) {
          lVar4 = (**(code **)(*(longlong *)local_88[6] + 8))();
        }
        else {
          lVar4 = (longlong)(local_88[4] & 0xfffffffffffffffc) + 0xc;
        }
        lVar7 = -1;
        uVar1 = *(uint *)(puVar3[6] + 0x1c);
        local_78 = (*(uint *)(puVar3 + 3) | uVar1) & 3;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(lVar4 + lVar7) != '\0');
        uVar5 = FUN_1432c4390(lVar4,lVar7,0x1505);
        FUN_143387320(param_1 + 0x10,param_1 + 0x10,&local_88,(uVar1 | local_78) & 3 ^ uVar5);
        Scaleform::RefCountImpl::Release(this);
      }
      else {
        piVar10 = (int *)CONCAT44((int)((ulonglong)piVar10 >> 0x20),param_3);
        FUN_143387df0(param_4,"Font \"",param_2,&DAT_145b037b0,piVar10," will be generated from \"",
                      param_2,&DAT_145afa020,param_3 & 0xfffffffc);
        Scaleform::RefCountImpl::Release(this);
      }
    }
  }
  lVar4 = local_80;
  if (param_4 != (int *)0x0) {
    *param_4 = local_res20;
  }
  if (puVar3 == (undefined8 *)0x0) {
    if (local_80 != 0) {
      if (param_4 != (int *)0x0) {
        FUN_1432c5960(local_70,DAT_146b62f28);
        Scaleform::StringBuffer::AppendString(local_70,"Empty font: \"",0xffffffffffffffff);
        Scaleform::StringBuffer::AppendString(local_70,param_2,0xffffffffffffffff);
        Scaleform::StringBuffer::AppendString(local_70,"\" is created",0xffffffffffffffff);
        puVar9 = &DAT_145af3922;
        if (local_70[0] != (undefined1 *)0x0) {
          puVar9 = local_70[0];
        }
        FUN_143388000(param_4,puVar9);
        Scaleform::StringBuffer::~StringBuffer(local_70);
      }
      puVar6 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
      if (puVar6 != (undefined8 *)0x0) {
        lVar7 = param_1;
        if (param_4 != (int *)0x0) {
          lVar7 = 0;
        }
        FUN_143387900(puVar6,lVar7,*(undefined8 *)(lVar4 + 0x18),param_2,
                      (ulonglong)piVar10 & 0xffffffff00000000);
        *puVar6 = &PTR_FUN_145b034e8;
        puVar6[7] = 0;
      }
      local_88 = puVar6;
      if (param_4 == (int *)0x0) {
        if ((*(ulonglong *)(puVar6[4] & 0xfffffffffffffffc) & 0x7fffffffffffffff) == 0) {
          lVar4 = (**(code **)(*(longlong *)puVar6[6] + 8))();
        }
        else {
          lVar4 = (longlong)(puVar6[4] & 0xfffffffffffffffc) + 0xc;
        }
        uVar1 = *(uint *)(puVar6 + 3);
        uVar2 = *(uint *)(puVar6[6] + 0x1c);
        do {
          lVar8 = lVar8 + 1;
        } while (*(char *)(lVar4 + lVar8) != '\0');
        uVar5 = FUN_1432c4390(lVar4,lVar8,0x1505);
        FUN_143387320(param_1 + 0x10,param_1 + 0x10,&local_88,
                      (uVar2 & 3 | (uVar1 | uVar2) & 3) ^ uVar5);
      }
      puVar3 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        return puVar6;
      }
    }
    FUN_143388000(param_4,"Font not found.");
  }
  return puVar3;
}



// FUNCTION 143386700 FUN_143386700 body=361 status=ok
// SIG undefined FUN_143386700(void)

void FUN_143386700(longlong param_1)

{
  longlong lVar1;
  RefCountImpl *this;
  RefCountImpl *pRVar2;
  RefCountImpl *pRVar3;
  RefCountImpl *pRVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0x4b;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x88,local_res8);
  pRVar4 = (RefCountImpl *)0x0;
  this = pRVar4;
  if (lVar1 != 0) {
    this = (RefCountImpl *)FUN_143398260(lVar1);
  }
  local_res10[0] = 2;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x40,local_res10);
  pRVar2 = pRVar4;
  if (lVar1 != 0) {
    pRVar2 = (RefCountImpl *)FUN_14339b960(lVar1,this,0);
  }
  pRVar3 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
  if (pRVar3 != (RefCountImpl *)0x0) {
    pRVar4 = *(RefCountImpl **)(pRVar2 + 0x18);
    *(undefined8 *)(pRVar3 + 8) = 0;
    *(undefined ***)pRVar3 = &PTR_FUN_144f70a50;
    *(undefined ***)pRVar3 = &PTR_FUN_145b034c0;
    *(undefined4 *)(pRVar3 + 8) = 1;
    *(undefined8 *)(pRVar3 + 0x10) = 0;
    *(undefined4 *)(pRVar3 + 0x18) = 0;
    FUN_1432c5250(pRVar3 + 0x20);
    *(undefined8 *)(pRVar3 + 0x28) = 0x3f800000;
    if (pRVar4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(pRVar4);
    }
    *(RefCountImpl **)(pRVar3 + 0x30) = pRVar4;
    *(undefined ***)pRVar3 = &PTR_FUN_145b034e8;
    *(undefined8 *)(pRVar3 + 0x38) = 0;
    pRVar4 = pRVar3;
  }
  if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x48));
  }
  *(RefCountImpl **)(param_1 + 0x48) = pRVar4;
  if (pRVar2 != (RefCountImpl *)0x0) {
    FUN_1432de450(pRVar2);
  }
  if (this == (RefCountImpl *)0x0) {
    return;
  }
  Scaleform::RefCountImpl::Release(this);
  return;
}



// FUNCTION 143386870 FUN_143386870 body=169 status=ok
// SIG undefined FUN_143386870(void)

undefined8 *
FUN_143386870(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b034f0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  FUN_1432c2f70(param_1 + 10);
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x10;
  param_1[0xd] = param_2;
  param_1[6] = param_3;
  param_1[7] = 0;
  param_1[8] = param_4;
  FUN_143386700(param_1);
  return param_1;
}



// FUNCTION 143386920 FUN_143386920 body=169 status=ok
// SIG undefined FUN_143386920(void)

undefined8 * FUN_143386920(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b034f0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  FUN_1432c2f70(param_1 + 10);
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x10;
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = param_3;
  FUN_143386700(param_1);
  return param_1;
}



// FUNCTION 1433869d0 FUN_1433869d0 body=265 status=ok
// SIG undefined FUN_1433869d0(void)

void FUN_1433869d0(RefCountImplCore *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x50);
  *(undefined ***)param_1 = &PTR_FUN_145b034f0;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x48));
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x18) + (lVar5 + -1) * 8);
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    if (*plVar4 != 0) {
      FUN_1432de450();
    }
    plVar4 = plVar4 + -1;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar5 = 0;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar5) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar5) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined ***)param_1 = &PTR_FUN_145b034c8;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143386ae0 FUN_143386ae0 body=246 status=ok
// SIG undefined FUN_143386ae0(void)

longlong FUN_143386ae0(undefined8 param_1,char *param_2,undefined4 param_3,char param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong _MaxCount;
  char *pcVar3;
  char local_98 [128];
  
  if (param_4 == '\0') {
    lVar1 = FUN_143386320();
    return lVar1;
  }
  lVar1 = 0;
  do {
    pcVar2 = strchr(param_2,0x2c);
    pcVar3 = param_2;
    if (pcVar2 == (char *)0x0) {
LAB_143386b8b:
      lVar1 = FUN_143386320(param_1,param_2,param_3,param_5);
      if (lVar1 != 0) {
        return lVar1;
      }
    }
    else {
      _MaxCount = (longlong)pcVar2 - (longlong)param_2;
      if (_MaxCount < 0x80) {
        strncpy_s(local_98,0x7f,param_2,_MaxCount);
        param_2 = local_98;
        local_98[_MaxCount] = '\0';
        pcVar3 = pcVar2 + 1;
        goto LAB_143386b8b;
      }
    }
    param_2 = pcVar3;
    if (pcVar2 == (char *)0x0) {
      return lVar1;
    }
  } while( true );
}



// FUNCTION 143386be0 FUN_143386be0 body=34 status=ok
// SIG undefined FUN_143386be0(void)

void FUN_143386be0(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if (param_2 != *(longlong *)(param_1 + 0x48)) {
    local_res10[0] = param_2;
    FUN_143387010(param_1 + 0x10,local_res10);
  }
  return;
}



// FUNCTION 143386c10 GetEmptyFont body=28 status=ok
// SIG undefined GetEmptyFont(void)

undefined8 Scaleform::GFx::FontManager::GetEmptyFont(longlong param_1)

{
  RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x48));
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 143386c40 FUN_143386c40 body=252 status=ok
// SIG undefined FUN_143386c40(void)

void FUN_143386c40(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar4 = 0;
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    uVar3 = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(lVar6 + 0x10);
    uVar3 = uVar4;
    do {
      plVar7 = plVar1;
      if (*plVar5 != -2) break;
      uVar3 = uVar3 + 1;
      plVar5 = plVar5 + 4;
    } while (uVar3 <= *(ulonglong *)(lVar6 + 8));
  }
  do {
    do {
      if (((plVar7 == (longlong *)0x0) || (lVar6 = *plVar7, lVar6 == 0)) ||
         (*(longlong *)(lVar6 + 8) < (longlong)uVar3)) {
        if (*plVar1 != 0) {
          lVar6 = *(longlong *)(*plVar1 + 8) + 1;
          do {
            if (*(longlong *)(*plVar1 + 0x10 + uVar4) != -2) {
              *(undefined8 *)(*plVar1 + 0x10 + uVar4) = 0xfffffffffffffffe;
            }
            uVar4 = uVar4 + 0x20;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*plVar1);
          *plVar1 = 0;
        }
        return;
      }
      *(undefined8 *)(*(longlong *)((uVar3 + 1) * 0x20 + lVar6) + 0x10) = 0;
      uVar2 = *(ulonglong *)(*plVar7 + 8);
    } while (((longlong)uVar2 < (longlong)uVar3) || (uVar3 = uVar3 + 1, uVar2 < uVar3));
    plVar5 = (longlong *)(*plVar7 + 0x10 + uVar3 * 0x20);
    do {
      if (*plVar5 != -2) break;
      uVar3 = uVar3 + 1;
      plVar5 = plVar5 + 4;
    } while (uVar3 <= uVar2);
  } while( true );
}



// FUNCTION 143386d50 FUN_143386d50 body=219 status=ok
// SIG undefined FUN_143386d50(void)

void FUN_143386d50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x10);
  uVar4 = 0;
  if (lVar1 == 0) {
    uVar4 = 0;
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar3 != -2) break;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar4 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      if (((plVar5 == (longlong *)0x0) || (lVar1 = *plVar5, lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 8) < (longlong)uVar4)) {
        return;
      }
      lVar1 = *(longlong *)(uVar4 * 0x20 + 0x20 + lVar1);
      if (*(longlong *)(lVar1 + 0x38) == param_2) {
        *(undefined8 *)(lVar1 + 0x10) = 0;
        FUN_1433871a0(plVar5,uVar4 * 0x20 + 0x20 + *plVar5);
      }
      uVar2 = *(ulonglong *)(*plVar5 + 8);
    } while (((longlong)uVar2 < (longlong)uVar4) || (uVar4 = uVar4 + 1, uVar2 < uVar4));
    plVar3 = (longlong *)(*plVar5 + 0x10 + uVar4 * 0x20);
    do {
      if (*plVar3 != -2) break;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar4 <= uVar2);
  } while( true );
}



// FUNCTION 143386e30 FUN_143386e30 body=232 status=ok
// SIG undefined FUN_143386e30(void)

void FUN_143386e30(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  cVar1 = FUN_143356fb0();
  if (cVar1 != '\0') {
    do {
      if (*(ulonglong *)(param_1 + 0x3f0) < 0x70) {
        plVar5 = *(longlong **)(param_1 + 0x1e0);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = DAT_146b62f28;
        }
        lVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,0x70,8);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 1000);
        lVar3 = (lVar2 + 0x6fU & 0xfffffffffffffff8) + 8;
        *(longlong *)(param_1 + 1000) = lVar3;
        uVar4 = (lVar3 - (longlong)(param_1 + 0x1e0)) - 8;
        lVar3 = 0x200 - uVar4;
        if (0x1ff < uVar4) {
          lVar3 = 0;
        }
        *(longlong *)(param_1 + 0x3f0) = lVar3;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_143353cf0(lVar2,param_1,*param_2);
      }
      FUN_143357040(param_1,lVar3,1);
      cVar1 = FUN_143356fb0(param_1);
    } while (cVar1 != '\0');
  }
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  return;
}



// FUNCTION 143386f20 FUN_143386f20 body=232 status=ok
// SIG undefined FUN_143386f20(void)

void FUN_143386f20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  cVar1 = FUN_143356fb0();
  if (cVar1 != '\0') {
    do {
      if (*(ulonglong *)(param_1 + 0x3f0) < 0x70) {
        plVar5 = *(longlong **)(param_1 + 0x1e0);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = DAT_146b62f28;
        }
        lVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,0x70,8);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 1000);
        lVar3 = (lVar2 + 0x6fU & 0xfffffffffffffff8) + 8;
        *(longlong *)(param_1 + 1000) = lVar3;
        uVar4 = (lVar3 - (longlong)(param_1 + 0x1e0)) - 8;
        lVar3 = 0x200 - uVar4;
        if (0x1ff < uVar4) {
          lVar3 = 0;
        }
        *(longlong *)(param_1 + 0x3f0) = lVar3;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_143353df0(lVar2,param_1,param_2);
      }
      FUN_143357040(param_1,lVar3,1);
      cVar1 = FUN_143356fb0(param_1);
    } while (cVar1 != '\0');
  }
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  return;
}



// FUNCTION 143387010 FUN_143387010 body=387 status=ok
// SIG undefined FUN_143387010(void)

ulonglong FUN_143387010(ulonglong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_28;
  undefined1 local_20;
  
  if (*param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar8 = *param_2;
  puVar7 = (ulonglong *)(*(ulonglong *)(lVar8 + 0x20) & 0xfffffffffffffffc);
  if ((*puVar7 & 0x7fffffffffffffff) == 0) {
    lVar5 = (**(code **)(**(longlong **)(lVar8 + 0x30) + 8))();
  }
  else {
    lVar5 = (longlong)puVar7 + 0xc;
  }
  uVar1 = *(uint *)(lVar8 + 0x18);
  uVar2 = *(uint *)(*(longlong *)(lVar8 + 0x30) + 0x1c);
  uVar9 = 0xffffffffffffffff;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (*(char *)(lVar5 + lVar8) != '\0');
  uVar6 = FUN_1432c4390(lVar5,lVar8,0x1505);
  uVar10 = ((uVar2 & 3 | (uVar1 | uVar2) & 3) ^ uVar6) & *(ulonglong *)(*param_1 + 8);
  uVar6 = uVar10 * 0x20;
  puVar7 = (ulonglong *)(*param_1 + 0x10 + uVar6);
  if ((*puVar7 == 0xfffffffffffffffe) || (uVar11 = uVar10, puVar7[1] != uVar10)) {
    uVar6 = ((uVar10 & 0x7ffffffffffffff) >> 3) << 8;
  }
  else {
    while( true ) {
      if (puVar7[1] == uVar10) {
        local_28 = *param_2;
        local_20 = 0;
        uVar6 = FUN_143387a60(puVar7 + 2,&local_28);
        if ((char)uVar6 != '\0') {
          if (uVar10 == uVar11) {
            if (*puVar7 != 0xffffffffffffffff) {
              lVar8 = *puVar7 * 0x20 + *param_1;
              *puVar7 = 0xfffffffffffffffe;
              *puVar7 = *(ulonglong *)(lVar8 + 0x10);
              puVar7[1] = *(ulonglong *)(lVar8 + 0x18);
              uVar9 = *(ulonglong *)(lVar8 + 0x28);
              puVar7[2] = *(ulonglong *)(lVar8 + 0x20);
              puVar7[3] = uVar9;
              puVar7 = (ulonglong *)(lVar8 + 0x10);
            }
          }
          else {
            *(ulonglong *)(*param_1 + 0x10 + uVar9 * 0x20) = *puVar7;
          }
          *puVar7 = 0xfffffffffffffffe;
          plVar4 = (longlong *)*param_1;
          *plVar4 = *plVar4 + -1;
          return CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
        }
      }
      uVar3 = *puVar7;
      if (uVar3 == 0xffffffffffffffff) break;
      uVar6 = *param_1;
      puVar7 = (ulonglong *)(uVar6 + 0x10 + uVar3 * 0x20);
      uVar9 = uVar11;
      uVar11 = uVar3;
    }
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  return uVar6;
}



// FUNCTION 1433871a0 FUN_1433871a0 body=372 status=ok
// SIG undefined FUN_1433871a0(void)

ulonglong FUN_1433871a0(ulonglong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (*param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar8 = *param_2;
  puVar7 = (ulonglong *)(*(ulonglong *)(lVar8 + 0x20) & 0xfffffffffffffffc);
  if ((*puVar7 & 0x7fffffffffffffff) == 0) {
    lVar5 = (**(code **)(**(longlong **)(lVar8 + 0x30) + 8))();
  }
  else {
    lVar5 = (longlong)puVar7 + 0xc;
  }
  uVar1 = *(uint *)(lVar8 + 0x18);
  uVar2 = *(uint *)(*(longlong *)(lVar8 + 0x30) + 0x1c);
  uVar9 = 0xffffffffffffffff;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (*(char *)(lVar5 + lVar8) != '\0');
  uVar6 = FUN_1432c4390(lVar5,lVar8,0x1505);
  uVar10 = ((uVar2 & 3 | (uVar1 | uVar2) & 3) ^ uVar6) & *(ulonglong *)(*param_1 + 8);
  uVar6 = uVar10 * 0x20;
  puVar7 = (ulonglong *)(*param_1 + 0x10 + uVar6);
  if ((*puVar7 == 0xfffffffffffffffe) || (uVar11 = uVar10, puVar7[1] != uVar10)) {
    uVar6 = ((uVar10 & 0x7ffffffffffffff) >> 3) << 8;
  }
  else {
    while( true ) {
      if ((puVar7[1] == uVar10) && (uVar6 = FUN_143387a60(puVar7 + 2,param_2), (char)uVar6 != '\0'))
      {
        if (uVar10 == uVar11) {
          if (*puVar7 != 0xffffffffffffffff) {
            lVar8 = *puVar7 * 0x20 + *param_1;
            *puVar7 = 0xfffffffffffffffe;
            *puVar7 = *(ulonglong *)(lVar8 + 0x10);
            puVar7[1] = *(ulonglong *)(lVar8 + 0x18);
            uVar9 = *(ulonglong *)(lVar8 + 0x28);
            puVar7[2] = *(ulonglong *)(lVar8 + 0x20);
            puVar7[3] = uVar9;
            puVar7 = (ulonglong *)(lVar8 + 0x10);
          }
        }
        else {
          *(ulonglong *)(*param_1 + 0x10 + uVar9 * 0x20) = *puVar7;
        }
        *puVar7 = 0xfffffffffffffffe;
        plVar4 = (longlong *)*param_1;
        *plVar4 = *plVar4 + -1;
        return CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
      uVar3 = *puVar7;
      if (uVar3 == 0xffffffffffffffff) break;
      uVar6 = *param_1;
      puVar7 = (ulonglong *)(uVar6 + 0x10 + uVar3 * 0x20);
      uVar9 = uVar11;
      uVar11 = uVar3;
    }
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  return uVar6;
}



// FUNCTION 143387320 FUN_143387320 body=351 status=ok
// SIG undefined FUN_143387320(void)

void FUN_143387320(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_18;
  uint7 uStack_f;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar7 = 8;
LAB_14338736f:
    FUN_1433888d0(param_1,param_2,lVar7);
  }
  else if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    lVar7 = plVar1[1] * 2 + 2;
    goto LAB_14338736f;
  }
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar7 = *param_1;
  lVar8 = param_4 * 0x20 + lVar7;
  lVar2 = *(longlong *)(lVar8 + 0x10);
  uVar6 = param_4;
  if (lVar2 == -2) {
    local_18 = *param_3;
    *(undefined8 *)(lVar8 + 0x18) = 0;
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar9 = uVar6 * 0x20 + lVar7;
    } while (*(longlong *)(lVar9 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar9 + 0x10) = lVar2;
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      uVar4 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar9 + 0x28) = uVar4;
      local_18 = *param_3;
      *(ulonglong *)(lVar8 + 0x10) = uVar6;
      goto LAB_14338745e;
    }
    puVar5 = (ulonglong *)(lVar7 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
    uVar3 = *puVar5;
    while (uVar3 != param_4) {
      puVar5 = (ulonglong *)(lVar7 + 0x10 + *puVar5 * 0x20);
      uVar3 = *puVar5;
    }
    *(longlong *)(lVar9 + 0x10) = lVar2;
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
    uVar4 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
    *(undefined8 *)(lVar9 + 0x28) = uVar4;
    *puVar5 = uVar6;
    local_18 = *param_3;
  }
  *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
LAB_14338745e:
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  *(undefined8 *)(lVar8 + 0x20) = local_18;
  *(ulonglong *)(lVar8 + 0x28) = (ulonglong)uStack_f << 8;
  return;
}



// FUNCTION 143387480 FUN_143387480 body=257 status=ok
// SIG undefined FUN_143387480(void)

void FUN_143387480(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  FUN_1433887b0();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar9 = param_4 * 0x20 + lVar2;
  lVar3 = *(longlong *)(lVar9 + 0x10);
  uVar6 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    uVar10 = *param_3;
    uVar11 = param_3[1];
    uVar12 = param_3[2];
    uVar13 = param_3[3];
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar8 = uVar6 * 0x20 + lVar2;
    } while (*(longlong *)(lVar8 + 0x10) != -2);
    if (*(ulonglong *)(lVar9 + 0x18) == param_4) {
      *(longlong *)(lVar8 + 0x10) = lVar3;
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)(lVar8 + 0x28) = uVar5;
      uVar10 = *param_3;
      uVar11 = param_3[1];
      uVar12 = param_3[2];
      uVar13 = param_3[3];
      *(ulonglong *)(lVar9 + 0x10) = uVar6;
    }
    else {
      puVar7 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar9 + 0x18) * 0x20);
      uVar4 = *puVar7;
      while (uVar4 != param_4) {
        puVar7 = (ulonglong *)(lVar2 + 0x10 + *puVar7 * 0x20);
        uVar4 = *puVar7;
      }
      *(longlong *)(lVar8 + 0x10) = lVar3;
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)(lVar8 + 0x28) = uVar5;
      *puVar7 = uVar6;
      uVar10 = *param_3;
      uVar11 = param_3[1];
      uVar12 = param_3[2];
      uVar13 = param_3[3];
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(undefined4 *)(lVar9 + 0x20) = uVar10;
  *(undefined4 *)(lVar9 + 0x24) = uVar11;
  *(undefined4 *)(lVar9 + 0x28) = uVar12;
  *(undefined4 *)(lVar9 + 0x2c) = uVar13;
  *(ulonglong *)(lVar9 + 0x18) = param_4;
  return;
}



// FUNCTION 143387590 FUN_143387590 body=297 status=ok
// SIG undefined FUN_143387590(void)

longlong FUN_143387590(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong *puVar5;
  char *_Str2;
  char *_Str1;
  longlong *plVar6;
  longlong lVar7;
  
  plVar6 = (longlong *)(*param_1 + 0x10 + param_3 * 0x20);
  if ((*plVar6 != -2) && (lVar7 = param_3, plVar6[1] == param_3)) {
    while( true ) {
      if (plVar6[1] == param_3) {
        lVar1 = *param_2;
        lVar2 = plVar6[2];
        if (lVar2 == lVar1) {
          return lVar7;
        }
        plVar3 = *(longlong **)(lVar1 + 0x30);
        if ((((*(uint *)(*(longlong *)(lVar2 + 0x30) + 0x1c) | *(uint *)(lVar2 + 0x18)) ^
             (*(uint *)((longlong)plVar3 + 0x1c) | *(uint *)(lVar1 + 0x18))) & 0x313) == 0) {
          puVar5 = (ulonglong *)(*(ulonglong *)(lVar1 + 0x20) & 0xfffffffffffffffc);
          if ((*puVar5 & 0x7fffffffffffffff) == 0) {
            _Str2 = (char *)(**(code **)(*plVar3 + 8))(plVar3);
          }
          else {
            _Str2 = (char *)((longlong)puVar5 + 0xc);
          }
          puVar5 = (ulonglong *)(*(ulonglong *)(plVar6[2] + 0x20) & 0xfffffffffffffffc);
          if ((*puVar5 & 0x7fffffffffffffff) == 0) {
            _Str1 = (char *)(**(code **)(**(longlong **)(plVar6[2] + 0x30) + 8))();
          }
          else {
            _Str1 = (char *)((longlong)puVar5 + 0xc);
          }
          iVar4 = _stricmp(_Str1,_Str2);
          if (iVar4 == 0) {
            return lVar7;
          }
        }
      }
      lVar7 = *plVar6;
      if (lVar7 == -1) break;
      plVar6 = (longlong *)(*param_1 + 0x10 + lVar7 * 0x20);
    }
  }
  return -1;
}



// FUNCTION 1433876c0 FUN_1433876c0 body=279 status=ok
// SIG undefined FUN_1433876c0(void)

longlong FUN_1433876c0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong *puVar4;
  char *_Str1;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar6 = (longlong *)(*param_1 + 0x10 + param_3 * 0x20);
  if ((*plVar6 != -2) && (lVar7 = param_3, plVar6[1] == param_3)) {
    while( true ) {
      if (plVar6[1] == param_3) {
        uVar1 = *(uint *)(param_2 + 1);
        lVar2 = plVar6[2];
        uVar5 = 3;
        if ((uVar1 & 0x300) != 0) {
          uVar5 = 0x303;
        }
        if (((uVar5 | uVar1 & 0x10) &
            (*(uint *)(*(longlong *)(lVar2 + 0x30) + 0x1c) | *(uint *)(lVar2 + 0x18))) ==
            (uVar1 & 0x313)) {
          puVar4 = (ulonglong *)(*(ulonglong *)(lVar2 + 0x20) & 0xfffffffffffffffc);
          if ((*puVar4 & 0x7fffffffffffffff) == 0) {
            _Str1 = (char *)(**(code **)(**(longlong **)(lVar2 + 0x30) + 8))();
          }
          else {
            _Str1 = (char *)((longlong)puVar4 + 0xc);
          }
          iVar3 = _stricmp(_Str1,(char *)*param_2);
          if (iVar3 == 0) {
            return lVar7;
          }
        }
      }
      lVar7 = *plVar6;
      if (lVar7 == -1) break;
      plVar6 = (longlong *)(*param_1 + 0x10 + lVar7 * 0x20);
    }
  }
  return -1;
}



// FUNCTION 1433877e0 FontHandle body=67 status=ok
// SIG undefined FontHandle(void)

undefined8 * Scaleform::GFx::FontHandle::FontHandle(undefined8 *param_1,longlong param_2)

{
  FUN_143387880();
  *param_1 = &PTR_FUN_145b034e8;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    Resource::AddRef();
  }
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 143387830 FontHandle body=72 status=ok
// SIG undefined FontHandle(void)

undefined8 * Scaleform::GFx::FontHandle::FontHandle(undefined8 *param_1)

{
  longlong in_stack_00000030;
  
  FUN_143387900();
  *param_1 = &PTR_FUN_145b034e8;
  if (in_stack_00000030 != 0) {
    Resource::AddRef(in_stack_00000030);
  }
  param_1[7] = in_stack_00000030;
  return param_1;
}



// FUNCTION 143387880 FUN_143387880 body=118 status=ok
// SIG undefined FUN_143387880(void)

undefined8 * FUN_143387880(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b034c0;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  FUN_1432c5160(param_1 + 4,param_2 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  if (*(RefCountImpl **)(param_2 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x30));
  }
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 143387900 FUN_143387900 body=172 status=ok
// SIG undefined FUN_143387900(void)

undefined8 *
FUN_143387900(undefined8 *param_1,undefined8 param_2,RefCountImpl *param_3,char *param_4,
             undefined4 param_5)

{
  int iVar1;
  char *_Str1;
  
  param_1[1] = 0;
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b034c0;
  *(undefined4 *)(param_1 + 3) = param_5;
  FUN_1432c5250(param_1 + 4);
  param_1[5] = 0x3f800000;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  param_1[6] = param_3;
  if (param_4 != (char *)0x0) {
    _Str1 = (char *)(**(code **)(*(longlong *)param_3 + 8))(param_3);
    iVar1 = _stricmp(_Str1,param_4);
    if (iVar1 != 0) {
      Scaleform::String::operator=(param_1 + 4,param_4);
    }
  }
  return param_1;
}



// FUNCTION 1433879b0 FUN_1433879b0 body=176 status=ok
// SIG undefined FUN_1433879b0(void)

void FUN_1433879b0(RefCountImplCore *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  RefCountImplCore *local_res8;
  
  *(undefined ***)param_1 = &PTR_FUN_145b034e8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (local_res8 = param_1, param_1 != *(RefCountImplCore **)(lVar1 + 0x48))) {
    FUN_143387010(lVar1 + 0x10,&local_res8);
  }
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1432de450();
  }
  *(undefined ***)param_1 = &PTR_FUN_145b034c0;
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143387a60 FUN_143387a60 body=188 status=ok
// SIG undefined FUN_143387a60(void)

undefined8 FUN_143387a60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong *puVar4;
  char *_Str2;
  char *_Str1;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  if (lVar1 == lVar2) {
    return 1;
  }
  if ((((*(uint *)(*(longlong *)(lVar2 + 0x30) + 0x1c) | *(uint *)(lVar2 + 0x18)) ^
       (*(uint *)(*(longlong *)(lVar1 + 0x30) + 0x1c) | *(uint *)(lVar1 + 0x18))) & 0x313) == 0) {
    puVar4 = (ulonglong *)(*(ulonglong *)(lVar2 + 0x20) & 0xfffffffffffffffc);
    if ((*puVar4 & 0x7fffffffffffffff) == 0) {
      _Str2 = (char *)(**(code **)(**(longlong **)(lVar2 + 0x30) + 8))();
    }
    else {
      _Str2 = (char *)((longlong)puVar4 + 0xc);
    }
    puVar4 = (ulonglong *)(*(ulonglong *)(*param_1 + 0x20) & 0xfffffffffffffffc);
    if ((*puVar4 & 0x7fffffffffffffff) == 0) {
      _Str1 = (char *)(**(code **)(**(longlong **)(*param_1 + 0x30) + 8))();
    }
    else {
      _Str1 = (char *)((longlong)puVar4 + 0xc);
    }
    iVar3 = _stricmp(_Str1,_Str2);
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143387b20 FUN_143387b20 body=89 status=ok
// SIG undefined FUN_143387b20(void)

undefined8 FUN_143387b20(undefined8 param_1,ulonglong param_2)

{
  FUN_1433879b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143387b80 FUN_143387b80 body=172 status=ok
// SIG undefined FUN_143387b80(void)

RefCountImplCore * FUN_143387b80(RefCountImplCore *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145b034c0;
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143387c30 FUN_143387c30 body=89 status=ok
// SIG undefined FUN_143387c30(void)

undefined8 FUN_143387c30(undefined8 param_1,ulonglong param_2)

{
  FUN_1433869d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143387c90 FUN_143387c90 body=99 status=ok
// SIG undefined FUN_143387c90(void)

RefCountImplCore * FUN_143387c90(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b034c8;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143387d00 FUN_143387d00 body=240 status=ok
// SIG undefined FUN_143387d00(void)

void FUN_143387d00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *local_38 [6];
  
  if (param_1 != 0) {
    FUN_1432c5960(local_38,DAT_146b62f28);
    Scaleform::StringBuffer::AppendString(local_38,param_2,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(local_38,param_3,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(local_38,param_4,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(local_38,param_5,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(local_38,param_6,0xffffffffffffffff);
    uVar1 = Scaleform::GFx::FontFlagsToString(param_7);
    Scaleform::StringBuffer::AppendString(local_38,uVar1,0xffffffffffffffff);
    puVar2 = &DAT_145af3922;
    if (local_38[0] != (undefined1 *)0x0) {
      puVar2 = local_38[0];
    }
    FUN_143388000(param_1,puVar2);
    Scaleform::StringBuffer::~StringBuffer(local_38);
  }
  return;
}



// FUNCTION 143387df0 FUN_143387df0 body=291 status=ok
// SIG undefined FUN_143387df0(void)

void FUN_143387df0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *local_38 [6];
  
  if (param_1 != 0) {
    FUN_1432c5960(local_38,DAT_146b62f28);
    Scaleform::StringBuffer::AppendString(local_38,param_2,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(local_38,param_3,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(local_38,param_4,0xffffffffffffffff);
    uVar1 = Scaleform::GFx::FontFlagsToString(param_5);
    Scaleform::StringBuffer::AppendString(local_38,uVar1,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(local_38,param_6,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(local_38,param_7,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(local_38,param_8,0xffffffffffffffff);
    uVar1 = Scaleform::GFx::FontFlagsToString(param_9);
    Scaleform::StringBuffer::AppendString(local_38,uVar1,0xffffffffffffffff);
    puVar2 = &DAT_145af3922;
    if (local_38[0] != (undefined1 *)0x0) {
      puVar2 = local_38[0];
    }
    FUN_143388000(param_1,puVar2);
    Scaleform::StringBuffer::~StringBuffer(local_38);
  }
  return;
}



// FUNCTION 143387f20 FUN_143387f20 body=218 status=ok
// SIG undefined FUN_143387f20(void)

void FUN_143387f20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *local_38 [6];
  
  if (param_1 != 0) {
    FUN_1432c5960(local_38,DAT_146b62f28);
    Scaleform::StringBuffer::AppendString(local_38,param_2,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(local_38,param_3,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(local_38,param_4,0xffffffffffffffff);
    uVar1 = Scaleform::GFx::FontFlagsToString(param_5);
    Scaleform::StringBuffer::AppendString(local_38,uVar1,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(local_38,param_6,0xffffffffffffffff);
    puVar2 = &DAT_145af3922;
    if (local_38[0] != (undefined1 *)0x0) {
      puVar2 = local_38[0];
    }
    FUN_143388000(param_1,puVar2);
    Scaleform::StringBuffer::~StringBuffer(local_38);
  }
  return;
}



// FUNCTION 143388000 FUN_143388000 body=214 status=ok
// SIG undefined FUN_143388000(void)

void FUN_143388000(int *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong local_res8;
  
  if (param_1 != (int *)0x0) {
    FUN_1432c2fb0(&local_res8,&DAT_145b03580);
    iVar1 = 0;
    if (0 < *param_1) {
      do {
        Scaleform::StringBuffer::AppendString
                  (param_1 + 2,(longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                   *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *param_1);
    }
    Scaleform::StringBuffer::AppendString(param_1 + 2,param_2,0xffffffffffffffff);
    Scaleform::StringBuffer::AppendString(param_1 + 2,&DAT_145af0af0,0xffffffffffffffff);
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
  }
  return;
}



// FUNCTION 1433880e0 FUN_1433880e0 body=1734 status=ok
// SIG undefined FUN_1433880e0(void)

void FUN_1433880e0(longlong param_1,undefined8 param_2,undefined4 param_3,char param_4,int *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined8 local_878;
  undefined1 *puStack_870;
  undefined8 local_868;
  longlong *local_858;
  ulonglong uStack_850;
  ulonglong local_848;
  ulonglong local_840;
  undefined1 local_838 [1024];
  undefined1 local_438 [1024];
  
  if (param_1 == 0) {
    return;
  }
  iVar5 = *param_5;
  local_res10 = param_2;
  if (iVar5 == 1) {
    local_res8 = Scaleform::GFx::FontFlagsToString(param_3);
    puStack_870 = local_438;
    local_878 = CONCAT44(local_878._4_4_,2);
    local_868 = 0x400;
    FUN_1433561d0(local_838,&local_878);
    pcVar9 = "Movie resource: \"{0}\" {1} found.";
  }
  else if (iVar5 == 3) {
    local_res8 = Scaleform::GFx::FontFlagsToString(param_3);
    puStack_870 = local_438;
    local_878 = CONCAT44(local_878._4_4_,2);
    local_868 = 0x400;
    FUN_1433561d0(local_838,&local_878);
    pcVar9 = "Movie resource: \"{0}\" {1} found, requires faux";
  }
  else {
    if (iVar5 != 2) {
      local_res8 = Scaleform::GFx::FontFlagsToString(param_3);
      puStack_870 = local_438;
      local_878._0_4_ = 2;
      local_868 = 0x400;
      FUN_1433561d0(local_838,&local_878);
      FUN_1433563e0(local_838,"Movie resource: \"{0}\" {1} not found.");
      FUN_143386e30(local_838,&local_res10);
      FUN_143386e30(local_838,&local_res8);
      Scaleform::MsgFormat::FinishFormatD(local_838);
      FUN_1433562f0(local_838);
      FUN_143388000(param_1,local_438);
      if (*param_5 != 4) {
        if (*param_5 != 5) {
          local_res8 = Scaleform::GFx::FontFlagsToString(param_3);
          puStack_870 = local_438;
          local_878 = CONCAT44(local_878._4_4_,2);
          local_868 = 0x400;
          FUN_1433561d0(local_838,&local_878);
          FUN_1433563e0(local_838,"Imports       : \"{0}\" {1} not found.");
          FUN_143386e30(local_838,&local_res10);
          FUN_143386e30(local_838,&local_res8);
          Scaleform::MsgFormat::FinishFormatD(local_838);
          FUN_1433562f0(local_838);
          FUN_143388000(param_1,local_438);
          plVar1 = (longlong *)(param_5 + 2);
          if ((*(longlong **)(param_5 + 2) != (longlong *)0x0) &&
             (**(longlong **)(param_5 + 2) != 0)) {
            FUN_1432c2f70(&local_res8);
            lVar2 = *plVar1;
            if (lVar2 == 0) {
              uStack_850 = 0;
              uVar10 = uStack_850;
              local_858 = (longlong *)0x0;
              plVar12 = (longlong *)0x0;
            }
            else {
              uStack_850 = 0;
              plVar7 = (longlong *)(lVar2 + 0x10);
              do {
                uVar10 = uStack_850;
                local_858 = plVar1;
                plVar12 = plVar1;
                if (*plVar7 != -2) break;
                uStack_850 = uStack_850 + 1;
                plVar7 = plVar7 + 3;
                uVar10 = uStack_850;
              } while (uStack_850 <= *(ulonglong *)(lVar2 + 8));
            }
            do {
              uVar11 = uVar10;
              if (((plVar12 == (longlong *)0x0) || (lVar2 = *plVar12, lVar2 == 0)) ||
                 (*(longlong *)(lVar2 + 8) < (longlong)uVar11)) goto LAB_1433885dd;
              lVar3 = *plVar1;
              if (lVar3 == 0) {
                local_878 = 0;
                puStack_870 = (undefined1 *)0x0;
                uVar10 = 0;
                plVar8 = (longlong *)0x0;
              }
              else {
                uVar10 = 0;
                plVar7 = (longlong *)(lVar3 + 0x10);
                do {
                  plVar8 = plVar1;
                  if (*plVar7 != -2) break;
                  uVar10 = uVar10 + 1;
                  plVar7 = plVar7 + 3;
                } while (uVar10 <= *(ulonglong *)(lVar3 + 8));
              }
              if ((((lVar2 != 0) && ((longlong)uVar11 <= *(longlong *)(lVar2 + 8))) ||
                  ((plVar8 != (longlong *)0x0 &&
                   ((*plVar8 != 0 && ((longlong)uVar10 <= *(longlong *)(*plVar8 + 8))))))) &&
                 ((plVar12 != plVar8 || (uVar11 != uVar10)))) {
                FUN_1432c3950(&local_res8,&DAT_145b036e8,0xffffffffffffffff);
              }
              lVar2 = *plVar12;
              uVar6 = FUN_1432c2fb0(&local_858,&DAT_145afa020);
              uVar6 = FString::TrimQuotes(uVar6,&local_840,lVar2 + uVar11 * 0x18 + 0x20);
              uVar6 = FUN_1432c50d0(uVar6,&local_848,&DAT_145afa020);
              FUN_1432c4fd0(&local_res8,uVar6);
              uVar10 = local_848 & 0xfffffffffffffffc;
              iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar10 + 8,0xffffffff);
              if (iVar5 == 1) {
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
              }
              uVar10 = local_840 & 0xfffffffffffffffc;
              iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar10 + 8,0xffffffff);
              if (iVar5 == 1) {
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
              }
              uVar10 = (ulonglong)local_858 & 0xfffffffffffffffc;
              iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar10 + 8,0xffffffff);
              if (iVar5 == 1) {
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
              }
              uVar4 = *(ulonglong *)(*plVar12 + 8);
              uVar10 = uVar11;
              if (((longlong)uVar11 <= (longlong)uVar4) && (uVar10 = uVar11 + 1, uVar10 <= uVar4)) {
                plVar7 = (longlong *)(*plVar12 + (uVar10 + (uVar11 + 2) * 2) * 8);
                do {
                  if (*plVar7 != -2) break;
                  uVar10 = uVar10 + 1;
                  plVar7 = plVar7 + 3;
                } while (uVar10 <= uVar4);
              }
            } while( true );
          }
          goto LAB_14338868a;
        }
        if (param_4 != '\0') {
          local_res8 = Scaleform::GFx::FontFlagsToString(param_3);
          puStack_870 = local_438;
          local_878 = CONCAT44(local_878._4_4_,2);
          local_868 = 0x400;
          FUN_1433561d0(local_838,&local_878);
          pcVar9 = "Imports       : \"{0}\" {1} import delegates to font library.";
          goto LAB_143388167;
        }
      }
      local_res8 = Scaleform::GFx::FontFlagsToString(param_3);
      puStack_870 = local_438;
      local_878 = CONCAT44(local_878._4_4_,2);
      local_868 = 0x400;
      FUN_1433561d0(local_838,&local_878);
      FUN_1433563e0(local_838,"Imports       : \"{0}\" {1} found in \"{2}\".");
      FUN_143386e30(local_838,&local_res10);
      FUN_143386e30(local_838,&local_res8);
      FUN_143386f20(local_838,param_5 + 4);
      goto LAB_14338876d;
    }
    local_res8 = Scaleform::GFx::FontFlagsToString(param_3);
    puStack_870 = local_438;
    local_878 = CONCAT44(local_878._4_4_,2);
    local_868 = 0x400;
    FUN_1433561d0(local_838,&local_878);
    pcVar9 = "Movie resource: \"{0}\" {1} ref found, requires FontLib/Map/Provider.";
  }
LAB_143388167:
  FUN_1433563e0(local_838,pcVar9);
  FUN_143386e30(local_838,&local_res10);
  FUN_143386e30(local_838,&local_res8);
LAB_14338876d:
  Scaleform::MsgFormat::FinishFormatD(local_838);
  FUN_1433562f0(local_838);
  FUN_143388000(param_1,local_438);
  return;
LAB_1433885dd:
  puStack_870 = local_438;
  local_878 = CONCAT44(local_878._4_4_,2);
  local_868 = 0x400;
  FUN_1433561d0(local_838,&local_878);
  FUN_1433563e0(local_838,"              : {0}.");
  FUN_143386f20(local_838,&local_res8);
  Scaleform::MsgFormat::FinishFormatD(local_838);
  FUN_1433562f0(local_838);
  FUN_143388000(param_1,local_438);
  uVar10 = local_res8 & 0xfffffffffffffffc;
  iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar10 + 8,0xffffffff);
  if (iVar5 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar10);
  }
LAB_14338868a:
  local_res8 = Scaleform::GFx::FontFlagsToString(param_3);
  puStack_870 = local_438;
  local_878 = CONCAT44(local_878._4_4_,2);
  local_868 = 0x400;
  if (*param_5 == 6) {
    FUN_1433561d0(local_838,&local_878);
    pcVar9 = "Exported      : \"{0}\" {1} found.";
  }
  else {
    FUN_1433561d0(local_838,&local_878);
    pcVar9 = "Exported      : \"{0}\" {1} not found.";
  }
  goto LAB_143388167;
}



// FUNCTION 1433887b0 FUN_1433887b0 body=67 status=ok
// SIG undefined FUN_1433887b0(void)

void FUN_1433887b0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1433888d0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1433888d0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143388800 FUN_143388800 body=91 status=ok
// SIG undefined FUN_143388800(void)

void FUN_143388800(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      if (*(longlong *)(lVar1 + 0x10 + *param_1) != -2) {
        *(undefined8 *)(lVar1 + 0x10 + *param_1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143388860 FontFlagsToString body=110 status=ok
// SIG undefined FontFlagsToString(void)

undefined * Scaleform::GFx::FontFlagsToString(uint param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    return PTR_DAT_1467ce3f0;
  }
  bVar1 = (byte)param_1 & 3;
  if ((param_1 & 0x10) == 0) {
    if (bVar1 == 3) {
      return PTR_s__Bold_Italic__1467ce408;
    }
    if ((param_1 & 2) != 0) {
      return PTR_s__Bold__1467ce3f8;
    }
    puVar2 = PTR_DAT_1467ce3f0;
    if ((param_1 & 1) != 0) {
      puVar2 = PTR_s__Italic__1467ce400;
    }
    return puVar2;
  }
  if (bVar1 == 3) {
    return PTR_s__Bold_Italic_Device__1467ce428;
  }
  if ((param_1 & 2) != 0) {
    return PTR_s__Bold_Device__1467ce418;
  }
  puVar2 = PTR_s__Device__1467ce410;
  if ((param_1 & 1) != 0) {
    puVar2 = PTR_s__Italic_Device__1467ce420;
  }
  return puVar2;
}



// FUNCTION 1433888d0 FUN_1433888d0 body=436 status=ok
// SIG undefined FUN_1433888d0(void)

void FUN_1433888d0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143388800();
    return;
  }
  if (param_3 < 8) {
    lVar8 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar8 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar10 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,lVar8 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar8 + -1;
  lVar9 = lVar10;
  for (; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined8 *)(lVar9 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar9 = lVar9 + 0x20;
  }
  if (*param_1 != 0) {
    lVar8 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar9 = *param_1 + lVar10;
      if (*(longlong *)(lVar9 + 0x10) != -2) {
        lVar7 = *(longlong *)(lVar9 + 0x20);
        puVar6 = (ulonglong *)(*(ulonglong *)(lVar7 + 0x20) & 0xfffffffffffffffc);
        if ((*puVar6 & 0x7fffffffffffffff) == 0) {
          lVar4 = (**(code **)(**(longlong **)(lVar7 + 0x30) + 8))();
        }
        else {
          lVar4 = (longlong)puVar6 + 0xc;
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar2 = *(uint *)(*(longlong *)(lVar7 + 0x30) + 0x1c);
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(lVar4 + lVar7) != '\0');
        uVar5 = FUN_1432c4390(lVar4,lVar7,0x1505);
        FUN_143387480(&local_res20,param_2,lVar9 + 0x20,(uVar2 & 3 | (uVar1 | uVar2) & 3) ^ uVar5);
        *(undefined8 *)(lVar9 + 0x10) = 0xfffffffffffffffe;
      }
      lVar10 = lVar10 + 0x20;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143388a90 FUN_143388a90 body=32 status=ok
// SIG undefined FUN_143388a90(void)

undefined8 * FUN_143388a90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_145b038f0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = param_2;
  return param_1;
}



// FUNCTION 143388ac0 ~LoadQueueEntryMT body=31 status=ok
// SIG undefined ~LoadQueueEntryMT(void)

void Scaleform::GFx::LoadQueueEntryMT::~LoadQueueEntryMT(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_145b038f0;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143388adb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 143388af0 Cancel body=9 status=ok
// SIG undefined Cancel(void)

void Scaleform::GFx::LoadQueueEntryMT::Cancel(longlong param_1)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x25) = 1;
  return;
}



// FUNCTION 143388b00 FUN_143388b00 body=499 status=ok
// SIG undefined FUN_143388b00(void)

undefined8 *
FUN_143388b00(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar5 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x20001;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145af9d58;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = &PTR_FUN_145b03908;
  param_1[3] = 0;
  FUN_1432c2f70(param_1 + 5);
  FUN_1432c31e0(param_1 + 6,param_3);
  FUN_1432c2f70(param_1 + 7);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x28);
    uVar4 = (*(code *)**(undefined8 **)(param_2 + 0x10))(param_2 + 0x10);
    uVar5 = FUN_143318b20(lVar3,uVar5,uVar4,0);
  }
  if ((RefCountImpl *)param_1[3] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[3]);
  }
  param_1[3] = uVar5;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 0x70) + 0x28) & 0xfffffffc;
  *(uint *)(param_1 + 4) = uVar1 | 0x10000;
  if (param_5 != '\0') {
    *(uint *)(param_1 + 4) = uVar1 | 0x210000;
  }
  FUN_1432e47e0(param_2,param_1 + 5);
  if (param_4 != '\0') {
    FUN_1432c2f70(&local_res8);
    uVar6 = *(ulonglong *)(param_1[6] & 0xfffffffffffffffc) & 0x7fffffffffffffff;
    if (4 < uVar6) {
      iVar2 = _stricmp((char *)((longlong)(param_1[6] & 0xfffffffffffffffc) + uVar6 + 8),".swf");
      if (iVar2 == 0) {
        FUN_1432c3510(&local_res8);
        FUN_1432c3950(&local_res8,(longlong)(param_1[6] & 0xfffffffffffffffc) + 0xc,
                      (*(ulonglong *)(param_1[6] & 0xfffffffffffffffc) & 0x7fffffffffffffff) - 4);
        FUN_1432c3950(&local_res8,&DAT_145afb774,0xffffffffffffffff);
      }
    }
    FUN_1432c4d80(param_1 + 7,&local_res8);
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
  }
  return param_1;
}



// FUNCTION 143388d00 FUN_143388d00 body=402 status=ok
// SIG undefined FUN_143388d00(void)

void FUN_143388d00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_38 [2];
  ulonglong local_30;
  ulonglong local_28;
  undefined4 local_20 [2];
  ulonglong local_18;
  ulonglong local_10;
  
  lVar2 = FUN_1432c3580(param_1 + 0x38);
  if (lVar2 != 0) {
    local_38[0] = 3;
    FUN_1432c31e0(&local_30,param_1 + 0x38);
    FUN_1432c31e0(&local_28,param_1 + 0x28);
    uVar3 = FUN_1432fe2b0(*(undefined8 *)(param_1 + 0x18),local_38,*(undefined4 *)(param_1 + 0x20),0
                          ,0);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1432de450();
    }
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_28 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_28 & 0xfffffffffffffffc);
    }
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_30 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_30 & 0xfffffffffffffffc);
    }
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    local_20[0] = 3;
    FUN_1432c31e0(&local_18,param_1 + 0x30);
    FUN_1432c31e0(&local_10,param_1 + 0x28);
    uVar3 = FUN_1432fe2b0(*(undefined8 *)(param_1 + 0x18),local_20,*(undefined4 *)(param_1 + 0x20),0
                          ,0);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1432de450();
    }
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_10 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_10 & 0xfffffffffffffffc);
    }
    iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_18 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar1 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_18 & 0xfffffffffffffffc);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 1;
  return;
}



// FUNCTION 143388ea0 GetSamples body=5 status=ok
// SIG undefined GetSamples(void)

undefined8 FWmfMediaPlayer::GetSamples(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 143388eb0 IsDone body=10 status=ok
// SIG undefined IsDone(void)

bool Scaleform::GFx::MoviePreloadTask::IsDone(longlong param_1)

{
  return *(int *)(param_1 + 0x48) == 1;
}



// FUNCTION 143388ec0 FUN_143388ec0 body=181 status=ok
// SIG undefined FUN_143388ec0(void)

undefined8 *
FUN_143388ec0(undefined8 *param_1,RefCountImpl *param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af9d58;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0x20001;
  *param_1 = &PTR_FUN_145b03920;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[3] = param_2;
  FUN_1432c31e0(param_1 + 4,param_3);
  FUN_1432c31e0(param_1 + 5,param_4);
  FUN_1432c2f70(param_1 + 6);
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 143388f80 FUN_143388f80 body=470 status=ok
// SIG undefined FUN_143388f80(void)

void FUN_143388f80(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  RefCountImpl *this;
  ulonglong local_res8;
  longlong local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined4 local_20 [2];
  ulonglong local_18;
  ulonglong local_10;
  
  local_20[0] = 4;
  FUN_1432c31e0(&local_18,param_1 + 0x28);
  FUN_1432c31e0(&local_10,param_1 + 0x20);
  FUN_1432c2f70(&local_res8);
  Scaleform::GFx::LoadStates::BuildURL(*(undefined8 *)(param_1 + 0x18),&local_res8,local_20);
  this = (RefCountImpl *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  cVar1 = FUN_1432badc0(&local_res8);
  if (cVar1 == '\0') {
    this = (RefCountImpl *)
           FUN_143319140(*(undefined8 *)(param_1 + 0x18),(local_res8 & 0xfffffffffffffffc) + 0xc,0);
LAB_14338907b:
    if (this != (RefCountImpl *)0x0) {
      uVar2 = FUN_1432ec380(param_1 + 0x30,this,param_1 + 0x38,0);
      *(undefined1 *)(param_1 + 0x40) = uVar2;
      goto LAB_14338909c;
    }
  }
  else {
    cVar1 = FUN_1432bae80(&local_38,&local_res8,1,0,0,0,0);
    if ((cVar1 != '\0') && (local_30 != 0)) {
      lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x30,0);
      if (lVar4 != 0) {
        this = (RefCountImpl *)FUN_1432e1570(lVar4,&local_res8,local_38,local_30 & 0xffffffff);
      }
      goto LAB_14338907b;
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
LAB_14338909c:
  *(undefined4 *)(param_1 + 0x3c) = 1;
  if (local_38 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_10 & 0xfffffffffffffffc);
  }
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_18 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143389160 FUN_143389160 body=94 status=ok
// SIG undefined FUN_143389160(void)

longlong FUN_143389160(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined1 *param_4)

{
  if (*(int *)(param_1 + 0x3c) != 1) {
    return (ulonglong)(uint3)((uint)*(int *)(param_1 + 0x3c) >> 8) << 8;
  }
  FUN_1432c4d80(param_2,param_1 + 0x30);
  *param_3 = *(undefined4 *)(param_1 + 0x38);
  *param_4 = *(undefined1 *)(param_1 + 0x40);
  return 1;
}



// FUNCTION 1433891d0 FUN_1433891d0 body=353 status=ok
// SIG undefined FUN_1433891d0(void)

undefined8 * FUN_1433891d0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  RefCountImpl *this;
  ulonglong local_res8;
  
  param_1[3] = param_3;
  param_1[4] = param_2;
  uVar6 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_145b03938;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
  uVar5 = uVar6;
  if (lVar3 != 0) {
    lVar1 = param_1[3];
    uVar5 = *(undefined8 *)(*(longlong *)(lVar1 + 0x50) + 0x28);
    uVar4 = (*(code *)**(undefined8 **)(lVar1 + 0x10))(lVar1 + 0x10);
    uVar5 = FUN_143318b20(lVar3,uVar5,uVar4,0);
  }
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  param_1[6] = uVar5;
  FUN_1432c2f70(&local_res8);
  FUN_1432e47e0(param_1[3],&local_res8);
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
  if (lVar3 != 0) {
    uVar6 = FUN_143388ec0(lVar3,param_1[6],&local_res8,param_2 + 0x18);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  param_1[5] = uVar6;
  this = (RefCountImpl *)
         (**(code **)(*(longlong *)(param_1[3] + 0x10) + 0x18))
                   ((longlong *)(param_1[3] + 0x10),0x18);
  (**(code **)(*(longlong *)this + 8))(this,param_1[5]);
  Scaleform::RefCountImpl::Release(this);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return param_1;
}



// FUNCTION 143389340 FUN_143389340 body=88 status=ok
// SIG undefined FUN_143389340(void)

void FUN_143389340(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_145b03938;
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  puVar1 = (undefined8 *)param_1[4];
  *param_1 = &PTR_FUN_145b038f0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014338938f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1433893a0 FUN_1433893a0 body=201 status=ok
// SIG undefined FUN_1433893a0(void)

undefined8 FUN_1433893a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  bool bVar7;
  int local_res8;
  undefined4 uStackX_c;
  
  FUN_1432c2f70(&local_res8);
  lVar1 = *(longlong *)(param_1 + 0x28);
  bVar7 = *(int *)(lVar1 + 0x3c) == 1;
  if (bVar7) {
    FUN_1432c4d80(&local_res8,lVar1 + 0x30);
    iVar3 = *(int *)(lVar1 + 0x38);
    uVar6 = *(undefined1 *)(lVar1 + 0x40);
  }
  else {
    uVar6 = (undefined1)local_res8;
    iVar3 = local_res8;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x25) == '\0') {
    if (!bVar7) goto LAB_1433893ff;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18);
    (**(code **)(*plVar2 + 0x128))
              (plVar2,*(longlong *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),&local_res8,
               (longlong)iVar3,uVar6);
  }
  else if (!bVar7) {
LAB_1433893ff:
    uVar5 = 0;
    goto LAB_14338942f;
  }
  uVar5 = 1;
LAB_14338942f:
  uVar4 = CONCAT44(uStackX_c,local_res8) & 0xfffffffffffffffc;
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar4 + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar4);
  }
  return uVar5;
}



// FUNCTION 143389470 FUN_143389470 body=190 status=ok
// SIG undefined FUN_143389470(void)

undefined8 *
FUN_143389470(undefined8 *param_1,RefCountImpl *param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af9d58;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0x20001;
  *param_1 = &PTR_FUN_145b03950;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[3] = param_2;
  FUN_1432c31e0(param_1 + 4,param_3);
  FUN_1432c31e0(param_1 + 5,param_4);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}


