// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14317adc0 FUN_14317adc0 body=2362 status=ok
// SIG undefined FUN_14317adc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14317adc0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char cVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  float *pfVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined8 *puVar30;
  undefined4 *puVar31;
  float *pfVar32;
  undefined1 *puVar33;
  undefined4 *puVar34;
  float *pfVar35;
  longlong *plVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  ulonglong local_res10;
  undefined8 uStack_130;
  undefined1 auStack_128 [32];
  longlong local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  if ((*(byte *)((longlong)param_1 + 0x17c) & 0x20) != 0) {
    uStack_130 = 0x14317ae24;
    FUN_14317c6f0();
    *(byte *)((longlong)param_1 + 0x17c) = *(byte *)((longlong)param_1 + 0x17c) & 0xdf;
    uStack_130 = 0x14317ae34;
    FUN_14317b7e0(param_1);
    if ((param_1[0x2d] != 0) && (param_1[0x21] == 0)) {
      uStack_130 = 0x14317ae55;
      FUN_14317c880(param_1,0,1);
    }
    uStack_130 = 0x14317ae61;
    lVar19 = AkPositioningParams::GetRawAttenuation(param_1 + 0x27);
    if (lVar19 != 0) {
      uStack_130 = 0x14317ae71;
      FUN_14317cb70(param_1,lVar19);
    }
  }
  lVar19 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  fVar42 = 1e+10;
  if ((*(byte *)((longlong)param_1 + 0x14c) & 7) == 2) {
    uStack_130 = 0x14317b19b;
    lVar19 = CAkRegisteredObj::GetListeners(param_1[3]);
    if (*(uint *)((longlong)param_2 + 0xc) < *(uint *)(lVar19 + 0x10)) {
      uStack_130 = 0x14317b1b2;
      cVar17 = FUN_143172350(param_2,*(uint *)(lVar19 + 0x10) - *(uint *)((longlong)param_2 + 0xc));
      if (cVar17 == '\0') {
        return 0;
      }
    }
    puVar30 = *(undefined8 **)(lVar19 + 8);
    puVar33 = auStack_128;
    if (puVar30 != puVar30 + *(uint *)(lVar19 + 0x10)) {
      do {
        uVar13 = *puVar30;
        uStack_130 = 0x14317b1dd;
        lVar24 = CAkListener::GetListenerData(uVar13);
        if (lVar24 != 0) {
          uStack_130 = 0x14317b1ed;
          puVar20 = (undefined8 *)FUN_14317ab50(param_2);
          local_e8 = 0;
          uStack_e0 = 0;
          uStack_130 = 0x14317b1ff;
          lVar27 = FUN_14317bc90(param_1);
          uStack_130 = 0x14317b215;
          AkPositionStore::GetGameRayParams(lVar27 + 0x20,uVar13,1,&local_e8);
          uVar13 = *(undefined8 *)(lVar24 + 0x68);
          *puVar20 = *(undefined8 *)(lVar24 + 0x60);
          puVar20[1] = uVar13;
          uVar13 = *(undefined8 *)(lVar24 + 0x78);
          puVar20[2] = *(undefined8 *)(lVar24 + 0x70);
          puVar20[3] = uVar13;
          *(undefined4 *)(puVar20 + 4) = *(undefined4 *)(lVar24 + 0x80);
          *(undefined4 *)((longlong)puVar20 + 0x4c) = 0xffffffff;
          puVar20[10] = *(undefined8 *)(*(longlong *)(lVar24 + 8) + 0x48);
          *(undefined4 *)((longlong)puVar20 + 0x3c) = (undefined4)local_e8;
          *(undefined4 *)(puVar20 + 8) = local_e8._4_4_;
          *(undefined4 *)((longlong)puVar20 + 0x44) = (undefined4)uStack_e0;
          *(undefined4 *)(puVar20 + 9) = uStack_e0._4_4_;
        }
        puVar30 = puVar30 + 1;
        puVar33 = auStack_128;
      } while (puVar30 !=
               (undefined8 *)(*(longlong *)(lVar19 + 8) + (ulonglong)*(uint *)(lVar19 + 0x10) * 8));
    }
  }
  else if ((*(byte *)((longlong)param_1 + 0x14c) & 0x40) == 0) {
    if (*(int *)(param_1[3] + 0x40) != 0) {
      lVar19 = **(longlong **)(param_1[3] + 0x38);
    }
    if (*(uint *)((longlong)param_2 + 0xc) < *(uint *)(lVar19 + 0x50)) {
      uStack_130 = 0x14317aeca;
      cVar17 = FUN_143172350(param_2,*(uint *)(lVar19 + 0x50) - *(uint *)((longlong)param_2 + 0xc));
      if (cVar17 == '\0') {
        return 0;
      }
    }
    puVar30 = *(undefined8 **)(lVar19 + 0x48);
    puVar33 = auStack_128;
    fVar43 = fVar42;
    if (puVar30 != puVar30 + (ulonglong)*(uint *)(lVar19 + 0x50) * 0xd) {
      do {
        uStack_130 = 0x14317aef8;
        puVar20 = (undefined8 *)FUN_14317ab50(param_2);
        uVar13 = puVar30[1];
        *puVar20 = *puVar30;
        puVar20[1] = uVar13;
        uVar13 = puVar30[3];
        puVar20[2] = puVar30[2];
        puVar20[3] = uVar13;
        uVar13 = puVar30[5];
        puVar20[4] = puVar30[4];
        puVar20[5] = uVar13;
        uVar13 = puVar30[7];
        puVar20[6] = puVar30[6];
        puVar20[7] = uVar13;
        uVar13 = puVar30[9];
        puVar20[8] = puVar30[8];
        puVar20[9] = uVar13;
        uVar13 = puVar30[0xb];
        puVar20[10] = puVar30[10];
        puVar20[0xb] = uVar13;
        puVar20[0xc] = puVar30[0xc];
        pfVar32 = (float *)(puVar30 + 0xc);
        puVar30 = puVar30 + 0xd;
        fVar42 = *pfVar32;
        if (fVar43 <= *pfVar32) {
          fVar42 = fVar43;
        }
        puVar33 = auStack_128;
        fVar43 = fVar42;
      } while (puVar30 !=
               (undefined8 *)
               ((ulonglong)*(uint *)(lVar19 + 0x50) * 0x68 + *(longlong *)(lVar19 + 0x48)));
    }
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x17c) & 8) == 0) {
      uStack_130 = 0x14317af69;
      iVar18 = FUN_14317abf0(param_1);
      if (iVar18 != 1) {
        return 0;
      }
    }
    uVar12 = *(uint *)(param_1 + 0x2c);
    uStack_130 = 0x14317af89;
    lVar19 = CAkRegisteredObj::GetListeners(param_1[3]);
    uVar29 = *(int *)(lVar19 + 0x10) * uVar12;
    local_108 = lVar19;
    if (*(uint *)((longlong)param_2 + 0xc) < uVar29) {
      uStack_130 = 0x14317afa8;
      cVar17 = FUN_143172350(param_2,uVar29 - *(uint *)((longlong)param_2 + 0xc));
      if (cVar17 == '\0') {
        return 0;
      }
    }
    uVar21 = (ulonglong)uVar12 * 0x10;
    uVar28 = uVar21 + 0xf;
    if (uVar28 <= uVar21) {
      uVar28 = 0xffffffffffffff0;
    }
    uStack_130 = 0x14317afdd;
    puVar30 = *(undefined8 **)(lVar19 + 8);
    lVar27 = -(uVar28 & 0xfffffffffffffff0);
    lVar24 = (longlong)&local_108 + lVar27;
    puVar33 = auStack_128 + lVar27;
    local_f8 = lVar24;
    if (puVar30 != puVar30 + *(uint *)(lVar19 + 0x10)) {
      do {
        uVar13 = *puVar30;
        *(undefined8 *)(auStack_128 + lVar27 + -8) = 0x14317b00c;
        lVar22 = CAkListener::GetListenerData(uVar13);
        if (lVar22 != 0) {
          *(undefined8 *)(auStack_128 + lVar27 + -8) = 0x14317b020;
          lVar23 = FUN_14317bc90(param_1);
          uVar13 = *(undefined8 *)(*(longlong *)(lVar22 + 8) + 0x48);
          *(undefined8 *)(auStack_128 + lVar27 + -8) = 0x14317b037;
          AkPositionStore::GetGameRayParams(lVar23 + 0x20,uVar13,uVar12,lVar24);
          if (uVar12 != 0) {
            puVar31 = (undefined4 *)0x0;
            puVar37 = (undefined4 *)(lVar24 + 8);
            puVar38 = puVar31;
            fVar43 = fVar42;
            local_res10 = (ulonglong)uVar12;
            do {
              uVar29 = *(uint *)(param_2 + 1);
              if (uVar29 < *(uint *)((longlong)param_2 + 0xc)) {
LAB_14317b075:
                uVar29 = *(uint *)(param_2 + 1);
                *(uint *)(param_2 + 1) = uVar29 + 1;
                puVar34 = (undefined4 *)((ulonglong)uVar29 * 0x68 + *param_2);
                if (puVar34 != (undefined4 *)0x0) {
                  *(undefined8 *)(puVar34 + 9) = 0;
                  puVar34[0xb] = 0;
                  puVar34[0xc] = 0x3f800000;
                  puVar34[0xd] = 0x3f800000;
                  *(undefined8 *)(puVar34 + 0xe) = 0x3f800000;
                  *(undefined8 *)(puVar34 + 0x10) = 0;
                  puVar34[0x12] = 0;
                  puVar34[0x13] = 0xffffffff;
                  *(undefined8 *)(puVar34 + 0x14) = 0;
                  puVar34[0x16] = 0x3f800000;
                  *(undefined8 *)(puVar34 + 0x17) = 0x3f800000;
                  puVar34[0x19] = 0;
                }
              }
              else {
                *(undefined8 *)(auStack_128 + lVar27 + -8) = 0x14317b06c;
                cVar17 = FUN_143172350(param_2,1);
                puVar34 = puVar31;
                if ((cVar17 != '\0') && (uVar29 < *(uint *)((longlong)param_2 + 0xc)))
                goto LAB_14317b075;
              }
              lVar19 = param_1[0x2b];
              uVar10 = *(undefined4 *)((longlong)puVar38 + lVar19 + 0x24);
              puVar1 = (undefined4 *)((longlong)puVar38 + lVar19);
              uVar11 = puVar1[1];
              uVar15 = puVar1[2];
              uVar16 = puVar1[3];
              *puVar34 = *puVar1;
              puVar34[1] = uVar11;
              puVar34[2] = uVar15;
              puVar34[3] = uVar16;
              puVar1 = (undefined4 *)((longlong)puVar38 + lVar19 + 0x10);
              uVar11 = puVar1[1];
              uVar15 = puVar1[2];
              uVar16 = puVar1[3];
              puVar34[4] = *puVar1;
              puVar34[5] = uVar11;
              puVar34[6] = uVar15;
              puVar34[7] = uVar16;
              uVar11 = *(undefined4 *)((longlong)puVar38 + lVar19 + 0x20);
              puVar34[0x13] = uVar10;
              puVar34[8] = uVar11;
              *(undefined8 *)(puVar34 + 0x14) = *(undefined8 *)(*(longlong *)(lVar22 + 8) + 0x48);
              puVar34[0x10] = puVar37[-1];
              puVar34[0xf] = puVar37[-2];
              puVar34[0x11] = *puVar37;
              puVar34[0x12] = puVar37[1];
              *(undefined8 *)(auStack_128 + lVar27 + -8) = 0x14317b129;
              lVar19 = FUN_14317bc90(param_1);
              uVar10 = *(undefined4 *)(lVar19 + 0x40);
              *(undefined8 *)(auStack_128 + lVar27 + -8) = 0x14317b139;
              fVar42 = (float)FUN_14312f800(lVar22,uVar10,puVar34);
              if (fVar43 <= fVar42) {
                fVar42 = fVar43;
              }
              puVar37 = puVar37 + 4;
              puVar38 = puVar38 + 0xc;
              local_res10 = local_res10 - 1;
              lVar19 = local_108;
              lVar24 = local_f8;
              fVar43 = fVar42;
            } while (local_res10 != 0);
          }
        }
        puVar30 = puVar30 + 1;
        puVar33 = auStack_128 + lVar27;
      } while (puVar30 !=
               (undefined8 *)(*(longlong *)(lVar19 + 8) + (ulonglong)*(uint *)(lVar19 + 0x10) * 8));
    }
  }
  if (((byte)((*(byte *)((longlong)param_1 + 0x14c) & 7) - 1) < 2) &&
     (lVar19 = param_1[0x2d], lVar19 != 0)) {
    lVar24 = param_1[0x21];
    if (lVar24 != 0) {
      uVar12 = *(uint *)(lVar19 + 0x38);
      *(undefined8 *)(puVar33 + -8) = 0x14317b2a6;
      CAkPath::SetIsLooping(lVar24,uVar12 >> 0x1f);
      if (((int)uVar12 < 0) && ((*(uint *)(param_1[0x21] + 0x28) >> 1 & 1) != 0)) {
        *(undefined8 *)(puVar33 + -8) = 0x14317b2bf;
        cVar17 = FUN_141a19570();
        if (cVar17 != '\0') {
          *(undefined8 *)(puVar33 + -8) = 0x14317b2cb;
          FUN_14317ca40(param_1);
        }
      }
    }
    pfVar32 = (float *)*param_2;
    fVar42 = 1e+10;
    if (pfVar32 != pfVar32 + (ulonglong)*(uint *)(param_2 + 1) * 0x1a) {
      pfVar35 = pfVar32 + 7;
      fVar43 = fVar42;
      do {
        uVar13 = *(undefined8 *)(pfVar35 + 0xd);
        *(undefined8 *)(puVar33 + -8) = 0x14317b2f9;
        lVar24 = CAkListener::GetListenerData(uVar13);
        fVar42 = fVar43;
        if (lVar24 != 0) {
          local_f0 = *(float *)(lVar19 + 0x14);
          local_f8 = *(longlong *)(lVar19 + 0xc);
          if ((*(byte *)((longlong)param_1 + 0x14c) & 7) == 2) {
            if (((char)*(byte *)((longlong)param_1 + 0x14c) < '\0') &&
               (lVar27 = param_1[0x21], lVar27 != 0)) {
              plVar25 = *(longlong **)(lVar27 + 0x88);
              lVar22 = *(longlong *)(pfVar35 + 0xd);
              plVar36 = plVar25 + (ulonglong)*(uint *)(lVar27 + 0x90) * 6;
              for (; (plVar25 != plVar36 && (*plVar25 != lVar22)); plVar25 = plVar25 + 6) {
              }
              pfVar26 = (float *)(plVar25 + 1);
              if (plVar25 == plVar36) {
                pfVar26 = (float *)0x0;
              }
              if (pfVar26 == (float *)0x0) {
                *(undefined8 *)(puVar33 + -8) = 0x14317b391;
                pfVar26 = (float *)FUN_1431aeb60(lVar27,lVar22);
                if (pfVar26 == (float *)0x0) {
                  local_100 = local_f0;
                  fVar40 = (float)local_f8;
                  fVar41 = local_f8._4_4_;
                  goto LAB_14317b50f;
                }
              }
              fVar42 = *(float *)(lVar19 + 0xc);
              fVar2 = *(float *)(lVar19 + 0x10);
              fVar3 = *(float *)(lVar19 + 0x14);
              fVar40 = *pfVar26;
              fVar41 = pfVar26[1];
              fVar4 = pfVar26[2];
              fVar5 = pfVar26[3];
              fVar6 = pfVar26[6];
              fVar39 = pfVar26[4];
              fVar7 = pfVar26[7];
              fVar8 = pfVar26[5];
              fVar9 = pfVar26[8];
              *pfVar32 = fVar6;
              pfVar35[-6] = fVar7;
              pfVar35[-5] = fVar9;
              pfVar35[-4] = fVar5;
              pfVar35[-3] = fVar39;
              pfVar35[-2] = fVar8;
              local_100 = fVar42 * fVar4 + fVar8 * fVar2 + fVar9 * fVar3;
              fVar40 = fVar42 * fVar40 + fVar5 * fVar2 + fVar6 * fVar3;
              fVar41 = fVar42 * fVar41 + fVar39 * fVar2 + fVar7 * fVar3;
            }
            else {
              *(undefined8 *)pfVar32 = *(undefined8 *)(lVar24 + 0x60);
              pfVar32[2] = *(float *)(lVar24 + 0x68);
              *(undefined8 *)(pfVar35 + -4) = *(undefined8 *)(lVar24 + 0x6c);
              pfVar35[-2] = *(float *)(lVar24 + 0x74);
              fVar42 = *(float *)(lVar19 + 0x10);
              fVar2 = *(float *)(lVar19 + 0xc);
              fVar3 = *(float *)(lVar19 + 0x14);
              fVar40 = fVar42 * *(float *)(lVar24 + 0x48) + fVar2 * *(float *)(lVar24 + 0x3c) +
                       fVar3 * *(float *)(lVar24 + 0x54);
              fVar41 = fVar2 * *(float *)(lVar24 + 0x40) + fVar42 * *(float *)(lVar24 + 0x4c) +
                       fVar3 * *(float *)(lVar24 + 0x58);
              local_100 = fVar2 * *(float *)(lVar24 + 0x44) + fVar42 * *(float *)(lVar24 + 0x50) +
                          fVar3 * *(float *)(lVar24 + 0x5c);
            }
LAB_14317b50f:
            local_100 = local_100 + pfVar35[1];
            *(ulonglong *)(pfVar35 + -1) = CONCAT44(fVar41 + *pfVar35,fVar40 + pfVar35[-1]);
            pfVar35[1] = local_100;
            *(undefined8 *)(puVar33 + -8) = 0x14317b541;
            lVar27 = FUN_14317bc90(param_1);
            uVar10 = *(undefined4 *)(lVar27 + 0x40);
            *(undefined8 *)(puVar33 + -8) = 0x14317b551;
            fVar42 = (float)FUN_14312f800(lVar24,uVar10,pfVar32);
            pfVar35[3] = pfVar35[4];
          }
          else {
            fVar42 = pfVar35[-4];
            fVar2 = *pfVar32;
            fVar3 = pfVar35[-6];
            fVar40 = pfVar35[-5];
            fVar41 = pfVar35[-2];
            fVar4 = *(float *)(lVar19 + 0x10);
            fVar5 = *(float *)(lVar19 + 0xc);
            fVar6 = *(float *)(lVar19 + 0x14);
            fVar39 = fVar5 * (fVar3 * fVar42 - fVar2 * pfVar35[-3]) + fVar4 * fVar41 +
                     fVar6 * fVar40 + pfVar35[1];
            uStack_e0 = CONCAT44(uStack_e0._4_4_,fVar39);
            *(ulonglong *)(pfVar35 + -1) =
                 CONCAT44(fVar4 * pfVar35[-3] + fVar5 * (fVar2 * fVar41 - fVar40 * fVar42) +
                          fVar6 * fVar3 + *pfVar35,
                          fVar5 * (pfVar35[-3] * fVar40 - fVar3 * fVar41) + fVar4 * fVar42 +
                          fVar6 * fVar2 + pfVar35[-1]);
            pfVar35[1] = fVar39;
            *(undefined8 *)(puVar33 + -8) = 0x14317b656;
            lVar27 = FUN_14317bc90(param_1);
            uVar10 = *(undefined4 *)(lVar27 + 0x40);
            *(undefined8 *)(puVar33 + -8) = 0x14317b666;
            fVar42 = (float)FUN_14312f800(lVar24,uVar10,pfVar32);
          }
          if (fVar43 <= fVar42) {
            fVar42 = fVar43;
          }
        }
        pfVar32 = pfVar32 + 0x1a;
        pfVar35 = pfVar35 + 0x1a;
        fVar43 = fVar42;
      } while (pfVar32 != (float *)((ulonglong)*(uint *)(param_2 + 1) * 0x68 + *param_2));
    }
  }
  *(undefined8 *)(puVar33 + -8) = 0x14317b696;
  lVar19 = AkPositioningParams::GetRawAttenuation(param_1 + 0x27);
  if (lVar19 != 0) {
    pcVar14 = *(code **)(*param_1 + 0x60);
    *(undefined8 *)(puVar33 + -8) = 0x14317b6ac;
    (*pcVar14)(param_1,lVar19,fVar42);
  }
  return (int)param_2[1];
}



// FUNCTION 14317b700 FUN_14317b700 body=105 status=ok
// SIG undefined FUN_14317b700(void)

undefined8 FUN_14317b700(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res8 [32];
  
  lVar1 = AkPositioningParams::GetRawAttenuation(param_1 + 0x138);
  if ((((lVar1 != 0) && (*(byte *)(lVar1 + 0xa6) != 0xff)) &&
      (plVar2 = (longlong *)(((ulonglong)*(byte *)(lVar1 + 0xa6) + 3) * 0x10 + lVar1), *plVar2 != 0)
      ) && (plVar2 != (longlong *)0x0)) {
    uVar3 = FUN_143131860(plVar2,param_2,0,local_res8);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14317b770 FUN_14317b770 body=105 status=ok
// SIG undefined FUN_14317b770(void)

undefined8 FUN_14317b770(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res8 [32];
  
  lVar1 = AkPositioningParams::GetRawAttenuation(param_1 + 0x138);
  if ((((lVar1 != 0) && (*(byte *)(lVar1 + 0xa5) != 0xff)) &&
      (plVar2 = (longlong *)(((ulonglong)*(byte *)(lVar1 + 0xa5) + 3) * 0x10 + lVar1), *plVar2 != 0)
      ) && (plVar2 != (longlong *)0x0)) {
    uVar3 = FUN_143131860(plVar2,param_2,0,local_res8);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14317b7e0 FUN_14317b7e0 body=135 status=ok
// SIG undefined FUN_14317b7e0(void)

void FUN_14317b7e0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x17c) & 0x40) == 0) {
    FUN_143175750(*(undefined8 *)(param_1 + 0x170),param_1 + 0x18,(undefined4 *)(param_1 + 0x118),
                  param_1 + 0x138);
    if ((((*(byte *)(param_1 + 0x124) & 8) != 0) &&
        ((byte)((*(byte *)(param_1 + 0x14c) & 7) - 1) < 2)) && (*(longlong *)(param_1 + 0x168) == 0)
       ) {
      FUN_143174b80(*(undefined8 *)(param_1 + 0x170));
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) & 0xf0;
    *(undefined4 *)(param_1 + 0x118) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x120) = 0x42c80000;
  }
  return;
}



// FUNCTION 14317b870 FUN_14317b870 body=1021 status=ok
// SIG undefined FUN_14317b870(void)

void FUN_14317b870(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  void *pvVar11;
  void *pvVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  float fVar20;
  uint local_res8;
  longlong local_f8;
  undefined8 local_e8 [22];
  
  lVar7 = CAkRegisteredObj::GetConnectedListeners(*(undefined8 *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0xe8) != '\0') {
    fVar20 = *(float *)(param_1 + 0xdc) * 0.05;
    if (-37.0 <= fVar20) {
      uVar13 = (uint)(longlong)(fVar20 * 27866352.0 + 1.0653532e+09);
      fVar20 = (float)((uVar13 & 0x7fffff) + 0x3f800000);
      fVar20 = ((fVar20 * 0.32518977 + 0.020805772) * fVar20 + 0.65304345) *
               (float)(uVar13 & 0xff800000);
    }
    else {
      fVar20 = 0.0;
    }
    uVar4 = *(undefined4 *)(param_1 + 0xe0);
    uVar5 = *(undefined4 *)(param_1 + 0xe4);
    if (*(char *)(lVar7 + 0xb8) == '\0') {
      uVar10 = CAkConnectedListeners::GetDefault();
      lVar8 = CAkConnectedListeners::GetUserAssocs(uVar10);
    }
    else {
      lVar8 = lVar7 + 0x20;
    }
    if (*(char *)(lVar7 + 0xb9) == '\0') {
      uVar10 = CAkConnectedListeners::GetDefault();
      lVar9 = CAkConnectedListeners::GetAuxAssocs(uVar10);
    }
    else {
      lVar9 = lVar7 + 0x60;
    }
    FUN_1431707d0(lVar9,param_2,fVar20,uVar4,uVar5,lVar8 + 0x28);
  }
  puVar14 = local_e8;
  local_res8 = 1;
  local_e8[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x48);
  if ((*(byte *)(param_1 + 0x124) & 8) != 0) {
    if (*(char *)(lVar7 + 0xb8) == '\0') {
      uVar10 = CAkConnectedListeners::GetDefault();
      lVar7 = CAkConnectedListeners::GetUserAssocs(uVar10);
    }
    else {
      lVar7 = lVar7 + 0x20;
    }
    puVar14 = *(undefined8 **)(lVar7 + 0x30);
    local_res8 = *(uint *)(lVar7 + 0x38);
  }
  piVar17 = (int *)(param_1 + 0xcc);
  local_f8 = 4;
  do {
    if ((*piVar17 != 0) && (local_res8 != 0)) {
      uVar19 = (ulonglong)local_res8;
      puVar18 = puVar14;
      do {
        if (DAT_1467be0f4 < (float)piVar17[-0xc]) {
          uVar13 = *(uint *)(param_2 + 1);
          if (uVar13 < *(uint *)((longlong)param_2 + 0xc)) {
LAB_14317bb52:
            uVar13 = *(uint *)(param_2 + 1);
            *(uint *)(param_2 + 1) = uVar13 + 1;
            puVar16 = (undefined8 *)((ulonglong)uVar13 * 0x20 + *param_2);
            if (puVar16 != (undefined8 *)0x0) {
              *puVar16 = *puVar18;
              *(int *)(puVar16 + 1) = *piVar17;
              if (-37.0 <= (float)piVar17[-0xc] * 0.05) {
                uVar13 = (uint)(longlong)((float)piVar17[-0xc] * 0.05 * 27866352.0 + 1.0653532e+09);
                fVar20 = (float)((uVar13 & 0x7fffff) + 0x3f800000);
                fVar20 = ((fVar20 * 0.32518977 + 0.020805772) * fVar20 + 0.65304345) *
                         (float)(uVar13 & 0xff800000);
              }
              else {
                fVar20 = 0.0;
              }
              *(float *)((longlong)puVar16 + 0xc) = fVar20;
              *(int *)((longlong)puVar16 + 0x14) = piVar17[-8];
              *(int *)(puVar16 + 3) = piVar17[-4];
              *(undefined4 *)(puVar16 + 2) = 2;
            }
          }
          else {
            uVar1 = *(uint *)((longlong)param_2 + 0xc) + 1;
            pvVar11 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 5);
            if (pvVar11 != (void *)0x0) {
              pvVar12 = (void *)*param_2;
              if ((pvVar12 != (void *)0x0) && (pvVar12 != pvVar11)) {
                uVar15 = (ulonglong)*(uint *)(param_2 + 1);
                if (uVar15 != 0) {
                  lVar7 = 0;
                  do {
                    lVar8 = *param_2;
                    puVar16 = (undefined8 *)(lVar7 + lVar8);
                    uVar10 = puVar16[1];
                    *(undefined8 *)(lVar7 + (longlong)pvVar11) = *puVar16;
                    ((undefined8 *)(lVar7 + (longlong)pvVar11))[1] = uVar10;
                    puVar2 = (undefined4 *)(lVar7 + 0x10 + lVar8);
                    uVar4 = puVar2[1];
                    uVar5 = puVar2[2];
                    uVar6 = puVar2[3];
                    puVar3 = (undefined4 *)(lVar7 + 0x10 + (longlong)pvVar11);
                    *puVar3 = *puVar2;
                    puVar3[1] = uVar4;
                    puVar3[2] = uVar5;
                    puVar3[3] = uVar6;
                    uVar15 = uVar15 - 1;
                    lVar7 = lVar7 + 0x20;
                  } while (uVar15 != 0);
                  pvVar12 = (void *)*param_2;
                }
                AK::MemoryMgr::Free(g_DefaultPoolId,pvVar12);
              }
              *param_2 = (longlong)pvVar11;
              *(uint *)((longlong)param_2 + 0xc) = uVar1;
              if (uVar13 < uVar1) goto LAB_14317bb52;
            }
          }
        }
        puVar18 = puVar18 + 1;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    piVar17 = piVar17 + 1;
    local_f8 = local_f8 + -1;
    if (local_f8 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 14317bc70 FUN_14317bc70 body=24 status=ok
// SIG undefined FUN_14317bc70(void)

undefined8 FUN_14317bc70(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x17c) & 0x40) != 0) {
    return 0;
  }
  uVar1 = CAkParameterNodeBase::GetControlBus(*(undefined8 *)(param_1 + 0x170));
  return uVar1;
}



// FUNCTION 14317bc90 FUN_14317bc90 body=21 status=ok
// SIG undefined FUN_14317bc90(void)

undefined8 FUN_14317bc90(longlong param_1)

{
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x40) != 0) {
    return **(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x38);
  }
  return 0;
}



// FUNCTION 14317bcb0 FUN_14317bcb0 body=108 status=ok
// SIG undefined FUN_14317bcb0(void)

undefined8 FUN_14317bcb0(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x40) != 0) {
    lVar4 = **(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
  }
  if (param_2 < *(uint *)(lVar4 + 0x50)) {
    lVar3 = (ulonglong)param_2 * 0x68;
    lVar4 = *(longlong *)(lVar4 + 0x48);
    uVar2 = ((undefined8 *)(lVar3 + lVar4))[1];
    *param_3 = *(undefined8 *)(lVar3 + lVar4);
    param_3[1] = uVar2;
    puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar4);
    uVar2 = puVar1[1];
    param_3[2] = *puVar1;
    param_3[3] = uVar2;
    puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar4);
    uVar2 = puVar1[1];
    param_3[4] = *puVar1;
    param_3[5] = uVar2;
    puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar4);
    uVar2 = puVar1[1];
    param_3[6] = *puVar1;
    param_3[7] = uVar2;
    puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar4);
    uVar2 = puVar1[1];
    param_3[8] = *puVar1;
    param_3[9] = uVar2;
    param_3[10] = *(undefined8 *)(lVar3 + 0x50 + lVar4);
    return 1;
  }
  return 2;
}



// FUNCTION 14317bdb0 FUN_14317bdb0 body=95 status=ok
// SIG undefined FUN_14317bdb0(void)

undefined8 FUN_14317bdb0(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar6 = 0;
  lVar4 = lVar6;
  if (*(int *)(lVar2 + 0x40) != 0) {
    lVar4 = **(longlong **)(lVar2 + 0x38);
  }
  if (param_2 < *(ushort *)(lVar4 + 0x38)) {
    if (*(int *)(lVar2 + 0x40) != 0) {
      lVar6 = **(longlong **)(lVar2 + 0x38);
    }
    uVar5 = (ulonglong)param_2;
    lVar2 = *(longlong *)(lVar6 + 0x20);
    puVar1 = (undefined8 *)(lVar2 + uVar5 * 0x30);
    uVar3 = puVar1[1];
    *param_3 = *puVar1;
    param_3[1] = uVar3;
    puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar5 * 0x30);
    uVar3 = puVar1[1];
    param_3[2] = *puVar1;
    param_3[3] = uVar3;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(lVar2 + 0x20 + uVar5 * 0x30);
    return 1;
  }
  return 2;
}



// FUNCTION 14317be10 GetGameRayParams body=231 status=ok
// SIG undefined GetGameRayParams(void)

void AkPositionStore::GetGameRayParams
               (longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar4 = *(longlong **)(param_1 + 8);
  uVar6 = (ulonglong)param_3;
  plVar7 = plVar4 + (ulonglong)*(uint *)(param_1 + 0x10) * 3;
  for (; (plVar4 != plVar7 && (*plVar4 != param_2)); plVar4 = plVar4 + 3) {
  }
  plVar8 = plVar4 + 1;
  if (plVar4 == plVar7) {
    plVar8 = (longlong *)0x0;
  }
  if ((plVar8 == (longlong *)0x0) || (uVar2 = *(uint *)(plVar8 + 1), uVar2 == 0)) {
    if (param_3 != 0) {
      puVar5 = (undefined8 *)(param_4 + 8);
      do {
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    if (param_3 < uVar2) {
      uVar2 = param_3;
    }
    if (uVar2 != 0) {
      uVar6 = (ulonglong)uVar2;
      plVar7 = (longlong *)0x0;
      do {
        uVar3 = ((undefined8 *)((longlong)plVar7 + *plVar8))[1];
        *(undefined8 *)((longlong)plVar7 + param_4) = *(undefined8 *)((longlong)plVar7 + *plVar8);
        ((undefined8 *)((longlong)plVar7 + param_4))[1] = uVar3;
        uVar6 = uVar6 - 1;
        plVar7 = plVar7 + 2;
      } while (uVar6 != 0);
    }
    if (uVar2 < param_3) {
      uVar6 = (ulonglong)(param_3 - uVar2);
      puVar5 = (undefined8 *)((ulonglong)uVar2 * 0x10 + param_4);
      do {
        puVar1 = (undefined8 *)(*plVar8 + (ulonglong)(uVar2 - 1) * 0x10);
        uVar3 = puVar1[1];
        *puVar5 = *puVar1;
        puVar5[1] = uVar3;
        uVar6 = uVar6 - 1;
        puVar5 = puVar5 + 2;
      } while (uVar6 != 0);
      return;
    }
  }
  return;
}



// FUNCTION 14317bf00 FUN_14317bf00 body=225 status=ok
// SIG undefined FUN_14317bf00(void)

undefined8 FUN_14317bf00(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  lVar4 = CAkRegisteredObj::GetListeners();
  uVar8 = 0;
  iVar7 = *(int *)(lVar4 + 0x10) + -1;
  uVar6 = uVar8;
  if (-1 < iVar7) {
    do {
      iVar3 = (iVar7 - (int)uVar6) / 2 + (int)uVar6;
      uVar5 = *(ulonglong *)(*(longlong *)(lVar4 + 8) + (longlong)iVar3 * 8);
      if (param_2 < uVar5) {
        iVar7 = iVar3 + -1;
      }
      else {
        if (param_2 <= uVar5) {
          bVar2 = true;
          uVar5 = *(longlong *)(lVar4 + 8) + (longlong)iVar3 * 8;
          goto LAB_14317bf7f;
        }
        uVar6 = (ulonglong)(iVar3 + 1);
      }
    } while ((int)uVar6 <= iVar7);
  }
  bVar2 = false;
  uVar5 = uVar8;
  if (*(longlong *)(lVar4 + 8) != 0) {
    uVar5 = *(longlong *)(lVar4 + 8) + (longlong)(int)uVar6 * 8;
  }
LAB_14317bf7f:
  if (bVar2) {
    uVar8 = uVar5;
  }
  if ((uVar8 != 0) && (lVar4 = CAkListener::GetListenerData(param_2), lVar4 != 0)) {
    uVar1 = *(undefined8 *)(lVar4 + 0x68);
    *param_3 = *(undefined8 *)(lVar4 + 0x60);
    param_3[1] = uVar1;
    uVar1 = *(undefined8 *)(lVar4 + 0x78);
    param_3[2] = *(undefined8 *)(lVar4 + 0x70);
    param_3[3] = uVar1;
    param_3[4] = *(undefined8 *)(lVar4 + 0x80);
    *(undefined4 *)(param_3 + 5) = *(undefined4 *)(lVar4 + 0x88);
    return 1;
  }
  return 2;
}



// FUNCTION 14317c010 FUN_14317c010 body=29 status=ok
// SIG undefined FUN_14317c010(void)

undefined8 FUN_14317c010(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x17c) & 0x40) != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014317c026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x108))();
  return uVar1;
}



// FUNCTION 14317c030 FUN_14317c030 body=11 status=ok
// SIG undefined FUN_14317c030(void)

undefined4 FUN_14317c030(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x10);
}



// FUNCTION 14317c060 FUN_14317c060 body=134 status=ok
// SIG undefined FUN_14317c060(void)

undefined8 FUN_14317c060(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1[0x2e] + 0x78);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      *(longlong **)(lVar1 + 0x18) = param_1;
      param_1[10] = 0;
    }
    else {
      param_1[10] = *(longlong *)(lVar1 + 0x18);
      *(longlong **)(lVar1 + 0x18) = param_1;
    }
  }
  lVar1 = param_1[0x2e];
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1,local_res8);
  FUN_1431abd30(param_1,lVar1,uVar3,uVar2);
  return 1;
}



// FUNCTION 14317c0f0 FUN_14317c0f0 body=42 status=ok
// SIG undefined FUN_14317c0f0(void)

undefined8 FUN_14317c0f0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    lVar2 = 0;
    piVar1 = (int *)(param_1 + 0xcc);
    while (*piVar1 == 0) {
      lVar2 = lVar2 + 1;
      piVar1 = piVar1 + 1;
      if (3 < lVar2) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 14317c120 IsInHdrHierarchy body=63 status=ok
// SIG undefined IsInHdrHierarchy(void)

undefined8 CAkParameterNodeBase::IsInHdrHierarchy(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  while( true ) {
    if ((uVar1 & 0xe0000) != 0) {
      return 1;
    }
    lVar2 = *(longlong *)(param_1 + 0x88);
    if ((lVar2 == 0) && (lVar2 = *(longlong *)(param_1 + 0x80), lVar2 == 0)) break;
    uVar1 = *(uint *)(lVar2 + 0xa0);
    param_1 = lVar2;
  }
  return 0;
}



// FUNCTION 14317c160 FUN_14317c160 body=181 status=ok
// SIG undefined FUN_14317c160(void)

bool FUN_14317c160(longlong *param_1)

{
  uint uVar1;
  float fVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x17c) & 1) == 0) {
    (**(code **)(*param_1 + 0x48))();
  }
  else if ((*(byte *)((longlong)param_1 + 0x17c) & 0x10) != 0) {
    (**(code **)(*param_1 + 0x50))();
  }
  if (-37.0 <= *(float *)(param_1 + 0xd) * 0.05) {
    uVar1 = (uint)(longlong)(*(float *)(param_1 + 0xd) * 0.05 * 27866352.0 + 1.0653532e+09);
    fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
    fVar2 = ((fVar2 * 0.32518977 + 0.020805772) * fVar2 + 0.65304345) * (float)(uVar1 & 0xff800000);
  }
  else {
    fVar2 = 0.0;
  }
  return fVar2 * *(float *)((longlong)param_1 + 0x6c) <= DAT_1467be0f0;
}



// FUNCTION 14317c220 FUN_14317c220 body=30 status=ok
// SIG undefined FUN_14317c220(void)

bool FUN_14317c220(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x40) != 0) {
    lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
  }
  return (*(byte *)(lVar1 + 0x3a) & 7) == 1;
}



// FUNCTION 14317c270 FUN_14317c270 body=107 status=ok
// SIG undefined FUN_14317c270(void)

void FUN_14317c270(longlong *param_1,undefined4 *param_2)

{
  if ((((((*(byte *)((longlong)param_1 + 0x17c) & 0x40) == 0) &&
        ((*(longlong *)(param_2 + 2) == 0 || (param_1[3] == *(longlong *)(param_2 + 2))))) &&
       ((param_2[4] == 0 || ((int)param_1[4] == param_2[4])))) &&
      ((((param_2[6] == 0 || ((int)param_1[5] == param_2[6])) &&
        ((*(char *)(param_2 + 8) == -1 || ((char)param_1[6] == *(char *)(param_2 + 8))))) &&
       ((*(char *)(param_2 + 10) == -1 || ((char)param_1[7] == *(char *)(param_2 + 10))))))) &&
     ((*(longlong *)(param_2 + 0xc) == 0 || (param_1[8] == *(longlong *)(param_2 + 0xc))))) {
                    /* WARNING: Could not recover jumptable at 0x00014317c2d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,*param_2,param_2[0x12],param_2[0x12]);
    return;
  }
  return;
}



// FUNCTION 14317c2e0 FUN_14317c2e0 body=36 status=ok
// SIG undefined FUN_14317c2e0(void)

ulonglong FUN_14317c2e0(longlong param_1,byte param_2)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = *(int **)(param_1 + 0x108);
  if (piVar1 == (int *)0x0) {
    return (ulonglong)param_2;
  }
  if (param_2 == 0) {
    uVar2 = CAkPathManager::Resume(DAT_146b50b10);
    return uVar2;
  }
  if (*piVar1 == 1) {
    CAkPath::Pause(piVar1,*(undefined4 *)(DAT_146b50b78 + 0x78));
    return 1;
  }
  return 0x26;
}



// FUNCTION 14317c310 FUN_14317c310 body=466 status=ok
// SIG undefined FUN_14317c310(void)

void FUN_14317c310(longlong param_1,float param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  
  if ((*(byte *)(param_1 + 0x17c) & 0x40) != 0) {
    return;
  }
  switch(param_3) {
  case 0x12:
    *(float *)(param_1 + 0x118) = param_2 + *(float *)(param_1 + 0x118);
    break;
  case 0x13:
    *(float *)(param_1 + 0x11c) = param_2 + *(float *)(param_1 + 0x11c);
    break;
  case 0x14:
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 != 0) {
      fVar4 = (float)FUN_14317c7d0(param_1);
      *(float *)(lVar1 + 0xc) = fVar4 + *(float *)(lVar1 + 0xc);
    }
    break;
  case 0x15:
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 != 0) {
      fVar4 = (float)FUN_14317c7d0(param_1);
      *(float *)(lVar1 + 0x14) = fVar4 + *(float *)(lVar1 + 0x14);
    }
    break;
  case 0x16:
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 != 0) {
      fVar4 = (float)FUN_14317c7d0(param_1);
      *(float *)(lVar1 + 0x10) = fVar4 + *(float *)(lVar1 + 0x10);
    }
    break;
  case 0x17:
    *(float *)(param_1 + 0x138) = param_2;
    break;
  case 0x18:
    *(float *)(param_1 + 0x120) = param_2;
    break;
  default:
    goto switchD_14317c365_caseD_19;
  case 0x2e:
    FUN_14317c6f0(param_1);
    goto switchD_14317c365_caseD_19;
  case 0x40:
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) & 0xf8;
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | (byte)(int)param_2 & 7;
    break;
  case 0x41:
    if (param_2 == 0.0) {
      *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) & 0xbf;
      *(undefined1 *)(param_1 + 0x14c) = *(undefined1 *)(param_1 + 0x14c);
    }
    else {
      *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) & 0xbf;
      *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) | 0x40;
    }
switchD_14317c365_caseD_19:
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 != 0) {
      if (param_3 == 0x42) {
        if (param_2 == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0x80000000;
        }
        *(uint *)(lVar1 + 0x38) = *(uint *)(lVar1 + 0x38) & 0x7fffffff;
        *(uint *)(lVar1 + 0x38) = *(uint *)(lVar1 + 0x38) | uVar3;
      }
      else if (param_3 == 0x43) {
        CAk3DAutomationParams::SetTransition(lVar1,(int)param_2);
      }
      else if (param_3 == 0x44) {
        *(int *)(lVar1 + 0x18) = (int)param_2;
      }
    }
    break;
  case 0x45:
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) & 0xf7;
    bVar2 = 0;
    if (0.0 < param_2) {
      bVar2 = 8;
    }
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | bVar2;
  }
  return;
}



// FUNCTION 14317c550 FUN_14317c550 body=343 status=ok
// SIG undefined FUN_14317c550(void)

ulonglong FUN_14317c550(longlong *param_1,undefined4 param_2,undefined8 param_3,char param_4,
                       undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 0x2f) = param_2;
  uVar5 = 1;
  FUN_14317b7e0();
  lVar3 = AkPositioningParams::GetRawAttenuation(param_1 + 0x27);
  if (lVar3 != 0) {
    uVar4 = FUN_14317cb70(param_1,lVar3);
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 != 1) {
      return uVar4;
    }
  }
  if (param_1[0x2d] != 0) {
    uVar2 = FUN_14317c880(param_1,param_3,0);
    uVar5 = (ulonglong)uVar2;
  }
  if ((*(byte *)((longlong)param_1 + 0x17c) & 1) == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_6);
  }
  else if ((*(byte *)((longlong)param_1 + 0x17c) & 0x10) != 0) {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  if (-37.0 <= *(float *)(param_1 + 0xd) * 0.05) {
    uVar2 = (uint)(longlong)(*(float *)(param_1 + 0xd) * 0.05 * 27866352.0 + 1.0653532e+09);
    fVar6 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  else {
    fVar6 = 0.0;
  }
  bVar1 = fVar6 * *(float *)((longlong)param_1 + 0x6c) <= DAT_1467be0f0;
  *(bool *)param_7 = bVar1;
  if (((((int)uVar5 == 1) && (param_4 == '\0')) && (bVar1)) &&
     ((*(byte *)((longlong)param_1 + 0x17c) & 0x40) == 0)) {
    uVar5 = 3;
    *param_5 = 0x29;
  }
  return uVar5;
}



// FUNCTION 14317c6b0 FUN_14317c6b0 body=28 status=ok
// SIG undefined FUN_14317c6b0(void)

void FUN_14317c6b0(longlong param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x17c);
  *(byte *)(param_1 + 0x17c) = bVar1 & 0xfe;
  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x17c) = bVar1 & 0xfa;
  }
  return;
}



// FUNCTION 14317c6d0 FUN_14317c6d0 body=27 status=ok
// SIG undefined FUN_14317c6d0(void)

void FUN_14317c6d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    CAkModulatorPBIData::TriggerRelease(*(longlong *)(param_1 + 0x58),0);
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 14317c6f0 FUN_14317c6f0 body=218 status=ok
// SIG undefined FUN_14317c6f0(void)

void FUN_14317c6f0(longlong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = AkPositioningParams::GetRawAttenuation(param_1 + 0x138);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0xa8);
    if (lVar4 != lVar4 + (ulonglong)*(uint *)(lVar3 + 0xb0) * 0x28) {
      do {
        CAkRTPCMgr::UnSubscribeRTPC(g_pRTPCMgr,param_1,*(undefined4 *)(lVar4 + 0xc));
        lVar4 = lVar4 + 0x28;
      } while (lVar4 != *(longlong *)(lVar3 + 0xa8) + (ulonglong)*(uint *)(lVar3 + 0xb0) * 0x28);
    }
    AkPositioningParams::~AkPositioningParams(param_1 + 0x138);
  }
  lVar2 = g_DefaultPoolId;
  puVar1 = *(undefined8 **)(param_1 + 0x168);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,0);
    AK::MemoryMgr::Free(lVar2,puVar1);
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 0x20;
  return;
}



// FUNCTION 14317c7d0 FUN_14317c7d0 body=104 status=ok
// SIG undefined FUN_14317c7d0(void)

float FUN_14317c7d0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = AkPositioningParams::GetRawAttenuation(param_1 + 0x138);
  if ((lVar1 != 0) && (*(byte *)(lVar1 + 0xa0) != 0xff)) {
    plVar2 = (longlong *)(((ulonglong)*(byte *)(lVar1 + 0xa0) + 3) * 0x10 + lVar1);
    if ((*plVar2 != 0) && (plVar2 != (longlong *)0x0)) {
      param_2 = param_2 * *(float *)(*plVar2 + (ulonglong)((int)plVar2[1] - 1) * 0xc) * 0.01;
    }
  }
  return param_2;
}



// FUNCTION 14317c840 FUN_14317c840 body=54 status=ok
// SIG undefined FUN_14317c840(void)

void FUN_14317c840(longlong param_1,short param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  if (param_2 == 0x1a) {
    *(undefined4 *)(param_1 + 0x140) = uVar1;
  }
  else {
    if (param_2 == 0x1b) {
      *(undefined4 *)(param_1 + 0x144) = uVar1;
      return;
    }
    if (param_2 == 0x1c) {
      *(undefined4 *)(param_1 + 0x148) = uVar1;
      return;
    }
  }
  return;
}



// FUNCTION 14317c880 FUN_14317c880 body=448 status=ok
// SIG undefined FUN_14317c880(void)

ulonglong FUN_14317c880(longlong *param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (param_1[0x21] != 0) {
    return 1;
  }
  if (((byte)((*(byte *)((longlong)param_1 + 0x14c) & 7) - 1) < 2) &&
     (lVar2 = param_1[0x2d], lVar2 != 0)) {
    uVar6 = 1;
    iVar5 = *(int *)(lVar2 + 8);
    if (((param_2 != (longlong *)0x0) && (*param_2 != 0)) && ((int)param_2[1] == iVar5)) {
      param_1[0x21] = *param_2;
      *(int *)(param_1 + 0x22) = (int)param_2[1];
    }
    if (((*(longlong *)(lVar2 + 0x30) != 0) && ((*(uint *)(lVar2 + 0x38) & 0x7fffffff) != 0)) &&
       ((param_1[0x21] == 0 || ((*(byte *)(lVar2 + 0x18) & 4) != 0)))) {
      lVar2 = CAkPathManager::AddPathToList(DAT_146b50b10);
      param_1[0x21] = lVar2;
      if (lVar2 != 0) {
        uVar3 = CAkParameterNodeBase::GetPathState(param_1[0x2e]);
        uVar1 = CAk3DAutomationParams::SetPathPlayList(param_1[0x2d],param_1[0x21],uVar3);
        uVar6 = (ulonglong)uVar1;
        if (uVar1 != 1) {
          CAkPathManager::RemovePathFromList(DAT_146b50b10,param_1[0x21]);
          iVar5 = 0;
          param_1[0x21] = 0;
        }
        *(int *)(param_1 + 0x22) = iVar5;
      }
    }
    if ((*(char *)((longlong)param_1 + 0x14c) < '\0') && (param_1[0x21] != 0)) {
      uVar3 = CAkRegisteredObj::GetListeners(param_1[3]);
      FUN_1431ae8e0(param_1[0x21],uVar3);
    }
    if ((int)uVar6 != 1) {
      return uVar6;
    }
  }
  else {
    uVar6 = 1;
  }
  if (param_1[0x21] != 0) {
    uVar4 = FUN_143152770(DAT_146b50b10,param_1[0x21],param_1);
    uVar6 = uVar4 & 0xffffffff;
    if ((int)uVar4 == 2) {
      param_1[0x21] = 0;
      return uVar4;
    }
    (**(code **)(*param_1 + 0x58))(param_1,param_1[0x21]);
    if (((int)uVar4 == 1) && (param_3 != '\0')) {
      FUN_14317ca40(param_1);
    }
  }
  return uVar6;
}



// FUNCTION 14317ca40 FUN_14317ca40 body=64 status=ok
// SIG undefined FUN_14317ca40(void)

void FUN_14317ca40(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    uVar1 = CAkParameterNodeBase::GetPathState(*(undefined8 *)(param_1 + 0x170));
    FUN_143152d10(DAT_146b50b10,*(undefined8 *)(param_1 + 0x108),uVar1);
    return;
  }
  return;
}



// FUNCTION 14317ca80 FUN_14317ca80 body=226 status=ok
// SIG undefined FUN_14317ca80(void)

void FUN_14317ca80(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  lVar7 = param_1[0x21];
  if (lVar7 != 0) {
    if ((*(uint *)(lVar7 + 0x28) >> 1 & 1) != 0) {
      puVar5 = (undefined4 *)CAkParameterNodeBase::GetPathState(param_1[0x2e]);
      if (*(longlong *)(puVar5 + 2) != 0) {
        AkSharedPathState::Release();
      }
      *(undefined8 *)(puVar5 + 2) = 0;
      *puVar5 = 0;
      lVar7 = param_1[0x21];
    }
    CAkPathManager::RemovePathUser(DAT_146b50b10,lVar7,param_1);
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
  }
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1,local_res8);
  FUN_1431ac080(param_1,uVar6,uVar4);
  puVar2 = (undefined8 *)param_1[3];
  piVar1 = (int *)(puVar2 + 10);
  *piVar1 = *piVar1 + -1;
  lVar3 = g_DefaultPoolId;
  if (*piVar1 == 0) {
    (**(code **)*puVar2)(puVar2,0);
    AK::MemoryMgr::Free(lVar3,puVar2);
  }
  FUN_14317c6f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014317cb5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x2e] + 0x10))();
  return;
}



// FUNCTION 14317cb70 FUN_14317cb70 body=292 status=ok
// SIG undefined FUN_14317cb70(void)

undefined8 FUN_14317cb70(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x13c) != 0) {
      return 2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x28);
    if (((*(byte *)(param_1 + 0x17c) & 0x40) == 0) &&
       (puVar2 = *(undefined4 **)(param_2 + 0xa8),
       puVar2 != puVar2 + (ulonglong)*(uint *)(param_2 + 0xb0) * 10)) {
      do {
        uVar1 = FUN_143137d00(g_pRTPCMgr,param_1,*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],
                              puVar2[9],*(undefined8 *)(puVar2 + 6),puVar2[8],param_1 + 0x18,0,1);
        if ((int)uVar1 != 1) {
          return uVar1;
        }
        puVar2 = puVar2 + 10;
      } while (puVar2 != (undefined4 *)
                         (*(longlong *)(param_2 + 0xa8) +
                         (ulonglong)*(uint *)(param_2 + 0xb0) * 0x28));
    }
  }
  return 1;
}



// FUNCTION 14317cca0 FUN_14317cca0 body=516 status=ok
// SIG undefined FUN_14317cca0(void)

void FUN_14317cca0(longlong param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  if ((*(byte *)(param_1 + 0x17c) & 0x40) == 0) {
    switch(param_2) {
    case 0:
      *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 0x10;
      *(float *)(param_1 + 0xf0) = param_4 + *(float *)(param_1 + 0xf0);
      return;
    default:
      FUN_14317c310(param_1,param_3);
      return;
    case 2:
      *(float *)(param_1 + 0x70) = param_4 + *(float *)(param_1 + 0x70);
      return;
    case 3:
      param_4 = param_4 + *(float *)(param_1 + 0xf4);
      *(float *)(param_1 + 0xf4) = param_4;
      *(float *)(param_1 + 0x74) = param_4 + *(float *)(param_1 + 0xf8);
      return;
    case 4:
      param_4 = param_4 + *(float *)(param_1 + 0xfc);
      *(float *)(param_1 + 0xfc) = param_4;
      *(float *)(param_1 + 0x78) = param_4 + *(float *)(param_1 + 0x100);
      return;
    case 5:
      break;
    case 7:
      *(float *)(param_1 + 0x80) = param_4 + *(float *)(param_1 + 0x80);
      return;
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
      FUN_14317c310(param_1,param_4);
      return;
    case 0x25:
      *(float *)(param_1 + 0x88) = param_4 + *(float *)(param_1 + 0x88);
      return;
    case 0x26:
      *(float *)(param_1 + 0xdc) = param_4 + *(float *)(param_1 + 0xdc);
      return;
    case 0x27:
      *(float *)(param_1 + 0x9c) = param_4 + *(float *)(param_1 + 0x9c);
      return;
    case 0x28:
      *(float *)(param_1 + 0xa0) = param_4 + *(float *)(param_1 + 0xa0);
      return;
    case 0x29:
      *(float *)(param_1 + 0xa4) = param_4 + *(float *)(param_1 + 0xa4);
      return;
    case 0x2a:
      *(float *)(param_1 + 0xa8) = param_4 + *(float *)(param_1 + 0xa8);
      return;
    case 0x2b:
      *(float *)(param_1 + 0x90) = param_4 + *(float *)(param_1 + 0x90);
      return;
    case 0x2c:
      *(float *)(param_1 + 0x98) = param_4 + *(float *)(param_1 + 0x98);
      return;
    case 0x2d:
      *(float *)(param_1 + 0x94) = param_4 + *(float *)(param_1 + 0x94);
      return;
    case 0x2f:
      *(float *)(param_1 + 0xac) = param_4 + *(float *)(param_1 + 0xac);
      return;
    case 0x30:
      *(float *)(param_1 + 0xb0) = param_4 + *(float *)(param_1 + 0xb0);
      return;
    case 0x31:
      *(float *)(param_1 + 0xb4) = param_4 + *(float *)(param_1 + 0xb4);
      return;
    case 0x32:
      *(float *)(param_1 + 0xb8) = param_4 + *(float *)(param_1 + 0xb8);
      return;
    case 0x33:
      *(float *)(param_1 + 0xbc) = param_4 + *(float *)(param_1 + 0xbc);
      return;
    case 0x34:
      *(float *)(param_1 + 0xc0) = param_4 + *(float *)(param_1 + 0xc0);
      return;
    case 0x35:
      *(float *)(param_1 + 0xc4) = param_4 + *(float *)(param_1 + 0xc4);
      return;
    case 0x36:
      *(float *)(param_1 + 200) = param_4 + *(float *)(param_1 + 200);
      return;
    case 0x37:
      *(float *)(param_1 + 0xe0) = param_4 + *(float *)(param_1 + 0xe0);
      return;
    case 0x38:
      *(float *)(param_1 + 0xe4) = param_4 + *(float *)(param_1 + 0xe4);
      return;
    }
  }
  return;
}



// FUNCTION 14317cf50 FUN_14317cf50 body=1038 status=ok
// SIG undefined FUN_14317cf50(void)

undefined8 *
FUN_14317cf50(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,int param_6)

{
  byte bVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  
  *param_1 = &PTR__purecall_143f3edb0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = &PTR__purecall_144f95e38;
  FUN_14317a920(param_1 + 3);
  FUN_1424b51c0(param_1 + 0x33);
  param_1[0x38] = 0;
  *param_1 = &PTR_FUN_145acae18;
  param_1[2] = &PTR_FUN_145acae80;
  param_1[3] = &PTR_LAB_145acae88;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)((longlong)param_1 + 500) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x30);
  piVar2 = *(int **)(param_2 + 0x20);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(int **)((longlong)param_1 + 0x1ec) = piVar2;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = *(undefined8 *)(param_2 + 8);
  param_1[0x44] = param_4;
  param_1[0x45] = 0;
  *(undefined1 *)((longlong)param_1 + 0x234) = 0;
  *(uint *)((longlong)param_1 + 0x234) = *(uint *)((longlong)param_1 + 0x234) & 0xff;
  *(byte *)((longlong)param_1 + 0x292) = *(byte *)((longlong)param_1 + 0x292) & 0x80;
  *(int *)((longlong)param_1 + 0x28c) = param_6;
  *(undefined2 *)(param_1 + 0x52) = 1;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x296) = *(byte *)((longlong)param_1 + 0x296) & 0xf8;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x295) = -(param_6 != 0) & 0x40U | 0x22;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x293) = 0;
  bVar1 = *(byte *)(param_2 + 0x188);
  *(uint *)(param_1 + 0x53) = *(uint *)(param_1 + 0x53) & 0xfffffff8;
  *(byte *)((longlong)param_1 + 0x296) =
       (*(byte *)((longlong)param_1 + 0x296) ^ bVar1) & 8 ^ *(byte *)((longlong)param_1 + 0x296);
  *(byte *)((longlong)param_1 + 0x29c) =
       *(byte *)((longlong)param_1 + 0x29c) ^
       (*(byte *)(param_2 + 0x188) >> 1 ^ *(byte *)((longlong)param_1 + 0x29c)) & 1;
  uVar6 = param_5[1];
  param_1[0x54] = *param_5;
  param_1[0x55] = uVar6;
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_5 + 2);
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_2 + 0x84);
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x98);
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
  iVar11 = *(int *)(param_2 + 0x90);
  if (iVar11 == 0) {
    iVar11 = DAT_1467be240;
    DAT_1467be240 = DAT_1467be240 + 1;
  }
  else {
    *(byte *)((longlong)param_1 + 0x296) = *(byte *)((longlong)param_1 + 0x296) | 2;
  }
  *(int *)(param_1 + 0x55) = iVar11;
  cVar13 = '\0';
  iVar11 = DAT_146b51f40 + 1;
  *(int *)((longlong)param_1 + 0x2a4) = DAT_146b51f40;
  DAT_146b51f40 = iVar11;
  uVar12 = 4;
  do {
    cVar13 = cVar13 + '\x01';
    uVar12 = uVar12 & uVar12 - 1;
  } while (uVar12 != 0);
  *(char *)((longlong)param_1 + 0x234) = cVar13;
  *(uint *)((longlong)param_1 + 0x234) = *(uint *)((longlong)param_1 + 0x234) & 0xff;
  *(uint *)((longlong)param_1 + 0x234) = *(uint *)((longlong)param_1 + 0x234) | 0x4100;
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  param_1[0x49] = *(undefined8 *)(param_2 + 0x38);
  param_1[0x4a] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  param_1[0x4b] = *(undefined8 *)(param_2 + 0x48);
  param_1[0x4c] = uVar6;
  uVar8 = *(undefined4 *)(param_2 + 0x5c);
  uVar4 = *(undefined4 *)(param_2 + 0x60);
  uVar5 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x4d) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x26c) = uVar8;
  *(undefined4 *)(param_1 + 0x4e) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x274) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x70);
  param_1[0x4f] = *(undefined8 *)(param_2 + 0x68);
  param_1[0x50] = uVar6;
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_2 + 0x78);
  if (((*(char *)((longlong)param_1 + 0x2cc) + 0x80U & 0xcf) == 0) &&
     (*(char *)((longlong)param_1 + 0x2cc) != -0x50)) {
    uVar7 = *(undefined1 *)((longlong)param_1 + 0x2ce);
  }
  else {
    uVar7 = 0xff;
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)((longlong)param_1 + 0x2cd);
  *(undefined1 *)(param_1 + 10) = uVar7;
  if ((*(char *)((longlong)param_1 + 0x2cc) != '\0') && (param_1[0x43] != 0)) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1[0x43] + 0x10);
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_1 + 0x40);
  param_1[0xb] = param_1;
  if ((*(char *)((longlong)param_1 + 0x2cc) == -0x70) &&
     (*(char *)((longlong)param_1 + 0x2cf) != '\0')) {
    CAkRTPCMgr::SetMidiParameterValue(g_pRTPCMgr,0x81);
  }
  lVar3 = *(longlong *)(param_2 + 0xa0);
  param_1[0x5a] = lVar3;
  if (lVar3 != 0) {
    CAkMidiNoteState::AddRef();
    uVar8 = CAkParameterNode::GetMidiNoteOffAction(param_1[0x31]);
    lVar3 = param_1[0x5a];
    puVar9 = *(undefined8 **)(lVar3 + 0x50);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
      if (puVar9 == (undefined8 *)0x0) {
        return param_1;
      }
      *puVar9 = *(undefined8 *)(lVar3 + 0x50);
      *(undefined8 **)(lVar3 + 0x50) = puVar9;
    }
    if (*(undefined8 **)(lVar3 + 0x48) == (undefined8 *)0x0) {
      *(undefined8 **)(lVar3 + 0x40) = puVar9;
    }
    else {
      **(undefined8 **)(lVar3 + 0x48) = puVar9;
      puVar9 = *(undefined8 **)(lVar3 + 0x50);
    }
    *(undefined8 **)(lVar3 + 0x48) = puVar9;
    *(undefined8 *)(lVar3 + 0x50) = *puVar9;
    *puVar9 = 0;
    *(int *)(lVar3 + 100) = *(int *)(lVar3 + 100) + 1;
    lVar3 = *(longlong *)(lVar3 + 0x48);
    puVar10 = (undefined4 *)(lVar3 + 8);
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = uVar8;
      *(undefined8 **)(lVar3 + 0x10) = param_1;
    }
  }
  return param_1;
}



// FUNCTION 14317d360 FUN_14317d360 body=158 status=ok
// SIG undefined FUN_14317d360(void)

void FUN_14317d360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145acae18;
  param_1[2] = &PTR_FUN_145acae80;
  param_1[3] = &PTR_LAB_145acae88;
  if ((void *)param_1[0x5b] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x5b]);
    param_1[0x5b] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  }
  if (*(longlong *)((longlong)param_1 + 0x1ec) != 0) {
    AkExternalSourceArray::Release();
  }
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x198);
  FUN_14317aa50(param_1 + 3);
  *param_1 = &PTR__purecall_143f3edb0;
  return;
}



// FUNCTION 14317d410 FUN_14317d410 body=192 status=ok
// SIG undefined FUN_14317d410(void)

undefined8 * FUN_14317d410(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145acae18;
  param_1[2] = &PTR_FUN_145acae80;
  param_1[3] = &PTR_LAB_145acae88;
  if ((void *)param_1[0x5b] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x5b]);
    param_1[0x5b] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  }
  if (*(longlong *)((longlong)param_1 + 0x1ec) != 0) {
    AkExternalSourceArray::Release();
  }
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x198);
  FUN_14317aa50(param_1 + 3);
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f0);
  }
  return param_1;
}



// FUNCTION 14317d540 FUN_14317d540 body=162 status=ok
// SIG undefined FUN_14317d540(void)

void FUN_14317d540(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfc;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfc;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  param_1[0x10] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfd;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x82) = 0;
  param_1[0x24] = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  return;
}



// FUNCTION 14317d5f0 FUN_14317d5f0 body=148 status=ok
// SIG undefined FUN_14317d5f0(void)

void FUN_14317d5f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x2d8);
  if (plVar1 == plVar1 + *(uint *)(param_1 + 0x2e0)) {
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    return;
  }
  do {
    FUN_1431779f0(*plVar1,param_1);
    if ((*(byte *)(param_1 + 0x296) & 4) != 0) {
      *(short *)(*plVar1 + 0x2a) = *(short *)(*plVar1 + 0x2a) + -1;
    }
    plVar1 = plVar1 + 1;
  } while (plVar1 != (longlong *)
                     (*(longlong *)(param_1 + 0x2d8) + (ulonglong)*(uint *)(param_1 + 0x2e0) * 8));
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  return;
}



// FUNCTION 14317d690 FUN_14317d690 body=90 status=ok
// SIG undefined FUN_14317d690(void)

void FUN_14317d690(longlong param_1,undefined4 param_2,longlong *param_3)

{
  undefined4 uVar1;
  
  if (*(float *)(param_1 + 0x2b0) != 0.0) {
    if ((*(byte *)(param_1 + 0x194) & 1) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x108);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x80);
    }
    FUN_14315ff90(*(float *)(param_1 + 0x2b0),
                  *(undefined4 *)(*param_3 + (ulonglong)((int)param_3[1] - 1) * 0xc),param_2,uVar1,
                  *(undefined8 *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 14317d6f0 FUN_14317d6f0 body=138 status=ok
// SIG undefined FUN_14317d6f0(void)

int FUN_14317d6f0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x2ac);
  lVar1 = AkPositioningParams::GetRawAttenuation(param_1 + 0x150);
  if (lVar1 != 0) {
    if (((*(byte *)(lVar1 + 0xa0) != 0xff) &&
        (plVar2 = (longlong *)(((ulonglong)*(byte *)(lVar1 + 0xa0) + 3) * 0x10 + lVar1),
        *plVar2 != 0)) && (plVar2 != (longlong *)0x0)) {
      fVar3 = (float)FUN_14317d690(param_1,param_2);
      fVar4 = fVar3 + fVar4;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      if (100.0 <= fVar4) {
        fVar4 = 100.0;
      }
    }
  }
  return (int)fVar4;
}



// FUNCTION 14317d780 FUN_14317d780 body=365 status=ok
// SIG undefined FUN_14317d780(void)

void FUN_14317d780(longlong *param_1,char param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  if (param_2 == '\0') {
    lVar3 = param_1[0x42];
  }
  else {
    lVar3 = param_1[0x41];
  }
  local_34 = 0x3f800000;
  if (((int)param_3 + 0xfe000000U & 0xfdffffff) == 0) {
    local_34 = 0;
  }
  if (lVar3 == 0) {
    if (param_2 == '\0') {
      local_38 = *(undefined4 *)((longlong)param_1 + 0x244);
    }
    else {
      local_38 = (undefined4)param_1[0x48];
    }
    uVar2 = *param_4;
    plVar1 = param_1 + 2;
    local_2c = param_4[1];
    local_28 = 0x100;
    local_26 = 0;
    local_48 = plVar1;
    local_40 = param_3;
    local_30 = uVar2;
    lVar3 = FUN_14314fa00(DAT_146b50af0,&local_48,1,0);
    if (param_2 == '\0') {
      param_1[0x42] = lVar3;
    }
    else {
      *(byte *)((longlong)param_1 + 0x296) = *(byte *)((longlong)param_1 + 0x296) & 0xf7;
      param_1[0x41] = lVar3;
      bVar4 = 0;
      if ((int)param_3 == 0x1000000) {
        bVar4 = 8;
      }
      *(byte *)((longlong)param_1 + 0x296) = *(byte *)((longlong)param_1 + 0x296) | bVar4;
    }
    (**(code **)(*param_1 + 0x58))(param_1,0xe,uVar2);
    if (lVar3 == 0) {
      (**(code **)*plVar1)(plVar1,local_40,local_34,1);
    }
    return;
  }
  CAkTransitionManager::ChangeParameter(DAT_146b50af0,lVar3,param_3,local_34,*param_4,param_4[1],0);
  return;
}



// FUNCTION 14317d8f0 FUN_14317d8f0 body=422 status=ok
// SIG undefined FUN_14317d8f0(void)

void FUN_14317d8f0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint local_res8 [2];
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  if ((*(byte *)(param_1 + 0x296) & 4) != 0) {
    *(byte *)(param_1 + 0x296) = *(byte *)(param_1 + 0x296) & 0xfb;
    plVar5 = *(longlong **)(param_1 + 0x2d8);
    if (plVar5 != plVar5 + *(uint *)(param_1 + 0x2e0)) {
      do {
        lVar2 = *plVar5;
        plVar5 = plVar5 + 1;
        *(short *)(lVar2 + 0x2a) = *(short *)(lVar2 + 0x2a) + -1;
      } while (plVar5 != (longlong *)
                         (*(longlong *)(param_1 + 0x2d8) + (ulonglong)*(uint *)(param_1 + 0x2e0) * 8
                         ));
    }
    bVar1 = *(byte *)(param_1 + 0x293);
    if ((char)bVar1 < '\0') {
      local_res8[0] = bVar1 & 7;
      uVar4 = bVar1 >> 3 & 0xf;
    }
    else {
      *(byte *)(param_1 + 0x293) = bVar1 | 0x80;
      uVar4 = CAkParameterNode::GetVirtualBehavior(*(undefined8 *)(param_1 + 0x188),local_res8);
      if (uVar4 == 3) {
        cVar3 = FUN_143176c10(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x218));
        uVar4 = (cVar3 != '\0') + 1;
      }
      *(byte *)(param_1 + 0x293) = *(byte *)(param_1 + 0x293) & 0x80;
      *(byte *)(param_1 + 0x293) =
           *(byte *)(param_1 + 0x293) | ((byte)uVar4 & 0xf) << 3 | (byte)local_res8[0] & 7;
    }
    if ((uVar4 == 2) && (local_res8[0] != 1)) {
      FUN_14315fc30();
    }
    FUN_14315fc40();
  }
  if ((*(byte *)(param_1 + 0x295) & 0x10) == 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x2d8);
    *(byte *)(param_1 + 0x295) = *(byte *)(param_1 + 0x295) | 0x10;
    if (puVar6 != puVar6 + *(uint *)(param_1 + 0x2e0)) {
      do {
        FUN_1431779f0(*puVar6,param_1);
        puVar6 = puVar6 + 1;
      } while (puVar6 != (undefined8 *)
                         (*(longlong *)(param_1 + 0x2d8) + (ulonglong)*(uint *)(param_1 + 0x2e0) * 8
                         ));
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    local_20 = *(undefined8 *)(param_1 + 0x30);
    local_28[0] = 0;
    local_18 = 0;
    local_10 = 1;
    local_c = 0x100;
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x120))
              (*(longlong **)(param_1 + 0x188),local_28);
  }
  return;
}



// FUNCTION 14317daa0 Destroy body=27 status=ok
// SIG undefined Destroy(void)

void CAkPBI::Destroy(longlong param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 0x228) = 0;
  FUN_14315fca0(param_1,4,param_2,0);
  return;
}



// FUNCTION 14317dac0 FUN_14317dac0 body=254 status=ok
// SIG undefined FUN_14317dac0(void)

void FUN_14317dac0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  uint local_res8 [8];
  
  if ((*(byte *)(param_1 + 0x296) & 4) != 0) {
    *(byte *)(param_1 + 0x296) = *(byte *)(param_1 + 0x296) & 0xfb;
    plVar5 = *(longlong **)(param_1 + 0x2d8);
    if (plVar5 != plVar5 + *(uint *)(param_1 + 0x2e0)) {
      do {
        lVar2 = *plVar5;
        plVar5 = plVar5 + 1;
        *(short *)(lVar2 + 0x2a) = *(short *)(lVar2 + 0x2a) + -1;
      } while (plVar5 != (longlong *)
                         (*(longlong *)(param_1 + 0x2d8) + (ulonglong)*(uint *)(param_1 + 0x2e0) * 8
                         ));
    }
    bVar1 = *(byte *)(param_1 + 0x293);
    if ((char)bVar1 < '\0') {
      local_res8[0] = bVar1 & 7;
      uVar4 = bVar1 >> 3 & 0xf;
    }
    else {
      *(byte *)(param_1 + 0x293) = bVar1 | 0x80;
      uVar4 = CAkParameterNode::GetVirtualBehavior(*(undefined8 *)(param_1 + 0x188),local_res8);
      if (uVar4 == 3) {
        cVar3 = FUN_143176c10(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x218));
        uVar4 = (cVar3 != '\0') + 1;
      }
      *(byte *)(param_1 + 0x293) = *(byte *)(param_1 + 0x293) & 0x80;
      *(byte *)(param_1 + 0x293) =
           *(byte *)(param_1 + 0x293) | ((byte)uVar4 & 0xf) << 3 | (byte)local_res8[0] & 7;
    }
    if ((uVar4 == 2) && (local_res8[0] != 1)) {
      FUN_14315fc30();
    }
    FUN_14315fc40();
  }
  return;
}



// FUNCTION 14317dbc0 FUN_14317dbc0 body=249 status=ok
// SIG undefined FUN_14317dbc0(void)

void FUN_14317dbc0(longlong param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint local_res8 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x293);
  if ((char)bVar1 < '\0') {
    local_res8[0] = bVar1 & 7;
    uVar3 = bVar1 >> 3 & 0xf;
  }
  else {
    *(byte *)(param_1 + 0x293) = bVar1 | 0x80;
    uVar3 = CAkParameterNode::GetVirtualBehavior(*(undefined8 *)(param_1 + 0x188),local_res8);
    if (uVar3 == 3) {
      cVar2 = FUN_143176c10(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x218));
      uVar3 = (cVar2 != '\0') + 1;
    }
    *(byte *)(param_1 + 0x293) = *(byte *)(param_1 + 0x293) & 0x80;
    *(byte *)(param_1 + 0x293) =
         *(byte *)(param_1 + 0x293) | ((byte)uVar3 & 0xf) << 3 | (byte)local_res8[0] & 7;
  }
  if (uVar3 == 1) {
    bVar1 = *(byte *)(param_1 + 0x295);
    if ((bVar1 & 1) == 0) {
      *(byte *)(param_1 + 0x295) = (param_2 * '\x02' ^ bVar1) & 0xe ^ bVar1 | 1;
    }
    local_18 = 0;
    local_14 = 4;
    local_10 = 0;
    FUN_143180140(param_1,&local_18,1);
  }
  else if (uVar3 == 2) {
    *(byte *)(param_1 + 0x195) = *(byte *)(param_1 + 0x195) | 1;
    return;
  }
  return;
}



// FUNCTION 14317dce0 FUN_14317dce0 body=56 status=ok
// SIG undefined FUN_14317dce0(void)

void FUN_14317dce0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if ((*(byte *)(param_1 + 0x194) & 0x40) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014317dcfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x1c8))();
    return;
  }
  plVar1 = (longlong *)*param_3;
  *param_3 = 0;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014317dd13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14317dd20 GetFXDataID body=17 status=ok
// SIG undefined GetFXDataID(void)

void CAkPBI::GetFXDataID(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014317dd2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x188) + 0x1d0))();
  return;
}



// FUNCTION 14317dd40 GetMidiTargetID body=25 status=ok
// SIG undefined GetMidiTargetID(void)

undefined4 AkPBIParams::GetMidiTargetID(longlong param_1)

{
  if ((*(char *)(param_1 + 0x98) != '\0') && (*(longlong *)(param_1 + 8) != 0)) {
    return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10);
  }
  return 0;
}



// FUNCTION 14317ddc0 FUN_14317ddc0 body=160 status=ok
// SIG undefined FUN_14317ddc0(void)

uint FUN_14317ddc0(longlong param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x293);
  if (-1 < (char)bVar1) {
    *(byte *)(param_1 + 0x293) = bVar1 | 0x80;
    uVar3 = CAkParameterNode::GetVirtualBehavior(*(undefined8 *)(param_1 + 0x188));
    if (uVar3 == 3) {
      cVar2 = FUN_143176c10(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x218));
      uVar3 = (cVar2 != '\0') + 1;
    }
    *(byte *)(param_1 + 0x293) =
         ((byte)uVar3 & 0xf) << 3 | *(byte *)(param_1 + 0x293) & 0x80 | (byte)*param_2 & 7;
    return uVar3;
  }
  *param_2 = bVar1 & 7;
  return *(byte *)(param_1 + 0x293) >> 3 & 0xf;
}



// FUNCTION 14317de60 FUN_14317de60 body=248 status=ok
// SIG undefined FUN_14317de60(void)

ulonglong FUN_14317de60(longlong param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  FUN_14317c060();
  if ((*(byte *)(param_1 + 0x17c) & 0x40) == 0) {
    FUN_143173890(param_1 + 0x2c0,&DAT_146b50ff0);
    puVar2 = *(undefined8 **)(param_1 + 0x2c0);
    if (puVar2 != puVar2 + *(uint *)(param_1 + 0x2c8)) {
      do {
        CAkLimiter::Add(*puVar2,param_1 + -0x18);
        puVar2 = puVar2 + 1;
      } while (puVar2 != (undefined8 *)
                         (*(longlong *)(param_1 + 0x2c0) + (ulonglong)*(uint *)(param_1 + 0x2c8) * 8
                         ));
    }
  }
  if (*(int *)(param_1 + 0x1e8) == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = CAkPlayingMgr::SetPBI
                      (DAT_146b50b00,*(int *)(param_1 + 0x1e8),param_1 + -0x18,param_1 + -0x10);
    if ((int)uVar1 == 1) {
      FUN_143152090(DAT_146b50b00,param_1 + -0x18);
      CAkSource::LockDataPtr
                (*(undefined8 *)(param_1 + 0x208),param_1 + 0x2a8,param_1 + 0x2b0,param_1 + 0x1a8);
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1;
}



// FUNCTION 14317df60 FUN_14317df60 body=441 status=ok
// SIG undefined FUN_14317df60(void)

undefined8 FUN_14317df60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 local_res8 [2];
  longlong local_res10;
  undefined8 *local_res18 [2];
  
  if (*(longlong *)(param_1 + 0x1c0) != param_2) {
LAB_14317e0c5:
    if (*(longlong *)(param_1 + 0x228) != 0) {
      uVar6 = FUN_14316ea00(*(longlong *)(param_1 + 0x228),param_2);
      return uVar6;
    }
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x228);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x238);
    plVar7 = (longlong *)0x0;
    if ((plVar2 != (longlong *)0x0) && (plVar2[3] == param_1)) {
      plVar7 = plVar2;
    }
    plVar2 = *(longlong **)(lVar1 + 0x240);
    if ((plVar2 != (longlong *)0x0) && (plVar2[3] == param_1)) {
      plVar7 = plVar2;
    }
    if (plVar7 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar7 + 0x98))(plVar7);
      if (cVar4 != '\0') {
        local_res10 = 0;
        local_res8[0] = 0;
        local_res18[0] = (undefined8 *)0x0;
        CAkSource::LockDataPtr(*(undefined8 *)(param_1 + 0x220),&local_res10,local_res8,local_res18)
        ;
        if (local_res10 != 0) {
          iVar5 = (**(code **)(*plVar7 + 0xa0))(plVar7,local_res10,*(undefined8 *)(param_1 + 0x2c0))
          ;
          if (iVar5 == 1) {
            cVar4 = (**(code **)(*plVar7 + 0xa8))(plVar7);
            if ((cVar4 != '\0') &&
               (plVar2 = *(longlong **)(param_1 + 0x228), plVar2[1] == param_1 + 0x18)) {
              (**(code **)(*plVar2 + 0x78))(plVar2,local_res10,*(undefined8 *)(param_1 + 0x2c0));
            }
            cVar4 = (**(code **)(*plVar7 + 0xb0))(plVar7);
            if (cVar4 != '\0') {
              plVar7[2] = plVar7[2] + (local_res10 - *(longlong *)(param_1 + 0x2c0));
            }
            if (*(longlong *)(param_1 + 0x2c0) != 0) {
              CAkSource::UnLockDataPtr(*(undefined8 *)(param_1 + 0x220));
            }
            puVar3 = *(undefined8 **)(param_1 + 0x1c0);
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,0);
            }
            *(longlong *)(param_1 + 0x2c0) = local_res10;
            *(undefined8 **)(param_1 + 0x1c0) = local_res18[0];
            goto LAB_14317e0c5;
          }
          if (local_res10 != 0) {
            CAkSource::UnLockDataPtr(*(undefined8 *)(param_1 + 0x220));
          }
          if (local_res18[0] != (undefined8 *)0x0) {
            (**(code **)*local_res18[0])(local_res18[0],0);
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 14317e120 Kick body=72 status=ok
// SIG undefined Kick(void)

void CAkPBI::Kick(longlong param_1,char param_2)

{
  byte bVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x295);
  if ((bVar1 & 1) == 0) {
    *(byte *)(param_1 + 0x295) = (param_2 * '\x02' ^ bVar1) & 0xe ^ bVar1 | 1;
  }
  local_18 = 0;
  local_14 = 4;
  local_10 = 0;
  FUN_143180140(param_1,&local_18,1);
  return;
}



// FUNCTION 14317e170 FUN_14317e170 body=344 status=ok
// SIG undefined FUN_14317e170(void)

void FUN_14317e170(undefined8 *param_1,float param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  float local_res10 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_4 != '\0') {
    plVar5 = (longlong *)*param_1;
    uVar6 = *(uint *)(param_1 + 1);
    plVar4 = plVar5 + (ulonglong)uVar6 * 3;
    plVar1 = plVar5;
    while ((plVar1 != plVar4 &&
           ((*plVar1 != *param_3 ||
            (((*(uint *)(plVar1 + 1) ^ ~*(uint *)(param_3 + 1) & 1) & 1) != 0))))) {
      plVar1 = plVar1 + 3;
    }
    plVar3 = plVar1 + 2;
    if (plVar1 == plVar4) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      if ((*(byte *)(param_3 + 1) & 1) != 0) {
        return;
      }
      if (plVar5 != plVar4) {
        do {
          if ((*plVar5 == *param_3) &&
             (((*(uint *)(plVar5 + 1) ^ ~*(uint *)(param_3 + 1) & 1) & 1) == 0)) break;
          plVar5 = plVar5 + 3;
        } while (plVar5 != plVar4);
        if (plVar5 != plVar4) {
          if (plVar5 < plVar4 + -3) {
            uVar2 = ((ulonglong)((longlong)(plVar4 + -3) + (-1 - (longlong)plVar5)) / 0x18 + 1) * 3
                    & 0x1fffffffffffffff;
            plVar4 = plVar5 + 3;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *plVar5 = *plVar4;
              plVar4 = plVar4 + 1;
              plVar5 = plVar5 + 1;
            }
            uVar6 = *(uint *)(param_1 + 1);
          }
          *(uint *)(param_1 + 1) = uVar6 - 1;
        }
      }
    }
  }
  local_res10[0] = param_2;
  if ((param_2 == 1.0) && ((param_4 == '\0' || ((*(byte *)(param_3 + 1) & 1) != 0)))) {
    local_18 = (undefined4)*param_3;
    uStack_14 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_10 = (undefined4)param_3[1];
    uStack_c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14317f5e0(param_1,&local_18);
    return;
  }
  local_18 = (undefined4)*param_3;
  uStack_14 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_10 = (undefined4)param_3[1];
  uStack_c = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_143178370(param_1,&local_18,local_res10);
  return;
}



// FUNCTION 14317e2d0 FUN_14317e2d0 body=38 status=ok
// SIG undefined FUN_14317e2d0(void)

void FUN_14317e2d0(longlong param_1)

{
  FUN_14317e170(param_1 + 0x1c8);
                    /* WARNING: Could not recover jumptable at 0x00014317e2f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x18) + 0x50))(param_1 + 0x18);
  return;
}



// FUNCTION 14317e300 NotifAddedAsSA body=15 status=ok
// SIG undefined NotifAddedAsSA(void)

void CAkPBI::NotifAddedAsSA(longlong param_1)

{
  *(byte *)(param_1 + 0x292) = *(byte *)(param_1 + 0x292) & 0x9f;
  *(byte *)(param_1 + 0x292) = *(byte *)(param_1 + 0x292) | 0x18;
  return;
}



// FUNCTION 14317e310 FUN_14317e310 body=85 status=ok
// SIG undefined FUN_14317e310(void)

void FUN_14317e310(longlong param_1,uint param_2,uint param_3)

{
  if ((*(longlong *)(param_1 + 0x228) != 0) && ((param_3 & 0xffffffef) != 0)) {
    CAkVPLSrcCbxNode::SetFxBypass();
  }
  if ((param_3 & 0x10) != 0) {
    *(ushort *)(param_1 + 0x104) = (ushort)(param_2 >> 4) & 1;
  }
  return;
}



// FUNCTION 14317e380 FUN_14317e380 body=58 status=ok
// SIG undefined FUN_14317e380(void)

void FUN_14317e380(longlong param_1,undefined8 param_2)

{
  FUN_1431af390(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x10));
  FUN_1431af380(param_2,*(undefined4 *)(param_1 + 0x1e8));
  return;
}



// FUNCTION 14317e3c0 FUN_14317e3c0 body=15 status=ok
// SIG undefined FUN_14317e3c0(void)

void FUN_14317e3c0(longlong param_1)

{
  *(byte *)(param_1 + 0x292) = *(byte *)(param_1 + 0x292) & 0x8f;
  *(byte *)(param_1 + 0x292) = *(byte *)(param_1 + 0x292) | 8;
  return;
}



// FUNCTION 14317e3d0 FUN_14317e3d0 body=29 status=ok
// SIG undefined FUN_14317e3d0(void)

void FUN_14317e3d0(longlong param_1,undefined4 param_2)

{
  *(byte *)(param_1 + 0x292) = *(byte *)(param_1 + 0x292) & 0x9f;
  *(byte *)(param_1 + 0x292) = *(byte *)(param_1 + 0x292) | 0x18;
  FUN_14315fca0(param_1,3,0,param_2);
  return;
}



// FUNCTION 14317e3f0 FUN_14317e3f0 body=23 status=ok
// SIG undefined FUN_14317e3f0(void)

void FUN_14317e3f0(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x290) = 1;
  CAkLEngineCmds::EnqueueAction(4,param_1);
  return;
}



// FUNCTION 14317e410 FUN_14317e410 body=457 status=ok
// SIG undefined FUN_14317e410(void)

void FUN_14317e410(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  float fVar4;
  float local_res8 [2];
  uint uStack_9c;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(longlong **)(param_1 + 0x168) != param_2) && (*(char *)(param_1 + 0x98) == '\0')) {
    local_78 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = 1;
    local_70 = *(undefined4 *)(param_1 + 0x34);
    local_68 = 0;
    local_50 = 0;
    local_60 = 0xff;
    local_58 = 0xff;
    lVar2 = CAkParameterNodeBase::GetControlBus(param_2);
    if (*(longlong *)(param_1 + 0x178) != 0) {
      if (*(longlong *)(param_1 + 0x178) == lVar2) {
        uVar3 = 0;
      }
      else {
        FUN_14317d540(param_1 + 0xa8);
      }
    }
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xfd;
    *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xfe;
    *(undefined2 *)(param_1 + 0x129) = 0;
    *(undefined1 *)(param_1 + 299) = 0;
    (**(code **)(*param_2 + 0x150))
              (param_2,param_1 + 0xa8,0xffffffff,param_1 + 0x130,&local_78,param_1 + 0x140,
               param_1 + 0x158,uVar3,*(undefined8 *)(param_1 + 0x168));
    *(longlong **)(param_1 + 0x168) = param_2;
    if ((*(longlong *)(param_1 + 0x178) == 0) && (lVar2 != 0)) {
      cVar1 = CAkBus::IsMixingBus(lVar2);
      if (cVar1 == '\0') {
        lStack_40 = (ulonglong)uStack_9c << 0x20;
        uStack_90 = CONCAT31(uStack_90._1_3_,0xff);
        local_88 = CONCAT31(local_88._1_3_,0xff);
        local_48 = 0;
        local_38 = 0;
        uStack_30 = uStack_90;
        local_28 = local_88;
        uStack_20 = 0;
        uStack_1c = 0;
        fVar4 = (float)FUN_143145b30(lVar2,&local_48,local_res8);
        local_res8[0] = local_res8[0] + fVar4;
      }
      else {
        local_res8[0] = 0.0;
      }
      *(float *)(param_1 + 0x170) = local_res8[0];
      *(longlong *)(param_1 + 0x178) = lVar2;
    }
  }
  return;
}



// FUNCTION 14317e5e0 FUN_14317e5e0 body=739 status=ok
// SIG undefined FUN_14317e5e0(void)

void FUN_14317e5e0(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_48;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  
  if (((*(longlong *)(param_2 + 2) == 0) || (*(longlong *)(param_2 + 2) == param_1[6])) &&
     ((param_2[4] == 0 || (param_2[4] == (int)param_1[0x40])))) {
    iVar3 = *param_2;
    if (iVar3 == 0) {
      FUN_143180140(param_1,param_2 + 5,1);
    }
    else {
      if (iVar3 == 1) {
        *(int *)((longlong)param_1 + 0x2b4) = *(int *)((longlong)param_1 + 0x2b4) + 1;
        if (param_2[5] == 0) {
          if ((*(byte *)((longlong)param_1 + 0x292) & 0x78) == 0) {
            lVar4 = *param_1;
            uVar5 = 0;
          }
          else {
            if (param_1[0x42] != 0) {
              CAkTransitionManager::ChangeParameter(DAT_146b50af0,param_1[0x42],0x4000000,0,0,4,0);
              return;
            }
            lVar4 = *param_1;
            uVar5 = 1;
          }
          (**(code **)(lVar4 + 0x18))(param_1,uVar5);
          return;
        }
        uVar2 = *(ulonglong *)(param_2 + 5);
        if (param_1[0x42] != 0) {
          local_48._4_4_ = (undefined4)(uVar2 >> 0x20);
          local_48._0_4_ = (undefined4)uVar2;
          CAkTransitionManager::ChangeParameter
                    (DAT_146b50af0,param_1[0x42],0x4000000,0,(undefined4)local_48,local_48._4_4_,0);
          return;
        }
        local_28 = *(undefined4 *)((longlong)param_1 + 0x244);
        local_24 = 0;
        local_30 = 0x4000000;
        local_48 = uVar2;
      }
      else {
        if (iVar3 != 2) {
          if (iVar3 == 3) {
            (**(code **)(*param_1 + 0x28))(param_1,*(undefined8 *)(param_2 + 10));
            return;
          }
          if (iVar3 != 5) {
            return;
          }
          FUN_14317c6d0(param_1 + 3);
          return;
        }
        if ((*(char *)((longlong)param_2 + 0x22) == '\0') &&
           (1 < *(uint *)((longlong)param_1 + 0x2b4))) {
          *(uint *)((longlong)param_1 + 0x2b4) = *(uint *)((longlong)param_1 + 0x2b4) - 1;
          return;
        }
        *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
        (**(code **)(*param_1 + 0x20))(param_1);
        lVar4 = param_1[0x42];
        if (param_2[5] == 0) {
          if (lVar4 != 0) {
            CAkTransitionManager::ChangeParameter(DAT_146b50af0,lVar4,0x8000000,0x3f800000,0,4,0);
            return;
          }
          *(undefined4 *)((longlong)param_1 + 0x244) = 0x3f800000;
          (**(code **)(param_1[3] + 0x50))(param_1 + 3);
          return;
        }
        uVar2 = *(ulonglong *)(param_2 + 5);
        if (lVar4 != 0) {
          local_48._4_4_ = (undefined4)(uVar2 >> 0x20);
          local_48._0_4_ = (undefined4)uVar2;
          CAkTransitionManager::ChangeParameter
                    (DAT_146b50af0,lVar4,0x8000000,0x3f800000,(undefined4)local_48,local_48._4_4_,0)
          ;
          return;
        }
        local_28 = *(undefined4 *)((longlong)param_1 + 0x244);
        local_24 = 0x3f800000;
        local_30 = 0x8000000;
        local_48 = uVar2;
      }
      plVar1 = param_1 + 2;
      local_1c = (undefined4)(local_48 >> 0x20);
      local_20 = (undefined4)local_48;
      local_18 = 0x100;
      local_16 = 0;
      local_38 = plVar1;
      lVar4 = FUN_14314fa00(DAT_146b50af0,&local_38,1,0);
      param_1[0x42] = lVar4;
      (**(code **)(*param_1 + 0x58))(param_1,0xe,local_48 & 0xffffffff);
      if (lVar4 == 0) {
        (**(code **)*plVar1)(plVar1,local_30,local_24,1);
      }
    }
  }
  return;
}



// FUNCTION 14317e8d0 FUN_14317e8d0 body=93 status=ok
// SIG undefined FUN_14317e8d0(void)

void FUN_14317e8d0(longlong *param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_2 == 3) {
    *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) | 1;
    (**(code **)(*param_1 + 0x48))();
    (**(code **)(*param_1 + 0x10))(param_1,param_4);
  }
  else if ((param_2 == 4) && (param_3 == 1)) {
    *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) & 0xfe;
    *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) | 8;
    return;
  }
  return;
}



// FUNCTION 14317e930 FUN_14317e930 body=1654 status=ok
// SIG undefined FUN_14317e930(void)

void FUN_14317e930(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  undefined4 *puVar12;
  void **ppvVar13;
  longlong lVar14;
  float *pfVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  void **ppvVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_res8;
  float fStackX_c;
  void *local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  longlong lStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  fVar25 = 0.0;
  bVar20 = true;
  fVar23 = 0.0;
  fVar24 = 0.0;
  lVar11 = FUN_14317bc70();
  if (((param_2 == (undefined8 *)0x0) || (lVar11 != param_2[0x1a])) ||
     ((*(byte *)(param_1 + 0x17c) & 0x40) != 0)) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x74) = 0;
    *(undefined8 *)(param_1 + 0x7c) = 0;
    *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0xfc;
    *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xfc;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0xbc) = 0;
    *(undefined8 *)(param_1 + 0xcc) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xb4) = 0;
    *(undefined8 *)(param_1 + 0xc4) = 0;
    *(undefined8 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0xfd;
    *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xfe;
    *(undefined8 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined2 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xea) = 0;
    puVar12 = *(undefined4 **)(param_1 + 0x1b0);
    uVar17 = (ulonglong)*(uint *)(param_1 + 0x1b8);
    puVar18 = puVar12;
    if (puVar12 != puVar12 + uVar17 * 6) {
      do {
        uVar16 = (uint)uVar17;
        if ((*(byte *)(puVar12 + 2) & 2) == 0) {
          if (1 < uVar16) {
            puVar3 = puVar18 + uVar17 * 6 + -6;
            uVar6 = puVar3[1];
            uVar7 = puVar3[2];
            uVar8 = puVar3[3];
            *puVar12 = *puVar3;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar8;
            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar18 + uVar17 * 6 + -2);
            uVar16 = *(uint *)(param_1 + 0x1b8);
          }
          uVar17 = (ulonglong)(uVar16 - 1);
          *(uint *)(param_1 + 0x1b8) = uVar16 - 1;
        }
        else {
          puVar12 = puVar12 + 6;
        }
        puVar18 = *(undefined4 **)(param_1 + 0x1b0);
      } while (puVar12 != *(undefined4 **)(param_1 + 0x1b0) + uVar17 * 6);
    }
    lVar14 = 0;
    if (lVar11 != 0) {
      cVar10 = CAkBus::IsMixingBus(lVar11);
      if (cVar10 == '\0') {
        local_c8 = 0;
        uStack_c0 = 0;
        lStack_90 = (ulonglong)uStack_bc << 0x20;
        uStack_84 = (undefined4)(local_b8 >> 0x20);
        local_b8 = local_b8 & 0xffffffff00000000;
        uStack_b0 = CONCAT31(uStack_b0._1_3_,0xff);
        local_a8 = CONCAT31(local_a8._1_3_,0xff);
        local_98 = 0;
        lStack_a0 = 0;
        local_88 = 0;
        uStack_80 = uStack_b0;
        uStack_7c = uStack_ac;
        local_78 = local_a8;
        uStack_74 = uStack_a4;
        uStack_70 = 0;
        uStack_6c = 0;
        fVar23 = (float)FUN_143145b30(lVar11,&local_98,&local_res8);
        fVar23 = local_res8 + fVar23;
      }
      else {
        fVar23 = 0.0;
      }
      fVar24 = 0.0;
      fVar25 = 0.0;
      cVar10 = CAkBus::IsMixingBus(lVar11);
      lVar14 = 0;
      if (cVar10 == '\0') {
        local_c8 = 0;
        uStack_c0 = 0;
        lStack_90 = (ulonglong)uStack_bc << 0x20;
        uStack_84 = (undefined4)(local_b8 >> 0x20);
        local_b8 = local_b8 & 0xffffffff00000000;
        uStack_b0._0_1_ = 0xff;
        local_a8._0_1_ = 0xff;
        local_98 = 0;
        lStack_a0 = 0;
        local_88 = 0;
        uStack_80._0_1_ = 0xff;
        uStack_80._1_3_ = uStack_b0._1_3_;
        uStack_7c = uStack_ac;
        local_78._0_1_ = 0xff;
        local_78._1_3_ = local_a8._1_3_;
        uStack_74 = uStack_a4;
        uStack_70 = 0;
        uStack_6c = 0;
        fVar24 = (float)FUN_1431471b0(lVar11,&local_98,0x1a);
        local_c8 = 0;
        uStack_c0 = 0;
        lStack_90 = (ulonglong)uStack_bc << 0x20;
        uStack_84 = (undefined4)(local_b8 >> 0x20);
        local_b8 = local_b8 & 0xffffffff00000000;
        uStack_b0 = CONCAT31(uStack_b0._1_3_,0xff);
        local_a8 = CONCAT31(local_a8._1_3_,0xff);
        local_98 = 0;
        lStack_a0 = 0;
        local_88 = 0;
        uStack_80 = uStack_b0;
        uStack_7c = uStack_ac;
        local_78 = local_a8;
        uStack_74 = uStack_a4;
        uStack_70 = 0;
        uStack_6c = 0;
        fVar25 = (float)FUN_1431471b0(lVar11,&local_98,0x19);
      }
    }
  }
  else {
    uVar9 = param_2[1];
    lVar14 = param_2[0x18];
    bVar20 = lVar11 == 0;
    *(undefined8 *)(param_1 + 0x68) = *param_2;
    *(undefined8 *)(param_1 + 0x70) = uVar9;
    uVar9 = param_2[3];
    *(undefined8 *)(param_1 + 0x78) = param_2[2];
    *(undefined8 *)(param_1 + 0x80) = uVar9;
    uVar9 = param_2[5];
    *(undefined8 *)(param_1 + 0x88) = param_2[4];
    *(undefined8 *)(param_1 + 0x90) = uVar9;
    uVar9 = param_2[7];
    *(undefined8 *)(param_1 + 0x98) = param_2[6];
    *(undefined8 *)(param_1 + 0xa0) = uVar9;
    uVar9 = param_2[9];
    *(undefined8 *)(param_1 + 0xa8) = param_2[8];
    *(undefined8 *)(param_1 + 0xb0) = uVar9;
    uVar9 = param_2[0xb];
    *(undefined8 *)(param_1 + 0xb8) = param_2[10];
    *(undefined8 *)(param_1 + 0xc0) = uVar9;
    uVar9 = param_2[0xd];
    *(undefined8 *)(param_1 + 200) = param_2[0xc];
    *(undefined8 *)(param_1 + 0xd0) = uVar9;
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x74);
    uVar7 = *(undefined4 *)(param_2 + 0xf);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xe);
    *(undefined4 *)(param_1 + 0xdc) = uVar6;
    *(undefined4 *)(param_1 + 0xe0) = uVar7;
    *(undefined4 *)(param_1 + 0xe4) = uVar8;
    *(undefined8 *)(param_1 + 0xe8) = param_2[0x10];
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x9c);
    uVar7 = *(undefined4 *)(param_2 + 0x14);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0xa4);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x13);
    *(undefined4 *)(param_1 + 0x1c4) = uVar6;
    *(undefined4 *)(param_1 + 0x1c8) = uVar7;
    *(undefined4 *)(param_1 + 0x1cc) = uVar8;
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x15);
    uVar16 = *(uint *)(param_2 + 0x12);
    uVar17 = (ulonglong)uVar16;
    if ((uVar16 != 0) &&
       ((((uVar16 < *(uint *)(param_1 + 0x1b8) || (uVar16 <= *(uint *)(param_1 + 0x1bc))) ||
         (cVar10 = FUN_143147540(param_1 + 0x1b0), cVar10 != '\0')) &&
        (*(uint *)(param_1 + 0x1b8) = uVar16, uVar16 != 0)))) {
      lVar11 = 0;
      do {
        lVar4 = param_2[0x11];
        lVar1 = lVar11 + 0x18;
        lVar5 = *(longlong *)(param_1 + 0x1b0);
        puVar12 = (undefined4 *)(lVar4 + -0x18 + lVar1);
        uVar6 = puVar12[1];
        uVar7 = puVar12[2];
        uVar8 = puVar12[3];
        puVar18 = (undefined4 *)(lVar11 + lVar5);
        *puVar18 = *puVar12;
        puVar18[1] = uVar6;
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        *(undefined8 *)(lVar11 + 0x10 + lVar5) = *(undefined8 *)(lVar4 + -8 + lVar1);
        uVar17 = uVar17 - 1;
        lVar11 = lVar1;
      } while (uVar17 != 0);
    }
    fVar23 = *(float *)(param_2 + 0x19);
  }
  pfVar15 = (float *)(param_1 + 0x68);
  if ((*(byte *)(param_1 + 0x17c) & 0x40) == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x18);
    CAkParameterNodeBase::UpdateBaseParams
              (*(undefined8 *)(param_1 + 0x170),puVar2,param_1 + 0x118,
               *(undefined8 *)(param_1 + 0x168));
    if (*(longlong *)(param_1 + 0x210) != 0) {
      FUN_14316eb20();
    }
    *(undefined4 *)(param_1 + 0x128) = 0x42ca0000;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    ppvVar13 = (void **)(param_2 + 0x16);
    if (param_2 == (undefined8 *)0x0) {
      ppvVar13 = (void **)0x0;
    }
    ppvVar19 = &local_d8;
    if (((int)*(char *)(param_1 + 0x17c) & 4U) != 0) {
      ppvVar19 = ppvVar13;
    }
    if (lVar14 != *(longlong *)(param_1 + 0x170)) {
      *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0xfd;
      *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xfe;
      *(undefined2 *)(param_1 + 0xe9) = 0;
      *(undefined1 *)(param_1 + 0xeb) = 0;
      ppvVar13 = (void **)(param_1 + 0x1c0);
      if ((*(byte *)(param_1 + 0x17c) & 2) != 0) {
        ppvVar13 = (void **)0x0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x170) + 0x150))
                (*(longlong **)(param_1 + 0x170),pfVar15,
                 ((int)*(char *)(param_1 + 0x17c) >> 0x1f & 0x20U) - 0x21,param_1 + 0x1b0,puVar2,
                 ppvVar13,ppvVar19,bVar20,lVar14);
    }
    fVar22 = *(float *)(param_1 + 0x1cc) + *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x1c8) + *(float *)(param_1 + 0x70);
    fVar21 = *(float *)(param_1 + 0x1d0) + *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0xf4) = fVar22;
    *(float *)(param_1 + 0xfc) = fVar21;
    *(float *)(param_1 + 0x74) = fVar22 + *(float *)(param_1 + 0xf8);
    *(float *)(param_1 + 0xf0) = *pfVar15;
    *(float *)(param_1 + 0x78) = fVar21 + *(float *)(param_1 + 0x100);
    lVar14 = *(longlong *)(param_1 + 0x1b0);
    fVar21 = 1.0;
    lVar11 = lVar14 + (ulonglong)*(uint *)(param_1 + 0x1b8) * 0x18;
    for (; lVar14 != lVar11; lVar14 = lVar14 + 0x18) {
      fVar21 = fVar21 * *(float *)(lVar14 + 0x10);
    }
    fVar21 = fVar21 * *(float *)(param_1 + 0x228) * *(float *)(param_1 + 0x22c);
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xef;
    *(float *)(param_1 + 0x6c) = fVar21;
    *pfVar15 = *(float *)(param_1 + 0x1c0) + *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x90) = fVar23 + *(float *)(param_1 + 0x90);
    *(float *)(param_1 + 0x94) = fVar24 + *(float *)(param_1 + 0x94);
    *(float *)(param_1 + 0x98) = fVar25 + *(float *)(param_1 + 0x98);
    FUN_1431758b0(*(undefined8 *)(param_1 + 0x170),&local_res8,*puVar2);
    if ((local_res8 != *(float *)(param_1 + 0x294)) || (fStackX_c != *(float *)(param_1 + 0x298))) {
      *(ulonglong *)(param_1 + 0x294) = CONCAT44(fStackX_c,local_res8);
      FUN_14317f780(param_1 + -0x18);
    }
    if ((*(byte *)(param_1 + 0x17c) & 4) == 0) {
      if (*(longlong *)(param_1 + 0x58) != 0) {
        CAkModulatorPBIData::ClearModulationSources();
      }
      if (*(int *)(ppvVar19 + 1) != 0) {
        uStack_c0 = *(undefined4 *)(param_1 + 0x2b4);
        local_b8 = *(ulonglong *)(param_1 + 0x2b8);
        uStack_b0 = *(undefined4 *)(param_1 + 0x28);
        local_c8 = *puVar2;
        local_a8 = *(undefined4 *)(param_1 + 0x2a0);
        uStack_ac = *(undefined4 *)(param_1 + 0x1e8);
        uStack_a4 = *(byte *)(param_1 + 0x284) & 1;
        lStack_a0 = param_1 + -0x18;
        CAkModulatorMgr::Trigger(DAT_146b50ae0,ppvVar19,&local_c8,param_1 + 0x58);
      }
      *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 4;
    }
    if (local_d8 != (void *)0x0) {
      local_d0 = local_d0 & 0xffffffff00000000;
      AK::MemoryMgr::Free(g_DefaultPoolId,local_d8);
    }
  }
  *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 3;
  return;
}



// FUNCTION 14317efb0 FUN_14317efb0 body=42 status=ok
// SIG undefined FUN_14317efb0(void)

void FUN_14317efb0(longlong param_1,undefined4 param_2,byte param_3)

{
  *(byte *)(param_1 + 0x296) = *(byte *)(param_1 + 0x296) & 0xfe;
  *(byte *)(param_1 + 0x296) = *(byte *)(param_1 + 0x296) | param_3;
  *(byte *)(param_1 + 0x295) = *(byte *)(param_1 + 0x295) | 0xc0;
  *(undefined4 *)(param_1 + 0x28c) = param_2;
  CAkLEngineCmds::EnqueueAction(5,param_1);
  return;
}



// FUNCTION 14317efe0 FUN_14317efe0 body=88 status=ok
// SIG undefined FUN_14317efe0(void)

void FUN_14317efe0(longlong param_1,int param_2,byte param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_1467bdcac;
  *(byte *)(param_1 + 0x296) = *(byte *)(param_1 + 0x296) & 0xfe;
  *(byte *)(param_1 + 0x295) = *(byte *)(param_1 + 0x295) & 0x3f;
  *(byte *)(param_1 + 0x296) = *(byte *)(param_1 + 0x296) | param_3;
  *(byte *)(param_1 + 0x295) = *(byte *)(param_1 + 0x295) | 0x40;
  *(int *)(param_1 + 0x28c) = (int)((longlong)(uVar1 * (longlong)param_2) / 1000);
  CAkLEngineCmds::EnqueueAction(5,param_1);
  return;
}



// FUNCTION 14317f040 SetMuteMapEntry body=246 status=ok
// SIG undefined SetMuteMapEntry(void)

int CAkPBI::SetMuteMapEntry(longlong param_1,longlong *param_2,float param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  float local_res18 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  local_18 = (undefined4)*param_2;
  uStack_14 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_10 = *(uint *)(param_2 + 1);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_res18[0] = param_3;
  if (param_3 == 1.0) {
    plVar5 = *(longlong **)(param_1 + 0x1c8);
    uVar6 = *(uint *)(param_1 + 0x1d0);
    plVar3 = plVar5 + (ulonglong)uVar6 * 3;
    if (plVar5 != plVar3) {
      do {
        if ((*plVar5 == *param_2) && (((*(uint *)(plVar5 + 1) ^ uStack_10) & 1) == 0)) break;
        plVar5 = plVar5 + 3;
      } while (plVar5 != plVar3);
      if (plVar5 != plVar3) {
        if (plVar5 < plVar3 + -3) {
          uVar2 = ((ulonglong)((longlong)(plVar3 + -3) + (-1 - (longlong)plVar5)) / 0x18 + 1) * 3 &
                  0x1fffffffffffffff;
          plVar3 = plVar5 + 3;
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *plVar5 = *plVar3;
            plVar3 = plVar3 + 1;
            plVar5 = plVar5 + 1;
          }
          uVar6 = *(uint *)(param_1 + 0x1d0);
        }
        *(uint *)(param_1 + 0x1d0) = uVar6 - 1;
      }
    }
    iVar4 = 1;
  }
  else {
    lVar1 = FUN_143178370(param_1 + 0x1c8,&local_18,local_res18);
    iVar4 = 2 - (uint)(lVar1 != 0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x18) + 0x50))(param_1 + 0x18);
  return iVar4;
}



// FUNCTION 14317f140 FUN_14317f140 body=142 status=ok
// SIG undefined FUN_14317f140(void)

bool FUN_14317f140(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte local_res8 [32];
  
  bVar1 = *(byte *)(param_1 + 0x293);
  if (-1 < (char)bVar1) {
    *(byte *)(param_1 + 0x293) = bVar1 | 0x80;
    iVar3 = CAkParameterNode::GetVirtualBehavior(*(undefined8 *)(param_1 + 0x188),local_res8);
    if (iVar3 == 3) {
      cVar2 = FUN_143176c10(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x218));
      iVar3 = (cVar2 != '\0') + 1;
    }
    *(byte *)(param_1 + 0x293) = *(byte *)(param_1 + 0x293) & 0x80;
    *(byte *)(param_1 + 0x293) =
         *(byte *)(param_1 + 0x293) | ((byte)iVar3 & 0xf) << 3 | local_res8[0] & 7;
    return iVar3 == 0;
  }
  return (bVar1 >> 3 & 0xf) == 0;
}



// FUNCTION 14317f1d0 FUN_14317f1d0 body=8 status=ok
// SIG undefined FUN_14317f1d0(void)

void FUN_14317f1d0(longlong param_1)

{
  *(byte *)(param_1 + 0x292) = *(byte *)(param_1 + 0x292) & 0x87;
  return;
}



// FUNCTION 14317f1e0 FUN_14317f1e0 body=641 status=ok
// SIG undefined FUN_14317f1e0(void)

void FUN_14317f1e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar1 = param_1 + -3;
  FUN_14317d8f0(puVar1);
  puVar12 = (undefined8 *)0x0;
  if (param_1[0x3e] != 0) {
    puVar10 = param_1 + -1;
    if (puVar1 == (undefined8 *)0x0) {
      puVar10 = puVar12;
    }
    FUN_1431501b0(DAT_146b50af0,param_1[0x3e],puVar10);
  }
  if (param_1[0x3f] != 0) {
    puVar10 = param_1 + -1;
    if (puVar1 == (undefined8 *)0x0) {
      puVar10 = puVar12;
    }
    FUN_1431501b0(DAT_146b50af0,param_1[0x3f],puVar10);
  }
  if ((*(byte *)((longlong)param_1 + 0x27c) & 1) != 0) {
    *(byte *)((longlong)param_1 + 0x27c) = *(byte *)((longlong)param_1 + 0x27c) & 0xfe;
  }
  if (*(int *)(param_1 + 0x3d) != 0) {
    FUN_1431519b0(DAT_146b50b00,puVar1);
    CAkPlayingMgr::Remove(DAT_146b50b00,*(undefined4 *)(param_1 + 0x3d),puVar1);
  }
  CAkScopedRtpcObj::Term(param_1 + 0x30,param_1 + 3);
  if ((void *)param_1[0x36] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x37) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x36]);
    param_1[0x36] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  }
  lVar3 = param_1[0x2e];
  puVar10 = param_1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar10 = puVar12;
  }
  lVar4 = *(longlong *)(lVar3 + 0x78);
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)(lVar4 + 0x18);
    puVar8 = puVar5;
    puVar9 = puVar5;
    puVar11 = puVar12;
    if (puVar5 == (undefined8 *)0x0) {
LAB_14317f303:
      if (puVar9 != (undefined8 *)0x0) {
        if (puVar9 == puVar5) {
          *(undefined8 *)(lVar4 + 0x18) = puVar9[10];
        }
        else {
          puVar11[10] = puVar9[10];
        }
      }
    }
    else {
      do {
        puVar9 = puVar8;
        if (puVar9 == puVar10) goto LAB_14317f303;
        puVar8 = (undefined8 *)puVar9[10];
        puVar11 = puVar9;
      } while ((undefined8 *)puVar9[10] != (undefined8 *)0x0);
    }
    lVar4 = *(longlong *)(lVar3 + 0x78);
    if (((((*(short *)(lVar4 + 0x50) < 1) && (*(short *)(lVar4 + 0x54) < 1)) &&
         (*(short *)(lVar4 + 0x48) == 0)) &&
        ((*(short *)(lVar4 + 0x4a) == 0 && (*(longlong *)(lVar4 + 0x18) == 0)))) &&
       (*(int *)(lVar4 + 8) == 0)) {
      FUN_143174500(lVar3);
    }
  }
  if (param_1[0x55] != 0) {
    CAkSource::UnLockDataPtr(param_1[0x41]);
    param_1[0x55] = 0;
  }
  puVar10 = (undefined8 *)param_1[0x35];
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,0);
    param_1[0x35] = 0;
  }
  lVar3 = param_1[0x57];
  uVar2 = *(uint *)(param_1[0x41] + 0xc);
  if (lVar3 != 0) {
    puVar10 = *(undefined8 **)(lVar3 + 0x40);
    do {
      puVar5 = puVar12;
      puVar12 = puVar10;
      if (puVar12 == (undefined8 *)0x0) goto LAB_14317f3ec;
      puVar10 = (undefined8 *)*puVar12;
    } while ((undefined8 *)puVar12[2] != puVar1);
    if (puVar12 == *(undefined8 **)(lVar3 + 0x40)) {
      *(undefined8 **)(lVar3 + 0x40) = puVar10;
    }
    else {
      *puVar5 = puVar10;
    }
    if (puVar12 == *(undefined8 **)(lVar3 + 0x48)) {
      *(undefined8 **)(lVar3 + 0x48) = puVar5;
    }
    *puVar12 = *(undefined8 *)(lVar3 + 0x50);
    *(int *)(lVar3 + 100) = *(int *)(lVar3 + 100) + -1;
    *(undefined8 **)(lVar3 + 0x50) = puVar12;
LAB_14317f3ec:
    if (((*(undefined8 **)(lVar3 + 0x10) != (undefined8 *)0x0) && (*(int *)(lVar3 + 100) == 0)) &&
       (*(int *)(lVar3 + 0x8c) == 0)) {
      (**(code **)**(undefined8 **)(lVar3 + 0x10))();
    }
    CAkMidiNoteState::Release(param_1[0x57]);
    param_1[0x57] = 0;
  }
  lVar7 = g_DefaultPoolId;
  if (((uVar2 & 0x100) != 0) && (pvVar6 = (void *)param_1[0x41], pvVar6 != (void *)0x0)) {
    CAkSource::~CAkSource(pvVar6);
    AK::MemoryMgr::Free(lVar7,pvVar6);
  }
  FUN_14317ca80(param_1,0);
  return;
}



// FUNCTION 14317f470 FUN_14317f470 body=189 status=ok
// SIG undefined FUN_14317f470(void)

void FUN_14317f470(longlong param_1,int param_2,undefined4 param_3,char param_4)

{
  if ((param_2 - 0x1000000U & 0xfeffffff) == 0) {
    if ((param_4 != '\0') && (*(undefined8 *)(param_1 + 0x1f8) = 0, param_2 == 0x2000000)) {
      (*(code *)**(undefined8 **)(param_1 + -0x10))(param_1 + -0x10,0,1);
    }
    *(byte *)(param_1 + 0x184) = *(byte *)(param_1 + 0x184) | 0x10;
    *(undefined4 *)(param_1 + 0x230) = param_3;
    return;
  }
  if ((param_2 + 0xfc000000U & 0xfbffffff) == 0) {
    if ((param_4 != '\0') && (*(undefined8 *)(param_1 + 0x200) = 0, param_2 == 0x4000000)) {
      (**(code **)(*(longlong *)(param_1 + -0x10) + 0x18))(param_1 + -0x10,1);
    }
    *(byte *)(param_1 + 0x184) = *(byte *)(param_1 + 0x184) | 0x10;
    *(undefined4 *)(param_1 + 0x234) = param_3;
    return;
  }
  *(byte *)(param_1 + 0x184) = *(byte *)(param_1 + 0x184) | 0x10;
  return;
}



// FUNCTION 14317f530 FUN_14317f530 body=165 status=ok
// SIG undefined FUN_14317f530(void)

void FUN_14317f530(longlong param_1,longlong param_2)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    CAkModulatorPBIData::ClearModulationSources();
  }
  if (*(int *)(param_2 + 8) != 0) {
    local_30 = *(undefined4 *)(param_1 + 0x2cc);
    local_28 = *(undefined8 *)(param_1 + 0x2d0);
    local_20 = *(undefined4 *)(param_1 + 0x40);
    local_38 = *(undefined8 *)(param_1 + 0x30);
    local_18 = *(undefined4 *)(param_1 + 0x2b8);
    local_1c = *(undefined4 *)(param_1 + 0x200);
    local_14 = *(byte *)(param_1 + 0x29c) & 1;
    local_10 = param_1;
    CAkModulatorMgr::Trigger(DAT_146b50ae0,param_2,&local_38,param_1 + 0x70);
  }
  *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) | 4;
  return;
}



// FUNCTION 14317f5e0 FUN_14317f5e0 body=154 status=ok
// SIG undefined FUN_14317f5e0(void)

void FUN_14317f5e0(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  uint uStack_10;
  
  plVar3 = (longlong *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  plVar2 = plVar3 + (ulonglong)uVar4 * 3;
  if (plVar3 != plVar2) {
    uStack_10 = (uint)param_2[1];
    do {
      if ((*plVar3 == *param_2) && (((*(uint *)(plVar3 + 1) ^ uStack_10) & 1) == 0)) break;
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      if (plVar3 < plVar2 + -3) {
        uVar1 = ((ulonglong)((longlong)(plVar2 + -3) + (-1 - (longlong)plVar3)) / 0x18 + 1) * 3 &
                0x1fffffffffffffff;
        plVar2 = plVar3 + 3;
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *plVar3 = *plVar2;
          plVar2 = plVar2 + 1;
          plVar3 = plVar3 + 1;
        }
        uVar4 = *(uint *)(param_1 + 1);
      }
      *(uint *)(param_1 + 1) = uVar4 - 1;
    }
  }
  return;
}



// FUNCTION 14317f680 FUN_14317f680 body=26 status=ok
// SIG undefined FUN_14317f680(void)

void FUN_14317f680(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong *plVar11;
  void *_Dst;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStackX_18 [8];
  longlong *plStackX_20;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined8 uStack_70;
  uint uStack_68;
  longlong *plStack_60;
  undefined2 uStack_58;
  
  if (((*(byte *)(param_1 + 0x194) & 0x40) != 0) ||
     (lVar2 = *(longlong *)(param_1 + 0x228), lVar2 == 0)) {
    return;
  }
  if (param_2 == 0xffffffff) {
    return;
  }
  plVar9 = (longlong *)0x0;
  plVar15 = (longlong *)0x0;
  bVar3 = false;
  lVar8 = (longlong)(int)(param_2 + 1);
  bVar4 = false;
  if (lVar8 < 4) {
    plVar12 = (longlong *)(lVar2 + 0x200 + lVar8 * 8);
    do {
      if ((longlong *)*plVar12 != (longlong *)0x0) {
        bVar4 = true;
        plVar9 = (longlong *)*plVar12;
        break;
      }
      lVar8 = lVar8 + 1;
      plVar12 = plVar12 + 1;
    } while (lVar8 < 4);
  }
  lVar8 = (longlong)(int)(param_2 - 1);
  plVar12 = (longlong *)(lVar2 + 0x178);
  if (plVar9 != (longlong *)0x0) {
    plVar12 = plVar9;
  }
  if (-1 < (int)(param_2 - 1)) {
    plVar9 = (longlong *)(lVar2 + 0x200 + lVar8 * 8);
    do {
      if ((longlong *)*plVar9 != (longlong *)0x0) {
        bVar3 = true;
        plVar15 = (longlong *)*plVar9;
        break;
      }
      plVar9 = plVar9 + -1;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  plVar9 = (longlong *)(lVar2 + 0x80);
  if (plVar15 != (longlong *)0x0) {
    plVar9 = plVar15;
  }
  plVar15 = *(longlong **)(*(longlong *)(lVar2 + 0x238) + 0x18);
  uStack_70 = plVar15[0x46];
  uStack_68 = *(uint *)(plVar15 + 0x47);
  plStackX_20 = plVar15;
  if (bVar3) {
    puVar10 = (uint *)(**(code **)(*plVar9 + 0x80))(plVar9,auStackX_18);
    uStack_70 = (ulonglong)*puVar10 << 0x20;
    uVar14 = *puVar10;
  }
  else {
    uStack_70._4_4_ = (uint)((ulonglong)uStack_70 >> 0x20);
    uVar14 = uStack_70._4_4_;
  }
  uStack_70._0_4_ = DAT_1467bdcac;
  plVar11 = *(longlong **)(lVar2 + ((ulonglong)param_2 + 0x40) * 8);
  puVar1 = (undefined8 *)(lVar2 + ((ulonglong)param_2 + 0x40) * 8);
  uStack_68 = ((uVar14 & 0xff) * 0x20 | 0xa000) << 3 | uStack_68 & 0xfffd0020 | 0x20;
  if (plVar11 != (longlong *)0x0) {
    puVar10 = (uint *)(**(code **)(*plVar11 + 0x80))(plVar11,auStackX_18);
    uVar14 = *puVar10;
    if ((int)param_2 < 4) {
      plVar15 = (longlong *)(lVar2 + (longlong)(int)param_2 * 8 + 0x200);
      uVar13 = param_2;
      do {
        if ((((longlong *)*plVar15 != (longlong *)0x0) &&
            (cVar6 = (**(code **)(*(longlong *)*plVar15 + 0x60))(), cVar6 != '\0')) &&
           (uVar13 != param_2)) break;
        uVar13 = uVar13 + 1;
        plVar15 = plVar15 + 1;
      } while ((int)uVar13 < 4);
    }
    CAkVPLNode::Disconnect(plVar12);
    (**(code **)(*plVar11 + 0x50))(plVar11);
    lVar5 = g_LEngineDefaultPoolId;
    (**(code **)*plVar11)(plVar11,0);
    AK::MemoryMgr::Free(lVar5,plVar11);
    *puVar1 = 0;
    plVar15 = plStackX_20;
  }
  plVar11 = (longlong *)0x0;
  plStack_60 = (longlong *)0x0;
  (**(code **)(*(longlong *)plVar15[0x31] + 0x1c8))
            ((longlong *)plVar15[0x31],param_2,&plStack_60,plVar15[6]);
  uVar13 = uStack_70._4_4_;
  if (plStack_60 == (longlong *)0x0) {
LAB_14316fcde:
    if ((((char)uVar13 != (char)uVar14) || (((uVar13 ^ uVar14) & 0xf00) != 0)) ||
       (((uVar13 ^ uVar14) & 0xfffff000) != 0)) {
      if (bVar4) {
        FUN_14316f910(lVar2,param_2 + 1);
        goto LAB_14316fd4a;
      }
      CAkSrcLpHpFilter::Term(lVar2 + 0x188);
      CAkSrcLpHpFilter::Init(lVar2 + 0x188,uVar13,0);
      *(uint *)(lVar2 + 0x298) = uVar13;
    }
    if (plVar11 != (longlong *)0x0) {
      plVar9 = plVar11;
    }
  }
  else {
    uStack_78 = 1;
    plStackX_20 = (longlong *)0x0;
    uStack_80 = 0;
    uStack_76 = 0;
    iVar7 = FUN_143128650((int)plStack_60[6],&plStackX_20,&uStack_80);
    if (iVar7 == 1) {
      iVar7 = CAkEffectsMgr::ValidatePluginInfo((int)plStack_60[6],3,&uStack_80);
      if (iVar7 == 0) {
        if ((char)uStack_78 == '\0') {
          _Dst = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x148);
          if (_Dst != (void *)0x0) {
            _guard_xfg_dispatch_icall_nop(_Dst,0,0x148);
            plVar11 = (longlong *)CAkVPLFilterNodeOutOfPlace::CAkVPLFilterNodeOutOfPlace(_Dst);
LAB_14316fc54:
            if (plVar11 != (longlong *)0x0) {
              iVar7 = (**(code **)(*plVar11 + 0x48))
                                (plVar11,plStackX_20,&plStack_60,param_2,lVar2,&uStack_70);
              if (iVar7 == 1) {
                *puVar1 = plVar11;
                *(undefined2 *)((longlong)plVar11 + 0x8a) = uStack_58;
                (**(code **)(*plVar11 + 0x40))(plVar11,plVar9);
                puVar10 = (uint *)(**(code **)(*plVar11 + 0x80))(plVar11,auStackX_18);
                uVar13 = *puVar10;
                goto LAB_14316fcde;
              }
              (**(code **)(*plVar11 + 0x50))();
              lVar5 = g_LEngineDefaultPoolId;
              (**(code **)*plVar11)(plVar11,0);
              AK::MemoryMgr::Free(lVar5,plVar11);
            }
          }
        }
        else {
          if (uStack_78._1_1_ != '\0') goto LAB_14316fb72;
          plVar11 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0xb0);
          if (plVar11 != (longlong *)0x0) {
            _guard_xfg_dispatch_icall_nop(plVar11,0,0xb0);
            plVar11[5] = 0;
            plVar11[6] = 0;
            plVar11[7] = 0;
            *(undefined4 *)(plVar11 + 8) = 0;
            *(undefined4 *)(plVar11 + 9) = 0;
            *(undefined1 *)(plVar11 + 10) = 0xff;
            *(undefined1 *)(plVar11 + 0xb) = 0xff;
            plVar11[0xc] = 0;
            plVar11[0xd] = 0;
            plVar11[0xe] = 0;
            plVar11[4] = (longlong)&PTR__scalar_deleting_destructor__145aca6e8;
            plVar11[0xf] = 0;
            *(undefined4 *)(plVar11 + 0x10) = 0xffffffff;
            *plVar11 = (longlong)&PTR__scalar_deleting_destructor__145aca710;
            *(undefined1 *)(plVar11 + 0x15) = 0;
            *(uint *)(plVar11 + 0x15) = *(uint *)(plVar11 + 0x15) & 0xff;
            goto LAB_14316fc54;
          }
        }
      }
      else {
LAB_14316fb72:
        (**(code **)(*plStackX_20 + 8))(plStackX_20,&PTR_PTR_1467be108);
      }
    }
  }
  (**(code **)(*plVar12 + 0x40))(plVar12,plVar9);
LAB_14316fd4a:
  if (plStack_60 != (longlong *)0x0) {
    (**(code **)(*plStack_60 + 0x10))();
  }
  return;
}



// FUNCTION 14317f6a0 FUN_14317f6a0 body=222 status=ok
// SIG undefined FUN_14317f6a0(void)

void FUN_14317f6a0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 local_28 [2];
  undefined8 local_20;
  longlong *local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  if ((*(int *)(param_1 + 0x2e0) == 0) && ((*(byte *)(param_1 + 0x194) & 0x40) == 0)) {
    local_20 = *(undefined8 *)(param_1 + 0x30);
    local_10 = 1;
    local_28[0] = 0;
    local_c = 0x100;
    plVar1 = (longlong *)(param_1 + 0x2d8);
    local_18 = plVar1;
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x118))
              (*(longlong **)(param_1 + 0x188),local_28,0,0);
    FUN_143173890(plVar1,&DAT_146b50ff0);
    plVar2 = (longlong *)*plVar1;
    if (plVar2 != plVar2 + *(uint *)(param_1 + 0x2e0)) {
      do {
        CAkLimiter::Add(*plVar2,param_1);
        if ((*(byte *)(param_1 + 0x296) & 4) != 0) {
          *(short *)(*plVar2 + 0x2a) = *(short *)(*plVar2 + 0x2a) + 1;
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != (longlong *)(*plVar1 + (ulonglong)*(uint *)(param_1 + 0x2e0) * 8));
    }
  }
  return;
}



// FUNCTION 14317f780 FUN_14317f780 body=201 status=ok
// SIG undefined FUN_14317f780(void)

void FUN_14317f780(longlong param_1,float param_2)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if (100.0 <= param_2) {
    param_2 = 100.0;
  }
  if (param_2 != *(float *)(param_1 + 0x2a0)) {
    puVar2 = *(undefined8 **)(param_1 + 0x2d8);
    if (puVar2 != puVar2 + *(uint *)(param_1 + 0x2e0)) {
      do {
        FUN_143179fc0(*puVar2,param_2,param_1);
        puVar2 = puVar2 + 1;
      } while (puVar2 != (undefined8 *)
                         (*(longlong *)(param_1 + 0x2d8) + (ulonglong)*(uint *)(param_1 + 0x2e0) * 8
                         ));
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    fVar3 = 100.0;
    if (param_2 <= 100.0) {
      fVar3 = param_2;
    }
    iVar1 = _finite((double)fVar3);
    if (iVar1 != 0) {
      *(float *)(param_1 + 0x2a0) = fVar3;
    }
  }
  return;
}



// FUNCTION 14317f850 FUN_14317f850 body=181 status=ok
// SIG undefined FUN_14317f850(void)

void FUN_14317f850(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong *plVar2;
  float fVar3;
  undefined4 uVar4;
  
  if (*(byte *)(param_2 + 0xa0) != 0xff) {
    plVar2 = (longlong *)(((ulonglong)*(byte *)(param_2 + 0xa0) + 3) * 0x10 + param_2);
    if ((*plVar2 != 0) && (plVar2 != (longlong *)0x0)) {
      fVar3 = 0.0;
      fVar1 = *(float *)(param_1 + 0x294);
      if (*(float *)(param_1 + 0x298) != 0.0) {
        if ((*(byte *)(param_1 + 0x17c) & 1) == 0) {
          uVar4 = *(undefined4 *)(param_1 + 0xf0);
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0x68);
        }
        fVar3 = (float)FUN_14315ff90(*(float *)(param_1 + 0x298),
                                     *(undefined4 *)
                                      (*plVar2 + (ulonglong)((int)plVar2[1] - 1) * 0xc),param_1,
                                     uVar4,*(undefined8 *)(param_1 + 0x18));
      }
      FUN_14317f780(param_1 + -0x18,fVar3 + fVar1);
    }
  }
  return;
}



// FUNCTION 14317f910 FUN_14317f910 body=187 status=ok
// SIG undefined FUN_14317f910(void)

void FUN_14317f910(longlong param_1,int param_2,undefined8 param_3,float param_4)

{
  int iVar1;
  
  if (param_2 == 5) {
    *(float *)(param_1 + 0x90) = param_4 + *(float *)(param_1 + 0x90);
    return;
  }
  if (param_2 == 0x11) {
    param_4 = *(float *)(param_1 + 0x294) + param_4;
    FUN_14317f780(param_1 + -0x18,
                  (*(float *)(param_1 + 0x294) + param_4) - *(float *)(param_1 + 0x288));
    iVar1 = _finite((double)param_4);
    if (iVar1 != 0) {
      *(float *)(param_1 + 0x294) = param_4;
    }
  }
  else {
    if (4 < param_2 - 0x1dU) {
      FUN_14317cca0();
      return;
    }
    if (param_2 == 0x21) {
      *(short *)(param_1 + 0xec) = *(short *)(param_1 + 0xec) + (short)(int)param_4;
      return;
    }
    if (*(longlong *)(param_1 + 0x210) != 0) {
      FUN_14316f8f0(*(longlong *)(param_1 + 0x210),param_2 + -0x1d,(int)param_4 & 0xffff);
      return;
    }
  }
  return;
}



// FUNCTION 14317f9d0 FUN_14317f9d0 body=250 status=ok
// SIG undefined FUN_14317f9d0(void)

void FUN_14317f9d0(longlong param_1)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  
  *(undefined4 *)(param_1 + 0x140) = 0x42ca0000;
  lVar5 = AkPositioningParams::GetRawAttenuation(param_1 + 0x150);
  if ((lVar5 != 0) &&
     (((*(byte *)(param_1 + 0x164) & 0x40) == 0 || ((*(byte *)(param_1 + 0x194) & 8) == 0)))) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar8 = 0;
    lVar6 = lVar8;
    if (*(int *)(lVar3 + 0x40) != 0) {
      lVar6 = **(longlong **)(lVar3 + 0x38);
    }
    if (*(int *)(lVar3 + 0x40) != 0) {
      lVar8 = **(longlong **)(lVar3 + 0x38);
    }
    fVar1 = *(float *)(lVar8 + 0x40);
    uVar7 = CAkRegisteredObj::GetListeners();
    fVar9 = (float)FUN_1431605f0(lVar6 + 0x20,uVar7);
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x60))(param_1 + 0x18,lVar5,fVar9 / fVar1);
  }
  if ((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_1 + 0x120) != 0)) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x180) + 0x38);
    CAkPath::SetIsLooping(*(longlong *)(param_1 + 0x120),uVar2 >> 0x1f);
    if (((int)uVar2 < 0) && ((*(uint *)(*(longlong *)(param_1 + 0x120) + 0x28) >> 1 & 1) != 0)) {
      cVar4 = FUN_141a19570();
      if (cVar4 != '\0') {
        FUN_14317ca40(param_1 + 0x18);
      }
    }
  }
  return;
}



// FUNCTION 14317fad0 FUN_14317fad0 body=254 status=ok
// SIG undefined FUN_14317fad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317fad0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  uint local_res8 [8];
  
  if ((*(byte *)(param_1 + 0x296) & 4) == 0) {
    *(byte *)(param_1 + 0x296) = *(byte *)(param_1 + 0x296) | 4;
    plVar5 = *(longlong **)(param_1 + 0x2d8);
    if (plVar5 != plVar5 + *(uint *)(param_1 + 0x2e0)) {
      do {
        lVar2 = *plVar5;
        plVar5 = plVar5 + 1;
        *(short *)(lVar2 + 0x2a) = *(short *)(lVar2 + 0x2a) + 1;
      } while (plVar5 != (longlong *)
                         (*(longlong *)(param_1 + 0x2d8) + (ulonglong)*(uint *)(param_1 + 0x2e0) * 8
                         ));
    }
    bVar1 = *(byte *)(param_1 + 0x293);
    if ((char)bVar1 < '\0') {
      local_res8[0] = bVar1 & 7;
      uVar4 = bVar1 >> 3 & 0xf;
    }
    else {
      *(byte *)(param_1 + 0x293) = bVar1 | 0x80;
      uVar4 = CAkParameterNode::GetVirtualBehavior(*(undefined8 *)(param_1 + 0x188),local_res8);
      if (uVar4 == 3) {
        cVar3 = FUN_143176c10(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x218));
        uVar4 = (cVar3 != '\0') + 1;
      }
      *(byte *)(param_1 + 0x293) = *(byte *)(param_1 + 0x293) & 0x80;
      *(byte *)(param_1 + 0x293) =
           *(byte *)(param_1 + 0x293) | ((byte)uVar4 & 0xf) << 3 | (byte)local_res8[0] & 7;
    }
    if ((uVar4 == 2) && (local_res8[0] != 1)) {
      FUN_143160910();
    }
    _DAT_146b50f54 = _DAT_146b50f54 + 1;
  }
  return;
}



// FUNCTION 14317fbd0 FUN_14317fbd0 body=67 status=ok
// SIG undefined FUN_14317fbd0(void)

void FUN_14317fbd0(longlong param_1)

{
  undefined2 uVar1;
  
  uVar1 = CAkSoundBase::Loop(*(undefined8 *)(param_1 + 0x188));
  *(undefined2 *)(param_1 + 0x290) = uVar1;
  if (-1 < (char)*(byte *)(param_1 + 0x294)) {
    *(byte *)(param_1 + 0x294) = *(byte *)(param_1 + 0x294) | 0x80;
    FUN_14317ca40(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 14317fc20 FUN_14317fc20 body=121 status=ok
// SIG undefined FUN_14317fc20(void)

void FUN_14317fc20(longlong param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x294);
  if (((bVar1 & 0x10) == 0) && ((bVar1 & 0x40) == 0)) {
    *(byte *)(param_1 + 0x294) = bVar1 | 0x40;
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    if (param_2 == '\0') {
      CAkLEngineCmds::EnqueueAction(2,param_1);
    }
    if (*(longlong *)(param_1 + 0x208) != 0) {
      CAkTransitionManager::Pause(DAT_146b50af0);
    }
    FUN_14317c2e0(param_1 + 0x18,1);
    if (*(longlong *)(param_1 + 0x70) != 0) {
      CAkModulatorPBIData::Pause();
      return;
    }
  }
  return;
}



// FUNCTION 14317fca0 FUN_14317fca0 body=366 status=ok
// SIG undefined FUN_14317fca0(void)

void FUN_14317fca0(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 local_48;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  
  *(int *)((longlong)param_1 + 0x2b4) = *(int *)((longlong)param_1 + 0x2b4) + 1;
  if ((int)*param_2 == 0) {
    if ((*(byte *)((longlong)param_1 + 0x292) & 0x78) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014317fdbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1,0);
      return;
    }
    lVar3 = param_1[0x42];
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014317fe0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1,1);
      return;
    }
    local_48 = 0;
    local_1c = 4;
  }
  else {
    uVar2 = *param_2;
    lVar3 = param_1[0x42];
    local_48 = (undefined4)uVar2;
    local_1c = (undefined4)(uVar2 >> 0x20);
    if (lVar3 == 0) {
      local_28 = *(undefined4 *)((longlong)param_1 + 0x244);
      local_30 = 0x4000000;
      local_24 = 0;
      local_20 = local_48;
      plVar1 = param_1 + 2;
      local_16 = 0;
      local_18 = 0x100;
      local_38 = plVar1;
      lVar3 = FUN_14314fa00(DAT_146b50af0,&local_38,1,0);
      param_1[0x42] = lVar3;
      (**(code **)(*param_1 + 0x58))(param_1,0xe,uVar2 & 0xffffffff);
      if (lVar3 == 0) {
        (**(code **)*plVar1)(plVar1,local_30,local_24,1);
      }
      return;
    }
  }
  CAkTransitionManager::ChangeParameter(DAT_146b50af0,lVar3,0x4000000,0,local_48,local_1c,0);
  return;
}



// FUNCTION 14317fe10 FUN_14317fe10 body=258 status=ok
// SIG undefined FUN_14317fe10(void)

int FUN_14317fe10(undefined8 *param_1,int *param_2,char param_3,char param_4)

{
  int iVar1;
  undefined8 local_18;
  int local_10;
  
  if (*param_2 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    local_18 = *(undefined8 *)param_2;
    local_10 = param_2[2];
    FUN_14317d780(local_18,1,0x1000000,&local_18);
  }
  if ((param_3 == '\x01') || ((*(byte *)((longlong)param_1 + 0x292) & 7) == 1)) {
    *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) | 0x40;
    iVar1 = CAkLEngineCmds::EnqueueAction(1,param_1);
    if (param_1[0x41] != 0) {
      CAkTransitionManager::Pause(DAT_146b50af0);
    }
    FUN_14317c2e0(param_1 + 3,1);
    if (param_1[0xe] != 0) {
      CAkModulatorPBIData::Pause();
    }
  }
  else {
    iVar1 = CAkLEngineCmds::EnqueueAction(0,param_1);
  }
  if (iVar1 == 1) {
    if ((*(byte *)((longlong)param_1 + 0x292) & 7) == 2) {
      (**(code **)*param_1)(param_1,0,0);
    }
    if (param_4 != '\0') {
      DAT_146b51f48 = DAT_146b51f48 + 1;
      return 1;
    }
  }
  return iVar1;
}



// FUNCTION 14317ff20 FUN_14317ff20 body=104 status=ok
// SIG undefined FUN_14317ff20(void)

void FUN_14317ff20(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x294) & 0x10) == 0) && ((*(byte *)(param_1 + 0x294) & 0x40) != 0)) {
    FUN_14317c2e0(param_1 + 0x18,0);
    if (*(longlong *)(param_1 + 0x70) != 0) {
      CAkModulatorPBIData::Resume();
    }
    *(byte *)(param_1 + 0x294) = *(byte *)(param_1 + 0x294) & 0xbf;
    CAkLEngineCmds::EnqueueAction(3,param_1);
    if (*(longlong *)(param_1 + 0x208) != 0) {
      CAkTransitionManager::Resume(DAT_146b50af0);
      return;
    }
  }
  return;
}



// FUNCTION 14317ff90 FUN_14317ff90 body=429 status=ok
// SIG undefined FUN_14317ff90(void)

void FUN_14317ff90(longlong *param_1,ulonglong *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 local_48;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  
  if ((param_3 == '\0') && (1 < *(uint *)((longlong)param_1 + 0x2b4))) {
    *(uint *)((longlong)param_1 + 0x2b4) = *(uint *)((longlong)param_1 + 0x2b4) - 1;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  (**(code **)(*param_1 + 0x20))();
  lVar3 = param_1[0x42];
  if ((int)*param_2 == 0) {
    if (lVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x244) = 0x3f800000;
      (**(code **)(param_1[3] + 0x50))(param_1 + 3);
    }
    else {
      CAkTransitionManager::ChangeParameter(DAT_146b50af0,lVar3,0x8000000,0x3f800000,0,4,0);
    }
  }
  else {
    uVar2 = *param_2;
    local_48 = (undefined4)uVar2;
    local_1c = (undefined4)(uVar2 >> 0x20);
    if (lVar3 == 0) {
      local_28 = *(undefined4 *)((longlong)param_1 + 0x244);
      local_16 = 0;
      plVar1 = param_1 + 2;
      local_24 = 0x3f800000;
      local_30 = 0x8000000;
      local_20 = local_48;
      local_18 = 0x100;
      local_38 = plVar1;
      lVar3 = FUN_14314fa00(DAT_146b50af0,&local_38,1,0);
      param_1[0x42] = lVar3;
      (**(code **)(*param_1 + 0x58))(param_1,0xe,uVar2 & 0xffffffff);
      if (lVar3 == 0) {
        (**(code **)*plVar1)(plVar1,local_30,local_24,1);
      }
    }
    else {
      CAkTransitionManager::ChangeParameter
                (DAT_146b50af0,lVar3,0x8000000,0x3f800000,local_48,local_1c,0);
    }
  }
  return;
}



// FUNCTION 143180140 FUN_143180140 body=279 status=ok
// SIG undefined FUN_143180140(void)

void FUN_143180140(undefined8 *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_18;
  int local_10;
  
  if (((*(byte *)((longlong)param_1 + 0x294) & 0x40) == 0) &&
     ((param_1[0x42] == 0 || (cVar1 = CAkTransition::IsFadingOut(), cVar1 == '\0')))) {
    *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) | 0x20;
    if (*param_2 != 0) {
      local_18 = *(undefined8 *)param_2;
      local_10 = param_2[2];
      FUN_14317d780(param_1,1,0x2000000,&local_18);
      return;
    }
    if ((*(byte *)((longlong)param_1 + 0x292) & 0x78) == 0) {
      uVar2 = 1;
      goto LAB_14318023d;
    }
    if (param_1[0x41] != 0) {
      CAkTransitionManager::ChangeParameter(DAT_146b50af0,param_1[0x41],0x2000000,0,0,4,0);
      return;
    }
    if (param_3 == '\0') {
      return;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    if ((*(byte *)((longlong)param_1 + 0x295) & 1) == 0) {
      *(byte *)((longlong)param_1 + 0x295) = *(byte *)((longlong)param_1 + 0x295) & 0xf1 | 1;
    }
  }
  uVar2 = 0;
LAB_14318023d:
  (**(code **)*param_1)(param_1,0,uVar2);
  return;
}



// FUNCTION 143180260 FUN_143180260 body=274 status=ok
// SIG undefined FUN_143180260(void)

void FUN_143180260(longlong param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x294) & 0x10) == 0) &&
     (*(byte *)(param_1 + 0x294) = *(byte *)(param_1 + 0x294) | 0x10, (param_2 & 0xfffffffd) == 0))
  {
    if (*(longlong *)(param_1 + 0x208) != 0) {
      FUN_1431501b0(DAT_146b50af0,*(longlong *)(param_1 + 0x208),param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x208) = 0;
    }
    if (*(longlong *)(param_1 + 0x210) != 0) {
      FUN_1431501b0(DAT_146b50af0,*(longlong *)(param_1 + 0x210),param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x210) = 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0x28) >> 1 & 1) != 0) {
        puVar1 = (undefined4 *)CAkParameterNodeBase::GetPathState(*(undefined8 *)(param_1 + 0x188));
        if (*(longlong *)(puVar1 + 2) != 0) {
          AkSharedPathState::Release();
        }
        *(undefined8 *)(puVar1 + 2) = 0;
        *puVar1 = 0;
        lVar2 = *(longlong *)(param_1 + 0x120);
      }
      CAkPathManager::RemovePathUser(DAT_146b50b10,lVar2,param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    if (((*(byte *)(param_1 + 0x294) & 0x40) != 0) && (*(int *)(param_1 + 0x2e8) == 0)) {
      *(undefined4 *)(param_1 + 0x2e8) = 0xffffffff;
    }
    *(byte *)(param_1 + 0x294) = *(byte *)(param_1 + 0x294) & 0xfe | 4;
  }
  return;
}



// FUNCTION 143180380 ConsumeBuffer body=16 status=ok
// SIG undefined ConsumeBuffer(void)

void CAkVPLBQFNode::ConsumeBuffer(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    CAkSrcLpHpFilter::Execute(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 143180390 VirtualOn body=52 status=ok
// SIG undefined VirtualOn(void)

void CAkVPLBQFNode::VirtualOn(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  CAkSrcLpHpFilter::ResetRamp(param_1 + 0x10);
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  return;
}



// FUNCTION 1431803d0 ConsumeBuffer body=859 status=ok
// SIG undefined ConsumeBuffer(void)

void CAkVPLPitchNode::ConsumeBuffer(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  
  if ((int)param_2[7] == 0x11) {
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  if (*(short *)(param_1 + 0x82) == 0) {
    if ((*(short *)((longlong)param_2 + 0x12) == 0) && ((int)param_2[7] == 0x2d)) {
      *(undefined4 *)(param_2 + 7) = 0x2b;
      return;
    }
    lVar8 = param_2[1];
    *(longlong *)(param_1 + 0x70) = *param_2;
    *(longlong *)(param_1 + 0x78) = lVar8;
    lVar8 = param_2[3];
    *(longlong *)(param_1 + 0x80) = param_2[2];
    *(longlong *)(param_1 + 0x88) = lVar8;
    lVar8 = param_2[5];
    *(longlong *)(param_1 + 0x90) = param_2[4];
    *(longlong *)(param_1 + 0x98) = lVar8;
    *(longlong *)(param_1 + 0xa0) = param_2[6];
  }
  plVar1 = (longlong *)(param_1 + 0xa8);
  lVar8 = 0;
  if (*plVar1 == 0) {
    iVar5 = AkPipelineBufferBase::GetCachedBuffer
                      (plVar1,*(undefined2 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x78));
    if (iVar5 != 1) {
      *(undefined4 *)(param_2 + 7) = 2;
      return;
    }
    if (*(char *)(param_1 + 0xf2) != '\0') {
      fVar14 = *(float *)(*(longlong *)(param_1 + 0xe8) + 0x23c);
      fVar14 = ((float)DAT_1467bdcb8 * fVar14 +
               (float)*(int *)(*(longlong *)(param_1 + 0xe8) + 0x2b8)) / fVar14;
      if (fVar14 <= 0.0) {
        fVar12 = -0.5;
      }
      else {
        fVar12 = 0.5;
      }
      uVar9 = (uint)(fVar12 + fVar14);
      if (0 < (int)uVar9) {
        cVar4 = CAkResampler::IsPostDeInterleaveRequired(param_1 + 0x10);
        if (cVar4 == '\0') {
          if ((uVar9 != 0) && (*(byte *)(param_1 + 0xb0) != 0)) {
            uVar11 = (ulonglong)*(byte *)(param_1 + 0xb0);
            do {
              if (uVar9 != 0) {
                puVar10 = (undefined4 *)
                          (*plVar1 + (ulonglong)*(ushort *)(param_1 + 0xb8) * lVar8 * 4);
                for (uVar7 = (ulonglong)uVar9; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
              }
              lVar8 = lVar8 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else if (uVar9 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)*plVar1,0,(ulonglong)(*(byte *)(param_1 + 0xb0) * uVar9) << 2);
        }
        *(uint *)(param_1 + 0x3c) = uVar9;
      }
      *(undefined1 *)(param_1 + 0xf2) = 0;
    }
  }
  lVar8 = *(longlong *)(param_1 + 0xe8);
  if (((*(byte *)(lVar8 + 0x295) & 0x40) == 0) && (iVar5 = *(int *)(lVar8 + 0x28c), iVar5 != 0)) {
    uVar2 = *(ushort *)(param_1 + 0x82);
    if ((int)(uint)uVar2 <= iVar5) {
      *(byte *)(lVar8 + 0x295) = *(byte *)(lVar8 + 0x295) & 0x3f;
      *(byte *)(lVar8 + 0x296) = *(byte *)(lVar8 + 0x296) & 0xfe;
      *(uint *)(lVar8 + 0x28c) = iVar5 - (uint)uVar2;
      *(undefined2 *)(param_1 + 0x82) = 0;
      *(undefined2 *)((longlong)param_2 + 0x12) = 0;
      ReleaseInputBuffer(param_1,param_2);
      uVar13 = 0x2b;
      if (*(char *)(param_1 + 0xf0) != '\0') {
        uVar13 = 0x11;
      }
      *(undefined4 *)(param_2 + 7) = uVar13;
      return;
    }
    *(int *)(param_1 + 0x38) = iVar5;
    *(ushort *)(param_1 + 0x82) = uVar2 - (short)iVar5;
    *(byte *)(lVar8 + 0x295) = *(byte *)(lVar8 + 0x295) & 0x3f;
    *(byte *)(lVar8 + 0x296) = *(byte *)(lVar8 + 0x296) & 0xfe;
    *(undefined4 *)(lVar8 + 0x28c) = 0;
  }
  sVar3 = *(short *)(param_1 + 0x82);
  iVar5 = *(int *)(param_1 + 0x38);
  iVar6 = CAkResampler::Execute(param_1 + 0x10,param_1 + 0x70,plVar1);
  CAkVPLNode::CopyRelevantMarkers(param_1 + 0x70,plVar1,iVar5,sVar3 - *(short *)(param_1 + 0x82));
  if ((*(int *)(param_1 + 0x98) != -1) && (*(char *)(param_1 + 0xf1) == '\0')) {
    *(undefined1 *)(param_1 + 0xf1) = 1;
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0x98) + iVar5;
  }
  uVar13 = CAkResampler::GetLastRate(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xd4) = uVar13;
  if ((*(short *)(param_1 + 0x82) == 0) &&
     (ReleaseInputBuffer(param_1,param_2), *(char *)(param_1 + 0xf0) == '\x01')) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x240) != 0) {
      iVar6 = FUN_143180990(param_1);
      goto LAB_143180660;
    }
    iVar6 = 0x11;
  }
  else {
LAB_143180660:
    if ((iVar6 != 0x2d) && (iVar6 != 0x11)) goto LAB_1431806aa;
  }
  cVar4 = CAkResampler::IsPostDeInterleaveRequired(param_1 + 0x10);
  if (cVar4 != '\0') {
    CAkResampler::DeinterleaveAndSwapOutput(param_1 + 0x10,plVar1);
  }
  lVar8 = *(longlong *)(param_1 + 0xb0);
  *param_2 = *plVar1;
  param_2[1] = lVar8;
  lVar8 = *(longlong *)(param_1 + 0xc0);
  param_2[2] = *(longlong *)(param_1 + 0xb8);
  param_2[3] = lVar8;
  lVar8 = *(longlong *)(param_1 + 0xd0);
  param_2[4] = *(longlong *)(param_1 + 200);
  param_2[5] = lVar8;
  param_2[6] = *(longlong *)(param_1 + 0xd8);
LAB_1431806aa:
  *(int *)(param_2 + 7) = iVar6;
  return;
}



// FUNCTION 143180730 GetBuffer body=157 status=ok
// SIG undefined GetBuffer(void)

void CAkVPLPitchNode::GetBuffer(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x54) = (uint)*(ushort *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0xf1) = 0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0x298);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  CAkResampler::SetPitch(param_1 + 0x10,uVar2,(iVar1 << 0x1d) >> 0x1d == 0);
  if (*(short *)(param_1 + 0x82) != 0) {
    ConsumeBuffer(param_1,param_2);
    return;
  }
  if (*(char *)(param_1 + 0xf0) != '\0') {
    *(undefined4 *)(param_2 + 0x38) = 0x11;
  }
  return;
}



// FUNCTION 1431807d0 Init body=33 status=ok
// SIG undefined Init(void)

void CAkVPLPitchNode::Init
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf2) = 1;
  CAkResampler::Init(param_1 + 0x10,param_2,param_4);
  return;
}



// FUNCTION 143180800 ReleaseBuffer body=97 status=ok
// SIG undefined ReleaseBuffer(void)

void CAkVPLPitchNode::ReleaseBuffer(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0xa8);
  if (*plVar1 != 0) {
    AkPipelineBufferBase::ReleaseCachedBuffer(plVar1);
    *(undefined8 *)(param_1 + 0xb4) = 0x2b;
    *plVar1 = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xdc) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 143180870 ReleaseInputBuffer body=111 status=ok
// SIG undefined ReleaseInputBuffer(void)

void CAkVPLPitchNode::ReleaseInputBuffer(longlong param_1,undefined8 *param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  AkPipelineBuffer::FreeMarkers(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x7c) = 0x2b;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 1;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 3) = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 143180900 Seek body=141 status=ok
// SIG undefined Seek(void)

undefined8 CAkVPLPitchNode::Seek(longlong param_1)

{
  undefined8 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  AkPipelineBuffer::FreeMarkers(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x7c) = 0x2b;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 1;
  CAkResampler::ResetOffsets(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf0) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143180979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    return uVar1;
  }
  return 1;
}



// FUNCTION 143180990 FUN_143180990 body=450 status=ok
// SIG undefined FUN_143180990(void)

undefined8 FUN_143180990(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x240);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  iVar5 = *(int *)(lVar3 + 0x2b8);
  if (iVar5 < 1) {
    iVar5 = CAkVPLSrcNode::FetchStreamedData
                      (lVar2,*(undefined8 *)(lVar3 + 0x2c0),*(undefined4 *)(lVar3 + 0x2c8));
    if (iVar5 != 0x3f) {
      if (iVar5 != 1) {
        return 2;
      }
      local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x230);
      local_28 = *(undefined8 *)(lVar3 + 0x230);
      local_20 = *(undefined4 *)(lVar3 + 0x238);
      uVar8 = (uint)((ulonglong)local_18 >> 0x20);
      uVar9 = (uint)((ulonglong)local_28 >> 0x20);
      if ((((char)((ulonglong)local_18 >> 0x20) == (char)((ulonglong)local_28 >> 0x20)) &&
          (((uVar8 ^ uVar9) & 0xf00) == 0)) && (((uVar8 ^ uVar9) & 0xfffff000) == 0)) {
        CAkVPLSrcCbxNode::SwitchToNextSrc(*(undefined8 *)(param_1 + 0xe0));
        *(longlong *)(param_1 + 0xe8) = lVar3;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x238);
        plVar1 = (longlong *)(lVar3 + 0x18);
        if ((*(byte *)(lVar3 + 0x194) & 1) == 0) {
          (**(code **)(*plVar1 + 0x48))(plVar1,0);
        }
        else if ((*(byte *)(lVar3 + 0x194) & 0x10) != 0) {
          (**(code **)(*plVar1 + 0x50))();
        }
        uVar11 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
        CAkResampler::SwitchTo(param_1 + 0x10,&local_28,uVar11,param_1 + 0xa8,DAT_1467bdcac);
        uVar6 = 0x2d;
        if ((uint)*(ushort *)(param_1 + 0xba) != *(uint *)(param_1 + 0x54)) {
          uVar6 = 0x2b;
        }
        *(undefined1 *)(param_1 + 0xf0) = 0;
        return uVar6;
      }
    }
  }
  else {
    fVar12 = (float)((uint)*(ushort *)(param_1 + 0xb8) - (uint)*(ushort *)(param_1 + 0xba)) *
             *(float *)(lVar3 + 0x23c);
    if (fVar12 <= 0.0) {
      fVar10 = -0.5;
    }
    else {
      fVar10 = 0.5;
    }
    iVar7 = (int)(fVar10 + fVar12);
    if (-1 < iVar5) {
      iVar4 = iVar5;
      if (iVar7 < iVar5) {
        iVar4 = iVar7;
      }
      *(int *)(lVar3 + 0x2b8) = iVar5 - iVar4;
    }
  }
  return 0x11;
}



// FUNCTION 143180b60 Term body=91 status=ok
// SIG undefined Term(void)

void CAkVPLPitchNode::Term(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    AkPipelineBuffer::FreeMarkers(param_1 + 0xa8);
    AkPipelineBufferBase::ReleaseCachedBuffer(param_1 + 0xa8);
  }
  *(undefined2 *)(param_1 + 0x82) = 0;
  AkPipelineBuffer::FreeMarkers(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  CAkResampler::Term(param_1 + 0x10);
  return;
}



// FUNCTION 143180bc0 TimeSkip body=375 status=ok
// SIG undefined TimeSkip(void)

ulonglong CAkVPLPitchNode::TimeSkip(longlong param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 uVar9;
  ushort local_res8;
  
  uVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  CAkResampler::SetPitchForTimeSkip(param_1 + 0x10,uVar9);
  uVar5 = 0;
  uVar4 = 0x2d;
  uVar7 = (ulonglong)((float)*(uint *)(param_1 + 0x44) * 1.5258789e-05 * (float)*param_2 + 0.5);
  if ((int)uVar7 != 0) {
    local_res8 = *(ushort *)(param_1 + 0x82);
    do {
      if ((local_res8 == 0) && (local_res8 = 0, *(char *)(param_1 + 0xf0) == '\0')) {
        uVar3 = *param_2;
        uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
        if ((int)uVar2 != 0x2d) {
          if ((int)uVar2 != 0x11) {
            return uVar2;
          }
          *(undefined1 *)(param_1 + 0xf0) = 1;
        }
        lVar1 = *(longlong *)(param_1 + 0xe8);
        if ((*(byte *)(lVar1 + 0x295) & 0x40) == 0) {
          uVar6 = *(uint *)(lVar1 + 0x28c);
        }
        else {
          uVar6 = 0;
        }
        iVar8 = 0;
        if (uVar3 < uVar6) {
          iVar8 = uVar6 - uVar3;
          uVar6 = uVar3;
        }
        local_res8 = (short)uVar3 - (short)uVar6;
        *(byte *)(lVar1 + 0x295) = *(byte *)(lVar1 + 0x295) & 0x3f;
        *(byte *)(lVar1 + 0x296) = *(byte *)(lVar1 + 0x296) & 0xfe;
        *(int *)(lVar1 + 0x28c) = iVar8;
      }
      uVar6 = (uint)uVar7;
      uVar3 = uVar6;
      if (local_res8 <= uVar6) {
        uVar3 = (uint)local_res8;
      }
      uVar5 = uVar5 + uVar3;
      uVar7 = (ulonglong)(uVar6 - uVar3);
      local_res8 = local_res8 - (short)uVar3;
      *(ushort *)(param_1 + 0x82) = local_res8;
      if ((local_res8 == 0) && (*(char *)(param_1 + 0xf0) != '\0')) {
        uVar4 = 0x11;
        break;
      }
    } while (uVar6 - uVar3 != 0);
  }
  *param_2 = (uint)(longlong)((65536.0 / (float)*(uint *)(param_1 + 0x44)) * (float)uVar5 + 0.5);
  return (ulonglong)uVar4;
}



// FUNCTION 143180d70 VirtualOn body=164 status=ok
// SIG undefined VirtualOn(void)

void CAkVPLPitchNode::VirtualOn(longlong param_1,int param_2)

{
  if (param_2 != 2) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    }
    AkPipelineBuffer::FreeMarkers(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x7c) = 0x2b;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa4) = 1;
    CAkResampler::ResetOffsets(param_1 + 0x10);
  }
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  else if (*(char *)(param_1 + 0xf0) != '\0') {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2);
  return;
}



// FUNCTION 143180e20 ~CAkVPLVolAutmNode body=11 status=ok
// SIG undefined ~CAkVPLVolAutmNode(void)

void CAkVPLVolAutmNode::~CAkVPLVolAutmNode(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145aca4d0;
  return;
}



// FUNCTION 143180e30 ApplyGain body=305 status=ok
// SIG undefined ApplyGain(void)

void AK::DSP::ApplyGain(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar5 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar5 = uVar4;
    }
    if (uVar5 != 0) {
      if (0xf < uVar5) {
        do {
          uVar4 = uVar4 + 0x10;
          *param_1 = *param_1 * param_2;
          param_1[1] = param_1[1] * param_2;
          param_1[2] = param_1[2] * param_2;
          param_1[3] = param_1[3] * param_2;
          param_1[4] = param_1[4] * param_2;
          param_1[5] = param_1[5] * param_2;
          param_1[6] = param_1[6] * param_2;
          param_1[7] = param_1[7] * param_2;
          param_1[8] = param_1[8] * param_2;
          param_1[9] = param_1[9] * param_2;
          param_1[10] = param_1[10] * param_2;
          param_1[0xb] = param_1[0xb] * param_2;
          param_1[0xc] = param_1[0xc] * param_2;
          param_1[0xd] = param_1[0xd] * param_2;
          param_1[0xe] = param_1[0xe] * param_2;
          param_1[0xf] = param_1[0xf] * param_2;
          param_1 = param_1 + 0x10;
        } while (uVar4 < (uVar5 & 0xfffffffffffffff0));
      }
      if (uVar4 < uVar5) {
        if (3 < uVar5 - uVar4) {
          lVar3 = ((uVar5 - uVar4) - 4 >> 2) + 1;
          uVar4 = uVar4 + lVar3 * 4;
          do {
            *param_1 = *param_1 * param_2;
            param_1[1] = param_1[1] * param_2;
            param_1[2] = param_1[2] * param_2;
            param_1[3] = param_1[3] * param_2;
            param_1 = param_1 + 4;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        for (; uVar4 < uVar5; uVar4 = uVar4 + 1) {
          *param_1 = param_2 * *param_1;
          param_1 = param_1 + 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 143180f70 ApplyModsToVolume body=812 status=ok
// SIG undefined ApplyModsToVolume(void)

void CAkVPLVolAutmNode::ApplyModsToVolume
               (undefined8 param_1,longlong *param_2,undefined8 *param_3,float *param_4,
               longlong param_5,uint param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  ushort uVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_48;
  float fStack_44;
  
  if (param_6 != 0) {
    uVar8 = (ulonglong)param_6;
    param_5 = param_5 - (longlong)param_3;
    do {
      uVar7 = 0;
      pfVar6 = *(float **)(param_5 + (longlong)param_3);
      local_48 = (float)*param_3;
      fStack_44 = (float)((ulonglong)*param_3 >> 0x20);
      if ((char)param_2[1] != '\0') {
        do {
          pfVar5 = (float *)(*param_2 + uVar7 * *(ushort *)(param_2 + 2) * 4);
          pfVar11 = pfVar5 + (ulonglong)(*(ushort *)(param_2 + 2) >> 2) * 4;
          pfVar10 = pfVar6;
          for (; pfVar5 < pfVar11; pfVar5 = pfVar5 + 4) {
            fVar1 = *pfVar10;
            fVar2 = pfVar10[1];
            fVar18 = pfVar10[2];
            fVar16 = pfVar10[3];
            pfVar10 = pfVar10 + 4;
            *pfVar5 = (fVar1 * fStack_44 + local_48) * *pfVar5;
            pfVar5[1] = (fVar2 * fStack_44 + local_48) * pfVar5[1];
            pfVar5[2] = (fVar18 * fStack_44 + local_48) * pfVar5[2];
            pfVar5[3] = (fVar16 * fStack_44 + local_48) * pfVar5[3];
          }
          uVar12 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar12;
        } while (uVar12 < *(byte *)(param_2 + 1));
      }
      param_3 = param_3 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (param_7 != 0) {
    uVar8 = (ulonglong)param_7;
    do {
      fVar1 = param_4[1];
      fVar2 = *param_4;
      bVar3 = *(byte *)(param_2 + 1);
      uVar7 = (ulonglong)bVar3;
      uVar4 = *(ushort *)((longlong)param_2 + 0x12);
      uVar9 = (ulonglong)uVar4;
      if (fVar1 == fVar2) {
        if (bVar3 != 0) {
          lVar13 = 0;
          do {
            AK::DSP::ApplyGain(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar13 * 4,fVar2,
                               uVar4);
            lVar13 = lVar13 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      else if (bVar3 != 0) {
        lVar13 = 0;
        do {
          pfVar6 = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar13 * 4);
          pfVar5 = pfVar6 + uVar9;
          if (3 < uVar4) {
            uVar12 = uVar4 & 0xfffffffc;
            pfVar10 = pfVar6 + uVar12;
            fVar17 = (fVar1 - fVar2) / (float)uVar12;
            fVar14 = fVar17 * 4.0;
            fVar15 = fVar17 + fVar2 + fVar17;
            fVar18 = fVar2;
            fVar16 = fVar17 + fVar2;
            fVar17 = fVar15 + fVar17;
            for (; pfVar6 < pfVar10; pfVar6 = pfVar6 + 4) {
              *pfVar6 = *pfVar6 * fVar18;
              pfVar6[1] = pfVar6[1] * fVar16;
              pfVar6[2] = pfVar6[2] * fVar15;
              pfVar6[3] = pfVar6[3] * fVar17;
              fVar18 = fVar18 + fVar14;
              fVar16 = fVar16 + fVar14;
              fVar15 = fVar15 + fVar14;
              fVar17 = fVar17 + fVar14;
            }
          }
          if (pfVar6 < pfVar5) {
            fVar18 = fVar2;
            if (0xf < ((longlong)pfVar5 + (3 - (longlong)pfVar6) & 0xfffffffffffffffcU)) {
              fVar16 = (fVar1 - fVar2) / (float)uVar9;
              do {
                *pfVar6 = fVar18 * *pfVar6;
                fVar15 = fVar18 + fVar16 + fVar16;
                pfVar6[1] = (fVar18 + fVar16) * pfVar6[1];
                fVar17 = fVar15 + fVar16;
                pfVar6[2] = fVar15 * pfVar6[2];
                fVar18 = fVar17 + fVar16;
                pfVar6[3] = fVar17 * pfVar6[3];
                pfVar6 = pfVar6 + 4;
              } while (pfVar6 < pfVar5 + -3);
            }
            if (pfVar6 < pfVar5) {
              fVar16 = fVar18;
              do {
                *pfVar6 = fVar16 * *pfVar6;
                pfVar6 = pfVar6 + 1;
                fVar16 = fVar16 + (fVar1 - fVar18) / (float)uVar9;
              } while (pfVar6 < pfVar5);
            }
          }
          lVar13 = lVar13 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      param_4 = param_4 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 1431812a0 FUN_1431812a0 body=22 status=ok
// SIG undefined FUN_1431812a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1431812a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint auStackX_8 [4];
  uint auStackX_18 [2];
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  longlong lStack_58;
  uint auStack_50 [2];
  longlong alStack_48 [2];
  
  if ((*param_2 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70) != 0)) {
    puVar7 = auStack_78;
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar8 = (undefined1 *)0x0;
    auStackX_18[0] = 0;
    auStackX_8[0] = 0;
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      uStack_80 = 0x143181307;
      CAkModulatorPBIData::GetNumAutomatedModulators
                (*(longlong *)(lVar1 + 0x70),&DAT_1467be248,auStackX_8,auStackX_18);
      if ((auStackX_8[0] != 0) || (auStackX_18[0] != 0)) {
        if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x294) & 0x10) == 0) ||
           (*(int *)(*(longlong *)(param_1 + 0x10) + 0x2e8) != -1)) {
          uVar6 = (ulonglong)auStackX_8[0] * 8;
          uVar5 = uVar6 + 0xf;
          if (uVar5 <= uVar6) {
            uVar5 = 0xffffffffffffff0;
          }
          uStack_80 = 0x14318139a;
          lVar2 = -(uVar5 & 0xfffffffffffffff0);
          puVar9 = &stack0xffffffffffffffc8 + lVar2;
          uVar5 = (ulonglong)auStackX_18[0] * 8 + 0xf;
          if (uVar5 <= (ulonglong)auStackX_18[0] * 8) {
            uVar5 = 0xffffffffffffff0;
          }
          *(undefined8 *)(auStack_78 + lVar2 + -8) = 0x1431813c1;
          lVar3 = -(uVar5 & 0xfffffffffffffff0);
          uVar5 = uVar6 + 0xf;
          puVar10 = (undefined4 *)(&stack0xffffffffffffffc8 + lVar3 + lVar2);
          if (uVar5 <= uVar6) {
            uVar5 = 0xffffffffffffff0;
          }
          *(undefined8 *)(auStack_78 + lVar3 + lVar2 + -8) = 0x1431813de;
          lVar1 = *(longlong *)(lVar1 + 0x70);
          lVar4 = -(uVar5 & 0xfffffffffffffff0);
          puVar7 = auStack_78 + lVar4 + lVar3 + lVar2;
          puVar8 = &stack0xffffffffffffffc8 + lVar4 + lVar3 + lVar2;
          if (lVar1 != 0) {
            *(uint **)((longlong)alStack_48 + lVar4 + lVar3 + lVar2) = auStackX_18;
            *(uint **)((longlong)auStack_50 + lVar4 + lVar3 + lVar2) = auStackX_8;
            *(undefined1 **)((longlong)&lStack_58 + lVar4 + lVar3 + lVar2) = puVar8;
            *(undefined8 *)(auStack_78 + lVar4 + lVar3 + lVar2 + -8) = 0x143181418;
            CAkModulatorPBIData::GetBufferList(lVar1,&DAT_1467be248,puVar9,puVar10);
          }
          *(uint *)((longlong)alStack_48 + lVar4 + lVar3 + lVar2) = auStackX_18[0];
          *(uint *)((longlong)auStack_50 + lVar4 + lVar3 + lVar2) = auStackX_8[0];
        }
        else {
          if (*(longlong *)(lVar1 + 0x70) == 0) {
            uStackX_20 = 0x3f800000;
          }
          else {
            uStack_80 = 0x143181348;
            uStackX_20 = CAkModulatorPBIData::GetCtrlRateOutput
                                   (*(longlong *)(lVar1 + 0x70),&DAT_1467be248);
          }
          alStack_48[0]._0_4_ = 1;
          puVar10 = &uStackX_20;
          auStack_50[0] = 0;
          puVar9 = (undefined1 *)0x0;
          uStackX_24 = uStackX_20;
        }
        *(undefined1 **)(puVar7 + 0x20) = puVar8;
        *(undefined8 *)(puVar7 + -8) = 0x143181440;
        CAkVPLVolAutmNode::ApplyModsToVolume(param_1,param_2,puVar9,puVar10);
      }
    }
    return;
  }
  return;
}



// FUNCTION 1431812c0 FUN_1431812c0 body=398 status=ok
// SIG undefined FUN_1431812c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1431812c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint local_res8 [4];
  uint local_res18 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  longlong local_58;
  uint local_50 [2];
  longlong local_48 [2];
  
  puVar7 = auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar8 = (undefined1 *)0x0;
  local_res18[0] = 0;
  local_res8[0] = 0;
  if (*(longlong *)(lVar1 + 0x70) != 0) {
    uStack_80 = 0x143181307;
    CAkModulatorPBIData::GetNumAutomatedModulators
              (*(longlong *)(lVar1 + 0x70),&DAT_1467be248,local_res8,local_res18);
    if ((local_res8[0] != 0) || (local_res18[0] != 0)) {
      if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x294) & 0x10) == 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x10) + 0x2e8) != -1)) {
        uVar6 = (ulonglong)local_res8[0] * 8;
        uVar5 = uVar6 + 0xf;
        if (uVar5 <= uVar6) {
          uVar5 = 0xffffffffffffff0;
        }
        uStack_80 = 0x14318139a;
        lVar2 = -(uVar5 & 0xfffffffffffffff0);
        puVar9 = &stack0xffffffffffffffc8 + lVar2;
        uVar5 = (ulonglong)local_res18[0] * 8 + 0xf;
        if (uVar5 <= (ulonglong)local_res18[0] * 8) {
          uVar5 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_78 + lVar2 + -8) = 0x1431813c1;
        lVar3 = -(uVar5 & 0xfffffffffffffff0);
        uVar5 = uVar6 + 0xf;
        puVar10 = (undefined4 *)(&stack0xffffffffffffffc8 + lVar3 + lVar2);
        if (uVar5 <= uVar6) {
          uVar5 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_78 + lVar3 + lVar2 + -8) = 0x1431813de;
        lVar1 = *(longlong *)(lVar1 + 0x70);
        lVar4 = -(uVar5 & 0xfffffffffffffff0);
        puVar7 = auStack_78 + lVar4 + lVar3 + lVar2;
        puVar8 = &stack0xffffffffffffffc8 + lVar4 + lVar3 + lVar2;
        if (lVar1 != 0) {
          *(uint **)((longlong)local_48 + lVar4 + lVar3 + lVar2) = local_res18;
          *(uint **)((longlong)local_50 + lVar4 + lVar3 + lVar2) = local_res8;
          *(undefined1 **)((longlong)&local_58 + lVar4 + lVar3 + lVar2) = puVar8;
          *(undefined8 *)(auStack_78 + lVar4 + lVar3 + lVar2 + -8) = 0x143181418;
          CAkModulatorPBIData::GetBufferList(lVar1,&DAT_1467be248,puVar9,puVar10);
        }
        *(uint *)((longlong)local_48 + lVar4 + lVar3 + lVar2) = local_res18[0];
        *(uint *)((longlong)local_50 + lVar4 + lVar3 + lVar2) = local_res8[0];
      }
      else {
        if (*(longlong *)(lVar1 + 0x70) == 0) {
          local_res20 = 0x3f800000;
        }
        else {
          uStack_80 = 0x143181348;
          local_res20 = CAkModulatorPBIData::GetCtrlRateOutput
                                  (*(longlong *)(lVar1 + 0x70),&DAT_1467be248);
        }
        local_48[0]._0_4_ = 1;
        puVar10 = &local_res20;
        local_50[0] = 0;
        puVar9 = (undefined1 *)0x0;
        local_res24 = local_res20;
      }
      *(undefined1 **)(puVar7 + 0x20) = puVar8;
      *(undefined8 *)(puVar7 + -8) = 0x143181440;
      CAkVPLVolAutmNode::ApplyModsToVolume(param_1,param_2,puVar9,puVar10);
    }
  }
  return;
}



// FUNCTION 143181450 EVP_MD_meth_set_init body=10 status=ok
// SIG undefined EVP_MD_meth_set_init(void)

undefined8 EVP_MD_meth_set_init(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}



// FUNCTION 143181460 CAkVPLSrcNode body=33 status=ok
// SIG undefined CAkVPLSrcNode(void)

undefined8 * CAkVPLSrcNode::CAkVPLSrcNode(undefined8 *param_1,undefined8 param_2)

{
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc;
  *param_1 = &PTR_FUN_145acaef0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  return param_1;
}



// FUNCTION 143181490 FUN_143181490 body=43 status=ok
// SIG undefined FUN_143181490(void)

undefined8 * FUN_143181490(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145aca4d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1431814c0 Create body=343 status=ok
// SIG undefined Create(void)

undefined8 CAkVPLSrcNode::Create(int param_1,uint param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  if (param_1 == 2) {
    pvVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x100);
    if (pvVar1 != (void *)0x0) {
      uVar2 = CAkSrcPhysModel::CAkSrcPhysModel(pvVar1,param_3);
      return uVar2;
    }
  }
  else if ((param_1 != 0) && (param_2 >> 0x10 != 0)) {
    uVar2 = uVar3;
    if (param_2 >> 0x10 == 1) {
      if (param_1 == 1) {
        pvVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x98);
        if (pvVar1 != (void *)0x0) {
          uVar2 = CAkSrcFilePCM::CAkSrcFilePCM(pvVar1,param_3);
          return uVar2;
        }
      }
      else if (param_1 == 3) {
        pvVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x60);
        if (pvVar1 != (void *)0x0) {
          uVar2 = CAkSrcBankPCM::CAkSrcBankPCM(pvVar1,param_3);
        }
      }
    }
    else {
      if (param_2 >> 0x10 != 2) {
        uVar2 = FUN_143128700(param_3,param_1,param_2);
        return uVar2;
      }
      if (param_1 == 1) {
        pvVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0xa8);
        if (pvVar1 != (void *)0x0) {
          uVar2 = CAkSrcFileADPCM::CAkSrcFileADPCM(pvVar1,param_3);
          return uVar2;
        }
      }
      else if (param_1 == 3) {
        pvVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x70);
        if (pvVar1 != (void *)0x0) {
          uVar2 = CAkSrcBankADPCM::CAkSrcBankADPCM(pvVar1,param_3);
          return uVar2;
        }
      }
    }
  }
  return uVar2;
}



// FUNCTION 143181620 FetchStreamedData body=46 status=ok
// SIG undefined FetchStreamedData(void)

undefined8 CAkVPLSrcNode::FetchStreamedData(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if ((int)uVar1 == 1) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | (byte)uVar1;
  }
  return uVar1;
}



// FUNCTION 143181660 Pause body=51 status=ok
// SIG undefined Pause(void)

void CAkVPLSrcNode::Pause(longlong param_1)

{
  FUN_14317e3c0(*(undefined8 *)(param_1 + 0x18));
  CAkPositionRepository::SetRate
            (DAT_146b50b70,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x200),param_1,0);
  return;
}



// FUNCTION 1431816a0 Resume body=64 status=ok
// SIG undefined Resume(void)

void CAkVPLSrcNode::Resume(longlong param_1,undefined4 param_2)

{
  CAkPBI::NotifAddedAsSA(*(undefined8 *)(param_1 + 0x18));
  CAkPositionRepository::SetRate
            (DAT_146b50b70,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x200),param_1,param_2);
  return;
}



// FUNCTION 1431816e0 FUN_1431816e0 body=29 status=ok
// SIG undefined FUN_1431816e0(void)

undefined8 FUN_1431816e0(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1[3] + 0x295) & 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001431816f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0xb8))();
    return uVar1;
  }
  return 1;
}



// FUNCTION 143181700 FUN_143181700 body=281 status=ok
// SIG undefined FUN_143181700(void)

void FUN_143181700(longlong *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = 0.0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    fVar9 = (float)(**(code **)(*param_1 + 0x60))();
  }
  plVar7 = (longlong *)(param_1[3] + 0x18);
  bVar1 = *(byte *)(param_1[3] + 0x194);
  if ((bVar1 & 1) == 0) {
    (**(code **)(*plVar7 + 0x48))(plVar7,0);
  }
  else if ((bVar1 & 0x10) != 0) {
    (**(code **)(*plVar7 + 0x50))();
  }
  lVar4 = param_1[3];
  fVar8 = _guard_xfg_dispatch_icall_nop(2.0,*(float *)(lVar4 + 0x88) * -0.00083333335);
  FUN_14317e3d0(lVar4,fVar8 * fVar9);
  lVar4 = param_1[3];
  puVar5 = *(undefined4 **)(lVar4 + 0x220);
  uVar2 = *(undefined4 *)(lVar4 + 0x200);
  uVar3 = puVar5[3];
  uVar6 = FUN_14317c030(lVar4 + 0x18);
  CAkPlayingMgr::NotifyDuration
            (DAT_146b50b00,uVar2,fVar9,fVar8 * fVar9,uVar6,*puVar5,((byte)uVar3 & 0x7c) == 4);
  if ((*(uint *)(param_1[3] + 8) & 0x100000) != 0) {
    FUN_143162160(DAT_146b50b70,*(undefined4 *)(param_1[3] + 0x200),param_1);
  }
  return;
}



// FUNCTION 143181820 Stop body=9 status=ok
// SIG undefined Stop(void)

void CAkVPLSrcNode::Stop(longlong param_1)

{
  FUN_14317f1d0(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 143181830 FUN_143181830 body=85 status=ok
// SIG undefined FUN_143181830(void)

void FUN_143181830(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    if ((*(uint *)(lVar1 + 8) & 0x100000) != 0) {
      CAkPositionRepository::RemoveSource(DAT_146b50b70,*(undefined4 *)(lVar1 + 0x200),param_1);
      lVar1 = param_1[3];
    }
    CAkPBI::Destroy(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000143181881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



// FUNCTION 143181890 FUN_143181890 body=126 status=ok
// SIG undefined FUN_143181890(void)

undefined4 FUN_143181890(longlong *param_1,uint *param_2)

{
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  ushort local_36;
  undefined2 local_30;
  undefined8 local_28;
  undefined4 local_10;
  
  local_3c = 0x2b;
  local_40 = 0;
  local_38 = (undefined2)*param_2;
  local_48 = 0;
  local_36 = 0;
  local_30 = 0;
  local_28 = 0;
  (**(code **)(*param_1 + 0x58))(param_1,&local_48);
  if (local_48 == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = (uint)local_36;
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return local_10;
}



// FUNCTION 143181910 ~CAkBusCtxRslvd body=63 status=ok
// SIG undefined ~CAkBusCtxRslvd(void)

void AK::CAkBusCtxRslvd::~CAkBusCtxRslvd(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 10);
    *piVar1 = *piVar1 + -1;
    lVar3 = g_DefaultPoolId;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,0);
      MemoryMgr::Free(lVar3,puVar2);
    }
  }
  return;
}



// FUNCTION 143181950 FindParentCtx body=90 status=ok
// SIG undefined FindParentCtx(void)

longlong * AK::CAkBusCtx::FindParentCtx(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_2 = 0;
  lVar2 = *param_1;
  param_2[1] = -1;
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x88), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x108))();
    if (lVar2 != 0) {
      *param_2 = lVar2;
      param_2[1] = param_1[1];
    }
  }
  return param_2;
}



// FUNCTION 1431819b0 GetChannelConfig body=33 status=ok
// SIG undefined GetChannelConfig(void)

uint * AK::CAkBusCtx::GetChannelConfig(longlong *param_1,uint *param_2)

{
  if (*param_1 != 0) {
    *param_2 = *(uint *)(*param_1 + 0xdc);
    return param_2;
  }
  *(undefined1 *)param_2 = 0;
  *param_2 = *param_2 & 0xff;
  return param_2;
}



// FUNCTION 1431819e0 GetFX body=78 status=ok
// SIG undefined GetFX(void)

void AK::CAkBusCtxRslvd::GetFX(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143181a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x1c8))();
    return;
  }
  plVar1 = (longlong *)*param_3;
  *param_3 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined2 *)(param_3 + 1) = 0;
  return;
}



// FUNCTION 143181a30 GetFXDataID body=26 status=ok
// SIG undefined GetFXDataID(void)

void AK::CAkBusCtx::GetFXDataID
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143181a3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x1d0))();
    return;
  }
  *param_4 = 0xffffffff;
  return;
}



// FUNCTION 143181a50 GetMixerPlugin body=66 status=ok
// SIG undefined GetMixerPlugin(void)

void AK::CAkBusCtx::GetMixerPlugin(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (*param_1 != 0) {
    CAkBus::GetMixerPlugin();
    return;
  }
  plVar1 = (longlong *)*param_2;
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined2 *)(param_2 + 1) = 0;
  return;
}



// FUNCTION 143181aa0 FUN_143181aa0 body=20 status=ok
// SIG undefined FUN_143181aa0(void)

void FUN_143181aa0(longlong *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    *param_3 = 0xffffffff;
    lVar2 = *(longlong *)(lVar2 + 0xc0);
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 9) == '\0') {
        plVar3 = (longlong *)
                 CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef
                           (DAT_146b50af8 + 0x2c0,*(undefined4 *)(lVar2 + 4));
      }
      else {
        plVar3 = (longlong *)
                 CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef
                           (DAT_146b50af8 + 0x280,*(undefined4 *)(lVar2 + 4));
      }
      if (plVar3 != (longlong *)0x0) {
        piVar4 = (int *)plVar3[8];
        piVar1 = piVar4 + (ulonglong)*(uint *)(plVar3 + 9) * 2;
        for (; (piVar4 != piVar1 && (*piVar4 != param_2)); piVar4 = piVar4 + 2) {
        }
        puVar5 = (uint *)0x0;
        puVar6 = (uint *)(piVar4 + 1);
        if (piVar4 == piVar1) {
          puVar6 = puVar5;
        }
        if (puVar6 != (uint *)0x0) {
          puVar5 = (uint *)(ulonglong)*puVar6;
        }
        *param_3 = (int)puVar5;
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    return;
  }
  *param_3 = 0xffffffff;
  return;
}



// FUNCTION 143181ac0 HasMixerPlugin body=32 status=ok
// SIG undefined HasMixerPlugin(void)

ulonglong AK::CAkBusCtx::HasMixerPlugin(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (((*param_1 != 0) && (uVar1 = *(ulonglong *)(*param_1 + 0xc0), uVar1 != 0)) &&
     (*(int *)(uVar1 + 4) != 0)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143181ae0 ID body=13 status=ok
// SIG undefined ID(void)

undefined4 AK::CAkBusCtx::ID(longlong *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x10);
  }
  return 0;
}



// FUNCTION 143181af0 IsAuxBus body=40 status=ok
// SIG undefined IsAuxBus(void)

bool AK::CAkBusCtx::IsAuxBus(longlong *param_1)

{
  int iVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    iVar1 = (**(code **)(*(longlong *)*param_1 + 0x80))();
    return iVar1 == 10;
  }
  return false;
}



// FUNCTION 143181b20 Resolve body=110 status=ok
// SIG undefined Resolve(void)

void AK::CAkBusCtxRslvd::Resolve(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  CAkRegisteredObj *pCVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 10);
    *piVar1 = *piVar1 + -1;
    lVar3 = g_DefaultPoolId;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,0);
      MemoryMgr::Free(lVar3,puVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(__uint64 *)(param_1 + 8) != 0xffffffffffffffff) {
    pCVar4 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(param_1 + 8));
    *(CAkRegisteredObj **)(param_1 + 0x10) = pCVar4;
  }
  return;
}



// FUNCTION 143181ba0 `scalar_deleting_destructor' body=202 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * AkMixConnection::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acb060;
  param_1[1] = &PTR_LAB_145acb100;
  (**(code **)(param_1[0xe] + 0x20))(param_1 + 0xe);
  if (param_1[0xb] != 0) {
    FUN_143186cb0(param_1[0xb],param_1);
  }
  AkAudioMix::Free(param_1 + 4);
  CAkSrcLpHpFilter::Term(param_1 + 0x1c);
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0xe0);
  param_1[0xe] = &PTR__scalar_deleting_destructor__145ac6a78;
  FUN_14318ccc0(param_1 + 0xe);
  param_1[0xe] = &PTR_FUN_144024f50;
  param_1[1] = &PTR_FUN_144cb0188;
  *param_1 = &PTR_FUN_145acafc8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 143181c70 FUN_143181c70 body=43 status=ok
// SIG undefined FUN_143181c70(void)

undefined8 * FUN_143181c70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acafc8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143181ca0 AddNoSetKey body=332 status=ok
// SIG undefined AddNoSetKey(void)

longlong AkSortedKeyArray<unsigned___int64,unsigned___int64,AkHybridAllocator<8,8>,AkSetGetKey<unsigned___int64>,1,AkAssignmentMovePolicy<unsigned___int64>,AkDefaultSortedKeyCompare<unsigned___int64>_>
         ::AddNoSetKey(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  iVar8 = 0;
  iVar10 = uVar2 - 1;
  if (-1 < iVar10) {
    lVar11 = *(longlong *)(param_1 + 8);
    do {
      iVar5 = (iVar10 - iVar8) / 2 + iVar8;
      uVar3 = *(ulonglong *)(lVar11 + (longlong)iVar5 * 8);
      lVar7 = lVar11 + (longlong)iVar5 * 8;
      if (param_2 < uVar3) {
        iVar10 = iVar5 + -1;
      }
      else {
        if (param_2 <= uVar3) goto LAB_143181d13;
        iVar8 = iVar5 + 1;
      }
    } while (iVar8 <= iVar10);
  }
  lVar11 = *(longlong *)(param_1 + 8);
  if (lVar11 == 0) {
    lVar7 = 0;
    lVar11 = 0;
  }
  else {
    lVar7 = lVar11 + (longlong)iVar8 * 8;
  }
LAB_143181d13:
  if (lVar7 == 0) {
    if ((*(uint *)(param_1 + 0x14) <= uVar2) && (cVar4 = FUN_143131d70(param_1,1), cVar4 == '\0')) {
      return 0;
    }
    if (uVar2 < *(uint *)(param_1 + 0x14)) {
      uVar2 = *(uint *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = uVar2 + 1;
      return *(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 8;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x14) <= uVar2) && (cVar4 = FUN_143131d70(param_1,1), cVar4 == '\0')) {
      return 0;
    }
    if (uVar2 < *(uint *)(param_1 + 0x14)) {
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar9 = *(longlong *)(param_1 + 8);
      *(uint *)(param_1 + 0x10) = uVar2 + 1;
      puVar6 = (undefined8 *)(lVar9 + (ulonglong)uVar2 * 8);
      lVar11 = (lVar7 - lVar11 >> 3 & 0xffffffffU) * 8;
      if ((undefined8 *)(lVar11 + lVar9) < puVar6) {
        do {
          puVar1 = puVar6 + -1;
          *puVar6 = puVar6[-1];
          lVar9 = *(longlong *)(param_1 + 8);
          puVar6 = puVar1;
        } while ((undefined8 *)(lVar9 + lVar11) < puVar1);
      }
      return lVar11 + lVar9;
    }
  }
  return 0;
}



// FUNCTION 143181e00 FUN_143181e00 body=434 status=ok
// SIG undefined FUN_143181e00(void)

undefined8 *
FUN_143181e00(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5,byte param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = AK::MemoryMgr::Malign(g_LEngineDefaultPoolId,0x170,0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR__scalar_deleting_destructor__145acb060;
    puVar1[1] = &PTR_LAB_145acb100;
    *(undefined4 *)(puVar1 + 2) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3f800000;
    *(undefined4 *)(puVar1 + 3) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3f800000;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = param_2;
    puVar1[0xb] = param_3;
    puVar1[0xc] = param_4;
    puVar1[0xd] = 0;
    puVar1[0xe] = &PTR__scalar_deleting_destructor__145ac6a78;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    *(undefined1 *)(puVar1 + 0x14) = 0xff;
    *(undefined1 *)(puVar1 + 0x15) = 0xff;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1b] = 0;
    CAkSrcLpHpFilter::CAkSrcLpHpFilter(puVar1 + 0x1c);
    *(undefined4 *)((longlong)puVar1 + 0x164) = param_5;
    *(undefined4 *)(puVar1 + 0x2b) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x15c) = 0xc5800000;
    *(undefined4 *)(puVar1 + 0x2c) = 0xc5800000;
    *(uint *)(puVar1 + 0x2d) =
         ((*(uint *)(puVar1 + 0x2d) & 0xfffffffe | (uint)param_6) & 0xfffffffd |
         (uint)param_6 + (uint)param_6) & 0xfffffff3;
    if (*(longlong *)(param_3 + 0x80) == 0) {
      uVar2 = (**(code **)(*param_2 + 8))(param_2);
    }
    else {
      uVar2 = *(undefined8 *)(param_3 + 0x88);
    }
    puVar1[0x1a] = uVar2;
    FUN_1431863f0(param_3,puVar1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 **)(param_1 + 8) = puVar1;
      puVar1[9] = 0;
    }
    else {
      puVar1[9] = *(longlong *)(param_1 + 8);
      *(undefined8 **)(param_1 + 8) = puVar1;
    }
  }
  return puVar1;
}



// FUNCTION 143181fc0 Get3DPosition body=220 status=ok
// SIG undefined Get3DPosition(void)

undefined4 AkMixConnection::Get3DPosition(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 local_28 [8];
  undefined1 *local_20;
  ulonglong local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  local_20 = (undefined1 *)0x0;
  local_18 = 0;
  puVar2 = (undefined8 *)
           AkSortedKeyArray<unsigned___int64,unsigned___int64,AkHybridAllocator<8,8>,AkSetGetKey<unsigned___int64>,1,AkAssignmentMovePolicy<unsigned___int64>,AkDefaultSortedKeyCompare<unsigned___int64>_>
           ::AddNoSetKey(local_28,uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = uVar1;
    puVar2 = (undefined8 *)FUN_143182dc0(*(undefined8 *)(param_1 + 0x50),local_28,0,param_2);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = puVar2[1];
      *param_3 = *puVar2;
      param_3[1] = uVar1;
      uVar1 = puVar2[3];
      param_3[2] = puVar2[2];
      param_3[3] = uVar1;
      uVar1 = puVar2[5];
      param_3[4] = puVar2[4];
      param_3[5] = uVar1;
      uVar1 = puVar2[7];
      param_3[6] = puVar2[6];
      param_3[7] = uVar1;
      uVar1 = puVar2[9];
      param_3[8] = puVar2[8];
      param_3[9] = uVar1;
      param_3[10] = puVar2[10];
      uVar3 = 1;
      goto LAB_14318205b;
    }
  }
  uVar3 = 2;
LAB_14318205b:
  if ((local_20 != (undefined1 *)0x0) &&
     (local_18 = local_18 & 0xffffffff00000000, local_28 != local_20)) {
    AK::MemoryMgr::Falign(g_DefaultPoolId,local_20);
  }
  return uVar3;
}



// FUNCTION 143182140 GetFocus body=215 status=ok
// SIG HWND GetFocus(void)

HWND __stdcall AkMixConnection::GetFocus(void)

{
  AKRESULT AVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  HWND pHVar5;
  undefined4 extraout_var;
  longlong in_RCX;
  undefined4 in_EDX;
  undefined4 uVar6;
  HWND__ local_38 [2];
  HWND local_30;
  ulonglong local_28;
  
  uVar4 = *(undefined8 *)(in_RCX + 0xd0);
  local_30 = (HWND)0x0;
  local_28 = 0;
  puVar2 = (undefined8 *)
           AkSortedKeyArray<unsigned___int64,unsigned___int64,AkHybridAllocator<8,8>,AkSetGetKey<unsigned___int64>,1,AkAssignmentMovePolicy<unsigned___int64>,AkDefaultSortedKeyCompare<unsigned___int64>_>
           ::AddNoSetKey(local_38,uVar4);
  if (puVar2 == (undefined8 *)0x0) {
    pHVar5 = (HWND)0x0;
  }
  else {
    *puVar2 = uVar4;
    lVar3 = FUN_143182dc0(*(undefined8 *)(in_RCX + 0x50),local_38,0,in_EDX);
    if (lVar3 == 0) {
      pHVar5 = (HWND)0x0;
    }
    else {
      uVar4 = CAkListener::GetListenerData(*(undefined8 *)(in_RCX + 0xd0));
      uVar6 = FUN_14312f460(uVar4,lVar3);
      pHVar5 = (HWND)FUN_14317b700(*(undefined8 *)(*(longlong *)(in_RCX + 0x50) + 8),uVar6);
    }
  }
  if (local_30 != (HWND)0x0) {
    pHVar5 = local_38;
    local_28 = local_28 & 0xffffffff00000000;
    if (pHVar5 != local_30) {
      AVar1 = AK::MemoryMgr::Falign(g_DefaultPoolId,local_30);
      pHVar5 = (HWND)CONCAT44(extraout_var,AVar1);
    }
  }
  return pHVar5;
}



// FUNCTION 143182260 FUN_143182260 body=158 status=ok
// SIG undefined FUN_143182260(void)

longlong FUN_143182260(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_18 [2];
  
  if ((*(uint *)(param_1 + 0x168) & 4) != 0) {
    return *(longlong *)(param_1 + 0x78);
  }
  *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 4;
  lVar3 = 0;
  local_18[0] = (longlong *)0x0;
  CAkParameterNodeBase::GetAttachedPropFX
            (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + 0x170),local_18);
  if (local_18[0] != (longlong *)0x0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
    lVar2 = lVar1 + -0x18;
    if (lVar1 == 0) {
      lVar2 = lVar3;
    }
    if (lVar2 != 0) {
      lVar3 = lVar2 + 0x18;
    }
    lVar3 = FUN_14318af60(param_1 + 0x70,local_18[0],lVar3);
    if (local_18[0] != (longlong *)0x0) {
      (**(code **)(*local_18[0] + 0x10))();
    }
  }
  return lVar3;
}



// FUNCTION 143182360 GetNum3DPositions body=134 status=ok
// SIG undefined GetNum3DPositions(void)

undefined4 AkMixConnection::GetNum3DPositions(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 local_28 [8];
  undefined1 *local_20;
  ulonglong local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  uVar2 = 0;
  local_20 = (undefined1 *)0x0;
  local_18 = 0;
  puVar3 = (undefined8 *)
           AkSortedKeyArray<unsigned___int64,unsigned___int64,AkHybridAllocator<8,8>,AkSetGetKey<unsigned___int64>,1,AkAssignmentMovePolicy<unsigned___int64>,AkDefaultSortedKeyCompare<unsigned___int64>_>
           ::AddNoSetKey(local_28,uVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar1;
    uVar2 = FUN_143182d20(*(undefined8 *)(param_1 + 0x50),local_28,0);
  }
  if ((local_20 != (undefined1 *)0x0) &&
     (local_18 = local_18 & 0xffffffff00000000, local_28 != local_20)) {
    AK::MemoryMgr::Falign(g_DefaultPoolId,local_20);
  }
  return uVar2;
}



// FUNCTION 143182410 GetOutputBusCtx body=9 status=ok
// SIG undefined GetOutputBusCtx(void)

longlong AkMixConnection::GetOutputBusCtx(longlong param_1)

{
  return *(longlong *)(param_1 + 0x58) + 0x80;
}



// FUNCTION 143182420 FUN_143182420 body=16 status=ok
// SIG undefined FUN_143182420(void)

undefined4 * FUN_143182420(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0xa0);
  return param_2;
}



// FUNCTION 1431824c0 FUN_1431824c0 body=177 status=ok
// SIG undefined FUN_1431824c0(void)

void FUN_1431824c0(longlong param_1,void *param_2,void *param_3)

{
  uint uVar1;
  
  uVar1 = (*(byte *)(*(longlong *)(param_1 + 0x58) + 0xa0) + 3 & 0xfffffffc) *
          (uint)*(byte *)(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (uVar1 != 0) {
      _guard_xfg_dispatch_icall_nop(param_2,0,(ulonglong)uVar1 << 2);
      if (uVar1 != 0) {
        _guard_xfg_dispatch_icall_nop(param_3,0,(ulonglong)uVar1 << 2);
      }
    }
  }
  else if (uVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,*(void **)(param_1 + 0x38),(ulonglong)uVar1 << 2);
    if (uVar1 != 0) {
      _guard_xfg_dispatch_icall_nop(param_3,*(void **)(param_1 + 0x30),(ulonglong)uVar1 << 2);
      return;
    }
  }
  return;
}



// FUNCTION 1431825a0 GetSpread body=220 status=ok
// SIG undefined GetSpread(void)

undefined8 AkMixConnection::GetSpread(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  undefined1 *local_30;
  ulonglong local_28;
  
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  local_30 = (undefined1 *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)
           AkSortedKeyArray<unsigned___int64,unsigned___int64,AkHybridAllocator<8,8>,AkSetGetKey<unsigned___int64>,1,AkAssignmentMovePolicy<unsigned___int64>,AkDefaultSortedKeyCompare<unsigned___int64>_>
           ::AddNoSetKey(local_38,uVar5);
  if (puVar1 == (undefined8 *)0x0) {
    uVar5 = 0x40000000;
  }
  else {
    *puVar1 = uVar5;
    lVar2 = FUN_143182dc0(*(undefined8 *)(param_1 + 0x50),local_38,0,param_2);
    if (lVar2 != 0) {
      lVar3 = CAkListener::GetListenerData(*(undefined8 *)(param_1 + 0xd0));
      if (lVar3 != 0) {
        uVar4 = FUN_14312f460(lVar3,lVar2);
        uVar5 = FUN_14317b770(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),uVar4);
        goto LAB_14318263c;
      }
    }
    uVar5 = 0;
  }
LAB_14318263c:
  if ((local_30 != (undefined1 *)0x0) &&
     (local_28 = local_28 & 0xffffffff00000000, local_38 != local_30)) {
    AK::MemoryMgr::Falign(g_DefaultPoolId,local_30);
  }
  return uVar5;
}



// FUNCTION 1431826a0 SetUserData body=5 status=ok
// SIG undefined SetUserData(void)

void AkMixConnection::SetUserData(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}



// FUNCTION 1431826b0 ~CAkMixConnections body=152 status=ok
// SIG undefined ~CAkMixConnections(void)

void CAkMixConnections::~CAkMixConnections(longlong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  do {
    puVar2 = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)puVar3[9];
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 8) = 0;
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 **)(param_1 + 8) = puVar2;
      }
    }
    lVar1 = g_LEngineDefaultPoolId;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      AK::MemoryMgr::Falign(lVar1,puVar3);
      puVar2 = *(undefined8 **)(param_1 + 8);
    }
    puVar3 = puVar2;
  } while (puVar2 != (undefined8 *)0x0);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143182750 FUN_143182750 body=403 status=ok
// SIG undefined FUN_143182750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143182750(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR__scalar_deleting_destructor__145aca5f0;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_1[8];
    do {
      if (param_1[1] != 0) {
        *(undefined4 *)(param_1[1] + 0x128) = 0x42ca0000;
      }
      if ((*(byte *)(param_1 + 0xd) & 4) != 0) {
        DAT_146b50d89 = 1;
      }
      lVar4 = FARSupportInterface::GetXRTrackingSystem(puVar7);
      puVar1 = *(undefined8 **)(lVar4 + 0x30);
      puVar3 = puVar1;
      puVar5 = puVar1;
      puVar6 = (undefined8 *)0x0;
      if (puVar1 == (undefined8 *)0x0) {
LAB_1431827e4:
        if (puVar5 != (undefined8 *)0x0) {
          if (puVar5 == puVar1) {
            *(undefined8 *)(lVar4 + 0x30) = puVar5[8];
          }
          else {
            puVar6[8] = puVar5[8];
          }
          if (puVar5 == *(undefined8 **)(lVar4 + 0x28)) {
            *(undefined8 **)(lVar4 + 0x28) = puVar6;
          }
        }
      }
      else {
        do {
          puVar5 = puVar3;
          if (puVar5 == puVar7) goto LAB_1431827e4;
          puVar3 = (undefined8 *)puVar5[8];
          puVar6 = puVar5;
        } while ((undefined8 *)puVar5[8] != (undefined8 *)0x0);
      }
      puVar1 = (undefined8 *)puVar7[9];
      puVar3 = puVar1;
      if (puVar7 == (undefined8 *)param_1[8]) {
        param_1[8] = puVar1;
        puVar3 = _DAT_00000048;
      }
      _DAT_00000048 = puVar3;
      lVar2 = g_LEngineDefaultPoolId;
      (**(code **)*puVar7)(puVar7,0);
      AK::MemoryMgr::Falign(lVar2,puVar7);
      puVar7 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  if ((void *)param_1[2] != (void *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[2]);
    param_1[2] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  if ((void *)param_1[9] != (void *)0x0) {
    *(undefined4 *)(param_1 + 10) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[9]);
    param_1[9] = 0;
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[0xb]);
    param_1[0xb] = 0;
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  param_1[6] = 0;
  param_1[5] = 0;
  CAkMixConnections::~CAkMixConnections(param_1 + 7);
  *param_1 = &PTR_FUN_144cb0188;
  return;
}



// FUNCTION 1431828f0 FUN_1431828f0 body=590 status=ok
// SIG undefined FUN_1431828f0(void)

void FUN_1431828f0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [16];
  
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x128) = 0x42ca0000;
  }
  plVar12 = param_2;
  if ((*(byte *)((longlong)param_2 + 0x364) & 4) == 0) {
    plVar12 = (longlong *)0x0;
    for (lVar3 = param_2[8]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x48)) {
      if (*(int *)(lVar3 + 0x164) == 0) {
        plVar12 = *(longlong **)(lVar3 + 0x60);
        lVar5 = *(longlong *)(lVar3 + 0xd0);
        lVar2 = (**(code **)(*param_2 + 8))(param_2);
        if (lVar5 == lVar2) break;
      }
    }
  }
  if (((*(byte *)(param_1 + 0x68) & 1) == 0) || ((*(byte *)(param_1 + 0x68) & 2) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  lVar3 = FUN_143181e00(param_1 + 0x38,param_1,param_2,plVar12,param_3,uVar1);
  if (lVar3 == 0) {
    return;
  }
  *(undefined8 *)(lVar3 + 0x40) = 0;
  if (param_2[6] == 0) {
    param_2[6] = lVar3;
  }
  else {
    *(longlong *)(param_2[5] + 0x40) = lVar3;
  }
  param_2[5] = lVar3;
  uVar4 = AkMixConnection::GetOutputBusCtx(lVar3);
  lVar5 = CAkOutputMgr::FindDevice(uVar4);
  if (lVar5 != 0) {
    puVar6 = (uint *)FUN_143182420(lVar3,local_res8);
    uVar7 = *puVar6;
    if ((uVar7 & 0xf00) != 0x100) goto LAB_143182b15;
    uVar8 = uVar7 >> 0xc & 0xffff7;
    uVar9 = uVar8 << 0xc;
    uVar7 = uVar7 - ((uVar7 >> 0xc) - uVar8 >> 3);
    uVar10 = uVar7 & 0xff | uVar9 | 0x100;
    if ((byte)uVar7 < 2) goto LAB_143182b15;
    iVar11 = 1;
    lVar3 = CAkKeyArray<AkChannelConfig,void_*,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkAssignmentMovePolicy<MapStruct<AkChannelConfig,void_*>_>_>
            ::Exists(lVar5 + 0x78,uVar10);
    if (lVar3 == 0) {
      lVar3 = FUN_143129a00(lVar5,uVar10);
      iVar11 = 2 - (uint)(lVar3 != 0);
    }
    if (((uVar9 & 0x4000) != 0) && (iVar11 == 1)) {
      uVar7 = (uVar9 & 0xffffb000) >> 0xc;
      uVar7 = uVar10 - (uVar8 - uVar7 >> 2) & 0xff | 0x100 | uVar7 << 0xc;
      lVar3 = CAkKeyArray<AkChannelConfig,void_*,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkAssignmentMovePolicy<MapStruct<AkChannelConfig,void_*>_>_>
              ::Exists(lVar5 + 0x78,uVar7);
      if (lVar3 == 0) {
        lVar3 = FUN_143129a00(lVar5,uVar7);
        iVar11 = 2 - (uint)(lVar3 != 0);
      }
    }
    if (iVar11 == 1) goto LAB_143182b15;
  }
  local_40 = 0;
  lVar3 = *(longlong *)(param_1 + 0x40);
  while (local_48 = lVar3, local_48 != 0) {
    if (*(longlong **)(local_48 + 0x58) == param_2) {
      if (local_48 != 0) {
        FUN_143183460(param_1,local_38,&local_48);
      }
      break;
    }
    local_40 = local_48;
    lVar3 = *(longlong *)(local_48 + 0x48);
  }
LAB_143182b15:
  if ((*(byte *)(param_1 + 0x68) & 4) != 0) {
    DAT_146b50d89 = 1;
  }
  return;
}



// FUNCTION 143182b40 FUN_143182b40 body=356 status=ok
// SIG undefined FUN_143182b40(void)

void FUN_143182b40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x30);
  if (lVar9 == 0) {
    return;
  }
  puVar10 = (undefined8 *)0x0;
LAB_143182b80:
  puVar1 = *(undefined8 **)(*(longlong *)(lVar9 + 0x50) + 0x40);
  puVar3 = puVar10;
  while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
    lVar6 = FARSupportInterface::GetXRTrackingSystem(puVar2);
    if (lVar6 == param_1) {
      lVar9 = *(longlong *)(lVar9 + 0x50);
      if (*(longlong *)(lVar9 + 8) != 0) {
        *(undefined4 *)(*(longlong *)(lVar9 + 8) + 0x128) = 0x42ca0000;
      }
      if ((*(byte *)(lVar9 + 0x68) & 4) != 0) {
        DAT_146b50d89 = 1;
      }
      lVar6 = FARSupportInterface::GetXRTrackingSystem(puVar2);
      puVar1 = *(undefined8 **)(lVar6 + 0x30);
      puVar5 = puVar1;
      puVar7 = puVar1;
      puVar8 = puVar10;
      if (puVar1 == (undefined8 *)0x0) goto LAB_143182c26;
      goto LAB_143182c13;
    }
    puVar3 = puVar2;
    puVar1 = (undefined8 *)puVar2[9];
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x40);
    if (lVar9 == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x30) = lVar9;
    }
  }
  goto LAB_143182c7c;
  while (puVar5 = (undefined8 *)puVar7[8], puVar8 = puVar7,
        (undefined8 *)puVar7[8] != (undefined8 *)0x0) {
LAB_143182c13:
    puVar7 = puVar5;
    if (puVar7 == puVar2) goto LAB_143182c26;
  }
LAB_143182c48:
  if (puVar2 == *(undefined8 **)(lVar9 + 0x40)) {
    *(undefined8 *)(lVar9 + 0x40) = puVar2[9];
  }
  else {
    puVar3[9] = puVar2[9];
  }
  lVar4 = g_LEngineDefaultPoolId;
  (**(code **)*puVar2)(puVar2,0);
  AK::MemoryMgr::Falign(lVar4,puVar2);
LAB_143182c7c:
  lVar9 = *(longlong *)(param_1 + 0x30);
  if (lVar9 == 0) {
    return;
  }
  goto LAB_143182b80;
LAB_143182c26:
  if (puVar7 != (undefined8 *)0x0) {
    if (puVar7 == puVar1) {
      *(undefined8 *)(lVar6 + 0x30) = puVar7[8];
    }
    else {
      puVar8[8] = puVar7[8];
    }
    if (puVar7 == *(undefined8 **)(lVar6 + 0x28)) {
      *(undefined8 **)(lVar6 + 0x28) = puVar8;
    }
  }
  goto LAB_143182c48;
}



// FUNCTION 143182cb0 GetFirstDirectConnection body=37 status=ok
// SIG undefined GetFirstDirectConnection(void)

longlong CAkVPL3dMixable::GetFirstDirectConnection(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(lVar1 + 0x164) == 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x48);
  }
  return lVar1;
}



// FUNCTION 143182ce0 FUN_143182ce0 body=58 status=ok
// SIG undefined FUN_143182ce0(void)

int FUN_143182ce0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  for (lVar1 = *(longlong *)(param_1 + 0x40); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x48)) {
    if (((*(uint *)(lVar1 + 0x168) >> 3 & 1) == 0) &&
       (*(int *)(*(longlong *)(lVar1 + 0x58) + 0x360) == param_2)) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}



// FUNCTION 143182d20 FUN_143182d20 body=154 status=ok
// SIG undefined FUN_143182d20(void)

int FUN_143182d20(longlong param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  iVar5 = 0;
  if (lVar4 != (ulonglong)*(uint *)(param_1 + 0x18) * 0x68 + lVar4) {
    lVar6 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x68 + lVar4;
    do {
      if (param_3 == 0) {
        cVar3 = FUN_143129850(param_2,*(undefined8 *)(lVar4 + 0x50));
        if (cVar3 != '\0') goto LAB_143182db6;
LAB_143182d74:
        bVar1 = false;
      }
      else {
        if ((param_3 != 1) ||
           (cVar3 = FUN_143129850(param_2,*(undefined8 *)(lVar4 + 0x50)), cVar3 != '\0'))
        goto LAB_143182d74;
LAB_143182db6:
        bVar1 = true;
      }
      iVar2 = iVar5 + 1;
      if (!bVar1) {
        iVar2 = iVar5;
      }
      iVar5 = iVar2;
      lVar4 = lVar4 + 0x68;
    } while (lVar4 != lVar6);
  }
  return iVar5;
}



// FUNCTION 143182dc0 FUN_143182dc0 body=163 status=ok
// SIG undefined FUN_143182dc0(void)

longlong FUN_143182dc0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != (ulonglong)*(uint *)(param_1 + 0x18) * 0x68 + lVar2) {
    do {
      if (param_3 == 0) {
        cVar1 = FUN_143129850(param_2,*(undefined8 *)(lVar2 + 0x50));
        if (cVar1 != '\0') {
LAB_143182e27:
          if (param_4 == 0) {
            return lVar2;
          }
          param_4 = param_4 + -1;
        }
      }
      else if ((param_3 == 1) &&
              (cVar1 = FUN_143129850(param_2,*(undefined8 *)(lVar2 + 0x50)), cVar1 == '\0'))
      goto LAB_143182e27;
      lVar2 = lVar2 + 0x68;
    } while (lVar2 != (ulonglong)*(uint *)(param_1 + 0x18) * 0x68 + *(longlong *)(param_1 + 0x10));
  }
  return 0;
}



// FUNCTION 143182e70 FUN_143182e70 body=1026 status=ok
// SIG undefined FUN_143182e70(void)

void FUN_143182e70(longlong param_1,longlong param_2,uint param_3,float param_4,char param_5,
                  undefined1 *param_6,byte *param_7,longlong param_8)

{
  float fVar1;
  byte bVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  byte *pbVar10;
  size_t _Size;
  uint uVar11;
  float fVar12;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined1 local_58 [32];
  
  bVar5 = true;
  bVar6 = true;
  for (lVar9 = *(longlong *)(param_1 + 0x40); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x48)) {
    if ((bVar6) && ((*(uint *)(lVar9 + 0x168) >> 1 & 1) != 0)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((bVar5) && ((*(byte *)(lVar9 + 0x168) & 1) != 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  if ((*(byte *)(param_1 + 0x68) & 2) == 0) {
    *param_7 = bVar5 ^ 1U;
    if ((bVar5 ^ 1U) == 0) goto LAB_143183252;
  }
  else {
    if ((bVar5 != false) && (bVar6)) {
      *param_7 = 0;
      goto LAB_143183252;
    }
    *param_7 = 1;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x17d) & 3) != 0) {
    *param_6 = 1;
    lVar9 = *(longlong *)(param_1 + 0x40);
    if ((*(byte *)(param_1 + 0x68) & 2) == 0) {
      for (; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x48)) {
        uVar11 = *(uint *)(lVar9 + 0x168);
        *(uint *)(lVar9 + 0x168) = uVar11 | 2;
        bVar5 = -4096.0 <= DAT_1467be0f4;
        *(undefined4 *)(lVar9 + 0x15c) = 0xc5800000;
        *(uint *)(lVar9 + 0x168) = uVar11 & 0xfffffffe | 2 | (uint)bVar5;
      }
LAB_143183101:
      *param_7 = 0;
      return;
    }
    bVar6 = true;
    if (lVar9 == 0) goto LAB_143183101;
    do {
      if ((bVar6) && ((*(uint *)(lVar9 + 0x168) >> 1 & 1) != 0)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      bVar4 = -4096.0 <= DAT_1467be0f4;
      *(undefined4 *)(lVar9 + 0x15c) = 0xc5800000;
      *(uint *)(lVar9 + 0x168) = *(uint *)(lVar9 + 0x168) & 0xfffffffe;
      *(uint *)(lVar9 + 0x168) = *(uint *)(lVar9 + 0x168) | (uint)bVar4;
      lVar9 = *(longlong *)(lVar9 + 0x48);
    } while (lVar9 != 0);
    if (bVar6) goto LAB_143183101;
  }
  fVar1 = *(float *)(param_1 + 0x20);
  uVar11 = param_3 & 0xff;
  if ((char)param_3 != '\0') {
    local_res10 = param_2;
    for (lVar9 = *(longlong *)(param_1 + 0x40); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x48)) {
      if (((byte)*(undefined4 *)(lVar9 + 0x168) & 3) != 3) {
        pbVar10 = (byte *)FUN_143182420(lVar9,&param_7);
        bVar2 = *pbVar10;
        if (uVar11 == *(byte *)(lVar9 + 0x150)) {
LAB_14318308a:
          param_2 = local_res10;
          if (*(longlong *)(lVar9 + 0x20) != 0) {
            uVar3 = *(undefined8 *)(lVar9 + 0x30);
            *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar9 + 0x38);
            *(undefined8 *)(lVar9 + 0x38) = uVar3;
          }
          if ((*(byte *)(lVar9 + 0x168) & 1) == 0) {
            fVar12 = param_4 * fVar1 * *(float *)(lVar9 + 0x158);
          }
          else {
            fVar12 = 0.0;
          }
          *(float *)(lVar9 + 0x14) = fVar12;
          if ((*(byte *)(local_res10 + 0x124) & 8) == 0) {
            FUN_14312fa90(local_res10,param_3,lVar9);
          }
          else if (*(int *)(param_1 + 0x18) != 0) {
            FUN_14312f520(local_res10,param_1 + 0x10,param_3,lVar9);
            FUN_14312fc60(param_2,param_1 + 0x10,param_3,lVar9);
          }
          if (param_8 != 0) {
            FUN_14312efe0(param_8,lVar9);
          }
          if ((*(uint *)(lVar9 + 0x168) >> 1 & 1) == 0) {
            if ((*(byte *)(param_1 + 0x68) & 2) == 0) {
              uVar8 = *(uint *)(lVar9 + 0x150);
              pbVar10 = (byte *)FUN_143182420(lVar9,local_58);
              uVar8 = (*pbVar10 + 3 & 0xfffffffc) * (uVar8 & 0xff);
              if (uVar8 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (*(void **)(lVar9 + 0x38),*(void **)(lVar9 + 0x30),(ulonglong)uVar8 << 2);
              }
              *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar9 + 0x14);
              *(undefined4 *)(lVar9 + 0x18) = *(undefined4 *)(lVar9 + 0x1c);
              if (param_5 != '\0') {
                *(undefined4 *)(lVar9 + 0x10) = 0;
              }
            }
          }
          else {
            uVar8 = *(uint *)(lVar9 + 0x150);
            pbVar10 = (byte *)FUN_143182420(lVar9,local_res8);
            uVar8 = (*pbVar10 + 3 & 0xfffffffc) * (uVar8 & 0xff);
            if (uVar8 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (*(void **)(lVar9 + 0x38),*(void **)(lVar9 + 0x30),(ulonglong)uVar8 << 2);
            }
            *(undefined4 *)(lVar9 + 0x10) = 0;
          }
        }
        else {
          AkAudioMix::Free(lVar9 + 0x20);
          iVar7 = AkAudioMix::Allocate(lVar9 + 0x20,uVar11,bVar2);
          param_2 = local_res10;
          if (iVar7 == 1) {
            uVar8 = (bVar2 + 3 & 0xfffffffc) * uVar11;
            if (uVar8 != 0) {
              _Size = (ulonglong)uVar8 << 2;
              _guard_xfg_dispatch_icall_nop(*(void **)(lVar9 + 0x38),0,_Size);
              _guard_xfg_dispatch_icall_nop(*(void **)(lVar9 + 0x30),0,_Size);
            }
            CAkSrcLpHpFilter::Term(lVar9 + 0xe0);
            iVar7 = CAkSrcLpHpFilter::Init(lVar9 + 0xe0,param_3,1);
            param_2 = local_res10;
            if (iVar7 == 1) goto LAB_14318308a;
          }
        }
      }
    }
    *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(param_2 + 0x130) = *(undefined8 *)(param_2 + 0x120);
  }
LAB_143183252:
  *param_6 = bVar5;
  return;
}



// FUNCTION 143183280 FUN_143183280 body=160 status=ok
// SIG undefined FUN_143183280(void)

undefined8 FUN_143183280(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  AKRESULT AVar2;
  void *pvVar3;
  undefined4 extraout_var;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  void *pvVar4;
  
  uVar7 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar3 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar7 << 4);
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  pvVar4 = (void *)*param_1;
  if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar3)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar6 != 0) {
      lVar5 = 0;
      do {
        uVar1 = ((undefined8 *)(lVar5 + *param_1))[1];
        *(undefined8 *)(lVar5 + (longlong)pvVar3) = *(undefined8 *)(lVar5 + *param_1);
        ((undefined8 *)(lVar5 + (longlong)pvVar3))[1] = uVar1;
        uVar6 = uVar6 - 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar6 != 0);
      pvVar4 = (void *)*param_1;
    }
    AVar2 = AK::MemoryMgr::Free(g_LEngineDefaultPoolId,pvVar4);
    pvVar4 = (void *)CONCAT44(extraout_var,AVar2);
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  *param_1 = (longlong)pvVar3;
  return CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
}



// FUNCTION 143183320 FUN_143183320 body=319 status=ok
// SIG undefined FUN_143183320(void)

char FUN_143183320(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 8);
  if ((*(byte *)((longlong)plVar5 + 0x17c) & 1) == 0) {
    (**(code **)(*plVar5 + 0x48))(plVar5,0);
  }
  else if ((*(byte *)((longlong)plVar5 + 0x17c) & 0x10) != 0) {
    (**(code **)(*plVar5 + 0x50))();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  cVar1 = FUN_14317c0f0(*(undefined8 *)(param_1 + 8));
  if (cVar1 == '\0') {
    return '\0';
  }
  FUN_14317b870(*(undefined8 *)(param_1 + 8),param_1 + 0x48);
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x170) + 0x80))();
  plVar5 = *(longlong **)(param_1 + 0x48);
  if (plVar5 != plVar5 + (ulonglong)*(uint *)(param_1 + 0x50) * 4) {
    do {
      if ((((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x48) != *plVar5) ||
           ((int)plVar5[2] == 2)) || (iVar3 != 10)) &&
         (plVar4 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,(int)plVar5[1],1)
         , plVar4 != (longlong *)0x0)) {
        cVar2 = CAkBus::IsMixingBus(plVar4);
        if (cVar2 != '\0') {
          FUN_143125b70(plVar4,plVar5,param_1);
        }
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      plVar5 = plVar5 + 4;
    } while (plVar5 != (longlong *)
                       ((ulonglong)*(uint *)(param_1 + 0x50) * 0x20 + *(longlong *)(param_1 + 0x48))
            );
  }
  return cVar1;
}



// FUNCTION 143183460 FUN_143183460 body=258 status=ok
// SIG undefined FUN_143183460(void)

longlong * FUN_143183460(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x128) = 0x42ca0000;
  }
  if ((*(byte *)(param_1 + 0x68) & 4) != 0) {
    DAT_146b50d89 = 1;
  }
  lVar1 = *param_3;
  lVar7 = FARSupportInterface::GetXRTrackingSystem(lVar1);
  lVar9 = 0;
  lVar2 = *(longlong *)(lVar7 + 0x30);
  lVar6 = lVar2;
  lVar8 = lVar2;
  if (lVar2 == 0) {
LAB_1431834d5:
    if (lVar8 != 0) {
      if (lVar8 == lVar2) {
        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar8 + 0x40);
      }
      else {
        *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)(lVar8 + 0x40);
      }
      if (lVar8 == *(longlong *)(lVar7 + 0x28)) {
        *(longlong *)(lVar7 + 0x28) = lVar9;
      }
    }
  }
  else {
    do {
      lVar8 = lVar6;
      if (lVar8 == lVar1) goto LAB_1431834d5;
      lVar6 = *(longlong *)(lVar8 + 0x40);
      lVar9 = lVar8;
    } while (*(longlong *)(lVar8 + 0x40) != 0);
  }
  puVar3 = (undefined8 *)*param_3;
  lVar1 = param_3[1];
  uVar4 = puVar3[9];
  if (puVar3 == *(undefined8 **)(param_1 + 0x40)) {
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
  else {
    *(undefined8 *)(lVar1 + 0x48) = uVar4;
  }
  local_18 = (undefined4)uVar4;
  uStack_14 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_10 = (undefined4)lVar1;
  uStack_c = (undefined4)((ulonglong)lVar1 >> 0x20);
  *(undefined4 *)param_3 = local_18;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_14;
  *(undefined4 *)(param_3 + 1) = uStack_10;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_c;
  lVar5 = g_LEngineDefaultPoolId;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,0);
    AK::MemoryMgr::Falign(lVar5,puVar3);
  }
  lVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar1;
  return param_2;
}



// FUNCTION 143183570 SetPreviousSilentOnAllConnections body=39 status=ok
// SIG undefined SetPreviousSilentOnAllConnections(void)

void CAkVPL3dMixable::SetPreviousSilentOnAllConnections(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    do {
      *(uint *)(lVar1 + 0x168) = *(uint *)(lVar1 + 0x168) & 0xfffffffd;
      *(uint *)(lVar1 + 0x168) = *(uint *)(lVar1 + 0x168) | (uint)param_2 * 2;
      lVar1 = *(longlong *)(lVar1 + 0x48);
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1431835a0 FUN_1431835a0 body=2388 status=ok
// SIG undefined FUN_1431835a0(void)

void FUN_1431835a0(longlong *param_1,char param_2)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_res8;
  undefined4 uStackX_c;
  char local_res10;
  float local_res18;
  longlong local_res20;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 local_f8 [184];
  
  lVar12 = param_1[1];
  local_res10 = param_2;
  local_res20 = lVar12;
  if ((*(byte *)(lVar12 + 0x8c) & 2) == 0) {
    fVar24 = 0.0;
  }
  else {
    fVar24 = (float)(**(code **)(*param_1 + 0x70))();
  }
  lVar4 = *(longlong *)(lVar12 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xc5800000;
  local_res8 = 1.4013e-45;
  uStackX_c = 0;
  if (lVar4 == 0) {
    fVar25 = 1.0;
  }
  else {
    fVar25 = (float)CAkModulatorPBIData::GetPeakOutput(lVar4,&local_res8);
  }
  lVar4 = param_1[8];
  fVar30 = 0.0;
  fVar2 = *(float *)(param_1 + 4);
  do {
    while( true ) {
      if (lVar4 == 0) {
        return;
      }
      iVar22 = *(int *)(lVar4 + 0x164);
      fVar28 = 0.0;
      lVar18 = *(longlong *)(lVar4 + 0xd0);
      lVar19 = param_1[2];
      if (iVar22 == 0) break;
      lVar12 = AkMixConnection::GetOutputBusCtx(lVar4);
      plVar13 = (longlong *)param_1[9];
      bVar6 = false;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar29 = 0.0;
      if (plVar13 != plVar13 + (ulonglong)*(uint *)(param_1 + 10) * 4) {
        do {
          iVar8 = AK::CAkBusCtx::ID(lVar12);
          if (((int)plVar13[1] == iVar8) && (*plVar13 == *(longlong *)(lVar12 + 8))) {
            fVar26 = fVar26 + *(float *)((longlong)plVar13 + 0xc);
            fVar27 = fVar27 + *(float *)((longlong)plVar13 + 0x14);
            fVar29 = fVar29 + *(float *)(plVar13 + 3);
            bVar6 = true;
          }
          plVar13 = plVar13 + 4;
        } while (plVar13 != (longlong *)((ulonglong)*(uint *)(param_1 + 10) * 0x20 + param_1[9]));
        if (!bVar6) goto LAB_1431838e3;
LAB_143183914:
        lVar12 = local_res20;
        *(float *)(lVar4 + 0xd8) = fVar27;
        *(float *)(lVar4 + 0xdc) = fVar29;
        param_2 = local_res10;
        if ((*(byte *)(local_res20 + 0x124) & 8) == 0) {
          fVar28 = 1.0;
        }
        else {
          lVar15 = (ulonglong)*(uint *)(param_1 + 3) * 0x68 + param_1[2];
          if (iVar22 == 1) {
            if (lVar19 != lVar15) {
              pfVar20 = (float *)(lVar19 + 0x34);
              fVar27 = fVar28;
              do {
                fVar28 = fVar27;
                if (lVar18 == *(longlong *)(pfVar20 + 7)) {
                  cVar7 = FUN_14317c220(lVar12);
                  fVar28 = *pfVar20;
                  if (cVar7 == '\0') {
                    if (fVar28 <= fVar27) {
                      fVar28 = fVar27;
                    }
                  }
                  else {
                    fVar28 = fVar27 + fVar28;
                  }
                }
                pfVar1 = pfVar20 + 0xd;
                pfVar20 = pfVar20 + 0x1a;
                fVar27 = fVar28;
                param_2 = local_res10;
              } while (pfVar1 != (float *)((ulonglong)*(uint *)(param_1 + 3) * 0x68 + param_1[2]));
            }
          }
          else if (lVar19 != lVar15) {
            pfVar20 = (float *)(lVar19 + 0x38);
            fVar27 = fVar28;
            do {
              fVar28 = fVar27;
              if (lVar18 == *(longlong *)(pfVar20 + 6)) {
                cVar7 = FUN_14317c220(lVar12);
                fVar28 = *pfVar20;
                if (cVar7 == '\0') {
                  if (fVar28 <= fVar27) {
                    fVar28 = fVar27;
                  }
                }
                else {
                  fVar28 = fVar27 + fVar28;
                }
              }
              pfVar1 = pfVar20 + 0xc;
              pfVar20 = pfVar20 + 0x1a;
              fVar27 = fVar28;
              param_2 = local_res10;
            } while (pfVar1 != (float *)((ulonglong)*(uint *)(param_1 + 3) * 0x68 + param_1[2]));
          }
        }
        goto LAB_1431839fb;
      }
LAB_1431838e3:
      fVar26 = 0.0;
      if ((*(byte *)(lVar4 + 0x168) & 1) == 0) goto LAB_143183914;
      plVar13 = (longlong *)FUN_143183460(param_1,local_f8);
      lVar4 = *plVar13;
      lVar12 = local_res20;
      param_2 = local_res10;
    }
    fVar26 = *(float *)(lVar12 + 0x90) * 0.05;
    if (-37.0 <= fVar26) {
      uVar14 = (uint)(longlong)(fVar26 * 27866352.0 + 1.0653532e+09);
      local_res18 = (float)(uVar14 & 0xff800000);
      local_res8 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
      fVar26 = ((local_res8 * 0.32518977 + 0.020805772) * local_res8 + 0.65304345) * local_res18;
    }
    else {
      fVar26 = 0.0;
    }
    if ((*(byte *)(lVar12 + 0x124) & 8) == 0) {
      fVar28 = 1.0;
    }
    else {
      fVar27 = fVar28;
      if (lVar19 != (ulonglong)*(uint *)(param_1 + 3) * 0x68 + lVar19) {
        do {
          fVar28 = fVar27;
          if (lVar18 == *(longlong *)(lVar19 + 0x50)) {
            cVar7 = FUN_14317c220(lVar12);
            fVar28 = *(float *)(lVar19 + 0x30);
            if (cVar7 == '\0') {
              if (fVar28 <= fVar27) {
                fVar28 = fVar27;
              }
            }
            else {
              fVar28 = fVar27 + fVar28;
            }
          }
          lVar19 = lVar19 + 0x68;
          fVar27 = fVar28;
        } while (lVar19 != (ulonglong)*(uint *)(param_1 + 3) * 0x68 + param_1[2]);
      }
      if (*(char *)(lVar12 + 0xe8) == '\0') {
        fVar26 = fVar26 * 1.0;
      }
      else {
        lVar19 = CAkRegisteredObj::GetConnectedListeners(*(undefined8 *)(lVar12 + 0x18));
        local_118 = (undefined4)lVar18;
        uStack_114 = (undefined4)((ulonglong)lVar18 >> 0x20);
        local_108 = local_118;
        uStack_104 = uStack_114;
        uStack_100 = 0;
        if (*(char *)(lVar19 + 0xb8) == '\0') {
          uVar11 = CAkConnectedListeners::GetDefault();
          uVar11 = CAkConnectedListeners::GetUserAssocs(uVar11);
          fVar27 = (float)CAkLstnrAssocs::GetGain(uVar11,&local_108);
          fVar26 = fVar27 * fVar26;
        }
        else {
          fVar27 = (float)CAkLstnrAssocs::GetGain(lVar19 + 0x20,&local_108);
          fVar26 = fVar27 * fVar26;
        }
      }
    }
    *(undefined4 *)(lVar4 + 0xd8) = *(undefined4 *)(lVar12 + 0x94);
    *(undefined4 *)(lVar4 + 0xdc) = *(undefined4 *)(lVar12 + 0x98);
LAB_1431839fb:
    fVar30 = fVar30 + fVar26 * fVar25 * fVar2 * fVar28;
    if (fVar30 <= 0.0) {
      uVar14 = *(uint *)(lVar4 + 0x168);
      uVar14 = (uVar14 * 2 ^ uVar14) & 2 ^ uVar14;
      *(uint *)(lVar4 + 0x168) = uVar14;
      fVar27 = DAT_1467be0f4;
      *(float *)(lVar4 + 0x158) = fVar26;
LAB_143183e06:
      *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar4 + 0x14);
      uVar3 = *(undefined4 *)(lVar4 + 0x1c);
      *(float *)(lVar4 + 0x1c) = fVar28;
      *(undefined4 *)(lVar4 + 0x18) = uVar3;
      *(undefined4 *)(lVar4 + 0x14) = 0;
      *(undefined4 *)(lVar4 + 0x15c) = 0xc5800000;
      *(uint *)(lVar4 + 0x168) = uVar14 & 0xfffffffe | (uint)(-4096.0 <= fVar27);
    }
    else {
      local_res8 = (float)(((uint)fVar30 & 0x7fffff) + 0x3f800000);
      fVar27 = local_res8 + 1.0;
      fVar27 = (23.162373 / (fVar27 * fVar27 * fVar27)) *
               (local_res8 * local_res8 * local_res8 - 1.0) +
               ((float)((uint)fVar30 >> 0x17 & 0xff) - 127.0) * 6.0206 +
               *(float *)(*(longlong *)(lVar4 + 0x58) + 0x24);
      uVar14 = *(uint *)(lVar4 + 0x168);
      uVar14 = (uVar14 * 2 ^ uVar14) & 2 ^ uVar14;
      *(uint *)(lVar4 + 0x168) = uVar14;
      if ((param_2 == '\0') || (DAT_1467be0f4 < fVar27)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      *(float *)(lVar4 + 0x15c) = fVar27;
      *(float *)(lVar4 + 0x158) = fVar26;
      *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar4 + 0x14);
      uVar3 = *(undefined4 *)(lVar4 + 0x1c);
      *(float *)(lVar4 + 0x1c) = fVar28;
      *(undefined4 *)(lVar4 + 0x18) = uVar3;
      *(uint *)(lVar4 + 0x168) = uVar14 & 0xfffffffe | uVar9;
      *(undefined4 *)(lVar4 + 0x14) = 0;
      if (*(float *)((longlong)param_1 + 0x24) <= fVar27 &&
          fVar27 != *(float *)((longlong)param_1 + 0x24)) {
        *(float *)((longlong)param_1 + 0x24) = fVar27;
      }
      uVar21 = *(ulonglong *)(lVar4 + 0x60);
      if (uVar21 != 0) {
        if (-37.0 <= fVar24 * 0.05) {
          uVar14 = (uint)(longlong)(fVar24 * 0.05 * 27866352.0 + 1.0653532e+09);
          local_res18 = (float)(uVar14 & 0xff800000);
          local_res8 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
          fVar26 = ((local_res8 * 0.32518977 + 0.020805772) * local_res8 + 0.65304345) * local_res18
          ;
        }
        else {
          fVar26 = 0.0;
        }
        if (-fVar24 < *(float *)(lVar12 + 0x88)) {
          local_res8 = (float)(((uint)(fVar26 * fVar30) & 0x7fffff) + 0x3f800000);
          fVar27 = local_res8 + 1.0;
          fVar26 = (23.162373 / (fVar27 * fVar27 * fVar27)) *
                   (local_res8 * local_res8 * local_res8 - 1.0) +
                   ((float)((uint)(fVar26 * fVar30) >> 0x17 & 0xff) - 127.0) * 6.0206;
          if (*(float *)(uVar21 + 0x368) <= fVar26 && fVar26 != *(float *)(uVar21 + 0x368)) {
            *(float *)(uVar21 + 0x368) = fVar26;
            uVar21 = *(ulonglong *)(lVar4 + 0x60);
          }
        }
        uVar14 = *(uint *)(param_1 + 0xc);
        iVar8 = 0;
        iVar22 = uVar14 - 1;
        if (-1 < iVar22) {
          do {
            iVar10 = (iVar22 - iVar8) / 2 + iVar8;
            puVar16 = (ulonglong *)((longlong)iVar10 * 0x10 + param_1[0xb]);
            if (uVar21 < *puVar16) {
              iVar22 = iVar10 + -1;
            }
            else {
              if (uVar21 <= *puVar16) {
                bVar6 = true;
                goto LAB_143183d69;
              }
              iVar8 = iVar10 + 1;
            }
          } while (iVar8 <= iVar22);
        }
        lVar12 = param_1[0xb];
        bVar6 = false;
        if (lVar12 == 0) {
          lVar18 = 0;
        }
        else {
          lVar18 = (longlong)iVar8 * 0x10 + lVar12;
        }
        if (lVar18 == 0) {
          if (((uVar14 < *(uint *)((longlong)param_1 + 100)) ||
              (cVar7 = FUN_143183280(param_1 + 0xb,1), cVar7 != '\0')) &&
             (uVar14 < *(uint *)((longlong)param_1 + 100))) {
            puVar16 = (ulonglong *)((ulonglong)*(uint *)(param_1 + 0xc) * 0x10 + param_1[0xb]);
            *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) + 1;
            goto LAB_143183d61;
          }
        }
        else if (((uVar14 < *(uint *)((longlong)param_1 + 100)) ||
                 (cVar7 = FUN_143183280(param_1 + 0xb,1), cVar7 != '\0')) &&
                (uVar14 < *(uint *)((longlong)param_1 + 100))) {
          lVar19 = param_1[0xb];
          uVar23 = lVar18 - lVar12 >> 4 & 0xffffffff;
          puVar17 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 0xc) * 0x10 + lVar19);
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) + 1;
          puVar5 = puVar17;
          if ((undefined8 *)(lVar19 + uVar23 * 0x10) < puVar17) {
            do {
              uVar11 = puVar5[-1];
              *puVar17 = puVar5[-2];
              puVar17[1] = uVar11;
              lVar19 = param_1[0xb];
              puVar17 = puVar17 + -2;
              puVar5 = puVar5 + -2;
            } while ((undefined8 *)(lVar19 + uVar23 * 0x10) < puVar17);
          }
          puVar16 = (ulonglong *)(lVar19 + uVar23 * 0x10);
LAB_143183d61:
          if (puVar16 != (ulonglong *)0x0) {
            *puVar16 = uVar21;
LAB_143183d69:
            if (puVar16 != (ulonglong *)0x0) {
              fVar26 = *(float *)(uVar21 + 0x378) + *(float *)(uVar21 + 0x24);
              fVar28 = *(float *)(lVar4 + 0x15c) - fVar26;
              if (0.0 < fVar28) {
                fVar26 = fVar28 * *(float *)(uVar21 + 0x37c) + fVar26;
              }
              if ((!bVar6) ||
                 (*(float *)(puVar16 + 1) <= fVar26 && fVar26 != *(float *)(puVar16 + 1))) {
                *(float *)(puVar16 + 1) = fVar26;
              }
              goto LAB_143183e3c;
            }
          }
        }
        uVar14 = *(uint *)(lVar4 + 0x168);
        uVar14 = (uVar14 * 2 ^ uVar14) & 2 ^ uVar14;
        *(uint *)(lVar4 + 0x168) = uVar14;
        fVar27 = DAT_1467be0f4;
        *(undefined4 *)(lVar4 + 0x158) = 0;
        goto LAB_143183e06;
      }
    }
LAB_143183e3c:
    lVar4 = *(longlong *)(lVar4 + 0x48);
    lVar12 = local_res20;
    param_2 = local_res10;
  } while( true );
}



// FUNCTION 143183f00 FUN_143183f00 body=382 status=ok
// SIG undefined FUN_143183f00(void)

void FUN_143183f00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  plVar5 = *(longlong **)(param_1 + 0x58);
  if (plVar5 != plVar5 + (ulonglong)*(uint *)(param_1 + 0x60) * 2) {
    do {
      lVar1 = *plVar5;
      fVar8 = *(float *)(lVar1 + 0x370);
      if (*(float *)(lVar1 + 0x370) <= *(float *)(plVar5 + 1)) {
        fVar8 = *(float *)(plVar5 + 1);
      }
      fVar8 = *(float *)(lVar1 + 0x24) - fVar8;
      fVar6 = fVar8 * 0.05;
      if (-37.0 <= fVar6) {
        uVar4 = (uint)(longlong)(fVar6 * 27866352.0 + 1.0653532e+09);
        fVar6 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                (float)(uVar4 & 0xff800000);
      }
      else {
        fVar6 = 0.0;
      }
      for (lVar2 = *(longlong *)(param_1 + 0x40); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x48)) {
        if (*(longlong *)(lVar2 + 0x60) == lVar1) {
          fVar7 = fVar8 + *(float *)(lVar2 + 0x15c);
          *(float *)(lVar2 + 0x158) = fVar6 * *(float *)(lVar2 + 0x158);
          bVar3 = fVar7 <= DAT_1467be0f4;
          *(float *)(lVar2 + 0x15c) = fVar7;
          *(uint *)(lVar2 + 0x168) = *(uint *)(lVar2 + 0x168) & 0xfffffffe;
          *(uint *)(lVar2 + 0x168) = *(uint *)(lVar2 + 0x168) | (uint)bVar3;
        }
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != (longlong *)
                       ((ulonglong)*(uint *)(param_1 + 0x60) * 0x10 + *(longlong *)(param_1 + 0x58))
            );
  }
  return;
}



// FUNCTION 143184080 FUN_143184080 body=492 status=ok
// SIG undefined FUN_143184080(void)

void FUN_143184080(longlong param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float local_res8 [2];
  float local_res10;
  
  lVar7 = *(longlong *)(param_1 + 8);
  fVar8 = *(float *)(lVar7 + 0x68) * 0.05;
  if (-37.0 <= fVar8) {
    uVar6 = (uint)(longlong)(fVar8 * 27866352.0 + 1.0653532e+09);
    local_res10 = (float)(uVar6 & 0xff800000);
    local_res8[0] = (float)((uVar6 & 0x7fffff) + 0x3f800000);
    fVar8 = ((local_res8[0] * 0.32518977 + 0.020805772) * local_res8[0] + 0.65304345) * local_res10;
  }
  else {
    fVar8 = 0.0;
  }
  bVar3 = *(byte *)(lVar7 + 0x124);
  *(float *)(param_1 + 0x20) = fVar8 * *(float *)(lVar7 + 0x6c);
  if (((bVar3 & 8) != 0) && (iVar4 = FUN_14317adc0(lVar7,param_1 + 0x10), iVar4 != 0)) {
    lVar5 = AkPositioningParams::GetRawAttenuation(lVar7 + 0x138);
    if (lVar5 != 0) {
      uVar2 = *(undefined4 *)(lVar7 + 0x140);
      lVar7 = *(longlong *)(param_1 + 0x10);
      do {
        FUN_143131a30(lVar5,uVar2,lVar7);
        lVar7 = lVar7 + 0x68;
      } while (lVar7 != (ulonglong)*(uint *)(param_1 + 0x18) * 0x68 + *(longlong *)(param_1 + 0x10))
      ;
    }
    if ((DAT_146b50b68[3] != '\0') &&
       (pcVar1 = DAT_146b50b68 + 0x38, *(longlong *)(DAT_146b50b68 + 0x38) != 0)) {
      lVar7 = *(longlong *)(param_1 + 0x10);
      do {
        fVar8 = (float)FUN_143131860(pcVar1,*(float *)(lVar7 + 0x3c) * 100.0,0,local_res8);
        *(float *)(lVar7 + 0x30) = fVar8 * *(float *)(lVar7 + 0x30);
        *(float *)(lVar7 + 0x34) = fVar8 * *(float *)(lVar7 + 0x34);
        *(float *)(lVar7 + 0x38) = fVar8 * *(float *)(lVar7 + 0x38);
        lVar7 = lVar7 + 0x68;
      } while (lVar7 != (ulonglong)*(uint *)(param_1 + 0x18) * 0x68 + *(longlong *)(param_1 + 0x10))
      ;
    }
    if ((*DAT_146b50b68 != '\0') &&
       (pcVar1 = DAT_146b50b68 + 8, *(longlong *)(DAT_146b50b68 + 8) != 0)) {
      lVar7 = *(longlong *)(param_1 + 0x10);
      do {
        fVar8 = (float)FUN_143131860(pcVar1,*(float *)(lVar7 + 0x40) * 100.0,0,local_res8);
        *(float *)(lVar7 + 0x30) = fVar8 * *(float *)(lVar7 + 0x30);
        lVar7 = lVar7 + 0x68;
      } while (lVar7 != (ulonglong)*(uint *)(param_1 + 0x18) * 0x68 + *(longlong *)(param_1 + 0x10))
      ;
    }
  }
  return;
}



// FUNCTION 143184270 CAkBusFXContext body=40 status=ok
// SIG undefined CAkBusFXContext(void)

undefined8 *
CAkBusFXContext::CAkBusFXContext
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145acb280;
  param_1[4] = param_2;
  uVar1 = param_4[1];
  param_1[5] = *param_4;
  param_1[6] = uVar1;
  return param_1;
}



// FUNCTION 1431842a0 CAkInsertFXContext body=32 status=ok
// SIG undefined CAkInsertFXContext(void)

undefined8 *
CAkInsertFXContext::CAkInsertFXContext(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145acb1f8;
  param_1[4] = param_2;
  return param_1;
}



// FUNCTION 1431842c0 FUN_1431842c0 body=63 status=ok
// SIG undefined FUN_1431842c0(void)

void FUN_1431842c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((*param_1 != 0) && (*(int *)((longlong)param_1 + 0xc) != -1)) {
    FUN_143159ab0(DAT_146b50b18);
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431842f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 143184300 FUN_143184300 body=158 status=ok
// SIG undefined FUN_143184300(void)

void FUN_143184300(longlong *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + (longlong)pvVar3);
    if (pvVar3 != pvVar2) {
      plVar4 = (longlong *)((longlong)pvVar3 + 0x18);
      do {
        if ((plVar4[-2] != 0) && (*(int *)((longlong)plVar4 + -4) != -1)) {
          FUN_143159ab0(DAT_146b50b18);
          puVar1 = (undefined8 *)*plVar4;
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,0);
          }
        }
        pvVar3 = (void *)((longlong)pvVar3 + 0x20);
        plVar4 = plVar4 + 4;
      } while (pvVar3 != pvVar2);
      pvVar3 = (void *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,pvVar3);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1431843a0 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__145acb170;
  FUN_143184300(this + 0x10);
  *(undefined ***)this = &PTR_FUN_144cb0f40;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x38);
  }
  return this;
}



// FUNCTION 1431843f0 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D12DynamicRHIModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acb170;
  FUN_143184300(param_1 + 2);
  *param_1 = &PTR_FUN_144cb0f40;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143184440 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkInsertFXContext::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acb170;
  FUN_143184300(param_1 + 2);
  *param_1 = &PTR_FUN_144cb0f40;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143184490 FUN_143184490 body=240 status=ok
// SIG undefined FUN_143184490(void)

longlong * FUN_143184490(undefined8 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *local_res20;
  longlong local_28;
  int local_20;
  
  plVar3 = (longlong *)0x0;
  local_res20 = (undefined8 *)0x0;
  FUN_143155b70(DAT_146b50b18,&local_28,param_3,&local_res20);
  if (local_28 == 0) {
    return (longlong *)0x0;
  }
  piVar1 = (int *)*param_1;
  piVar2 = piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 8;
  for (; (piVar1 != piVar2 && (*piVar1 != param_2)); piVar1 = piVar1 + 8) {
  }
  plVar4 = (longlong *)(piVar1 + 2);
  if (piVar1 == piVar2) {
    plVar4 = plVar3;
  }
  if (plVar4 == (longlong *)0x0) {
    piVar1 = (int *)FUN_143184580(param_1);
    if (piVar1 != (int *)0x0) {
      *piVar1 = param_2;
      plVar3 = (longlong *)(piVar1 + 2);
    }
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      FUN_143159ab0(DAT_146b50b18,param_3);
      if (local_res20 == (undefined8 *)0x0) {
        return (longlong *)0x0;
      }
      (**(code **)*local_res20)(local_res20,0);
      return (longlong *)0x0;
    }
  }
  *plVar4 = local_28;
  *(int *)(plVar4 + 1) = local_20;
  *(int *)((longlong)plVar4 + 0xc) = param_3;
  plVar4[2] = (longlong)local_res20;
  return plVar4;
}



// FUNCTION 143184580 FUN_143184580 body=363 status=ok
// SIG undefined FUN_143184580(void)

longlong FUN_143184580(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  void *pvVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar4 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar1 << 5);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    pvVar6 = (void *)*param_1;
    if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar4)) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 1);
      if (uVar8 != 0) {
        puVar7 = (undefined4 *)((longlong)pvVar4 + 0x14);
        do {
          if (puVar7 + -5 != (undefined4 *)0x0) {
            *(undefined8 *)(puVar7 + -3) = 0;
            puVar7[-1] = 0;
            *puVar7 = 0xffffffff;
            *(undefined8 *)(puVar7 + 1) = 0;
          }
          FUN_143184c30(puVar7 + -5,(longlong)puVar7 + *param_1 + (-0x14 - (longlong)pvVar4));
          lVar5 = *param_1 + (-0x14 - (longlong)pvVar4);
          if ((*(longlong *)((longlong)puVar7 + lVar5 + 8) != 0) &&
             (*(int *)((longlong)puVar7 + lVar5 + 0x14) != -1)) {
            FUN_143159ab0(DAT_146b50b18);
            puVar3 = *(undefined8 **)((longlong)puVar7 + lVar5 + 0x18);
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,0);
            }
          }
          puVar7 = puVar7 + 8;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        pvVar6 = (void *)*param_1;
      }
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,pvVar6);
    }
    *param_1 = (longlong)pvVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    if (uVar1 <= uVar2) {
      return 0;
    }
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  lVar5 = (ulonglong)uVar2 * 0x20 + *param_1;
  if (lVar5 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar5 + 8) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0x14) = 0xffffffff;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  return lVar5;
}



// FUNCTION 1431846f0 FUN_1431846f0 body=224 status=ok
// SIG undefined FUN_1431846f0(void)

undefined8 FUN_1431846f0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *local_res18 [2];
  longlong local_18 [2];
  
  cVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (cVar2 != '\0') {
    local_res18[0] = (undefined8 *)0x0;
    FUN_143155b70(DAT_146b50b18,local_18,*(undefined4 *)((longlong)param_2 + 0xc),local_res18);
    if (local_18[0] != 0) {
      iVar3 = (**(code **)(*param_3 + 0x28))(param_3,local_18[0],*param_2);
      if (iVar3 == 1) {
        if ((*param_2 != 0) && (*(int *)((longlong)param_2 + 0xc) != -1)) {
          FUN_143159ab0(DAT_146b50b18);
          puVar1 = (undefined8 *)param_2[2];
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,0);
          }
        }
        *param_2 = local_18[0];
        param_2[2] = (longlong)local_res18[0];
        return 1;
      }
      if (local_18[0] != 0) {
        FUN_143159ab0(DAT_146b50b18,*(undefined4 *)((longlong)param_2 + 0xc));
        if (local_res18[0] != (undefined8 *)0x0) {
          (**(code **)*local_res18[0])(local_res18[0],0);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143184870 GetOutputID body=23 status=ok
// SIG undefined GetOutputID(void)

undefined8 CAkBusFXContext::GetOutputID(longlong param_1)

{
  CAkBusVolumes::_GetOutputID(*(undefined8 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 1431848b0 GetParentChannelConfig body=71 status=ok
// SIG undefined GetParentChannelConfig(void)

undefined8 CAkInsertFXContext::GetParentChannelConfig(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined1 local_res8 [32];
  
  *(undefined1 *)param_2 = 0;
  *param_2 = *param_2 & 0xff;
  lVar1 = CAkVPL3dMixable::GetFirstDirectConnection(*(undefined8 *)(param_1 + 0x20));
  if (lVar1 != 0) {
    puVar2 = (uint *)FUN_143182420(lVar1,local_res8);
    *param_2 = *puVar2;
    return 1;
  }
  return 2;
}



// FUNCTION 143184920 GetPluginMedia body=179 status=ok
// SIG undefined GetPluginMedia(void)

void CAkBusFXContext::GetPluginMedia(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_res8 [2];
  
  piVar1 = *(int **)(param_1 + 0x10);
  piVar3 = piVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 8;
  for (; (piVar1 != piVar3 && (*piVar1 != param_2)); piVar1 = piVar1 + 8) {
  }
  piVar2 = piVar1 + 2;
  if (piVar1 == piVar3) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 == (int *)0x0) {
    local_res8[0] = -1;
    AK::CAkBusCtx::GetFXDataID(param_1 + 0x28,*(undefined4 *)(param_1 + 8),param_2,local_res8);
    if ((local_res8[0] == -1) ||
       (piVar2 = (int *)FUN_143184490(param_1 + 0x10,param_2), piVar2 == (int *)0x0)) {
      *param_3 = 0;
      *param_4 = 0;
      return;
    }
  }
  *param_4 = piVar2[2];
  *param_3 = *(undefined8 *)piVar2;
  return;
}



// FUNCTION 1431849e0 GetPluginMedia body=194 status=ok
// SIG undefined GetPluginMedia(void)

void CAkInsertFXContext::GetPluginMedia
               (longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_res8 [2];
  
  piVar3 = *(int **)(param_1 + 0x10);
  piVar4 = piVar3 + (ulonglong)*(uint *)(param_1 + 0x18) * 8;
  for (; (piVar3 != piVar4 && (*piVar3 != param_2)); piVar3 = piVar3 + 8) {
  }
  piVar2 = piVar3 + 2;
  if (piVar3 == piVar4) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 == (int *)0x0) {
    local_res8[0] = -1;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
    piVar3 = (int *)(lVar1 + -0x18);
    if (lVar1 == 0) {
      piVar3 = (int *)0x0;
    }
    CAkPBI::GetFXDataID(piVar3,*(undefined4 *)(param_1 + 8),param_2,local_res8);
    if ((local_res8[0] == -1) ||
       (piVar2 = (int *)FUN_143184490(param_1 + 0x10,param_2), piVar2 == (int *)0x0)) {
      *param_3 = 0;
      *param_4 = 0;
      return;
    }
  }
  *param_4 = piVar2[2];
  *param_3 = *(undefined8 *)piVar2;
  return;
}



// FUNCTION 143184ac0 IsUsingThisSlot body=309 status=ok
// SIG undefined IsUsingThisSlot(void)

undefined8
CAkEffectContextBase::IsUsingThisSlot(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *local_res8;
  longlong local_28 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != (ulonglong)*(uint *)(param_1 + 0x18) * 0x20 + lVar4) {
    plVar5 = (longlong *)(lVar4 + 0x18);
    do {
      if (*plVar5 == param_2) {
        cVar2 = (**(code **)(*param_3 + 0x20))(param_3);
        if (cVar2 == '\0') {
          return 1;
        }
        local_res8 = (undefined8 *)0x0;
        FUN_143155b70(DAT_146b50b18,local_28,*(undefined4 *)((longlong)plVar5 + -4),&local_res8);
        if (local_28[0] == 0) {
          return 1;
        }
        iVar3 = (**(code **)(*param_3 + 0x28))(param_3,local_28[0],plVar5[-2]);
        if (iVar3 != 1) {
          if (local_28[0] == 0) {
            return 1;
          }
          FUN_143159ab0(DAT_146b50b18,*(undefined4 *)((longlong)plVar5 + -4));
          if (local_res8 == (undefined8 *)0x0) {
            return 1;
          }
          (**(code **)*local_res8)(local_res8,0);
          return 1;
        }
        if ((plVar5[-2] != 0) && (*(int *)((longlong)plVar5 + -4) != -1)) {
          FUN_143159ab0(DAT_146b50b18);
          puVar1 = (undefined8 *)*plVar5;
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,0);
          }
        }
        plVar5[-2] = local_28[0];
        *plVar5 = (longlong)local_res8;
      }
      lVar4 = lVar4 + 0x20;
      plVar5 = plVar5 + 4;
    } while (lVar4 != (ulonglong)*(uint *)(param_1 + 0x18) * 0x20 + *(longlong *)(param_1 + 0x10));
  }
  return 0;
}



// FUNCTION 143184c00 PostMonitorMessage body=45 status=ok
// SIG undefined PostMonitorMessage(void)

void CAkEffectContextBase::PostMonitorMessage
               (undefined8 param_1,ErrorCode param_2,ErrorLevel param_3)

{
  AK::Monitor::PostCode(param_2,param_3,0,0xffffffffffffffff,0,false);
  return;
}



// FUNCTION 143184c30 FUN_143184c30 body=122 status=ok
// SIG undefined FUN_143184c30(void)

void FUN_143184c30(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  if ((*(longlong *)(param_1 + 2) != 0) && (param_1[5] != -1)) {
    FUN_143159ab0(DAT_146b50b18);
    puVar1 = *(undefined8 **)(param_1 + 6);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
    }
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  param_2[5] = 0xffffffff;
  return;
}



// FUNCTION 143184cb0 _Compute3DPositioning body=99 status=ok
// SIG undefined _Compute3DPositioning(void)

void CAkBusFXContext::_Compute3DPositioning(longlong param_1)

{
  CAkBusFX::_Compute3DPositioning(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143184d20 FUN_143184d20 body=1010 status=ok
// SIG undefined FUN_143184d20(void)

undefined8 * FUN_143184d20(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xc5800000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xf9 | 1;
  *param_1 = &PTR__scalar_deleting_destructor__145acb318;
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffffffffffff;
  CAkMixer::CAkMixer(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xff;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x2b;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0x80;
  *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) & 0xe0;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
  *param_1 = &PTR__scalar_deleting_destructor__145acb3e8;
  param_1[0x1a] = &PTR_LAB_145acb470;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0xff;
  *(undefined1 *)(param_1 + 0x22) = 0xff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x1b] = &PTR__scalar_deleting_destructor__145acb398;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0xff;
  *(undefined1 *)(param_1 + 0x32) = 0xff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x2b] = &PTR__scalar_deleting_destructor__145acb398;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0xff;
  *(undefined1 *)(param_1 + 0x42) = 0xff;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x3b] = &PTR__scalar_deleting_destructor__145acb398;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0xff;
  *(undefined1 *)(param_1 + 0x52) = 0xff;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x4b] = &PTR__scalar_deleting_destructor__145acb398;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xff;
  param_1[0x5b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0x2b;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(uint *)(param_1 + 0x5f) = *(uint *)(param_1 + 0x5f) & 0xff;
  param_1[0x5e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0x2b;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(uint *)(param_1 + 0x62) = *(uint *)(param_1 + 0x62) & 0xff;
  param_1[0x61] = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0x2b;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(uint *)(param_1 + 0x65) = *(uint *)(param_1 + 0x65) & 0xff;
  param_1[100] = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0x2b;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(byte *)((longlong)param_1 + 0x354) = *(byte *)((longlong)param_1 + 0x354) & 0xfc;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  param_1[0x2c] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
  param_1[0x3c] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
  param_1[0x4c] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  return param_1;
}



// FUNCTION 143185120 FUN_143185120 body=354 status=ok
// SIG undefined FUN_143185120(void)

void FUN_143185120(undefined8 *param_1)

{
  longlong *plVar1;
  long lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__145acb3e8;
  param_1[0x1a] = &PTR_LAB_145acb470;
  FUN_143186cd0();
  plVar4 = (longlong *)param_1[0x67];
  if (plVar4 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar4[0xc];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_1467be108);
      *(undefined8 *)(param_1[0x67] + 0x60) = 0;
      plVar4 = (longlong *)param_1[0x67];
    }
    (**(code **)(*plVar4 + 0x20))(plVar4);
    *(undefined4 *)(param_1[0x67] + 0x68) = 0xffffffff;
    lVar2 = g_LEngineDefaultPoolId;
    puVar3 = (undefined8 *)param_1[0x67];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      AK::MemoryMgr::Free(lVar2,puVar3);
      param_1[0x67] = 0;
    }
  }
  lVar2 = g_LEngineDefaultPoolId;
  puVar3 = (undefined8 *)param_1[0x17];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,0);
    AK::MemoryMgr::Free(lVar2,puVar3);
    param_1[0x17] = 0;
  }
  FUN_143184300(param_1 + 0x68);
  lVar5 = 4;
  puVar3 = param_1 + 0x5b;
  do {
    puVar3 = puVar3 + -0x10;
    *puVar3 = &PTR__scalar_deleting_destructor__145ac6a78;
    FUN_14318ccc0(puVar3);
    *puVar3 = &PTR_FUN_144024f50;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0x1a] = &PTR_FUN_144cb0f40;
  *param_1 = &PTR__scalar_deleting_destructor__145acb318;
  FUN_143182750(param_1);
  return;
}



// FUNCTION 143185290 FUN_143185290 body=173 status=ok
// SIG undefined FUN_143185290(void)

void FUN_143185290(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_145ac6908;
  param_1[0x1a] = &PTR_LAB_145ac6990;
  FUN_143182b40();
  FUN_143186cd0(param_1);
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
    lVar3 = g_LEngineDefaultPoolId;
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(lVar3,puVar2);
    }
    param_1[1] = 0;
  }
  if ((void *)param_1[0x13] != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)param_1[0x13]);
    param_1[0x13] = 0;
  }
  FUN_143185120(param_1);
  return;
}



// FUNCTION 143185350 `scalar_deleting_destructor' body=236 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * AkMeterCtx::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acb5f0;
  if ((void *)param_1[2] != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)param_1[3]);
    param_1[3] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)param_1[4]);
    param_1[4] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)param_1[6]);
    param_1[6] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)param_1[5]);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[7]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[8]);
  }
  *param_1 = &PTR_FUN_143fca6f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 143185440 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 AUGTrap::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_143185120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x358);
  }
  return param_1;
}



// FUNCTION 143185480 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * UChaosClothConfig::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acb318;
  FUN_143182750();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1431854c0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkBusFX::FX::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac6a78;
  FUN_14318ccc0();
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 143185510 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkBusFX::MixerFX::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac6a78;
  FUN_14318ccc0();
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143185560 FUN_143185560 body=387 status=ok
// SIG undefined FUN_143185560(void)

void FUN_143185560(longlong param_1,undefined8 param_2,float *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8,uint param_9
                  ,void *param_10)

{
  uint uVar1;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  
  local_78 = param_3[4];
  local_70 = *param_3;
  local_6c = param_3[1];
  local_68 = param_3[2];
  local_7c = param_3[3];
  local_88 = local_68 * local_78 - local_6c * param_3[5];
  local_84 = local_70 * param_3[5] - local_68 * local_7c;
  local_80 = local_6c * local_7c - local_70 * local_78;
  local_74 = param_3[5];
  uVar1 = ((param_9 & 0xff) + 3 & 0xfffffffc) * (param_7 & 0xff);
  if (uVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(param_10,0,(ulonglong)uVar1 << 2);
  }
  CAkBusFX::_Compute3DPositioning
            (param_1 + -0xd0,param_2,param_4,param_5,param_6,param_10,param_7,param_8,param_9,
             param_3 + 6,&local_88);
  return;
}



// FUNCTION 1431856f0 FUN_1431856f0 body=461 status=ok
// SIG undefined FUN_1431856f0(void)

undefined8
FUN_1431856f0(longlong param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5,
             uint param_6,undefined4 param_7,uint param_8,undefined4 param_9,void *param_10)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  float local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float fVar4;
  
  if ((param_4 < 0.0) || (param_5 < 0.0)) {
    uVar2 = 0x1f;
  }
  else {
    uVar1 = ((param_8 & 0xff) + 3 & 0xfffffffc) * (param_6 & 0xff);
    if (uVar1 != 0) {
      _guard_xfg_dispatch_icall_nop(param_10,0,(ulonglong)uVar1 << 2);
    }
    uVar2 = __libm_sse2_sincosf_(param_3);
    fVar4 = (float)((ulonglong)uVar2 >> 0x20);
    uVar3 = __libm_sse2_sincosf_(param_2);
    local_88 = (float)((ulonglong)uVar3 >> 0x20) * fVar4;
    local_90 = (float)uVar3 * fVar4;
    local_a8 = 0;
    uStack_a0 = 0x3f800000;
    local_98 = 0x3f800000;
    local_b8 = 0;
    local_b0 = 0;
    local_80 = 0x3f800000;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    local_60 = 0x3f800000;
    local_70 = 0x3f800000;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    local_8c = (int)uVar2;
    uVar2 = CAkBusFX::_Compute3DPositioning
                      (param_1 + -0xd0,0x3f800000,param_9,param_4,param_5,param_10,param_6,param_7,
                       param_8,&local_b8,&local_80);
  }
  return uVar2;
}



// FUNCTION 1431858c0 ComputeKPower body=2283 status=ok
// SIG undefined ComputeKPower(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void AkMeterCtx::ComputeKPower(longlong param_1,float param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ushort uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  float *pfVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  float *pfVar21;
  undefined4 *puVar22;
  float *pfVar23;
  uint uVar24;
  byte bVar25;
  byte bVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 auStack_f0 [3];
  float afStack_d4 [3];
  float local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98 [24];
  
  if ((*(uint *)(param_3 + 1) & 0xf00) == 0x100) {
    uVar19 = *(uint *)(param_3 + 1) >> 0xc;
    bVar25 = 0;
    uVar20 = uVar19 & 0x637;
    for (uVar15 = uVar20; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
      bVar25 = bVar25 + 1;
    }
    lVar28 = *(longlong *)(param_1 + 0x38);
    fVar37 = 0.0;
    lVar34 = *(longlong *)(param_1 + 0x40);
    fVar38 = 0.0;
    pfVar23 = (float *)*param_3;
    uVar15 = (uint)bVar25;
    local_c0 = lVar28;
    uVar16 = (ulonglong)uVar15 * 0x10;
    local_a8 = lVar34;
    uVar14 = uVar16 + 0xf;
    if (uVar14 <= uVar16) {
      uVar14 = 0xffffffffffffff0;
    }
    auStack_f0[0] = 0x1431859a0;
    lVar11 = -(uVar14 & 0xfffffffffffffff0);
    uVar14 = uVar16 + 0xf;
    lVar30 = (longlong)local_c8 + lVar11;
    local_b8 = lVar30;
    if (uVar14 <= uVar16) {
      uVar14 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_f0 + lVar11) = 0x1431859c1;
    uVar16 = 0;
    uVar24 = 0;
    lVar12 = (lVar11 - (uVar14 & 0xfffffffffffffff0)) + -200;
    uVar13 = uVar24;
    if (3 < uVar15) {
      lVar29 = lVar12 - lVar30;
      lVar27 = lVar34 - local_c0;
      uVar13 = (uVar15 - 4 >> 2) + 1;
      uVar14 = (ulonglong)uVar13;
      uVar13 = uVar13 * 4;
      puVar18 = (undefined4 *)((longlong)&local_c0 + lVar11);
      puVar22 = (undefined4 *)(lVar28 + 0x2c);
      do {
        puVar2 = puVar22 + 0x24;
        puVar18[-2] = puVar22[-0xb];
        puVar1 = puVar18 + 0x10;
        puVar18[-1] = puVar22[-10];
        *puVar18 = puVar22[-9];
        puVar18[1] = puVar22[-8];
        *(undefined4 *)((longlong)puVar18 + (longlong)afStack_d4 + lVar29 + 0xcc) =
             *(undefined4 *)(lVar27 + -0xbc + (longlong)puVar2);
        *(undefined4 *)((longlong)auStack_f0 + lVar29 + 0xac + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0xb8 + (longlong)puVar2);
        *(undefined4 *)((longlong)auStack_f0 + lVar29 + 0xb0 + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0xb4 + (longlong)puVar2);
        *(undefined4 *)((longlong)auStack_f0 + lVar29 + 0xb4 + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0xb0 + (longlong)puVar2);
        puVar18[2] = puVar22[-2];
        puVar18[3] = puVar22[-1];
        puVar18[4] = *puVar22;
        puVar18[5] = puVar22[1];
        *(undefined4 *)((longlong)auStack_f0 + lVar29 + 0xb8 + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0x98 + (longlong)puVar2);
        *(undefined4 *)((longlong)auStack_f0 + lVar29 + 0xbc + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0x94 + (longlong)puVar2);
        *(undefined4 *)(&stack0xffffffffffffff08 + lVar29 + 200 + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0x90 + (longlong)puVar2);
        *(undefined4 *)((longlong)afStack_d4 + lVar29 + 0xa8 + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0x8c + (longlong)puVar2);
        puVar18[6] = puVar22[7];
        puVar18[7] = puVar22[8];
        puVar18[8] = puVar22[9];
        puVar18[9] = puVar22[10];
        *(undefined4 *)((longlong)auStack_f0 + lVar29 + 200 + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0x74 + (longlong)puVar2);
        *(undefined4 *)((longlong)auStack_f0 + lVar29 + 0xcc + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0x70 + (longlong)puVar2);
        *(undefined4 *)((longlong)auStack_f0 + lVar29 + 0xd0 + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0x6c + (longlong)puVar2);
        *(undefined4 *)((longlong)auStack_f0 + lVar29 + 0xd4 + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0x68 + (longlong)puVar2);
        puVar18[10] = puVar22[0x10];
        puVar18[0xb] = puVar22[0x11];
        puVar18[0xc] = puVar22[0x12];
        puVar18[0xd] = puVar22[0x13];
        *(undefined4 *)((longlong)auStack_f0 + lVar29 + 0xd8 + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0x50 + (longlong)puVar2);
        *(undefined4 *)((longlong)auStack_f0 + lVar29 + 0xdc + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0x4c + (longlong)puVar2);
        *(undefined4 *)(&stack0xffffffffffffff28 + lVar29 + 200 + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0x48 + (longlong)puVar2);
        *(undefined4 *)((longlong)afStack_d4 + lVar29 + 200 + (longlong)puVar1) =
             *(undefined4 *)(lVar27 + -0x44 + (longlong)puVar2);
        uVar14 = uVar14 - 1;
        puVar18 = puVar1;
        puVar22 = puVar2;
        lVar28 = local_c0;
        lVar30 = local_b8;
      } while (uVar14 != 0);
    }
    if (uVar13 < uVar15) {
      lVar11 = lVar12 - lVar30;
      lVar29 = lVar34 - local_c0;
      uVar14 = (ulonglong)(uVar15 - uVar13);
      puVar18 = (undefined4 *)(lVar28 + ((ulonglong)uVar13 * 9 + 2) * 4);
      puVar22 = (undefined4 *)(lVar30 + 8 + (ulonglong)uVar13 * 0x10);
      do {
        puVar1 = puVar18 + 9;
        puVar22[-2] = puVar18[-2];
        puVar2 = puVar22 + 4;
        puVar22[-1] = puVar18[-1];
        *puVar22 = *puVar18;
        puVar22[1] = puVar18[1];
        *(undefined4 *)((longlong)puVar22 + (longlong)afStack_d4 + lVar11 + 0xcc) =
             *(undefined4 *)(lVar29 + -0x2c + (longlong)puVar1);
        *(undefined4 *)((longlong)auStack_f0 + lVar11 + 0xdc + (longlong)puVar2) =
             *(undefined4 *)(lVar29 + -0x28 + (longlong)puVar1);
        *(undefined4 *)(&stack0xffffffffffffff28 + lVar11 + 200 + (longlong)puVar2) =
             *(undefined4 *)(lVar29 + -0x24 + (longlong)puVar1);
        *(undefined4 *)((longlong)afStack_d4 + lVar11 + 200 + (longlong)puVar2) =
             *(undefined4 *)(lVar29 + -0x20 + (longlong)puVar1);
        uVar14 = uVar14 - 1;
        puVar18 = puVar1;
        puVar22 = puVar2;
      } while (uVar14 != 0);
    }
    uVar10 = *(ushort *)(param_3 + 2);
    uVar14 = (ulonglong)uVar10;
    bVar25 = 0;
    uVar19 = uVar19 & 7;
    bVar26 = bVar25;
    for (uVar13 = uVar19; uVar13 != 0; uVar13 = uVar13 & uVar13 - 1) {
      bVar26 = bVar26 + 1;
    }
    local_c8[0] = (float)(uint)bVar26;
    if (bVar26 != 0) {
      local_b0 = uVar14;
      uVar32 = (ulonglong)(uint)local_c8[0];
      lVar34 = lVar34 - local_c0;
      pfVar17 = (float *)(local_b8 + 0xc);
      local_a0 = (ulonglong)(uint)local_c8[0];
      lVar28 = (longlong)local_c8 + (lVar12 - local_b8) + 200;
      pfVar21 = (float *)(local_c0 + 0x18);
      do {
        uVar33 = uVar14;
        if (pfVar23 + uVar14 < pfVar23) {
          uVar33 = uVar16;
        }
        uVar31 = uVar16;
        if (uVar33 != 0) {
          do {
            fVar35 = *pfVar23;
            uVar31 = uVar31 + 1;
            fVar3 = *pfVar21;
            fVar4 = pfVar21[-2];
            pfVar23 = pfVar23 + 1;
            fVar5 = pfVar17[-3];
            fVar6 = pfVar17[-2];
            fVar7 = *pfVar17;
            pfVar17[-2] = fVar5;
            fVar8 = pfVar21[-1];
            pfVar17[-3] = fVar35;
            fVar9 = pfVar21[2];
            *pfVar17 = pfVar17[-1];
            fVar36 = fVar6 * fVar3 + fVar35 * fVar4 + fVar8 * fVar5 + fVar7 * fVar9 +
                     pfVar17[-1] * pfVar21[1];
            pfVar17[-1] = fVar36;
            fVar35 = *(float *)((longlong)pfVar21 + lVar34);
            fVar3 = *(float *)((longlong)pfVar21 + lVar34 + -8);
            fVar4 = *(float *)(lVar28 + -0xc + (longlong)pfVar17);
            fVar5 = *(float *)((longlong)pfVar17 + lVar28 + -4);
            fVar6 = *(float *)((longlong)pfVar17 + lVar28 + -8);
            fVar7 = *(float *)((longlong)pfVar17 + lVar28);
            *(float *)((longlong)pfVar17 + lVar28 + -8) = fVar4;
            fVar8 = *(float *)((longlong)pfVar21 + lVar34 + -4);
            *(float *)(lVar28 + -0xc + (longlong)pfVar17) = fVar36;
            fVar9 = *(float *)((longlong)pfVar21 + lVar34 + 8);
            *(float *)((longlong)pfVar17 + lVar28) = fVar5;
            fVar35 = fVar6 * fVar35 + fVar36 * fVar3 + fVar4 * fVar8 + fVar7 * fVar9 +
                     fVar5 * *(float *)((longlong)pfVar21 + lVar34 + 4);
            *(float *)((longlong)pfVar17 + lVar28 + -4) = fVar35;
            fVar38 = fVar38 + fVar35 * fVar35;
          } while (uVar31 < uVar33);
        }
        pfVar17 = pfVar17 + 4;
        pfVar21 = pfVar21 + 9;
        uVar32 = uVar32 - 1;
      } while (uVar32 != 0);
      uVar24 = (uint)local_a0;
      lVar34 = local_a8;
    }
    for (uVar20 = ~uVar19 & uVar20; uVar20 != 0; uVar20 = uVar20 & uVar20 - 1) {
      bVar25 = bVar25 + 1;
    }
    if (uVar24 < (uint)bVar25 + (int)local_c8[0]) {
      lVar30 = lVar34 - local_c0;
      pfVar21 = (float *)(local_b8 + 0xc + (ulonglong)uVar24 * 0x10);
      pfVar17 = (float *)(local_c0 + ((ulonglong)uVar24 * 9 + 6) * 4);
      lVar28 = (longlong)local_c8 + (lVar12 - local_b8) + 200;
      uVar14 = (ulonglong)(((uint)bVar25 + (int)local_c8[0]) - uVar24);
      do {
        uVar32 = (ulonglong)uVar10;
        if (pfVar23 + uVar10 < pfVar23) {
          uVar32 = uVar16;
        }
        uVar33 = uVar16;
        if (uVar32 != 0) {
          do {
            fVar35 = *pfVar23;
            uVar33 = uVar33 + 1;
            fVar3 = *pfVar17;
            fVar4 = pfVar17[-2];
            pfVar23 = pfVar23 + 1;
            fVar5 = pfVar21[-3];
            fVar6 = pfVar21[-2];
            fVar7 = *pfVar21;
            pfVar21[-2] = fVar5;
            fVar8 = pfVar17[-1];
            pfVar21[-3] = fVar35;
            fVar9 = pfVar17[2];
            *pfVar21 = pfVar21[-1];
            fVar36 = fVar6 * fVar3 + fVar35 * fVar4 + fVar5 * fVar8 + fVar7 * fVar9 +
                     pfVar21[-1] * pfVar17[1];
            pfVar21[-1] = fVar36;
            fVar35 = *(float *)((longlong)pfVar17 + lVar30);
            fVar3 = *(float *)(lVar30 + -8 + (longlong)pfVar17);
            fVar4 = *(float *)(lVar28 + -0xc + (longlong)pfVar21);
            fVar5 = *(float *)(lVar28 + -4 + (longlong)pfVar21);
            fVar6 = *(float *)((longlong)pfVar21 + lVar28 + -8);
            fVar7 = *(float *)(lVar28 + (longlong)pfVar21);
            *(float *)((longlong)pfVar21 + lVar28 + -8) = fVar4;
            fVar8 = *(float *)((longlong)pfVar17 + lVar30 + -4);
            *(float *)(lVar28 + -0xc + (longlong)pfVar21) = fVar36;
            fVar9 = *(float *)((longlong)pfVar17 + lVar30 + 8);
            *(float *)(lVar28 + (longlong)pfVar21) = fVar5;
            fVar35 = fVar6 * fVar35 + fVar36 * fVar3 + fVar4 * fVar8 + fVar7 * fVar9 +
                     fVar5 * *(float *)((longlong)pfVar17 + lVar30 + 4);
            *(float *)(lVar28 + -4 + (longlong)pfVar21) = fVar35;
            fVar37 = fVar37 + fVar35 * fVar35;
          } while (uVar33 < uVar32);
        }
        pfVar21 = pfVar21 + 4;
        pfVar17 = pfVar17 + 9;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    *(float *)(param_1 + 0x48) =
         (param_2 * param_2 * 1.0019248 * (fVar37 * 1.4125375 + fVar38)) / (float)uVar10;
    if (3 < uVar15) {
      lVar30 = lVar34 - local_c0;
      lVar28 = lVar12 - local_b8;
      uVar20 = (uVar15 - 4 >> 2) + 1;
      uVar14 = (ulonglong)uVar20;
      uVar16 = (ulonglong)(uVar20 * 4);
      puVar18 = (undefined4 *)(local_b8 + 8);
      puVar22 = (undefined4 *)(local_c0 + 0x2c);
      do {
        puVar1 = puVar18 + 0x10;
        puVar22[-0xb] = puVar18[-2];
        puVar22[-10] = puVar18[-1];
        puVar22[-9] = *puVar18;
        puVar22[-8] = puVar18[1];
        *(undefined4 *)((longlong)puVar22 + lVar30 + -0x2c) =
             *(undefined4 *)((longlong)puVar18 + (longlong)afStack_d4 + lVar28 + 0xcc);
        *(undefined4 *)((longlong)puVar22 + lVar30 + -0x28) =
             *(undefined4 *)((longlong)auStack_f0 + lVar28 + 0xac + (longlong)puVar1);
        *(undefined4 *)((longlong)puVar22 + lVar30 + -0x24) =
             *(undefined4 *)((longlong)auStack_f0 + lVar28 + 0xb0 + (longlong)puVar1);
        *(undefined4 *)((longlong)puVar22 + lVar30 + -0x20) =
             *(undefined4 *)((longlong)auStack_f0 + lVar28 + 0xb4 + (longlong)puVar1);
        puVar22[-2] = puVar18[2];
        puVar22[-1] = puVar18[3];
        *puVar22 = puVar18[4];
        puVar22[1] = puVar18[5];
        *(undefined4 *)((longlong)puVar22 + lVar30 + -8) =
             *(undefined4 *)((longlong)auStack_f0 + lVar28 + 0xb8 + (longlong)puVar1);
        *(undefined4 *)((longlong)puVar22 + lVar30 + -4) =
             *(undefined4 *)((longlong)auStack_f0 + lVar28 + 0xbc + (longlong)puVar1);
        *(undefined4 *)((longlong)puVar22 + lVar30) =
             *(undefined4 *)(&stack0xffffffffffffff08 + lVar28 + 200 + (longlong)puVar1);
        *(undefined4 *)((longlong)puVar22 + lVar30 + 4) =
             *(undefined4 *)((longlong)afStack_d4 + lVar28 + 0xa8 + (longlong)puVar1);
        puVar22[7] = puVar18[6];
        puVar22[8] = puVar18[7];
        puVar22[9] = puVar18[8];
        puVar22[10] = puVar18[9];
        *(undefined4 *)((longlong)puVar22 + lVar30 + 0x1c) =
             *(undefined4 *)((longlong)auStack_f0 + lVar28 + 200 + (longlong)puVar1);
        *(undefined4 *)((longlong)puVar22 + lVar30 + 0x20) =
             *(undefined4 *)((longlong)auStack_f0 + lVar28 + 0xcc + (longlong)puVar1);
        *(undefined4 *)((longlong)puVar22 + lVar30 + 0x24) =
             *(undefined4 *)((longlong)auStack_f0 + lVar28 + 0xd0 + (longlong)puVar1);
        *(undefined4 *)((longlong)puVar22 + lVar30 + 0x28) =
             *(undefined4 *)((longlong)auStack_f0 + lVar28 + 0xd4 + (longlong)puVar1);
        puVar22[0x10] = puVar18[10];
        puVar22[0x11] = puVar18[0xb];
        puVar22[0x12] = puVar18[0xc];
        puVar22[0x13] = puVar18[0xd];
        *(undefined4 *)((longlong)puVar22 + lVar30 + 0x40) =
             *(undefined4 *)((longlong)auStack_f0 + lVar28 + 0xd8 + (longlong)puVar1);
        *(undefined4 *)((longlong)puVar22 + lVar30 + 0x44) =
             *(undefined4 *)((longlong)auStack_f0 + lVar28 + 0xdc + (longlong)puVar1);
        *(undefined4 *)((longlong)puVar22 + lVar30 + 0x48) =
             *(undefined4 *)(&stack0xffffffffffffff28 + lVar28 + 200 + (longlong)puVar1);
        *(undefined4 *)((longlong)puVar22 + lVar30 + 0x4c) =
             *(undefined4 *)((longlong)afStack_d4 + lVar28 + 200 + (longlong)puVar1);
        uVar14 = uVar14 - 1;
        puVar18 = puVar1;
        puVar22 = puVar22 + 0x24;
      } while (uVar14 != 0);
    }
    if ((uint)uVar16 < uVar15) {
      lVar12 = lVar12 - local_b8;
      lVar34 = lVar34 - local_c0;
      uVar14 = (ulonglong)(uVar15 - (uint)uVar16);
      puVar18 = (undefined4 *)(local_c0 + uVar16 * 0x24 + 8);
      puVar22 = (undefined4 *)(uVar16 * 0x10 + 8 + local_b8);
      do {
        puVar1 = puVar22 + 4;
        puVar18[-2] = puVar22[-2];
        puVar2 = puVar18 + 9;
        puVar18[-1] = puVar22[-1];
        *puVar18 = *puVar22;
        puVar18[1] = puVar22[1];
        *(undefined4 *)(lVar34 + -0x2c + (longlong)puVar2) =
             *(undefined4 *)((longlong)puVar22 + (longlong)afStack_d4 + lVar12 + 0xcc);
        *(undefined4 *)(lVar34 + -0x28 + (longlong)puVar2) =
             *(undefined4 *)((longlong)auStack_f0 + lVar12 + 0xdc + (longlong)puVar1);
        *(undefined4 *)(lVar34 + -0x24 + (longlong)puVar2) =
             *(undefined4 *)(&stack0xffffffffffffff28 + lVar12 + 200 + (longlong)puVar1);
        *(undefined4 *)(lVar34 + -0x20 + (longlong)puVar2) =
             *(undefined4 *)((longlong)afStack_d4 + lVar12 + 200 + (longlong)puVar1);
        uVar14 = uVar14 - 1;
        puVar18 = puVar2;
        puVar22 = puVar1;
      } while (uVar14 != 0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1431861b0 FUN_1431861b0 body=92 status=ok
// SIG undefined FUN_1431861b0(void)

undefined8 FUN_1431861b0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = CAkOutputMgr::FindDevice(param_1 + -0x50);
  if (lVar1 != 0) {
    uVar2 = CAkSpeakerPan::ComputePlanarVBAPGains(lVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 2;
}



// FUNCTION 143186210 FUN_143186210 body=80 status=ok
// SIG undefined FUN_143186210(void)

undefined8
FUN_143186210(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  IAkGlobalPluginContext *pIVar1;
  
  pIVar1 = AK::SoundEngine::GetGlobalPluginContext();
  (**(code **)(*(longlong *)pIVar1 + 0x118))(pIVar1,param_2,param_3,param_4,param_5);
  return 1;
}



// FUNCTION 143186260 FUN_143186260 body=346 status=ok
// SIG undefined FUN_143186260(void)

undefined8
FUN_143186260(longlong param_1,float *param_2,undefined4 param_3,uint param_4,uint param_5,
             undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((param_4 & 0xf00) == 0x100) {
    uVar3 = param_4 >> 0xc;
    if ((((byte)(param_4 >> 0x15) ^ (byte)(param_4 >> 0x10)) & 1) != 0) {
      uVar3 = uVar3 & 0xffffffcf | 0x600;
    }
    param_4 = param_4 & 0xfff | uVar3 << 0xc;
  }
  if ((param_5 & 0xf00) == 0x100) {
    uVar3 = param_5 >> 0xc;
    if ((((byte)(param_5 >> 0x15) ^ (byte)(param_5 >> 0x10)) & 1) != 0) {
      uVar3 = uVar3 & 0xffffffcf | 0x600;
    }
    param_5 = param_5 & 0xfff | uVar3 << 0xc;
  }
  fVar6 = *param_2;
  fVar4 = -1.0;
  if (-1.0 <= fVar6) {
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    fVar6 = (fVar6 + 1.0) * 0.5;
  }
  else {
    fVar6 = -1.0;
  }
  fVar5 = param_2[1];
  if (-1.0 <= fVar5) {
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
    fVar4 = (fVar5 + 1.0) * 0.5;
  }
  lVar1 = CAkOutputMgr::FindDevice(param_1 + -0x50);
  if (lVar1 == 0) {
    uVar2 = 2;
  }
  else {
    FUN_143165e50(fVar6,fVar4,param_3,1,param_4,param_5,param_6,lVar1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1431863c0 ComputeSphericalVBAPGains body=43 status=ok
// SIG undefined ComputeSphericalVBAPGains(void)

undefined8
CAkBusFX::ComputeSphericalVBAPGains
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6)

{
  AkVBAPMap::ComputeVBAP(param_2,param_3,param_4,param_5,param_6);
  return 1;
}



// FUNCTION 1431863f0 FUN_1431863f0 body=83 status=ok
// SIG undefined FUN_1431863f0(void)

void FUN_1431863f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x338);
  if (lVar2 != 0) {
    if ((*(longlong *)(lVar2 + 0x60) == 0) && (*(longlong *)(param_1 + 8) != 0)) {
      FUN_143188cd0();
      lVar2 = *(longlong *)(param_1 + 0x338);
    }
    plVar1 = *(longlong **)(lVar2 + 0x60);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 143186450 FUN_143186450 body=919 status=ok
// SIG undefined FUN_143186450(void)

void FUN_143186450(longlong param_1,AkAudioBuffer *param_2,longlong param_3)

{
  CAkSrcLpHpFilter *pCVar1;
  ushort uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ushort uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_res10;
  void *local_58;
  uint local_50;
  undefined8 local_4c;
  undefined2 local_40;
  undefined8 local_38;
  
  if (*(short *)(param_2 + 0x12) != 0) {
    *(undefined4 *)(param_1 + 0xa4) = 0x2d;
    if (*(int *)(param_1 + 0x358) == 4) {
      *(undefined4 *)(param_1 + 0x358) = 1;
    }
    uVar2 = *(ushort *)(param_2 + 0x12);
    lVar9 = 0;
    uVar12 = *(ushort *)(param_2 + 0x10);
    uVar7 = (ulonglong)uVar12;
    uVar10 = (uint)uVar12 - (uint)uVar2;
    if (uVar10 != 0) {
      if (param_2[8] != (AkAudioBuffer)0x0) {
        uVar11 = (ulonglong)(byte)param_2[8];
        do {
          if (uVar10 != 0) {
            puVar8 = (undefined4 *)(*(longlong *)param_2 + (uVar7 * lVar9 + (ulonglong)uVar2) * 4);
            for (uVar6 = (ulonglong)uVar10; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            uVar12 = *(ushort *)(param_2 + 0x10);
            uVar7 = (ulonglong)uVar12;
          }
          lVar9 = lVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      *(ushort *)(param_2 + 0x12) = uVar12;
    }
    fVar14 = *(float *)(param_3 + 0xd8);
    if (0.0 <= fVar14) {
      if (100.0 <= fVar14) {
        fVar14 = 100.0;
      }
    }
    else {
      fVar14 = 0.0;
    }
    fVar13 = *(float *)(param_3 + 0x134);
    if (fVar14 != fVar13) {
      *(undefined1 *)(param_3 + 0x13b) = 1;
      uVar10 = (uint)DAT_1467bdcbc;
      *(float *)(param_3 + 0x134) = fVar14;
      *(float *)(param_3 + 0x130) =
           ((fVar13 - *(float *)(param_3 + 0x130)) / (float)uVar10) *
           (float)*(ushort *)(param_3 + 0x138) + *(float *)(param_3 + 0x130);
    }
    fVar14 = *(float *)(param_3 + 0xdc);
    fVar13 = 0.0;
    if ((0.0 <= fVar14) && (fVar13 = fVar14, 100.0 <= fVar14)) {
      fVar13 = 100.0;
    }
    fVar14 = *(float *)(param_3 + 0x144);
    if (fVar13 != fVar14) {
      *(undefined1 *)(param_3 + 0x14b) = 1;
      uVar10 = (uint)DAT_1467bdcbc;
      *(float *)(param_3 + 0x144) = fVar13;
      *(float *)(param_3 + 0x140) =
           ((fVar14 - *(float *)(param_3 + 0x140)) / (float)uVar10) *
           (float)*(ushort *)(param_3 + 0x148) + *(float *)(param_3 + 0x140);
    }
    if ((*(longlong *)(param_1 + 0x338) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x338) + 0x60) == 0)) {
      pCVar1 = (CAkSrcLpHpFilter *)(param_3 + 0xe0);
      local_res10 = CONCAT44(*(float *)(param_3 + 0x14) * *(float *)(param_3 + 0x1c),
                             *(float *)(param_3 + 0x18) * *(float *)(param_3 + 0x10));
      cVar4 = CAkSrcLpHpFilter::ManageBQFChange(pCVar1);
      if ((cVar4 == '\0') ||
         (((*(longlong *)pCVar1 != 0 && (*(longlong *)(param_3 + 0x108) != 0)) &&
          ((*(char *)(param_3 + 0x13e) == '\0' || (*(char *)(param_3 + 0x14e) == '\0')))))) {
        CAkMixer::MixFilterNinNChannels
                  (param_2,(AkAudioBuffer *)(param_1 + 0x98),(AkRamp *)&local_res10,
                   *(float **)(param_3 + 0x38),*(float **)(param_3 + 0x30),
                   *(float *)(param_1 + 0x94),*(ushort *)(param_1 + 0x90),pCVar1);
      }
      else {
        CAkMixer::MixBypassNinNChannels
                  (param_2,(AkAudioBuffer *)(param_1 + 0x98),(AkRamp *)&local_res10,
                   *(float **)(param_3 + 0x38),*(float **)(param_3 + 0x30),
                   *(float *)(param_1 + 0x94),*(ushort *)(param_1 + 0x90),pCVar1);
      }
      *(undefined2 *)(param_1 + 0xaa) = *(undefined2 *)(param_1 + 0x90);
    }
    else {
      local_50 = 0;
      local_58 = (void *)0x0;
      local_4c = 0x2b;
      local_40 = 0;
      local_38 = 0;
      iVar5 = AkPipelineBufferBase::GetCachedBuffer
                        (&local_58,*(undefined2 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8));
      uVar2 = *(ushort *)(param_2 + 0x10);
      if (iVar5 == 1) {
        _guard_xfg_dispatch_icall_nop
                  (local_58,*(void **)param_2,
                   (ulonglong)((*(uint *)(param_2 + 8) & 0xff) * (uint)uVar2) << 2);
        local_4c = CONCAT26(*(undefined2 *)(param_2 + 0x10),(undefined6)local_4c);
        local_4c = CONCAT44(local_4c._4_4_,*(undefined4 *)(param_2 + 0xc));
        FUN_143186de0(param_2,&local_58,param_3);
      }
      else {
        local_4c._0_6_ = CONCAT24(uVar2,(undefined4)local_4c);
        local_4c = CONCAT26(uVar2,(undefined6)local_4c);
        local_58 = *(void **)param_2;
        local_50 = *(uint *)(param_2 + 8);
      }
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x338) + 0x60);
      (**(code **)(*plVar3 + 0x48))
                (plVar3,param_3,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                 &local_58,param_1 + 0x98);
      if (iVar5 == 1) {
        AkPipelineBufferBase::ReleaseCachedBuffer(&local_58);
      }
    }
  }
  return;
}



// FUNCTION 1431867f0 ConvolvePolyPhase body=1214 status=ok
// SIG undefined ConvolvePolyPhase(void)

void ConvolvePolyPhase(float *param_1,float *param_2,undefined1 (*param_3) [16],
                      undefined1 (*param_4) [16])

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  float *pfVar19;
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
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  if (param_1 < param_2) {
    pfVar19 = param_1 + 8;
    do {
      fVar22 = pfVar19[-8];
      fVar23 = pfVar19[-7];
      fVar24 = pfVar19[-6];
      fVar25 = pfVar19[-5];
      fVar8 = pfVar19[-4];
      fVar9 = pfVar19[-3];
      fVar10 = pfVar19[-2];
      fVar11 = pfVar19[-1];
      fVar12 = *pfVar19;
      fVar13 = pfVar19[1];
      fVar14 = pfVar19[2];
      fVar15 = pfVar19[3];
      fVar16 = pfVar19[4];
      fVar17 = pfVar19[5];
      fVar18 = pfVar19[6];
      fVar34 = fVar22 * 0.0017089844 + fVar23 * 0.010986328 + fVar24 * -0.01965332 +
               fVar25 * 0.033203125 + fVar8 * -0.059448242 + fVar9 * 0.1373291 + fVar10 * 0.97216797
               + fVar11 * -0.10229492 + fVar12 * 0.047607422 + fVar13 * -0.026611328 +
               fVar14 * 0.014892578 + fVar15 * -0.008300781;
      fVar35 = fVar22 * -0.029174805 + fVar23 * 0.029296875 + fVar24 * -0.051757812 +
               fVar25 * 0.08911133 + fVar8 * -0.1665039 + fVar9 * 0.4650879 + fVar10 * 0.77978516 +
               fVar11 * -0.20031738 + fVar12 * 0.1015625 + fVar13 * -0.05822754 +
               fVar14 * 0.033081055 + fVar15 * -0.018920898;
      fVar36 = fVar22 * -0.018920898 + fVar23 * 0.033081055 + fVar24 * -0.05822754 +
               fVar25 * 0.1015625 + fVar8 * -0.20031738 + fVar9 * 0.77978516 + fVar10 * 0.4650879 +
               fVar11 * -0.1665039 + fVar12 * 0.08911133 + fVar13 * -0.051757812 +
               fVar14 * 0.029296875 + fVar15 * -0.029174805;
      fVar37 = fVar22 * -0.008300781 + fVar23 * 0.014892578 + fVar24 * -0.026611328 +
               fVar25 * 0.047607422 + fVar8 * -0.10229492 + fVar9 * 0.97216797 + fVar10 * 0.1373291
               + fVar11 * -0.059448242 + fVar12 * 0.033203125 + fVar13 * -0.01965332 +
               fVar14 * 0.010986328 + fVar15 * 0.0017089844;
      pfVar1 = pfVar19 + -4;
      fVar30 = fVar23 * 0.0017089844 + fVar24 * 0.010986328 + fVar25 * -0.01965332 +
               fVar8 * 0.033203125 + fVar9 * -0.059448242 + fVar10 * 0.1373291 + fVar11 * 0.97216797
               + fVar12 * -0.10229492 + fVar13 * 0.047607422 + fVar14 * -0.026611328 +
               fVar15 * 0.014892578 + fVar16 * -0.008300781;
      fVar31 = fVar23 * -0.029174805 + fVar24 * 0.029296875 + fVar25 * -0.051757812 +
               fVar8 * 0.08911133 + fVar9 * -0.1665039 + fVar10 * 0.4650879 + fVar11 * 0.77978516 +
               fVar12 * -0.20031738 + fVar13 * 0.1015625 + fVar14 * -0.05822754 +
               fVar15 * 0.033081055 + fVar16 * -0.018920898;
      fVar32 = fVar23 * -0.018920898 + fVar24 * 0.033081055 + fVar25 * -0.05822754 +
               fVar8 * 0.1015625 + fVar9 * -0.20031738 + fVar10 * 0.77978516 + fVar11 * 0.4650879 +
               fVar12 * -0.1665039 + fVar13 * 0.08911133 + fVar14 * -0.051757812 +
               fVar15 * 0.029296875 + fVar16 * -0.029174805;
      fVar33 = fVar23 * -0.008300781 + fVar24 * 0.014892578 + fVar25 * -0.026611328 +
               fVar8 * 0.047607422 + fVar9 * -0.10229492 + fVar10 * 0.97216797 + fVar11 * 0.1373291
               + fVar12 * -0.059448242 + fVar13 * 0.033203125 + fVar14 * -0.01965332 +
               fVar15 * 0.010986328 + fVar16 * 0.0017089844;
      fVar26 = fVar24 * 0.0017089844 + fVar25 * 0.010986328 + fVar8 * -0.01965332 +
               fVar9 * 0.033203125 + fVar10 * -0.059448242 + fVar11 * 0.1373291 +
               fVar12 * 0.97216797 + fVar13 * -0.10229492 + fVar14 * 0.047607422 +
               fVar15 * -0.026611328 + fVar16 * 0.014892578 + fVar17 * -0.008300781;
      fVar27 = fVar24 * -0.029174805 + fVar25 * 0.029296875 + fVar8 * -0.051757812 +
               fVar9 * 0.08911133 + fVar10 * -0.1665039 + fVar11 * 0.4650879 + fVar12 * 0.77978516 +
               fVar13 * -0.20031738 + fVar14 * 0.1015625 + fVar15 * -0.05822754 +
               fVar16 * 0.033081055 + fVar17 * -0.018920898;
      fVar28 = fVar24 * -0.018920898 + fVar25 * 0.033081055 + fVar8 * -0.05822754 +
               fVar9 * 0.1015625 + fVar10 * -0.20031738 + fVar11 * 0.77978516 + fVar12 * 0.4650879 +
               fVar13 * -0.1665039 + fVar14 * 0.08911133 + fVar15 * -0.051757812 +
               fVar16 * 0.029296875 + fVar17 * -0.029174805;
      fVar29 = fVar24 * -0.008300781 + fVar25 * 0.014892578 + fVar8 * -0.026611328 +
               fVar9 * 0.047607422 + fVar10 * -0.10229492 + fVar11 * 0.97216797 + fVar12 * 0.1373291
               + fVar13 * -0.059448242 + fVar14 * 0.033203125 + fVar15 * -0.01965332 +
               fVar16 * 0.010986328 + fVar17 * 0.0017089844;
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = fVar37;
      auVar20 = minps(*param_3,auVar6);
      fVar22 = fVar25 * 0.0017089844 + fVar8 * 0.010986328 + fVar9 * -0.01965332 +
               fVar10 * 0.033203125 + fVar11 * -0.059448242 + fVar12 * 0.1373291 +
               fVar13 * 0.97216797 + fVar14 * -0.10229492 + fVar15 * 0.047607422 +
               fVar16 * -0.026611328 + fVar17 * 0.014892578 + fVar18 * -0.008300781;
      fVar23 = fVar25 * -0.029174805 + fVar8 * 0.029296875 + fVar9 * -0.051757812 +
               fVar10 * 0.08911133 + fVar11 * -0.1665039 + fVar12 * 0.4650879 + fVar13 * 0.77978516
               + fVar14 * -0.20031738 + fVar15 * 0.1015625 + fVar16 * -0.05822754 +
               fVar17 * 0.033081055 + fVar18 * -0.018920898;
      fVar24 = fVar25 * -0.018920898 + fVar8 * 0.033081055 + fVar9 * -0.05822754 +
               fVar10 * 0.1015625 + fVar11 * -0.20031738 + fVar12 * 0.77978516 + fVar13 * 0.4650879
               + fVar14 * -0.1665039 + fVar15 * 0.08911133 + fVar16 * -0.051757812 +
               fVar17 * 0.029296875 + fVar18 * -0.029174805;
      fVar25 = fVar25 * -0.008300781 + fVar8 * 0.014892578 + fVar9 * -0.026611328 +
               fVar10 * 0.047607422 + fVar11 * -0.10229492 + fVar12 * 0.97216797 +
               fVar13 * 0.1373291 + fVar14 * -0.059448242 + fVar15 * 0.033203125 +
               fVar16 * -0.01965332 + fVar17 * 0.010986328 + fVar18 * 0.0017089844;
      auVar4._4_4_ = fVar31;
      auVar4._0_4_ = fVar30;
      auVar4._8_4_ = fVar32;
      auVar4._12_4_ = fVar33;
      auVar20 = minps(auVar20,auVar4);
      auVar2._4_4_ = fVar27;
      auVar2._0_4_ = fVar26;
      auVar2._8_4_ = fVar28;
      auVar2._12_4_ = fVar29;
      auVar21 = minps(auVar20,auVar2);
      auVar20._4_4_ = fVar23;
      auVar20._0_4_ = fVar22;
      auVar20._8_4_ = fVar24;
      auVar20._12_4_ = fVar25;
      auVar20 = minps(auVar21,auVar20);
      *param_3 = auVar20;
      auVar7._4_4_ = fVar35;
      auVar7._0_4_ = fVar34;
      auVar7._8_4_ = fVar36;
      auVar7._12_4_ = fVar37;
      auVar20 = maxps(*param_4,auVar7);
      auVar5._4_4_ = fVar31;
      auVar5._0_4_ = fVar30;
      auVar5._8_4_ = fVar32;
      auVar5._12_4_ = fVar33;
      auVar20 = maxps(auVar20,auVar5);
      auVar3._4_4_ = fVar27;
      auVar3._0_4_ = fVar26;
      auVar3._8_4_ = fVar28;
      auVar3._12_4_ = fVar29;
      auVar20 = maxps(auVar20,auVar3);
      auVar21._4_4_ = fVar23;
      auVar21._0_4_ = fVar22;
      auVar21._8_4_ = fVar24;
      auVar21._12_4_ = fVar25;
      auVar20 = maxps(auVar20,auVar21);
      *param_4 = auVar20;
      pfVar19 = pfVar19 + 4;
    } while (pfVar1 < param_2);
  }
  return;
}



// FUNCTION 143186cb0 FUN_143186cb0 body=29 status=ok
// SIG undefined FUN_143186cb0(void)

void FUN_143186cb0(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(longlong *)(param_1 + 0x338) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x338) + 0x60), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143186cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))();
    return;
  }
  return;
}



// FUNCTION 143186cd0 FUN_143186cd0 body=229 status=ok
// SIG undefined FUN_143186cd0(void)

void FUN_143186cd0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = param_1 + 0x2e8;
  lVar5 = 4;
  puVar4 = (undefined8 *)(param_1 + 0x148);
  do {
    plVar1 = (longlong *)puVar4[-1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_1467be108);
      puVar4[-1] = 0;
    }
    lVar3 = g_LEngineDefaultPoolId;
    puVar2 = (undefined8 *)*puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(lVar3,puVar2);
      *puVar4 = 0;
    }
    *(undefined4 *)(puVar4 + -2) = 0xffffffff;
    (**(code **)(puVar4[-0xe] + 0x20))(puVar4 + -0xe);
    if (*(void **)(lVar6 + -0x10) != (void *)0x0) {
      AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(lVar6 + -0x10));
      *(undefined8 *)(lVar6 + -0x10) = 0;
      *(undefined8 *)(lVar6 + -4) = 0x2b;
      *(undefined4 *)(lVar6 + -8) = 0;
    }
    puVar4 = puVar4 + 0x10;
    lVar6 = lVar6 + 0x18;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(byte *)(param_1 + 0x354) = *(byte *)(param_1 + 0x354) & 0xfc;
  return;
}



// FUNCTION 143186de0 FUN_143186de0 body=253 status=ok
// SIG undefined FUN_143186de0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143186de0(longlong param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 auStack_60 [5];
  void *local_38;
  uint local_30;
  undefined4 local_2c;
  ushort local_28;
  ushort local_26;
  
  local_28 = *(ushort *)(param_1 + 0x10);
  local_2c = 0x2b;
  uVar9 = (ulonglong)local_28 * 4 + 0xf;
  if (uVar9 <= (ulonglong)local_28 * 4) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x143186e38;
  lVar4 = -(uVar9 & 0xfffffffffffffff0);
  uVar5 = 4;
  bVar6 = 0;
  local_38 = (void *)((longlong)&local_38 + lVar4);
  do {
    bVar6 = bVar6 + 1;
    uVar5 = uVar5 & uVar5 - 1;
  } while (uVar5 != 0);
  local_30 = bVar6 | 0x4100;
  uVar5 = *(uint *)(param_1 + 8) - (*(uint *)(param_1 + 8) >> 0xf & 1);
  uVar7 = 0;
  if ((char)uVar5 != '\0') {
    lVar8 = 0;
    local_26 = local_28;
    do {
      *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x143186e97;
      CAkSrcLpHpFilter::ExecuteMono(param_3 + 0xe0,param_1,&local_38,uVar7);
      _Src = local_38;
      uVar1 = *(ushort *)(param_2 + 2);
      lVar3 = *param_2;
      uVar2 = *(ushort *)(param_1 + 0x10);
      *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x143186eb9;
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar3 + (ulonglong)uVar1 * lVar8 * 4),_Src,(ulonglong)uVar2 << 2);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while (uVar7 < (uVar5 & 0xff));
  }
  return;
}



// FUNCTION 143186fd0 FUN_143186fd0 body=75 status=ok
// SIG undefined FUN_143186fd0(void)

undefined8 FUN_143186fd0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  
  *param_3 = 0xffffffff;
  *param_2 = 0xffffffff;
  plVar1 = (longlong *)CAkOutputMgr::FindDevice(param_1 + -0x50);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3);
  }
  return 1;
}



// FUNCTION 143187020 FUN_143187020 body=92 status=ok
// SIG undefined FUN_143187020(void)

int FUN_143187020(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  for (lVar2 = *(longlong *)(param_1 + -0x90); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x48)) {
    iVar1 = *(int *)(lVar2 + 0x164);
    lVar3 = FARSupportInterface::GetXRTrackingSystem(lVar2);
    *param_2 = *(undefined4 *)(lVar3 + 0xa0);
    if (iVar1 == 0) break;
  }
  return 2 - (uint)((char)*param_2 != '\0');
}



// FUNCTION 143187080 FUN_143187080 body=116 status=ok
// SIG undefined FUN_143187080(void)

void FUN_143187080(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(longlong **)(param_1 + 0x268) == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x268) + 8))();
  }
  if (*(longlong *)(param_1 + -0x50) == 0) {
    uVar3 = 0xffffffffffffffff;
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + -0x48);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + -0x50) + 0x10);
  }
  AkCustomPluginDataStore::GetPluginCustomGameData(uVar2,uVar3,uVar1,param_2,param_3);
  return;
}



// FUNCTION 143187100 FUN_143187100 body=130 status=ok
// SIG undefined FUN_143187100(void)

void FUN_143187100(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar3 = 0xffffffffffffffff;
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x10);
  }
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0xd8 + (param_2 & 0xffffffff) * 0x80) + 8))();
  AkCustomPluginDataStore::GetPluginCustomGameData(uVar2,uVar3,uVar1,param_3,param_4);
  return;
}



// FUNCTION 143187190 GetPluginMedia body=173 status=ok
// SIG undefined GetPluginMedia(void)

void CAkBusFX::GetPluginMedia(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_res8 [2];
  
  piVar1 = *(int **)(param_1 + 0x270);
  piVar3 = piVar1 + (ulonglong)*(uint *)(param_1 + 0x278) * 8;
  for (; (piVar1 != piVar3 && (*piVar1 != param_2)); piVar1 = piVar1 + 8) {
  }
  piVar2 = piVar1 + 2;
  if (piVar1 == piVar3) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 == (int *)0x0) {
    local_res8[0] = -1;
    FUN_143181aa0(param_1 + -0x50,param_2,local_res8);
    if ((local_res8[0] == -1) ||
       (piVar2 = (int *)FUN_143184490((undefined8 *)(param_1 + 0x270),param_2), piVar2 == (int *)0x0
       )) {
      *param_3 = 0;
      *param_4 = 0;
      return;
    }
  }
  *param_4 = piVar2[2];
  *param_3 = *(undefined8 *)piVar2;
  return;
}



// FUNCTION 143187240 FUN_143187240 body=998 status=ok
// SIG undefined FUN_143187240(void)

longlong FUN_143187240(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  short *psVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  undefined4 *puVar14;
  longlong lVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  
  puVar14 = (undefined4 *)0x0;
  uVar11 = 0;
  bVar3 = *(byte *)(param_1 + 0x354) & 1;
  if ((bVar3 == 0) || ((*(byte *)(param_1 + 0x354) & 2) != 0)) {
    if (bVar3 == 0) {
      uVar11 = 0xf;
    }
    FUN_143188f60(param_1);
    puVar12 = (uint *)(param_1 + 0x2e0);
    psVar7 = (short *)(param_1 + 0x150);
    local_48 = DAT_1467bdcac;
    uVar4 = *(uint *)(param_1 + 0xa0);
    uVar10 = 1;
    local_40 = (uVar4 & 0xff) << 8 | local_40 & 0xfffd0020 | 0x50020;
    bVar2 = false;
    puVar6 = puVar14;
    uVar9 = uVar4;
    local_44 = uVar4;
    do {
      if (((*(longlong *)(puVar12 + -2) != 0) && (psVar7[1] == 0)) &&
         (*(short *)(param_1 + 0x352) == 0)) {
        uVar9 = *puVar12;
      }
      if ((bVar2) || ((uVar11 & uVar10) != 0)) {
        FUN_143189370(param_1,puVar6,&local_48);
        uVar4 = local_44;
      }
      else if (((*(longlong *)(puVar12 + -2) != 0) && (*psVar7 == 0)) &&
              (*(short *)(param_1 + 0x350) == 0)) {
        local_44 = *puVar12;
        uVar4 = local_44;
      }
      if ((((char)uVar4 == (char)uVar9) && (((uVar4 ^ uVar9) & 0xf00) == 0)) &&
         (((uVar4 ^ uVar9) & 0xfffff000) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uVar16 = (int)puVar6 + 1;
      puVar6 = (undefined4 *)(ulonglong)uVar16;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      psVar7 = psVar7 + 0x40;
      puVar12 = puVar12 + 6;
    } while (uVar16 < 4);
    *(byte *)(param_1 + 0x354) = *(byte *)(param_1 + 0x354) & 0xfd | 1;
    FUN_143188650(param_1);
  }
  if ((*(longlong *)(param_1 + 0x338) == 0) ||
     (plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x338) + 0x60), plVar5 == (longlong *)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    (**(code **)(*plVar5 + 0x50))(plVar5,param_1 + 0x98);
  }
  lVar15 = param_1 + 0x98;
  if (*(int *)(param_1 + 0x358) == 1) {
    psVar7 = (short *)(param_1 + 0x150);
    plVar5 = (longlong *)(param_1 + 0x2d8);
    puVar6 = puVar14;
    do {
      plVar1 = *(longlong **)(psVar7 + -8);
      if (plVar1 != (longlong *)0x0) {
        if ((*psVar7 == 0) && (*(short *)(param_1 + 0x350) == 0)) {
          if (*plVar5 == 0) {
            (**(code **)(*plVar1 + 0x38))(plVar1);
          }
          else {
            lVar8 = param_1 + (longlong)puVar6 * 0x18;
            (**(code **)(*plVar1 + 0x38))(plVar1,lVar15,0,lVar8 + 0x2d8);
            lVar15 = lVar8 + 0x2d8;
          }
        }
        else if ((psVar7[1] == 0) && (*(short *)(param_1 + 0x352) == 0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
        psVar7[1] = *psVar7;
      }
      uVar11 = (int)puVar6 + 1;
      puVar6 = (undefined4 *)(ulonglong)uVar11;
      psVar7 = psVar7 + 0x40;
      plVar5 = plVar5 + 3;
    } while (uVar11 < 4);
  }
  else if (*(short *)(param_1 + 0x350) == 0) {
    iVar13 = 3;
    plVar5 = (longlong *)(param_1 + 800);
    lVar8 = 3;
    psVar7 = (short *)(param_1 + 0x2d0);
    do {
      if ((*psVar7 == 0) && (*plVar5 != 0)) {
        lVar15 = param_1 + ((longlong)iVar13 * 3 + 0x5b) * 8;
        break;
      }
      iVar13 = iVar13 + -1;
      psVar7 = psVar7 + -0x40;
      plVar5 = plVar5 + -3;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  if (*(int *)(param_1 + 0x358) == 1) {
    *(undefined2 *)(param_1 + 0x352) = *(undefined2 *)(param_1 + 0x350);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar17 = *(undefined4 *)(param_1 + 0x20);
    if ((*(byte *)(param_1 + 0x68) & 2) != 0) {
      uVar17 = *(undefined4 *)(param_1 + 0xc4);
    }
    puVar6 = &local_res18;
    if ((*(byte *)(param_1 + 200) & 2) == 0) {
      puVar6 = puVar14;
    }
    *(undefined4 *)(param_1 + 0xc0) = uVar17;
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x20);
    local_res1c = *(undefined4 *)(lVar15 + 8);
    local_res8[0] = 1;
    local_res10[0] = 0;
    local_res18 = 0;
    FUN_143182e70(param_1,*(longlong *)(param_1 + 8),local_res1c,0x3f800000,0,local_res10,local_res8
                  ,puVar6);
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 2;
  }
  if (bVar2) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x338) + 0x60);
    (**(code **)(*plVar5 + 0x58))(plVar5,lVar15);
  }
  if ((*(longlong *)(param_1 + 0xb8) != 0) &&
     (MeterBuffer(*(undefined4 *)(param_1 + 0xc4),lVar15), (*(byte *)(param_1 + 200) & 0x7c) != 0))
  {
    CAkBusCallbackMgr::DoMeteringCallback
              (DAT_146b50b08,*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x10),
               *(longlong *)(param_1 + 0xb8),*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 8));
  }
  if (bVar2) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x338) + 0x60);
    (**(code **)(*plVar5 + 0x60))(plVar5,lVar15,*(undefined8 *)(param_1 + 0xb8));
  }
  return lVar15;
}



// FUNCTION 143187630 GetSpeakerAngles body=91 status=ok
// SIG undefined GetSpeakerAngles(void)

undefined8
CAkBusFX::GetSpeakerAngles
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = CAkOutputMgr::FindDevice(param_1 + -0x50);
  if (lVar1 != 0) {
    uVar2 = AkDevice::GetSpeakerAngles(lVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 2;
}



// FUNCTION 143187690 Init body=1082 status=ok
// SIG undefined Init(void)

undefined8 AkMeterCtx::Init(longlong param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  char cVar4;
  __uint64 _Size;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((param_3 & 1) != 0) {
    pvVar2 = AK::MemoryMgr::Malign
                       (g_LEngineDefaultPoolId,(ulonglong)((*(byte *)(param_1 + 8) + 3 >> 2) << 4),
                        0x10);
    *(void **)(param_1 + 0x10) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 8) != 0) {
      ::_guard_xfg_dispatch_icall_nop(pvVar2,0,(ulonglong)*(byte *)(param_1 + 8) << 2);
    }
  }
  if ((param_3 & 4) != 0) {
    pvVar2 = AK::MemoryMgr::Malign
                       (g_LEngineDefaultPoolId,(ulonglong)((*(byte *)(param_1 + 8) + 3 >> 2) << 4),
                        0x10);
    *(void **)(param_1 + 0x18) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 8) != 0) {
      ::_guard_xfg_dispatch_icall_nop(pvVar2,0,(ulonglong)*(byte *)(param_1 + 8) << 2);
    }
  }
  if ((param_3 & 0x10) != 0) {
    pvVar2 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)*(byte *)(param_1 + 8) * 0x24);
    *(void **)(param_1 + 0x38) = pvVar2;
    pvVar2 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)*(byte *)(param_1 + 8) * 0x24);
    *(void **)(param_1 + 0x40) = pvVar2;
    if (*(longlong *)(param_1 + 0x38) == 0) {
      return 2;
    }
    if (pvVar2 == (void *)0x0) {
      return 2;
    }
    uVar7 = __libm_sse2_sincosf_((1.0 / (float)param_2) * 9443.0);
    fVar11 = (float)((ulonglong)uVar7 >> 0x20);
    fVar9 = (float)uVar7 * 1.5803077;
    fVar8 = fVar11 * 2.2589254;
    fVar11 = fVar11 * 0.2589254;
    fVar10 = 0.2589254 - fVar8;
    fVar13 = 2.2589254 - fVar11;
    fVar11 = fVar11 + 2.2589254;
    fVar12 = 1.0 / (fVar13 + fVar9);
    cVar4 = '\0';
    if ((char)*(undefined4 *)(param_1 + 8) != '\0') {
      uVar6 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x40);
        puVar1 = (undefined8 *)(lVar3 + uVar6 * 0x24);
        if (puVar1 != (undefined8 *)0x0) {
          puVar1[2] = 0;
          puVar1[3] = 0;
          *(undefined4 *)(puVar1 + 4) = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar3 = *(longlong *)(param_1 + 0x40);
        }
        *(float *)(lVar3 + 0x10 + uVar6 * 0x24) = (fVar11 + fVar9) * 1.2589254 * fVar12;
        uVar5 = (int)uVar6 + 1;
        *(float *)(lVar3 + 0x14 + uVar6 * 0x24) = (-0.6519356 - fVar8 * 2.5178509) * fVar12;
        *(float *)(lVar3 + 0x18 + uVar6 * 0x24) = (fVar11 - fVar9) * 1.2589254 * fVar12;
        *(float *)(lVar3 + 0x1c + uVar6 * 0x24) = -((fVar10 + fVar10) * fVar12);
        *(float *)(lVar3 + 0x20 + uVar6 * 0x24) = (fVar9 - fVar13) * fVar12;
        cVar4 = (char)*(uint *)(param_1 + 8);
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < (*(uint *)(param_1 + 8) & 0xff));
    }
    uVar7 = __libm_sse2_sincosf_((1.0 / (float)param_2) * 238.76105);
    fVar11 = (float)((ulonglong)uVar7 >> 0x20);
    fVar9 = 1.0 / ((float)uVar7 + 1.0);
    fVar8 = (fVar11 + 1.0) * 0.5 * fVar9;
    if (cVar4 != '\0') {
      uVar6 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x38);
        puVar1 = (undefined8 *)(lVar3 + uVar6 * 0x24);
        if (puVar1 != (undefined8 *)0x0) {
          puVar1[2] = 0;
          puVar1[3] = 0;
          *(undefined4 *)(puVar1 + 4) = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar3 = *(longlong *)(param_1 + 0x38);
        }
        *(float *)(lVar3 + 0x10 + uVar6 * 0x24) = fVar8;
        uVar5 = (int)uVar6 + 1;
        *(float *)(lVar3 + 0x14 + uVar6 * 0x24) = -((fVar11 + 1.0) * fVar9);
        *(float *)(lVar3 + 0x18 + uVar6 * 0x24) = fVar8;
        *(float *)(lVar3 + 0x1c + uVar6 * 0x24) = (fVar9 + fVar9) * fVar11;
        *(float *)(lVar3 + 0x20 + uVar6 * 0x24) = ((float)uVar7 - 1.0) * fVar9;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(byte *)(param_1 + 8));
    }
  }
  if ((param_3 & 2) != 0) {
    pvVar2 = AK::MemoryMgr::Malign
                       (g_LEngineDefaultPoolId,(ulonglong)((*(byte *)(param_1 + 8) + 3 >> 2) << 4),
                        0x10);
    *(void **)(param_1 + 0x20) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 2;
    }
    uVar5 = *(uint *)(param_1 + 8);
    if ((char)uVar5 != '\0') {
      ::_guard_xfg_dispatch_icall_nop(pvVar2,0,(ulonglong)(uVar5 & 0xff) << 2);
      uVar5 = *(uint *)(param_1 + 8);
    }
    _Size = (ulonglong)((uVar5 & 0xff) * 0xc) << 2;
    pvVar2 = AK::MemoryMgr::Malign(g_LEngineDefaultPoolId,_Size,0x10);
    *(void **)(param_1 + 0x28) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 2;
    }
    ::_guard_xfg_dispatch_icall_nop(pvVar2,0,_Size);
  }
  if ((param_3 & 0x20) != 0) {
    pvVar2 = AK::MemoryMgr::Malign(g_LEngineDefaultPoolId,0x80,0x10);
    *(void **)(param_1 + 0x30) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 2;
    }
    ::_guard_xfg_dispatch_icall_nop(pvVar2,0,0x80);
  }
  *(uint *)(param_1 + 0x4c) = param_3;
  return 1;
}



// FUNCTION 143187ad0 FUN_143187ad0 body=831 status=ok
// SIG undefined FUN_143187ad0(void)

undefined8
FUN_143187ad0(longlong param_1,undefined8 param_2,uint param_3,ushort param_4,longlong *param_5)

{
  CAkRegisteredObj *pCVar1;
  longlong *plVar2;
  longlong lVar3;
  long lVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  CAkRegisteredObj *pCVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ushort uVar15;
  undefined1 uVar17;
  undefined2 uVar16;
  undefined1 local_res20 [8];
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  
  plVar5 = param_5;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  lVar3 = param_5[1];
  *(longlong *)(param_1 + 0x80) = *param_5;
  *(longlong *)(param_1 + 0x88) = lVar3;
  puVar14 = (undefined8 *)0x0;
  *(byte *)(param_1 + 0x354) = *param_5 == 0 | *(byte *)(param_1 + 0x354) & 0xfc;
  *(ushort *)(param_1 + 0x90) = param_4;
  *(float *)(param_1 + 0x94) = 1.0 / (float)param_4;
  if (*param_5 != 0) {
    if (param_5[1] == 0xffffffffffffffff) {
      return 2;
    }
    uVar15 = param_4;
    pCVar10 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,param_5[1]);
    uVar17 = (undefined1)(uVar15 >> 8);
    if (pCVar10 == (CAkRegisteredObj *)0x0) {
      return 2;
    }
    pvVar11 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,400);
    puVar12 = puVar14;
    if (pvVar11 != (void *)0x0) {
      puVar12 = (undefined8 *)FUN_14318a320(pvVar11,pCVar10,*plVar5);
    }
    *(undefined8 **)(param_1 + 8) = puVar12;
    pCVar1 = pCVar10 + 0x50;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    lVar4 = g_DefaultPoolId;
    if (*(int *)pCVar1 == 0) {
      (*(code *)**(undefined8 **)pCVar10)(pCVar10,0);
      AK::MemoryMgr::Free(lVar4,pCVar10);
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0x34;
    }
    uVar8 = FUN_14317c030();
    cVar6 = CAkBusCallbackMgr::IsVolumeCallbackEnabled(DAT_146b50b08,uVar8);
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfd;
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | cVar6 * '\x02';
    uVar8 = FUN_14317c030(*(undefined8 *)(param_1 + 8));
    bVar7 = CAkBusCallbackMgr::IsMeteringCallbackEnabled(DAT_146b50b08,uVar8);
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0x83;
    uVar16 = CONCAT11(uVar17,1);
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | (bVar7 & 0x1f) << 2;
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x180) = param_1;
    local_res20[0] = 0;
    uVar13 = FUN_14317c550(*(undefined8 *)(param_1 + 8),0xbf800000,0,uVar16,&param_5,0,local_res20);
    uVar17 = (undefined1)((ushort)uVar16 >> 8);
    if ((int)uVar13 != 1) {
      return uVar13;
    }
    uVar13 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    local_34 = (int)uVar13;
    if (local_34 != 1) {
      return uVar13;
    }
    local_58 = 0;
    local_50 = 0xff00;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),&local_58,1);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x170);
    (**(code **)(*plVar2 + 0x148))
              (plVar2,&local_58,*(longlong *)(param_1 + 8) + 0x58,CONCAT11(uVar17,1));
    FUN_14317ca40(*(undefined8 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x358) = 4;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0x2b;
  *(undefined4 *)(param_1 + 0xa4) = 0x11;
  uVar9 = (param_3 & 0xff) * (uint)param_4 * 4;
  pvVar11 = AK::MemoryMgr::Malign(g_LEngineDefaultPoolId,(ulonglong)uVar9,0x10);
  if (pvVar11 == (void *)0x0) {
    return 0x34;
  }
  _guard_xfg_dispatch_icall_nop(pvVar11,0,(ulonglong)uVar9);
  *(void **)(param_1 + 0x98) = pvVar11;
  *(ushort *)(param_1 + 0xa8) = param_4;
  *(undefined2 *)(param_1 + 0xaa) = 0;
  *(uint *)(param_1 + 0xa0) = param_3;
  FUN_143188f60(param_1);
  cVar6 = AK::CAkBusCtx::HasMixerPlugin(plVar5);
  if (cVar6 != '\0') {
    puVar12 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x70);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      *(undefined4 *)(puVar12 + 4) = 0;
      *(undefined4 *)(puVar12 + 5) = 0;
      *(undefined1 *)(puVar12 + 6) = 0xff;
      *(undefined1 *)(puVar12 + 7) = 0xff;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      *puVar12 = &PTR__scalar_deleting_destructor__145acb3c0;
      puVar12[0xc] = 0;
      *(undefined4 *)(puVar12 + 0xd) = 0xffffffff;
      puVar14 = puVar12;
    }
    *(undefined8 **)(param_1 + 0x338) = puVar14;
    if (puVar14 == (undefined8 *)0x0) {
      return 0x34;
    }
  }
  return 1;
}



// FUNCTION 143187e10 InitSphericalVBAP body=151 status=ok
// SIG undefined InitSphericalVBAP(void)

int CAkBusFX::InitSphericalVBAP
              (undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
              undefined8 *param_5)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*param_2 + 8))(param_2);
  if (_Dst != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
    iVar1 = AkVBAPMap::Allocate(_Dst,param_2,param_4);
    if (iVar1 == 1) {
      AkVBAPMap::PointsToVBAPMap(_Dst,param_3,param_4);
    }
    else {
      (**(code **)(*param_2 + 0x10))(param_2,_Dst);
      _Dst = (void *)0x0;
    }
  }
  *param_5 = _Dst;
  return 2 - (uint)(_Dst != (void *)0x0);
}



// FUNCTION 143187eb0 MeterBuffer body=1130 status=ok
// SIG undefined MeterBuffer(void)

void MeterBuffer(float param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 uVar10;
  float *pfVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  float *pfVar14;
  ulonglong uVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  
  if (*(short *)((longlong)param_2 + 0x12) == 0) {
    param_1 = 0.0;
  }
  bVar2 = *(byte *)(param_3 + 0x4c);
  uVar18 = 0;
  if ((bVar2 & 1) != 0) {
    bVar3 = *(byte *)(param_2 + 1);
    if (param_1 <= 0.0) {
      if (bVar3 != 0) {
        _guard_xfg_dispatch_icall_nop(*(void **)(param_3 + 0x10),0,(ulonglong)bVar3 << 2);
      }
    }
    else {
      uVar12 = uVar18;
      do {
        auVar25._8_4_ = 0xcf000000;
        auVar25._0_8_ = 0xcf000000cf000000;
        auVar25._12_4_ = 0xcf000000;
        pauVar13 = (undefined1 (*) [16])(*param_2 + uVar12 * *(ushort *)(param_2 + 2) * 4);
        auVar21._8_4_ = 0x4f000000;
        auVar21._0_8_ = 0x4f0000004f000000;
        auVar21._12_4_ = 0x4f000000;
        pauVar16 = pauVar13 + (*(ushort *)(param_2 + 2) >> 2);
        do {
          auVar21 = minps(auVar21,*pauVar13);
          auVar25 = maxps(auVar25,*pauVar13);
          pauVar13 = pauVar13 + 1;
        } while (pauVar13 < pauVar16);
        local_e8._0_4_ = auVar21._0_4_;
        local_e8._4_4_ = auVar21._4_4_;
        if ((float)local_e8._4_4_ <= (float)local_e8._0_4_) {
          local_e8._0_4_ = local_e8._4_4_;
        }
        fStack_e0 = auVar21._8_4_;
        local_f8._0_4_ = auVar25._0_4_;
        local_f8._4_4_ = auVar25._4_4_;
        if ((float)local_f8._0_4_ <= (float)local_f8._4_4_) {
          local_f8._0_4_ = local_f8._4_4_;
        }
        if (fStack_e0 <= (float)local_e8._0_4_) {
          local_e8._0_4_ = fStack_e0;
        }
        fStack_f0 = auVar25._8_4_;
        if ((float)local_f8._0_4_ <= fStack_f0) {
          local_f8._0_4_ = fStack_f0;
        }
        fStack_dc = auVar21._12_4_;
        if (fStack_dc <= (float)local_e8._0_4_) {
          local_e8._0_4_ = fStack_dc;
        }
        fStack_ec = auVar25._12_4_;
        if ((float)local_f8._0_4_ <= fStack_ec) {
          local_f8._0_4_ = fStack_ec;
        }
        fVar20 = ABS((float)local_e8._0_4_);
        if (ABS((float)local_e8._0_4_) <= (float)local_f8._0_4_) {
          fVar20 = (float)local_f8._0_4_;
        }
        uVar17 = (int)uVar12 + 1;
        *(float *)(*(longlong *)(param_3 + 0x10) + uVar12 * 4) = fVar20 * param_1 * 1.0009619;
        uVar12 = (ulonglong)uVar17;
        _local_f8 = auVar25;
        _local_e8 = auVar21;
      } while (uVar17 < bVar3);
    }
  }
  if ((bVar2 & 4) != 0) {
    bVar3 = *(byte *)(param_2 + 1);
    if (param_1 <= 0.0) {
      if (bVar3 != 0) {
        _guard_xfg_dispatch_icall_nop(*(void **)(param_3 + 0x18),0,(ulonglong)bVar3 << 2);
      }
    }
    else {
      uVar12 = uVar18;
      do {
        uVar4 = *(ushort *)(param_2 + 2);
        fVar20 = 0.0;
        fVar22 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        pfVar14 = (float *)(*param_2 + uVar4 * uVar12 * 4);
        pfVar11 = pfVar14 + (ulonglong)(uVar4 >> 2) * 4;
        do {
          fVar6 = *pfVar14;
          pfVar7 = pfVar14 + 1;
          pfVar8 = pfVar14 + 2;
          pfVar9 = pfVar14 + 3;
          pfVar14 = pfVar14 + 4;
          fVar20 = fVar20 + fVar6 * fVar6;
          fVar22 = fVar22 + *pfVar7 * *pfVar7;
          fVar23 = fVar23 + *pfVar8 * *pfVar8;
          fVar24 = fVar24 + *pfVar9 * *pfVar9;
        } while (pfVar14 < pfVar11);
        uVar17 = (int)uVar12 + 1;
        *(float *)(*(longlong *)(param_3 + 0x18) + uVar12 * 4) =
             SQRT((fVar20 + fVar23 + fVar22 + fVar24) / (float)uVar4) * param_1 * 1.0009619;
        uVar12 = (ulonglong)uVar17;
      } while (uVar17 < bVar3);
    }
  }
  if ((bVar2 & 2) != 0) {
    bVar3 = *(byte *)(param_2 + 1);
    if (param_1 <= 0.0) {
      if (bVar3 != 0) {
        _guard_xfg_dispatch_icall_nop(*(void **)(param_3 + 0x20),0,(ulonglong)bVar3 << 2);
      }
    }
    else {
      do {
        lVar5 = *(longlong *)(param_3 + 0x28);
        uVar4 = *(ushort *)(param_2 + 2);
        fStack_f0 = 2.1474836e+09;
        local_f8 = (undefined1  [8])0x4f0000004f000000;
        fStack_ec = 2.1474836e+09;
        fStack_e0 = -2.1474836e+09;
        local_e8 = (undefined1  [8])0xcf000000cf000000;
        fStack_dc = -2.1474836e+09;
        puVar1 = (undefined8 *)(*param_2 + uVar4 * uVar18 * 4);
        uVar17 = (int)uVar18 * 0xc;
        uVar12 = (ulonglong)uVar17;
        uVar15 = (ulonglong)uVar17;
        puVar19 = (undefined8 *)(lVar5 + uVar12 * 4);
        local_d8 = *puVar19;
        uStack_d0 = puVar19[1];
        puVar19 = (undefined8 *)(lVar5 + 0x10 + uVar12 * 4);
        local_c8 = *puVar19;
        uStack_c0 = puVar19[1];
        puVar19 = (undefined8 *)(lVar5 + 0x20 + uVar12 * 4);
        local_b8 = *puVar19;
        uStack_b0 = puVar19[1];
        local_a8 = *puVar1;
        uStack_a0 = puVar1[1];
        local_98 = *(undefined4 *)(puVar1 + 2);
        uStack_94 = *(undefined4 *)((longlong)puVar1 + 0x14);
        uStack_90 = *(undefined4 *)(puVar1 + 3);
        uStack_8c = *(undefined4 *)((longlong)puVar1 + 0x1c);
        local_88 = puVar1[4];
        uStack_80 = puVar1[5];
        ConvolvePolyPhase(&local_d8,&local_a8,local_f8,local_e8);
        puVar19 = puVar1 + ((ulonglong)(uVar4 >> 2) - 3) * 2;
        ConvolvePolyPhase(puVar1,puVar19,local_f8,local_e8);
        uVar10 = puVar19[1];
        puVar1 = (undefined8 *)(lVar5 + uVar15 * 4);
        *puVar1 = *puVar19;
        puVar1[1] = uVar10;
        uVar10 = puVar19[3];
        puVar1 = (undefined8 *)(lVar5 + 0x10 + uVar15 * 4);
        *puVar1 = puVar19[2];
        puVar1[1] = uVar10;
        fVar20 = (float)local_f8._0_4_;
        if ((float)local_f8._4_4_ <= (float)local_f8._0_4_) {
          fVar20 = (float)local_f8._4_4_;
        }
        uVar10 = puVar19[5];
        puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar15 * 4);
        *puVar1 = puVar19[4];
        puVar1[1] = uVar10;
        fVar22 = (float)local_e8._0_4_;
        if ((float)local_e8._0_4_ <= (float)local_e8._4_4_) {
          fVar22 = (float)local_e8._4_4_;
        }
        if (fStack_f0 <= fVar20) {
          fVar20 = fStack_f0;
        }
        if (fVar22 <= fStack_e0) {
          fVar22 = fStack_e0;
        }
        if (fStack_ec <= fVar20) {
          fVar20 = fStack_ec;
        }
        if (fVar22 <= fStack_dc) {
          fVar22 = fStack_dc;
        }
        fVar23 = ABS(fVar20);
        if (ABS(fVar20) <= fVar22) {
          fVar23 = fVar22;
        }
        *(float *)(*(longlong *)(param_3 + 0x20) + uVar18 * 4) = fVar23 * param_1 * 1.0009619;
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
      } while (uVar17 < bVar3);
    }
  }
  if ((bVar2 & 0x10) != 0) {
    AkMeterCtx::ComputeKPower(param_3);
  }
  if ((bVar2 & 0x20) != 0) {
    AkMeterCtx::MeterSampledSphere(param_3);
  }
  return;
}



// FUNCTION 143188320 MeterSampledSphere body=805 status=ok
// SIG undefined MeterSampledSphere(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void AkMeterCtx::MeterSampledSphere(longlong param_1,float param_2,AkAudioBuffer *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  long lVar6;
  undefined4 uVar7;
  ushort uVar8;
  ulonglong uVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  float *pfVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined8 auStack_c0 [5];
  undefined8 uStack_98;
  float afStack_90 [2];
  ushort auStack_88 [8];
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ushort local_48;
  ushort local_46;
  
  uVar14 = *(uint *)(param_3 + 8);
  if ((uVar14 & 0xf00) == 0x200) {
    if (0.0 < param_2) {
      local_4c = 0x2b;
      uVar9 = (ulonglong)*(ushort *)(param_3 + 0x10) * 0x80;
      uVar12 = uVar9 + 0xf;
      if (uVar12 <= uVar9) {
        uVar12 = 0xffffffffffffff0;
      }
      auStack_c0[0] = 0x1431883ba;
      lVar3 = -(uVar12 & 0xfffffffffffffff0);
      puVar16 = (undefined8 *)0x0;
      local_48 = 0;
      puVar13 = (undefined4 *)(local_78 + lVar3);
      puVar11 = puVar16;
      if (*(ushort *)(param_3 + 0x10) != 0) {
        do {
          *puVar13 = 0;
          local_48 = *(ushort *)(param_3 + 0x10);
          uVar14 = (int)puVar11 + 1;
          puVar13 = puVar13 + 1;
          puVar11 = (undefined8 *)(ulonglong)uVar14;
        } while ((int)uVar14 < (int)((uint)local_48 * 0x20));
        uVar14 = *(uint *)(param_3 + 8);
      }
      local_46 = *(ushort *)(param_3 + 0x12);
      uVar8 = local_46;
      if (local_48 <= local_46) {
        uVar8 = local_48;
      }
      uVar14 = (uVar14 & 0xff) << 7;
      uVar12 = (ulonglong)uVar14 + 0xf;
      local_50 = 0x20;
      if (uVar12 <= uVar14) {
        uVar12 = 0xffffffffffffff0;
      }
      local_58 = (undefined4 *)(local_78 + lVar3);
      *(undefined8 *)((longlong)auStack_c0 + lVar3) = 0x14318843e;
      lVar4 = -(uVar12 & 0xfffffffffffffff0);
      pfVar18 = (float *)(local_78 + lVar4 + lVar3);
      _local_78 = ZEXT816(0);
      *(undefined8 *)((longlong)auStack_c0 + lVar4 + lVar3) = 0x143188465;
      pvVar10 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x178);
      puVar11 = puVar16;
      if (pvVar10 != (void *)0x0) {
        *(undefined8 *)((longlong)auStack_c0 + lVar4 + lVar3) = 0x14318847c;
        puVar11 = (undefined8 *)AkDevice::AkDevice(pvVar10,local_78,0,1);
      }
      *(undefined8 *)((longlong)auStack_c0 + lVar4 + lVar3) = 0x14318848e;
      FUN_1431298e0(puVar11,0);
      uVar7 = local_50;
      uVar1 = *(undefined4 *)(param_3 + 8);
      *(undefined8 *)((longlong)auStack_c0 + lVar4 + lVar3) = 0x14318849f;
      FUN_143164d80(uVar1,uVar7,pfVar18,puVar11);
      local_res18 = 0x3f800000;
      *(ushort *)((longlong)auStack_88 + lVar4 + lVar3) = uVar8 + 0xf & 0xfff0;
      local_res1c = 0x3f800000;
      *(float *)((longlong)afStack_90 + lVar4 + lVar3) = 1.0 / (float)uVar8;
      *(float **)((longlong)&uStack_98 + lVar4 + lVar3) = pfVar18;
      *(undefined8 *)((longlong)auStack_c0 + lVar4 + lVar3) = 0x1431884f6;
      CAkMixer::MixNinNChannels
                (param_3,(AkAudioBuffer *)&local_58,(AkRamp *)&local_res18,pfVar18,
                 *(float **)((longlong)&uStack_98 + lVar4 + lVar3),
                 *(float *)((longlong)afStack_90 + lVar4 + lVar3),
                 *(ushort *)((longlong)auStack_88 + lVar4 + lVar3));
      lVar6 = g_DefaultPoolId;
      if (puVar11 != (undefined8 *)0x0) {
        pcVar2 = *(code **)*puVar11;
        *(undefined8 *)((longlong)auStack_c0 + lVar4 + lVar3) = 0x14318850b;
        (*pcVar2)(puVar11,0);
        *(undefined8 *)((longlong)auStack_c0 + lVar4 + lVar3) = 0x143188515;
        AK::MemoryMgr::Free(lVar6,puVar11);
      }
      if ((byte)local_50 != 0) {
        uVar12 = (ulonglong)(byte)local_50;
        pfVar18 = *(float **)(param_1 + 0x30);
        do {
          auVar20._8_4_ = 0xcf000000;
          auVar20._0_8_ = 0xcf000000cf000000;
          auVar20._12_4_ = 0xcf000000;
          pauVar15 = (undefined1 (*) [16])(local_58 + (longlong)puVar16 * (ulonglong)local_48);
          auVar19._8_4_ = 0x4f000000;
          auVar19._0_8_ = 0x4f0000004f000000;
          auVar19._12_4_ = 0x4f000000;
          pauVar17 = pauVar15 + (local_48 >> 2);
          do {
            auVar19 = minps(auVar19,*pauVar15);
            auVar20 = maxps(auVar20,*pauVar15);
            pauVar15 = pauVar15 + 1;
          } while (pauVar15 < pauVar17);
          local_78._0_4_ = auVar19._0_4_;
          local_78._4_4_ = auVar19._4_4_;
          if ((float)local_78._4_4_ <= (float)local_78._0_4_) {
            local_78._0_4_ = local_78._4_4_;
          }
          fStack_70 = auVar19._8_4_;
          local_68 = auVar20._0_4_;
          fStack_64 = auVar20._4_4_;
          if (local_68 <= fStack_64) {
            local_68 = fStack_64;
          }
          if (fStack_70 <= (float)local_78._0_4_) {
            local_78._0_4_ = fStack_70;
          }
          fStack_60 = auVar20._8_4_;
          if (local_68 <= fStack_60) {
            local_68 = fStack_60;
          }
          fStack_6c = auVar19._12_4_;
          if (fStack_6c <= (float)local_78._0_4_) {
            local_78._0_4_ = fStack_6c;
          }
          fStack_5c = auVar20._12_4_;
          if (local_68 <= fStack_5c) {
            local_68 = fStack_5c;
          }
          puVar16 = (undefined8 *)((longlong)puVar16 + 1);
          fVar5 = ABS((float)local_78._0_4_);
          if (ABS((float)local_78._0_4_) <= local_68) {
            fVar5 = local_68;
          }
          *pfVar18 = fVar5 * param_2 * 1.0009619;
          pfVar18 = pfVar18 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
  }
  else {
    auStack_c0[0] = 0x143188374;
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x30),0,0x80);
  }
  return;
}



// FUNCTION 143188650 FUN_143188650 body=450 status=ok
// SIG undefined FUN_143188650(void)

void FUN_143188650(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  short *psVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  uint *puVar9;
  byte bVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  
  lVar4 = g_LEngineDefaultPoolId;
  psVar5 = (short *)(param_1 + 0x2d0);
  iVar12 = 3;
  bVar10 = (*(byte *)(param_1 + 200) >> 2 | *(byte *)(param_1 + 0xc9)) & 0x1f;
  plVar7 = (longlong *)(param_1 + 800);
  lVar8 = 3;
  do {
    if (((*plVar7 != 0) && (*psVar5 == 0)) && (*(short *)(param_1 + 0x350) == 0)) {
      puVar13 = (undefined4 *)(param_1 + 0x2e0 + (longlong)iVar12 * 0x18);
      puVar9 = (uint *)(param_1 + 0x2e0 + (longlong)iVar12 * 0x18);
      goto LAB_1431886cb;
    }
    iVar12 = iVar12 + -1;
    plVar7 = plVar7 + -3;
    psVar5 = psVar5 + -0x40;
    lVar8 = lVar8 + -1;
  } while (-1 < lVar8);
  puVar13 = (undefined4 *)(param_1 + 0xa0);
  puVar9 = (uint *)(param_1 + 0xa0);
LAB_1431886cb:
  puVar11 = *(undefined8 **)(param_1 + 0xb8);
  puVar6 = (undefined8 *)0x0;
  if (puVar11 != (undefined8 *)0x0) {
    if (*(uint *)((longlong)puVar11 + 0x4c) == (uint)bVar10) {
      uVar1 = *puVar9;
      uVar2 = *(uint *)(puVar11 + 1);
      if ((((char)uVar1 == (char)uVar2) && (((uVar1 ^ uVar2) & 0xf00) == 0)) &&
         (((uVar1 ^ uVar2) & 0xfffff000) == 0)) goto LAB_14318872e;
    }
    (**(code **)*puVar11)(puVar11,0);
    AK::MemoryMgr::Free(lVar4,puVar11);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    puVar11 = (undefined8 *)0x0;
  }
LAB_14318872e:
  if ((bVar10 != 0) && (puVar11 == (undefined8 *)0x0)) {
    puVar11 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x50);
    if (puVar11 != (undefined8 *)0x0) {
      uVar3 = *puVar13;
      *puVar11 = &PTR__scalar_deleting_destructor__145acb5f0;
      *(undefined4 *)(puVar11 + 1) = uVar3;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar6 = puVar11;
    }
    *(undefined8 **)(param_1 + 0xb8) = puVar6;
    if ((puVar6 != (undefined8 *)0x0) &&
       (iVar12 = AkMeterCtx::Init(puVar6,DAT_1467bdcac,bVar10), lVar4 = g_LEngineDefaultPoolId,
       iVar12 != 1)) {
      puVar11 = *(undefined8 **)(param_1 + 0xb8);
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)(puVar11,0);
        AK::MemoryMgr::Free(lVar4,puVar11);
      }
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
  }
  return;
}



// FUNCTION 143188820 FUN_143188820 body=344 status=ok
// SIG undefined FUN_143188820(void)

void FUN_143188820(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar2 = 1;
  iVar1 = *(int *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa4) = 0x11;
  if (iVar1 == 0x11) {
    uVar2 = 4;
  }
  *(undefined2 *)(param_1 + 0xaa) = 0;
  *(undefined4 *)(param_1 + 0x358) = uVar2;
  if (*(short *)(param_1 + 0x350) == 0) {
    if ((*(short *)(param_1 + 0x150) == 0) && (*(longlong *)(param_1 + 0x2d8) != 0)) {
      uVar2 = 1;
      if (*(int *)(param_1 + 0x2e4) == 0x11) {
        uVar2 = 4;
      }
      *(undefined4 *)(param_1 + 0x358) = uVar2;
      *(undefined4 *)(param_1 + 0x2e4) = 0x11;
      *(undefined2 *)(param_1 + 0x2ea) = 0;
    }
    if ((*(short *)(param_1 + 0x1d0) == 0) && (*(longlong *)(param_1 + 0x2f0) != 0)) {
      uVar2 = 1;
      if (*(int *)(param_1 + 0x2fc) == 0x11) {
        uVar2 = 4;
      }
      *(undefined4 *)(param_1 + 0x358) = uVar2;
      *(undefined4 *)(param_1 + 0x2fc) = 0x11;
      *(undefined2 *)(param_1 + 0x302) = 0;
    }
    if ((*(short *)(param_1 + 0x250) == 0) && (*(longlong *)(param_1 + 0x308) != 0)) {
      uVar2 = 1;
      if (*(int *)(param_1 + 0x314) == 0x11) {
        uVar2 = 4;
      }
      *(undefined4 *)(param_1 + 0x358) = uVar2;
      *(undefined4 *)(param_1 + 0x314) = 0x11;
      *(undefined2 *)(param_1 + 0x31a) = 0;
    }
    if ((*(short *)(param_1 + 0x2d0) == 0) && (*(longlong *)(param_1 + 800) != 0)) {
      uVar2 = 1;
      if (*(int *)(param_1 + 0x32c) == 0x11) {
        uVar2 = 4;
      }
      *(undefined4 *)(param_1 + 0x358) = uVar2;
      *(undefined4 *)(param_1 + 0x32c) = 0x11;
      *(undefined2 *)(param_1 + 0x332) = 0;
    }
  }
  _guard_xfg_dispatch_icall_nop
            (*(void **)(param_1 + 0x98),0,
             (ulonglong)((uint)*(byte *)(param_1 + 0xa0) * (uint)*(ushort *)(param_1 + 0xa8) * 4));
  return;
}



// FUNCTION 143188980 FUN_143188980 body=499 status=ok
// SIG undefined FUN_143188980(void)

void FUN_143188980(longlong param_1,uint param_2,uint param_3)

{
  short sVar1;
  byte bVar2;
  ushort uVar3;
  
  if ((param_3 & 1) != 0) {
    *(byte *)(param_1 + 0x354) =
         (*(short *)(param_1 + 0x150) != 0 ^ (byte)(param_2 & 1)) * '\x02' |
         *(byte *)(param_1 + 0x354) & 0xfd;
    *(short *)(param_1 + 0x150) = (short)(param_2 & 1);
    if (((*(byte *)(param_1 + 0x354) & 2) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x128) = 0x42ca0000;
    }
  }
  if ((param_3 & 2) != 0) {
    *(byte *)(param_1 + 0x354) =
         -((param_2 & 2) != 0) & 2U ^ -(*(short *)(param_1 + 0x1d0) != 0) & 2U |
         *(byte *)(param_1 + 0x354) & 0xfd;
    *(ushort *)(param_1 + 0x1d0) = (ushort)((param_2 & 2) != 0);
    if (((*(byte *)(param_1 + 0x354) & 2) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x128) = 0x42ca0000;
    }
  }
  if ((param_3 & 4) != 0) {
    *(byte *)(param_1 + 0x354) =
         -((param_2 & 4) != 0) & 2U ^ -(*(short *)(param_1 + 0x250) != 0) & 2U |
         *(byte *)(param_1 + 0x354) & 0xfd;
    *(ushort *)(param_1 + 0x250) = (ushort)((param_2 & 4) != 0);
    if (((*(byte *)(param_1 + 0x354) & 2) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x128) = 0x42ca0000;
    }
  }
  if ((param_3 & 8) != 0) {
    *(byte *)(param_1 + 0x354) =
         -((param_2 & 8) != 0) & 2U ^ -(*(short *)(param_1 + 0x2d0) != 0) & 2U |
         *(byte *)(param_1 + 0x354) & 0xfd;
    *(ushort *)(param_1 + 0x2d0) = (ushort)((param_2 & 8) != 0);
    if (((*(byte *)(param_1 + 0x354) & 2) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x128) = 0x42ca0000;
    }
  }
  if ((param_3 & 0x10) != 0) {
    uVar3 = (ushort)(param_2 >> 4) & 1;
    sVar1 = *(short *)(param_1 + 0x350);
    *(ushort *)(param_1 + 0x350) = uVar3;
    bVar2 = sVar1 != 0 ^ (byte)uVar3;
    *(byte *)(param_1 + 0x354) = bVar2 * '\x02' | *(byte *)(param_1 + 0x354) & 0xfd;
    if ((bVar2 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x128) = 0x42ca0000;
    }
  }
  return;
}



// FUNCTION 143188b80 FUN_143188b80 body=332 status=ok
// SIG undefined FUN_143188b80(void)

void FUN_143188b80(longlong param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  short *psVar6;
  uint uVar7;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  
  FUN_143188f60();
  puVar5 = (uint *)(param_1 + 0x2e0);
  psVar6 = (short *)(param_1 + 0x150);
  local_28 = DAT_1467bdcac;
  uVar2 = *(uint *)(param_1 + 0xa0);
  bVar1 = false;
  local_20 = (uVar2 & 0xff) << 8 | local_20 & 0xfffd0020 | 0x50020;
  uVar7 = 0;
  uVar4 = 1;
  uVar3 = uVar2;
  local_24 = uVar2;
  do {
    if (((*(longlong *)(puVar5 + -2) != 0) && (psVar6[1] == 0)) &&
       (*(short *)(param_1 + 0x352) == 0)) {
      uVar3 = *puVar5;
    }
    if ((bVar1) || ((param_2 & uVar4) != 0)) {
      FUN_143189370(param_1,uVar7,&local_28);
      uVar2 = local_24;
    }
    else if (((*(longlong *)(puVar5 + -2) != 0) && (*psVar6 == 0)) &&
            (*(short *)(param_1 + 0x350) == 0)) {
      local_24 = *puVar5;
      uVar2 = local_24;
    }
    if ((((char)uVar2 == (char)uVar3) && (((uVar2 ^ uVar3) & 0xf00) == 0)) &&
       (((uVar2 ^ uVar3) & 0xfffff000) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar7 = uVar7 + 1;
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    psVar6 = psVar6 + 0x40;
    puVar5 = puVar5 + 6;
  } while (uVar7 < 4);
  *(byte *)(param_1 + 0x354) = *(byte *)(param_1 + 0x354) & 0xfd | 1;
  FUN_143188650(param_1);
  return;
}



// FUNCTION 143188cd0 FUN_143188cd0 body=591 status=ok
// SIG undefined FUN_143188cd0(void)

void FUN_143188cd0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  longlong *local_18 [2];
  
  plVar5 = *(longlong **)(param_1 + 0x338);
  if (plVar5 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar5[0xc];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_1467be108);
      *(undefined8 *)(*(longlong *)(param_1 + 0x338) + 0x60) = 0;
      plVar5 = *(longlong **)(param_1 + 0x338);
    }
    (**(code **)(*plVar5 + 0x20))();
    *(undefined4 *)(*(longlong *)(param_1 + 0x338) + 0x68) = 0xffffffff;
  }
  local_18[0] = (longlong *)0x0;
  AK::CAkBusCtx::GetMixerPlugin(param_1 + 0x80,local_18);
  if (local_18[0] == (longlong *)0x0) {
    return;
  }
  *(int *)(*(longlong *)(param_1 + 0x338) + 0x68) = (int)local_18[0][6];
  if (local_18[0][7] != 0) {
    local_38 = 0;
    local_30 = 1;
    local_2e = 0;
    lVar4 = PluginRTPCSub::Clone
                      (*(undefined8 *)(param_1 + 0x338),local_18[0],
                       *(longlong *)(param_1 + 8) + 0x18,*(longlong *)(param_1 + 8) + 0x58,1);
    if ((lVar4 != 0) &&
       (iVar3 = FUN_143128650(*(undefined4 *)(*(longlong *)(param_1 + 0x338) + 0x68),
                              *(longlong *)(param_1 + 0x338) + 0x60,&local_38), iVar3 == 1)) {
      iVar3 = CAkEffectsMgr::ValidatePluginInfo
                        (*(undefined4 *)(*(longlong *)(param_1 + 0x338) + 0x68),6,&local_38);
      if (iVar3 == 0) {
        local_24 = *(uint *)(param_1 + 0xa0);
        local_28 = DAT_1467bdcac;
        local_20 = (local_24 & 0xff) << 8 | local_20 & 0xfffd0020 | 0x50020;
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x338) + 0x60);
        iVar3 = (**(code **)(*plVar5 + 0x30))
                          (plVar5,&PTR_PTR_1467be108,param_1 + 0xd0,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x338) + 8),&local_28);
        if ((iVar3 == 1) &&
           (iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x338) + 0x60) + 0x10))(),
           iVar3 == 1)) goto LAB_143188f09;
      }
      else if (iVar3 == 0x2e) {
        lVar4 = *(longlong *)(param_1 + 0x338);
        if (((*(uint *)(lVar4 + 0x68) & 0xfff0) == 0x10a0) &&
           (puVar2 = *(undefined8 **)(lVar4 + 0x60), puVar2 != (undefined8 *)0x0)) {
          (**(code **)*puVar2)(puVar2,0);
          (**(code **)(PTR_PTR_1467be108 + 0x10))(&PTR_PTR_1467be108,puVar2);
          lVar4 = *(longlong *)(param_1 + 0x338);
        }
        *(undefined8 *)(lVar4 + 0x60) = 0;
      }
    }
    plVar5 = *(longlong **)(param_1 + 0x338);
    if (plVar5 != (longlong *)0x0) {
      plVar1 = (longlong *)plVar5[0xc];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_1467be108);
        *(undefined8 *)(*(longlong *)(param_1 + 0x338) + 0x60) = 0;
        plVar5 = *(longlong **)(param_1 + 0x338);
      }
      (**(code **)(*plVar5 + 0x20))();
      *(undefined4 *)(*(longlong *)(param_1 + 0x338) + 0x68) = 0xffffffff;
    }
  }
LAB_143188f09:
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)(*local_18[0] + 0x10))();
  }
  return;
}



// FUNCTION 143188f20 TermSphericalVBAP body=52 status=ok
// SIG undefined TermSphericalVBAP(void)

undefined8 CAkBusFX::TermSphericalVBAP(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  AkVBAPMap::Term(param_3);
  (**(code **)(*param_2 + 0x10))(param_2,param_3);
  return 1;
}



// FUNCTION 143188f60 FUN_143188f60 body=172 status=ok
// SIG undefined FUN_143188f60(void)

void FUN_143188f60(longlong param_1)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  sVar2 = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x80);
    uStack_24 = *(undefined4 *)(param_1 + 0x84);
    uStack_20 = *(undefined4 *)(param_1 + 0x88);
    uStack_1c = *(undefined4 *)(param_1 + 0x8c);
    local_18 = 0;
    AK::CAkBusCtxRslvd::Resolve(&local_28);
    sVar2 = CAkParameterNodeBase::_GetBypassAllFX(CONCAT44(uStack_24,local_28));
    AK::CAkBusCtxRslvd::~CAkBusCtxRslvd(&local_28);
  }
  sVar1 = *(short *)(param_1 + 0x350);
  *(short *)(param_1 + 0x350) = sVar2;
  bVar3 = -(sVar1 != 0) & 2U ^ -(sVar2 != 0) & 2U;
  *(byte *)(param_1 + 0x354) = bVar3 | *(byte *)(param_1 + 0x354) & 0xfd;
  if ((bVar3 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x128) = 0x42ca0000;
  }
  return;
}



// FUNCTION 143189010 _Compute3DPositioning body=571 status=ok
// SIG undefined _Compute3DPositioning(void)

undefined4
CAkBusFX::_Compute3DPositioning
          (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,longlong param_6,uint param_7,undefined4 param_8,uint param_9,
          undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  
  lVar2 = CAkOutputMgr::FindDevice(param_1 + 0x80);
  if (lVar2 == 0) {
    return 2;
  }
  if ((param_9 & 0xf00) == 0x100) {
    uVar4 = param_9 >> 0xc & 0xffff7;
    uVar5 = uVar4 << 0xc;
    uVar1 = param_9 - ((param_9 >> 0xc) - uVar4 >> 3);
    uVar6 = uVar1 & 0xff | uVar5 | 0x100;
    if (1 < (byte)uVar1) {
      iVar7 = 1;
      lVar3 = CAkKeyArray<AkChannelConfig,void_*,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkAssignmentMovePolicy<MapStruct<AkChannelConfig,void_*>_>_>
              ::Exists(lVar2 + 0x78,uVar6);
      if (lVar3 == 0) {
        lVar3 = FUN_143129a00(lVar2,uVar6);
        iVar7 = 2 - (uint)(lVar3 != 0);
      }
      if (((uVar5 & 0x4000) != 0) && (iVar7 == 1)) {
        uVar1 = (uVar5 & 0xffffb000) >> 0xc;
        uVar1 = uVar6 - (uVar4 - uVar1 >> 2) & 0xff | 0x100 | uVar1 << 0xc;
        lVar3 = CAkKeyArray<AkChannelConfig,void_*,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkAssignmentMovePolicy<MapStruct<AkChannelConfig,void_*>_>_>
                ::Exists(lVar2 + 0x78,uVar1);
        if (lVar3 == 0) {
          lVar3 = FUN_143129a00(lVar2,uVar1);
          iVar7 = 2 - (uint)(lVar3 != 0);
        }
      }
      if (iVar7 != 1) {
        return 1;
      }
    }
  }
  uVar1 = param_7;
  if ((param_7 & 0xf00) == 0x100) {
    bVar8 = 0;
    uVar4 = param_7 >> 0xc & 0x637;
    for (uVar1 = uVar4; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      bVar8 = bVar8 + 1;
    }
    uVar1 = uVar4 << 0xc | (uint)bVar8 | 0x100;
  }
  if ((char)uVar1 != '\0') {
    CAkSpeakerPan::GetSpeakerVolumes
              (param_2,param_3,param_4,param_5,param_6,uVar1,param_8,param_9,param_10,param_11,lVar2
              );
  }
  if (((param_7 & 0x8000) != 0) && ((param_9 & 0x8000) != 0)) {
    *(undefined4 *)
     (param_6 +
     ((ulonglong)(((param_9 & 0xff) + 3 & 0xfffffffc) * ((param_7 & 0xff) - 1)) +
     (ulonglong)((param_9 & 0xff) - 1)) * 4) = 0x3f800000;
  }
  return 1;
}



// FUNCTION 143189250 FUN_143189250 body=205 status=ok
// SIG undefined FUN_143189250(void)

void FUN_143189250(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)(param_1 + 0xd8 + (param_2 & 0xffffffff) * 0x80);
  plVar1 = (longlong *)plVar5[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_1467be108);
    plVar5[0xd] = 0;
  }
  lVar4 = g_LEngineDefaultPoolId;
  puVar2 = (undefined8 *)plVar5[0xe];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,0);
    AK::MemoryMgr::Free(lVar4,puVar2);
    plVar5[0xe] = 0;
  }
  *(undefined4 *)(plVar5 + 0xc) = 0xffffffff;
  (**(code **)(*plVar5 + 0x20))(plVar5);
  pvVar3 = *(void **)(param_1 + 0x2d8 + (param_2 & 0xffffffff) * 0x18);
  puVar2 = (undefined8 *)(param_1 + 0x2d8 + (param_2 & 0xffffffff) * 0x18);
  if (pvVar3 != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,pvVar3);
    *puVar2 = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc) = 0x2b;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  return;
}



// FUNCTION 143189320 _GetOutputID body=70 status=ok
// SIG undefined _GetOutputID(void)

void CAkBusVolumes::_GetOutputID(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  
  *param_3 = 0xffffffff;
  *param_2 = 0xffffffff;
  plVar1 = (longlong *)CAkOutputMgr::FindDevice(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 143189370 FUN_143189370 body=776 status=ok
// SIG undefined FUN_143189370(void)

void FUN_143189370(longlong param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 local_88;
  uint local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  longlong *local_68;
  undefined2 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  FUN_143189250();
  local_58 = *(undefined4 *)(param_1 + 0x80);
  uStack_54 = *(undefined4 *)(param_1 + 0x84);
  uStack_50 = *(undefined4 *)(param_1 + 0x88);
  uStack_4c = *(undefined4 *)(param_1 + 0x8c);
  lVar6 = 0;
  local_68 = (longlong *)0x0;
  local_48 = 0;
  AK::CAkBusCtxRslvd::Resolve(&local_58);
  AK::CAkBusCtxRslvd::GetFX(&local_58,(ulonglong)param_2,&local_68);
  if (local_68 == (longlong *)0x0) goto LAB_14318956d;
  lVar8 = param_1 + 0xd8 + (ulonglong)param_2 * 0x80;
  *(int *)(lVar8 + 0x60) = (int)local_68[6];
  if (local_68[7] == 0) goto LAB_14318956d;
  local_88 = *(undefined8 *)param_3;
  local_80 = param_3[2];
  local_78 = 0;
  local_70 = 1;
  local_6e = 0;
  lVar4 = PluginRTPCSub::Clone
                    (lVar8,local_68,*(longlong *)(param_1 + 8) + 0x18,
                     *(longlong *)(param_1 + 8) + 0x58,1);
  if (lVar4 != 0) {
    *(undefined2 *)(lVar8 + 0x78) = local_60;
    pvVar5 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x38);
    if (pvVar5 != (void *)0x0) {
      lVar6 = CAkBusFXContext::CAkBusFXContext(pvVar5,param_1,param_2,param_1 + 0x80);
    }
    *(longlong *)(lVar8 + 0x70) = lVar6;
    if ((((lVar6 != 0) &&
         (iVar3 = FUN_143128650(*(undefined4 *)(lVar8 + 0x60),lVar8 + 0x68,&local_78), iVar3 == 1))
        && (iVar3 = CAkEffectsMgr::ValidatePluginInfo((int)local_68[6],3,&local_78), iVar3 == 0)) &&
       (iVar3 = (**(code **)(**(longlong **)(lVar8 + 0x68) + 0x30))
                          (*(longlong **)(lVar8 + 0x68),&PTR_PTR_1467be108,
                           *(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 8),&local_88),
       uVar1 = DAT_1467bdcb8, iVar3 == 1)) {
      bVar2 = local_88._4_1_;
      if ((char)local_70 == '\0') {
        uVar7 = (uint)DAT_1467bdcb8;
        lVar6 = param_1 + (ulonglong)param_2 * 0x18;
        *(undefined4 *)(lVar6 + 0x2e4) = 0x11;
        uVar7 = local_88._4_1_ * uVar7 * 4;
        pvVar5 = AK::MemoryMgr::Malign(g_LEngineDefaultPoolId,(ulonglong)uVar7,0x10);
        if (pvVar5 != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(pvVar5,0,(ulonglong)uVar7);
          *(ushort *)(lVar6 + 0x2e8) = uVar1;
          *(undefined2 *)(lVar6 + 0x2ea) = 0;
          *(uint *)(lVar6 + 0x2e0) = local_88._4_4_;
          *(void **)(lVar6 + 0x2d8) = pvVar5;
LAB_143189638:
          iVar3 = (**(code **)(**(longlong **)(lVar8 + 0x68) + 0x10))();
          if (iVar3 == 1) {
            if ((*(short *)(lVar8 + 0x78) == 0) && (*(short *)(param_1 + 0x350) == 0)) {
              *(undefined8 *)param_3 = local_88;
              param_3[2] = local_80;
            }
            goto LAB_14318956d;
          }
        }
      }
      else if ((int)local_88 == *param_3) {
        uVar7 = param_3[1];
        if ((((((byte)uVar7 == bVar2) && (((uVar7 ^ local_88._4_4_) & 0xf00) == 0)) &&
             ((((uVar7 ^ local_88._4_4_) & 0xfffff000) == 0 &&
              ((uVar7 = param_3[2], ((uVar7 ^ local_80) & 0x3f) == 0 &&
               (((uVar7 ^ local_80) & 0xffc0) == 0)))))) && (((uVar7 ^ local_80) & 0x30000) == 0))
           && (((uVar7 ^ local_80) >> 0x12 & 1) == 0)) goto LAB_143189638;
      }
    }
  }
  FUN_143189250(param_1,param_2);
LAB_14318956d:
  AK::CAkBusCtxRslvd::~CAkBusCtxRslvd(&local_58);
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  return;
}



// FUNCTION 143189680 DequeuePBI body=222 status=ok
// SIG undefined DequeuePBI(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkLEngineCmds::DequeuePBI(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)0x0;
  puVar1 = DAT_146b51f60;
  puVar4 = DAT_146b51f60;
  while (puVar3 = puVar1, puVar2 = puVar5, puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    puVar5 = puVar3;
    if (puVar3[1] == param_1) {
      puVar5 = puVar1;
      if (puVar3 != puVar4) {
        *puVar2 = puVar1;
        puVar5 = DAT_146b51f60;
      }
      DAT_146b51f60 = puVar5;
      if (puVar3 == DAT_146b51f68) {
        DAT_146b51f68 = puVar2;
      }
      puVar5 = puVar2;
      if ((puVar3 < DAT_146b51f78) || (DAT_146b51f78 + (ulonglong)DAT_146b51f80 * 3 <= puVar3)) {
        AK::MemoryMgr::Free(g_LEngineDefaultPoolId,puVar3);
        _DAT_146b51f84 = _DAT_146b51f84 + -1;
        puVar4 = DAT_146b51f60;
      }
      else {
        *puVar3 = DAT_146b51f70;
        _DAT_146b51f84 = _DAT_146b51f84 + -1;
        puVar4 = DAT_146b51f60;
        DAT_146b51f70 = puVar3;
      }
    }
  }
  return;
}



// FUNCTION 143189760 DestroyDisconnectedSources body=123 status=ok
// SIG undefined DestroyDisconnectedSources(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkLEngineCmds::DestroyDisconnectedSources(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_146b51f58 != 0) {
    lVar3 = DAT_146b51f58;
    do {
      lVar1 = *(longlong *)(lVar3 + 0x78);
      lVar2 = lVar1;
      if (lVar3 == DAT_146b51f58) {
        lVar2 = _DAT_00000078;
        DAT_146b51f58 = lVar1;
      }
      _DAT_00000078 = lVar2;
      if (lVar3 == DAT_146b51f50) {
        DAT_146b51f50 = 0;
      }
      CAkLEngine::VPLDestroySource(lVar3,0);
      lVar3 = lVar1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1431897e0 EnqueueAction body=213 status=ok
// SIG undefined EnqueueAction(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 CAkLEngineCmds::EnqueueAction(uint param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (DAT_146b51f70 == (undefined8 *)0x0) {
    puVar3 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x18);
    if (puVar3 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar3 = DAT_146b51f70;
    DAT_146b51f70 = puVar3;
  }
  puVar3 = DAT_146b51f70;
  if (DAT_146b51f68 != (undefined8 *)0x0) {
    *DAT_146b51f68 = DAT_146b51f70;
    puVar3 = DAT_146b51f60;
  }
  DAT_146b51f60 = puVar3;
  DAT_146b51f68 = DAT_146b51f70;
  uVar2 = *DAT_146b51f70;
  *DAT_146b51f70 = 0;
  DAT_146b51f70 = (undefined8 *)uVar2;
  puVar3 = DAT_146b51f68;
  _DAT_146b51f84 = _DAT_146b51f84 + 1;
  if (DAT_146b51f68 + 1 == (undefined8 *)0x0) {
    return 2;
  }
  DAT_146b51f68[1] = param_2;
  uVar1 = DAT_146b51f48;
  *(char *)((longlong)puVar3 + 0x14) = (char)param_1;
  *(uint *)((longlong)puVar3 + 0x14) = *(uint *)((longlong)puVar3 + 0x14) & 0xfffffeff;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  if (param_1 < 2) {
    DAT_146b51f4c = 1;
  }
  return 1;
}



// FUNCTION 1431898c0 Init body=118 status=ok
// SIG undefined Init(void)

undefined8 CAkLEngineCmds::Init(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  DAT_146b51f48 = 0;
  DAT_146b51f78 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x3000);
  if (DAT_146b51f78 == (undefined8 *)0x0) {
    return 0x34;
  }
  DAT_146b51f80 = 0x200;
  uVar3 = 0;
  puVar1 = DAT_146b51f78;
  DAT_146b51f70 = DAT_146b51f78;
  do {
    puVar2 = puVar1;
    uVar3 = uVar3 + 1;
    *puVar2 = puVar2 + 3;
    puVar1 = puVar2 + 3;
  } while (uVar3 < DAT_146b51f80);
  *puVar2 = 0;
  return 1;
}



// FUNCTION 143189940 FUN_143189940 body=456 status=ok
// SIG undefined FUN_143189940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143189940(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (DAT_146b51f4c != '\0') {
    puVar5 = (undefined8 *)0x0;
    puVar2 = DAT_146b51f60;
    while (puVar4 = puVar2, puVar3 = puVar5, puVar4 != (undefined8 *)0x0) {
      lVar1 = puVar4[1];
      puVar5 = puVar4;
      if ((*(longlong *)(lVar1 + 0x228) == 0) && (*(byte *)((longlong)puVar4 + 0x14) < 2)) {
        if (((*(byte *)(lVar1 + 0x294) & 0x10) == 0) || (*(int *)(lVar1 + 0x2e8) != -1)) {
          iVar6 = CAkLEngine::AddSound();
          puVar2 = (undefined8 *)*puVar4;
          if (iVar6 != 1) {
            puVar5 = puVar2;
            if (puVar4 != DAT_146b51f60) {
              *puVar3 = puVar2;
              puVar5 = DAT_146b51f60;
            }
            DAT_146b51f60 = puVar5;
            if (puVar4 == DAT_146b51f68) {
              DAT_146b51f68 = puVar3;
            }
            if ((puVar4 < DAT_146b51f78) || (DAT_146b51f78 + (ulonglong)DAT_146b51f80 * 3 <= puVar4)
               ) {
              AK::MemoryMgr::Free(g_LEngineDefaultPoolId,puVar4);
              _DAT_146b51f84 = _DAT_146b51f84 + -1;
              puVar5 = puVar3;
            }
            else {
              *puVar4 = DAT_146b51f70;
              _DAT_146b51f84 = _DAT_146b51f84 + -1;
              puVar5 = puVar3;
              DAT_146b51f70 = puVar4;
            }
          }
        }
        else {
          puVar2 = (undefined8 *)*puVar4;
          puVar5 = puVar2;
          if (puVar4 != DAT_146b51f60) {
            *puVar3 = puVar2;
            puVar5 = DAT_146b51f60;
          }
          DAT_146b51f60 = puVar5;
          if (puVar4 == DAT_146b51f68) {
            DAT_146b51f68 = puVar3;
          }
          if ((puVar4 < DAT_146b51f78) || (DAT_146b51f78 + (ulonglong)DAT_146b51f80 * 3 <= puVar4))
          {
            AK::MemoryMgr::Free(g_LEngineDefaultPoolId,puVar4);
          }
          else {
            *puVar4 = DAT_146b51f70;
            DAT_146b51f70 = puVar4;
          }
          _DAT_146b51f84 = _DAT_146b51f84 + -1;
          CAkPBI::Destroy(lVar1,1);
          puVar5 = puVar3;
        }
      }
      else {
        puVar2 = (undefined8 *)*puVar4;
      }
    }
    DAT_146b51f4c = '\0';
  }
  FUN_143189d60();
  return;
}



// FUNCTION 143189b10 FUN_143189b10 body=586 status=ok
// SIG undefined FUN_143189b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143189b10(uint param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  int *piVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  
  puVar13 = (undefined8 *)0x0;
  if (DAT_146b51f58 != (undefined8 *)0x0) {
    puVar10 = puVar13;
    puVar11 = DAT_146b51f58;
    do {
      lVar1 = puVar11[1];
      pbVar6 = (byte *)(lVar1 + 0x27c);
      if (lVar1 == 0) {
        pbVar6 = &DAT_00000294;
      }
      if ((*pbVar6 & 0x10) == 0) {
LAB_143189cba:
        if ((*pbVar6 & 0x40) == 0) {
          pfVar9 = (float *)(lVar1 + 0x224);
          if (lVar1 == 0) {
            pfVar9 = (float *)&DAT_0000023c;
          }
          if ((float)param_1 * *pfVar9 <= 0.0) {
            fVar14 = -0.5;
          }
          else {
            fVar14 = 0.5;
          }
          piVar7 = (int *)(lVar1 + 0x2a0);
          if (lVar1 == 0) {
            piVar7 = (int *)&DAT_000002b8;
          }
          if (-1 < *piVar7) {
            *piVar7 = *piVar7 - (int)(fVar14 + (float)param_1 * *pfVar9);
          }
        }
        puVar12 = (undefined8 *)puVar11[0xf];
      }
      else {
        piVar7 = (int *)(lVar1 + 0x2d0);
        if (lVar1 == 0) {
          piVar7 = (int *)&DAT_000002e8;
        }
        puVar5 = puVar13;
        puVar12 = DAT_146b51f60;
        puVar4 = DAT_146b51f60;
        if (*piVar7 != -1) goto LAB_143189cba;
        while (puVar3 = puVar12, puVar2 = puVar5, puVar3 != (undefined8 *)0x0) {
          puVar12 = (undefined8 *)*puVar3;
          puVar8 = (undefined8 *)(puVar3[1] + 0x18);
          if (puVar3[1] == 0) {
            puVar8 = puVar13;
          }
          puVar5 = puVar3;
          if (puVar8 == (undefined8 *)puVar11[1]) {
            puVar5 = puVar12;
            if (puVar3 != puVar4) {
              *puVar2 = puVar12;
              puVar5 = DAT_146b51f60;
            }
            DAT_146b51f60 = puVar5;
            if (puVar3 == DAT_146b51f68) {
              DAT_146b51f68 = puVar2;
            }
            puVar5 = puVar2;
            if ((puVar3 < DAT_146b51f78) || (DAT_146b51f78 + (ulonglong)DAT_146b51f80 * 3 <= puVar3)
               ) {
              AK::MemoryMgr::Free(g_LEngineDefaultPoolId,puVar3);
              _DAT_146b51f84 = _DAT_146b51f84 + -1;
              puVar4 = DAT_146b51f60;
            }
            else {
              *puVar3 = DAT_146b51f70;
              _DAT_146b51f84 = _DAT_146b51f84 + -1;
              puVar4 = DAT_146b51f60;
              DAT_146b51f70 = puVar3;
            }
          }
        }
        puVar12 = (undefined8 *)puVar11[0xf];
        puVar4 = puVar12;
        if (puVar11 != DAT_146b51f58) {
          puVar10[0xf] = puVar12;
          puVar4 = DAT_146b51f58;
        }
        DAT_146b51f58 = puVar4;
        if (puVar11 == DAT_146b51f50) {
          DAT_146b51f50 = puVar10;
        }
        CAkLEngine::VPLDestroySource(puVar11,0);
        puVar11 = puVar10;
      }
      puVar10 = puVar11;
      puVar11 = puVar12;
    } while (puVar12 != (undefined8 *)0x0);
  }
  return;
}



// FUNCTION 143189d60 FUN_143189d60 body=665 status=ok
// SIG undefined FUN_143189d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143189d60(void)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
LAB_143189d90:
  plVar2 = DAT_146b51f60;
  plVar8 = (longlong *)0x0;
LAB_143189da0:
  do {
    plVar6 = plVar2;
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    lVar5 = plVar6[2];
    bVar3 = false;
    plVar2 = plVar6;
    plVar9 = plVar8;
    do {
      plVar7 = plVar2;
      if ((int)lVar5 != (int)plVar7[2]) break;
      if ((((*(uint *)((longlong)plVar7 + 0x14) >> 8 & 1) == 0) &&
          ((byte)*(uint *)((longlong)plVar7 + 0x14) < 2)) &&
         ((lVar1 = plVar7[1], (*(byte *)(lVar1 + 0x294) & 0x10) == 0 ||
          (*(int *)(lVar1 + 0x2e8) != -1)))) {
        if ((*(longlong *)(lVar1 + 0x228) == 0) ||
           (iVar4 = CAkLEngine::VPLTryConnectSource(), iVar4 == 2)) {
          plVar2 = (longlong *)*plVar7;
          if (plVar7 != DAT_146b51f60) {
            *plVar9 = *plVar7;
            plVar2 = DAT_146b51f60;
          }
          DAT_146b51f60 = plVar2;
          if (plVar7 == DAT_146b51f68) {
            DAT_146b51f68 = plVar9;
          }
          if ((plVar7 < DAT_146b51f78) || (DAT_146b51f78 + (ulonglong)DAT_146b51f80 * 3 <= plVar7))
          {
            AK::MemoryMgr::Free(g_LEngineDefaultPoolId,plVar7);
            _DAT_146b51f84 = _DAT_146b51f84 + -1;
          }
          else {
            *plVar7 = (longlong)DAT_146b51f70;
            _DAT_146b51f84 = _DAT_146b51f84 + -1;
            DAT_146b51f70 = plVar7;
          }
          goto LAB_143189d90;
        }
        if (iVar4 == 0x3f) {
          bVar3 = true;
        }
        else {
          *(uint *)((longlong)plVar7 + 0x14) = *(uint *)((longlong)plVar7 + 0x14) | 0x100;
        }
      }
      plVar2 = (longlong *)*plVar7;
      plVar9 = plVar7;
    } while ((longlong *)*plVar7 != (longlong *)0x0);
    if (!bVar3) {
      lVar5 = 0;
      if ((*(uint *)((longlong)plVar6 + 0x14) >> 8 & 1) == 0) {
        if (((byte)*(uint *)((longlong)plVar6 + 0x14) < 2) ||
           (lVar5 = CAkLEngine::ResolveCommandVPL(plVar6 + 1), lVar5 != 0)) goto LAB_143189e69;
      }
      else {
        lVar5 = *(longlong *)(plVar6[1] + 0x228);
LAB_143189e69:
        if ((*(uint *)((longlong)plVar6 + 0x14) >> 8 & 1) == 0) {
          plVar2 = (longlong *)*plVar6;
          plVar8 = plVar6;
          goto LAB_143189da0;
        }
        switch(*(uint *)((longlong)plVar6 + 0x14) & 0xff) {
        case 0:
          FUN_14316ef10(lVar5);
          break;
        case 1:
          FUN_14316ef10(lVar5);
        case 2:
          FUN_14316eac0(lVar5);
          break;
        case 3:
          FUN_14316eca0(lVar5);
          break;
        case 4:
          FUN_14316f6c0(lVar5,plVar6[1]);
          break;
        case 5:
          CAkVPLSrcCbxNode::SeekSource(lVar5);
        }
      }
      plVar2 = (longlong *)*plVar6;
      plVar9 = plVar2;
      if (plVar6 != DAT_146b51f60) {
        *plVar8 = (longlong)plVar2;
        plVar9 = DAT_146b51f60;
      }
      DAT_146b51f60 = plVar9;
      if (plVar6 == DAT_146b51f68) {
        DAT_146b51f68 = plVar8;
      }
      if ((plVar6 < DAT_146b51f78) || (DAT_146b51f78 + (ulonglong)DAT_146b51f80 * 3 <= plVar6)) {
        AK::MemoryMgr::Free(g_LEngineDefaultPoolId,plVar6);
        _DAT_146b51f84 = _DAT_146b51f84 + -1;
      }
      else {
        *plVar6 = (longlong)DAT_146b51f70;
        _DAT_146b51f84 = _DAT_146b51f84 + -1;
        DAT_146b51f70 = plVar6;
      }
      goto LAB_143189da0;
    }
    do {
      plVar8 = plVar6;
      plVar2 = (longlong *)*plVar8;
      if (plVar2 == (longlong *)0x0) break;
      plVar6 = plVar2;
    } while ((int)lVar5 == (int)plVar2[2]);
  } while( true );
}



// FUNCTION 14318a020 FUN_14318a020 body=449 status=ok
// SIG undefined FUN_14318a020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318a020(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)0x0;
  puVar3 = DAT_146b51f60;
  if (DAT_146b51f60 == (undefined8 *)0x0) {
    DAT_146b51f4c = 0;
    return;
  }
  do {
    lVar1 = puVar3[1];
    puVar6 = puVar3;
    if ((*(longlong *)(lVar1 + 0x228) == 0) && (*(byte *)((longlong)puVar3 + 0x14) < 2)) {
      if (((*(byte *)(lVar1 + 0x294) & 0x10) == 0) || (*(int *)(lVar1 + 0x2e8) != -1)) {
        iVar2 = CAkLEngine::AddSound();
        puVar4 = (undefined8 *)*puVar3;
        if (iVar2 != 1) {
          puVar6 = puVar4;
          if (puVar3 != DAT_146b51f60) {
            *puVar5 = puVar4;
            puVar6 = DAT_146b51f60;
          }
          DAT_146b51f60 = puVar6;
          if (puVar3 == DAT_146b51f68) {
            DAT_146b51f68 = puVar5;
          }
          if ((puVar3 < DAT_146b51f78) || (DAT_146b51f78 + (ulonglong)DAT_146b51f80 * 3 <= puVar3))
          {
            AK::MemoryMgr::Free(g_LEngineDefaultPoolId,puVar3);
            _DAT_146b51f84 = _DAT_146b51f84 + -1;
            puVar6 = puVar5;
          }
          else {
            *puVar3 = DAT_146b51f70;
            _DAT_146b51f84 = _DAT_146b51f84 + -1;
            puVar6 = puVar5;
            DAT_146b51f70 = puVar3;
          }
        }
      }
      else {
        puVar4 = (undefined8 *)*puVar3;
        puVar6 = puVar4;
        if (puVar3 != DAT_146b51f60) {
          *puVar5 = puVar4;
          puVar6 = DAT_146b51f60;
        }
        DAT_146b51f60 = puVar6;
        if (puVar3 == DAT_146b51f68) {
          DAT_146b51f68 = puVar5;
        }
        if ((puVar3 < DAT_146b51f78) || (DAT_146b51f78 + (ulonglong)DAT_146b51f80 * 3 <= puVar3)) {
          AK::MemoryMgr::Free(g_LEngineDefaultPoolId,puVar3);
        }
        else {
          *puVar3 = DAT_146b51f70;
          DAT_146b51f70 = puVar3;
        }
        _DAT_146b51f84 = _DAT_146b51f84 + -1;
        CAkPBI::Destroy(lVar1,1);
        puVar6 = puVar5;
      }
    }
    else {
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3 = puVar4;
    puVar5 = puVar6;
  } while (puVar4 != (undefined8 *)0x0);
  DAT_146b51f4c = 0;
  return;
}



// FUNCTION 14318a1f0 Term body=290 status=ok
// SIG undefined Term(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkLEngineCmds::Term(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  DAT_146b51f58 = 0;
  DAT_146b51f50 = 0;
  while (puVar3 = DAT_146b51f60, DAT_146b51f60 != (undefined8 *)0x0) {
    if (DAT_146b51f60 == DAT_146b51f68) {
      DAT_146b51f68 = (undefined8 *)0x0;
    }
    if ((DAT_146b51f60 < DAT_146b51f78) ||
       (DAT_146b51f78 + (ulonglong)DAT_146b51f80 * 3 <= DAT_146b51f60)) {
      DAT_146b51f60 = (undefined8 *)*DAT_146b51f60;
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,puVar3);
      _DAT_146b51f84 = _DAT_146b51f84 + -1;
    }
    else {
      puVar2 = (undefined8 *)*DAT_146b51f60;
      *DAT_146b51f60 = DAT_146b51f70;
      DAT_146b51f60 = puVar2;
      _DAT_146b51f84 = _DAT_146b51f84 + -1;
      DAT_146b51f70 = puVar3;
    }
  }
  DAT_146b51f60 = (undefined8 *)0x0;
  puVar3 = DAT_146b51f70;
  puVar2 = DAT_146b51f78;
  while (puVar1 = puVar3, puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar1;
    if ((puVar1 < puVar2) || (puVar2 + (ulonglong)DAT_146b51f80 * 3 <= puVar1)) {
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,puVar1);
      puVar2 = DAT_146b51f78;
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,puVar2);
    DAT_146b51f78 = (undefined8 *)0x0;
  }
  DAT_146b51f80 = 0;
  DAT_146b51f60 = (undefined8 *)0x0;
  DAT_146b51f68 = (undefined8 *)0x0;
  DAT_146b51f70 = (undefined8 *)0x0;
  return;
}



// FUNCTION 14318a320 FUN_14318a320 body=56 status=ok
// SIG undefined FUN_14318a320(void)

undefined8 * FUN_14318a320(undefined8 *param_1)

{
  FUN_14317a920();
  *param_1 = &PTR__scalar_deleting_destructor__145acb648;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 14318a360 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FBrushSceneProxy::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acb648;
  FUN_14317aa50();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 14318a3c0 FUN_14318a3c0 body=129 status=ok
// SIG undefined FUN_14318a3c0(void)

undefined8 FUN_14318a3c0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  cVar2 = (**(code **)(*(longlong *)param_1[0x2e] + 0x128))((longlong *)param_1[0x2e],1);
  if (cVar2 == '\0') {
    return 2;
  }
  lVar1 = param_1[0x2e];
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x20))(param_1,local_res8);
  FUN_1431abd30(param_1,lVar1,uVar4,uVar3);
  return 1;
}



// FUNCTION 14318a450 FUN_14318a450 body=216 status=ok
// SIG undefined FUN_14318a450(void)

void FUN_14318a450(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  do {
    lVar2 = DAT_146b51f90;
    lVar5 = DAT_146b51f90;
    lVar6 = 0;
    if (DAT_146b51f90 == 0) {
      return;
    }
    do {
      plVar1 = (longlong *)(lVar5 + 0x50);
      cVar3 = FUN_143183320(*(undefined8 *)(lVar5 + 0x180));
      if (cVar3 == '\0') {
        lVar4 = 0;
        if (*plVar1 != 0) {
          *(undefined8 *)(*plVar1 + 0x188) = *(undefined8 *)(lVar5 + 0x188);
          lVar4 = *plVar1;
        }
        if (lVar5 == DAT_146b51f90) {
          DAT_146b51f90 = lVar4;
          *(undefined8 *)(lVar5 + 0x188) = 0;
          *plVar1 = 0;
        }
        else {
          *(longlong *)(lVar6 + 0x50) = lVar4;
          *(undefined8 *)(lVar5 + 0x188) = 0;
          *plVar1 = 0;
        }
      }
      else {
        lVar4 = *plVar1;
        lVar6 = lVar5;
      }
      lVar5 = lVar4;
    } while (lVar4 != 0);
  } while (lVar2 != DAT_146b51f90);
  return;
}



// FUNCTION 14318a550 FUN_14318a550 body=754 status=ok
// SIG undefined FUN_14318a550(void)

void FUN_14318a550(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  ulonglong uVar8;
  byte bVar9;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong uVar7;
  
  uVar7 = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(byte *)((longlong)param_1 + 0x84) = *(byte *)((longlong)param_1 + 0x84) & 0xfc;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) & 0xfc;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(byte *)((longlong)param_1 + 0x84) = *(byte *)((longlong)param_1 + 0x84) & 0xfd;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xea) = 0;
  CAkParameterNodeBase::UpdateBaseParams(param_1[0x2e],param_1 + 3,param_1 + 0x23,param_1[0x2d]);
  *(undefined4 *)(param_1 + 0x25) = 0x42ca0000;
  FUN_143146270(param_1[0x2e],param_1 + 0xd,param_1 + 3);
  lVar1 = param_1[0x2e];
  if ((param_1[0x30] != 0) && (uVar8 = uVar7, lVar1 != 0)) {
    do {
      sVar4 = CAkParameterNodeBase::GetBypassFX(lVar1);
      lVar2 = param_1[0x30];
      *(byte *)(lVar2 + 0x354) =
           -(sVar4 != 0) & 2U ^ -(*(short *)(uVar8 + 0x150 + lVar2) != 0) & 2U |
           *(byte *)(lVar2 + 0x354) & 0xfd;
      *(short *)(uVar8 + 0x150 + lVar2) = sVar4;
      if (((*(byte *)(lVar2 + 0x354) & 2) != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x128) = 0x42ca0000;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 0x80;
    } while (uVar6 < 4);
    sVar5 = CAkParameterNodeBase::_GetBypassAllFX(lVar1);
    lVar1 = param_1[0x30];
    sVar4 = *(short *)(lVar1 + 0x350);
    *(short *)(lVar1 + 0x350) = sVar5;
    bVar9 = -(sVar4 != 0) & 2U ^ -(sVar5 != 0) & 2U;
    *(byte *)(lVar1 + 0x354) = bVar9 | *(byte *)(lVar1 + 0x354) & 0xfd;
    if ((bVar9 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x128) = 0x42ca0000;
    }
  }
  bVar9 = *(byte *)((longlong)param_1 + 0x17c);
  if ((bVar9 & 4) == 0) {
    local_48 = 0;
    local_40 = 0xff00;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 1;
    local_20 = 0;
    (**(code **)(*param_1 + 0x40))(param_1,&local_48,1);
    (**(code **)(*(longlong *)param_1[0x2e] + 0x148))
              ((longlong *)param_1[0x2e],&local_48,param_1 + 0xb,1);
    bVar9 = *(byte *)((longlong)param_1 + 0x17c) | 4;
  }
  *(byte *)((longlong)param_1 + 0x17c) = bVar9 | 3;
  cVar3 = FUN_14317c0f0(param_1);
  if ((((cVar3 != '\0') && (param_1[0x31] == 0)) && (param_1[10] == 0)) &&
     (DAT_146b51f90 != param_1)) {
    if ((DAT_146b51f90 == (longlong *)0x0) ||
       (DAT_146b51f90[0x31] = (longlong)param_1, DAT_146b51f90 == (longlong *)0x0)) {
      DAT_146b51f90 = param_1;
      param_1[10] = 0;
      return;
    }
    param_1[10] = (longlong)DAT_146b51f90;
    DAT_146b51f90 = param_1;
  }
  return;
}



// FUNCTION 14318a8b0 FUN_14318a8b0 body=203 status=ok
// SIG undefined FUN_14318a8b0(void)

void FUN_14318a8b0(longlong *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_res8);
  FUN_1431ac080(param_1,uVar2,uVar1);
  (**(code **)(*(longlong *)param_1[0x2e] + 0x130))((longlong *)param_1[0x2e],1);
  lVar4 = param_1[0x31];
  if (((lVar4 != 0) || (param_1[10] != 0)) || (DAT_146b51f90 == param_1)) {
    plVar3 = (longlong *)0x0;
    if (param_1[10] != 0) {
      *(longlong *)(param_1[10] + 0x188) = lVar4;
      lVar4 = param_1[0x31];
      plVar3 = (longlong *)param_1[10];
    }
    if (param_1 != DAT_146b51f90) {
      *(longlong **)(lVar4 + 0x50) = plVar3;
      plVar3 = DAT_146b51f90;
    }
    DAT_146b51f90 = plVar3;
    param_1[0x31] = 0;
    param_1[10] = 0;
  }
  FUN_14317ca80(param_1,param_2);
  return;
}



// FUNCTION 14318aa40 FUN_14318aa40 body=287 status=ok
// SIG undefined FUN_14318aa40(void)

void FUN_14318aa40(undefined8 *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[10];
  *param_1 = &PTR_FUN_145acb720;
  param_1[3] = &PTR_LAB_145acb748;
  pvVar2 = pvVar3;
  if (pvVar3 != (void *)((ulonglong)*(uint *)(param_1 + 0xb) * 0x20 + (longlong)pvVar3)) {
    do {
      if (*(void **)((longlong)pvVar2 + 0x10) != (void *)0x0) {
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar2 + 0x10));
        *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
      }
      *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
      pvVar2 = (void *)((longlong)pvVar2 + 0x20);
      pvVar3 = (void *)param_1[10];
    } while (pvVar2 != (void *)((ulonglong)*(uint *)(param_1 + 0xb) * 0x20 + (longlong)pvVar3));
  }
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar3);
    param_1[10] = 0;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  if ((void *)param_1[0xc] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0xc]);
    param_1[0xc] = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  if ((void *)param_1[8] != (void *)0x0) {
    *(undefined4 *)(param_1 + 9) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[8]);
    param_1[8] = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&PTR_PTR_1467be0f8);
  }
  CAkFxBaseStateAware::~CAkFxBaseStateAware(param_1 + 3);
  CAkIndexable::~CAkIndexable(param_1);
  return;
}



// FUNCTION 14318ab70 FUN_14318ab70 body=52 status=ok
// SIG undefined FUN_14318ab70(void)

undefined8 FUN_14318ab70(undefined8 param_1,ulonglong param_2)

{
  FUN_14318aa40();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14318abb0 AddRef body=77 status=ok
// SIG undefined AddRef(void)

int CAkAudioDevice::AddRef(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x300));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x300));
  return iVar2;
}



// FUNCTION 14318ac00 AddRef body=77 status=ok
// SIG undefined AddRef(void)

int CAkFxCustom::AddRef(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x2c0));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x2c0));
  return iVar2;
}



// FUNCTION 14318ac50 AddRef body=77 status=ok
// SIG undefined AddRef(void)

int CAkFxShareSet::AddRef(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x280));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x280));
  return iVar2;
}



// FUNCTION 14318aca0 CalculatePropertyUpdateStates body=650 status=ok
// SIG undefined CalculatePropertyUpdateStates(void)

void PluginRTPCSub::CalculatePropertyUpdateStates(longlong param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  short *psVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float local_res8 [2];
  
  plVar7 = (longlong *)(**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x30))();
  if (plVar7 != (longlong *)0x0) {
    psVar11 = (short *)*plVar7;
    uVar3 = *(uint *)(param_1 + 0x50);
    if (psVar11 != psVar11 + (ulonglong)*(uint *)(plVar7 + 1) * 2) {
      do {
        cVar1 = (char)psVar11[1];
        bVar4 = false;
        sVar2 = *psVar11;
        if (cVar1 == '\x03') {
          local_res8[0] = 1.0;
          fVar13 = 1.0;
          fVar14 = 1.0;
        }
        else {
          fVar13 = 0.0;
          fVar14 = 0.0;
          local_res8[0] = 0.0;
        }
        uVar6 = 0;
        if (3 < uVar3) {
          pfVar10 = (float *)(*(longlong *)(param_1 + 0x48) + 0xc);
          pfVar8 = (float *)(*(longlong *)(param_1 + 0x48) + 0x1c);
          uVar6 = (uVar3 - 4 >> 2) + 1;
          uVar12 = (ulonglong)uVar6;
          uVar6 = uVar6 * 4;
          do {
            if (*(short *)(pfVar10 + -1) == sVar2) {
              if (cVar1 == '\x03') {
                fVar13 = *pfVar10 * fVar13;
              }
              else {
                fVar13 = *pfVar10 + fVar13;
              }
              local_res8[0] = fVar13;
              if (pfVar10[-3] == 0.0) {
                fVar14 = *pfVar10;
              }
              else {
                bVar4 = true;
              }
            }
            if (*(short *)(pfVar8 + -1) == sVar2) {
              if (cVar1 == '\x03') {
                fVar13 = *pfVar8 * fVar13;
              }
              else {
                fVar13 = *pfVar8 + fVar13;
              }
              local_res8[0] = fVar13;
              if (pfVar10[1] == 0.0) {
                fVar14 = *pfVar8;
              }
              else {
                bVar4 = true;
              }
            }
            if (*(short *)(pfVar8 + 3) == sVar2) {
              if (cVar1 == '\x03') {
                fVar13 = pfVar8[4] * fVar13;
              }
              else {
                fVar13 = pfVar8[4] + fVar13;
              }
              local_res8[0] = fVar13;
              if (pfVar10[5] == 0.0) {
                fVar14 = pfVar8[4];
              }
              else {
                bVar4 = true;
              }
            }
            if (*(short *)(pfVar8 + 7) == sVar2) {
              if (cVar1 == '\x03') {
                fVar13 = pfVar8[8] * fVar13;
              }
              else {
                fVar13 = pfVar8[8] + fVar13;
              }
              local_res8[0] = fVar13;
              if (pfVar10[9] == 0.0) {
                fVar14 = pfVar8[8];
              }
              else {
                bVar4 = true;
              }
            }
            pfVar10 = pfVar10 + 0x10;
            pfVar8 = pfVar8 + 0x10;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if (uVar6 < uVar3) {
          piVar9 = (int *)((ulonglong)uVar6 * 0x10 + *(longlong *)(param_1 + 0x48));
          uVar12 = (ulonglong)(uVar3 - uVar6);
          do {
            if ((short)piVar9[2] == sVar2) {
              if (cVar1 == '\x03') {
                fVar13 = (float)piVar9[3] * fVar13;
              }
              else {
                fVar13 = (float)piVar9[3] + fVar13;
              }
              local_res8[0] = fVar13;
              if (*piVar9 == 0) {
                fVar14 = (float)piVar9[3];
              }
              else {
                bVar4 = true;
              }
            }
            piVar9 = piVar9 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        cVar5 = FUN_14318b260(param_1,sVar2,cVar1,local_res8);
        if ((bVar4) || (bVar4 = false, cVar5 != '\0')) {
          bVar4 = true;
        }
        if ((cVar1 == '\x04') && (bVar4)) {
          local_res8[0] = local_res8[0] - fVar14;
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 8))
                  (*(longlong **)(param_1 + 8),sVar2,local_res8);
        psVar11 = psVar11 + 2;
      } while (psVar11 != (short *)(*plVar7 + (ulonglong)*(uint *)(plVar7 + 1) * 4));
    }
  }
  return;
}



// FUNCTION 14318af30 Clone body=34 status=ok
// SIG undefined Clone(void)

void PluginRTPCSub::Clone
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined1 param_5)

{
  FUN_14318cfa0(param_1,param_2,0,param_3,param_4,param_5);
  return;
}



// FUNCTION 14318af60 FUN_14318af60 body=32 status=ok
// SIG undefined FUN_14318af60(void)

void FUN_14318af60(void)

{
  FUN_14318cfa0();
  return;
}



// FUNCTION 14318af80 Create body=235 status=ok
// SIG undefined Create(void)

undefined8 * CAkAudioDevice::Create(void)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x80);
  if (puVar4 != (undefined8 *)0x0) {
    CAkIndexable::CAkIndexable(puVar4);
    CAkFxBaseStateAware::CAkFxBaseStateAware(puVar4 + 3);
    *(undefined4 *)(puVar4 + 6) = 0xffffffff;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xf] = 0;
    *puVar4 = &PTR_FUN_145acb818;
    puVar4[3] = &PTR_LAB_145acb748;
    lVar2 = DAT_146b50af8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x300);
    EnterCriticalSection(lpCriticalSection);
    cVar3 = FUN_14313b140(lVar2 + 0x328);
    if (cVar3 != '\0') {
      uVar1 = (ulonglong)*(uint *)(puVar4 + 2) % (ulonglong)*(uint *)(lVar2 + 0x330);
      puVar4[1] = *(undefined8 *)(*(longlong *)(lVar2 + 0x328) + uVar1 * 8);
      *(undefined8 **)(*(longlong *)(lVar2 + 0x328) + uVar1 * 8) = puVar4;
      *(int *)(lVar2 + 0x338) = *(int *)(lVar2 + 0x338) + 1;
    }
    LeaveCriticalSection(lpCriticalSection);
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14318b070 Create body=235 status=ok
// SIG undefined Create(void)

undefined8 * CAkFxCustom::Create(void)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x80);
  if (puVar4 != (undefined8 *)0x0) {
    CAkIndexable::CAkIndexable(puVar4);
    CAkFxBaseStateAware::CAkFxBaseStateAware(puVar4 + 3);
    *(undefined4 *)(puVar4 + 6) = 0xffffffff;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xf] = 0;
    *puVar4 = &PTR_FUN_145acb7f0;
    puVar4[3] = &PTR_LAB_145acb748;
    lVar2 = DAT_146b50af8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x2c0);
    EnterCriticalSection(lpCriticalSection);
    cVar3 = FUN_14313b140(lVar2 + 0x2e8);
    if (cVar3 != '\0') {
      uVar1 = (ulonglong)*(uint *)(puVar4 + 2) % (ulonglong)*(uint *)(lVar2 + 0x2f0);
      puVar4[1] = *(undefined8 *)(*(longlong *)(lVar2 + 0x2e8) + uVar1 * 8);
      *(undefined8 **)(*(longlong *)(lVar2 + 0x2e8) + uVar1 * 8) = puVar4;
      *(int *)(lVar2 + 0x2f8) = *(int *)(lVar2 + 0x2f8) + 1;
    }
    LeaveCriticalSection(lpCriticalSection);
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14318b160 Create body=235 status=ok
// SIG undefined Create(void)

undefined8 * CAkFxShareSet::Create(void)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x80);
  if (puVar4 != (undefined8 *)0x0) {
    CAkIndexable::CAkIndexable(puVar4);
    CAkFxBaseStateAware::CAkFxBaseStateAware(puVar4 + 3);
    *(undefined4 *)(puVar4 + 6) = 0xffffffff;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xf] = 0;
    *puVar4 = &PTR_FUN_145acb7c8;
    puVar4[3] = &PTR_LAB_145acb748;
    lVar2 = DAT_146b50af8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x280);
    EnterCriticalSection(lpCriticalSection);
    cVar3 = FUN_14313b140(lVar2 + 0x2a8);
    if (cVar3 != '\0') {
      uVar1 = (ulonglong)*(uint *)(puVar4 + 2) % (ulonglong)*(uint *)(lVar2 + 0x2b0);
      puVar4[1] = *(undefined8 *)(*(longlong *)(lVar2 + 0x2a8) + uVar1 * 8);
      *(undefined8 **)(*(longlong *)(lVar2 + 0x2a8) + uVar1 * 8) = puVar4;
      *(int *)(lVar2 + 0x2b8) = *(int *)(lVar2 + 0x2b8) + 1;
    }
    LeaveCriticalSection(lpCriticalSection);
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14318b260 FUN_14318b260 body=626 status=ok
// SIG undefined FUN_14318b260(void)

undefined8 FUN_14318b260(longlong param_1,ushort param_2,int param_3,float *param_4)

{
  undefined4 uVar1;
  ushort *puVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  float *pfVar8;
  longlong *plVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uStack_50;
  
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
  if (param_3 == 3) {
    lVar4 = (**(code **)(*plVar9 + 0x78))();
    uVar10 = 0;
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) {
      uVar10 = 1;
      do {
        puVar2 = *(ushort **)(lVar4 + 0x20);
        if (puVar2 != (ushort *)0x0) {
          uVar5 = 0;
          do {
            uVar7 = uVar5 + 1;
            if (puVar2[uVar7] == param_2) {
              pfVar8 = (float *)((longlong)puVar2 +
                                (ulonglong)uVar5 * 0x10 +
                                ((ulonglong)((uint)*puVar2 * 2 + 5) & 0xfffffffc));
              if ((pfVar8 != (float *)0x0) &&
                 (cVar3 = CAkStateAware::UseState(plVar9), cVar3 != '\0')) {
                fVar11 = *pfVar8;
                goto LAB_14318b308;
              }
              break;
            }
            uVar5 = uVar7;
          } while (uVar7 < *puVar2);
        }
        fVar11 = 1.0;
LAB_14318b308:
        uVar5 = *(uint *)(param_1 + 0x50);
        uVar1 = *(undefined4 *)(lVar4 + 0x38);
        uStack_50 = CONCAT22(uStack_50._2_2_,param_2);
        if ((uVar5 < *(uint *)(param_1 + 0x54)) ||
           ((cVar3 = FUN_14318b500(param_1 + 0x48,2), cVar3 != '\0' &&
            (uVar5 < *(uint *)(param_1 + 0x54))))) {
          uVar5 = *(uint *)(param_1 + 0x50);
          *(uint *)(param_1 + 0x50) = uVar5 + 1;
          puVar6 = (undefined4 *)((ulonglong)uVar5 * 0x10 + *(longlong *)(param_1 + 0x48));
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 2;
            puVar6[1] = uVar1;
            puVar6[2] = uStack_50;
            puVar6[3] = fVar11;
          }
        }
        *param_4 = fVar11 * *param_4;
        lVar4 = *(longlong *)(lVar4 + 0x10);
      } while (lVar4 != 0);
    }
  }
  else {
    lVar4 = (**(code **)(*plVar9 + 0x78))();
    uVar10 = 0;
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) {
      uVar10 = 1;
      do {
        puVar2 = *(ushort **)(lVar4 + 0x20);
        if (puVar2 != (ushort *)0x0) {
          uVar5 = 0;
          do {
            uVar7 = uVar5 + 1;
            if (puVar2[uVar7] == param_2) {
              pfVar8 = (float *)((longlong)puVar2 +
                                (ulonglong)uVar5 * 0x10 +
                                ((ulonglong)((uint)*puVar2 * 2 + 5) & 0xfffffffc));
              if ((pfVar8 != (float *)0x0) &&
                 (cVar3 = CAkStateAware::UseState(plVar9), cVar3 != '\0')) {
                fVar11 = *pfVar8;
                goto LAB_14318b408;
              }
              break;
            }
            uVar5 = uVar7;
          } while (uVar7 < *puVar2);
        }
        fVar11 = 0.0;
LAB_14318b408:
        uVar5 = *(uint *)(param_1 + 0x50);
        uVar1 = *(undefined4 *)(lVar4 + 0x38);
        uStack_50 = CONCAT22(uStack_50._2_2_,param_2);
        if ((uVar5 < *(uint *)(param_1 + 0x54)) ||
           ((cVar3 = FUN_14318b500(param_1 + 0x48,2), cVar3 != '\0' &&
            (uVar5 < *(uint *)(param_1 + 0x54))))) {
          uVar5 = *(uint *)(param_1 + 0x50);
          *(uint *)(param_1 + 0x50) = uVar5 + 1;
          puVar6 = (undefined4 *)((ulonglong)uVar5 * 0x10 + *(longlong *)(param_1 + 0x48));
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 2;
            puVar6[1] = uVar1;
            puVar6[2] = uStack_50;
            puVar6[3] = fVar11;
          }
        }
        *param_4 = fVar11 + *param_4;
        lVar4 = *(longlong *)(lVar4 + 0x10);
      } while (lVar4 != 0);
    }
  }
  return uVar10;
}



// FUNCTION 14318b500 FUN_14318b500 body=443 status=ok
// SIG undefined FUN_14318b500(void)

undefined8 FUN_14318b500(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar8 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar8 << 4);
  if (pvVar5 == (void *)0x0) {
    return 0;
  }
  pvVar6 = (void *)*param_1;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar5)) {
    uVar11 = 0;
    if (3 < uVar9) {
      lVar10 = (uVar9 - 4 >> 2) + 1;
      uVar11 = lVar10 * 4;
      puVar7 = (undefined8 *)((longlong)pvVar5 + 8);
      do {
        puVar2 = puVar7 + -1;
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined4 *)puVar2 = 0;
          *(undefined4 *)((longlong)puVar7 + -4) = 0;
          *(undefined2 *)puVar7 = 0;
          *(undefined4 *)((longlong)puVar7 + 4) = 0;
        }
        puVar1 = (undefined8 *)((longlong)puVar7 + *param_1 + -(longlong)pvVar5 + -8);
        uVar4 = puVar1[1];
        *puVar2 = *puVar1;
        *puVar7 = uVar4;
        puVar2 = puVar7 + 1;
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined4 *)puVar2 = 0;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          *(undefined2 *)(puVar7 + 2) = 0;
          *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
        }
        puVar3 = (undefined8 *)((longlong)puVar7 + *param_1 + -(longlong)pvVar5 + 8);
        uVar4 = puVar3[1];
        puVar1 = puVar7 + 3;
        *puVar2 = *puVar3;
        puVar7[2] = uVar4;
        if (puVar1 != (undefined8 *)0x0) {
          *(undefined4 *)puVar1 = 0;
          *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
          *(undefined2 *)(puVar7 + 4) = 0;
          *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
        }
        puVar2 = (undefined8 *)(*param_1 + (0x18 - (longlong)pvVar5) + (longlong)puVar7);
        uVar4 = puVar2[1];
        *puVar1 = *puVar2;
        puVar7[4] = uVar4;
        puVar2 = puVar7 + 5;
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined4 *)puVar2 = 0;
          *(undefined4 *)((longlong)puVar7 + 0x2c) = 0;
          *(undefined2 *)(puVar7 + 6) = 0;
          *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
        }
        puVar1 = (undefined8 *)((0x28 - (longlong)pvVar5) + *param_1 + (longlong)puVar7);
        uVar4 = puVar1[1];
        *puVar2 = *puVar1;
        puVar7[6] = uVar4;
        lVar10 = lVar10 + -1;
        puVar7 = puVar7 + 8;
      } while (lVar10 != 0);
      pvVar6 = (void *)*param_1;
    }
    if (uVar11 < uVar9) {
      puVar7 = (undefined8 *)(uVar11 * 0x10 + (longlong)pvVar5);
      lVar10 = uVar9 - uVar11;
      do {
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
          *(undefined2 *)(puVar7 + 1) = 0;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        }
        puVar2 = (undefined8 *)((longlong)puVar7 + (*param_1 - (longlong)pvVar5));
        uVar4 = puVar2[1];
        *puVar7 = *puVar2;
        puVar7[1] = uVar4;
        puVar7 = puVar7 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      pvVar6 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
  }
  *param_1 = (longlong)pvVar5;
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  return 1;
}



// FUNCTION 14318b6c0 FUN_14318b6c0 body=440 status=ok
// SIG undefined FUN_14318b6c0(void)

undefined8 FUN_14318b6c0(longlong *param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar8 << 3);
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  pvVar3 = (void *)*param_1;
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  if ((pvVar3 != (void *)0x0) && (pvVar3 != pvVar1)) {
    uVar5 = 0;
    if (3 < uVar6) {
      lVar7 = (uVar6 - 4 >> 2) + 1;
      uVar5 = lVar7 * 4;
      puVar2 = (undefined4 *)((longlong)pvVar1 + 4);
      do {
        puVar4 = (undefined8 *)(puVar2 + -1);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined2 *)puVar4 = 0;
          *(undefined1 *)((longlong)puVar2 + -2) = 0;
          *puVar2 = 0;
        }
        *puVar4 = *(undefined8 *)((longlong)puVar2 + *param_1 + -(longlong)pvVar1 + -4);
        puVar4 = (undefined8 *)(puVar2 + 1);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined2 *)puVar4 = 0;
          *(undefined1 *)((longlong)puVar2 + 6) = 0;
          puVar2[2] = 0;
        }
        *puVar4 = *(undefined8 *)((longlong)puVar2 + *param_1 + -(longlong)pvVar1 + 4);
        puVar4 = (undefined8 *)(puVar2 + 3);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined2 *)puVar4 = 0;
          *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
          puVar2[4] = 0;
        }
        *puVar4 = *(undefined8 *)((longlong)puVar2 + (0xc - (longlong)pvVar1) + *param_1);
        puVar4 = (undefined8 *)(puVar2 + 5);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined2 *)puVar4 = 0;
          *(undefined1 *)((longlong)puVar2 + 0x16) = 0;
          puVar2[6] = 0;
        }
        *puVar4 = *(undefined8 *)((longlong)puVar2 + *param_1 + (0x14 - (longlong)pvVar1));
        lVar7 = lVar7 + -1;
        puVar2 = puVar2 + 8;
      } while (lVar7 != 0);
      pvVar3 = (void *)*param_1;
    }
    if (uVar5 < uVar6) {
      puVar4 = (undefined8 *)((longlong)pvVar1 + uVar5 * 8);
      lVar7 = uVar6 - uVar5;
      do {
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined2 *)puVar4 = 0;
          *(undefined1 *)((longlong)puVar4 + 2) = 0;
          *(undefined4 *)((longlong)puVar4 + 4) = 0;
        }
        *puVar4 = *(undefined8 *)((longlong)puVar4 + (*param_1 - (longlong)pvVar1));
        puVar4 = puVar4 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      pvVar3 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar3);
  }
  *param_1 = (longlong)pvVar1;
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  return 1;
}



// FUNCTION 14318b880 FUN_14318b880 body=727 status=ok
// SIG undefined FUN_14318b880(void)

void FUN_14318b880(longlong param_1,ushort param_2,float *param_3,uint *param_4)

{
  undefined4 uVar1;
  ushort *puVar2;
  bool bVar3;
  ushort uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  float *pfVar11;
  ushort *puVar12;
  longlong *plVar13;
  float fVar14;
  undefined4 uStack_60;
  
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x30))()
  ;
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  puVar12 = (ushort *)*puVar6;
  puVar2 = puVar12 + (ulonglong)*(uint *)(puVar6 + 1) * 2;
  if (puVar12 == puVar2) {
    return;
  }
  while (*puVar12 != param_2) {
    puVar12 = puVar12 + 2;
    if (puVar12 == puVar2) {
      return;
    }
  }
  uVar4 = puVar12[1];
  plVar13 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
  lVar7 = (**(code **)(*plVar13 + 0x78))();
  bVar3 = false;
  if ((byte)uVar4 == 3) {
    if ((lVar7 == 0) || (lVar7 = *(longlong *)(lVar7 + 8), bVar3 = false, lVar7 == 0))
    goto LAB_14318baf4;
    do {
      puVar2 = *(ushort **)(lVar7 + 0x20);
      if (puVar2 != (ushort *)0x0) {
        uVar8 = 0;
        do {
          uVar10 = uVar8 + 1;
          if (puVar2[uVar10] == param_2) {
            pfVar11 = (float *)((longlong)puVar2 +
                               (ulonglong)uVar8 * 0x10 +
                               ((ulonglong)((uint)*puVar2 * 2 + 5) & 0xfffffffc));
            if ((pfVar11 != (float *)0x0) &&
               (cVar5 = CAkStateAware::UseState(plVar13), cVar5 != '\0')) {
              fVar14 = *pfVar11;
              goto LAB_14318b978;
            }
            break;
          }
          uVar8 = uVar10;
        } while (uVar10 < *puVar2);
      }
      fVar14 = 1.0;
LAB_14318b978:
      uVar8 = *(uint *)(param_1 + 0x50);
      uVar1 = *(undefined4 *)(lVar7 + 0x38);
      uStack_60 = CONCAT22(uStack_60._2_2_,param_2);
      if ((uVar8 < *(uint *)(param_1 + 0x54)) ||
         ((cVar5 = FUN_14318b500(param_1 + 0x48,2), cVar5 != '\0' &&
          (uVar8 < *(uint *)(param_1 + 0x54))))) {
        uVar8 = *(uint *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = uVar8 + 1;
        puVar9 = (undefined4 *)((ulonglong)uVar8 * 0x10 + *(longlong *)(param_1 + 0x48));
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 2;
          puVar9[1] = uVar1;
          puVar9[2] = uStack_60;
          puVar9[3] = fVar14;
        }
      }
      *param_3 = fVar14 * *param_3;
      lVar7 = *(longlong *)(lVar7 + 0x10);
    } while (lVar7 != 0);
  }
  else {
    if ((lVar7 == 0) || (lVar7 = *(longlong *)(lVar7 + 8), bVar3 = false, lVar7 == 0))
    goto LAB_14318baf4;
    do {
      puVar2 = *(ushort **)(lVar7 + 0x20);
      if (puVar2 != (ushort *)0x0) {
        uVar8 = 0;
        do {
          uVar10 = uVar8 + 1;
          if (puVar2[uVar10] == param_2) {
            pfVar11 = (float *)((longlong)puVar2 +
                               (ulonglong)uVar8 * 0x10 +
                               ((ulonglong)((uint)*puVar2 * 2 + 5) & 0xfffffffc));
            if ((pfVar11 != (float *)0x0) &&
               (cVar5 = CAkStateAware::UseState(plVar13), cVar5 != '\0')) {
              fVar14 = *pfVar11;
              goto LAB_14318ba78;
            }
            break;
          }
          uVar8 = uVar10;
        } while (uVar10 < *puVar2);
      }
      fVar14 = 0.0;
LAB_14318ba78:
      uVar8 = *(uint *)(param_1 + 0x50);
      uVar1 = *(undefined4 *)(lVar7 + 0x38);
      uStack_60 = CONCAT22(uStack_60._2_2_,param_2);
      if ((uVar8 < *(uint *)(param_1 + 0x54)) ||
         ((cVar5 = FUN_14318b500(param_1 + 0x48,2), cVar5 != '\0' &&
          (uVar8 < *(uint *)(param_1 + 0x54))))) {
        uVar8 = *(uint *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = uVar8 + 1;
        puVar9 = (undefined4 *)((ulonglong)uVar8 * 0x10 + *(longlong *)(param_1 + 0x48));
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 2;
          puVar9[1] = uVar1;
          puVar9[2] = uStack_60;
          puVar9[3] = fVar14;
        }
      }
      *param_3 = fVar14 + *param_3;
      lVar7 = *(longlong *)(lVar7 + 0x10);
    } while (lVar7 != 0);
  }
  bVar3 = true;
LAB_14318baf4:
  if (bVar3) {
    *param_4 = (uint)(byte)uVar4;
  }
  return;
}



// FUNCTION 14318bb60 RecalculatePropertyValue body=278 status=ok
// SIG undefined RecalculatePropertyValue(void)

void CAkFxBase::RecalculatePropertyValue(longlong param_1,short param_2)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  for (lVar2 = *(longlong *)(param_1 + 0x78); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x58)) {
    puVar4 = *(undefined8 **)(lVar2 + 0x48);
    uVar6 = *(uint *)(lVar2 + 0x50);
    puVar8 = puVar4;
    if (puVar4 != puVar4 + (ulonglong)uVar6 * 2) {
      do {
        uVar7 = (ulonglong)uVar6;
        if (*(short *)(puVar4 + 1) == param_2) {
          if (puVar4 < puVar8 + uVar7 * 2 + -2) {
            uVar7 = ((ulonglong)((longlong)(puVar8 + uVar7 * 2 + -2) + (-1 - (longlong)puVar4)) >> 3
                    & 0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
            puVar8 = puVar4 + 2;
            puVar9 = puVar4;
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            uVar6 = *(uint *)(lVar2 + 0x50);
          }
          uVar7 = (ulonglong)(uVar6 - 1);
          *(uint *)(lVar2 + 0x50) = uVar6 - 1;
        }
        else {
          puVar4 = puVar4 + 2;
        }
        uVar6 = (uint)uVar7;
        puVar8 = *(undefined8 **)(lVar2 + 0x48);
      } while (puVar4 != *(undefined8 **)(lVar2 + 0x48) + uVar7 * 2);
    }
    lVar3 = *(longlong *)(lVar2 + 0x10);
    psVar5 = *(short **)(lVar3 + 0x60);
    psVar1 = psVar5 + (ulonglong)*(uint *)(lVar3 + 0x68) * 4;
    for (; (psVar5 != psVar1 && (*psVar5 != param_2)); psVar5 = psVar5 + 4) {
    }
    if (psVar5 != (short *)(*(longlong *)(lVar3 + 0x60) + (ulonglong)*(uint *)(lVar3 + 0x68) * 8)) {
      FUN_14318d2f0(lVar2,param_2,*(undefined4 *)(psVar5 + 2));
    }
  }
  return;
}



// FUNCTION 14318bc80 RecalculatePropertyValues body=135 status=ok
// SIG undefined RecalculatePropertyValues(void)

void CAkFxBase::RecalculatePropertyValues(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  
  for (lVar1 = *(longlong *)(param_1 + 0x78); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x58)) {
    *(undefined4 *)(lVar1 + 0x50) = 0;
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if ((lVar2 != 0) &&
       (puVar3 = *(undefined2 **)(lVar2 + 0x60),
       puVar3 != puVar3 + (ulonglong)*(uint *)(lVar2 + 0x68) * 4)) {
      do {
        if (*(char *)(puVar3 + 1) != '\0') {
          FUN_14318d2f0(lVar1,*puVar3,*(undefined4 *)(puVar3 + 2));
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (undefined2 *)
                         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x60) +
                         (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x10) + 0x68) * 8));
    }
  }
  return;
}


