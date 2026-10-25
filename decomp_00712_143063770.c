// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143063770 FUN_143063770 body=1770 status=ok
// SIG undefined FUN_143063770(void)

void FUN_143063770(longlong *param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  longlong lVar10;
  float *pfVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint *puVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  uint local_res18 [4];
  float local_288;
  float local_284;
  float local_280;
  float local_278;
  float local_274;
  float local_270;
  float local_268;
  float local_264;
  float local_260;
  float local_258;
  float local_254;
  float local_250;
  float local_240;
  float local_234;
  undefined1 local_230 [12];
  undefined1 local_224 [12];
  undefined **local_218;
  longlong local_210;
  undefined8 local_208;
  float local_200;
  undefined8 local_1fc;
  float local_1f4;
  uint local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  longlong local_148;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  
  lVar10 = param_1[0x15];
  if (lVar10 == 0) {
    return;
  }
  if ((*(byte *)(lVar10 + 0x318) & 1) == 0) {
    return;
  }
  if (*(float *)(param_1 + 0x45) <= 0.0) {
    return;
  }
  if ((*(char *)(lVar10 + 0x304) == '\0') || (*(int *)(lVar10 + 0x2f8) <= (int)param_1[0x88]))
  goto LAB_143063e1c;
  iVar3 = *(int *)(lVar10 + 0x2fc);
  if (iVar3 == 0) {
    fVar18 = *(float *)((longlong)param_1 + 0x444);
    if ((fVar18 <= 0.0) ||
       (fVar19 = *(float *)((longlong)param_1 + 0x42c) - *(float *)((longlong)param_1 + 0x2ac),
       SQRT(fVar19 * fVar19 +
            (*(float *)(param_1 + 0x85) - *(float *)(param_1 + 0x55)) *
            (*(float *)(param_1 + 0x85) - *(float *)(param_1 + 0x55)) +
            (*(float *)(param_1 + 0x86) - *(float *)(param_1 + 0x56)) *
            (*(float *)(param_1 + 0x86) - *(float *)(param_1 + 0x56))) < fVar18))
    goto LAB_1430638be;
    bVar4 = true;
LAB_1430638c0:
    bVar5 = true;
  }
  else {
    if (iVar3 == 1) {
      fVar18 = *(float *)((longlong)param_1 + 0x444);
      if (0.0 < fVar18) {
        lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
        fVar18 = *(float *)((longlong)param_1 + 0x444);
        if (fVar18 < *(float *)(lVar10 + 0x790) || fVar18 == *(float *)(lVar10 + 0x790)) {
          bVar4 = true;
          goto LAB_1430638c0;
        }
      }
LAB_1430638be:
      bVar4 = false;
      goto LAB_1430638c0;
    }
    if (iVar3 != 2) goto LAB_143063e1c;
    fVar18 = *(float *)((longlong)param_1 + 0x444);
    if ((fVar18 <= 0.0) ||
       (*(float *)(param_1 + 0x8a) * *(float *)((longlong)param_1 + 0x44c) < fVar18)) {
      bVar4 = false;
      bVar5 = false;
    }
    else {
      bVar4 = true;
      bVar5 = false;
    }
  }
  if (bVar4) {
    lVar16 = 0;
    lVar10 = lVar16;
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      lVar10 = param_1[4];
    }
    if (lVar10 != 0) {
      *(int *)(param_1 + 0x88) = (int)param_1[0x88] + 1;
      lVar17 = param_1[0x15];
      if (bVar5) {
        *(float *)((longlong)param_1 + 0x444) = fVar18 + *(float *)(lVar17 + 0x300);
      }
      fVar18 = *(float *)(param_1 + 0x89);
      *(float *)(param_1 + 0x89) = fVar18 * 0.33333334;
      if (*(char *)(lVar17 + 0x2f4) != '\0') {
        fVar18 = _guard_xfg_dispatch_icall_nop(fVar18 * 0.33333334 * 0.008726646);
        fVar19 = *(float *)((longlong)param_1 + 0x42c) - *(float *)((longlong)param_1 + 0x2ac);
        fVar18 = (fVar18 + fVar18) / *(float *)((longlong)param_1 + 0x44c);
        *(float *)(param_1 + 0x8a) =
             SQRT(fVar19 * fVar19 +
                  (*(float *)(param_1 + 0x85) - *(float *)(param_1 + 0x55)) *
                  (*(float *)(param_1 + 0x85) - *(float *)(param_1 + 0x55)) +
                  (*(float *)(param_1 + 0x86) - *(float *)(param_1 + 0x56)) *
                  (*(float *)(param_1 + 0x86) - *(float *)(param_1 + 0x56))) * fVar18;
        *(float *)((longlong)param_1 + 0x454) = fVar18 * *(float *)(lVar17 + 0x144);
      }
      cVar9 = FUN_143052680(param_1);
      if (cVar9 != '\0') {
        FUN_140a25850(&local_218);
        (**(code **)(*param_1 + 0x2c8))(param_1,&local_218);
        puVar15 = local_res18;
        local_278 = *(float *)(param_1 + 0x55) - *(float *)(param_1 + 0x85);
        local_210 = param_1[0x22];
        local_274 = *(float *)((longlong)param_1 + 0x2ac) - *(float *)((longlong)param_1 + 0x42c);
        local_1f0 = local_1f0 | 1;
        local_270 = *(float *)(param_1 + 0x56) - *(float *)(param_1 + 0x86);
        local_258 = *(float *)((longlong)param_1 + 0x124) - *(float *)(param_1 + 0x85);
        lVar17 = 2;
        if (local_res18 + 2 < local_res18) {
          lVar17 = lVar16;
        }
        local_254 = *(float *)(param_1 + 0x25) - *(float *)((longlong)param_1 + 0x42c);
        local_250 = *(float *)((longlong)param_1 + 300) - *(float *)(param_1 + 0x86);
        local_res18[1] = *(uint *)(param_1 + 0x89);
        local_res18[0] = *(uint *)(param_1 + 0x89) ^ 0x80000000;
        do {
          uVar1 = *puVar15;
          FVector::RotateAngleAxis(&local_278,&local_268,uVar1,(longlong)param_1 + 0x434);
          fVar8 = local_260;
          fVar7 = local_264;
          fVar6 = local_268;
          fVar18 = *(float *)(param_1 + 0x86);
          fVar19 = *(float *)(param_1 + 0x85);
          fVar2 = *(float *)((longlong)param_1 + 0x42c);
          local_240 = fVar18 + local_260;
          local_208 = CONCAT44(fVar2 + local_264,fVar19 + local_268);
          local_200 = local_240;
          pfVar11 = (float *)FVector::RotateAngleAxis
                                       (&local_258,local_230,uVar1,(longlong)param_1 + 0x434);
          local_234 = fVar18 + pfVar11[2];
          local_1fc = CONCAT44(fVar2 + pfVar11[1],fVar19 + *pfVar11);
          fVar18 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
          local_288 = fVar6;
          local_284 = fVar7;
          local_280 = fVar8;
          if (fVar18 != 1.0) {
            if (1e-08 <= fVar18) {
              auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
              local_280 = auVar20._0_4_;
              local_280 = local_280 + local_280 * (0.5 - fVar18 * 0.5 * local_280 * local_280);
              local_280 = local_280 + local_280 * (0.5 - fVar18 * 0.5 * local_280 * local_280);
              local_288 = fVar6 * local_280;
              local_284 = fVar7 * local_280;
              local_280 = fVar8 * local_280;
            }
            else {
              local_288 = DAT_1468b5d90;
              local_280 = DAT_1468b5d98;
              local_284 = DAT_1468b5d94;
            }
          }
          local_1f4 = local_234;
          puVar12 = (undefined8 *)FVector::Rotation(&local_288,local_224);
          local_1ec = *puVar12;
          local_1e4 = *(undefined4 *)(puVar12 + 1);
          uVar13 = FUN_14303af10(lVar10,local_res18 + 2,&local_218);
          lVar14 = FWeakObjectPtr::Get(uVar13);
          if (lVar14 != 0) {
            *(float *)(lVar14 + 0x228) = param_2 + *(float *)(param_1 + 0x45);
            *(int *)(lVar14 + 0x248) = (int)param_1[0x49];
          }
          puVar15 = puVar15 + 1;
          lVar16 = lVar16 + 1;
        } while (lVar16 != lVar17);
        local_218 = &PTR_FUN_1441f17f0;
        FWeakObjectPtr::operator=(local_f0,0);
        local_e8 = 0;
        if (local_148 != 0) {
          FMemory::Free();
        }
      }
    }
  }
LAB_143063e1c:
  if (*(char *)(param_1[0x15] + 0x2f4) != '\0') {
    *(float *)(param_1 + 0x8a) =
         param_2 * *(float *)((longlong)param_1 + 0x454) + *(float *)(param_1 + 0x8a);
  }
  return;
}



// FUNCTION 143063e60 FUN_143063e60 body=1652 status=ok
// SIG undefined FUN_143063e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143063e60(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  float *pfVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_a8 [32];
  float local_88;
  float fStack_84;
  float local_80;
  float local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  float fStack_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  plVar13 = (longlong *)0x0;
  if ((*(byte *)(param_1 + 0x1de) & 1) != 0) {
    plVar1 = (longlong *)(param_1 + 0xf0);
    plVar12 = (longlong *)*plVar1;
    if (plVar12 == (longlong *)0x0) {
LAB_143063eea:
      plVar12 = plVar13;
    }
    else {
      lVar5 = FUN_1430b3b80();
      if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_143063eea;
    }
    *(uint *)(param_1 + 0x1e8) = *(uint *)(param_1 + 0x1e8) & 0xfffffff7;
    if (plVar12 == (longlong *)0x0) {
      plVar7 = (longlong *)*plVar1;
      if (plVar7 != (longlong *)0x0) {
        lVar5 = FUN_1429d7ab0();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_143063f96;
      }
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar12 + 0x950))(plVar12);
LAB_143063f96:
      if (plVar7 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar7 + 0x818))(plVar7);
        if (cVar4 != '\0') {
          cVar4 = (**(code **)(*plVar7 + 0x778))(plVar7);
          if (cVar4 == '\0') {
            plVar8 = plVar13;
            if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
              plVar8 = *(longlong **)(param_1 + 0x20);
            }
            if ((char)plVar8[0x25] != '\x03') goto LAB_143063f3c;
          }
          if (plVar12 == (longlong *)0x0) {
            uVar10 = FUN_1430a8880();
            plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar7,uVar10);
            if (plVar8 == (longlong *)0x0) goto LAB_143063f3c;
            plVar8 = (longlong *)(**(code **)(*plVar8 + 0xb8))(plVar8,1);
          }
          else {
            plVar8 = (longlong *)(**(code **)(*plVar12 + 0x900))(plVar12,1,0);
          }
          if (plVar8 != (longlong *)0x0) {
            cVar4 = (**(code **)(*plVar8 + 0x440))(plVar8,*(undefined8 *)(param_1 + 0x100));
            if (cVar4 != '\0') {
              puVar6 = (undefined8 *)(param_1 + 0x274);
              puVar2 = (undefined8 *)(param_1 + 0x28c);
              *(uint *)(param_1 + 0x1e8) =
                   *(uint *)(param_1 + 0x1e8) ^
                   ((uint)(*(byte *)((longlong)plVar8 + 0x24c) >> 3) ^ *(uint *)(param_1 + 0x1e8)) &
                   8;
              if (plVar12 == (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x420))(plVar8,&local_68,*(undefined8 *)(param_1 + 0x100),0);
                local_80 = fStack_50;
                *(undefined4 *)puVar6 = local_58;
                *(undefined4 *)(param_1 + 0x278) = uStack_54;
                local_78 = local_68;
                uStack_74 = uStack_64;
                uStack_70 = uStack_60;
                uStack_6c = uStack_5c;
                *(float *)(param_1 + 0x27c) = fStack_50;
                FQuat::Rotator(&local_78,&local_88);
                *puVar2 = CONCAT44(fStack_84,local_88);
                *(float *)(param_1 + 0x294) = local_80;
              }
              else {
                (**(code **)(*plVar12 + 0x928))(plVar12,puVar6,puVar2);
              }
              puVar9 = (undefined8 *)FRotator::Vector(puVar2,&local_88);
              *(undefined8 *)(param_1 + 0x280) = *puVar9;
              *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(puVar9 + 1);
              *(undefined8 *)(param_1 + 0x298) = *puVar6;
              *(undefined8 *)(param_1 + 0x2b0) = *puVar2;
              *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x27c);
              *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_1 + 0x294);
              *(undefined8 *)(param_1 + 0x2a4) = *(undefined8 *)(param_1 + 0x280);
              *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_1 + 0x288);
              cVar4 = (**(code **)(*plVar7 + 0x778))(plVar7);
              if (cVar4 == '\0') {
                puVar6 = (undefined8 *)FUN_14304c5d0(plVar1,&local_88);
                *(undefined8 *)(param_1 + 0x298) = *puVar6;
                *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(puVar6 + 1);
                puVar6 = (undefined8 *)FUN_14304d910(plVar1,&local_88);
                *(undefined8 *)(param_1 + 0x2b0) = *puVar6;
                *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(puVar6 + 1);
                puVar6 = (undefined8 *)FRotator::Vector(puVar2,&local_88);
                *(undefined8 *)(param_1 + 0x2a4) = *puVar6;
                *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(puVar6 + 1);
              }
              if (*(longlong *)(param_1 + 0xc0) != 0) {
                puVar6 = (undefined8 *)FUN_14304c5d0(plVar1,&local_88);
                *(undefined8 *)(param_1 + 0x300) = *puVar6;
                *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(puVar6 + 1);
                puVar6 = (undefined8 *)FUN_14304d910(plVar1,&local_88);
                *(undefined8 *)(param_1 + 0x318) = *puVar6;
                *(undefined4 *)(param_1 + 800) = *(undefined4 *)(puVar6 + 1);
                puVar6 = (undefined8 *)FRotator::Vector(puVar2,&local_88);
                *(undefined8 *)(param_1 + 0x30c) = *puVar6;
                *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(puVar6 + 1);
              }
              goto LAB_1430643cf;
            }
          }
        }
      }
    }
  }
LAB_143063f3c:
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar13 = *(longlong **)(param_1 + 0x20);
    }
    if ((char)plVar13[0x25] != '\x03') {
      if (((*(float *)(param_1 + 0x1c4) == 0.0) && (*(float *)(param_1 + 0x1c8) == 0.0)) &&
         (*(float *)(param_1 + 0x1cc) == 0.0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        *(undefined8 *)(param_1 + 0x274) = *(undefined8 *)(param_1 + 0x1c4);
        *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_1 + 0x1cc);
        local_88 = *(float *)(param_1 + 0x1d0) - *(float *)(param_1 + 0x1c4);
        fStack_84 = *(float *)(param_1 + 0x1d4) - *(float *)(param_1 + 0x1c8);
        local_80 = *(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x1cc);
        puVar6 = (undefined8 *)FVector::Rotation(&local_88,&local_78);
        pfVar11 = &local_78;
        goto LAB_1430642f4;
      }
    }
  }
  else {
    puVar6 = (undefined8 *)FUN_14304c5d0(param_1 + 0xf0,&local_88);
    *(undefined8 *)(param_1 + 0x274) = *puVar6;
    *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(puVar6 + 1);
    puVar6 = (undefined8 *)FUN_14304d910(param_1 + 0xf0,&local_88);
    pfVar11 = &local_88;
LAB_1430642f4:
    *(undefined8 *)(param_1 + 0x28c) = *puVar6;
    *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(puVar6 + 1);
    puVar6 = (undefined8 *)FRotator::Vector((undefined8 *)(param_1 + 0x28c),pfVar11);
    *(undefined8 *)(param_1 + 0x280) = *puVar6;
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(puVar6 + 1);
  }
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x274);
  *(undefined8 *)(param_1 + 0x2a4) = *(undefined8 *)(param_1 + 0x280);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x27c);
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x28c);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_1 + 0x294);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x274);
    *(undefined8 *)(param_1 + 0x30c) = *(undefined8 *)(param_1 + 0x280);
    *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x27c);
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x288);
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x28c);
    *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x294);
  }
LAB_1430643cf:
  *(undefined8 *)(param_1 + 0x25c) = *(undefined8 *)(param_1 + 0x274);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x27c);
  puVar6 = (undefined8 *)FRotator::Vector(param_1 + 0x28c,&local_78);
  *(undefined8 *)(param_1 + 0x268) = *puVar6;
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(puVar6 + 1);
  if (((*(byte *)(param_1 + 0x1de) >> 2 & 1) != 0) &&
     (plVar13 = *(longlong **)(param_1 + 0x140), plVar13 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar13 + 0x780))(plVar13);
    if (cVar4 == '\0') {
      uVar10 = (**(code **)(*plVar13 + 0x828))(plVar13,&local_78,(undefined8 *)(param_1 + 0x274),0);
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar13 + 0x790))();
      *(undefined8 *)(param_1 + 0x25c) = *puVar6;
      *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(puVar6 + 1);
      uVar10 = (**(code **)(*plVar13 + 0x798))(plVar13,&local_78);
    }
    puVar6 = (undefined8 *)FRotator::Vector(uVar10,&local_88);
    *(undefined8 *)(param_1 + 0x268) = *puVar6;
    *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(puVar6 + 1);
  }
  return;
}



// FUNCTION 1430644e0 FUN_1430644e0 body=3539 status=ok
// SIG undefined FUN_1430644e0(void)

void FUN_1430644e0(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 uVar10;
  longlong lVar11;
  float *pfVar12;
  byte bVar13;
  longlong lVar14;
  undefined1 uVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float local_res8 [2];
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  undefined1 local_148 [8];
  float local_140;
  undefined4 local_138;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [208];
  
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar5 = param_1[4];
  }
  else {
    lVar5 = 0;
  }
  fVar23 = 0.0;
  if (((*(char *)(lVar5 + 0x128) == '\x03') &&
      (0.0 < *(float *)(param_1 + 0x44) || *(float *)(param_1 + 0x44) == 0.0)) &&
     (lVar5 = (**(code **)(*param_1 + 0x148))(),
     *(float *)(param_1 + 0x44) <= *(float *)(lVar5 + 0x790))) {
    uVar10 = *(undefined8 *)(param_1[0x16] + 0x1c0);
    *(longlong **)(param_1[0x16] + 0x1c0) = param_1;
    fVar16 = (float)FUN_1430ac1f0(param_1[0x16],param_1);
    *(undefined8 *)(param_1[0x16] + 0x1c0) = uVar10;
    if (0.0 <= fVar16) {
      lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      *(float *)(param_1 + 0x44) = *(float *)(lVar5 + 0x790) + fVar16;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0xc2c80000;
    }
  }
  local_110 = (undefined4)param_1[0x5a];
  local_118 = param_1[0x59];
  local_100 = *(undefined4 *)((longlong)param_1 + 0x2dc);
  bVar13 = (byte)*(undefined2 *)((longlong)param_1 + 0x1de);
  local_108 = *(undefined8 *)((longlong)param_1 + 0x2d4);
  if ((bVar13 >> 1 & 1) == 0) {
    if ((bVar13 >> 2 & 1) == 0) {
LAB_143064a31:
      fVar16 = *(float *)(param_1 + 0x1b);
      local_150 = fVar16 * *(float *)(param_1 + 0x4e) + *(float *)((longlong)param_1 + 0x264);
      lVar5 = CONCAT44(fVar16 * *(float *)((longlong)param_1 + 0x26c) + *(float *)(param_1 + 0x4c),
                       fVar16 * *(float *)(param_1 + 0x4d) + *(float *)((longlong)param_1 + 0x25c));
LAB_143064a7b:
      param_1[0x59] = lVar5;
      *(float *)(param_1 + 0x5a) = local_150;
    }
    else {
      fVar16 = *(float *)(param_1 + 0x1b);
      fVar17 = *(float *)(param_1[0x16] + 0x9c);
      if (ABS(fVar16 - fVar17) <= 1e-08) goto LAB_143064a31;
      local_150 = fVar17 * *(float *)(param_1 + 0x4e) + *(float *)((longlong)param_1 + 0x264);
      param_1[0x59] =
           CONCAT44(fVar17 * *(float *)((longlong)param_1 + 0x26c) + *(float *)(param_1 + 0x4c),
                    fVar17 * *(float *)(param_1 + 0x4d) + *(float *)((longlong)param_1 + 0x25c));
      *(float *)(param_1 + 0x5a) = local_150;
      fVar21 = *(float *)((longlong)param_1 + 0x2cc) - *(float *)(param_1 + 0x4f);
      fVar19 = *(float *)(param_1 + 0x59) - *(float *)((longlong)param_1 + 0x274);
      fVar20 = *(float *)(param_1 + 0x5a) - *(float *)((longlong)param_1 + 0x27c);
      fVar17 = SQRT(fVar19 * fVar19 + fVar21 * fVar21 + fVar20 * fVar20);
      if (fVar16 < fVar17) {
        fVar17 = 1.0 / fVar17;
        local_150 = fVar17 * fVar20 * fVar16 + *(float *)((longlong)param_1 + 0x27c);
        lVar5 = CONCAT44(*(float *)(param_1 + 0x4f) + fVar17 * fVar21 * fVar16,
                         fVar19 * fVar17 * fVar16 + *(float *)((longlong)param_1 + 0x274));
        goto LAB_143064a7b;
      }
    }
    uVar18 = param_1[0x4d];
    fVar16 = *(float *)(param_1 + 0x4e);
  }
  else if (param_1[0x23] == 0) {
    param_1[0x59] = param_1[0x3a];
    *(int *)(param_1 + 0x5a) = (int)param_1[0x3b];
    fVar20 = *(float *)((longlong)param_1 + 0x1d4) - *(float *)(param_1 + 0x39);
    fVar19 = *(float *)(param_1 + 0x3a) - *(float *)((longlong)param_1 + 0x1c4);
    fVar16 = *(float *)(param_1 + 0x3b) - *(float *)((longlong)param_1 + 0x1cc);
    fVar17 = fVar19 * fVar19 + fVar20 * fVar20 + fVar16 * fVar16;
    if (fVar17 == 1.0) {
      local_168 = CONCAT44(fVar20,fVar19);
      uVar18 = local_168;
      local_160 = fVar16;
    }
    else {
LAB_143064785:
      if (1e-08 <= fVar17) {
        auVar22 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
        local_res8[0] = auVar22._0_4_;
        local_res8[0] =
             local_res8[0] + local_res8[0] * (0.5 - fVar17 * 0.5 * local_res8[0] * local_res8[0]);
        local_res8[0] =
             local_res8[0] + local_res8[0] * (0.5 - fVar17 * 0.5 * local_res8[0] * local_res8[0]);
        fVar16 = local_res8[0] * fVar16;
        local_168 = CONCAT44(local_res8[0] * fVar20,fVar19 * local_res8[0]);
        uVar18 = local_168;
        local_160 = fVar16;
      }
      else {
        local_160 = DAT_1468b5d98;
        local_168 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        uVar18 = local_168;
        fVar16 = DAT_1468b5d98;
      }
    }
  }
  else {
    plVar6 = (longlong *)FUN_14304c5d0(param_1 + 0x23,local_148);
    param_1[0x59] = *plVar6;
    *(int *)(param_1 + 0x5a) = (int)plVar6[1];
    plVar6 = (longlong *)FUN_14304aab0(param_1 + 0x23,local_res8);
    param_1[0x5c] = *plVar6;
    if ((*(byte *)(param_1[0x16] + 0xaa) & 2) == 0) {
      fVar20 = *(float *)((longlong)param_1 + 0x2cc) - *(float *)(param_1 + 0x4f);
      fVar19 = *(float *)(param_1 + 0x59) - *(float *)((longlong)param_1 + 0x274);
      fVar16 = *(float *)(param_1 + 0x5a) - *(float *)((longlong)param_1 + 0x27c);
      fVar17 = fVar19 * fVar19 + fVar20 * fVar20 + fVar16 * fVar16;
      if (fVar17 != 1.0) goto LAB_143064785;
      local_168 = CONCAT44(fVar20,fVar19);
      uVar18 = local_168;
      local_160 = fVar16;
    }
    else {
      FUN_14304d910(param_1 + 0x23,&local_158);
      local_158 = local_158 & 0xffffffff00000000;
      puVar7 = (ulonglong *)FRotator::Vector(&local_158,local_148);
      local_150 = -*(float *)(puVar7 + 1);
      uVar18 = *puVar7 ^ 0x8000000080000000;
      fVar16 = local_150;
    }
  }
  *(ulonglong *)((longlong)param_1 + 0x2d4) = uVar18;
  *(float *)((longlong)param_1 + 0x2dc) = fVar16;
  if (0.0 < param_2) {
    fVar16 = *(float *)(param_1[0x16] + 0x15c);
    if ((0.0 < fVar16) &&
       (((*(byte *)((longlong)param_1 + 0x1de) >> 1 & 1) == 0 ||
        ((*(byte *)(param_1[0x16] + 0x158) & 2) == 0)))) {
      local_168 = param_1[0x59];
      local_160 = *(float *)(param_1 + 0x5a);
      local_158 = *(ulonglong *)((longlong)param_1 + 0x2d4);
      local_150 = *(float *)((longlong)param_1 + 0x2dc);
      plVar6 = (longlong *)FMath::VInterpTo(local_148,&local_118,&local_168,param_2,fVar16);
      param_1[0x59] = *plVar6;
      *(int *)(param_1 + 0x5a) = (int)plVar6[1];
      puVar8 = (undefined8 *)
               FMath::VInterpTo(local_148,&local_108,&local_158,param_2,
                                *(undefined4 *)(param_1[0x16] + 0x15c));
      *(undefined8 *)((longlong)param_1 + 0x2d4) = *puVar8;
      *(undefined4 *)((longlong)param_1 + 0x2dc) = *(undefined4 *)(puVar8 + 1);
      fVar16 = *(float *)(param_1[0x16] + 0x160);
      if (0.0 < fVar16) {
        fVar21 = *(float *)((longlong)param_1 + 0x2cc) - local_168._4_4_;
        fVar19 = *(float *)(param_1 + 0x59) - (float)local_168;
        fVar20 = *(float *)(param_1 + 0x5a) - local_160;
        fVar17 = SQRT(fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20);
        if (fVar16 < fVar17) {
          fVar17 = 1.0 / fVar17;
          param_1[0x59] =
               CONCAT44(local_168._4_4_ + fVar17 * fVar21 * fVar16,
                        (float)local_168 + fVar19 * fVar17 * fVar16);
          *(float *)(param_1 + 0x5a) = local_160 + fVar17 * fVar20 * fVar16;
          fVar17 = fVar17 * *(float *)(param_1[0x16] + 0x160);
          local_140 = local_150 + (*(float *)((longlong)param_1 + 0x2dc) - local_150) * fVar17;
          *(ulonglong *)((longlong)param_1 + 0x2d4) =
               CONCAT44(local_158._4_4_ + (*(float *)(param_1 + 0x5b) - local_158._4_4_) * fVar17,
                        (float)local_158 +
                        (*(float *)((longlong)param_1 + 0x2d4) - (float)local_158) * fVar17);
          *(float *)((longlong)param_1 + 0x2dc) = local_140;
        }
      }
      fVar16 = *(float *)(param_1 + 0x5b);
      fVar17 = *(float *)((longlong)param_1 + 0x2d4);
      fVar19 = *(float *)((longlong)param_1 + 0x2dc);
      fVar20 = fVar17 * fVar17 + fVar16 * fVar16 + fVar19 * fVar19;
      if (fVar20 == 1.0) {
        uVar18 = *(ulonglong *)((longlong)param_1 + 0x2d4);
        fVar19 = *(float *)((longlong)param_1 + 0x2dc);
      }
      else if (1e-08 <= fVar20) {
        auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
        local_res8[0] = auVar22._0_4_;
        local_res8[0] =
             local_res8[0] + local_res8[0] * (0.5 - fVar20 * 0.5 * local_res8[0] * local_res8[0]);
        local_res8[0] =
             local_res8[0] + local_res8[0] * (0.5 - fVar20 * 0.5 * local_res8[0] * local_res8[0]);
        fVar19 = local_res8[0] * fVar19;
        uVar18 = CONCAT44(local_res8[0] * fVar16,local_res8[0] * fVar17);
        local_168 = uVar18;
        local_160 = fVar19;
      }
      else {
        local_160 = DAT_1468b5d98;
        uVar18 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        fVar19 = DAT_1468b5d98;
        local_168 = uVar18;
      }
      *(ulonglong *)((longlong)param_1 + 0x2d4) = uVar18;
      *(float *)((longlong)param_1 + 0x2dc) = fVar19;
    }
  }
  *(longlong *)((longlong)param_1 + 700) = param_1[0x59];
  *(int *)((longlong)param_1 + 0x2c4) = (int)param_1[0x5a];
  if (*(float *)(param_1 + 0x2b) <= 0.0) {
    return;
  }
  if (*(int *)(param_1[0x16] + 0x170) < 1) {
    return;
  }
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar11 = param_1[0x16];
  fVar20 = 0.0;
  fVar16 = *(float *)(lVar5 + 0x790);
  lVar14 = *(longlong *)(lVar11 + 0x168);
  fVar17 = *(float *)((longlong)param_1 + 0x1fc);
  lVar5 = lVar14 + (longlong)*(int *)(lVar11 + 0x170) * 0x18;
  fVar19 = *(float *)(lVar11 + 0x17c);
  if (lVar14 != lVar5) {
    do {
      pfVar9 = (float *)FUN_142dac000(lVar14,local_res8,(fVar16 - fVar17) * fVar19);
      lVar14 = lVar14 + 0x18;
      fVar23 = fVar23 + *pfVar9;
      fVar20 = fVar20 + pfVar9[1];
    } while (lVar14 != lVar5);
    lVar11 = param_1[0x16];
  }
  fVar16 = *(float *)(param_1 + 0x2b);
  if (((*(byte *)(lVar11 + 0x184) & 1) == 0) || (lVar5 = param_1[0x28], lVar5 == 0))
  goto LAB_143064fce;
  uVar10 = FUN_1430a8880();
  plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar10);
  if (plVar6 == (longlong *)0x0) goto LAB_143064fce;
  lVar5 = param_1[0x1e];
  uVar15 = 0;
  if (lVar5 == 0) {
LAB_143064f94:
    lVar5 = 0;
  }
  else {
    lVar11 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_143064f94;
    uVar15 = *(undefined1 *)(lVar5 + 0x62c);
  }
  fVar17 = (float)(**(code **)(*plVar6 + 0x138))(plVar6,uVar15);
  fVar17 = fVar17 * 0.5;
  if (lVar5 != 0) {
    fVar19 = (float)FUN_143079090(lVar5);
    fVar17 = fVar17 * fVar19;
  }
  fVar16 = fVar16 + fVar17;
LAB_143064fce:
  lVar5 = param_1[0x16];
  if ((*(byte *)((longlong)param_1 + 0x1de) >> 1 & 1) != 0) {
    fVar16 = fVar16 * *(float *)(lVar5 + 0x180);
  }
  fVar19 = *(float *)((longlong)param_1 + 700) - *(float *)((longlong)param_1 + 0x274);
  fVar21 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x4f);
  local_150 = *(float *)((longlong)param_1 + 0x2c4) - *(float *)((longlong)param_1 + 0x27c);
  fVar17 = 1.0 / (float)*(int *)(lVar5 + 0x170);
  fVar24 = fVar23 * fVar17 * fVar16;
  fVar16 = fVar20 * fVar17 * fVar16;
  fVar23 = SQRT(fVar21 * fVar21 + fVar19 * fVar19 + local_150 * local_150);
  fVar17 = 1.0 / fVar23;
  local_150 = fVar17 * local_150;
  local_158 = CONCAT44(fVar17 * fVar21,fVar17 * fVar19);
  if ((*(byte *)(lVar5 + 0x178) & 1) == 0) {
    local_138 = 0;
    uStack_12c = 0;
    local_128 = 0;
    local_120 = 0;
    uVar10 = FVector::Rotation(&local_158,local_f8);
    pfVar9 = (float *)FRotationMatrix::FRotationMatrix(local_e8,uVar10);
    fVar23 = pfVar9[0xd];
    fVar17 = pfVar9[0xe];
    fVar19 = pfVar9[5];
    fVar20 = pfVar9[6];
    fVar21 = pfVar9[9];
    fVar1 = pfVar9[10];
    fVar2 = pfVar9[1];
    fVar3 = pfVar9[2];
    *(float *)((longlong)param_1 + 700) =
         pfVar9[0xc] * 0.0 + fVar16 * pfVar9[8] + fVar24 * pfVar9[4] + *pfVar9 * 0.0 +
         *(float *)((longlong)param_1 + 700);
    *(float *)(param_1 + 0x58) =
         fVar23 * 0.0 + fVar16 * fVar21 + fVar24 * fVar19 + fVar2 * 0.0 + *(float *)(param_1 + 0x58)
    ;
    *(float *)((longlong)param_1 + 0x2c4) =
         fVar17 * 0.0 + fVar16 * fVar1 + fVar24 * fVar20 + fVar3 * 0.0 +
         *(float *)((longlong)param_1 + 0x2c4);
  }
  else {
    local_168 = CONCAT44(fVar24,fVar16);
    local_160 = 0.0;
    pfVar9 = (float *)FRotator::Vector(&local_168,local_148);
    uVar10 = FVector::Rotation(&local_158,local_f8);
    pfVar12 = (float *)FRotationMatrix::FRotationMatrix(local_e8,uVar10);
    fVar16 = *pfVar9;
    fVar17 = pfVar9[1];
    fVar19 = pfVar9[2];
    fVar20 = pfVar12[0xe];
    fVar21 = pfVar12[6];
    fVar24 = pfVar12[10];
    fVar1 = pfVar12[2];
    *(ulonglong *)((longlong)param_1 + 700) =
         CONCAT44((pfVar12[0xd] * 0.0 + fVar19 * pfVar12[9] +
                  fVar17 * pfVar12[5] + fVar16 * pfVar12[1]) * fVar23 + *(float *)(param_1 + 0x4f),
                  (pfVar12[0xc] * 0.0 + fVar19 * pfVar12[8] +
                  fVar17 * pfVar12[4] + fVar16 * *pfVar12) * fVar23 +
                  *(float *)((longlong)param_1 + 0x274));
    *(float *)((longlong)param_1 + 0x2c4) =
         (fVar20 * 0.0 + fVar19 * fVar24 + fVar17 * fVar21 + fVar16 * fVar1) * fVar23 +
         *(float *)((longlong)param_1 + 0x27c);
  }
  return;
}



// FUNCTION 1430652c0 FUN_1430652c0 body=1156 status=ok
// SIG undefined FUN_1430652c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430652c0(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                  float *param_5,float *param_6,float param_7,float param_8)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined1 *local_200;
  undefined *local_1f8;
  undefined1 local_1e8 [8];
  float local_1e0;
  float fStack_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined1 local_1a8 [12];
  undefined4 local_19c;
  float local_194;
  float local_190;
  float local_18c;
  undefined1 local_118 [72];
  longlong local_d0;
  longlong local_b0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  if (((ABS(*param_3 - *param_5) <= 1.0) && (ABS(param_3[1] - param_5[1]) <= 1.0)) &&
     (ABS(param_3[2] - param_5[2]) <= 1.0)) {
    return;
  }
  fVar6 = 10000.0;
  if ((((*(byte *)(param_1 + 0x328) & 0x20) != 0) && (0.0 < param_7)) && (0.0 < param_7 * param_8))
  {
    fVar6 = param_7 * param_8;
  }
  FRotator::Vector(param_4,&local_1c0);
  local_1d0 = local_1c0 * fVar6 + *param_3;
  local_1cc = local_1bc * fVar6 + param_3[1];
  local_1c8 = local_1b8 * fVar6 + param_3[2];
  puVar2 = (undefined8 *)FName::FName(&local_1e0,L"TrajectometerTrace",1);
  local_208 = param_2;
  FUN_1422ffb20(local_118,*puVar2,local_1e8,1);
  _guard_xfg_dispatch_icall_nop(local_1a8,0,0x90);
  lVar3 = *(longlong *)(param_1 + 0x120);
  local_19c = 0x3f800000;
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  local_1f8 = &DAT_146aefe68;
  local_200 = local_118;
  local_208 = CONCAT44(local_208._4_4_,0xf);
  cVar1 = UWorld::LineTraceSingleByChannel(lVar3,local_1a8,param_3,&local_1d0);
  if (cVar1 == '\0') {
    if ((*(byte *)(param_1 + 0x328) & 0x20) == 0) goto LAB_1430656de;
    local_1e0 = local_1d0 - *param_5;
    fStack_1dc = local_1cc - param_5[1];
    local_1d8 = local_1c8 - param_5[2];
    fVar6 = fStack_1dc * fStack_1dc + local_1e0 * local_1e0 + local_1d8 * local_1d8;
    if (fVar6 != 1.0) {
      if (fVar6 < 1e-08) {
        local_1e0 = DAT_1468b5d90;
        local_1d8 = DAT_1468b5d98;
        fStack_1dc = DAT_1468b5d94;
      }
      else {
        auVar5 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar4 = auVar5._0_4_;
        fVar4 = fVar4 + fVar4 * (0.5 - fVar6 * 0.5 * fVar4 * fVar4);
        fVar4 = fVar4 + fVar4 * (0.5 - fVar6 * 0.5 * fVar4 * fVar4);
        local_1e0 = local_1e0 * fVar4;
        fStack_1dc = fStack_1dc * fVar4;
        local_1d8 = local_1d8 * fVar4;
      }
    }
  }
  else {
    local_194 = local_194 - *param_5;
    local_190 = local_190 - param_5[1];
    local_18c = local_18c - param_5[2];
    fVar6 = local_190 * local_190 + local_194 * local_194 + local_18c * local_18c;
    fStack_1dc = local_190;
    local_1e0 = local_194;
    local_1d8 = local_18c;
    if ((fVar6 != 1.0) &&
       (fStack_1dc = DAT_1468b5d94, local_1e0 = DAT_1468b5d90, local_1d8 = DAT_1468b5d98,
       1e-08 <= fVar6)) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar6 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar6 * 0.5 * fVar4 * fVar4);
      fStack_1dc = local_190 * fVar4;
      local_1e0 = local_194 * fVar4;
      local_1d8 = local_18c * fVar4;
    }
    if (fStack_1dc * param_6[1] + local_1e0 * *param_6 + local_1d8 * param_6[2] <= 0.0) {
      *(undefined8 *)param_5 = *(undefined8 *)param_3;
      param_5[2] = param_3[2];
      goto LAB_1430656de;
    }
    if ((*(byte *)(param_1 + 0x328) & 0x20) == 0) goto LAB_1430656de;
  }
  *(ulonglong *)param_6 = CONCAT44(fStack_1dc,local_1e0);
  param_6[2] = local_1d8;
LAB_1430656de:
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143065790 FUN_143065790 body=14 status=ok
// SIG undefined FUN_143065790(void)

undefined8 * FUN_143065790(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_145a5f430;
  return param_2;
}



// FUNCTION 143065860 FUN_143065860 body=82 status=ok
// SIG undefined FUN_143065860(void)

undefined8 FUN_143065860(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_48 [56];
  undefined8 local_10;
  
  local_10 = 0;
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    local_10 = (**(code **)*puVar1)(puVar1,local_48);
  }
  FUN_143038e80(param_2,*param_1,local_48,0);
  return param_2;
}



// FUNCTION 1430658c0 FUN_1430658c0 body=85 status=ok
// SIG undefined FUN_1430658c0(void)

undefined8 FUN_1430658c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_48 [56];
  undefined8 local_10;
  
  local_10 = 0;
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    local_10 = (**(code **)*puVar1)(puVar1,local_48);
  }
  FUN_143038e80(param_2,*param_1,local_48,0xffffffff);
  return param_2;
}



// FUNCTION 143065920 FUN_143065920 body=224 status=ok
// SIG undefined FUN_143065920(void)

/* WARNING: Removing unreachable block (ram,0x0001430659ee) */

int FUN_143065920(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined2 *local_18;
  int local_10;
  
  FString::PrintfImpl(&local_18,&DAT_1440da628);
  puVar5 = &DAT_143f3eda8;
  puVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar3 = local_18;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar5 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_28,L"%s%s %s%s",puVar5,param_2,puVar2,puVar3);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar4 = 0;
  *puVar4 = local_28;
  *(undefined4 *)(puVar4 + 1) = local_20;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_1c;
  return iVar1;
}



// FUNCTION 143065a00 FUN_143065a00 body=1279 status=ok
// SIG undefined FUN_143065a00(void)

int FUN_143065a00(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 float param_5,undefined8 param_6,undefined1 param_7)

{
  void *pvVar1;
  void *pvVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined2 *puVar12;
  int iVar13;
  void *local_res8;
  void *local_98;
  int local_90;
  int local_8c;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  FString::PrintfImpl(&local_58,&DAT_144732490,param_7);
  puVar9 = &DAT_143f3eda8;
  puVar4 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar4 = local_58;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_78,L"%s%s %s%s",puVar12,param_6,puVar3,puVar4);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144050d74,(double)param_5);
  puVar4 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_88,L"%s%s %s%s",puVar12,param_4,puVar3,puVar4);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,&DAT_1440da628,param_3);
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar9 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar9,param_2,puVar3,puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar7 = (int)local_60;
  iVar8 = local_60._4_4_;
  local_98 = local_68;
  local_68 = (void *)0x0;
  local_90 = (int)local_60;
  local_8c = local_60._4_4_;
  iVar6 = (2 - (uint)((int)local_60 != 0)) + (int)local_60;
  local_60 = 0;
  if (iVar8 < iVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
    iVar7 = local_90;
  }
  local_90 = (2 - (uint)(iVar7 != 0)) + iVar7;
  local_res8 = local_98;
  if (local_8c < local_90) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
    local_res8 = local_98;
  }
  pvVar11 = local_88;
  local_98 = local_res8;
  lVar5 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
  *(undefined2 *)((longlong)local_res8 + lVar5 * 2) = 0x20;
  *(undefined2 *)((longlong)local_res8 + lVar5 * 2 + 2) = 0;
  iVar7 = (int)local_80;
  if (local_90 < 2) {
    iVar13 = local_80._4_4_;
    local_88 = (void *)0x0;
    local_80 = 0;
  }
  else {
    iVar8 = 0;
    if ((int)local_80 != 0) {
      iVar8 = (int)local_80 + -1;
    }
    if ((local_90 != 0) || (iVar7 = 1, iVar8 == 0)) {
      iVar7 = 0;
    }
    local_res8 = (void *)0x0;
    iVar6 = local_90;
    if (local_8c < iVar7 + local_90 + iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      iVar6 = local_90;
    }
    pvVar2 = local_88;
    pvVar11 = local_98;
    iVar13 = local_8c;
    iVar7 = iVar6;
    if (iVar8 != 0) {
      local_90 = iVar6 + (uint)(iVar6 == 0) + iVar8;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar6);
      }
      iVar13 = local_8c;
      iVar7 = local_90;
      pvVar11 = local_98;
      pvVar1 = (void *)((longlong)local_98 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
    }
  }
  local_98 = pvVar11;
  local_8c = iVar13;
  if (iVar13 < (int)((2 - (uint)(iVar7 != 0)) + iVar7)) {
    local_90 = iVar7;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar7 = local_90;
  }
  local_90 = (2 - (uint)(iVar7 != 0)) + iVar7;
  if (local_8c < local_90) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar7);
  }
  pvVar11 = local_78;
  lVar5 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
  *(undefined2 *)((longlong)local_98 + lVar5 * 2) = 0x20;
  *(undefined2 *)((longlong)local_98 + lVar5 * 2 + 2) = 0;
  iVar7 = (int)local_70;
  if (local_90 < 2) {
    local_78 = (void *)0x0;
    local_70 = 0;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else {
    iVar8 = 0;
    if ((int)local_70 != 0) {
      iVar8 = (int)local_70 + -1;
    }
    if ((local_90 != 0) || (iVar7 = 1, iVar8 == 0)) {
      iVar7 = 0;
    }
    if (local_8c < local_90 + iVar8 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
    }
    pvVar2 = local_78;
    iVar6 = local_90;
    pvVar11 = local_98;
    iVar7 = local_90;
    if (iVar8 != 0) {
      lVar5 = (longlong)local_90;
      local_90 = local_90 + (uint)(local_90 == 0) + iVar8;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar6);
      }
      iVar7 = local_90;
      pvVar11 = local_98;
      pvVar1 = (void *)((longlong)local_98 + (lVar5 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
    }
  }
  if (local_res8 != (void *)0x0) {
    FMemory::Free(local_res8);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  iVar8 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar8);
  }
  puVar10 = (undefined8 *)((longlong)iVar8 * 0x10 + *param_1);
  *puVar10 = 0;
  *(int *)(puVar10 + 1) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar10,iVar7,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar11,(longlong)iVar7 * 2);
  }
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  return iVar8;
}



// FUNCTION 143065f00 FUN_143065f00 body=1261 status=ok
// SIG undefined FUN_143065f00(void)

int FUN_143065f00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 float param_5,undefined8 param_6,char param_7)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  wchar_t *pwVar11;
  undefined2 *puVar12;
  uint uVar13;
  int iVar14;
  undefined2 *local_res8;
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  
  pwVar11 = L"false";
  if (param_7 != '\0') {
    pwVar11 = L"true";
  }
  puVar10 = &DAT_143f3eda8;
  local_88 = (undefined2 *)0x0;
  local_80 = 0;
  puVar4 = (undefined2 *)0x0;
  if (*pwVar11 != L'\0') {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar11[lVar7] != L'\0');
    uVar5 = (int)lVar7 + 1;
    local_80 = (ulonglong)uVar5;
    uVar13 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      uVar13 = (uint)local_80;
    }
    puVar1 = local_88;
    FGenericPlatformString::Memcpy(local_88,pwVar11,(longlong)(int)uVar5 * 2);
    puVar4 = puVar1;
    if (uVar13 != 0) goto LAB_143065fa4;
  }
  puVar1 = &DAT_143f3eda8;
LAB_143065fa4:
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar12,param_6,puVar3,puVar1);
  if (puVar4 != (undefined2 *)0x0) {
    FMemory::Free(puVar4);
  }
  FString::PrintfImpl(&local_58,&DAT_144050d74,(double)param_5);
  puVar4 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar4 = local_58;
  }
  if ((int)param_1[6] == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar10 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_78,L"%s%s %s%s",puVar10,param_4,puVar1,puVar4);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined8 *)FUN_1412887b0(param_1,local_48,param_2,param_3);
  local_88 = (undefined2 *)*puVar2;
  iVar9 = *(int *)(puVar2 + 1);
  *puVar2 = 0;
  local_80._0_4_ = *(uint *)(puVar2 + 1);
  local_80._4_4_ = *(int *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  iVar6 = (uint)local_80;
  if (local_80._4_4_ < (int)((2 - (uint)(iVar9 != 0)) + (uint)local_80)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    iVar6 = (uint)local_80;
  }
  local_80._0_4_ = (2 - (uint)(iVar6 != 0)) + iVar6;
  local_res8 = local_88;
  if (local_80._4_4_ < (int)(uint)local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88);
    local_res8 = local_88;
  }
  puVar10 = local_78;
  local_88 = local_res8;
  lVar7 = (longlong)iVar6 - (ulonglong)(iVar6 != 0);
  local_res8[lVar7] = 0x20;
  local_res8[lVar7 + 1] = 0;
  iVar9 = (int)local_70;
  if ((int)(uint)local_80 < 2) {
    iVar14 = local_70._4_4_;
    local_78 = (undefined2 *)0x0;
    local_70 = 0;
  }
  else {
    iVar6 = 0;
    if ((int)local_70 != 0) {
      iVar6 = (int)local_70 + -1;
    }
    if (((uint)local_80 != 0) || (iVar9 = 1, iVar6 == 0)) {
      iVar9 = 0;
    }
    local_res8 = (undefined2 *)0x0;
    iVar8 = (uint)local_80;
    if (local_80._4_4_ < (int)((uint)local_80 + iVar9 + iVar6)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      iVar8 = (uint)local_80;
    }
    puVar4 = local_78;
    puVar10 = local_88;
    iVar14 = local_80._4_4_;
    iVar9 = iVar8;
    if (iVar6 != 0) {
      local_80._0_4_ = iVar8 + (uint)(iVar8 == 0) + iVar6;
      if (local_80._4_4_ < (int)(uint)local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar8);
      }
      iVar14 = local_80._4_4_;
      iVar9 = (uint)local_80;
      puVar10 = local_88;
      puVar1 = local_88 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0));
      _guard_xfg_dispatch_icall_nop(puVar1,puVar4,(longlong)iVar6 * 2);
      puVar1[iVar6] = 0;
    }
  }
  local_88 = puVar10;
  local_80._4_4_ = iVar14;
  if (iVar14 < (int)((2 - (uint)(iVar9 != 0)) + iVar9)) {
    local_80._0_4_ = iVar9;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar9 = (uint)local_80;
  }
  local_80._0_4_ = (2 - (uint)(iVar9 != 0)) + iVar9;
  if (local_80._4_4_ < (int)(uint)local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar9);
  }
  puVar10 = local_68;
  lVar7 = (longlong)iVar9 - (ulonglong)(iVar9 != 0);
  local_88[lVar7] = 0x20;
  local_88[lVar7 + 1] = 0;
  iVar9 = (int)local_60;
  if ((int)(uint)local_80 < 2) {
    local_68 = (undefined2 *)0x0;
    local_60 = 0;
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    iVar6 = 0;
    if ((int)local_60 != 0) {
      iVar6 = (int)local_60 + -1;
    }
    if (((uint)local_80 != 0) || (iVar9 = 1, iVar6 == 0)) {
      iVar9 = 0;
    }
    if (local_80._4_4_ < (int)(iVar9 + (uint)local_80 + iVar6)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    }
    puVar4 = local_68;
    iVar8 = (uint)local_80;
    puVar10 = local_88;
    iVar9 = (uint)local_80;
    if (iVar6 != 0) {
      lVar7 = (longlong)(int)(uint)local_80;
      local_80._0_4_ = (uint)local_80 + ((uint)local_80 == 0) + iVar6;
      if (local_80._4_4_ < (int)(uint)local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar8);
      }
      iVar9 = (uint)local_80;
      puVar10 = local_88;
      puVar1 = local_88 + (lVar7 - (ulonglong)(iVar8 != 0));
      _guard_xfg_dispatch_icall_nop(puVar1,puVar4,(longlong)iVar6 * 2);
      puVar1[iVar6] = 0;
    }
  }
  if (local_res8 != (undefined2 *)0x0) {
    FMemory::Free(local_res8);
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar6 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
  }
  puVar2 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_1);
  *puVar2 = 0;
  *(int *)(puVar2 + 1) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar9,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar2,puVar10,(longlong)iVar9 * 2);
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  return iVar6;
}



// FUNCTION 1430663f0 FUN_1430663f0 body=218 status=ok
// SIG undefined FUN_1430663f0(void)

undefined8 *
FUN_1430663f0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_144213d80;
    FWeakObjectPtr::operator=(plVar7 + 1,param_3);
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    *(undefined4 *)(plVar7 + 3) = uVar5;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_144213dc8;
  }
  *param_2 = 0;
  if (plVar7 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar9 = plVar7;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 1430664d0 FUN_1430664d0 body=238 status=ok
// SIG undefined FUN_1430664d0(void)

void FUN_1430664d0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    plVar2[2] = param_3;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
  }
  if (local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1430665c0 FUN_1430665c0 body=594 status=ok
// SIG undefined FUN_1430665c0(void)

longlong FUN_1430665c0(longlong *param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  int local_res8 [2];
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  longlong *plVar8;
  
  FWeakObjectPtr::operator=(&local_78);
  local_70 = local_78;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,&local_70);
  plVar8 = (longlong *)0x0;
  plVar5 = plVar8;
  if (local_res8[0] != -1) {
    plVar5 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
  }
  plVar6 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  plVar5 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    plVar5 = (longlong *)*plVar6;
  }
  if (plVar5 != (longlong *)0x0) {
    TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
    ::ConditionalRehash(plVar5,(int)plVar5[1] - *(int *)((longlong)plVar5 + 0x34),0);
    if ((int)plVar5[9] != 0) {
      plVar6 = (longlong *)plVar5[8];
      if ((longlong *)plVar5[8] == (longlong *)0x0) {
        plVar6 = plVar5 + 7;
      }
      iVar3 = *(int *)((longlong)plVar6 + ((longlong)(int)plVar5[9] - 1U & (longlong)param_3) * 4);
      iVar4 = iVar3;
      if (iVar3 != -1) {
        do {
          iVar3 = *(int *)(*plVar5 + 0x10 + (longlong)iVar4 * 0x18);
          if (*(int *)(*plVar5 + (longlong)iVar4 * 0x18) == param_3) break;
          iVar4 = iVar3;
        } while (iVar3 != -1);
      }
      if (iVar4 != -1) {
        do {
          uVar7 = (int)plVar8 + 1;
          plVar8 = (longlong *)(ulonglong)uVar7;
          if (iVar3 == -1) break;
          iVar4 = iVar3;
          do {
            iVar3 = *(int *)(*plVar5 + 0x10 + (longlong)iVar4 * 0x18);
            if (*(int *)(*plVar5 + (longlong)iVar4 * 0x18) == param_3) break;
            iVar4 = iVar3;
          } while (iVar3 != -1);
        } while (iVar4 != -1);
        if (0 < (int)uVar7) {
          iStack_5c = -1;
          iStack_58 = -1;
          local_68 = plVar5;
          iStack_60 = param_3;
          TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(plVar5,(int)plVar5[1] - *(int *)((longlong)plVar5 + 0x34),0);
          if ((int)plVar5[9] != 0) {
            plVar8 = (longlong *)plVar5[8];
            if ((longlong *)plVar5[8] == (longlong *)0x0) {
              plVar8 = plVar5 + 7;
            }
            iStack_58 = *(int *)((longlong)plVar8 +
                                ((longlong)(int)plVar5[9] - 1U & (longlong)param_3) * 4);
            iStack_5c = iStack_58;
            if (iStack_58 != -1) {
              do {
                iStack_58 = *(int *)(*plVar5 + 0x10 + (longlong)iStack_5c * 0x18);
                if (*(int *)(*plVar5 + (longlong)iStack_5c * 0x18) == param_3) break;
                iStack_5c = iStack_58;
              } while (iStack_58 != -1);
            }
          }
          if (iStack_5c != -1) {
            lVar1 = *plVar5;
            do {
              lVar2 = *(longlong *)(lVar1 + 8 + (longlong)iStack_5c * 0x18);
              if (lVar2 == *param_4) {
                return lVar2;
              }
              iStack_5c = iStack_58;
              if (iStack_58 == -1) {
                return 0;
              }
              do {
                iStack_58 = *(int *)(lVar1 + 0x10 + (longlong)iStack_5c * 0x18);
                if (*(int *)(lVar1 + (longlong)iStack_5c * 0x18) == iStack_60) break;
                iStack_5c = iStack_58;
              } while (iStack_58 != -1);
            } while (iStack_5c != -1);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143066820 FUN_143066820 body=1020 status=ok
// SIG undefined FUN_143066820(void)

void FUN_143066820(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14306691d;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_14306691d:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1430669f5;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_1430669f5:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = FUN_1430bc880();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_143066820(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 143066c20 FUN_143066c20 body=175 status=ok
// SIG undefined FUN_143066c20(void)

undefined8 *
FUN_143066c20(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_58 [80];
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  lVar5 = FUN_141289d90(local_58,param_4);
  *param_1 = &PTR_FUN_145a68040;
  FWeakObjectPtr::operator=(param_1 + 1,param_2);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  FUN_141289d90(param_1 + 4,lVar5);
  uVar6 = FDelegateHandle::GenerateNewID();
  param_1[0xe] = uVar6;
  if (*(longlong *)(lVar5 + 8) != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_145a68088;
  if (*(longlong *)(param_4 + 8) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 143066cd0 FUN_143066cd0 body=410 status=ok
// SIG undefined FUN_143066cd0(void)

undefined8 * FUN_143066cd0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145a62108;
  param_1[0x8b] = &PTR_LAB_145a62818;
  param_1[0x8c] = &PTR_LAB_145a62830;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined2 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x574) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x584) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0xa2,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0x3f800000;
  param_1[0xb4] = 0;
  param_1[0xb6] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  FUN_142d979c0(param_1 + 199);
  *(undefined2 *)(param_1 + 0xcb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) | 1;
  *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xfe;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 1;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5ac) = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9a) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x9d) = 0x3f800000;
  return param_1;
}



// FUNCTION 143066e70 FUN_143066e70 body=1127 status=ok
// SIG undefined FUN_143066e70(void)

undefined8 * FUN_143066e70(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__145a62b30;
  param_1[0x8b] = &PTR_LAB_145a63610;
  param_1[0x8c] = &PTR_LAB_145a63680;
  param_1[0x8d] = &PTR_LAB_145a636a0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x91);
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x614) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x62c) = 0xff;
  FDifficultyFloat::FDifficultyFloat(param_1 + 200);
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x664);
  param_1[0xce] = 0;
  plVar1 = param_1 + 0xe0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xdd] = 0;
  param_1[0xdf] = 0;
  *plVar1 = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf1) = 1000;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  *(undefined2 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a2) = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfc] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = DAT_146b479d8;
  param_1[0x11a] = DAT_146b479e0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 2;
  FUN_14246fd50(param_1 + 200,0x3ea8f5c3);
  FUN_14246fd50((longlong)param_1 + 0x664,0x3ea8f5c3);
  FUN_14246fd50(param_1 + 0x91,0x3f800000);
  *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
  *(undefined4 *)(param_1 + 0x93) = 0x3f333333;
  param_1[0xff] = DAT_146b47938;
  *(undefined1 *)(param_1 + 0xf7) = 1;
  puVar3 = (undefined8 *)FName::FName(local_res8,"ThirdPersonSlot0",1);
  uVar5 = *puVar3;
  uVar4 = UARTrackedObject::GetPrivateStaticClass();
  uVar5 = FUN_141752410(param_1,uVar5,uVar4,uVar4,1,0,0);
  iVar2 = *(int *)(param_1 + 0xe1);
  *(int *)(param_1 + 0xe1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x70c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar5;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 1;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xef;
  *(undefined4 *)(param_1 + 0x29) = 0x40400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6dc) = 0;
  param_1[0xfb] = 0;
  uVar5 = UCircularThrobber::GetPrivateStaticClass();
  param_1[0xfc] = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x129) = 2;
  return param_1;
}



// FUNCTION 1430672e0 FUN_1430672e0 body=605 status=ok
// SIG undefined FUN_1430672e0(void)

undefined8 * FUN_1430672e0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  *param_1 = &PTR_FUN_1441f17f0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  uVar2 = *(undefined4 *)(param_2 + 0x84);
  uVar3 = *(undefined4 *)(param_2 + 0x88);
  uVar4 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x11) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x94);
  uVar3 = *(undefined4 *)(param_2 + 0x98);
  uVar4 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x13) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined1 *)((longlong)param_1 + 0xb1) = *(undefined1 *)(param_2 + 0xb1);
  param_1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 200);
  param_1[0x1a] = 0;
  iVar8 = *(int *)(param_2 + 0xd8);
  lVar1 = *(longlong *)(param_2 + 0xd0);
  *(int *)(param_1 + 0x1b) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x1a,iVar8,0);
    puVar6 = (undefined4 *)param_1[0x1a];
    puVar7 = (undefined4 *)(lVar1 + 4);
    do {
      *puVar6 = puVar7[-1];
      puVar6[1] = *puVar7;
      puVar6[2] = puVar7[1];
      puVar6[3] = puVar7[2];
      iVar8 = iVar8 + -1;
      puVar6 = puVar6 + 4;
      puVar7 = puVar7 + 4;
    } while (iVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  uVar5 = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)((longlong)param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)((longlong)param_1 + 0xfc) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x10c);
  *(undefined8 *)((longlong)param_1 + 0x104) = *(undefined8 *)(param_2 + 0x104);
  *(undefined8 *)((longlong)param_1 + 0x10c) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x11c);
  *(undefined8 *)((longlong)param_1 + 0x114) = *(undefined8 *)(param_2 + 0x114);
  *(undefined8 *)((longlong)param_1 + 0x11c) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)(param_2 + 300);
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  *(byte *)(param_1 + 0x27) =
       *(byte *)(param_1 + 0x27) ^ (*(byte *)(param_2 + 0x138) ^ *(byte *)(param_1 + 0x27)) & 1;
  return param_1;
}



// FUNCTION 143067540 FUN_143067540 body=671 status=ok
// SIG undefined FUN_143067540(void)

undefined8 *
FUN_143067540(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint local_res8;
  uint uStackX_c;
  
  uVar10 = 0;
  *param_1 = &PTR_FUN_145a636b8;
  param_1[1] = 0;
  iVar2 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 2) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FVRMoveActionContainer,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 1,iVar2,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar2 * 0x1c);
  }
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar4 = *(undefined4 *)(param_4 + 3);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  param_1[5] = param_4[4];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_4 + 5);
  FUN_140729f20(param_1 + 7,param_4 + 6);
  FWeakObjectPtr::operator=(param_1 + 0x19,param_2);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_3 + 0x60);
  *(uint *)((longlong)param_1 + 0xd4) = (uint)*(byte *)(param_3 + 0x25);
  FUN_1422ffb20(param_1 + 0x1b,*(undefined8 *)(param_3 + 0x68),&local_res8,
                *(undefined1 *)(param_3 + 0x58),0);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar7 = (undefined8 *)operator_new(0x20);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_GetPoolName_145a67fb0;
    puVar7[1] = FUN_143082c80;
    puVar7[2] = param_1;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[3] = uVar8;
    *puVar7 = &PTR_GetPoolName_145a67ff8;
  }
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x2d) = 2;
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_3 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)(param_3 + 0x74);
  param_1[0x30] = *(undefined8 *)(param_3 + 0x78);
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  FCollisionQueryParams::AddIgnoredActors(param_1 + 0x1b,param_3 + 0x38);
  if ((*(int *)(param_1 + 0x1b) == 0) && (*(int *)((longlong)param_1 + 0xdc) == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b47af8) &&
       (_Init_thread_header(&DAT_146b47af8), DAT_146b47af8 == -1)) {
      FName::FName(&DAT_146b47af0,L"PredictProjectilePath",1);
      _Init_thread_footer(&DAT_146b47af8);
    }
    param_1[0x1b] = DAT_146b47af0;
  }
  uVar11 = uStackX_c;
  cVar1 = *(char *)(param_1 + 0x1a);
  uVar9 = DAT_146aefe88;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      local_res8 = 1 << (*(byte *)(param_3 + 0x61) & 0x1f);
      uStackX_c = uStackX_c & 0xffffff00;
      uVar9 = CONCAT44(uVar11,local_res8) & 0xffffff00ffffffff;
    }
    else {
      uVar11 = uVar10;
      if (cVar1 != '\x02') goto LAB_143067777;
      for (; (uVar6 = uStackX_c, local_res8 = uVar10, -1 < (int)uVar11 &&
             ((int)uVar11 < *(int *)(param_3 + 0x30))); uVar11 = uVar11 + 1) {
        uVar6 = UEngineTypes::ConvertToCollisionChannel
                          (*(undefined1 *)((longlong)(int)uVar11 + *(longlong *)(param_3 + 0x28)));
        uVar10 = uVar10 | 1 << (uVar6 & 0x1f);
      }
      uStackX_c = uStackX_c & 0xffffff00;
      uVar9 = CONCAT44(uVar6,uVar10) & 0xffffff00ffffffff;
    }
  }
  param_1[0x2a] = uVar9;
LAB_143067777:
  FUN_143090c60(param_1);
  return param_1;
}



// FUNCTION 1430677e0 FUN_1430677e0 body=256 status=ok
// SIG undefined FUN_1430677e0(void)

undefined1 * FUN_1430677e0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0x14] = param_2[0x14];
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_1[0x1e] ^ (param_1[0x1e] ^ param_2[0x1e]) & 1;
  bVar2 = (param_2[0x1e] ^ param_1[0x1e]) & 2 ^ param_1[0x1e];
  param_1[0x1e] = bVar2;
  bVar2 = (bVar2 ^ param_2[0x1e]) & 4 ^ bVar2;
  param_1[0x1e] = bVar2;
  bVar2 = (bVar2 ^ param_2[0x1e]) & 8 ^ bVar2;
  param_1[0x1e] = bVar2;
  param_1[0x1e] = (bVar2 ^ param_2[0x1e]) & 0x10 ^ bVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  return param_1;
}



// FUNCTION 1430678e0 FUN_1430678e0 body=70 status=ok
// SIG undefined FUN_1430678e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1430678e0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 4) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x24) = DAT_1468b5da0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_1468b5da8;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 143067930 FUN_143067930 body=100 status=ok
// SIG undefined FUN_143067930(void)

undefined8 * FUN_143067930(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 3;
  *param_1 = &PTR__scalar_deleting_destructor__145a67008;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  return param_1;
}



// FUNCTION 1430679a0 FUN_1430679a0 body=109 status=ok
// SIG undefined FUN_1430679a0(void)

undefined8 * FUN_1430679a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__145a61e60;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x40000000;
  *(undefined4 *)(param_1 + 0xf) = 2;
  return param_1;
}



// FUNCTION 143067a10 FUN_143067a10 body=173 status=ok
// SIG undefined FUN_143067a10(void)

undefined8 * FUN_143067a10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_145a63708;
  param_1[5] = &PTR_DAT_145a63b10;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x37) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x41200000;
  *(undefined4 *)(param_1 + 0x38) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3f000000;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  *(undefined4 *)(param_1 + 0x39) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0xc2c80000;
  *(undefined1 *)(param_1 + 0x33) = 0;
  return param_1;
}



// FUNCTION 143067ac0 FUN_143067ac0 body=59 status=ok
// SIG undefined FUN_143067ac0(void)

undefined8 * FUN_143067ac0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_145a63b40;
  param_1[6] = 0;
  param_1[7] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 10);
  *(undefined1 *)(param_1 + 0x19) = 1;
  return param_1;
}



// FUNCTION 143067b00 FUN_143067b00 body=523 status=ok
// SIG undefined FUN_143067b00(void)

undefined8 * FUN_143067b00(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 local_res8;
  longlong local_res10;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  FUN_143039130();
  *(undefined1 *)(param_1 + 0x59) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x42340000;
  *param_1 = &PTR_FUN_145a63dc0;
  *(undefined1 *)((longlong)param_1 + 0x2dc) = 1;
  param_1[5] = &PTR_LAB_145a64370;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x3f19999a;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30c) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(uint *)(param_1 + 0x39) = *(uint *)(param_1 + 0x39) | 2;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGbxProjectileMovementComponent::OnBounce",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res8,pwVar4 + 2,1);
  plVar1 = param_1 + 0x3e;
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove(plVar1,param_1,local_res8);
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UWalkingProjectileMovementComponent::OnBounce",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  local_res8 = 0;
  if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
    UObject::FindFunction(lVar6,local_20);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  iVar2 = *(int *)(param_1 + 0x3f);
  *(int *)(param_1 + 0x3f) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1fc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar7 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
  *puVar7 = local_28;
  puVar7[1] = local_24;
  *(longlong *)(puVar7 + 2) = local_20;
  return param_1;
}



// FUNCTION 143067d10 FUN_143067d10 body=37 status=ok
// SIG undefined FUN_143067d10(void)

undefined8 * FUN_143067d10(undefined8 *param_1)

{
  FUN_142c8cfb0();
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_145a655f0;
  return param_1;
}



// FUNCTION 143067d40 FUN_143067d40 body=53 status=ok
// SIG undefined FUN_143067d40(void)

undefined8 * FUN_143067d40(undefined8 *param_1)

{
  FUN_143098c70();
  *param_1 = &PTR__scalar_deleting_destructor__145a658e0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  return param_1;
}



// FUNCTION 143067d80 FUN_143067d80 body=92 status=ok
// SIG undefined FUN_143067d80(void)

undefined8 * FUN_143067d80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_145a649f0;
  param_1[5] = &PTR_LAB_145a64ed0;
  param_1[0x2f] = &PTR_LAB_145a64f00;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  return param_1;
}



// FUNCTION 143067de0 FUN_143067de0 body=290 status=ok
// SIG undefined FUN_143067de0(void)

undefined8 * FUN_143067de0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *param_1 = &PTR_FUN_145a65b90;
  param_1[5] = &PTR_LAB_145a660b8;
  param_1[0x2f] = &PTR_LAB_145a660e8;
  *(undefined1 *)(param_1 + 0x31) = 1;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x44) = 0xff;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x4b] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  FUN_14246fd70(param_1 + 0x36,0x1e);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((longlong)param_1 + 0x1b4);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x78;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x78;
  *(byte *)((longlong)param_1 + 0x254) = *(byte *)((longlong)param_1 + 0x254) & 0xfb;
  *(byte *)((longlong)param_1 + 0x1cc) = *(byte *)((longlong)param_1 + 0x1cc) & 0xfb | 2;
  return param_1;
}



// FUNCTION 143067f10 FUN_143067f10 body=33 status=ok
// SIG undefined FUN_143067f10(void)

undefined8 * FUN_143067f10(undefined8 *param_1)

{
  FUN_142c8d050();
  *param_1 = &PTR_FUN_145a66100;
  return param_1;
}



// FUNCTION 143067f40 UAnimNotify_WeaponFire body=44 status=ok
// SIG undefined UAnimNotify_WeaponFire(void)

undefined8 * UAnimNotify_WeaponFire::UAnimNotify_WeaponFire(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_145a64f18;
  return param_1;
}



// FUNCTION 143067f70 FUN_143067f70 body=144 status=ok
// SIG undefined FUN_143067f70(void)

undefined8 * FUN_143067f70(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_145a62858;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x20;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  return param_1;
}



// FUNCTION 143068000 UBlueprintFunctionLibrary body=33 status=ok
// SIG undefined UBlueprintFunctionLibrary(void)

undefined8 * UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(undefined8 *param_1)

{
  UHoudiniLandscapePtr::UHoudiniLandscapePtr();
  *param_1 = &PTR__scalar_deleting_destructor__145a663e0;
  return param_1;
}



// FUNCTION 143068030 FUN_143068030 body=55 status=ok
// SIG undefined FUN_143068030(void)

undefined8 * FUN_143068030(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__145a651d0;
  param_1[5] = &PTR_LAB_144198018;
  return param_1;
}



// FUNCTION 143068070 FUN_143068070 body=495 status=ok
// SIG undefined FUN_143068070(void)

undefined8 * FUN_143068070(undefined8 *param_1)

{
  FUN_143098570();
  *param_1 = &PTR_FUN_145a66660;
  param_1[5] = &PTR_LAB_145a66b18;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x33);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x1a4);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x36);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x1c4);
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  FUN_14246fd50(param_1 + 0x33,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x1a4,0);
  FUN_14246fd50(param_1 + 0x36,0);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  FUN_14246fd50((longlong)param_1 + 0x1c4,0);
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xfc;
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) | 8;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5d) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0xbf800000;
  return param_1;
}



// FUNCTION 143068260 FUN_143068260 body=185 status=ok
// SIG undefined FUN_143068260(void)

undefined8 * FUN_143068260(undefined8 *param_1)

{
  FUN_143098730();
  *param_1 = &PTR_FUN_145a66b68;
  param_1[5] = &PTR_LAB_145a66fa0;
  param_1[0x2f] = &PTR_LAB_145a66fd0;
  param_1[0x30] = &PTR_LAB_145a66fe8;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x1dc);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_14246fd50(param_1 + 0x38,0x40066666);
  *(undefined4 *)(param_1 + 0x3b) = 0x3f400000;
  FUN_14246fd50((longlong)param_1 + 0x1dc,0x3f800000);
  param_1[0x3d] = 0x3f400000;
  *(undefined2 *)(param_1 + 0x40) = 0;
  return param_1;
}



// FUNCTION 143068320 FUN_143068320 body=127 status=ok
// SIG undefined FUN_143068320(void)

undefined8 * FUN_143068320(undefined8 *param_1)

{
  FUN_1430683a0();
  *param_1 = &PTR_FUN_145a67290;
  param_1[5] = &PTR_LAB_145a678b0;
  param_1[0x2f] = &PTR_LAB_145a678e0;
  param_1[0x121] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x125);
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  FUN_14246fd50(param_1 + 0x125,0x3f800000);
  *(undefined1 *)(param_1 + 0x122) = 1;
  return param_1;
}



// FUNCTION 1430683a0 FUN_1430683a0 body=1412 status=ok
// SIG undefined FUN_1430683a0(void)

undefined8 * FUN_1430683a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  local_res8 = param_1;
  FUN_143098cc0();
  *param_1 = &PTR__scalar_deleting_destructor__145a643a0;
  param_1[5] = &PTR_LAB_145a649a8;
  param_1[0x2f] = &PTR_LAB_145a649d8;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x43);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x224);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x46);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x4c);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x26c);
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x2cc);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x5c);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x5e);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x2fc);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x61);
  FDifficultyFloat::FDifficultyFloat(param_1 + 99);
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0x3f800000;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x6d);
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0x3f800000;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x77);
  FUN_142d979c0(param_1 + 0x79);
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x86);
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  FUN_142de2eb0(param_1 + 0xaa);
  FUN_142de2eb0(param_1 + 0xba);
  FUN_142de2eb0(param_1 + 0xca);
  FUN_142de2eb0(param_1 + 0xda);
  FUN_142de2eb0(param_1 + 0xea);
  param_1[0xfa] = 0;
  FUN_142de2eb0(param_1 + 0xfb);
  FUN_142de2eb0(param_1 + 0x10b);
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  *(undefined4 *)(param_1 + 0x11d) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x11e,0);
  puVar1 = local_res8;
  param_1[0x11f] = 0;
  *(byte *)((longlong)local_res8 + 0x3c) = *(byte *)((longlong)local_res8 + 0x3c) & 0xfb | 2;
  *(undefined1 *)(local_res8 + 7) = 0;
  *(byte *)(local_res8 + 0x17) = *(byte *)(local_res8 + 0x17) | 8;
  *(undefined4 *)(local_res8 + 0xa3) = 0;
  FUN_14246fd50(local_res8 + 0x43,0x40200000);
  *(undefined4 *)((longlong)puVar1 + 0x25c) = 0x3f800000;
  FUN_14246fd50(param_1 + 0x4c,0);
  FUN_14246fd50((longlong)param_1 + 0x26c,0);
  *(undefined1 *)((longlong)puVar1 + 0x259) = 0xf;
  *(undefined4 *)(puVar1 + 0x59) = 0;
  FUN_14246fd50((longlong)param_1 + 0x2cc,0x3f800000);
  *(undefined4 *)(puVar1 + 0x5b) = 0x3f800000;
  *(undefined2 *)((longlong)puVar1 + 0x4fc) = 0;
  FUN_14246fd70(param_1 + 0x5c,1);
  *(undefined4 *)(puVar1 + 0x65) = 0x41a00000;
  *(undefined4 *)(puVar1 + 0x6f) = 0;
  *(undefined4 *)(puVar1 + 0x52) = 0x3f800000;
  FUN_14246fd50(param_1 + 0x61,0x3f800000);
  *(undefined4 *)((longlong)puVar1 + 0x314) = 0x3f800000;
  uVar2 = FUN_142e49950();
  puVar1[0x7e] = uVar2;
  puVar1[0x7f] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x40c) = 1;
  *(undefined4 *)(puVar1 + 0x82) = 0x40000000;
  *(undefined4 *)((longlong)puVar1 + 0x554) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x5d4) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x654) = 0x3dcccccd;
  *(undefined4 *)((longlong)puVar1 + 0x6d4) = 0x41700000;
  *(undefined4 *)((longlong)puVar1 + 0x754) = 0x3f800000;
  FUN_142de2d20(&local_c8,0x447a0000,0);
  *(undefined1 *)(param_1 + 0xfb) = local_c8;
  *(undefined1 *)((longlong)param_1 + 0x7d9) = local_c7;
  *(undefined1 *)((longlong)param_1 + 0x7da) = local_c6;
  *(undefined1 *)((longlong)param_1 + 0x7db) = local_c5;
  *(undefined4 *)((longlong)param_1 + 0x7dc) = local_c4;
  param_1[0xfd] = local_b8;
  param_1[0xff] = local_a8;
  param_1[0x100] = uStack_a0;
  param_1[0xfe] = local_b0;
  *(undefined4 *)(param_1 + 0xfc) = local_c0;
  param_1[0x108] = local_60;
  param_1[0x101] = local_98;
  param_1[0x102] = uStack_90;
  param_1[0x103] = local_88;
  param_1[0x104] = uStack_80;
  param_1[0x105] = local_78;
  param_1[0x106] = local_70;
  param_1[0x107] = uStack_68;
  *(undefined4 *)(param_1 + 0x109) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x84c) = local_54;
  *(undefined4 *)(param_1 + 0x10a) = local_50;
  FUN_142de2d20(&local_c8,0x453b8000,0);
  *(undefined1 *)(puVar1 + 0x10b) = local_c8;
  *(undefined1 *)((longlong)puVar1 + 0x859) = local_c7;
  *(undefined1 *)((longlong)puVar1 + 0x85a) = local_c6;
  *(undefined1 *)((longlong)puVar1 + 0x85b) = local_c5;
  *(undefined4 *)((longlong)puVar1 + 0x85c) = local_c4;
  puVar1[0x10d] = local_b8;
  puVar1[0x10f] = local_a8;
  puVar1[0x110] = uStack_a0;
  puVar1[0x10e] = local_b0;
  *(undefined4 *)(puVar1 + 0x10c) = local_c0;
  puVar1[0x118] = local_60;
  puVar1[0x111] = local_98;
  puVar1[0x112] = uStack_90;
  puVar1[0x113] = local_88;
  puVar1[0x114] = uStack_80;
  puVar1[0x115] = local_78;
  puVar1[0x116] = local_70;
  puVar1[0x117] = uStack_68;
  *(undefined4 *)(puVar1 + 0x119) = local_58;
  *(undefined4 *)((longlong)puVar1 + 0x8cc) = local_54;
  *(undefined4 *)(puVar1 + 0x11a) = local_50;
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res10);
  FRichCurve::AddKey(puVar1 + 0x86,local_res18,0,0,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(&local_res8);
  FRichCurve::AddKey(puVar1 + 0x86,local_res10,0x3f800000,0x3f800000,0,*puVar3);
  *(undefined4 *)(puVar1 + 0xa0) = 0x20;
  *(undefined4 *)((longlong)puVar1 + 0x4b4) = 0xbf800000;
  return puVar1;
}



// FUNCTION 143068930 FUN_143068930 body=186 status=ok
// SIG undefined FUN_143068930(void)

undefined8 * FUN_143068930(undefined8 *param_1)

{
  FUN_1430683a0();
  *param_1 = &PTR_FUN_145a678f8;
  param_1[5] = &PTR_LAB_145a67f38;
  param_1[0x2f] = &PTR_LAB_145a67f68;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x120);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x90c);
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0x453b8000;
  FUN_14246fd70(param_1 + 0x120,1);
  FUN_14246fd50((longlong)param_1 + 0x90c,0x3f800000);
  *(undefined4 *)(param_1 + 0x129) = 0x46800000;
  return param_1;
}



// FUNCTION 1430689f0 FUN_1430689f0 body=159 status=ok
// SIG undefined FUN_1430689f0(void)

void FUN_1430689f0(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x58);
    do {
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
      plVar7 = plVar7 + 0xc;
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



// FUNCTION 143068a90 FUN_143068a90 body=335 status=ok
// SIG undefined FUN_143068a90(void)

bool FUN_143068a90(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  uint uStackX_c;
  longlong local_res10;
  undefined1 local_res18 [16];
  
  plVar11 = (longlong *)0x0;
  if ((*(longlong *)(*param_1 + 0x508) != 0) &&
     (lVar2 = *(longlong *)(*param_1 + 0x510), lVar2 != 0)) {
    piVar1 = (int *)(lVar2 + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      lVar2 = *param_1;
      plVar4 = *(longlong **)(lVar2 + 0x510);
      plVar8 = plVar4;
      plVar9 = plVar11;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar3 = (int)plVar4[1];
        bVar12 = iVar3 == 0;
        if (bVar12) {
          *(int *)(plVar4 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar11, plVar9 = (longlong *)0x0, !bVar12) {
          LOCK();
          bVar12 = iVar3 == (int)plVar4[1];
          if (bVar12) {
            *(int *)(plVar4 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar12) {
            plVar8 = plVar4;
            if (plVar4 != (longlong *)0x0) {
              plVar9 = *(longlong **)(lVar2 + 0x508);
            }
            break;
          }
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar12 = iVar3 == 0;
          if (bVar12) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
      }
      plVar4 = (longlong *)FUN_142c6fde0(plVar9,local_res18);
      plVar9 = (longlong *)0x1;
      goto LAB_143068b3b;
    }
  }
  plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
  plVar4 = &local_res10;
  local_res10 = 0;
  plVar9 = plVar11;
LAB_143068b3b:
  plVar10 = plVar11;
  if (*param_2 != 0) {
    plVar5 = (longlong *)FUN_142e20fc0();
    for (plVar7 = (longlong *)*param_2;
        (plVar10 = plVar11, plVar7 != (longlong *)0x0 &&
        (plVar10 = (longlong *)*param_2, plVar7 != plVar5)); plVar7 = (longlong *)plVar7[6]) {
    }
  }
  plVar7 = plVar11;
  if (*plVar4 != 0) {
    plVar6 = (longlong *)FUN_142e20fc0();
    for (plVar5 = (longlong *)*plVar4;
        (plVar7 = plVar11, plVar5 != (longlong *)0x0 &&
        (plVar7 = (longlong *)*plVar4, plVar5 != plVar6)); plVar5 = (longlong *)plVar5[6]) {
    }
  }
  if ((plVar9 != (longlong *)0x0) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar2 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return plVar10 != plVar7;
}



// FUNCTION 143068d30 FUN_143068d30 body=72 status=ok
// SIG undefined FUN_143068d30(void)

undefined8 * FUN_143068d30(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 143068d80 FUN_143068d80 body=43 status=ok
// SIG undefined FUN_143068d80(void)

undefined8 * FUN_143068d80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 143068db0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::`2'::FUpdateDataName,<lambda_3ed14d8724a7eba22541a4c540e3f653>_>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145a67fa0;
  if (param_1[0x2c] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x2c] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 143068e20 FUN_143068e20 body=100 status=ok
// SIG undefined FUN_143068e20(void)

undefined8 * FUN_143068e20(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145a67f80;
  if (param_1[0x1c] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1c] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 143068e90 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`BeginSetUniformBufferContents<FPrimitiveUniformShaderParameters>'::`2'::SetUniformBufferContentsName,<lambda_f47d7766be7860e20b4421e6ae4cbb06>_>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145a67f90;
  if (param_1[0x4b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x4b] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 143068f00 FUN_143068f00 body=135 status=ok
// SIG undefined FUN_143068f00(void)

longlong FUN_143068f00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x660) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x460) = &PTR_FUN_14407f310;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fe0658;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x680);
  }
  return param_1;
}



// FUNCTION 143068f90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UWorld::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e14570();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8d8);
  }
  return param_1;
}



// FUNCTION 143068fd0 FUN_143068fd0 body=135 status=ok
// SIG undefined FUN_143068fd0(void)

undefined8 * FUN_143068fd0(undefined8 *param_1,ulonglong param_2)

{
  *(undefined1 *)(param_1 + 0x32) = 1;
  *param_1 = &PTR_FUN_145a636b8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2b);
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 143069060 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UEnvQueryGenerator_ProjectedPoints::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1430690b0 FUN_1430690b0 body=90 status=ok
// SIG undefined FUN_1430690b0(void)

longlong FUN_1430690b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 143069110 FUN_143069110 body=79 status=ok
// SIG undefined FUN_143069110(void)

longlong FUN_143069110(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 143069160 FUN_143069160 body=107 status=ok
// SIG undefined FUN_143069160(void)

longlong FUN_143069160(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  FUN_1409f6180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x358);
  }
  return param_1;
}



// FUNCTION 1430691d0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FArrayReader::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 143069220 FUN_143069220 body=87 status=ok
// SIG undefined FUN_143069220(void)

longlong FUN_143069220(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 143069280 FUN_143069280 body=99 status=ok
// SIG undefined FUN_143069280(void)

longlong FUN_143069280(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 0x1b0);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 1430692f0 FUN_1430692f0 body=183 status=ok
// SIG undefined FUN_1430692f0(void)

longlong FUN_1430692f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1430693b0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UOnGroundCondition::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 143069400 FUN_143069400 body=346 status=ok
// SIG undefined FUN_143069400(void)

longlong FUN_143069400(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x2c8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  FUN_1430689f0(param_1 + 0x1e8);
  thunk_FUN_142478640(param_1 + 0x1c4);
  thunk_FUN_142478640(param_1 + 0x1b0);
  thunk_FUN_142478640(param_1 + 0x1a4);
  thunk_FUN_142478640(param_1 + 0x198);
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 143069560 FUN_143069560 body=67 status=ok
// SIG undefined FUN_143069560(void)

longlong FUN_143069560(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 0x1dc);
  FUN_14128b820(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 1430695b0 FUN_1430695b0 body=67 status=ok
// SIG undefined FUN_1430695b0(void)

longlong FUN_1430695b0(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 0x928);
  FUN_14125e270(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x938);
  }
  return param_1;
}



// FUNCTION 143069600 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
BuildPatchServices::FBuildPatchInstaller::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_14125e270();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x900);
  }
  return param_1;
}



// FUNCTION 143069640 FUN_143069640 body=97 status=ok
// SIG undefined FUN_143069640(void)

longlong FUN_143069640(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x928) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x90c);
  thunk_FUN_142478640(param_1 + 0x900);
  FUN_14125e270(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x958);
  }
  return param_1;
}



// FUNCTION 1430696b0 FUN_1430696b0 body=811 status=ok
// SIG undefined FUN_1430696b0(void)

void FUN_1430696b0(longlong *param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined1 *local_48;
  undefined4 uStack_40;
  longlong local_38;
  longlong *local_30;
  
  if (((char)param_1[0x25] == '\x03') && (*(char *)((longlong)param_1 + 0x614) == -1)) {
    lVar6 = param_1[0xc2];
    if (*(byte *)((longlong)param_1 + 0x129) < 2) {
      (**(code **)(*param_1 + 0x600))();
    }
    *(int *)(param_1 + 0xc2) = (int)lVar6 + 1;
    *(undefined1 *)((longlong)param_1 + 0x614) = param_3;
    param_1[0xc3] = (longlong)param_2;
    *(undefined1 *)(param_1 + 0xc4) = param_4;
  }
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)param_1[0x23];
    if (param_2 != (longlong *)0x0) {
      lVar6 = FUN_1429d7ab0();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_143069763;
    }
    param_2 = (longlong *)0x0;
  }
LAB_143069763:
  *(int *)(param_1 + 0xc5) = (int)param_1[0xc2];
  *(undefined1 *)((longlong)param_1 + 0x62c) = param_3;
  *(undefined1 *)(param_1 + 199) = param_4;
  param_1[0xc6] = (longlong)param_2;
  if ((param_1[0xff] != DAT_146b47938) && (param_1[0xff] != DAT_146b479b0)) {
    return;
  }
  param_1[0x2a] = (longlong)param_2;
  if ((param_2 != (longlong *)0x0) &&
     ((((char)param_2[0x25] != '\x01' ||
       (cVar4 = (**(code **)(*param_2 + 0x778))(param_2), cVar4 != '\0')) ||
      ((*(longlong **)(param_1[0x2a] + 0x118) != (longlong *)0x0 &&
       ((lVar6 = (**(code **)(**(longlong **)(param_1[0x2a] + 0x118) + 0x678))(), lVar6 != 0 &&
        (*(char *)(*(longlong *)(param_1[0x2a] + 0x118) + 0x128) != '\x01')))))))) {
    lVar6 = param_1[0xc6];
    if (lVar6 != 0) {
      uVar7 = FUN_1430a8880();
      plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x1c0))(plVar8,param_1);
      }
    }
    lVar6 = param_1[0xff];
    if (DAT_146b479a8 != lVar6) {
      *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
      (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479a8);
      local_res8 = param_1[0xff];
      *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
      if (local_res8 == lVar6) {
        param_1[0xff] = DAT_146b479a8;
        (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
        return;
      }
    }
    return;
  }
  if (param_1[0xce] != 0) {
    uVar7 = AActor::GetWorldTimerManager(param_1);
    FUN_142880530(uVar7,param_1 + 0xce);
    param_1[0xce] = 0;
  }
  (**(code **)(*param_1 + 0x918))(param_1,1);
  if ((char)param_1[199] == '\x01') {
    return;
  }
  lVar6 = *param_1;
  uVar9 = (**(code **)(lVar6 + 0x7e8))(param_1);
  uVar5 = (**(code **)(*param_1 + 0x7f0))(param_1);
  (**(code **)(lVar6 + 0x990))(param_1,&local_38,uVar5,0x3f800000,uVar9,0,0);
  if (local_38 != 0) {
    *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | 4;
    local_48 = &LAB_143081000;
    uStack_40 = 0;
    TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
              (local_38 + 0x58,local_res10,param_1,&local_48);
  }
  if (local_30 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar8 = local_30 + 1;
  lVar6 = *plVar8;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)lVar6 != 1) {
    return;
  }
  (**(code **)*local_30)(local_30);
  LOCK();
  piVar1 = (int *)((longlong)local_30 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return;
  }
  (**(code **)(*local_30 + 8))(local_30,1);
  return;
}



// FUNCTION 1430699e0 FUN_1430699e0 body=370 status=ok
// SIG undefined FUN_1430699e0(void)

int FUN_1430699e0(longlong *param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  
  iVar2 = FUN_14233f450();
  if (iVar2 != 3) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x448))(param_1);
  cVar1 = FUN_142d52a00(param_1 + 0x44);
  if (cVar1 == '\0') {
    param_2 = *(int *)((longlong)param_1 + 0x1c4) + param_2;
    iVar6 = 0;
    if ((-1 < param_2) &&
       (iVar6 = *(int *)((longlong)param_1 + 0x1bc), param_2 < *(int *)((longlong)param_1 + 0x1bc)))
    {
      iVar6 = param_2;
    }
    *(int *)((longlong)param_1 + 0x1c4) = iVar6;
  }
  else {
    *(byte *)((longlong)param_1 + 0x254) = *(byte *)((longlong)param_1 + 0x254) | 2;
    uVar5 = FUN_142d52a20(param_1 + 0x44);
    uVar5 = FArchive::operator<<(uVar5);
    FUN_142d55510(uVar5,(float)param_2);
    uVar5 = FUN_142d52a20(param_1 + 0x44);
    uVar5 = FArchive::operator<<(uVar5);
    fVar7 = (float)FUN_142d5fed0(uVar5);
    *(byte *)((longlong)param_1 + 0x254) = *(byte *)((longlong)param_1 + 0x254) & 0xfd;
    iVar6 = (int)fVar7;
  }
  iVar3 = (**(code **)(*param_1 + 0x448))(param_1);
  iVar3 = iVar3 - (int)param_1[0x38];
  iVar4 = 0;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x39) = iVar4;
  if ((param_3 != '\0') && (iVar4 = (**(code **)(*param_1 + 0x448))(param_1), iVar4 != iVar2)) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
    cVar1 = UActorComponent::IsComponentTickEnabled(param_1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x520))(param_1);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x358))(param_1,1);
      }
    }
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  return iVar6;
}



// FUNCTION 143069b60 FUN_143069b60 body=1340 status=ok
// SIG undefined FUN_143069b60(void)

void FUN_143069b60(longlong param_1,byte param_2,wchar_t *param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined4 *puVar10;
  int *piVar11;
  longlong *plVar12;
  bool bVar13;
  wchar_t *local_res18;
  longlong local_res20;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_3 != (wchar_t *)0x0) {
    if (((int)(uint)param_2 < *(int *)(param_1 + 0x6a0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)param_2 * 0x48) != 0)) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      lVar1 = (ulonglong)param_2 * 0x48;
      local_res18 = param_3;
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                (*(longlong *)(param_1 + 0x698) + 0x38 + lVar1,&local_res18);
      lVar7 = FUN_1430c20f0();
      if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
          != lVar7 + 0x88)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if (bVar13) {
        lVar7 = FUN_1430c20f0();
        if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
        pwVar9 = (wchar_t *)0x0;
        if (bVar13) {
          pwVar9 = param_3;
        }
        *(wchar_t **)(*(longlong *)(param_1 + 0x698) + 0x20 + lVar1) = pwVar9;
        local_28 = &LAB_143068be0;
        pwVar8 = _guard_xfg_dispatch_icall_nop(L"&AWeapon::OnZoomedOut",L"::");
        pwVar9 = (wchar_t *)0x0;
        while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar9 = pwVar4;
        }
        FName::FName(&local_res18,pwVar9 + 2,1);
        FUN_1407260e0(*(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + lVar1) + 0x280,param_1,
                      &local_28,local_res18);
      }
      else {
        lVar7 = FUN_1430bc880();
        if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar13) {
          lVar7 = FUN_1430bc880();
          if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          pwVar9 = (wchar_t *)0x0;
          if (bVar13) {
            pwVar9 = param_3;
          }
          *(wchar_t **)(*(longlong *)(param_1 + 0x698) + 0x10 + lVar1) = pwVar9;
        }
        else {
          lVar7 = UAnimMontage::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          if (bVar13) {
            lVar7 = UAnimMontage::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar13 = false;
            }
            else {
              bVar13 = true;
            }
            pwVar9 = (wchar_t *)0x0;
            if (bVar13) {
              pwVar9 = param_3;
            }
            *(wchar_t **)(*(longlong *)(param_1 + 0x698) + 0x18 + lVar1) = pwVar9;
            pwVar8 = _guard_xfg_dispatch_icall_nop(L"&AWeapon::OnReloadEnded",L"::");
            pwVar9 = (wchar_t *)0x0;
            while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
              pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
              pwVar9 = pwVar4;
            }
            FName::FName(&local_res20,pwVar9 + 2,1);
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x18 + lVar1);
            plVar12 = (longlong *)(lVar1 + 0x1a0);
            FWeakObjectPtr::operator=(&local_28,0);
            uStack_20 = 0;
            FWeakObjectPtr::operator=(&local_28,param_1);
            uStack_20 = local_res20;
            local_res18 = (wchar_t *)0x0;
            if ((local_res20 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
              UObject::FindFunction(lVar7,uStack_20);
            }
            piVar3 = (int *)*plVar12;
            iVar2 = *(int *)(lVar1 + 0x1a8);
            uVar5 = local_28;
            for (piVar11 = piVar3; local_28 = (undefined1 *)uVar5,
                piVar11 != piVar3 + (longlong)iVar2 * 4; piVar11 = piVar11 + 4) {
              local_28._0_4_ = (int)uVar5;
              if (((*piVar11 == (int)local_28) &&
                  (local_28._4_4_ = (int)((ulonglong)uVar5 >> 0x20),
                  bVar13 = piVar11[1] == local_28._4_4_, bVar13)) ||
                 ((cVar6 = FWeakObjectPtr::IsValid(piVar11), cVar6 == '\0' &&
                  (cVar6 = FWeakObjectPtr::IsValid(&local_28), cVar6 == '\0')))) {
                bVar13 = true;
              }
              else {
                bVar13 = false;
              }
              if ((bVar13) && (*(longlong *)(piVar11 + 2) == uStack_20)) {
                bVar13 = true;
              }
              else {
                bVar13 = false;
              }
              if (bVar13) {
                if ((int)((longlong)piVar11 - (longlong)piVar3 >> 4) != -1) goto LAB_143069f33;
                break;
              }
              uVar5 = local_28;
            }
            iVar2 = *(int *)(lVar1 + 0x1a8);
            *(int *)(lVar1 + 0x1a8) = iVar2 + 1;
            if (*(int *)(lVar1 + 0x1ac) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar2);
            }
            puVar10 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar12);
            *puVar10 = (int)local_28;
            puVar10[1] = local_28._4_4_;
            *(longlong *)(puVar10 + 2) = uStack_20;
LAB_143069f33:
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
          }
          else {
            lVar7 = FUN_1430bca90();
            if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar13 = false;
            }
            else {
              bVar13 = true;
            }
            if (bVar13) {
              lVar7 = FUN_1430bca90();
              if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar13 = false;
              }
              else {
                bVar13 = true;
              }
              pwVar9 = (wchar_t *)0x0;
              if (bVar13) {
                pwVar9 = param_3;
              }
              *(wchar_t **)(*(longlong *)(param_1 + 0x698) + 0x28 + lVar1) = pwVar9;
            }
            else {
              lVar7 = FUN_1430bf460();
              if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar13 = false;
              }
              else {
                bVar13 = true;
              }
              if (bVar13) {
                FUN_1430a4ca0(*(undefined8 *)(*(longlong *)(param_1 + 0x698) + 8 + lVar1),param_3);
              }
              else {
                lVar7 = UCircularThrobber::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar13 = false;
                }
                else {
                  bVar13 = true;
                }
                if (bVar13) {
                  lVar7 = UCircularThrobber::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) +
                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                    bVar13 = false;
                  }
                  else {
                    bVar13 = true;
                  }
                  pwVar9 = (wchar_t *)0x0;
                  if (bVar13) {
                    pwVar9 = param_3;
                  }
                  *(wchar_t **)(*(longlong *)(param_1 + 0x698) + 0x30 + lVar1) = pwVar9;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14306a0a0 FUN_14306a0a0 body=257 status=ok
// SIG undefined FUN_14306a0a0(void)

undefined8
FUN_14306a0a0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             float param_5,undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_38 [48];
  
  if (param_3 != (longlong *)0x0) {
    lVar3 = FUN_1430bc880();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_3 + 0x458))(param_3,local_38);
      cVar2 = FUN_142d52a00(local_38);
      if (cVar2 != '\0') {
        if (param_3[0x30] != 0) {
          param_5 = param_5 * *(float *)(param_3[0x30] + 0x68);
        }
        uVar4 = FUN_142d52a20(local_38);
        lVar3 = FArchive::operator<<(uVar4);
        FUN_142470da0(lVar3 + 0x40,param_2,param_4,param_5,param_6);
        return param_2;
      }
    }
  }
  FUN_14246da50(param_2,0);
  return param_2;
}



// FUNCTION 14306a1b0 FUN_14306a1b0 body=166 status=ok
// SIG undefined FUN_14306a1b0(void)

void FUN_14306a1b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  
  if ((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    cVar2 = FUN_142390860(param_2);
    if (cVar2 == '\0') {
      FUN_142382f60(param_2,*(undefined8 *)(param_1 + 0x38),&DAT_146532188,0);
    }
    (**(code **)(*param_2 + 0x358))
              (param_2,CONCAT31((uint3)(*(uint *)(param_1 + 0x58) >> 9),
                                (char)(*(uint *)(param_1 + 0x58) >> 1)) & 0xffffff01);
    iVar1 = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0xb8) = iVar1 + 1;
    if (*(int *)(param_1 + 0xbc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xb0,iVar1);
    }
    *(longlong **)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 14306a260 FUN_14306a260 body=141 status=ok
// SIG undefined FUN_14306a260(void)

undefined8 * FUN_14306a260(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined1 local_38 [12];
  undefined1 local_2c [36];
  
  fVar2 = (float)(**(code **)(*param_1 + 0x488))();
  if (0.0 < fVar2) {
    uVar1 = FRotator::Vector(param_3,local_38);
    uVar1 = FMath::VRandCone(local_2c,uVar1,fVar2 * 0.008726646);
    FVector::Rotation(uVar1,param_2);
    return param_2;
  }
  *param_2 = *param_3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  return param_2;
}



// FUNCTION 14306a2f0 FUN_14306a2f0 body=361 status=ok
// SIG undefined FUN_14306a2f0(void)

void FUN_14306a2f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  longlong local_res10;
  
  lVar4 = 0;
  local_res8 = lVar4;
  if (*param_1 != 0) {
    lVar1 = UInputKeySelector::GetPrivateStaticClass();
    for (lVar3 = *param_1;
        (local_res8 = lVar4, lVar3 != 0 && (local_res8 = *param_1, lVar3 != lVar1));
        lVar3 = *(longlong *)(lVar3 + 0x30)) {
    }
  }
  (**(code **)(*param_2 + 0x38))(param_2,&local_res8,0,0);
  lVar3 = lVar4;
  if (*param_1 != 0) {
    lVar2 = UInputKeySelector::GetPrivateStaticClass();
    for (lVar1 = *param_1; (lVar3 = lVar4, lVar1 != 0 && (lVar3 = *param_1, lVar1 != lVar2));
        lVar1 = *(longlong *)(lVar1 + 0x30)) {
    }
  }
  if (local_res8 != lVar3) {
    *param_1 = local_res8;
  }
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 1,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 3,0,0);
  local_res10 = FWeakObjectPtr::Get(param_1 + 0x2d);
  if ((local_res10 != 0) &&
     ((**(code **)(*param_2 + 0x38))(param_2,&local_res10,0,0), local_res10 == 0)) {
    FWeakObjectPtr::operator=(param_1 + 0x2d,0);
    local_res10 = 0;
    param_1[0x2e] = 0;
  }
  local_res10 = FWeakObjectPtr::Get(param_1 + 0x2f);
  if ((local_res10 != 0) &&
     ((**(code **)(*param_2 + 0x38))(param_2,&local_res10,0,0), local_res10 == 0)) {
    FWeakObjectPtr::operator=(param_1 + 0x2f,0);
    local_res10 = 0;
    param_1[0x30] = 0;
  }
  FUN_1424976c0(param_1 + 0xb,param_2);
  return;
}



// FUNCTION 14306a460 FUN_14306a460 body=1327 status=ok
// SIG undefined FUN_14306a460(void)

uint FUN_14306a460(longlong param_1,longlong param_2,ulonglong *param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  wchar_t *pwVar22;
  undefined8 local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  longlong local_58;
  undefined1 *local_48;
  longlong lStack_40;
  wchar_t *pwVar16;
  
  if (param_2 == 0) {
    return 0xff;
  }
  uVar19 = 1;
  if (param_4 != 0) {
    uVar19 = param_4;
  }
  plVar11 = (longlong *)(param_1 + 0x698);
  uVar20 = *(uint *)(param_1 + 0x6a0);
  *(uint *)(param_1 + 0x6a0) = uVar20 + 1;
  if (*(int *)(param_1 + 0x6a4) < (int)(uVar20 + 1)) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar11,uVar20);
  }
  lVar17 = *plVar11;
  local_58 = (longlong)(int)uVar20 * 0x48;
  *(undefined8 *)(local_58 + lVar17) = 0;
  *(undefined8 *)(local_58 + 8 + lVar17) = 0;
  *(undefined8 *)(local_58 + 0x10 + lVar17) = 0;
  *(undefined8 *)(local_58 + 0x18 + lVar17) = 0;
  *(undefined8 *)(local_58 + 0x20 + lVar17) = 0;
  *(undefined8 *)(local_58 + 0x28 + lVar17) = 0;
  *(undefined8 *)(local_58 + 0x30 + lVar17) = 0;
  *(undefined8 *)(local_58 + 0x38 + lVar17) = 0;
  *(undefined8 *)(local_58 + 0x40 + lVar17) = 0;
  *(longlong *)(local_58 + 8 + *plVar11) = param_2;
  *(uint *)(local_58 + *plVar11) = uVar19;
  *(undefined1 *)(local_58 + 4 + *plVar11) = 0;
  lVar17 = *plVar11 + local_58;
  iVar2 = *(int *)(lVar17 + 0x40);
  *(int *)(lVar17 + 0x40) = iVar2 + 1;
  if (*(int *)(lVar17 + 0x44) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar17 + 0x38,iVar2);
  }
  pwVar22 = (wchar_t *)0x0;
  local_68 = &LAB_14244063c;
  uStack_60 = 0;
  lStack_40 = (ulonglong)uStack_5c << 0x20;
  *(longlong *)(*(longlong *)(lVar17 + 0x38) + (longlong)iVar2 * 8) = param_2;
  *(char *)(param_2 + 0x180) = (char)uVar20;
  local_48 = &LAB_14244063c;
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AWeapon::OnUseStarted",L"::");
  pwVar16 = pwVar22;
  while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar16 = pwVar4;
  }
  FName::FName(&local_68,pwVar16 + 2,1);
  FUN_1407260e0(param_2 + 0x1c0,param_1,&local_48,local_68);
  uStack_60 = 0;
  local_68 = &LAB_142440648;
  lStack_40 = (ulonglong)uStack_5c << 0x20;
  local_48 = &LAB_142440648;
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AWeapon::OnUseFinished",L"::");
  pwVar16 = pwVar22;
  while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar16 = pwVar4;
  }
  FName::FName(&local_68,pwVar16 + 2,1);
  FUN_1407260e0(param_2 + 0x1d0,param_1,&local_48,local_68);
  lVar17 = FUN_1430bdfe0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8)
      != lVar17 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((bVar3) && (*(longlong *)(param_1 + 0x470) == 0)) && (uVar20 == 0)) {
    uVar10 = FUN_143078bf0(param_1);
    *(undefined8 *)(param_1 + 0x470) = uVar10;
  }
  bVar3 = false;
  uVar21 = 0;
  bVar6 = false;
  do {
    if (uVar19 == 0) {
      plVar11 = (longlong *)*param_3;
      pwVar16 = (wchar_t *)((longlong)(int)param_3[1] & 0x1fffffffffffffff);
      if (plVar11 + (int)param_3[1] < plVar11) {
        pwVar16 = pwVar22;
      }
      if (pwVar16 != (wchar_t *)0x0) {
        do {
          if (*plVar11 != 0) {
            FUN_143069b60(param_1);
          }
          plVar11 = plVar11 + 1;
          pwVar22 = (wchar_t *)((longlong)pwVar22 + 1);
        } while (pwVar22 != pwVar16);
      }
      uVar20 = uVar20 & 0xff;
      uVar10 = *(undefined8 *)(param_2 + 0x198);
      if (*(int *)(param_1 + 0x8b0) <= (int)uVar20) {
        plVar11 = (longlong *)(param_1 + 0x8a8);
        iVar8 = *(int *)(param_1 + 0x8b0);
        iVar2 = uVar20 + 1;
        if (iVar8 < iVar2) {
          *(int *)(param_1 + 0x8b0) = iVar2;
          if (*(int *)(param_1 + 0x8b4) < iVar2) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar11 + (longlong)iVar8 * 8),0,(longlong)(iVar2 - iVar8) << 3);
        }
        else if ((iVar2 < iVar8) && (iVar8 - iVar2 != 0)) {
          *(int *)(param_1 + 0x8b0) = iVar8 - (iVar8 - iVar2);
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar11);
        }
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x8a8) + (ulonglong)uVar20 * 8) = uVar10;
      plVar11 = (longlong *)FString::FString(&local_48,param_2 + 0x1a0);
      if (*(int *)(param_1 + 0x8c0) <= (int)uVar20) {
        plVar1 = (longlong *)(param_1 + 0x8b8);
        iVar8 = *(int *)(param_1 + 0x8c0);
        iVar2 = uVar20 + 1;
        if (iVar8 < iVar2) {
          *(int *)(param_1 + 0x8c0) = iVar2;
          if (*(int *)(param_1 + 0x8c4) < iVar2) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x10 + *plVar1),0,(longlong)(iVar2 - iVar8) << 4);
        }
        else if (iVar2 < iVar8) {
          TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
                    (plVar1,iVar2,iVar8 - iVar2,1);
        }
      }
      FString::operator=((ulonglong)uVar20 * 0x10 + *(longlong *)(param_1 + 0x8b8),plVar11);
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      return uVar20;
    }
    if ((uVar19 & 1) != 0) {
      bVar5 = !bVar3;
      bVar3 = bVar6;
      if (bVar5) {
        bVar3 = true;
        *(char *)(*(longlong *)(param_1 + 0x698) + 4 + local_58) = (char)uVar21;
      }
      uVar18 = (uint)uVar21;
      bVar6 = bVar3;
      if (0 < (int)uVar20) {
        puVar13 = *(uint **)(param_1 + 0x698);
        pwVar16 = pwVar22;
        do {
          if ((*puVar13 >> (uVar18 & 0x1f) & 1) != 0) goto LAB_14306a7d9;
          uVar15 = (int)pwVar16 + 1;
          pwVar16 = (wchar_t *)(ulonglong)uVar15;
          puVar13 = puVar13 + 0x12;
        } while ((int)uVar15 < (int)uVar20);
      }
      iVar2 = *(int *)(param_1 + 0x6b8);
      if (iVar2 <= (int)uVar18) {
        lVar17 = param_1 + 0x6a8;
        iVar2 = *(int *)(param_1 + 0x6b8);
        iVar8 = uVar18 + 1;
        if (iVar2 < iVar8) {
          *(int *)(param_1 + 0x6b8) = iVar8;
          uVar7 = (ulonglong)local_68 >> 0x20;
          local_68 = (undefined1 *)CONCAT44((int)uVar7,iVar8 - iVar2);
          iVar12 = iVar8 - iVar2;
          if (*(int *)(param_1 + 0x6bc) < iVar8) {
            FUN_140a13660(lVar17);
            iVar12 = (int)local_68;
          }
          lVar14 = *(longlong *)(param_1 + 0x6b0);
          if (*(longlong *)(param_1 + 0x6b0) == 0) {
            lVar14 = lVar17;
          }
          _guard_xfg_dispatch_icall_nop((void *)(lVar14 + iVar2),0,(longlong)iVar12);
        }
        else if ((iVar8 < iVar2) && (iVar2 - iVar8 != 0)) {
          *(int *)(param_1 + 0x6b8) = iVar2 - (iVar2 - iVar8);
          FUN_140a13970(lVar17);
        }
        iVar2 = *(int *)(param_1 + 0x6b8);
      }
      if ((int)uVar18 < iVar2) {
        lVar17 = *(longlong *)(param_1 + 0x6b0);
        if (*(longlong *)(param_1 + 0x6b0) == 0) {
          lVar17 = param_1 + 0x6a8;
        }
        *(char *)(lVar17 + uVar21) = (char)uVar20;
      }
    }
LAB_14306a7d9:
    uVar21 = (ulonglong)(byte)((char)uVar21 + 1);
    uVar19 = (int)uVar19 >> 1;
  } while( true );
}



// FUNCTION 14306a9a0 FUN_14306a9a0 body=125 status=ok
// SIG undefined FUN_14306a9a0(void)

void FUN_14306a9a0(longlong *param_1)

{
  float fVar1;
  
  if (1 < (int)param_1[0x59]) {
    if (*(char *)((longlong)param_1 + 0x4ec) == -1) {
      *(undefined1 *)((longlong)param_1 + 0x4ec) = 0;
      return;
    }
    if ((*(char *)((longlong)param_1 + 0x2dc) == '\0') || ((int)param_1[0x45] <= (int)param_1[0x9d])
       ) {
      fVar1 = (float)(**(code **)(*param_1 + 0x558))();
      if (0.0 < fVar1) {
        *(byte *)((longlong)param_1 + 0x4ec) = *(byte *)((longlong)param_1 + 0x4ec) + 1;
        return;
      }
      *(char *)((longlong)param_1 + 0x4ec) =
           (char)((longlong)(ulonglong)(*(byte *)((longlong)param_1 + 0x4ec) + 1) %
                 (longlong)(int)param_1[0x59]);
    }
  }
  return;
}



// FUNCTION 14306aa50 FUN_14306aa50 body=134 status=ok
// SIG undefined FUN_14306aa50(void)

void FUN_14306aa50(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  param_1[0x3f] = 0;
  if (0 < *(int *)((longlong)param_1 + 0x1ec)) {
    *(char *)((longlong)param_1 + 0x202) = *(char *)((longlong)param_1 + 0x202) + '\x01';
    uVar2 = *(undefined1 *)((longlong)param_1 + 0x202);
    if (*(int *)((longlong)param_1 + 0x1ec) < (int)(uint)*(byte *)((longlong)param_1 + 0x202)) {
      uVar2 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x202) = uVar2;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  plVar1 = (longlong *)FUN_14309ec70(param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x808))(plVar1,0xffffffff,0);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x36,0);
    return;
  }
  return;
}



// FUNCTION 14306aae0 FUN_14306aae0 body=178 status=ok
// SIG undefined FUN_14306aae0(void)

void FUN_14306aae0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar3 = (longlong *)FUN_14309ec70();
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 != 3) {
    lVar4 = (**(code **)(*plVar3 + 0x950))(plVar3);
    if (lVar4 == 0) {
      return;
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x950))(plVar3);
    cVar1 = (**(code **)(*plVar3 + 0x778))(plVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(lVar4 + 400) == 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x3f8);
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
  }
  FUN_142880530(uVar5,param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  FUN_14306aa50(param_1);
  return;
}



// FUNCTION 14306aba0 FUN_14306aba0 body=1520 status=ok
// SIG undefined FUN_14306aba0(void)

void FUN_14306aba0(longlong param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *param_2;
  fVar4 = (float)(int)(fVar2 * 0.0027777778) * 360.0;
  if (ABS(fVar2) < ABS(fVar4)) {
    fVar4 = fVar2;
  }
  fVar2 = fVar2 - fVar4;
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + 360.0;
  }
  if (fVar2 == 0.0) {
    fVar2 = param_2[1];
    fVar4 = (float)(int)(fVar2 * 0.0027777778) * 360.0;
    if (ABS(fVar2) < ABS(fVar4)) {
      fVar4 = fVar2;
    }
    fVar2 = fVar2 - fVar4;
    if (fVar2 < 0.0) {
      fVar2 = fVar2 + 360.0;
    }
    if (fVar2 == 0.0) {
      fVar2 = param_2[2];
      fVar4 = (float)(int)(fVar2 * 0.0027777778) * 360.0;
      if (ABS(fVar2) < ABS(fVar4)) {
        fVar4 = fVar2;
      }
      fVar2 = fVar2 - fVar4;
      if (fVar2 < 0.0) {
        fVar2 = fVar2 + 360.0;
      }
      if ((((fVar2 == 0.0) &&
           (ABS(*(float *)(param_1 + 0x19c)) < *(float *)(param_1 + 0x1b4) ||
            ABS(*(float *)(param_1 + 0x19c)) == *(float *)(param_1 + 0x1b4))) &&
          (ABS(*(float *)(param_1 + 0x1a0)) < *(float *)(param_1 + 0x1b8) ||
           ABS(*(float *)(param_1 + 0x1a0)) == *(float *)(param_1 + 0x1b8))) &&
         (ABS(*(float *)(param_1 + 0x1a4)) < *(float *)(param_1 + 0x1bc) ||
          ABS(*(float *)(param_1 + 0x1a4)) == *(float *)(param_1 + 0x1bc))) {
        return;
      }
    }
  }
  fVar2 = *(float *)(param_1 + 0x19c);
  fVar4 = (float)(int)(fVar2 * 0.0027777778) * 360.0;
  if (ABS(fVar2) < ABS(fVar4)) {
    fVar4 = fVar2;
  }
  fVar2 = fVar2 - fVar4;
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + 360.0;
  }
  if (fVar2 == 0.0) {
    fVar2 = *(float *)(param_1 + 0x1a0);
    fVar4 = (float)(int)(fVar2 * 0.0027777778) * 360.0;
    if (ABS(fVar2) < ABS(fVar4)) {
      fVar4 = fVar2;
    }
    fVar2 = fVar2 - fVar4;
    if (fVar2 < 0.0) {
      fVar2 = fVar2 + 360.0;
    }
    if (fVar2 == 0.0) {
      fVar2 = *(float *)(param_1 + 0x1a4);
      fVar4 = (float)(int)(fVar2 * 0.0027777778) * 360.0;
      if (ABS(fVar2) < ABS(fVar4)) {
        fVar4 = fVar2;
      }
      fVar2 = fVar2 - fVar4;
      if (fVar2 < 0.0) {
        fVar2 = fVar2 + 360.0;
      }
      if (fVar2 == 0.0) {
        fVar2 = *(float *)(param_1 + 0x1a8);
        fVar4 = (float)(int)(fVar2 * 0.0027777778) * 360.0;
        if (ABS(fVar2) < ABS(fVar4)) {
          fVar4 = fVar2;
        }
        fVar2 = fVar2 - fVar4;
        if (fVar2 < 0.0) {
          fVar2 = fVar2 + 360.0;
        }
        if (fVar2 == 0.0) {
          fVar2 = *(float *)(param_1 + 0x1ac);
          fVar4 = (float)(int)(fVar2 * 0.0027777778) * 360.0;
          if (ABS(fVar2) < ABS(fVar4)) {
            fVar4 = fVar2;
          }
          fVar2 = fVar2 - fVar4;
          if (fVar2 < 0.0) {
            fVar2 = fVar2 + 360.0;
          }
          if (fVar2 == 0.0) {
            fVar2 = *(float *)(param_1 + 0x1b0);
            fVar4 = (float)(int)(fVar2 * 0.0027777778) * 360.0;
            if (ABS(fVar2) < ABS(fVar4)) {
              fVar4 = fVar2;
            }
            fVar2 = fVar2 - fVar4;
            if (fVar2 < 0.0) {
              fVar2 = fVar2 + 360.0;
            }
            if (fVar2 == 0.0) {
              return;
            }
          }
        }
      }
    }
  }
  if ((*(char *)(param_1 + 0x198) != '\0') && (iVar1 = FUN_14233f450(), iVar1 < 3)) {
    fVar2 = *param_2;
    fVar4 = (float)(int)(fVar2 * 0.0027777778) * 360.0;
    if (ABS(fVar2) < ABS(fVar4)) {
      fVar4 = fVar2;
    }
    fVar2 = fVar2 - fVar4;
    if (fVar2 < 0.0) {
      fVar2 = fVar2 + 360.0;
    }
    fVar4 = param_2[1];
    fVar5 = (float)(int)(fVar4 * 0.0027777778) * 360.0;
    if (ABS(fVar4) < ABS(fVar5)) {
      fVar5 = fVar4;
    }
    fVar4 = fVar4 - fVar5;
    if (fVar4 < 0.0) {
      fVar4 = fVar4 + 360.0;
    }
    FUN_1430b4650(param_1,((int)ROUND(fVar4 * 182.04445 + fVar4 * 182.04445 + 0.5) >> 1) << 0x10 |
                          (int)ROUND(fVar2 * 182.04445 + fVar2 * 182.04445 + 0.5) >> 1 & 0xffffU);
  }
  fVar2 = *param_2;
  fVar4 = *(float *)(param_1 + 0x19c);
  if (fVar2 * fVar4 < 0.0) {
    fVar5 = -fVar4;
    if (fVar2 <= 0.0) {
      if (fVar5 <= fVar2) {
        fVar5 = fVar2;
      }
    }
    else if (fVar2 <= fVar5) {
      fVar5 = fVar2;
    }
    *(float *)(param_1 + 0x19c) = fVar5 + fVar4;
    fVar2 = *(float *)(param_1 + 0x1a8);
    if (fVar5 * fVar2 < 0.0) {
      fVar4 = -fVar2;
      if (fVar5 <= 0.0) {
        if (fVar4 <= fVar5) {
          fVar4 = fVar5;
        }
      }
      else if (fVar5 <= fVar4) {
        fVar4 = fVar5;
      }
      *(float *)(param_1 + 0x1a8) = fVar4 + fVar2;
    }
    *param_2 = *param_2 - fVar5;
  }
  fVar2 = param_2[1];
  fVar4 = *(float *)(param_1 + 0x1a0);
  if (fVar2 * fVar4 < 0.0) {
    fVar5 = -fVar4;
    if (fVar2 <= 0.0) {
      if (fVar5 <= fVar2) {
        fVar5 = fVar2;
      }
    }
    else if (fVar2 <= fVar5) {
      fVar5 = fVar2;
    }
    *(float *)(param_1 + 0x1a0) = fVar5 + fVar4;
    fVar2 = *(float *)(param_1 + 0x1ac);
    if (fVar5 * fVar2 < 0.0) {
      fVar4 = -fVar2;
      if (fVar5 <= 0.0) {
        if (fVar4 <= fVar5) {
          fVar4 = fVar5;
        }
      }
      else if (fVar5 <= fVar4) {
        fVar4 = fVar5;
      }
      *(float *)(param_1 + 0x1ac) = fVar4 + fVar2;
    }
    param_2[1] = param_2[1] - fVar5;
  }
  fVar2 = *(float *)(param_1 + 0x19c);
  fVar4 = *(float *)(param_1 + 0x1b4);
  fVar5 = ABS(fVar2);
  if (fVar4 < fVar5) {
    fVar3 = fVar5 - fVar4;
    if (fVar2 <= 0.0) {
      if (0.0 <= fVar2) {
        fVar3 = 0.0;
      }
      else {
        fVar3 = fVar4 - fVar5;
      }
    }
    *param_2 = fVar3 + *param_2;
    *(float *)(param_1 + 0x19c) = *(float *)(param_1 + 0x19c) - fVar3;
    *(float *)(param_1 + 0x1a8) = *(float *)(param_1 + 0x1a8) - fVar3;
  }
  fVar2 = *(float *)(param_1 + 0x1a0);
  fVar4 = *(float *)(param_1 + 0x1b8);
  fVar5 = ABS(fVar2);
  if (fVar4 < fVar5) {
    fVar3 = fVar5 - fVar4;
    if (fVar2 <= 0.0) {
      if (0.0 <= fVar2) {
        fVar3 = 0.0;
      }
      else {
        fVar3 = fVar4 - fVar5;
      }
    }
    param_2[1] = fVar3 + param_2[1];
    *(float *)(param_1 + 0x1a0) = *(float *)(param_1 + 0x1a0) - fVar3;
    *(float *)(param_1 + 0x1ac) = *(float *)(param_1 + 0x1ac) - fVar3;
  }
  return;
}



// FUNCTION 14306b190 FUN_14306b190 body=216 status=ok
// SIG undefined FUN_14306b190(void)

void FUN_14306b190(longlong *param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  longlong lVar1;
  
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)param_1[0x23] + 0x148))();
    if (lVar1 != 0) {
      *(undefined4 *)(param_1 + 0x39) = param_5;
      *(undefined4 *)(param_1 + 0x38) = param_3;
      *(undefined4 *)((longlong)param_1 + 0x1c4) = param_4;
      *(float *)(param_1 + 0x35) = *param_2 + *(float *)(param_1 + 0x35);
      *(float *)((longlong)param_1 + 0x1ac) = param_2[1] + *(float *)((longlong)param_1 + 0x1ac);
      *(float *)(param_1 + 0x36) = param_2[2] + *(float *)(param_1 + 0x36);
      *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)(lVar1 + 0x790);
      *(undefined1 *)(param_1 + 0x3a) = param_6;
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
  }
  return;
}



// FUNCTION 14306b270 FUN_14306b270 body=365 status=ok
// SIG undefined FUN_14306b270(void)

void FUN_14306b270(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  plVar3 = (longlong *)FUN_1412996f0();
  if (plVar3 != (longlong *)0x0) {
    fVar7 = *(float *)(param_1 + 0x300);
    if (*(int *)(param_1 + 0x4e8) < *(int *)(param_1 + 0x228)) {
      fVar7 = fVar7 * *(float *)(param_1 + 0x30c);
    }
    plVar4 = (longlong *)FUN_14309ed70(param_1);
    plVar5 = (longlong *)(**(code **)(*plVar4 + 0x948))(plVar4);
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x820))(plVar3,fVar7,*(undefined1 *)((longlong)plVar4 + 0x62c));
    }
    else {
      bVar1 = *(byte *)(plVar4 + 0xd2);
      fVar8 = *(float *)(param_1 + 0x314);
      if (((((int)(uint)bVar1 < (int)plVar4[0xd4]) &&
           (*(longlong *)(plVar4[0xd3] + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
          (*(longlong *)(plVar4[0xd3] + 0x20 + (ulonglong)bVar1 * 0x48) != 0)) &&
         (((fVar6 = (float)FUN_14309ee20(), 0.0 < fVar6 &&
           (bVar1 = *(byte *)(plVar4 + 0xd2), (int)(uint)bVar1 < (int)plVar4[0xd4])) &&
          ((*(longlong *)(plVar4[0xd3] + 8 + (ulonglong)bVar1 * 0x48) != 0 &&
           (lVar2 = *(longlong *)(plVar4[0xd3] + 0x20 + (ulonglong)bVar1 * 0x48), lVar2 != 0)))))) {
        fVar8 = fVar8 * ((*(float *)(lVar2 + 0x19c) - 1.0) * fVar6 + 1.0);
      }
      (**(code **)(*plVar5 + 0x150))
                (plVar5,fVar7,param_2,fVar8,*(undefined1 *)((longlong)plVar4 + 0x62c));
    }
  }
  return;
}



// FUNCTION 14306b3e0 FUN_14306b3e0 body=614 status=ok
// SIG undefined FUN_14306b3e0(void)

void FUN_14306b3e0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_18;
  longlong *plStack_10;
  
  if (param_2 == (longlong *)0x0) {
    lVar2 = *(longlong *)(param_5 + 8);
  }
  else {
    lVar2 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(param_2 + 0x9d) = *(undefined4 *)(param_5 + 4);
      if (*(char *)(param_5 + 2) != *(char *)((longlong)param_2 + 0x4d4)) {
        *(char *)((longlong)param_2 + 0x4d4) = *(char *)(param_5 + 2);
        (**(code **)(*param_2 + 0x260))(param_2);
        if ((*(byte *)((longlong)param_2 + 0x94) & 0x18) == 0x10) {
          (**(code **)(*param_2 + 0x708))(param_2);
        }
      }
      FUN_140a29610(param_2 + 0x9b,param_5 + 8);
      *(undefined4 *)(param_2 + 0xcf) = *(undefined4 *)(param_5 + 0x20);
      if (param_2[0x9e] != 0) {
        FUN_14305ab00();
      }
      *(undefined4 *)(param_2 + 0x8e) = *(undefined4 *)(param_5 + 0x24);
      *(undefined4 *)(param_2 + 0x91) = *(undefined4 *)(param_5 + 0x28);
      param_2[0x8f] = *(longlong *)(param_5 + 0x30);
      if (*(longlong *)(param_5 + 0x38) != 0) {
        lVar3 = FUN_142e0d0b0();
        lVar2 = *(longlong *)(param_5 + 0x38);
        for (lVar5 = lVar2; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
          if (lVar5 == lVar3) {
            if (lVar2 != 0) {
              param_2[0x90] = lVar2;
            }
            break;
          }
        }
      }
      lVar2 = FUN_14309ed70(param_1);
      if ((int)(uint)*(byte *)(lVar2 + 0x690) < *(int *)(lVar2 + 0x6a0)) {
        lVar2 = *(longlong *)
                 (*(longlong *)(lVar2 + 0x698) + 0x30 + (ulonglong)*(byte *)(lVar2 + 0x690) * 0x48);
      }
      else {
        lVar2 = 0;
      }
      param_2[0x93] = lVar2;
      lVar2 = FUN_1412996f0(param_1);
      param_2[0x94] = lVar2;
      if (*(char *)(param_5 + 1) != '\0') {
        *(undefined8 *)((longlong)param_2 + 0x4bc) = *(undefined8 *)(param_5 + 0x18);
      }
      *(undefined4 *)((longlong)param_2 + 0x48c) = *(undefined4 *)(param_5 + 0x40);
      plVar6 = param_2;
    }
    else {
      plVar6 = (longlong *)0x0;
    }
    local_18 = *(undefined8 *)(param_1 + 0x118);
    plStack_10 = param_2;
    FUN_142cabd80(param_1 + 0x928,&local_18);
    FUN_14222b9f0(param_2,param_3,1,0);
    lVar2 = FWeakObjectPtr::Get(param_5 + 0x44);
    if ((lVar2 != 0) && (plVar6 != (longlong *)0x0)) {
      uVar4 = FUN_142e6f710();
      lVar5 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar4);
      if (lVar5 != 0) {
        *(longlong *)(lVar5 + 0x1a0) = lVar2;
      }
    }
    uVar4 = FUN_1429f6c00();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if (lVar2 != 0) {
      *(undefined4 *)(param_1 + 0x950) = *(undefined4 *)(lVar2 + 0x1c0);
    }
    lVar2 = *(longlong *)(param_5 + 8);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14306b650 FUN_14306b650 body=1013 status=ok
// SIG undefined FUN_14306b650(void)

void FUN_14306b650(longlong param_1,longlong *param_2,undefined1 param_3,float param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined2 local_res10;
  undefined1 local_res12;
  char local_res13;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfffffffb;
  *(undefined1 *)(param_1 + 0x29) = param_3;
  if (((longlong *)param_2[0x23] != (longlong *)0x0) &&
     (plVar4 = (longlong *)(**(code **)(*(longlong *)param_2[0x23] + 0x688))(),
     plVar4 != (longlong *)0x0)) {
    uVar5 = FUN_1430a8880();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar4,uVar5);
    cVar2 = (**(code **)(*plVar4 + 0x780))(plVar4);
    if ((cVar2 != '\0') ||
       ((plVar6 != (longlong *)0x0 && (cVar2 = (**(code **)(*plVar6 + 0xd0))(plVar6), cVar2 != '\0')
        ))) {
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 4;
    }
  }
  if ((*(longlong *)(param_1 + 0x38) == 0) || ((*(uint *)(param_1 + 0x58) & 1) != 0)) {
    *(longlong **)(param_1 + 0x38) = param_2;
    uVar10 = *(uint *)(param_1 + 0x58) | 1;
    goto LAB_14306b9b3;
  }
  cVar2 = (**(code **)(*param_2 + 0x440))(param_2,*(undefined8 *)(param_1 + 0x30));
  plVar4 = param_2;
  if (((cVar2 == '\0') && (param_2[0x23] != 0)) &&
     (plVar6 = (longlong *)FUN_14222b250(param_2[0x23],*(undefined8 *)(param_1 + 0x30),0),
     plVar6 != (longlong *)0x0)) {
    plVar4 = plVar6;
  }
  plVar12 = (longlong *)0x0;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  plVar6 = plVar12;
  if (*(char *)(param_1 + 0x28) == '\0') {
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar6 = *(longlong **)(param_1 + 0x20);
    }
    uVar7 = UScrollBox::GetPrivateStaticClass();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
    if ((*(char *)(param_1 + 0x28) != '\0') || (plVar6 != (longlong *)0x0)) goto LAB_14306b7ae;
    plVar8 = plVar12;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar8 = *(longlong **)(param_1 + 0x20);
    }
    if ((-1 < *(char *)((longlong)plVar8 + 0x93)) ||
       (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x4e8))(), iVar3 == 0))
    goto LAB_14306b7ae;
    local_res13 = '\x01';
  }
  else {
LAB_14306b7ae:
    local_res13 = '\0';
  }
  local_res10 = 0x202;
  local_res12 = 0;
  if ((local_res13 != '\0') &&
     (lVar9 = (**(code **)(*param_2 + 0x6d0))(param_2,*(undefined8 *)(param_1 + 0x30),0), lVar9 == 0
     )) {
    lVar9 = FUN_142a0cc80();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar9 = FUN_1423b0a60(param_2,*(undefined8 *)(param_1 + 0x30)), lVar9 != 0)) {
      lVar13 = *(longlong *)(param_1 + 0x38);
      local_res10 = 0;
      *(undefined8 *)(lVar13 + 0x1ec) = *(undefined8 *)(lVar9 + 0x38);
      *(undefined4 *)(lVar13 + 500) = *(undefined4 *)(lVar9 + 0x40);
      lVar13 = *(longlong *)(param_1 + 0x38);
      *(undefined8 *)(lVar13 + 0x1f8) = *(undefined8 *)(lVar9 + 0x44);
      *(undefined4 *)(lVar13 + 0x200) = *(undefined4 *)(lVar9 + 0x4c);
      uVar5 = *(undefined8 *)(lVar9 + 0x30);
    }
  }
  param_4 = param_4 * *(float *)(param_1 + 0x40);
  lVar9 = *(longlong *)(param_1 + 0x38);
  *(ulonglong *)(lVar9 + 0x204) = CONCAT44(param_4,param_4);
  *(float *)(lVar9 + 0x20c) = param_4;
  FUN_142382f60(*(undefined8 *)(param_1 + 0x38),plVar4,&local_res10,uVar5);
  if (*(char *)(param_1 + 0x28) != '\0') {
    FTickFunction::RemovePrerequisite(*(longlong *)(param_1 + 0x38) + 0x30,plVar4,plVar4 + 6);
    FTickFunction::AddPrerequisite
              (plVar4 + 6,*(longlong *)(param_1 + 0x38),*(longlong *)(param_1 + 0x38) + 0x30);
    plVar8 = (longlong *)plVar4[0x23];
    uVar5 = FUN_142e1b450();
    lVar9 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar5);
    if (lVar9 != 0) {
      FTickFunction::AddPrerequisite(*(longlong *)(param_1 + 0x38) + 0x30,lVar9,lVar9 + 0x30);
    }
  }
  FUN_14308c830(param_1,*(undefined8 *)(param_1 + 0x38),param_2);
  puVar11 = *(undefined8 **)(param_1 + 0xb0);
  plVar8 = (longlong *)((longlong)*(int *)(param_1 + 0xb8) & 0x1fffffffffffffff);
  if (puVar11 + *(int *)(param_1 + 0xb8) < puVar11) {
    plVar8 = plVar12;
  }
  if (plVar8 != (longlong *)0x0) {
    do {
      FUN_14308c830(param_1,*puVar11,param_2);
      plVar12 = (longlong *)((longlong)plVar12 + 1);
      puVar11 = puVar11 + 1;
    } while (plVar12 != plVar8);
  }
  if (((plVar6 != (longlong *)0x0) && ((*(byte *)(plVar6 + 0xfd) & 1) != 0)) &&
     (plVar4 = (longlong *)plVar4[0x23], plVar4 != (longlong *)0x0)) {
    uVar5 = UScrollBox::GetPrivateStaticClass();
    uVar5 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
    FUN_142d28bc0(plVar6,uVar5);
  }
  uVar10 = *(uint *)(param_1 + 0x58);
LAB_14306b9b3:
  uVar10 = uVar10 | 2;
  *(uint *)(param_1 + 0x58) = uVar10;
  *(uint *)(param_1 + 0x58) =
       ((uint)*(byte *)((longlong)param_2 + 0x2f2) * 2 ^ uVar10) & 0x80 ^ uVar10;
  FUN_1430873b0(param_1);
  if (*(char *)(param_1 + 0x29) == '\0') {
    lVar9 = *(longlong *)(param_1 + 0x60);
    lVar13 = (longlong)*(int *)(param_1 + 0x68) * 0x60 + lVar9;
    for (; lVar9 != lVar13; lVar9 = lVar9 + 0x60) {
      *(byte *)(lVar9 + 0xd) = *(byte *)(lVar9 + 0xd) & 0xfe;
      if ((((*(uint *)(param_1 + 0x58) & 2) != 0) && ((*(uint *)(lVar9 + 8) >> 5 & 1) != 0)) &&
         ((*(uint *)(param_1 + 0x58) & 4) == 0)) {
        *(byte *)(lVar9 + 0xd) = *(byte *)(lVar9 + 0xd) | 1;
      }
    }
  }
  FUN_1430835e0(param_1);
  return;
}



// FUNCTION 14306ba50 FUN_14306ba50 body=1519 status=ok
// SIG undefined FUN_14306ba50(void)

void FUN_14306ba50(longlong *param_1,char param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  byte bVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  
  if (param_1[0x2a] == 0) {
    return;
  }
  if (param_1[0x94] != 0) {
    if (param_1[0x95] != 0) {
      bVar13 = *(byte *)(param_1 + 0x10) & 1;
      *(undefined1 *)(param_1 + 0xe4) = 1;
      if (bVar13 != 0) {
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
      }
      (**(code **)(*param_1 + 0x9a8))(param_1,1);
      iVar2 = (int)param_1[0xe1];
      plVar12 = (longlong *)0x0;
      if (0 < iVar2) {
        local_res18 = 0;
        puVar1 = (ulonglong *)(param_1 + 0xe0);
        plVar8 = (longlong *)*puVar1;
        if (*(longlong *)(*plVar8 + 0x30) == 0) {
          plVar11 = plVar12;
          if (param_1[0x94] != 0) {
            plVar11 = (longlong *)param_1[0x95];
          }
          puVar6 = (undefined8 *)
                   (**(code **)(*plVar11 + 0xc0))
                             (plVar11,local_res20,*(undefined1 *)((longlong)param_1 + 0x62c));
          *(undefined8 *)(*plVar8 + 0x30) = *puVar6;
          iVar2 = (int)param_1[0xe1];
        }
        local_res18 = 0;
        if ((iVar2 == 1) && (*(char *)((longlong)param_1 + 0x62c) == '\0')) {
          plVar8 = plVar12;
          if (param_1[0x94] != 0) {
            plVar8 = (longlong *)param_1[0x95];
          }
          cVar4 = (**(code **)(*plVar8 + 0xd8))(plVar8,&local_res18);
          if ((cVar4 != '\0') &&
             (lVar7 = FUN_1430714d0(param_1,*(undefined8 *)*puVar1,1,0), lVar7 != 0)) {
            *(undefined8 *)(lVar7 + 0x30) = local_res18;
            iVar2 = (int)param_1[0xe1];
            *(int *)(param_1 + 0xe1) = iVar2 + 1;
            if (*(int *)((longlong)param_1 + 0x70c) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar1,iVar2);
            }
            *(longlong *)(*puVar1 + (longlong)iVar2 * 8) = lVar7;
          }
        }
        if (((param_2 != '\0') && ((int)param_1[0xe3] == 0)) &&
           (((char)param_1[0x25] == '\x03' ||
            ((((longlong *)param_1[0x2a] != (longlong *)0x0 &&
              (plVar8 = (longlong *)(**(code **)(*(longlong *)param_1[0x2a] + 0x668))(),
              plVar8 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar8 + 0x768))(plVar8), cVar4 != '\0')))))) {
          plVar8 = plVar12;
          if (param_1[0x94] != 0) {
            plVar8 = (longlong *)param_1[0x95];
          }
          lVar7 = (**(code **)(*plVar8 + 0xb8))(plVar8,1);
          if (lVar7 != 0) {
            plVar8 = param_1 + 0xe2;
            if (*(int *)((longlong)param_1 + 0x71c) < (int)param_1[0xe1]) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8);
            }
            puVar6 = (undefined8 *)*puVar1;
            plVar11 = (longlong *)((longlong)(int)param_1[0xe1] & 0x1fffffffffffffff);
            if (puVar6 + (int)param_1[0xe1] < puVar6) {
              plVar11 = plVar12;
            }
            plVar14 = plVar12;
            if (plVar11 != (longlong *)0x0) {
              do {
                uVar9 = FUN_1430714d0(param_1,*puVar6,(char)param_1[0xe3],1);
                iVar2 = (int)param_1[0xe3];
                *(int *)(param_1 + 0xe3) = iVar2 + 1;
                if (*(int *)((longlong)param_1 + 0x71c) < iVar2 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar2);
                }
                puVar6 = puVar6 + 1;
                plVar14 = (longlong *)((longlong)plVar14 + 1);
                *(undefined8 *)(*plVar8 + (longlong)iVar2 * 8) = uVar9;
              } while (plVar14 != plVar11);
            }
            if (0 < (int)param_1[0xe3]) {
              lVar7 = param_1[0x113];
              lVar10 = (longlong)(int)param_1[0x114] * 0x60 + lVar7;
              for (; lVar7 != lVar10; lVar7 = lVar7 + 0x60) {
                FUN_143088220(param_1,lVar7);
              }
              *(undefined4 *)(param_1 + 0x114) = 0;
              if (*(int *)((longlong)param_1 + 0x8a4) != 0) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeTo(param_1 + 0x113,0);
              }
            }
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0xa4,0);
          }
        }
      }
      plVar8 = plVar12;
      if (param_1[0x94] != 0) {
        plVar8 = (longlong *)param_1[0x95];
      }
      lVar7 = (**(code **)(*plVar8 + 0xb8))(plVar8,0);
      if (lVar7 != 0) {
        plVar8 = plVar12;
        if (param_1[0x94] != 0) {
          plVar8 = (longlong *)param_1[0x95];
        }
        uVar15 = (**(code **)(*plVar8 + 200))(plVar8,*(undefined1 *)((longlong)param_1 + 0x62c),0);
        puVar6 = (undefined8 *)param_1[0xe0];
        plVar8 = (longlong *)((longlong)(int)param_1[0xe1] & 0x1fffffffffffffff);
        if (puVar6 + (int)param_1[0xe1] < puVar6) {
          plVar8 = plVar12;
        }
        plVar11 = plVar12;
        if (plVar8 != (longlong *)0x0) {
          do {
            (**(code **)(*(longlong *)*puVar6 + 0x278))((longlong *)*puVar6,lVar7,0,uVar15);
            plVar11 = (longlong *)((longlong)plVar11 + 1);
            puVar6 = puVar6 + 1;
          } while (plVar11 != plVar8);
        }
      }
      if ((param_2 != '\0') && (0 < (int)param_1[0xe3])) {
        FUN_14308b8d0(param_1,1);
        plVar8 = plVar12;
        if (param_1[0x94] != 0) {
          plVar8 = (longlong *)param_1[0x95];
        }
        lVar7 = (**(code **)(*plVar8 + 0xb8))(plVar8,1);
        if (lVar7 != 0) {
          if ((char)param_1[0x25] == '\x03') {
            uVar9 = 0;
          }
          else if ((((longlong *)param_1[0x2a] == (longlong *)0x0) ||
                   (plVar8 = (longlong *)(**(code **)(*(longlong *)param_1[0x2a] + 0x668))(),
                   plVar8 == (longlong *)0x0)) ||
                  (cVar4 = (**(code **)(*plVar8 + 0x768))(plVar8), cVar4 == '\0')) {
            uVar9 = 1;
          }
          else {
            uVar9 = 0;
          }
          plVar8 = plVar12;
          if (param_1[0x94] != 0) {
            plVar8 = (longlong *)param_1[0x95];
          }
          uVar15 = (**(code **)(*plVar8 + 200))(plVar8,*(undefined1 *)((longlong)param_1 + 0x62c),1)
          ;
          puVar6 = (undefined8 *)param_1[0xe2];
          plVar8 = (longlong *)((longlong)(int)param_1[0xe3] & 0x1fffffffffffffff);
          if (puVar6 + (int)param_1[0xe3] < puVar6) {
            plVar8 = plVar12;
          }
          plVar11 = plVar12;
          if (plVar8 != (longlong *)0x0) {
            do {
              (**(code **)(*(longlong *)*puVar6 + 0x278))((longlong *)*puVar6,lVar7,uVar9,uVar15);
              plVar11 = (longlong *)((longlong)plVar11 + 1);
              puVar6 = puVar6 + 1;
            } while (plVar11 != plVar8);
          }
        }
      }
      lVar10 = param_1[0xd3];
      lVar7 = lVar10 + (longlong)(int)param_1[0xd4] * 0x48;
      for (; lVar10 != lVar7; lVar10 = lVar10 + 0x48) {
        if (*(longlong **)(lVar10 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar10 + 8) + 0x4a8))();
        }
      }
      if (bVar13 != 0) {
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
      }
      FUN_14306fa20(param_1);
      plVar8 = (longlong *)param_1[0xe0];
      plVar11 = (longlong *)((longlong)(int)param_1[0xe1] & 0x1fffffffffffffff);
      if (plVar8 + (int)param_1[0xe1] < plVar8) {
        plVar11 = plVar12;
      }
      plVar14 = plVar12;
      if (plVar11 != (longlong *)0x0) {
        do {
          plVar3 = (longlong *)*plVar8;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x288))(plVar3,1);
          }
          plVar8 = plVar8 + 1;
          plVar14 = (longlong *)((longlong)plVar14 + 1);
        } while (plVar14 != plVar11);
      }
      if (param_2 != '\0') {
        plVar8 = (longlong *)param_1[0xe2];
        plVar11 = (longlong *)((longlong)(int)param_1[0xe3] & 0x1fffffffffffffff);
        if (plVar8 + (int)param_1[0xe3] < plVar8) {
          plVar11 = plVar12;
        }
        if (plVar11 != (longlong *)0x0) {
          do {
            plVar14 = (longlong *)*plVar8;
            if (plVar14 != (longlong *)0x0) {
              (**(code **)(*plVar14 + 0x288))(plVar14,1);
            }
            plVar8 = plVar8 + 1;
            plVar12 = (longlong *)((longlong)plVar12 + 1);
          } while (plVar12 != plVar11);
        }
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9a,0);
      uVar5 = (**(code **)(*param_1 + 0xad0))(param_1);
      AActor::SetActorTickEnabled(param_1,uVar5);
      return;
    }
    return;
  }
  return;
}



// FUNCTION 14306c040 FUN_14306c040 body=148 status=ok
// SIG undefined FUN_14306c040(void)

undefined8 FUN_14306c040(longlong param_1,byte param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x7f8) != DAT_146b47938) &&
     ((int)(uint)param_2 < *(int *)(param_1 + 0x6b8))) {
    lVar3 = *(longlong *)(param_1 + 0x6b0);
    if (*(longlong *)(param_1 + 0x6b0) == 0) {
      lVar3 = param_1 + 0x6a8;
    }
    if ((*(char *)(param_1 + 0x6cc) == '\0') &&
       ((int)(uint)*(byte *)(lVar3 + (ulonglong)param_2) < *(int *)(param_1 + 0x6a0))) {
      plVar1 = *(longlong **)
                (*(longlong *)(param_1 + 0x698) + 8 +
                (ulonglong)*(byte *)(lVar3 + (ulonglong)param_2) * 0x48);
      if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x7f8) == DAT_146b479a0)) {
        cVar2 = (**(code **)(*plVar1 + 0x410))();
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14306c0e0 FUN_14306c0e0 body=56 status=ok
// SIG undefined FUN_14306c0e0(void)

undefined8 FUN_14306c0e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FOutputDevice::CanBeUsedOnAnyThread();
  if ((cVar1 == '\0') &&
     ((*(int *)(param_1 + 0x2c8) < 2 ||
      ((int)(uint)*(byte *)(param_1 + 0x4ec) < *(int *)(param_1 + 0x2c8))))) {
    return 0;
  }
  return 1;
}



// FUNCTION 14306c120 FUN_14306c120 body=86 status=ok
// SIG undefined FUN_14306c120(void)

void FUN_14306c120(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  if (0 < *(int *)(param_1 + 0x50)) {
    plVar3 = (longlong *)IStreamingManager::Get();
    cVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
    if (cVar2 != '\0') {
      uVar1 = IStreamingManager::Get();
      plVar3 = (longlong *)FVoicePacketImpl::GetSampleCounter(uVar1);
      (**(code **)(*plVar3 + 0x108))(plVar3,param_1);
    }
  }
  FUN_143070170(param_1);
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 14306c180 FUN_14306c180 body=1087 status=ok
// SIG undefined FUN_14306c180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14306c180(longlong *param_1)

{
  float fVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar8 = param_1[0x23];
  if (lVar8 != 0) {
    lVar5 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14306c202;
  }
  lVar8 = 0;
LAB_14306c202:
  bVar3 = *(byte *)(param_1 + 0x12);
  param_1[0xce] = lVar8;
  if ((bVar3 & 1) == 0) {
    if ((bVar3 & 0x10) == 0) {
      *(byte *)(param_1 + 0x12) = bVar3 | 0x10;
      iVar4 = FUN_142235230(param_1);
      if (iVar4 < 3) {
        uStack_d0 = 0;
        local_d8 = FUN_14306e600;
        uVar6 = AActor::GetWorldTimerManager(param_1);
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar7 + 1,param_1);
          *(undefined4 *)(plVar7 + 2) = (undefined4)local_d8;
          *(undefined4 *)((longlong)plVar7 + 0x14) = local_d8._4_4_;
          *(undefined4 *)(plVar7 + 3) = uStack_d0;
          *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_cc;
          lVar8 = FDelegateHandle::GenerateNewID();
          plVar7[5] = lVar8;
          *plVar7 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_c8 = 0;
        local_c0 = 0;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x30))(plVar7,&local_c8);
        }
        FWeakObjectPtr::operator=(local_b8,0);
        local_e0 = 0xbf800000;
        local_b0 = 0;
        local_78 = (longlong *)0x0;
        local_68 = 0;
        local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
        local_e8 = 0;
        FUN_142880850(uVar6,param_1 + 0xb4,&local_c8,0x3c23d70a);
        if (local_68 != 0) {
          plVar9 = local_98;
          if (local_78 != (longlong *)0x0) {
            plVar9 = local_78;
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9,0);
          }
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0);
          lVar8 = FMemory::Realloc(plVar7,0,0);
          if (lVar8 != 0) {
            FMemory::Free(lVar8);
          }
        }
      }
    }
  }
  else if (((bVar3 & 0x10) != 0) || ((*(byte *)(param_1 + 0x8d) & 8) != 0)) {
    *(byte *)(param_1 + 0x12) = bVar3 & 0xfe;
  }
  FUN_142223710(param_1);
  FUN_142ddc830(param_1,param_1[0x2a],1);
  bVar3 = *(byte *)(param_1 + 0x8d);
  if ((bVar3 & 1) != 0) {
    FUN_14307e770(param_1,param_1[0x2a]);
    bVar3 = *(byte *)(param_1 + 0x8d);
  }
  if ((bVar3 & 2) != 0) {
    FUN_142ddcaf0(param_1,param_1[0x2a],1);
  }
  *(uint *)((longlong)param_1 + 0x504) = *(uint *)(param_1 + 0x9a) ^ 0x80000000;
  if ((((char)param_1[0x25] != '\x03') &&
      (fVar1 = *(float *)((longlong)param_1 + 0xcc), 0.0 < fVar1)) &&
     ((*(byte *)(param_1 + 0x12) & 1) != 0)) {
    uStack_d0 = 0;
    local_d8 = (code *)&LAB_142221650;
    uVar6 = AActor::GetWorldTimerManager(param_1);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_d8;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_d8._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_d0;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_cc;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_c8 = 0;
    local_c0 = 0;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_e0 = 0xbf800000;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_e8 = 0;
    FUN_142880850(uVar6,param_1 + 0x30,&local_c8,fVar1);
    if (local_68 != 0) {
      plVar9 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar9 = local_78;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      lVar8 = FMemory::Realloc(plVar7,0,0);
      if (lVar8 != 0) {
        FMemory::Free(lVar8);
      }
    }
  }
  if (((char)param_1[0x25] == '\x03') && (*(char *)((longlong)param_1 + 0x4d4) != '\0')) {
    (**(code **)(*param_1 + 0x708))(param_1);
  }
  lVar8 = FUN_142df3580(param_1);
  param_1[0xb7] = lVar8;
  return;
}



// FUNCTION 14306c5c0 FUN_14306c5c0 body=518 status=ok
// SIG undefined FUN_14306c5c0(void)

void FUN_14306c5c0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 local_res8 [2];
  
  if ((char)param_1[0x25] != '\x03') {
    FUN_142dac710(param_1 + 0xb4,param_1);
  }
  FUN_142223710(param_1);
  if (0 < (int)param_1[0xe6]) {
    plVar6 = (longlong *)param_1[0xe0];
    plVar5 = plVar6 + (int)param_1[0xe1];
    for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
      lVar4 = *plVar6;
      if (lVar4 != 0) {
        plVar5 = *(longlong **)(lVar4 + 0x38);
        if ((plVar5 != (longlong *)0x0) && ((*(byte *)(lVar4 + 0x58) & 1) == 0)) {
          lVar8 = plVar5[0xdf];
          iVar2 = (**(code **)(*plVar5 + 0x6c8))();
          iVar7 = 0;
          if (iVar2 < (int)lVar8) {
            lVar8 = (*(longlong **)(lVar4 + 0x38))[0xdf];
            iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x6c8))();
            iVar2 = (int)lVar8 - iVar2;
            iVar7 = 0;
            if (-1 < iVar2) {
              iVar7 = iVar2;
            }
          }
          lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x560))
                            (*(longlong **)(lVar4 + 0x38),iVar7);
          if (lVar4 != 0) {
            lVar4 = param_1[0xe5];
            lVar8 = (longlong)(int)param_1[0xe6] * 0xa8 + lVar4;
            if (lVar4 != lVar8) {
              puVar9 = (undefined8 *)(lVar4 + 8);
              do {
                local_res8[0] = 0;
                FUN_14307b150(param_1,*puVar9,local_res8);
                lVar4 = lVar4 + 0xa8;
                puVar9 = puVar9 + 0x15;
              } while (lVar4 != lVar8);
            }
          }
        }
        break;
      }
    }
  }
  uVar3 = FUN_1430a76d0();
  lVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar3);
  param_1[0xc1] = lVar4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x96,0);
  if (((char)param_1[0xe4] == '\0') && (*(char *)((longlong)param_1 + 0x7b9) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_14308ad00(param_1,uVar3);
  if (((char)param_1[0x25] != '\x03') && ((*(byte *)(param_1 + 0xfd) & 4) != 0)) {
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfb;
    FUN_143082330(param_1);
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x900))(param_1,0,0);
  if (plVar5 != (longlong *)0x0) {
    bVar1 = (**(code **)(*plVar5 + 0x440))(plVar5,param_1[0x119]);
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xf7;
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | (bVar1 & 1) << 3;
    bVar1 = (**(code **)(*plVar5 + 0x440))(plVar5,param_1[0x11a]);
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xef;
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | (bVar1 & 1) << 4;
  }
  return;
}



// FUNCTION 14306c7d0 FUN_14306c7d0 body=231 status=ok
// SIG undefined FUN_14306c7d0(void)

void FUN_14306c7d0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  float fVar4;
  undefined8 local_res8;
  undefined1 *local_18;
  undefined8 uStack_10;
  
  FUN_14303e730();
  fVar4 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x2cc) * 0.017453292);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x1dc);
  *(float *)(param_1 + 0x2f8) = fVar4;
  if (*(char *)(param_1 + 0x2dc) == '\0') {
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = &LAB_143068bf8;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UWalkingProjectileMovementComponent::OnHit",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (*(longlong *)(param_1 + 0x278) + 0x280,param_1,&local_18,local_res8);
  }
  return;
}



// FUNCTION 14306c8c0 FUN_14306c8c0 body=294 status=ok
// SIG undefined FUN_14306c8c0(void)

void FUN_14306c8c0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  FUN_142330a70();
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 != 3) {
    return;
  }
  lVar4 = param_1[0x24];
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  if (lVar4 != 0) {
    lVar4 = param_1[0x24];
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    cVar1 = UWorld::IsGameWorld(lVar4);
    if (cVar1 != '\0') {
      lVar4 = param_1[0x35];
      if (lVar4 == 0) {
        lVar4 = param_1[0x23];
        param_1[0x35] = lVar4;
        if (lVar4 == 0) goto LAB_14306c9c0;
      }
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      puVar5 = (undefined8 *)FName::FName(local_res10,L"OnGivenTo",1);
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = *puVar5;
      local_18 = local_28;
      local_14 = local_24;
      local_10 = local_20;
      FUN_1406a5aa0(lVar4 + 0x4c0,&local_18);
    }
  }
LAB_14306c9c0:
  iVar3 = (**(code **)(*param_1 + 0x448))(param_1);
  iVar3 = iVar3 - (int)param_1[0x38];
  iVar2 = 0;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  *(int *)(param_1 + 0x39) = iVar2;
  return;
}



// FUNCTION 14306c9f0 FUN_14306c9f0 body=1166 status=ok
// SIG undefined FUN_14306c9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14306c9f0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  int local_d8;
  int local_d4;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_b0;
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
  FUN_143099e90();
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar6 = FUN_1423407b0(param_1), lVar6 != 0)) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    cVar5 = UWorld::IsGameWorld(lVar6);
    if (cVar5 != '\0') {
      fVar15 = *(float *)(param_1 + 0x4d0);
      if (0.0 < fVar15) {
        uStack_c0 = uStack_c0 & 0xffffffff00000000;
        local_c8 = FUN_14307ea10;
        lVar6 = *(longlong *)(param_1 + 0x120);
        if (lVar6 == 0) {
          lVar6 = FUN_1423407b0(param_1);
          fVar15 = *(float *)(param_1 + 0x4d0);
        }
        if (*(longlong *)(lVar6 + 400) == 0) {
          uVar9 = *(undefined8 *)(lVar6 + 0x3f8);
        }
        else {
          uVar9 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
        }
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar7 + 1,param_1);
          *(int *)(plVar7 + 2) = (int)local_c8;
          *(int *)((longlong)plVar7 + 0x14) = local_c8._4_4_;
          *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_c0;
          *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_c0._4_4_;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar7[5] = lVar6;
          *plVar7 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x30))(plVar7,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_e0 = 0xbf800000;
        local_e8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar9,param_1 + 0x4d8,&local_a8,fVar15);
        if (local_48 != 0) {
          plVar14 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar14 = local_58;
          }
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x10))(plVar14,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0);
          lVar6 = FMemory::Realloc(plVar7,0,0);
          if (lVar6 != 0) {
            FMemory::Free(lVar6);
          }
        }
      }
      else {
        FUN_14307ea10(param_1);
      }
      if ((1 < *(int *)(param_1 + 0x2c8)) &&
         (plVar7 = (longlong *)FUN_14309ed70(param_1), plVar7 != (longlong *)0x0)) {
        FWeakObjectPtr::operator=(&local_c8,0);
        uStack_c0 = 0;
        puVar8 = (undefined8 *)FName::FName(&local_b0,L"OnGivenTo",1);
        FWeakObjectPtr::operator=(&local_c8,param_1);
        local_d0 = *puVar8;
        local_d8 = (int)local_c8;
        local_d4 = local_c8._4_4_;
        uStack_c0 = local_d0;
        FUN_1406a5aa0(plVar7 + 0x98,&local_d8);
        uVar9 = UAnimMontage::GetPrivateStaticClass();
        lVar6 = (**(code **)(*plVar7 + 0x7f8))(plVar7,uVar9,*(undefined1 *)(param_1 + 0x180));
        if (lVar6 != 0) {
          lVar10 = UAnimMontage::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            pwVar11 = _guard_xfg_dispatch_icall_nop
                                (L"&UWeaponFireComponent::OnReloadAmmoGiven",L"::");
            pwVar4 = (wchar_t *)0x0;
            while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
              pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
              pwVar4 = pwVar3;
            }
            FName::FName(&local_b0,pwVar4 + 2,1);
            plVar7 = (longlong *)(lVar6 + 0x1b0);
            FWeakObjectPtr::operator=(&local_d8,0);
            local_d0 = 0;
            FWeakObjectPtr::operator=(&local_d8,param_1);
            local_d0 = local_b0;
            local_b8 = 0;
            if ((local_b0 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_d8), lVar10 != 0)) {
              UObject::FindFunction(lVar10,local_d0);
            }
            piVar12 = (int *)*plVar7;
            iVar1 = *(int *)(lVar6 + 0x1b8);
            for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar1 * 4; piVar13 = piVar13 + 4)
            {
              if (((*piVar13 == local_d8) && (piVar13[1] == local_d4)) ||
                 ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
                  (cVar5 = FWeakObjectPtr::IsValid(&local_d8), cVar5 == '\0')))) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if ((bVar2) && (*(longlong *)(piVar13 + 2) == local_d0)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (bVar2) {
                if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_14306ce25;
                break;
              }
            }
            iVar1 = *(int *)(lVar6 + 0x1b8);
            *(int *)(lVar6 + 0x1b8) = iVar1 + 1;
            if (*(int *)(lVar6 + 0x1bc) < iVar1 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
            }
            piVar12 = (int *)((longlong)iVar1 * 0x10 + *plVar7);
            *piVar12 = local_d8;
            piVar12[1] = local_d4;
            *(longlong *)(piVar12 + 2) = local_d0;
LAB_14306ce25:
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
          }
        }
      }
      if ((*(char *)(param_1 + 600) != '\0') && (0 < *(int *)(param_1 + 0x250))) {
        *(char *)(param_1 + 0x4ed) = (char)*(int *)(param_1 + 0x250) + -1;
      }
    }
  }
  return;
}



// FUNCTION 14306ce80 FUN_14306ce80 body=93 status=ok
// SIG undefined FUN_14306ce80(void)

void FUN_14306ce80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    local_res10[0] = param_2;
    FUN_142dafbc0(param_1 + 0x800,local_res10);
    cVar1 = FUN_1407c3030(param_1 + 0x800);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x129) == '\x02')) {
      FUN_14223e980(param_1,1);
    }
  }
  return;
}



// FUNCTION 14306cee0 FUN_14306cee0 body=38 status=ok
// SIG undefined FUN_14306cee0(void)

void FUN_14306cee0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_1430b3e70(local_18,param_2,&local_18);
  return;
}



// FUNCTION 14306cf10 FUN_14306cf10 body=106 status=ok
// SIG undefined FUN_14306cf10(void)

void FUN_14306cf10(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = FUN_142a0cc80();
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
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (param_1 + 0xc0,lVar1 + 0x868);
    }
  }
  return;
}



// FUNCTION 14306cf90 FUN_14306cf90 body=109 status=ok
// SIG undefined FUN_14306cf90(void)

float FUN_14306cf90(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  float fVar5;
  undefined8 local_res8 [4];
  
  fVar1 = *(float *)(param_1 + 0x910);
  plVar4 = (longlong *)FUN_1412996f0();
  if ((plVar4 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar4 + 0x780))(plVar4), cVar3 != '\0')
     ) {
    return fVar1;
  }
  uVar2 = FUN_1412996f0(param_1);
  local_res8[0] = 0xffffffffffffffff;
  fVar5 = (float)FUN_142de77e0(param_1 + 0x750,uVar2,0,local_res8);
  return fVar1 * fVar5;
}



// FUNCTION 14306d000 FUN_14306d000 body=1416 status=ok
// SIG undefined FUN_14306d000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306d000(longlong *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float param_7,undefined4 param_8,undefined4 param_9,float *param_10
                  ,float *param_11)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar15;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [20];
  float local_a4;
  undefined1 local_98 [12];
  undefined8 local_8c;
  float local_84;
  float local_80;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  *param_3 = 1.0;
  *(ulonglong *)param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  param_2[2] = DAT_1468b5d98;
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (*param_5 <= -DAT_14678c800) {
    return;
  }
  if (DAT_14678c800 <= *param_5) {
    return;
  }
  if (param_5[1] <= -DAT_14678c804) {
    return;
  }
  if (DAT_14678c804 <= param_5[1]) {
    return;
  }
  if (param_5[2] <= -DAT_14678c808) {
    return;
  }
  if (DAT_14678c808 <= param_5[2]) {
    return;
  }
  if (*param_6 <= -DAT_14678c800) {
    return;
  }
  if (DAT_14678c800 <= *param_6) {
    return;
  }
  if (param_6[1] <= -DAT_14678c804) {
    return;
  }
  if (DAT_14678c804 <= param_6[1]) {
    return;
  }
  if (param_6[2] <= -DAT_14678c808) {
    return;
  }
  if (DAT_14678c808 <= param_6[2]) {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    return;
  }
  fVar4 = (float)FUN_1428cc5b0(lVar2);
  if (((ABS(*param_11) <= 0.0001) && (ABS(param_11[1]) <= 0.0001)) && (ABS(param_11[2]) <= 0.0001))
  goto LAB_14306d2f0;
  local_e8 = *param_5 - *param_4;
  fStack_e4 = param_5[1] - param_4[1];
  fStack_e0 = param_5[2] - param_4[2];
  fVar7 = fStack_e4 * fStack_e4 + local_e8 * local_e8;
  if (fVar7 == 1.0) {
    if (fStack_e0 != 0.0) {
LAB_14306d29b:
      fStack_e0 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar7) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar5._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      local_e8 = local_e8 * fVar8;
      fStack_e4 = fStack_e4 * fVar8;
      goto LAB_14306d29b;
    }
    local_e8 = DAT_1468b5d90;
    fStack_e0 = DAT_1468b5d98;
    fStack_e4 = DAT_1468b5d94;
  }
  uVar3 = FVector::Rotation(&local_e8,local_c8);
  FRotator::RotateVector(uVar3,&local_d8,param_11);
  *param_5 = local_d8 + *param_5;
  param_5[1] = fStack_d4 + param_5[1];
  param_5[2] = fStack_d0 + param_5[2];
LAB_14306d2f0:
  FUN_1424b51e0(local_b8);
  FUN_1424d11a0(local_b8,param_4,param_5,fVar4,CONCAT44(uVar15,param_8),param_9);
  if (param_7 <= 0.0) {
    param_7 = 3.4028235e+38;
  }
  local_a4 = param_7;
  FUN_1424be650(local_b8,local_98,param_4,param_5,param_6);
  fVar7 = param_10[1];
  fVar8 = *param_10;
  uVar3 = *(undefined8 *)param_10;
  *(undefined8 *)param_2 = local_8c;
  fVar9 = param_10[2];
  param_2[2] = local_84;
  auVar5._8_4_ = fVar9;
  auVar5._0_8_ = uVar3;
  auVar5._12_4_ = 0;
  fVar11 = (float)DAT_146b47810;
  fVar12 = DAT_146b47810._4_4_;
  fVar13 = DAT_146b47810._8_4_;
  fVar14 = DAT_146b47810._12_4_;
  auVar5 = divps(auVar5,_DAT_146b47810);
  fVar8 = fVar8 - (float)(int)auVar5._0_4_ * fVar11;
  fVar7 = fVar7 - (float)(int)auVar5._4_4_ * fVar12;
  fVar9 = fVar9 - (float)(int)auVar5._8_4_ * fVar13;
  fVar10 = 0.0 - (float)(int)auVar5._12_4_ * fVar14;
  fVar8 = (float)(((uint)(fVar8 + fVar11) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                 (uint)(fVar8 + fVar11));
  fVar7 = (float)(((uint)(fVar7 + fVar12) ^ (uint)fVar7) & -(uint)(0.0 <= fVar7) ^
                 (uint)(fVar7 + fVar12));
  fVar9 = (float)(((uint)(fVar9 + fVar13) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                 (uint)(fVar9 + fVar13));
  fVar10 = (float)(((uint)(fVar10 + fVar14) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                  (uint)(fVar10 + fVar14));
  auVar6._4_4_ = -(uint)(0.0001 < (float)((((uint)(fVar7 - fVar12) ^ (uint)fVar7) &
                                           -(uint)(fRam0000000146b47804 < fVar7) ^ (uint)fVar7) &
                                         uRam0000000146b47864));
  auVar6._0_4_ = -(uint)(0.0001 < (float)((((uint)(fVar8 - fVar11) ^ (uint)fVar8) &
                                           -(uint)(_DAT_146b47800 < fVar8) ^ (uint)fVar8) &
                                         _DAT_146b47860));
  auVar6._8_4_ = -(uint)(0.0001 < (float)((((uint)(fVar9 - fVar13) ^ (uint)fVar9) &
                                           -(uint)(fRam0000000146b47808 < fVar9) ^ (uint)fVar9) &
                                         uRam0000000146b47868));
  auVar6._12_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar10 - fVar14) ^ (uint)fVar10) &
                                 -(uint)(fRam0000000146b4780c < fVar10) ^ (uint)fVar10) &
                               uRam0000000146b4786c));
  iVar1 = movmskps(local_84,auVar6);
  if (iVar1 != 0) {
    fVar14 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
    uVar3 = FVector::Rotation(param_2,local_c8);
    FRotator::Quaternion(uVar3,&local_e8);
    FRotator::Quaternion(param_10,&local_d8);
    fVar9 = fStack_cc * local_e8 * _DAT_146b478b0 + fStack_dc * local_d8 +
            fStack_d0 * fStack_e4 * _DAT_146b478a0 + fStack_d4 * fStack_e0 * _DAT_146b47890;
    fVar11 = fStack_d0 * local_e8 * fRam0000000146b478b4 + fStack_dc * fStack_d4 +
             fStack_cc * fStack_e4 * fRam0000000146b478a4 +
             local_d8 * fStack_e0 * fRam0000000146b47894;
    fVar12 = fStack_d4 * local_e8 * fRam0000000146b478b8 + fStack_dc * fStack_d0 +
             local_d8 * fStack_e4 * fRam0000000146b478a8 +
             fStack_cc * fStack_e0 * fRam0000000146b47898;
    fVar13 = local_d8 * local_e8 * fRam0000000146b478bc + fStack_dc * fStack_cc +
             fStack_d4 * fStack_e4 * fRam0000000146b478ac +
             fStack_d0 * fStack_e0 * fRam0000000146b4789c;
    fVar7 = fVar12 + fVar12;
    fVar8 = -fVar11;
    fVar8 = fVar8 + fVar8;
    *(ulonglong *)param_2 =
         CONCAT44((fVar13 * fVar7 - fVar9 * fVar8) * fVar14,
                  ((fVar11 * fVar8 - fVar12 * fVar7) + 1.0) * fVar14);
    param_2[2] = (fVar13 * fVar8 + fVar9 * fVar7) * fVar14;
  }
  *param_3 = local_80 / fVar4;
  return;
}



// FUNCTION 14306d590 FUN_14306d590 body=420 status=ok
// SIG undefined FUN_14306d590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306d590(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (param_4 == (longlong *)0x0) {
    *param_2 = 0x3f800000;
    *param_1 = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
  }
  else {
    local_58 = *param_9;
    local_50 = *(undefined4 *)(param_9 + 1);
    local_48 = *param_8;
    local_40 = *(undefined4 *)(param_8 + 1);
    puVar2 = (undefined8 *)(**(code **)(*param_4 + 0x308))(param_4,local_18);
    local_38 = *puVar2;
    local_30 = *(undefined4 *)(puVar2 + 1);
    lVar1 = param_4[0x2d];
    if (lVar1 == 0) {
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      local_68 = *(undefined8 *)(lVar1 + 0x220);
      local_60 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_20 = local_60;
    local_60 = *(undefined4 *)(param_3 + 1);
    local_28 = local_68;
    local_68 = *param_3;
    FUN_14306d000(param_4,param_1,param_2,&local_68,&local_28,&local_38,param_5,param_6,param_7,
                  &local_48,&local_58);
  }
  return;
}



// FUNCTION 14306d740 FUN_14306d740 body=1584 status=ok
// SIG undefined FUN_14306d740(void)

undefined8 *
FUN_14306d740(undefined8 *param_1,float param_2,undefined8 param_3,float *param_4,float param_5,
             float param_6)

{
  undefined4 uVar1;
  float fVar2;
  float fVar4;
  undefined8 uVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_108;
  
  param_5 = param_5 * 0.017453292;
  param_6 = param_6 * 0.017453292;
  fVar15 = 0.0;
  if (0.0001 <= param_5) {
    if (0.0001 <= param_6) {
      if (3.1414928 <= param_6) {
        param_6 = 3.1414928;
      }
      fVar15 = 0.0001;
      if ((0.0001 <= param_5) && (fVar15 = param_5, 3.1414928 <= param_5)) {
        fVar15 = 3.1414928;
      }
      fVar13 = _guard_xfg_dispatch_icall_nop(param_6 * 0.5);
      fVar15 = _guard_xfg_dispatch_icall_nop(fVar15 * 0.5);
      uVar3 = __libm_sse2_sincosf_(param_2 * 6.2831855);
      fVar2 = (float)((ulonglong)uVar3 >> 0x20);
      uVar1 = FGenericPlatformMath::Atan2(CONCAT44(fVar2,(float)uVar3 * fVar15),fVar2 * fVar13);
      uVar3 = __libm_sse2_sincosf_(uVar1);
      fVar2 = (float)uVar3;
      fVar4 = (float)((ulonglong)uVar3 >> 0x20);
      fVar10 = (fVar15 * fVar15 * fVar13 * fVar13) /
               (fVar4 * fVar4 * fVar15 * fVar15 + fVar2 * fVar2 * fVar13 * fVar13);
      fVar14 = 1.0 - (fVar10 + fVar10);
      fVar15 = SQRT(1.0 - fVar10) + SQRT(1.0 - fVar10);
      fVar13 = SQRT(fVar10) * fVar4 * fVar15;
      fVar15 = SQRT(fVar10) * fVar2 * fVar15;
      goto LAB_14306d97a;
    }
  }
  else if (param_6 < 0.0001) {
    fVar15 = param_4[2];
    *param_1 = *(undefined8 *)param_4;
    *(float *)(param_1 + 1) = fVar15;
    return param_1;
  }
  if (0.0001 <= param_6) {
    uVar3 = __libm_sse2_sincosf_((param_2 - 0.5) * param_6);
    fVar15 = (float)uVar3;
    fVar14 = (float)((ulonglong)uVar3 >> 0x20);
    fVar13 = 0.0;
  }
  else {
    param_5 = (param_2 - 0.5) * param_5;
    if (ABS(param_5) < 0.0001) {
      param_5 = 0.001;
    }
    uVar3 = __libm_sse2_sincosf_(param_5);
    fVar13 = (float)uVar3;
    fVar14 = (float)((ulonglong)uVar3 >> 0x20);
  }
LAB_14306d97a:
  fVar2 = param_4[1];
  fVar4 = *param_4;
  fVar10 = param_4[2];
  fVar5 = fVar4 * fVar4 + fVar2 * fVar2 + fVar10 * fVar10;
  if (fVar5 == 1.0) {
    local_108 = (float)*(undefined8 *)param_4;
    fVar12 = param_4[2];
    fVar7 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  }
  else {
    fVar12 = DAT_1468b5d98;
    local_108 = DAT_1468b5d90;
    fVar7 = DAT_1468b5d94;
    if (1e-08 <= fVar5) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar7 = auVar9._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
      local_108 = fVar4 * fVar7;
      fVar12 = fVar10 * fVar7;
      fVar7 = fVar2 * fVar7;
    }
  }
  if (ABS(fVar12) <= 0.9999) {
    fVar10 = fVar7 * DAT_1464aa7a0 - fVar12 * DAT_1464aa798._4_4_;
    fVar5 = fVar12 * (float)DAT_1464aa798 - local_108 * DAT_1464aa7a0;
    fVar2 = DAT_1464aa798._4_4_;
    fVar4 = (float)DAT_1464aa798;
  }
  else {
    fVar10 = fVar7 * DAT_1464aa7b0 - fVar12 * DAT_1464aa7a8._4_4_;
    fVar5 = fVar12 * (float)DAT_1464aa7a8 - local_108 * DAT_1464aa7b0;
    fVar2 = DAT_1464aa7a8._4_4_;
    fVar4 = (float)DAT_1464aa7a8;
  }
  fVar11 = local_108 * fVar2 - fVar7 * fVar4;
  fVar6 = fVar5 * fVar5 + fVar10 * fVar10 + fVar11 * fVar11;
  fVar2 = fVar10;
  fVar4 = fVar5;
  fVar8 = fVar11;
  if ((fVar6 != 1.0) &&
     (fVar2 = DAT_1468b5d90, fVar4 = DAT_1468b5d94, fVar8 = DAT_1468b5d98, 1e-08 <= fVar6)) {
    auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar8 = auVar9._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
    fVar2 = fVar10 * fVar8;
    fVar4 = fVar5 * fVar8;
    fVar8 = fVar11 * fVar8;
  }
  *param_1 = CONCAT44(fVar15 * (fVar8 * local_108 - fVar2 * fVar12) + 0.0 +
                      fVar13 * fVar4 + fVar14 * fVar7,
                      fVar15 * (fVar4 * fVar12 - fVar8 * fVar7) + 0.0 +
                      fVar13 * fVar2 + fVar14 * local_108);
  *(float *)(param_1 + 1) =
       fVar15 * (fVar2 * fVar7 - fVar4 * local_108) + 0.0 + fVar13 * fVar8 + fVar14 * fVar12;
  return param_1;
}



// FUNCTION 14306dd70 FUN_14306dd70 body=89 status=ok
// SIG undefined FUN_14306dd70(void)

void FUN_14306dd70(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  lVar1 = *param_1;
  if (((int)(uint)*param_2 < *(int *)(lVar1 + 0x6a0)) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x698) + 8 + (ulonglong)*param_2 * 0x48) != 0)) {
    puVar2 = (undefined4 *)param_1[1];
    local_18 = *puVar2;
    local_14 = puVar2[1];
    local_10 = *(undefined8 *)(puVar2 + 2);
    FUN_143087f00(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14306ddd0 FUN_14306ddd0 body=92 status=ok
// SIG undefined FUN_14306ddd0(void)

void FUN_14306ddd0(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  lVar1 = *param_1;
  if (((int)(uint)*param_2 < *(int *)(lVar1 + 0x6a0)) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x698) + 8 + (ulonglong)*param_2 * 0x48) != 0)) {
    puVar2 = (undefined4 *)param_1[1];
    local_18 = *puVar2;
    local_14 = puVar2[1];
    local_10 = *(undefined8 *)(puVar2 + 2);
    FUN_143088a40(lVar1,&local_18,2);
  }
  return;
}



// FUNCTION 14306de30 FUN_14306de30 body=92 status=ok
// SIG undefined FUN_14306de30(void)

void FUN_14306de30(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  lVar1 = *param_1;
  if (((int)(uint)*param_2 < *(int *)(lVar1 + 0x6a0)) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x698) + 8 + (ulonglong)*param_2 * 0x48) != 0)) {
    puVar2 = (undefined4 *)param_1[1];
    local_18 = *puVar2;
    local_14 = puVar2[1];
    local_10 = *(undefined8 *)(puVar2 + 2);
    FUN_143088a40(lVar1,&local_18,1);
  }
  return;
}



// FUNCTION 14306dff0 FUN_14306dff0 body=52 status=ok
// SIG undefined FUN_14306dff0(void)

undefined8 FUN_14306dff0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    cVar1 = FUN_14247c3d0(*(longlong *)(param_1 + 0x18) + 0x224,0);
    if (cVar1 != '\0') {
      return 0x3f800000;
    }
  }
  return 0;
}



// FUNCTION 14306e030 FUN_14306e030 body=136 status=ok
// SIG undefined FUN_14306e030(void)

ulonglong FUN_14306e030(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x468))();
  if ((char)uVar2 == '\0') {
    uVar1 = *(uint *)((longlong)param_1 + 0x2e4);
    uVar2 = (ulonglong)uVar1;
    uVar3 = *(uint *)((longlong)param_1 + 0x2ec);
    if ((int)*(uint *)((longlong)param_1 + 0x2ec) <= (int)uVar1) {
      uVar3 = uVar1;
    }
    if (0 < (int)uVar3) goto LAB_14306e0b0;
  }
  if (*(char *)((longlong)param_1 + 0x4fc) != '\x01') {
    uVar1 = *(uint *)(param_1 + 0x9d);
    uVar2 = (ulonglong)uVar1;
    if ((int)param_1[0x45] < 1) {
      if ((0 < (int)uVar1) && ((longlong *)param_1[0x40] != (longlong *)0x0)) {
        uVar2 = (**(code **)(*(longlong *)param_1[0x40] + 0x408))();
        if ((char)uVar2 != '\0') goto LAB_14306e0b0;
      }
      return (ulonglong)
             CONCAT31((uint3)(*(uint *)(param_1 + 0x9c) >> 0xc),
                      ~(byte)(*(uint *)(param_1 + 0x9c) >> 4)) & 0xffffffffffffff01;
    }
    if ((int)uVar1 < (int)param_1[0x45]) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
LAB_14306e0b0:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14306e0c0 FUN_14306e0c0 body=74 status=ok
// SIG undefined FUN_14306e0c0(void)

undefined8 FUN_14306e0c0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x6a0)) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)param_2 * 0x48) != 0) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x698) + 0x18 + (ulonglong)param_2 * 0x48),
       plVar1 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar1 + 0x400))();
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14306e170 FUN_14306e170 body=207 status=ok
// SIG undefined FUN_14306e170(void)

ulonglong FUN_14306e170(longlong *param_1,byte param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x7c8))();
  if ((char)uVar1 != '\0') {
    if ((param_1[0x94] != 0) && (param_1[0x95] != 0)) {
      uVar1 = (**(code **)(*(longlong *)param_1[0x95] + 0x38))();
      if ((char)uVar1 == '\0') goto LAB_14306e232;
    }
    uVar1 = DAT_146b479d0;
    if ((param_1[0xff] != DAT_146b479d0) && (uVar1 = 0, (int)(uint)param_2 < (int)param_1[0xd4])) {
      uVar2 = (ulonglong)param_2;
      uVar1 = param_1[0xd3];
      if ((*(longlong *)(uVar1 + 8 + uVar2 * 0x48) != 0) &&
         (*(longlong *)(uVar1 + 0x18 + uVar2 * 0x48) != 0)) {
        if (*(char *)(uVar1 + 5 + uVar2 * 0x48) != '\0') {
          return CONCAT71((int7)(uVar1 >> 8),1);
        }
        plVar3 = (longlong *)(**(code **)(param_1[0x8c] + 0x10))(param_1 + 0x8c,param_2);
        uVar1 = 0;
        if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014306e22b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*plVar3 + 0x468))(plVar3);
          return uVar1;
        }
      }
    }
  }
LAB_14306e232:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 14306e240 FUN_14306e240 body=45 status=ok
// SIG undefined FUN_14306e240(void)

undefined8 FUN_14306e240(longlong *param_1)

{
  char cVar1;
  
  if ((int)param_1[0x38] < *(int *)((longlong)param_1 + 0x1b4)) {
    cVar1 = (**(code **)(*param_1 + 0x490))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14306e320 FUN_14306e320 body=194 status=ok
// SIG undefined FUN_14306e320(void)

void FUN_14306e320(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((char)param_1[0x57] != '\x01') {
    lVar1 = param_1[0x24];
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar3,param_1 + 0x5e);
    param_1[0x5e] = 0;
    if (((char)param_1[0x57] == '\x02') && (0.0 < *(float *)((longlong)param_1 + 0x1b4))) {
      plVar2 = (longlong *)FUN_14309ec50(param_1);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x860))
                  (plVar2,*(undefined1 *)((longlong)param_1 + 0x2e3),
                   *(undefined4 *)((longlong)param_1 + 0x1b4));
      }
    }
    (**(code **)(*param_1 + 0x488))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e3db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x420))(param_1,1);
  return;
}



// FUNCTION 14306e3f0 FUN_14306e3f0 body=525 status=ok
// SIG undefined FUN_14306e3f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14306e3f0(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x420))(param_1,0);
  if ((param_2 != '\0') && (1 < *(byte *)(param_1 + 0x57))) {
    lVar1 = param_1[0x24];
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    if (*(int *)(lVar1 + 0x5e4) < 2) {
      local_98 = &LAB_143070150;
      lVar1 = param_1[0x24];
      uStack_90 = 0;
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      plVar2 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
        *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
        *(undefined4 *)(plVar2 + 3) = uStack_90;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[5] = lVar1;
        *plVar2 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_88 = 0;
      local_80 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_70 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      FUN_142880af0(uVar3,&local_88);
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
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar1 = FMemory::Realloc(plVar2,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x2e2) = 0;
    }
    else {
      (**(code **)(*param_1 + 0x4a0))(param_1);
    }
  }
  return;
}



// FUNCTION 14306e600 FUN_14306e600 body=256 status=ok
// SIG undefined FUN_14306e600(void)

void FUN_14306e600(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  if (((*(longlong *)(param_1 + 0x168) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 400), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x118), lVar2 != 0)) {
    plVar6 = (longlong *)(lVar2 + 0x3c8);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = 0x43080c40;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar1 = *(int *)(lVar2 + 0x3d0);
      *(int *)(lVar2 + 0x3d0) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x3d4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 14306e700 FUN_14306e700 body=160 status=ok
// SIG undefined FUN_14306e700(void)

void FUN_14306e700(undefined8 param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *local_18;
  undefined8 local_10;
  
  uVar2 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_143066820(param_1,&local_18,0);
  plVar1 = local_18;
  uVar3 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + (int)local_10 < local_18) {
    uVar3 = uVar2;
  }
  plVar4 = local_18;
  if (uVar3 != 0) {
    do {
      if ((longlong *)*plVar4 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar4 + 0x4c8))();
      }
      plVar4 = plVar4 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 14306e7b0 FUN_14306e7b0 body=81 status=ok
// SIG undefined FUN_14306e7b0(void)

void FUN_14306e7b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x698);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x6a0) * 0x48;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    (**(code **)(**(longlong **)(lVar2 + 8) + 0x4c8))();
  }
  return;
}



// FUNCTION 14306e810 FUN_14306e810 body=40 status=ok
// SIG undefined FUN_14306e810(void)

void FUN_14306e810(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x8f0,0);
  *(undefined8 *)(param_1 + 0x8f8) = 0;
  return;
}



// FUNCTION 14306e860 FUN_14306e860 body=61 status=ok
// SIG undefined FUN_14306e860(void)

void FUN_14306e860(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 != 3) {
    (**(code **)(*param_1 + 0x4b0))(param_1,param_2,0,0,1);
  }
  return;
}



// FUNCTION 14306e930 FUN_14306e930 body=401 status=ok
// SIG undefined FUN_14306e930(void)

void FUN_14306e930(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  if (param_2 < 0) {
    iVar2 = (**(code **)(*param_1 + 0x418))();
    if (iVar2 < 1) {
      iVar2 = (**(code **)(*param_1 + 0x440))(param_1);
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x418))();
    }
    iVar3 = (int)param_1[0x38] - param_2;
    if (iVar3 <= iVar2) {
      iVar2 = iVar3;
    }
    *(int *)(param_1 + 0x38) = iVar2;
    *(int *)(param_1 + 0x47) = iVar2;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x448))();
    iVar3 = (**(code **)(*param_1 + 0x418))(param_1);
    if (iVar3 <= iVar2) {
      iVar2 = iVar3;
    }
    iVar3 = (int)param_1[0x38] - param_2;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      if (iVar3 < iVar2) {
        iVar2 = iVar3;
      }
      *(int *)(param_1 + 0x38) = iVar2;
    }
  }
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 == 3) {
    cVar1 = (**(code **)(*param_1 + 0x460))(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x4a0))(param_1,-param_2,0);
    }
    iVar3 = (**(code **)(*param_1 + 0x448))(param_1);
    iVar3 = iVar3 - (int)param_1[0x38];
    iVar2 = 0;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    *(int *)(param_1 + 0x39) = iVar2;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
  if (0 < param_2) {
    fVar5 = *(float *)(param_1 + 0x43);
    if (0.0 < fVar5) {
      lVar4 = param_1[0x24];
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
        fVar5 = *(float *)(param_1 + 0x43);
      }
      *(float *)(param_1 + 0x48) = fVar5 + *(float *)(lVar4 + 0x790);
    }
  }
  cVar1 = UActorComponent::IsComponentTickEnabled(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x520))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014306eab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x358))(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14306ead0 FUN_14306ead0 body=1038 status=ok
// SIG undefined FUN_14306ead0(void)

void FUN_14306ead0(longlong param_1,byte param_2,longlong param_3)

{
  char cVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *plVar14;
  
  if (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28)) {
    *(uint *)(param_1 + 0x58) =
         *(uint *)(param_1 + 0x58) ^ (*(uint *)(param_3 + 0x58) ^ *(uint *)(param_1 + 0x58)) & 8;
  }
  uVar10 = 0;
  if (*(longlong *)(param_3 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 0x40);
    lVar3 = FUN_143071570(param_1,*(undefined8 *)(param_3 + 0x38));
    *(longlong *)(param_1 + 0x38) = lVar3;
    if (lVar3 != 0) {
      plVar14 = *(longlong **)(param_3 + 0xb0);
      uVar11 = (longlong)*(int *)(param_3 + 0xb8) & 0x1fffffffffffffff;
      if (plVar14 + *(int *)(param_3 + 0xb8) < plVar14) {
        uVar11 = uVar10;
      }
      if (uVar11 != 0) {
        do {
          lVar3 = *plVar14;
          if (lVar3 != 0) {
            plVar4 = *(longlong **)(param_3 + 0xa0);
            plVar6 = plVar4 + (longlong)*(int *)(param_3 + 0xa8) * 8;
            for (; plVar4 != plVar6; plVar4 = plVar4 + 8) {
              if (lVar3 == *plVar4) goto LAB_14306ebf6;
            }
            lVar5 = FUN_143071570(param_1,lVar3);
            if (lVar5 != 0) {
              FUN_142382f60(lVar5,*(undefined8 *)(param_1 + 0x38),&DAT_146532188,
                            *(undefined8 *)(lVar3 + 0x198));
              iVar2 = *(int *)(param_1 + 0xb8);
              *(int *)(param_1 + 0xb8) = iVar2 + 1;
              if (*(int *)(param_1 + 0xbc) < iVar2 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          ((longlong *)(param_1 + 0xb0),iVar2);
              }
              *(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 8) = lVar5;
            }
          }
LAB_14306ebf6:
          plVar14 = plVar14 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar11);
      }
    }
  }
  iVar13 = 0;
  iVar2 = *(int *)(param_3 + 0x68);
  if (*(int *)(param_1 + 0x6c) < iVar2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x60,iVar2);
    iVar2 = *(int *)(param_3 + 0x68);
  }
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar5 = *(longlong *)(param_3 + 0x60);
      if (*(longlong *)(lVar3 + 0x48 + lVar5) != 0) {
        cVar1 = *(char *)(lVar3 + 1 + lVar5);
        if (cVar1 == '\x01') {
          if (*(char *)(param_1 + 0x28) != '\0') {
LAB_14306ec73:
            iVar2 = *(int *)(param_1 + 0x68);
            *(int *)(param_1 + 0x68) = iVar2 + 1;
            if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
              TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
            }
            puVar9 = (undefined1 *)((longlong)iVar2 * 0x60 + *(longlong *)(param_1 + 0x60));
            *puVar9 = *(undefined1 *)(lVar3 + lVar5);
            puVar9[1] = *(undefined1 *)(lVar3 + 1 + lVar5);
            *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(lVar3 + 4 + lVar5);
            *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(lVar3 + 8 + lVar5);
            cVar1 = *(char *)(lVar3 + 0xc + lVar5);
            puVar9[0xc] = cVar1;
            puVar9[0xd] = puVar9[0xd] ^ (puVar9[0xd] ^ *(byte *)(lVar3 + 0xd + lVar5)) & 1;
            puVar9[0xd] = puVar9[0xd] ^ (puVar9[0xd] ^ *(byte *)(lVar3 + 0xd + lVar5)) & 2;
            *(undefined4 *)(puVar9 + 0x10) = *(undefined4 *)(lVar3 + 0x10 + lVar5);
            *(undefined8 *)(puVar9 + 0x18) = *(undefined8 *)(lVar3 + 0x18 + lVar5);
            *(undefined8 *)(puVar9 + 0x20) = *(undefined8 *)(lVar3 + 0x20 + lVar5);
            *(undefined8 *)(puVar9 + 0x28) = *(undefined8 *)(lVar3 + 0x28 + lVar5);
            *(undefined4 *)(puVar9 + 0x30) = *(undefined4 *)(lVar3 + 0x30 + lVar5);
            *(undefined8 *)(puVar9 + 0x34) = *(undefined8 *)(lVar3 + 0x34 + lVar5);
            *(undefined4 *)(puVar9 + 0x3c) = *(undefined4 *)(lVar3 + 0x3c + lVar5);
            *(undefined4 *)(puVar9 + 0x40) = *(undefined4 *)(lVar3 + 0x40 + lVar5);
            *(undefined4 *)(puVar9 + 0x44) = *(undefined4 *)(lVar3 + 0x44 + lVar5);
            *(undefined8 *)(puVar9 + 0x48) = *(undefined8 *)(lVar3 + 0x48 + lVar5);
            *(undefined8 *)(puVar9 + 0x50) = *(undefined8 *)(lVar3 + 0x50 + lVar5);
            *(undefined8 *)(puVar9 + 0x58) = 0;
            if (cVar1 != -1) {
              puVar9[0xc] = '\x01' << (param_2 & 0x1f);
            }
          }
        }
        else if ((cVar1 != '\x02') || (*(char *)(param_1 + 0x28) == '\0')) goto LAB_14306ec73;
      }
      iVar13 = iVar13 + 1;
      lVar3 = lVar3 + 0x60;
    } while (iVar13 < *(int *)(param_3 + 0x68));
  }
  puVar8 = (undefined8 *)(param_1 + 0x70);
  if (puVar8 != (undefined8 *)(param_3 + 0x70)) {
    iVar2 = *(int *)(param_3 + 0x78);
    _Src = *(void **)(param_3 + 0x70);
    *(int *)(param_1 + 0x78) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x7c) == 0)) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(puVar8,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,(longlong)iVar2 << 5);
    }
  }
  puVar8 = *(undefined8 **)(param_3 + 0xa0);
  puVar12 = puVar8 + (longlong)*(int *)(param_3 + 0xa8) * 8;
  for (; puVar8 != puVar12; puVar8 = puVar8 + 8) {
    if (((puVar8[1] != 0) &&
        ((*(char *)(puVar8 + 7) != '\x01' || (*(char *)(param_1 + 0x28) != '\0')))) &&
       ((*(char *)(puVar8 + 7) != '\x02' || (*(char *)(param_1 + 0x28) == '\0')))) {
      iVar2 = *(int *)(param_1 + 0xa8);
      *(int *)(param_1 + 0xa8) = iVar2 + 1;
      if (*(int *)(param_1 + 0xac) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0xa0,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0xa0));
      *puVar7 = *puVar8;
      puVar7[1] = puVar8[1];
      puVar7[2] = puVar8[2];
      puVar7[3] = puVar8[3];
      puVar7[4] = puVar8[4];
      *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(puVar8 + 5);
      *(undefined8 *)((longlong)puVar7 + 0x2c) = *(undefined8 *)((longlong)puVar8 + 0x2c);
      *(undefined4 *)((longlong)puVar7 + 0x34) = *(undefined4 *)((longlong)puVar8 + 0x34);
      *(undefined1 *)(puVar7 + 7) = *(undefined1 *)(puVar8 + 7);
      *puVar7 = 0;
      FUN_14306fdc0(param_1);
    }
  }
  FUN_143087690(param_1);
  FUN_1430875e0(param_1);
  FUN_1430873b0(param_1);
  FUN_143087950(param_1,0);
  return;
}



// FUNCTION 14306eee0 FUN_14306eee0 body=283 status=ok
// SIG undefined FUN_14306eee0(void)

void FUN_14306eee0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  lVar4 = operator_new(0x160);
  lVar7 = 0;
  lVar5 = lVar7;
  if (lVar4 != 0) {
    lVar5 = FUN_142c8c440(lVar4);
  }
  *(longlong *)(param_3 + 8) = lVar5;
  plVar1 = (longlong *)(lVar5 + 0x140);
  iVar2 = *(int *)(lVar5 + 0x148);
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar2 < iVar3) {
    *(int *)(lVar5 + 0x148) = iVar3;
    iVar9 = iVar3 - iVar2;
    if (*(int *)(lVar5 + 0x14c) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar2);
    }
    puVar6 = (undefined8 *)((longlong)iVar2 * 0x20 + *plVar1);
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0xffffffff;
      *(undefined1 *)((longlong)puVar6 + 0xc) = 0;
      *(undefined4 *)(puVar6 + 2) = 0xffffffff;
      *(undefined4 *)(puVar6 + 3) = 0x3f800000;
      puVar6 = puVar6 + 4;
    }
  }
  else if ((iVar3 < iVar2) && (iVar3 != iVar2)) {
    *(int *)(lVar5 + 0x148) = iVar3;
    TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  lVar4 = lVar7;
  if (0 < iVar3) {
    do {
      lVar8 = lVar4 + 1;
      *(undefined8 *)(lVar7 + *plVar1) = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + lVar4 * 8);
      lVar7 = lVar7 + 0x20;
      lVar4 = lVar8;
    } while (lVar8 < iVar3);
  }
  FUN_14227c160(param_4,lVar5,param_5);
  return;
}



// FUNCTION 14306f000 FUN_14306f000 body=140 status=ok
// SIG undefined FUN_14306f000(void)

void FUN_14306f000(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145a681f0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)((longlong)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    puVar1[9] = *(undefined8 *)(param_1 + 0x48);
    *puVar1 = &PTR_GetPoolName_145a68238;
  }
  return;
}



// FUNCTION 14306f090 FUN_14306f090 body=78 status=ok
// SIG undefined FUN_14306f090(void)

void FUN_14306f090(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145a68160;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_145a681a8;
  }
  return;
}



// FUNCTION 14306f0e0 FUN_14306f0e0 body=74 status=ok
// SIG undefined FUN_14306f0e0(void)

void FUN_14306f0e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145a67fb0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_145a67ff8;
  }
  return;
}



// FUNCTION 14306f130 FUN_14306f130 body=103 status=ok
// SIG undefined FUN_14306f130(void)

void FUN_14306f130(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)operator_new(0x78);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_145a68040;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar4 + 0x14) = uVar1;
    *(undefined4 *)(puVar4 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar3;
    FUN_141289d90(puVar4 + 4,param_1 + 0x20);
    puVar4[0xe] = *(undefined8 *)(param_1 + 0x70);
    *puVar4 = &PTR_FUN_145a68088;
  }
  return;
}



// FUNCTION 14306f1a0 FUN_14306f1a0 body=193 status=ok
// SIG undefined FUN_14306f1a0(void)

void FUN_14306f1a0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)operator_new(0xd0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_145a680d0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar4 + 0x14) = uVar1;
    *(undefined4 *)(puVar4 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar3;
    FUN_140729f20(puVar4 + 4,param_1 + 0x20);
    puVar4[0x16] = *(undefined8 *)(param_1 + 0xb0);
    *(undefined4 *)(puVar4 + 0x17) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)((longlong)puVar4 + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(puVar4 + 0x18) = *(undefined4 *)(param_1 + 0xc0);
    puVar4[0x19] = *(undefined8 *)(param_1 + 200);
    *puVar4 = &PTR_FUN_145a68118;
  }
  return;
}



// FUNCTION 14306f270 FUN_14306f270 body=849 status=ok
// SIG undefined FUN_14306f270(void)

void FUN_14306f270(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  longlong local_a8;
  int local_a0;
  int iStack_9c;
  int local_98;
  uint uStack_94;
  uint *puStack_90;
  undefined4 local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 uStack_70;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *local_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  
  if ((int)param_1[0xd4] == 0) {
    uVar4 = FUN_1430c2040();
    lVar5 = (**(code **)(*param_1 + 0x628))(param_1,uVar4);
    if (lVar5 != 0) {
      puStack_90 = (uint *)(param_1 + 0x58);
      uVar3 = *(uint *)(param_1 + 0x5b);
      iVar10 = 0;
      lVar13 = 0;
      iVar14 = 0;
      local_a8 = 0;
      local_a0 = 0;
      iStack_9c = 0;
      local_98 = 0;
      uStack_94 = 1;
      uStack_84 = 0;
      iStack_80 = 0;
      if (uVar3 != 0) {
        puVar12 = (uint *)param_1[0x5a];
        if ((uint *)param_1[0x5a] == (uint *)0x0) {
          puVar12 = puStack_90;
        }
        uVar11 = *puVar12;
        iStack_80 = 0;
        local_98 = 0;
        while (uVar11 == 0) {
          lVar9 = (longlong)local_98;
          iStack_80 = iStack_80 + 0x20;
          iVar7 = local_98 + 1;
          bVar1 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
          local_98 = iVar7;
          if (bVar1) goto LAB_14306f39c;
          uVar11 = puVar12[lVar9 + 1];
        }
        uStack_94 = -uVar11 & uVar11;
        iVar7 = 0x1f;
        if (uStack_94 != 0) {
          for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uStack_94 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_84 = (iStack_80 - iVar7) + 0x1f;
        if ((int)uVar3 < (int)uStack_84) {
LAB_14306f39c:
          uStack_84 = uVar3;
        }
      }
      local_88 = 0xffffffff;
      uStack_70 = CONCAT44(uStack_94,local_98);
      uVar3 = *(uint *)(param_1 + 0x5b);
      local_78 = param_1 + 0x56;
      uStack_64 = *(uint *)(param_1 + 0x5b);
      uStack_38 = 0xffffffff;
      uStack_34 = uStack_84;
      uStack_58 = CONCAT44(uStack_7c,iStack_80);
      uStack_68 = -1 << ((byte)uStack_64 & 0x1f);
      uVar11 = uStack_64 & 0xffffffe0;
      iStack_48 = local_98;
      uStack_44 = uStack_94;
      local_40 = puStack_90;
      local_30 = uStack_58;
      local_50 = local_78;
      uStack_60 = uStack_38;
      uStack_5c = uStack_34;
      uVar8 = uStack_64;
      if (uStack_64 != uVar3) {
        puVar12 = (uint *)param_1[0x5a];
        if ((uint *)param_1[0x5a] == (uint *)0x0) {
          puVar12 = puStack_90;
        }
        uVar8 = puVar12[(int)uStack_64 >> 5] & uStack_68;
        iVar7 = (int)uStack_64 >> 5;
        while (uVar8 == 0) {
          uVar11 = uVar11 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_14306f470;
          uVar8 = puVar12[(longlong)iVar7 + 1];
          uStack_68 = 0xffffffff;
          iVar7 = iVar7 + 1;
        }
        uVar8 = -uVar8 & uVar8;
        iVar7 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uVar8 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_64 = (uVar11 - iVar7) + 0x1f;
        uVar8 = uStack_64;
        if ((int)uVar3 < (int)uStack_64) {
LAB_14306f470:
          uStack_64 = uVar3;
          uVar8 = uVar3;
        }
      }
      while( true ) {
        if (((uStack_34 == uVar8) && (local_40 == puStack_90)) && (local_50 == param_1 + 0x56))
        break;
        lVar9 = *(longlong *)(*local_50 + (longlong)(int)uStack_34 * 0x10);
        if (lVar9 != 0) {
          uVar3 = *(uint *)(lVar9 + 0xc);
          if ((int)uVar3 < (int)DAT_1469e91c4) {
            uVar11 = uVar3 & 0xffff;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0xffff;
              uVar11 = uVar11 - 0x10000;
            }
            lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                    (longlong)(int)uVar11 * 0x18;
          }
          else {
            lVar6 = 0;
          }
          if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
            cVar2 = (**(code **)(*param_1 + 0x9e8))(param_1,lVar9);
            if (cVar2 == '\0') {
              local_a0 = iVar10 + 1;
              if (iVar14 < local_a0) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,iVar10);
                lVar13 = local_a8;
                iVar14 = iStack_9c;
              }
              *(longlong *)(lVar13 + (longlong)iVar10 * 8) = lVar9;
              iVar10 = local_a0;
            }
          }
        }
        uStack_38 = uStack_38 & ~uStack_44;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_48);
      }
      FUN_14306a460(param_1,lVar5,&local_a8,1);
      if (local_a8 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14306f5d0 FUN_14306f5d0 body=578 status=ok
// SIG undefined FUN_14306f5d0(void)

void FUN_14306f5d0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(longlong *)(param_2 + 0x58) == 0) {
    plVar8 = (longlong *)0x0;
    plVar7 = plVar8;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar7 = *(longlong **)(param_1 + 0x20);
    }
    FUN_1417846f0(plVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar5 = AGFreezeCharacterCue::GetPrivateStaticClass();
    lVar6 = FUN_1417985e0(uVar5,plVar7,0,0,0,0,0,0,0);
    *(longlong *)(param_2 + 0x58) = lVar6;
    *(byte *)(lVar6 + 0x71a) = *(byte *)(lVar6 + 0x71a) & 0xbf;
    pbVar1 = (byte *)(*(longlong *)(param_2 + 0x58) + 0xba);
    *pbVar1 = *pbVar1 | 1;
    *(undefined4 *)(*(longlong *)(param_2 + 0x58) + 0x794) = 0;
    pbVar1 = (byte *)(*(longlong *)(param_2 + 0x58) + 0xba);
    *pbVar1 = *pbVar1 & 0xfd;
    *(byte *)(*(longlong *)(param_2 + 0x58) + 0x978) = (byte)(*(uint *)(param_2 + 8) >> 2) & 1;
    puVar2 = (uint *)(*(longlong *)(param_2 + 0x58) + 0x398);
    *puVar2 = *puVar2 ^ ((uint)*(byte *)(param_1 + 0x28) ^
                        *(uint *)(*(longlong *)(param_2 + 0x58) + 0x398)) & 1;
    FUN_14260f940(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x48));
    pbVar1 = (byte *)(*(longlong *)(param_2 + 0x58) + 0x71a);
    *pbVar1 = *pbVar1 & 0xfe;
    lVar6 = *(longlong *)(param_2 + 0x58);
    *(undefined8 *)(lVar6 + 0x1ec) = *(undefined8 *)(param_2 + 0x28);
    *(undefined4 *)(lVar6 + 500) = *(undefined4 *)(param_2 + 0x30);
    lVar6 = *(longlong *)(param_2 + 0x58);
    *(undefined8 *)(lVar6 + 0x1f8) = *(undefined8 *)(param_2 + 0x34);
    *(undefined4 *)(lVar6 + 0x200) = *(undefined4 *)(param_2 + 0x3c);
    uVar3 = *(undefined4 *)(param_2 + 0x40);
    lVar6 = *(longlong *)(param_2 + 0x58);
    *(ulonglong *)(lVar6 + 0x204) = CONCAT44(uVar3,uVar3);
    *(undefined4 *)(lVar6 + 0x20c) = uVar3;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar8 = *(longlong **)(param_1 + 0x20);
    }
    uVar5 = (**(code **)(*plVar8 + 0x148))(plVar8);
    FUN_14234b270(*(undefined8 *)(param_2 + 0x58),uVar5);
    if (((*(byte *)(param_1 + 0x58) & 2) != 0) && (*(longlong *)(param_2 + 0x58) != 0)) {
      FUN_142382f60(*(longlong *)(param_2 + 0x58),*(undefined8 *)(param_1 + 0x38),&DAT_146af29ec,
                    *(undefined8 *)(param_2 + 0x18));
      FUN_1423979a0(*(undefined8 *)(param_2 + 0x58),
                    *(byte *)(*(longlong *)(param_1 + 0x38) + 0x2f0) >> 5 & 1);
      FUN_142397970(*(undefined8 *)(param_2 + 0x58),
                    *(byte *)(*(longlong *)(param_1 + 0x38) + 0x2f0) >> 6 & 1);
      FUN_142398e60(*(undefined8 *)(param_2 + 0x58),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x6b8),0);
      uVar4 = *(uint *)(param_1 + 0x58);
      uVar5 = 0;
      if ((((uVar4 & 0x20) == 0) || ((uVar4 & 8) == 0)) ||
         (((((*(uint *)(param_1 + 8) >> 4 & 1) == 0 && (*(longlong *)(param_1 + 0x20) != 0)) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x7e8) & 0x40) != 0)) ||
          (((*(uint *)(param_2 + 8) >> 3 & 1) != 0 && ((uVar4 & 0x10) != 0)))))) {
        uVar5 = 1;
      }
      FUN_142397540(*(undefined8 *)(param_2 + 0x58),uVar5,1);
    }
  }
  return;
}



// FUNCTION 14306f820 FUN_14306f820 body=55 status=ok
// SIG undefined FUN_14306f820(void)

void FUN_14306f820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_145a66b48;
    return;
  }
  return;
}



// FUNCTION 14306f860 FUN_14306f860 body=448 status=ok
// SIG undefined FUN_14306f860(void)

ulonglong FUN_14306f860(longlong param_1,byte *param_2,int param_3)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)(param_1 + 0x90);
  lVar6 = *plVar1;
  uVar4 = (ulonglong)*(int *)(param_1 + 0x98);
  lVar7 = uVar4 * 0x38 + lVar6;
  for (; lVar6 != lVar7; lVar6 = lVar6 + 0x38) {
    if (*(int *)(lVar6 + 0xc) == param_3) {
      return CONCAT71((int7)(int3)((uint)*(int *)(param_1 + 0x98) >> 8),1);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (lVar6 != 0) {
    lVar7 = FUN_142a07000();
    iVar3 = *(int *)(lVar7 + 0x90);
    uVar4 = (longlong)iVar3;
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar3) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar3 * 8) != lVar7 + 0x88)) {
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)uVar4 != '\0') {
      lVar7 = FUN_1423ac7e0(lVar6);
      uVar4 = 0;
      if (lVar7 != 0) {
        lVar5 = FUN_1430bc930();
        iVar3 = *(int *)(lVar5 + 0x90);
        uVar4 = (longlong)iVar3;
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < iVar3) ||
           (uVar4 = *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + 0x88),
           *(longlong *)(uVar4 + (longlong)iVar3 * 8) != lVar5 + 0x88)) {
          uVar4 = uVar4 & 0xffffffffffffff00;
        }
        else {
          uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
        }
        if (((char)uVar4 != '\0') &&
           (uVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x278))
                              (*(longlong **)(param_2 + 8),lVar6), (char)uVar4 != '\0')) {
          iVar3 = *(int *)(param_1 + 0x98);
          *(int *)(param_1 + 0x98) = iVar3 + 1;
          if (*(int *)(param_1 + 0x9c) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar1,iVar3);
          }
          lVar6 = *plVar1;
          lVar7 = (longlong)iVar3 * 0x38;
          *(uint *)(lVar7 + 0x10 + lVar6) = *(uint *)(lVar7 + 0x10 + lVar6) & 0xffffffa8 | 0x28;
          *(undefined8 *)(lVar7 + 0x18 + lVar6) = 0;
          *(undefined8 *)(lVar7 + 0x20 + lVar6) = 0;
          *(undefined4 *)(lVar7 + 0x28 + lVar6) = 0;
          *(undefined8 *)(lVar7 + 0x30 + lVar6) = 0;
          *(undefined8 *)(lVar7 + lVar6) = 0;
          *(undefined4 *)(lVar7 + 8 + lVar6) = 0;
          *(undefined4 *)(lVar7 + 0xc + lVar6) = 0xffffffff;
          *(undefined8 *)(lVar7 + *plVar1) = *(undefined8 *)(param_2 + 8);
          *(uint *)(lVar7 + 8 + *plVar1) = (uint)*param_2;
          *(int *)(lVar7 + 0xc + *plVar1) = param_3;
          lVar6 = *(longlong *)(param_2 + 8);
          puVar2 = (uint *)(lVar7 + 0x10 + *plVar1);
          *puVar2 = *puVar2 ^ (*(uint *)(lVar6 + 0x30) >> 2 ^ *(uint *)(lVar7 + 0x10 + *plVar1)) & 1
          ;
          *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x100;
          return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
        }
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14306fa20 FUN_14306fa20 body=922 status=ok
// SIG undefined FUN_14306fa20(void)

void FUN_14306fa20(longlong param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  byte bVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  longlong local_res20;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_98;
  undefined1 *local_90;
  longlong local_88;
  undefined1 *local_80;
  longlong local_78;
  undefined1 *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  if (*(int *)(param_1 + 0x798) != 0) {
    if ((*(longlong **)(param_1 + 0x150) == (longlong *)0x0) ||
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x780))(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x798)) {
      local_res20 = 0;
      do {
        lVar11 = local_res20 + *(longlong *)(param_1 + 0x790);
        if (((*(byte *)(lVar11 + 2) & 1) == 0) || (bVar1)) {
          bVar4 = *(byte *)(lVar11 + 1);
          bVar7 = 0;
          if ((*(byte *)(lVar11 + 1) & 0xfd) == 0) {
            plVar6 = *(longlong **)(param_1 + 0x700);
            uVar8 = 0;
            uVar10 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
            if (plVar6 + *(int *)(param_1 + 0x708) < plVar6) {
              uVar10 = uVar8;
            }
            if (uVar10 != 0) {
              do {
                if (*plVar6 != 0) {
                  bVar3 = FUN_14306f860(*plVar6,lVar11,iVar9);
                  bVar7 = bVar7 | bVar3;
                }
                plVar6 = plVar6 + 1;
                uVar8 = uVar8 + 1;
              } while (uVar8 != uVar10);
            }
          }
          if (bVar4 < 2) {
            plVar6 = *(longlong **)(param_1 + 0x710);
            uVar8 = 0;
            uVar10 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
            if (plVar6 + *(int *)(param_1 + 0x718) < plVar6) {
              uVar10 = uVar8;
            }
            if (uVar10 != 0) {
              do {
                if (*plVar6 != 0) {
                  bVar4 = FUN_14306f860(*plVar6,lVar11,iVar9);
                  bVar7 = bVar7 | bVar4;
                }
                plVar6 = plVar6 + 1;
                uVar8 = uVar8 + 1;
              } while (uVar8 != uVar10);
            }
          }
          if (bVar7 != 0) {
            plVar6 = *(longlong **)(lVar11 + 8);
            if ((*(byte *)(plVar6 + 6) & 2) != 0) {
              FWeakObjectPtr::operator=(local_c8,0);
              local_c0 = 0;
              puVar5 = (undefined8 *)
                       FName::FName(local_68,L"OnUpdateSkeletalControlsWhenAmmoChanges",1);
              FWeakObjectPtr::operator=(local_c8);
              local_c0 = *puVar5;
              plVar6 = *(longlong **)(lVar11 + 8);
              local_90 = local_c8;
              bVar4 = *(byte *)(plVar6 + 0xf);
              local_98 = param_1;
              if (*(byte *)(plVar6 + 0xf) != 0) {
                do {
                  if ((bVar4 & 1) != 0) {
                    FUN_14306dd70(&local_98);
                  }
                  bVar12 = 1 < bVar4;
                  bVar4 = bVar4 >> 1;
                } while (bVar12);
                plVar6 = *(longlong **)(lVar11 + 8);
              }
            }
            if ((*(byte *)(plVar6 + 6) & 0x10) != 0) {
              FWeakObjectPtr::operator=(local_b8,0);
              local_b0 = 0;
              puVar5 = (undefined8 *)FName::FName(local_60,L"OnUpdateSkeletalControlsWhenUsed",1);
              FWeakObjectPtr::operator=(local_b8);
              local_b0 = *puVar5;
              plVar6 = *(longlong **)(lVar11 + 8);
              local_80 = local_b8;
              bVar4 = *(byte *)(plVar6 + 0xf);
              local_88 = param_1;
              if (*(byte *)(plVar6 + 0xf) != 0) {
                do {
                  if ((bVar4 & 1) != 0) {
                    FUN_14306de30(&local_88);
                  }
                  bVar12 = 1 < bVar4;
                  bVar4 = bVar4 >> 1;
                } while (bVar12);
                plVar6 = *(longlong **)(lVar11 + 8);
              }
            }
            cVar2 = (**(code **)(*plVar6 + 0x2a8))();
            if (cVar2 != '\0') {
              FWeakObjectPtr::operator=(local_a8,0);
              local_a0 = 0;
              puVar5 = (undefined8 *)
                       FName::FName(local_58,L"OnUpdateSkeletalControlsWhenUseFinishes",1);
              FWeakObjectPtr::operator=(local_a8);
              local_a0 = *puVar5;
              local_70 = local_a8;
              bVar4 = *(byte *)(*(longlong *)(lVar11 + 8) + 0x78);
              local_78 = param_1;
              if (bVar4 != 0) {
                do {
                  if ((bVar4 & 1) != 0) {
                    FUN_14306ddd0(&local_78);
                  }
                  bVar12 = 1 < bVar4;
                  bVar4 = bVar4 >> 1;
                } while (bVar12);
              }
            }
          }
        }
        iVar9 = iVar9 + 1;
        local_res20 = local_res20 + 0x10;
      } while (iVar9 < *(int *)(param_1 + 0x798));
    }
  }
  return;
}



// FUNCTION 14306fdc0 FUN_14306fdc0 body=561 status=ok
// SIG undefined FUN_14306fdc0(void)

void FUN_14306fdc0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*param_2 == 0) {
    plVar8 = (longlong *)0x0;
    plVar6 = plVar8;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar6 = *(longlong **)(param_1 + 0x20);
    }
    FUN_1417846f0(plVar6,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar5 = FUN_142e5c1e0();
    plVar6 = (longlong *)FUN_1417985e0(uVar5,plVar6,0,0,0,0,0,0,0);
    *param_2 = (longlong)plVar6;
    (**(code **)(*plVar6 + 0x638))(plVar6,0);
    (**(code **)(*(longlong *)*param_2 + 0x930))((longlong *)*param_2,param_2[1],1);
    FUN_1423974c0(*param_2,*(undefined1 *)(param_1 + 0x28));
    lVar2 = *param_2;
    *(longlong *)(lVar2 + 0x1ec) = param_2[4];
    *(int *)(lVar2 + 500) = (int)param_2[5];
    lVar2 = *param_2;
    *(undefined8 *)(lVar2 + 0x1f8) = *(undefined8 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(lVar2 + 0x200) = *(undefined4 *)((longlong)param_2 + 0x34);
    plVar6 = plVar8;
    if (param_2[2] != 0) {
      plVar7 = (longlong *)FUN_1428eccf0();
      for (plVar3 = (longlong *)param_2[2];
          (plVar6 = plVar8, plVar3 != (longlong *)0x0 &&
          (plVar6 = (longlong *)param_2[2], plVar3 != plVar7)); plVar3 = (longlong *)plVar3[6]) {
      }
    }
    FUN_1423b4b50(*param_2,plVar6);
    if ((((*(uint *)(param_1 + 0x58) & 0x10) == 0) && ((*(uint *)(param_1 + 0x58) & 8) != 0)) &&
       (((*(uint *)(param_1 + 8) >> 4 & 1) != 0 ||
        ((*(longlong *)(param_1 + 0x20) == 0 ||
         ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x7e8) & 0x40) == 0)))))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    FUN_142397540(*param_2,uVar5,1);
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar8 = *(longlong **)(param_1 + 0x20);
    }
    uVar5 = (**(code **)(*plVar8 + 0x148))();
    FUN_14234b270(*param_2,uVar5);
    if (((*param_2 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
       (FUN_142382f60(*param_2,*(longlong *)(param_1 + 0x38),&DAT_146af29ec,param_2[3]),
       (*(byte *)(param_1 + 0x58) & 2) != 0)) {
      FUN_14308c830(param_1,*param_2,*(undefined8 *)(param_1 + 0x38));
    }
    param_2 = (longlong *)*param_2;
    if ((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      cVar4 = FUN_142390860(param_2);
      if (cVar4 == '\0') {
        FUN_142382f60(param_2,*(undefined8 *)(param_1 + 0x38),&DAT_146532188,0);
      }
      (**(code **)(*param_2 + 0x358))
                (param_2,CONCAT31((uint3)(*(uint *)(param_1 + 0x58) >> 9),
                                  (char)(*(uint *)(param_1 + 0x58) >> 1)) & 0xffffff01);
      iVar1 = *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0xb8) = iVar1 + 1;
      if (*(int *)(param_1 + 0xbc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xb0,iVar1);
      }
      *(longlong **)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 143070000 FUN_143070000 body=97 status=ok
// SIG undefined FUN_143070000(void)

void FUN_143070000(longlong param_1)

{
  byte bVar1;
  char cVar2;
  
  if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x778))();
    if ((((cVar2 != '\0') &&
         (bVar1 = *(byte *)(param_1 + 0x690), (int)(uint)bVar1 < *(int *)(param_1 + 0x6a0))) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48) != 0)) {
      FUN_14309acf0();
      return;
    }
  }
  return;
}



// FUNCTION 143070070 FUN_143070070 body=203 status=ok
// SIG undefined FUN_143070070(void)

void FUN_143070070(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  
  if ((param_1[0xff] != DAT_146b47938) && (param_1[0xff] != DAT_146b479b0)) {
    bVar1 = *(byte *)(param_1 + 0xd2);
    if ((((int)(uint)bVar1 < (int)param_1[0xd4]) &&
        (*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
       (lVar2 = *(longlong *)(param_1[0xd3] + 0x20 + (ulonglong)bVar1 * 0x48), lVar2 != 0)) {
      cVar4 = FUN_14309f7d0(lVar2,1);
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0x8c0))(param_1,1);
      }
    }
    FUN_14308a790(param_1,0);
    if (((int)(uint)*(byte *)(param_1 + 0xd2) < (int)param_1[0xd4]) &&
       (plVar3 = *(longlong **)(param_1[0xd3] + 8 + (ulonglong)*(byte *)(param_1 + 0xd2) * 0x48),
       plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x4a0))();
    }
    FUN_14307e120(param_1,&DAT_146b47938);
    return;
  }
  return;
}



// FUNCTION 143070170 FUN_143070170 body=153 status=ok
// SIG undefined FUN_143070170(void)

void FUN_143070170(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (0 < *(int *)(param_1 + 0x98)) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x98) * 7;
    for (; puVar1 != puVar2; puVar1 = puVar1 + 7) {
      (**(code **)(*(longlong *)*puVar1 + 0x288))((longlong *)*puVar1,param_1,puVar1 + 2);
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x9c)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x90,0);
    }
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfffffeff;
  }
  return;
}



// FUNCTION 143070210 FUN_143070210 body=732 status=ok
// SIG undefined FUN_143070210(void)

void FUN_143070210(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  lVar10 = *(longlong *)(param_1 + 0x60);
  plVar9 = (longlong *)0x0;
  lVar8 = (longlong)*(int *)(param_1 + 0x68) * 0x60 + lVar10;
  for (; lVar10 != lVar8; lVar10 = lVar10 + 0x60) {
    plVar6 = *(longlong **)(lVar10 + 0x58);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x3b0))(plVar6,0);
      *(undefined8 *)(lVar10 + 0x58) = 0;
    }
  }
  if (0 < *(int *)(param_1 + 0x88)) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x40;
    piVar7 = *(int **)(param_1 + 0x80);
    piVar12 = piVar7 + (longlong)*(int *)(param_1 + 0x88) * 0x1a;
    for (; piVar7 != piVar12; piVar7 = piVar7 + 0x1a) {
      lVar10 = (longlong)*piVar7 * 0x20 + *(longlong *)(param_1 + 0x70);
      *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) | 1;
      *(undefined4 *)(lVar10 + 0x10) = 0;
      *(undefined4 *)(lVar10 + 0x14) = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x8c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo((undefined8 *)(param_1 + 0x80),0);
    }
  }
  FUN_143070170(param_1);
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xffffff7f;
  FUN_1430873b0(param_1);
  uVar2 = *(uint *)(param_1 + 0x58);
  if (((uVar2 & 1) != 0) || (*(longlong *)(param_1 + 0x38) == 0)) {
    if ((uVar2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    goto LAB_1430704ce;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    plVar6 = plVar9;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar6 = *(longlong **)(param_1 + 0x20);
    }
    uVar3 = UScrollBox::GetPrivateStaticClass();
    lVar10 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar3);
    if (lVar10 != 0) {
      FUN_142d28bc0(lVar10,0);
    }
    if (*(char *)(param_1 + 0x28) != '\0') goto LAB_14307033a;
  }
  else {
LAB_14307033a:
    lVar10 = *(longlong *)(param_1 + 0x38);
    if (*(longlong *)(lVar10 + 400) != 0) {
      FTickFunction::RemovePrerequisite(*(longlong *)(lVar10 + 400) + 0x30,lVar10,lVar10 + 0x30);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x50);
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x38) + 0x58) * 0x10 + lVar10;
      for (; lVar10 != lVar8; lVar10 = lVar10 + 0x10) {
        lVar4 = FWeakObjectPtr::Get(lVar10);
        if (lVar4 != 0) {
          lVar5 = FUN_142e1b450();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            if (lVar10 != 0) {
              plVar6 = (longlong *)FWeakObjectPtr::Get(lVar10);
              if (plVar6 == (longlong *)0x0) {
LAB_143070413:
                plVar6 = plVar9;
              }
              else {
                lVar10 = FUN_142e1b450();
                if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                    lVar10 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (!bVar1) goto LAB_143070413;
              }
              FTickFunction::RemovePrerequisite
                        (*(longlong *)(param_1 + 0x38) + 0x30,plVar6,plVar6 + 6);
            }
            break;
          }
        }
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x418))
            (*(longlong **)(param_1 + 0x38),&DAT_14653218c);
  local_20 = *(undefined4 *)(param_1 + 0x40);
  local_28 = CONCAT44(local_20,local_20);
  local_10 = local_20;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x3f8))(*(longlong **)(param_1 + 0x38),&local_28);
  FUN_14308cb80(param_1,*(undefined8 *)(param_1 + 0x38));
  puVar11 = *(undefined8 **)(param_1 + 0xb0);
  plVar6 = (longlong *)((longlong)*(int *)(param_1 + 0xb8) & 0x1fffffffffffffff);
  if (puVar11 + *(int *)(param_1 + 0xb8) < puVar11) {
    plVar6 = plVar9;
  }
  if (plVar6 != (longlong *)0x0) {
    do {
      FUN_14308cb80(param_1,*puVar11);
      plVar9 = (longlong *)((longlong)plVar9 + 1);
      puVar11 = puVar11 + 1;
    } while (plVar9 != plVar6);
  }
  uVar2 = *(uint *)(param_1 + 0x58);
LAB_1430704ce:
  *(uint *)(param_1 + 0x58) = uVar2 & 0xffffffe8 | 0x20;
  return;
}



// FUNCTION 1430704f0 FUN_1430704f0 body=206 status=ok
// SIG undefined FUN_1430704f0(void)

void FUN_1430704f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong local_18;
  undefined8 local_10;
  
  if (param_1 != 0) {
    uVar4 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_14222dd40(param_1,&local_18,1);
    uVar6 = uVar4;
    if (0 < (int)local_10) {
      do {
        lVar1 = *(longlong *)(uVar4 + local_18);
        if (lVar1 != 0) {
          lVar3 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (*(char *)(lVar1 + 0x128) == '\x03')) {
            FUN_1430b3d20(lVar1);
          }
        }
        uVar5 = (int)uVar6 + 1;
        uVar4 = uVar4 + 8;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < (int)local_10);
    }
    FUN_143042ab0(param_1);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1430705c0 FUN_1430705c0 body=659 status=ok
// SIG undefined FUN_1430705c0(void)

void FUN_1430705c0(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte local_res8 [8];
  
  if ((char)param_1[0xe4] != '\0') {
    *(undefined1 *)(param_1 + 0xe4) = 0;
    lVar5 = param_1[0xd3];
    lVar1 = lVar5 + (longlong)(int)param_1[0xd4] * 0x48;
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x48) {
      if (*(longlong **)(lVar5 + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar5 + 8) + 0x4b0))();
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9c,0);
    uVar8 = 0;
    puVar6 = (undefined8 *)param_1[0xe0];
    uVar9 = (longlong)(int)param_1[0xe1] & 0x1fffffffffffffff;
    if (puVar6 + (int)param_1[0xe1] < puVar6) {
      uVar9 = uVar8;
    }
    uVar7 = uVar8;
    if (uVar9 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar6 + 0x280))();
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 != uVar9);
    }
    if (0 < (int)param_1[0xe3]) {
      puVar6 = (undefined8 *)param_1[0xe2];
      iVar4 = (int)param_1[0xe3];
      uVar9 = (longlong)iVar4 & 0x1fffffffffffffff;
      if (puVar6 + iVar4 < puVar6) {
        uVar9 = uVar8;
      }
      uVar7 = uVar8;
      if (uVar9 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar6 + 0x280))();
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 != uVar9);
        iVar4 = (int)param_1[0xe3];
      }
      puVar6 = (undefined8 *)param_1[0xe2];
      uVar9 = (longlong)iVar4 & 0x1fffffffffffffff;
      if (puVar6 + iVar4 < puVar6) {
        uVar9 = uVar8;
      }
      uVar7 = uVar8;
      if (uVar9 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar6 + 0x2a8))((longlong *)*puVar6,0);
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 != uVar9);
      }
    }
    (**(code **)(*param_1 + 0x9a8))(param_1,0);
    if ((*(byte *)(param_1 + 0xfd) & 0x40) != 0) {
      bVar2 = *(byte *)(param_1 + 0x10);
      *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xbf;
      puVar6 = (undefined8 *)param_1[0xe0];
      uVar9 = (longlong)(int)param_1[0xe1] & 0x1fffffffffffffff;
      if (puVar6 + (int)param_1[0xe1] < puVar6) {
        uVar9 = uVar8;
      }
      uVar7 = uVar8;
      if (uVar9 != 0) {
        do {
          uVar3 = *puVar6;
          FUN_143087690(uVar3);
          FUN_1430875e0(uVar3);
          FUN_1430873b0(uVar3);
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 != uVar9);
      }
      puVar6 = (undefined8 *)param_1[0xe2];
      uVar9 = (longlong)(int)param_1[0xe3] & 0x1fffffffffffffff;
      if (puVar6 + (int)param_1[0xe3] < puVar6) {
        uVar9 = uVar8;
      }
      if (uVar9 != 0) {
        do {
          uVar3 = *puVar6;
          FUN_143087690(uVar3);
          FUN_1430875e0(uVar3);
          FUN_1430873b0(uVar3);
          uVar8 = uVar8 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar8 != uVar9);
      }
      if ((bVar2 & 1) == 0) {
        local_res8[0] = bVar2 & 1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0xae,local_res8);
      }
    }
    AActor::SetActorTickEnabled(param_1,0);
  }
  return;
}



// FUNCTION 143070860 FUN_143070860 body=208 status=ok
// SIG undefined FUN_143070860(void)

undefined8 FUN_143070860(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b47c88) && (_Init_thread_header(&DAT_146b47c88), DAT_146b47c88 == -1))
  {
    FName::FName(&DAT_146b47c80,L"FilterCategories",1);
    _Init_thread_footer(&DAT_146b47c88);
  }
  plVar2 = (longlong *)**(longlong **)(param_1 + 0x10);
  plVar1 = plVar2 + (int)(*(longlong **)(param_1 + 0x10))[1];
  plVar3 = plVar2;
  if (plVar2 != plVar1) {
    while (*plVar3 != DAT_146b47c80) {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar1) {
        return 1;
      }
    }
    if (plVar2 == plVar1) {
      return 0;
    }
    while (*plVar2 != *param_2) {
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar1) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 143070930 FUN_143070930 body=161 status=ok
// SIG undefined FUN_143070930(void)

undefined8 FUN_143070930(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b47c98) && (_Init_thread_header(&DAT_146b47c98), DAT_146b47c98 == -1))
  {
    FName::FName(&DAT_146b47c90,L"Details",1);
    _Init_thread_footer(&DAT_146b47c98);
  }
  plVar2 = (longlong *)**(longlong **)(param_1 + 0x10);
  plVar1 = plVar2 + (int)(*(longlong **)(param_1 + 0x10))[1];
  while( true ) {
    if (plVar2 == plVar1) {
      return 0;
    }
    if (*plVar2 == DAT_146b47c90) break;
    plVar2 = plVar2 + 1;
  }
  return 1;
}



// FUNCTION 1430709e0 FUN_1430709e0 body=859 status=ok
// SIG undefined FUN_1430709e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430709e0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint7 uVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auStack_118 [32];
  float local_f8;
  uint local_f0;
  undefined1 local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  bVar3 = *(byte *)(param_1 + 0xd2);
  iVar2 = (int)param_1[0xd4];
  uVar8 = (uint7)(uint3)((uint)iVar2 >> 8);
  if (*(char *)((longlong)param_1 + 0x639) == '\x01') {
    if ((int)(uint)bVar3 < iVar2) {
      if (((*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar3 * 0x48) != 0) &&
          (lVar7 = *(longlong *)(param_1[0xd3] + 0x20 + (ulonglong)bVar3 * 0x48), lVar7 != 0)) &&
         (cVar4 = FUN_14309f7d0(lVar7,CONCAT71(uVar8,1)), cVar4 != '\0')) {
        (**(code **)(*param_1 + 0x8c0))(param_1,1);
      }
    }
    FUN_14308a790(param_1,0);
    (**(code **)(*param_1 + 0x9c8))(param_1);
  }
  else {
    if ((int)(uint)bVar3 < iVar2) {
      if (((*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar3 * 0x48) != 0) &&
          (lVar7 = *(longlong *)(param_1[0xd3] + 0x20 + (ulonglong)bVar3 * 0x48), lVar7 != 0)) &&
         (cVar4 = FUN_14309f7d0(lVar7,CONCAT71(uVar8,1)), cVar4 != '\0')) {
        (**(code **)(*param_1 + 0x8c0))(param_1,0,1);
        return;
      }
    }
    bVar3 = *(byte *)(param_1 + 0xd2);
    if ((((int)param_1[0xd4] <= (int)(uint)bVar3) ||
        (*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar3 * 0x48) == 0)) ||
       ((*(longlong *)(param_1[0xd3] + 0x20 + (ulonglong)bVar3 * 0x48) == 0 ||
        (cVar4 = FUN_14309f7c0(), cVar4 == '\0')))) {
      FUN_14308a790(param_1,0);
      cVar4 = *(char *)((longlong)param_1 + 0x639);
      fVar10 = (float)FUN_14307c4a0(param_1);
      local_e8 = 0;
      local_f0 = local_f0 & 0xffffff00;
      uVar5 = 4;
      if (cVar4 != '\0') {
        uVar5 = 0;
      }
      local_f8 = fVar10;
      (**(code **)(*param_1 + 0x990))(param_1,&local_c8,uVar5,0x3f800000);
      if (fVar10 <= 0.0) {
        if (local_c8 != (longlong *)0x0) {
          fVar10 = (float)(**(code **)(*local_c8 + 0x58))();
        }
        if (fVar10 <= 0.01) {
          fVar10 = 0.01;
        }
      }
      uStack_d0 = 0;
      local_d8 = &LAB_140e15310;
      uVar5 = AActor::GetWorldTimerManager(param_1);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      local_b8 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_d8;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_d8._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_d0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_cc;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_f0 = 0xbf800000;
      local_f8 = (float)((uint)local_f8 & 0xffffff00);
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar5,param_1 + 0xce,&local_a8,fVar10);
      if (local_48 != 0) {
        plVar9 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar9 = local_58;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        local_b8 = (longlong *)FMemory::Realloc(plVar6,0,0);
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free(local_b8);
        }
      }
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_c0 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143070d40 FUN_143070d40 body=1378 status=ok
// SIG undefined FUN_143070d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001430710ba) */
/* WARNING: Removing unreachable block (ram,0x0001430710c7) */
/* WARNING: Removing unreachable block (ram,0x0001430710d3) */
/* WARNING: Removing unreachable block (ram,0x0001430710e7) */
/* WARNING: Removing unreachable block (ram,0x0001430710f3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143070d40(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  char param_5,char param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_6b8 [32];
  undefined8 local_698;
  undefined4 local_688;
  undefined8 local_680;
  longlong local_678;
  undefined8 local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  longlong *local_658;
  undefined4 local_650;
  undefined1 local_648 [16];
  longlong local_638;
  undefined8 local_630;
  undefined1 local_620;
  ushort local_61e;
  undefined8 local_618;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined1 local_5f8 [80];
  undefined1 local_5a8 [80];
  undefined1 local_558 [80];
  undefined1 local_508 [80];
  undefined1 local_4b8 [560];
  longlong local_288 [2];
  undefined8 local_278;
  longlong lStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  uint local_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  longlong local_230;
  undefined8 local_228;
  undefined2 local_220;
  longlong local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined2 local_1f0;
  undefined4 local_1ec;
  undefined2 local_1e8;
  undefined1 local_1e6;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0 [8];
  undefined8 local_1c8;
  undefined1 local_1c0 [8];
  undefined8 local_1b8;
  longlong *local_1b0;
  int local_1a8;
  undefined1 local_1a0 [256];
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_6b8;
  local_688 = 0;
  uVar4 = FUN_1412996f0();
  if (param_6 == '\0') {
    lVar5 = param_1[0x23];
    if (*param_2 != 0) {
      lVar9 = FUN_1428dfc70();
      lVar6 = *param_2;
      for (lVar10 = lVar6; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
        if (lVar10 == lVar9) goto LAB_1430711d2;
      }
    }
    lVar6 = 0;
LAB_1430711d2:
    lVar10 = param_1[0x24];
    if (lVar10 == 0) {
      lVar10 = FUN_1423407b0(param_1);
    }
    FActorSpawnParameters::FActorSpawnParameters(local_648);
    local_61e = local_61e | 4;
    local_620 = 1;
    if ((lVar6 != 0) &&
       (local_638 = lVar5, local_630 = uVar4, lVar5 = FUN_142550d00(lVar10,lVar6,param_4,local_648),
       lVar5 != 0)) {
      lVar6 = FUN_1428dfc70();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar6 = *param_1;
        local_698 = FUN_141289d90(local_508,param_3);
        (**(code **)(lVar6 + 0x620))(param_1,lVar5,param_4,0);
      }
    }
  }
  else {
    puVar11 = (undefined8 *)0x0;
    local_220 = 0;
    local_288[0] = 0;
    local_258 = _DAT_146b47840 & _DAT_146b47850;
    uStack_254 = uRam0000000146b47844 & uRam0000000146b47854;
    uStack_250 = uRam0000000146b47848 & uRam0000000146b47858;
    uStack_24c = uRam0000000146b4784c & uRam0000000146b4785c;
    local_278 = 0;
    lStack_270 = (ulonglong)uRam0000000146b4784c << 0x20;
    local_248 = 0;
    uStack_240 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = 1;
    local_1f0 = 0;
    local_1ec = 0;
    local_1e8 = 0;
    local_1e6 = 1;
    local_1e0 = 0;
    local_1d8 = 0;
    FWeakObjectPtr::operator=(local_1d0,0);
    local_1c8 = 0;
    FWeakObjectPtr::operator=(local_1c0,0);
    local_288[0] = *param_2;
    local_278 = *param_4;
    lStack_270 = param_4[1];
    local_268 = param_4[2];
    uStack_260 = param_4[3];
    local_218 = param_1[0x23];
    local_258 = *(uint *)(param_4 + 4);
    uStack_254 = *(undefined4 *)((longlong)param_4 + 0x24);
    uStack_250 = *(uint *)(param_4 + 5);
    uStack_24c = *(undefined4 *)((longlong)param_4 + 0x2c);
    local_1b8 = 0;
    local_1b0 = (longlong *)0x0;
    local_1a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_210 = FUN_1412996f0(param_1);
    local_200 = CONCAT44(param_7,(undefined4)local_200);
    local_668 = &LAB_143068c1c;
    local_1d8 = 1;
    uStack_660 = 0;
    lVar5 = FUN_141289d90(local_5f8,param_3);
    lVar6 = FUN_141289d90(local_5a8,lVar5);
    plVar7 = (longlong *)FMemory::Realloc(0,0x80,0);
    local_650 = 8;
    local_658 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      local_608 = (undefined4)local_668;
      uStack_604 = local_668._4_4_;
      uStack_600 = uStack_660;
      uStack_5fc = uStack_65c;
      uVar4 = FUN_141289d90(local_558,lVar6);
      FUN_143066c20(plVar7,param_1,&local_608,uVar4);
    }
    if (*(longlong *)(lVar6 + 8) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar5 + 8) != 0) {
      FMemory::Free();
    }
    if (plVar7 == (longlong *)0x0) {
      if ((local_1a8 != 0) && (local_1b0 != (longlong *)0x0)) {
        (**(code **)(*local_1b0 + 0x28))(local_1b0,0);
        if (local_1b0 != (longlong *)0x0) {
          local_1b0 = (longlong *)FMemory::Realloc(local_1b0,0,0);
        }
        local_1a8 = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_1b0);
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      local_658 = (longlong *)FMemory::Realloc(plVar7,0,0);
      local_650 = 0;
      if (local_658 != (longlong *)0x0) {
        FMemory::Free(local_658);
      }
    }
    if (param_5 == '\0') {
      lVar5 = param_1[0x23];
      puVar8 = (undefined8 *)operator_new(0x260);
      if (puVar8 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar8 + 1) = 0xff;
        *puVar8 = &PTR_FUN_143f3edd8;
        local_618 = 0;
        local_680 = 0;
        *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
        *puVar8 = &PTR__scalar_deleting_destructor__145a67f90;
        *(undefined1 *)(puVar8 + 0x4a) = 0;
        puVar8[0x4b] = 0;
        puVar11 = puVar8;
      }
      FWeakObjectPtr::operator=(puVar11 + 2,lVar5);
      FUN_140a7a570(puVar11 + 4,local_288);
      lVar5 = puVar11[0x4b];
      piVar1 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_678 = lVar5;
      FUN_14308d250(puVar11,0,0xff,1);
      if (lVar5 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(local_678);
        }
      }
    }
    else {
      lVar5 = param_1[0x24];
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      uVar4 = FUN_140a7a570(local_4b8,local_288);
      FUN_1424ad6e0(lVar5,uVar4);
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
    FUN_1409f5970(local_1a0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b0);
    if (local_230 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1430712b0 FUN_1430712b0 body=529 status=ok
// SIG undefined FUN_1430712b0(void)

void FUN_1430712b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_1[0xff] != DAT_146b47938) {
    (**(code **)(*param_1 + 0x7d8))(param_1,1);
  }
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  uVar8 = 0;
  uVar4 = uVar8;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar5;
    uVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  if ((*(uint *)(uVar4 + 8) >> 0x1d & 1) == 0) {
    if ((char)param_1[0x25] == '\x03') {
      param_1[0xc3] = 0;
      if (param_1[0x23] == param_1[0x2a]) {
        (**(code **)(*param_1 + 0x448))(param_1,0);
      }
      param_1[0x2a] = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x62c) = 0xff;
    param_1[0xc6] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    *(undefined1 *)(param_1 + 0xcf) = 0;
    *(undefined1 *)((longlong)param_1 + 0x67a) = 0;
    if (0 < (int)param_1[0xd7]) {
      plVar6 = (longlong *)param_1[0xd6];
      if ((longlong *)param_1[0xd6] == (longlong *)0x0) {
        plVar6 = param_1 + 0xd5;
      }
      *(undefined1 *)plVar6 = 0;
    }
    FUN_14308b050(param_1,0);
    (**(code **)(*param_1 + 0x9a8))(param_1,0);
    FUN_14308b8d0(param_1,0);
    plVar6 = (longlong *)param_1[0xe0];
    uVar4 = (longlong)(int)param_1[0xe1] & 0x1fffffffffffffff;
    if (plVar6 + (int)param_1[0xe1] < plVar6) {
      uVar4 = uVar8;
    }
    uVar7 = uVar8;
    if (uVar4 != 0) {
      do {
        lVar2 = *plVar6;
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x44) != '\0')) {
          *(undefined1 *)(lVar2 + 0x44) = 0;
          FUN_143087950(lVar2,0);
        }
        plVar6 = plVar6 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar4);
    }
    plVar6 = (longlong *)param_1[0xe2];
    uVar4 = (longlong)(int)param_1[0xe3] & 0x1fffffffffffffff;
    if (plVar6 + (int)param_1[0xe3] < plVar6) {
      uVar4 = uVar8;
    }
    if (uVar4 != 0) {
      do {
        lVar2 = *plVar6;
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x44) != '\0')) {
          *(undefined1 *)(lVar2 + 0x44) = 0;
          FUN_143087950(lVar2,0);
        }
        plVar6 = plVar6 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar4);
    }
    lVar9 = param_1[0xd3];
    lVar2 = lVar9 + (longlong)(int)param_1[0xd4] * 0x48;
    for (; lVar9 != lVar2; lVar9 = lVar9 + 0x48) {
      (**(code **)(**(longlong **)(lVar9 + 8) + 0x4c8))();
    }
  }
  return;
}



// FUNCTION 1430714d0 FUN_1430714d0 body=152 status=ok
// SIG undefined FUN_1430714d0(void)

longlong * FUN_1430714d0(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (param_2 != 0) {
    if ((param_1 + 1U & 0xfffffffffffffffe) == 0) {
      param_1 = GetTransientPackage();
    }
    plVar1 = (longlong *)FUN_1417987a0(param_2,param_1,0,0xefffffff,0,0,0xff800000);
  }
  *(undefined1 *)(plVar1 + 5) = param_4;
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_3,param_2);
  return plVar1;
}



// FUNCTION 143071570 FUN_143071570 body=248 status=ok
// SIG undefined FUN_143071570(void)

longlong * FUN_143071570(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar4 = 0;
  }
  plVar2 = (longlong *)FUN_142227070(uVar4,param_2,0);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1429bed90();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(char *)(param_1 + 0x28) != '\0') {
        (**(code **)(*plVar2 + 0x638))(plVar2,0);
      }
      FUN_142cfe720(plVar2);
      FUN_14234b150(plVar2);
      if (*(char *)(param_1 + 0x28) != '\0') {
        FUN_1423970c0(plVar2,0);
        FUN_1423974c0(plVar2,1);
        *(byte *)((longlong)plVar2 + 0x2f3) = *(byte *)((longlong)plVar2 + 0x2f3) | 8;
      }
      (**(code **)(*plVar2 + 0x290))(plVar2,0,0);
      return plVar2;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 143071670 FUN_143071670 body=111 status=ok
// SIG undefined FUN_143071670(void)

void FUN_143071670(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0xdd] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      FUN_142880530(uVar2,param_1 + 0xdd);
      param_1[0xdd] = 0;
    }
  }
  return;
}



// FUNCTION 1430716e0 FUN_1430716e0 body=180 status=ok
// SIG undefined FUN_1430716e0(void)

void FUN_1430716e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = *param_1;
  uVar3 = (**(code **)(lVar1 + 0x7f0))();
  (**(code **)(lVar1 + 0x9a0))(param_1,uVar3);
  uVar2 = AActor::GetWorldTimerManager(param_1);
  FUN_142880530(uVar2,param_1 + 0xca);
  param_1[0xca] = 0;
  if (param_1[0xcb] != 0) {
    uVar2 = AActor::GetWorldTimerManager(param_1);
    FUN_142880530(uVar2,param_1 + 0xcb);
    param_1[0xcb] = 0;
    if ((char)param_1[0xe4] != '\0') {
      FUN_14308b8d0(param_1,1);
    }
  }
  *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xfd;
  *(undefined1 *)(param_1 + 199) = 0;
  if (((char)param_1[0x25] == '\x03') && ((char)param_1[0xc4] != '\x01')) {
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  return;
}



// FUNCTION 1430717a0 FUN_1430717a0 body=65 status=ok
// SIG undefined FUN_1430717a0(void)

void FUN_1430717a0(longlong *param_1)

{
  FUN_14223eb20(param_1,0x42c80000,0x42c80000);
  if ((char)param_1[0x25] == '\x03') {
    FUN_14223e980(param_1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001430717da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x600))(param_1);
  return;
}



// FUNCTION 1430717f0 FUN_1430717f0 body=42 status=ok
// SIG undefined FUN_1430717f0(void)

void FUN_1430717f0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = AActor::GetWorldTimerManager();
  FUN_142880530(uVar1,(undefined8 *)(param_1 + 0x6f8));
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  return;
}



// FUNCTION 143071820 FUN_143071820 body=106 status=ok
// SIG undefined FUN_143071820(void)

void FUN_143071820(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x679) & 1) != 0) {
    FUN_1430910d0();
  }
  uVar1 = AActor::GetWorldTimerManager(param_1);
  FUN_142880530(uVar1,param_1 + 0x680);
  *(undefined8 *)(param_1 + 0x680) = 0;
  uVar1 = AActor::GetWorldTimerManager(param_1);
  FUN_142880530(uVar1,param_1 + 0x688);
  *(undefined8 *)(param_1 + 0x688) = 0;
  return;
}



// FUNCTION 143071890 FUN_143071890 body=74 status=ok
// SIG undefined FUN_143071890(void)

void FUN_143071890(longlong *param_1,int param_2)

{
  if ((((param_2 == 0) && (*(char *)((longlong)param_1 + 0x501) != '\0')) &&
      ((*(byte *)(param_1 + 0xa0) & 1) == 0)) && ((char)param_1[0x25] != '\x03')) {
    (**(code **)(*param_1 + 0x6f8))();
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 1430718e0 FUN_1430718e0 body=169 status=ok
// SIG undefined FUN_1430718e0(void)

void FUN_1430718e0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  FUN_14222a250();
  if ((param_2 == 0) && (lVar1 = param_1[0xc6], lVar1 != 0)) {
    if (((char)param_1[0x25] != '\x03') && (*(char *)((longlong)param_1 + 0x62c) != -1)) {
      param_1[0xc3] = 0;
      *(undefined1 *)((longlong)param_1 + 0x614) = 0xff;
      *(undefined1 *)((longlong)param_1 + 0x621) = 1;
      uVar2 = FUN_1430a8880();
      plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x1b8))(plVar3,param_1,*(undefined1 *)((longlong)param_1 + 0x62c));
      }
      FUN_1430712b0(param_1);
      return;
    }
    (**(code **)(*param_1 + 0x9c8))(param_1);
  }
  return;
}



// FUNCTION 143071990 FUN_143071990 body=48 status=ok
// SIG undefined FUN_143071990(void)

void FUN_143071990(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(param_1 + 0x670);
  if (*plVar1 != 0) {
    uVar2 = AActor::GetWorldTimerManager();
    FUN_142880530(uVar2,plVar1);
    *plVar1 = 0;
  }
  return;
}



// FUNCTION 1430719c0 FUN_1430719c0 body=104 status=ok
// SIG undefined FUN_1430719c0(void)

void FUN_1430719c0(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  
  bVar1 = *(byte *)(param_1 + 0x690);
  if (((((int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
      (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x698) + 0x18 + (ulonglong)bVar1 * 0x48),
      plVar2 != (longlong *)0x0)) && (cVar3 = (**(code **)(*plVar2 + 0x3f8))(plVar2), cVar3 != '\0')
     ) {
                    /* WARNING: Could not recover jumptable at 0x000143071a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x410))(plVar2);
    return;
  }
  return;
}



// FUNCTION 143071a30 FUN_143071a30 body=190 status=ok
// SIG undefined FUN_143071a30(void)

void FUN_143071a30(longlong param_1,byte param_2,char param_3,undefined1 param_4)

{
  byte bVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x6b8)) {
    if (param_3 != '\0') {
      *(undefined1 *)(param_1 + 0x6c4) = 0;
      cVar4 = '\0';
      *(uint *)(param_1 + 0x6c0) = *(uint *)(param_1 + 0x6c0) & ~(1 << (param_2 & 0x1f));
      uVar3 = *(uint *)(param_1 + 0x6c0);
      if (*(uint *)(param_1 + 0x6c0) != 0) {
        do {
          if ((uVar3 & 1) != 0) {
            *(char *)(param_1 + 0x6c4) = cVar4;
            break;
          }
          cVar4 = cVar4 + '\x01';
          bVar6 = 1 < uVar3;
          uVar3 = uVar3 >> 1;
        } while (bVar6);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x6b0);
    if (*(longlong *)(param_1 + 0x6b0) == 0) {
      lVar5 = param_1 + 0x6a8;
    }
    bVar1 = *(byte *)(lVar5 + (ulonglong)param_2);
    if (((int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) {
      *(undefined1 *)(param_1 + 0x6f2) = 1;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48);
      (**(code **)(*plVar2 + 0x420))(plVar2,param_4);
      *(undefined1 *)(param_1 + 0x6f2) = 0;
    }
  }
  return;
}



// FUNCTION 143071af0 FUN_143071af0 body=107 status=ok
// SIG undefined FUN_143071af0(void)

void FUN_143071af0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if ((int)(uint)*(byte *)(param_1 + 0x690) < *(int *)(param_1 + 0x6a0)) {
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)*(byte *)(param_1 + 0x690) * 0x48);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x408))();
      if (cVar2 != '\0') {
        plVar1 = *(longlong **)
                  (*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)*(byte *)(param_1 + 0x690) * 0x48
                  );
                    /* WARNING: Could not recover jumptable at 0x000143071b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x420))(plVar1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143071b60 FUN_143071b60 body=118 status=ok
// SIG undefined FUN_143071b60(void)

void FUN_143071b60(longlong *param_1)

{
  longlong lVar1;
  longlong local_res8;
  
  lVar1 = param_1[0xff];
  if (DAT_146b479a8 != lVar1) {
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
    (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479a8);
    local_res8 = param_1[0xff];
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
    if (local_res8 == lVar1) {
      param_1[0xff] = DAT_146b479a8;
      (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
    }
  }
  return;
}



// FUNCTION 143071be0 FUN_143071be0 body=135 status=ok
// SIG undefined FUN_143071be0(void)

void FUN_143071be0(longlong *param_1)

{
  char cVar1;
  
  if ((param_1[0xff] == DAT_146b479a8) && ((*(byte *)(param_1 + 0xcc) & 2) == 0)) {
    *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | 2;
    if ((*(byte *)(param_1 + 0x25) < 3) && ((longlong *)param_1[0x2a] != (longlong *)0x0)) {
      cVar1 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))();
      if (cVar1 != '\0') {
        FUN_1430b4690(param_1);
      }
    }
    if (((int)param_1[0xd8] != 0) && (param_1[0xff] == DAT_146b479a8)) {
                    /* WARNING: Could not recover jumptable at 0x000143071c5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x9c0))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143071c70 FUN_143071c70 body=108 status=ok
// SIG undefined FUN_143071c70(void)

undefined1 FUN_143071c70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar2 = UDungeonEventListener::GetPrivateStaticClass();
    lVar3 = *(longlong *)(param_1 + 0x50);
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if (lVar3 == 0) {
          return 0;
        }
        lVar3 = FUN_142db9260(lVar3,param_2);
        if (lVar3 == 0) {
          return 0;
        }
        if (lVar3 == *(longlong *)(param_1 + 0x48)) {
          return 0;
        }
        *(longlong *)(param_1 + 0x48) = lVar3;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143071ce0 FUN_143071ce0 body=330 status=ok
// SIG undefined FUN_143071ce0(void)

ulonglong FUN_143071ce0(longlong param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      bVar1 = *(byte *)(param_2 + 0x690);
      uVar4 = (ulonglong)bVar1;
      if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
        if (((int)(uint)bVar1 < *(int *)(param_2 + 0x6a0)) &&
           (*(longlong *)(*(longlong *)(param_2 + 0x698) + 8 + uVar4 * 0x48) != 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(*(longlong *)(param_2 + 0x698) + 0x20 + uVar4 * 0x48) != 0)) {
          uVar4 = FUN_14309f7c0();
          return uVar4 ^ 1;
        }
        return 1;
      }
      if (((int)(uint)bVar1 < *(int *)(param_2 + 0x6a0)) &&
         (*(longlong *)(*(longlong *)(param_2 + 0x698) + 8 + uVar4 * 0x48) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((bVar2) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x698) + 0x20 + uVar4 * 0x48), lVar3 != 0))
      {
        uVar4 = FUN_14309f7d0(lVar3,*(byte *)(param_1 + 0x88) >> 1 & 1);
        return uVar4;
      }
      return 0;
    }
  }
  return (ulonglong)(~*(byte *)(param_1 + 0x88) & 1);
}



// FUNCTION 143071e30 FUN_143071e30 body=243 status=ok
// SIG undefined FUN_143071e30(void)

ulonglong FUN_143071e30(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1429ff160();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
     (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  if ((char)uVar3 == '\0') {
    lVar2 = FUN_1430c2040();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)uVar3 == '\0') {
      lVar2 = UMaterialInstanceDynamic::GetPrivateStaticClass();
      iVar1 = *(int *)(lVar2 + 0x90);
      uVar3 = (longlong)iVar1;
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
         (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
         *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
        uVar3 = uVar3 & 0xffffffffffffff00;
      }
      else {
        uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
      }
      if ((char)uVar3 == '\0') {
        lVar2 = FUN_142e27720();
        iVar1 = *(int *)(lVar2 + 0x90);
        uVar3 = (longlong)iVar1;
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
           (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
           *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
          uVar3 = uVar3 & 0xffffffffffffff00;
        }
        else {
          uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
        }
        if ((char)uVar3 == '\0') {
          return uVar3;
        }
      }
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 143071f30 FUN_143071f30 body=579 status=ok
// SIG undefined FUN_143071f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143071f30(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  if (param_2 != 0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
    if ((*(byte *)(param_2 + 0x93) & 4) == 0) {
      FUN_14222b9f0(param_2,param_3,1,0);
    }
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
    if (plVar2 == (longlong *)0x0) {
      local_a8 = 0x7f7fffff7f7fffff;
      local_a0 = 0x7f7fffff;
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      uVar3 = FUN_142231800(param_2);
      lVar4 = FUN_142ddddc0(uVar3);
      if ((lVar4 == 0) || (cVar1 = FUN_142dd0420(lVar4,plVar2,&local_a8), cVar1 == '\0')) {
        if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
          lVar4 = FUN_142dddd00(plVar2);
          if (lVar4 == 0) {
            lVar4 = plVar2[0x2d];
            if (lVar4 == 0) {
              local_90 = DAT_1468b5d98;
              local_98 = _DAT_1468b5d90;
              local_a8 = _DAT_1468b5d90;
              local_a0 = DAT_1468b5d98;
            }
            else {
              local_a8 = *(undefined8 *)(lVar4 + 0x220);
              local_a0 = *(undefined4 *)(lVar4 + 0x228);
              local_98 = local_a8;
              local_90 = local_a0;
            }
          }
          else {
            puVar5 = (undefined8 *)FUN_142dd0240(lVar4,&local_88);
            local_a8 = *puVar5;
            local_a0 = *(undefined4 *)(puVar5 + 1);
          }
        }
        else {
          lVar4 = FUN_1423111b0(local_58,plVar2,*(undefined8 *)(param_1 + 0x10));
          local_a8 = *(undefined8 *)(lVar4 + 0x10);
          local_a0 = (undefined4)*(undefined8 *)(lVar4 + 0x18);
          local_80 = local_a0;
        }
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x308))(plVar2,&local_88);
      local_68 = *puVar5;
      local_60 = *(undefined4 *)(puVar5 + 1);
    }
    local_90 = *(undefined4 *)(param_1 + 0x20);
    local_98 = *(undefined8 *)(param_1 + 0x18);
    local_70 = *(undefined4 *)(param_1 + 0x2c);
    local_b0 = &local_98;
    local_b8 = &local_78;
    local_78 = *(undefined8 *)(param_1 + 0x24);
    local_c0 = *(undefined4 *)(param_1 + 0x38);
    local_c8 = *(undefined4 *)(param_1 + 0x34);
    local_88 = local_a8;
    local_80 = local_a0;
    FUN_143091410(param_2,&local_88,&local_68,*(undefined4 *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 143072180 FUN_143072180 body=48 status=ok
// SIG undefined FUN_143072180(void)

void FUN_143072180(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001430721a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x288))();
    return;
  }
  return;
}



// FUNCTION 1430721d0 FUN_1430721d0 body=151 status=ok
// SIG undefined FUN_1430721d0(void)

void FUN_1430721d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_58 [80];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = FUN_141289d90(local_58,param_1 + 0x20);
  (*pcVar1)((int)uVar2 + lVar3,param_2,param_3,param_4,uVar4);
  return;
}



// FUNCTION 143072270 FUN_143072270 body=159 status=ok
// SIG undefined FUN_143072270(void)

void FUN_143072270(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [160];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  local_b0 = *(undefined4 *)(param_1 + 0xb8);
  local_b8 = *(undefined8 *)(param_1 + 0xb0);
  pcVar1 = *(code **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = FUN_140729f20(local_a8,param_1 + 0x20);
  (*pcVar1)((int)uVar2 + lVar3,uVar4,&local_b8,*(undefined4 *)(param_1 + 0xbc),
            *(undefined4 *)(param_1 + 0xc0));
  return;
}



// FUNCTION 143072310 FUN_143072310 body=393 status=ok
// SIG undefined FUN_143072310(void)

undefined8 FUN_143072310(longlong param_1,void **param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (((*(longlong *)(param_1 + 8) == 0) || (lVar2 = FWeakObjectPtr::Get(), lVar2 == 0)) ||
     (lVar2 = UObject::FindFunction(lVar2), lVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    local_d8 = (void *)0x0;
    local_c8 = (void *)0x0;
    pvStack_c0 = (void *)0x0;
    local_d0 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_44 = 0xffffffff;
    local_40 = 0;
    local_3c = 0xffffffff;
    local_38 = 0;
    local_34 = 0xffffffff;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
    local_9c = 0x3f800000;
    if (&local_d8 != param_2) {
      iVar1 = *(int *)(param_2 + 1);
      _Src = *param_2;
      local_d0 = CONCAT44(local_d0._4_4_,iVar1);
      if ((iVar1 == 0) && (local_d0._4_4_ == 0)) {
        local_d0 = 0;
      }
      else {
        TArray<FVRMoveActionContainer,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_d8,iVar1);
        _guard_xfg_dispatch_icall_nop(local_d8,_Src,(longlong)iVar1 * 0x1c);
      }
    }
    local_c8 = param_2[2];
    pvStack_c0 = param_2[3];
    local_b0 = *(undefined4 *)(param_2 + 5);
    local_b8 = param_2[4];
    FUN_140729f20(local_a8,param_2 + 6);
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1);
    uVar4 = FUN_14178ac60(plVar3,*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar3 + 0x208))(plVar3,uVar4,&local_d8);
    if (local_d8 != (void *)0x0) {
      FMemory::Free();
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1430724a0 FUN_1430724a0 body=582 status=ok
// SIG undefined FUN_1430724a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1430724a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x93) & 4) == 0) {
      FUN_14222b9f0(param_2,param_3,1,0);
    }
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
    if (plVar2 == (longlong *)0x0) {
      local_a8 = 0x7f7fffff7f7fffff;
      local_a0 = 0x7f7fffff;
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      uVar3 = FUN_142231800(param_2);
      lVar4 = FUN_142ddddc0(uVar3);
      if ((lVar4 == 0) || (cVar1 = FUN_142dd0420(lVar4,plVar2,&local_a8), cVar1 == '\0')) {
        if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
          lVar4 = FUN_142dddd00(plVar2);
          if (lVar4 == 0) {
            lVar4 = plVar2[0x2d];
            if (lVar4 == 0) {
              local_90 = DAT_1468b5d98;
              local_98 = _DAT_1468b5d90;
              local_a8 = _DAT_1468b5d90;
              local_a0 = DAT_1468b5d98;
            }
            else {
              local_a8 = *(undefined8 *)(lVar4 + 0x220);
              local_a0 = *(undefined4 *)(lVar4 + 0x228);
              local_98 = local_a8;
              local_90 = local_a0;
            }
          }
          else {
            puVar5 = (undefined8 *)FUN_142dd0240(lVar4,&local_88);
            local_a8 = *puVar5;
            local_a0 = *(undefined4 *)(puVar5 + 1);
          }
        }
        else {
          lVar4 = FUN_1423111b0(local_58,plVar2,*(undefined8 *)(param_1 + 0x10));
          local_a8 = *(undefined8 *)(lVar4 + 0x10);
          local_a0 = (undefined4)*(undefined8 *)(lVar4 + 0x18);
          local_80 = local_a0;
        }
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x308))(plVar2,&local_88);
      local_68 = *puVar5;
      local_60 = *(undefined4 *)(puVar5 + 1);
    }
    local_90 = *(undefined4 *)(param_1 + 0x20);
    local_98 = *(undefined8 *)(param_1 + 0x18);
    local_70 = *(undefined4 *)(param_1 + 0x2c);
    local_b0 = &local_98;
    local_b8 = &local_78;
    local_78 = *(undefined8 *)(param_1 + 0x24);
    local_c0 = *(undefined4 *)(param_1 + 0x38);
    local_c8 = *(undefined4 *)(param_1 + 0x34);
    local_88 = local_a8;
    local_80 = local_a0;
    FUN_143091410(param_2,&local_88,&local_68,*(undefined4 *)(param_1 + 0x30));
  }
  return 1;
}



// FUNCTION 1430726f0 FUN_1430726f0 body=44 status=ok
// SIG undefined FUN_1430726f0(void)

undefined8 FUN_1430726f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x288))();
  }
  return 1;
}



// FUNCTION 143072720 FUN_143072720 body=34 status=ok
// SIG undefined FUN_143072720(void)

undefined8 FUN_143072720(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 8))(param_2,param_3,*(undefined8 *)(param_1 + 0x10));
  return 1;
}



// FUNCTION 143072750 FUN_143072750 body=167 status=ok
// SIG undefined FUN_143072750(void)

bool FUN_143072750(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_58 [80];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    lVar4 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = FUN_141289d90(local_58,param_1 + 0x20);
    (*pcVar1)((int)uVar2 + lVar4,param_2,param_3,param_4,uVar5);
  }
  return lVar3 != 0;
}



// FUNCTION 143072800 FUN_143072800 body=196 status=ok
// SIG undefined FUN_143072800(void)

undefined8 FUN_143072800(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [160];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 8);
    local_b0 = *(undefined4 *)(param_1 + 0xb8);
    local_b8 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = FUN_140729f20(local_a8,param_1 + 0x20);
    (*pcVar1)((int)uVar2 + lVar3,uVar4,&local_b8,*(undefined4 *)(param_1 + 0xbc),
              *(undefined4 *)(param_1 + 0xc0));
    return 1;
  }
  return 0;
}



// FUNCTION 1430728d0 FUN_1430728d0 body=147 status=ok
// SIG undefined FUN_1430728d0(void)

void FUN_1430728d0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x2a) == '\0') {
    FUN_143040df0(param_1 + 2);
  }
  else {
    FUN_143040e50(param_1 + 2,*(undefined4 *)((longlong)param_1 + 0x154));
  }
  param_1[2] = &PTR_FUN_1441f17f0;
  FWeakObjectPtr::operator=(param_1 + 0x27,0);
  param_1[0x28] = 0;
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x2b) = 0;
                    /* WARNING: Could not recover jumptable at 0x000143072960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 143072970 FUN_143072970 body=312 status=ok
// SIG undefined FUN_143072970(void)

void FUN_143072970(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  long lVar6;
  
  lVar6 = (int)param_1 + 0x10;
  plVar3 = (longlong *)FWeakObjectPtr::Get();
  if (plVar3 != (longlong *)0x0) {
    if (param_3 != 2) {
      AK::MemoryMgr::StartProfileThreadUsage(lVar6);
    }
    (**(code **)(*plVar3 + 0x628))
              (plVar3,param_1 + 3,*(undefined4 *)(param_1 + 0x1a),
               *(undefined4 *)((longlong)param_1 + 0xd4),param_3 == 2);
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *param_1 = &PTR_FUN_145a67f80;
  if (param_1[0x1c] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1c] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar3 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar3;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar3 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar3;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 143072ab0 FUN_143072ab0 body=118 status=ok
// SIG undefined FUN_143072ab0(void)

void FUN_143072ab0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14249c670(param_1 + 2,param_3,param_1 + 0x4b);
  if (param_1[0x47] != 0) {
    FMemory::Free();
  }
  FUN_1409f5970(param_1 + 0x21);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1f);
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x4a) = 0;
                    /* WARNING: Could not recover jumptable at 0x000143072b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 143072b30 FUN_143072b30 body=588 status=ok
// SIG undefined FUN_143072b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143072b30(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 auStack_238 [32];
  undefined1 local_218 [8];
  longlong *local_210;
  longlong local_1d0;
  undefined1 local_11c;
  undefined1 local_10c;
  undefined1 local_fc;
  undefined1 local_ec;
  undefined1 local_dc;
  undefined1 local_cc;
  undefined1 local_bc;
  undefined1 local_b4;
  undefined1 local_a4;
  undefined1 local_9c;
  longlong local_80;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  cVar4 = UMaterialInterface::GetCastShadowAsMasked();
  if (cVar4 != '\0') {
    return;
  }
  if (((*(byte *)(param_1 + 0xa0) & 1) != 0) && (*(char *)((longlong)param_1 + 0x5ad) != '\0')) {
    return;
  }
  FUN_1430b3e30(param_1);
  lVar6 = param_1[0x9f];
  *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | 1;
  if (lVar6 == 0) {
    FUN_143094d00(param_1);
    lVar6 = param_1[0x9f];
    if (lVar6 == 0) goto LAB_143072bb3;
  }
  FUN_142e15e50(lVar6,param_1 + 0x8e);
LAB_143072bb3:
  FUN_1430b3fc0(param_1);
  lVar6 = 0;
  if (*(char *)((longlong)param_1 + 0x5ae) != '\0') {
    FUN_142d0a300(local_218);
    (**(code **)(*param_1 + 0x700))(param_1,local_218);
    FUN_142d34f80(param_1,param_1[0xb6],0,local_218);
    if (local_28 != 0) {
      plVar8 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar8 = local_38;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    local_9c = 0;
    local_a4 = 0;
    local_b4 = 0;
    local_bc = 0;
    local_cc = 0;
    local_dc = 0;
    local_ec = 0;
    local_fc = 0;
    local_10c = 0;
    local_11c = 0;
    if (local_1d0 != 0) {
      FMemory::Free();
    }
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_210 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)local_210 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_210 + 8))(local_210,1);
        }
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x5ad) != '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar7 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      (**(code **)(*param_1 + 0x6d0))(param_1,0);
    }
  }
  return;
}



// FUNCTION 143072d80 FUN_143072d80 body=738 status=ok
// SIG undefined FUN_143072d80(void)

void FUN_143072d80(longlong param_1,longlong param_2)

{
  float *pfVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  float fVar10;
  float local_res8 [2];
  undefined1 local_78 [80];
  
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    plVar6 = (longlong *)FUN_142e0d0b0();
    plVar3 = *(longlong **)(param_1 + 0x5c0);
    for (plVar4 = plVar3; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6]) {
      if (plVar4 == plVar6) {
        if (plVar3 != (longlong *)0x0) {
          lVar7 = plVar3[0x1f];
          if (lVar7 == 0) {
            (**(code **)(*plVar3 + 0x368))(plVar3);
            lVar7 = plVar3[0x1f];
          }
          FWeakObjectPtr::operator=(param_2 + 0x14,lVar7);
        }
        break;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    plVar6 = (longlong *)FUN_142e49950();
    plVar3 = *(longlong **)(param_1 + 0x5c8);
    for (plVar4 = plVar3; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6]) {
      if (plVar4 == plVar6) {
        if (plVar3 != (longlong *)0x0) {
          lVar7 = plVar3[0x1f];
          if (lVar7 == 0) {
            (**(code **)(*plVar3 + 0x368))(plVar3);
            lVar7 = plVar3[0x1f];
          }
          FWeakObjectPtr::operator=(param_2 + 0x1c,lVar7);
        }
        break;
      }
    }
  }
  if (((*(char *)(param_1 + 0x5d8) != '\0') && (*(longlong *)(param_1 + 0x5e0) != 0)) ||
     (*(longlong *)(param_1 + 0x5d0) != 0)) {
    FWeakObjectPtr::operator=(param_2 + 0x34);
  }
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    FWeakObjectPtr::operator=(param_2 + 0x3c);
  }
  FUN_142c8c260(local_78,0);
  cVar5 = FUN_142c8d9c0(param_1 + 0x5f0,local_78);
  if (cVar5 != '\0') {
    fVar10 = (float)FUN_142c98860(param_1 + 0x5f0,*(undefined8 *)(param_1 + 0x118));
    if (local_res8 != (float *)(param_2 + 0x108)) {
      *(float *)(param_2 + 0x108) = fVar10;
      *(undefined1 *)(param_2 + 0x10c) = 1;
    }
  }
  pfVar1 = (float *)(param_1 + 0x628);
  fVar10 = *pfVar1;
  if ((fVar10 != 0.0) && (pfVar1 != (float *)(param_2 + 0x160))) {
    if (*(char *)(param_2 + 0x164) != '\0') {
      *(undefined1 *)(param_2 + 0x164) = 0;
      fVar10 = *pfVar1;
    }
    *(float *)(param_2 + 0x160) = fVar10;
    *(undefined1 *)(param_2 + 0x164) = 1;
  }
  pfVar1 = (float *)(param_1 + 0x62c);
  if ((((DAT_1468b5d90 != *pfVar1) || (DAT_1468b5d94 != *(float *)(param_1 + 0x630))) ||
      (DAT_1468b5d98 != *(float *)(param_1 + 0x634))) && (pfVar1 != (float *)(param_2 + 0x168))) {
    if (*(char *)(param_2 + 0x174) != '\0') {
      *(undefined1 *)(param_2 + 0x174) = 0;
    }
    *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)pfVar1;
    *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)(param_1 + 0x634);
    *(undefined1 *)(param_2 + 0x174) = 1;
  }
  fVar10 = (float)FUN_142d9cad0(param_1 + 0x638,param_1);
  if ((fVar10 != 0.0) && (local_res8 != (float *)(param_2 + 0x178))) {
    *(float *)(param_2 + 0x178) = fVar10;
    *(undefined1 *)(param_2 + 0x17c) = 1;
  }
  *(undefined8 *)(param_2 + 0x180) = *(undefined8 *)(param_1 + 0x658);
  if ((0 < *(int *)(param_1 + 0x668)) && (iVar2 = *(int *)(param_1 + 0x668), iVar2 != 0)) {
    iVar9 = *(int *)(param_2 + 0x50);
    if (*(int *)(param_2 + 0x54) < iVar9 + iVar2) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0x48);
      iVar9 = *(int *)(param_2 + 0x50);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x660);
    lVar7 = *(longlong *)(param_2 + 0x48) + (longlong)iVar9 * 8;
    iVar9 = iVar2;
    do {
      FWeakObjectPtr::operator=(lVar7,*puVar8);
      lVar7 = lVar7 + 8;
      puVar8 = puVar8 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + iVar2;
  }
  FWeakObjectPtr::operator=(param_2 + 400,*(undefined8 *)(param_1 + 0x498));
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x10;
  return;
}



// FUNCTION 143073070 FUN_143073070 body=284 status=ok
// SIG undefined FUN_143073070(void)

longlong FUN_143073070(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    lVar2 = FUN_1428e7a40();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) {
        lVar2 = FUN_1429bed90();
        lVar4 = FUN_1428e7a40();
        lVar3 = param_2;
        goto LAB_1430730d5;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  goto LAB_1430730a5;
  while (lVar3 = *(longlong *)(lVar3 + 0x30), lVar6 = lVar5, lVar3 != 0) {
LAB_1430730d5:
    lVar5 = 0;
    lVar6 = param_2;
    if (lVar3 == lVar4) break;
  }
  do {
    if (lVar6 == 0) goto LAB_1430730a5;
    if (lVar6 == lVar2) {
      if (0 < *(int *)(param_1 + 0x708)) {
        lVar3 = lVar5;
        if (**(longlong **)(param_1 + 0x700) != 0) {
          lVar3 = *(longlong *)(**(longlong **)(param_1 + 0x700) + 0x38);
        }
        if (lVar3 != 0) {
          lVar4 = FUN_1428e7a40();
          lVar2 = param_2;
          break;
        }
      }
      goto LAB_1430730a5;
    }
    lVar6 = *(longlong *)(lVar6 + 0x30);
  } while( true );
  while (lVar2 = *(longlong *)(lVar2 + 0x30), lVar6 = lVar5, lVar2 != 0) {
    lVar6 = param_2;
    if (lVar2 == lVar4) break;
  }
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (*(longlong *)(lVar3 + 0x118) == param_1)) {
    return lVar3;
  }
LAB_1430730a5:
  lVar3 = AActor::FindComponentByClass(param_1,param_2);
  return lVar3;
}



// FUNCTION 143073190 FUN_143073190 body=56 status=ok
// SIG undefined FUN_143073190(void)

void FUN_143073190(longlong *param_1,undefined1 param_2)

{
  if (*(char *)((longlong)param_1 + 0x934) != '\0') {
    (**(code **)(*param_1 + 0x610))();
  }
  FUN_1430731d0(param_1,param_2);
  return;
}



// FUNCTION 1430731d0 FUN_1430731d0 body=535 status=ok
// SIG undefined FUN_1430731d0(void)

void FUN_1430731d0(longlong *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x40;
  if ((param_2 != '\0') && (*(char *)((longlong)param_1 + 0x4fc) == '\x01')) {
    FUN_1430904f0();
  }
  FUN_1430a5ae0(param_1);
  iVar1 = FUN_14233f450(param_1);
  if ((iVar1 == 3) &&
     (plVar3 = (longlong *)(**(code **)(*param_1 + 0x460))(param_1), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x410))(plVar3);
  }
  if ((*(byte *)((longlong)param_1 + 0x539) & 0x3f) != 0) {
    *(byte *)((longlong)param_1 + 0x539) = (*(byte *)((longlong)param_1 + 0x539) & 0xc0) + 0x40;
    (**(code **)(*param_1 + 0x590))(param_1);
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  if (0 < (int)param_1[0x45]) {
    lVar4 = param_1[0x24];
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0x51c) = *(undefined4 *)(lVar4 + 0x790);
  }
  if (param_2 == '\0') {
    if ((1 < (int)param_1[0x45]) &&
       (fVar5 = (float)(**(code **)(*param_1 + 0x550))(param_1), 0.0 < fVar5)) {
      uVar2 = *(uint *)(param_1 + 0x9c);
      if ((*(char *)((longlong)param_1 + 0x23c) == '\0') || ((uVar2 & 0x10) != 0)) {
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
      uVar2 = ((iVar1 << 3 | uVar2) ^ uVar2) & 8 ^ uVar2;
      *(uint *)(param_1 + 0x9c) = uVar2;
      if ((char)iVar1 == '\0') {
        *(uint *)(param_1 + 0x9c) = uVar2 | 0x10;
      }
      (**(code **)(*param_1 + 0x428))(param_1,fVar5);
    }
    if (*(char *)((longlong)param_1 + 0x4fc) == '\x01') {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffffbf;
      return;
    }
  }
  else if (0.0 < *(float *)(param_1 + 0xa3)) {
    if (1 < (int)param_1[0x59]) {
      if (*(char *)((longlong)param_1 + 0x4ec) == -1) {
        *(undefined1 *)((longlong)param_1 + 0x4ec) = 0;
      }
      else if ((*(char *)((longlong)param_1 + 0x2dc) == '\0') ||
              ((int)param_1[0x45] <= (int)param_1[0x9d])) {
        fVar5 = (float)(**(code **)(*param_1 + 0x558))(param_1);
        if (fVar5 <= 0.0) {
          *(char *)((longlong)param_1 + 0x4ec) =
               (char)((longlong)(ulonglong)(*(byte *)((longlong)param_1 + 0x4ec) + 1) %
                     (longlong)(int)param_1[0x59]);
        }
        else {
          *(byte *)((longlong)param_1 + 0x4ec) = *(byte *)((longlong)param_1 + 0x4ec) + 1;
        }
      }
    }
    (**(code **)(*param_1 + 0x428))(param_1,(int)param_1[0xa3]);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x3a,0);
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0xa3) = 0;
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffffbf;
  return;
}



// FUNCTION 1430733f0 FUN_1430733f0 body=2550 status=ok
// SIG undefined FUN_1430733f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1430733f0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined8 local_360;
  char local_358;
  undefined1 *local_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  float fStack_338;
  undefined4 uStack_334;
  longlong local_330;
  undefined1 local_328 [4];
  float local_324;
  longlong local_320;
  longlong local_318;
  undefined4 local_310;
  undefined1 local_30c;
  undefined2 local_308;
  undefined2 uStack_306;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  longlong local_2f0;
  ulonglong local_2e8;
  undefined8 local_2d8;
  undefined4 local_2d0;
  longlong *local_2c8;
  undefined **local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  longlong local_298;
  undefined8 local_290;
  undefined4 local_288;
  longlong local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_260;
  uint local_258;
  longlong *local_250;
  longlong local_248;
  undefined8 local_240;
  longlong local_238;
  undefined4 local_230;
  longlong local_228;
  longlong lStack_220;
  float local_218;
  undefined1 *local_210 [2];
  undefined4 local_200;
  undefined4 uStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  longlong local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  ulonglong local_1bc;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong local_198;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  longlong local_150 [7];
  longlong *local_118;
  int local_110;
  undefined8 local_108;
  undefined1 local_f8 [8];
  longlong local_f0 [7];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong local_a0 [7];
  longlong *local_68;
  int local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  cVar2 = FUN_143073df0();
  if (cVar2 == '\0') {
    return 0;
  }
  plVar5 = (longlong *)FUN_14309ed70(param_1);
  *(int *)(param_1 + 0x9d) = (int)param_1[0x9d] + 1;
  iVar4 = *(int *)((longlong)param_1 + 0x2ec);
  if (*(int *)((longlong)param_1 + 0x2ec) <= *(int *)((longlong)param_1 + 0x2e4)) {
    iVar4 = *(int *)((longlong)param_1 + 0x2e4);
  }
  local_2c8 = plVar5;
  (**(code **)(*param_1 + 0x4e8))(param_1,iVar4);
  FUN_143094fb0(param_1,1);
  FUN_14307e840(param_1);
  (**(code **)(*param_1 + 0x430))(param_1,local_178);
  (**(code **)(*plVar5 + 0x940))(plVar5,local_168,(char)param_1[0x30],local_178);
  plVar6 = (longlong *)FUN_1412996f0(param_1);
  plVar7 = (longlong *)(**(code **)(*plVar5 + 0x948))(plVar5);
  if (plVar6 == (longlong *)0x0) {
LAB_1430734e9:
    local_358 = '\0';
  }
  else {
    cVar2 = (**(code **)(*plVar6 + 0x780))(plVar6);
    local_358 = '\x01';
    if (cVar2 == '\0') goto LAB_1430734e9;
  }
  iVar4 = FUN_14233f450(param_1);
  if ((iVar4 == 3) && (FUN_1430bf5c0(param_1,&local_330), local_330 != 0)) {
    lVar8 = UMapBuildDataRegistry::GetPrivateStaticClass();
    for (lVar9 = local_330; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar8) {
        (**(code **)(*param_1 + 0x438))(param_1,&local_188);
        if (((*(char *)((longlong)param_1 + 0x40c) != '\0') && (plVar6 != (longlong *)0x0)) &&
           (param_1[0x23] != 0)) {
          local_2d0 = local_180;
          lVar9 = param_1[0x24];
          uVar11 = *(undefined8 *)(*(longlong *)(param_1[0x23] + 0x10) + 0x18);
          local_2d8 = local_188;
          if (lVar9 == 0) {
            lVar9 = FUN_1423407b0(param_1);
          }
          local_368 = *(undefined4 *)((longlong)param_1 + 0x414);
          local_360 = uVar11;
          FUN_142c264a0(lVar9,&local_2d8,(int)param_1[0x82],plVar6);
        }
        lVar8 = FUN_1430bf2b0(param_1);
        lVar9 = param_1[0x24];
        if (lVar9 == 0) {
          lVar9 = FUN_1423407b0(param_1);
        }
        lVar9 = FUN_14304c8c0(lVar9);
        if (lVar9 != 0) {
          local_320 = param_1[0x7e];
          local_324 = *(float *)((longlong)param_1 + 0x31c);
          local_318 = param_1[0x80];
          iVar4 = *(int *)((longlong)param_1 + 0x2ec);
          if (*(int *)((longlong)param_1 + 0x2ec) <= *(int *)((longlong)param_1 + 0x2e4)) {
            iVar4 = *(int *)((longlong)param_1 + 0x2e4);
          }
          local_308 = 0;
          uStack_304 = 0;
          local_2fc = 0x3f800000;
          local_2f8 = 0x3f800000;
          local_2f0 = 0;
          local_2e8 = 0;
          local_328[0] = 0;
          local_310 = 1;
          local_30c = 0;
          if (1 < iVar4) {
            local_324 = (float)iVar4 * local_324;
          }
          local_300 = (**(code **)(*param_1 + 0x560))(param_1);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 400))(plVar7,plVar5,local_328);
          }
          if (param_1[0x6c] != 0) {
            fVar15 = (float)UCurveFloat::GetFloatValue(param_1[0x6c],local_300);
            local_324 = local_324 * fVar15;
          }
          if (*(char *)((longlong)param_1 + 0x934) == '\0') {
            local_2b0 = 0;
            local_2a8 = 0;
            uStack_2a0 = 0;
            local_2b8 = &PTR_FUN_14422f7d8;
            local_228 = 0;
            lStack_220 = 0;
            local_298 = 0;
            local_290 = 0;
            local_288 = 0;
            local_280 = 0;
            local_278 = 0;
            local_270 = 0;
            local_268 = 0;
            local_260 = 0;
            FUN_142d979c0(local_210);
            local_1e8 = 0;
            local_1d0 = 0;
            local_1c8 = 0;
            local_1bc = (local_1bc >> 0x10 & 0xffff) << 0x10;
            local_1b4 = 0x3f800000;
            local_1b0 = 0x3f800000;
            FWeakObjectPtr::operator=(&local_1a0,0);
            local_198 = 0;
            local_228 = 0;
            lStack_220 = 0;
            local_258 = 0;
            local_250 = (longlong *)0x0;
            local_248 = 0;
            local_240 = 0;
            local_238 = 0;
            local_230 = 0x3f800000;
            local_218 = 0.0;
            FUN_142d979a0(&local_350,0);
            local_1f0 = 0;
            local_210[0] = local_350;
            local_350 = (undefined1 *)0x0;
            local_1dc = 0xbf800000;
            local_200 = local_340;
            uStack_1fc = uStack_33c;
            fStack_1f8 = fStack_338;
            uStack_1f4 = uStack_334;
            local_1e8 = 0;
            local_1e0 = 0.0;
            local_1d8 = 0;
            local_1c0 = 0x3f800000;
            local_1a8 = 0;
            FWeakObjectPtr::operator=(&local_1a0,0);
            local_2b0 = local_330;
            local_2a8 = param_1[0x23];
            local_198 = 0;
            local_350 = (undefined1 *)0x0;
            lVar1 = param_1[0x48];
            local_250 = plVar6;
            local_248 = local_2a8;
            if (param_1[0x48] == 0) {
              plVar5 = (longlong *)(**(code **)(*plVar5 + 0x910))(plVar5,&local_350,0);
              lVar1 = *plVar5;
            }
            local_298 = lVar1;
            local_240 = CONCAT44(local_240._4_4_,local_324);
            fVar15 = (float)(**(code **)(*param_1 + 0x548))(param_1);
            local_238 = param_1[0x124];
            local_240 = CONCAT44(fVar15 * *(float *)(param_1 + 0x120),(undefined4)local_240);
            local_230 = *(undefined4 *)((longlong)param_1 + 0x92c);
            local_218 = *(float *)((longlong)param_1 + 0x36c);
            local_228 = local_320;
            lStack_220 = param_1[0x7f];
            if (param_1[0x76] != 0) {
              fVar15 = (float)UCurveFloat::GetFloatValue(param_1[0x76],local_300);
              local_218 = local_218 * fVar15;
            }
            local_1f0 = local_318;
            local_1e0 = (float)(**(code **)(*param_1 + 0x488))(param_1);
            local_1e0 = local_1e0 * 0.5;
            FUN_142d979a0(&local_350,*(undefined4 *)((longlong)param_1 + 0x3bc));
            local_210[0] = local_350;
            local_200 = local_340;
            uStack_1fc = uStack_33c;
            fStack_1f8 = fStack_338;
            uStack_1f4 = uStack_334;
            if (param_1[0x7d] != 0) {
              fVar15 = (float)UCurveFloat::GetFloatValue(param_1[0x7d],local_300);
              fStack_1f8 = fStack_1f8 * fVar15;
            }
            lVar1 = local_2f0;
            iVar4 = (int)local_2e8;
            local_1c0 = local_300;
            local_1d8 = local_328[0];
            local_1c8 = CONCAT44(local_1c8._4_4_,(int)local_2e8);
            if (((int)local_2e8 == 0) && (local_1c8._4_4_ == 0)) {
              local_1c8 = 0;
            }
            else {
              TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_1d0,local_2e8 & 0xffffffff);
              if (iVar4 != 0) {
                puVar13 = (undefined4 *)(local_1d0 + 4);
                puVar14 = (undefined4 *)(lVar1 + 4);
                do {
                  puVar13[-1] = puVar14[-1];
                  *puVar13 = *puVar14;
                  puVar13[1] = puVar14[1];
                  puVar13[2] = puVar14[2];
                  iVar4 = iVar4 + -1;
                  puVar13 = puVar13 + 4;
                  puVar14 = puVar14 + 4;
                } while (iVar4 != 0);
              }
            }
            local_1bc = CONCAT44(uStack_304,CONCAT22(uStack_306,local_308));
            if ((plVar6 != (longlong *)0x0) &&
               (cVar2 = (**(code **)(*plVar6 + 0x780))(plVar6), cVar2 != '\0')) {
              local_258 = local_258 | 1;
            }
            if ((char)param_1[0x122] != '\0') {
              local_258 = local_258 | 4;
            }
            if (lVar8 == 0) {
              if ((local_358 != '\0') &&
                 (cVar2 = (**(code **)(*plVar6 + 0x778))(plVar6), cVar2 == '\0')) {
                local_258 = local_258 | 0x10;
              }
            }
            else {
              local_258 = local_258 | 2;
              local_280 = lVar8;
            }
            local_1a0 = (undefined4)param_1[0x11e];
            local_19c = *(undefined4 *)((longlong)param_1 + 0x8f4);
            local_198 = param_1[0x11f];
            FUN_14303ae50(lVar9,&local_2d8,&local_2b8);
            lVar9 = FWeakObjectPtr::Get(&local_2d8);
            if (lVar9 != 0) {
              fVar15 = (float)FUN_14304ba30(lVar9);
              *(bool *)((longlong)param_1 + 0x934) = fVar15 <= 0.0;
              if (fVar15 <= 0.0) {
                uStack_348 = 0;
                local_350 = &LAB_140edeaac;
                plVar5 = (longlong *)FMemory::Realloc(0,0x30);
                if (plVar5 != (longlong *)0x0) {
                  *plVar5 = (longlong)&PTR_FUN_143f77b88;
                  FWeakObjectPtr::operator=(plVar5 + 1,param_1);
                  plVar5[2] = (longlong)local_350;
                  plVar5[3] = CONCAT44(uStack_344,uStack_348);
                  lVar8 = FDelegateHandle::GenerateNewID();
                  plVar5[5] = lVar8;
                  *plVar5 = (longlong)&PTR_FUN_143f77bd0;
                  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar9 + 0x28,1);
                  (**(code **)(*plVar5 + 0x20))(plVar5,&local_350);
                  iVar4 = *(int *)(lVar9 + 0x30);
                  *(int *)(lVar9 + 0x30) = iVar4 + 1;
                  if (*(int *)(lVar9 + 0x34) < iVar4 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x28,iVar4);
                  }
                  puVar10 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar9 + 0x28));
                  *puVar10 = plVar5;
                  *(undefined4 *)(puVar10 + 1) = 3;
                }
              }
              *(undefined4 *)(lVar9 + 0xcc) = *(undefined4 *)((longlong)param_1 + 0x914);
              *(int *)(lVar9 + 0xd0) = (int)param_1[0x123];
              *(undefined4 *)(lVar9 + 0xd4) = *(undefined4 *)((longlong)param_1 + 0x91c);
            }
            local_2b8 = &PTR_FUN_14422f7d8;
            FWeakObjectPtr::operator=(&local_1a0,0);
            local_350 = (undefined1 *)0x0;
            local_198 = 0;
            plVar5 = local_2c8;
            if (local_1d0 != 0) {
              FMemory::Free();
              plVar5 = local_2c8;
            }
            goto LAB_143073be5;
          }
          FUN_14303b650(lVar9,local_f8,param_1[0x23]);
          FUN_143065860(local_f8,local_158);
          FUN_1430658c0(local_f8,local_a8);
          goto LAB_143073cf0;
        }
        break;
      }
    }
  }
LAB_143073c48:
  (**(code **)(*param_1 + 0x588))(param_1,local_168);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x198))(plVar7,plVar5);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x3c,0);
  return 1;
LAB_143073cf0:
  if (local_110 == local_60) goto LAB_143073d6c;
  cVar2 = FUN_14303a060(local_a8);
  cVar3 = FUN_14303a060(local_158);
  uVar11 = local_108;
  if (cVar3 == cVar2) goto LAB_143073d6c;
  FUN_143062e10(local_108,local_328);
  fVar15 = (float)(**(code **)(*param_1 + 0x548))(param_1);
  FUN_14305abb0(uVar11,fVar15 * *(float *)(param_1 + 0x120));
  FUN_143040290(uVar11);
  local_110 = local_110 + 1;
  FUN_14303b530(local_158);
  goto LAB_143073cf0;
LAB_143073d6c:
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x20))
              (local_68,CONCAT71((int7)((ulonglong)local_a0 >> 8),local_68 != local_a0));
    local_68 = (longlong *)0x0;
  }
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x20))
              (local_118,CONCAT71((int7)((ulonglong)local_150 >> 8),local_118 != local_150));
    local_118 = (longlong *)0x0;
  }
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x20))
              (local_b8,CONCAT71((int7)((ulonglong)local_f0 >> 8),local_b8 != local_f0));
  }
LAB_143073be5:
  if ((local_358 != '\0') && (plVar6 != (longlong *)0x0)) {
    uVar11 = FUN_14309ed70(param_1);
    uVar12 = (**(code **)(*plVar6 + 0x670))(plVar6);
    FUN_1430a0b50(local_310,uVar12,uVar11,0);
  }
  if (local_2f0 != 0) {
    FMemory::Free();
  }
  goto LAB_143073c48;
}



// FUNCTION 143073df0 FUN_143073df0 body=117 status=ok
// SIG undefined FUN_143073df0(void)

undefined1 FUN_143073df0(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  *(uint *)(param_1 + 0x4e0) = *(uint *)(param_1 + 0x4e0) | 1;
  fVar1 = *(float *)(param_1 + 0x278);
  if (0.0 < fVar1) {
    if ((0.0 < *(float *)(param_1 + 0x264)) || (0.0 < *(float *)(param_1 + 0x270))) {
      fVar2 = *(float *)(param_1 + 0x520);
      if (*(longlong *)(param_1 + 0x280) != 0) {
        fVar2 = (float)UCurveFloat::GetFloatValue();
        fVar1 = *(float *)(param_1 + 0x278);
      }
    }
    else {
      fVar2 = 1.0;
    }
    if (fVar2 < fVar1) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143073e70 FUN_143073e70 body=2706 status=ok
// SIG undefined FUN_143073e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143073e70(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong lVar20;
  DWORD *pDVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  uint uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_578 [32];
  undefined4 local_558;
  undefined8 local_550;
  int local_548;
  uint local_544;
  longlong local_540;
  longlong local_538;
  longlong *plStack_530;
  undefined1 local_528 [4];
  undefined4 local_524;
  longlong local_520;
  longlong local_518;
  int local_510;
  undefined1 local_50c;
  undefined2 local_508;
  undefined2 uStack_506;
  undefined4 uStack_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 uStack_4f8;
  longlong local_4f0;
  ulonglong local_4e8;
  undefined4 local_4e0;
  longlong local_4d8;
  longlong lStack_4d0;
  undefined4 local_4c8;
  undefined8 local_4c4;
  char local_4bc;
  undefined1 local_4bb;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined8 local_4b0;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  longlong local_498;
  undefined4 local_490;
  longlong local_488;
  int local_478;
  undefined4 local_470;
  undefined4 local_46c;
  float local_468;
  undefined4 local_460;
  undefined4 local_45c;
  longlong *local_458;
  longlong *local_450;
  longlong local_448;
  undefined4 local_440;
  longlong local_438 [2];
  undefined8 local_428;
  float local_420;
  undefined1 local_418 [8];
  undefined1 local_410 [8];
  undefined8 local_408;
  undefined8 local_400;
  longlong local_3f8;
  undefined1 local_3f0 [24];
  undefined1 local_3d8 [896];
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_578;
  local_544 = 0;
  cVar8 = FUN_143073df0();
  if (cVar8 == '\0') {
    return 0;
  }
  plVar11 = (longlong *)FUN_14309ed70(param_1);
  *(int *)(param_1 + 0x9d) = (int)param_1[0x9d] + 1;
  iVar9 = *(int *)((longlong)param_1 + 0x2ec);
  if (*(int *)((longlong)param_1 + 0x2ec) <= *(int *)((longlong)param_1 + 0x2e4)) {
    iVar9 = *(int *)((longlong)param_1 + 0x2e4);
  }
  local_450 = plVar11;
  (**(code **)(*param_1 + 0x4e8))(param_1,iVar9);
  FUN_143094fb0(param_1,1);
  FUN_14307e840(param_1);
  (**(code **)(*param_1 + 0x430))(param_1,&local_470);
  (**(code **)(*plVar11 + 0x940))(plVar11,&local_448,(char)param_1[0x30],&local_470);
  plVar12 = (longlong *)FUN_1412996f0(param_1);
  plVar13 = (longlong *)(**(code **)(*plVar11 + 0x948))(plVar11);
  local_458 = plVar13;
  if ((plVar12 == (longlong *)0x0) ||
     (cVar8 = (**(code **)(*plVar12 + 0x780))(plVar12), cVar8 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  local_540 = 0;
  iVar9 = FUN_14233f450(param_1);
  if (iVar9 != 3) goto LAB_143074891;
  local_538 = 0;
  plStack_530 = (longlong *)0x0;
  local_4d8 = 0;
  lStack_4d0 = 0;
  local_508 = 0;
  uStack_504 = 0;
  local_4fc = 0x3f800000;
  uStack_4f8 = 0x3f800000;
  local_4f0 = 0;
  local_4e8 = 0;
  local_528[0] = 0;
  local_524 = 0;
  local_520 = 0;
  local_518 = 0;
  local_510 = 1;
  local_50c = 0;
  local_500 = 0x3f800000;
  local_4e0 = 0;
  local_4c8 = 0;
  local_4c4 = 0x3f800000;
  local_4bc = 0;
  FWeakObjectPtr::operator=(&local_4b8,0);
  local_4b0 = 0;
  local_4a8 = 0.0;
  fStack_4a4 = 0.0;
  fStack_4a0 = 0.0;
  fStack_49c = 0.0;
  local_498 = 0;
  local_490 = 0;
  local_488 = 0;
  plStack_530 = (longlong *)FUN_1430bf620(param_1,local_418);
  plStack_530 = (longlong *)*plStack_530;
  if (plStack_530 != (longlong *)0x0) {
    plVar14 = (longlong *)FUN_1430aef40();
    for (plVar15 = plStack_530; plVar15 != (longlong *)0x0; plVar15 = (longlong *)plVar15[6]) {
      if (plVar15 == plVar14) goto LAB_143074069;
    }
  }
  plVar15 = (longlong *)FUN_1430bf680(param_1,local_410);
  local_538 = *plVar15;
LAB_143074069:
  if ((bVar5) && (cVar8 = (**(code **)(*plVar12 + 0x778))(plVar12), cVar8 == '\0')) {
    uVar26 = (**(code **)(*(longlong *)param_1[0x23] + 0x6e0))();
    local_4c4 = CONCAT44(uVar26,(float)local_4c4);
  }
  local_4a8 = local_468;
  local_4b0 = CONCAT44(local_46c,local_470);
  puVar16 = (undefined8 *)(**(code **)(*param_1 + 0x438))(param_1,local_3f0);
  uVar18 = *puVar16;
  fStack_4a4 = (float)uVar18;
  fStack_4a0 = (float)((ulonglong)uVar18 >> 0x20);
  fStack_49c = *(float *)(puVar16 + 1);
  local_490 = local_440;
  local_498 = local_448;
  if (((*(char *)((longlong)param_1 + 0x40c) != '\0') && (plVar12 != (longlong *)0x0)) &&
     (param_1[0x23] != 0)) {
    lVar17 = param_1[0x24];
    uVar4 = *(undefined8 *)(*(longlong *)(param_1[0x23] + 0x10) + 0x18);
    local_428 = uVar18;
    local_420 = fStack_49c;
    if (lVar17 == 0) {
      lVar17 = FUN_1423407b0(param_1);
    }
    local_558 = *(undefined4 *)((longlong)param_1 + 0x414);
    local_550 = uVar4;
    FUN_142c264a0(lVar17,&local_428);
  }
  lVar17 = FUN_1430bf2b0(param_1);
  local_4bc = lVar17 != 0;
  FWeakObjectPtr::operator=(&local_4b8,lVar17);
  local_510 = *(int *)((longlong)param_1 + 0x904);
  local_524 = *(undefined4 *)((longlong)param_1 + 0x31c);
  local_500 = (**(code **)(*param_1 + 0x560))(param_1);
  local_520 = param_1[0x7e];
  local_518 = param_1[0x80];
  local_4d8 = param_1[0x7f];
  local_4e0 = *(undefined4 *)((longlong)param_1 + 0x36c);
  local_4c8 = *(undefined4 *)((longlong)param_1 + 0x3bc);
  lStack_4d0 = (**(code **)(*param_1 + 0x618))(param_1);
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 400))(plVar13,plVar11,local_528);
  }
  fVar28 = *(float *)(param_1 + 0x122);
  plVar15 = (longlong *)FUN_1412996f0(param_1);
  if ((plVar15 == (longlong *)0x0) ||
     (cVar8 = (**(code **)(*plVar15 + 0x780))(plVar15), cVar8 == '\0')) {
    uVar18 = FUN_1412996f0(param_1);
    local_438[0] = -1;
    fVar27 = (float)FUN_142de77e0(param_1 + 0xea,uVar18,0,local_438);
    fVar28 = fVar28 * fVar27;
  }
  local_4c4 = CONCAT44(local_4c4._4_4_,fVar28);
  if (param_1[0x123] != 0) {
    fVar28 = (float)UCurveFloat::GetFloatValue(param_1[0x123],local_500);
    local_4c4 = CONCAT44(local_4c4._4_4_,(float)local_4c4 * fVar28);
  }
  if (local_4bc == '\0') {
    if (bVar5) {
      if (plStack_530 != (longlong *)0x0) {
        plVar19 = (longlong *)FUN_1430aef40();
        plVar14 = plStack_530;
        for (plVar15 = plStack_530; plVar15 != (longlong *)0x0; plVar15 = (longlong *)plVar15[6]) {
          if (plVar15 == plVar19) {
            if (plVar13 != (longlong *)0x0) {
              lVar17 = plStack_530[0x1f];
              if (lVar17 == 0) {
                (**(code **)(*plStack_530 + 0x368))(plStack_530);
                lVar17 = plVar14[0x1f];
              }
              cVar8 = FUN_14303fb60(lVar17);
              if ((cVar8 != '\0') &&
                 (cVar8 = (**(code **)(*plVar13 + 0x158))
                                    (plVar13,*(undefined1 *)((longlong)plVar11 + 0x62c)),
                 cVar8 != '\0')) {
                uVar18 = FUN_1412996f0(param_1);
                lVar17 = FUN_142ddddc0(uVar18);
                if (lVar17 != 0) {
                  FUN_142dc1ad0(local_3d8);
                  cVar8 = FUN_142dcd6e0(lVar17,local_3d8,0);
                  if ((cVar8 != '\0') && (local_58 == '\x02')) {
                    uVar18 = FUN_142dd0030(local_3d8);
                    FWeakObjectPtr::operator=(&local_4b8,uVar18);
                  }
                }
              }
            }
            break;
          }
        }
      }
      goto LAB_14307436d;
    }
  }
  else {
LAB_14307436d:
    if ((bVar5) && (plVar12 != (longlong *)0x0)) {
      uVar18 = (**(code **)(*plVar12 + 0x670))(plVar12);
      FUN_1430a0b50(local_510,uVar18,plVar11,0);
    }
  }
  if (local_538 != 0) {
    lVar20 = FUN_1428dfc70();
    for (lVar17 = local_538; lVar17 != 0; lVar17 = *(longlong *)(lVar17 + 0x30)) {
      if (lVar17 == lVar20) goto LAB_1430743fe;
    }
  }
  if (plStack_530 != (longlong *)0x0) {
    plVar15 = (longlong *)FUN_1430aef40();
    for (plVar11 = plStack_530; plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[6]) {
      if (plVar11 == plVar15) goto LAB_1430743fe;
    }
  }
  bVar6 = true;
LAB_1430743e4:
  if ((plVar12 == (longlong *)0x0) ||
     (cVar8 = (**(code **)(*plVar12 + 0x818))(plVar12), cVar8 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (bVar6) {
LAB_143074491:
    local_4bb = 1;
    if ((*DAT_146b47a18 == 0) || (local_510 < *DAT_146b47a48)) goto LAB_143074467;
    iVar9 = local_510;
    if ((param_1[0x128] == 0) && ((iVar10 = *DAT_146b47a60, iVar10 < local_510 && (0 < iVar10)))) {
      fVar28 = (float)local_510 / (float)iVar10;
      iVar10 = (int)ROUND(fVar28 + fVar28 + 0.5) >> 1;
      if (1 < iVar10) {
        fVar28 = (float)local_510 / (float)iVar10;
        iVar9 = -((int)ROUND(-0.5 - (fVar28 + fVar28)) >> 1);
      }
    }
    local_548 = 0;
    plVar13 = local_458;
    if (0 < local_510) {
      local_408 = 0;
      local_400 = 0;
      iVar10 = local_510;
      uVar25 = 0;
      do {
        plVar11 = (longlong *)0x0;
        local_478 = iVar9;
        if (iVar10 <= iVar9) {
          local_478 = iVar10;
        }
        pDVar21 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar13 = TlsGetValue(*pDVar21);
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)operator_new(0x18);
          if (plVar13 != (longlong *)0x0) {
            *plVar13 = 0;
            plVar13[1] = 0;
            *(undefined4 *)(plVar13 + 2) = 0;
            plVar11 = plVar13;
          }
          TlsSetValue(*pDVar21,plVar11);
          plVar13 = plVar11;
        }
        plVar11 = (longlong *)plVar13[1];
        if (plVar11 == (longlong *)0x0) {
          if (*plVar13 == 0) {
            lVar17 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar21 + 2);
            plVar13[1] = lVar17;
            if (lVar17 == 0) {
              puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar13[1] = (longlong)puVar16;
              lVar17 = 0x1f;
              do {
                puVar2 = puVar16 + 0x20;
                *puVar16 = puVar2;
                lVar17 = lVar17 + -1;
                puVar16 = puVar2;
              } while (lVar17 != 0);
              *puVar2 = 0;
            }
          }
          else {
            plVar13[1] = *plVar13;
            *plVar13 = 0;
          }
          plVar11 = (longlong *)plVar13[1];
          iVar24 = 0x20;
          *(undefined4 *)(plVar13 + 2) = 0x20;
        }
        else {
          iVar24 = (int)plVar13[2];
        }
        plVar13[1] = *plVar11;
        *(int *)(plVar13 + 2) = iVar24 + -1;
        *plVar11 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar11 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *plVar11 = (longlong)&PTR_FUN_145a67f80;
        *(undefined1 *)(plVar11 + 0x1b) = 0;
        plVar11[0x1c] = 0;
        if (((uVar25 & 2) != 0) && (uVar25 = uVar25 & 0xfffffffd, local_3f8 != 0)) {
          LOCK();
          piVar1 = (int *)(local_3f8 + 0x48);
          iVar24 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar24 == 1) {
            FGraphEvent::Recycle();
          }
        }
        local_544 = uVar25 & 0xfffffffe;
        FWeakObjectPtr::operator=(&local_460);
        lVar17 = local_4f0;
        *(undefined4 *)(plVar11 + 2) = local_460;
        *(undefined4 *)((longlong)plVar11 + 0x14) = local_45c;
        plVar11[3] = local_538;
        plVar11[4] = (longlong)plStack_530;
        *(undefined1 *)(plVar11 + 5) = local_528[0];
        *(undefined4 *)((longlong)plVar11 + 0x2c) = local_524;
        plVar11[6] = local_520;
        plVar11[7] = local_518;
        *(int *)(plVar11 + 8) = local_510;
        *(undefined1 *)((longlong)plVar11 + 0x44) = local_50c;
        plVar11[9] = CONCAT44(uStack_504,CONCAT22(uStack_506,local_508));
        *(undefined4 *)(plVar11 + 10) = local_500;
        *(ulonglong *)((longlong)plVar11 + 0x54) = CONCAT44(uStack_4f8,local_4fc);
        plVar11[0xc] = 0;
        iVar24 = (int)local_4e8;
        *(int *)(plVar11 + 0xd) = (int)local_4e8;
        if ((int)local_4e8 == 0) {
          *(undefined4 *)((longlong)plVar11 + 0x6c) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar11 + 0xc,local_4e8 & 0xffffffff,0);
          puVar22 = (undefined4 *)plVar11[0xc];
          puVar23 = (undefined4 *)(lVar17 + 4);
          do {
            *puVar22 = puVar23[-1];
            puVar22[1] = *puVar23;
            puVar22[2] = puVar23[1];
            puVar22[3] = puVar23[2];
            iVar24 = iVar24 + -1;
            puVar22 = puVar22 + 4;
            puVar23 = puVar23 + 4;
          } while (iVar24 != 0);
        }
        iVar24 = local_548;
        *(undefined4 *)(plVar11 + 0xe) = local_4e0;
        plVar11[0xf] = local_4d8;
        plVar11[0x10] = lStack_4d0;
        *(undefined4 *)(plVar11 + 0x11) = local_4c8;
        *(float *)((longlong)plVar11 + 0x8c) = (float)local_4c4;
        *(undefined4 *)(plVar11 + 0x12) = local_4c4._4_4_;
        *(char *)((longlong)plVar11 + 0x94) = local_4bc;
        *(undefined1 *)((longlong)plVar11 + 0x95) = local_4bb;
        *(undefined4 *)(plVar11 + 0x13) = local_4b8;
        *(undefined4 *)((longlong)plVar11 + 0x9c) = local_4b4;
        plVar11[0x14] = local_4b0;
        *(float *)(plVar11 + 0x15) = local_4a8;
        *(ulonglong *)((longlong)plVar11 + 0xac) = CONCAT44(fStack_4a0,fStack_4a4);
        *(float *)((longlong)plVar11 + 0xb4) = fStack_49c;
        plVar11[0x17] = local_498;
        *(undefined4 *)(plVar11 + 0x18) = local_490;
        plVar11[0x19] = local_488;
        *(int *)((longlong)plVar11 + 0xd4) = local_478;
        *(int *)(plVar11 + 0x1a) = local_548;
        lVar17 = plVar11[0x1c];
        piVar1 = (int *)(lVar17 + 0x48);
        if (lVar17 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_540 = lVar17;
        FUN_14308cf80(plVar11,0,2,1);
        if (lVar17 != 0) {
          LOCK();
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle(local_540);
          }
        }
        local_548 = iVar24 + iVar9;
        iVar10 = iVar10 - iVar9;
        plVar13 = local_458;
        uVar25 = local_544;
      } while (0 < iVar10);
    }
  }
  else {
    if (bVar5) {
      if (plStack_530 != (longlong *)0x0) {
        plVar12 = (longlong *)FUN_1430aef40();
        for (plVar11 = plStack_530; plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[6]) {
          if (plVar11 == plVar12) {
            if (bVar7) goto LAB_143074491;
            break;
          }
        }
      }
      if ((((float)local_4b0 != fStack_4a4) || (local_4b0._4_4_ != fStack_4a0)) ||
         (local_4a8 != fStack_49c)) goto LAB_143074491;
    }
    local_4bb = 0;
LAB_143074467:
    local_488 = local_540;
    local_558 = CONCAT31(local_558._1_3_,1);
    (**(code **)(*param_1 + 0x628))(param_1,&local_538,0,local_510);
  }
  plVar11 = local_450;
  if (local_4f0 != 0) {
    FMemory::Free();
    plVar11 = local_450;
  }
LAB_143074891:
  (**(code **)(*param_1 + 0x588))(param_1,&local_448);
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x198))(plVar13,plVar11);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x3c,0);
  return 1;
LAB_1430743fe:
  bVar6 = false;
  goto LAB_1430743e4;
}



// FUNCTION 143074910 FUN_143074910 body=163 status=ok
// SIG undefined FUN_143074910(void)

void FUN_143074910(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x9c) & 4) == 0) {
    FUN_14306a9a0();
    cVar1 = (**(code **)(*param_1 + 0x478))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143074944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x570))(param_1,1);
      return;
    }
    cVar1 = (**(code **)(*param_1 + 0x5a0))(param_1);
    if (cVar1 != '\0') {
      FUN_1430892d0();
      return;
    }
    cVar1 = (**(code **)(*param_1 + 0x540))(param_1);
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014307497d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x570))(param_1,0);
      return;
    }
  }
  (**(code **)(*param_1 + 0x568))(param_1);
  cVar1 = (**(code **)(*param_1 + 0x408))(param_1);
  if (cVar1 != '\0') {
    FUN_14308c0b0(param_1);
    return;
  }
  return;
}



// FUNCTION 1430749c0 FUN_1430749c0 body=5665 status=ok
// SIG undefined FUN_1430749c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430749c0(longlong *param_1,longlong *param_2,int param_3,int param_4,char param_5)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  uint uVar19;
  longlong **pplVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_a58 [32];
  float local_a38;
  longlong *local_a30;
  undefined1 *local_a28;
  longlong local_a20;
  char local_a18;
  char local_a17;
  undefined1 local_a16;
  undefined1 local_a15;
  uint local_a14;
  float local_a10;
  float fStack_a0c;
  float local_a08;
  int local_a00;
  undefined8 local_9f8;
  float local_9f0;
  undefined8 local_9e8;
  longlong local_9e0;
  longlong local_9d8;
  undefined4 local_9d0;
  float local_9c8;
  float fStack_9c4;
  float local_9c0;
  longlong local_9b8;
  undefined4 local_9b0;
  int local_9a8;
  longlong *local_9a0;
  longlong *local_998;
  undefined4 local_990;
  undefined8 local_988;
  longlong local_980;
  longlong local_978;
  longlong local_970;
  undefined1 local_968;
  char local_967;
  undefined1 local_966;
  undefined4 local_964;
  longlong local_960;
  ulonglong local_958;
  ulonglong local_950;
  undefined4 local_948;
  float local_944;
  float local_940;
  longlong local_938;
  longlong lStack_930;
  float local_928;
  undefined4 local_924;
  undefined4 local_920;
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 local_910;
  undefined4 local_90c;
  undefined4 uStack_908;
  undefined4 local_904;
  byte local_8f8 [4];
  undefined4 local_8f4;
  uint local_8f0;
  undefined4 local_8ec;
  undefined4 local_8e8;
  undefined8 local_8e4;
  float local_8dc;
  undefined8 local_8d8;
  undefined4 local_8d0;
  undefined8 local_8cc;
  undefined4 local_8c4;
  undefined8 local_8c0;
  undefined4 local_8b8;
  undefined8 local_8b4;
  undefined4 local_8ac;
  undefined8 local_8a8;
  undefined4 local_8a0;
  undefined4 local_89c;
  undefined4 local_898;
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined **local_868;
  longlong local_860;
  longlong local_858;
  float local_850;
  undefined8 local_84c;
  float local_844;
  uint local_840;
  undefined8 local_83c;
  undefined4 local_834;
  longlong *local_830;
  longlong local_828;
  longlong *local_820;
  undefined8 local_818;
  float local_810;
  float local_80c;
  longlong local_808;
  longlong local_800;
  longlong local_7f8;
  float local_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  longlong local_7c8;
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined1 local_7b8;
  undefined1 local_7b7;
  undefined8 local_7b0;
  undefined8 local_7a8;
  undefined1 local_7a0;
  longlong local_798;
  int local_790;
  int local_78c;
  undefined4 local_788;
  longlong local_784;
  undefined4 local_77c;
  undefined4 local_778;
  undefined8 local_774;
  undefined8 uStack_76c;
  undefined4 local_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined8 local_754;
  undefined8 uStack_74c;
  undefined4 local_744;
  undefined4 local_740;
  undefined4 local_73c;
  longlong local_738;
  byte local_730;
  float local_728;
  undefined8 local_724;
  float local_71c;
  undefined8 local_718;
  undefined4 local_710;
  float local_700;
  undefined8 local_6f8;
  float local_6f0;
  undefined **local_6e8;
  longlong local_6e0;
  longlong local_6d8;
  float local_6d0;
  undefined8 local_6cc;
  float local_6c4;
  uint local_6c0;
  undefined8 local_6bc;
  undefined4 local_6b4;
  longlong *local_6b0;
  longlong local_6a8;
  longlong *local_6a0;
  undefined8 local_698;
  float local_690;
  float local_68c;
  longlong local_688;
  longlong local_680;
  longlong local_678;
  float local_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  longlong local_648;
  undefined4 local_640;
  undefined4 local_63c;
  undefined1 local_638;
  undefined1 local_637;
  undefined8 local_630;
  undefined8 local_628;
  undefined1 local_620;
  longlong local_618;
  int local_610;
  int local_60c;
  undefined4 local_608;
  longlong local_604;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined8 local_5f4;
  undefined8 uStack_5ec;
  undefined4 local_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined8 local_5d4;
  undefined8 uStack_5cc;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  longlong local_5b8;
  byte local_5b0;
  undefined8 local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  float local_590;
  longlong local_588;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined1 local_560 [8];
  undefined8 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined1 local_530 [12];
  undefined1 local_524 [12];
  undefined1 local_518 [12];
  undefined1 local_50c [12];
  undefined1 local_500 [12];
  undefined1 local_4f4 [12];
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined1 local_4c8 [24];
  undefined1 local_4b0 [144];
  undefined1 local_420 [144];
  undefined1 local_390 [144];
  undefined1 local_300 [144];
  undefined1 local_270 [144];
  undefined1 local_1e0 [152];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [48];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_a58;
  uVar21 = 0;
  local_a14 = 0;
  local_a00 = param_3;
  plVar6 = (longlong *)FUN_14309ed70();
  plVar7 = (longlong *)FUN_1412996f0(param_1);
  (**(code **)(*plVar6 + 0x948))(plVar6);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x780))(plVar7);
  }
  if (*param_2 != 0) {
    lVar8 = FUN_1428dfc70();
    for (lVar10 = *param_2; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
      if (lVar10 == lVar8) {
        if (*param_2 != 0) goto LAB_143074c33;
        break;
      }
    }
  }
  if (param_2[1] != 0) {
    lVar8 = FUN_1430aef40();
    for (lVar10 = param_2[1]; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
      if (lVar10 == lVar8) {
        if (param_2[1] != 0) goto LAB_143074c33;
        break;
      }
    }
  }
  local_a16 = 1;
LAB_143074ac7:
  plVar9 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x10);
  fVar33 = *(float *)((longlong)param_2 + 0x14);
  local_9a0 = plVar9;
  if (param_1[0x6c] != 0) {
    fVar22 = (float)UCurveFloat::GetFloatValue(param_1[0x6c],(int)param_2[7]);
    fVar33 = fVar33 * fVar22;
  }
  fVar22 = *(float *)(param_2 + 0xe);
  if (param_1[0x7d] != 0) {
    fVar23 = (float)UCurveFloat::GetFloatValue(param_1[0x7d],(int)param_2[7]);
    fVar22 = fVar22 * fVar23;
  }
  fVar23 = *(float *)(param_2 + 0xb);
  if (param_1[0x76] != 0) {
    fVar24 = (float)UCurveFloat::GetFloatValue(param_1[0x76],(int)param_2[7]);
    fVar23 = fVar23 * fVar24;
  }
  FUN_140a25850(&local_868);
  local_860 = param_2[1];
  local_858 = param_2[0x11];
  local_850 = *(float *)(param_2 + 0x12);
  local_828 = param_1[0x23];
  local_800 = param_2[3];
  local_7f8 = param_2[0xc];
  local_830 = plVar7;
  local_80c = fVar33;
  local_808 = local_828;
  local_7f0 = fVar23;
  FUN_142d979a0(&local_550,fVar22);
  local_7c8 = param_2[4];
  local_7e8 = local_550;
  uStack_7e0 = uStack_548;
  local_7c0 = *(undefined4 *)((longlong)param_2 + 0x74);
  local_7d8 = local_540;
  uStack_7d4 = uStack_53c;
  uStack_7d0 = uStack_538;
  uStack_7cc = uStack_534;
  if ((int)(uint)*(byte *)(plVar6 + 0xd2) < (int)plVar6[0xd4]) {
    local_7b0 = *(undefined8 *)(plVar6[0xd3] + 0x30 + (ulonglong)*(byte *)(plVar6 + 0xd2) * 0x48);
  }
  else {
    local_7b0 = 0;
  }
  local_7b7 = *(undefined1 *)((longlong)param_1 + 0x4ed);
  local_7a0 = (undefined1)param_2[2];
  if (&local_798 != param_2 + 9) {
    iVar18 = (int)param_2[10];
    lVar10 = param_2[9];
    local_790 = iVar18;
    if ((iVar18 == 0) && (local_78c == 0)) {
      local_78c = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_798,iVar18);
      if (iVar18 != 0) {
        puVar16 = (undefined4 *)(local_798 + 4);
        puVar17 = (undefined4 *)(lVar10 + 4);
        do {
          puVar16[-1] = puVar17[-1];
          *puVar16 = *puVar17;
          puVar16[1] = puVar17[1];
          puVar16[2] = puVar17[2];
          iVar18 = iVar18 + -1;
          puVar16 = puVar16 + 4;
          puVar17 = puVar17 + 4;
        } while (iVar18 != 0);
      }
    }
  }
  local_784 = param_2[6];
  local_788 = (undefined4)param_2[7];
  local_740 = (undefined4)param_1[0x11e];
  local_73c = *(undefined4 *)((longlong)param_1 + 0x8f4);
  local_738 = param_1[0x11f];
  if ((*(char *)((longlong)param_2 + 0x7c) != '\0') && (plVar9 != (longlong *)0x0)) {
    local_840 = local_840 | 3;
    local_820 = plVar9;
    local_558 = FUN_142e79d90();
    lVar10 = (**(code **)(*plVar9 + 0x628))(plVar9,local_558);
    if (lVar10 == 0) {
      puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x618))(plVar9,local_524,0);
    }
    else {
      puVar11 = (undefined8 *)FUN_142dd0240(lVar10,local_530);
    }
    local_84c = *puVar11;
    local_844 = *(float *)(puVar11 + 1);
  }
  lVar10 = param_2[0xd];
  local_9b8 = param_2[0x14];
  local_9b0 = (undefined4)param_2[0x15];
  local_a15 = 0;
  local_a17 = '\x01';
  if (lVar10 != 0) {
    uVar19 = *(uint *)(lVar10 + 0x40);
    if ((uVar19 >> 6 & 1) != 0) {
      local_840 = local_840 | 0x400;
      uVar19 = *(uint *)(lVar10 + 0x40);
    }
    if ((uVar19 >> 4 & 1) == 0) {
      if ((uVar19 >> 5 & 1) == 0) goto LAB_143074e1e;
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x580))(param_1,local_518);
      local_9b8 = *plVar6;
      local_9b0 = (undefined4)plVar6[1];
    }
    local_a17 = '\0';
  }
LAB_143074e1e:
  lVar10 = DAT_146b47a30;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  local_980 = 0;
  fVar24 = (float)*(int *)(lVar8 + lVar10) * 0.001;
  if (param_5 == '\0') {
LAB_143074f11:
    local_a18 = '\x01';
  }
  else {
    lVar10 = param_1[0x24];
    if (lVar10 == 0) {
      lVar10 = FUN_1423407b0(param_1);
    }
    local_980 = FUN_1428cce50(lVar10);
    if ((local_980 != 0) && (*param_2 != 0)) {
      lVar8 = FUN_1428dfc70();
      for (lVar10 = *param_2; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
        if (lVar10 == lVar8) {
          if (*param_2 != 0) goto LAB_143074f11;
          break;
        }
      }
    }
    if (param_2[1] != 0) {
      lVar12 = FUN_1430aef40();
      lVar10 = param_2[1];
      lVar8 = lVar10;
      if (lVar10 != 0) {
        do {
          if (lVar8 == lVar12) {
            if (lVar10 != 0) goto LAB_143074f11;
            goto LAB_143074f0a;
          }
          lVar8 = *(longlong *)(lVar8 + 0x30);
        } while (lVar8 != 0);
        local_a18 = '\0';
        goto LAB_143074f16;
      }
    }
LAB_143074f0a:
    local_a18 = '\0';
  }
LAB_143074f16:
  local_9a8 = local_a00 + -1 + param_4;
  if (local_a00 <= local_9a8) {
    local_9e8 = 0;
    do {
      iVar18 = local_790;
      lVar10 = local_798;
      local_6e0 = local_860;
      local_6d0 = local_850;
      local_6c4 = local_844;
      local_6c0 = local_840;
      local_6b4 = local_834;
      local_6b0 = local_830;
      local_6a8 = local_828;
      local_6a0 = local_820;
      local_690 = local_810;
      local_688 = local_808;
      local_680 = local_800;
      local_6d8 = local_858;
      local_678 = local_7f8;
      local_6cc = local_84c;
      local_648 = local_7c8;
      local_6bc = local_83c;
      local_638 = local_7b8;
      local_698 = local_818;
      local_637 = local_7b7;
      local_68c = local_80c;
      local_630 = local_7b0;
      local_670 = local_7f0;
      local_658 = CONCAT44(uStack_7d4,local_7d8);
      uStack_650 = CONCAT44(uStack_7cc,uStack_7d0);
      local_628 = local_7a8;
      local_6e8 = &PTR_FUN_1441f17f0;
      local_668 = local_7e8;
      uStack_660 = uStack_7e0;
      local_620 = local_7a0;
      local_640 = local_7c0;
      local_63c = local_7bc;
      local_618 = 0;
      local_610 = local_790;
      if (local_790 == 0) {
        local_60c = local_790;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_618,local_790,0);
        puVar16 = (undefined4 *)(local_618 + 4);
        puVar17 = (undefined4 *)(lVar10 + 4);
        do {
          puVar16[-1] = puVar17[-1];
          *puVar16 = *puVar17;
          puVar16[1] = puVar17[1];
          puVar16[2] = puVar17[2];
          iVar18 = iVar18 + -1;
          puVar16 = puVar16 + 4;
          puVar17 = puVar17 + 4;
        } while (iVar18 != 0);
      }
      local_604 = local_784;
      local_5c4 = local_744;
      local_5c0 = local_740;
      local_5bc = local_73c;
      local_608 = local_788;
      local_5b8 = local_738;
      local_5fc = local_77c;
      local_5b0 = local_5b0 ^ (local_5b0 ^ local_730) & 1;
      local_5f8 = local_778;
      local_5f4 = local_774;
      uStack_5ec = uStack_76c;
      local_9d0 = local_9b0;
      local_5e4 = local_764;
      uStack_5e0 = uStack_760;
      uStack_5dc = uStack_75c;
      uStack_5d8 = uStack_758;
      local_5d4 = local_754;
      uStack_5cc = uStack_74c;
      local_9d8 = local_9b8;
      if (param_2[0xd] != 0) {
        fVar25 = (float)(**(code **)(*param_1 + 0x488))(param_1);
        local_a28 = &local_a15;
        local_a30 = &local_9d8;
        local_a38 = *(float *)(param_2 + 5);
        local_a20 = (longlong)param_1 + 0x94c;
        FUN_14304db50(param_2[0xd],&local_9b8,fVar25 * 0.5,local_a00);
      }
      if (local_a17 != '\0') {
        plVar6 = (longlong *)(**(code **)(*param_1 + 0x580))(param_1,local_50c,&local_9b8);
        local_9d8 = *plVar6;
        local_9d0 = (undefined4)plVar6[1];
      }
      local_9f8 = param_2[0x11];
      local_9f0 = *(float *)(param_2 + 0x12);
      FRotator::Vector(&local_9d8);
      fVar25 = *(float *)(param_1 + 0x129);
      local_9c8 = fVar25 * local_a10 + (float)local_9f8;
      fStack_9c4 = fVar25 * fStack_a0c + local_9f8._4_4_;
      local_9c0 = fVar25 * local_a08 + local_9f0;
      _guard_xfg_dispatch_icall_nop(local_8f8,0,0x90);
      bVar2 = false;
      local_8ec = 0x3f800000;
      if (*(char *)((longlong)param_2 + 0x7d) != '\0') {
        local_a30 = (longlong *)param_2[0x16];
        local_a20 = CONCAT71(local_a20._1_7_,local_a16);
        local_a28 = (undefined1 *)CONCAT44(local_a28._4_4_,(int)param_2[0xf]);
        local_a38 = (float)CONCAT31(local_a38._1_3_,local_a16);
        pbVar13 = (byte *)FUN_143075ff0(param_1,local_1e0,&local_9f8,&local_9c8);
        local_8f8[0] = local_8f8[0] ^ (local_8f8[0] ^ *pbVar13) & 1;
        local_8f8[0] = (local_8f8[0] ^ *pbVar13) & 2 ^ local_8f8[0];
        local_8f4 = *(undefined4 *)(pbVar13 + 4);
        local_8f0 = local_8f0 ^ (*(uint *)(pbVar13 + 8) ^ local_8f0) & 1;
        local_8ec = *(undefined4 *)(pbVar13 + 0xc);
        local_8e8 = *(undefined4 *)(pbVar13 + 0x10);
        local_8e4 = *(undefined8 *)(pbVar13 + 0x14);
        local_8dc = *(float *)(pbVar13 + 0x1c);
        local_8d8 = *(undefined8 *)(pbVar13 + 0x20);
        local_8d0 = *(undefined4 *)(pbVar13 + 0x28);
        local_8cc = *(undefined8 *)(pbVar13 + 0x2c);
        local_8c4 = *(undefined4 *)(pbVar13 + 0x34);
        local_8c0 = *(undefined8 *)(pbVar13 + 0x38);
        local_8b8 = *(undefined4 *)(pbVar13 + 0x40);
        local_8b4 = *(undefined8 *)(pbVar13 + 0x44);
        local_8ac = *(undefined4 *)(pbVar13 + 0x4c);
        local_8a8 = *(undefined8 *)(pbVar13 + 0x50);
        local_8a0 = *(undefined4 *)(pbVar13 + 0x58);
        local_89c = *(undefined4 *)(pbVar13 + 0x5c);
        local_898 = *(undefined4 *)(pbVar13 + 0x60);
        local_894 = *(undefined4 *)(pbVar13 + 100);
        local_890 = *(undefined4 *)(pbVar13 + 0x68);
        local_88c = *(undefined4 *)(pbVar13 + 0x6c);
        local_888 = *(undefined4 *)(pbVar13 + 0x70);
        local_884 = *(undefined4 *)(pbVar13 + 0x74);
        local_880 = *(undefined4 *)(pbVar13 + 0x78);
        local_878 = *(undefined8 *)(pbVar13 + 0x80);
        local_870 = *(undefined8 *)(pbVar13 + 0x88);
        plVar6 = (longlong *)FWeakObjectPtr::Get(&local_88c);
        if (((plVar9 == (longlong *)0x0) || (*(char *)((longlong)param_2 + 0x7c) != '\0')) ||
           (plVar6 != plVar9)) {
        }
        else {
          local_6c0 = local_6c0 | 0x10;
          local_6a0 = plVar9;
          if ((local_8f0 & 1) == 0) {
            lVar10 = plVar9[0x2d];
            if (lVar10 == 0) {
              local_71c = DAT_1468b5d98;
              puVar11 = &local_724;
              local_724 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
            }
            else {
              local_4d8 = *(undefined4 *)(lVar10 + 0x220);
              uStack_4d4 = *(undefined4 *)(lVar10 + 0x224);
              uStack_4d0 = *(undefined4 *)(lVar10 + 0x228);
              uStack_4cc = *(undefined4 *)(lVar10 + 0x22c);
              puVar11 = (undefined8 *)&local_918;
              local_918 = local_4d8;
              local_910 = uStack_4d0;
              uStack_914 = uStack_4d4;
            }
            local_710 = *(undefined4 *)(puVar11 + 1);
            puVar14 = &local_718;
            local_718 = *puVar11;
          }
          else {
            lVar10 = FUN_142231870(plVar9,local_118,(int)param_2[0xf]);
            local_4e8 = *(undefined4 *)(lVar10 + 0x10);
            uStack_4e4 = *(undefined4 *)(lVar10 + 0x14);
            uStack_4e0 = *(undefined4 *)(lVar10 + 0x18);
            uStack_4dc = *(undefined4 *)(lVar10 + 0x1c);
            puVar14 = (undefined8 *)&local_90c;
            local_90c = local_4e8;
            local_904 = uStack_4e0;
            uStack_908 = uStack_4e4;
          }
          local_700 = *(float *)(puVar14 + 1);
          local_690 = local_8dc - local_700;
          local_698 = CONCAT44(local_8e4._4_4_ - (float)((ulonglong)*puVar14 >> 0x20),
                               (float)local_8e4 - (float)*puVar14);
          local_590 = local_690;
        }
        fVar28 = (float)local_8e4 - *(float *)((longlong)param_2 + 0x94);
        fVar29 = local_8e4._4_4_ - *(float *)(param_2 + 0x13);
        local_9c0 = local_8dc;
        fVar31 = local_8dc - *(float *)((longlong)param_2 + 0x9c);
        fVar26 = fVar29 * fVar29 + fVar28 * fVar28 + fVar31 * fVar31;
        fVar25 = fVar28;
        fVar30 = fVar29;
        fVar32 = fVar31;
        if ((fVar26 != 1.0) &&
           (fVar25 = DAT_1468b5d90, fVar30 = DAT_1468b5d94, fVar32 = DAT_1468b5d98, 1e-08 <= fVar26)
           ) {
          auVar27 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
          local_728 = auVar27._0_4_;
          local_728 = local_728 + local_728 * (0.5 - fVar26 * 0.5 * local_728 * local_728);
          local_728 = local_728 + local_728 * (0.5 - fVar26 * 0.5 * local_728 * local_728);
          fVar25 = local_728 * fVar28;
          fVar30 = local_728 * fVar29;
          fVar32 = local_728 * fVar31;
        }
        local_9c8 = (float)local_8e4;
        fStack_9c4 = local_8e4._4_4_;
        if (local_a10 * fVar25 + fStack_a0c * fVar30 + local_a08 * fVar32 <= 0.0) {
          bVar2 = true;
        }
        else {
          local_9f8 = *(longlong *)((longlong)param_2 + 0x94);
          local_9f0 = *(float *)((longlong)param_2 + 0x9c);
          local_a10 = fVar25;
          fStack_a0c = fVar30;
          local_a08 = fVar32;
          local_6d8 = local_9f8;
          local_6d0 = local_9f0;
          plVar6 = (longlong *)FVector::Rotation(&local_a10,local_500);
          local_9d8 = *plVar6;
          local_9d0 = (undefined4)plVar6[1];
        }
      }
      cVar4 = (**(code **)(*param_1 + 0x630))(param_1,param_2);
      if (cVar4 == '\0') {
        if (param_2[1] != 0) {
          lVar8 = FUN_1430aef40();
          for (lVar10 = param_2[1]; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
            if (lVar10 == lVar8) {
              if (param_2[1] != 0) {
                lVar10 = param_1[0x24];
                if (lVar10 == 0) {
                  lVar10 = FUN_1423407b0(param_1);
                }
                lVar10 = FUN_14304ca20(lVar10);
                if (lVar10 != 0) {
                  local_6cc = CONCAT44(fStack_9c4,local_9c8);
                  local_6c4 = local_9c0;
                  local_638 = local_a15;
                  if (bVar2) {
                    local_6c0 = local_6c0 | 0x80;
                  }
                  if ((local_6c0 & 1) != 0) {
                    puVar11 = (undefined8 *)FVector::Rotation(&local_a10,local_4f4);
                    local_6bc = *puVar11;
                    local_6b4 = *(undefined4 *)(puVar11 + 1);
                  }
                  if ((0.0 < *(float *)(param_2 + 0xf)) && ((local_6c0 >> 1 & 1) == 0)) {
                    local_6c0 = local_6c0 | 0x100;
                  }
                  if (param_5 == '\0') {
                    puVar11 = (undefined8 *)operator_new(0x168);
                    if (puVar11 == (undefined8 *)0x0) {
                      puVar11 = (undefined8 *)0x0;
                    }
                    else {
                      local_a14 = uVar21 | 4;
                      *(undefined4 *)(puVar11 + 1) = 0xff;
                      local_568 = 0;
                      *puVar11 = &PTR_FUN_143f3edd8;
                      local_978 = 0;
                      *(undefined4 *)((longlong)puVar11 + 0xc) = 1;
                      *puVar11 = &PTR__scalar_deleting_destructor__145a67fa0;
                      *(undefined1 *)(puVar11 + 0x2b) = 0;
                      puVar11[0x2c] = 0;
                      uVar21 = local_a14;
                    }
                    if (((uVar21 & 8) != 0) &&
                       (uVar21 = uVar21 & 0xfffffff7, local_a14 = uVar21, local_588 != 0)) {
                      LOCK();
                      piVar1 = (int *)(local_588 + 0x48);
                      iVar18 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar18 == 1) {
                        FGraphEvent::Recycle();
                      }
                    }
                    if (((uVar21 & 4) != 0) && (local_a14 = uVar21 & 0xfffffffb, local_978 != 0)) {
                      LOCK();
                      piVar1 = (int *)(local_978 + 0x48);
                      iVar18 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar18 == 1) {
                        FGraphEvent::Recycle(local_978);
                      }
                    }
                    FUN_1430672e0(puVar11 + 2,&local_6e8);
                    *(char *)(puVar11 + 0x2a) = local_a18;
                    *(float *)((longlong)puVar11 + 0x154) = fVar24;
                    lVar10 = puVar11[0x2c];
                    piVar1 = (int *)(lVar10 + 0x48);
                    if (lVar10 != 0) {
                      LOCK();
                      *piVar1 = *piVar1 + 1;
                      UNLOCK();
                    }
                    local_970 = lVar10;
                    FUN_14308cd10(puVar11,0,0xff,1);
                    uVar21 = local_a14;
                    if (lVar10 != 0) {
                      LOCK();
                      iVar18 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar18 == 1) {
                        FGraphEvent::Recycle(local_970);
                        uVar21 = local_a14;
                      }
                    }
                  }
                  else if (local_a18 == '\0') {
                    FUN_14303af10(lVar10,local_560);
                  }
                  else {
                    FUN_14303b070(lVar10,&local_6e8,fVar24);
                  }
                }
                goto LAB_143075e7c;
              }
              break;
            }
          }
        }
        fVar25 = local_a08;
        if ((local_8f8[0] & 1) != 0) {
          if (param_5 == '\0') {
            lVar10 = CONCAT44(fStack_a0c,local_a10);
            local_5a8 = FUN_14307e6f0;
            uStack_5a0 = 0;
            uVar15 = FUN_140729f20(local_420,local_8f8);
            uVar15 = FUN_140729f20(local_390,uVar15);
            plVar6 = (longlong *)FMemory::Realloc(0,0xd0,0);
            local_990 = 0xd;
            local_998 = plVar6;
            if (plVar6 != (longlong *)0x0) {
              uVar15 = FUN_140729f20(local_300,uVar15);
              uVar15 = FUN_140729f20(local_270,uVar15);
              *plVar6 = (longlong)&PTR_FUN_145a680d0;
              FWeakObjectPtr::operator=(plVar6 + 1,param_1);
              *(undefined4 *)(plVar6 + 2) = (undefined4)local_5a8;
              *(undefined4 *)((longlong)plVar6 + 0x14) = local_5a8._4_4_;
              *(undefined4 *)(plVar6 + 3) = uStack_5a0;
              *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_59c;
              FUN_140729f20(plVar6 + 4,uVar15);
              plVar6[0x16] = lVar10;
              *(float *)(plVar6 + 0x17) = fVar25;
              *(float *)((longlong)plVar6 + 0xbc) = fVar33;
              *(float *)(plVar6 + 0x18) = fVar23;
              lVar10 = FDelegateHandle::GenerateNewID();
              plVar6[0x19] = lVar10;
              *plVar6 = (longlong)&PTR_FUN_145a68118;
            }
            plVar7 = (longlong *)FUN_141d29000(local_4c8,0,0xff);
            lVar10 = *plVar7;
            pplVar20 = (longlong **)(lVar10 + 0x10);
            *pplVar20 = (longlong *)0x0;
            *(undefined4 *)(lVar10 + 0x18) = 0;
            if ((&local_998 != pplVar20) && (plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 0x30))(plVar6,pplVar20);
            }
            *(undefined4 *)(lVar10 + 0x20) = 2;
            lVar10 = *plVar7;
            lVar3 = plVar7[2];
            lVar8 = plVar7[1];
            lVar12 = *(longlong *)(lVar10 + 0x30);
            piVar1 = (int *)(lVar12 + 0x48);
            if (lVar12 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
              plVar6 = local_998;
            }
            local_9e0 = lVar12;
            FUN_1409691d0(lVar10,lVar8,(int)lVar3,1);
            if (lVar12 != 0) {
              LOCK();
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar6 = local_998;
              if (iVar18 == 1) {
                FGraphEvent::Recycle(local_9e0);
                plVar6 = local_998;
              }
            }
            plVar9 = local_9a0;
            uVar21 = local_a14;
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x28))(plVar6,0);
              local_998 = (longlong *)FMemory::Realloc(plVar6,0);
              local_990 = 0;
              plVar9 = local_9a0;
              uVar21 = local_a14;
              if (local_998 != (longlong *)0x0) {
                FMemory::Free(local_998);
                plVar9 = local_9a0;
                uVar21 = local_a14;
              }
            }
          }
          else {
            local_6f8 = CONCAT44(fStack_a0c,local_a10);
            local_6f0 = local_a08;
            lVar10 = FUN_140729f20(local_4b0,local_8f8);
            uVar15 = FWeakObjectPtr::Get(lVar10 + 0x6c);
            lVar8 = FUN_142d29780(uVar15);
            if (lVar8 == 0) {
              (**(code **)(*param_1 + 0x600))(param_1,lVar10);
            }
            local_a38 = fVar23;
            (**(code **)(*param_1 + 0x520))(param_1,lVar10,&local_6f8,fVar33);
          }
        }
      }
      else {
        FRotator::Quaternion(&local_9d8);
        local_148 = local_578;
        uStack_140 = uStack_570;
        local_138._8_4_ = local_9f0;
        local_138._0_8_ = local_9f8;
        local_138._12_4_ = 0;
        local_988 = 0;
        local_128._4_4_ = DAT_1464aa788._4_4_;
        local_128._0_4_ = (undefined4)DAT_1464aa788;
        local_128._8_4_ = DAT_1464aa790;
        local_128._12_4_ = 0;
        local_960 = 0;
        local_958 = 0;
        local_950 = (local_950 >> 0x10 & 0xffff) << 0x10;
        local_938 = 0;
        lStack_930 = 0;
        local_924 = 0xffffffff;
        local_920 = 0;
        if ((param_2[0x16] == 0) || (local_968 = 1, *(float *)(param_2 + 0xf) <= 0.0)) {
          local_968 = 0;
        }
        local_966 = (undefined1)param_2[2];
        local_964 = (undefined4)param_2[7];
        if (&local_960 != param_2 + 9) {
          uVar19 = *(uint *)(param_2 + 10);
          lVar10 = param_2[9];
          local_958 = (ulonglong)uVar19;
          if (uVar19 != 0) {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_960,uVar19,0);
            puVar16 = (undefined4 *)(local_960 + 4);
            puVar17 = (undefined4 *)(lVar10 + 4);
            do {
              puVar16[-1] = puVar17[-1];
              *puVar16 = *puVar17;
              puVar16[1] = puVar17[1];
              puVar16[2] = puVar17[2];
              uVar19 = uVar19 - 1;
              puVar16 = puVar16 + 4;
              puVar17 = puVar17 + 4;
            } while (uVar19 != 0);
          }
        }
        local_938 = param_2[3];
        local_948 = *(undefined4 *)((longlong)param_2 + 0x74);
        lStack_930 = param_2[0xc];
        plVar6 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0x7c) != '\0') {
          plVar6 = plVar9;
        }
        local_944 = fVar33;
        local_940 = fVar23;
        local_928 = fVar22;
        FWeakObjectPtr::operator=(&local_924,plVar6);
        local_967 = *(char *)((longlong)param_2 + 0x2c);
        if (local_967 != '\0') {
          local_950 = param_2[6];
        }
        local_a20 = local_980;
        local_a28 = (undefined1 *)CONCAT44(local_a28._4_4_,fVar24);
        local_a30 = (longlong *)CONCAT71(local_a30._1_7_,local_a18);
        local_a38 = (float)CONCAT31(local_a38._1_3_,param_5);
        (**(code **)(*param_1 + 0x638))(param_1,param_2,&local_968,&local_148);
        if (local_960 != 0) {
          FMemory::Free();
        }
      }
LAB_143075e7c:
      local_6e8 = &PTR_FUN_1441f17f0;
      FWeakObjectPtr::operator=(&local_5c0,0);
      local_5b8 = 0;
      if (local_618 != 0) {
        FMemory::Free();
      }
      local_a00 = local_a00 + 1;
    } while (local_a00 <= local_9a8);
  }
  cVar4 = FUN_14247c3d0((longlong)param_1 + 0x224,0);
  if (((cVar4 != '\0') || ((int)param_1[0x45] <= (int)param_1[0x9d])) && (param_2[0xd] != 0)) {
    FUN_14305c930(param_2[0xd],(longlong)param_1 + 0x94c);
  }
  local_868 = &PTR_FUN_1441f17f0;
  FWeakObjectPtr::operator=(&local_740,0);
  local_9e0 = 0;
  local_738 = 0;
  if (local_798 != 0) {
    FMemory::Free();
  }
  return;
LAB_143074c33:
  local_a16 = 0;
  goto LAB_143074ac7;
}



// FUNCTION 143075ff0 FUN_143075ff0 body=543 status=ok
// SIG undefined FUN_143075ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_143075ff0(longlong param_1,void *param_2,undefined8 param_3,undefined8 *param_4,
                    undefined1 param_5,longlong param_6,undefined4 param_7,undefined1 param_8)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8;
  undefined1 local_b4;
  undefined4 local_a8;
  undefined1 local_a4;
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b47d98) {
    _Init_thread_header(&DAT_146b47d98);
    if (DAT_146b47d98 == -1) {
      FName::FName(&DAT_146b47d90,L"WeaponTrace",1);
      _Init_thread_footer(&DAT_146b47d98);
    }
  }
  local_f0 = 0;
  lVar4 = DAT_146b47d90;
  if (param_6 != 0) {
    lVar4 = param_6;
  }
  local_118 = FUN_1412996f0(param_1);
  FUN_1422ffb20(local_c8,lVar4,local_f8,1);
  local_b4 = param_5;
  local_a4 = param_8;
  local_a8 = param_7;
  local_b8 = 1;
  FUN_1426d3dd0(local_e8);
  FUN_1426ea8d0(local_e8,2,0);
  if (*(int *)(param_1 + 0x500) != 0x20) {
    FUN_1426eac10(local_e8,*(int *)(param_1 + 0x500),1);
  }
  *(undefined4 *)((longlong)param_2 + 0x68) = 0;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
  _guard_xfg_dispatch_icall_nop(param_2,0,0x90);
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
  lVar4 = *(longlong *)(param_1 + 0x120);
  bVar1 = *(byte *)(param_1 + 0x259);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  local_108 = local_e8;
  local_110 = local_c8;
  local_118 = CONCAT44(local_118._4_4_,(uint)bVar1);
  cVar3 = UWorld::LineTraceSingleByChannel(lVar4,param_2,param_3,param_4);
  if (cVar3 == '\0') {
    uVar2 = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)((longlong)param_2 + 0x14) = *param_4;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar2;
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 143076230 FUN_143076230 body=222 status=ok
// SIG undefined FUN_143076230(void)

void FUN_143076230(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  plVar2 = *(longlong **)(param_1 + 0x700);
  uVar5 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x708) < plVar2) {
    uVar5 = uVar4;
  }
  uVar3 = uVar4;
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && (param_2 != *(char *)(lVar1 + 0x44))) {
        *(char *)(lVar1 + 0x44) = param_2;
        FUN_143087950(lVar1,0);
      }
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  plVar2 = *(longlong **)(param_1 + 0x710);
  uVar5 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x718) < plVar2) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && (param_2 != *(char *)(lVar1 + 0x44))) {
        *(char *)(lVar1 + 0x44) = param_2;
        FUN_143087950(lVar1,0);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}



// FUNCTION 143076310 FUN_143076310 body=636 status=ok
// SIG undefined FUN_143076310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143076310(longlong *param_1)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x57) = 3;
  (**(code **)(*param_1 + 0x260))();
  FUN_143094a90(param_1);
  (**(code **)(*param_1 + 0x490))(param_1);
  lVar3 = FUN_1412996f0(param_1);
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x490);
  }
  if ((lVar4 == 0) || ((*(uint *)(lVar4 + 0x4cc) >> 1 & 1) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((((char)param_1[0x5c] != '\0') || ((*(byte *)(param_1 + 0x3a) & 1) != 0)) || (bVar2)) {
    (**(code **)(*param_1 + 0x470))(param_1);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x39);
    if (0.0 < fVar1) {
      local_a8 = &LAB_142c1bdd4;
      lVar4 = param_1[0x24];
      uStack_a0 = 0;
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar4 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar4 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
      }
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar5 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_9c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_b0 = 0xbf800000;
      local_b8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,param_1 + 0x5e,&local_98,fVar1);
      if (local_38 != 0) {
        plVar7 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar7 = local_48;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar4 = FMemory::Realloc(plVar5,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 143076590 FUN_143076590 body=81 status=ok
// SIG undefined FUN_143076590(void)

void FUN_143076590(longlong *param_1)

{
  if (*(char *)(param_1[0x23] + 0x129) == '\x02') {
    (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
  }
  *(undefined1 *)(param_1 + 0x57) = 0;
  (**(code **)(*param_1 + 0x260))(param_1);
  FUN_143094a90(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001430765da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4b0))(param_1,1);
  return;
}



// FUNCTION 1430765f0 FUN_1430765f0 body=54 status=ok
// SIG undefined FUN_1430765f0(void)

void FUN_1430765f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = rand();
  *(char *)(param_1 + 0x693) = (char)(int)((float)iVar1 * 0.007721183 + 1.0);
  return;
}



// FUNCTION 143076630 FUN_143076630 body=691 status=ok
// SIG undefined FUN_143076630(void)

longlong *
FUN_143076630(longlong *param_1,float *param_2,undefined8 param_3,int param_4,undefined8 param_5,
             undefined8 param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined8 extraout_XMM0_Qb;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined1 local_108 [8];
  float local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [224];
  
  uVar9 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < param_4) {
    TArray<FTransform,FDefaultAllocator>::SetNum(param_1,param_4,1);
    uVar6 = FVector::Rotation(param_3,local_108);
    uVar6 = FRotationMatrix::FRotationMatrix(local_e8,uVar6);
    FMatrix::GetUnitAxes(uVar6,&local_128,&local_148,&local_138);
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    uVar10 = uVar9;
    do {
      uVar6 = __libm_sse2_sincosf4_();
      fVar16 = (float)uVar6;
      fVar11 = (float)((ulonglong)uVar6 >> 0x20);
      fVar12 = (float)extraout_XMM0_Qb;
      fVar13 = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      fVar14 = fVar11 * local_144 + fVar16 * local_134;
      fVar15 = fVar11 * local_148 + fVar16 * local_138;
      fVar16 = fVar11 * local_140 + fVar16 * local_130;
      local_110 = fVar13 * local_120 + fVar12 * fVar16;
      local_118 = CONCAT44(fVar12 * fVar14 + fVar13 * local_124,fVar12 * fVar15 + fVar13 * local_128
                          );
      auVar5._4_4_ = fVar14 * param_7 + fVar2;
      auVar5._0_4_ = fVar15 * param_7 + fVar1;
      auVar5._8_4_ = fVar16 * param_7 + fVar3;
      auVar5._12_4_ = 0;
      *(undefined1 (*) [16])(*param_1 + 0x10 + uVar10) = auVar5;
      lVar4 = *param_1;
      local_100 = local_110;
      puVar7 = (undefined8 *)FVector4::ToOrientationQuat(&local_118,local_f8);
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar6 = puVar7[1];
      *(undefined8 *)(uVar10 + lVar4) = *puVar7;
      ((undefined8 *)(uVar10 + lVar4))[1] = uVar6;
      uVar10 = uVar10 + 0x30;
    } while ((int)uVar8 < param_4);
  }
  return param_1;
}



// FUNCTION 1430768f0 FUN_1430768f0 body=689 status=ok
// SIG undefined FUN_1430768f0(void)

longlong *
FUN_1430768f0(longlong *param_1,float *param_2,undefined8 param_3,int param_4,float param_5,
             undefined8 param_6,float param_7)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [208];
  ulonglong uVar9;
  
  uVar7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < param_4) {
    TArray<FTransform,FDefaultAllocator>::SetNum(param_1,param_4,1);
    uVar5 = FVector::Rotation(param_3,local_e8);
    uVar5 = FRotationMatrix::FRotationMatrix(local_d8,uVar5);
    FMatrix::GetUnitAxes(uVar5,&local_128,&local_118,&local_108);
    uVar5 = __libm_sse2_sincosf_();
    fVar4 = local_120;
    fVar10 = (float)uVar5;
    fVar11 = (float)((ulonglong)uVar5 >> 0x20);
    fVar15 = fVar11 * local_118 + fVar10 * local_108;
    fVar16 = fVar11 * local_114 + fVar10 * local_104;
    fVar14 = fVar11 * local_110 + fVar10 * local_100;
    fVar10 = *param_2;
    fVar11 = param_2[1];
    fVar1 = param_2[2];
    uVar9 = uVar7;
    do {
      if (param_4 < 2) {
        fVar13 = 0.0;
      }
      else {
        fVar13 = (float)(int)uVar9 / (float)(param_4 + -1);
      }
      uVar5 = __libm_sse2_sincosf_
                        ((param_5 * 0.008726646 - param_5 * -0.008726646) * fVar13 +
                         param_5 * -0.008726646);
      fVar13 = (float)uVar5;
      fVar12 = (float)((ulonglong)uVar5 >> 0x20);
      local_120 = fVar13 * fVar14 + fVar12 * fVar4;
      local_f8 = CONCAT44(fVar13 * fVar16 + fVar12 * local_124,fVar13 * fVar15 + fVar12 * local_128)
      ;
      auVar3._4_4_ = fVar16 * param_7 + fVar11;
      auVar3._0_4_ = fVar15 * param_7 + fVar10;
      auVar3._8_4_ = fVar14 * param_7 + fVar1;
      auVar3._12_4_ = 0;
      *(undefined1 (*) [16])(*param_1 + 0x10 + uVar7) = auVar3;
      lVar2 = *param_1;
      local_f0 = local_120;
      puVar6 = (undefined8 *)FVector4::ToOrientationQuat(&local_f8,local_e8);
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar5 = puVar6[1];
      *(undefined8 *)(lVar2 + uVar7) = *puVar6;
      ((undefined8 *)(lVar2 + uVar7))[1] = uVar5;
      uVar7 = uVar7 + 0x30;
    } while ((int)uVar8 < param_4);
  }
  return param_1;
}



// FUNCTION 143076bb0 FUN_143076bb0 body=73 status=ok
// SIG undefined FUN_143076bb0(void)

undefined8 FUN_143076bb0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = FUN_1412996f0(lVar1);
    local_res8[0] = 0xffffffffffffffff;
    uVar2 = FUN_142de77e0(lVar1 + 0x6d0,uVar2,0,local_res8);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143076c00 FUN_143076c00 body=139 status=ok
// SIG undefined FUN_143076c00(void)

void FUN_143076c00(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_res8 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  cVar2 = FUN_14247c3d0(lVar1 + 0x224,0);
  if (cVar2 != '\0') {
    uVar3 = FUN_1412996f0(lVar1);
    local_res8[0] = 0xffffffffffffffff;
    FUN_142de77e0(lVar1 + 0x550,uVar3,0,local_res8);
    return;
  }
  return;
}



// FUNCTION 143076c90 FUN_143076c90 body=89 status=ok
// SIG undefined FUN_143076c90(void)

ulonglong FUN_143076c90(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 local_res8 [4];
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = *(float *)(lVar1 + 0x234);
    if (fVar3 <= 0.0) {
      uVar2 = FUN_1412996f0(lVar1);
      local_res8[0] = 0xffffffffffffffff;
      uVar4 = FUN_142de77e0(lVar1 + 0x5d0,uVar2,0,local_res8);
      return uVar4;
    }
  }
  return (ulonglong)(uint)fVar3;
}



// FUNCTION 143076cf0 FUN_143076cf0 body=172 status=ok
// SIG undefined FUN_143076cf0(void)

undefined8 * FUN_143076cf0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    local_res8 = 0;
    puVar2 = &local_res8;
  }
  else {
    local_res8 = 0xffffffffffffffff;
    uVar3 = FUN_142de77e0(lVar1 + 0x7d8,*(undefined8 *)(lVar1 + 0x118),0,&local_res8);
    local_res10 = 0xffffffffffffffff;
    uVar4 = FUN_142de77e0(lVar1 + 0x858,*(undefined8 *)(lVar1 + 0x118),0,&local_res10);
    FUN_142c48df0(&local_res18,uVar3,uVar4);
    puVar2 = &local_res18;
  }
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 143076da0 FUN_143076da0 body=93 status=ok
// SIG undefined FUN_143076da0(void)

undefined8 FUN_143076da0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x548))(plVar1);
    if ((float)uVar2 <= 0.0) {
      uVar2 = FUN_1412996f0(plVar1);
      local_res8[0] = 0xffffffffffffffff;
      uVar2 = FUN_142de77e0(plVar1 + 0xca,uVar2,0,local_res8);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143076e80 FUN_143076e80 body=96 status=ok
// SIG undefined FUN_143076e80(void)

undefined8 *
FUN_143076e80(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  uVar1 = DAT_1468b5da8;
  plVar2 = *(longlong **)(param_1 + 0x150);
  *param_2 = DAT_1468b5da0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  if (plVar2 != (longlong *)0x0) {
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 0x828))
                       (plVar2,local_18,param_4,*(undefined1 *)(param_1 + 0x62c));
    uVar1 = *(undefined4 *)(puVar3 + 1);
    *param_2 = *puVar3;
    *(undefined4 *)(param_2 + 1) = uVar1;
  }
  return param_2;
}



// FUNCTION 143076f10 FUN_143076f10 body=18 status=ok
// SIG undefined FUN_143076f10(void)

int FUN_143076f10(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2ec);
  if (*(int *)(param_1 + 0x2ec) <= *(int *)(param_1 + 0x2e4)) {
    iVar1 = *(int *)(param_1 + 0x2e4);
  }
  return iVar1;
}



// FUNCTION 143076f30 FUN_143076f30 body=143 status=ok
// SIG undefined FUN_143076f30(void)

ulonglong FUN_143076f30(longlong *param_1)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  float fVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x460))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x418))(param_1);
    if (0 < iVar2) {
                    /* WARNING: Could not recover jumptable at 0x000143076f61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x418))(param_1);
      return uVar3;
    }
  }
  cVar1 = FUN_142d52a00(param_1 + 0x44);
  if (cVar1 != '\0') {
    uVar4 = FUN_142d52a20(param_1 + 0x44);
    uVar4 = FArchive::operator<<(uVar4);
    fVar5 = (float)FUN_142d5fed0(uVar4);
    return (ulonglong)(uint)(int)fVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x000143076fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x430))(param_1);
  return uVar3;
}



// FUNCTION 143076ff0 FUN_143076ff0 body=182 status=ok
// SIG undefined FUN_143076ff0(void)

ulonglong FUN_143076ff0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar3 = (int)param_1[0xd4];
  uVar5 = 0;
  uVar8 = uVar5;
  if (0 < iVar3) {
    do {
      if (param_3 == 0) {
LAB_143077065:
        uVar5 = (**(code **)(*param_1 + 0x7f8))(param_1,param_2,uVar8 & 0xff);
        if (uVar5 != 0) {
          return uVar5;
        }
      }
      else {
        uVar6 = uVar8 & 0xff;
        if (((int)uVar6 < iVar3) &&
           (lVar1 = param_1[0xd3] + uVar6 * 0x48,
           *(longlong *)(param_1[0xd3] + 8 + uVar6 * 0x48) != 0)) {
          plVar4 = *(longlong **)(lVar1 + 0x38);
          plVar2 = plVar4 + *(int *)(lVar1 + 0x40);
          for (; plVar4 != plVar2; plVar4 = plVar4 + 1) {
            if (*plVar4 == param_3) goto LAB_143077065;
          }
        }
      }
      iVar3 = (int)param_1[0xd4];
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < iVar3);
  }
  return uVar5;
}



// FUNCTION 143077100 FUN_143077100 body=367 status=ok
// SIG undefined FUN_143077100(void)

void FUN_143077100(longlong param_1,uint param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if ((param_2 & 0xfffffffd) == 0) {
    plVar5 = *(longlong **)(param_1 + 0x700);
    uVar6 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(param_1 + 0x708) < plVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        if ((*plVar5 != 0) && (lVar2 = *(longlong *)(*plVar5 + 0x38), lVar2 != 0)) {
          iVar1 = *(int *)(param_3 + 200);
          *(int *)(param_3 + 200) = iVar1 + 1;
          if (*(int *)(param_3 + 0xcc) < iVar1 + 1) {
            TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
            ::ResizeGrow(param_3,iVar1);
          }
          lVar3 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar3 = param_3;
          }
          *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar2;
        }
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
  }
  uVar4 = 0;
  if (param_2 < 2) {
    plVar5 = *(longlong **)(param_1 + 0x710);
    uVar6 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(param_1 + 0x718) < plVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        if ((*plVar5 != 0) && (lVar2 = *(longlong *)(*plVar5 + 0x38), lVar2 != 0)) {
          iVar1 = *(int *)(param_3 + 200);
          *(int *)(param_3 + 200) = iVar1 + 1;
          if (*(int *)(param_3 + 0xcc) < iVar1 + 1) {
            TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
            ::ResizeGrow(param_3,iVar1);
          }
          lVar3 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar3 = param_3;
          }
          *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar2;
        }
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
  }
  return;
}



// FUNCTION 143077270 FUN_143077270 body=60 status=ok
// SIG undefined FUN_143077270(void)

undefined8 FUN_143077270(longlong param_1,byte param_2,char param_3)

{
  if (param_3 == '\0') {
    if ((int)(uint)param_2 < *(int *)(param_1 + 0x708)) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x700) + (ulonglong)param_2 * 8);
    }
  }
  else if ((int)(uint)param_2 < *(int *)(param_1 + 0x718)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x710) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 1430772b0 FUN_1430772b0 body=18 status=ok
// SIG undefined FUN_1430772b0(void)

undefined4 FUN_1430772b0(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    return *(undefined4 *)(param_1 + 0x718);
  }
  return *(undefined4 *)(param_1 + 0x708);
}



// FUNCTION 143077310 FUN_143077310 body=110 status=ok
// SIG undefined FUN_143077310(void)

float FUN_143077310(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_14247f5a0(param_1 + 0x1c0);
  if ((0.0 < fVar1) && (fVar1 = *(float *)(param_1 + 0x1c4), 0.0 < fVar1)) {
    fVar2 = (float)FUN_14247f5a0(param_1 + 0x1c0);
    return fVar1 / fVar2;
  }
  return 1.0;
}



// FUNCTION 143077380 FUN_143077380 body=114 status=ok
// SIG undefined FUN_143077380(void)

undefined8 FUN_143077380(longlong param_1,char param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_2 == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x700);
    plVar1 = plVar3 + *(int *)(param_1 + 0x708);
    if (plVar3 != plVar1) {
      do {
        if (*plVar3 != 0) {
          uVar2 = FUN_143077400(*plVar3,param_3);
          return uVar2;
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
      return 0;
    }
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x710);
    plVar1 = plVar3 + *(int *)(param_1 + 0x718);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 != 0) {
        uVar2 = FUN_143077400(*plVar3,param_3);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 143077400 FUN_143077400 body=168 status=ok
// SIG undefined FUN_143077400(void)

undefined8 FUN_143077400(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if ((plVar1 == (longlong *)0x0) || ((*(byte *)(param_1 + 0x58) & 1) != 0)) {
    return 0;
  }
  lVar2 = plVar1[0xdf];
  iVar3 = (**(code **)(*plVar1 + 0x6c8))();
  iVar5 = 0;
  if (iVar3 < (int)lVar2) {
    lVar2 = (*(longlong **)(param_1 + 0x38))[0xdf];
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x6c8))();
    iVar3 = (int)lVar2 - iVar3;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
  }
  lVar2 = **(longlong **)(param_1 + 0x38);
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143077478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(lVar2 + 0x598))();
    return uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00014307748e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(lVar2 + 0x560))(*(longlong **)(param_1 + 0x38),iVar5);
  return uVar4;
}



// FUNCTION 1430774d0 FUN_1430774d0 body=254 status=ok
// SIG undefined FUN_1430774d0(void)

float FUN_1430774d0(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  
  if ((char)param_1[0x57] == '\x01') {
    fVar2 = (float)(**(code **)(*param_1 + 0x440))();
    if (0.0 < fVar2) {
      lVar1 = param_1[0x24];
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0(param_1);
      }
      fVar2 = (*(float *)(lVar1 + 0x790) - *(float *)((longlong)param_1 + 0x2dc)) / fVar2;
      if (1.0 <= fVar2) {
        fVar2 = 1.0;
      }
      return 1.0 - fVar2;
    }
  }
  else if ((char)param_1[0x57] != '\0') {
    fVar2 = (float)(**(code **)(*param_1 + 0x438))();
    if (0.0 < fVar2) {
      lVar1 = param_1[0x24];
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0(param_1);
      }
      fVar2 = (*(float *)(lVar1 + 0x790) - *(float *)((longlong)param_1 + 0x2dc)) / fVar2;
      if (1.0 <= fVar2) {
        fVar2 = 1.0;
      }
      return fVar2;
    }
    return 1.0;
  }
  return 0.0;
}



// FUNCTION 1430775d0 FUN_1430775d0 body=113 status=ok
// SIG undefined FUN_1430775d0(void)

undefined8 FUN_1430775d0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  
  bVar1 = *(byte *)(param_1 + 0x690);
  if ((int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48);
    if (lVar2 != 0) {
      if (((*(longlong *)(lVar2 + 400) != 0) && (lVar2 != 0)) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48) != 0)) {
        cVar3 = FUN_14309f7c0();
        if (cVar3 != '\0') {
          return *(undefined8 *)(lVar2 + 400);
        }
      }
      return *(undefined8 *)(lVar2 + 0x188);
    }
  }
  return 0;
}



// FUNCTION 143077650 FUN_143077650 body=152 status=ok
// SIG undefined FUN_143077650(void)

float FUN_143077650(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x21c);
  if ((0.0 < fVar2) && ((0.0 < *(float *)(param_1 + 0x264) || (0.0 < *(float *)(param_1 + 0x270)))))
  {
    fVar1 = *(float *)(param_1 + 0x520);
    if (*(longlong *)(param_1 + 0x280) != 0) {
      fVar1 = (float)UCurveFloat::GetFloatValue(*(longlong *)(param_1 + 0x280),fVar1);
    }
    if (fVar1 < 1.0) {
      fVar2 = *(float *)(param_1 + 0x21c) * *(float *)(param_1 + 0x25c);
      fVar2 = (*(float *)(param_1 + 0x21c) - fVar2) * fVar1 + fVar2;
      if (fVar2 <= 0.01) {
        fVar2 = 0.01;
      }
      return fVar2;
    }
  }
  return fVar2;
}



// FUNCTION 1430776f0 FUN_1430776f0 body=107 status=ok
// SIG undefined FUN_1430776f0(void)

undefined8 FUN_1430776f0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  
  if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x818))();
    bVar1 = *(byte *)(param_1 + 0x691);
    if ((cVar2 != '\0') && ((int)(uint)bVar1 < *(int *)(param_1 + 0x718))) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x710) + (ulonglong)bVar1 * 8);
    }
    if ((int)(uint)bVar1 < *(int *)(param_1 + 0x708)) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x700) + (ulonglong)bVar1 * 8);
    }
  }
  return 0;
}



// FUNCTION 143077760 FUN_143077760 body=60 status=ok
// SIG undefined FUN_143077760(void)

ulonglong FUN_143077760(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(byte *)(param_1 + 0x690);
  uVar2 = uVar3;
  if ((((int)(uint)*(byte *)(param_1 + 0x690) < *(int *)(param_1 + 0x6a0)) &&
      (uVar2 = *(ulonglong *)(param_1 + 0x698), *(longlong *)(uVar2 + 8 + uVar3 * 0x48) != 0)) &&
     (lVar1 = *(longlong *)(uVar2 + 0x18 + uVar3 * 0x48), uVar2 = 0, lVar1 != 0)) {
    return (ulonglong)*(byte *)(lVar1 + 0x188);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1430777a0 FUN_1430777a0 body=35 status=ok
// SIG undefined FUN_1430777a0(void)

undefined8 FUN_1430777a0(longlong param_1)

{
  if ((int)(uint)*(byte *)(param_1 + 0x690) < *(int *)(param_1 + 0x6a0)) {
    return *(undefined8 *)
            (*(longlong *)(param_1 + 0x698) + 0x30 + (ulonglong)*(byte *)(param_1 + 0x690) * 0x48);
  }
  return 0;
}



// FUNCTION 1430777d0 FUN_1430777d0 body=140 status=ok
// SIG undefined FUN_1430777d0(void)

longlong * FUN_1430777d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = *(longlong *)(param_1 + 0x698);
  lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x6a0) * 0x48;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
    if (*(longlong *)(lVar3 + 0x30) != 0) {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + 0x30);
    }
  }
  return param_2;
}



// FUNCTION 143077870 FUN_143077870 body=1159 status=ok
// SIG undefined FUN_143077870(void)

void FUN_143077870(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  bool bVar3;
  void *_Src;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  undefined *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  undefined2 *puVar22;
  void *local_88;
  ulonglong local_80;
  undefined8 local_78;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar5 = (undefined8 *)FName::ToString(param_1 + 0xff,&local_78);
  puVar15 = &DAT_143f3eda8;
  if (*(int *)(puVar5 + 1) == 0) {
    puVar22 = &DAT_143f3eda8;
  }
  else {
    puVar22 = (undefined2 *)*puVar5;
  }
  if ((int)param_2[6] == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (undefined2 *)param_2[5];
  }
  if ((int)param_2[8] != 0) {
    puVar15 = (undefined2 *)param_2[7];
  }
  cVar4 = AActor::IsActorTickEnabled(param_1);
  puVar10 = &DAT_145a5f664;
  if (cVar4 != '\0') {
    puVar10 = &DAT_145a5f59c;
  }
  FString::PrintfImpl(&local_88,L"%s[State] %s%s %s",puVar15,puVar16,puVar22,puVar10);
  iVar9 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar9 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
  }
  _Src = local_88;
  puVar5 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
  *puVar5 = 0;
  iVar9 = (int)local_80;
  *(int *)(puVar5 + 1) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar5,local_80 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar5,_Src,(longlong)iVar9 * 2);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  if (CONCAT44(local_78._4_4_,(int)local_78) != 0) {
    FMemory::Free();
  }
  local_78._4_4_ = 1;
  uVar17 = *(uint *)(param_1 + 0x5b);
  puVar1 = (uint *)(param_1 + 0x58);
  local_78._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (uVar17 != 0) {
    puVar20 = (uint *)param_1[0x5a];
    if ((uint *)param_1[0x5a] == (uint *)0x0) {
      puVar20 = puVar1;
    }
    uVar21 = *puVar20;
    uStack_60 = 0;
    local_78._0_4_ = 0;
    while (uVar21 == 0) {
      lVar14 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar9 = (int)local_78 + 1;
      bVar3 = (int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78._0_4_ = iVar9;
      if (bVar3) goto LAB_143077a39;
      uVar21 = puVar20[lVar14 + 1];
    }
    local_78._4_4_ = uVar21 - 1 & uVar21 ^ uVar21;
    iVar9 = 0x1f;
    if (local_78._4_4_ != 0) {
      for (; local_78._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (local_78._4_4_ == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_68._4_4_ = (uStack_60 - iVar9) + 0x1f;
    if ((int)uVar17 < (int)local_68._4_4_) {
LAB_143077a39:
      local_68._4_4_ = uVar17;
    }
  }
  local_50 = param_1 + 0x56;
  uVar21 = *(uint *)(param_1 + 0x5b);
  uStack_48 = CONCAT44(local_78._4_4_,(int)local_78);
  uStack_38 = CONCAT44(local_68._4_4_,0xffffffff);
  local_58 = CONCAT44(uStack_5c,uStack_60);
  uVar19 = uVar21 & 0xffffffe0;
  _iStack_70 = CONCAT44(local_78._4_4_,(int)local_78);
  uStack_60 = 0xffffffff;
  uStack_5c = local_68._4_4_;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  local_78 = local_50;
  local_68 = puVar1;
  if (uVar21 != uVar17) {
    puVar20 = (uint *)param_1[0x5a];
    if ((uint *)param_1[0x5a] == (uint *)0x0) {
      puVar20 = puVar1;
    }
    uVar13 = puVar20[(int)uVar21 >> 5] & -1 << ((byte)uVar21 & 0x1f);
    iVar9 = (int)uVar21 >> 5;
    while (uVar13 == 0) {
      uVar19 = uVar19 + 0x20;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
      goto LAB_143077af8;
      uVar13 = puVar20[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
    iVar9 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uVar21 = (uVar19 - iVar9) + 0x1f;
    if ((int)uVar17 < (int)uVar21) {
LAB_143077af8:
      uVar21 = uVar17;
    }
  }
  do {
    if (((uStack_5c == uVar21) && (local_68 == puVar1)) && (local_78 == param_1 + 0x56)) {
      (**(code **)(*param_1 + 0x9b8))(param_1,(char)param_1[0xd2],param_2);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146b47b18) {
        _Init_thread_header(&DAT_146b47b18);
        if (DAT_146b47b18 == -1) {
          FName::FName(&DAT_146b47b10,L"Modes",1);
          _Init_thread_footer(&DAT_146b47b18);
        }
      }
      plVar12 = *(longlong **)param_2[2];
      plVar7 = plVar12 + (int)((longlong *)param_2[2])[1];
      while( true ) {
        if (plVar12 == plVar7) {
          return;
        }
        if (*plVar12 == DAT_146b47b10) break;
        plVar12 = plVar12 + 1;
      }
      uVar17 = 0;
      if ((int)param_1[0xd4] < 1) {
        return;
      }
      do {
        if (uVar17 != *(byte *)(param_1 + 0xd2)) {
          iVar9 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar9 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
          }
          puVar5 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
          *puVar5 = 0;
          puVar5[1] = 0;
          (**(code **)(*param_1 + 0x9b8))(param_1,uVar17 & 0xff,param_2);
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (int)param_1[0xd4]);
      return;
    }
    lVar14 = *(longlong *)(*local_78 + (longlong)(int)uStack_5c * 0x10);
    if (lVar14 != 0) {
      uVar6 = FUN_1430bb490();
      plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar14,uVar6);
      if (plVar7 != (longlong *)0x0) {
        iVar9 = (int)param_1[0xd4];
        uVar18 = 0;
        if (0 < iVar9) {
          do {
            uVar11 = uVar18 & 0xff;
            if (((int)uVar11 < iVar9) &&
               (lVar2 = param_1[0xd3] + uVar11 * 0x48,
               *(longlong *)(param_1[0xd3] + 8 + uVar11 * 0x48) != 0)) {
              plVar8 = *(longlong **)(lVar2 + 0x38);
              plVar12 = plVar8 + *(int *)(lVar2 + 0x40);
              for (; plVar8 != plVar12; plVar8 = plVar8 + 1) {
                if (*plVar8 == lVar14) goto LAB_143077ba7;
              }
            }
            uVar17 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar17;
          } while ((int)uVar17 < iVar9);
        }
        (**(code **)(*plVar7 + 0x10))(plVar7,param_2);
      }
    }
LAB_143077ba7:
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  } while( true );
}



// FUNCTION 143077d00 FUN_143077d00 body=207 status=ok
// SIG undefined FUN_143077d00(void)

/* WARNING: Removing unreachable block (ram,0x000143077dbf) */

void FUN_143077d00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if ((param_1 == 0x178) || (cVar2 = UActorComponent::IsComponentTickEnabled(), cVar2 == '\0')) {
    if ((int)param_2[8] == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)param_2[7];
    }
    pwVar5 = L"%s%s";
  }
  else if ((int)param_2[8] == 0) {
    puVar6 = &DAT_143f3eda8;
    pwVar5 = L"%s%s *";
  }
  else {
    puVar6 = (undefined2 *)param_2[7];
    pwVar5 = L"%s%s *";
  }
  FString::PrintfImpl(&local_18,pwVar5,puVar6,L"[Ammo]");
  lVar1 = param_2[1];
  iVar3 = (int)lVar1 + 1;
  *(int *)(param_2 + 1) = iVar3;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
  }
  puVar4 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *param_2);
  *puVar4 = 0;
  *puVar4 = local_18;
  *(undefined4 *)(puVar4 + 1) = local_10;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_c;
  return;
}



// FUNCTION 143077dd0 FUN_143077dd0 body=544 status=ok
// SIG undefined FUN_143077dd0(void)

/* WARNING: Removing unreachable block (ram,0x000143077ec5) */

void FUN_143077dd0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  undefined2 *local_18;
  undefined8 local_10;
  
  cVar3 = FUN_143070860(param_2,&DAT_146b479e8);
  if (cVar3 != '\0') {
    plVar1 = (longlong *)(param_1 + -0x178);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = UActorComponent::IsComponentTickEnabled(plVar1), cVar3 == '\0')) {
      if ((int)param_2[8] == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)param_2[7];
      }
      pwVar8 = L"%s%s";
    }
    else if ((int)param_2[8] == 0) {
      puVar9 = &DAT_143f3eda8;
      pwVar8 = L"%s%s *";
    }
    else {
      puVar9 = (undefined2 *)param_2[7];
      pwVar8 = L"%s%s *";
    }
    FString::PrintfImpl(&local_18,pwVar8,puVar9,L"[Ammo]");
    lVar2 = param_2[1];
    iVar4 = (int)lVar2 + 1;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
    }
    puVar7 = (undefined8 *)((longlong)(int)lVar2 * 0x10 + *param_2);
    *puVar7 = 0;
    *puVar7 = local_18;
    *(int *)(puVar7 + 1) = (int)local_10;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18 = (undefined2 *)0x0;
    uVar5 = (**(code **)(*plVar1 + 0x418))(plVar1);
    uVar6 = (**(code **)(*plVar1 + 0x420))(plVar1);
    FString::PrintfImpl(&local_18,L"%d (%d)",uVar6,uVar5);
    puVar9 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar9 = local_18;
    }
    uVar5 = (**(code **)(*plVar1 + 0x430))(plVar1);
    uVar6 = (**(code **)(*plVar1 + 0x438))(plVar1);
    FUN_141287300(param_2,L"Loaded:",puVar9,L"Spare:",uVar6,L"Stored:",uVar5);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    cVar3 = FUN_143070930(param_2);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(*plVar1 + 0x500))(plVar1);
      if (cVar3 != '\0') {
        FUN_141286100(param_2,L"Regen Rate:",*(undefined4 *)(param_1 + 0x9c));
        FUN_141286100(param_2,L"Consume Regen Delay:",*(undefined4 *)(param_1 + 0xa0));
      }
      uVar5 = (**(code **)(*plVar1 + 0x420))(plVar1);
      FUN_141285dd0(param_2,L"Server Loaded Ammo:",*(undefined4 *)(param_1 + 0xc0),
                    L"Client Loaded Ammo:",uVar5);
    }
  }
  return;
}



// FUNCTION 143077ff0 FUN_143077ff0 body=436 status=ok
// SIG undefined FUN_143077ff0(void)

void FUN_143077ff0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  undefined2 *local_18;
  int local_10;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x2b8);
  uVar3 = UEnum::GetPrivateStaticClass();
  lVar4 = FUN_141799410(uVar3,0,L"/Script/GbxWeapon.EWeaponChargeState",0);
  if (lVar4 == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x75d,L"Couldn\'t find enum \'%s\'",L"/Script/GbxWeapon.EWeaponChargeState"
              );
    uVar7 = 1;
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x75d,L"Couldn\'t find enum \'%s\'",
               L"/Script/GbxWeapon.EWeaponChargeState");
  }
  UEnum::GetNameStringByValue(lVar4,&local_18,uVar1);
  puVar5 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar5 = local_18;
  }
  uVar1 = UActorComponent::IsComponentTickEnabled(param_1);
  uVar6 = FUN_1430774d0(param_1);
  uVar3 = CONCAT44(uVar7,uVar6);
  FUN_143065f00(param_2,L"State:",puVar5,L"Percent:",uVar3,L"Tick:",uVar1);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar3 = CONCAT44(uVar7,*(undefined4 *)(param_1 + 0x1c8));
  FUN_141286870(param_2,L"Charge Time:",*(undefined4 *)(param_1 + 0x19c),L"Overcharge Hold Time:",
                uVar3,L"Discharge Time:",*(undefined4 *)(param_1 + 0x1a8));
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  cVar2 = FUN_143070930(param_2);
  if (cVar2 != '\0') {
    FUN_141286100(param_2,L"Cancel Charge Delay:",*(undefined4 *)(param_1 + 0x1b4));
    FUN_141286530(param_2,L"Required Use Charge Pct:",*(undefined4 *)(param_1 + 0x1bc),
                  L"Commit Use Charge Pct:",CONCAT44(uVar7,*(undefined4 *)(param_1 + 0x1c0)));
  }
  return;
}



// FUNCTION 1430781b0 FUN_1430781b0 body=238 status=ok
// SIG undefined FUN_1430781b0(void)

void FUN_1430781b0(longlong param_1,undefined8 param_2)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  cVar2 = FUN_143070860(param_2,&DAT_146b47ec0);
  if (cVar2 != '\0') {
    FUN_14309b9e0(param_1,param_2);
    if (0 < *(int *)(param_1 + 0x74)) {
      fVar1 = *(float *)(param_1 + 0x68);
      fVar3 = (float)FUN_14247f5a0(param_1 + 0x48);
      if ((fVar3 <= 0.0) || (fVar3 = *(float *)(param_1 + 0x4c), fVar3 <= 0.0)) {
        fVar3 = 1.0;
      }
      else {
        fVar4 = (float)FUN_14247f5a0(param_1 + 0x48);
        fVar3 = fVar3 / fVar4;
      }
      FUN_141286530(param_2,L"Reload Time:",*(undefined4 *)(param_1 + 0x4c),L"Taped Reload Time:",
                    fVar3 * fVar1);
      return;
    }
    uVar5 = (**(code **)(*(longlong *)(param_1 + -0x178) + 0x428))();
    FUN_141286100(param_2,L"Reload Time:",uVar5);
  }
  return;
}



// FUNCTION 1430782a0 FUN_1430782a0 body=57 status=ok
// SIG undefined FUN_1430782a0(void)

void FUN_1430782a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143070860(param_2,&DAT_146b48020);
  if (cVar1 != '\0') {
    FUN_1430782e0(param_1,param_2);
  }
  return;
}



// FUNCTION 1430782e0 FUN_1430782e0 body=745 status=ok
// SIG undefined FUN_1430782e0(void)

void FUN_1430782e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  cVar2 = FUN_143070860(param_2,&DAT_146b48020);
  if (cVar2 == '\0') {
    return;
  }
  FUN_14309ba70(param_1,param_2);
  plVar1 = (longlong *)(param_1 + -0x178);
  fVar3 = (float)(**(code **)(*plVar1 + 0x548))(plVar1);
  uVar6 = 0x3f800000;
  FUN_141286100(param_2,L"Fire Rate:",1.0 / fVar3);
  if (0.0 < *(float *)(param_1 + 0xec)) {
LAB_143078379:
    uVar6 = *(undefined4 *)(param_1 + 0x3a8);
    if (*(longlong *)(param_1 + 0x108) != 0) {
      uVar6 = UCurveFloat::GetFloatValue(*(longlong *)(param_1 + 0x108),uVar6);
    }
  }
  else {
    if (*(float *)(param_1 + 0xf8) <= 0.0) goto LAB_1430783aa;
    if ((0.0 < *(float *)(param_1 + 0xec)) || (0.0 < *(float *)(param_1 + 0xf8)))
    goto LAB_143078379;
  }
  FUN_141286100(param_2,L"Fire Rate Percent:",uVar6);
LAB_1430783aa:
  uVar6 = (**(code **)(*plVar1 + 0x488))(plVar1);
  FUN_141286100(param_2,L"Spread:",uVar6);
  FUN_141286530(param_2,L"Accuracy Impulse:",*(undefined4 *)(param_1 + 0x188),
                L"Burst Impulse Scale:",*(undefined4 *)(param_1 + 0x194));
  fVar3 = *(float *)(param_1 + 0x1a4);
  if ((*(longlong *)(param_1 + 0x1e8) != 0) &&
     (cVar2 = (**(code **)(*plVar1 + 0x408))(plVar1), cVar2 != '\0')) {
    uVar6 = (**(code **)(*plVar1 + 0x560))(plVar1);
    fVar4 = (float)UCurveFloat::GetFloatValue(*(undefined8 *)(param_1 + 0x1e8),uVar6);
    fVar3 = fVar3 * fVar4;
  }
  fVar4 = *(float *)(param_1 + 500);
  if ((*(longlong *)(param_1 + 0x238) != 0) &&
     (cVar2 = (**(code **)(*plVar1 + 0x408))(plVar1), cVar2 != '\0')) {
    uVar6 = (**(code **)(*plVar1 + 0x560))(plVar1);
    fVar5 = (float)UCurveFloat::GetFloatValue(*(undefined8 *)(param_1 + 0x238),uVar6);
    fVar4 = fVar4 * fVar5;
  }
  FUN_141286530(param_2,L"Damage:",fVar3,L"Damage Radius:",fVar4);
  if (1 < *(int *)(param_1 + 0x150)) {
    FUN_143065a00(param_2,L"Fire Sequence Length:",*(int *)(param_1 + 0x150),L"Reset Time:",
                  *(undefined4 *)(param_1 + 0x158),L"Current Index:",
                  *(undefined1 *)(param_1 + 0x374));
  }
  cVar2 = FUN_143070930(param_2);
  if (cVar2 != '\0') {
    FUN_143065920(param_2,L"Shot Ammo Cost:",*(undefined4 *)(param_1 + 0x16c));
    FUN_143065920(param_2,L"Automatic Burst Count:",*(undefined4 *)(param_1 + 0xb0));
    FUN_141286100(param_2,L"Burst Fire Delay:",*(undefined4 *)(param_1 + 0xbc));
    FUN_141286530(param_2,L"Fire Rate Accel Duration:",*(undefined4 *)(param_1 + 0xec),
                  L"Fire Rate Decel Duration:",*(undefined4 *)(param_1 + 0xf8));
    fVar3 = *(float *)(param_1 + 0x244);
    if ((*(longlong *)(param_1 + 0x270) != 0) &&
       (cVar2 = (**(code **)(*plVar1 + 0x408))(plVar1), cVar2 != '\0')) {
      uVar6 = (**(code **)(*plVar1 + 0x560))(plVar1);
      fVar4 = (float)UCurveFloat::GetFloatValue(*(undefined8 *)(param_1 + 0x270),uVar6);
      fVar3 = fVar3 * fVar4;
    }
    FUN_141286100(param_2,L"Impact Force:",fVar3);
  }
  return;
}



// FUNCTION 1430785d0 FUN_1430785d0 body=218 status=ok
// SIG undefined FUN_1430785d0(void)

void FUN_1430785d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = FUN_143070860(param_2,&DAT_146b48020);
  if (cVar1 != '\0') {
    FUN_1430782e0(param_1,param_2);
    cVar1 = FUN_143070930(param_2);
    if (cVar1 != '\0') {
      FUN_143065920(param_2,L"Projectiles Per Shot:",*(undefined4 *)(param_1 + 0x78c));
      fVar4 = *(float *)(param_1 + 0x798);
      if ((*(longlong *)(param_1 + 0x7a0) != 0) &&
         (cVar1 = (**(code **)(*(longlong *)(param_1 + -0x178) + 0x408))(param_1 + -0x178),
         cVar1 != '\0')) {
        uVar2 = (**(code **)(*(longlong *)(param_1 + -0x178) + 0x560))(param_1 + -0x178);
        fVar3 = (float)UCurveFloat::GetFloatValue(*(undefined8 *)(param_1 + 0x7a0),uVar2);
        fVar4 = fVar4 * fVar3;
      }
      FUN_141286100(param_2,L"Projectile Speed Scale:",fVar4);
    }
  }
  return;
}



// FUNCTION 1430786d0 FUN_1430786d0 body=305 status=ok
// SIG undefined FUN_1430786d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430786d0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  code *local_c8 [2];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_2;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  uVar1 = *(undefined1 *)(param_2 + 8);
  local_78 = (code *)&LAB_14306dea0;
  local_98 = 0;
  local_88 = 0;
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)*plVar3)(plVar3,local_b8);
      (**(code **)(*plVar3 + 8))(plVar3);
      local_c8[0] = local_78;
      goto LAB_143078784;
    }
  }
  local_c8[0] = FUN_1407c3030;
LAB_143078784:
  FUN_143078810(param_1,local_c8,uVar1,param_3);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143078810 FUN_143078810 body=548 status=ok
// SIG undefined FUN_143078810(void)

void FUN_143078810(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  code *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  uVar5 = 0;
  if ((param_3 & 0xfffffffd) == 0) {
    plVar6 = *(longlong **)(param_1 + 0x700);
    uVar7 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
    if (plVar6 + *(int *)(param_1 + 0x708) < plVar6) {
      uVar7 = uVar5;
    }
    uVar4 = uVar5;
    if (uVar7 != 0) {
      do {
        lVar1 = *plVar6;
        if (lVar1 != 0) {
          local_58 = 0;
          local_48 = 0;
          if (*(int *)(param_2 + 8) == 0) {
LAB_1430788db:
            local_88[0] = FUN_1407c3030;
          }
          else {
            puVar3 = (undefined8 *)param_2[6];
            if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
              puVar3 = param_2 + 2;
            }
            if (puVar3 == (undefined8 *)0x0) goto LAB_1430788db;
            plVar2 = (longlong *)(**(code **)*puVar3)(puVar3,local_78);
            (**(code **)(*plVar2 + 8))(plVar2);
            local_88[0] = (code *)*param_2;
          }
          FUN_143078a40(lVar1,local_88,param_4);
        }
        plVar6 = plVar6 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar7);
    }
  }
  if (param_3 < 2) {
    plVar6 = *(longlong **)(param_1 + 0x710);
    uVar7 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
    if (plVar6 + *(int *)(param_1 + 0x718) < plVar6) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) {
      do {
        lVar1 = *plVar6;
        if (lVar1 != 0) {
          local_58 = 0;
          local_48 = 0;
          if (*(int *)(param_2 + 8) == 0) {
LAB_14307899a:
            local_88[0] = FUN_1407c3030;
          }
          else {
            puVar3 = (undefined8 *)param_2[6];
            if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
              puVar3 = param_2 + 2;
            }
            if (puVar3 == (undefined8 *)0x0) goto LAB_14307899a;
            plVar2 = (longlong *)(**(code **)*puVar3)(puVar3,local_78);
            (**(code **)(*plVar2 + 8))(plVar2);
            local_88[0] = (code *)*param_2;
          }
          FUN_143078a40(lVar1,local_88,param_4);
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar7);
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar6 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar6 = param_2 + 2;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143078a40 FUN_143078a40 body=294 status=ok
// SIG undefined FUN_143078a40(void)

void FUN_143078a40(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x60);
  lVar7 = (longlong)*(int *)(param_1 + 0x68) * 0x60 + lVar6;
  for (; lVar6 != lVar7; lVar6 = lVar6 + 0x60) {
    if (*(longlong *)(lVar6 + 0x58) != 0) {
      uVar3 = 0;
      if (*(int *)(param_2 + 8) != 0) {
        plVar4 = (longlong *)param_2[6];
        if ((longlong *)param_2[6] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if (plVar4 != (longlong *)0x0) {
          uVar3 = (**(code **)(*plVar4 + 8))();
        }
      }
      cVar2 = (*(code *)*param_2)(uVar3,lVar6);
      if (cVar2 != '\0') {
        iVar1 = *(int *)(param_3 + 200);
        *(int *)(param_3 + 200) = iVar1 + 1;
        if (*(int *)(param_3 + 0xcc) < iVar1 + 1) {
          FUN_14127c7c0(param_3,iVar1);
        }
        lVar5 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar5 = param_3;
        }
        *(undefined8 *)(lVar5 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar6 + 0x58);
      }
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar4 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar4 = param_2 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 143078b70 FUN_143078b70 body=70 status=ok
// SIG undefined FUN_143078b70(void)

float FUN_143078b70(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x644);
  if ((*(longlong *)(param_1 + 0x4a0) != 0) && (*(longlong *)(param_1 + 0x4a8) != 0)) {
    fVar1 = (float)(**(code **)(**(longlong **)(param_1 + 0x4a8) + 0x188))();
    fVar2 = fVar2 * fVar1;
  }
  return fVar2;
}



// FUNCTION 143078bc0 FUN_143078bc0 body=39 status=ok
// SIG undefined FUN_143078bc0(void)

longlong FUN_143078bc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4f8);
  if (lVar1 == 0) {
    FUN_143094d00();
    lVar1 = *(longlong *)(param_1 + 0x4f8);
  }
  return lVar1;
}



// FUNCTION 143078bf0 FUN_143078bf0 body=160 status=ok
// SIG undefined FUN_143078bf0(void)

longlong FUN_143078bf0(longlong param_1,ulonglong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((int)((uint)param_2 & 0xff) < *(int *)(param_1 + 0x6a0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (param_2 & 0xff) * 0x48) != 0) {
      bVar1 = true;
      goto LAB_143078c21;
    }
  }
  bVar1 = false;
LAB_143078c21:
  if (bVar1) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (param_2 & 0xff) * 0x48);
    if (lVar3 != 0) {
      lVar2 = FUN_1430bdfe0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        lVar3 = 0;
      }
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 143078c90 FUN_143078c90 body=190 status=ok
// SIG undefined FUN_143078c90(void)

float FUN_143078c90(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 0x21c) <= 0.0) {
    return 0.1;
  }
  if ((0.0 < *(float *)(param_1 + 0x264)) || (0.0 < *(float *)(param_1 + 0x270))) {
    fVar2 = *(float *)(param_1 + 0x520);
    if (*(longlong *)(param_1 + 0x280) != 0) {
      fVar2 = (float)UCurveFloat::GetFloatValue(*(longlong *)(param_1 + 0x280),fVar2);
    }
  }
  else {
    fVar2 = 1.0;
  }
  if (fVar2 < 1.0) {
    fVar1 = *(float *)(param_1 + 0x21c) * *(float *)(param_1 + 0x25c);
    fVar1 = (*(float *)(param_1 + 0x21c) - fVar1) * fVar2 + fVar1;
    if (fVar1 <= 0.01) {
      fVar1 = 0.01;
    }
    return 1.0 / fVar1;
  }
  return 1.0 / *(float *)(param_1 + 0x21c);
}



// FUNCTION 143078d50 FUN_143078d50 body=62 status=ok
// SIG undefined FUN_143078d50(void)

ulonglong FUN_143078d50(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(float *)(param_1 + 0x264) <= 0.0) && (*(float *)(param_1 + 0x270) <= 0.0)) {
    return 0x3f800000;
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    uVar1 = UCurveFloat::GetFloatValue(*(longlong *)(param_1 + 0x280),*(uint *)(param_1 + 0x520));
    return uVar1;
  }
  return (ulonglong)*(uint *)(param_1 + 0x520);
}



// FUNCTION 143078d90 FUN_143078d90 body=26 status=ok
// SIG undefined FUN_143078d90(void)

longlong FUN_143078d90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x940);
  if ((lVar1 == 0) || (*(int *)(param_1 + 0x904) < *(int *)(lVar1 + 0x4c))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143078de0 FUN_143078de0 body=589 status=ok
// SIG undefined FUN_143078de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143078de0(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *in_RCX;
  float fVar13;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  float local_f0;
  undefined1 local_e8 [48];
  undefined1 local_b8 [48];
  undefined1 local_88 [48];
  ulonglong local_58;
  
  uVar12 = uRam00000001468b5b78;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  bVar9 = *(byte *)(in_RCX + 0xfd);
  if ((bVar9 & 8) == 0) {
    *param_2 = _DAT_1468b5b70;
    param_2[1] = uVar12;
    uVar8 = uRam00000001468b5b8c;
    uVar7 = uRam00000001468b5b88;
    uVar6 = uRam00000001468b5b84;
    *(undefined4 *)(param_2 + 2) = _DAT_1468b5b80;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
    *(undefined4 *)(param_2 + 3) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar8;
    uVar8 = uRam00000001468b5b9c;
    uVar7 = uRam00000001468b5b98;
    uVar6 = uRam00000001468b5b94;
    param_1 = _DAT_1468b5b90;
    *(undefined4 *)(param_2 + 4) = _DAT_1468b5b90;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar6;
    *(undefined4 *)(param_2 + 5) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar8;
    bVar9 = *(byte *)(in_RCX + 0xfd);
  }
  uVar12 = uRam00000001468b5b78;
  if ((bVar9 & 0x10) == 0) {
    *param_3 = _DAT_1468b5b70;
    param_3[1] = uVar12;
    uVar8 = uRam00000001468b5b8c;
    uVar7 = uRam00000001468b5b88;
    uVar6 = uRam00000001468b5b84;
    *(undefined4 *)(param_3 + 2) = _DAT_1468b5b80;
    *(undefined4 *)((longlong)param_3 + 0x14) = uVar6;
    *(undefined4 *)(param_3 + 3) = uVar7;
    *(undefined4 *)((longlong)param_3 + 0x1c) = uVar8;
    uVar8 = uRam00000001468b5b9c;
    uVar7 = uRam00000001468b5b98;
    uVar6 = uRam00000001468b5b94;
    param_1 = _DAT_1468b5b90;
    *(undefined4 *)(param_3 + 4) = _DAT_1468b5b90;
    *(undefined4 *)((longlong)param_3 + 0x24) = uVar6;
    *(undefined4 *)(param_3 + 5) = uVar7;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uVar8;
  }
  plVar10 = (longlong *)(**(code **)(*in_RCX + 0x900))(param_1,param_4,0);
  if ((plVar10 != (longlong *)0x0) && ((*(byte *)(in_RCX + 0xfd) & 0x18) != 0)) {
    lVar1 = *plVar10;
    puVar11 = (undefined8 *)FName::FName(&local_f8,L"Root",1);
    (**(code **)(lVar1 + 0x420))(plVar10,local_e8,*puVar11,0);
    if (param_4 == '\0') {
      puVar11 = (undefined8 *)FUN_14222dc50(in_RCX,&local_f8);
    }
    else {
      local_f0 = (float)DAT_1464aa790;
      puVar11 = &local_f8;
      local_f8 = DAT_1464aa788;
    }
    local_f8 = *puVar11;
    fVar13 = (float)((ulonglong)local_f8 >> 0x20);
    local_f0 = *(float *)(puVar11 + 1);
    bVar9 = *(byte *)(in_RCX + 0xfd);
    if ((bVar9 & 8) != 0) {
      uVar12 = (**(code **)(*plVar10 + 0x420))(plVar10,local_b8,in_RCX[0x119],0);
      puVar11 = (undefined8 *)FUN_14162bcf0(uVar12,local_88,local_e8);
      uVar12 = puVar11[1];
      *param_2 = *puVar11;
      param_2[1] = uVar12;
      fVar2 = *(float *)(puVar11 + 2);
      fVar3 = *(float *)((longlong)puVar11 + 0x14);
      fVar4 = *(float *)(puVar11 + 3);
      fVar5 = *(float *)((longlong)puVar11 + 0x1c);
      *(float *)(param_2 + 2) = fVar2;
      *(float *)((longlong)param_2 + 0x14) = fVar3;
      *(float *)(param_2 + 3) = fVar4;
      *(float *)((longlong)param_2 + 0x1c) = fVar5;
      uVar12 = puVar11[5];
      param_2[4] = puVar11[4];
      param_2[5] = uVar12;
      *(float *)(param_2 + 2) = (float)local_f8 * fVar2;
      *(float *)((longlong)param_2 + 0x14) = fVar13 * fVar3;
      *(float *)(param_2 + 3) = local_f0 * fVar4;
      *(float *)((longlong)param_2 + 0x1c) = fVar5 * 0.0;
      bVar9 = *(byte *)(in_RCX + 0xfd);
    }
    if ((bVar9 & 0x10) != 0) {
      uVar12 = (**(code **)(*plVar10 + 0x420))(plVar10,local_88,in_RCX[0x11a],0);
      puVar11 = (undefined8 *)FUN_14162bcf0(uVar12,local_b8,local_e8);
      uVar12 = puVar11[1];
      *param_3 = *puVar11;
      param_3[1] = uVar12;
      fVar2 = *(float *)(puVar11 + 2);
      fVar3 = *(float *)((longlong)puVar11 + 0x14);
      fVar4 = *(float *)(puVar11 + 3);
      fVar5 = *(float *)((longlong)puVar11 + 0x1c);
      *(float *)(param_3 + 2) = fVar2;
      *(float *)((longlong)param_3 + 0x14) = fVar3;
      *(float *)(param_3 + 3) = fVar4;
      *(float *)((longlong)param_3 + 0x1c) = fVar5;
      uVar12 = puVar11[5];
      param_3[4] = puVar11[4];
      param_3[5] = uVar12;
      *(float *)(param_3 + 2) = (float)local_f8 * fVar2;
      *(float *)((longlong)param_3 + 0x14) = fVar13 * fVar3;
      *(float *)(param_3 + 3) = local_f0 * fVar4;
      *(float *)((longlong)param_3 + 0x1c) = fVar5 * 0.0;
    }
  }
  return;
}



// FUNCTION 143079030 FUN_143079030 body=83 status=ok
// SIG undefined FUN_143079030(void)

undefined1 FUN_143079030(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0xb0) != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x124);
    if (lVar1 != 0) {
      FUN_140729f20(param_2,param_1 + 0xb8);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143079090 FUN_143079090 body=60 status=ok
// SIG undefined FUN_143079090(void)

float FUN_143079090(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  float fVar3;
  
  bVar1 = *(byte *)(param_1 + 0x690);
  if ((int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48),
       lVar2 != 0)) {
      fVar3 = (float)FUN_14309ee20(0x3f800000);
      if (0.0 < fVar3) {
        return (*(float *)(lVar2 + 0x198) - 1.0) * fVar3 + 1.0;
      }
      return 1.0;
    }
  }
  return 1.0;
}



// FUNCTION 1430790f0 FUN_1430790f0 body=8 status=ok
// SIG undefined FUN_1430790f0(void)

undefined1 FUN_1430790f0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x6c4);
}



// FUNCTION 143079100 FUN_143079100 body=773 status=ok
// SIG undefined FUN_143079100(void)

void FUN_143079100(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar4 < DAT_146b47ab8) && (_Init_thread_header(&DAT_146b47ab8), DAT_146b47ab8 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SpawnSpeedScale",1);
    DAT_146b47ab0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47ab8);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b47ab0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b47ab0 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47ab0 + 0x30));
  }
  if ((*piVar4 < DAT_146b47ac8) && (_Init_thread_header(&DAT_146b47ac8), DAT_146b47ac8 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SpawnModifierType",1);
    DAT_146b47ac0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47ac8);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b47ac0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b47ac0 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47ac0 + 0x30));
  }
  if ((*piVar4 < DAT_146b47ad8) && (_Init_thread_header(&DAT_146b47ad8), DAT_146b47ad8 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SpawnModifierValue",1);
    DAT_146b47ad0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47ad8);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b47ad0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b47ad0 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47ad0 + 0x30));
  }
  if ((*piVar4 < DAT_146b47ae8) && (_Init_thread_header(&DAT_146b47ae8), DAT_146b47ae8 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DamageInfo",1);
    DAT_146b47ae0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47ae8);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b47ae0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b47ae0 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47ae0 + 0x30));
  }
  return;
}



// FUNCTION 143079410 FUN_143079410 body=1460 status=ok
// SIG undefined FUN_143079410(void)

void FUN_143079410(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b47b28) && (_Init_thread_header(&DAT_146b47b28), DAT_146b47b28 == -1)) {
    uVar1 = FUN_1430b3b80();
    FUN_1430b3b80();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"EquipTime",1);
    DAT_146b47b20 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47b28);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47b20 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47b20 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47b20 + 0x30));
  }
  if ((*piVar5 < DAT_146b47b38) && (_Init_thread_header(&DAT_146b47b38), DAT_146b47b38 == -1)) {
    uVar1 = FUN_1430b3b80();
    FUN_1430b3b80();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PutDownTime",1);
    DAT_146b47b30 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47b38);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47b30 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47b30 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47b30 + 0x30));
  }
  if ((*piVar5 < DAT_146b47b48) && (_Init_thread_header(&DAT_146b47b48), DAT_146b47b48 == -1)) {
    uVar1 = FUN_1430b3b80();
    FUN_1430b3b80();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SwitchModeTimeScale",1);
    DAT_146b47b40 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47b48);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47b40 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47b40 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47b40 + 0x30));
  }
  if ((*piVar5 < DAT_146b47b58) && (_Init_thread_header(&DAT_146b47b58), DAT_146b47b58 == -1)) {
    uVar1 = FUN_1430b3b80();
    FUN_1430b3b80();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentUseModeIndex",1);
    DAT_146b47b50 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47b58);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47b50 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47b50 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47b50 + 0x30));
  }
  if ((*piVar5 < DAT_146b47b68) && (_Init_thread_header(&DAT_146b47b68), DAT_146b47b68 == -1)) {
    uVar1 = FUN_1430b3b80();
    FUN_1430b3b80();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PendingUseModeIndex",1);
    DAT_146b47b60 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47b68);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47b60 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47b60 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47b60 + 0x30));
  }
  if ((*piVar5 < DAT_146b47b78) && (_Init_thread_header(&DAT_146b47b78), DAT_146b47b78 == -1)) {
    uVar1 = FUN_1430b3b80();
    FUN_1430b3b80();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PendingAttachState",1);
    DAT_146b47b70 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47b78);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47b70 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47b70 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47b70 + 0x30));
  }
  if ((*piVar5 < DAT_146b47b88) && (_Init_thread_header(&DAT_146b47b88), DAT_146b47b88 == -1)) {
    uVar1 = FUN_1430b3b80();
    FUN_1430b3b80();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsTargetLocked",1);
    DAT_146b47b80 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47b88);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47b80 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47b80 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47b80 + 0x30));
  }
  if ((*piVar5 < DAT_146b47b98) && (_Init_thread_header(&DAT_146b47b98), DAT_146b47b98 == -1)) {
    uVar1 = FUN_1430b3b80();
    FUN_1430b3b80();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicationProxy",1);
    DAT_146b47b90 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47b98);
  }
  if (0 < *(int *)(DAT_146b47b90 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47b90 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b47b90 + 0x30));
  }
  return;
}



// FUNCTION 1430799d0 FUN_1430799d0 body=1285 status=ok
// SIG undefined FUN_1430799d0(void)

void FUN_1430799d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b47ba8) && (_Init_thread_header(&DAT_146b47ba8), DAT_146b47ba8 == -1)) {
    uVar1 = UActionBuff::GetPrivateStaticClass();
    UActionBuff::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxLoadedAmmo",1);
    DAT_146b47ba0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47ba8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47ba0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47ba0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47ba0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47bb8) && (_Init_thread_header(&DAT_146b47bb8), DAT_146b47bb8 == -1)) {
    uVar1 = UActionBuff::GetPrivateStaticClass();
    UActionBuff::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"StoredAmmo",1);
    DAT_146b47bb0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47bb8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47bb0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47bb0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47bb0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47bc8) && (_Init_thread_header(&DAT_146b47bc8), DAT_146b47bc8 == -1)) {
    uVar1 = UActionBuff::GetPrivateStaticClass();
    UActionBuff::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ResourcePool",1);
    DAT_146b47bc0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47bc8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47bc0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47bc0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47bc0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47bd8) && (_Init_thread_header(&DAT_146b47bd8), DAT_146b47bd8 == -1)) {
    uVar1 = UActionBuff::GetPrivateStaticClass();
    UActionBuff::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SpareAmmo",1);
    DAT_146b47bd0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47bd8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47bd0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47bd0 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47bd0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47be8) && (_Init_thread_header(&DAT_146b47be8), DAT_146b47be8 == -1)) {
    uVar1 = UActionBuff::GetPrivateStaticClass();
    UActionBuff::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ServerSyncedLoadedAmmo",1);
    DAT_146b47be0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47be8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47be0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47be0 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47be0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47bf8) && (_Init_thread_header(&DAT_146b47bf8), DAT_146b47bf8 == -1)) {
    uVar1 = UActionBuff::GetPrivateStaticClass();
    UActionBuff::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AmmoRegenRate",1);
    DAT_146b47bf0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47bf8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47bf0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47bf0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47bf0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47c08) && (_Init_thread_header(&DAT_146b47c08), DAT_146b47c08 == -1)) {
    uVar1 = UActionBuff::GetPrivateStaticClass();
    UActionBuff::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ConsumeAmmoRegenDelay",1);
    DAT_146b47c00 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47c08);
  }
  if (0 < *(int *)(DAT_146b47c00 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47c00 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b47c00 + 0x30));
  }
  return;
}



// FUNCTION 143079ee0 FUN_143079ee0 body=951 status=ok
// SIG undefined FUN_143079ee0(void)

void FUN_143079ee0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b47c18) && (_Init_thread_header(&DAT_146b47c18), DAT_146b47c18 == -1)) {
    uVar1 = UUGStartScreenUW::GetPrivateStaticClass();
    UUGStartScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ChargeState",1);
    DAT_146b47c10 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47c18);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47c10 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47c10 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47c10 + 0x30));
  }
  if ((*piVar5 < DAT_146b47c28) && (_Init_thread_header(&DAT_146b47c28), DAT_146b47c28 == -1)) {
    uVar1 = UUGStartScreenUW::GetPrivateStaticClass();
    UUGStartScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ChargeTime",1);
    DAT_146b47c20 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47c28);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47c20 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47c20 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47c20 + 0x30));
  }
  if ((*piVar5 < DAT_146b47c38) && (_Init_thread_header(&DAT_146b47c38), DAT_146b47c38 == -1)) {
    uVar1 = UUGStartScreenUW::GetPrivateStaticClass();
    UUGStartScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DischargeTime",1);
    DAT_146b47c30 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47c38);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47c30 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47c30 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47c30 + 0x30));
  }
  if ((*piVar5 < DAT_146b47c48) && (_Init_thread_header(&DAT_146b47c48), DAT_146b47c48 == -1)) {
    uVar1 = UUGStartScreenUW::GetPrivateStaticClass();
    UUGStartScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CancelChargeDelay",1);
    DAT_146b47c40 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47c48);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47c40 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47c40 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47c40 + 0x30));
  }
  if ((*piVar5 < DAT_146b47c58) && (_Init_thread_header(&DAT_146b47c58), DAT_146b47c58 == -1)) {
    uVar1 = UUGStartScreenUW::GetPrivateStaticClass();
    UUGStartScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OverchargeHoldTime",1);
    DAT_146b47c50 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47c58);
  }
  if (0 < *(int *)(DAT_146b47c50 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47c50 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b47c50 + 0x30));
  }
  return;
}



// FUNCTION 14307a2a0 FUN_14307a2a0 body=433 status=ok
// SIG undefined FUN_14307a2a0(void)

void FUN_14307a2a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14309d580();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b47c68) && (_Init_thread_header(&DAT_146b47c68), DAT_146b47c68 == -1)) {
    uVar1 = FUN_1430ba5c0();
    FUN_1430ba5c0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ClientReloadState",1);
    DAT_146b47c60 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47c68);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47c60 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b47c60 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47c60 + 0x30));
  }
  if ((*piVar5 < DAT_146b47c78) && (_Init_thread_header(&DAT_146b47c78), DAT_146b47c78 == -1)) {
    uVar1 = FUN_1430ba5c0();
    FUN_1430ba5c0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentClip",1);
    DAT_146b47c70 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47c78);
  }
  if (0 < *(int *)(DAT_146b47c70 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b47c70 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b47c70 + 0x30));
  }
  return;
}



// FUNCTION 14307a460 FUN_14307a460 body=2685 status=ok
// SIG undefined FUN_14307a460(void)

void FUN_14307a460(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b47ca8) && (_Init_thread_header(&DAT_146b47ca8), DAT_146b47ca8 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FireRate",1);
    DAT_146b47ca0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47ca8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47ca0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47ca0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47ca0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47cb8) && (_Init_thread_header(&DAT_146b47cb8), DAT_146b47cb8 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BurstFireDelay",1);
    DAT_146b47cb0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47cb8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47cb0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47cb0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47cb0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47cc8) && (_Init_thread_header(&DAT_146b47cc8), DAT_146b47cc8 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ShotAmmoCost",1);
    DAT_146b47cc0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47cc8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47cc0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47cc0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47cc0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47cd8) && (_Init_thread_header(&DAT_146b47cd8), DAT_146b47cd8 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Spread",1);
    DAT_146b47cd0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47cd8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47cd0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47cd0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47cd0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47ce8) && (_Init_thread_header(&DAT_146b47ce8), DAT_146b47ce8 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AccuracyImpulse",1);
    DAT_146b47ce0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47ce8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47ce0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47ce0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47ce0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47cf8) && (_Init_thread_header(&DAT_146b47cf8), DAT_146b47cf8 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AutomaticBurstCount",1);
    DAT_146b47cf0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47cf8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47cf0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47cf0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47cf0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47d08) && (_Init_thread_header(&DAT_146b47d08), DAT_146b47d08 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FireRateAccelDuration",1);
    DAT_146b47d00 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47d08);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47d00 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47d00 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47d00 + 0x30));
  }
  if ((*piVar5 < DAT_146b47d18) && (_Init_thread_header(&DAT_146b47d18), DAT_146b47d18 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FireRateDecelDuration",1);
    DAT_146b47d10 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47d18);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47d10 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47d10 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47d10 + 0x30));
  }
  if ((*piVar5 < DAT_146b47d28) && (_Init_thread_header(&DAT_146b47d28), DAT_146b47d28 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ResetFireSequenceTime",1);
    DAT_146b47d20 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47d28);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47d20 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47d20 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47d20 + 0x30));
  }
  if ((*piVar5 < DAT_146b47d38) && (_Init_thread_header(&DAT_146b47d38), DAT_146b47d38 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Damage",1);
    DAT_146b47d30 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47d38);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47d30 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47d30 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47d30 + 0x30));
  }
  if ((*piVar5 < DAT_146b47d48) && (_Init_thread_header(&DAT_146b47d48), DAT_146b47d48 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FlashSlot",1);
    DAT_146b47d40 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47d48);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47d40 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47d40 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47d40 + 0x30));
  }
  if ((*piVar5 < DAT_146b47d58) && (_Init_thread_header(&DAT_146b47d58), DAT_146b47d58 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ClientFireSequenceState",1);
    DAT_146b47d50 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47d58);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47d50 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47d50 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47d50 + 0x30));
  }
  if ((*piVar5 < DAT_146b47d68) && (_Init_thread_header(&DAT_146b47d68), DAT_146b47d68 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FlashCount",1);
    DAT_146b47d60 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47d68);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47d60 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47d60 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47d60 + 0x30));
  }
  if ((*piVar5 < DAT_146b47d78) && (_Init_thread_header(&DAT_146b47d78), DAT_146b47d78 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bFireRateAccelActive",1);
    DAT_146b47d70 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47d78);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47d70 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47d70 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47d70 + 0x30));
  }
  if ((*piVar5 < DAT_146b47d88) && (_Init_thread_header(&DAT_146b47d88), DAT_146b47d88 == -1)) {
    uVar1 = FUN_1430bdfe0();
    FUN_1430bdfe0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ImpactLocation",1);
    DAT_146b47d80 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47d88);
  }
  if (0 < *(int *)(DAT_146b47d80 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47d80 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b47d80 + 0x30));
  }
  return;
}



// FUNCTION 14307aee0 FUN_14307aee0 body=433 status=ok
// SIG undefined FUN_14307aee0(void)

void FUN_14307aee0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14307a460();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b47db8) && (_Init_thread_header(&DAT_146b47db8), DAT_146b47db8 == -1)) {
    uVar1 = FUN_1430bf300();
    FUN_1430bf300();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ProjectilesPerShot",1);
    DAT_146b47db0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47db8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47db0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b47db0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47db0 + 0x30));
  }
  if ((*piVar5 < DAT_146b47dc8) && (_Init_thread_header(&DAT_146b47dc8), DAT_146b47dc8 == -1)) {
    uVar1 = FUN_1430bf300();
    FUN_1430bf300();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ProjectileSpeedScale",1);
    DAT_146b47dc0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47dc8);
  }
  if (0 < *(int *)(DAT_146b47dc0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b47dc0 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b47dc0 + 0x30));
  }
  return;
}



// FUNCTION 14307b0a0 FUN_14307b0a0 body=175 status=ok
// SIG undefined FUN_14307b0a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14307b0a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [896];
  char local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  if (*(char *)(param_1 + 0x4cc) == '\0') {
    return 0;
  }
  uVar2 = FUN_1412996f0();
  lVar3 = FUN_142ddddc0(uVar2);
  if (lVar3 != 0) {
    FUN_142dc1ad0(local_3a8);
    cVar1 = FUN_142dcd6e0(lVar3,local_3a8,0);
    if ((cVar1 != '\0') && (local_28 != '\0')) {
      uVar2 = FUN_142dd0030(local_3a8);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14307b150 FUN_14307b150 body=424 status=ok
// SIG undefined FUN_14307b150(void)

void FUN_14307b150(longlong param_1,undefined8 **param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 local_res8 [8];
  longlong *local_res10;
  undefined8 **local_28;
  undefined4 *local_20;
  
  puVar9 = (undefined4 *)0x0;
  *param_3 = 0;
  if (*(int *)(param_1 + 0x740) != *(int *)(param_1 + 0x76c)) {
    lVar3 = *(longlong *)(param_1 + 0x778);
    if (*(longlong *)(param_1 + 0x778) == 0) {
      lVar3 = param_1 + 0x770;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x780) - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x738);
      do {
        puVar6 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
        if (*(undefined8 ***)(lVar3 + (longlong)iVar2 * 0x18) == param_2) {
          if (iVar2 != -1) goto LAB_14307b1d3;
          break;
        }
        iVar2 = puVar6[4];
      } while (iVar2 != -1);
    }
  }
  puVar6 = puVar9;
LAB_14307b1d3:
  puVar4 = puVar6 + 2;
  if (puVar6 == (undefined4 *)0x0) {
    puVar4 = puVar9;
  }
  if (puVar4 == (undefined4 *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0x700);
    plVar5 = plVar7 + *(int *)(param_1 + 0x708);
    if (plVar7 != plVar5) {
      while (lVar3 = *plVar7, lVar3 == 0) {
        plVar7 = plVar7 + 1;
        if (plVar7 == plVar5) {
          return;
        }
      }
      plVar5 = *(longlong **)(lVar3 + 0x38);
      if ((plVar5 != (longlong *)0x0) && ((*(byte *)(lVar3 + 0x58) & 1) == 0)) {
        lVar1 = plVar5[0xdf];
        local_res10 = (longlong *)param_2;
        iVar2 = (**(code **)(*plVar5 + 0x6c8))();
        if (iVar2 < (int)lVar1) {
          lVar1 = (*(longlong **)(lVar3 + 0x38))[0xdf];
          iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x38) + 0x6c8))();
          uVar8 = (int)lVar1 - iVar2;
          if (-1 < (int)uVar8) {
            puVar9 = (undefined4 *)(ulonglong)uVar8;
          }
        }
        plVar5 = (longlong *)
                 (**(code **)(**(longlong **)(lVar3 + 0x38) + 0x560))
                           (*(longlong **)(lVar3 + 0x38),puVar9);
        if (plVar5 != (longlong *)0x0) {
          local_28 = (undefined8 **)local_res10;
          local_20 = (undefined4 *)0xffffffff0202ffff;
          (**(code **)(*plVar5 + 1000))(plVar5,&local_28,param_3,0);
          local_28 = &local_res10;
          local_20 = param_3;
          FUN_1417e05c0((longlong *)(param_1 + 0x738),local_res8,&local_28,0);
        }
      }
    }
    return;
  }
  *param_3 = *puVar4;
  return;
}



// FUNCTION 14307b300 FUN_14307b300 body=332 status=ok
// SIG undefined FUN_14307b300(void)

void FUN_14307b300(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x700);
  uVar4 = 0;
  plVar3 = plVar7 + *(int *)(param_1 + 0x708);
  for (; plVar7 != plVar3; plVar7 = plVar7 + 1) {
    lVar1 = *plVar7;
    if (lVar1 != 0) {
      if ((*(longlong *)(lVar1 + 0x38) != 0) && ((*(byte *)(lVar1 + 0x58) & 1) == 0)) {
        FUN_14307b630(lVar1,*(longlong *)(lVar1 + 0x38),param_2,param_3);
      }
      plVar2 = *(longlong **)(lVar1 + 0xb0);
      uVar6 = (longlong)*(int *)(lVar1 + 0xb8) & 0x1fffffffffffffff;
      if (plVar2 + *(int *)(lVar1 + 0xb8) < plVar2) {
        uVar6 = uVar4;
      }
      uVar5 = uVar4;
      if (uVar6 != 0) {
        do {
          if (*plVar2 != 0) {
            FUN_14307b630(lVar1,*plVar2,param_2,param_3);
          }
          plVar2 = plVar2 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar6);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x710);
  uVar6 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x718) < plVar3) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    do {
      if (*plVar3 != 0) {
        FUN_14307b450(*plVar3,param_2,param_3);
      }
      plVar3 = plVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  return;
}



// FUNCTION 14307b450 FUN_14307b450 body=293 status=ok
// SIG undefined FUN_14307b450(void)

void FUN_14307b450(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) && ((*(byte *)(param_1 + 0x58) & 1) == 0)) {
    FUN_14307b630(param_1,*(longlong *)(param_1 + 0x38),param_2,param_3);
  }
  plVar8 = *(longlong **)(param_1 + 0xb0);
  plVar1 = plVar8 + *(int *)(param_1 + 0xb8);
  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    plVar2 = (longlong *)*plVar8;
    if ((plVar2 != (longlong *)0x0) &&
       (uVar3 = (**(code **)(*plVar2 + 0x6c8))(plVar2), 0 < (int)uVar3)) {
      iVar7 = 0;
      if (((int)uVar3 < (int)plVar2[0xdf]) && (iVar5 = (int)plVar2[0xdf] - uVar3, -1 < iVar5)) {
        iVar7 = iVar5;
      }
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        do {
          if (param_3 == '\0') {
            lVar4 = (**(code **)(*plVar2 + 0x560))(plVar2,iVar7);
          }
          else {
            lVar4 = (**(code **)(*plVar2 + 0x598))();
          }
          if (lVar4 != 0) {
            iVar5 = *(int *)(param_2 + 0x28);
            *(int *)(param_2 + 0x28) = iVar5 + 1;
            if (*(int *)(param_2 + 0x2c) < iVar5 + 1) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (param_2,iVar5);
            }
            lVar6 = *(longlong *)(param_2 + 0x20);
            if (*(longlong *)(param_2 + 0x20) == 0) {
              lVar6 = param_2;
            }
            *(longlong *)(lVar6 + (longlong)iVar5 * 8) = lVar4;
          }
          iVar7 = iVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
  }
  return;
}



// FUNCTION 14307b580 FUN_14307b580 body=82 status=ok
// SIG undefined FUN_14307b580(void)

int FUN_14307b580(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_142d52a00(param_1 + 0x220);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_1 + 0x220);
    lVar3 = FArchive::operator<<(uVar2);
    return (int)*(float *)(lVar3 + 0x20);
  }
  return *(int *)(param_1 + 0x1bc);
}



// FUNCTION 14307b5f0 FUN_14307b5f0 body=60 status=ok
// SIG undefined FUN_14307b5f0(void)

float FUN_14307b5f0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  
  bVar1 = *(byte *)(param_1 + 0x690);
  if (((*(int *)(param_1 + 0x6a0) <= (int)(uint)bVar1) ||
      (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) == 0)) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48),
     lVar3 == 0)) {
    return 1.0;
  }
  iVar2 = *(int *)(lVar3 + 400);
  if (iVar2 < 1) {
    fVar4 = 1.0;
  }
  else {
    if ((int)(iVar2 - 1U & 0xff) < iVar2) {
      fVar4 = *(float *)(*(longlong *)(lVar3 + 0x188) + 4 + (ulonglong)(iVar2 - 1U & 0xff) * 0x10) *
              *(float *)(lVar3 + 0x1e0);
    }
    else {
      fVar4 = 1.0;
    }
    if ((*(char *)(lVar3 + 0x290) != '\0') && (*(byte *)(lVar3 + 0x2c0) != 0)) {
      return fVar4 * (float)*(byte *)(lVar3 + 0x2c0) * *(float *)(lVar3 + 0x1b0);
    }
  }
  return fVar4;
}



// FUNCTION 14307b630 FUN_14307b630 body=214 status=ok
// SIG undefined FUN_14307b630(void)

void FUN_14307b630(undefined8 param_1,longlong *param_2,longlong param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
  if (0 < (int)uVar1) {
    iVar5 = 0;
    if ((int)uVar1 < (int)param_2[0xdf]) {
      iVar3 = (int)param_2[0xdf] - uVar1;
      iVar5 = 0;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
    }
    if (0 < (int)uVar1) {
      uVar6 = (ulonglong)uVar1;
      do {
        if (param_4 == '\0') {
          lVar2 = (**(code **)(*param_2 + 0x560))(param_2,iVar5);
        }
        else {
          lVar2 = (**(code **)(*param_2 + 0x598))();
        }
        if (lVar2 != 0) {
          iVar3 = *(int *)(param_3 + 0x28);
          *(int *)(param_3 + 0x28) = iVar3 + 1;
          if (*(int *)(param_3 + 0x2c) < iVar3 + 1) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (param_3,iVar3);
          }
          lVar4 = *(longlong *)(param_3 + 0x20);
          if (*(longlong *)(param_3 + 0x20) == 0) {
            lVar4 = param_3;
          }
          *(longlong *)(lVar4 + (longlong)iVar3 * 8) = lVar2;
        }
        iVar5 = iVar5 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



// FUNCTION 14307b770 FUN_14307b770 body=588 status=ok
// SIG undefined FUN_14307b770(void)

float * FUN_14307b770(longlong param_1,float *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    *(ulonglong *)param_2 = CONCAT44(DAT_1468b5d88._4_4_,(int)DAT_1468b5d88);
    return param_2;
  }
  fVar10 = 1.0;
  lVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x50);
  if (lVar5 != 0) {
    plVar6 = (longlong *)FRuntimeFloatCurve::GetRichCurve(param_1 + 0x50);
    iVar3 = (**(code **)(*plVar6 + 8))(plVar6);
    if (0 < iVar3) {
      uVar7 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x50);
      fVar10 = (float)FRichCurve::Eval(uVar7);
    }
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    if (*(char *)(param_1 + 0x41) == '\x03') {
      param_3[5] = (int)DAT_1468b5d88;
      param_3[6] = DAT_1468b5d88._4_4_;
    }
    if (*(int *)(param_1 + 0x38) < 1) {
      iVar3 = 0;
    }
    else {
      fVar4 = (float)(param_3[2] * 0x338435 + 0x19636bU & 0x7fffff | 0x3f800000);
      iVar3 = (int)((fVar4 - (float)(int)fVar4) * ((float)*(int *)(param_1 + 0x38) - 1e-05));
    }
    *param_3 = iVar3;
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x30) + 4 + (longlong)iVar3 * 8);
    *param_2 = fVar10 * *(float *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 8);
    param_2[1] = fVar10 * fVar4;
    return param_2;
  }
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar3 = iVar2 + iVar1;
  *param_3 = iVar3;
  if (iVar3 < *(int *)(param_1 + 0x38)) {
    cVar8 = (char)param_3[7];
    if ((cVar8 == '\0') || (*(int *)(param_1 + 0x44) <= iVar3)) goto LAB_14307b946;
    param_3[1] = -iVar2;
    iVar3 = -iVar2 + iVar1;
  }
  else {
    *(undefined1 *)(param_3 + 7) = 1;
    cVar8 = *(char *)(param_1 + 0x41);
    if (cVar8 == '\x01') {
      cVar8 = '\x01';
      param_3[1] = -iVar2;
      iVar3 = -iVar2 + iVar1;
    }
    else if (cVar8 == '\x02') {
      cVar8 = '\x01';
      iVar3 = (*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x38)) + iVar3;
    }
    else if (cVar8 == '\x03') {
      cVar8 = '\x01';
      param_3[5] = (int)DAT_1468b5d88;
      param_3[6] = DAT_1468b5d88._4_4_;
      iVar3 = *(int *)(param_1 + 0x44);
    }
    else {
      cVar8 = '\x01';
      iVar3 = *(int *)(param_1 + 0x38) + -1;
    }
  }
  *param_3 = iVar3;
LAB_14307b946:
  if ((iVar3 < 0) || (*(int *)(param_1 + 0x38) <= iVar3)) {
    iVar3 = 0;
    *param_3 = 0;
  }
  fVar4 = *(float *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 8);
  fVar9 = *(float *)(*(longlong *)(param_1 + 0x30) + 4 + (longlong)iVar3 * 8);
  if ((cVar8 != '\0') && (0.0 < *(float *)(param_1 + 0x48))) {
    fVar9 = *(float *)(param_1 + 0x48) + (float)param_3[4];
    param_3[4] = (int)fVar9;
    fVar9 = fVar9 + *(float *)(*(longlong *)(param_1 + 0x30) + -4 +
                              (longlong)*(int *)(param_1 + 0x38) * 8);
  }
  *(ulonglong *)param_2 = CONCAT44(fVar9 * fVar10,fVar4 * fVar10);
  return param_2;
}



// FUNCTION 14307b9c0 FUN_14307b9c0 body=88 status=ok
// SIG undefined FUN_14307b9c0(void)

float * FUN_14307b9c0(undefined4 param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float local_res10;
  float local_res14;
  
  FUN_14307b770(param_1,&local_res10);
  fVar1 = *(float *)(param_3 + 0x18);
  *param_2 = local_res10 - *(float *)(param_3 + 0x14);
  *(ulonglong *)(param_3 + 0x14) = CONCAT44(local_res14,local_res10);
  param_2[1] = local_res14 - fVar1;
  return param_2;
}



// FUNCTION 14307ba20 IsExecRotation body=8 status=ok
// SIG undefined IsExecRotation(void)

undefined1 ATTLBaseBossWyvePawn::IsExecRotation(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x6a0);
}



// FUNCTION 14307ba30 FUN_14307ba30 body=17 status=ok
// SIG undefined FUN_14307ba30(void)

undefined8 FUN_14307ba30(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x639) == '\0') {
    uVar1 = 4;
  }
  return uVar1;
}



// FUNCTION 14307ba50 FUN_14307ba50 body=627 status=ok
// SIG undefined FUN_14307ba50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14307ba50(longlong param_1,float *param_2)

{
  float fVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_98;
  undefined8 local_88;
  undefined4 local_80;
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  uVar8 = FUN_14309ed70();
  lVar9 = FUN_1430776f0(uVar8);
  if (lVar9 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x240);
    *(undefined8 *)param_2 = _DAT_1468b5d90;
    param_2[2] = DAT_1468b5d98;
    local_88 = DAT_1468b5da0;
    local_80 = DAT_1468b5da8;
    plVar2 = *(longlong **)(lVar9 + 0x38);
    if (plVar2 != (longlong *)0x0) {
      cVar7 = (**(code **)(*plVar2 + 0x440))(plVar2,uVar8);
      if (cVar7 == '\0') {
        uVar8 = *(undefined8 *)(lVar9 + 0x30);
      }
      FUN_14238d6f0(*(undefined8 *)(lVar9 + 0x38),uVar8,param_2,&local_88);
    }
    if ((((*(uint *)(param_1 + 0x4e0) & 0x100) != 0) && (*(char *)(lVar9 + 0x28) != '\0')) &&
       (lVar9 = *(longlong *)(lVar9 + 0x38), lVar9 != 0)) {
      fVar1 = *(float *)(param_1 + 0x4f8);
      local_98 = (float)*(undefined8 *)(param_1 + 0x4f0);
      fVar10 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x4f0) >> 0x20);
      fVar3 = *(float *)(lVar9 + 0x210);
      fVar4 = *(float *)(lVar9 + 0x214);
      fVar5 = *(float *)(lVar9 + 0x218);
      fVar6 = *(float *)(lVar9 + 0x21c);
      fVar13 = fVar1 * fVar4 - fVar10 * fVar5;
      fVar12 = local_98 * fVar5 - fVar1 * fVar3;
      fVar13 = fVar13 + fVar13;
      fVar11 = fVar10 * fVar3 - local_98 * fVar4;
      fVar12 = fVar12 + fVar12;
      fVar11 = fVar11 + fVar11;
      *param_2 = (fVar11 * fVar4 - fVar12 * fVar5) + local_98 + fVar13 * fVar6 + *param_2;
      param_2[2] = (fVar12 * fVar3 - fVar13 * fVar4) + fVar11 * fVar6 + fVar1 + param_2[2];
      param_2[1] = (fVar13 * fVar5 - fVar11 * fVar3) + fVar12 * fVar6 + fVar10 + param_2[1];
    }
  }
  return param_2;
}



// FUNCTION 14307bcd0 FUN_14307bcd0 body=526 status=ok
// SIG undefined FUN_14307bcd0(void)

void FUN_14307bcd0(longlong param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_88;
  
  uVar6 = FUN_14309ed70();
  lVar7 = FUN_1430776f0(uVar6);
  if (lVar7 != 0) {
    FUN_14307c990(lVar7,*(undefined8 *)(param_1 + 0x240),param_2,param_3);
    if ((((*(uint *)(param_1 + 0x4e0) & 0x100) != 0) && (*(char *)(lVar7 + 0x28) != '\0')) &&
       (lVar7 = *(longlong *)(lVar7 + 0x38), lVar7 != 0)) {
      fVar1 = *(float *)(param_1 + 0x4f8);
      local_88 = (float)*(undefined8 *)(param_1 + 0x4f0);
      fVar8 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x4f0) >> 0x20);
      fVar2 = *(float *)(lVar7 + 0x210);
      fVar3 = *(float *)(lVar7 + 0x214);
      fVar4 = *(float *)(lVar7 + 0x218);
      fVar5 = *(float *)(lVar7 + 0x21c);
      fVar11 = fVar1 * fVar3 - fVar8 * fVar4;
      fVar10 = local_88 * fVar4 - fVar1 * fVar2;
      fVar11 = fVar11 + fVar11;
      fVar9 = fVar8 * fVar2 - local_88 * fVar3;
      fVar10 = fVar10 + fVar10;
      fVar9 = fVar9 + fVar9;
      *param_2 = (fVar9 * fVar3 - fVar10 * fVar4) + fVar11 * fVar5 + local_88 + *param_2;
      param_2[2] = (fVar10 * fVar2 - fVar11 * fVar3) + fVar9 * fVar5 + fVar1 + param_2[2];
      param_2[1] = (fVar11 * fVar4 - fVar9 * fVar2) + fVar10 * fVar5 + fVar8 + param_2[1];
    }
  }
  return;
}



// FUNCTION 14307bee0 FUN_14307bee0 body=568 status=ok
// SIG undefined FUN_14307bee0(void)

void FUN_14307bee0(longlong param_1,int param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_88;
  
  uVar8 = *(undefined8 *)(param_1 + 0x240);
  if ((0 < param_2) && (param_2 < *(int *)(param_1 + 0x250))) {
    uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x248) + (longlong)param_2 * 8);
  }
  uVar6 = FUN_14309ed70();
  lVar7 = FUN_1430776f0(uVar6);
  if (lVar7 != 0) {
    FUN_14307c990(lVar7,uVar8,param_3,param_4);
    if ((((*(uint *)(param_1 + 0x4e0) & 0x100) != 0) && (*(char *)(lVar7 + 0x28) != '\0')) &&
       (lVar7 = *(longlong *)(lVar7 + 0x38), lVar7 != 0)) {
      fVar1 = *(float *)(param_1 + 0x4f8);
      local_88 = (float)*(undefined8 *)(param_1 + 0x4f0);
      fVar9 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x4f0) >> 0x20);
      fVar2 = *(float *)(lVar7 + 0x210);
      fVar3 = *(float *)(lVar7 + 0x214);
      fVar4 = *(float *)(lVar7 + 0x218);
      fVar5 = *(float *)(lVar7 + 0x21c);
      fVar12 = fVar1 * fVar3 - fVar9 * fVar4;
      fVar11 = local_88 * fVar4 - fVar1 * fVar2;
      fVar12 = fVar12 + fVar12;
      fVar10 = fVar9 * fVar2 - local_88 * fVar3;
      fVar11 = fVar11 + fVar11;
      fVar10 = fVar10 + fVar10;
      *param_3 = (fVar10 * fVar3 - fVar11 * fVar4) + fVar12 * fVar5 + local_88 + *param_3;
      param_3[2] = (fVar11 * fVar2 - fVar12 * fVar3) + fVar10 * fVar5 + fVar1 + param_3[2];
      param_3[1] = (fVar12 * fVar4 - fVar10 * fVar2) + fVar11 * fVar5 + fVar9 + param_3[1];
    }
  }
  return;
}



// FUNCTION 14307c1b0 FUN_14307c1b0 body=191 status=ok
// SIG undefined FUN_14307c1b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307c1b0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  
  *param_3 = _DAT_1468b5d90;
  *(undefined4 *)(param_3 + 1) = DAT_1468b5d98;
  *param_4 = DAT_1468b5da0;
  *(undefined4 *)(param_4 + 1) = DAT_1468b5da8;
  if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x818))();
    bVar1 = *(byte *)(param_1 + 0x691);
    if ((cVar2 == '\0') || (*(int *)(param_1 + 0x718) <= (int)(uint)bVar1)) {
      if (*(int *)(param_1 + 0x708) <= (int)(uint)bVar1) {
        return;
      }
      lVar3 = *(longlong *)(param_1 + 0x700);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x710);
    }
    lVar3 = *(longlong *)(lVar3 + (ulonglong)bVar1 * 8);
    if (lVar3 != 0) {
      FUN_14307c990(lVar3,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 14307c270 GetInfluenceBoundingRadius body=9 status=ok
// SIG undefined GetInfluenceBoundingRadius(void)

undefined4 USphereReflectionCaptureComponent::GetInfluenceBoundingRadius(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x470);
}


