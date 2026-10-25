// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1422467d0 FUN_1422467d0 body=240 status=ok
// SIG undefined FUN_1422467d0(void)

undefined8 FUN_1422467d0(char *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_3;
  fVar3 = fVar1 + *param_2;
  *param_3 = fVar3;
  if ((fVar3 < 0.0) || (*param_4 <= fVar3 && fVar3 != *param_4)) {
    fVar2 = *param_4;
    if (*param_1 != '\0') {
      if (fVar2 == 0.0) {
        *param_3 = 0.0;
      }
      else {
        if (ABS(fVar2) <= 1e-08) {
          AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
          *param_3 = 0.0;
          return 2;
        }
        fVar2 = (float)(int)(fVar3 / fVar2) * fVar2;
        if (ABS(fVar3) < ABS(fVar2)) {
          fVar2 = fVar3;
        }
        fVar3 = fVar3 - fVar2;
        *param_3 = fVar3;
        if (fVar3 < 0.0) {
          *param_3 = fVar3 + *param_4;
          return 2;
        }
      }
      return 2;
    }
    fVar4 = 0.0;
    if ((0.0 <= fVar3) && (fVar4 = fVar2, fVar3 <= fVar2)) {
      fVar4 = fVar3;
    }
    *param_3 = fVar4;
    if (fVar1 != fVar4) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1422468c0 AllocateLocalPoses body=131 status=ok
// SIG undefined AllocateLocalPoses(void)

void FA2CSPose::AllocateLocalPoses(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  TArray<FTransform,FDefaultAllocator>::operator=(param_1,param_3);
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(uint *)(param_1 + 0x24) != uVar1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x18,uVar1);
  }
  if (0 < (int)uVar1) {
    do {
      iVar2 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar2 + 1;
      if (*(int *)(param_1 + 0x24) < iVar2 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,iVar2);
      }
      puVar3 = (undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x18));
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  **(undefined1 **)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 142246950 FUN_142246950 body=1168 status=ok
// SIG undefined FUN_142246950(void)

/* WARNING: Removing unreachable block (ram,0x000142246ab5) */

float FUN_142246950(float param_1,undefined1 param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  switch(param_2) {
  case 1:
    fVar1 = param_1 * param_1 * param_1;
    fVar2 = param_1 * param_1 * 3.0 - (fVar1 + fVar1);
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
      fVar1 = 1.0;
    }
    break;
  case 2:
    if (0.0 <= param_1) {
      if (param_1 < 1.0) {
        fVar2 = (3.0 - (param_1 + param_1)) * param_1 * param_1;
        fVar1 = 0.0;
        if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    break;
  case 3:
    fVar1 = _guard_xfg_dispatch_icall_nop(param_1 * 3.1415927 - 1.5707964);
    fVar2 = (fVar1 + 1.0) * 0.5;
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
      fVar1 = 1.0;
    }
    break;
  case 4:
    fVar2 = param_1 + param_1;
    if (0.5 <= param_1) {
      fVar1 = 1.0 - (fVar2 - 1.0);
LAB_142246a39:
      fVar1 = fVar1 * fVar1;
LAB_142246a3d:
      fVar2 = (1.0 - fVar1) + 1.0;
    }
    else {
      fVar2 = fVar2 * fVar2;
    }
    goto LAB_142246a48;
  case 5:
    fVar2 = param_1 + param_1;
    if (0.5 <= param_1) {
      fVar1 = 1.0 - (fVar2 - 1.0);
      fVar1 = fVar1 * fVar1 * fVar1;
      goto LAB_142246a3d;
    }
    fVar2 = fVar2 * fVar2 * fVar2;
    goto LAB_142246a48;
  case 6:
    fVar1 = param_1 + param_1;
    if (0.5 <= param_1) {
      fVar1 = 1.0 - (fVar1 - 1.0);
      fVar1 = fVar1 * fVar1;
      goto LAB_142246a39;
    }
    fVar2 = fVar1 * fVar1 * fVar1 * fVar1;
    goto LAB_142246a48;
  case 7:
    fVar2 = param_1 + param_1;
    if (0.5 <= param_1) {
      fVar1 = 1.0 - (fVar2 - 1.0);
      fVar1 = fVar1 * fVar1 * fVar1 * fVar1 * fVar1;
      goto LAB_142246a3d;
    }
    fVar2 = fVar2 * fVar2 * fVar2 * fVar2 * fVar2;
LAB_142246a48:
    fVar2 = fVar2 * 0.5;
LAB_142246a4c:
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
      fVar1 = 1.0;
    }
    break;
  case 8:
    fVar2 = 1.0 - SQRT(1.0 - param_1 * param_1);
    goto LAB_142246bb1;
  case 9:
    fVar2 = SQRT(1.0 - (param_1 - 1.0) * (param_1 - 1.0));
    goto LAB_142246a4c;
  case 10:
    fVar1 = param_1 + param_1;
    if (0.5 <= param_1) {
      fVar2 = (SQRT(1.0 - (fVar1 - 2.0) * (fVar1 - 2.0)) + 1.0) * 0.5;
    }
    else {
      fVar2 = (1.0 - SQRT(1.0 - fVar1 * fVar1)) * 0.5;
    }
LAB_142246bb1:
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
      fVar1 = 1.0;
    }
    break;
  case 0xb:
    if (param_1 == 0.0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = _guard_xfg_dispatch_icall_nop(2.0,(param_1 - 1.0) * 10.0);
    }
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
      fVar1 = 1.0;
    }
    break;
  case 0xc:
    if (param_1 == 1.0) {
      fVar2 = 1.0;
    }
    else {
      fVar2 = _guard_xfg_dispatch_icall_nop(2.0,param_1 * -10.0);
      fVar2 = 1.0 - fVar2;
    }
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
      fVar1 = 1.0;
    }
    break;
  case 0xd:
    fVar1 = param_1 + param_1;
    if (0.5 <= param_1) {
      if (fVar1 - 1.0 == 1.0) {
        fVar2 = 1.0;
      }
      else {
        fVar2 = _guard_xfg_dispatch_icall_nop(2.0,(fVar1 - 1.0) * -10.0);
        fVar2 = 1.0 - fVar2;
      }
      fVar2 = fVar2 + 1.0;
    }
    else if (fVar1 == 0.0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = _guard_xfg_dispatch_icall_nop(2.0,(fVar1 - 1.0) * 10.0);
    }
    fVar2 = fVar2 * 0.5;
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
      fVar1 = 1.0;
    }
    break;
  case 0xe:
    if (param_3 != 0) {
      FUN_1423d62c0(param_3,local_res20,local_res10);
      fVar1 = (float)UCurveFloat::GetFloatValue(param_3);
      if (fVar1 < 0.0) {
        return 0.0;
      }
      if (fVar1 < 1.0) {
        return fVar1;
      }
      return 1.0;
    }
  default:
    fVar1 = 0.0;
    if ((0.0 <= param_1) && (fVar1 = param_1, 1.0 <= param_1)) {
      fVar1 = 1.0;
    }
  }
  return fVar1;
}



// FUNCTION 142246e20 FUN_142246e20 body=732 status=ok
// SIG undefined FUN_142246e20(void)

void FUN_142246e20(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  int local_res8 [2];
  int local_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  int iStack_b4;
  int iStack_b0;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  int iStack_8c;
  int local_88;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *puStack_68;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  
  if (param_1 != 0) {
    iVar5 = (int)param_2[5];
    uStack_c0 = (uint *)(param_2 + 2);
    local_c8 = 0;
    uStack_c4 = 1;
    iStack_b4 = 0;
    iStack_b0 = 0;
    if (iVar5 != 0) {
      puVar10 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar10 = uStack_c0;
      }
      uVar3 = *puVar10;
      iStack_b0 = 0;
      while (uVar3 == 0) {
        lVar9 = (longlong)local_c8;
        iStack_b0 = iStack_b0 + 0x20;
        iVar11 = local_c8 + 1;
        bVar4 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_c8;
        local_c8 = iVar11;
        if (bVar4) goto LAB_142246eed;
        uVar3 = puVar10[lVar9 + 1];
      }
      uStack_c4 = -uVar3 & uVar3;
      iVar11 = 0x1f;
      if (uStack_c4 != 0) {
        for (; uStack_c4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uStack_c4 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      iStack_b4 = (iStack_b0 - iVar11) + 0x1f;
      if (iVar5 < iStack_b4) {
LAB_142246eed:
        iStack_b4 = iVar5;
      }
    }
    uStack_60 = 0xffffffff;
    iStack_5c = iStack_b4;
    iStack_58 = iStack_b0;
    iStack_70 = local_c8;
    uStack_6c = uStack_c4;
    uStack_90 = 0xffffffff;
    iStack_8c = iStack_b4;
    iStack_a0 = local_c8;
    uStack_9c = uStack_c4;
    local_88 = iStack_b0;
    local_98 = uStack_c0;
    local_78 = param_2;
    puStack_68 = uStack_c0;
    if (iStack_b4 < iVar5) {
      do {
        iVar5 = (int)param_4[1];
        lVar6 = (longlong)iStack_8c;
        lVar9 = *param_2;
        iVar11 = *(int *)(param_1 + 0x128);
        fVar2 = *(float *)(lVar9 + 8 + lVar6 * 0x18);
        if (iVar5 < iVar11) {
          *(int *)(param_4 + 1) = iVar11;
          if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_4 + (longlong)iVar5 * 4),0,(longlong)(iVar11 - iVar5) << 2);
        }
        else if ((iVar11 < iVar5) && (iVar11 != iVar5)) {
          *(int *)(param_4 + 1) = iVar11;
          TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_4);
        }
        local_res8[0] = -1;
        lVar9 = FUN_142772480(param_1,*(undefined8 *)(lVar9 + lVar6 * 0x18),local_res8);
        iVar5 = local_res8[0];
        if (lVar9 != 0) {
          iVar11 = (int)param_3[1];
          if (ABS(fVar2) <= 1e-08) {
            iVar5 = 0;
            if (0 < iVar11) {
              plVar7 = (longlong *)*param_3;
              do {
                if (*plVar7 == lVar9) {
                  if (iVar5 != -1) {
                    *(undefined4 *)(*param_4 + (longlong)local_res8[0] * 4) = 0;
                  }
                  break;
                }
                iVar5 = iVar5 + 1;
                plVar7 = plVar7 + 2;
              } while (iVar5 < iVar11);
            }
          }
          else {
            iVar8 = 0;
            if (0 < iVar11) {
              plVar7 = (longlong *)*param_3;
              do {
                if (*plVar7 == lVar9) {
                  if (iVar8 != -1) {
                    *(float *)(*param_4 + (longlong)local_res8[0] * 4) = fVar2;
                    goto LAB_1422470a4;
                  }
                  break;
                }
                iVar8 = iVar8 + 1;
                plVar7 = plVar7 + 2;
              } while (iVar8 < iVar11);
            }
            uStack_c0 = (uint *)CONCAT44(uStack_c0._4_4_,local_res8[0]);
            *(int *)(param_3 + 1) = iVar11 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3);
            }
            local_c8 = (int)lVar9;
            uStack_c4 = (uint)((ulonglong)lVar9 >> 0x20);
            puVar1 = (undefined4 *)(*param_3 + (longlong)iVar11 * 0x10);
            *puVar1 = local_c8;
            puVar1[1] = uStack_c4;
            puVar1[2] = iVar5;
            puVar1[3] = uStack_c0._4_4_;
            *(float *)(*param_4 + (longlong)local_res8[0] * 4) = fVar2;
          }
        }
LAB_1422470a4:
        uStack_90 = uStack_90 & ~uStack_9c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
      } while (iStack_8c < (int)local_98[6]);
    }
  }
  return;
}



// FUNCTION 142247100 FUN_142247100 body=2474 status=ok
// SIG undefined FUN_142247100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142247100(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,int param_6,longlong *param_7,longlong *param_8)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined1 auVar9 [16];
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  longlong lVar18;
  float *pfVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float *pfVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  int iVar33;
  longlong *plVar34;
  longlong lVar35;
  int iVar36;
  longlong lVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar41 [16];
  float fVar48;
  undefined1 in_XMM2 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined1 local_e8 [16];
  float *local_d8;
  undefined1 *puStack_d0;
  ulonglong uVar29;
  
  iVar36 = (int)param_2[1];
  lVar35 = (longlong)iVar36;
  puStack_d0 = local_res8;
  local_res8[0] = 0;
  local_d8 = (float *)&LAB_141750680;
  local_res18 = param_3;
  lVar18 = FUN_1415d8310(&local_d8);
  plVar2 = (longlong *)(lVar18 + 0x18);
  *(undefined4 *)(lVar18 + 0x20) = 0;
  iVar33 = 0;
  if ((*(int *)(lVar18 + 0x24) < 0) && (iVar33 = 0, *(int *)(lVar18 + 0x24) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar2);
    iVar33 = *(int *)(lVar18 + 0x20);
  }
  *(int *)(lVar18 + 0x20) = iVar33 + iVar36;
  if (*(int *)(lVar18 + 0x24) < iVar33 + iVar36) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar2 + (longlong)iVar33 * 4),0,lVar35 * 4);
  fVar15 = fRam0000000146aeee4c;
  fVar14 = fRam0000000146aeee48;
  fVar13 = fRam0000000146aeee44;
  fVar12 = _DAT_146aeee40;
  fVar50 = fRam0000000146aeee3c;
  fVar48 = fRam0000000146aeee38;
  fVar46 = fRam0000000146aeee34;
  fVar44 = _DAT_146aeee30;
  fVar53 = 0.0;
  if (*(uint *)(param_1 + 1) != 0) {
    lVar18 = 0;
    lVar30 = 0;
    uVar24 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      lVar28 = *param_1;
      fVar40 = *(float *)(lVar30 + 4 + *param_5);
      if (0.0 <= fVar40) {
        if (1.0 <= fVar40) {
          fVar40 = 1.0;
        }
      }
      else {
        fVar40 = 0.0;
      }
      lVar27 = (longlong)*(int *)(lVar30 + *param_5);
      fVar54 = *(float *)(*plVar2 + lVar27 * 4);
      if (fVar54 <= fVar40) {
        fVar54 = fVar40;
      }
      *(float *)(*plVar2 + lVar27 * 4) = fVar54;
      if (fVar40 <= 1e-05) {
LAB_14224728a:
        uVar16 = ((undefined8 *)(lVar18 + lVar28))[1];
        lVar27 = *param_7;
        *(undefined8 *)(lVar18 + lVar27) = *(undefined8 *)(lVar18 + lVar28);
        ((undefined8 *)(lVar18 + lVar27))[1] = uVar16;
        puVar6 = (undefined8 *)(lVar18 + 0x10 + lVar28);
        uVar16 = puVar6[1];
        puVar7 = (undefined8 *)(lVar18 + 0x10 + lVar27);
        *puVar7 = *puVar6;
        puVar7[1] = uVar16;
        puVar6 = (undefined8 *)(lVar18 + 0x20 + lVar28);
        uVar16 = puVar6[1];
        puVar7 = (undefined8 *)(lVar18 + 0x20 + lVar27);
        *puVar7 = *puVar6;
        puVar7[1] = uVar16;
      }
      else {
        if (0.99999 <= fVar40) {
          lVar28 = *(longlong *)(*param_2 + lVar27 * 0x18);
          goto LAB_14224728a;
        }
        pfVar25 = (float *)(lVar18 + lVar28);
        fVar54 = *pfVar25;
        fVar55 = pfVar25[1];
        fVar56 = pfVar25[2];
        fVar51 = pfVar25[3];
        pfVar25 = (float *)(lVar18 + 0x10 + lVar28);
        fVar57 = *pfVar25;
        fVar58 = pfVar25[1];
        fVar59 = pfVar25[2];
        fVar60 = pfVar25[3];
        pfVar25 = (float *)(lVar18 + 0x20 + lVar28);
        fVar61 = *pfVar25;
        fVar62 = pfVar25[1];
        fVar63 = pfVar25[2];
        fVar64 = pfVar25[3];
        lVar28 = *(longlong *)(*param_2 + lVar27 * 0x18);
        if (1e-05 < fVar40) {
          if (fVar40 < 0.99999) {
            pfVar25 = (float *)(lVar18 + lVar28);
            pfVar19 = (float *)(lVar18 + 0x10 + lVar28);
            fVar38 = *pfVar25 * fVar54;
            fVar42 = pfVar25[1] * fVar55;
            fVar45 = pfVar25[2] * fVar56;
            fVar47 = pfVar25[3] * fVar51;
            fVar57 = fVar57 + (*pfVar19 - fVar57) * fVar40;
            fVar58 = fVar58 + (pfVar19[1] - fVar58) * fVar40;
            fVar59 = fVar59 + (pfVar19[2] - fVar59) * fVar40;
            fVar60 = fVar60 + (pfVar19[3] - fVar60) * fVar40;
            pfVar19 = (float *)(lVar18 + 0x20 + lVar28);
            fVar61 = fVar61 + (*pfVar19 - fVar61) * fVar40;
            fVar62 = fVar62 + (pfVar19[1] - fVar62) * fVar40;
            fVar63 = fVar63 + (pfVar19[2] - fVar63) * fVar40;
            fVar64 = fVar64 + (pfVar19[3] - fVar64) * fVar40;
            fVar39 = fVar38 + fVar45;
            fVar43 = fVar42 + fVar47;
            fVar45 = fVar45 + fVar38;
            fVar47 = fVar47 + fVar42;
            fVar52 = (float)(-(uint)(0.0 <= fVar43 + fVar39) & ((uint)(0.0 - fVar54) ^ (uint)fVar54)
                            ^ (uint)(0.0 - fVar54)) * (_DAT_146aeee50 - fVar40) + fVar40 * *pfVar25;
            fVar43 = (float)(-(uint)(0.0 <= fVar45 + fVar43) & ((uint)(0.0 - fVar55) ^ (uint)fVar55)
                            ^ (uint)(0.0 - fVar55)) * (fRam0000000146aeee54 - fVar40) +
                     fVar40 * pfVar25[1];
            fVar45 = (float)(-(uint)(0.0 <= fVar47 + fVar45) & ((uint)(0.0 - fVar56) ^ (uint)fVar56)
                            ^ (uint)(0.0 - fVar56)) * (fRam0000000146aeee58 - fVar40) +
                     fVar40 * pfVar25[2];
            fVar47 = (float)(-(uint)(0.0 <= fVar39 + fVar47) & ((uint)(0.0 - fVar51) ^ (uint)fVar51)
                            ^ (uint)(0.0 - fVar51)) * (fRam0000000146aeee5c - fVar40) +
                     fVar40 * pfVar25[3];
            auVar41._0_4_ = fVar52 * fVar52 + fVar45 * fVar45;
            auVar41._4_4_ = fVar43 * fVar43 + fVar47 * fVar47;
            auVar41._8_4_ = fVar45 * fVar45 + fVar52 * fVar52;
            auVar41._12_4_ = fVar47 * fVar47 + fVar43 * fVar43;
            fVar51 = auVar41._4_4_ + auVar41._0_4_;
            fVar38 = auVar41._8_4_ + auVar41._4_4_;
            fVar39 = auVar41._12_4_ + auVar41._8_4_;
            fVar42 = auVar41._0_4_ + auVar41._12_4_;
            auVar49._4_4_ = fVar38;
            auVar49._0_4_ = fVar51;
            auVar49._8_4_ = fVar39;
            auVar49._12_4_ = fVar42;
            auVar49 = rsqrtps(auVar41,auVar49);
            fVar40 = auVar49._0_4_;
            fVar54 = auVar49._4_4_;
            fVar55 = auVar49._8_4_;
            fVar56 = auVar49._12_4_;
            in_XMM2._0_4_ = (fVar44 - fVar40 * fVar40 * fVar51 * fVar44) * fVar40 + fVar40;
            in_XMM2._4_4_ = (fVar46 - fVar54 * fVar54 * fVar38 * fVar46) * fVar54 + fVar54;
            in_XMM2._8_4_ = (fVar48 - fVar55 * fVar55 * fVar39 * fVar48) * fVar55 + fVar55;
            in_XMM2._12_4_ = (fVar50 - fVar56 * fVar56 * fVar42 * fVar50) * fVar56 + fVar56;
            fVar54 = (float)(((uint)(((fVar44 - in_XMM2._0_4_ * in_XMM2._0_4_ * fVar51 * fVar44) *
                                      in_XMM2._0_4_ + in_XMM2._0_4_) * fVar52) ^ _DAT_146aeee20) &
                             -(uint)(fVar12 <= fVar51) ^ _DAT_146aeee20);
            fVar55 = (float)(((uint)(((fVar46 - in_XMM2._4_4_ * in_XMM2._4_4_ * fVar38 * fVar46) *
                                      in_XMM2._4_4_ + in_XMM2._4_4_) * fVar43) ^
                             uRam0000000146aeee24) & -(uint)(fVar13 <= fVar38) ^
                            uRam0000000146aeee24);
            fVar56 = (float)(((uint)(((fVar48 - in_XMM2._8_4_ * in_XMM2._8_4_ * fVar39 * fVar48) *
                                      in_XMM2._8_4_ + in_XMM2._8_4_) * fVar45) ^
                             uRam0000000146aeee28) & -(uint)(fVar14 <= fVar39) ^
                            uRam0000000146aeee28);
            fVar51 = (float)(((uint)(((fVar50 - in_XMM2._12_4_ * in_XMM2._12_4_ * fVar42 * fVar50) *
                                      in_XMM2._12_4_ + in_XMM2._12_4_) * fVar47) ^
                             uRam0000000146aeee2c) & -(uint)(fVar15 <= fVar42) ^
                            uRam0000000146aeee2c);
          }
          else {
            pfVar25 = (float *)(lVar18 + lVar28);
            fVar54 = *pfVar25;
            fVar55 = pfVar25[1];
            fVar56 = pfVar25[2];
            fVar51 = pfVar25[3];
            pfVar25 = (float *)(lVar18 + 0x10 + lVar28);
            fVar57 = *pfVar25;
            fVar58 = pfVar25[1];
            fVar59 = pfVar25[2];
            fVar60 = pfVar25[3];
            pfVar25 = (float *)(lVar18 + 0x20 + lVar28);
            fVar61 = *pfVar25;
            fVar62 = pfVar25[1];
            fVar63 = pfVar25[2];
            fVar64 = pfVar25[3];
          }
        }
        lVar28 = *param_7;
        pfVar25 = (float *)(lVar18 + lVar28);
        *pfVar25 = fVar54;
        pfVar25[1] = fVar55;
        pfVar25[2] = fVar56;
        pfVar25[3] = fVar51;
        pfVar25 = (float *)(lVar18 + 0x10 + lVar28);
        *pfVar25 = fVar57;
        pfVar25[1] = fVar58;
        pfVar25[2] = fVar59;
        pfVar25[3] = fVar60;
        pfVar25 = (float *)(lVar18 + 0x20 + lVar28);
        *pfVar25 = fVar61;
        pfVar25[1] = fVar62;
        pfVar25[2] = fVar63;
        pfVar25[3] = fVar64;
      }
      lVar30 = lVar30 + 8;
      lVar18 = lVar18 + 0x30;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  puStack_d0 = local_res10;
  local_res10[0] = 0;
  local_d8 = (float *)&LAB_141750680;
  lVar18 = FUN_1415d8310(&local_d8,&DAT_146531988);
  local_e8[0] = 0;
  plVar34 = (longlong *)(lVar18 + 0x28);
  puStack_d0 = local_e8;
  local_d8 = (float *)&LAB_141750680;
  lVar30 = FUN_1415d8310(&local_d8,&DAT_146531988);
  *(undefined4 *)(lVar18 + 0x30) = 0;
  plVar3 = (longlong *)(lVar30 + 0x38);
  if ((*(int *)(lVar18 + 0x34) < 0) && (*(int *)(lVar18 + 0x34) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar34,0);
  }
  iVar33 = *(int *)(lVar18 + 0x30);
  iVar36 = iVar36 + 1;
  if (iVar33 < iVar36) {
    *(int *)(lVar18 + 0x30) = iVar36;
    if (*(int *)(lVar18 + 0x34) < iVar36) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar34,iVar33);
    }
  }
  else if ((iVar36 < iVar33) && (iVar36 != iVar33)) {
    *(int *)(lVar18 + 0x30) = iVar36;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar34);
  }
  *(undefined4 *)(lVar30 + 0x40) = 0;
  if ((*(int *)(lVar30 + 0x44) < 0) && (*(int *)(lVar30 + 0x44) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar3,0);
  }
  iVar33 = *(int *)(lVar30 + 0x40);
  if (iVar33 < iVar36) {
    *(int *)(lVar30 + 0x40) = iVar36;
    if (*(int *)(lVar30 + 0x44) < iVar36) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3,iVar33);
    }
  }
  else if ((iVar36 < iVar33) && (iVar36 != iVar33)) {
    *(int *)(lVar30 + 0x40) = iVar36;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar3);
  }
  iVar36 = 0;
  lVar28 = 0;
  *(undefined8 *)*plVar34 = local_res18;
  *(undefined4 *)*plVar3 = 0x3f800000;
  if (3 < lVar35) {
    lVar37 = (lVar35 - 4U >> 2) + 1;
    iVar33 = 2;
    lVar28 = lVar37 * 4;
    lVar27 = 0xc;
    lVar32 = 0x18;
    do {
      lVar21 = (longlong)iVar36;
      lVar4 = lVar32 + 0x20;
      iVar36 = iVar36 + 4;
      *(longlong *)(*plVar34 + -0x30 + lVar4) = lVar21 * 0x20 + *param_4;
      *(undefined4 *)(lVar27 + -8 + *plVar3) = *(undefined4 *)(lVar27 + -0xc + *plVar2);
      *(longlong *)(*plVar34 + -0x28 + lVar4) = (longlong)(iVar33 + -1) * 0x20 + *param_4;
      *(undefined4 *)(lVar27 + -4 + *plVar3) = *(undefined4 *)(lVar27 + -8 + *plVar2);
      *(longlong *)(lVar32 + *plVar34) = (longlong)iVar33 * 0x20 + *param_4;
      *(undefined4 *)(lVar27 + *plVar3) = *(undefined4 *)(lVar27 + -4 + *plVar2);
      iVar1 = iVar33 + 1;
      iVar33 = iVar33 + 4;
      *(longlong *)(*plVar34 + -0x18 + lVar4) = (longlong)iVar1 * 0x20 + *param_4;
      *(undefined4 *)(lVar27 + 4 + *plVar3) = *(undefined4 *)(lVar27 + *plVar2);
      lVar37 = lVar37 + -1;
      lVar27 = lVar27 + 0x10;
      lVar32 = lVar4;
    } while (lVar37 != 0);
  }
  for (; lVar28 < lVar35; lVar28 = lVar28 + 1) {
    lVar27 = (longlong)iVar36;
    iVar36 = iVar36 + 1;
    *(longlong *)(*plVar34 + 8 + lVar28 * 8) = lVar27 * 0x20 + *param_4;
    *(undefined4 *)(*plVar3 + 4 + lVar28 * 4) = *(undefined4 *)(*plVar2 + lVar28 * 4);
  }
  iVar36 = *(int *)(lVar18 + 0x30);
  pfVar25 = (float *)*plVar3;
  uVar26 = *(uint *)(lVar30 + 0x40);
  plVar34 = (longlong *)*plVar34;
  if (0 < iVar36) {
    if (param_6 == 2) {
      FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_8,*plVar34);
      if (1 < iVar36) {
        uVar24 = (ulonglong)(iVar36 - 1);
        do {
          plVar34 = plVar34 + 1;
          pfVar25 = pfVar25 + 1;
          fVar53 = *pfVar25;
          plVar2 = (longlong *)*plVar34;
          if ((1e-05 < fVar53) && (iVar36 = 0, 0 < (int)param_8[1])) {
            lVar18 = *plVar2;
            lVar35 = 0;
            do {
              if ((*(char *)(*param_8 + 4 + lVar35) == '\0') &&
                 (*(char *)(lVar18 + 4 + lVar35) == '\0')) {
                uVar17 = 0;
              }
              else {
                uVar17 = 1;
              }
              *(undefined1 *)(*param_8 + 4 + lVar35) = uVar17;
              iVar36 = iVar36 + 1;
              lVar18 = *plVar2;
              *(float *)(*param_8 + lVar35) =
                   fVar53 * *(float *)(lVar18 + lVar35) + *(float *)(*param_8 + lVar35);
              lVar35 = lVar35 + 8;
            } while (iVar36 < (int)param_8[1]);
          }
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
    }
    else if (param_6 == 1) {
      uVar31 = 0;
      uVar24 = (ulonglong)((longlong)(pfVar25 + (int)uVar26) + (3 - (longlong)pfVar25)) >> 2;
      if (pfVar25 + (int)uVar26 < pfVar25) {
        uVar24 = uVar31;
      }
      if (uVar24 != 0) {
        pfVar19 = pfVar25;
        uVar23 = uVar31;
        if (7 < uVar24) {
          fVar53 = 0.0;
          fVar44 = 0.0;
          fVar46 = 0.0;
          fVar48 = 0.0;
          auVar49 = ZEXT816(0);
          do {
            uVar23 = uVar23 + 8;
            fVar53 = fVar53 + *pfVar19;
            fVar44 = fVar44 + pfVar19[1];
            fVar46 = fVar46 + pfVar19[2];
            fVar48 = fVar48 + pfVar19[3];
            pfVar5 = pfVar19 + 4;
            pfVar8 = pfVar19 + 5;
            pfVar10 = pfVar19 + 6;
            pfVar11 = pfVar19 + 7;
            pfVar19 = pfVar19 + 8;
            in_XMM2._0_4_ = auVar49._0_4_ + *pfVar5;
            in_XMM2._4_4_ = auVar49._4_4_ + *pfVar8;
            in_XMM2._8_4_ = auVar49._8_4_ + *pfVar10;
            in_XMM2._12_4_ = auVar49._12_4_ + *pfVar11;
            auVar49 = in_XMM2;
          } while (uVar23 != (uVar24 & 0xfffffffffffffff8));
          fVar53 = fVar46 + in_XMM2._8_4_ + fVar53 + in_XMM2._0_4_ +
                   fVar48 + in_XMM2._12_4_ + fVar44 + in_XMM2._4_4_;
        }
        for (; uVar23 != uVar24; uVar23 = uVar23 + 1) {
          fVar53 = fVar53 + *pfVar19;
          pfVar19 = pfVar19 + 1;
        }
      }
      uVar22 = 0;
      if (fVar53 <= 1e-05) {
        FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_8,*plVar34);
        if (1 < iVar36) {
          uVar24 = (ulonglong)(iVar36 - 1);
          do {
            plVar34 = plVar34 + 1;
            pfVar25 = pfVar25 + 1;
            fVar53 = *pfVar25;
            plVar2 = (longlong *)*plVar34;
            if ((1e-05 < fVar53) && (0 < (int)param_8[1])) {
              lVar18 = *plVar2;
              uVar23 = uVar31;
              uVar29 = uVar31;
              do {
                if ((*(char *)(uVar23 + 4 + *param_8) == '\0') &&
                   (*(char *)(lVar18 + 4 + uVar23) == '\0')) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = 1;
                }
                *(undefined1 *)(uVar23 + 4 + *param_8) = uVar17;
                uVar26 = (int)uVar29 + 1;
                uVar29 = (ulonglong)uVar26;
                lVar18 = *plVar2;
                *(float *)(uVar23 + *param_8) =
                     fVar53 * *(float *)(lVar18 + uVar23) + *(float *)(uVar23 + *param_8);
                uVar23 = uVar23 + 8;
              } while ((int)uVar26 < (int)param_8[1]);
            }
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
      }
      else {
        local_d8 = (float *)0x0;
        puStack_d0 = (undefined1 *)(ulonglong)uVar26;
        if (0 < (int)uVar26) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_d8,0);
          if ((0xf < uVar26) &&
             ((pfVar25 + (int)(uVar26 - 1) < local_d8 || (local_d8 + (int)(uVar26 - 1) < pfVar25))))
          {
            uVar20 = uVar26 & 0x8000000f;
            if ((int)uVar20 < 0) {
              uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
            }
            auVar9._4_4_ = fVar53;
            auVar9._0_4_ = fVar53;
            auVar9._8_4_ = fVar53;
            auVar9._12_4_ = fVar53;
            auVar49 = rcpps(in_XMM2,auVar9);
            lVar18 = (longlong)pfVar25 - (longlong)local_d8;
            fVar44 = auVar49._0_4_;
            fVar46 = auVar49._4_4_;
            fVar48 = auVar49._8_4_;
            fVar50 = auVar49._12_4_;
            fVar44 = (fVar44 + fVar44) - fVar44 * fVar44 * fVar53;
            fVar46 = (fVar46 + fVar46) - fVar46 * fVar46 * fVar53;
            fVar48 = (fVar48 + fVar48) - fVar48 * fVar48 * fVar53;
            fVar50 = (fVar50 + fVar50) - fVar50 * fVar50 * fVar53;
            pfVar19 = local_d8 + 4;
            uVar24 = uVar31;
            uVar23 = uVar31;
            do {
              pfVar8 = (float *)(lVar18 + -0x10 + (longlong)pfVar19);
              fVar12 = pfVar8[1];
              fVar13 = pfVar8[2];
              fVar14 = pfVar8[3];
              uVar22 = (int)uVar24 + 0x10;
              uVar24 = (ulonglong)uVar22;
              uVar23 = uVar23 + 0x10;
              pfVar5 = (float *)(lVar18 + (longlong)pfVar19);
              fVar15 = *pfVar5;
              fVar40 = pfVar5[1];
              fVar54 = pfVar5[2];
              fVar55 = pfVar5[3];
              pfVar5 = pfVar19 + 0x10;
              pfVar19[-4] = *pfVar8 * fVar44;
              pfVar19[-3] = fVar12 * fVar46;
              pfVar19[-2] = fVar13 * fVar48;
              pfVar19[-1] = fVar14 * fVar50;
              pfVar8 = (float *)(lVar18 + -0x30 + (longlong)pfVar5);
              fVar12 = *pfVar8;
              fVar13 = pfVar8[1];
              fVar14 = pfVar8[2];
              fVar56 = pfVar8[3];
              *pfVar19 = fVar15 * fVar44;
              pfVar19[1] = fVar40 * fVar46;
              pfVar19[2] = fVar54 * fVar48;
              pfVar19[3] = fVar55 * fVar50;
              pfVar8 = (float *)(lVar18 + -0x20 + (longlong)pfVar5);
              fVar15 = *pfVar8;
              fVar40 = pfVar8[1];
              fVar54 = pfVar8[2];
              fVar55 = pfVar8[3];
              pfVar19[4] = fVar12 * fVar44;
              pfVar19[5] = fVar13 * fVar46;
              pfVar19[6] = fVar14 * fVar48;
              pfVar19[7] = fVar56 * fVar50;
              pfVar19[8] = fVar15 * fVar44;
              pfVar19[9] = fVar40 * fVar46;
              pfVar19[10] = fVar54 * fVar48;
              pfVar19[0xb] = fVar55 * fVar50;
              pfVar19 = pfVar5;
            } while ((longlong)uVar23 < (longlong)(int)(uVar26 - uVar20));
          }
          if ((int)uVar22 < (int)uVar26) {
            uVar24 = (ulonglong)(uVar26 - uVar22);
            pfVar19 = local_d8 + (int)uVar22;
            do {
              *pfVar19 = (1.0 / fVar53) *
                         *(float *)((longlong)pfVar19 + ((longlong)pfVar25 - (longlong)local_d8));
              uVar24 = uVar24 - 1;
              pfVar19 = pfVar19 + 1;
            } while (uVar24 != 0);
          }
        }
        pfVar25 = local_d8;
        FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_8,*plVar34);
        if (1 < iVar36) {
          uVar24 = (ulonglong)(iVar36 - 1);
          pfVar19 = pfVar25;
          do {
            plVar34 = plVar34 + 1;
            pfVar19 = pfVar19 + 1;
            fVar53 = *pfVar19;
            plVar2 = (longlong *)*plVar34;
            if ((1e-05 < fVar53) && (0 < (int)param_8[1])) {
              lVar18 = *plVar2;
              uVar23 = uVar31;
              uVar29 = uVar31;
              do {
                if ((*(char *)(uVar23 + 4 + *param_8) == '\0') &&
                   (*(char *)(lVar18 + 4 + uVar23) == '\0')) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = 1;
                }
                *(undefined1 *)(uVar23 + 4 + *param_8) = uVar17;
                uVar26 = (int)uVar29 + 1;
                uVar29 = (ulonglong)uVar26;
                lVar18 = *plVar2;
                *(float *)(uVar23 + *param_8) =
                     fVar53 * *(float *)(lVar18 + uVar23) + *(float *)(uVar23 + *param_8);
                uVar23 = uVar23 + 8;
              } while ((int)uVar26 < (int)param_8[1]);
            }
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        FMemory::Free(pfVar25);
      }
    }
    else {
      FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_8,*plVar34);
      if (1 < iVar36) {
        uVar24 = (ulonglong)(iVar36 - 1);
        do {
          uVar23 = 0;
          plVar34 = plVar34 + 1;
          plVar2 = (longlong *)*plVar34;
          uVar31 = uVar23;
          if (0 < (int)plVar2[1]) {
            do {
              if (*(char *)(*plVar2 + 4 + uVar23) != '\0') {
                *(undefined1 *)(uVar23 + 4 + *param_8) = 1;
                *(undefined4 *)(uVar23 + *param_8) = *(undefined4 *)(uVar23 + *plVar2);
              }
              uVar26 = (int)uVar31 + 1;
              uVar23 = uVar23 + 8;
              uVar31 = (ulonglong)uVar26;
            } while ((int)uVar26 < (int)plVar2[1]);
          }
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
    }
  }
  return;
}



// FUNCTION 142247ab0 FUN_142247ab0 body=4004 status=ok
// SIG undefined FUN_142247ab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142247ab0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,int param_6,longlong *param_7,longlong *param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  longlong *plVar32;
  undefined1 uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  undefined1 *puVar37;
  float *pfVar38;
  ulonglong uVar39;
  float *pfVar40;
  float *pfVar41;
  longlong lVar42;
  longlong lVar43;
  float *pfVar44;
  float *pfVar45;
  int iVar46;
  int iVar47;
  ulonglong uVar48;
  longlong lVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong *plVar53;
  int iVar54;
  longlong lVar55;
  float fVar56;
  float fVar61;
  float fVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar63;
  float fVar64;
  undefined1 in_XMM2 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  undefined8 local_118;
  undefined8 uStack_110;
  int local_108;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined1 local_fc;
  undefined1 local_fb [3];
  int local_f8;
  int local_f4;
  longlong local_f0;
  
  iVar46 = (int)param_1[1];
  local_f8 = (int)param_2[1];
  local_f0 = param_1[2];
  uStack_110 = &local_100;
  local_118 = (float *)&LAB_14224bd50;
  local_100 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  lVar34 = FUN_1415d8310(&local_118,&DAT_14653198c);
  local_ff = 0;
  plVar53 = (longlong *)(lVar34 + 0x18);
  uStack_110 = &local_ff;
  local_118 = (float *)&LAB_14224bd50;
  lVar35 = FUN_1415d8310(&local_118,&DAT_14653198c);
  local_fe = 0;
  plVar1 = (longlong *)(lVar35 + 0x28);
  uStack_110 = &local_fe;
  local_118 = (float *)&LAB_14224bd50;
  lVar36 = FUN_1415d8310(&local_118,&DAT_14653198c);
  iVar47 = 0;
  plVar2 = (longlong *)(lVar36 + 0x38);
  *(undefined4 *)(lVar34 + 0x20) = 0;
  iVar54 = iVar47;
  if ((*(int *)(lVar34 + 0x24) < 0) && (iVar54 = 0, *(int *)(lVar34 + 0x24) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar53);
    iVar54 = *(int *)(lVar34 + 0x20);
  }
  *(int *)(lVar34 + 0x20) = iVar54 + iVar46;
  if (*(int *)(lVar34 + 0x24) < iVar54 + iVar46) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar53);
  }
  *(undefined4 *)(lVar35 + 0x30) = 0;
  iVar54 = iVar47;
  if ((*(int *)(lVar35 + 0x34) < 0) && (iVar54 = 0, *(int *)(lVar35 + 0x34) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
    iVar54 = *(int *)(lVar35 + 0x30);
  }
  *(int *)(lVar35 + 0x30) = iVar54 + iVar46;
  if (*(int *)(lVar35 + 0x34) < iVar54 + iVar46) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  *(undefined4 *)(lVar36 + 0x40) = 0;
  if ((*(int *)(lVar36 + 0x44) < 0) && (iVar47 = 0, *(int *)(lVar36 + 0x44) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar2);
    iVar47 = *(int *)(lVar36 + 0x40);
  }
  *(int *)(lVar36 + 0x40) = iVar47 + iVar46;
  if (*(int *)(lVar36 + 0x44) < iVar47 + iVar46) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2);
  }
  uStack_110 = &local_fd;
  local_fd = 0;
  local_118 = (float *)&LAB_14224bd50;
  lVar34 = FUN_1415d8310(&local_118);
  plVar3 = (longlong *)(lVar34 + 0x48);
  *(undefined4 *)(lVar34 + 0x50) = 0;
  iVar46 = 0;
  if ((*(int *)(lVar34 + 0x54) < 0) && (iVar46 = 0, *(int *)(lVar34 + 0x54) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar3);
    iVar46 = *(int *)(lVar34 + 0x50);
  }
  *(int *)(lVar34 + 0x50) = local_f8 + iVar46;
  if (*(int *)(lVar34 + 0x54) < local_f8 + iVar46) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + (longlong)iVar46 * 4),0,(longlong)local_f8 * 4);
  plVar32 = local_res8;
  lVar34 = param_1[1];
  iVar46 = 0;
  fVar78 = 0.0;
  if ((int)lVar34 != 0) {
    do {
      local_res8 = (longlong *)CONCAT44(local_res8._4_4_,iVar46);
      local_108 = *(int *)(*param_5 + (longlong)iVar46 * 8);
      FBoneContainer::GetParentBoneIndex(local_f0,&local_f4,&local_res8);
      fVar65 = fRam0000000146aeee9c;
      fVar63 = fRam0000000146aeee98;
      fVar62 = fRam0000000146aeee94;
      fVar61 = _DAT_146aeee90;
      lVar35 = *plVar32;
      lVar36 = (longlong)(int)local_res8;
      if (local_f4 == -1) {
        pfVar40 = (float *)(lVar35 + lVar36 * 0x30);
        fVar66 = *pfVar40;
        fVar67 = pfVar40[1];
        fVar68 = pfVar40[2];
        fVar69 = pfVar40[3];
        puVar37 = (undefined1 *)*plVar53;
        pfVar40 = (float *)(*(longlong *)(*local_res10 + (longlong)local_108 * 0x18) + lVar36 * 0x30
                           );
        fVar70 = *pfVar40;
        fVar72 = pfVar40[1];
        fVar74 = pfVar40[2];
        fVar76 = pfVar40[3];
      }
      else {
        puVar37 = (undefined1 *)*plVar53;
        pfVar40 = (float *)(lVar35 + lVar36 * 0x30);
        fVar69 = *pfVar40;
        fVar70 = pfVar40[1];
        fVar72 = pfVar40[2];
        fVar74 = pfVar40[3];
        pfVar40 = (float *)(puVar37 + (longlong)local_f4 * 0x10);
        fVar76 = *pfVar40;
        fVar12 = pfVar40[1];
        fVar13 = pfVar40[2];
        fVar14 = pfVar40[3];
        pfVar40 = (float *)(*(longlong *)(*local_res10 + (longlong)local_108 * 0x18) + lVar36 * 0x30
                           );
        fVar15 = *pfVar40;
        fVar16 = pfVar40[1];
        fVar17 = pfVar40[2];
        fVar18 = pfVar40[3];
        fVar66 = fVar76 * fVar74 * _DAT_146aeee90 + fVar14 * fVar69 +
                 fVar12 * fVar72 * _DAT_146aeee80 + fVar13 * fVar70 * _DAT_146aeee70;
        fVar67 = fVar76 * fVar72 * fRam0000000146aeee94 + fVar14 * fVar70 +
                 fVar12 * fVar74 * fRam0000000146aeee84 + fVar13 * fVar69 * fRam0000000146aeee74;
        fVar68 = fVar76 * fVar70 * fRam0000000146aeee98 + fVar14 * fVar72 +
                 fVar12 * fVar69 * fRam0000000146aeee88 + fVar13 * fVar74 * fRam0000000146aeee78;
        fVar69 = fVar76 * fVar69 * fRam0000000146aeee9c + fVar14 * fVar74 +
                 fVar12 * fVar70 * fRam0000000146aeee8c + fVar13 * fVar72 * fRam0000000146aeee7c;
        pfVar40 = (float *)(*plVar2 + (longlong)local_f4 * 0x10);
        fVar76 = *pfVar40;
        fVar12 = pfVar40[1];
        fVar13 = pfVar40[2];
        fVar14 = pfVar40[3];
        fVar70 = fVar76 * fVar18 * _DAT_146aeee90 + fVar14 * fVar15 +
                 fVar17 * fVar12 * _DAT_146aeee80 + fVar16 * fVar13 * _DAT_146aeee70;
        fVar72 = fVar76 * fVar17 * fRam0000000146aeee94 + fVar14 * fVar16 +
                 fVar18 * fVar12 * fRam0000000146aeee84 + fVar15 * fVar13 * fRam0000000146aeee74;
        fVar74 = fVar76 * fVar16 * fRam0000000146aeee98 + fVar14 * fVar17 +
                 fVar15 * fVar12 * fRam0000000146aeee88 + fVar18 * fVar13 * fRam0000000146aeee78;
        fVar76 = fVar76 * fVar15 * fRam0000000146aeee9c + fVar14 * fVar18 +
                 fVar16 * fVar12 * fRam0000000146aeee8c + fVar17 * fVar13 * fRam0000000146aeee7c;
        local_118 = (float *)puVar37;
      }
      lVar49 = (longlong)local_108;
      pfVar40 = (float *)(puVar37 + lVar36 * 0x10);
      *pfVar40 = fVar66;
      pfVar40[1] = fVar67;
      pfVar40[2] = fVar68;
      pfVar40[3] = fVar69;
      pfVar40 = (float *)(*plVar2 + (longlong)(int)local_res8 * 0x10);
      *pfVar40 = fVar70;
      pfVar40[1] = fVar72;
      pfVar40[2] = fVar74;
      pfVar40[3] = fVar76;
      fVar31 = fRam0000000146aeee3c;
      fVar30 = fRam0000000146aeee38;
      fVar29 = fRam0000000146aeee34;
      fVar28 = _DAT_146aeee30;
      lVar35 = *plVar32;
      lVar36 = (longlong)(int)local_res8;
      pfVar40 = (float *)(lVar35 + lVar36 * 0x30);
      fVar70 = *pfVar40;
      fVar72 = pfVar40[1];
      fVar74 = pfVar40[2];
      fVar76 = pfVar40[3];
      pfVar40 = (float *)(lVar35 + 0x10 + lVar36 * 0x30);
      fVar12 = *pfVar40;
      fVar13 = pfVar40[1];
      fVar14 = pfVar40[2];
      fVar15 = pfVar40[3];
      pfVar40 = (float *)(lVar35 + 0x20 + lVar36 * 0x30);
      fVar16 = *pfVar40;
      fVar17 = pfVar40[1];
      fVar18 = pfVar40[2];
      fVar19 = pfVar40[3];
      lVar35 = *(longlong *)(*local_res10 + lVar49 * 0x18);
      pfVar40 = (float *)(lVar35 + lVar36 * 0x30);
      fVar71 = *pfVar40;
      fVar73 = pfVar40[1];
      fVar75 = pfVar40[2];
      fVar77 = pfVar40[3];
      pfVar40 = (float *)(lVar35 + 0x10 + lVar36 * 0x30);
      fVar20 = *pfVar40;
      fVar21 = pfVar40[1];
      fVar22 = pfVar40[2];
      fVar23 = pfVar40[3];
      in_XMM2 = *(undefined1 (*) [16])(lVar35 + 0x20 + lVar36 * 0x30);
      fVar67 = in_XMM2._4_4_;
      fVar68 = in_XMM2._8_4_;
      fVar69 = in_XMM2._12_4_;
      fVar66 = *(float *)(*param_5 + 4 + lVar36 * 8);
      if (0.0 <= fVar66) {
        if (1.0 <= fVar66) {
          fVar66 = 1.0;
        }
      }
      else {
        fVar66 = 0.0;
      }
      fVar56 = *(float *)(*plVar3 + lVar49 * 4);
      if (fVar56 <= fVar66) {
        fVar56 = fVar66;
      }
      *(float *)(*plVar3 + lVar49 * 4) = fVar56;
      fVar93 = fRam0000000146aeee9c;
      fVar92 = fRam0000000146aeee98;
      fVar91 = fRam0000000146aeee94;
      fVar56 = _DAT_146aeee90;
      fVar79 = fVar70;
      fVar80 = fVar72;
      fVar81 = fVar74;
      fVar82 = fVar76;
      fVar83 = fVar12;
      fVar84 = fVar13;
      fVar85 = fVar14;
      fVar86 = fVar15;
      fVar87 = fVar16;
      fVar88 = fVar17;
      fVar89 = fVar18;
      fVar90 = fVar19;
      if (1e-05 < fVar66) {
        fVar64 = in_XMM2._0_4_;
        if (fVar66 < 0.99999) {
          if ((1e-05 < fVar66) &&
             (fVar79 = fVar71, fVar80 = fVar73, fVar81 = fVar75, fVar82 = fVar77, fVar83 = fVar20,
             fVar84 = fVar21, fVar85 = fVar22, fVar86 = fVar23, fVar87 = fVar64, fVar88 = fVar67,
             fVar89 = fVar68, fVar90 = fVar69, fVar66 < 0.99999)) {
            fVar61 = fVar71 * fVar70 + fVar75 * fVar74;
            fVar62 = fVar73 * fVar72 + fVar77 * fVar76;
            fVar63 = fVar75 * fVar74 + fVar71 * fVar70;
            fVar65 = fVar77 * fVar76 + fVar73 * fVar72;
            fVar71 = (float)(-(uint)(0.0 <= fVar62 + fVar61) & ((uint)(0.0 - fVar70) ^ (uint)fVar70)
                            ^ (uint)(0.0 - fVar70)) * (_DAT_146aeee50 - fVar66) + fVar66 * fVar71;
            fVar73 = (float)(-(uint)(0.0 <= fVar63 + fVar62) & ((uint)(0.0 - fVar72) ^ (uint)fVar72)
                            ^ (uint)(0.0 - fVar72)) * (fRam0000000146aeee54 - fVar66) +
                     fVar66 * fVar73;
            fVar75 = (float)(-(uint)(0.0 <= fVar65 + fVar63) & ((uint)(0.0 - fVar74) ^ (uint)fVar74)
                            ^ (uint)(0.0 - fVar74)) * (fRam0000000146aeee58 - fVar66) +
                     fVar66 * fVar75;
            fVar77 = (float)(-(uint)(0.0 <= fVar61 + fVar65) & ((uint)(0.0 - fVar76) ^ (uint)fVar76)
                            ^ (uint)(0.0 - fVar76)) * (fRam0000000146aeee5c - fVar66) +
                     fVar66 * fVar77;
            auVar57._0_4_ = fVar71 * fVar71 + fVar75 * fVar75;
            auVar57._4_4_ = fVar73 * fVar73 + fVar77 * fVar77;
            auVar57._8_4_ = fVar75 * fVar75 + fVar71 * fVar71;
            auVar57._12_4_ = fVar77 * fVar77 + fVar73 * fVar73;
            fVar70 = auVar57._4_4_ + auVar57._0_4_;
            fVar72 = auVar57._8_4_ + auVar57._4_4_;
            fVar74 = auVar57._12_4_ + auVar57._8_4_;
            fVar76 = auVar57._0_4_ + auVar57._12_4_;
            auVar60._4_4_ = fVar72;
            auVar60._0_4_ = fVar70;
            auVar60._8_4_ = fVar74;
            auVar60._12_4_ = fVar76;
            auVar60 = rsqrtps(auVar57,auVar60);
            fVar61 = auVar60._0_4_;
            fVar62 = auVar60._4_4_;
            fVar63 = auVar60._8_4_;
            fVar65 = auVar60._12_4_;
            fVar61 = (fVar28 - fVar61 * fVar61 * fVar70 * fVar28) * fVar61 + fVar61;
            fVar62 = (fVar29 - fVar62 * fVar62 * fVar72 * fVar29) * fVar62 + fVar62;
            fVar63 = (fVar30 - fVar63 * fVar63 * fVar74 * fVar30) * fVar63 + fVar63;
            fVar65 = (fVar31 - fVar65 * fVar65 * fVar76 * fVar31) * fVar65 + fVar65;
            fVar79 = (float)(((uint)(((fVar28 - fVar61 * fVar61 * fVar70 * fVar28) * fVar61 + fVar61
                                     ) * fVar71) ^ _DAT_146aeee20) &
                             -(uint)(_DAT_146aeee40 <= fVar70) ^ _DAT_146aeee20);
            fVar80 = (float)(((uint)(((fVar29 - fVar62 * fVar62 * fVar72 * fVar29) * fVar62 + fVar62
                                     ) * fVar73) ^ uRam0000000146aeee24) &
                             -(uint)(fRam0000000146aeee44 <= fVar72) ^ uRam0000000146aeee24);
            fVar81 = (float)(((uint)(((fVar30 - fVar63 * fVar63 * fVar74 * fVar30) * fVar63 + fVar63
                                     ) * fVar75) ^ uRam0000000146aeee28) &
                             -(uint)(fRam0000000146aeee48 <= fVar74) ^ uRam0000000146aeee28);
            fVar82 = (float)(((uint)(((fVar31 - fVar65 * fVar65 * fVar76 * fVar31) * fVar65 + fVar65
                                     ) * fVar77) ^ uRam0000000146aeee2c) &
                             -(uint)(fRam0000000146aeee4c <= fVar76) ^ uRam0000000146aeee2c);
            fVar83 = fVar12 + (fVar20 - fVar12) * fVar66;
            fVar84 = fVar13 + (fVar21 - fVar13) * fVar66;
            fVar85 = fVar14 + (fVar22 - fVar14) * fVar66;
            fVar86 = fVar15 + (fVar23 - fVar15) * fVar66;
            fVar87 = fVar16 + (fVar64 - fVar16) * fVar66;
            fVar88 = fVar17 + (fVar67 - fVar17) * fVar66;
            fVar89 = fVar18 + (fVar68 - fVar18) * fVar66;
            fVar90 = fVar19 + (fVar69 - fVar19) * fVar66;
          }
          lVar35 = *plVar2;
          lVar36 = *plVar53;
          lVar49 = (longlong)(int)local_res8;
          fVar61 = *(float *)(lVar35 + 4 + lVar49 * 0x10);
          fVar62 = *(float *)(lVar35 + lVar49 * 0x10);
          fVar63 = *(float *)(lVar35 + 8 + lVar49 * 0x10);
          fVar65 = *(float *)(lVar35 + 0xc + lVar49 * 0x10);
          if (*(float *)(lVar36 + lVar49 * 0x10) * fVar62 +
              fVar61 * *(float *)(lVar36 + 4 + lVar49 * 0x10) +
              fVar63 * *(float *)(lVar36 + 8 + lVar49 * 0x10) +
              fVar65 * *(float *)(lVar36 + 0xc + lVar49 * 0x10) < 0.0) {
            fVar67 = -1.0;
          }
          else {
            fVar67 = 1.0;
          }
          local_108 = 0x322bcc77;
          fVar67 = (1.0 - fVar66) * fVar67;
          fVar68 = fVar67 * *(float *)(lVar36 + lVar49 * 0x10) + fVar62 * fVar66;
          fVar62 = fVar67 * *(float *)(lVar36 + 8 + lVar49 * 0x10) + fVar63 * fVar66;
          fVar61 = fVar67 * *(float *)(lVar36 + 4 + lVar49 * 0x10) + fVar61 * fVar66;
          fVar63 = fVar67 * *(float *)(lVar36 + 0xc + lVar49 * 0x10) + fVar65 * fVar66;
          pfVar40 = (float *)(*plVar1 + lVar49 * 0x10);
          *pfVar40 = fVar68;
          pfVar40[1] = fVar61;
          pfVar40[2] = fVar62;
          pfVar40[3] = fVar63;
          pfVar40 = (float *)((longlong)(int)local_res8 * 0x10 + *plVar1);
          local_118 = (float *)CONCAT44(fVar61,fVar68);
          uStack_110 = (undefined1 *)CONCAT44(fVar63,fVar62);
          fVar61 = *pfVar40;
          fVar62 = pfVar40[1];
          fVar63 = pfVar40[2];
          fVar65 = pfVar40[3];
          auVar58._0_4_ = fVar61 * fVar61 + fVar63 * fVar63;
          auVar58._4_4_ = fVar62 * fVar62 + fVar65 * fVar65;
          auVar58._8_4_ = fVar63 * fVar63 + fVar61 * fVar61;
          auVar58._12_4_ = fVar65 * fVar65 + fVar62 * fVar62;
          fVar70 = auVar58._4_4_ + auVar58._0_4_;
          fVar72 = auVar58._8_4_ + auVar58._4_4_;
          fVar74 = auVar58._12_4_ + auVar58._8_4_;
          fVar76 = auVar58._0_4_ + auVar58._12_4_;
          auVar10._4_4_ = fVar72;
          auVar10._0_4_ = fVar70;
          auVar10._8_4_ = fVar74;
          auVar10._12_4_ = fVar76;
          auVar60 = rsqrtps(auVar58,auVar10);
          fVar66 = auVar60._0_4_;
          fVar67 = auVar60._4_4_;
          fVar68 = auVar60._8_4_;
          fVar69 = auVar60._12_4_;
          in_XMM2._0_4_ = (fVar28 - fVar66 * fVar66 * fVar70 * fVar28) * fVar66 + fVar66;
          in_XMM2._4_4_ = (fVar29 - fVar67 * fVar67 * fVar72 * fVar29) * fVar67 + fVar67;
          in_XMM2._8_4_ = (fVar30 - fVar68 * fVar68 * fVar74 * fVar30) * fVar68 + fVar68;
          in_XMM2._12_4_ = (fVar31 - fVar69 * fVar69 * fVar76 * fVar31) * fVar69 + fVar69;
          fVar62 = (float)(((uint)(((fVar29 - in_XMM2._4_4_ * in_XMM2._4_4_ * fVar72 * fVar29) *
                                    in_XMM2._4_4_ + in_XMM2._4_4_) * fVar62) ^ uRam0000000146aeee24)
                           & -(uint)(1e-08 <= fVar72) ^ uRam0000000146aeee24);
          fVar63 = (float)(((uint)(((fVar30 - in_XMM2._8_4_ * in_XMM2._8_4_ * fVar74 * fVar30) *
                                    in_XMM2._8_4_ + in_XMM2._8_4_) * fVar63) ^ uRam0000000146aeee28)
                           & -(uint)(1e-08 <= fVar74) ^ uRam0000000146aeee28);
          fVar65 = (float)(((uint)(((fVar31 - in_XMM2._12_4_ * in_XMM2._12_4_ * fVar76 * fVar31) *
                                    in_XMM2._12_4_ + in_XMM2._12_4_) * fVar65) ^
                           uRam0000000146aeee2c) & -(uint)(1e-08 <= fVar76) ^ uRam0000000146aeee2c);
          *pfVar40 = (float)(((uint)(((fVar28 - in_XMM2._0_4_ * in_XMM2._0_4_ * fVar70 * fVar28) *
                                      in_XMM2._0_4_ + in_XMM2._0_4_) * fVar61) ^ _DAT_146aeee20) &
                             -(uint)(1e-08 <= fVar70) ^ _DAT_146aeee20);
          pfVar40[1] = fVar62;
          pfVar40[2] = fVar63;
          pfVar40[3] = fVar65;
        }
        else {
          puVar6 = (undefined8 *)(*plVar2 + (longlong)(int)local_res8 * 0x10);
          uVar27 = puVar6[1];
          puVar7 = (undefined8 *)(*plVar1 + (longlong)(int)local_res8 * 0x10);
          *puVar7 = *puVar6;
          puVar7[1] = uVar27;
          fVar79 = fVar71;
          fVar80 = fVar73;
          fVar81 = fVar75;
          fVar82 = fVar77;
          fVar83 = fVar20;
          fVar84 = fVar21;
          fVar85 = fVar22;
          fVar86 = fVar23;
          fVar87 = fVar64;
          fVar88 = fVar67;
          fVar89 = fVar68;
          fVar90 = fVar69;
          fVar56 = fVar61;
          fVar91 = fVar62;
          fVar92 = fVar63;
          fVar93 = fVar65;
        }
      }
      else {
        puVar6 = (undefined8 *)(*plVar53 + (longlong)(int)local_res8 * 0x10);
        uVar27 = puVar6[1];
        puVar7 = (undefined8 *)(*plVar1 + (longlong)(int)local_res8 * 0x10);
        *puVar7 = *puVar6;
        puVar7[1] = uVar27;
        fVar56 = fVar61;
        fVar91 = fVar62;
        fVar92 = fVar63;
        fVar93 = fVar65;
      }
      pfVar40 = (float *)((longlong)(int)local_res8 * 0x30 + *param_7);
      *pfVar40 = fVar79;
      pfVar40[1] = fVar80;
      pfVar40[2] = fVar81;
      pfVar40[3] = fVar82;
      pfVar40[4] = fVar83;
      pfVar40[5] = fVar84;
      pfVar40[6] = fVar85;
      pfVar40[7] = fVar86;
      pfVar40[8] = fVar87;
      pfVar40[9] = fVar88;
      pfVar40[10] = fVar89;
      pfVar40[0xb] = fVar90;
      if (local_f4 != -1) {
        pfVar41 = (float *)((longlong)local_f4 * 0x10 + *plVar1);
        local_108 = 0x322bcc77;
        fVar69 = -*pfVar41;
        fVar67 = -pfVar41[1];
        fVar61 = pfVar41[3];
        fVar68 = -pfVar41[2];
        pfVar40 = (float *)(*plVar1 + (longlong)(int)local_res8 * 0x10);
        fVar62 = *pfVar40;
        fVar63 = pfVar40[1];
        fVar65 = pfVar40[2];
        fVar66 = pfVar40[3];
        local_118 = (float *)(*(ulonglong *)pfVar41 ^ 0x8000000080000000);
        uStack_110 = (undefined1 *)CONCAT44(fVar61,fVar68);
        fVar70 = fVar69 * fVar66 * fVar56 + fVar61 * fVar62 + fVar67 * fVar65 * _DAT_146aeee80 +
                 fVar68 * fVar63 * _DAT_146aeee70;
        fVar72 = fVar69 * fVar65 * fVar91 + fVar61 * fVar63 + fVar67 * fVar66 * fRam0000000146aeee84
                 + fVar68 * fVar62 * fRam0000000146aeee74;
        fVar74 = fVar69 * fVar63 * fVar92 + fVar61 * fVar65 + fVar67 * fVar62 * fRam0000000146aeee88
                 + fVar68 * fVar66 * fRam0000000146aeee78;
        fVar76 = fVar69 * fVar62 * fVar93 + fVar61 * fVar66 + fVar67 * fVar63 * fRam0000000146aeee8c
                 + fVar68 * fVar65 * fRam0000000146aeee7c;
        auVar59._0_4_ = fVar70 * fVar70 + fVar74 * fVar74;
        auVar59._4_4_ = fVar72 * fVar72 + fVar76 * fVar76;
        auVar59._8_4_ = fVar74 * fVar74 + fVar70 * fVar70;
        auVar59._12_4_ = fVar76 * fVar76 + fVar72 * fVar72;
        fVar66 = auVar59._4_4_ + auVar59._0_4_;
        fVar67 = auVar59._8_4_ + auVar59._4_4_;
        fVar68 = auVar59._12_4_ + auVar59._8_4_;
        fVar69 = auVar59._0_4_ + auVar59._12_4_;
        auVar9._4_4_ = fVar67;
        auVar9._0_4_ = fVar66;
        auVar9._8_4_ = fVar68;
        auVar9._12_4_ = fVar69;
        auVar60 = rsqrtps(auVar59,auVar9);
        fVar61 = auVar60._0_4_;
        fVar62 = auVar60._4_4_;
        fVar63 = auVar60._8_4_;
        fVar65 = auVar60._12_4_;
        in_XMM2._0_4_ = (fVar28 - fVar61 * fVar61 * fVar66 * fVar28) * fVar61 + fVar61;
        in_XMM2._4_4_ = (fVar29 - fVar62 * fVar62 * fVar67 * fVar29) * fVar62 + fVar62;
        in_XMM2._8_4_ = (fVar30 - fVar63 * fVar63 * fVar68 * fVar30) * fVar63 + fVar63;
        in_XMM2._12_4_ = (fVar31 - fVar65 * fVar65 * fVar69 * fVar31) * fVar65 + fVar65;
        uVar94 = ((uint)(((fVar29 - in_XMM2._4_4_ * in_XMM2._4_4_ * fVar67 * fVar29) * in_XMM2._4_4_
                         + in_XMM2._4_4_) * fVar72) ^ uRam0000000146aeee24) &
                 -(uint)(1e-08 <= fVar67) ^ uRam0000000146aeee24;
        uVar95 = ((uint)(((fVar30 - in_XMM2._8_4_ * in_XMM2._8_4_ * fVar68 * fVar30) * in_XMM2._8_4_
                         + in_XMM2._8_4_) * fVar74) ^ uRam0000000146aeee28) &
                 -(uint)(1e-08 <= fVar68) ^ uRam0000000146aeee28;
        uVar96 = ((uint)(((fVar31 - in_XMM2._12_4_ * in_XMM2._12_4_ * fVar69 * fVar31) *
                          in_XMM2._12_4_ + in_XMM2._12_4_) * fVar76) ^ uRam0000000146aeee2c) &
                 -(uint)(1e-08 <= fVar69) ^ uRam0000000146aeee2c;
        puVar8 = (uint *)(*param_7 + (longlong)(int)local_res8 * 0x30);
        *puVar8 = ((uint)(((fVar28 - in_XMM2._0_4_ * in_XMM2._0_4_ * fVar66 * fVar28) *
                           in_XMM2._0_4_ + in_XMM2._0_4_) * fVar70) ^ _DAT_146aeee20) &
                  -(uint)(1e-08 <= fVar66) ^ _DAT_146aeee20;
        puVar8[1] = uVar94;
        puVar8[2] = uVar95;
        puVar8[3] = uVar96;
      }
      iVar46 = iVar46 + 1;
      param_4 = local_res20;
    } while (iVar46 != (int)lVar34);
  }
  uStack_110 = &local_fc;
  local_fc = 0;
  local_118 = (float *)&LAB_14224bd50;
  lVar34 = FUN_1415d8310(&local_118,&DAT_14653198c);
  local_fb[0] = 0;
  plVar53 = (longlong *)(lVar34 + 0x58);
  uStack_110 = local_fb;
  local_118 = (float *)&LAB_14224bd50;
  lVar35 = FUN_1415d8310(&local_118,&DAT_14653198c);
  *(undefined4 *)(lVar34 + 0x60) = 0;
  plVar1 = (longlong *)(lVar35 + 0x68);
  if ((*(int *)(lVar34 + 100) < 0) && (*(int *)(lVar34 + 100) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar53,0);
  }
  lVar36 = (longlong)local_f8;
  iVar46 = *(int *)(lVar34 + 0x60);
  iVar54 = local_f8 + 1;
  if (iVar46 < iVar54) {
    *(int *)(lVar34 + 0x60) = iVar54;
    if (*(int *)(lVar34 + 100) < iVar54) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar53,iVar46);
    }
  }
  else if ((iVar54 < iVar46) && (iVar54 != iVar46)) {
    *(int *)(lVar34 + 0x60) = iVar54;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar53);
  }
  *(undefined4 *)(lVar35 + 0x70) = 0;
  if ((*(int *)(lVar35 + 0x74) < 0) && (*(int *)(lVar35 + 0x74) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  iVar46 = *(int *)(lVar35 + 0x70);
  if (iVar46 < iVar54) {
    *(int *)(lVar35 + 0x70) = iVar54;
    if (*(int *)(lVar35 + 0x74) < iVar54) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar46);
    }
  }
  else if ((iVar54 < iVar46) && (iVar54 != iVar46)) {
    *(int *)(lVar35 + 0x70) = iVar54;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  iVar46 = 0;
  lVar49 = 0;
  *(undefined8 *)*plVar53 = local_res18;
  *(undefined4 *)*plVar1 = 0x3f800000;
  if (3 < lVar36) {
    iVar54 = 2;
    lVar55 = (lVar36 - 4U >> 2) + 1;
    lVar49 = lVar55 * 4;
    lVar43 = 0xc;
    lVar52 = 0x18;
    do {
      lVar42 = (longlong)iVar46;
      lVar4 = lVar52 + 0x20;
      iVar46 = iVar46 + 4;
      *(longlong *)(*plVar53 + -0x30 + lVar4) = lVar42 * 0x20 + *param_4;
      *(undefined4 *)(lVar43 + -8 + *plVar1) = *(undefined4 *)(lVar43 + -0xc + *plVar3);
      *(longlong *)(*plVar53 + -0x28 + lVar4) = (longlong)(iVar54 + -1) * 0x20 + *param_4;
      *(undefined4 *)(lVar43 + -4 + *plVar1) = *(undefined4 *)(lVar43 + -8 + *plVar3);
      *(longlong *)(lVar52 + *plVar53) = (longlong)iVar54 * 0x20 + *param_4;
      *(undefined4 *)(lVar43 + *plVar1) = *(undefined4 *)(lVar43 + -4 + *plVar3);
      iVar47 = iVar54 + 1;
      iVar54 = iVar54 + 4;
      *(longlong *)(*plVar53 + -0x18 + lVar4) = (longlong)iVar47 * 0x20 + *param_4;
      *(undefined4 *)(lVar43 + 4 + *plVar1) = *(undefined4 *)(lVar43 + *plVar3);
      lVar55 = lVar55 + -1;
      lVar43 = lVar43 + 0x10;
      lVar52 = lVar4;
    } while (lVar55 != 0);
  }
  pfVar40 = (float *)0x0;
  for (; lVar49 < lVar36; lVar49 = lVar49 + 1) {
    lVar43 = (longlong)iVar46;
    iVar46 = iVar46 + 1;
    *(longlong *)(*plVar53 + 8 + lVar49 * 8) = lVar43 * 0x20 + *param_4;
    *(undefined4 *)(*plVar1 + 4 + lVar49 * 4) = *(undefined4 *)(*plVar3 + lVar49 * 4);
  }
  iVar46 = *(int *)(lVar34 + 0x60);
  pfVar41 = (float *)*plVar1;
  uVar94 = *(uint *)(lVar35 + 0x70);
  plVar53 = (longlong *)*plVar53;
  if (0 < iVar46) {
    if (param_6 == 2) {
      FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_8,*plVar53);
      if (1 < iVar46) {
        uVar48 = (ulonglong)(iVar46 - 1);
        do {
          plVar53 = plVar53 + 1;
          pfVar41 = pfVar41 + 1;
          fVar78 = *pfVar41;
          plVar1 = (longlong *)*plVar53;
          if ((1e-05 < fVar78) && (iVar46 = 0, 0 < (int)param_8[1])) {
            lVar34 = *plVar1;
            pfVar44 = pfVar40;
            do {
              if ((*(char *)((longlong)pfVar44 + *param_8 + 4) == '\0') &&
                 (*(char *)((longlong)pfVar44 + lVar34 + 4) == '\0')) {
                uVar33 = 0;
              }
              else {
                uVar33 = 1;
              }
              *(undefined1 *)((longlong)pfVar44 + *param_8 + 4) = uVar33;
              iVar46 = iVar46 + 1;
              lVar34 = *plVar1;
              *(float *)((longlong)pfVar44 + *param_8) =
                   fVar78 * *(float *)(lVar34 + (longlong)pfVar44) +
                   *(float *)((longlong)pfVar44 + *param_8);
              pfVar44 = pfVar44 + 2;
            } while (iVar46 < (int)param_8[1]);
          }
          uVar48 = uVar48 - 1;
        } while (uVar48 != 0);
      }
    }
    else if (param_6 == 1) {
      pfVar44 = (float *)((ulonglong)((longlong)(pfVar41 + (int)uVar94) + (3 - (longlong)pfVar41))
                         >> 2);
      if (pfVar41 + (int)uVar94 < pfVar41) {
        pfVar44 = pfVar40;
      }
      if (pfVar44 != (float *)0x0) {
        pfVar38 = pfVar41;
        pfVar45 = pfVar40;
        if ((float *)0x7 < pfVar44) {
          fVar78 = 0.0;
          fVar61 = 0.0;
          fVar62 = 0.0;
          fVar63 = 0.0;
          auVar60 = ZEXT816(0);
          do {
            pfVar45 = pfVar45 + 2;
            fVar78 = fVar78 + *pfVar38;
            fVar61 = fVar61 + pfVar38[1];
            fVar62 = fVar62 + pfVar38[2];
            fVar63 = fVar63 + pfVar38[3];
            pfVar5 = pfVar38 + 4;
            pfVar24 = pfVar38 + 5;
            pfVar25 = pfVar38 + 6;
            pfVar26 = pfVar38 + 7;
            pfVar38 = pfVar38 + 8;
            in_XMM2._0_4_ = auVar60._0_4_ + *pfVar5;
            in_XMM2._4_4_ = auVar60._4_4_ + *pfVar24;
            in_XMM2._8_4_ = auVar60._8_4_ + *pfVar25;
            in_XMM2._12_4_ = auVar60._12_4_ + *pfVar26;
            auVar60 = in_XMM2;
          } while (pfVar45 != (float *)((ulonglong)pfVar44 & 0xfffffffffffffff8));
          fVar78 = fVar62 + in_XMM2._8_4_ + fVar78 + in_XMM2._0_4_ +
                   fVar63 + in_XMM2._12_4_ + fVar61 + in_XMM2._4_4_;
        }
        for (; pfVar45 != pfVar44; pfVar45 = (float *)((longlong)pfVar45 + 1)) {
          fVar78 = fVar78 + *pfVar38;
          pfVar38 = pfVar38 + 1;
        }
      }
      if (fVar78 <= 1e-05) {
        FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_8,*plVar53);
        if (1 < iVar46) {
          uVar48 = (ulonglong)(iVar46 - 1);
          do {
            plVar53 = plVar53 + 1;
            pfVar41 = pfVar41 + 1;
            fVar78 = *pfVar41;
            plVar1 = (longlong *)*plVar53;
            if ((1e-05 < fVar78) && (iVar46 = 0, 0 < (int)param_8[1])) {
              lVar34 = *plVar1;
              pfVar44 = pfVar40;
              do {
                if ((*(char *)(*param_8 + 4 + (longlong)pfVar44) == '\0') &&
                   (*(char *)((longlong)pfVar44 + lVar34 + 4) == '\0')) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = 1;
                }
                *(undefined1 *)(*param_8 + 4 + (longlong)pfVar44) = uVar33;
                iVar46 = iVar46 + 1;
                lVar34 = *plVar1;
                *(float *)(*param_8 + (longlong)pfVar44) =
                     fVar78 * *(float *)(lVar34 + (longlong)pfVar44) +
                     *(float *)(*param_8 + (longlong)pfVar44);
                pfVar44 = pfVar44 + 2;
              } while (iVar46 < (int)param_8[1]);
            }
            uVar48 = uVar48 - 1;
          } while (uVar48 != 0);
        }
      }
      else {
        uVar48 = 0;
        uVar95 = 0;
        uStack_110 = (undefined1 *)(ulonglong)uVar94;
        local_118 = pfVar40;
        if (0 < (int)uVar94) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_118,0);
          if ((0xf < uVar94) &&
             ((pfVar41 + (int)(uVar94 - 1) < local_118 || (local_118 + (int)(uVar94 - 1) < pfVar41))
             )) {
            uVar96 = uVar94 & 0x8000000f;
            if ((int)uVar96 < 0) {
              uVar96 = (uVar96 - 1 | 0xfffffff0) + 1;
            }
            auVar11._4_4_ = fVar78;
            auVar11._0_4_ = fVar78;
            auVar11._8_4_ = fVar78;
            auVar11._12_4_ = fVar78;
            auVar60 = rcpps(in_XMM2,auVar11);
            lVar34 = (longlong)pfVar41 - (longlong)local_118;
            fVar61 = auVar60._0_4_;
            fVar62 = auVar60._4_4_;
            fVar63 = auVar60._8_4_;
            fVar65 = auVar60._12_4_;
            fVar61 = (fVar61 + fVar61) - fVar61 * fVar61 * fVar78;
            fVar62 = (fVar62 + fVar62) - fVar62 * fVar62 * fVar78;
            fVar63 = (fVar63 + fVar63) - fVar63 * fVar63 * fVar78;
            fVar65 = (fVar65 + fVar65) - fVar65 * fVar65 * fVar78;
            pfVar40 = local_118 + 4;
            uVar39 = uVar48;
            uVar50 = uVar48;
            do {
              pfVar38 = (float *)((longlong)pfVar40 + lVar34 + -0x10);
              fVar66 = pfVar38[1];
              fVar67 = pfVar38[2];
              fVar68 = pfVar38[3];
              uVar95 = (int)uVar39 + 0x10;
              uVar39 = (ulonglong)uVar95;
              uVar50 = uVar50 + 0x10;
              pfVar44 = (float *)((longlong)pfVar40 + lVar34);
              fVar69 = *pfVar44;
              fVar70 = pfVar44[1];
              fVar72 = pfVar44[2];
              fVar74 = pfVar44[3];
              pfVar40[-4] = *pfVar38 * fVar61;
              pfVar40[-3] = fVar66 * fVar62;
              pfVar40[-2] = fVar67 * fVar63;
              pfVar40[-1] = fVar68 * fVar65;
              pfVar44 = (float *)((longlong)pfVar40 + lVar34 + 0x10);
              fVar66 = *pfVar44;
              fVar67 = pfVar44[1];
              fVar68 = pfVar44[2];
              fVar76 = pfVar44[3];
              *pfVar40 = fVar69 * fVar61;
              pfVar40[1] = fVar70 * fVar62;
              pfVar40[2] = fVar72 * fVar63;
              pfVar40[3] = fVar74 * fVar65;
              pfVar44 = (float *)((longlong)pfVar40 + lVar34 + 0x20);
              fVar69 = *pfVar44;
              fVar70 = pfVar44[1];
              fVar72 = pfVar44[2];
              fVar74 = pfVar44[3];
              pfVar40[4] = fVar66 * fVar61;
              pfVar40[5] = fVar67 * fVar62;
              pfVar40[6] = fVar68 * fVar63;
              pfVar40[7] = fVar76 * fVar65;
              pfVar40[8] = fVar69 * fVar61;
              pfVar40[9] = fVar70 * fVar62;
              pfVar40[10] = fVar72 * fVar63;
              pfVar40[0xb] = fVar74 * fVar65;
              pfVar40 = pfVar40 + 0x10;
            } while ((longlong)uVar50 < (longlong)(int)(uVar94 - uVar96));
          }
          if ((int)uVar95 < (int)uVar94) {
            uVar39 = (ulonglong)(uVar94 - uVar95);
            pfVar40 = local_118 + (int)uVar95;
            do {
              *pfVar40 = (1.0 / fVar78) *
                         *(float *)((longlong)pfVar40 + ((longlong)pfVar41 - (longlong)local_118));
              uVar39 = uVar39 - 1;
              pfVar40 = pfVar40 + 1;
            } while (uVar39 != 0);
          }
        }
        pfVar40 = local_118;
        FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_8,*plVar53);
        if (1 < iVar46) {
          uVar39 = (ulonglong)(iVar46 - 1);
          pfVar41 = pfVar40;
          do {
            plVar53 = plVar53 + 1;
            pfVar41 = pfVar41 + 1;
            fVar78 = *pfVar41;
            plVar1 = (longlong *)*plVar53;
            if ((1e-05 < fVar78) && (0 < (int)param_8[1])) {
              lVar34 = *plVar1;
              uVar50 = uVar48;
              uVar51 = uVar48;
              do {
                if ((*(char *)(*param_8 + 4 + uVar50) == '\0') &&
                   (*(char *)(lVar34 + 4 + uVar50) == '\0')) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = 1;
                }
                *(undefined1 *)(*param_8 + 4 + uVar50) = uVar33;
                uVar94 = (int)uVar51 + 1;
                uVar51 = (ulonglong)uVar94;
                lVar34 = *plVar1;
                *(float *)(*param_8 + uVar50) =
                     fVar78 * *(float *)(lVar34 + uVar50) + *(float *)(*param_8 + uVar50);
                uVar50 = uVar50 + 8;
              } while ((int)uVar94 < (int)param_8[1]);
            }
            uVar39 = uVar39 - 1;
          } while (uVar39 != 0);
        }
        FMemory::Free(pfVar40);
      }
    }
    else {
      FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_8,*plVar53);
      if (1 < iVar46) {
        uVar48 = (ulonglong)(iVar46 - 1);
        do {
          plVar53 = plVar53 + 1;
          plVar1 = (longlong *)*plVar53;
          iVar46 = 0;
          pfVar41 = pfVar40;
          if (0 < (int)plVar1[1]) {
            do {
              if (*(char *)(*plVar1 + 4 + (longlong)pfVar41) != '\0') {
                *(undefined1 *)((longlong)pfVar41 + *param_8 + 4) = 1;
                *(undefined4 *)((longlong)pfVar41 + *param_8) =
                     *(undefined4 *)((longlong)pfVar41 + *plVar1);
              }
              iVar46 = iVar46 + 1;
              pfVar41 = pfVar41 + 2;
            } while (iVar46 < (int)plVar1[1]);
          }
          uVar48 = uVar48 - 1;
        } while (uVar48 != 0);
      }
    }
  }
  return;
}



// FUNCTION 142248a60 BlendPosesPerBoneFilter body=131 status=ok
// SIG undefined BlendPosesPerBoneFilter(void)

void FAnimationRuntime::BlendPosesPerBoneFilter
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  if (*(int *)(param_2 + 8) == 0) {
    TArray<FTransform,TMemStackAllocator<0>_>::operator=(param_5,param_1);
    *(undefined8 *)(param_5 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    return;
  }
  if (param_8 != '\0') {
    FUN_142247ab0();
    return;
  }
  FUN_142247100();
  return;
}



// FUNCTION 142248af0 FUN_142248af0 body=5138 status=ok
// SIG undefined FUN_142248af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142248af0(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,char *param_8)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float *pfVar19;
  undefined8 uVar20;
  void *pvVar21;
  undefined1 uVar22;
  int iVar23;
  int iVar24;
  longlong *plVar25;
  int *piVar26;
  longlong lVar27;
  float *pfVar28;
  float *pfVar29;
  longlong lVar30;
  float *pfVar31;
  undefined4 *puVar32;
  longlong *plVar33;
  ulonglong uVar34;
  int iVar35;
  int iVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong *plVar39;
  longlong *plVar40;
  ulonglong uVar41;
  float fVar42;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar54;
  float fVar55;
  undefined1 in_XMM2 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
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
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  float fVar83;
  float fVar84;
  int local_198;
  char local_194;
  float local_190;
  int local_188 [2];
  longlong *local_180;
  undefined8 local_178;
  char local_170;
  undefined8 local_168;
  float fStack_160;
  float fStack_15c;
  int local_158;
  void *local_150;
  int local_148;
  undefined4 local_144;
  int local_140;
  int local_13c;
  int local_138;
  longlong *local_130;
  int local_128;
  undefined4 local_124;
  longlong local_120;
  int local_118;
  undefined4 local_114;
  int local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [184];
  
  TArray<FTransform,TMemStackAllocator<0>_>::operator=(param_5);
  param_5[2] = param_1[2];
  local_138 = (int)param_2[1];
  if (local_138 == 0) {
    TArray<FTransform,TMemStackAllocator<0>_>::operator=(param_5,param_1);
    param_5[2] = param_1[2];
    return;
  }
  local_100 = param_1[2];
  iVar36 = (int)param_1[1];
  plVar25 = (longlong *)0x0;
  local_150 = (void *)0x0;
  local_144 = 0;
  local_120 = 0;
  local_114 = 0;
  local_180 = (longlong *)0x0;
  local_178 = (ulonglong)(uint)local_178;
  local_130 = (longlong *)0x0;
  local_124 = 0;
  local_148 = iVar36;
  local_118 = iVar36;
  pvVar21 = local_150;
  if (0 < iVar36) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_150);
    pvVar21 = local_150;
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_120);
  }
  local_178 = CONCAT44(local_178._4_4_,iVar36);
  plVar40 = plVar25;
  local_128 = iVar36;
  if (0 < iVar36) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_180);
    plVar25 = local_180;
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_130);
    plVar40 = local_130;
  }
  _guard_xfg_dispatch_icall_nop(plVar40,0,(longlong)iVar36);
  local_108 = (longlong)local_138;
  local_150 = (void *)0x0;
  local_144 = 0;
  local_148 = local_138;
  if (0 < local_138) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_150);
  }
  _guard_xfg_dispatch_icall_nop(local_150,0,local_108 * 4);
  iVar36 = (int)param_1[1];
  fVar84 = 0.0;
  local_158 = 0;
  local_140 = iVar36;
  if (iVar36 != 0) {
    do {
      iVar35 = local_158;
      uVar41 = (ulonglong)*(int *)(*param_7 + (longlong)local_158 * 0xc);
      local_198 = local_158;
      FBoneContainer::GetParentBoneIndex(local_100,&local_13c,&local_198);
      fVar74 = *(float *)(*param_7 + 4 + (longlong)local_198 * 0xc);
      if (0.0 <= fVar74) {
        if (1.0 <= fVar74) {
          fVar74 = 1.0;
        }
      }
      else {
        fVar74 = 0.0;
      }
      fVar50 = *(float *)((longlong)local_150 + uVar41 * 4);
      fVar52 = fVar74;
      if (fVar74 <= fVar50) {
        fVar52 = fVar50;
      }
      *(float *)((longlong)local_150 + uVar41 * 4) = fVar52;
      local_194 = *(char *)(*param_7 + 9 + (longlong)local_198 * 0xc);
      local_170 = *(char *)(*param_7 + 8 + (longlong)local_198 * 0xc);
      fVar69 = _DAT_146aeee90;
      fVar71 = fRam0000000146aeee94;
      fVar72 = fRam0000000146aeee98;
      fVar83 = fRam0000000146aeee9c;
      fVar63 = _DAT_146aeee80;
      fVar65 = fRam0000000146aeee84;
      fVar67 = fRam0000000146aeee88;
      fVar73 = fRam0000000146aeee8c;
      fVar50 = _DAT_146aeee70;
      fVar52 = fRam0000000146aeee74;
      fVar54 = fRam0000000146aeee78;
      fVar61 = fRam0000000146aeee7c;
      local_190 = fVar74;
      local_168 = (float *)uVar41;
      if (local_194 != '\0') {
        local_188[0] = local_13c;
        local_178 = 1;
        local_180 = (longlong *)0x0;
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_180,0);
        uVar38 = local_178;
        *(int *)local_180 = local_198;
        local_110 = (uint)local_178;
        iVar23 = (uint)local_178 + 1;
        local_178 = CONCAT44(local_178._4_4_,iVar23);
        if (local_178._4_4_ < iVar23) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_180,uVar38 & 0xffffffff);
          iVar23 = (uint)local_178;
        }
        lVar37 = local_100;
        plVar39 = local_130;
        *(int *)((longlong)local_180 + (longlong)local_110 * 4) = local_188[0];
        fVar50 = _DAT_146aeee70;
        fVar52 = fRam0000000146aeee74;
        fVar54 = fRam0000000146aeee78;
        fVar61 = fRam0000000146aeee7c;
        fVar63 = _DAT_146aeee80;
        fVar65 = fRam0000000146aeee84;
        fVar67 = fRam0000000146aeee88;
        fVar73 = fRam0000000146aeee8c;
        fVar69 = _DAT_146aeee90;
        fVar71 = fRam0000000146aeee94;
        fVar72 = fRam0000000146aeee98;
        fVar83 = fRam0000000146aeee9c;
        plVar40 = local_180;
        while ((uVar38 = uVar41, _DAT_146aeee70 = fVar50, fRam0000000146aeee74 = fVar52,
               fRam0000000146aeee78 = fVar54, fRam0000000146aeee7c = fVar61, _DAT_146aeee80 = fVar63
               , fRam0000000146aeee84 = fVar65, fRam0000000146aeee88 = fVar67,
               fRam0000000146aeee8c = fVar73, _DAT_146aeee90 = fVar69, fRam0000000146aeee94 = fVar71
               , fRam0000000146aeee98 = fVar72, fRam0000000146aeee9c = fVar83, local_188[0] != -1 &&
               (uVar38 = (ulonglong)local_168, iVar36 = local_140, iVar35 = local_158,
               *(char *)((longlong)local_188[0] + (longlong)plVar39) == '\0'))) {
          piVar26 = (int *)FBoneContainer::GetParentBoneIndex(lVar37,local_f8,local_188);
          local_188[0] = *piVar26;
          iVar35 = iVar23 + 1;
          local_178 = CONCAT44(local_178._4_4_,iVar35);
          if (local_178._4_4_ < iVar35) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_180,iVar23);
            plVar40 = local_180;
            iVar35 = (uint)local_178;
          }
          *(int *)((longlong)plVar40 + (longlong)iVar23 * 4) = local_188[0];
          uVar41 = (ulonglong)local_168;
          iVar36 = local_140;
          iVar23 = iVar35;
          fVar50 = _DAT_146aeee70;
          fVar52 = fRam0000000146aeee74;
          fVar54 = fRam0000000146aeee78;
          fVar61 = fRam0000000146aeee7c;
          fVar63 = _DAT_146aeee80;
          fVar65 = fRam0000000146aeee84;
          fVar67 = fRam0000000146aeee88;
          fVar73 = fRam0000000146aeee8c;
          fVar69 = _DAT_146aeee90;
          fVar71 = fRam0000000146aeee94;
          fVar72 = fRam0000000146aeee98;
          fVar83 = fRam0000000146aeee9c;
          iVar35 = local_158;
        }
        uVar41 = uVar38;
        for (lVar37 = (longlong)(iVar23 + -1); 0 < lVar37; lVar37 = lVar37 + -1) {
          lVar27 = (longlong)*(int *)((longlong)plVar40 + (lVar37 + -1) * 4);
          local_188[0] = *(int *)((longlong)plVar40 + lVar37 * 4);
          pfVar28 = (float *)(*param_1 + lVar27 * 0x30);
          fVar13 = *pfVar28;
          fVar14 = pfVar28[1];
          fVar15 = pfVar28[2];
          fVar16 = pfVar28[3];
          if (local_188[0] == -1) {
            pfVar28 = (float *)((longlong)pvVar21 + lVar27 * 0x10);
            *pfVar28 = fVar13;
            pfVar28[1] = fVar14;
            pfVar28[2] = fVar15;
            pfVar28[3] = fVar16;
            piVar26 = (int *)(*(longlong *)(*param_2 + uVar38 * 0x18) + lVar27 * 0x30);
            iVar36 = piVar26[1];
            iVar35 = piVar26[2];
            iVar23 = piVar26[3];
            plVar39 = plVar25 + lVar27 * 2;
            *(int *)plVar39 = *piVar26;
            *(int *)((longlong)plVar39 + 4) = iVar36;
            *(int *)(plVar39 + 1) = iVar35;
            *(int *)((longlong)plVar39 + 0xc) = iVar23;
          }
          else {
            pfVar28 = (float *)((longlong)pvVar21 + (longlong)local_188[0] * 0x10);
            fVar59 = *pfVar28;
            fVar79 = pfVar28[1];
            fVar57 = pfVar28[2];
            fVar42 = pfVar28[3];
            pfVar28 = (float *)((longlong)pvVar21 + lVar27 * 0x10);
            *pfVar28 = fVar16 * fVar59 * fVar69 + fVar42 * fVar13 + fVar15 * fVar79 * fVar63 +
                       fVar14 * fVar57 * fVar50;
            pfVar28[1] = fVar15 * fVar59 * fVar71 + fVar42 * fVar14 + fVar16 * fVar79 * fVar65 +
                         fVar13 * fVar57 * fVar52;
            pfVar28[2] = fVar14 * fVar59 * fVar72 + fVar42 * fVar15 + fVar13 * fVar79 * fVar67 +
                         fVar16 * fVar57 * fVar54;
            pfVar28[3] = fVar13 * fVar59 * fVar83 + fVar42 * fVar16 + fVar14 * fVar79 * fVar73 +
                         fVar15 * fVar57 * fVar61;
            pfVar28 = (float *)(*(longlong *)(*param_2 + uVar38 * 0x18) + lVar27 * 0x30);
            fVar13 = *pfVar28;
            fVar14 = pfVar28[1];
            fVar15 = pfVar28[2];
            fVar16 = pfVar28[3];
            pfVar28 = (float *)(plVar25 + (longlong)local_188[0] * 2);
            fVar59 = *pfVar28;
            fVar79 = pfVar28[1];
            fVar57 = pfVar28[2];
            fVar42 = pfVar28[3];
            in_XMM2._4_4_ = fVar57;
            in_XMM2._0_4_ = fVar57;
            in_XMM2._8_4_ = fVar57;
            in_XMM2._12_4_ = fVar57;
            pfVar28 = (float *)(plVar25 + lVar27 * 2);
            *pfVar28 = fVar16 * fVar59 * fVar69 + fVar42 * fVar13 + fVar15 * fVar79 * fVar63 +
                       fVar14 * fVar57 * fVar50;
            pfVar28[1] = fVar15 * fVar59 * fVar71 + fVar42 * fVar14 + fVar16 * fVar79 * fVar65 +
                         fVar13 * fVar57 * fVar52;
            pfVar28[2] = fVar14 * fVar59 * fVar72 + fVar42 * fVar15 + fVar13 * fVar79 * fVar67 +
                         fVar16 * fVar57 * fVar54;
            pfVar28[3] = fVar13 * fVar59 * fVar83 + fVar42 * fVar16 + fVar14 * fVar79 * fVar73 +
                         fVar15 * fVar57 * fVar61;
          }
          *(undefined1 *)((longlong)local_130 + lVar27) = 1;
          if (1 < lVar37) {
            puVar32 = (undefined4 *)((longlong)pvVar21 + lVar27 * 0x10);
            uVar7 = puVar32[1];
            uVar17 = puVar32[2];
            uVar18 = puVar32[3];
            puVar1 = (undefined4 *)(local_120 + lVar27 * 0x10);
            *puVar1 = *puVar32;
            puVar1[1] = uVar7;
            puVar1[2] = uVar17;
            puVar1[3] = uVar18;
          }
          uVar41 = (ulonglong)local_168;
          iVar36 = local_140;
          iVar35 = local_158;
        }
        if (plVar40 != (longlong *)0x0) {
          FMemory::Free(plVar40);
          fVar69 = _DAT_146aeee90;
          fVar71 = fRam0000000146aeee94;
          fVar72 = fRam0000000146aeee98;
          fVar83 = fRam0000000146aeee9c;
          fVar63 = _DAT_146aeee80;
          fVar65 = fRam0000000146aeee84;
          fVar67 = fRam0000000146aeee88;
          fVar73 = fRam0000000146aeee8c;
          fVar50 = _DAT_146aeee70;
          fVar52 = fRam0000000146aeee74;
          fVar54 = fRam0000000146aeee78;
          fVar61 = fRam0000000146aeee7c;
        }
      }
      fVar16 = fRam0000000146aeee3c;
      fVar15 = fRam0000000146aeee38;
      fVar14 = fRam0000000146aeee34;
      fVar13 = _DAT_146aeee30;
      lVar37 = *param_1;
      lVar27 = (longlong)local_198;
      if (local_170 == '\0') {
        if (1e-05 < fVar74) {
          lVar30 = *(longlong *)(*param_2 + uVar41 * 0x18);
          if (fVar74 < 0.99999) {
            pfVar28 = (float *)(lVar37 + lVar27 * 0x30);
            fVar59 = *pfVar28;
            fVar79 = pfVar28[1];
            fVar57 = pfVar28[2];
            fVar42 = pfVar28[3];
            pfVar28 = (float *)(lVar37 + 0x10 + lVar27 * 0x30);
            fVar60 = *pfVar28;
            fVar55 = pfVar28[1];
            fVar56 = pfVar28[2];
            fVar58 = pfVar28[3];
            pfVar28 = (float *)(lVar37 + 0x20 + lVar27 * 0x30);
            fVar62 = *pfVar28;
            fVar64 = pfVar28[1];
            fVar66 = pfVar28[2];
            fVar75 = pfVar28[3];
            if (1e-05 < fVar74) {
              if (fVar74 < 0.99999) {
                pfVar28 = (float *)(lVar30 + lVar27 * 0x30);
                pfVar31 = (float *)(lVar30 + 0x10 + lVar27 * 0x30);
                fVar76 = *pfVar28 * fVar59;
                fVar78 = pfVar28[1] * fVar79;
                fVar51 = pfVar28[2] * fVar57;
                fVar53 = pfVar28[3] * fVar42;
                fVar60 = fVar60 + (*pfVar31 - fVar60) * fVar74;
                fVar55 = fVar55 + (pfVar31[1] - fVar55) * fVar74;
                fVar56 = fVar56 + (pfVar31[2] - fVar56) * fVar74;
                fVar58 = fVar58 + (pfVar31[3] - fVar58) * fVar74;
                pfVar31 = (float *)(lVar30 + 0x20 + lVar27 * 0x30);
                fVar62 = fVar62 + (*pfVar31 - fVar62) * fVar74;
                fVar64 = fVar64 + (pfVar31[1] - fVar64) * fVar74;
                fVar66 = fVar66 + (pfVar31[2] - fVar66) * fVar74;
                fVar75 = fVar75 + (pfVar31[3] - fVar75) * fVar74;
                fVar77 = fVar76 + fVar51;
                fVar49 = fVar78 + fVar53;
                fVar51 = fVar51 + fVar76;
                fVar53 = fVar53 + fVar78;
                fVar68 = (float)(-(uint)(0.0 <= fVar49 + fVar77) &
                                 ((uint)fVar59 ^ (uint)(0.0 - fVar59)) ^ (uint)(0.0 - fVar59)) *
                         (_DAT_146aeee50 - fVar74) + *pfVar28 * fVar74;
                fVar70 = (float)(-(uint)(0.0 <= fVar51 + fVar49) &
                                 ((uint)fVar79 ^ (uint)(0.0 - fVar79)) ^ (uint)(0.0 - fVar79)) *
                         (fRam0000000146aeee54 - fVar74) + pfVar28[1] * fVar74;
                fVar51 = (float)(-(uint)(0.0 <= fVar53 + fVar51) &
                                 ((uint)fVar57 ^ (uint)(0.0 - fVar57)) ^ (uint)(0.0 - fVar57)) *
                         (fRam0000000146aeee58 - fVar74) + pfVar28[2] * fVar74;
                fVar53 = (float)(-(uint)(0.0 <= fVar77 + fVar53) &
                                 ((uint)fVar42 ^ (uint)(0.0 - fVar42)) ^ (uint)(0.0 - fVar42)) *
                         (fRam0000000146aeee5c - fVar74) + pfVar28[3] * fVar74;
                auVar45._0_4_ = fVar68 * fVar68 + fVar51 * fVar51;
                auVar45._4_4_ = fVar70 * fVar70 + fVar53 * fVar53;
                auVar45._8_4_ = fVar51 * fVar51 + fVar68 * fVar68;
                auVar45._12_4_ = fVar53 * fVar53 + fVar70 * fVar70;
                fVar76 = auVar45._4_4_ + auVar45._0_4_;
                fVar77 = auVar45._8_4_ + auVar45._4_4_;
                fVar78 = auVar45._12_4_ + auVar45._8_4_;
                fVar49 = auVar45._0_4_ + auVar45._12_4_;
                auVar48._4_4_ = fVar77;
                auVar48._0_4_ = fVar76;
                auVar48._8_4_ = fVar78;
                auVar48._12_4_ = fVar49;
                auVar48 = rsqrtps(auVar45,auVar48);
                fVar59 = auVar48._0_4_;
                fVar79 = auVar48._4_4_;
                fVar57 = auVar48._8_4_;
                fVar42 = auVar48._12_4_;
                in_XMM2._0_4_ =
                     (_DAT_146aeee30 - fVar59 * fVar59 * fVar76 * _DAT_146aeee30) * fVar59 + fVar59;
                in_XMM2._4_4_ =
                     (fRam0000000146aeee34 - fVar79 * fVar79 * fVar77 * fRam0000000146aeee34) *
                     fVar79 + fVar79;
                in_XMM2._8_4_ =
                     (fRam0000000146aeee38 - fVar57 * fVar57 * fVar78 * fRam0000000146aeee38) *
                     fVar57 + fVar57;
                in_XMM2._12_4_ =
                     (fRam0000000146aeee3c - fVar42 * fVar42 * fVar49 * fRam0000000146aeee3c) *
                     fVar42 + fVar42;
                fVar59 = (float)(((uint)(((_DAT_146aeee30 -
                                          in_XMM2._0_4_ * in_XMM2._0_4_ * fVar76 * _DAT_146aeee30) *
                                          in_XMM2._0_4_ + in_XMM2._0_4_) * fVar68) ^
                                 (uint)_DAT_146aeee20) & -(uint)(_DAT_146aeee40 <= fVar76) ^
                                (uint)_DAT_146aeee20);
                fVar79 = (float)(((uint)(((fRam0000000146aeee34 -
                                          in_XMM2._4_4_ * in_XMM2._4_4_ *
                                          fVar77 * fRam0000000146aeee34) * in_XMM2._4_4_ +
                                         in_XMM2._4_4_) * fVar70) ^ (uint)fRam0000000146aeee24) &
                                 -(uint)(fRam0000000146aeee44 <= fVar77) ^
                                (uint)fRam0000000146aeee24);
                fVar57 = (float)(((uint)(((fRam0000000146aeee38 -
                                          in_XMM2._8_4_ * in_XMM2._8_4_ *
                                          fVar78 * fRam0000000146aeee38) * in_XMM2._8_4_ +
                                         in_XMM2._8_4_) * fVar51) ^ (uint)fRam0000000146aeee28) &
                                 -(uint)(fRam0000000146aeee48 <= fVar78) ^
                                (uint)fRam0000000146aeee28);
                fVar42 = (float)(((uint)(((fRam0000000146aeee3c -
                                          in_XMM2._12_4_ * in_XMM2._12_4_ *
                                          fVar49 * fRam0000000146aeee3c) * in_XMM2._12_4_ +
                                         in_XMM2._12_4_) * fVar53) ^ (uint)fRam0000000146aeee2c) &
                                 -(uint)(fRam0000000146aeee4c <= fVar49) ^
                                (uint)fRam0000000146aeee2c);
              }
              else {
                pfVar28 = (float *)(lVar30 + lVar27 * 0x30);
                fVar59 = *pfVar28;
                fVar79 = pfVar28[1];
                fVar57 = pfVar28[2];
                fVar42 = pfVar28[3];
                pfVar28 = (float *)(lVar30 + 0x10 + lVar27 * 0x30);
                fVar60 = *pfVar28;
                fVar55 = pfVar28[1];
                fVar56 = pfVar28[2];
                fVar58 = pfVar28[3];
                pfVar28 = (float *)(lVar30 + 0x20 + lVar27 * 0x30);
                fVar62 = *pfVar28;
                fVar64 = pfVar28[1];
                fVar66 = pfVar28[2];
                fVar75 = pfVar28[3];
              }
            }
            lVar37 = *param_5;
            pfVar28 = (float *)(lVar37 + lVar27 * 0x30);
            *pfVar28 = fVar59;
            pfVar28[1] = fVar79;
            pfVar28[2] = fVar57;
            pfVar28[3] = fVar42;
            pfVar28 = (float *)(lVar37 + 0x10 + lVar27 * 0x30);
            *pfVar28 = fVar60;
            pfVar28[1] = fVar55;
            pfVar28[2] = fVar56;
            pfVar28[3] = fVar58;
            pfVar28 = (float *)(lVar37 + 0x20 + lVar27 * 0x30);
            *pfVar28 = fVar62;
            pfVar28[1] = fVar64;
            pfVar28[2] = fVar66;
            pfVar28[3] = fVar75;
            local_190 = fVar74;
            if (local_194 != '\0') {
              lVar37 = (longlong)local_198;
              fVar59 = *(float *)((longlong)plVar25 + (lVar37 * 4 + 1) * 4);
              fVar79 = *(float *)((longlong)pvVar21 + lVar37 * 0x10 + 4);
              fVar57 = *(float *)((longlong)pvVar21 + lVar37 * 0x10);
              fVar42 = *(float *)((longlong)pvVar21 + lVar37 * 0x10 + 8);
              fVar60 = *(float *)((longlong)plVar25 + (lVar37 * 4 + 3) * 4);
              if (*(float *)(plVar25 + lVar37 * 2) * fVar57 + fVar59 * fVar79 +
                  *(float *)(plVar25 + lVar37 * 2 + 1) * fVar42 +
                  fVar60 * *(float *)((longlong)pvVar21 + lVar37 * 0x10 + 0xc) < 0.0) {
                fVar56 = -1.0;
                fVar55 = -fVar74;
              }
              else {
                fVar56 = 1.0;
                fVar55 = fVar74;
              }
              fVar56 = fVar56 - fVar55;
              local_190 = 1e-08;
              fVar57 = *(float *)(plVar25 + lVar37 * 2) * fVar74 + fVar57 * fVar56;
              fVar59 = fVar59 * fVar74 + fVar79 * fVar56;
              fStack_160 = *(float *)(plVar25 + lVar37 * 2 + 1) * fVar74 + fVar42 * fVar56;
              fStack_15c = fVar60 * fVar74 +
                           *(float *)((longlong)pvVar21 + lVar37 * 0x10 + 0xc) * fVar56;
              pfVar28 = (float *)(local_120 + lVar37 * 0x10);
              *pfVar28 = fVar57;
              pfVar28[1] = fVar59;
              pfVar28[2] = fStack_160;
              pfVar28[3] = fStack_15c;
              local_168 = (float *)CONCAT44(fVar59,fVar57);
              pfVar28 = (float *)(local_120 + (longlong)local_198 * 0x10);
              fVar74 = *pfVar28;
              fVar59 = pfVar28[1];
              fVar79 = pfVar28[2];
              fVar57 = pfVar28[3];
              auVar46._0_4_ = fVar74 * fVar74 + fVar79 * fVar79;
              auVar46._4_4_ = fVar59 * fVar59 + fVar57 * fVar57;
              auVar46._8_4_ = fVar79 * fVar79 + fVar74 * fVar74;
              auVar46._12_4_ = fVar57 * fVar57 + fVar59 * fVar59;
              fVar58 = auVar46._4_4_ + auVar46._0_4_;
              fVar62 = auVar46._8_4_ + auVar46._4_4_;
              fVar64 = auVar46._12_4_ + auVar46._8_4_;
              fVar66 = auVar46._0_4_ + auVar46._12_4_;
              auVar11._4_4_ = fVar62;
              auVar11._0_4_ = fVar58;
              auVar11._8_4_ = fVar64;
              auVar11._12_4_ = fVar66;
              auVar48 = rsqrtps(auVar46,auVar11);
              fVar42 = auVar48._0_4_;
              fVar60 = auVar48._4_4_;
              fVar55 = auVar48._8_4_;
              fVar56 = auVar48._12_4_;
              in_XMM2._0_4_ = (fVar13 - fVar42 * fVar42 * fVar58 * fVar13) * fVar42 + fVar42;
              in_XMM2._4_4_ = (fVar14 - fVar60 * fVar60 * fVar62 * fVar14) * fVar60 + fVar60;
              in_XMM2._8_4_ = (fVar15 - fVar55 * fVar55 * fVar64 * fVar15) * fVar55 + fVar55;
              in_XMM2._12_4_ = (fVar16 - fVar56 * fVar56 * fVar66 * fVar16) * fVar56 + fVar56;
              uVar80 = ((uint)(((fVar14 - in_XMM2._4_4_ * in_XMM2._4_4_ * fVar62 * fVar14) *
                                in_XMM2._4_4_ + in_XMM2._4_4_) * fVar59) ^
                       (uint)fRam0000000146aeee24) & -(uint)(1e-08 <= fVar62) ^
                       (uint)fRam0000000146aeee24;
              uVar81 = ((uint)(((fVar15 - in_XMM2._8_4_ * in_XMM2._8_4_ * fVar64 * fVar15) *
                                in_XMM2._8_4_ + in_XMM2._8_4_) * fVar79) ^
                       (uint)fRam0000000146aeee28) & -(uint)(1e-08 <= fVar64) ^
                       (uint)fRam0000000146aeee28;
              uVar82 = ((uint)(((fVar16 - in_XMM2._12_4_ * in_XMM2._12_4_ * fVar66 * fVar16) *
                                in_XMM2._12_4_ + in_XMM2._12_4_) * fVar57) ^
                       (uint)fRam0000000146aeee2c) & -(uint)(1e-08 <= fVar66) ^
                       (uint)fRam0000000146aeee2c;
              puVar4 = (uint *)(local_120 + (longlong)local_198 * 0x10);
              *puVar4 = ((uint)(((fVar13 - in_XMM2._0_4_ * in_XMM2._0_4_ * fVar58 * fVar13) *
                                 in_XMM2._0_4_ + in_XMM2._0_4_) * fVar74) ^ (uint)_DAT_146aeee20) &
                        -(uint)(1e-08 <= fVar58) ^ (uint)_DAT_146aeee20;
              puVar4[1] = uVar80;
              puVar4[2] = uVar81;
              puVar4[3] = uVar82;
              goto LAB_142249657;
            }
          }
          else {
            lVar37 = *param_5;
            puVar2 = (undefined8 *)(lVar30 + lVar27 * 0x30);
            uVar20 = puVar2[1];
            puVar3 = (undefined8 *)(lVar37 + lVar27 * 0x30);
            *puVar3 = *puVar2;
            puVar3[1] = uVar20;
            *(undefined1 (*) [16])(lVar37 + 0x10 + lVar27 * 0x30) =
                 *(undefined1 (*) [16])(lVar30 + 0x10 + lVar27 * 0x30);
            puVar2 = (undefined8 *)(lVar30 + 0x20 + lVar27 * 0x30);
            uVar20 = puVar2[1];
            puVar3 = (undefined8 *)(lVar37 + 0x20 + lVar27 * 0x30);
            *puVar3 = *puVar2;
            puVar3[1] = uVar20;
            if (local_194 != '\0') {
              lVar37 = (plVar25 + (longlong)local_198 * 2)[1];
              plVar40 = (longlong *)(local_120 + (longlong)local_198 * 0x10);
              *plVar40 = plVar25[(longlong)local_198 * 2];
              plVar40[1] = lVar37;
LAB_142249657:
              if (local_13c != -1) {
                local_190 = 1e-08;
                pfVar31 = (float *)((longlong)local_13c * 0x10 + local_120);
                fVar60 = -*pfVar31;
                fVar42 = -pfVar31[1];
                fStack_15c = pfVar31[3];
                fStack_160 = -pfVar31[2];
                pfVar28 = (float *)(local_120 + (longlong)local_198 * 0x10);
                fVar74 = *pfVar28;
                fVar59 = pfVar28[1];
                fVar79 = pfVar28[2];
                fVar57 = pfVar28[3];
                local_168 = (float *)(*(ulonglong *)pfVar31 ^ 0x8000000080000000);
                fVar69 = fVar57 * fVar60 * fVar69 + fStack_15c * fVar74 + fVar79 * fVar42 * fVar63 +
                         fVar59 * fStack_160 * fVar50;
                fVar71 = fVar79 * fVar60 * fVar71 + fStack_15c * fVar59 + fVar57 * fVar42 * fVar65 +
                         fVar74 * fStack_160 * fVar52;
                fVar72 = fVar59 * fVar60 * fVar72 + fStack_15c * fVar79 + fVar74 * fVar42 * fVar67 +
                         fVar57 * fStack_160 * fVar54;
                fVar73 = fVar74 * fVar60 * fVar83 + fStack_15c * fVar57 + fVar59 * fVar42 * fVar73 +
                         fVar79 * fStack_160 * fVar61;
                auVar47._0_4_ = fVar69 * fVar69 + fVar72 * fVar72;
                auVar47._4_4_ = fVar71 * fVar71 + fVar73 * fVar73;
                auVar47._8_4_ = fVar72 * fVar72 + fVar69 * fVar69;
                auVar47._12_4_ = fVar73 * fVar73 + fVar71 * fVar71;
                fVar61 = auVar47._4_4_ + auVar47._0_4_;
                fVar63 = auVar47._8_4_ + auVar47._4_4_;
                fVar65 = auVar47._12_4_ + auVar47._8_4_;
                fVar67 = auVar47._0_4_ + auVar47._12_4_;
                auVar9._4_4_ = fVar63;
                auVar9._0_4_ = fVar61;
                auVar9._8_4_ = fVar65;
                auVar9._12_4_ = fVar67;
                auVar48 = rsqrtps(auVar47,auVar9);
                fVar74 = auVar48._0_4_;
                fVar50 = auVar48._4_4_;
                fVar52 = auVar48._8_4_;
                fVar54 = auVar48._12_4_;
                in_XMM2._0_4_ = (fVar13 - fVar74 * fVar74 * fVar61 * fVar13) * fVar74 + fVar74;
                in_XMM2._4_4_ = (fVar14 - fVar50 * fVar50 * fVar63 * fVar14) * fVar50 + fVar50;
                in_XMM2._8_4_ = (fVar15 - fVar52 * fVar52 * fVar65 * fVar15) * fVar52 + fVar52;
                in_XMM2._12_4_ = (fVar16 - fVar54 * fVar54 * fVar67 * fVar16) * fVar54 + fVar54;
                uVar80 = ((uint)(((fVar14 - in_XMM2._4_4_ * in_XMM2._4_4_ * fVar63 * fVar14) *
                                  in_XMM2._4_4_ + in_XMM2._4_4_) * fVar71) ^
                         (uint)fRam0000000146aeee24) & -(uint)(1e-08 <= fVar63) ^
                         (uint)fRam0000000146aeee24;
                uVar81 = ((uint)(((fVar15 - in_XMM2._8_4_ * in_XMM2._8_4_ * fVar65 * fVar15) *
                                  in_XMM2._8_4_ + in_XMM2._8_4_) * fVar72) ^
                         (uint)fRam0000000146aeee28) & -(uint)(1e-08 <= fVar65) ^
                         (uint)fRam0000000146aeee28;
                uVar82 = ((uint)(((fVar16 - in_XMM2._12_4_ * in_XMM2._12_4_ * fVar67 * fVar16) *
                                  in_XMM2._12_4_ + in_XMM2._12_4_) * fVar73) ^
                         (uint)fRam0000000146aeee2c) & -(uint)(1e-08 <= fVar67) ^
                         (uint)fRam0000000146aeee2c;
                puVar4 = (uint *)((longlong)local_198 * 0x30 + *param_5);
                *puVar4 = ((uint)(((fVar13 - in_XMM2._0_4_ * in_XMM2._0_4_ * fVar61 * fVar13) *
                                   in_XMM2._0_4_ + in_XMM2._0_4_) * fVar69) ^ (uint)_DAT_146aeee20)
                          & -(uint)(1e-08 <= fVar61) ^ (uint)_DAT_146aeee20;
                puVar4[1] = uVar80;
                puVar4[2] = uVar81;
                puVar4[3] = uVar82;
              }
            }
          }
        }
        else {
          lVar30 = *param_5;
          puVar2 = (undefined8 *)(lVar37 + lVar27 * 0x30);
          uVar20 = puVar2[1];
          puVar3 = (undefined8 *)(lVar30 + lVar27 * 0x30);
          *puVar3 = *puVar2;
          puVar3[1] = uVar20;
          *(undefined1 (*) [16])(lVar30 + 0x10 + lVar27 * 0x30) =
               *(undefined1 (*) [16])(lVar37 + 0x10 + lVar27 * 0x30);
          puVar2 = (undefined8 *)(lVar37 + 0x20 + lVar27 * 0x30);
          uVar20 = puVar2[1];
          puVar3 = (undefined8 *)(lVar30 + 0x20 + lVar27 * 0x30);
          *puVar3 = *puVar2;
          puVar3[1] = uVar20;
          if (local_194 != '\0') {
            puVar2 = (undefined8 *)((longlong)pvVar21 + (longlong)local_198 * 0x10);
            uVar20 = puVar2[1];
            puVar3 = (undefined8 *)(local_120 + (longlong)local_198 * 0x10);
            *puVar3 = *puVar2;
            puVar3[1] = uVar20;
            goto LAB_142249657;
          }
        }
      }
      else {
        lVar30 = *param_5;
        puVar2 = (undefined8 *)(lVar37 + lVar27 * 0x30);
        uVar20 = puVar2[1];
        puVar3 = (undefined8 *)(lVar30 + lVar27 * 0x30);
        *puVar3 = *puVar2;
        puVar3[1] = uVar20;
        puVar2 = (undefined8 *)(lVar37 + 0x10 + lVar27 * 0x30);
        uVar20 = puVar2[1];
        puVar3 = (undefined8 *)(lVar30 + 0x10 + lVar27 * 0x30);
        *puVar3 = *puVar2;
        puVar3[1] = uVar20;
        puVar2 = (undefined8 *)(lVar37 + 0x20 + lVar27 * 0x30);
        uVar20 = puVar2[1];
        puVar3 = (undefined8 *)(lVar30 + 0x20 + lVar27 * 0x30);
        *puVar3 = *puVar2;
        puVar3[1] = uVar20;
        if (local_194 != '\0') {
          puVar2 = (undefined8 *)((longlong)pvVar21 + (longlong)local_198 * 0x10);
          uVar20 = puVar2[1];
          puVar3 = (undefined8 *)(*param_5 + (longlong)local_198 * 0x30);
          *puVar3 = *puVar2;
          puVar3[1] = uVar20;
        }
        lVar37 = *param_5;
        lVar27 = *(longlong *)(*param_2 + uVar41 * 0x18);
        lVar30 = (longlong)local_198 * 0x30;
        if (fVar74 < 0.99999) {
          pfVar28 = (float *)(lVar27 + lVar30);
          fVar75 = (float)(-(uint)(0.0 <= *pfVar28) &
                           ((uint)(0.0 - _DAT_146aeee20) ^ (uint)_DAT_146aeee20) ^
                          (uint)(0.0 - _DAT_146aeee20)) * (_DAT_146aeee50 - local_190) +
                   *pfVar28 * local_190;
          fVar76 = (float)(-(uint)(0.0 <= pfVar28[1]) &
                           ((uint)(0.0 - fRam0000000146aeee24) ^ (uint)fRam0000000146aeee24) ^
                          (uint)(0.0 - fRam0000000146aeee24)) * (fRam0000000146aeee54 - local_190) +
                   pfVar28[1] * local_190;
          fVar77 = (float)(-(uint)(0.0 <= pfVar28[2]) &
                           ((uint)(0.0 - fRam0000000146aeee28) ^ (uint)fRam0000000146aeee28) ^
                          (uint)(0.0 - fRam0000000146aeee28)) * (fRam0000000146aeee58 - local_190) +
                   pfVar28[2] * local_190;
          fVar78 = (float)(-(uint)(0.0 <= pfVar28[3]) &
                           ((uint)(0.0 - fRam0000000146aeee2c) ^ (uint)fRam0000000146aeee2c) ^
                          (uint)(0.0 - fRam0000000146aeee2c)) * (fRam0000000146aeee5c - local_190) +
                   pfVar28[3] * local_190;
          auVar43._0_4_ = fVar75 * fVar75 + fVar77 * fVar77;
          auVar43._4_4_ = fVar76 * fVar76 + fVar78 * fVar78;
          auVar43._8_4_ = fVar77 * fVar77 + fVar75 * fVar75;
          auVar43._12_4_ = fVar78 * fVar78 + fVar76 * fVar76;
          fVar58 = auVar43._4_4_ + auVar43._0_4_;
          fVar62 = auVar43._8_4_ + auVar43._4_4_;
          fVar64 = auVar43._12_4_ + auVar43._8_4_;
          fVar66 = auVar43._0_4_ + auVar43._12_4_;
          auVar10._4_4_ = fVar62;
          auVar10._0_4_ = fVar58;
          auVar10._8_4_ = fVar64;
          auVar10._12_4_ = fVar66;
          auVar48 = rsqrtps(auVar43,auVar10);
          fVar42 = auVar48._0_4_;
          fVar60 = auVar48._4_4_;
          fVar55 = auVar48._8_4_;
          fVar56 = auVar48._12_4_;
          fVar42 = (fVar13 - fVar42 * fVar42 * fVar58 * fVar13) * fVar42 + fVar42;
          fVar60 = (fVar14 - fVar60 * fVar60 * fVar62 * fVar14) * fVar60 + fVar60;
          fVar55 = (fVar15 - fVar55 * fVar55 * fVar64 * fVar15) * fVar55 + fVar55;
          fVar56 = (fVar16 - fVar56 * fVar56 * fVar66 * fVar16) * fVar56 + fVar56;
          pfVar28 = (float *)(lVar37 + lVar30);
          fVar74 = *pfVar28;
          fVar59 = pfVar28[1];
          fVar79 = pfVar28[2];
          fVar57 = pfVar28[3];
          fVar42 = (float)(((uint)(((fVar13 - fVar42 * fVar42 * fVar58 * fVar13) * fVar42 + fVar42)
                                  * fVar75) ^ (uint)_DAT_146aeee20) &
                           -(uint)(_DAT_146aeee40 <= fVar58) ^ (uint)_DAT_146aeee20);
          fVar60 = (float)(((uint)(((fVar14 - fVar60 * fVar60 * fVar62 * fVar14) * fVar60 + fVar60)
                                  * fVar76) ^ (uint)fRam0000000146aeee24) &
                           -(uint)(fRam0000000146aeee44 <= fVar62) ^ (uint)fRam0000000146aeee24);
          fVar55 = (float)(((uint)(((fVar15 - fVar55 * fVar55 * fVar64 * fVar15) * fVar55 + fVar55)
                                  * fVar77) ^ (uint)fRam0000000146aeee28) &
                           -(uint)(fRam0000000146aeee48 <= fVar64) ^ (uint)fRam0000000146aeee28);
          fVar56 = (float)(((uint)(((fVar16 - fVar56 * fVar56 * fVar66 * fVar16) * fVar56 + fVar56)
                                  * fVar78) ^ (uint)fRam0000000146aeee2c) &
                           -(uint)(fRam0000000146aeee4c <= fVar66) ^ (uint)fRam0000000146aeee2c);
          in_XMM2._0_4_ = fVar59 * fVar55 * fVar50;
          in_XMM2._4_4_ = fVar74 * fVar55 * fVar52;
          in_XMM2._8_4_ = fVar57 * fVar55 * fVar54;
          in_XMM2._12_4_ = fVar79 * fVar55 * fVar61;
          pfVar28 = (float *)(lVar37 + lVar30);
          *pfVar28 = fVar57 * fVar42 * fVar69 + fVar56 * fVar74 + fVar79 * fVar60 * fVar63 +
                     in_XMM2._0_4_;
          pfVar28[1] = fVar79 * fVar42 * fVar71 + fVar56 * fVar59 + fVar57 * fVar60 * fVar65 +
                       in_XMM2._4_4_;
          pfVar28[2] = fVar59 * fVar42 * fVar72 + fVar56 * fVar79 + fVar74 * fVar60 * fVar67 +
                       in_XMM2._8_4_;
          pfVar28[3] = fVar74 * fVar42 * fVar83 + fVar56 * fVar57 + fVar59 * fVar60 * fVar73 +
                       in_XMM2._12_4_;
          pfVar28 = (float *)(lVar27 + 0x20 + lVar30);
          fVar74 = *pfVar28;
          fVar59 = pfVar28[1];
          fVar79 = pfVar28[2];
          fVar57 = pfVar28[3];
          pfVar28 = (float *)(lVar27 + 0x10 + lVar30);
          pfVar31 = (float *)(lVar37 + 0x10 + lVar30);
          auVar44._0_4_ = *pfVar28 * local_190 + *pfVar31;
          auVar44._4_4_ = pfVar28[1] * local_190 + pfVar31[1];
          auVar44._8_4_ = pfVar28[2] * local_190 + pfVar31[2];
          auVar44._12_4_ = pfVar28[3] * local_190 + pfVar31[3];
          pfVar28 = (float *)(lVar37 + 0x20 + lVar30);
          fVar42 = pfVar28[1];
          fVar60 = pfVar28[2];
          fVar55 = pfVar28[3];
          *(undefined1 (*) [16])(lVar37 + 0x10 + lVar30) = auVar44;
          pfVar31 = (float *)(lVar37 + 0x20 + lVar30);
          *pfVar31 = (fVar74 * local_190 + 1.0) * *pfVar28;
          pfVar31[1] = (fVar59 * local_190 + 1.0) * fVar42;
          pfVar31[2] = (fVar79 * local_190 + 1.0) * fVar60;
          pfVar31[3] = (fVar57 * local_190 + 0.0) * fVar55;
        }
        else {
          pfVar28 = (float *)(lVar27 + lVar30);
          pfVar31 = (float *)(lVar27 + 0x20 + lVar30);
          fVar74 = *pfVar31;
          fVar59 = pfVar31[1];
          fVar79 = pfVar31[2];
          fVar57 = pfVar31[3];
          pfVar31 = (float *)(lVar27 + 0x10 + lVar30);
          fVar42 = *pfVar31;
          fVar60 = pfVar31[1];
          fVar55 = pfVar31[2];
          fVar56 = pfVar31[3];
          fVar58 = *pfVar28 * local_190;
          fVar62 = pfVar28[1] * local_190;
          fVar64 = pfVar28[2] * local_190;
          fVar66 = pfVar28[3] * local_190;
          auVar8._4_4_ = -(uint)(fVar66 * fVar66 < fRam0000000146aeeea4);
          auVar8._0_4_ = -(uint)(fVar66 * fVar66 < _DAT_146aeeea0);
          auVar8._8_4_ = -(uint)(fVar66 * fVar66 < fRam0000000146aeeea8);
          auVar8._12_4_ = -(uint)(fVar66 * fVar66 < fRam0000000146aeeeac);
          iVar23 = movmskps(local_198,auVar8);
          if (iVar23 != 0) {
            pfVar28 = (float *)(lVar37 + lVar30);
            fVar75 = *pfVar28;
            fVar76 = pfVar28[1];
            fVar77 = pfVar28[2];
            fVar78 = pfVar28[3];
            in_XMM2._0_4_ = fVar76 * fVar64 * fVar50;
            in_XMM2._4_4_ = fVar75 * fVar64 * fVar52;
            in_XMM2._8_4_ = fVar78 * fVar64 * fVar54;
            in_XMM2._12_4_ = fVar77 * fVar64 * fVar61;
            pfVar28 = (float *)(lVar37 + lVar30);
            *pfVar28 = fVar78 * fVar58 * fVar69 + fVar75 * fVar66 + fVar77 * fVar62 * fVar63 +
                       in_XMM2._0_4_;
            pfVar28[1] = fVar77 * fVar58 * fVar71 + fVar76 * fVar66 + fVar78 * fVar62 * fVar65 +
                         in_XMM2._4_4_;
            pfVar28[2] = fVar76 * fVar58 * fVar72 + fVar77 * fVar66 + fVar75 * fVar62 * fVar67 +
                         in_XMM2._8_4_;
            pfVar28[3] = fVar75 * fVar58 * fVar83 + fVar78 * fVar66 + fVar76 * fVar62 * fVar73 +
                         in_XMM2._12_4_;
          }
          pfVar28 = (float *)(lVar37 + 0x10 + lVar30);
          fVar58 = pfVar28[1];
          fVar62 = pfVar28[2];
          fVar64 = pfVar28[3];
          pfVar31 = (float *)(lVar37 + 0x20 + lVar30);
          fVar66 = *pfVar31;
          fVar75 = pfVar31[1];
          fVar76 = pfVar31[2];
          fVar77 = pfVar31[3];
          pfVar31 = (float *)(lVar37 + 0x10 + lVar30);
          *pfVar31 = fVar42 * local_190 + *pfVar28;
          pfVar31[1] = fVar60 * local_190 + fVar58;
          pfVar31[2] = fVar55 * local_190 + fVar62;
          pfVar31[3] = fVar56 * local_190 + fVar64;
          pfVar28 = (float *)(lVar37 + 0x20 + lVar30);
          *pfVar28 = (fVar74 * local_190 + 1.0) * fVar66;
          pfVar28[1] = (fVar59 * local_190 + 1.0) * fVar75;
          pfVar28[2] = (fVar79 * local_190 + 1.0) * fVar76;
          pfVar28[3] = (fVar57 * local_190 + 0.0) * fVar77;
        }
        if (local_194 != '\0') {
          puVar2 = (undefined8 *)((longlong)local_198 * 0x30 + *param_5);
          uVar20 = puVar2[1];
          puVar3 = (undefined8 *)(local_120 + (longlong)local_198 * 0x10);
          *puVar3 = *puVar2;
          puVar3[1] = uVar20;
          goto LAB_142249657;
        }
      }
      local_158 = iVar35 + 1;
      plVar40 = local_130;
    } while (local_158 != iVar36);
  }
  pfVar28 = (float *)0x0;
  fVar74 = (float)(local_138 + 1);
  local_180 = (longlong *)0x0;
  local_178 = local_178 & 0xffffffff;
  local_168 = (float *)0x0;
  fStack_15c = 0.0;
  if ((int)fVar74 < 1) {
    pfVar31 = pfVar28;
    if (-1 < (int)fVar74) goto LAB_142249852;
    if (fVar74 != 0.0) {
      local_178 = (ulonglong)(uint)fVar74;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_180);
      goto LAB_14224984d;
    }
  }
  else {
    local_178 = (ulonglong)(uint)fVar74;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_180,0);
LAB_14224984d:
    pfVar31 = (float *)(local_178 & 0xffffffff);
LAB_142249852:
    iVar36 = (int)pfVar31;
    if (0 < (int)fVar74) {
      fStack_160 = fVar74;
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_168,0);
      pfVar28 = local_168;
      fVar50 = fStack_160;
      goto LAB_142249885;
    }
  }
  iVar36 = (int)pfVar31;
  fVar50 = 0.0;
  if (((int)fVar74 < 0) && (pfVar28 = (float *)0x0, fVar74 != 0.0)) {
    fStack_160 = fVar74;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_168);
    pfVar28 = local_168;
    fVar50 = fStack_160;
  }
LAB_142249885:
  plVar39 = local_180;
  iVar35 = 0;
  *pfVar28 = 1.0;
  *local_180 = param_3;
  lVar37 = 0;
  if (3 < local_108) {
    iVar23 = 2;
    lVar27 = (local_108 - 4U >> 2) + 1;
    lVar37 = lVar27 * 4;
    puVar32 = (undefined4 *)((longlong)local_150 + 4);
    plVar33 = local_180 + 2;
    do {
      lVar30 = (longlong)iVar35;
      puVar1 = puVar32 + 4;
      iVar35 = iVar35 + 4;
      plVar33[-1] = lVar30 * 0x20 + *param_4;
      *(undefined4 *)((longlong)pfVar28 + (-0x10 - (longlong)local_150) + (longlong)puVar1) =
           puVar32[-1];
      *(undefined4 *)((longlong)pfVar28 + (-0xc - (longlong)local_150) + (longlong)puVar1) =
           *puVar32;
      *plVar33 = (longlong)(iVar23 + -1) * 0x20 + *param_4;
      plVar33[1] = (longlong)iVar23 * 0x20 + *param_4;
      *(undefined4 *)((longlong)pfVar28 + (-8 - (longlong)local_150) + (longlong)puVar1) =
           puVar32[1];
      iVar24 = iVar23 + 1;
      iVar23 = iVar23 + 4;
      uVar7 = puVar32[2];
      plVar33[2] = (longlong)iVar24 * 0x20 + *param_4;
      *(undefined4 *)((longlong)pfVar28 + (-4 - (longlong)local_150) + (longlong)puVar1) = uVar7;
      lVar27 = lVar27 + -1;
      puVar32 = puVar1;
      plVar33 = plVar33 + 4;
      plVar40 = local_130;
    } while (lVar27 != 0);
  }
  if (lVar37 < local_108) {
    lVar27 = local_108 - lVar37;
    puVar32 = (undefined4 *)((longlong)local_150 + lVar37 * 4);
    plVar33 = local_180 + lVar37 + 1;
    do {
      lVar37 = (longlong)iVar35;
      iVar35 = iVar35 + 1;
      *plVar33 = lVar37 * 0x20 + *param_4;
      *(undefined4 *)((longlong)puVar32 + (longlong)pfVar28 + (4 - (longlong)local_150)) = *puVar32;
      puVar32 = puVar32 + 1;
      lVar27 = lVar27 + -1;
      plVar33 = plVar33 + 1;
    } while (lVar27 != 0);
  }
  if (0 < iVar36) {
    if (*param_8 == '\x02') {
      FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_6,*local_180);
      if (1 < iVar36) {
        uVar41 = (ulonglong)(iVar36 - 1);
        pfVar31 = pfVar28;
        do {
          plVar39 = plVar39 + 1;
          pfVar31 = pfVar31 + 1;
          fVar84 = *pfVar31;
          plVar33 = (longlong *)*plVar39;
          if ((1e-05 < fVar84) && (iVar36 = 0, 0 < (int)param_6[1])) {
            lVar37 = *plVar33;
            lVar27 = 0;
            do {
              if ((*(char *)(*param_6 + 4 + lVar27) == '\0') &&
                 (*(char *)(lVar27 + 4 + lVar37) == '\0')) {
                uVar22 = 0;
              }
              else {
                uVar22 = 1;
              }
              *(undefined1 *)(*param_6 + 4 + lVar27) = uVar22;
              iVar36 = iVar36 + 1;
              lVar37 = *plVar33;
              *(float *)(*param_6 + lVar27) =
                   fVar84 * *(float *)(lVar27 + lVar37) + *(float *)(*param_6 + lVar27);
              lVar27 = lVar27 + 8;
            } while (iVar36 < (int)param_6[1]);
          }
          uVar41 = uVar41 - 1;
        } while (uVar41 != 0);
      }
    }
    else if (*param_8 == '\x01') {
      uVar41 = 0;
      uVar38 = (ulonglong)((longlong)(pfVar28 + (int)fVar50) + (3 - (longlong)pfVar28)) >> 2;
      if (pfVar28 + (int)fVar50 < pfVar28) {
        uVar38 = uVar41;
      }
      if (uVar38 != 0) {
        pfVar31 = pfVar28;
        if (7 < uVar38) {
          fVar84 = 0.0;
          fVar74 = 0.0;
          fVar52 = 0.0;
          fVar54 = 0.0;
          auVar48 = ZEXT816(0);
          do {
            uVar41 = uVar41 + 8;
            fVar84 = fVar84 + *pfVar31;
            fVar74 = fVar74 + pfVar31[1];
            fVar52 = fVar52 + pfVar31[2];
            fVar54 = fVar54 + pfVar31[3];
            pfVar29 = pfVar31 + 4;
            pfVar5 = pfVar31 + 5;
            pfVar6 = pfVar31 + 6;
            pfVar19 = pfVar31 + 7;
            pfVar31 = pfVar31 + 8;
            in_XMM2._0_4_ = auVar48._0_4_ + *pfVar29;
            in_XMM2._4_4_ = auVar48._4_4_ + *pfVar5;
            in_XMM2._8_4_ = auVar48._8_4_ + *pfVar6;
            in_XMM2._12_4_ = auVar48._12_4_ + *pfVar19;
            auVar48 = in_XMM2;
          } while (uVar41 != (uVar38 & 0xfffffffffffffff8));
          fVar84 = fVar52 + in_XMM2._8_4_ + fVar84 + in_XMM2._0_4_ +
                   fVar54 + in_XMM2._12_4_ + fVar74 + in_XMM2._4_4_;
        }
        for (; uVar41 != uVar38; uVar41 = uVar41 + 1) {
          fVar84 = fVar84 + *pfVar31;
          pfVar31 = pfVar31 + 1;
        }
      }
      if (fVar84 <= 1e-05) {
        FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_6,*local_180);
        if (1 < iVar36) {
          uVar41 = (ulonglong)(iVar36 - 1);
          pfVar31 = pfVar28;
          do {
            plVar39 = plVar39 + 1;
            pfVar31 = pfVar31 + 1;
            fVar84 = *pfVar31;
            plVar40 = (longlong *)*plVar39;
            if ((1e-05 < fVar84) && (0 < (int)param_6[1])) {
              lVar37 = *plVar40;
              uVar38 = 0;
              uVar34 = 0;
              do {
                if ((*(char *)(uVar38 + 4 + *param_6) == '\0') &&
                   (*(char *)(uVar38 + 4 + lVar37) == '\0')) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = 1;
                }
                *(undefined1 *)(uVar38 + 4 + *param_6) = uVar22;
                uVar80 = (int)uVar34 + 1;
                uVar34 = (ulonglong)uVar80;
                lVar37 = *plVar40;
                *(float *)(uVar38 + *param_6) =
                     fVar84 * *(float *)(uVar38 + lVar37) + *(float *)(uVar38 + *param_6);
                uVar38 = uVar38 + 8;
              } while ((int)uVar80 < (int)param_6[1]);
            }
            uVar41 = uVar41 - 1;
            plVar40 = local_130;
          } while (uVar41 != 0);
        }
      }
      else {
        local_168 = (float *)0x0;
        fStack_15c = 0.0;
        fStack_160 = fVar50;
        if (0 < (int)fVar50) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_168,0);
        }
        pfVar31 = local_168;
        uVar41 = 0;
        uVar80 = 0;
        if (0 < (int)fVar50) {
          if ((0xf < (uint)fVar50) &&
             ((pfVar28 + (int)((int)fVar50 - 1U) < local_168 ||
              (local_168 + (int)((int)fVar50 - 1U) < pfVar28)))) {
            uVar81 = (uint)fVar50 & 0x8000000f;
            if ((int)uVar81 < 0) {
              uVar81 = (uVar81 - 1 | 0xfffffff0) + 1;
            }
            auVar12._4_4_ = fVar84;
            auVar12._0_4_ = fVar84;
            auVar12._8_4_ = fVar84;
            auVar12._12_4_ = fVar84;
            auVar48 = rcpps(in_XMM2,auVar12);
            lVar37 = (longlong)pfVar28 - (longlong)local_168;
            fVar74 = auVar48._0_4_;
            fVar52 = auVar48._4_4_;
            fVar54 = auVar48._8_4_;
            fVar61 = auVar48._12_4_;
            fVar74 = (fVar74 + fVar74) - fVar74 * fVar74 * fVar84;
            fVar52 = (fVar52 + fVar52) - fVar52 * fVar52 * fVar84;
            fVar54 = (fVar54 + fVar54) - fVar54 * fVar54 * fVar84;
            fVar61 = (fVar61 + fVar61) - fVar61 * fVar61 * fVar84;
            pfVar29 = local_168 + 4;
            uVar38 = uVar41;
            do {
              pfVar6 = (float *)(lVar37 + -0x10 + (longlong)pfVar29);
              fVar63 = pfVar6[1];
              fVar65 = pfVar6[2];
              fVar67 = pfVar6[3];
              uVar80 = (int)uVar41 + 0x10;
              uVar41 = (ulonglong)uVar80;
              uVar38 = uVar38 + 0x10;
              pfVar5 = (float *)(lVar37 + (longlong)pfVar29);
              fVar73 = *pfVar5;
              fVar69 = pfVar5[1];
              fVar71 = pfVar5[2];
              fVar72 = pfVar5[3];
              pfVar5 = pfVar29 + 0x10;
              pfVar29[-4] = *pfVar6 * fVar74;
              pfVar29[-3] = fVar63 * fVar52;
              pfVar29[-2] = fVar65 * fVar54;
              pfVar29[-1] = fVar67 * fVar61;
              pfVar6 = (float *)(lVar37 + -0x30 + (longlong)pfVar5);
              fVar63 = *pfVar6;
              fVar65 = pfVar6[1];
              fVar67 = pfVar6[2];
              fVar83 = pfVar6[3];
              *pfVar29 = fVar73 * fVar74;
              pfVar29[1] = fVar69 * fVar52;
              pfVar29[2] = fVar71 * fVar54;
              pfVar29[3] = fVar72 * fVar61;
              pfVar6 = (float *)(lVar37 + -0x20 + (longlong)pfVar5);
              fVar73 = *pfVar6;
              fVar69 = pfVar6[1];
              fVar71 = pfVar6[2];
              fVar72 = pfVar6[3];
              pfVar29[4] = fVar63 * fVar74;
              pfVar29[5] = fVar65 * fVar52;
              pfVar29[6] = fVar67 * fVar54;
              pfVar29[7] = fVar83 * fVar61;
              pfVar29[8] = fVar73 * fVar74;
              pfVar29[9] = fVar69 * fVar52;
              pfVar29[10] = fVar71 * fVar54;
              pfVar29[0xb] = fVar72 * fVar61;
              pfVar29 = pfVar5;
            } while ((longlong)uVar38 < (longlong)(int)((int)fVar50 - uVar81));
          }
          if ((int)uVar80 < (int)fVar50) {
            uVar41 = (ulonglong)((int)fVar50 - uVar80);
            pfVar29 = local_168 + (int)uVar80;
            do {
              *pfVar29 = (1.0 / fVar84) *
                         *(float *)((longlong)pfVar29 + ((longlong)pfVar28 - (longlong)local_168));
              uVar41 = uVar41 - 1;
              pfVar29 = pfVar29 + 1;
            } while (uVar41 != 0);
          }
        }
        FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_6,*local_180);
        pfVar29 = pfVar31;
        if (1 < iVar36) {
          uVar41 = (ulonglong)(iVar36 - 1);
          plVar39 = local_180;
          do {
            plVar39 = plVar39 + 1;
            pfVar31 = pfVar31 + 1;
            fVar84 = *pfVar31;
            plVar40 = (longlong *)*plVar39;
            if ((1e-05 < fVar84) && (0 < (int)param_6[1])) {
              lVar37 = *plVar40;
              uVar38 = 0;
              uVar34 = 0;
              do {
                if ((*(char *)(uVar38 + 4 + *param_6) == '\0') &&
                   (*(char *)(uVar38 + 4 + lVar37) == '\0')) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = 1;
                }
                *(undefined1 *)(uVar38 + 4 + *param_6) = uVar22;
                uVar80 = (int)uVar34 + 1;
                uVar34 = (ulonglong)uVar80;
                lVar37 = *plVar40;
                *(float *)(uVar38 + *param_6) =
                     fVar84 * *(float *)(uVar38 + lVar37) + *(float *)(uVar38 + *param_6);
                uVar38 = uVar38 + 8;
              } while ((int)uVar80 < (int)param_6[1]);
            }
            uVar41 = uVar41 - 1;
            pfVar29 = local_168;
            plVar40 = local_130;
          } while (uVar41 != 0);
        }
        FMemory::Free(pfVar29);
      }
    }
    else {
      FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_6,*local_180);
      if (1 < iVar36) {
        uVar41 = (ulonglong)(iVar36 - 1);
        do {
          uVar34 = 0;
          plVar39 = plVar39 + 1;
          plVar33 = (longlong *)*plVar39;
          uVar38 = uVar34;
          if (0 < (int)plVar33[1]) {
            do {
              if (*(char *)(uVar34 + 4 + *plVar33) != '\0') {
                *(undefined1 *)(uVar34 + 4 + *param_6) = 1;
                *(undefined4 *)(uVar34 + *param_6) = *(undefined4 *)(uVar34 + *plVar33);
              }
              uVar80 = (int)uVar38 + 1;
              uVar34 = uVar34 + 8;
              uVar38 = (ulonglong)uVar80;
            } while ((int)uVar80 < (int)plVar33[1]);
          }
          uVar41 = uVar41 - 1;
        } while (uVar41 != 0);
      }
    }
  }
  FMemory::Free(pfVar28);
  FMemory::Free(local_180);
  if (local_150 != (void *)0x0) {
    FMemory::Free(local_150);
  }
  if (plVar40 != (longlong *)0x0) {
    FMemory::Free(plVar40);
  }
  if (plVar25 != (longlong *)0x0) {
    FMemory::Free(plVar25);
  }
  if (local_120 != 0) {
    FMemory::Free(local_120);
  }
  if (pvVar21 != (void *)0x0) {
    FMemory::Free(pvVar21);
  }
  return;
}



// FUNCTION 142249f10 FUN_142249f10 body=614 status=ok
// SIG undefined FUN_142249f10(void)

void FUN_142249f10(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  float *pfVar14;
  longlong lVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  plVar16 = (longlong *)*param_1;
  pfVar14 = (float *)*param_3;
  fVar4 = *pfVar14;
  if (*(uint *)(plVar16 + 1) != 0) {
    uVar13 = (ulonglong)*(uint *)(plVar16 + 1);
    lVar15 = 0;
    do {
      lVar11 = *plVar16;
      lVar5 = *param_4;
      pfVar1 = (float *)(lVar15 + lVar11);
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(lVar15 + 0x10 + lVar11);
      fVar17 = *pfVar2;
      fVar18 = pfVar2[1];
      fVar19 = pfVar2[2];
      fVar20 = pfVar2[3];
      pfVar2 = (float *)(lVar15 + 0x20 + lVar11);
      fVar21 = *pfVar2;
      fVar22 = pfVar2[1];
      fVar23 = pfVar2[2];
      fVar24 = pfVar2[3];
      pfVar2 = (float *)(lVar15 + lVar5);
      *pfVar2 = *pfVar1 * fVar4;
      pfVar2[1] = fVar7 * fVar4;
      pfVar2[2] = fVar8 * fVar4;
      pfVar2[3] = fVar9 * fVar4;
      pfVar1 = (float *)(lVar15 + 0x10 + lVar5);
      *pfVar1 = fVar17 * fVar4;
      pfVar1[1] = fVar18 * fVar4;
      pfVar1[2] = fVar19 * fVar4;
      pfVar1[3] = fVar20 * fVar4;
      pfVar1 = (float *)(lVar15 + 0x20 + lVar5);
      *pfVar1 = fVar21 * fVar4;
      pfVar1[1] = fVar22 * fVar4;
      pfVar1[2] = fVar23 * fVar4;
      pfVar1[3] = fVar24 * fVar4;
      uVar13 = uVar13 - 1;
      lVar15 = lVar15 + 0x30;
    } while (uVar13 != 0);
  }
  iVar12 = (int)param_1[1];
  if (1 < (longlong)iVar12) {
    lVar15 = (longlong)iVar12 + -1;
    do {
      pfVar14 = pfVar14 + 1;
      fVar4 = *pfVar14;
      if (*(uint *)(plVar16 + 4) != 0) {
        lVar11 = 0;
        uVar13 = (ulonglong)*(uint *)(plVar16 + 4);
        do {
          lVar5 = *param_4;
          lVar6 = plVar16[3];
          pfVar1 = (float *)(lVar11 + lVar5);
          pfVar2 = (float *)(lVar11 + lVar6);
          fVar21 = *pfVar2 * fVar4;
          fVar22 = pfVar2[1] * fVar4;
          fVar23 = pfVar2[2] * fVar4;
          fVar24 = pfVar2[3] * fVar4;
          fVar17 = *pfVar1 * fVar21 + pfVar1[2] * fVar23;
          fVar18 = pfVar1[1] * fVar22 + pfVar1[3] * fVar24;
          fVar19 = pfVar1[2] * fVar23 + *pfVar1 * fVar21;
          fVar20 = pfVar1[3] * fVar24 + pfVar1[1] * fVar22;
          pfVar1 = (float *)(lVar11 + lVar5);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar11 + lVar5);
          *pfVar2 = (float)(-(uint)(0.0 <= fVar18 + fVar17) & ((uint)(0.0 - fVar21) ^ (uint)fVar21)
                           ^ (uint)(0.0 - fVar21)) + *pfVar1;
          pfVar2[1] = (float)(-(uint)(0.0 <= fVar19 + fVar18) &
                              ((uint)(0.0 - fVar22) ^ (uint)fVar22) ^ (uint)(0.0 - fVar22)) + fVar7;
          pfVar2[2] = (float)(-(uint)(0.0 <= fVar20 + fVar19) &
                              ((uint)(0.0 - fVar23) ^ (uint)fVar23) ^ (uint)(0.0 - fVar23)) + fVar8;
          pfVar2[3] = (float)(-(uint)(0.0 <= fVar17 + fVar20) &
                              ((uint)(0.0 - fVar24) ^ (uint)fVar24) ^ (uint)(0.0 - fVar24)) + fVar9;
          pfVar1 = (float *)(lVar11 + 0x10 + lVar6);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar11 + 0x10 + lVar5);
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar3 = (float *)(lVar11 + 0x10 + lVar5);
          *pfVar3 = *pfVar1 * fVar4 + *pfVar2;
          pfVar3[1] = fVar7 * fVar4 + fVar17;
          pfVar3[2] = fVar8 * fVar4 + fVar18;
          pfVar3[3] = fVar9 * fVar4 + fVar19;
          pfVar1 = (float *)(lVar11 + 0x20 + lVar6);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          pfVar2 = (float *)(lVar11 + 0x20 + lVar5);
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar3 = (float *)(lVar11 + 0x20 + lVar5);
          *pfVar3 = *pfVar1 * fVar4 + *pfVar2;
          pfVar3[1] = fVar7 * fVar4 + fVar17;
          pfVar3[2] = fVar8 * fVar4 + fVar18;
          pfVar3[3] = fVar9 * fVar4 + fVar19;
          lVar11 = lVar11 + 0x30;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      lVar15 = lVar15 + -1;
      plVar16 = plVar16 + 3;
    } while (lVar15 != 0);
  }
  if (1 < iVar12) {
    FUN_141fac440(param_4);
  }
  if (0 < *(int *)(param_2 + 1)) {
    plVar16 = (longlong *)*param_2;
    iVar12 = (int)param_2[1];
    pfVar14 = (float *)*param_3;
    if ((0 < iVar12) &&
       (FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_5,plVar16,*pfVar14), 1 < iVar12))
    {
      uVar13 = (ulonglong)(iVar12 - 1);
      do {
        pfVar14 = pfVar14 + 1;
        plVar16 = plVar16 + 4;
        fVar4 = *pfVar14;
        if ((1e-05 < fVar4) && (iVar12 = 0, 0 < (int)param_5[1])) {
          lVar15 = *plVar16;
          lVar11 = 0;
          do {
            if ((*(char *)(*param_5 + 4 + lVar11) == '\0') &&
               (*(char *)(lVar15 + 4 + lVar11) == '\0')) {
              uVar10 = 0;
            }
            else {
              uVar10 = 1;
            }
            *(undefined1 *)(*param_5 + 4 + lVar11) = uVar10;
            iVar12 = iVar12 + 1;
            lVar15 = *plVar16;
            *(float *)(*param_5 + lVar11) =
                 fVar4 * *(float *)(lVar15 + lVar11) + *(float *)(*param_5 + lVar11);
            lVar11 = lVar11 + 8;
          } while (iVar12 < (int)param_5[1]);
        }
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return;
}



// FUNCTION 14224a180 FUN_14224a180 body=682 status=ok
// SIG undefined FUN_14224a180(void)

void FUN_14224a180(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong lVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar5 = *param_3;
  piVar15 = (int *)*param_4;
  plVar17 = (longlong *)*param_1;
  fVar4 = *(float *)(lVar5 + (longlong)*piVar15 * 4);
  if (*(uint *)(plVar17 + 1) != 0) {
    uVar14 = (ulonglong)*(uint *)(plVar17 + 1);
    lVar16 = 0;
    do {
      lVar12 = *plVar17;
      lVar6 = *param_5;
      pfVar1 = (float *)(lVar16 + 0x10 + lVar12);
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar18 = pfVar1[3];
      pfVar1 = (float *)(lVar16 + 0x20 + lVar12);
      fVar19 = *pfVar1;
      fVar20 = pfVar1[1];
      fVar21 = pfVar1[2];
      fVar22 = pfVar1[3];
      pfVar1 = (float *)(lVar16 + lVar12);
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar25 = pfVar1[3];
      pfVar2 = (float *)(lVar16 + lVar6);
      *pfVar2 = fVar4 * *pfVar1;
      pfVar2[1] = fVar4 * fVar23;
      pfVar2[2] = fVar4 * fVar24;
      pfVar2[3] = fVar4 * fVar25;
      pfVar1 = (float *)(lVar16 + 0x10 + lVar6);
      *pfVar1 = fVar8 * fVar4;
      pfVar1[1] = fVar9 * fVar4;
      pfVar1[2] = fVar10 * fVar4;
      pfVar1[3] = fVar18 * fVar4;
      pfVar1 = (float *)(lVar16 + 0x20 + lVar6);
      *pfVar1 = fVar19 * fVar4;
      pfVar1[1] = fVar20 * fVar4;
      pfVar1[2] = fVar21 * fVar4;
      pfVar1[3] = fVar22 * fVar4;
      uVar14 = uVar14 - 1;
      lVar16 = lVar16 + 0x30;
    } while (uVar14 != 0);
  }
  iVar13 = (int)param_1[1];
  if (1 < (longlong)iVar13) {
    lVar16 = (longlong)iVar13 + -1;
    do {
      piVar15 = piVar15 + 1;
      fVar4 = *(float *)(lVar5 + (longlong)*piVar15 * 4);
      if (*(uint *)(plVar17 + 4) != 0) {
        lVar12 = 0;
        uVar14 = (ulonglong)*(uint *)(plVar17 + 4);
        do {
          lVar6 = *param_5;
          lVar7 = plVar17[3];
          pfVar1 = (float *)(lVar12 + lVar6);
          pfVar2 = (float *)(lVar12 + lVar7);
          fVar22 = fVar4 * *pfVar2;
          fVar23 = fVar4 * pfVar2[1];
          fVar24 = fVar4 * pfVar2[2];
          fVar25 = fVar4 * pfVar2[3];
          fVar18 = *pfVar1 * fVar22 + pfVar1[2] * fVar24;
          fVar19 = pfVar1[1] * fVar23 + pfVar1[3] * fVar25;
          fVar20 = pfVar1[2] * fVar24 + *pfVar1 * fVar22;
          fVar21 = pfVar1[3] * fVar25 + pfVar1[1] * fVar23;
          pfVar1 = (float *)(lVar12 + lVar6);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(lVar12 + lVar6);
          *pfVar2 = (float)(-(uint)(0.0 <= fVar19 + fVar18) & ((uint)(0.0 - fVar22) ^ (uint)fVar22)
                           ^ (uint)(0.0 - fVar22)) + *pfVar1;
          pfVar2[1] = (float)(-(uint)(0.0 <= fVar20 + fVar19) &
                              ((uint)(0.0 - fVar23) ^ (uint)fVar23) ^ (uint)(0.0 - fVar23)) + fVar8;
          pfVar2[2] = (float)(-(uint)(0.0 <= fVar21 + fVar20) &
                              ((uint)(0.0 - fVar24) ^ (uint)fVar24) ^ (uint)(0.0 - fVar24)) + fVar9;
          pfVar2[3] = (float)(-(uint)(0.0 <= fVar18 + fVar21) &
                              ((uint)(0.0 - fVar25) ^ (uint)fVar25) ^ (uint)(0.0 - fVar25)) + fVar10
          ;
          pfVar1 = (float *)(lVar12 + 0x10 + lVar7);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(lVar12 + 0x10 + lVar6);
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar3 = (float *)(lVar12 + 0x10 + lVar6);
          *pfVar3 = *pfVar1 * fVar4 + *pfVar2;
          pfVar3[1] = fVar8 * fVar4 + fVar18;
          pfVar3[2] = fVar9 * fVar4 + fVar19;
          pfVar3[3] = fVar10 * fVar4 + fVar20;
          pfVar1 = (float *)(lVar12 + 0x20 + lVar7);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(lVar12 + 0x20 + lVar6);
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar3 = (float *)(lVar12 + 0x20 + lVar6);
          *pfVar3 = *pfVar1 * fVar4 + *pfVar2;
          pfVar3[1] = fVar8 * fVar4 + fVar18;
          pfVar3[2] = fVar9 * fVar4 + fVar19;
          pfVar3[3] = fVar10 * fVar4 + fVar20;
          lVar12 = lVar12 + 0x30;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      lVar16 = lVar16 + -1;
      plVar17 = plVar17 + 3;
    } while (lVar16 != 0);
  }
  if (1 < iVar13) {
    FUN_141fac440(param_5);
  }
  if (0 < *(int *)(param_2 + 1)) {
    piVar15 = (int *)*param_4;
    lVar5 = *param_3;
    plVar17 = (longlong *)*param_2;
    iVar13 = (int)param_2[1];
    if ((0 < iVar13) &&
       (FBaseBlendedCurve<TMemStackAllocator<0>_>::Override
                  (param_6,plVar17,*(undefined4 *)(lVar5 + (longlong)*piVar15 * 4)), 1 < iVar13)) {
      uVar14 = (ulonglong)(iVar13 - 1);
      do {
        piVar15 = piVar15 + 1;
        plVar17 = plVar17 + 4;
        fVar4 = *(float *)(lVar5 + (longlong)*piVar15 * 4);
        if ((1e-05 < fVar4) && (iVar13 = 0, 0 < (int)param_6[1])) {
          lVar16 = *plVar17;
          lVar12 = 0;
          do {
            if ((*(char *)(lVar12 + 4 + *param_6) == '\0') &&
               (*(char *)(lVar12 + 4 + lVar16) == '\0')) {
              uVar11 = 0;
            }
            else {
              uVar11 = 1;
            }
            *(undefined1 *)(lVar12 + 4 + *param_6) = uVar11;
            iVar13 = iVar13 + 1;
            lVar16 = *plVar17;
            *(float *)(lVar12 + *param_6) =
                 fVar4 * *(float *)(lVar16 + lVar12) + *(float *)(lVar12 + *param_6);
            lVar12 = lVar12 + 8;
          } while (iVar13 < (int)param_6[1]);
        }
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  return;
}



// FUNCTION 14224a430 FUN_14224a430 body=630 status=ok
// SIG undefined FUN_14224a430(void)

void FUN_14224a430(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  float *pfVar17;
  longlong lVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  plVar16 = (longlong *)*param_1;
  pfVar17 = (float *)*param_3;
  plVar6 = (longlong *)*plVar16;
  fVar4 = *pfVar17;
  uVar5 = *(uint *)(plVar6 + 1);
  if (uVar5 != 0) {
    uVar15 = (ulonglong)uVar5;
    lVar18 = 0;
    do {
      lVar13 = *plVar6;
      lVar7 = *param_4;
      pfVar1 = (float *)(lVar18 + lVar13);
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar18 + 0x10 + lVar13);
      fVar20 = *pfVar2;
      fVar21 = pfVar2[1];
      fVar22 = pfVar2[2];
      fVar23 = pfVar2[3];
      pfVar2 = (float *)(lVar18 + 0x20 + lVar13);
      fVar24 = *pfVar2;
      fVar25 = pfVar2[1];
      fVar26 = pfVar2[2];
      fVar27 = pfVar2[3];
      pfVar2 = (float *)(lVar18 + lVar7);
      *pfVar2 = *pfVar1 * fVar4;
      pfVar2[1] = fVar9 * fVar4;
      pfVar2[2] = fVar10 * fVar4;
      pfVar2[3] = fVar11 * fVar4;
      pfVar1 = (float *)(lVar18 + 0x10 + lVar7);
      *pfVar1 = fVar20 * fVar4;
      pfVar1[1] = fVar21 * fVar4;
      pfVar1[2] = fVar22 * fVar4;
      pfVar1[3] = fVar23 * fVar4;
      pfVar1 = (float *)(lVar18 + 0x20 + lVar7);
      *pfVar1 = fVar24 * fVar4;
      pfVar1[1] = fVar25 * fVar4;
      pfVar1[2] = fVar26 * fVar4;
      pfVar1[3] = fVar27 * fVar4;
      uVar15 = uVar15 - 1;
      lVar18 = lVar18 + 0x30;
    } while (uVar15 != 0);
  }
  iVar14 = *(int *)(param_1 + 1);
  if (1 < (longlong)iVar14) {
    lVar18 = (longlong)iVar14 + -1;
    do {
      pfVar17 = pfVar17 + 1;
      plVar16 = plVar16 + 1;
      plVar6 = (longlong *)*plVar16;
      fVar4 = *pfVar17;
      uVar5 = *(uint *)(plVar6 + 1);
      if (uVar5 != 0) {
        lVar13 = 0;
        uVar15 = (ulonglong)uVar5;
        do {
          lVar7 = *param_4;
          lVar8 = *plVar6;
          pfVar1 = (float *)(lVar13 + lVar7);
          pfVar2 = (float *)(lVar13 + lVar8);
          fVar24 = *pfVar2 * fVar4;
          fVar25 = pfVar2[1] * fVar4;
          fVar26 = pfVar2[2] * fVar4;
          fVar27 = pfVar2[3] * fVar4;
          fVar20 = *pfVar1 * fVar24 + pfVar1[2] * fVar26;
          fVar21 = pfVar1[1] * fVar25 + pfVar1[3] * fVar27;
          fVar22 = pfVar1[2] * fVar26 + *pfVar1 * fVar24;
          fVar23 = pfVar1[3] * fVar27 + pfVar1[1] * fVar25;
          pfVar1 = (float *)(lVar13 + lVar7);
          fVar9 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
          pfVar2 = (float *)(lVar13 + lVar7);
          *pfVar2 = (float)(-(uint)(0.0 <= fVar21 + fVar20) & ((uint)(0.0 - fVar24) ^ (uint)fVar24)
                           ^ (uint)(0.0 - fVar24)) + *pfVar1;
          pfVar2[1] = (float)(-(uint)(0.0 <= fVar22 + fVar21) &
                              ((uint)(0.0 - fVar25) ^ (uint)fVar25) ^ (uint)(0.0 - fVar25)) + fVar9;
          pfVar2[2] = (float)(-(uint)(0.0 <= fVar23 + fVar22) &
                              ((uint)(0.0 - fVar26) ^ (uint)fVar26) ^ (uint)(0.0 - fVar26)) + fVar10
          ;
          pfVar2[3] = (float)(-(uint)(0.0 <= fVar20 + fVar23) &
                              ((uint)(0.0 - fVar27) ^ (uint)fVar27) ^ (uint)(0.0 - fVar27)) + fVar11
          ;
          pfVar1 = (float *)(lVar13 + 0x10 + lVar8);
          fVar9 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
          pfVar2 = (float *)(lVar13 + 0x10 + lVar7);
          fVar20 = pfVar2[1];
          fVar21 = pfVar2[2];
          fVar22 = pfVar2[3];
          pfVar3 = (float *)(lVar13 + 0x10 + lVar7);
          *pfVar3 = *pfVar1 * fVar4 + *pfVar2;
          pfVar3[1] = fVar9 * fVar4 + fVar20;
          pfVar3[2] = fVar10 * fVar4 + fVar21;
          pfVar3[3] = fVar11 * fVar4 + fVar22;
          pfVar1 = (float *)(lVar13 + 0x20 + lVar8);
          fVar9 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
          pfVar2 = (float *)(lVar13 + 0x20 + lVar7);
          fVar20 = pfVar2[1];
          fVar21 = pfVar2[2];
          fVar22 = pfVar2[3];
          pfVar3 = (float *)(lVar13 + 0x20 + lVar7);
          *pfVar3 = *pfVar1 * fVar4 + *pfVar2;
          pfVar3[1] = fVar9 * fVar4 + fVar20;
          pfVar3[2] = fVar10 * fVar4 + fVar21;
          pfVar3[3] = fVar11 * fVar4 + fVar22;
          lVar13 = lVar13 + 0x30;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if (1 < iVar14) {
    FUN_141fac440(param_4);
  }
  if (0 < *(int *)(param_2 + 1)) {
    puVar19 = (undefined8 *)*param_2;
    iVar14 = (int)param_2[1];
    pfVar17 = (float *)*param_3;
    if ((0 < iVar14) &&
       (FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_5,*puVar19,*pfVar17), 1 < iVar14))
    {
      uVar15 = (ulonglong)(iVar14 - 1);
      do {
        puVar19 = puVar19 + 1;
        pfVar17 = pfVar17 + 1;
        fVar4 = *pfVar17;
        plVar16 = (longlong *)*puVar19;
        if ((1e-05 < fVar4) && (iVar14 = 0, 0 < (int)param_5[1])) {
          lVar18 = *plVar16;
          lVar13 = 0;
          do {
            if ((*(char *)(*param_5 + 4 + lVar13) == '\0') &&
               (*(char *)(lVar18 + 4 + lVar13) == '\0')) {
              uVar12 = 0;
            }
            else {
              uVar12 = 1;
            }
            *(undefined1 *)(*param_5 + 4 + lVar13) = uVar12;
            iVar14 = iVar14 + 1;
            lVar18 = *plVar16;
            *(float *)(*param_5 + lVar13) =
                 fVar4 * *(float *)(lVar18 + lVar13) + *(float *)(*param_5 + lVar13);
            lVar13 = lVar13 + 8;
          } while (iVar14 < (int)param_5[1]);
        }
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  return;
}



// FUNCTION 14224a6b0 FUN_14224a6b0 body=925 status=ok
// SIG undefined FUN_14224a6b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14224a6b0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  float fVar1;
  longlong lVar2;
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
  undefined8 *puVar15;
  undefined1 uVar16;
  int iVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  uint uVar25;
  float *pfVar26;
  ulonglong uVar28;
  ulonglong uVar29;
  float fVar30;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_c8;
  ulonglong uStack_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  float local_a8 [16];
  float *local_68;
  int local_60;
  undefined4 local_5c;
  ulonglong local_58;
  ulonglong uVar27;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar23 = (longlong *)param_5[2];
  local_c8 = (longlong *)0x0;
  uStack_c0 = (ulonglong)*(uint *)(param_5 + 1);
  local_d8 = param_1;
  local_b8 = param_4;
  local_b0 = param_2;
  if (0 < (int)*(uint *)(param_5 + 1)) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_c8);
    if (0 < (int)uStack_c0) {
      lVar21 = 0;
      uVar28 = uStack_c0 & 0xffffffff;
      plVar22 = local_c8;
      do {
        iVar17 = (**(code **)*param_3)(param_3,*(undefined2 *)(lVar21 + *plVar23),param_5[2]);
        *(int *)plVar22 = iVar17;
        plVar22 = (longlong *)((longlong)plVar22 + 4);
        lVar21 = lVar21 + 2;
        uVar28 = uVar28 - 1;
        param_1 = local_d8;
        param_4 = local_b8;
      } while (uVar28 != 0);
    }
  }
  plVar22 = local_c8;
  lVar21 = *param_4;
  plVar23 = (longlong *)*param_1;
  fVar1 = *(float *)(lVar21 + 0x10);
  fVar30 = 0.0;
  if ((0.0 <= fVar1) && (fVar30 = fVar1, 1.0 <= fVar1)) {
    fVar30 = 1.0;
  }
  if (*(uint *)(plVar23 + 1) != 0) {
    lVar20 = 0;
    uVar28 = (ulonglong)*(uint *)(plVar23 + 1);
    plVar24 = local_c8;
    do {
      iVar17 = (int)*plVar24;
      fVar1 = fVar30;
      if ((-1 < iVar17) && (iVar17 < *(int *)(lVar21 + 0x38))) {
        fVar1 = *(float *)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar17 * 4);
      }
      local_d8 = (longlong *)CONCAT44(local_d8._4_4_,fVar1);
      lVar2 = *plVar23;
      plVar24 = (longlong *)((longlong)plVar24 + 4);
      lVar3 = *param_5;
      pfVar18 = (float *)(lVar20 + 0x20 + lVar2);
      fVar4 = pfVar18[1];
      fVar5 = pfVar18[2];
      fVar6 = pfVar18[3];
      pfVar26 = (float *)(lVar20 + 0x10 + lVar2);
      fVar7 = *pfVar26;
      fVar8 = pfVar26[1];
      fVar9 = pfVar26[2];
      fVar10 = pfVar26[3];
      pfVar26 = (float *)(lVar20 + lVar2);
      fVar11 = *pfVar26;
      fVar12 = pfVar26[1];
      fVar13 = pfVar26[2];
      fVar14 = pfVar26[3];
      pfVar26 = (float *)(lVar20 + 0x20 + lVar3);
      *pfVar26 = *pfVar18 * fVar1;
      pfVar26[1] = fVar4 * fVar1;
      pfVar26[2] = fVar5 * fVar1;
      pfVar26[3] = fVar6 * fVar1;
      pfVar26 = (float *)(lVar20 + 0x10 + lVar3);
      *pfVar26 = fVar7 * fVar1;
      pfVar26[1] = fVar8 * fVar1;
      pfVar26[2] = fVar9 * fVar1;
      pfVar26[3] = fVar10 * fVar1;
      pfVar26 = (float *)(lVar20 + lVar3);
      *pfVar26 = fVar1 * fVar11;
      pfVar26[1] = fVar1 * fVar12;
      pfVar26[2] = fVar1 * fVar13;
      pfVar26[3] = fVar1 * fVar14;
      lVar20 = lVar20 + 0x30;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
  if (1 < (int)param_1[1]) {
    uVar28 = (ulonglong)((int)param_1[1] - 1);
    lVar20 = lVar21;
    do {
      lVar20 = lVar20 + 0x40;
      plVar23 = plVar23 + 3;
      BlendPosePerBone<1>(&local_c8,lVar20,param_5,plVar23);
      uVar28 = uVar28 - 1;
      param_4 = local_b8;
    } while (uVar28 != 0);
  }
  FUN_141fac440(param_5);
  puVar15 = local_b0;
  if (0 < *(int *)(local_b0 + 1)) {
    local_60 = (int)param_4[1];
    lVar20 = (longlong)local_60;
    local_68 = (float *)0x0;
    local_5c = 0;
    if (0 < local_60) {
      TArray<float,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_a8);
    }
    uVar29 = 0;
    uVar28 = uVar29;
    if (3 < lVar20) {
      pfVar26 = (float *)(lVar21 + 0x50);
      do {
        pfVar18 = local_a8;
        if (local_68 != (float *)0x0) {
          pfVar18 = local_68;
        }
        pfVar18[uVar28] = pfVar26[-0x10];
        pfVar18 = local_a8;
        if (local_68 != (float *)0x0) {
          pfVar18 = local_68;
        }
        pfVar18[uVar28 + 1] = *pfVar26;
        pfVar18 = local_a8;
        if (local_68 != (float *)0x0) {
          pfVar18 = local_68;
        }
        pfVar18[uVar28 + 2] = pfVar26[0x10];
        pfVar18 = local_a8;
        if (local_68 != (float *)0x0) {
          pfVar18 = local_68;
        }
        pfVar18[uVar28 + 3] = pfVar26[0x20];
        uVar28 = uVar28 + 4;
        pfVar26 = pfVar26 + 0x40;
      } while ((longlong)uVar28 < lVar20 + -3);
    }
    if ((longlong)uVar28 < lVar20) {
      pfVar26 = (float *)(lVar21 + 0x10 + uVar28 * 0x40);
      do {
        fVar1 = *pfVar26;
        pfVar26 = pfVar26 + 0x10;
        pfVar18 = local_a8;
        if (local_68 != (float *)0x0) {
          pfVar18 = local_68;
        }
        pfVar18[uVar28] = fVar1;
        uVar28 = uVar28 + 1;
      } while ((longlong)uVar28 < lVar20);
    }
    plVar23 = (longlong *)*puVar15;
    uStack_c0 = puVar15[1];
    iVar17 = (int)uStack_c0;
    pfVar26 = local_a8;
    if (local_68 != (float *)0x0) {
      pfVar26 = local_68;
    }
    local_c8 = plVar23;
    if ((0 < iVar17) &&
       (FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_6,plVar23,*pfVar26), 1 < iVar17))
    {
      uVar28 = (ulonglong)(iVar17 - 1);
      do {
        pfVar26 = pfVar26 + 1;
        plVar23 = plVar23 + 4;
        fVar1 = *pfVar26;
        if ((1e-05 < fVar1) && (0 < (int)param_6[1])) {
          lVar21 = *plVar23;
          uVar19 = uVar29;
          uVar27 = uVar29;
          do {
            if ((*(char *)(uVar19 + 4 + *param_6) == '\0') &&
               (*(char *)(uVar19 + 4 + lVar21) == '\0')) {
              uVar16 = 0;
            }
            else {
              uVar16 = 1;
            }
            *(undefined1 *)(uVar19 + 4 + *param_6) = uVar16;
            uVar25 = (int)uVar27 + 1;
            uVar27 = (ulonglong)uVar25;
            lVar21 = *plVar23;
            *(float *)(uVar19 + *param_6) =
                 fVar1 * *(float *)(lVar21 + uVar19) + *(float *)(uVar19 + *param_6);
            uVar19 = uVar19 + 8;
          } while ((int)uVar25 < (int)param_6[1]);
        }
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    if (local_68 != (float *)0x0) {
      FMemory::Free(local_68);
    }
  }
  if (plVar22 != (longlong *)0x0) {
    FMemory::Free(plVar22);
  }
  return;
}



// FUNCTION 14224aa50 FUN_14224aa50 body=1074 status=ok
// SIG undefined FUN_14224aa50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14224aa50(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 uVar11;
  int iVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  int *piVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  int *local_e0;
  uint local_d8;
  undefined4 local_d4;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong *local_b8;
  undefined8 uStack_b0;
  float local_a8 [16];
  float *local_68;
  int local_60;
  undefined4 local_5c;
  ulonglong local_58;
  ulonglong uVar24;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_d8 = *(uint *)(param_6 + 1);
  plVar19 = (longlong *)param_6[2];
  local_d0 = param_5;
  local_e0 = (int *)0x0;
  local_d4 = 0;
  local_e8 = param_1;
  local_c8 = param_2;
  local_b8 = param_4;
  if ((0 < (int)local_d8) &&
     (TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_e0), 0 < (int)local_d8)) {
    lVar17 = 0;
    uVar25 = (ulonglong)local_d8;
    piVar18 = local_e0;
    do {
      iVar12 = (**(code **)*param_3)(param_3,*(undefined2 *)(lVar17 + *plVar19),param_6[2]);
      *piVar18 = iVar12;
      piVar18 = piVar18 + 1;
      lVar17 = lVar17 + 2;
      uVar25 = uVar25 - 1;
      param_1 = local_e8;
      param_5 = local_d0;
    } while (uVar25 != 0);
  }
  piVar18 = (int *)*param_5;
  plVar19 = (longlong *)*param_1;
  lVar17 = *local_b8;
  lVar23 = (longlong)*piVar18 * 0x40;
  fVar3 = *(float *)(lVar23 + 0x10 + lVar17);
  fVar31 = 0.0;
  if ((0.0 <= fVar3) && (fVar31 = fVar3, 1.0 <= fVar3)) {
    fVar31 = 1.0;
  }
  if (*(uint *)(plVar19 + 1) != 0) {
    lVar16 = 0;
    uVar25 = (ulonglong)*(uint *)(plVar19 + 1);
    piVar21 = local_e0;
    do {
      iVar12 = *piVar21;
      if ((iVar12 < 0) || (*(int *)(lVar23 + 0x38 + lVar17) <= iVar12)) {
        lVar13 = *plVar19;
        pfVar14 = (float *)(lVar16 + lVar13);
        fVar27 = fVar31 * *pfVar14;
        fVar28 = fVar31 * pfVar14[1];
        fVar29 = fVar31 * pfVar14[2];
        fVar30 = fVar31 * pfVar14[3];
        fVar3 = fVar31;
      }
      else {
        fVar3 = *(float *)(*(longlong *)(lVar23 + 0x30 + lVar17) + (longlong)iVar12 * 4);
        lVar13 = *plVar19;
        pfVar14 = (float *)(lVar16 + lVar13);
        fVar27 = *pfVar14 * fVar3;
        fVar28 = pfVar14[1] * fVar3;
        fVar29 = pfVar14[2] * fVar3;
        fVar30 = pfVar14[3] * fVar3;
      }
      local_e8 = (longlong *)CONCAT44(local_e8._4_4_,fVar3);
      pfVar14 = (float *)(lVar16 + 0x20 + lVar13);
      fVar4 = pfVar14[1];
      fVar5 = pfVar14[2];
      fVar6 = pfVar14[3];
      piVar21 = piVar21 + 1;
      pfVar2 = (float *)(lVar16 + 0x10 + lVar13);
      fVar7 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      lVar13 = *param_6;
      pfVar2 = (float *)(lVar16 + 0x20 + lVar13);
      *pfVar2 = *pfVar14 * fVar3;
      pfVar2[1] = fVar4 * fVar3;
      pfVar2[2] = fVar5 * fVar3;
      pfVar2[3] = fVar6 * fVar3;
      pfVar14 = (float *)(lVar16 + 0x10 + lVar13);
      *pfVar14 = fVar7 * fVar3;
      pfVar14[1] = fVar8 * fVar3;
      pfVar14[2] = fVar9 * fVar3;
      pfVar14[3] = fVar10 * fVar3;
      pfVar14 = (float *)(lVar16 + lVar13);
      *pfVar14 = fVar27;
      pfVar14[1] = fVar28;
      pfVar14[2] = fVar29;
      pfVar14[3] = fVar30;
      lVar16 = lVar16 + 0x30;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  if (1 < (int)param_1[1]) {
    uVar25 = (ulonglong)((int)param_1[1] - 1);
    piVar21 = piVar18;
    do {
      piVar21 = piVar21 + 1;
      plVar19 = plVar19 + 3;
      BlendPosePerBone<1>(&local_e0,(longlong)*piVar21 * 0x40 + lVar17,param_6,plVar19);
      uVar25 = uVar25 - 1;
      param_5 = local_d0;
    } while (uVar25 != 0);
  }
  FUN_141fac440(param_6);
  puVar20 = local_c8;
  if (0 < *(int *)(local_c8 + 1)) {
    local_60 = *(int *)(param_5 + 1);
    lVar23 = (longlong)local_60;
    local_68 = (float *)0x0;
    local_5c = 0;
    if (0 < local_60) {
      TArray<float,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_a8);
    }
    uVar26 = 0;
    uVar25 = uVar26;
    if (3 < lVar23) {
      lVar16 = (lVar23 - 4U >> 2) + 1;
      uVar25 = lVar16 * 4;
      piVar21 = piVar18 + 2;
      do {
        lVar13 = (-8 - (longlong)piVar18) + (longlong)piVar21;
        piVar1 = piVar21 + 4;
        pfVar14 = local_a8;
        if (local_68 != (float *)0x0) {
          pfVar14 = local_68;
        }
        *(undefined4 *)((longlong)pfVar14 + lVar13) =
             *(undefined4 *)((longlong)piVar21[-2] * 0x40 + 0x10 + lVar17);
        pfVar14 = local_a8;
        if (local_68 != (float *)0x0) {
          pfVar14 = local_68;
        }
        *(undefined4 *)((longlong)pfVar14 + lVar13 + 4) =
             *(undefined4 *)((longlong)piVar21[-1] * 0x40 + 0x10 + lVar17);
        pfVar14 = local_a8;
        if (local_68 != (float *)0x0) {
          pfVar14 = local_68;
        }
        *(undefined4 *)((longlong)pfVar14 + (-0x10 - (longlong)piVar18) + (longlong)piVar1) =
             *(undefined4 *)((longlong)*piVar21 * 0x40 + 0x10 + lVar17);
        pfVar14 = local_a8;
        if (local_68 != (float *)0x0) {
          pfVar14 = local_68;
        }
        *(undefined4 *)((longlong)pfVar14 + (-0xc - (longlong)piVar18) + (longlong)piVar1) =
             *(undefined4 *)((longlong)piVar21[1] * 0x40 + 0x10 + lVar17);
        lVar16 = lVar16 + -1;
        piVar21 = piVar1;
        puVar20 = local_c8;
      } while (lVar16 != 0);
    }
    for (; (longlong)uVar25 < lVar23; uVar25 = uVar25 + 1) {
      pfVar14 = local_a8;
      if (local_68 != (float *)0x0) {
        pfVar14 = local_68;
      }
      pfVar14[uVar25] = *(float *)((longlong)piVar18[uVar25] * 0x40 + 0x10 + lVar17);
    }
    plVar19 = (longlong *)*puVar20;
    uStack_b0 = puVar20[1];
    iVar12 = (int)uStack_b0;
    pfVar14 = local_a8;
    if (local_68 != (float *)0x0) {
      pfVar14 = local_68;
    }
    local_b8 = plVar19;
    if ((0 < iVar12) &&
       (FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_7,plVar19,*pfVar14), 1 < iVar12))
    {
      uVar25 = (ulonglong)(iVar12 - 1);
      do {
        pfVar14 = pfVar14 + 1;
        plVar19 = plVar19 + 4;
        fVar3 = *pfVar14;
        if ((1e-05 < fVar3) && (0 < (int)param_7[1])) {
          lVar17 = *plVar19;
          uVar15 = uVar26;
          uVar24 = uVar26;
          do {
            if ((*(char *)(uVar15 + 4 + *param_7) == '\0') &&
               (*(char *)(uVar15 + 4 + lVar17) == '\0')) {
              uVar11 = 0;
            }
            else {
              uVar11 = 1;
            }
            *(undefined1 *)(uVar15 + 4 + *param_7) = uVar11;
            uVar22 = (int)uVar24 + 1;
            uVar24 = (ulonglong)uVar22;
            lVar17 = *plVar19;
            *(float *)(uVar15 + *param_7) =
                 fVar3 * *(float *)(uVar15 + lVar17) + *(float *)(uVar15 + *param_7);
            uVar15 = uVar15 + 8;
          } while ((int)uVar22 < (int)param_7[1]);
        }
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    if (local_68 != (float *)0x0) {
      FMemory::Free(local_68);
    }
  }
  if (local_e0 != (int *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}



// FUNCTION 14224ae90 FUN_14224ae90 body=976 status=ok
// SIG undefined FUN_14224ae90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14224ae90(longlong *param_1,undefined1 (*param_2) [16],longlong param_3,undefined8 *param_4
                  ,longlong *param_5,undefined8 param_6)

{
  float *pfVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  uint uVar7;
  longlong *plVar9;
  float *pfVar10;
  ulonglong uVar11;
  float fVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar16;
  undefined1 auVar14 [16];
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
  int local_res8 [2];
  undefined1 (*local_res10) [16];
  longlong local_res18;
  undefined8 *local_res20;
  int local_a8 [4];
  longlong *local_98;
  int iStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [3] [16];
  ulonglong uVar8;
  
  uVar11 = 0;
  plVar3 = (longlong *)*param_1;
  lVar6 = param_1[1];
  local_res20 = param_4;
  local_res18 = param_3;
  local_res10 = param_2;
  for (plVar9 = plVar3; plVar9 != plVar3 + (longlong)(int)lVar6 * 3; plVar9 = plVar9 + 3) {
    uVar2 = *(uint *)(plVar9 + 1);
    uVar8 = uVar11;
    if (uVar2 != 0) {
      do {
        local_res8[0] = (int)uVar8;
        FBoneContainer::GetParentBoneIndex(plVar9[2],local_a8,local_res8);
        lVar4 = *plVar9;
        if (local_a8[0] == -1) {
          pfVar10 = (float *)((longlong)local_res8[0] * 0x30 + lVar4);
          fVar17 = *pfVar10;
          fVar18 = pfVar10[1];
          fVar19 = pfVar10[2];
          fVar20 = pfVar10[3];
        }
        else {
          pfVar10 = (float *)((longlong)local_res8[0] * 0x30 + lVar4);
          fVar17 = *pfVar10;
          fVar18 = pfVar10[1];
          fVar19 = pfVar10[2];
          fVar20 = pfVar10[3];
          pfVar1 = (float *)(lVar4 + (longlong)local_a8[0] * 0x30);
          fVar24 = *pfVar1;
          fVar26 = pfVar1[1];
          fVar27 = pfVar1[2];
          fVar28 = pfVar1[3];
          local_res8[0] = 0x322bcc77;
          fVar29 = fVar20 * fVar24 * _DAT_146aeee90 + fVar28 * fVar17 +
                   fVar19 * fVar26 * _DAT_146aeee80 + fVar18 * fVar27 * _DAT_146aeee70;
          fVar30 = fVar19 * fVar24 * fRam0000000146aeee94 + fVar28 * fVar18 +
                   fVar20 * fVar26 * fRam0000000146aeee84 + fVar17 * fVar27 * fRam0000000146aeee74;
          fVar32 = fVar18 * fVar24 * fRam0000000146aeee98 + fVar28 * fVar19 +
                   fVar17 * fVar26 * fRam0000000146aeee88 + fVar20 * fVar27 * fRam0000000146aeee78;
          fVar34 = fVar17 * fVar24 * fRam0000000146aeee9c + fVar28 * fVar20 +
                   fVar18 * fVar26 * fRam0000000146aeee8c + fVar19 * fVar27 * fRam0000000146aeee7c;
          auVar12._0_4_ = fVar29 * fVar29 + fVar32 * fVar32;
          auVar12._4_4_ = fVar30 * fVar30 + fVar34 * fVar34;
          auVar12._8_4_ = fVar32 * fVar32 + fVar29 * fVar29;
          auVar12._12_4_ = fVar34 * fVar34 + fVar30 * fVar30;
          fVar24 = auVar12._4_4_ + auVar12._0_4_;
          fVar26 = auVar12._8_4_ + auVar12._4_4_;
          fVar27 = auVar12._12_4_ + auVar12._8_4_;
          fVar28 = auVar12._0_4_ + auVar12._12_4_;
          auVar13._4_4_ = fVar26;
          auVar13._0_4_ = fVar24;
          auVar13._8_4_ = fVar27;
          auVar13._12_4_ = fVar28;
          auVar13 = rsqrtps(auVar12,auVar13);
          fVar17 = auVar13._0_4_;
          fVar18 = auVar13._4_4_;
          fVar19 = auVar13._8_4_;
          fVar20 = auVar13._12_4_;
          fVar17 = (_DAT_146aeee30 - fVar17 * fVar17 * fVar24 * _DAT_146aeee30) * fVar17 + fVar17;
          fVar18 = (fRam0000000146aeee34 - fVar18 * fVar18 * fVar26 * fRam0000000146aeee34) * fVar18
                   + fVar18;
          fVar19 = (fRam0000000146aeee38 - fVar19 * fVar19 * fVar27 * fRam0000000146aeee38) * fVar19
                   + fVar19;
          fVar20 = (fRam0000000146aeee3c - fVar20 * fVar20 * fVar28 * fRam0000000146aeee3c) * fVar20
                   + fVar20;
          fVar17 = (float)(((uint)(((_DAT_146aeee30 - fVar17 * fVar17 * fVar24 * _DAT_146aeee30) *
                                    fVar17 + fVar17) * fVar29) ^ _DAT_146aeee20) &
                           -(uint)(1e-08 <= fVar24) ^ _DAT_146aeee20);
          fVar18 = (float)(((uint)(((fRam0000000146aeee34 -
                                    fVar18 * fVar18 * fVar26 * fRam0000000146aeee34) * fVar18 +
                                   fVar18) * fVar30) ^ uRam0000000146aeee24) &
                           -(uint)(1e-08 <= fVar26) ^ uRam0000000146aeee24);
          fVar19 = (float)(((uint)(((fRam0000000146aeee38 -
                                    fVar19 * fVar19 * fVar27 * fRam0000000146aeee38) * fVar19 +
                                   fVar19) * fVar32) ^ uRam0000000146aeee28) &
                           -(uint)(1e-08 <= fVar27) ^ uRam0000000146aeee28);
          fVar20 = (float)(((uint)(((fRam0000000146aeee3c -
                                    fVar20 * fVar20 * fVar28 * fRam0000000146aeee3c) * fVar20 +
                                   fVar20) * fVar34) ^ uRam0000000146aeee2c) &
                           -(uint)(1e-08 <= fVar28) ^ uRam0000000146aeee2c);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        *pfVar10 = fVar17;
        pfVar10[1] = fVar18;
        pfVar10[2] = fVar19;
        pfVar10[3] = fVar20;
      } while (uVar7 != uVar2);
    }
  }
  local_88 = *local_res20;
  uStack_80 = local_res20[1];
  uVar8 = local_res18 + 0x80;
  if (local_res18 == 0) {
    uVar8 = uVar11;
  }
  local_78[0] = *local_res10;
  local_98 = plVar3;
  iStack_90 = (int)lVar6;
  FUN_14224a6b0(&local_98,local_78,uVar8,&local_88,param_5,param_6);
  uVar2 = *(uint *)(param_5 + 1);
  if (uVar2 != 0) {
    do {
      local_res18 = CONCAT44(local_res18._4_4_,(int)uVar11);
      FBoneContainer::GetParentBoneIndex(param_5[2],&local_res20,&local_res18);
      fVar20 = fRam0000000146aeee3c;
      fVar19 = fRam0000000146aeee38;
      fVar18 = fRam0000000146aeee34;
      fVar17 = _DAT_146aeee30;
      if ((int)local_res20 != -1) {
        lVar6 = *param_5;
        pfVar10 = (float *)(lVar6 + (longlong)(int)local_res20 * 0x30);
        fVar24 = pfVar10[3];
        fVar25 = -*pfVar10;
        fVar30 = -pfVar10[1];
        fVar32 = -pfVar10[2];
        pfVar10 = (float *)(lVar6 + (longlong)(int)local_res18 * 0x30);
        fVar26 = *pfVar10;
        fVar27 = pfVar10[1];
        fVar28 = pfVar10[2];
        fVar29 = pfVar10[3];
        fVar21 = fVar28 * fVar25 * fRam0000000146aeee94;
        fVar22 = fVar27 * fVar25 * fRam0000000146aeee98;
        fVar23 = fVar26 * fVar25 * fRam0000000146aeee9c;
        fVar34 = fVar29 * fVar30 * fRam0000000146aeee84;
        fVar15 = fVar26 * fVar30 * fRam0000000146aeee88;
        fVar16 = fVar27 * fVar30 * fRam0000000146aeee8c;
        fVar31 = fVar26 * fVar32 * fRam0000000146aeee74;
        fVar33 = fVar29 * fVar32 * fRam0000000146aeee78;
        fVar35 = fVar28 * fVar32 * fRam0000000146aeee7c;
        pfVar10 = (float *)(lVar6 + (longlong)(int)local_res18 * 0x30);
        *pfVar10 = fVar29 * fVar25 * _DAT_146aeee90 + fVar24 * fVar26 +
                   fVar28 * fVar30 * _DAT_146aeee80 + fVar27 * fVar32 * _DAT_146aeee70;
        pfVar10[1] = fVar21 + fVar24 * fVar27 + fVar34 + fVar31;
        pfVar10[2] = fVar22 + fVar24 * fVar28 + fVar15 + fVar33;
        pfVar10[3] = fVar23 + fVar24 * fVar29 + fVar16 + fVar35;
        pfVar10 = (float *)((longlong)(int)local_res18 * 0x30 + *param_5);
        fVar24 = *pfVar10;
        fVar26 = pfVar10[1];
        fVar27 = pfVar10[2];
        fVar28 = pfVar10[3];
        auVar14._0_4_ = fVar24 * fVar24 + fVar27 * fVar27;
        auVar14._4_4_ = fVar26 * fVar26 + fVar28 * fVar28;
        auVar14._8_4_ = fVar27 * fVar27 + fVar24 * fVar24;
        auVar14._12_4_ = fVar28 * fVar28 + fVar26 * fVar26;
        fVar15 = auVar14._4_4_ + auVar14._0_4_;
        fVar16 = auVar14._8_4_ + auVar14._4_4_;
        fVar21 = auVar14._12_4_ + auVar14._8_4_;
        fVar22 = auVar14._0_4_ + auVar14._12_4_;
        auVar5._4_4_ = fVar16;
        auVar5._0_4_ = fVar15;
        auVar5._8_4_ = fVar21;
        auVar5._12_4_ = fVar22;
        auVar13 = rsqrtps(auVar14,auVar5);
        fVar29 = auVar13._0_4_;
        fVar30 = auVar13._4_4_;
        fVar32 = auVar13._8_4_;
        fVar34 = auVar13._12_4_;
        fVar29 = (fVar17 - fVar29 * fVar29 * fVar15 * fVar17) * fVar29 + fVar29;
        fVar30 = (fVar18 - fVar30 * fVar30 * fVar16 * fVar18) * fVar30 + fVar30;
        fVar32 = (fVar19 - fVar32 * fVar32 * fVar21 * fVar19) * fVar32 + fVar32;
        fVar34 = (fVar20 - fVar34 * fVar34 * fVar22 * fVar20) * fVar34 + fVar34;
        fVar18 = (float)(((uint)(((fVar18 - fVar30 * fVar30 * fVar16 * fVar18) * fVar30 + fVar30) *
                                fVar26) ^ uRam0000000146aeee24) &
                         -(uint)(fRam0000000146aeee44 <= fVar16) ^ uRam0000000146aeee24);
        fVar19 = (float)(((uint)(((fVar19 - fVar32 * fVar32 * fVar21 * fVar19) * fVar32 + fVar32) *
                                fVar27) ^ uRam0000000146aeee28) &
                         -(uint)(fRam0000000146aeee48 <= fVar21) ^ uRam0000000146aeee28);
        fVar20 = (float)(((uint)(((fVar20 - fVar34 * fVar34 * fVar22 * fVar20) * fVar34 + fVar34) *
                                fVar28) ^ uRam0000000146aeee2c) &
                         -(uint)(fRam0000000146aeee4c <= fVar22) ^ uRam0000000146aeee2c);
        *pfVar10 = (float)(((uint)(((fVar17 - fVar29 * fVar29 * fVar15 * fVar17) * fVar29 + fVar29)
                                  * fVar24) ^ _DAT_146aeee20) & -(uint)(_DAT_146aeee40 <= fVar15) ^
                          _DAT_146aeee20);
        pfVar10[1] = fVar18;
        pfVar10[2] = fVar19;
        pfVar10[3] = fVar20;
      }
      uVar7 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar7;
    } while (uVar7 != uVar2);
  }
  return;
}



// FUNCTION 14224b260 FUN_14224b260 body=555 status=ok
// SIG undefined FUN_14224b260(void)

void FUN_14224b260(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  float param_5,longlong *param_6,longlong *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar10 = 0;
  if (*(uint *)(param_1 + 1) != 0) {
    uVar13 = (ulonglong)*(uint *)(param_1 + 1);
    uVar9 = uVar10;
    do {
      lVar4 = *param_1;
      lVar5 = *param_6;
      pfVar1 = (float *)(uVar9 + lVar4);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar2 = (float *)(uVar9 + 0x10 + lVar4);
      fVar14 = *pfVar2;
      fVar15 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar17 = pfVar2[3];
      pfVar2 = (float *)(uVar9 + 0x20 + lVar4);
      fVar18 = *pfVar2;
      fVar19 = pfVar2[1];
      fVar20 = pfVar2[2];
      fVar21 = pfVar2[3];
      pfVar2 = (float *)(uVar9 + lVar5);
      *pfVar2 = *pfVar1 * param_5;
      pfVar2[1] = fVar6 * param_5;
      pfVar2[2] = fVar7 * param_5;
      pfVar2[3] = fVar8 * param_5;
      pfVar1 = (float *)(uVar9 + 0x10 + lVar5);
      *pfVar1 = fVar14 * param_5;
      pfVar1[1] = fVar15 * param_5;
      pfVar1[2] = fVar16 * param_5;
      pfVar1[3] = fVar17 * param_5;
      pfVar1 = (float *)(uVar9 + 0x20 + lVar5);
      *pfVar1 = fVar18 * param_5;
      pfVar1[1] = fVar19 * param_5;
      pfVar1[2] = fVar20 * param_5;
      pfVar1[3] = fVar21 * param_5;
      uVar13 = uVar13 - 1;
      uVar9 = uVar9 + 0x30;
    } while (uVar13 != 0);
  }
  param_5 = 1.0 - param_5;
  if (*(uint *)(param_2 + 1) != 0) {
    uVar13 = (ulonglong)*(uint *)(param_2 + 1);
    uVar9 = uVar10;
    do {
      lVar4 = *param_6;
      lVar5 = *param_2;
      pfVar1 = (float *)(uVar9 + lVar4);
      pfVar2 = (float *)(uVar9 + lVar5);
      fVar18 = *pfVar2 * param_5;
      fVar19 = pfVar2[1] * param_5;
      fVar20 = pfVar2[2] * param_5;
      fVar21 = pfVar2[3] * param_5;
      fVar14 = *pfVar1 * fVar18 + pfVar1[2] * fVar20;
      fVar15 = pfVar1[1] * fVar19 + pfVar1[3] * fVar21;
      fVar16 = pfVar1[2] * fVar20 + *pfVar1 * fVar18;
      fVar17 = pfVar1[3] * fVar21 + pfVar1[1] * fVar19;
      pfVar1 = (float *)(uVar9 + lVar4);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar2 = (float *)(uVar9 + lVar4);
      *pfVar2 = (float)(-(uint)(0.0 <= fVar15 + fVar14) & ((uint)(0.0 - fVar18) ^ (uint)fVar18) ^
                       (uint)(0.0 - fVar18)) + *pfVar1;
      pfVar2[1] = (float)(-(uint)(0.0 <= fVar16 + fVar15) & ((uint)(0.0 - fVar19) ^ (uint)fVar19) ^
                         (uint)(0.0 - fVar19)) + fVar6;
      pfVar2[2] = (float)(-(uint)(0.0 <= fVar17 + fVar16) & ((uint)(0.0 - fVar20) ^ (uint)fVar20) ^
                         (uint)(0.0 - fVar20)) + fVar7;
      pfVar2[3] = (float)(-(uint)(0.0 <= fVar14 + fVar17) & ((uint)(0.0 - fVar21) ^ (uint)fVar21) ^
                         (uint)(0.0 - fVar21)) + fVar8;
      pfVar1 = (float *)(uVar9 + 0x10 + lVar5);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar2 = (float *)(uVar9 + 0x10 + lVar4);
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      pfVar3 = (float *)(uVar9 + 0x10 + lVar4);
      *pfVar3 = *pfVar1 * param_5 + *pfVar2;
      pfVar3[1] = fVar6 * param_5 + fVar14;
      pfVar3[2] = fVar7 * param_5 + fVar15;
      pfVar3[3] = fVar8 * param_5 + fVar16;
      pfVar1 = (float *)(uVar9 + 0x20 + lVar5);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar2 = (float *)(uVar9 + 0x20 + lVar4);
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      pfVar3 = (float *)(uVar9 + 0x20 + lVar4);
      *pfVar3 = *pfVar1 * param_5 + *pfVar2;
      pfVar3[1] = fVar6 * param_5 + fVar14;
      pfVar3[2] = fVar7 * param_5 + fVar15;
      pfVar3[3] = fVar8 * param_5 + fVar16;
      uVar9 = uVar9 + 0x30;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_141fac440(param_6);
  if (1e-05 < ABS(param_5)) {
    if (1e-05 < ABS(param_5 - 1.0)) {
      FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(param_7);
      uVar9 = uVar10;
      if (0 < (int)param_3[1]) {
        do {
          if ((*(char *)(uVar10 + 4 + *param_3) == '\0') &&
             (*(char *)(uVar10 + 4 + *param_4) == '\0')) {
            uVar11 = 0;
          }
          else {
            uVar11 = 1;
          }
          uVar12 = (int)uVar9 + 1;
          *(undefined1 *)(uVar10 + 4 + *param_7) = uVar11;
          *(float *)(uVar10 + *param_7) =
               (*(float *)(uVar10 + *param_4) - *(float *)(uVar10 + *param_3)) * param_5 +
               *(float *)(uVar10 + *param_3);
          uVar10 = uVar10 + 8;
          uVar9 = (ulonglong)uVar12;
        } while ((int)uVar12 < (int)param_3[1]);
      }
    }
    else {
      FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_7,param_4);
    }
  }
  else {
    FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_7,param_3);
  }
  return;
}



// FUNCTION 14224b490 BlendTwoPosesTogetherPerBone body=610 status=ok
// SIG undefined BlendTwoPosesTogetherPerBone(void)

void FAnimationRuntime::BlendTwoPosesTogetherPerBone
               (longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
               longlong *param_5,longlong *param_6,longlong *param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  uVar13 = 0;
  if (*(uint *)(param_6 + 1) != 0) {
    uVar15 = (ulonglong)*(uint *)(param_6 + 1);
    uVar16 = uVar13;
    uVar17 = uVar13;
    do {
      fVar6 = *(float *)(uVar16 + *param_5);
      if (fVar6 < 0.99999) {
        if (fVar6 <= 1e-05) {
          lVar7 = *param_1;
          lVar12 = *param_6;
          uVar11 = ((undefined8 *)(uVar17 + lVar7))[1];
          *(undefined8 *)(uVar17 + lVar12) = *(undefined8 *)(uVar17 + lVar7);
          ((undefined8 *)(uVar17 + lVar12))[1] = uVar11;
          puVar2 = (undefined4 *)(uVar17 + 0x10 + lVar7);
          uVar19 = puVar2[1];
          uVar20 = puVar2[2];
          uVar21 = puVar2[3];
          puVar3 = (undefined4 *)(uVar17 + 0x10 + lVar12);
          *puVar3 = *puVar2;
          puVar3[1] = uVar19;
          puVar3[2] = uVar20;
          puVar3[3] = uVar21;
          puVar2 = (undefined4 *)(uVar17 + 0x20 + lVar7);
          uVar19 = *puVar2;
          uVar20 = puVar2[1];
          uVar21 = puVar2[2];
          uVar22 = puVar2[3];
          goto LAB_14224b650;
        }
        lVar12 = *param_1;
        lVar7 = *param_6;
        fVar18 = 1.0 - fVar6;
        pfVar1 = (float *)(uVar17 + lVar12);
        fVar8 = *pfVar1;
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar23 = pfVar1[3];
        pfVar1 = (float *)(uVar17 + 0x10 + lVar12);
        fVar24 = *pfVar1;
        fVar25 = pfVar1[1];
        fVar26 = pfVar1[2];
        fVar27 = pfVar1[3];
        pfVar1 = (float *)(uVar17 + 0x20 + lVar12);
        fVar28 = pfVar1[1];
        fVar29 = pfVar1[2];
        fVar30 = pfVar1[3];
        pfVar4 = (float *)(uVar17 + 0x20 + lVar7);
        *pfVar4 = *pfVar1 * fVar18;
        pfVar4[1] = fVar28 * fVar18;
        pfVar4[2] = fVar29 * fVar18;
        pfVar4[3] = fVar30 * fVar18;
        pfVar1 = (float *)(uVar17 + 0x10 + lVar7);
        *pfVar1 = fVar24 * fVar18;
        pfVar1[1] = fVar25 * fVar18;
        pfVar1[2] = fVar26 * fVar18;
        pfVar1[3] = fVar27 * fVar18;
        pfVar1 = (float *)(uVar17 + lVar7);
        *pfVar1 = fVar8 * fVar18;
        pfVar1[1] = fVar9 * fVar18;
        pfVar1[2] = fVar10 * fVar18;
        pfVar1[3] = fVar23 * fVar18;
        lVar12 = *param_6;
        lVar7 = *param_2;
        pfVar1 = (float *)(uVar17 + lVar12);
        pfVar4 = (float *)(uVar17 + lVar7);
        fVar27 = *pfVar4 * fVar6;
        fVar28 = pfVar4[1] * fVar6;
        fVar29 = pfVar4[2] * fVar6;
        fVar30 = pfVar4[3] * fVar6;
        fVar23 = *pfVar1 * fVar27 + pfVar1[2] * fVar29;
        fVar24 = pfVar1[1] * fVar28 + pfVar1[3] * fVar30;
        fVar25 = pfVar1[2] * fVar29 + *pfVar1 * fVar27;
        fVar26 = pfVar1[3] * fVar30 + pfVar1[1] * fVar28;
        pfVar1 = (float *)(uVar17 + lVar12);
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar4 = (float *)(uVar17 + lVar12);
        *pfVar4 = (float)(-(uint)(0.0 <= fVar24 + fVar23) & ((uint)(0.0 - fVar27) ^ (uint)fVar27) ^
                         (uint)(0.0 - fVar27)) + *pfVar1;
        pfVar4[1] = (float)(-(uint)(0.0 <= fVar25 + fVar24) & ((uint)(0.0 - fVar28) ^ (uint)fVar28)
                           ^ (uint)(0.0 - fVar28)) + fVar8;
        pfVar4[2] = (float)(-(uint)(0.0 <= fVar26 + fVar25) & ((uint)(0.0 - fVar29) ^ (uint)fVar29)
                           ^ (uint)(0.0 - fVar29)) + fVar9;
        pfVar4[3] = (float)(-(uint)(0.0 <= fVar23 + fVar26) & ((uint)(0.0 - fVar30) ^ (uint)fVar30)
                           ^ (uint)(0.0 - fVar30)) + fVar10;
        pfVar1 = (float *)(uVar17 + 0x10 + lVar7);
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar4 = (float *)(uVar17 + 0x10 + lVar12);
        fVar23 = pfVar4[1];
        fVar24 = pfVar4[2];
        fVar25 = pfVar4[3];
        pfVar5 = (float *)(uVar17 + 0x10 + lVar12);
        *pfVar5 = *pfVar1 * fVar6 + *pfVar4;
        pfVar5[1] = fVar8 * fVar6 + fVar23;
        pfVar5[2] = fVar9 * fVar6 + fVar24;
        pfVar5[3] = fVar10 * fVar6 + fVar25;
        pfVar1 = (float *)(uVar17 + 0x20 + lVar7);
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar4 = (float *)(uVar17 + 0x20 + lVar12);
        fVar23 = pfVar4[1];
        fVar24 = pfVar4[2];
        fVar25 = pfVar4[3];
        pfVar5 = (float *)(uVar17 + 0x20 + lVar12);
        *pfVar5 = *pfVar1 * fVar6 + *pfVar4;
        pfVar5[1] = fVar8 * fVar6 + fVar23;
        pfVar5[2] = fVar9 * fVar6 + fVar24;
        pfVar5[3] = fVar10 * fVar6 + fVar25;
      }
      else {
        lVar7 = *param_2;
        lVar12 = *param_6;
        uVar11 = ((undefined8 *)(uVar17 + lVar7))[1];
        *(undefined8 *)(uVar17 + lVar12) = *(undefined8 *)(uVar17 + lVar7);
        ((undefined8 *)(uVar17 + lVar12))[1] = uVar11;
        puVar2 = (undefined4 *)(uVar17 + 0x10 + lVar7);
        uVar19 = puVar2[1];
        uVar20 = puVar2[2];
        uVar21 = puVar2[3];
        puVar3 = (undefined4 *)(uVar17 + 0x10 + lVar12);
        *puVar3 = *puVar2;
        puVar3[1] = uVar19;
        puVar3[2] = uVar20;
        puVar3[3] = uVar21;
        puVar2 = (undefined4 *)(uVar17 + 0x20 + lVar7);
        uVar19 = *puVar2;
        uVar20 = puVar2[1];
        uVar21 = puVar2[2];
        uVar22 = puVar2[3];
LAB_14224b650:
        puVar2 = (undefined4 *)(uVar17 + 0x20 + lVar12);
        *puVar2 = uVar19;
        puVar2[1] = uVar20;
        puVar2[2] = uVar21;
        puVar2[3] = uVar22;
      }
      uVar16 = uVar16 + 4;
      uVar17 = uVar17 + 0x30;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  FUN_141fac440(param_6);
  FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(param_7,param_3);
  uVar16 = uVar13;
  if (0 < (int)param_4[1]) {
    do {
      if (*(char *)(uVar13 + 4 + *param_4) != '\0') {
        *(undefined1 *)(uVar13 + 4 + *param_7) = 1;
        *(undefined4 *)(uVar13 + *param_7) = *(undefined4 *)(uVar13 + *param_4);
      }
      uVar14 = (int)uVar16 + 1;
      uVar13 = uVar13 + 8;
      uVar16 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)param_4[1]);
  }
  return;
}



// FUNCTION 14224b700 FUN_14224b700 body=8 status=ok
// SIG undefined FUN_14224b700(void)

undefined * FUN_14224b700(void)

{
  return &DAT_146aeed40;
}



// FUNCTION 14224b710 FUN_14224b710 body=1592 status=ok
// SIG undefined FUN_14224b710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14224b710(longlong *param_1,int param_2)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  float fVar52;
  float fVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
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
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  lVar15 = (longlong)param_2;
  iVar11 = FBoneContainer::GetParentBoneIndex(param_1[2],param_2);
  lVar14 = (longlong)iVar11;
  if (*(char *)(lVar14 + param_1[3]) == '\0') {
    iVar11 = FUN_14224b710(param_1,iVar11);
  }
  fVar39 = fRam0000000146aeee58;
  fVar38 = fRam0000000146aeee54;
  fVar37 = _DAT_146aeee50;
  fVar10 = fRam0000000146aeee3c;
  fVar9 = fRam0000000146aeee38;
  fVar8 = fRam0000000146aeee34;
  fVar7 = _DAT_146aeee30;
  lVar13 = *param_1;
  pfVar12 = (float *)(lVar14 * 0x30 + lVar13);
  auVar22 = *(undefined1 (*) [16])(lVar13 + 0x20 + lVar15 * 0x30);
  fVar3 = auVar22._0_4_;
  fVar5 = auVar22._4_4_;
  fVar30 = auVar22._8_4_;
  auVar16 = *(undefined1 (*) [16])(pfVar12 + 8);
  fVar4 = auVar16._0_4_;
  fVar6 = auVar16._4_4_;
  fVar31 = auVar16._8_4_;
  fVar32 = auVar16._12_4_;
  auVar16 = minps(auVar22,auVar16);
  auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146aeeec4);
  auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146aeeec0);
  auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146aeeec8);
  auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146aeeecc);
  iVar11 = movmskps(iVar11,auVar17);
  if (iVar11 == 0) {
    fVar37 = *pfVar12;
    fVar38 = pfVar12[1];
    fVar39 = pfVar12[2];
    fVar24 = pfVar12[3];
    pfVar1 = (float *)(lVar13 + lVar15 * 0x30);
    fVar27 = *pfVar1;
    fVar34 = pfVar1[1];
    fVar18 = pfVar1[2];
    fVar40 = pfVar1[3];
    pfVar1 = (float *)(lVar13 + 0x10 + lVar15 * 0x30);
    fVar41 = *pfVar1 * fVar4;
    fVar35 = pfVar1[1] * fVar6;
    fVar19 = pfVar1[2] * fVar31;
    fVar28 = pfVar1[3] * fVar32;
    fVar25 = fVar40 * fVar37 * _DAT_146aeee90 + fVar24 * fVar27 + fVar38 * fVar18 * _DAT_146aeee80 +
             fVar39 * fVar34 * _DAT_146aeee70;
    fVar29 = fVar18 * fVar37 * fRam0000000146aeee94 + fVar24 * fVar34 +
             fVar38 * fVar40 * fRam0000000146aeee84 + fVar39 * fVar27 * fRam0000000146aeee74;
    fVar23 = fVar34 * fVar37 * fRam0000000146aeee98 + fVar24 * fVar18 +
             fVar38 * fVar27 * fRam0000000146aeee88 + fVar39 * fVar40 * fRam0000000146aeee78;
    fVar26 = fVar27 * fVar37 * fRam0000000146aeee9c + fVar24 * fVar40 +
             fVar38 * fVar34 * fRam0000000146aeee8c + fVar39 * fVar18 * fRam0000000146aeee7c;
    fVar27 = fVar19 * fVar38 - fVar35 * fVar39;
    fVar34 = fVar41 * fVar39 - fVar19 * fVar37;
    fVar18 = fVar35 * fVar37 - fVar41 * fVar38;
    fVar40 = fVar28 * fVar24 - fVar28 * fVar24;
    fVar27 = fVar27 + fVar27;
    fVar34 = fVar34 + fVar34;
    fVar18 = fVar18 + fVar18;
    fVar40 = fVar40 + fVar40;
    local_b8 = (fVar18 * fVar38 - fVar34 * fVar39) + fVar27 * fVar24 + fVar41 + pfVar12[4];
    fStack_b4 = (fVar27 * fVar39 - fVar18 * fVar37) + fVar34 * fVar24 + fVar35 + pfVar12[5];
    fStack_b0 = (fVar34 * fVar37 - fVar27 * fVar38) + fVar18 * fVar24 + fVar19 + pfVar12[6];
    fVar37 = (fVar40 * fVar24 - fVar40 * fVar24) + fVar40 * fVar24 + fVar28 + pfVar12[7];
  }
  else {
    fVar24 = *pfVar12;
    fVar27 = pfVar12[1];
    fVar34 = pfVar12[2];
    fVar18 = pfVar12[3];
    fVar23 = fVar27 + fVar27;
    fVar26 = fVar34 + fVar34;
    fVar40 = pfVar12[4];
    fVar41 = pfVar12[5];
    fVar35 = pfVar12[6];
    fVar36 = fVar24 * (fVar24 + fVar24);
    fVar33 = fVar18 * (fVar24 + fVar24);
    pfVar12 = (float *)(lVar13 + lVar15 * 0x30);
    fVar19 = *pfVar12;
    fVar28 = pfVar12[1];
    fVar25 = pfVar12[2];
    fVar29 = pfVar12[3];
    fVar42 = fVar6 * (fVar24 * fVar23 - fVar18 * fVar26);
    fVar44 = fVar31 * (fVar27 * fVar26 - fVar33);
    fVar46 = fVar4 * (fVar24 * fVar26 - fVar18 * fVar23);
    fVar51 = (fVar18 * fVar26 + fVar24 * fVar23) * fVar4;
    fVar52 = (fVar33 + fVar27 * fVar26) * fVar6;
    fVar53 = (fVar18 * fVar23 + fVar24 * fVar26) * fVar31;
    fVar18 = (float)((uint)((_DAT_146aeee50 - (fVar34 * fVar26 + fVar27 * fVar23)) * fVar4) &
                    _DAT_146aeee60);
    fVar26 = (float)((uint)((fRam0000000146aeee54 - (fVar34 * fVar26 + fVar36)) * fVar6) &
                    uRam0000000146aeee64);
    fVar23 = (float)((uint)((fRam0000000146aeee58 - (fVar27 * fVar23 + fVar36)) * fVar31) &
                    uRam0000000146aeee68);
    fVar33 = (float)((uint)((fRam0000000146aeee5c - (fVar36 + fVar36)) * fVar32) &
                    uRam0000000146aeee6c);
    fVar24 = fVar28 + fVar28;
    fVar27 = fVar25 + fVar25;
    fVar36 = fVar19 * (fVar19 + fVar19);
    fVar34 = fVar29 * (fVar19 + fVar19);
    fVar48 = (fVar29 * fVar27 + fVar19 * fVar24) * fVar3;
    fVar49 = (fVar34 + fVar28 * fVar27) * fVar5;
    fVar50 = (fVar29 * fVar24 + fVar19 * fVar27) * fVar30;
    fVar43 = fVar5 * (fVar19 * fVar24 - fVar29 * fVar27);
    fVar45 = fVar30 * (fVar28 * fVar27 - fVar34);
    fVar47 = fVar3 * (fVar19 * fVar27 - fVar29 * fVar24);
    fVar19 = (float)((uint)((_DAT_146aeee50 - (fVar25 * fVar27 + fVar28 * fVar24)) * fVar3) &
                    _DAT_146aeee60);
    fVar25 = (float)((uint)((fRam0000000146aeee54 - (fVar25 * fVar27 + fVar36)) * fVar5) &
                    uRam0000000146aeee64);
    fVar28 = (float)((uint)((fRam0000000146aeee58 - (fVar28 * fVar24 + fVar36)) * fVar30) &
                    uRam0000000146aeee68);
    fVar29 = (float)((uint)((fRam0000000146aeee5c - (fVar36 + fVar36)) * auVar22._12_4_) &
                    uRam0000000146aeee6c);
    pfVar12 = (float *)(lVar13 + 0x10 + lVar15 * 0x30);
    fVar24 = *pfVar12;
    fVar27 = pfVar12[1];
    fVar34 = pfVar12[2];
    local_e8 = fVar48 * fVar42 + fVar19 * fVar18 + fVar47 * fVar53 + fVar29 * fVar40;
    fStack_e4 = fVar48 * fVar26 + fVar19 * fVar51 + fVar47 * fVar44 + fVar29 * fVar41;
    fStack_e0 = fVar48 * fVar52 + fVar19 * fVar46 + fVar47 * fVar23 + fVar29 * fVar35;
    fStack_dc = fVar48 * fVar33 + fVar19 * fVar33 + fVar47 * fVar33 + fVar29 * fRam0000000146aeee5c;
    local_d8 = fVar25 * fVar42 + fVar43 * fVar18 + fVar49 * fVar53 + fVar29 * fVar40;
    fStack_d4 = fVar25 * fVar26 + fVar43 * fVar51 + fVar49 * fVar44 + fVar29 * fVar41;
    fStack_d0 = fVar25 * fVar52 + fVar43 * fVar46 + fVar49 * fVar23 + fVar29 * fVar35;
    fStack_cc = fVar25 * fVar33 + fVar43 * fVar33 + fVar49 * fVar33 + fVar29 * fRam0000000146aeee5c;
    local_c8 = fVar45 * fVar42 + fVar50 * fVar18 + fVar28 * fVar53 + fVar29 * fVar40;
    fStack_c4 = fVar45 * fVar26 + fVar50 * fVar51 + fVar28 * fVar44 + fVar29 * fVar41;
    fStack_c0 = fVar45 * fVar52 + fVar50 * fVar46 + fVar28 * fVar23 + fVar29 * fVar35;
    fStack_bc = fVar45 * fVar33 + fVar50 * fVar33 + fVar28 * fVar33 + fVar29 * fRam0000000146aeee5c;
    local_b8 = fVar27 * fVar42 + fVar24 * fVar18 + fVar34 * fVar53 + fRam0000000146aeee5c * fVar40;
    fStack_b4 = fVar27 * fVar26 + fVar24 * fVar51 + fVar34 * fVar44 + fRam0000000146aeee5c * fVar41;
    fStack_b0 = fVar27 * fVar52 + fVar24 * fVar46 + fVar34 * fVar23 + fRam0000000146aeee5c * fVar35;
    fStack_ac = fVar27 * fVar33 + fVar24 * fVar33 + fVar34 * fVar33 +
                fRam0000000146aeee5c * fRam0000000146aeee5c;
    FMatrix::RemoveScaling(&local_e8);
    fVar37 = (float)(-(uint)(_DAT_146aeeec0 <= fVar3 * fVar4) & (_DAT_146aeeeb0 ^ (uint)fVar37) ^
                    _DAT_146aeeeb0);
    fVar38 = (float)(-(uint)(fRam0000000146aeeec4 <= fVar5 * fVar6) &
                     (uRam0000000146aeeeb4 ^ (uint)fVar38) ^ uRam0000000146aeeeb4);
    fVar39 = (float)(-(uint)(fRam0000000146aeeec8 <= fVar30 * fVar31) &
                     (uRam0000000146aeeeb8 ^ (uint)fVar39) ^ uRam0000000146aeeeb8);
    local_e8 = local_e8 * fVar37;
    fStack_e4 = fStack_e4 * fVar37;
    fStack_e0 = fStack_e0 * fVar37;
    fStack_d4 = fStack_d4 * fVar38;
    fStack_d0 = fStack_d0 * fVar38;
    local_d8 = local_d8 * fVar38;
    fStack_c4 = fStack_c4 * fVar39;
    fStack_c0 = fStack_c0 * fVar39;
    local_c8 = local_c8 * fVar39;
    FQuat::FQuat(&local_f8,&local_e8);
    lVar13 = *param_1;
    auVar20._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
    auVar20._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
    auVar20._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
    auVar20._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
    fVar34 = auVar20._4_4_ + auVar20._0_4_;
    fVar18 = auVar20._8_4_ + auVar20._4_4_;
    fVar40 = auVar20._12_4_ + auVar20._8_4_;
    fVar41 = auVar20._0_4_ + auVar20._12_4_;
    auVar16._4_4_ = fVar18;
    auVar16._0_4_ = fVar34;
    auVar16._8_4_ = fVar40;
    auVar16._12_4_ = fVar41;
    auVar16 = rsqrtps(auVar20,auVar16);
    fVar38 = auVar16._0_4_;
    fVar39 = auVar16._4_4_;
    fVar24 = auVar16._8_4_;
    fVar27 = auVar16._12_4_;
    fVar38 = (fVar7 - fVar38 * fVar38 * fVar34 * fVar7) * fVar38 + fVar38;
    fVar39 = (fVar8 - fVar39 * fVar39 * fVar18 * fVar8) * fVar39 + fVar39;
    fVar24 = (fVar9 - fVar24 * fVar24 * fVar40 * fVar9) * fVar24 + fVar24;
    fVar27 = (fVar10 - fVar27 * fVar27 * fVar41 * fVar10) * fVar27 + fVar27;
    fVar37 = 0.0;
    fVar25 = (float)(((uint)(((fVar7 - fVar38 * fVar38 * fVar34 * fVar7) * fVar38 + fVar38) *
                            local_f8) ^ _DAT_146aeee20) & -(uint)(1e-08 <= fVar34) ^ _DAT_146aeee20)
    ;
    fVar29 = (float)(((uint)(((fVar8 - fVar39 * fVar39 * fVar18 * fVar8) * fVar39 + fVar39) *
                            fStack_f4) ^ uRam0000000146aeee24) & -(uint)(1e-08 <= fVar18) ^
                    uRam0000000146aeee24);
    fVar23 = (float)(((uint)(((fVar9 - fVar24 * fVar24 * fVar40 * fVar9) * fVar24 + fVar24) *
                            fStack_f0) ^ uRam0000000146aeee28) & -(uint)(1e-08 <= fVar40) ^
                    uRam0000000146aeee28);
    fVar26 = (float)(((uint)(((fVar10 - fVar27 * fVar27 * fVar41 * fVar10) * fVar27 + fVar27) *
                            fStack_ec) ^ uRam0000000146aeee2c) & -(uint)(1e-08 <= fVar41) ^
                    uRam0000000146aeee2c);
  }
  pfVar12 = (float *)(lVar13 + lVar15 * 0x30);
  *pfVar12 = fVar25;
  pfVar12[1] = fVar29;
  pfVar12[2] = fVar23;
  pfVar12[3] = fVar26;
  pfVar12 = (float *)(lVar13 + 0x10 + lVar15 * 0x30);
  *pfVar12 = local_b8;
  pfVar12[1] = fStack_b4;
  pfVar12[2] = fStack_b0;
  pfVar12[3] = fVar37;
  pfVar12 = (float *)(lVar13 + 0x20 + lVar15 * 0x30);
  *pfVar12 = fVar3 * fVar4;
  pfVar12[1] = fVar5 * fVar6;
  pfVar12[2] = fVar30 * fVar31;
  pfVar12[3] = auVar22._12_4_ * fVar32;
  pfVar12 = (float *)(*param_1 + lVar15 * 0x30);
  fVar3 = *pfVar12;
  fVar4 = pfVar12[1];
  fVar5 = pfVar12[2];
  fVar6 = pfVar12[3];
  auVar21._0_4_ = fVar3 * fVar3 + fVar5 * fVar5;
  auVar21._4_4_ = fVar4 * fVar4 + fVar6 * fVar6;
  auVar21._8_4_ = fVar5 * fVar5 + fVar3 * fVar3;
  auVar21._12_4_ = fVar6 * fVar6 + fVar4 * fVar4;
  fVar38 = auVar21._4_4_ + auVar21._0_4_;
  fVar39 = auVar21._8_4_ + auVar21._4_4_;
  fVar24 = auVar21._12_4_ + auVar21._8_4_;
  fVar27 = auVar21._0_4_ + auVar21._12_4_;
  auVar22._4_4_ = fVar39;
  auVar22._0_4_ = fVar38;
  auVar22._8_4_ = fVar24;
  auVar22._12_4_ = fVar27;
  auVar22 = rsqrtps(auVar21,auVar22);
  fVar30 = auVar22._0_4_;
  fVar31 = auVar22._4_4_;
  fVar32 = auVar22._8_4_;
  fVar37 = auVar22._12_4_;
  fVar30 = (fVar7 - fVar30 * fVar30 * fVar38 * fVar7) * fVar30 + fVar30;
  fVar31 = (fVar8 - fVar31 * fVar31 * fVar39 * fVar8) * fVar31 + fVar31;
  fVar32 = (fVar9 - fVar32 * fVar32 * fVar24 * fVar9) * fVar32 + fVar32;
  fVar37 = (fVar10 - fVar37 * fVar37 * fVar27 * fVar10) * fVar37 + fVar37;
  uVar54 = ((uint)(((fVar8 - fVar31 * fVar31 * fVar39 * fVar8) * fVar31 + fVar31) * fVar4) ^
           uRam0000000146aeee24) & -(uint)(fRam0000000146aeee44 <= fVar39) ^ uRam0000000146aeee24;
  uVar55 = ((uint)(((fVar9 - fVar32 * fVar32 * fVar24 * fVar9) * fVar32 + fVar32) * fVar5) ^
           uRam0000000146aeee28) & -(uint)(fRam0000000146aeee48 <= fVar24) ^ uRam0000000146aeee28;
  uVar56 = ((uint)(((fVar10 - fVar37 * fVar37 * fVar27 * fVar10) * fVar37 + fVar37) * fVar6) ^
           uRam0000000146aeee2c) & -(uint)(fRam0000000146aeee4c <= fVar27) ^ uRam0000000146aeee2c;
  puVar2 = (uint *)(*param_1 + lVar15 * 0x30);
  *puVar2 = ((uint)(((fVar7 - fVar30 * fVar30 * fVar38 * fVar7) * fVar30 + fVar30) * fVar3) ^
            _DAT_146aeee20) & -(uint)(_DAT_146aeee40 <= fVar38) ^ _DAT_146aeee20;
  puVar2[1] = uVar54;
  puVar2[2] = uVar55;
  puVar2[3] = uVar56;
  *(undefined1 *)(lVar15 + param_1[3]) = 1;
  return;
}



// FUNCTION 14224bd60 FUN_14224bd60 body=307 status=ok
// SIG undefined FUN_14224bd60(void)

undefined8 FUN_14224bd60(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  uVar6 = 0;
  uVar8 = uVar6;
  if (0 < (int)param_1[1]) {
    do {
      local_30 = *(int *)(param_2 + 1);
      lVar5 = (longlong)local_30;
      lVar4 = *param_1;
      _Src = (void *)*param_2;
      local_38 = (void *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,local_30,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar5 << 3);
      }
      plVar1 = *(longlong **)(uVar6 + lVar4);
      if (plVar1 != (longlong *)0x0) {
        lVar4 = UTextureRenderTarget::StaticClass();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0x360))(plVar1,&local_38), cVar3 != '\0')) {
          if (local_38 != (void *)0x0) {
            FMemory::Free();
          }
          return 1;
        }
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
      uVar7 = (int)uVar8 + 1;
      uVar6 = uVar6 + 0x20;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)param_1[1]);
  }
  return 0;
}



// FUNCTION 14224bea0 FUN_14224bea0 body=376 status=ok
// SIG undefined FUN_14224bea0(void)

undefined8 FUN_14224bea0(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar10;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong uVar9;
  
  plVar5 = (longlong *)*param_2;
  iVar1 = (int)param_2[1];
  plVar2 = plVar5 + iVar1;
  for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
    if (*plVar5 == param_1) {
      return 1;
    }
  }
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
  }
  uVar9 = 0;
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1;
  uVar10 = uVar9;
  if (0 < *(int *)(param_1 + 0xc0)) {
    do {
      local_30 = (int)param_2[1];
      lVar7 = (longlong)local_30;
      lVar6 = *(longlong *)(param_1 + 0xb8);
      _Src = (void *)*param_2;
      local_38 = (void *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,local_30,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar7 << 3);
      }
      plVar2 = *(longlong **)(uVar10 + lVar6);
      if (plVar2 != (longlong *)0x0) {
        lVar6 = UTextureRenderTarget::StaticClass();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (cVar4 = (**(code **)(*plVar2 + 0x360))(plVar2,&local_38), cVar4 != '\0')) {
          if (local_38 != (void *)0x0) {
            FMemory::Free();
          }
          return 1;
        }
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar10 = uVar10 + 0x20;
    } while ((int)uVar8 < *(int *)(param_1 + 0xc0));
  }
  return 0;
}



// FUNCTION 14224c020 ContainRecursive body=85 status=ok
// SIG undefined ContainRecursive(void)

undefined1 UAnimCompositeBase::ContainRecursive(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation/AnimCompositeBase.h"
             ,0x13a,L"Pure virtual not implemented (%s)",L"UAnimCompositeBase::ContainRecursive");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation/AnimCompositeBase.h"
             ,0x13a,L"Pure virtual not implemented (%s)",L"UAnimCompositeBase::ContainRecursive");
  return 0;
}



// FUNCTION 14224c080 FUN_14224c080 body=1993 status=ok
// SIG undefined FUN_14224c080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14224c080(undefined8 param_1,longlong *param_2,float *param_3,int param_4,int param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  undefined1 auVar5 [12];
  float fVar9;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar12 [16];
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  int local_res20 [2];
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
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  local_res20[0] = param_4;
  if (param_5 == 0) {
    FTransform::SetToRelativeTransform(param_3,param_1);
  }
  else if (param_5 != 1) {
    if (param_5 == 2) {
      if (param_4 == -1) {
        return;
      }
      FBoneContainer::GetParentBoneIndex(param_2[2],&param_5,local_res20);
      if (param_5 == -1) {
        return;
      }
      pfVar4 = (float *)FUN_140611730();
      auVar6 = *(undefined1 (*) [16])(param_3 + 8);
      fVar49 = auVar6._0_4_;
      fVar50 = auVar6._4_4_;
      fVar15 = auVar6._8_4_;
      fVar16 = auVar6._12_4_;
      auVar8 = *(undefined1 (*) [16])(pfVar4 + 8);
      fVar13 = auVar8._0_4_;
      fVar17 = auVar8._4_4_;
      fVar11 = auVar8._8_4_;
      fVar29 = auVar8._12_4_;
      auVar6 = minps(auVar6,auVar8);
      auVar8._4_4_ = -(uint)(auVar6._4_4_ < fRam0000000146aeeec4);
      auVar8._0_4_ = -(uint)(auVar6._0_4_ < _DAT_146aeeec0);
      auVar8._8_4_ = -(uint)(auVar6._8_4_ < fRam0000000146aeeec8);
      auVar8._12_4_ = -(uint)(auVar6._12_4_ < fRam0000000146aeeecc);
      iVar2 = movmskps((int)param_2,auVar8);
      if (iVar2 == 0) {
        fVar40 = *pfVar4;
        fVar41 = pfVar4[1];
        fVar42 = pfVar4[2];
        fVar36 = pfVar4[3];
        fVar18 = *param_3;
        fVar14 = param_3[1];
        fVar10 = param_3[2];
        fVar19 = param_3[3];
        fVar20 = pfVar4[4];
        fVar22 = pfVar4[5];
        fVar25 = pfVar4[6];
        fVar27 = pfVar4[7];
        fVar44 = param_3[4] * fVar13;
        fVar45 = param_3[5] * fVar17;
        fVar46 = param_3[6] * fVar11;
        fVar47 = param_3[7] * fVar29;
        fVar32 = fVar19 * fVar40 * _DAT_146aeee90;
        fVar34 = fVar10 * fVar40 * fRam0000000146aeee94;
        fVar35 = fVar14 * fVar40 * fRam0000000146aeee98;
        fVar43 = fVar18 * fVar40 * fRam0000000146aeee9c;
        param_3[8] = fVar49 * fVar13;
        param_3[9] = fVar50 * fVar17;
        param_3[10] = fVar15 * fVar11;
        param_3[0xb] = fVar16 * fVar29;
        fVar17 = fVar41 * fVar19 * fRam0000000146aeee84;
        fVar15 = fVar41 * fVar18 * fRam0000000146aeee88;
        fVar11 = fVar41 * fVar14 * fRam0000000146aeee8c;
        fVar49 = fVar42 * fVar18 * fRam0000000146aeee74;
        fVar13 = fVar42 * fVar19 * fRam0000000146aeee78;
        fVar50 = fVar42 * fVar10 * fRam0000000146aeee7c;
        *param_3 = fVar32 + fVar36 * fVar18 + fVar41 * fVar10 * _DAT_146aeee80 +
                   fVar42 * fVar14 * _DAT_146aeee70;
        param_3[1] = fVar34 + fVar36 * fVar14 + fVar17 + fVar49;
        param_3[2] = fVar35 + fVar36 * fVar10 + fVar15 + fVar13;
        param_3[3] = fVar43 + fVar36 * fVar19 + fVar11 + fVar50;
        fVar49 = fVar46 * fVar41 - fVar45 * fVar42;
        fVar13 = fVar44 * fVar42 - fVar46 * fVar40;
        fVar50 = fVar45 * fVar40 - fVar44 * fVar41;
        fVar17 = fVar47 * fVar36 - fVar47 * fVar36;
        fVar49 = fVar49 + fVar49;
        fVar13 = fVar13 + fVar13;
        fVar50 = fVar50 + fVar50;
        fVar17 = fVar17 + fVar17;
        param_3[4] = (fVar50 * fVar41 - fVar13 * fVar42) + fVar49 * fVar36 + fVar44 + fVar20;
        param_3[5] = (fVar49 * fVar42 - fVar50 * fVar40) + fVar13 * fVar36 + fVar45 + fVar22;
        param_3[6] = (fVar13 * fVar40 - fVar49 * fVar41) + fVar50 * fVar36 + fVar46 + fVar25;
        param_3[7] = (fVar17 * fVar36 - fVar17 * fVar36) + fVar17 * fVar36 + fVar47 + fVar27;
        return;
      }
      fVar36 = *pfVar4;
      fVar18 = pfVar4[1];
      fVar14 = pfVar4[2];
      fVar10 = pfVar4[3];
      fVar40 = pfVar4[4];
      fVar41 = pfVar4[5];
      fVar42 = pfVar4[6];
      fVar19 = fVar18 + fVar18;
      fVar20 = fVar14 + fVar14;
      fVar25 = fVar36 * (fVar36 + fVar36);
      fVar22 = fVar10 * (fVar36 + fVar36);
      fVar45 = fVar13 * fVar49;
      fVar46 = fVar17 * fVar50;
      fVar47 = fVar11 * fVar15;
      fVar48 = fVar29 * fVar16;
      fVar43 = (fVar10 * fVar20 + fVar36 * fVar19) * fVar13;
      fVar44 = (fVar10 * fVar19 + fVar36 * fVar20) * fVar11;
      fVar32 = fVar17 * (fVar36 * fVar19 - fVar10 * fVar20);
      fVar34 = fVar11 * (fVar18 * fVar20 - fVar22);
      fVar35 = fVar13 * (fVar36 * fVar20 - fVar10 * fVar19);
      fVar10 = (float)((uint)((_DAT_146aeee50 - (fVar14 * fVar20 + fVar18 * fVar19)) * fVar13) &
                      _DAT_146aeee60);
      fVar13 = (float)((uint)((fRam0000000146aeee54 - (fVar14 * fVar20 + fVar25)) * fVar17) &
                      uRam0000000146aeee64);
      fVar14 = (float)((uint)((fRam0000000146aeee58 - (fVar18 * fVar19 + fVar25)) * fVar11) &
                      uRam0000000146aeee68);
      fVar19 = (float)((uint)((fRam0000000146aeee5c - (fVar25 + fVar25)) * fVar29) &
                      uRam0000000146aeee6c);
      auVar5._4_4_ = fVar43;
      auVar5._0_4_ = (fVar22 + fVar18 * fVar20) * fVar17;
      auVar5._8_4_ = fVar19;
      fVar17 = *param_3;
      fVar11 = param_3[1];
      fVar29 = param_3[2];
      fVar36 = param_3[3];
      fVar18 = fVar17 + fVar17;
      fVar20 = fVar11 + fVar11;
      fVar22 = fVar29 + fVar29;
      fVar25 = fVar17 * fVar18;
      fVar27 = fVar11 * fVar20;
      fVar29 = fVar29 * fVar22;
    }
    else {
      if (param_5 != 3) {
        return;
      }
      if (param_4 == -1) {
        return;
      }
      lVar3 = param_2[3];
      if (*(char *)(param_4 + lVar3) == '\0') {
        lVar3 = FUN_14060c680(param_2,param_4);
      }
      auVar6 = *(undefined1 (*) [16])(param_3 + 8);
      fVar49 = auVar6._0_4_;
      fVar50 = auVar6._4_4_;
      fVar15 = auVar6._8_4_;
      fVar16 = auVar6._12_4_;
      pfVar4 = (float *)((longlong)param_4 * 0x30 + *param_2);
      auVar8 = *(undefined1 (*) [16])(pfVar4 + 8);
      fVar13 = auVar8._0_4_;
      fVar17 = auVar8._4_4_;
      fVar11 = auVar8._8_4_;
      fVar29 = auVar8._12_4_;
      auVar6 = minps(auVar6,auVar8);
      auVar7._4_4_ = -(uint)(auVar6._4_4_ < fRam0000000146aeeec4);
      auVar7._0_4_ = -(uint)(auVar6._0_4_ < _DAT_146aeeec0);
      auVar7._8_4_ = -(uint)(auVar6._8_4_ < fRam0000000146aeeec8);
      auVar7._12_4_ = -(uint)(auVar6._12_4_ < fRam0000000146aeeecc);
      iVar2 = movmskps((int)lVar3,auVar7);
      if (iVar2 == 0) {
        fVar40 = *pfVar4;
        fVar41 = pfVar4[1];
        fVar42 = pfVar4[2];
        fVar36 = pfVar4[3];
        fVar18 = *param_3;
        fVar14 = param_3[1];
        fVar10 = param_3[2];
        fVar19 = param_3[3];
        fVar26 = fVar13 * param_3[4];
        fVar28 = fVar17 * param_3[5];
        fVar30 = fVar11 * param_3[6];
        fVar31 = fVar29 * param_3[7];
        fVar20 = pfVar4[4];
        fVar22 = pfVar4[5];
        fVar25 = pfVar4[6];
        fVar27 = pfVar4[7];
        fVar48 = fVar19 * fVar40 * _DAT_146aeee90;
        fVar21 = fVar10 * fVar40 * fRam0000000146aeee94;
        fVar23 = fVar14 * fVar40 * fRam0000000146aeee98;
        fVar24 = fVar18 * fVar40 * fRam0000000146aeee9c;
        fVar44 = fVar41 * fVar10 * _DAT_146aeee80;
        fVar45 = fVar41 * fVar19 * fRam0000000146aeee84;
        fVar46 = fVar41 * fVar18 * fRam0000000146aeee88;
        fVar47 = fVar41 * fVar14 * fRam0000000146aeee8c;
        fVar32 = fVar42 * fVar14 * _DAT_146aeee70;
        fVar34 = fVar42 * fVar18 * fRam0000000146aeee74;
        fVar35 = fVar42 * fVar19 * fRam0000000146aeee78;
        fVar43 = fVar42 * fVar10 * fRam0000000146aeee7c;
        param_3[8] = fVar13 * fVar49;
        param_3[9] = fVar17 * fVar50;
        param_3[10] = fVar11 * fVar15;
        param_3[0xb] = fVar29 * fVar16;
        *param_3 = fVar48 + fVar18 * fVar36 + fVar44 + fVar32;
        param_3[1] = fVar21 + fVar14 * fVar36 + fVar45 + fVar34;
        param_3[2] = fVar23 + fVar10 * fVar36 + fVar46 + fVar35;
        param_3[3] = fVar24 + fVar19 * fVar36 + fVar47 + fVar43;
        fVar49 = fVar30 * fVar41 - fVar28 * fVar42;
        fVar13 = fVar26 * fVar42 - fVar30 * fVar40;
        fVar50 = fVar28 * fVar40 - fVar26 * fVar41;
        fVar17 = fVar31 * fVar36 - fVar31 * fVar36;
        fVar49 = fVar49 + fVar49;
        fVar13 = fVar13 + fVar13;
        fVar50 = fVar50 + fVar50;
        fVar17 = fVar17 + fVar17;
        param_3[4] = (fVar50 * fVar41 - fVar13 * fVar42) + fVar36 * fVar49 + fVar26 + fVar20;
        param_3[5] = (fVar49 * fVar42 - fVar50 * fVar40) + fVar36 * fVar13 + fVar28 + fVar22;
        param_3[6] = (fVar13 * fVar40 - fVar49 * fVar41) + fVar36 * fVar50 + fVar30 + fVar25;
        param_3[7] = (fVar17 * fVar36 - fVar17 * fVar36) + fVar36 * fVar17 + fVar31 + fVar27;
        return;
      }
      fVar36 = *pfVar4;
      fVar18 = pfVar4[1];
      fVar14 = pfVar4[2];
      fVar10 = pfVar4[3];
      fVar40 = pfVar4[4];
      fVar41 = pfVar4[5];
      fVar42 = pfVar4[6];
      fVar19 = fVar18 + fVar18;
      fVar22 = fVar14 + fVar14;
      fVar45 = fVar49 * fVar13;
      fVar46 = fVar50 * fVar17;
      fVar47 = fVar15 * fVar11;
      fVar48 = fVar16 * fVar29;
      fVar25 = (fVar36 + fVar36) * fVar36;
      fVar20 = (fVar36 + fVar36) * fVar10;
      fVar43 = (fVar22 * fVar10 + fVar19 * fVar36) * fVar13;
      fVar44 = (fVar19 * fVar10 + fVar22 * fVar36) * fVar11;
      fVar32 = fVar17 * (fVar19 * fVar36 - fVar22 * fVar10);
      fVar34 = fVar11 * (fVar22 * fVar18 - fVar20);
      fVar35 = fVar13 * (fVar22 * fVar36 - fVar19 * fVar10);
      fVar10 = (float)((uint)((_DAT_146aeee50 - (fVar22 * fVar14 + fVar19 * fVar18)) * fVar13) &
                      _DAT_146aeee60);
      fVar13 = (float)((uint)((fRam0000000146aeee54 - (fVar22 * fVar14 + fVar25)) * fVar17) &
                      uRam0000000146aeee64);
      fVar14 = (float)((uint)((fRam0000000146aeee58 - (fVar19 * fVar18 + fVar25)) * fVar11) &
                      uRam0000000146aeee68);
      fVar19 = (float)((uint)((fRam0000000146aeee5c - (fVar25 + fVar25)) * fVar29) &
                      uRam0000000146aeee6c);
      auVar5._4_4_ = fVar43;
      auVar5._0_4_ = (fVar20 + fVar22 * fVar18) * fVar17;
      auVar5._8_4_ = fVar19;
      fVar17 = *param_3;
      fVar11 = param_3[1];
      fVar29 = param_3[2];
      fVar36 = param_3[3];
      fVar18 = fVar17 + fVar17;
      fVar20 = fVar11 + fVar11;
      fVar22 = fVar29 + fVar29;
      fVar25 = fVar18 * fVar17;
      fVar27 = fVar20 * fVar11;
      fVar29 = fVar22 * fVar29;
    }
    fVar30 = fRam0000000146aeeec8;
    fVar28 = fRam0000000146aeeec4;
    fVar26 = _DAT_146aeeec0;
    fVar24 = fRam0000000146aeee58;
    fVar23 = fRam0000000146aeee54;
    fVar21 = _DAT_146aeee50;
    fVar31 = auVar5._0_4_;
    fVar9 = auVar5._8_4_;
    fVar37 = (fVar22 * fVar36 + fVar20 * fVar17) * fVar49;
    fVar38 = (fVar18 * fVar36 + fVar22 * fVar11) * fVar50;
    fVar39 = (fVar20 * fVar36 + fVar22 * fVar17) * fVar15;
    fVar33 = fVar50 * (fVar20 * fVar17 - fVar22 * fVar36);
    fVar18 = fVar15 * (fVar22 * fVar11 - fVar18 * fVar36);
    fVar36 = fVar49 * (fVar22 * fVar17 - fVar20 * fVar36);
    fVar11 = (float)((uint)((_DAT_146aeee50 - (fVar29 + fVar27)) * fVar49) & _DAT_146aeee60);
    fVar29 = (float)((uint)((fRam0000000146aeee54 - (fVar29 + fVar25)) * fVar50) &
                    uRam0000000146aeee64);
    fVar15 = (float)((uint)((fRam0000000146aeee58 - (fVar27 + fVar25)) * fVar15) &
                    uRam0000000146aeee68);
    fVar16 = (float)((uint)((fRam0000000146aeee5c - (fVar25 + fVar25)) * fVar16) &
                    uRam0000000146aeee6c);
    fVar49 = param_3[4];
    fVar50 = param_3[5];
    fVar17 = param_3[6];
    local_e8 = fVar37 * fVar32 + fVar11 * fVar10 + fVar36 * fVar44 + fVar16 * fVar40;
    fStack_e4 = fVar37 * fVar13 + fVar11 * fVar43 + fVar36 * fVar34 + fVar16 * fVar41;
    fStack_e0 = fVar37 * fVar31 + fVar11 * fVar35 + fVar36 * fVar14 + fVar16 * fVar42;
    fStack_dc = fVar37 * fVar9 + fVar11 * fVar19 + fVar36 * fVar19 + fVar16 * fRam0000000146aeee5c;
    local_d8 = fVar29 * fVar32 + fVar33 * fVar10 + fVar38 * fVar44 + fVar16 * fVar40;
    fStack_d4 = fVar29 * fVar13 + fVar33 * fVar43 + fVar38 * fVar34 + fVar16 * fVar41;
    fStack_d0 = fVar29 * fVar31 + fVar33 * fVar35 + fVar38 * fVar14 + fVar16 * fVar42;
    fStack_cc = fVar29 * fVar9 + fVar33 * fVar19 + fVar38 * fVar19 + fVar16 * fRam0000000146aeee5c;
    local_c8 = fVar18 * fVar32 + fVar39 * fVar10 + fVar15 * fVar44 + fVar16 * fVar40;
    fStack_c4 = fVar18 * fVar13 + fVar39 * fVar43 + fVar15 * fVar34 + fVar16 * fVar41;
    fStack_c0 = fVar18 * fVar31 + fVar39 * fVar35 + fVar15 * fVar14 + fVar16 * fVar42;
    fStack_bc = fVar18 * fVar9 + fVar39 * fVar19 + fVar15 * fVar19 + fVar16 * fRam0000000146aeee5c;
    local_b8 = fVar50 * fVar32 + fVar49 * fVar10 + fVar17 * fVar44 + fRam0000000146aeee5c * fVar40;
    fStack_b4 = fVar50 * fVar13 + fVar49 * fVar43 + fVar17 * fVar34 + fRam0000000146aeee5c * fVar41;
    fStack_b0 = fVar50 * fVar31 + fVar49 * fVar35 + fVar17 * fVar14 + fRam0000000146aeee5c * fVar42;
    fStack_ac = fVar50 * fVar9 + fVar49 * fVar19 + fVar17 * fVar19 +
                fRam0000000146aeee5c * fRam0000000146aeee5c;
    FMatrix::RemoveScaling(&local_e8);
    fVar49 = (float)(-(uint)(fVar26 <= fVar45) & (_DAT_146aeeeb0 ^ (uint)fVar21) ^ _DAT_146aeeeb0);
    fVar13 = (float)(-(uint)(fVar28 <= fVar46) & (uRam0000000146aeeeb4 ^ (uint)fVar23) ^
                    uRam0000000146aeeeb4);
    fVar50 = (float)(-(uint)(fVar30 <= fVar47) & (uRam0000000146aeeeb8 ^ (uint)fVar24) ^
                    uRam0000000146aeeeb8);
    local_e8 = local_e8 * fVar49;
    fStack_e4 = fStack_e4 * fVar49;
    fStack_e0 = fStack_e0 * fVar49;
    fStack_d4 = fStack_d4 * fVar13;
    fStack_d0 = fStack_d0 * fVar13;
    local_d8 = local_d8 * fVar13;
    fStack_c4 = fStack_c4 * fVar50;
    fStack_c0 = fStack_c0 * fVar50;
    local_c8 = local_c8 * fVar50;
    FQuat::FQuat(&local_f8,&local_e8);
    auVar12._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
    auVar12._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
    auVar12._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
    auVar12._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
    fVar15 = auVar12._4_4_ + auVar12._0_4_;
    fVar11 = auVar12._8_4_ + auVar12._4_4_;
    fVar16 = auVar12._12_4_ + auVar12._8_4_;
    fVar29 = auVar12._0_4_ + auVar12._12_4_;
    auVar1._4_4_ = fVar11;
    auVar1._0_4_ = fVar15;
    auVar1._8_4_ = fVar16;
    auVar1._12_4_ = fVar29;
    auVar6 = rsqrtps(auVar12,auVar1);
    fVar49 = auVar6._0_4_;
    fVar13 = auVar6._4_4_;
    fVar50 = auVar6._8_4_;
    fVar17 = auVar6._12_4_;
    fVar49 = (_DAT_146aeee30 - fVar49 * fVar49 * fVar15 * _DAT_146aeee30) * fVar49 + fVar49;
    fVar13 = (fRam0000000146aeee34 - fVar13 * fVar13 * fVar11 * fRam0000000146aeee34) * fVar13 +
             fVar13;
    fVar50 = (fRam0000000146aeee38 - fVar50 * fVar50 * fVar16 * fRam0000000146aeee38) * fVar50 +
             fVar50;
    fVar17 = (fRam0000000146aeee3c - fVar17 * fVar17 * fVar29 * fRam0000000146aeee3c) * fVar17 +
             fVar17;
    auVar6._4_4_ = fStack_b4;
    auVar6._0_4_ = local_b8;
    auVar6._8_4_ = fStack_b0;
    fVar49 = (float)(((uint)(((_DAT_146aeee30 - fVar49 * fVar49 * fVar15 * _DAT_146aeee30) * fVar49
                             + fVar49) * local_f8) ^ _DAT_146aeee20) & -(uint)(1e-08 <= fVar15) ^
                    _DAT_146aeee20);
    fVar13 = (float)(((uint)(((fRam0000000146aeee34 -
                              fVar13 * fVar13 * fVar11 * fRam0000000146aeee34) * fVar13 + fVar13) *
                            fStack_f4) ^ uRam0000000146aeee24) & -(uint)(1e-08 <= fVar11) ^
                    uRam0000000146aeee24);
    fVar50 = (float)(((uint)(((fRam0000000146aeee38 -
                              fVar50 * fVar50 * fVar16 * fRam0000000146aeee38) * fVar50 + fVar50) *
                            fStack_f0) ^ uRam0000000146aeee28) & -(uint)(1e-08 <= fVar16) ^
                    uRam0000000146aeee28);
    fVar17 = (float)(((uint)(((fRam0000000146aeee3c -
                              fVar17 * fVar17 * fVar29 * fRam0000000146aeee3c) * fVar17 + fVar17) *
                            fStack_ec) ^ uRam0000000146aeee2c) & -(uint)(1e-08 <= fVar29) ^
                    uRam0000000146aeee2c);
    auVar6._12_4_ = 0;
    *(undefined1 (*) [16])(param_3 + 4) = auVar6;
    param_3[8] = fVar45;
    param_3[9] = fVar46;
    param_3[10] = fVar47;
    param_3[0xb] = fVar48;
    *param_3 = fVar49;
    param_3[1] = fVar13;
    param_3[2] = fVar50;
    param_3[3] = fVar17;
  }
  return;
}



// FUNCTION 14224c850 FUN_14224c850 body=1567 status=ok
// SIG undefined FUN_14224c850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14224c850(float *param_1,longlong *param_2,float *param_3,uint param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  uint local_res20 [2];
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
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  fVar31 = fRam0000000146aeeec8;
  fVar30 = fRam0000000146aeeec4;
  fVar22 = _DAT_146aeeec0;
  fVar48 = fRam0000000146aeee58;
  fVar47 = fRam0000000146aeee54;
  fVar46 = _DAT_146aeee50;
  local_res20[0] = param_4;
  if (param_5 == 0) {
    auVar15 = *(undefined1 (*) [16])(param_1 + 8);
    fVar21 = auVar15._0_4_;
    fVar1 = auVar15._4_4_;
    fVar3 = auVar15._8_4_;
    fVar5 = auVar15._12_4_;
    auVar16 = *(undefined1 (*) [16])(param_3 + 8);
    fVar23 = auVar16._0_4_;
    fVar2 = auVar16._4_4_;
    fVar4 = auVar16._8_4_;
    fVar6 = auVar16._12_4_;
    auVar15 = minps(auVar16,auVar15);
    auVar16._4_4_ = -(uint)(auVar15._4_4_ < fRam0000000146aeeec4);
    auVar16._0_4_ = -(uint)(auVar15._0_4_ < _DAT_146aeeec0);
    auVar16._8_4_ = -(uint)(auVar15._8_4_ < fRam0000000146aeeec8);
    auVar16._12_4_ = -(uint)(auVar15._12_4_ < fRam0000000146aeeecc);
    iVar11 = movmskps((int)&stack0x00000000,auVar16);
    if (iVar11 != 0) {
      fVar32 = *param_1;
      fVar33 = param_1[1];
      fVar8 = param_1[2];
      fVar17 = param_1[3];
      fVar24 = fVar33 + fVar33;
      fVar26 = fVar8 + fVar8;
      fVar9 = param_1[4];
      fVar10 = param_1[5];
      fVar14 = param_1[6];
      fVar28 = fVar32 * (fVar32 + fVar32);
      fVar25 = (fVar32 + fVar32) * fVar17;
      fVar43 = (fVar26 * fVar17 + fVar24 * fVar32) * fVar21;
      fVar44 = (fVar25 + fVar26 * fVar33) * fVar1;
      fVar45 = (fVar24 * fVar17 + fVar26 * fVar32) * fVar3;
      fVar34 = fVar1 * (fVar24 * fVar32 - fVar26 * fVar17);
      fVar36 = fVar3 * (fVar26 * fVar33 - fVar25);
      fVar38 = fVar21 * (fVar26 * fVar32 - fVar24 * fVar17);
      fVar25 = (float)((uint)((_DAT_146aeee50 - (fVar8 * fVar26 + fVar33 * fVar24)) * fVar21) &
                      _DAT_146aeee60);
      fVar26 = (float)((uint)((fRam0000000146aeee54 - (fVar8 * fVar26 + fVar28)) * fVar1) &
                      uRam0000000146aeee64);
      fVar19 = (float)((uint)((fRam0000000146aeee58 - (fVar33 * fVar24 + fVar28)) * fVar3) &
                      uRam0000000146aeee68);
      fVar20 = (float)((uint)((fRam0000000146aeee5c - (fVar28 + fVar28)) * fVar5) &
                      uRam0000000146aeee6c);
      fVar32 = *param_3;
      fVar33 = param_3[1];
      fVar8 = param_3[2];
      fVar17 = param_3[3];
      fVar28 = fVar33 + fVar33;
      fVar27 = fVar8 + fVar8;
      fVar29 = fVar32 * (fVar32 + fVar32);
      fVar24 = (fVar32 + fVar32) * fVar17;
      fVar40 = (fVar27 * fVar17 + fVar28 * fVar32) * fVar23;
      fVar41 = (fVar24 + fVar27 * fVar33) * fVar2;
      fVar42 = (fVar28 * fVar17 + fVar27 * fVar32) * fVar4;
      fVar35 = fVar2 * (fVar28 * fVar32 - fVar27 * fVar17);
      fVar37 = fVar4 * (fVar27 * fVar33 - fVar24);
      fVar39 = fVar23 * (fVar27 * fVar32 - fVar28 * fVar17);
      fVar17 = (float)((uint)((_DAT_146aeee50 - (fVar8 * fVar27 + fVar33 * fVar28)) * fVar23) &
                      _DAT_146aeee60);
      fVar24 = (float)((uint)((fRam0000000146aeee54 - (fVar8 * fVar27 + fVar29)) * fVar2) &
                      uRam0000000146aeee64);
      fVar28 = (float)((uint)((fRam0000000146aeee58 - (fVar33 * fVar28 + fVar29)) * fVar4) &
                      uRam0000000146aeee68);
      fVar27 = (float)((uint)((fRam0000000146aeee5c - (fVar29 + fVar29)) * fVar6) &
                      uRam0000000146aeee6c);
      fVar32 = param_3[4];
      fVar33 = param_3[5];
      fVar8 = param_3[6];
      local_e8 = fVar40 * fVar34 + fVar17 * fVar25 + fVar39 * fVar45 + fVar27 * fVar9;
      fStack_e4 = fVar40 * fVar26 + fVar17 * fVar43 + fVar39 * fVar36 + fVar27 * fVar10;
      fStack_e0 = fVar40 * fVar44 + fVar17 * fVar38 + fVar39 * fVar19 + fVar27 * fVar14;
      fStack_dc = fVar40 * fVar20 + fVar17 * fVar20 + fVar39 * fVar20 +
                  fVar27 * fRam0000000146aeee5c;
      local_d8 = fVar24 * fVar34 + fVar35 * fVar25 + fVar41 * fVar45 + fVar27 * fVar9;
      fStack_d4 = fVar24 * fVar26 + fVar35 * fVar43 + fVar41 * fVar36 + fVar27 * fVar10;
      fStack_d0 = fVar24 * fVar44 + fVar35 * fVar38 + fVar41 * fVar19 + fVar27 * fVar14;
      fStack_cc = fVar24 * fVar20 + fVar35 * fVar20 + fVar41 * fVar20 +
                  fVar27 * fRam0000000146aeee5c;
      local_c8 = fVar37 * fVar34 + fVar42 * fVar25 + fVar28 * fVar45 + fVar27 * fVar9;
      fStack_c4 = fVar37 * fVar26 + fVar42 * fVar43 + fVar28 * fVar36 + fVar27 * fVar10;
      fStack_c0 = fVar37 * fVar44 + fVar42 * fVar38 + fVar28 * fVar19 + fVar27 * fVar14;
      fStack_bc = fVar37 * fVar20 + fVar42 * fVar20 + fVar28 * fVar20 +
                  fVar27 * fRam0000000146aeee5c;
      local_b8 = fVar33 * fVar34 + fVar32 * fVar25 + fVar8 * fVar45 + fRam0000000146aeee5c * fVar9;
      fStack_b4 = fVar33 * fVar26 + fVar32 * fVar43 + fVar8 * fVar36 + fRam0000000146aeee5c * fVar10
      ;
      fStack_b0 = fVar33 * fVar44 + fVar32 * fVar38 + fVar8 * fVar19 + fRam0000000146aeee5c * fVar14
      ;
      fStack_ac = fVar33 * fVar20 + fVar32 * fVar20 + fVar8 * fVar20 +
                  fRam0000000146aeee5c * fRam0000000146aeee5c;
      FMatrix::RemoveScaling(&local_e8);
      fVar46 = (float)(-(uint)(fVar22 <= fVar23 * fVar21) & (_DAT_146aeeeb0 ^ (uint)fVar46) ^
                      _DAT_146aeeeb0);
      fVar47 = (float)(-(uint)(fVar30 <= fVar2 * fVar1) & (uRam0000000146aeeeb4 ^ (uint)fVar47) ^
                      uRam0000000146aeeeb4);
      fVar48 = (float)(-(uint)(fVar31 <= fVar4 * fVar3) & (uRam0000000146aeeeb8 ^ (uint)fVar48) ^
                      uRam0000000146aeeeb8);
      local_e8 = local_e8 * fVar46;
      fStack_e4 = fStack_e4 * fVar46;
      fStack_e0 = fStack_e0 * fVar46;
      fStack_d4 = fStack_d4 * fVar47;
      fStack_d0 = fStack_d0 * fVar47;
      local_d8 = local_d8 * fVar47;
      fStack_c4 = fStack_c4 * fVar48;
      fStack_c0 = fStack_c0 * fVar48;
      local_c8 = local_c8 * fVar48;
      FQuat::FQuat(&local_f8,&local_e8);
      auVar18._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
      auVar18._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
      auVar18._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
      auVar18._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
      fVar30 = auVar18._4_4_ + auVar18._0_4_;
      fVar31 = auVar18._8_4_ + auVar18._4_4_;
      fVar32 = auVar18._12_4_ + auVar18._8_4_;
      fVar33 = auVar18._0_4_ + auVar18._12_4_;
      auVar7._4_4_ = fVar31;
      auVar7._0_4_ = fVar30;
      auVar7._8_4_ = fVar32;
      auVar7._12_4_ = fVar33;
      auVar15 = rsqrtps(auVar18,auVar7);
      fVar46 = auVar15._0_4_;
      fVar47 = auVar15._4_4_;
      fVar48 = auVar15._8_4_;
      fVar22 = auVar15._12_4_;
      fVar46 = (_DAT_146aeee30 - fVar46 * fVar46 * fVar30 * _DAT_146aeee30) * fVar46 + fVar46;
      fVar47 = (fRam0000000146aeee34 - fVar47 * fVar47 * fVar31 * fRam0000000146aeee34) * fVar47 +
               fVar47;
      fVar48 = (fRam0000000146aeee38 - fVar48 * fVar48 * fVar32 * fRam0000000146aeee38) * fVar48 +
               fVar48;
      fVar22 = (fRam0000000146aeee3c - fVar22 * fVar22 * fVar33 * fRam0000000146aeee3c) * fVar22 +
               fVar22;
      auVar15._4_4_ = fStack_b4;
      auVar15._0_4_ = local_b8;
      auVar15._8_4_ = fStack_b0;
      fVar46 = (float)(((uint)(((_DAT_146aeee30 - fVar46 * fVar46 * fVar30 * _DAT_146aeee30) *
                                fVar46 + fVar46) * local_f8) ^ _DAT_146aeee20) &
                       -(uint)(1e-08 <= fVar30) ^ _DAT_146aeee20);
      fVar47 = (float)(((uint)(((fRam0000000146aeee34 -
                                fVar47 * fVar47 * fVar31 * fRam0000000146aeee34) * fVar47 + fVar47)
                              * fStack_f4) ^ uRam0000000146aeee24) & -(uint)(1e-08 <= fVar31) ^
                      uRam0000000146aeee24);
      fVar48 = (float)(((uint)(((fRam0000000146aeee38 -
                                fVar48 * fVar48 * fVar32 * fRam0000000146aeee38) * fVar48 + fVar48)
                              * fStack_f0) ^ uRam0000000146aeee28) & -(uint)(1e-08 <= fVar32) ^
                      uRam0000000146aeee28);
      fVar22 = (float)(((uint)(((fRam0000000146aeee3c -
                                fVar22 * fVar22 * fVar33 * fRam0000000146aeee3c) * fVar22 + fVar22)
                              * fStack_ec) ^ uRam0000000146aeee2c) & -(uint)(1e-08 <= fVar33) ^
                      uRam0000000146aeee2c);
      param_3[8] = fVar23 * fVar21;
      param_3[9] = fVar2 * fVar1;
      param_3[10] = fVar4 * fVar3;
      param_3[0xb] = fVar6 * fVar5;
      auVar15._12_4_ = 0;
      *(undefined1 (*) [16])(param_3 + 4) = auVar15;
      *param_3 = fVar46;
      param_3[1] = fVar47;
      param_3[2] = fVar48;
      param_3[3] = fVar22;
      return;
    }
    fVar46 = *param_1;
    fVar47 = param_1[1];
    fVar48 = param_1[2];
    fVar22 = param_1[3];
    fVar30 = *param_3;
    fVar31 = param_3[1];
    fVar32 = param_3[2];
    fVar33 = param_3[3];
    fVar8 = param_1[4];
    fVar17 = param_1[5];
    fVar9 = param_1[6];
    fVar10 = param_1[7];
    fVar37 = param_3[4] * fVar21;
    fVar38 = param_3[5] * fVar1;
    fVar39 = param_3[6] * fVar3;
    fVar40 = param_3[7] * fVar5;
    fVar29 = fVar33 * fVar46 * _DAT_146aeee90;
    fVar34 = fVar32 * fVar46 * fRam0000000146aeee94;
    fVar35 = fVar31 * fVar46 * fRam0000000146aeee98;
    fVar36 = fVar30 * fVar46 * fRam0000000146aeee9c;
    fVar19 = fVar47 * fVar32 * _DAT_146aeee80;
    fVar28 = fVar47 * fVar33 * fRam0000000146aeee84;
    fVar20 = fVar47 * fVar30 * fRam0000000146aeee88;
    fVar27 = fVar47 * fVar31 * fRam0000000146aeee8c;
    fVar14 = fVar48 * fVar31 * _DAT_146aeee70;
    fVar25 = fVar48 * fVar30 * fRam0000000146aeee74;
    fVar26 = fVar48 * fVar33 * fRam0000000146aeee78;
    fVar24 = fVar48 * fVar32 * fRam0000000146aeee7c;
    param_3[8] = fVar23 * fVar21;
    param_3[9] = fVar2 * fVar1;
    param_3[10] = fVar4 * fVar3;
    param_3[0xb] = fVar6 * fVar5;
    *param_3 = fVar29 + fVar22 * fVar30 + fVar19 + fVar14;
    param_3[1] = fVar34 + fVar22 * fVar31 + fVar28 + fVar25;
    param_3[2] = fVar35 + fVar22 * fVar32 + fVar20 + fVar26;
    param_3[3] = fVar36 + fVar22 * fVar33 + fVar27 + fVar24;
    fVar30 = fVar39 * fVar47 - fVar38 * fVar48;
    fVar31 = fVar37 * fVar48 - fVar39 * fVar46;
    fVar21 = fVar38 * fVar46 - fVar37 * fVar47;
    fVar23 = fVar40 * fVar22 - fVar40 * fVar22;
    fVar30 = fVar30 + fVar30;
    fVar31 = fVar31 + fVar31;
    fVar21 = fVar21 + fVar21;
    fVar23 = fVar23 + fVar23;
    param_3[4] = (fVar21 * fVar47 - fVar31 * fVar48) + fVar22 * fVar30 + fVar37 + fVar8;
    param_3[5] = (fVar30 * fVar48 - fVar21 * fVar46) + fVar22 * fVar31 + fVar38 + fVar17;
    param_3[6] = (fVar31 * fVar46 - fVar30 * fVar47) + fVar22 * fVar21 + fVar39 + fVar9;
    param_3[7] = (fVar23 * fVar22 - fVar23 * fVar22) + fVar22 * fVar23 + fVar40 + fVar10;
    return;
  }
  if (param_5 == 1) {
    return;
  }
  if (param_5 == 2) {
    FBoneContainer::GetParentBoneIndex(param_2[2],&param_5,local_res20);
    uVar12 = (ulonglong)param_5;
    if (param_5 == -1) {
      return;
    }
    uVar13 = uVar12;
    if (*(char *)(uVar12 + param_2[3]) != '\0') goto LAB_14224c8d5;
  }
  else {
    if (param_5 != 3) {
      return;
    }
    uVar13 = (ulonglong)(int)param_4;
    uVar12 = uVar13;
    if (*(char *)(uVar13 + param_2[3]) != '\0') goto LAB_14224c8d5;
    uVar12 = (ulonglong)param_4;
  }
  FUN_14060c680(param_2,uVar12);
  uVar12 = uVar13;
LAB_14224c8d5:
  FTransform::SetToRelativeTransform(param_3,uVar12 * 0x30 + *param_2);
  return;
}



// FUNCTION 14224ce70 ConvertPoseToAdditive body=104 status=ok
// SIG undefined ConvertPoseToAdditive(void)

void FAnimationRuntime::ConvertPoseToAdditive(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_2[1];
  iVar2 = 0;
  if ((int)lVar1 != 0) {
    do {
      FUN_14224d080(*param_1 + (longlong)iVar2 * 0x30,*param_2 + (longlong)iVar2 * 0x30);
      iVar2 = iVar2 + 1;
    } while (iVar2 != (int)lVar1);
  }
  return;
}



// FUNCTION 14224cee0 ConvertPoseToMeshRotation body=202 status=ok
// SIG undefined ConvertPoseToMeshRotation(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAnimationRuntime::ConvertPoseToMeshRotation(longlong *param_1)

{
  float *pfVar1;
  longlong lVar2;
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
  float fVar18;
  float fVar19;
  int local_res8 [2];
  int local_res10 [6];
  
  local_res8[0] = 1;
  if (1 < (int)param_1[1]) {
    do {
      FBoneContainer::GetParentBoneIndex(param_1[2],local_res10,local_res8);
      lVar2 = *param_1;
      pfVar1 = (float *)(lVar2 + (longlong)local_res8[0] * 0x30);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar1 = (float *)(lVar2 + (longlong)local_res10[0] * 0x30);
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      fVar14 = fVar5 * fVar7 * fRam0000000146aeee94;
      fVar15 = fVar4 * fVar7 * fRam0000000146aeee98;
      fVar16 = fVar3 * fVar7 * fRam0000000146aeee9c;
      fVar11 = fVar6 * fVar8 * fRam0000000146aeee84;
      fVar12 = fVar3 * fVar8 * fRam0000000146aeee88;
      fVar13 = fVar4 * fVar8 * fRam0000000146aeee8c;
      fVar17 = fVar3 * fVar9 * fRam0000000146aeee74;
      fVar18 = fVar6 * fVar9 * fRam0000000146aeee78;
      fVar19 = fVar5 * fVar9 * fRam0000000146aeee7c;
      pfVar1 = (float *)(lVar2 + (longlong)local_res8[0] * 0x30);
      *pfVar1 = fVar6 * fVar7 * _DAT_146aeee90 + fVar10 * fVar3 + fVar5 * fVar8 * _DAT_146aeee80 +
                fVar4 * fVar9 * _DAT_146aeee70;
      pfVar1[1] = fVar14 + fVar10 * fVar4 + fVar11 + fVar17;
      pfVar1[2] = fVar15 + fVar10 * fVar5 + fVar12 + fVar18;
      pfVar1[3] = fVar16 + fVar10 * fVar6 + fVar13 + fVar19;
      local_res8[0] = local_res8[0] + 1;
    } while (local_res8[0] < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14224cfb0 ConvertTrackPosToAnimPos body=194 status=ok
// SIG undefined ConvertTrackPosToAnimPos(void)

float FAnimSegment::ConvertTrackPosToAnimPos(longlong *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*param_1 == 0) {
    fVar4 = 1.0;
  }
  else {
    fVar4 = *(float *)(*param_1 + 0x94);
  }
  fVar4 = fVar4 * *(float *)((longlong)param_1 + 0x14);
  fVar6 = 1.0;
  if (1e-08 < ABS(fVar4)) {
    fVar6 = fVar4;
  }
  fVar7 = *(float *)(param_1 + 2) - *(float *)((longlong)param_1 + 0xc);
  fVar5 = (*param_2 - *(float *)(param_1 + 1)) * fVar6;
  fVar4 = ABS(fVar5) / fVar7;
  iVar2 = (int)ROUND((fVar4 + fVar4) - 0.5) >> 1;
  iVar3 = (int)param_1[3] + -1;
  iVar1 = 0;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  if (iVar2 <= iVar1) {
    iVar1 = iVar2;
  }
  fVar4 = *(float *)((longlong)param_1 + 0xc);
  if (fVar6 < 0.0) {
    fVar4 = *(float *)(param_1 + 2);
  }
  return (fVar5 - (float)iVar1 * fVar7) + fVar4;
}



// FUNCTION 14224d080 FUN_14224d080 body=551 status=ok
// SIG undefined FUN_14224d080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14224d080(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar3 = param_2[3];
  fVar14 = *param_1;
  fVar15 = param_1[1];
  fVar16 = param_1[2];
  fVar20 = param_1[3];
  fVar13 = -*param_2;
  fVar7 = -param_2[1];
  fVar6 = -param_2[2];
  fVar17 = fVar3 * fVar14 * _DAT_146aeee90 + fVar20 * fVar13 + fVar6 * fVar15 * _DAT_146aeee80 +
           fVar7 * fVar16 * _DAT_146aeee70;
  fVar18 = fVar6 * fVar14 * fRam0000000146aeee94 + fVar20 * fVar7 +
           fVar3 * fVar15 * fRam0000000146aeee84 + fVar13 * fVar16 * fRam0000000146aeee74;
  fVar19 = fVar7 * fVar14 * fRam0000000146aeee98 + fVar20 * fVar6 +
           fVar13 * fVar15 * fRam0000000146aeee88 + fVar3 * fVar16 * fRam0000000146aeee78;
  fVar20 = fVar13 * fVar14 * fRam0000000146aeee9c + fVar20 * fVar3 +
           fVar7 * fVar15 * fRam0000000146aeee8c + fVar6 * fVar16 * fRam0000000146aeee7c;
  *param_1 = fVar17;
  param_1[1] = fVar18;
  param_1[2] = fVar19;
  param_1[3] = fVar20;
  auVar5._4_4_ = param_1[5] - param_2[5];
  auVar5._0_4_ = param_1[4] - param_2[4];
  auVar5._8_4_ = param_1[6] - param_2[6];
  auVar5._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 4) = auVar5;
  fVar16 = fRam0000000146aeee3c;
  fVar15 = fRam0000000146aeee38;
  fVar14 = fRam0000000146aeee34;
  fVar3 = _DAT_146aeee30;
  if (1e-08 < ABS(param_2[8])) {
    fVar7 = 1.0 / param_2[8];
  }
  else {
    fVar7 = 0.0;
  }
  if (1e-08 < ABS(param_2[9])) {
    fVar6 = 1.0 / param_2[9];
  }
  else {
    fVar6 = 0.0;
  }
  if (1e-08 < ABS(param_2[10])) {
    fVar13 = 1.0 / param_2[10];
  }
  else {
    fVar13 = 0.0;
  }
  auVar1._4_4_ = param_1[9] * fVar6 - 1.0;
  auVar1._0_4_ = param_1[8] * fVar7 - 1.0;
  auVar1._8_4_ = param_1[10] * fVar13 - 1.0;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 8) = auVar1;
  auVar4._0_4_ = fVar17 * fVar17 + fVar19 * fVar19;
  auVar4._4_4_ = fVar18 * fVar18 + fVar20 * fVar20;
  auVar4._8_4_ = fVar19 * fVar19 + fVar17 * fVar17;
  auVar4._12_4_ = fVar20 * fVar20 + fVar18 * fVar18;
  fVar9 = auVar4._4_4_ + auVar4._0_4_;
  fVar10 = auVar4._8_4_ + auVar4._4_4_;
  fVar11 = auVar4._12_4_ + auVar4._8_4_;
  fVar12 = auVar4._0_4_ + auVar4._12_4_;
  auVar2._4_4_ = fVar10;
  auVar2._0_4_ = fVar9;
  auVar2._8_4_ = fVar11;
  auVar2._12_4_ = fVar12;
  auVar5 = rsqrtps(auVar4,auVar2);
  fVar7 = auVar5._0_4_;
  fVar6 = auVar5._4_4_;
  fVar13 = auVar5._8_4_;
  fVar8 = auVar5._12_4_;
  fVar7 = (fVar3 - fVar7 * fVar7 * fVar9 * fVar3) * fVar7 + fVar7;
  fVar6 = (fVar14 - fVar6 * fVar6 * fVar10 * fVar14) * fVar6 + fVar6;
  fVar13 = (fVar15 - fVar13 * fVar13 * fVar11 * fVar15) * fVar13 + fVar13;
  fVar8 = (fVar16 - fVar8 * fVar8 * fVar12 * fVar16) * fVar8 + fVar8;
  fVar14 = (float)(((uint)(((fVar14 - fVar6 * fVar6 * fVar10 * fVar14) * fVar6 + fVar6) * fVar18) ^
                   uRam0000000146aeee24) & -(uint)(fRam0000000146aeee44 <= fVar10) ^
                  uRam0000000146aeee24);
  fVar15 = (float)(((uint)(((fVar15 - fVar13 * fVar13 * fVar11 * fVar15) * fVar13 + fVar13) * fVar19
                          ) ^ uRam0000000146aeee28) & -(uint)(fRam0000000146aeee48 <= fVar11) ^
                  uRam0000000146aeee28);
  fVar16 = (float)(((uint)(((fVar16 - fVar8 * fVar8 * fVar12 * fVar16) * fVar8 + fVar8) * fVar20) ^
                   uRam0000000146aeee2c) & -(uint)(fRam0000000146aeee4c <= fVar12) ^
                  uRam0000000146aeee2c);
  *param_1 = (float)(((uint)(((fVar3 - fVar7 * fVar7 * fVar9 * fVar3) * fVar7 + fVar7) * fVar17) ^
                     _DAT_146aeee20) & -(uint)(_DAT_146aeee40 <= fVar9) ^ _DAT_146aeee20);
  param_1[1] = fVar14;
  param_1[2] = fVar15;
  param_1[3] = fVar16;
  return;
}



// FUNCTION 14224d2b0 FUN_14224d2b0 body=272 status=ok
// SIG undefined FUN_14224d2b0(void)

longlong * FUN_14224d2b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  FSoftObjectPath::TryLoad(param_1 + 0x28);
  lVar1 = FUN_141796280(param_1 + 0x28);
  if (DAT_146b17150 != 0) {
    lVar1 = FUN_141796280(DAT_146b17150 + 0x198);
  }
  if (lVar1 == 0) {
    return (longlong *)0x0;
  }
  lVar2 = FUN_1429c1c30();
  lVar4 = lVar1;
  while (lVar4 != lVar2) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    if (lVar4 == 0) {
      return (longlong *)0x0;
    }
  }
  lVar2 = FUN_1429c1c30();
  lVar4 = lVar1;
  do {
    lVar5 = lVar1;
    if (lVar4 == lVar2) break;
    lVar4 = *(longlong *)(lVar4 + 0x30);
    lVar5 = 0;
  } while (lVar4 != 0);
  FUN_1417846f0(param_2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  plVar3 = (longlong *)FUN_1417985e0(lVar5,param_2,0,0,0,0,0,0,0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x288))(plVar3,param_1);
  }
  return plVar3;
}



// FUNCTION 14224d3c0 CreateMaskWeights body=616 status=ok
// SIG undefined CreateMaskWeights(void)

void FAnimationRuntime::CreateMaskWeights(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  
  if (param_3 != 0) {
    iVar4 = *(int *)((longlong)param_1 + 0xc);
    iVar1 = *(int *)(param_3 + 0x80);
    *(undefined4 *)(param_1 + 1) = 0;
    iVar7 = 0;
    if ((iVar4 < iVar1) && (iVar7 = 0, iVar4 != iVar1)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo();
      iVar4 = *(int *)((longlong)param_1 + 0xc);
      iVar7 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar7 + iVar1;
    if (iVar4 < iVar7 + iVar1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
    }
    ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar7 * 8),0,(longlong)iVar1 * 8);
    uVar13 = 0;
    uVar14 = uVar13;
    if (0 < (int)param_2[1]) {
      do {
        uVar8 = 0;
        lVar2 = *param_2;
        uVar10 = uVar8;
        if (0 < *(int *)(uVar13 + 8 + lVar2)) {
          do {
            lVar12 = *(longlong *)(uVar8 + *(longlong *)(uVar13 + lVar2));
            if (lVar12 != 0) {
              if (*(int *)(param_3 + 0xf0) != *(int *)(param_3 + 0x11c)) {
                lVar5 = *(longlong *)(param_3 + 0x128);
                if (*(longlong *)(param_3 + 0x128) == 0) {
                  lVar5 = param_3 + 0x120;
                }
                iVar4 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar12 >> 0x20) + (int)lVar12)
                                         & (longlong)*(int *)(param_3 + 0x130) - 1U) * 4);
                if (iVar4 != -1) {
                  do {
                    lVar5 = *(longlong *)(param_3 + 0xe8) + (longlong)iVar4 * 0x18;
                    if (*(longlong *)(*(longlong *)(param_3 + 0xe8) + (longlong)iVar4 * 0x18) ==
                        lVar12) {
                      if (iVar4 != -1) goto LAB_14224d51f;
                      break;
                    }
                    iVar4 = *(int *)(lVar5 + 0x10);
                  } while (iVar4 != -1);
                }
              }
              lVar5 = 0;
LAB_14224d51f:
              piVar6 = (int *)(lVar5 + 8);
              if (lVar5 == 0) {
                piVar6 = (int *)0x0;
              }
              if (piVar6 != (int *)0x0) {
                iVar4 = *piVar6;
                lVar12 = (longlong)iVar4;
                if (iVar4 != -1) {
                  iVar7 = *(int *)(uVar8 + 8 + *(longlong *)(uVar13 + lVar2));
                  fVar16 = 1.0;
                  iVar3 = iVar4;
                  if (iVar7 != 0) {
                    fVar16 = 1.0 / (float)iVar7;
                  }
                  for (; lVar12 < iVar1; lVar12 = lVar12 + 1) {
                    iVar11 = 0;
                    iVar7 = iVar3;
                    if (iVar4 <= iVar3) {
                      do {
                        if (iVar7 == iVar4) {
                          if (iVar11 != -1) {
                            lVar5 = *param_1;
                            *(int *)(lVar5 + lVar12 * 8) = (int)uVar14;
                            fVar15 = (float)(iVar11 + 1) * fVar16 +
                                     *(float *)(lVar5 + 4 + lVar12 * 8);
                            if (0.0 <= fVar15) {
                              if (1.0 <= fVar15) {
                                fVar15 = 1.0;
                              }
                            }
                            else {
                              fVar15 = 0.0;
                            }
                            *(float *)(lVar5 + 4 + lVar12 * 8) = fVar15;
                          }
                          break;
                        }
                        iVar11 = iVar11 + 1;
                        iVar7 = *(int *)(*(longlong *)(param_3 + 0x78) + 8 + (longlong)iVar7 * 0x10)
                        ;
                      } while (iVar7 != -1);
                    }
                    iVar3 = iVar3 + 1;
                  }
                }
              }
            }
            uVar9 = (int)uVar10 + 1;
            uVar8 = uVar8 + 0x10;
            uVar10 = (ulonglong)uVar9;
          } while ((int)uVar9 < *(int *)(uVar13 + 8 + lVar2));
        }
        uVar9 = (int)uVar14 + 1;
        uVar13 = uVar13 + 0x10;
        uVar14 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)param_2[1]);
    }
  }
  return;
}



// FUNCTION 14224d630 FUN_14224d630 body=20 status=ok
// SIG undefined FUN_14224d630(void)

void FUN_14224d630(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FNavigationQueryFilter::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 14224d650 DiscardNavigationDataChunks body=244 status=ok
// SIG undefined DiscardNavigationDataChunks(void)

void FNavigationSystem::DiscardNavigationDataChunks(void)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  plVar3 = (longlong *)UDynamicEntryBox::GetAllEntries();
  plVar6 = (longlong *)*plVar3;
  plVar3 = plVar6 + (int)plVar3[1];
  if (plVar6 != plVar3) {
    uVar7 = 0;
    do {
      lVar1 = *plVar6;
      plVar8 = *(longlong **)(lVar1 + 0x108);
      uVar10 = (longlong)*(int *)(lVar1 + 0x110) & 0x1fffffffffffffff;
      if (plVar8 + *(int *)(lVar1 + 0x110) < plVar8) {
        uVar10 = uVar7;
      }
      uVar9 = uVar7;
      if (uVar10 != 0) {
        do {
          if (*plVar8 != 0) {
            uVar2 = *(uint *)(*plVar8 + 0xc);
            uVar4 = uVar7;
            if ((int)uVar2 < (int)DAT_1469e91c4) {
              uVar5 = uVar2 & 0xffff;
              if ((int)uVar2 < 0) {
                uVar2 = uVar2 + 0xffff;
                uVar5 = uVar5 - 0x10000;
              }
              uVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                      (longlong)(int)uVar5 * 0x18;
            }
            *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) | 0x20000000;
          }
          plVar8 = plVar8 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar10);
      }
      *(undefined4 *)(lVar1 + 0x110) = 0;
      if (*(int *)(lVar1 + 0x114) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar1 + 0x108,0);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3);
  }
  return;
}



// FUNCTION 14224d750 FUN_14224d750 body=121 status=ok
// SIG undefined FUN_14224d750(void)

void FUN_14224d750(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0xb8));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x340))(plVar1,param_2,param_3);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0xc0));
  }
  return;
}



// FUNCTION 14224d7d0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_1422a7830(param_2,param_1);
  return;
}



// FUNCTION 14224d7e0 FUN_14224d7e0 body=215 status=ok
// SIG undefined FUN_14224d7e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14224d7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar3 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_142250530(param_2,&local_68);
  uVar2 = local_60 & 0xffffffff;
  lVar1 = local_68;
  uVar5 = uVar3;
  if (0 < (int)local_60) {
    do {
      if (*(char *)(*(longlong *)(uVar3 + lVar1) + 0x199) != '\0') {
        FUN_142291ab0(*(longlong *)(uVar3 + lVar1),local_58,*(undefined4 *)(uVar3 + 8 + lVar1),
                      *(undefined4 *)(uVar3 + 0xc + lVar1));
        FUN_142245a70(param_5,local_58);
        uVar2 = local_60 & 0xffffffff;
        lVar1 = local_68;
      }
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 0x10;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)uVar2);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14224d8c0 FUN_14224d8c0 body=26 status=ok
// SIG undefined FUN_14224d8c0(void)

void FUN_14224d8c0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014224d8d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x458) + 0x548))();
    return;
  }
  return;
}



// FUNCTION 14224d8e0 FUN_14224d8e0 body=23 status=ok
// SIG undefined FUN_14224d8e0(void)

void FUN_14224d8e0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014224d8ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x458) + 0x550))();
    return;
  }
  return;
}



// FUNCTION 14224d900 FUN_14224d900 body=1649 status=ok
// SIG undefined FUN_14224d900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14224d900(longlong param_1,longlong *param_2,longlong *param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  float *pfVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar32 [16];
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
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
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
  
  lVar17 = param_2[1];
  uVar26 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  iVar22 = *(int *)((longlong)param_3 + 0xc);
  uVar25 = uVar26;
  if (iVar22 != (int)lVar17) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_3,(int)lVar17);
    uVar25 = (ulonglong)*(uint *)(param_3 + 1);
    iVar22 = *(int *)((longlong)param_3 + 0xc);
  }
  iVar23 = (int)param_2[1] + (int)uVar25;
  *(int *)(param_3 + 1) = iVar23;
  if (iVar22 < iVar23) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3);
    iVar23 = (int)param_3[1];
  }
  fVar21 = fRam0000000146aeee9c;
  fVar20 = fRam0000000146aeee98;
  fVar19 = fRam0000000146aeee94;
  fVar18 = _DAT_146aeee90;
  uVar25 = uVar26;
  uVar28 = uVar26;
  if (0 < iVar23) {
    do {
      fVar45 = fRam0000000146aeeec8;
      fVar44 = fRam0000000146aeeec4;
      fVar38 = _DAT_146aeeec0;
      fVar62 = fRam0000000146aeee58;
      fVar61 = fRam0000000146aeee54;
      fVar60 = _DAT_146aeee50;
      iVar22 = *(int *)(uVar28 + 8 + *(longlong *)(param_1 + 0x20));
      if (iVar22 == -1) {
        lVar17 = *param_2;
        lVar4 = *param_3;
        uVar16 = ((undefined8 *)(uVar26 + lVar17))[1];
        *(undefined8 *)(uVar26 + lVar4) = *(undefined8 *)(uVar26 + lVar17);
        ((undefined8 *)(uVar26 + lVar4))[1] = uVar16;
        puVar2 = (undefined8 *)(uVar26 + 0x10 + lVar17);
        uVar16 = puVar2[1];
        puVar3 = (undefined8 *)(uVar26 + 0x10 + lVar4);
        *puVar3 = *puVar2;
        puVar3[1] = uVar16;
        puVar2 = (undefined8 *)(uVar26 + 0x20 + lVar17);
        uVar16 = puVar2[1];
        puVar3 = (undefined8 *)(uVar26 + 0x20 + lVar4);
        *puVar3 = *puVar2;
        puVar3[1] = uVar16;
      }
      else {
        lVar17 = *param_3;
        lVar4 = *param_2;
        pfVar24 = (float *)((longlong)iVar22 * 0x30 + lVar17);
        auVar29 = *(undefined1 (*) [16])(uVar26 + 0x20 + lVar4);
        fVar5 = auVar29._0_4_;
        fVar7 = auVar29._4_4_;
        fVar9 = auVar29._8_4_;
        fVar11 = auVar29._12_4_;
        auVar30 = *(undefined1 (*) [16])(pfVar24 + 8);
        fVar6 = auVar30._0_4_;
        fVar8 = auVar30._4_4_;
        fVar10 = auVar30._8_4_;
        fVar12 = auVar30._12_4_;
        auVar29 = minps(auVar29,auVar30);
        auVar30._4_4_ = -(uint)(auVar29._4_4_ < fRam0000000146aeeec4);
        auVar30._0_4_ = -(uint)(auVar29._0_4_ < _DAT_146aeeec0);
        auVar30._8_4_ = -(uint)(auVar29._8_4_ < fRam0000000146aeeec8);
        auVar30._12_4_ = -(uint)(auVar29._12_4_ < fRam0000000146aeeecc);
        iVar22 = movmskps((int)*(longlong *)(param_1 + 0x20),auVar30);
        if (iVar22 == 0) {
          fVar60 = *pfVar24;
          fVar61 = pfVar24[1];
          fVar62 = pfVar24[2];
          fVar38 = pfVar24[3];
          pfVar1 = (float *)(uVar26 + lVar4);
          fVar44 = *pfVar1;
          fVar45 = pfVar1[1];
          fVar46 = pfVar1[2];
          fVar47 = pfVar1[3];
          pfVar1 = (float *)(uVar26 + 0x10 + lVar4);
          fVar49 = *pfVar1 * fVar6;
          fVar50 = pfVar1[1] * fVar8;
          fVar51 = pfVar1[2] * fVar10;
          fVar52 = pfVar1[3] * fVar12;
          fVar36 = fVar61 * fVar47 * fRam0000000146aeee84;
          fVar37 = fVar61 * fVar44 * fRam0000000146aeee88;
          fVar43 = fVar61 * fVar45 * fRam0000000146aeee8c;
          fVar35 = fVar62 * fVar44 * fRam0000000146aeee74;
          fVar31 = fVar62 * fVar47 * fRam0000000146aeee78;
          fVar34 = fVar62 * fVar46 * fRam0000000146aeee7c;
          fVar42 = fVar51 * fVar61 - fVar50 * fVar62;
          fVar40 = fVar49 * fVar62 - fVar51 * fVar60;
          fVar41 = fVar50 * fVar60 - fVar49 * fVar61;
          fVar48 = fVar52 * fVar38 - fVar52 * fVar38;
          fVar42 = fVar42 + fVar42;
          fVar40 = fVar40 + fVar40;
          fVar41 = fVar41 + fVar41;
          fVar48 = fVar48 + fVar48;
          fVar14 = pfVar24[4];
          fVar15 = pfVar24[5];
          fVar39 = pfVar24[6];
          fVar33 = pfVar24[7];
          pfVar24 = (float *)(lVar17 + uVar26);
          *pfVar24 = fVar47 * fVar60 * fVar18 + fVar38 * fVar44 + fVar61 * fVar46 * _DAT_146aeee80 +
                     fVar62 * fVar45 * _DAT_146aeee70;
          pfVar24[1] = fVar46 * fVar60 * fVar19 + fVar38 * fVar45 + fVar36 + fVar35;
          pfVar24[2] = fVar45 * fVar60 * fVar20 + fVar38 * fVar46 + fVar37 + fVar31;
          pfVar24[3] = fVar44 * fVar60 * fVar21 + fVar38 * fVar47 + fVar43 + fVar34;
          pfVar24 = (float *)(lVar17 + 0x20 + uVar26);
          *pfVar24 = fVar5 * fVar6;
          pfVar24[1] = fVar7 * fVar8;
          pfVar24[2] = fVar9 * fVar10;
          pfVar24[3] = fVar11 * fVar12;
          pfVar24 = (float *)(lVar17 + 0x10 + uVar26);
          *pfVar24 = (fVar41 * fVar61 - fVar40 * fVar62) + fVar38 * fVar42 + fVar49 + fVar14;
          pfVar24[1] = (fVar42 * fVar62 - fVar41 * fVar60) + fVar38 * fVar40 + fVar50 + fVar15;
          pfVar24[2] = (fVar40 * fVar60 - fVar42 * fVar61) + fVar38 * fVar41 + fVar51 + fVar39;
          pfVar24[3] = (fVar48 * fVar38 - fVar48 * fVar38) + fVar38 * fVar48 + fVar52 + fVar33;
        }
        else {
          fVar46 = *pfVar24;
          fVar47 = pfVar24[1];
          fVar14 = pfVar24[2];
          fVar15 = pfVar24[3];
          fVar33 = fVar47 + fVar47;
          fVar35 = fVar14 + fVar14;
          fVar42 = fVar46 * (fVar46 + fVar46);
          fVar39 = fVar15 * (fVar46 + fVar46);
          fVar57 = (fVar15 * fVar35 + fVar46 * fVar33) * fVar6;
          fVar58 = (fVar39 + fVar47 * fVar35) * fVar8;
          fVar59 = (fVar15 * fVar33 + fVar46 * fVar35) * fVar10;
          fVar48 = fVar8 * (fVar46 * fVar33 - fVar15 * fVar35);
          fVar50 = fVar10 * (fVar47 * fVar35 - fVar39);
          fVar52 = fVar6 * (fVar46 * fVar35 - fVar15 * fVar33);
          fVar46 = pfVar24[4];
          fVar15 = pfVar24[5];
          fVar39 = pfVar24[6];
          fVar31 = (float)((uint)((_DAT_146aeee50 - (fVar14 * fVar35 + fVar47 * fVar33)) * fVar6) &
                          _DAT_146aeee60);
          fVar34 = (float)((uint)((fRam0000000146aeee54 - (fVar14 * fVar35 + fVar42)) * fVar8) &
                          uRam0000000146aeee64);
          fVar36 = (float)((uint)((fRam0000000146aeee58 - (fVar47 * fVar33 + fVar42)) * fVar10) &
                          uRam0000000146aeee68);
          fVar37 = (float)((uint)((fRam0000000146aeee5c - (fVar42 + fVar42)) * fVar12) &
                          uRam0000000146aeee6c);
          pfVar24 = (float *)(uVar26 + lVar4);
          fVar47 = *pfVar24;
          fVar14 = pfVar24[1];
          fVar33 = pfVar24[2];
          fVar35 = pfVar24[3];
          fVar40 = fVar14 + fVar14;
          fVar41 = fVar33 + fVar33;
          fVar43 = fVar47 * (fVar47 + fVar47);
          fVar42 = (fVar47 + fVar47) * fVar35;
          fVar54 = (fVar41 * fVar35 + fVar40 * fVar47) * fVar5;
          fVar55 = (fVar42 + fVar41 * fVar14) * fVar7;
          fVar56 = (fVar40 * fVar35 + fVar41 * fVar47) * fVar9;
          fVar49 = fVar7 * (fVar40 * fVar47 - fVar41 * fVar35);
          fVar51 = fVar9 * (fVar41 * fVar14 - fVar42);
          fVar53 = fVar5 * (fVar41 * fVar47 - fVar40 * fVar35);
          fVar35 = (float)((uint)((_DAT_146aeee50 - (fVar33 * fVar41 + fVar14 * fVar40)) * fVar5) &
                          _DAT_146aeee60);
          fVar42 = (float)((uint)((fRam0000000146aeee54 - (fVar33 * fVar41 + fVar43)) * fVar7) &
                          uRam0000000146aeee64);
          fVar40 = (float)((uint)((fRam0000000146aeee58 - (fVar14 * fVar40 + fVar43)) * fVar9) &
                          uRam0000000146aeee68);
          fVar41 = (float)((uint)((fRam0000000146aeee5c - (fVar43 + fVar43)) * fVar11) &
                          uRam0000000146aeee6c);
          pfVar24 = (float *)(uVar26 + 0x10 + lVar4);
          fVar47 = *pfVar24;
          fVar14 = pfVar24[1];
          fVar33 = pfVar24[2];
          local_108 = fVar54 * fVar48 + fVar35 * fVar31 + fVar53 * fVar59 + fVar41 * fVar46;
          fStack_104 = fVar54 * fVar34 + fVar35 * fVar57 + fVar53 * fVar50 + fVar41 * fVar15;
          fStack_100 = fVar54 * fVar58 + fVar35 * fVar52 + fVar53 * fVar36 + fVar41 * fVar39;
          fStack_fc = fVar54 * fVar37 + fVar35 * fVar37 + fVar53 * fVar37 +
                      fVar41 * fRam0000000146aeee5c;
          local_f8 = fVar42 * fVar48 + fVar49 * fVar31 + fVar55 * fVar59 + fVar41 * fVar46;
          fStack_f4 = fVar42 * fVar34 + fVar49 * fVar57 + fVar55 * fVar50 + fVar41 * fVar15;
          fStack_f0 = fVar42 * fVar58 + fVar49 * fVar52 + fVar55 * fVar36 + fVar41 * fVar39;
          fStack_ec = fVar42 * fVar37 + fVar49 * fVar37 + fVar55 * fVar37 +
                      fVar41 * fRam0000000146aeee5c;
          local_e8 = fVar51 * fVar48 + fVar56 * fVar31 + fVar40 * fVar59 + fVar41 * fVar46;
          fStack_e4 = fVar51 * fVar34 + fVar56 * fVar57 + fVar40 * fVar50 + fVar41 * fVar15;
          fStack_e0 = fVar51 * fVar58 + fVar56 * fVar52 + fVar40 * fVar36 + fVar41 * fVar39;
          fStack_dc = fVar51 * fVar37 + fVar56 * fVar37 + fVar40 * fVar37 +
                      fVar41 * fRam0000000146aeee5c;
          local_d8 = fVar14 * fVar48 + fVar47 * fVar31 + fVar33 * fVar59 +
                     fRam0000000146aeee5c * fVar46;
          fStack_d4 = fVar14 * fVar34 + fVar47 * fVar57 + fVar33 * fVar50 +
                      fRam0000000146aeee5c * fVar15;
          fStack_d0 = fVar14 * fVar58 + fVar47 * fVar52 + fVar33 * fVar36 +
                      fRam0000000146aeee5c * fVar39;
          fStack_cc = fVar14 * fVar37 + fVar47 * fVar37 + fVar33 * fVar37 +
                      fRam0000000146aeee5c * fRam0000000146aeee5c;
          FMatrix::RemoveScaling(&local_108);
          fVar60 = (float)(-(uint)(fVar38 <= fVar5 * fVar6) & (_DAT_146aeeeb0 ^ (uint)fVar60) ^
                          _DAT_146aeeeb0);
          fVar61 = (float)(-(uint)(fVar44 <= fVar7 * fVar8) & (uRam0000000146aeeeb4 ^ (uint)fVar61)
                          ^ uRam0000000146aeeeb4);
          fVar62 = (float)(-(uint)(fVar45 <= fVar9 * fVar10) & (uRam0000000146aeeeb8 ^ (uint)fVar62)
                          ^ uRam0000000146aeeeb8);
          local_108 = local_108 * fVar60;
          fStack_100 = fStack_100 * fVar60;
          fStack_104 = fStack_104 * fVar60;
          fStack_f0 = fStack_f0 * fVar61;
          fStack_f4 = fStack_f4 * fVar61;
          local_f8 = local_f8 * fVar61;
          fStack_e0 = fStack_e0 * fVar62;
          local_e8 = local_e8 * fVar62;
          fStack_e4 = fStack_e4 * fVar62;
          FQuat::FQuat(&local_118,&local_108);
          lVar17 = *param_3;
          auVar32._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
          auVar32._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
          auVar32._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
          auVar32._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
          fVar44 = auVar32._4_4_ + auVar32._0_4_;
          fVar45 = auVar32._8_4_ + auVar32._4_4_;
          fVar46 = auVar32._12_4_ + auVar32._8_4_;
          fVar47 = auVar32._0_4_ + auVar32._12_4_;
          auVar29._4_4_ = fVar45;
          auVar29._0_4_ = fVar44;
          auVar29._8_4_ = fVar46;
          auVar29._12_4_ = fVar47;
          auVar29 = rsqrtps(auVar32,auVar29);
          fVar60 = auVar29._0_4_;
          fVar61 = auVar29._4_4_;
          fVar62 = auVar29._8_4_;
          fVar38 = auVar29._12_4_;
          fVar60 = (_DAT_146aeee30 - fVar60 * fVar60 * fVar44 * _DAT_146aeee30) * fVar60 + fVar60;
          fVar61 = (fRam0000000146aeee34 - fVar61 * fVar61 * fVar45 * fRam0000000146aeee34) * fVar61
                   + fVar61;
          fVar62 = (fRam0000000146aeee38 - fVar62 * fVar62 * fVar46 * fRam0000000146aeee38) * fVar62
                   + fVar62;
          fVar38 = (fRam0000000146aeee3c - fVar38 * fVar38 * fVar47 * fRam0000000146aeee3c) * fVar38
                   + fVar38;
          local_118 = (float)(((uint)(((_DAT_146aeee30 - fVar60 * fVar60 * fVar44 * _DAT_146aeee30)
                                       * fVar60 + fVar60) * local_118) ^ _DAT_146aeee20) &
                              -(uint)(1e-08 <= fVar44) ^ _DAT_146aeee20);
          fStack_114 = (float)(((uint)(((fRam0000000146aeee34 -
                                        fVar61 * fVar61 * fVar45 * fRam0000000146aeee34) * fVar61 +
                                       fVar61) * fStack_114) ^ uRam0000000146aeee24) &
                               -(uint)(1e-08 <= fVar45) ^ uRam0000000146aeee24);
          fStack_110 = (float)(((uint)(((fRam0000000146aeee38 -
                                        fVar62 * fVar62 * fVar46 * fRam0000000146aeee38) * fVar62 +
                                       fVar62) * fStack_110) ^ uRam0000000146aeee28) &
                               -(uint)(1e-08 <= fVar46) ^ uRam0000000146aeee28);
          fStack_10c = (float)(((uint)(((fRam0000000146aeee3c -
                                        fVar38 * fVar38 * fVar47 * fRam0000000146aeee3c) * fVar38 +
                                       fVar38) * fStack_10c) ^ uRam0000000146aeee2c) &
                               -(uint)(1e-08 <= fVar47) ^ uRam0000000146aeee2c);
          auVar13._4_4_ = fStack_d4;
          auVar13._0_4_ = local_d8;
          auVar13._8_4_ = fStack_d0;
          auVar13._12_4_ = 0;
          *(undefined1 (*) [16])(lVar17 + 0x10 + uVar26) = auVar13;
          pfVar24 = (float *)(lVar17 + uVar26);
          *pfVar24 = local_118;
          pfVar24[1] = fStack_114;
          pfVar24[2] = fStack_110;
          pfVar24[3] = fStack_10c;
          pfVar24 = (float *)(lVar17 + 0x20 + uVar26);
          *pfVar24 = fVar5 * fVar6;
          pfVar24[1] = fVar7 * fVar8;
          pfVar24[2] = fVar9 * fVar10;
          pfVar24[3] = fVar11 * fVar12;
        }
      }
      uVar27 = (int)uVar25 + 1;
      uVar26 = uVar26 + 0x30;
      uVar25 = (ulonglong)uVar27;
      uVar28 = uVar28 + 0x10;
    } while ((int)uVar27 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 14224df80 FUN_14224df80 body=247 status=ok
// SIG undefined FUN_14224df80(void)

void FUN_14224df80(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (undefined8 *)*param_1;
  puVar9 = *(undefined8 **)(param_2[9] + 0x30);
  puVar10 = puVar9 + (longlong)*(int *)(param_2[9] + 0x38) * 6;
  puVar5 = puVar1;
  for (; puVar9 != puVar10; puVar9 = puVar9 + 6) {
    uVar7 = puVar9[1];
    *puVar5 = *puVar9;
    puVar5[1] = uVar7;
    uVar2 = *(undefined4 *)((longlong)puVar9 + 0x14);
    uVar3 = *(undefined4 *)(puVar9 + 3);
    uVar4 = *(undefined4 *)((longlong)puVar9 + 0x1c);
    *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar9 + 2);
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)puVar9 + 0x24);
    uVar3 = *(undefined4 *)(puVar9 + 5);
    uVar4 = *(undefined4 *)((longlong)puVar9 + 0x2c);
    *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar9 + 4);
    *(undefined4 *)((longlong)puVar5 + 0x24) = uVar2;
    *(undefined4 *)(puVar5 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar4;
    puVar5 = puVar5 + 6;
  }
  if (((char)param_2[0x1a] != '\0') && (lVar6 = FWeakObjectPtr::Get(param_2 + 7), lVar6 != 0)) {
    uVar12 = 0;
    uVar7 = FWeakObjectPtr::Get(param_2 + 8);
    plVar8 = (longlong *)USkeleton::GetRefLocalPoses(uVar7,0);
    uVar14 = uVar12;
    if (0 < (int)param_2[1]) {
      do {
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        uVar13 = (ulonglong)*(ushort *)(uVar14 + *param_2);
        puVar9 = (undefined8 *)((longlong)*(int *)(param_2[0xc] + uVar13 * 4) * 0x30 + *plVar8);
        uVar7 = puVar9[1];
        puVar1[uVar13 * 6] = *puVar9;
        (puVar1 + uVar13 * 6)[1] = uVar7;
        uVar7 = puVar9[3];
        puVar1[uVar13 * 6 + 2] = puVar9[2];
        (puVar1 + uVar13 * 6 + 2)[1] = uVar7;
        uVar7 = puVar9[5];
        puVar1[uVar13 * 6 + 4] = puVar9[4];
        (puVar1 + uVar13 * 6 + 4)[1] = uVar7;
        uVar14 = uVar14 + 2;
      } while ((int)uVar11 < (int)param_2[1]);
    }
  }
  return;
}



// FUNCTION 14224e080 FindPathFollowingAgentForActor body=536 status=ok
// SIG undefined FindPathFollowingAgentForActor(void)

longlong FNavigationSystem::FindPathFollowingAgentForActor(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uStack_84 = 1;
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_14224e14c;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (iStack_70 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14224e14c:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14224e212;
      uVar8 = puVar11[(longlong)iVar7 + 1];
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
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14224e212:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    lVar9 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar9 != 0) {
      uVar6 = UPathFollowingAgentInterface::GetPrivateStaticClass();
      lVar9 = UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar6);
      if (lVar9 != 0) {
        return lVar9;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return 0;
}



// FUNCTION 14224e2a0 FUN_14224e2a0 body=49 status=ok
// SIG undefined FUN_14224e2a0(void)

undefined8 FUN_14224e2a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (((0 < *(int *)(param_1 + 0xc0)) &&
      ((longlong *)**(longlong **)(param_1 + 0xb8) != (longlong *)0x0)) &&
     (uVar1 = (**(code **)(*(longlong *)**(longlong **)(param_1 + 0xb8) + 0x330))(),
     (int)uVar1 != -1)) {
    return uVar1;
  }
  return 0;
}



// FUNCTION 14224e2e0 FUN_14224e2e0 body=425 status=ok
// SIG undefined FUN_14224e2e0(void)

void FUN_14224e2e0(longlong param_1,float *param_2,float *param_3,undefined8 param_4)

{
  longlong *plVar1;
  float fVar2;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 local_res8 [2];
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x94);
  fVar3 = *(float *)(param_1 + 0x94);
  UAnimSequenceBase::GetAnimNotifiesFromDeltaPositions();
  plVar1 = (longlong *)(param_1 + 0xb8);
  if (fVar3 <= 0.0 && fVar2 != 0.0) {
    uVar6 = 0;
    if (*param_2 < *param_3) {
      local_res8[0] = 0;
      uVar7 = uVar6;
      uVar9 = uVar6;
      if (0 < *(int *)(param_1 + 0xc0)) {
        do {
          if (*(char *)(*plVar1 + 0x1c + uVar7) != '\0') {
            FUN_14224e490((longlong)(int)uVar9 * 0x20 + *plVar1,param_2,local_res8,param_4);
          }
          uVar5 = (int)uVar9 + 1;
          uVar7 = uVar7 + 0x20;
          uVar9 = (ulonglong)uVar5;
        } while ((int)uVar5 < *(int *)(param_1 + 0xc0));
        uVar7 = uVar6;
        if (0 < *(int *)(param_1 + 0xc0)) {
          do {
            if (*(char *)(uVar7 + 0x1c + *plVar1) != '\0') {
              FUN_14224e490((longlong)(int)uVar6 * 0x20 + *plVar1,param_1 + 0x90,param_3,param_4);
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            uVar7 = uVar7 + 0x20;
          } while ((int)uVar5 < *(int *)(param_1 + 0xc0));
        }
      }
    }
    else {
      uVar7 = uVar6;
      if (0 < *(int *)(param_1 + 0xc0)) {
        do {
          if (*(char *)(uVar7 + 0x1c + *plVar1) != '\0') {
            FUN_14224e490((longlong)(int)uVar6 * 0x20 + *plVar1,param_2,param_3,param_4);
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          uVar7 = uVar7 + 0x20;
        } while ((int)uVar5 < *(int *)(param_1 + 0xc0));
      }
    }
  }
  else if (*param_3 < *param_2) {
    FAnimTrack::GetAnimNotifiesFromTrackPositions(plVar1,param_2,param_1 + 0x90,param_4);
    iVar4 = 0;
    local_res8[0] = 0;
    if (0 < *(int *)(param_1 + 0xc0)) {
      lVar8 = 0;
      do {
        if (*(char *)(lVar8 + 0x1c + *plVar1) != '\0') {
          FUN_14224e490((longlong)iVar4 * 0x20 + *plVar1,local_res8,param_3,param_4);
        }
        iVar4 = iVar4 + 1;
        lVar8 = lVar8 + 0x20;
      } while (iVar4 < *(int *)(param_1 + 0xc0));
    }
  }
  else {
    FAnimTrack::GetAnimNotifiesFromTrackPositions(plVar1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 14224e490 FUN_14224e490 body=614 status=ok
// SIG undefined FUN_14224e490(void)

void FUN_14224e490(longlong *param_1,float *param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res10 [2];
  float local_res18 [4];
  float local_98 [32];
  
  fVar9 = *param_3;
  fVar8 = *param_2;
  if (fVar8 != fVar9) {
    fVar1 = *(float *)(param_1 + 1);
    bVar4 = fVar9 < fVar8;
    fVar6 = (float)FAnimSegment::GetLength();
    fVar6 = fVar6 + fVar1;
    fVar2 = fVar9;
    fVar7 = fVar8;
    if (bVar4) {
      fVar2 = fVar8;
      fVar7 = fVar9;
    }
    if (((fVar7 < fVar6) && (fVar1 < fVar2)) &&
       (plVar3 = (longlong *)*param_1, plVar3 != (longlong *)0x0)) {
      fVar7 = (float)FAnimSegment::GetValidPlayRate(param_1);
      local_98[0] = fVar8;
      if (bVar4) {
        if (fVar6 <= fVar8) {
          local_98[0] = fVar6;
        }
      }
      else if (fVar8 <= fVar1) {
        local_98[0] = fVar1;
      }
      fVar6 = (float)FAnimSegment::ConvertTrackPosToAnimPos(param_1,local_98);
      fVar1 = *(float *)((longlong)param_1 + 0xc);
      fVar2 = *(float *)(param_1 + 2);
      local_res10[0] = fVar1;
      if ((fVar1 <= fVar6) && (local_res10[0] = fVar6, fVar2 <= fVar6)) {
        local_res10[0] = fVar2;
      }
      fVar9 = ABS(fVar9 - fVar8);
      local_res18[0] = fVar2;
      if (fVar7 < 0.0 != bVar4) {
        local_res18[0] = fVar1;
        fVar1 = fVar2;
      }
      iVar5 = 1;
      if (0 < (int)param_1[3]) {
        iVar5 = (int)param_1[3];
      }
      while( true ) {
        if (iVar5 < 1) {
          return;
        }
        if (fVar9 <= 0.0) {
          return;
        }
        fVar8 = (local_res18[0] - local_res10[0]) / ABS(fVar7);
        if (ABS(fVar9) < ABS(fVar8)) break;
        (**(code **)(*plVar3 + 0x2a8))(plVar3,local_res10,local_res18,param_4);
        fVar9 = fVar9 - fVar8;
        iVar5 = iVar5 + -1;
        local_res10[0] = fVar1;
      }
      if (bVar4) {
        fVar8 = -1.0;
      }
      else {
        fVar8 = 1.0;
      }
      local_98[0] = fVar8 * fVar7 * fVar9 + local_res10[0];
      (**(code **)(*plVar3 + 0x2a8))(plVar3,local_res10,local_98,param_4);
    }
  }
  return;
}



// FUNCTION 14224e700 GetAnimNotifiesFromTrackPositions body=118 status=ok
// SIG undefined GetAnimNotifiesFromTrackPositions(void)

void FAnimTrack::GetAnimNotifiesFromTrackPositions
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < (int)param_1[1]) {
    lVar2 = 0;
    do {
      if (*(char *)(lVar2 + 0x1c + *param_1) != '\0') {
        FUN_14224e490((longlong)iVar1 * 0x20 + *param_1,param_2,param_3,param_4);
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0x20;
    } while (iVar1 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14224e780 GetAnimationData body=296 status=ok
// SIG undefined GetAnimationData(void)

longlong FAnimSegment::GetAnimationData(longlong *param_1,float param_2,float *param_3)

{
  char cVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)((longlong)param_1 + 0x1c) != '\0') {
    cVar1 = IsInRange();
    if ((cVar1 != '\0') && (*param_1 != 0)) {
      plVar2 = param_1;
      fVar3 = (float)GetValidPlayRate();
      param_2 = param_2 - *(float *)(param_1 + 1);
      if (1 < (int)param_1[3]) {
        fVar4 = (*(float *)(param_1 + 2) - *(float *)((longlong)param_1 + 0xc)) / ABS(fVar3);
        if (1e-08 < ABS(fVar4)) {
          fVar4 = (float)(int)(param_2 / fVar4) * fVar4;
          if (ABS(param_2) < ABS(fVar4)) {
            fVar4 = param_2;
          }
          param_2 = param_2 - fVar4;
        }
        else {
          AK::MemoryMgr::StartProfileThreadUsage((long)plVar2);
          param_2 = 0.0;
        }
      }
      if (0.0 < fVar3) {
        *param_3 = param_2 * fVar3 + *(float *)((longlong)param_1 + 0xc);
        return *param_1;
      }
      *param_3 = param_2 * fVar3 + *(float *)(param_1 + 2);
      return *param_1;
    }
  }
  return 0;
}



// FUNCTION 14224e8b0 FUN_14224e8b0 body=774 status=ok
// SIG undefined FUN_14224e8b0(void)

void FUN_14224e8b0(longlong *param_1,longlong *param_2,undefined8 param_3,byte *param_4)

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  byte local_68 [4];
  float local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  
  fVar15 = *(float *)(param_4 + 4);
  if (0.0 <= fVar15) {
    fVar17 = (float)FAnimTrack::GetLength();
    if (fVar15 <= fVar17) {
      fVar17 = fVar15;
    }
  }
  else {
    fVar17 = 0.0;
  }
  iVar4 = FAnimTrack::GetSegmentIndexAtTime(param_1,fVar17);
  if ((((iVar4 != -1) &&
       (plVar10 = (longlong *)((longlong)iVar4 * 0x20 + *param_1), plVar10 != (longlong *)0x0)) &&
      (*(char *)((longlong)plVar10 + 0x1c) != '\0')) &&
     ((cVar2 = FAnimSegment::IsInRange(plVar10,fVar17), cVar2 != '\0' &&
      (plVar13 = (longlong *)*plVar10, plVar13 != (longlong *)0x0)))) {
    plVar8 = plVar10;
    fVar15 = (float)FAnimSegment::GetValidPlayRate();
    fVar17 = fVar17 - *(float *)(plVar10 + 1);
    if (1 < (int)plVar10[3]) {
      fVar16 = (*(float *)(plVar10 + 2) - *(float *)((longlong)plVar10 + 0xc)) / ABS(fVar15);
      if (1e-08 < ABS(fVar16)) {
        fVar16 = (float)(int)(fVar17 / fVar16) * fVar16;
        if (ABS(fVar17) < ABS(fVar16)) {
          fVar16 = fVar17;
        }
        fVar17 = fVar17 - fVar16;
      }
      else {
        AK::MemoryMgr::StartProfileThreadUsage((long)plVar8);
        plVar13 = (longlong *)*plVar10;
        fVar17 = 0.0;
      }
    }
    if (fVar15 <= 0.0) {
      fVar16 = *(float *)(plVar10 + 2);
    }
    else {
      fVar16 = *(float *)((longlong)plVar10 + 0xc);
    }
    if (plVar13 != (longlong *)0x0) {
      local_58 = *(int *)(param_4 + 0x10);
      lVar12 = (longlong)local_58;
      local_68[0] = *param_4;
      local_64 = *(float *)(param_4 + 4);
      _Src = *(void **)(param_4 + 8);
      local_60 = (void *)0x0;
      if (local_58 == 0) {
        local_54 = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(&local_60,local_58,0);
        _guard_xfg_dispatch_icall_nop(local_60,_Src,lVar12 << 2);
      }
      local_64 = fVar17 * fVar15 + fVar16;
      bVar3 = (**(code **)(*plVar13 + 0x2e8))(plVar13);
      local_68[0] = local_68[0] & bVar3;
      (**(code **)(*plVar13 + 0x2d8))(plVar13,param_2,param_3,local_68);
      if (local_60 == (void *)0x0) {
        return;
      }
      FMemory::Free();
      return;
    }
  }
  lVar11 = param_2[2];
  lVar12 = 0;
  iVar4 = *(int *)(lVar11 + 0xa8);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
    FUN_140848c80(param_2);
  }
  iVar4 = *(int *)(lVar11 + 0xa8);
  if (iVar4 != 0) {
    iVar7 = (int)param_2[1];
    if (*(int *)((longlong)param_2 + 0xc) < iVar7 + iVar4) {
      FUN_140848c80(param_2);
      iVar7 = (int)param_2[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar7 * 0x30 + *param_2),*(void **)(lVar11 + 0xa0),
               (longlong)iVar4 * 0x30);
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar4;
  }
  if ((*(char *)(lVar11 + 0xd0) != '\0') && (lVar5 = FWeakObjectPtr::Get(lVar11 + 0x38), lVar5 != 0)
     ) {
    uVar6 = FWeakObjectPtr::Get(lVar11 + 0x40);
    plVar10 = (longlong *)USkeleton::GetRefLocalPoses(uVar6,0);
    if (*(uint *)(param_2 + 1) != 0) {
      uVar14 = (ulonglong)*(uint *)(param_2 + 1);
      lVar11 = lVar12;
      do {
        lVar5 = *param_2;
        lVar12 = lVar12 + 4;
        puVar9 = (undefined8 *)
                 ((longlong)*(int *)(*(longlong *)(param_2[2] + 0x70) + -4 + lVar12) * 0x30 +
                 *plVar10);
        uVar6 = puVar9[1];
        *(undefined8 *)(lVar11 + lVar5) = *puVar9;
        ((undefined8 *)(lVar11 + lVar5))[1] = uVar6;
        uVar6 = puVar9[3];
        puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar5);
        *puVar1 = puVar9[2];
        puVar1[1] = uVar6;
        uVar6 = puVar9[5];
        puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar5);
        *puVar1 = puVar9[4];
        puVar1[1] = uVar6;
        uVar14 = uVar14 - 1;
        lVar11 = lVar11 + 0x30;
      } while (uVar14 != 0);
    }
  }
  return;
}



// FUNCTION 14224ebc0 FUN_14224ebc0 body=202 status=ok
// SIG undefined FUN_14224ebc0(void)

void FUN_14224ebc0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined2 local_10;
  undefined1 local_e;
  
  FUN_14224e8b0(param_1 + 0x17);
  uVar2 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_e = 0;
  FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_28,param_3);
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_28,*(undefined4 *)(param_4 + 4),0);
  uVar3 = uVar2;
  if (0 < (int)local_20) {
    do {
      if (*(char *)(uVar3 + 4 + local_28) != '\0') {
        *(undefined1 *)(*param_3 + 4 + uVar3) = 1;
        *(undefined4 *)(uVar3 + *param_3) = *(undefined4 *)(uVar3 + local_28);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = uVar3 + 8;
    } while ((int)uVar1 < (int)local_20);
  }
  return;
}



// FUNCTION 14224ec90 FUN_14224ec90 body=83 status=ok
// SIG undefined FUN_14224ec90(void)

void FUN_14224ec90(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation/AnimSequenceBase.h"
             ,0xb3,L"Pure virtual not implemented (%s)",L"UAnimSequenceBase::GetAnimationPose");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation/AnimSequenceBase.h"
             ,0xb3,L"Pure virtual not implemented (%s)",L"UAnimSequenceBase::GetAnimationPose");
  return;
}



// FUNCTION 14224ecf0 FUN_14224ecf0 body=233 status=ok
// SIG undefined FUN_14224ecf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14224ecf0(undefined8 *param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  
  uVar4 = uRam00000001468b5b78;
  *param_1 = _DAT_1468b5b70;
  param_1[1] = uVar4;
  uVar8 = uRam00000001468b5b8c;
  uVar7 = uRam00000001468b5b88;
  uVar6 = uRam00000001468b5b84;
  *(undefined4 *)(param_1 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
  uVar8 = uRam00000001468b5b9c;
  uVar7 = uRam00000001468b5b98;
  uVar6 = uRam00000001468b5b94;
  *(undefined4 *)(param_1 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 5) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
  if ((param_3 != (longlong *)0x0) && (lVar1 = param_3[7], lVar1 != 0)) {
    cVar9 = (**(code **)(*param_3 + 0x290))(param_3);
    uVar8 = DAT_1468b5d98;
    uVar7 = DAT_1468b5d94;
    uVar6 = DAT_1468b5d90;
    uVar5 = _DAT_1464aa818;
    uVar4 = _DAT_1464aa810;
    if (cVar9 != '\0') {
      auVar2._4_4_ = DAT_1468b5d94;
      auVar2._0_4_ = DAT_1468b5d90;
      auVar2._8_4_ = DAT_1468b5d98;
      auVar2._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 2) = auVar2;
      auVar3._4_4_ = uVar7;
      auVar3._0_4_ = uVar6;
      auVar3._8_4_ = uVar8;
      auVar3._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 4) = auVar3;
      *param_1 = uVar4;
      param_1[1] = uVar5;
    }
    iVar10 = FUN_1422aa260(lVar1,param_2,param_3,0);
    if (iVar10 != -1) {
      FUN_1422950d0(param_3,param_1,iVar10,param_4,0);
    }
  }
  return param_1;
}



// FUNCTION 14224ede0 GetComponentSpaceRefPose body=1486 status=ok
// SIG undefined GetComponentSpaceRefPose(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FAnimationRuntime::GetComponentSpaceRefPose(float *param_1,int *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  int iVar12;
  int *piVar13;
  float *pfVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  int local_res8 [2];
  undefined4 local_res10;
  undefined1 local_res20 [8];
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
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  uVar11 = uRam00000001468b5b78;
  local_res8[0] = *param_2;
  *(undefined8 *)param_1 = _DAT_1468b5b70;
  *(undefined8 *)(param_1 + 2) = uVar11;
  uVar11 = uRam00000001468b5b88;
  *(undefined8 *)(param_1 + 4) = _DAT_1468b5b80;
  *(undefined8 *)(param_1 + 6) = uVar11;
  uVar11 = uRam00000001468b5b98;
  *(undefined8 *)(param_1 + 8) = _DAT_1468b5b90;
  *(undefined8 *)(param_1 + 10) = uVar11;
  fVar47 = _DAT_146aeee50;
  fVar48 = fRam0000000146aeee54;
  fVar49 = fRam0000000146aeee58;
  fVar23 = _DAT_146aeeec0;
  fVar31 = fRam0000000146aeeec4;
  fVar32 = fRam0000000146aeeec8;
  while (local_res8[0] != -1) {
    auVar16 = *(undefined1 (*) [16])(param_1 + 8);
    fVar22 = auVar16._0_4_;
    fVar1 = auVar16._4_4_;
    fVar3 = auVar16._8_4_;
    fVar5 = auVar16._12_4_;
    pfVar14 = (float *)((longlong)local_res8[0] * 0x30 + *(longlong *)(param_3 + 0xa0));
    auVar17 = *(undefined1 (*) [16])(pfVar14 + 8);
    fVar24 = auVar17._0_4_;
    fVar2 = auVar17._4_4_;
    fVar4 = auVar17._8_4_;
    fVar6 = auVar17._12_4_;
    auVar16 = minps(auVar16,auVar17);
    auVar17._4_4_ = -(uint)(auVar16._4_4_ < fVar31);
    auVar17._0_4_ = -(uint)(auVar16._0_4_ < fVar23);
    auVar17._8_4_ = -(uint)(auVar16._8_4_ < fVar32);
    auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146aeeecc);
    iVar12 = movmskps(local_res8[0],auVar17);
    _DAT_146aeee50 = fVar47;
    fRam0000000146aeee54 = fVar48;
    fRam0000000146aeee58 = fVar49;
    _DAT_146aeeec0 = fVar23;
    fRam0000000146aeeec4 = fVar31;
    fRam0000000146aeeec8 = fVar32;
    if (iVar12 == 0) {
      fVar47 = *pfVar14;
      fVar48 = pfVar14[1];
      fVar49 = pfVar14[2];
      fVar23 = pfVar14[3];
      fVar31 = *param_1;
      fVar32 = param_1[1];
      fVar33 = param_1[2];
      fVar34 = param_1[3];
      fVar8 = pfVar14[4];
      fVar18 = pfVar14[5];
      fVar9 = pfVar14[6];
      fVar10 = pfVar14[7];
      fVar38 = param_1[4] * fVar24;
      fVar39 = param_1[5] * fVar2;
      fVar40 = param_1[6] * fVar4;
      fVar41 = param_1[7] * fVar6;
      fVar30 = fVar34 * fVar47 * _DAT_146aeee90;
      fVar35 = fVar33 * fVar47 * fRam0000000146aeee94;
      fVar36 = fVar32 * fVar47 * fRam0000000146aeee98;
      fVar37 = fVar31 * fVar47 * fRam0000000146aeee9c;
      fVar20 = fVar48 * fVar33 * _DAT_146aeee80;
      fVar29 = fVar48 * fVar34 * fRam0000000146aeee84;
      fVar21 = fVar48 * fVar31 * fRam0000000146aeee88;
      fVar28 = fVar48 * fVar32 * fRam0000000146aeee8c;
      fVar15 = fVar49 * fVar32 * _DAT_146aeee70;
      fVar26 = fVar49 * fVar31 * fRam0000000146aeee74;
      fVar27 = fVar49 * fVar34 * fRam0000000146aeee78;
      fVar25 = fVar49 * fVar33 * fRam0000000146aeee7c;
      param_1[8] = fVar22 * fVar24;
      param_1[9] = fVar1 * fVar2;
      param_1[10] = fVar3 * fVar4;
      param_1[0xb] = fVar5 * fVar6;
      *param_1 = fVar30 + fVar23 * fVar31 + fVar20 + fVar15;
      param_1[1] = fVar35 + fVar23 * fVar32 + fVar29 + fVar26;
      param_1[2] = fVar36 + fVar23 * fVar33 + fVar21 + fVar27;
      param_1[3] = fVar37 + fVar23 * fVar34 + fVar28 + fVar25;
      fVar31 = fVar40 * fVar48 - fVar39 * fVar49;
      fVar32 = fVar38 * fVar49 - fVar40 * fVar47;
      fVar22 = fVar39 * fVar47 - fVar38 * fVar48;
      fVar24 = fVar41 * fVar23 - fVar41 * fVar23;
      fVar31 = fVar31 + fVar31;
      fVar32 = fVar32 + fVar32;
      fVar22 = fVar22 + fVar22;
      fVar24 = fVar24 + fVar24;
      param_1[4] = (fVar22 * fVar48 - fVar32 * fVar49) + fVar23 * fVar31 + fVar38 + fVar8;
      param_1[5] = (fVar31 * fVar49 - fVar22 * fVar47) + fVar23 * fVar32 + fVar39 + fVar18;
      param_1[6] = (fVar32 * fVar47 - fVar31 * fVar48) + fVar23 * fVar22 + fVar40 + fVar9;
      param_1[7] = (fVar24 * fVar23 - fVar24 * fVar23) + fVar23 * fVar24 + fVar41 + fVar10;
    }
    else {
      fVar33 = *pfVar14;
      fVar34 = pfVar14[1];
      fVar8 = pfVar14[2];
      fVar18 = pfVar14[3];
      fVar9 = pfVar14[4];
      fVar10 = pfVar14[5];
      fVar15 = pfVar14[6];
      fVar25 = fVar34 + fVar34;
      fVar27 = fVar8 + fVar8;
      fVar29 = fVar33 * (fVar33 + fVar33);
      fVar26 = (fVar33 + fVar33) * fVar18;
      fVar44 = (fVar27 * fVar18 + fVar25 * fVar33) * fVar24;
      fVar45 = (fVar26 + fVar27 * fVar34) * fVar2;
      fVar46 = (fVar25 * fVar18 + fVar27 * fVar33) * fVar4;
      fVar35 = fVar2 * (fVar25 * fVar33 - fVar27 * fVar18);
      fVar37 = fVar4 * (fVar27 * fVar34 - fVar26);
      fVar39 = fVar24 * (fVar27 * fVar33 - fVar25 * fVar18);
      fVar26 = (float)((uint)((fVar47 - (fVar8 * fVar27 + fVar34 * fVar25)) * fVar24) &
                      _DAT_146aeee60);
      fVar27 = (float)((uint)((fVar48 - (fVar8 * fVar27 + fVar29)) * fVar2) & uRam0000000146aeee64);
      fVar20 = (float)((uint)((fVar49 - (fVar34 * fVar25 + fVar29)) * fVar4) & uRam0000000146aeee68)
      ;
      fVar21 = (float)((uint)((fRam0000000146aeee5c - (fVar29 + fVar29)) * fVar6) &
                      uRam0000000146aeee6c);
      fVar33 = *param_1;
      fVar34 = param_1[1];
      fVar8 = param_1[2];
      fVar18 = param_1[3];
      fVar29 = fVar34 + fVar34;
      fVar28 = fVar8 + fVar8;
      fVar30 = fVar33 * (fVar33 + fVar33);
      fVar25 = (fVar33 + fVar33) * fVar18;
      fVar41 = (fVar28 * fVar18 + fVar29 * fVar33) * fVar22;
      fVar42 = (fVar25 + fVar28 * fVar34) * fVar1;
      fVar43 = (fVar29 * fVar18 + fVar28 * fVar33) * fVar3;
      fVar36 = fVar1 * (fVar29 * fVar33 - fVar28 * fVar18);
      fVar38 = fVar3 * (fVar28 * fVar34 - fVar25);
      fVar40 = fVar22 * (fVar28 * fVar33 - fVar29 * fVar18);
      fVar18 = (float)((uint)((fVar47 - (fVar8 * fVar28 + fVar34 * fVar29)) * fVar22) &
                      _DAT_146aeee60);
      fVar25 = (float)((uint)((fVar48 - (fVar8 * fVar28 + fVar30)) * fVar1) & uRam0000000146aeee64);
      fVar29 = (float)((uint)((fVar49 - (fVar34 * fVar29 + fVar30)) * fVar3) & uRam0000000146aeee68)
      ;
      fVar28 = (float)((uint)((fRam0000000146aeee5c - (fVar30 + fVar30)) * fVar5) &
                      uRam0000000146aeee6c);
      fVar33 = param_1[4];
      fVar34 = param_1[5];
      fVar8 = param_1[6];
      local_f8 = fVar41 * fVar35 + fVar18 * fVar26 + fVar40 * fVar46 + fVar28 * fVar9;
      fStack_f4 = fVar41 * fVar27 + fVar18 * fVar44 + fVar40 * fVar37 + fVar28 * fVar10;
      fStack_f0 = fVar41 * fVar45 + fVar18 * fVar39 + fVar40 * fVar20 + fVar28 * fVar15;
      fStack_ec = fVar41 * fVar21 + fVar18 * fVar21 + fVar40 * fVar21 +
                  fVar28 * fRam0000000146aeee5c;
      local_e8 = fVar25 * fVar35 + fVar36 * fVar26 + fVar42 * fVar46 + fVar28 * fVar9;
      fStack_e4 = fVar25 * fVar27 + fVar36 * fVar44 + fVar42 * fVar37 + fVar28 * fVar10;
      fStack_e0 = fVar25 * fVar45 + fVar36 * fVar39 + fVar42 * fVar20 + fVar28 * fVar15;
      fStack_dc = fVar25 * fVar21 + fVar36 * fVar21 + fVar42 * fVar21 +
                  fVar28 * fRam0000000146aeee5c;
      local_d8 = fVar38 * fVar35 + fVar43 * fVar26 + fVar29 * fVar46 + fVar28 * fVar9;
      fStack_d4 = fVar38 * fVar27 + fVar43 * fVar44 + fVar29 * fVar37 + fVar28 * fVar10;
      fStack_d0 = fVar38 * fVar45 + fVar43 * fVar39 + fVar29 * fVar20 + fVar28 * fVar15;
      fStack_cc = fVar38 * fVar21 + fVar43 * fVar21 + fVar29 * fVar21 +
                  fVar28 * fRam0000000146aeee5c;
      local_c8 = fVar34 * fVar35 + fVar33 * fVar26 + fVar8 * fVar46 + fRam0000000146aeee5c * fVar9;
      fStack_c4 = fVar34 * fVar27 + fVar33 * fVar44 + fVar8 * fVar37 + fRam0000000146aeee5c * fVar10
      ;
      fStack_c0 = fVar34 * fVar45 + fVar33 * fVar39 + fVar8 * fVar20 + fRam0000000146aeee5c * fVar15
      ;
      fStack_bc = fVar34 * fVar21 + fVar33 * fVar21 + fVar8 * fVar21 +
                  fRam0000000146aeee5c * fRam0000000146aeee5c;
      FMatrix::RemoveScaling(&local_f8);
      fVar47 = (float)(-(uint)(fVar23 <= fVar24 * fVar22) & (_DAT_146aeeeb0 ^ (uint)fVar47) ^
                      _DAT_146aeeeb0);
      fVar48 = (float)(-(uint)(fVar31 <= fVar2 * fVar1) & (uRam0000000146aeeeb4 ^ (uint)fVar48) ^
                      uRam0000000146aeeeb4);
      fVar49 = (float)(-(uint)(fVar32 <= fVar4 * fVar3) & (uRam0000000146aeeeb8 ^ (uint)fVar49) ^
                      uRam0000000146aeeeb8);
      local_f8 = local_f8 * fVar47;
      fStack_f0 = fStack_f0 * fVar47;
      fStack_f4 = fStack_f4 * fVar47;
      fStack_e0 = fStack_e0 * fVar48;
      fStack_e4 = fStack_e4 * fVar48;
      local_e8 = local_e8 * fVar48;
      fStack_d0 = fStack_d0 * fVar49;
      local_d8 = local_d8 * fVar49;
      fStack_d4 = fStack_d4 * fVar49;
      FQuat::FQuat(&local_108,&local_f8);
      local_res10 = 0x322bcc77;
      auVar19._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
      auVar19._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
      auVar19._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
      auVar19._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
      fVar31 = auVar19._4_4_ + auVar19._0_4_;
      fVar32 = auVar19._8_4_ + auVar19._4_4_;
      fVar33 = auVar19._12_4_ + auVar19._8_4_;
      fVar34 = auVar19._0_4_ + auVar19._12_4_;
      auVar7._4_4_ = fVar32;
      auVar7._0_4_ = fVar31;
      auVar7._8_4_ = fVar33;
      auVar7._12_4_ = fVar34;
      auVar16 = rsqrtps(auVar19,auVar7);
      fVar47 = auVar16._0_4_;
      fVar48 = auVar16._4_4_;
      fVar49 = auVar16._8_4_;
      fVar23 = auVar16._12_4_;
      fVar47 = (_DAT_146aeee30 - fVar47 * fVar47 * fVar31 * _DAT_146aeee30) * fVar47 + fVar47;
      fVar48 = (fRam0000000146aeee34 - fVar48 * fVar48 * fVar32 * fRam0000000146aeee34) * fVar48 +
               fVar48;
      fVar49 = (fRam0000000146aeee38 - fVar49 * fVar49 * fVar33 * fRam0000000146aeee38) * fVar49 +
               fVar49;
      fVar23 = (fRam0000000146aeee3c - fVar23 * fVar23 * fVar34 * fRam0000000146aeee3c) * fVar23 +
               fVar23;
      auVar16._4_4_ = fStack_c4;
      auVar16._0_4_ = local_c8;
      auVar16._8_4_ = fStack_c0;
      local_108 = (float)(((uint)(((_DAT_146aeee30 - fVar47 * fVar47 * fVar31 * _DAT_146aeee30) *
                                   fVar47 + fVar47) * local_108) ^ _DAT_146aeee20) &
                          -(uint)(1e-08 <= fVar31) ^ _DAT_146aeee20);
      fStack_104 = (float)(((uint)(((fRam0000000146aeee34 -
                                    fVar48 * fVar48 * fVar32 * fRam0000000146aeee34) * fVar48 +
                                   fVar48) * fStack_104) ^ uRam0000000146aeee24) &
                           -(uint)(1e-08 <= fVar32) ^ uRam0000000146aeee24);
      fStack_100 = (float)(((uint)(((fRam0000000146aeee38 -
                                    fVar49 * fVar49 * fVar33 * fRam0000000146aeee38) * fVar49 +
                                   fVar49) * fStack_100) ^ uRam0000000146aeee28) &
                           -(uint)(1e-08 <= fVar33) ^ uRam0000000146aeee28);
      fStack_fc = (float)(((uint)(((fRam0000000146aeee3c -
                                   fVar23 * fVar23 * fVar34 * fRam0000000146aeee3c) * fVar23 +
                                  fVar23) * fStack_fc) ^ uRam0000000146aeee2c) &
                          -(uint)(1e-08 <= fVar34) ^ uRam0000000146aeee2c);
      auVar16._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 4) = auVar16;
      param_1[8] = fVar24 * fVar22;
      param_1[9] = fVar2 * fVar1;
      param_1[10] = fVar4 * fVar3;
      param_1[0xb] = fVar6 * fVar5;
      *param_1 = local_108;
      param_1[1] = fStack_104;
      param_1[2] = fStack_100;
      param_1[3] = fStack_fc;
    }
    piVar13 = (int *)FBoneContainer::GetParentBoneIndex(param_3,local_res20,local_res8);
    fVar47 = _DAT_146aeee50;
    fVar48 = fRam0000000146aeee54;
    fVar49 = fRam0000000146aeee58;
    fVar23 = _DAT_146aeeec0;
    fVar31 = fRam0000000146aeeec4;
    fVar32 = fRam0000000146aeeec8;
    local_res8[0] = *piVar13;
  }
  _DAT_146aeee50 = fVar47;
  fRam0000000146aeee54 = fVar48;
  fRam0000000146aeee58 = fVar49;
  _DAT_146aeeec0 = fVar23;
  fRam0000000146aeeec4 = fVar31;
  fRam0000000146aeeec8 = fVar32;
  return param_1;
}



// FUNCTION 14224f3b0 GetComponentSpaceTransform body=94 status=ok
// SIG undefined GetComponentSpaceTransform(void)

undefined8 *
FA2CSPose::GetComponentSpaceTransform(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(char *)((longlong)param_3 + param_1[3]) == '\0') {
    FUN_14224b710(param_1,param_3);
  }
  puVar4 = (undefined8 *)((longlong)param_3 * 0x30 + *param_1);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  uVar1 = puVar4[5];
  param_2[4] = puVar4[4];
  param_2[5] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return param_2;
}



// FUNCTION 14224f410 FUN_14224f410 body=22 status=ok
// SIG undefined FUN_14224f410(void)

undefined * FUN_14224f410(byte param_1)

{
  return &DAT_146aeed60 + (ulonglong)param_1 * 0x30;
}



// FUNCTION 14224f430 FUN_14224f430 body=84 status=ok
// SIG undefined FUN_14224f430(void)

undefined8 * FUN_14224f430(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_146b17150;
  *param_1 = 0;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x1b8) != 0) {
      FSoftObjectPath::TryLoad();
      uVar2 = FUN_141796280(DAT_146b17150 + 0x1b8);
      *param_1 = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 14224f490 FUN_14224f490 body=14 status=ok
// SIG undefined FUN_14224f490(void)

undefined8 * FUN_14224f490(undefined8 *param_1)

{
  *param_1 = DAT_146aeed50;
  return param_1;
}



// FUNCTION 14224f4a0 GetDefaultSupportedAgent body=23 status=ok
// SIG undefined GetDefaultSupportedAgent(void)

void FNavigationSystem::GetDefaultSupportedAgent(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeece8 != 0) {
    plVar1 = DAT_146aeece0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014224f4b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))();
  return;
}



// FUNCTION 14224f4c0 FUN_14224f4c0 body=8 status=ok
// SIG undefined FUN_14224f4c0(void)

undefined8 * FUN_14224f4c0(void)

{
  return &DAT_146aeece0;
}



// FUNCTION 14224f4d0 GetDefaultWalkableArea body=43 status=ok
// SIG undefined GetDefaultWalkableArea(void)

undefined8 FNavigationSystem::GetDefaultWalkableArea(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeecd8 != 0) {
    plVar1 = DAT_146aeecd0;
  }
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return param_1;
}



// FUNCTION 14224f500 FUN_14224f500 body=8 status=ok
// SIG undefined FUN_14224f500(void)

undefined8 * FUN_14224f500(void)

{
  return &DAT_146aeecd0;
}



// FUNCTION 14224f510 FUN_14224f510 body=224 status=ok
// SIG undefined FUN_14224f510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14224f510(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeef10) {
    _Init_thread_header(&DAT_146aeef10);
    if (DAT_146aeef10 == -1) {
      _DAT_146531920 = _DAT_146531920 & 0xffffffe0;
      FName::FName(&DAT_146531950,L"Default",1);
      _DAT_146531964 = 0x437a0000;
      _DAT_146531959 = 0x8cff;
      DAT_146531958 = 0;
      DAT_14653195b = 0xa4;
      _DAT_14653195c = 0x42480000;
      _DAT_146531960 = 0x42480000;
      _DAT_146531968 = 0;
      FSoftObjectPath::FSoftObjectPath(&DAT_146531970,0);
      atexit(FUN_143ea80d0);
      _Init_thread_footer(&DAT_146aeef10);
      return &DAT_146531920;
    }
  }
  return &DAT_146531920;
}



// FUNCTION 14224f5f0 GetKeyIndicesFromTime body=159 status=ok
// SIG undefined GetKeyIndicesFromTime(void)

void FAnimationRuntime::GetKeyIndicesFromTime
               (int *param_1,int *param_2,float *param_3,float param_4,int param_5,float param_6)

{
  int iVar1;
  int iVar2;
  
  if ((0.0 < param_4) && (param_5 != 1)) {
    iVar2 = param_5 + -1;
    if (param_6 <= param_4) {
      *param_1 = iVar2;
      *param_2 = 0;
      *param_3 = 0.0;
      return;
    }
    param_6 = ((float)iVar2 * param_4) / param_6;
    iVar1 = (int)ROUND((param_6 + param_6) - 0.5) >> 1;
    if (iVar1 < 0) {
      iVar2 = 0;
    }
    else if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    *param_1 = iVar2;
    iVar1 = iVar2;
    if (iVar2 + 1 != param_5) {
      iVar1 = iVar2 + 1;
    }
    *param_2 = iVar1;
    *param_3 = param_6 - (float)iVar2;
    return;
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0.0;
  return;
}



// FUNCTION 14224f690 GetLength body=90 status=ok
// SIG undefined GetLength(void)

float FAnimSegment::GetLength(longlong *param_1)

{
  float fVar1;
  float fVar2;
  
  if (*param_1 == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(*param_1 + 0x94);
  }
  fVar1 = fVar1 * *(float *)((longlong)param_1 + 0x14);
  fVar2 = 1.0;
  if (1e-08 < ABS(fVar1)) {
    fVar2 = fVar1;
  }
  return ((*(float *)(param_1 + 2) - *(float *)((longlong)param_1 + 0xc)) * (float)(int)param_1[3])
         / ABS(fVar2);
}



// FUNCTION 14224f6f0 GetLength body=538 status=ok
// SIG undefined GetLength(void)

void FAnimTrack::GetLength(longlong *param_1)

{
  float *pfVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  lVar4 = (longlong)(int)param_1[1];
  lVar6 = 0;
  fVar8 = 0.0;
  if (3 < lVar4) {
    pfVar3 = (float *)(*param_1 + 0x10);
    pfVar1 = (float *)(*param_1 + 0x30);
    lVar5 = (lVar4 - 4U >> 2) + 1;
    lVar6 = lVar5 * 4;
    do {
      if (*(longlong *)(pfVar3 + -4) == 0) {
        fVar7 = 1.0;
      }
      else {
        fVar7 = *(float *)(*(longlong *)(pfVar3 + -4) + 0x94);
      }
      fVar7 = fVar7 * pfVar3[1];
      if (ABS(fVar7) <= 1e-08) {
        fVar7 = 1.0;
      }
      fVar7 = ((*pfVar3 - pfVar3[-1]) * (float)(int)pfVar3[2]) / ABS(fVar7) + pfVar3[-2];
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      if (*(longlong *)(pfVar3 + 4) == 0) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = *(float *)(*(longlong *)(pfVar3 + 4) + 0x94);
      }
      fVar8 = fVar8 * pfVar1[1];
      if (ABS(fVar8) <= 1e-08) {
        fVar8 = 1.0;
      }
      fVar8 = ((*pfVar1 - pfVar1[-1]) * (float)(int)pfVar1[2]) / ABS(fVar8) + pfVar1[-2];
      if (fVar8 <= fVar7) {
        fVar8 = fVar7;
      }
      if (*(longlong *)(pfVar3 + 0xc) == 0) {
        fVar7 = 1.0;
      }
      else {
        fVar7 = *(float *)(*(longlong *)(pfVar3 + 0xc) + 0x94);
      }
      fVar7 = fVar7 * pfVar1[9];
      if (ABS(fVar7) <= 1e-08) {
        fVar7 = 1.0;
      }
      fVar7 = ((pfVar1[8] - pfVar1[7]) * (float)(int)pfVar1[10]) / ABS(fVar7) + pfVar1[6];
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      if (*(longlong *)(pfVar3 + 0x14) == 0) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = *(float *)(*(longlong *)(pfVar3 + 0x14) + 0x94);
      }
      fVar8 = fVar8 * pfVar1[0x11];
      if (ABS(fVar8) <= 1e-08) {
        fVar8 = 1.0;
      }
      pfVar3 = pfVar3 + 0x20;
      fVar8 = ((pfVar1[0x10] - pfVar1[0xf]) * (float)(int)pfVar1[0x12]) / ABS(fVar8) + pfVar1[0xe];
      pfVar1 = pfVar1 + 0x20;
      if (fVar8 <= fVar7) {
        fVar8 = fVar7;
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (lVar6 < lVar4) {
    plVar2 = (longlong *)(lVar6 * 0x20 + *param_1);
    lVar4 = lVar4 - lVar6;
    do {
      if (*plVar2 == 0) {
        fVar7 = 1.0;
      }
      else {
        fVar7 = *(float *)(*plVar2 + 0x94);
      }
      fVar7 = fVar7 * *(float *)((longlong)plVar2 + 0x14);
      if (ABS(fVar7) <= 1e-08) {
        fVar7 = 1.0;
      }
      fVar7 = ((*(float *)(plVar2 + 2) - *(float *)((longlong)plVar2 + 0xc)) * (float)(int)plVar2[3]
              ) / ABS(fVar7) + *(float *)(plVar2 + 1);
      plVar2 = plVar2 + 4;
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      lVar4 = lVar4 + -1;
      fVar8 = fVar7;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14224f930 FUN_14224f930 body=1643 status=ok
// SIG undefined FUN_14224f930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14224f930(float *param_1,int param_2,longlong param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
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
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  uVar10 = uRam00000001468b5b78;
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  *(undefined8 *)param_1 = _DAT_1468b5b70;
  *(undefined8 *)(param_1 + 2) = uVar10;
  uVar10 = uRam00000001468b5b88;
  *(undefined8 *)(param_1 + 4) = _DAT_1468b5b80;
  *(undefined8 *)(param_1 + 6) = uVar10;
  uVar10 = uRam00000001468b5b98;
  *(undefined8 *)(param_1 + 8) = _DAT_1468b5b90;
  *(undefined8 *)(param_1 + 10) = uVar10;
  if (param_2 != -1) {
    if (param_3 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = *(longlong *)(param_3 + 0x38);
    }
    if (lVar14 != 0) {
      local_160 = param_4;
      puVar13 = (undefined8 *)FUN_14224ecf0(&local_108,param_2);
      uVar10 = puVar13[1];
      *(undefined8 *)param_1 = *puVar13;
      *(undefined8 *)(param_1 + 2) = uVar10;
      uVar10 = puVar13[3];
      *(undefined8 *)(param_1 + 4) = puVar13[2];
      *(undefined8 *)(param_1 + 6) = uVar10;
      uVar10 = puVar13[5];
      *(undefined8 *)(param_1 + 8) = puVar13[4];
      *(undefined8 *)(param_1 + 10) = uVar10;
      for (iVar2 = *(int *)(*(longlong *)(lVar14 + 0x78) + 8 + (longlong)param_2 * 0x10);
          iVar2 != -1; iVar2 = *(int *)(*(longlong *)(lVar14 + 0x78) + 8 + (longlong)iVar2 * 0x10))
      {
        uVar11 = FUN_14224ecf0(&local_108,iVar2,param_3,param_4);
        fVar32 = fRam0000000146aeeec8;
        fVar23 = fRam0000000146aeeec4;
        fVar20 = _DAT_146aeeec0;
        fVar47 = fRam0000000146aeee58;
        fVar46 = fRam0000000146aeee54;
        fVar45 = _DAT_146aeee50;
        auVar1 = *(undefined1 (*) [16])(param_1 + 8);
        fVar7 = auVar1._0_4_;
        fVar8 = auVar1._4_4_;
        fVar9 = auVar1._8_4_;
        fVar3 = local_e8._0_4_;
        fVar4 = local_e8._4_4_;
        fVar5 = local_e8._8_4_;
        fVar6 = local_e8._12_4_;
        auVar15 = minps(auVar1,local_e8);
        auVar16._4_4_ = -(uint)(auVar15._4_4_ < fRam0000000146aeeec4);
        auVar16._0_4_ = -(uint)(auVar15._0_4_ < _DAT_146aeeec0);
        auVar16._8_4_ = -(uint)(auVar15._8_4_ < fRam0000000146aeeec8);
        auVar16._12_4_ = -(uint)(auVar15._12_4_ < fRam0000000146aeeecc);
        iVar12 = movmskps(uVar11,auVar16);
        if (iVar12 == 0) {
          fVar45 = *param_1;
          fVar46 = param_1[1];
          fVar47 = param_1[2];
          fVar20 = param_1[3];
          fVar24 = fVar3 * param_1[4];
          fVar25 = fVar4 * param_1[5];
          fVar28 = fVar5 * param_1[6];
          fVar30 = fVar6 * param_1[7];
          fVar17 = local_108 * fVar20 * _DAT_146aeee90 + fStack_fc * fVar45 +
                   fStack_104 * fVar47 * _DAT_146aeee80 + fStack_100 * fVar46 * _DAT_146aeee70;
          fVar19 = local_108 * fVar47 * fRam0000000146aeee94 + fStack_fc * fVar46 +
                   fStack_104 * fVar20 * fRam0000000146aeee84 +
                   fStack_100 * fVar45 * fRam0000000146aeee74;
          fVar27 = local_108 * fVar46 * fRam0000000146aeee98 + fStack_fc * fVar47 +
                   fStack_104 * fVar45 * fRam0000000146aeee88 +
                   fStack_100 * fVar20 * fRam0000000146aeee78;
          fVar21 = local_108 * fVar45 * fRam0000000146aeee9c + fStack_fc * fVar20 +
                   fStack_104 * fVar46 * fRam0000000146aeee8c +
                   fStack_100 * fVar47 * fRam0000000146aeee7c;
          fVar47 = fVar28 * fStack_104 - fVar25 * fStack_100;
          fVar20 = fVar24 * fStack_100 - fVar28 * local_108;
          fVar23 = fVar25 * local_108 - fVar24 * fStack_104;
          fVar32 = fVar30 * fStack_fc - fVar30 * fStack_fc;
          fVar47 = fVar47 + fVar47;
          fVar20 = fVar20 + fVar20;
          fVar23 = fVar23 + fVar23;
          fVar32 = fVar32 + fVar32;
          fVar45 = (fVar23 * fStack_104 - fVar20 * fStack_100) + fStack_fc * fVar47 + fVar24 +
                   local_f8;
          fVar46 = (fVar47 * fStack_100 - fVar23 * local_108) + fStack_fc * fVar20 + fVar25 +
                   fStack_f4;
          fVar47 = (fVar20 * local_108 - fVar47 * fStack_104) + fStack_fc * fVar23 + fVar28 +
                   fStack_f0;
          fVar20 = (fVar32 * fStack_fc - fVar32 * fStack_fc) + fStack_fc * fVar32 + fVar30 +
                   fStack_ec;
        }
        else {
          fVar24 = fStack_104 + fStack_104;
          fVar28 = fStack_100 + fStack_100;
          fVar30 = local_108 * (local_108 + local_108);
          fVar25 = (local_108 + local_108) * fStack_fc;
          fVar42 = (fVar28 * fStack_fc + fVar24 * local_108) * fVar3;
          fVar43 = (fVar25 + fVar28 * fStack_104) * fVar4;
          fVar44 = (fVar24 * fStack_fc + fVar28 * local_108) * fVar5;
          fVar33 = fVar4 * (fVar24 * local_108 - fVar28 * fStack_fc);
          fVar35 = fVar5 * (fVar28 * fStack_104 - fVar25);
          fVar37 = fVar3 * (fVar28 * local_108 - fVar24 * fStack_fc);
          fVar17 = (float)((uint)((_DAT_146aeee50 - (fStack_100 * fVar28 + fStack_104 * fVar24)) *
                                 fVar3) & _DAT_146aeee60);
          fVar19 = (float)((uint)((fRam0000000146aeee54 - (fStack_100 * fVar28 + fVar30)) * fVar4) &
                          uRam0000000146aeee64);
          fVar21 = (float)((uint)((fRam0000000146aeee58 - (fStack_104 * fVar24 + fVar30)) * fVar5) &
                          uRam0000000146aeee68);
          fVar22 = (float)((uint)((fRam0000000146aeee5c - (fVar30 + fVar30)) * fVar6) &
                          uRam0000000146aeee6c);
          fVar24 = *param_1;
          fVar25 = param_1[1];
          fVar28 = param_1[2];
          fVar30 = param_1[3];
          fVar26 = fVar25 + fVar25;
          fVar29 = fVar28 + fVar28;
          fVar31 = fVar24 * (fVar24 + fVar24);
          fVar27 = (fVar24 + fVar24) * fVar30;
          fVar39 = (fVar29 * fVar30 + fVar26 * fVar24) * fVar7;
          fVar40 = (fVar27 + fVar29 * fVar25) * fVar8;
          fVar41 = (fVar26 * fVar30 + fVar29 * fVar24) * fVar9;
          fVar34 = fVar8 * (fVar26 * fVar24 - fVar29 * fVar30);
          fVar36 = fVar9 * (fVar29 * fVar25 - fVar27);
          fVar38 = fVar7 * (fVar29 * fVar24 - fVar26 * fVar30);
          fVar30 = (float)((uint)((_DAT_146aeee50 - (fVar25 * fVar26 + fVar28 * fVar29)) * fVar7) &
                          _DAT_146aeee60);
          fVar27 = (float)((uint)((fRam0000000146aeee54 - (fVar31 + fVar28 * fVar29)) * fVar8) &
                          uRam0000000146aeee64);
          fVar26 = (float)((uint)((fRam0000000146aeee58 - (fVar31 + fVar25 * fVar26)) * fVar9) &
                          uRam0000000146aeee68);
          fVar29 = (float)((uint)((fRam0000000146aeee5c - (fVar31 + fVar31)) * auVar1._12_4_) &
                          uRam0000000146aeee6c);
          fVar24 = param_1[4];
          fVar25 = param_1[5];
          fVar28 = param_1[6];
          local_158 = fVar39 * fVar33 + fVar30 * fVar17 + fVar38 * fVar44 + fVar29 * local_f8;
          fStack_154 = fVar39 * fVar19 + fVar30 * fVar42 + fVar38 * fVar35 + fVar29 * fStack_f4;
          fStack_150 = fVar39 * fVar43 + fVar30 * fVar37 + fVar38 * fVar21 + fVar29 * fStack_f0;
          fStack_14c = fVar39 * fVar22 + fVar30 * fVar22 + fVar38 * fVar22 +
                       fVar29 * fRam0000000146aeee5c;
          local_148 = fVar27 * fVar33 + fVar34 * fVar17 + fVar40 * fVar44 + fVar29 * local_f8;
          fStack_144 = fVar27 * fVar19 + fVar34 * fVar42 + fVar40 * fVar35 + fVar29 * fStack_f4;
          fStack_140 = fVar27 * fVar43 + fVar34 * fVar37 + fVar40 * fVar21 + fVar29 * fStack_f0;
          fStack_13c = fVar27 * fVar22 + fVar34 * fVar22 + fVar40 * fVar22 +
                       fVar29 * fRam0000000146aeee5c;
          local_138 = fVar36 * fVar33 + fVar41 * fVar17 + fVar26 * fVar44 + fVar29 * local_f8;
          fStack_134 = fVar36 * fVar19 + fVar41 * fVar42 + fVar26 * fVar35 + fVar29 * fStack_f4;
          fStack_130 = fVar36 * fVar43 + fVar41 * fVar37 + fVar26 * fVar21 + fVar29 * fStack_f0;
          fStack_12c = fVar36 * fVar22 + fVar41 * fVar22 + fVar26 * fVar22 +
                       fVar29 * fRam0000000146aeee5c;
          local_128 = fVar25 * fVar33 + fVar24 * fVar17 + fVar28 * fVar44 +
                      fRam0000000146aeee5c * local_f8;
          fStack_124 = fVar25 * fVar19 + fVar24 * fVar42 + fVar28 * fVar35 +
                       fRam0000000146aeee5c * fStack_f4;
          fStack_120 = fVar25 * fVar43 + fVar24 * fVar37 + fVar28 * fVar21 +
                       fRam0000000146aeee5c * fStack_f0;
          fStack_11c = fVar25 * fVar22 + fVar24 * fVar22 + fVar28 * fVar22 +
                       fRam0000000146aeee5c * fRam0000000146aeee5c;
          FMatrix::RemoveScaling(&local_158);
          fVar45 = (float)(-(uint)(fVar20 <= fVar7 * fVar3) & (_DAT_146aeeeb0 ^ (uint)fVar45) ^
                          _DAT_146aeeeb0);
          fVar46 = (float)(-(uint)(fVar23 <= fVar8 * fVar4) & (uRam0000000146aeeeb4 ^ (uint)fVar46)
                          ^ uRam0000000146aeeeb4);
          fVar47 = (float)(-(uint)(fVar32 <= fVar9 * fVar5) & (uRam0000000146aeeeb8 ^ (uint)fVar47)
                          ^ uRam0000000146aeeeb8);
          local_158 = local_158 * fVar45;
          fStack_150 = fStack_150 * fVar45;
          fStack_154 = fStack_154 * fVar45;
          fStack_140 = fStack_140 * fVar46;
          fStack_144 = fStack_144 * fVar46;
          local_148 = local_148 * fVar46;
          fStack_130 = fStack_130 * fVar47;
          local_138 = local_138 * fVar47;
          fStack_134 = fStack_134 * fVar47;
          FQuat::FQuat(&local_118,&local_158);
          local_168 = 0x322bcc77;
          auVar18._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
          auVar18._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
          auVar18._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
          auVar18._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
          fVar32 = auVar18._4_4_ + auVar18._0_4_;
          fVar24 = auVar18._8_4_ + auVar18._4_4_;
          fVar25 = auVar18._12_4_ + auVar18._8_4_;
          fVar28 = auVar18._0_4_ + auVar18._12_4_;
          auVar15._4_4_ = fVar24;
          auVar15._0_4_ = fVar32;
          auVar15._8_4_ = fVar25;
          auVar15._12_4_ = fVar28;
          auVar15 = rsqrtps(auVar18,auVar15);
          fVar45 = auVar15._0_4_;
          fVar46 = auVar15._4_4_;
          fVar47 = auVar15._8_4_;
          fVar23 = auVar15._12_4_;
          fVar45 = (_DAT_146aeee30 - fVar45 * fVar45 * fVar32 * _DAT_146aeee30) * fVar45 + fVar45;
          fVar46 = (fRam0000000146aeee34 - fVar46 * fVar46 * fVar24 * fRam0000000146aeee34) * fVar46
                   + fVar46;
          fVar47 = (fRam0000000146aeee38 - fVar47 * fVar47 * fVar25 * fRam0000000146aeee38) * fVar47
                   + fVar47;
          fVar23 = (fRam0000000146aeee3c - fVar23 * fVar23 * fVar28 * fRam0000000146aeee3c) * fVar23
                   + fVar23;
          fVar20 = 0.0;
          fVar17 = (float)(((uint)(((_DAT_146aeee30 - fVar45 * fVar45 * fVar32 * _DAT_146aeee30) *
                                    fVar45 + fVar45) * local_118) ^ _DAT_146aeee20) &
                           -(uint)(1e-08 <= fVar32) ^ _DAT_146aeee20);
          fVar19 = (float)(((uint)(((fRam0000000146aeee34 -
                                    fVar46 * fVar46 * fVar24 * fRam0000000146aeee34) * fVar46 +
                                   fVar46) * fStack_114) ^ uRam0000000146aeee24) &
                           -(uint)(1e-08 <= fVar24) ^ uRam0000000146aeee24);
          fVar27 = (float)(((uint)(((fRam0000000146aeee38 -
                                    fVar47 * fVar47 * fVar25 * fRam0000000146aeee38) * fVar47 +
                                   fVar47) * fStack_110) ^ uRam0000000146aeee28) &
                           -(uint)(1e-08 <= fVar25) ^ uRam0000000146aeee28);
          fVar21 = (float)(((uint)(((fRam0000000146aeee3c -
                                    fVar23 * fVar23 * fVar28 * fRam0000000146aeee3c) * fVar23 +
                                   fVar23) * fStack_10c) ^ uRam0000000146aeee2c) &
                           -(uint)(1e-08 <= fVar28) ^ uRam0000000146aeee2c);
          fVar45 = local_128;
          fVar46 = fStack_124;
          fVar47 = fStack_120;
          local_118 = fVar17;
          fStack_114 = fVar19;
          fStack_110 = fVar27;
          fStack_10c = fVar21;
        }
        *param_1 = fVar17;
        param_1[1] = fVar19;
        param_1[2] = fVar27;
        param_1[3] = fVar21;
        param_1[4] = fVar45;
        param_1[5] = fVar46;
        param_1[6] = fVar47;
        param_1[7] = fVar20;
        param_1[8] = fVar7 * fVar3;
        param_1[9] = fVar8 * fVar4;
        param_1[10] = fVar9 * fVar5;
        param_1[0xb] = auVar1._12_4_ * fVar6;
        param_4 = local_160;
      }
    }
  }
  return param_1;
}



// FUNCTION 14224ffa0 FUN_14224ffa0 body=152 status=ok
// SIG undefined FUN_14224ffa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14224ffa0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 local_res10 [3];
  undefined1 local_48 [64];
  
  uVar6 = uRam00000001468b5b8c;
  uVar5 = uRam00000001468b5b88;
  uVar4 = uRam00000001468b5b84;
  uVar10 = _DAT_1468b5b80;
  uVar1 = uRam00000001468b5b78;
  *param_1 = _DAT_1468b5b70;
  param_1[1] = uVar1;
  uVar9 = uRam00000001468b5b9c;
  uVar8 = uRam00000001468b5b98;
  uVar7 = uRam00000001468b5b94;
  *(undefined4 *)(param_1 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 5) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
  *(undefined4 *)(param_1 + 2) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  if (param_3 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_3 + 0x38);
  }
  if (lVar12 != 0) {
    local_res10[0] = param_2;
    uVar10 = FReferenceSkeleton::FindBoneIndex(lVar12 + 0x58,local_res10);
    puVar11 = (undefined8 *)FUN_14224f930(local_48,uVar10,param_3,param_4);
    uVar1 = puVar11[1];
    uVar2 = puVar11[2];
    uVar3 = puVar11[3];
    *param_1 = *puVar11;
    param_1[1] = uVar1;
    uVar1 = puVar11[5];
    param_1[4] = puVar11[4];
    param_1[5] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  return param_1;
}



// FUNCTION 142250040 FUN_142250040 body=26 status=ok
// SIG undefined FUN_142250040(void)

void FUN_142250040(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeed18 != 0) {
    plVar1 = DAT_146aeed10;
  }
                    /* WARNING: Could not recover jumptable at 0x000142250056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}



// FUNCTION 142250060 FUN_142250060 body=8 status=ok
// SIG undefined FUN_142250060(void)

undefined8 * FUN_142250060(void)

{
  return &DAT_146aeed10;
}



// FUNCTION 142250070 FUN_142250070 body=114 status=ok
// SIG undefined FUN_142250070(void)

undefined8 FUN_142250070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      return 0;
    }
  }
  uVar3 = FUN_1422f2220(param_1,param_2,param_3);
  return uVar3;
}



// FUNCTION 1422500f0 GetRefLocalPoses body=176 status=ok
// SIG undefined GetRefLocalPoses(void)

longlong USkeleton::GetRefLocalPoses(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
      lVar2 = *(longlong *)(param_1 + 0x1e0);
      if (*(longlong *)(param_1 + 0x1e0) == 0) {
        lVar2 = param_1 + 0x1d8;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                               (longlong)*(int *)(param_1 + 0x1e8) - 1U) * 4);
      if (iVar1 != -1) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x1a0) + (longlong)iVar1 * 0x28;
          if (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar1 * 0x28) == param_2) {
            if (iVar1 != -1) goto LAB_142250183;
            break;
          }
          iVar1 = *(int *)(lVar2 + 0x20);
        } while (iVar1 != -1);
      }
    }
    lVar2 = 0;
LAB_142250183:
    lVar3 = lVar2 + 8;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    if (lVar3 != 0) {
      return lVar3 + 8;
    }
  }
  return param_1 + 0x88;
}



// FUNCTION 1422501a0 FUN_1422501a0 body=902 status=ok
// SIG undefined FUN_1422501a0(void)

void FUN_1422501a0(longlong *param_1,longlong *param_2,float param_3,float param_4)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res18 [2];
  
  if (param_3 == param_4) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
    return;
  }
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  fVar12 = *(float *)(param_1 + 1);
  bVar3 = param_4 < param_3;
  fVar9 = (float)FAnimSegment::GetLength();
  fVar9 = fVar9 + fVar12;
  fVar10 = param_4;
  fVar14 = param_3;
  if (bVar3) {
    fVar10 = param_3;
    fVar14 = param_4;
  }
  if (fVar9 <= fVar14) {
    return;
  }
  if (fVar10 <= fVar12) {
    return;
  }
  fVar10 = (float)FAnimSegment::GetValidPlayRate(param_1);
  if (bVar3) {
    local_res18[0] = fVar9;
    if (param_3 <= fVar9) {
      local_res18[0] = param_3;
    }
    fVar9 = fVar12;
    if (fVar12 <= param_4) {
      fVar9 = param_4;
    }
  }
  else {
    local_res18[0] = fVar12;
    if (fVar12 <= param_3) {
      local_res18[0] = param_3;
    }
    if (param_4 <= fVar9) {
      fVar9 = param_4;
    }
  }
  fVar13 = local_res18[0];
  fVar11 = (float)FAnimSegment::ConvertTrackPosToAnimPos(param_1,local_res18);
  fVar12 = *(float *)((longlong)param_1 + 0xc);
  fVar14 = *(float *)(param_1 + 2);
  fVar15 = fVar12;
  if ((fVar12 <= fVar11) && (fVar15 = fVar11, fVar14 <= fVar11)) {
    fVar15 = fVar14;
  }
  fVar13 = ABS(fVar9 - fVar13);
  fVar9 = fVar14;
  if (fVar10 < 0.0 != bVar3) {
    fVar9 = fVar12;
    fVar12 = fVar14;
  }
  lVar5 = UAnimMontage::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  lVar5 = *param_1;
  lVar8 = 0;
  if (bVar4) {
    lVar8 = lVar6;
  }
  if (lVar5 != 0) {
    lVar6 = FUN_1428ea3a0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14225037f;
  }
  lVar5 = 0;
LAB_14225037f:
  if ((lVar8 != 0) || (lVar5 != 0)) {
    iVar7 = 1;
    if (0 < (int)param_1[3]) {
      iVar7 = (int)param_1[3];
    }
    if (0 < iVar7) {
      while (0.0 < fVar13) {
        fVar14 = (fVar9 - fVar15) / fVar10;
        if (ABS(fVar13) < ABS(fVar14)) {
          if (bVar3) {
            fVar12 = -1.0;
          }
          else {
            fVar12 = 1.0;
          }
          if (lVar8 != 0) {
            iVar7 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar7 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
            }
            plVar1 = (longlong *)(*param_2 + (longlong)iVar7 * 0x10);
            *plVar1 = lVar8;
            plVar1[1] = CONCAT44(fVar12 * fVar10 * fVar13 + fVar15,fVar15);
            return;
          }
          if (lVar5 == 0) {
            return;
          }
          FUN_142250530(lVar5 + 0xb8,param_2,fVar15);
          return;
        }
        if (lVar8 == 0) {
          if (lVar5 != 0) {
            FUN_142250530(lVar5 + 0xb8,param_2,fVar15,fVar9);
          }
        }
        else {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
          }
          plVar1 = (longlong *)(*param_2 + (longlong)iVar2 * 0x10);
          *plVar1 = lVar8;
          plVar1[1] = CONCAT44(fVar9,fVar15);
        }
        iVar7 = iVar7 + -1;
        fVar13 = fVar13 - fVar14;
        fVar15 = fVar12;
        if (iVar7 < 1) {
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142250530 FUN_142250530 body=1118 status=ok
// SIG undefined FUN_142250530(void)

void FUN_142250530(longlong *param_1,longlong *param_2,float param_3,float param_4)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res20 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  
  bVar3 = param_4 < param_3;
  if (bVar3) {
    iVar5 = (int)param_1[1] + -1;
    lVar9 = (longlong)iVar5;
    if (-1 < iVar5) {
      lVar10 = lVar9 << 5;
      do {
        plVar8 = (longlong *)(*param_1 + lVar10);
        if (((param_3 != param_4) && (*(char *)((longlong)plVar8 + 0x1c) != '\0')) &&
           (lVar7 = *plVar8, lVar7 != 0)) {
          fVar14 = *(float *)(plVar8 + 1);
          fVar12 = (float)FAnimSegment::GetLength(plVar8);
          fVar12 = fVar12 + fVar14;
          fVar18 = param_4;
          fVar16 = param_3;
          if (bVar3) {
            fVar18 = param_3;
            fVar16 = param_4;
          }
          if ((fVar16 < fVar12) && (fVar14 < fVar18)) {
            fVar18 = *(float *)(lVar7 + 0x94) * *(float *)((longlong)plVar8 + 0x14);
            if (ABS(fVar18) <= 1e-08) {
              fVar18 = 1.0;
            }
            if (bVar3) {
              local_res20[0] = fVar12;
              if (param_3 <= fVar12) {
                local_res20[0] = param_3;
              }
              fVar12 = fVar14;
              if (fVar14 <= param_4) {
                fVar12 = param_4;
              }
            }
            else {
              local_res20[0] = fVar14;
              if (fVar14 <= param_3) {
                local_res20[0] = param_3;
              }
              if (param_4 <= fVar12) {
                fVar12 = param_4;
              }
            }
            fVar15 = local_res20[0];
            fVar13 = (float)FAnimSegment::ConvertTrackPosToAnimPos(plVar8,local_res20);
            fVar14 = *(float *)((longlong)plVar8 + 0xc);
            fVar16 = *(float *)(plVar8 + 2);
            fVar17 = fVar14;
            if ((fVar14 <= fVar13) && (fVar17 = fVar13, fVar16 <= fVar13)) {
              fVar17 = fVar16;
            }
            fVar15 = ABS(fVar12 - fVar15);
            fVar12 = fVar16;
            if (fVar18 < 0.0 != bVar3) {
              fVar12 = fVar14;
              fVar14 = fVar16;
            }
            lVar6 = UAnimMontage::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            lVar6 = *plVar8;
            lVar11 = 0;
            if (bVar4) {
              lVar11 = lVar7;
            }
            if (lVar6 == 0) {
LAB_142250772:
              lVar6 = 0;
            }
            else {
              lVar7 = FUN_1428ea3a0();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) goto LAB_142250772;
            }
            if ((lVar11 != 0) || (lVar6 != 0)) {
              iVar5 = 1;
              if (0 < (int)plVar8[3]) {
                iVar5 = (int)plVar8[3];
              }
              if (0 < iVar5) {
                while (0.0 < fVar15) {
                  fVar16 = (fVar12 - fVar17) / fVar18;
                  local_f8 = (undefined4)lVar11;
                  uStack_f4 = (undefined4)((ulonglong)lVar11 >> 0x20);
                  if (ABS(fVar15) < ABS(fVar16)) {
                    if (bVar3) {
                      fVar14 = -1.0;
                    }
                    else {
                      fVar14 = 1.0;
                    }
                    if (lVar11 == 0) {
                      if (lVar6 != 0) {
                        FUN_142250530(lVar6 + 0xb8,param_2,fVar17);
                      }
                    }
                    else {
                      iVar5 = (int)param_2[1];
                      *(int *)(param_2 + 1) = iVar5 + 1;
                      if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
                        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar5);
                      }
                      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar5 * 0x10);
                      *puVar1 = local_f8;
                      puVar1[1] = uStack_f4;
                      puVar1[2] = fVar17;
                      puVar1[3] = fVar14 * fVar18 * fVar15 + fVar17;
                    }
                    break;
                  }
                  if (lVar11 == 0) {
                    if (lVar6 != 0) {
                      FUN_142250530(lVar6 + 0xb8,param_2,fVar17,fVar12);
                    }
                  }
                  else {
                    iVar2 = (int)param_2[1];
                    *(int *)(param_2 + 1) = iVar2 + 1;
                    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
                      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
                    }
                    puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2 * 0x10);
                    *puVar1 = local_f8;
                    puVar1[1] = uStack_f4;
                    puVar1[2] = fVar17;
                    puVar1[3] = fVar12;
                  }
                  iVar5 = iVar5 + -1;
                  fVar15 = fVar15 - fVar16;
                  fVar17 = fVar14;
                  if (iVar5 < 1) break;
                }
              }
            }
          }
        }
        lVar10 = lVar10 + -0x20;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
  }
  else {
    iVar5 = 0;
    if (0 < (int)param_1[1]) {
      do {
        FUN_1422501a0((longlong)iVar5 * 0x20 + *param_1,param_2,param_3,param_4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_1[1]);
    }
  }
  return;
}



// FUNCTION 142250990 GetSegmentAtTime body=42 status=ok
// SIG undefined GetSegmentAtTime(void)

longlong FAnimTrack::GetSegmentAtTime(longlong *param_1)

{
  int iVar1;
  
  iVar1 = GetSegmentIndexAtTime();
  if (iVar1 != -1) {
    return (longlong)iVar1 * 0x20 + *param_1;
  }
  return 0;
}



// FUNCTION 1422509c0 GetSegmentIndexAtTime body=205 status=ok
// SIG undefined GetSegmentIndexAtTime(void)

int FAnimTrack::GetSegmentIndexAtTime(longlong *param_1,float param_2)

{
  bool bVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  iVar3 = (int)param_1[1] + -1;
  if (-1 < iVar3) {
    plVar2 = (longlong *)((longlong)iVar3 * 0x20 + *param_1);
    lVar4 = (longlong)iVar3;
    do {
      if (*(float *)(plVar2 + 1) <= param_2) {
        if (*plVar2 == 0) {
          fVar5 = 1.0;
        }
        else {
          fVar5 = *(float *)(*plVar2 + 0x94);
        }
        fVar5 = fVar5 * *(float *)((longlong)plVar2 + 0x14);
        if (ABS(fVar5) <= 1e-08) {
          fVar5 = 1.0;
        }
        if (param_2 <=
            ((*(float *)(plVar2 + 2) - *(float *)((longlong)plVar2 + 0xc)) * (float)(int)plVar2[3])
            / ABS(fVar5) + *(float *)(plVar2 + 1)) {
          return iVar3;
        }
      }
      iVar3 = iVar3 + -1;
      plVar2 = plVar2 + -4;
      bVar1 = 0 < lVar4;
      lVar4 = lVar4 + -1;
    } while (bVar1);
  }
  return -1;
}



// FUNCTION 142250b00 GetValidPlayRate body=57 status=ok
// SIG undefined GetValidPlayRate(void)

float FAnimSegment::GetValidPlayRate(longlong *param_1)

{
  float fVar1;
  
  if (*param_1 == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(*param_1 + 0x94);
  }
  fVar1 = fVar1 * *(float *)((longlong)param_1 + 0x14);
  if (ABS(fVar1) <= 1e-08) {
    fVar1 = 1.0;
  }
  return fVar1;
}



// FUNCTION 142250b40 GetWorldFromContextObject body=29 status=ok
// SIG undefined GetWorldFromContextObject(void)

undefined8 FNavigationSystem::GetWorldFromContextObject(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142250b60 FUN_142250b60 body=264 status=ok
// SIG undefined FUN_142250b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142250b60(longlong param_1,undefined8 param_2,float param_3,float param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_90 = param_6;
  local_98 = param_5;
  UAnimSequenceBase::HandleAssetPlayerTickedInternal();
  uVar3 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_142250530(param_1 + 0xb8,&local_88,param_3,param_3 + param_4);
  uVar2 = local_80 & 0xffffffff;
  lVar1 = local_88;
  uVar5 = uVar3;
  if (0 < (int)local_80) {
    do {
      if (*(char *)(*(longlong *)(uVar3 + lVar1) + 0x199) != '\0') {
        FUN_142291ab0(*(longlong *)(uVar3 + lVar1),local_78,*(undefined4 *)(uVar3 + 8 + lVar1),
                      *(undefined4 *)(uVar3 + 0xc + lVar1));
        FUN_142245a70(param_2,local_78);
        uVar2 = local_80 & 0xffffffff;
        lVar1 = local_88;
      }
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 0x10;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)uVar2);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142250c70 FUN_142250c70 body=26 status=ok
// SIG undefined FUN_142250c70(void)

void FUN_142250c70(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeecc8 != 0) {
    plVar1 = DAT_146aeecc0;
  }
                    /* WARNING: Could not recover jumptable at 0x000142250c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}



// FUNCTION 142250c90 FUN_142250c90 body=8 status=ok
// SIG undefined FUN_142250c90(void)

undefined8 * FUN_142250c90(void)

{
  return &DAT_146aeecc0;
}



// FUNCTION 142250ca0 HasRootMotion body=94 status=ok
// SIG undefined HasRootMotion(void)

undefined8 FAnimTrack::HasRootMotion(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  plVar3 = plVar2 + (longlong)(int)param_1[1] * 4;
  while( true ) {
    if (plVar2 == plVar3) {
      return 0;
    }
    if (((*(char *)((longlong)plVar2 + 0x1c) != '\0') && ((longlong *)*plVar2 != (longlong *)0x0))
       && (cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x2e8))(), cVar1 != '\0')) break;
    plVar2 = plVar2 + 4;
  }
  return 1;
}



// FUNCTION 142250d00 FUN_142250d00 body=98 status=ok
// SIG undefined FUN_142250d00(void)

undefined8 FUN_142250d00(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xb8);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0xc0) * 4;
  while( true ) {
    if (plVar2 == plVar3) {
      return 0;
    }
    if (((*(char *)((longlong)plVar2 + 0x1c) != '\0') && ((longlong *)*plVar2 != (longlong *)0x0))
       && (cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x2e8))(), cVar1 != '\0')) break;
    plVar2 = plVar2 + 4;
  }
  return 1;
}



// FUNCTION 142250d70 FUN_142250d70 body=381 status=ok
// SIG undefined FUN_142250d70(void)

void FUN_142250d70(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *local_48;
  undefined8 local_40;
  
  uVar9 = 0;
  uVar11 = uVar9;
  if (0 < (int)param_1[1]) {
    do {
      lVar1 = *param_1;
      plVar2 = *(longlong **)(uVar9 + lVar1);
      if (plVar2 == (longlong *)0x0) {
LAB_142250e51:
        plVar2 = *(longlong **)(uVar9 + lVar1);
        uVar5 = 0;
        if ((((plVar2 != (longlong *)0x0) && (0.0 < *(float *)(plVar2 + 0x12))) &&
            (cVar4 = (**(code **)(*plVar2 + 0x338))(plVar2), cVar4 != '\0')) &&
           ((((int)param_1[1] < 1 || (*(longlong **)*param_1 == (longlong *)0x0)) ||
            ((iVar6 = (**(code **)(**(longlong **)*param_1 + 0x330))(), iVar6 == -1 ||
             (iVar7 = (**(code **)(*plVar2 + 0x330))(plVar2), iVar6 == iVar7)))))) {
          uVar5 = 1;
        }
        *(undefined1 *)(uVar9 + 0x1c + lVar1) = uVar5;
      }
      else {
        lVar8 = UTextureRenderTarget::StaticClass();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_142250e51;
        local_48 = (undefined8 *)0x0;
        local_40 = 1;
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,0);
        *local_48 = param_2;
        cVar4 = (**(code **)(*plVar2 + 0x360))(plVar2,&local_48);
        if (cVar4 == '\0') {
          uVar5 = FUN_142251470(param_1,plVar2);
        }
        else {
          uVar5 = 0;
        }
        *(undefined1 *)(uVar9 + 0x1c + lVar1) = uVar5;
        if (local_48 != (undefined8 *)0x0) {
          FMemory::Free();
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar9 = uVar9 + 0x20;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 142250ef0 FUN_142250ef0 body=397 status=ok
// SIG undefined FUN_142250ef0(void)

void FUN_142250ef0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *local_48;
  undefined8 local_40;
  
  uVar10 = 0;
  plVar1 = (longlong *)(param_1 + 0xb8);
  uVar12 = uVar10;
  if (0 < *(int *)(param_1 + 0xc0)) {
    do {
      lVar2 = *plVar1;
      plVar3 = *(longlong **)(uVar10 + lVar2);
      if (plVar3 == (longlong *)0x0) {
LAB_142250fe1:
        plVar3 = *(longlong **)(uVar10 + lVar2);
        uVar6 = 0;
        if ((((plVar3 != (longlong *)0x0) && (0.0 < *(float *)(plVar3 + 0x12))) &&
            (cVar5 = (**(code **)(*plVar3 + 0x338))(plVar3), cVar5 != '\0')) &&
           (((*(int *)(param_1 + 0xc0) < 1 || (*(longlong **)*plVar1 == (longlong *)0x0)) ||
            ((iVar7 = (**(code **)(**(longlong **)*plVar1 + 0x330))(), iVar7 == -1 ||
             (iVar8 = (**(code **)(*plVar3 + 0x330))(plVar3), iVar7 == iVar8)))))) {
          uVar6 = 1;
        }
        *(undefined1 *)(uVar10 + 0x1c + lVar2) = uVar6;
      }
      else {
        lVar9 = UTextureRenderTarget::StaticClass();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_142250fe1;
        local_48 = (longlong *)0x0;
        local_40 = 1;
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,0);
        *local_48 = param_1;
        cVar5 = (**(code **)(*plVar3 + 0x360))(plVar3,&local_48);
        if (cVar5 == '\0') {
          uVar6 = FUN_142251470(plVar1,plVar3);
        }
        else {
          uVar6 = 0;
        }
        *(undefined1 *)(uVar10 + 0x1c + lVar2) = uVar6;
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      uVar11 = (int)uVar12 + 1;
      uVar10 = uVar10 + 0x20;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(param_1 + 0xc0));
  }
  return;
}



// FUNCTION 142251080 InvalidateRecursiveAsset body=83 status=ok
// SIG undefined InvalidateRecursiveAsset(void)

void UAnimCompositeBase::InvalidateRecursiveAsset(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation/AnimCompositeBase.h"
             ,0x135,L"Pure virtual not implemented (%s)",
             L"UAnimCompositeBase::InvalidateRecursiveAsset");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation/AnimCompositeBase.h"
             ,0x135,L"Pure virtual not implemented (%s)",
             L"UAnimCompositeBase::InvalidateRecursiveAsset");
  return;
}



// FUNCTION 1422510e0 IsAdditive body=54 status=ok
// SIG undefined IsAdditive(void)

undefined8 FAnimTrack::IsAdditive(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (0 < (int)param_1[1]) {
    plVar1 = *(longlong **)*param_1;
    if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)*param_1 + 0x1c) != '\0')) {
      cVar2 = (**(code **)(*plVar1 + 0x290))();
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142251120 IsComplete body=111 status=ok
// SIG undefined IsComplete(void)

undefined1 FAlphaBlend::IsComplete(undefined1 *param_1)

{
  float fVar1;
  float fVar2;
  
  if (param_1[0x2e] == '\0') {
    fVar2 = *(float *)(param_1 + 0x30);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x24);
    fVar1 = (float)FUN_142246950(0x3f800000,*param_1,*(undefined8 *)(param_1 + 8));
    param_1[0x2e] = 0;
    fVar2 = fVar1 * (*(float *)(param_1 + 0x28) - fVar2) + fVar2;
    *(float *)(param_1 + 0x30) = fVar2;
  }
  if (fVar2 == *(float *)(param_1 + 0x20)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1422511b0 FUN_1422511b0 body=8 status=ok
// SIG undefined FUN_1422511b0(void)

undefined8 * FUN_1422511b0(void)

{
  return &DAT_146aeecb0;
}



// FUNCTION 1422511c0 IsInRange body=117 status=ok
// SIG undefined IsInRange(void)

ulonglong FAnimSegment::IsInRange(ulonglong *param_1,float param_2)

{
  ulonglong in_RAX;
  float fVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 1) <= param_2) {
    in_RAX = *param_1;
    if (in_RAX == 0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = *(float *)(in_RAX + 0x94);
    }
    fVar1 = fVar1 * *(float *)((longlong)param_1 + 0x14);
    fVar2 = 1.0;
    if (1e-08 < ABS(fVar1)) {
      fVar2 = fVar1;
    }
    if (param_2 <=
        ((*(float *)(param_1 + 2) - *(float *)((longlong)param_1 + 0xc)) * (float)(int)param_1[3]) /
        ABS(fVar2) + *(float *)(param_1 + 1)) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142251250 IsNavDataMatching body=183 status=ok
// SIG undefined IsNavDataMatching(void)

undefined8 FNavAgentProperties::IsNavDataMatching(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_38 [8];
  longlong local_30;
  undefined1 local_20 [8];
  longlong local_18;
  
  bVar2 = false;
  bVar1 = false;
  cVar3 = FSoftObjectPath::operator==(param_1 + 0x18,param_2 + 0x18);
  if (cVar3 == '\0') {
    FSoftObjectPath::FSoftObjectPath(local_20,0);
    bVar2 = true;
    bVar1 = false;
    cVar3 = FSoftObjectPath::operator==(param_1 + 0x18,local_20);
    if (cVar3 == '\0') {
      FSoftObjectPath::FSoftObjectPath(local_38,0);
      bVar2 = true;
      bVar1 = true;
      cVar3 = FSoftObjectPath::operator==(param_2 + 0x18,local_38);
      if (cVar3 == '\0') {
        uVar4 = 0;
        goto LAB_1422512c8;
      }
    }
  }
  uVar4 = 1;
LAB_1422512c8:
  if (bVar1) {
    if (local_30 != 0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_18 != 0)) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 142251310 FUN_142251310 body=134 status=ok
// SIG undefined FUN_142251310(void)

undefined8 FUN_142251310(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  cVar2 = UAnimSequenceBase::IsNotifyAvailable();
  if (cVar2 != '\0') {
    return 1;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar4 = 0;
    do {
      if (((*(char *)(lVar4 + 0x1c + *(longlong *)(param_1 + 0xb8)) != '\0') &&
          (plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0xb8)), plVar1 != (longlong *)0x0
          )) && (cVar2 = (**(code **)(*plVar1 + 0x348))(), cVar2 != '\0')) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0xc0));
  }
  return 0;
}



// FUNCTION 1422513a0 FUN_1422513a0 body=73 status=ok
// SIG undefined FUN_1422513a0(void)

bool FUN_1422513a0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  
  if (0 < *(int *)(param_1 + 1)) {
    plVar1 = (longlong *)*param_1;
    plVar2 = (longlong *)*plVar1;
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x290))();
      if ((cVar3 != '\0') && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
        iVar4 = (**(code **)(*plVar1 + 0x330))();
        return iVar4 == 2;
      }
    }
  }
  return false;
}



// FUNCTION 1422513f0 FUN_1422513f0 body=60 status=ok
// SIG undefined FUN_1422513f0(void)

undefined8 FUN_1422513f0(longlong *param_1)

{
  int iVar1;
  float extraout_XMM0_Da;
  
  iVar1 = (**(code **)(*param_1 + 0x2c0))();
  if (2 < iVar1) {
    (**(code **)(*param_1 + 0x280))(param_1);
    if (0.033433333 <= extraout_XMM0_Da) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142251440 IsValidAdditive body=23 status=ok
// SIG undefined IsValidAdditive(void)

bool UAnimComposite::IsValidAdditive(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x330))();
  return iVar1 != 0;
}



// FUNCTION 142251470 FUN_142251470 body=124 status=ok
// SIG undefined FUN_142251470(void)

undefined8 FUN_142251470(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (((param_2 == (longlong *)0x0) || (*(float *)(param_2 + 0x12) <= 0.0)) ||
     (cVar1 = (**(code **)(*param_2 + 0x338))(param_2), cVar1 == '\0')) {
    return 0;
  }
  if (((0 < *(int *)(param_1 + 1)) && (*(longlong **)*param_1 != (longlong *)0x0)) &&
     ((iVar2 = (**(code **)(**(longlong **)*param_1 + 0x330))(), iVar2 != -1 &&
      (iVar3 = (**(code **)(*param_2 + 0x330))(param_2), iVar2 != iVar3)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 1422514f0 FUN_1422514f0 body=541 status=ok
// SIG undefined FUN_1422514f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422514f0(longlong *param_1,longlong *param_2,float param_3,longlong *param_4)

{
  float *pfVar1;
  uint *puVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
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
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint uVar33;
  float fVar34;
  uint uVar35;
  float fVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  fVar16 = fRam0000000146aeee4c;
  fVar15 = fRam0000000146aeee48;
  fVar14 = fRam0000000146aeee44;
  fVar13 = _DAT_146aeee40;
  fVar12 = fRam0000000146aeee3c;
  fVar11 = fRam0000000146aeee38;
  fVar10 = fRam0000000146aeee34;
  fVar9 = _DAT_146aeee30;
  if (param_3 < 0.99999) {
    if (1e-05 < param_3) {
      lVar4 = *param_2;
      fVar20 = 1.0 - param_3;
      lVar5 = *param_1;
      iVar18 = 0;
      if (0 < (int)param_4[1]) {
        lVar19 = 0;
        do {
          iVar18 = iVar18 + 1;
          uVar17 = (ulonglong)*(ushort *)(lVar19 + *param_4);
          lVar19 = lVar19 + 2;
          pfVar1 = (float *)(lVar5 + uVar17 * 0x30);
          pfVar3 = (float *)(lVar5 + 0x10 + uVar17 * 0x30);
          fVar29 = *pfVar3;
          fVar27 = pfVar3[1];
          fVar28 = pfVar3[2];
          fVar30 = pfVar3[3];
          pfVar3 = (float *)(lVar5 + 0x20 + uVar17 * 0x30);
          fVar39 = *pfVar3;
          fVar6 = pfVar3[1];
          fVar7 = pfVar3[2];
          fVar8 = pfVar3[3];
          fVar38 = *pfVar1 * fVar20;
          fVar40 = pfVar1[1] * fVar20;
          fVar41 = pfVar1[2] * fVar20;
          fVar42 = pfVar1[3] * fVar20;
          pfVar1 = (float *)(lVar5 + 0x10 + uVar17 * 0x30);
          *pfVar1 = fVar20 * fVar29;
          pfVar1[1] = fVar20 * fVar27;
          pfVar1[2] = fVar20 * fVar28;
          pfVar1[3] = fVar20 * fVar30;
          pfVar1 = (float *)(lVar5 + 0x20 + uVar17 * 0x30);
          *pfVar1 = fVar20 * fVar39;
          pfVar1[1] = fVar20 * fVar6;
          pfVar1[2] = fVar20 * fVar7;
          pfVar1[3] = fVar20 * fVar8;
          pfVar1 = (float *)(lVar5 + uVar17 * 0x30);
          *pfVar1 = fVar38;
          pfVar1[1] = fVar40;
          pfVar1[2] = fVar41;
          pfVar1[3] = fVar42;
          pfVar1 = (float *)(lVar4 + uVar17 * 0x30);
          fVar31 = *pfVar1 * param_3;
          fVar32 = pfVar1[1] * param_3;
          fVar34 = pfVar1[2] * param_3;
          fVar36 = pfVar1[3] * param_3;
          fVar21 = fVar38 * fVar31 + fVar41 * fVar34;
          fVar24 = fVar40 * fVar32 + fVar42 * fVar36;
          fVar25 = fVar41 * fVar34 + fVar38 * fVar31;
          fVar26 = fVar42 * fVar36 + fVar40 * fVar32;
          fVar38 = (float)(-(uint)(0.0 <= fVar24 + fVar21) & ((uint)(0.0 - fVar31) ^ (uint)fVar31) ^
                          (uint)(0.0 - fVar31)) + fVar38;
          fVar40 = (float)(-(uint)(0.0 <= fVar25 + fVar24) & ((uint)(0.0 - fVar32) ^ (uint)fVar32) ^
                          (uint)(0.0 - fVar32)) + fVar40;
          fVar41 = (float)(-(uint)(0.0 <= fVar26 + fVar25) & ((uint)(0.0 - fVar34) ^ (uint)fVar34) ^
                          (uint)(0.0 - fVar34)) + fVar41;
          fVar42 = (float)(-(uint)(0.0 <= fVar21 + fVar26) & ((uint)(0.0 - fVar36) ^ (uint)fVar36) ^
                          (uint)(0.0 - fVar36)) + fVar42;
          pfVar1 = (float *)(lVar5 + uVar17 * 0x30);
          *pfVar1 = fVar38;
          pfVar1[1] = fVar40;
          pfVar1[2] = fVar41;
          pfVar1[3] = fVar42;
          pfVar1 = (float *)(lVar4 + 0x10 + uVar17 * 0x30);
          fVar21 = pfVar1[1];
          fVar24 = pfVar1[2];
          fVar25 = pfVar1[3];
          pfVar3 = (float *)(lVar5 + 0x10 + uVar17 * 0x30);
          *pfVar3 = *pfVar1 * param_3 + fVar20 * fVar29;
          pfVar3[1] = fVar21 * param_3 + fVar20 * fVar27;
          pfVar3[2] = fVar24 * param_3 + fVar20 * fVar28;
          pfVar3[3] = fVar25 * param_3 + fVar20 * fVar30;
          pfVar1 = (float *)(lVar4 + 0x20 + uVar17 * 0x30);
          fVar21 = fVar38 * fVar38 + fVar41 * fVar41;
          fVar24 = fVar40 * fVar40 + fVar42 * fVar42;
          fVar25 = fVar41 * fVar41 + fVar38 * fVar38;
          fVar29 = fVar42 * fVar42 + fVar40 * fVar40;
          auVar22._0_4_ = *pfVar1 * param_3 + fVar20 * fVar39;
          auVar22._4_4_ = pfVar1[1] * param_3 + fVar20 * fVar6;
          auVar22._8_4_ = pfVar1[2] * param_3 + fVar20 * fVar7;
          auVar22._12_4_ = pfVar1[3] * param_3 + fVar20 * fVar8;
          fVar39 = fVar24 + fVar21;
          fVar24 = fVar25 + fVar24;
          fVar25 = fVar29 + fVar25;
          fVar21 = fVar21 + fVar29;
          *(undefined1 (*) [16])(lVar5 + 0x20 + uVar17 * 0x30) = auVar22;
          auVar23._4_4_ = fVar24;
          auVar23._0_4_ = fVar39;
          auVar23._8_4_ = fVar25;
          auVar23._12_4_ = fVar21;
          auVar23 = rsqrtps(auVar22,auVar23);
          fVar29 = auVar23._0_4_;
          fVar27 = auVar23._4_4_;
          fVar28 = auVar23._8_4_;
          fVar30 = auVar23._12_4_;
          fVar29 = (fVar9 - fVar29 * fVar29 * fVar39 * fVar9) * fVar29 + fVar29;
          fVar27 = (fVar10 - fVar27 * fVar27 * fVar24 * fVar10) * fVar27 + fVar27;
          fVar28 = (fVar11 - fVar28 * fVar28 * fVar25 * fVar11) * fVar28 + fVar28;
          fVar30 = (fVar12 - fVar30 * fVar30 * fVar21 * fVar12) * fVar30 + fVar30;
          uVar33 = ((uint)(((fVar10 - fVar27 * fVar27 * fVar24 * fVar10) * fVar27 + fVar27) * fVar40
                          ) ^ uRam0000000146aeee24) & -(uint)(fVar14 <= fVar24) ^
                   uRam0000000146aeee24;
          uVar35 = ((uint)(((fVar11 - fVar28 * fVar28 * fVar25 * fVar11) * fVar28 + fVar28) * fVar41
                          ) ^ uRam0000000146aeee28) & -(uint)(fVar15 <= fVar25) ^
                   uRam0000000146aeee28;
          uVar37 = ((uint)(((fVar12 - fVar30 * fVar30 * fVar21 * fVar12) * fVar30 + fVar30) * fVar42
                          ) ^ uRam0000000146aeee2c) & -(uint)(fVar16 <= fVar21) ^
                   uRam0000000146aeee2c;
          puVar2 = (uint *)(lVar5 + uVar17 * 0x30);
          *puVar2 = ((uint)(((fVar9 - fVar29 * fVar29 * fVar39 * fVar9) * fVar29 + fVar29) * fVar38)
                    ^ _DAT_146aeee20) & -(uint)(fVar13 <= fVar39) ^ _DAT_146aeee20;
          puVar2[1] = uVar33;
          puVar2[2] = uVar35;
          puVar2[3] = uVar37;
        } while (iVar18 < (int)param_4[1]);
      }
    }
    return;
  }
  TArray<FTransform,FDefaultAllocator>::operator=();
  return;
}



// FUNCTION 142251710 FUN_142251710 body=1408 status=ok
// SIG undefined FUN_142251710(void)

void FUN_142251710(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  
  FUN_1422f47a0();
  plVar1 = (longlong *)(param_1 + 0x330);
  *(undefined4 *)(param_1 + 0x338) = 0;
  if (*(int *)(param_1 + 0x33c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_48 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x328) = 0;
  local_40 = 0xffffffff;
  local_3c = 0x101;
  local_3a = 0;
  local_50 = param_1;
  FUN_140472e10(&local_50);
  lVar13 = local_48;
  while (lVar13 != 0) {
    local_48 = lVar13;
    lVar5 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar6 = FAnimNode_Base::StaticStruct();
      for (lVar5 = *(longlong *)(lVar13 + 0x70); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar6) {
          iVar8 = *(int *)(param_1 + 0x338);
          *(int *)(param_1 + 0x338) = iVar8 + 1;
          if (*(int *)(param_1 + 0x33c) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar13;
          break;
        }
      }
    }
    local_48 = *(longlong *)(lVar13 + 0x28);
    FUN_140472e10(&local_50);
    lVar13 = local_48;
  }
  local_48 = 0;
  lVar13 = param_1;
  do {
    lVar5 = lVar13;
    lVar13 = *(longlong *)(lVar5 + 0x30);
    if (lVar13 == 0) break;
    lVar6 = UAnimBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  } while (bVar4);
  if (lVar5 != param_1) {
    plVar1 = (longlong *)(param_1 + 0x300);
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(lVar5 + 0x310);
    if (plVar1 != (longlong *)(lVar5 + 0x300)) {
      puVar9 = (undefined8 *)*plVar1;
      for (iVar8 = *(int *)(param_1 + 0x308); iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar9[0xc] = &PTR_FUN_14410b0e0;
        *puVar9 = &PTR_FUN_14410b0e0;
        puVar9 = puVar9 + 0x15;
      }
      iVar8 = *(int *)(lVar5 + 0x308);
      lVar13 = *(longlong *)(lVar5 + 0x300);
      *(int *)(param_1 + 0x308) = iVar8;
      if ((iVar8 == 0) && (*(int *)(param_1 + 0x30c) == 0)) {
        *(undefined4 *)(param_1 + 0x30c) = 0;
      }
      else {
        TArray<FInAppPurchaseProductInfo,FDefaultAllocator>::ResizeForCopy(plVar1,iVar8);
        if (iVar8 != 0) {
          puVar9 = (undefined8 *)*plVar1 + 0xe;
          puVar10 = (undefined4 *)(lVar13 + 0x70);
          puVar12 = (undefined8 *)*plVar1;
          do {
            *puVar12 = &PTR_FUN_14410b0e0;
            puVar9[-0xd] = *(undefined8 *)(puVar10 + -0x1a);
            *(undefined4 *)(puVar9 + -0xc) = puVar10[-0x18];
            *(undefined4 *)((longlong)puVar9 + -0x5c) = puVar10[-0x17];
            *(undefined1 *)(puVar9 + -0xb) = *(undefined1 *)(puVar10 + -0x16);
            *(undefined1 *)((longlong)puVar9 + -0x57) = *(undefined1 *)((longlong)puVar10 + -0x57);
            *(undefined4 *)((longlong)puVar9 + -0x54) = puVar10[-0x15];
            *(undefined4 *)(puVar9 + -10) = puVar10[-0x14];
            *(undefined4 *)((longlong)puVar9 + -0x4c) = puVar10[-0x13];
            puVar9[-9] = *(undefined8 *)(puVar10 + -0x12);
            *puVar12 = &PTR__scalar_deleting_destructor__145013ea0;
            *(undefined4 *)(puVar9 + -8) = puVar10[-0x10];
            *(undefined4 *)((longlong)puVar9 + -0x3c) = puVar10[-0xf];
            *(undefined4 *)(puVar9 + -7) = puVar10[-0xe];
            *(undefined4 *)((longlong)puVar9 + -0x34) = puVar10[-0xd];
            puVar9[-6] = *(undefined8 *)(puVar10 + -0xc);
            puVar9[-5] = *(undefined8 *)(puVar10 + -10);
            puVar9[-4] = *(undefined8 *)(puVar10 + -8);
            *(undefined4 *)(puVar9 + -3) = puVar10[-6];
            puVar9[-2] = &PTR_FUN_14410b0e0;
            puVar9[-1] = *(undefined8 *)(puVar10 + -2);
            *(undefined4 *)puVar9 = *puVar10;
            *(undefined4 *)((longlong)puVar9 + 4) = puVar10[1];
            *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar10 + 2);
            *(undefined1 *)((longlong)puVar9 + 9) = *(undefined1 *)((longlong)puVar10 + 9);
            *(undefined4 *)((longlong)puVar9 + 0xc) = puVar10[3];
            *(undefined4 *)(puVar9 + 2) = puVar10[4];
            *(undefined4 *)((longlong)puVar9 + 0x14) = puVar10[5];
            puVar9[3] = *(undefined8 *)(puVar10 + 6);
            *(undefined1 *)(puVar9 + 4) = *(undefined1 *)(puVar10 + 8);
            *(undefined1 *)((longlong)puVar9 + 0x21) = *(undefined1 *)((longlong)puVar10 + 0x21);
            *(undefined4 *)((longlong)puVar9 + 0x24) = puVar10[9];
            *(undefined1 *)(puVar9 + 5) = *(undefined1 *)(puVar10 + 10);
            *(undefined4 *)((longlong)puVar9 + 0x2c) = puVar10[0xb];
            *(undefined1 *)(puVar9 + 6) = *(undefined1 *)(puVar10 + 0xc);
            *(undefined1 *)((longlong)puVar9 + 0x31) = *(undefined1 *)((longlong)puVar10 + 0x31);
            *(undefined4 *)((longlong)puVar9 + 0x34) = puVar10[0xd];
            iVar8 = iVar8 + -1;
            puVar9 = puVar9 + 0x15;
            puVar10 = puVar10 + 0x2a;
            puVar12 = puVar12 + 0x15;
          } while (iVar8 != 0);
        }
      }
    }
    FUN_1422451f0(param_1 + 0x2e8,lVar5 + 0x2e8);
    lVar13 = *(longlong *)(param_1 + 0x2e8);
    lVar6 = (longlong)*(int *)(param_1 + 0x2f0) * 0x38 + lVar13;
    for (; lVar13 != lVar6; lVar13 = lVar13 + 0x38) {
      lVar11 = *(longlong *)(lVar13 + 0x10);
      lVar14 = (longlong)*(int *)(lVar13 + 0x18) * 0x58 + lVar11;
      for (; lVar11 != lVar14; lVar11 = lVar11 + 0x58) {
        lVar3 = *(longlong *)(lVar11 + 0x48);
        if (lVar3 != 0) {
          uVar7 = *(undefined8 *)(lVar3 + 0x10);
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          uVar7 = FUN_1417985e0(uVar7,param_1,0,1,0,lVar3,0,0,0);
          *(undefined8 *)(lVar11 + 0x48) = uVar7;
        }
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0x338);
  if (0 < iVar8) {
    iVar2 = *(int *)(param_1 + 0x310);
    if ((iVar2 < 0) || (iVar8 <= iVar2)) {
      *(undefined4 *)(param_1 + 0x338) = 0;
      if (*(int *)(param_1 + 0x33c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0x330),0);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x328) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x330) + -8 + (longlong)(iVar8 - iVar2) * 8);
    }
  }
  if (lVar5 != param_1) {
    if (*(int *)(param_1 + 800) == *(int *)(lVar5 + 800)) {
      if ((*(int *)(param_1 + 800) == *(int *)(lVar5 + 800)) &&
         (iVar8 = _guard_xfg_dispatch_icall_nop
                            (*(void **)(param_1 + 0x318),*(void **)(lVar5 + 0x318),
                             (longlong)*(int *)(param_1 + 800) << 2), iVar8 == 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        return;
      }
    }
    TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x318,lVar5 + 0x318);
  }
  return;
}



// FUNCTION 142251c90 FUN_142251c90 body=26 status=ok
// SIG undefined FUN_142251c90(void)

void FUN_142251c90(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeec28 != 0) {
    plVar1 = DAT_146aeec20;
  }
                    /* WARNING: Could not recover jumptable at 0x000142251ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}



// FUNCTION 142251cb0 FUN_142251cb0 body=8 status=ok
// SIG undefined FUN_142251cb0(void)

undefined8 * FUN_142251cb0(void)

{
  return &DAT_146aeec20;
}



// FUNCTION 142251cc0 FUN_142251cc0 body=26 status=ok
// SIG undefined FUN_142251cc0(void)

void FUN_142251cc0(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeec58 != 0) {
    plVar1 = DAT_146aeec50;
  }
                    /* WARNING: Could not recover jumptable at 0x000142251cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}



// FUNCTION 142251ce0 FUN_142251ce0 body=8 status=ok
// SIG undefined FUN_142251ce0(void)

undefined8 * FUN_142251ce0(void)

{
  return &DAT_146aeec50;
}



// FUNCTION 142251cf0 FUN_142251cf0 body=26 status=ok
// SIG undefined FUN_142251cf0(void)

void FUN_142251cf0(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeec68 != 0) {
    plVar1 = DAT_146aeec60;
  }
                    /* WARNING: Could not recover jumptable at 0x000142251d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}



// FUNCTION 142251d10 FUN_142251d10 body=8 status=ok
// SIG undefined FUN_142251d10(void)

undefined8 * FUN_142251d10(void)

{
  return &DAT_146aeec60;
}



// FUNCTION 142251d20 OnComponentBoundsChanged body=35 status=ok
// SIG undefined OnComponentBoundsChanged(void)

void FNavigationSystem::OnComponentBoundsChanged
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeed08 != 0) {
    plVar1 = DAT_146aeed00;
  }
                    /* WARNING: Could not recover jumptable at 0x000142251d3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1,param_2,param_3);
  return;
}



// FUNCTION 142251d50 FUN_142251d50 body=8 status=ok
// SIG undefined FUN_142251d50(void)

undefined8 * FUN_142251d50(void)

{
  return &DAT_146aeed00;
}



// FUNCTION 142251d60 FUN_142251d60 body=26 status=ok
// SIG undefined FUN_142251d60(void)

void FUN_142251d60(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeec78 != 0) {
    plVar1 = DAT_146aeec70;
  }
                    /* WARNING: Could not recover jumptable at 0x000142251d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}



// FUNCTION 142251d80 FUN_142251d80 body=8 status=ok
// SIG undefined FUN_142251d80(void)

undefined8 * FUN_142251d80(void)

{
  return &DAT_146aeec70;
}



// FUNCTION 142251d90 FUN_142251d90 body=8 status=ok
// SIG undefined FUN_142251d90(void)

undefined * FUN_142251d90(void)

{
  return &DAT_146aeec40;
}



// FUNCTION 142251da0 FUN_142251da0 body=26 status=ok
// SIG undefined FUN_142251da0(void)

void FUN_142251da0(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeec88 != 0) {
    plVar1 = DAT_146aeec80;
  }
                    /* WARNING: Could not recover jumptable at 0x000142251db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}



// FUNCTION 142251dc0 FUN_142251dc0 body=8 status=ok
// SIG undefined FUN_142251dc0(void)

undefined8 * FUN_142251dc0(void)

{
  return &DAT_146aeec80;
}



// FUNCTION 142251dd0 FUN_142251dd0 body=8 status=ok
// SIG undefined FUN_142251dd0(void)

undefined * FUN_142251dd0(void)

{
  return &DAT_146aeec30;
}



// FUNCTION 142251de0 Override body=123 status=ok
// SIG undefined Override(void)

void FBaseBlendedCurve<TMemStackAllocator<0>_>::Override(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  InitFrom();
  *(undefined4 *)(param_1 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc)) {
    FUN_140957580(param_1,0);
  }
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar2 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + iVar1) {
      FUN_140957580(param_1);
      iVar2 = (int)param_1[1];
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar2 * 8),(void *)*param_2,(longlong)iVar1 << 3);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 142251e60 Override body=161 status=ok
// SIG undefined Override(void)

void FBaseBlendedCurve<TMemStackAllocator<0>_>::Override
               (longlong *param_1,longlong *param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  InitFrom();
  if (ABS(param_3 - 1.0) <= 1e-08) {
    Override(param_1,param_2);
    return;
  }
  iVar3 = 0;
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      lVar1 = lVar2 + 8;
      iVar3 = iVar3 + 1;
      *(undefined1 *)(lVar2 + 4 + *param_1) = *(undefined1 *)(*param_2 + -4 + lVar1);
      *(float *)(lVar2 + *param_1) = param_3 * *(float *)(*param_2 + -8 + lVar1);
      lVar2 = lVar1;
    } while (iVar3 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142251f10 FUN_142251f10 body=162 status=ok
// SIG undefined FUN_142251f10(void)

void FUN_142251f10(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x458) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146aeef18) {
      _Init_thread_header(&DAT_146aeef18);
      if (DAT_146aeef18 == -1) {
        uVar1 = FCommandLine::Get();
        DAT_146aeef14 = FParse::Param(uVar1,L"NoAmbientActors");
        _Init_thread_footer(&DAT_146aeef18);
      }
    }
    if (DAT_146aeef14 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x458) + 0x558))
                (*(longlong **)(param_1 + 0x458),param_2);
    }
  }
  return;
}



// FUNCTION 142251fc0 FUN_142251fc0 body=32 status=ok
// SIG undefined FUN_142251fc0(void)

void FUN_142251fc0(longlong *param_1)

{
  FUN_1422b0550();
                    /* WARNING: Could not recover jumptable at 0x000142251fd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1);
  return;
}



// FUNCTION 142251fe0 PostLoadDefaultObject body=27 status=ok
// SIG undefined PostLoadDefaultObject(void)

void UAnimBlueprintGeneratedClass::PostLoadDefaultObject(undefined8 param_1,undefined8 param_2)

{
  FUN_1422f5730();
  UAnimInstance::PreInitializeRootNode(param_2);
  return;
}



// FUNCTION 142252000 FUN_142252000 body=90 status=ok
// SIG undefined FUN_142252000(void)

void FUN_142252000(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar2 = UNavAreaBase::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar4 = lVar1;
    if (lVar1 != 0) {
      while (lVar4 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if ((lVar1 != 0) && (DAT_146aeebe0 != (code *)0x0)) {
        uVar3 = (*DAT_146aeebe0)();
        *(undefined8 *)(param_1 + 8) = uVar3;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
    }
  }
  return;
}



// FUNCTION 142252060 FUN_142252060 body=199 status=ok
// SIG undefined FUN_142252060(void)

void FUN_142252060(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  UBlueprintGeneratedClass::PurgeClass();
  puVar1 = *(undefined8 **)(param_1 + 0x300);
  for (iVar2 = *(int *)(param_1 + 0x308); iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1[0xc] = &PTR_FUN_14410b0e0;
    *puVar1 = &PTR_FUN_14410b0e0;
    puVar1 = puVar1 + 0x15;
  }
  *(undefined4 *)(param_1 + 0x308) = 0;
  if (*(int *)(param_1 + 0x30c) != 0) {
    TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0x300),0)
    ;
  }
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  iVar2 = *(int *)(param_1 + 0x2f0);
  if (iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x2e8) + 0x10;
    do {
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        FMemory::Free();
      }
      FUN_142244e40(lVar3);
      lVar3 = lVar3 + 0x38;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if (*(int *)(param_1 + 0x2f4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x2e8,0);
  }
  return;
}



// FUNCTION 142252130 FUN_142252130 body=8 status=ok
// SIG undefined FUN_142252130(void)

undefined * FUN_142252130(void)

{
  return &DAT_146aeec90;
}



// FUNCTION 142252140 Reset body=147 status=ok
// SIG undefined Reset(void)

void FAlphaBlend::Reset(undefined1 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (0.0 < *(float *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    fVar1 = (float)FUN_142246950(0,*param_1,*(undefined8 *)(param_1 + 8));
    fVar2 = ABS(1.0 - *(float *)(param_1 + 0x14)) * *(float *)(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
    fVar1 = (float)FUN_142246950(0x3f800000,*param_1,*(undefined8 *)(param_1 + 8));
  }
  *(float *)(param_1 + 0x18) = fVar1;
  *(float *)(param_1 + 0x20) =
       (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x24)) * fVar1 +
       *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x1c) = fVar2;
  *(undefined2 *)(param_1 + 0x2d) = 0x100;
  param_1[0x2c] = 0;
  return;
}



// FUNCTION 1422521e0 FUN_1422521e0 body=1837 status=ok
// SIG undefined FUN_1422521e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422521e0(longlong param_1,undefined8 param_2,float *param_3,int param_4,int *param_5,
                  longlong param_6,char param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong *plVar7;
  char cVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  float local_98;
  float fStack_94;
  float fStack_90;
  
  if (param_1 != 0) {
    if ((param_4 < 0) || (*(int *)(param_1 + 0x40) <= param_4)) {
      cVar8 = '\0';
    }
    else {
      cVar8 = *(char *)(*(longlong *)(param_1 + 0x38) + 0xc + (longlong)param_4 * 0x10);
    }
    lVar10 = (longlong)param_4;
    if (cVar8 == '\x01') {
      if (param_7 == '\0') {
        puVar1 = (undefined4 *)(*(longlong *)(param_6 + 0xa0) + 0x10 + (longlong)*param_5 * 0x30);
        local_98 = (float)*puVar1;
        fStack_94 = (float)puVar1[1];
        fStack_90 = (float)puVar1[2];
      }
      else {
        local_98 = (float)_DAT_1468b5d90;
        fStack_94 = (float)((ulonglong)_DAT_1468b5d90 >> 0x20);
        fStack_90 = (float)DAT_1468b5d98;
      }
      auVar13._4_4_ = fStack_94;
      auVar13._0_4_ = local_98;
      auVar13._8_4_ = fStack_90;
      auVar13._12_4_ = 0;
      *(undefined1 (*) [16])(param_3 + 4) = auVar13;
      return;
    }
    if (cVar8 == '\x02') {
      plVar7 = (longlong *)FUN_1422f2860(param_6);
      pfVar9 = (float *)(*plVar7 + 0x10 + lVar10 * 0x30);
      fVar27 = SQRT(pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9 + pfVar9[2] * pfVar9[2]);
      if (0.0001 < fVar27) {
        pfVar9 = (float *)(*(longlong *)(param_6 + 0xa0) + 0x10 + (longlong)*param_5 * 0x30);
        fVar27 = SQRT(pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9 + pfVar9[2] * pfVar9[2]) *
                 (1.0 / fVar27);
        param_3[4] = fVar27 * param_3[4];
        param_3[5] = fVar27 * param_3[5];
        param_3[6] = fVar27 * param_3[6];
        param_3[7] = param_3[7] * 0.0;
      }
    }
    else if (cVar8 == '\x03') {
      if (param_7 == '\0') {
        plVar7 = (longlong *)FUN_1422f2860(param_6);
        fVar27 = *param_3;
        fVar18 = param_3[1];
        fVar19 = param_3[2];
        fVar20 = param_3[3];
        pfVar11 = (float *)((longlong)*param_5 * 0x30 + *(longlong *)(param_6 + 0xa0));
        fVar29 = *pfVar11;
        fVar15 = pfVar11[1];
        fVar23 = pfVar11[2];
        fVar17 = pfVar11[3];
        pfVar9 = (float *)(*plVar7 + lVar10 * 0x30);
        fVar21 = pfVar9[3];
        fVar22 = -*pfVar9;
        fVar28 = -pfVar9[1];
        fVar14 = -pfVar9[2];
        fVar24 = fVar21 * fVar27 * _DAT_146aeee90 + fVar20 * fVar22 +
                 fVar14 * fVar18 * _DAT_146aeee80 + fVar28 * fVar19 * _DAT_146aeee70;
        fVar25 = fVar14 * fVar27 * fRam0000000146aeee94 + fVar20 * fVar28 +
                 fVar21 * fVar18 * fRam0000000146aeee84 + fVar22 * fVar19 * fRam0000000146aeee74;
        fVar26 = fVar28 * fVar27 * fRam0000000146aeee98 + fVar20 * fVar14 +
                 fVar22 * fVar18 * fRam0000000146aeee88 + fVar21 * fVar19 * fRam0000000146aeee78;
        fVar27 = fVar22 * fVar27 * fRam0000000146aeee9c + fVar20 * fVar21 +
                 fVar28 * fVar18 * fRam0000000146aeee8c + fVar14 * fVar19 * fRam0000000146aeee7c;
        fVar21 = fVar17 * fVar24 * _DAT_146aeee90 + fVar27 * fVar29 +
                 fVar23 * fVar25 * _DAT_146aeee80 + fVar15 * fVar26 * _DAT_146aeee70;
        fVar28 = fVar23 * fVar24 * fRam0000000146aeee94 + fVar27 * fVar15 +
                 fVar17 * fVar25 * fRam0000000146aeee84 + fVar29 * fVar26 * fRam0000000146aeee74;
        fVar14 = fVar15 * fVar24 * fRam0000000146aeee98 + fVar27 * fVar23 +
                 fVar29 * fVar25 * fRam0000000146aeee88 + fVar17 * fVar26 * fRam0000000146aeee78;
        fVar29 = fVar29 * fVar24 * fRam0000000146aeee9c + fVar27 * fVar17 +
                 fVar15 * fVar25 * fRam0000000146aeee8c + fVar23 * fVar26 * fRam0000000146aeee7c;
        *param_3 = fVar21;
        param_3[1] = fVar28;
        param_3[2] = fVar14;
        param_3[3] = fVar29;
        pfVar9 = (float *)(*plVar7 + 0x10 + lVar10 * 0x30);
        auVar4._4_4_ = param_3[5] + (pfVar11[5] - pfVar9[1]);
        auVar4._0_4_ = param_3[4] + (pfVar11[4] - *pfVar9);
        auVar4._8_4_ = param_3[6] + (pfVar11[6] - pfVar9[2]);
        auVar4._12_4_ = 0;
        *(undefined1 (*) [16])(param_3 + 4) = auVar4;
        fVar20 = fRam0000000146aeee3c;
        fVar19 = fRam0000000146aeee38;
        fVar18 = fRam0000000146aeee34;
        fVar27 = _DAT_146aeee30;
        pfVar9 = (float *)(*plVar7 + 0x20 + lVar10 * 0x30);
        if (1e-08 < ABS(*pfVar9)) {
          fVar15 = 1.0 / *pfVar9;
        }
        else {
          fVar15 = 0.0;
        }
        if (1e-08 < ABS(pfVar9[1])) {
          fVar23 = 1.0 / pfVar9[1];
        }
        else {
          fVar23 = 0.0;
        }
        if (1e-08 < ABS(pfVar9[2])) {
          fVar17 = 1.0 / pfVar9[2];
        }
        else {
          fVar17 = 0.0;
        }
        auVar5._4_4_ = pfVar11[9] * fVar23 * param_3[9];
        auVar5._0_4_ = pfVar11[8] * fVar15 * param_3[8];
        auVar5._8_4_ = pfVar11[10] * fVar17 * param_3[10];
        auVar5._12_4_ = 0;
        *(undefined1 (*) [16])(param_3 + 8) = auVar5;
        auVar12._0_4_ = fVar21 * fVar21 + fVar14 * fVar14;
        auVar12._4_4_ = fVar28 * fVar28 + fVar29 * fVar29;
        auVar12._8_4_ = fVar14 * fVar14 + fVar21 * fVar21;
        auVar12._12_4_ = fVar29 * fVar29 + fVar28 * fVar28;
        fVar24 = auVar12._4_4_ + auVar12._0_4_;
        fVar25 = auVar12._8_4_ + auVar12._4_4_;
        fVar26 = auVar12._12_4_ + auVar12._8_4_;
        fVar16 = auVar12._0_4_ + auVar12._12_4_;
        auVar6._4_4_ = fVar25;
        auVar6._0_4_ = fVar24;
        auVar6._8_4_ = fVar26;
        auVar6._12_4_ = fVar16;
        auVar13 = rsqrtps(auVar12,auVar6);
        fVar15 = auVar13._0_4_;
        fVar23 = auVar13._4_4_;
        fVar17 = auVar13._8_4_;
        fVar22 = auVar13._12_4_;
        fVar15 = (fVar27 - fVar15 * fVar15 * fVar24 * fVar27) * fVar15 + fVar15;
        fVar23 = (fVar18 - fVar23 * fVar23 * fVar25 * fVar18) * fVar23 + fVar23;
        fVar17 = (fVar19 - fVar17 * fVar17 * fVar26 * fVar19) * fVar17 + fVar17;
        fVar22 = (fVar20 - fVar22 * fVar22 * fVar16 * fVar20) * fVar22 + fVar22;
        fVar18 = (float)(((uint)(((fVar18 - fVar23 * fVar23 * fVar25 * fVar18) * fVar23 + fVar23) *
                                fVar28) ^ uRam0000000146aeee24) &
                         -(uint)(fRam0000000146aeee44 <= fVar25) ^ uRam0000000146aeee24);
        fVar19 = (float)(((uint)(((fVar19 - fVar17 * fVar17 * fVar26 * fVar19) * fVar17 + fVar17) *
                                fVar14) ^ uRam0000000146aeee28) &
                         -(uint)(fRam0000000146aeee48 <= fVar26) ^ uRam0000000146aeee28);
        fVar20 = (float)(((uint)(((fVar20 - fVar22 * fVar22 * fVar16 * fVar20) * fVar22 + fVar22) *
                                fVar29) ^ uRam0000000146aeee2c) &
                         -(uint)(fRam0000000146aeee4c <= fVar16) ^ uRam0000000146aeee2c);
        *param_3 = (float)(((uint)(((fVar27 - fVar15 * fVar15 * fVar24 * fVar27) * fVar15 + fVar15)
                                  * fVar21) ^ _DAT_146aeee20) & -(uint)(_DAT_146aeee40 <= fVar24) ^
                          _DAT_146aeee20);
        param_3[1] = fVar18;
        param_3[2] = fVar19;
        param_3[3] = fVar20;
      }
    }
    else if ((((cVar8 == '\x04') && (param_7 == '\0')) &&
             (plVar7 = (longlong *)FUN_1422f28c0(param_6), 0 < (int)plVar7[1])) &&
            (((int)plVar7[3] == *(int *)(param_6 + 8) &&
             (iVar2 = *(int *)(plVar7[2] + (longlong)*param_5 * 4), iVar2 != -1)))) {
      fVar27 = param_3[4];
      fVar18 = param_3[5];
      fVar19 = param_3[6];
      pfVar9 = (float *)((longlong)iVar2 * 0x30 + *plVar7);
      if ((0.001 < ABS(fVar27 - pfVar9[5])) ||
         ((0.001 < ABS(fVar18 - pfVar9[6]) || (0.001 < ABS(fVar19 - pfVar9[7]))))) {
        fVar20 = pfVar9[1];
        fVar29 = pfVar9[2];
        fVar15 = pfVar9[3];
        fStack_94 = pfVar9[4];
        fVar23 = *pfVar9;
        fVar28 = fVar20 * fVar19 - fVar29 * fVar18;
        fVar28 = fVar28 + fVar28;
        fVar21 = fVar29 * fVar27 - fVar23 * fVar19;
        fVar17 = fVar23 * fVar18 - fVar20 * fVar27;
        fVar21 = fVar21 + fVar21;
        fVar17 = fVar17 + fVar17;
        local_98 = ((fVar20 * fVar17 - fVar29 * fVar21) + fVar15 * fVar28 + fVar27) * fStack_94;
        fStack_90 = ((fVar23 * fVar21 - fVar20 * fVar28) + fVar15 * fVar17 + fVar19) * fStack_94;
        fStack_94 = ((fVar29 * fVar28 - fVar23 * fVar17) + fVar15 * fVar21 + fVar18) * fStack_94;
      }
      else {
        fStack_90 = pfVar9[10];
        local_98 = (float)*(undefined8 *)(pfVar9 + 8);
        fStack_94 = (float)((ulonglong)*(undefined8 *)(pfVar9 + 8) >> 0x20);
      }
      auVar3._4_4_ = fStack_94;
      auVar3._0_4_ = local_98;
      auVar3._8_4_ = fStack_90;
      auVar3._12_4_ = 0;
      *(undefined1 (*) [16])(param_3 + 4) = auVar3;
    }
  }
  return;
}



// FUNCTION 142252910 SetAlpha body=80 status=ok
// SIG undefined SetAlpha(void)

void FAlphaBlend::SetAlpha(undefined1 *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= param_2) && (fVar1 = param_2, 1.0 <= param_2)) {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x14) = fVar1;
  fVar1 = (float)FUN_142246950(fVar1,*param_1,*(undefined8 *)(param_1 + 8));
  *(float *)(param_1 + 0x18) = fVar1;
  *(float *)(param_1 + 0x20) =
       (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x24)) * fVar1 +
       *(float *)(param_1 + 0x24);
  return;
}



// FUNCTION 142252960 SetBlendOption body=7 status=ok
// SIG undefined SetBlendOption(void)

void FAlphaBlend::SetBlendOption(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  param_1[0x2e] = 1;
  return;
}



// FUNCTION 142252970 SetBlendTime body=17 status=ok
// SIG undefined SetBlendTime(void)

void FAlphaBlend::SetBlendTime(longlong param_1,float param_2)

{
  *(undefined1 *)(param_1 + 0x2d) = 1;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 142252990 SetCustomCurve body=9 status=ok
// SIG undefined SetCustomCurve(void)

void FAlphaBlend::SetCustomCurve(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  return;
}



// FUNCTION 1422529a0 FUN_1422529a0 body=8 status=ok
// SIG undefined FUN_1422529a0(void)

void FUN_1422529a0(undefined8 param_1)

{
  DAT_146aeed50 = param_1;
  return;
}



// FUNCTION 1422529b0 SetDesiredValue body=20 status=ok
// SIG undefined SetDesiredValue(void)

void FAlphaBlend::SetDesiredValue(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  return;
}



// FUNCTION 1422529d0 FUN_1422529d0 body=11 status=ok
// SIG undefined FUN_1422529d0(void)

void FUN_1422529d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001422529d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))();
  return;
}



// FUNCTION 1422529e0 SetIncludeFlags body=11 status=ok
// SIG undefined SetIncludeFlags(void)

void FNavigationQueryFilter::SetIncludeFlags(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001422529e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))();
  return;
}



// FUNCTION 1422529f0 SetValueRange body=19 status=ok
// SIG undefined SetValueRange(void)

void FAlphaBlend::SetValueRange(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  return;
}



// FUNCTION 142252a10 FUN_142252a10 body=23 status=ok
// SIG undefined FUN_142252a10(void)

void FUN_142252a10(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142252a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x458) + 0x560))();
    return;
  }
  return;
}



// FUNCTION 142252a50 FUN_142252a50 body=8 status=ok
// SIG undefined FUN_142252a50(void)

undefined8 * FUN_142252a50(void)

{
  return &DAT_146aeeca0;
}



// FUNCTION 142252a60 Update body=546 status=ok
// SIG undefined Update(void)

float FAlphaBlend::Update(undefined1 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_1[0x2c] != '\0') {
    fVar1 = *(float *)(param_1 + 0x24);
    if (fVar1 == *(float *)(param_1 + 0x28)) {
      *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
      fVar1 = 1.0;
    }
    else {
      fVar1 = (*(float *)(param_1 + 0x20) - fVar1) / (*(float *)(param_1 + 0x28) - fVar1);
      if (0.0 <= fVar1) {
        if (1.0 <= fVar1) {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = 0.0;
      }
      *(float *)(param_1 + 0x14) = fVar1;
    }
    fVar1 = (float)FUN_142246950(fVar1,*param_1,*(undefined8 *)(param_1 + 8));
    *(float *)(param_1 + 0x18) = fVar1;
    *(float *)(param_1 + 0x20) =
         (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x24)) * fVar1 +
         *(float *)(param_1 + 0x24);
    param_1[0x2c] = 0;
  }
  if (param_1[0x2d] != '\0') {
    if (0.0 < *(float *)(param_1 + 0x10)) {
      *(float *)(param_1 + 0x1c) =
           ABS(1.0 - *(float *)(param_1 + 0x14)) * *(float *)(param_1 + 0x10);
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
      fVar1 = (float)FUN_142246950(0x3f800000,*param_1,*(undefined8 *)(param_1 + 8));
      *(float *)(param_1 + 0x18) = fVar1;
      *(float *)(param_1 + 0x20) =
           (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x24)) * fVar1 +
           *(float *)(param_1 + 0x24);
    }
    param_1[0x2d] = 0;
  }
  if (param_1[0x2e] == '\0') {
    fVar1 = *(float *)(param_1 + 0x30);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x24);
    fVar2 = (float)FUN_142246950(0x3f800000,*param_1,*(undefined8 *)(param_1 + 8));
    param_1[0x2e] = 0;
    fVar1 = fVar2 * (*(float *)(param_1 + 0x28) - fVar1) + fVar1;
    *(float *)(param_1 + 0x30) = fVar1;
  }
  if (fVar1 != *(float *)(param_1 + 0x20)) {
    fVar1 = *(float *)(param_1 + 0x1c);
    if (fVar1 <= param_2) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
      fVar2 = (float)FUN_142246950(0x3f800000,*param_1,*(undefined8 *)(param_1 + 8));
      *(float *)(param_1 + 0x18) = fVar2;
      *(float *)(param_1 + 0x20) =
           (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x24)) * fVar2 +
           *(float *)(param_1 + 0x24);
      return param_2 - fVar1;
    }
    *(float *)(param_1 + 0x1c) = fVar1 - param_2;
    fVar1 = ((1.0 - *(float *)(param_1 + 0x14)) / fVar1) * param_2 + *(float *)(param_1 + 0x14);
    if (0.0 <= fVar1) {
      if (1.0 <= fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    *(float *)(param_1 + 0x14) = fVar1;
    fVar1 = (float)FUN_142246950(fVar1,*param_1,*(undefined8 *)(param_1 + 8));
    *(float *)(param_1 + 0x18) = fVar1;
    *(float *)(param_1 + 0x20) =
         (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x24)) * fVar1 +
         *(float *)(param_1 + 0x24);
  }
  return 0.0;
}



// FUNCTION 142252c90 FUN_142252c90 body=33 status=ok
// SIG undefined FUN_142252c90(void)

void FUN_142252c90(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeecf8 != 0) {
    plVar1 = DAT_146aeecf0;
  }
                    /* WARNING: Could not recover jumptable at 0x000142252cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1,param_2);
  return;
}



// FUNCTION 142252cc0 FUN_142252cc0 body=8 status=ok
// SIG undefined FUN_142252cc0(void)

undefined8 * FUN_142252cc0(void)

{
  return &DAT_146aeecf0;
}



// FUNCTION 142252cd0 FUN_142252cd0 body=26 status=ok
// SIG undefined FUN_142252cd0(void)

void FUN_142252cd0(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeebf8 != 0) {
    plVar1 = DAT_146aeebf0;
  }
                    /* WARNING: Could not recover jumptable at 0x000142252ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}



// FUNCTION 142252cf0 FUN_142252cf0 body=8 status=ok
// SIG undefined FUN_142252cf0(void)

undefined8 * FUN_142252cf0(void)

{
  return &DAT_146aeebf0;
}



// FUNCTION 142252d00 FUN_142252d00 body=26 status=ok
// SIG undefined FUN_142252d00(void)

void FUN_142252d00(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeec08 != 0) {
    plVar1 = DAT_146aeec00;
  }
                    /* WARNING: Could not recover jumptable at 0x000142252d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}



// FUNCTION 142252d20 FUN_142252d20 body=8 status=ok
// SIG undefined FUN_142252d20(void)

undefined * FUN_142252d20(void)

{
  return &DAT_146aeec10;
}



// FUNCTION 142252d30 FUN_142252d30 body=8 status=ok
// SIG undefined FUN_142252d30(void)

undefined8 * FUN_142252d30(void)

{
  return &DAT_146aeec00;
}



// FUNCTION 142252d40 UpdateDesiredBoneWeight body=138 status=ok
// SIG undefined UpdateDesiredBoneWeight(void)

void FAnimationRuntime::UpdateDesiredBoneWeight
               (longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  
  ::_guard_xfg_dispatch_icall_nop((void *)*param_2,0,(longlong)(int)param_2[1] << 3);
  iVar3 = 0;
  if (0 < (int)param_1[1]) {
    lVar2 = 0;
    do {
      iVar1 = *(int *)(*param_1 + lVar2);
      fVar4 = *(float *)(*param_3 + (longlong)iVar1 * 4) * *(float *)(*param_1 + 4 + lVar2);
      if (1e-05 < fVar4) {
        *(int *)(lVar2 + *param_2) = iVar1;
        *(float *)(lVar2 + 4 + *param_2) = fVar4;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 142252dd0 ValidateSegmentTimes body=211 status=ok
// SIG undefined ValidateSegmentTimes(void)

void FAnimTrack::ValidateSegmentTimes(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  
  if (0 < (int)param_1[1]) {
    iVar4 = 0;
    *(undefined4 *)(*param_1 + 8) = 0;
    if (0 < (int)param_1[1]) {
      lVar5 = 0;
      lVar3 = 0;
      do {
        lVar1 = *param_1;
        if (0 < lVar5) {
          lVar2 = *(longlong *)(lVar3 + -0x20 + lVar1);
          if (lVar2 == 0) {
            fVar6 = 1.0;
          }
          else {
            fVar6 = *(float *)(lVar2 + 0x94);
          }
          fVar6 = fVar6 * *(float *)(lVar3 + -0xc + lVar1);
          if (ABS(fVar6) <= 1e-08) {
            fVar6 = 1.0;
          }
          *(float *)(lVar3 + 8 + lVar1) =
               ((*(float *)(lVar3 + -0x10 + lVar1) - *(float *)(lVar3 + -0x14 + lVar1)) *
               (float)*(int *)(lVar3 + -8 + lVar1)) / ABS(fVar6) + *(float *)(lVar3 + -0x18 + lVar1)
          ;
        }
        if (*(longlong *)(lVar3 + lVar1) != 0) {
          fVar6 = *(float *)(*(longlong *)(lVar3 + lVar1) + 0x90);
          if (fVar6 < *(float *)(lVar3 + 0x10 + lVar1)) {
            *(float *)(lVar3 + 0x10 + lVar1) = fVar6;
          }
        }
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 1;
        lVar3 = lVar3 + 0x20;
      } while (iVar4 < (int)param_1[1]);
    }
  }
  return;
}



// FUNCTION 142252eb0 FUN_142252eb0 body=33 status=ok
// SIG undefined FUN_142252eb0(void)

void FUN_142252eb0(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (DAT_146aeed38 != 0) {
    plVar1 = DAT_146aeed30;
  }
                    /* WARNING: Could not recover jumptable at 0x000142252ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1,param_2);
  return;
}



// FUNCTION 142252ee0 FUN_142252ee0 body=8 status=ok
// SIG undefined FUN_142252ee0(void)

undefined8 * FUN_142252ee0(void)

{
  return &DAT_146aeed30;
}



// FUNCTION 142252f00 Append<FDefaultSetAllocator> body=560 status=ok
// SIG undefined Append<FDefaultSetAllocator>(void)

void TMap<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,0>_>
     ::Append<FDefaultSetAllocator>(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_98;
  longlong lStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Reserve();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98._0_4_ = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = (int)local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar5;
      if (bVar4) goto LAB_142252fed;
      uVar3 = puVar9[lVar7 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142252fed:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar8 = uVar3 & 0xffffffe0;
  local_50._0_4_ = SUB84(param_2,0);
  local_50._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_78 = (undefined4)local_50;
  uStack_74 = local_50._4_4_;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  uStack_84 = uVar3;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & local_88;
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1422530b3;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      local_88 = 0xffffffff;
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1422530b3:
      uStack_84 = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_5c == uVar3) && (local_68 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == param_2)) break;
    local_98 = *(longlong *)CONCAT44(uStack_74,local_78) + (longlong)(int)uStack_5c * 0x18;
    lStack_90 = local_98 + 8;
    FUN_1417e05c0(param_1,local_res8,&local_98,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 142253130 FUN_142253130 body=831 status=ok
// SIG undefined FUN_142253130(void)

void FUN_142253130(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  byte bVar8;
  ulonglong uVar9;
  size_t sVar10;
  ulonglong uVar11;
  uint local_res18 [2];
  uint local_res20;
  
  if (param_3 != -1) {
    puVar7 = (uint *)((longlong)param_3 + *(longlong *)(param_1 + 0x120));
    bVar8 = *(byte *)(param_2 + 5);
    if (-1 < (char)bVar8) {
      lVar3 = (longlong)(int)((longlong *)param_2[0x13])[1];
      lVar6 = param_2[0x14];
      if (lVar3 <= param_2[0x14]) {
        lVar6 = lVar3;
      }
      if (lVar6 < param_2[0x12] + 4) {
        bVar8 = bVar8 | 0x80;
        *(byte *)(param_2 + 5) = bVar8;
      }
      else {
        *puVar7 = *(uint *)((longlong)(int)param_2[0x12] + *(longlong *)param_2[0x13]);
        param_2[0x12] = param_2[0x12] + 4;
        bVar8 = *(byte *)(param_2 + 5);
      }
    }
    local_res20 = *puVar7;
    puVar7 = puVar7 + 1;
    local_res18[0] = local_res20 & 0xffffff;
    uVar11 = (ulonglong)local_res18[0];
    uVar2 = (int)local_res20 >> 0x1c & 0xf;
    iVar1 = *(int *)(&DAT_145018d30 + (ulonglong)uVar2 * 4);
    sVar10 = (size_t)iVar1;
    uVar5 = 1;
    if (uVar2 != 3) {
      uVar5 = (uint)(byte)(&DAT_145018db0)[uVar2 * 8 | local_res20 >> 0x18 & 7];
    }
    uVar4 = 0;
    if (uVar2 == 3) {
      uVar4 = (uint)(byte)(&DAT_145018db0)[uVar2 * 8 | local_res20 >> 0x18 & 7];
    }
    if (uVar4 != 0) {
      uVar9 = (ulonglong)uVar4;
      do {
        bVar8 = *(byte *)(param_2 + 5);
        if (-1 < (char)bVar8) {
          lVar3 = (longlong)(int)((longlong *)param_2[0x13])[1];
          lVar6 = param_2[0x14];
          if (lVar3 <= param_2[0x14]) {
            lVar6 = lVar3;
          }
          if (lVar6 < param_2[0x12] + 4) {
            bVar8 = bVar8 | 0x80;
            *(byte *)(param_2 + 5) = bVar8;
          }
          else {
            *puVar7 = *(uint *)((longlong)(int)param_2[0x12] + *(longlong *)param_2[0x13]);
            param_2[0x12] = param_2[0x12] + 4;
            bVar8 = *(byte *)(param_2 + 5);
          }
        }
        puVar7 = puVar7 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (local_res18[0] != 0) {
      do {
        if (uVar5 != 0) {
          uVar9 = (ulonglong)uVar5;
          do {
            if ((iVar1 != 0) && (-1 < (char)*(byte *)(param_2 + 5))) {
              lVar3 = (longlong)(int)((longlong *)param_2[0x13])[1];
              lVar6 = param_2[0x14];
              if (lVar3 <= param_2[0x14]) {
                lVar6 = lVar3;
              }
              if (lVar6 < (longlong)(param_2[0x12] + sVar10)) {
                *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
              }
              else {
                _guard_xfg_dispatch_icall_nop
                          (puVar7,(void *)((longlong)(int)param_2[0x12] + *(longlong *)param_2[0x13]
                                          ),sVar10);
                param_2[0x12] = param_2[0x12] + sVar10;
              }
            }
            puVar7 = (uint *)((longlong)puVar7 + sVar10);
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      bVar8 = *(byte *)(param_2 + 5);
    }
    uVar5 = local_res18[0];
    if ((local_res20 & 0x8000000) != 0) {
      uVar2 = ((int)puVar7 + 3U & 0xfffffffc) - (int)puVar7;
      if ((bVar8 & 2) == 0) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar7,(longlong)(int)uVar2);
      }
      else {
        local_res18[0] = CONCAT31(local_res18[0]._1_3_,0x55);
        if (0 < (int)uVar2) {
          uVar11 = (ulonglong)uVar2;
          do {
            (**(code **)(*param_2 + 0x50))(param_2,local_res18,1);
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      puVar7 = (uint *)((longlong)puVar7 + (longlong)(int)uVar2);
      if (uVar5 != 0) {
        uVar11 = (ulonglong)uVar5;
        sVar10 = (ulonglong)(0xff < *(int *)(param_1 + 0xb8)) + 1;
        do {
          if (-1 < (char)*(byte *)(param_2 + 5)) {
            lVar3 = (longlong)(int)((longlong *)param_2[0x13])[1];
            lVar6 = param_2[0x14];
            if (lVar3 <= param_2[0x14]) {
              lVar6 = lVar3;
            }
            if (lVar6 < (longlong)(param_2[0x12] + sVar10)) {
              *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (puVar7,(void *)((longlong)(int)param_2[0x12] + *(longlong *)param_2[0x13]),
                         sVar10);
              param_2[0x12] = param_2[0x12] + sVar10;
            }
          }
          puVar7 = (uint *)((longlong)puVar7 + sVar10);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    uVar5 = ((int)puVar7 + 3U & 0xfffffffc) - (int)puVar7;
    if ((*(byte *)(param_2 + 5) & 2) == 0) {
      (**(code **)(*param_2 + 0x50))(param_2,puVar7,(longlong)(int)uVar5);
    }
    else {
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,0x55);
      if (0 < (int)uVar5) {
        uVar11 = (ulonglong)uVar5;
        do {
          (**(code **)(*param_2 + 0x50))(param_2,local_res18,1);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142253470 FUN_142253470 body=575 status=ok
// SIG undefined FUN_142253470(void)

void FUN_142253470(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_res18 [2];
  uint local_res20;
  
  if (param_3 != -1) {
    puVar4 = (uint *)((longlong)param_3 + *(longlong *)(param_1 + 0x120));
    (**(code **)(*param_2 + 0x50))(param_2,puVar4,4);
    local_res20 = *puVar4;
    puVar4 = puVar4 + 1;
    uVar8 = local_res20 & 0xffffff;
    uVar9 = (ulonglong)uVar8;
    uVar2 = (int)local_res20 >> 0x1c & 0xf;
    iVar1 = *(int *)(&DAT_145018d30 + (ulonglong)uVar2 * 4);
    uVar5 = 1;
    if (uVar2 != 3) {
      uVar5 = (uint)(byte)(&DAT_145018db0)[uVar2 * 8 | local_res20 >> 0x18 & 7];
    }
    uVar3 = 0;
    if (uVar2 == 3) {
      uVar3 = (uint)(byte)(&DAT_145018db0)[uVar2 * 8 | local_res20 >> 0x18 & 7];
    }
    local_res18[0] = uVar8;
    if (uVar3 != 0) {
      uVar6 = (ulonglong)uVar3;
      do {
        (**(code **)(*param_2 + 0x50))(param_2,puVar4,4);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (uVar8 != 0) {
      do {
        if (uVar5 != 0) {
          uVar6 = (ulonglong)uVar5;
          do {
            (**(code **)(*param_2 + 0x50))(param_2,puVar4,(longlong)iVar1);
            puVar4 = (uint *)((longlong)puVar4 + (longlong)iVar1);
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        uVar9 = uVar9 - 1;
        uVar8 = local_res18[0];
      } while (uVar9 != 0);
    }
    if ((local_res20 & 0x8000000) != 0) {
      uVar5 = ((int)puVar4 + 3U & 0xfffffffc) - (int)puVar4;
      if ((*(byte *)(param_2 + 5) & 2) == 0) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar4,(longlong)(int)uVar5);
      }
      else {
        local_res18[0] = CONCAT31(local_res18[0]._1_3_,0x55);
        if (0 < (int)uVar5) {
          uVar9 = (ulonglong)uVar5;
          do {
            (**(code **)(*param_2 + 0x50))(param_2,local_res18,1);
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      puVar4 = (uint *)((longlong)puVar4 + (longlong)(int)uVar5);
      if (uVar8 != 0) {
        uVar9 = (ulonglong)uVar8;
        lVar7 = (ulonglong)(0xff < *(int *)(param_1 + 0xb8)) + 1;
        do {
          (**(code **)(*param_2 + 0x50))(param_2,puVar4,lVar7);
          puVar4 = (uint *)((longlong)puVar4 + lVar7);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    uVar5 = ((int)puVar4 + 3U & 0xfffffffc) - (int)puVar4;
    if ((*(byte *)(param_2 + 5) & 2) == 0) {
      (**(code **)(*param_2 + 0x50))(param_2,puVar4,(longlong)(int)uVar5);
    }
    else {
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,0x55);
      if (0 < (int)uVar5) {
        uVar9 = (ulonglong)uVar5;
        do {
          (**(code **)(*param_2 + 0x50))(param_2,local_res18,1);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1422536b0 FUN_1422536b0 body=968 status=ok
// SIG undefined FUN_1422536b0(void)

int * FUN_1422536b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  ulonglong *_Src;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  bool bVar19;
  
  iVar10 = 1;
  iVar18 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x18);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar12;
  lVar7 = (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  bVar19 = false;
  puVar17 = (uint *)((longlong)plVar8 + lVar7);
  *puVar17 = *puVar17 | 1 << ((byte)iVar12 & 0x1f);
  puVar2 = (undefined1 *)param_3[1];
  lVar1 = (longlong)iVar12 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  *(undefined1 *)(_Src + 1) = *puVar2;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    iVar11 = iVar18;
    if (uVar16 != 0) {
      iVar6 = (int)(uVar3 >> 4);
      uVar14 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
      uVar9 = -(uVar14 + iVar6) ^ uVar14 >> 0xd;
      uVar15 = (iVar6 - uVar14) - uVar9 ^ uVar9 >> 0xc;
      uVar14 = (uVar14 - uVar15) - uVar9 ^ uVar15 << 0x10;
      uVar9 = (uVar9 - uVar14) - uVar15 ^ uVar14 >> 5;
      uVar15 = (uVar15 - uVar14) - uVar9 ^ uVar9 >> 3;
      uVar14 = (uVar14 - uVar15) - uVar9 ^ uVar15 << 10;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar8 +
                      (((longlong)(int)((uVar9 - uVar14) - uVar15) ^ (ulonglong)(uVar14 >> 0xf)) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          iVar11 = iVar6;
          if (*(ulonglong *)(*param_1 + (longlong)iVar6 * 0x18) == uVar3) break;
          iVar6 = *(int *)(*param_1 + 0x10 + (longlong)iVar6 * 0x18);
          iVar11 = iVar18;
        } while (iVar6 != -1);
      }
    }
    bVar19 = iVar11 != -1;
    if (bVar19) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar11 * 0x18),_Src,0x10);
      bVar5 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar12;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar1 + lVar4) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar18 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar4) = iVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar8 + lVar7);
      *puVar17 = *puVar17 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_142253a4d;
    }
  }
  if (3 < uVar16) {
    uVar9 = (uVar16 >> 1) + 8;
    iVar18 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    iVar10 = 0x20;
    if (uVar9 != 0) {
      iVar10 = 0x1f - iVar18;
    }
    uVar9 = (uVar16 >> 1) + 7;
    iVar18 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uVar9 == 0) {
      cVar13 = '\0';
    }
    else {
      cVar13 = '\x1f' - (char)iVar18;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar18 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar18 ^ iVar18 << 8;
    uVar14 = -(uVar9 + iVar18) ^ uVar9 >> 0xd;
    uVar16 = (iVar18 - uVar9) - uVar14 ^ uVar14 >> 0xc;
    uVar9 = (uVar9 - uVar16) - uVar14 ^ uVar16 << 0x10;
    uVar14 = (uVar14 - uVar9) - uVar16 ^ uVar9 >> 5;
    uVar16 = (uVar16 - uVar9) - uVar14 ^ uVar14 >> 3;
    uVar9 = (uVar9 - uVar16) - uVar14 ^ uVar16 << 10;
    uVar16 = ((uVar14 - uVar9) - uVar16 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar16;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142253a4d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar19;
  }
  return param_2;
}



// FUNCTION 142253a80 FUN_142253a80 body=732 status=ok
// SIG undefined FUN_142253a80(void)

int * FUN_142253a80(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  float *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  float fVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  
  iVar8 = 1;
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar5 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  bVar17 = false;
  puVar15 = (uint *)((longlong)plVar7 + lVar5);
  *puVar15 = *puVar15 | 1 << ((byte)iVar11 & 0x1f);
  puVar1 = (undefined8 *)param_3[1];
  lVar6 = (longlong)iVar11;
  _Src = (float *)(*param_1 + lVar6 * 0x18);
  *_Src = *(float *)*param_3;
  *(undefined8 *)(_Src + 2) = *puVar1;
  _Src[4] = -NAN;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    iVar10 = iVar16;
    if (uVar14 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*_Src == *(float *)(*param_1 + (longlong)iVar9 * 0x18)) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar10 = iVar16;
        } while (iVar9 != -1);
      }
    }
    bVar17 = iVar10 != -1;
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar6 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      *(int *)(lVar2 + 4 + lVar6 * 0x18) = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar7 + lVar5);
      *puVar15 = *puVar15 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142253d31;
    }
  }
  if (3 < uVar14) {
    uVar4 = (uVar14 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar4 != 0) {
      iVar8 = 0x1f - iVar16;
    }
    uVar4 = (uVar14 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar16;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    fVar13 = (float)((int)param_1[9] - 1U & (uint)*_Src);
    _Src[5] = fVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[4] = *(float *)((longlong)plVar7 +
                        ((longlong)(int)param_1[9] - 1U & (longlong)(int)fVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)fVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<float,FAnimNotifyEvent_*>,TDefaultMapHashableKeyFuncs<float,FAnimNotifyEvent_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142253d31:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar17;
  }
  return param_2;
}



// FUNCTION 142253d60 Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_> body=726 status=ok
// SIG undefined Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>(void)

int * TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  longlong *_Src;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar5 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar15 = false;
  puVar13 = (uint *)((longlong)plVar6 + lVar5);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  plVar6 = (longlong *)param_3[1];
  lVar1 = (longlong)iVar10 * 0x18;
  _Src = (longlong *)(*param_1 + lVar1);
  lVar2 = *(longlong *)*param_3;
  *_Src = lVar2;
  _Src[1] = *plVar6;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x18) == lVar2) break;
          iVar8 = *(int *)(*param_1 + 0x10 + (longlong)iVar8 * 0x18);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    bVar15 = iVar9 != -1;
    if (bVar15) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar6 + lVar5);
      *puVar13 = *puVar13 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142254011;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar14;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_14084ef80(param_1);
  }
LAB_142254011:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 142254040 GetKeys<FDefaultAllocator> body=674 status=ok
// SIG undefined GetKeys<FDefaultAllocator>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
GetKeys<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  uint local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  uint uStack_98;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined1 local_50 [8];
  ulonglong local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar11 = 0;
  puStack_a8 = (uint *)(param_1 + 2);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar3 = (int)param_1[5];
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  local_d8._4_4_ = 0;
  uStack_d0 = 0;
  if (iVar3 != 0) {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puStack_a8;
    }
    uVar2 = *puVar12;
    uVar10 = uVar11;
    uVar13 = uVar11;
    while (uVar2 == 0) {
      iVar8 = (int)uVar10;
      uStack_d0 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)uStack_d0;
      local_e8._0_4_ = iVar8 + 1;
      uVar10 = (ulonglong)(uint)local_e8;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_142254150;
      uVar2 = puVar12[(longlong)iVar8 + 1];
    }
    local_e8._4_4_ = -uVar2 & uVar2;
    iVar8 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_d8._4_4_ = (uStack_d0 - iVar8) + 0x1f;
    if (iVar3 < local_d8._4_4_) {
LAB_142254150:
      local_d8._4_4_ = iVar3;
    }
  }
  uStack_a0 = 0xffffffff;
  iStack_9c = local_d8._4_4_;
  uStack_98 = uStack_d0;
  uStack_b0 = (uint)local_e8;
  uStack_ac = local_e8._4_4_;
  uStack_e0 = (uint)local_e8;
  uStack_dc = local_e8._4_4_;
  local_c8 = uStack_d0;
  uStack_d0 = 0xffffffff;
  iStack_cc = local_d8._4_4_;
  bVar6 = iVar3 <= local_d8._4_4_;
  uVar10 = uVar11;
  uVar13 = uVar11;
  local_e8 = param_1;
  local_b8 = param_1;
  local_d8 = puStack_a8;
  if (bVar6) {
LAB_14225427d:
    lVar1 = param_2[1];
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
    return (int)lVar1;
  }
  do {
    plVar7 = local_e8;
    lVar4 = *local_e8;
    lVar1 = (longlong)iStack_cc * 0x18;
    lVar5 = *(longlong *)(lVar4 + (longlong)iStack_cc * 0x18);
    if ((int)uVar10 != (int)uVar11) {
      puVar9 = local_50;
      if (local_48 != 0) {
        puVar9 = (undefined1 *)0x0;
      }
      for (iVar3 = *(int *)(((ulonglong)puVar9 | local_48) +
                           (longlong)
                           (int)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5 & (int)uVar13 - 1U) *
                           4); iVar3 != -1; iVar3 = *(int *)(local_88 + 8 + (longlong)iVar3 * 0x10))
      {
        if (*(longlong *)(local_88 + (longlong)iVar3 * 0x10) == lVar5) {
          if (iVar3 != -1) goto LAB_142254247;
          break;
        }
      }
    }
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar1 + lVar4);
    FUN_140800100(&local_88,local_c0,*plVar7 + lVar1,0);
LAB_142254247:
    uStack_d0 = uStack_d0 & ~uStack_dc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
    if ((int)local_d8[6] <= iStack_cc) goto LAB_14225427d;
    uVar11 = (ulonglong)local_54;
    uVar10 = local_80 & 0xffffffff;
    uVar13 = (ulonglong)local_40;
  } while( true );
}



// FUNCTION 1422542f0 GetNodeFromIndex<FAnimNode_AssetPlayerBase> body=147 status=ok
// SIG undefined GetNodeFromIndex<FAnimNode_AssetPlayerBase>(void)

longlong FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>
                   (longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_1428f56b0();
  if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xa8) + 0x20))();
    param_2 = (int)plVar4[1] - param_2;
    if ((0 < param_2) && (param_2 + -1 < (int)plVar4[1])) {
      lVar1 = *(longlong *)(*plVar4 + -8 + (longlong)param_2 * 8);
      for (lVar2 = *(longlong *)(lVar1 + 0x70); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) {
          return (longlong)*(int *)(lVar1 + 0x44) + *(longlong *)(param_1 + 0xa0);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142254390 GetNodeFromPropertyIndex<FAnimNode_TransitionResult> body=115 status=ok
// SIG undefined GetNodeFromPropertyIndex<FAnimNode_TransitionResult>(void)

longlong GetNodeFromPropertyIndex<FAnimNode_TransitionResult>
                   (longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_3 != -1) {
    lVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    iVar1 = *(int *)(lVar2 + 8);
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2);
    return *(int *)(*(longlong *)(*plVar3 + -8 + (longlong)(iVar1 - param_3) * 8) + 0x44) + param_1;
  }
  return 0;
}



// FUNCTION 142254410 HeapSortInternal<FBranchingPointMarker,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,`UAnimMontage::RefreshBranchingPointMarkers'::`13'::FCompareNotifyTickMarkersTime>_> body=451 status=ok
// SIG undefined HeapSortInternal<FBranchingPointMarker,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,`UAnimMontage::RefreshBranchingPointMarkers'::`13'::FCompareNotifyTickMarkersTime>_>(void)

void AlgoImpl::
     HeapSortInternal<FBranchingPointMarker,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,_UAnimMontage::RefreshBranchingPointMarkers_::_13_::FCompareNotifyTickMarkersTime>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar12 = iVar8;
    iVar13 = iVar7;
joined_r0x00014225443a:
    do {
      if (iVar8 < param_2) {
        iVar10 = iVar7 * 2 + 1;
        iVar8 = iVar7 * 2 + 2;
        iVar11 = iVar10;
        if ((iVar8 < param_2) &&
           (fVar4 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0xc + 4),
           pfVar3 = (float *)((longlong)param_1 + (longlong)iVar8 * 0xc + 4), iVar11 = iVar8,
           *pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
          iVar11 = iVar10;
        }
        puVar9 = (undefined8 *)((longlong)param_1 + (longlong)iVar7 * 0xc);
        fVar4 = *(float *)((longlong)param_1 + (longlong)iVar11 * 0xc + 4);
        puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar11 * 0xc);
        if (*(float *)((longlong)puVar9 + 4) <= fVar4 && fVar4 != *(float *)((longlong)puVar9 + 4))
        {
          if (puVar9 != puVar1) {
            uVar5 = *puVar9;
            uVar6 = *(undefined4 *)(puVar9 + 1);
            *puVar9 = *puVar1;
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar1 + 1);
            *puVar1 = uVar5;
            *(undefined4 *)(puVar1 + 1) = uVar6;
          }
          iVar8 = iVar11 * 2 + 1;
          iVar7 = iVar11;
          goto joined_r0x00014225443a;
        }
      }
      iVar8 = iVar12 + -2;
      iVar7 = iVar13 + -1;
      iVar12 = iVar8;
      iVar13 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = (undefined8 *)((longlong)param_1 + (longlong)param_2 * 0xc);
    do {
      if (param_1 != puVar9) {
        uVar5 = *param_1;
        uVar6 = *(undefined4 *)(param_1 + 1);
        *param_1 = *puVar9;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar9 + 1);
        *puVar9 = uVar5;
        *(undefined4 *)(puVar9 + 1) = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar8 = iVar7 * 2 + 1;
          iVar13 = iVar7 * 2 + 2;
          iVar12 = iVar8;
          if ((iVar13 < param_2) &&
             (fVar4 = *(float *)((longlong)param_1 + (longlong)iVar8 * 0xc + 4),
             pfVar3 = (float *)((longlong)param_1 + (longlong)iVar13 * 0xc + 4), iVar12 = iVar13,
             *pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
            iVar12 = iVar8;
          }
          puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar7 * 0xc);
          fVar4 = *(float *)((longlong)param_1 + (longlong)iVar12 * 0xc + 4);
          puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar12 * 0xc);
          if (fVar4 < *(float *)((longlong)puVar1 + 4) || fVar4 == *(float *)((longlong)puVar1 + 4))
          break;
          if (puVar1 != puVar2) {
            uVar5 = *puVar1;
            uVar6 = *(undefined4 *)(puVar1 + 1);
            *puVar1 = *puVar2;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
            *puVar2 = uVar5;
            *(undefined4 *)(puVar2 + 1) = uVar6;
          }
          iVar7 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = (undefined8 *)((longlong)puVar9 + -0xc);
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1422545e0 IntroSortInternal<FBranchingPointMarker,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,`UAnimMontage::RefreshBranchingPointMarkers'::`13'::FCompareNotifyTickMarkersTime>_> body=805 status=ok
// SIG undefined IntroSortInternal<FBranchingPointMarker,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,`UAnimMontage::RefreshBranchingPointMarkers'::`13'::FCompareNotifyTickMarkersTime>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FBranchingPointMarker,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,_UAnimMontage::RefreshBranchingPointMarkers_::_13_::FCompareNotifyTickMarkersTime>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar9;
  undefined8 *puVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  undefined8 *puVar8;
  undefined8 *puVar10;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0xc + -0xc;
    fVar13 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar13 = fVar13 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar13 = ::_guard_xfg_dispatch_icall_nop(fVar13);
    local_328 = (undefined4)(longlong)(fVar13 + fVar13);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar12 = &local_338;
    do {
      puVar7 = (undefined8 *)*plVar12;
      puVar6 = (undefined8 *)plVar12[1];
      lVar2 = plVar12[2];
      local_348._0_4_ = (int)lVar2;
      lVar5 = ((longlong)puVar6 - (longlong)puVar7) / 0xc + 1;
      puVar11 = puVar7;
      if ((int)local_348 != 0) {
LAB_1422546d0:
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = lVar5 + 1;
          }
          puVar7 = (undefined8 *)((longlong)puVar11 + (lVar5 >> 1) * 0xc);
          if (puVar7 != puVar11) {
            uVar3 = *puVar7;
            uVar4 = *(undefined4 *)(puVar7 + 1);
            *puVar7 = *puVar11;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar11 + 1);
            *puVar11 = uVar3;
            *(undefined4 *)(puVar11 + 1) = uVar4;
          }
          puVar9 = (undefined8 *)((longlong)puVar6 + 0xc);
          puVar7 = puVar11;
LAB_142254720:
          puVar8 = puVar7;
          puVar7 = (undefined8 *)((longlong)puVar8 + 0xc);
          if (puVar7 <= puVar6) goto code_r0x000142254729;
          goto LAB_142254736;
        }
        for (; puVar7 = puVar11, puVar9 = puVar11, puVar11 < puVar6;
            puVar6 = (undefined8 *)((longlong)puVar6 + -0xc)) {
          while (puVar8 = (undefined8 *)((longlong)puVar9 + 0xc), puVar8 <= puVar6) {
            pfVar1 = (float *)(puVar9 + 2);
            puVar9 = puVar8;
            if (*(float *)((longlong)puVar7 + 4) < *pfVar1) {
              puVar7 = puVar8;
            }
          }
          if (puVar7 != puVar6) {
            uVar3 = *puVar7;
            uVar4 = *(undefined4 *)(puVar7 + 1);
            *puVar7 = *puVar6;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
            *puVar6 = uVar3;
            *(undefined4 *)(puVar6 + 1) = uVar4;
          }
        }
        goto LAB_14225485c;
      }
LAB_14225484d:
      local_348 = lVar2;
      HeapSortInternal<FBranchingPointMarker,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,_UAnimMontage::RefreshBranchingPointMarkers_::_13_::FCompareNotifyTickMarkersTime>_>
                (puVar7,lVar5,param_3,param_4);
LAB_14225485c:
      plVar12 = plVar12 + -3;
    } while (&local_338 <= plVar12);
  }
  return;
code_r0x000142254729:
  if (*(float *)(puVar8 + 2) < *(float *)((longlong)puVar11 + 4) ||
      *(float *)(puVar8 + 2) == *(float *)((longlong)puVar11 + 4)) goto LAB_142254720;
LAB_142254736:
  do {
    puVar10 = puVar9;
    puVar9 = (undefined8 *)((longlong)puVar10 + -0xc);
    if (puVar9 <= puVar11) break;
  } while (*(float *)((longlong)puVar11 + 4) < *(float *)(puVar10 + -1) ||
           *(float *)((longlong)puVar11 + 4) == *(float *)(puVar10 + -1));
  if (puVar7 <= puVar9) {
    if (puVar7 != puVar9) {
      uVar3 = *puVar7;
      uVar4 = *(undefined4 *)((longlong)puVar8 + 0x14);
      *puVar7 = *puVar9;
      *(undefined4 *)((longlong)puVar8 + 0x14) = *(undefined4 *)((longlong)puVar10 + -4);
      *puVar9 = uVar3;
      *(undefined4 *)((longlong)puVar10 + -4) = uVar4;
    }
    goto LAB_142254720;
  }
  if (puVar11 != puVar9) {
    uVar3 = *puVar11;
    uVar4 = *(undefined4 *)(puVar11 + 1);
    *puVar11 = *puVar9;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)((longlong)puVar10 + -4);
    *puVar9 = uVar3;
    *(undefined4 *)((longlong)puVar10 + -4) = uVar4;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar5 = (longlong)puVar9 + (-0xc - (longlong)puVar11);
  lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
  if ((lVar5 >> 1) - (lVar5 >> 0x3f) < ((longlong)puVar6 - (longlong)puVar7) / 0xc) {
    if (puVar7 < puVar6) {
      *plVar12 = (longlong)puVar7;
      plVar12[1] = (longlong)puVar6;
      *(int *)(plVar12 + 2) = (int)local_348;
      plVar12 = plVar12 + 3;
    }
    if (puVar9 <= (undefined8 *)((longlong)puVar11 + 0xcU)) goto LAB_14225485c;
    puVar6 = puVar10 + -3;
    puVar7 = puVar11;
  }
  else {
    if ((undefined8 *)((longlong)puVar11 + 0xcU) < puVar9) {
      *plVar12 = (longlong)puVar11;
      plVar12[1] = (longlong)(puVar10 + -3);
      *(int *)(plVar12 + 2) = (int)local_348;
      plVar12 = plVar12 + 3;
    }
    if (puVar6 <= puVar7) goto LAB_14225485c;
  }
  lVar5 = ((longlong)puVar6 - (longlong)puVar7) / 0xc + 1;
  puVar11 = puVar7;
  if ((int)local_348 == 0) goto LAB_14225484d;
  goto LAB_1422546d0;
}



// FUNCTION 142254910 FUN_142254910 body=89 status=ok
// SIG undefined FUN_142254910(void)

void FUN_142254910(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMaterialInstanceConstant::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 142254970 FUN_142254970 body=461 status=ok
// SIG undefined FUN_142254970(void)

undefined8 * FUN_142254970(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0xfffffffe;
  *(undefined4 *)(param_1 + 7) = 0xfffffffe;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0x100;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x21);
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
  FAlphaBlend::FAlphaBlend(param_1 + 0x26,0x3e4ccccd);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ae) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x38,0x3e4ccccd);
  FAlphaBlend::FAlphaBlend(param_1 + 0x3f,0x3e4ccccd);
  return param_1;
}



// FUNCTION 142254b40 FUN_142254b40 body=461 status=ok
// SIG undefined FUN_142254b40(void)

undefined8 * FUN_142254b40(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0xfffffffe;
  *(undefined4 *)(param_1 + 7) = 0xfffffffe;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x21,0);
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
  FAlphaBlend::FAlphaBlend(param_1 + 0x26,0x3e4ccccd);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ae) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x38,0x3e4ccccd);
  FAlphaBlend::FAlphaBlend(param_1 + 0x3f,0x3e4ccccd);
  return param_1;
}



// FUNCTION 142254d10 FAnimNotifyEvent body=321 status=ok
// SIG undefined FAnimNotifyEvent(void)

undefined8 * FAnimNotifyEvent::FAnimNotifyEvent(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_14410b0e0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = &PTR__scalar_deleting_destructor__145013ea0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  param_1[0xc] = &PTR_FUN_14410b0e0;
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x78);
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)(param_2 + 0x79);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x90);
  *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0xa0);
  *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)(param_2 + 0xa1);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  return param_1;
}



// FUNCTION 142254e60 FCompositeSection body=208 status=ok
// SIG undefined FCompositeSection(void)

undefined8 * FCompositeSection::FCompositeSection(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14410b0e0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = &PTR_FUN_14501bd70;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  _Src = *(void **)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 9,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[9],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 142254f30 FSlotEvaluationPose body=227 status=ok
// SIG undefined FSlotEvaluationPose(void)

undefined1 * FSlotEvaluationPose::FSlotEvaluationPose(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_140615970(param_1 + 8,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 0x30);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  pvVar2 = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_141dab210(param_1 + 0x20,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x20),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  param_1[0x3a] = param_2[0x3a];
  return param_1;
}



// FUNCTION 142255020 FUN_142255020 body=72 status=ok
// SIG undefined FUN_142255020(void)

undefined8 * FUN_142255020(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined4 *)(param_1 + 3) = 0;
  FVectorCurve::FVectorCurve(param_1 + 4);
  FVectorCurve::FVectorCurve(param_1 + 0x32);
  FVectorCurve::FVectorCurve(param_1 + 0x60);
  return param_1;
}



// FUNCTION 142255070 FUN_142255070 body=259 status=ok
// SIG undefined FUN_142255070(void)

undefined8 * FUN_142255070(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  uVar2 = param_2[1];
  puVar4 = param_1 + 4;
  lVar3 = (longlong)param_1 + 0x54;
  *param_1 = *param_2;
  param_1[1] = uVar2;
  lVar5 = 3;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  do {
    *(undefined8 *)(lVar3 + -0x2c) = 0;
    lVar5 = lVar5 + -1;
    *(undefined8 *)(lVar3 + -0x24) = 0;
    *(undefined8 *)(lVar3 + -0xc) = 0;
    *(undefined8 *)(lVar3 + -4) = 0;
    *(undefined4 *)(lVar3 + 4) = 0xffffffff;
    *(undefined4 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x14) = 0;
    *(undefined4 *)(lVar3 + 0x1c) = 0;
    *puVar4 = &PTR_FUN_14413ebc8;
    *(undefined1 *)(lVar3 + 0x24) =
         *(undefined1 *)((longlong)param_2 + lVar3 + (0x24 - (longlong)param_1));
    *(undefined1 *)(lVar3 + 0x25) =
         *(undefined1 *)((longlong)param_2 + lVar3 + (0x25 - (longlong)param_1));
    *(undefined4 *)(lVar3 + 0x28) =
         *(undefined4 *)((longlong)param_2 + lVar3 + (0x28 - (longlong)param_1));
    *(undefined8 *)(lVar3 + 0x2c) = 0;
    iVar1 = *(int *)((longlong)param_2 + lVar3 + (0x34 - (longlong)param_1));
    _Src = *(void **)((longlong)param_2 + lVar3 + (0x2c - (longlong)param_1));
    *(int *)(lVar3 + 0x34) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(lVar3 + 0x38) = 0;
    }
    else {
      TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(lVar3 + 0x2c,iVar1,0);
      _guard_xfg_dispatch_icall_nop(*(void **)(lVar3 + 0x2c),_Src,(longlong)iVar1 * 0x1c);
    }
    puVar4 = puVar4 + 0xe;
    lVar3 = lVar3 + 0x70;
  } while (lVar5 != 0);
  return param_1;
}



// FUNCTION 142255180 FVectorCurve body=126 status=ok
// SIG undefined FVectorCurve(void)

undefined8 * FVectorCurve::FVectorCurve(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined4 *)(param_1 + 3) = 0;
  lVar3 = 3;
  lVar1 = (longlong)param_1 + 0x54;
  puVar2 = param_1 + 4;
  do {
    *(undefined8 *)(lVar1 + -0x2c) = 0;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined4 *)(lVar1 + 4) = 0xffffffff;
    *(undefined4 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *puVar2 = &PTR_FUN_14413ebc8;
    *(undefined2 *)(lVar1 + 0x24) = 0x404;
    *(undefined4 *)(lVar1 + 0x28) = 0x7f7fffff;
    *(undefined8 *)(lVar1 + 0x2c) = 0;
    *(undefined8 *)(lVar1 + 0x34) = 0;
    lVar3 = lVar3 + -1;
    lVar1 = lVar1 + 0x70;
    puVar2 = puVar2 + 0xe;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 142255200 FUN_142255200 body=162 status=ok
// SIG undefined FUN_142255200(void)

undefined8 * FUN_142255200(undefined8 *param_1)

{
  int iVar1;
  
  FUN_1422441b0();
  *param_1 = &PTR__scalar_deleting_destructor__14501b3c8;
  if ((wchar_t *)param_1[5] != L"Remove Trivial Keys") {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x14);
      iVar1 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar1 + 0x14;
    if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 0x14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Remove Trivial Keys",0x14);
  }
  *(undefined4 *)(param_1 + 9) = 0x38d1b717;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x399d4952;
  *(undefined4 *)(param_1 + 10) = 0x3727c5ac;
  return param_1;
}



// FUNCTION 1422552b0 FUN_1422552b0 body=747 status=ok
// SIG undefined FUN_1422552b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1422552b0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14410b0f0;
  puVar2 = param_1 + 0x3b;
  param_1[7] = 0;
  lVar1 = (longlong)param_1 + 0x204;
  param_1[8] = 0;
  param_1[9] = 0;
  lVar3 = 3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x5629063;
  *(undefined4 *)(param_1 + 0x20) = 0x5629063;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 10;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined4 *)(lVar1 + 4) = 0xffffffff;
    *(undefined4 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    lVar1 = lVar1 + 0x50;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffff;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  uVar4 = uRam0000000146aeef4c;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  *(uint *)((longlong)param_1 + 0x36c) = uVar4;
  uVar4 = uRam0000000146aeef44 & uRam0000000146aeef54;
  uVar5 = uRam0000000146aeef48 & uRam0000000146aeef58;
  uVar6 = uRam0000000146aeef4c & uRam0000000146aeef5c;
  *(uint *)(param_1 + 0x70) = _DAT_146aeef40 & _DAT_146aeef50;
  *(uint *)((longlong)param_1 + 900) = uVar4;
  *(uint *)(param_1 + 0x71) = uVar5;
  *(uint *)((longlong)param_1 + 0x38c) = uVar6;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x7f);
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined1 *)(param_1 + 0x85) = 1;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined1 *)(param_1 + 6) = 3;
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) & 0xfb;
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 1;
  return param_1;
}



// FUNCTION 1422555a0 FUN_1422555a0 body=463 status=ok
// SIG undefined FUN_1422555a0(void)

undefined8 * FUN_1422555a0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_142244170();
  *param_1 = &PTR_FUN_14501bd90;
  param_1[5] = &PTR_LAB_14501c0f8;
  param_1[6] = &PTR_LAB_14501c128;
  FAlphaBlend::FAlphaBlend(param_1 + 0x17,0x3e4ccccd);
  FAlphaBlend::FAlphaBlend(param_1 + 0x1f,0x3e4ccccd);
  plVar1 = param_1 + 0x2f;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *plVar1 = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3c23d70a;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  FAlphaBlend::SetBlendTime(param_1 + 0x17,0x3e800000);
  FAlphaBlend::SetBlendTime(param_1 + 0x1f,0x3e800000);
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x19a) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x26) = 0xbf800000;
  uVar4 = DAT_146aef320;
  iVar2 = *(int *)(param_1 + 0x30);
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 0x30) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x184) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined8 *)(lVar3 + lVar5 * 0x18) = DAT_146aef320;
  *(undefined8 *)(lVar3 + 8 + lVar5 * 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar5 * 0x18) = 0;
  *(undefined8 *)(*plVar1 + lVar5 * 0x18) = uVar4;
  param_1[0x3d] = DAT_146aef060;
  return param_1;
}



// FUNCTION 142255770 ~TArray<FCompositeSection,FDefaultAllocator> body=116 status=ok
// SIG undefined ~TArray<FCompositeSection,FDefaultAllocator>(void)

void TArray<FCompositeSection,FDefaultAllocator>::~TArray<FCompositeSection,FDefaultAllocator>
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      if (puVar1[9] != 0) {
        FMemory::Free();
      }
      *puVar1 = &PTR_FUN_14410b0e0;
      puVar1 = puVar1 + 0xb;
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



// FUNCTION 1422557f0 FUN_1422557f0 body=221 status=ok
// SIG undefined FUN_1422557f0(void)

void FUN_1422557f0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar3 = lVar3 + 0x300;
    do {
      lVar1 = 3;
      lVar4 = lVar3 + 0x170;
      do {
        lVar4 = lVar4 + -0x70;
        FRichCurve::~FRichCurve(lVar4);
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      lVar1 = 3;
      lVar4 = lVar3;
      do {
        lVar4 = lVar4 + -0x70;
        FRichCurve::~FRichCurve(lVar4);
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      lVar1 = 3;
      lVar4 = lVar3 + -0x170;
      do {
        lVar4 = lVar4 + -0x70;
        FRichCurve::~FRichCurve(lVar4);
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      lVar3 = lVar3 + 0x470;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1422558d0 ~FMontageSubStepper body=79 status=ok
// SIG undefined ~FMontageSubStepper(void)

void FMontageSubStepper::~FMontageSubStepper(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142255920 FUN_142255920 body=151 status=ok
// SIG undefined FUN_142255920(void)

void FUN_142255920(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = 3;
  lVar2 = param_1 + 0x470;
  lVar3 = 3;
  do {
    lVar2 = lVar2 + -0x70;
    FRichCurve::~FRichCurve(lVar2);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = 3;
  lVar2 = param_1 + 0x300;
  do {
    lVar2 = lVar2 + -0x70;
    FRichCurve::~FRichCurve(lVar2);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1 = param_1 + 400;
  do {
    param_1 = param_1 + -0x70;
    FRichCurve::~FRichCurve(param_1);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1422559c0 FUN_1422559c0 body=227 status=ok
// SIG undefined FUN_1422559c0(void)

void FUN_1422559c0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_1422557f0(param_1 + 0xa8);
  iVar3 = *(int *)(param_1 + 0xa0);
  lVar2 = *(longlong *)(param_1 + 0x98);
  if (iVar3 != 0) {
    lVar2 = lVar2 + 0x20;
    do {
      FRichCurve::~FRichCurve(lVar2);
      lVar2 = lVar2 + 0x90;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar2 = *(longlong *)(param_1 + 0x98);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x88);
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  if (iVar3 != 0) {
    do {
      puVar1[0xc] = &PTR_FUN_14410b0e0;
      *puVar1 = &PTR_FUN_14410b0e0;
      puVar1 = puVar1 + 0x15;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x80);
  }
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_145013eb0;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 142255ab0 FUN_142255ab0 body=113 status=ok
// SIG undefined FUN_142255ab0(void)

undefined8 * FUN_142255ab0(undefined8 *param_1,undefined8 *param_2)

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
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 142255b30 operator= body=198 status=ok
// SIG undefined operator=(void)

undefined8 * FVectorCurve::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  piVar5 = (int *)((longlong)param_1 + 0x8c);
  uVar3 = param_2[3];
  lVar6 = 3;
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  do {
    piVar1 = piVar5 + -3;
    *(undefined1 *)(piVar5 + -5) =
         *(undefined1 *)((longlong)param_2 + (-0x14 - (longlong)param_1) + (longlong)piVar5);
    *(undefined1 *)((longlong)piVar5 + -0x13) =
         *(undefined1 *)((longlong)param_2 + (-0x13 - (longlong)param_1) + (longlong)piVar5);
    piVar5[-4] = *(int *)((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)piVar5);
    piVar4 = (int *)((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)piVar5);
    if (piVar1 != piVar4) {
      iVar2 = *(int *)((longlong)piVar5 + (longlong)param_2 + (-4 - (longlong)param_1));
      _Src = *(void **)piVar4;
      piVar5[-1] = iVar2;
      if ((iVar2 == 0) && (*piVar5 == 0)) {
        *piVar5 = 0;
      }
      else {
        TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
        ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar2 * 0x1c);
      }
    }
    piVar5 = piVar5 + 0x1c;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return param_1;
}



// FUNCTION 142255c00 FUN_142255c00 body=69 status=ok
// SIG undefined FUN_142255c00(void)

undefined8 FUN_142255c00(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1428ed670();
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,param_2,plVar1,0,0);
  return param_1;
}



// FUNCTION 142255c50 FUN_142255c50 body=280 status=ok
// SIG undefined FUN_142255c50(void)

void FUN_142255c50(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = *(int **)(param_3 + 8);
  piVar7 = piVar6 + (longlong)*(int *)(param_3 + 0x10) * 8;
  for (; piVar6 != piVar7; piVar6 = piVar6 + 8) {
    if (*piVar6 != -1) {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(*param_1 + 0xa8) + 0x10))();
      iVar1 = *(int *)(param_2 + 0x30);
      if ((iVar1 < 0) || ((int)plVar3[1] <= iVar1)) {
        lVar5 = 0;
      }
      else {
        lVar5 = (longlong)iVar1 * 0x38 + *plVar3;
      }
      if (*(longlong *)
           ((longlong)*(int *)((longlong)piVar6[2] * 0x40 + 0xc + *(longlong *)(lVar5 + 0x20)) *
            0x58 + *(longlong *)(lVar5 + 0x10)) == *(longlong *)(param_1[1] + 0x10)) {
        iVar1 = *piVar6;
        plVar3 = *(longlong **)(*param_1 + 0xa8);
        lVar5 = *(longlong *)(*param_1 + 0xa0);
        if (iVar1 != -1) {
          lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
          iVar2 = *(int *)(lVar4 + 8);
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
          lVar5 = *(int *)(*(longlong *)(*plVar3 + -8 + (longlong)(iVar2 - iVar1) * 8) + 0x44) +
                  lVar5;
          if (lVar5 != 0) {
            TBaseDelegate<FSlateBrush_const_*>::operator=(lVar5 + 0x38);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142255d70 FUN_142255d70 body=227 status=ok
// SIG undefined FUN_142255d70(void)

void FUN_142255d70(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  (**(code **)(*param_2 + 0xb8))(param_2,*param_1,*(undefined8 *)(*param_1 + 0xa0));
  *(undefined1 *)(param_2 + 5) = 0;
  FUN_142296370(param_2 + 1,param_2,*(undefined8 *)(*param_1 + 0xa0));
  cVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  if (cVar3 != '\0') {
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0x550);
    *(int *)(lVar2 + 0x550) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x554) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x548,iVar1);
    }
    *(longlong **)(*(longlong *)(lVar2 + 0x548) + (longlong)iVar1 * 8) = param_2;
  }
  cVar3 = (**(code **)(*param_2 + 0x58))(param_2);
  if (cVar3 != '\0') {
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0x570);
    *(int *)(lVar2 + 0x570) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x574) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x568,iVar1);
    }
    *(longlong **)(*(longlong *)(lVar2 + 0x568) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 142255e70 FUN_142255e70 body=299 status=ok
// SIG undefined FUN_142255e70(void)

longlong FUN_142255e70(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b0);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x184) != '\0') {
    *(undefined1 *)(param_1 + 0x184) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x120);
  puVar2 = *(undefined8 **)(param_1 + 0x118);
  if (iVar1 != 0) {
    do {
      puVar2[0xc] = &PTR_FUN_14410b0e0;
      *puVar2 = &PTR_FUN_14410b0e0;
      puVar2 = puVar2 + 0x15;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar2 = *(undefined8 **)(param_1 + 0x118);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 142255fa0 FUN_142255fa0 body=43 status=ok
// SIG undefined FUN_142255fa0(void)

undefined8 * FUN_142255fa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14410b0e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142255fd0 FUN_142255fd0 body=72 status=ok
// SIG undefined FUN_142255fd0(void)

undefined8 * FUN_142255fd0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_14410b0e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142256020 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UChatroom::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142256070 FUN_142256070 body=224 status=ok
// SIG undefined FUN_142256070(void)

longlong FUN_142256070(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 400);
  puVar2 = *(undefined8 **)(param_1 + 0x188);
  if (iVar1 != 0) {
    do {
      *puVar2 = &PTR_FUN_14410b0e0;
      puVar2 = puVar2 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar2 = *(undefined8 **)(param_1 + 0x188);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x178);
  TArray<FCompositeSection,FDefaultAllocator>::~TArray<FCompositeSection,FDefaultAllocator>
            (param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  FUN_1422559c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 142256150 AccumulateWithBlend body=228 status=ok
// SIG undefined AccumulateWithBlend(void)

void FRootMotionMovementParams::AccumulateWithBlend(char *param_1,float *param_2,float param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar13 = *param_2 * param_3;
  fVar14 = param_2[1] * param_3;
  fVar15 = param_2[2] * param_3;
  fVar16 = param_2[3] * param_3;
  if (*param_1 == '\0') {
    fVar9 = param_2[4];
    fVar10 = param_2[5];
    fVar11 = param_2[6];
    fVar12 = param_2[7];
    fVar2 = param_2[8];
    fVar3 = param_2[9];
    fVar4 = param_2[10];
    fVar5 = param_2[0xb];
    *param_1 = '\x01';
    *(float *)(param_1 + 0x10) = fVar13;
    *(float *)(param_1 + 0x14) = fVar14;
    *(float *)(param_1 + 0x18) = fVar15;
    *(float *)(param_1 + 0x1c) = fVar16;
    *(float *)(param_1 + 0x20) = fVar9 * param_3;
    *(float *)(param_1 + 0x24) = fVar10 * param_3;
    *(float *)(param_1 + 0x28) = fVar11 * param_3;
    *(float *)(param_1 + 0x2c) = fVar12 * param_3;
    *(float *)(param_1 + 0x30) = fVar2 * param_3;
    *(float *)(param_1 + 0x34) = fVar3 * param_3;
    *(float *)(param_1 + 0x38) = fVar4 * param_3;
    *(float *)(param_1 + 0x3c) = fVar5 * param_3;
  }
  else {
    fVar9 = *(float *)(param_1 + 0x10) * fVar13 + *(float *)(param_1 + 0x18) * fVar15;
    fVar10 = *(float *)(param_1 + 0x14) * fVar14 + *(float *)(param_1 + 0x1c) * fVar16;
    fVar11 = *(float *)(param_1 + 0x18) * fVar15 + *(float *)(param_1 + 0x10) * fVar13;
    fVar12 = *(float *)(param_1 + 0x1c) * fVar16 + *(float *)(param_1 + 0x14) * fVar14;
    *(float *)(param_1 + 0x10) =
         (float)(-(uint)(0.0 <= fVar10 + fVar9) & ((uint)(0.0 - fVar13) ^ (uint)fVar13) ^
                (uint)(0.0 - fVar13)) + *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x14) =
         (float)(-(uint)(0.0 <= fVar11 + fVar10) & ((uint)(0.0 - fVar14) ^ (uint)fVar14) ^
                (uint)(0.0 - fVar14)) + *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x18) =
         (float)(-(uint)(0.0 <= fVar12 + fVar11) & ((uint)(0.0 - fVar15) ^ (uint)fVar15) ^
                (uint)(0.0 - fVar15)) + *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x1c) =
         (float)(-(uint)(0.0 <= fVar9 + fVar12) & ((uint)(0.0 - fVar16) ^ (uint)fVar16) ^
                (uint)(0.0 - fVar16)) + *(float *)(param_1 + 0x1c);
    fVar13 = param_2[5];
    fVar14 = param_2[6];
    fVar15 = param_2[7];
    *(float *)(param_1 + 0x20) = param_2[4] * param_3 + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = fVar13 * param_3 + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = fVar14 * param_3 + *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x2c) = fVar15 * param_3 + *(float *)(param_1 + 0x2c);
    fVar13 = param_2[9];
    fVar14 = param_2[10];
    fVar15 = param_2[0xb];
    *(float *)(param_1 + 0x30) = param_2[8] * param_3 + *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) = fVar13 * param_3 + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x38) = fVar14 * param_3 + *(float *)(param_1 + 0x38);
    *(float *)(param_1 + 0x3c) = fVar15 * param_3 + *(float *)(param_1 + 0x3c);
    param_3 = param_3 + *(float *)(param_1 + 4);
  }
  uVar8 = DAT_146531a98;
  uVar7 = DAT_146531a94;
  uVar6 = DAT_146531a90;
  *(float *)(param_1 + 4) = param_3;
  auVar1._4_4_ = uVar7;
  auVar1._0_4_ = uVar6;
  auVar1._8_4_ = uVar8;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar1;
  return;
}



// FUNCTION 142256240 AddAnimNotifyFromGeneratedClass body=100 status=ok
// SIG undefined AddAnimNotifyFromGeneratedClass(void)

void FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != -1) && (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0)) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xa8) + 0x18))();
    lVar1 = *plVar2;
    uVar3 = IAnimClassInterface::GetActualAnimClass(*(undefined8 *)(param_1 + 0xa8));
    FAnimNotifyQueue::AddAnimNotify(param_1 + 0x1d0,(longlong)param_2 * 0xa8 + lVar1,uVar3);
  }
  return;
}



// FUNCTION 1422562b0 FUN_1422562b0 body=305 status=ok
// SIG undefined FUN_1422562b0(void)

void FUN_1422562b0(longlong param_1,int *param_2,longlong *param_3)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  float local_res8 [2];
  longlong local_res10;
  float *local_28;
  longlong *local_20;
  
  iVar2 = *(int *)(param_1 + 0x1a8);
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 0x1a8) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1ac) < iVar2 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x1a0,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x1a0);
  local_28 = (float *)(param_2 + 1);
  *(int *)(lVar4 + lVar5 * 0xc) = *param_2;
  *(float *)(lVar4 + 4 + lVar5 * 0xc) = *local_28;
  *(char *)(lVar4 + 8 + lVar5 * 0xc) = (char)param_2[2];
  fVar1 = *local_28;
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    plVar3 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar3 = param_3 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_3[9] - 1U & (longlong)(int)fVar1) * 4)
    ;
    local_res8[0] = fVar1;
    if (iVar2 != -1) {
      do {
        lVar5 = *param_3 + (longlong)iVar2 * 0x18;
        if (fVar1 == *(float *)(*param_3 + (longlong)iVar2 * 0x18)) {
          if (iVar2 != -1) goto LAB_142256384;
          break;
        }
        iVar2 = *(int *)(lVar5 + 0x10);
      } while (iVar2 != -1);
    }
  }
  lVar5 = 0;
LAB_142256384:
  lVar4 = lVar5 + 8;
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  if (lVar4 == 0) {
    local_20 = &local_res10;
    local_res10 = (longlong)*param_2 * 0xa8 + *(longlong *)(param_1 + 0x80);
    FUN_142253a80(param_3,local_res8,&local_28,0);
  }
  return;
}



// FUNCTION 1422563f0 FUN_1422563f0 body=909 status=ok
// SIG undefined FUN_1422563f0(void)

void FUN_1422563f0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  longlong *local_38;
  undefined4 *local_30;
  
  lVar5 = param_1[4];
  local_res18[0] = param_3;
  if (lVar5 != 0) {
    lVar4 = FUN_142a07000();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  if (param_1[0x72] == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  lVar5 = *param_2;
  uVar11 = 0;
  if ((int)param_1[0x3c] != *(int *)((longlong)param_1 + 0x20c)) {
    plVar7 = (longlong *)param_1[0x43];
    if ((longlong *)param_1[0x43] == (longlong *)0x0) {
      plVar7 = param_1 + 0x42;
    }
    iVar2 = *(int *)((longlong)plVar7 +
                    ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                    (longlong)(int)param_1[0x44] - 1U) * 4);
    if (iVar2 != -1) {
      lVar4 = param_1[0x3b];
      do {
        lVar9 = (longlong)iVar2;
        if (*(longlong *)(lVar4 + lVar9 * 0x18) == lVar5) {
          if (((iVar2 != -1) && (lVar4 = lVar4 + lVar9 * 0x18, lVar4 != 0)) &&
             (puVar8 = (undefined4 *)(lVar4 + 8), puVar8 != (undefined4 *)0x0)) {
            *puVar8 = local_res18[0];
            goto LAB_1422564ff;
          }
          break;
        }
        iVar2 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
      } while (iVar2 != -1);
    }
  }
  local_30 = local_res18;
  local_38 = param_2;
  FUN_1417e05c0(param_1 + 0x3b,local_res8,&local_38,0);
LAB_1422564ff:
  pcVar6 = (char *)USkeleton::GetCurveMetaData(param_1[5],param_2);
  if (pcVar6 != (char *)0x0) {
    if (pcVar6[1] != '\0') {
      lVar5 = *param_2;
      if ((int)param_1[0x50] != *(int *)((longlong)param_1 + 0x2ac)) {
        plVar7 = (longlong *)param_1[0x57];
        if ((longlong *)param_1[0x57] == (longlong *)0x0) {
          plVar7 = param_1 + 0x56;
        }
        iVar2 = *(int *)((longlong)plVar7 +
                        ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                        (longlong)(int)param_1[0x58] - 1U) * 4);
        if (iVar2 != -1) {
          lVar4 = param_1[0x4f];
          do {
            lVar9 = (longlong)iVar2;
            if (*(longlong *)(lVar4 + lVar9 * 0x18) == lVar5) {
              if (((iVar2 != -1) && (lVar4 = lVar4 + lVar9 * 0x18, lVar4 != 0)) &&
                 (puVar8 = (undefined4 *)(lVar4 + 8), puVar8 != (undefined4 *)0x0)) {
                *puVar8 = local_res18[0];
                goto LAB_1422565af;
              }
              break;
            }
            iVar2 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
          } while (iVar2 != -1);
        }
      }
      local_30 = local_res18;
      local_38 = param_2;
      FUN_1417e05c0(param_1 + 0x4f,local_res8,&local_38,0);
    }
LAB_1422565af:
    if (*pcVar6 != '\0') {
      iVar2 = (int)param_1[0x5a];
      uVar12 = uVar11;
      if (0 < iVar2) {
        do {
          iVar10 = (int)uVar11;
          lVar5 = param_1[0x59];
          if (*(longlong *)(uVar12 + lVar5) == *param_2) {
            iVar3 = (iVar2 - iVar10) + -1;
            if (0 < iVar3) {
              iVar3 = 1;
            }
            if (iVar3 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar5 + (longlong)iVar10 * 8),
                         (void *)(lVar5 + (longlong)(iVar2 - iVar3) * 8),(longlong)iVar3 << 3);
              iVar2 = (int)param_1[0x5a];
            }
            *(int *)(param_1 + 0x5a) = iVar2 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x59);
            iVar10 = iVar10 + -1;
            uVar12 = uVar12 - 8;
          }
          iVar2 = (int)param_1[0x5a];
          uVar11 = (ulonglong)(iVar10 + 1U);
          uVar12 = uVar12 + 8;
        } while ((int)(iVar10 + 1U) < iVar2);
      }
      lVar5 = *param_2;
      if ((int)param_1[0x46] != *(int *)((longlong)param_1 + 0x25c)) {
        plVar7 = (longlong *)param_1[0x4d];
        if ((longlong *)param_1[0x4d] == (longlong *)0x0) {
          plVar7 = param_1 + 0x4c;
        }
        iVar2 = *(int *)((longlong)plVar7 +
                        ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                        (longlong)(int)param_1[0x4e] - 1U) * 4);
        if (iVar2 != -1) {
          lVar4 = param_1[0x45];
          do {
            lVar9 = (longlong)iVar2;
            if (*(longlong *)(lVar4 + lVar9 * 0x18) == lVar5) {
              if (((iVar2 != -1) && (lVar4 = lVar4 + lVar9 * 0x18, lVar4 != 0)) &&
                 (puVar8 = (undefined4 *)(lVar4 + 8), puVar8 != (undefined4 *)0x0)) {
                *puVar8 = local_res18[0];
                return;
              }
              break;
            }
            iVar2 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
          } while (iVar2 != -1);
        }
      }
      local_30 = local_res18;
      local_38 = param_2;
      FUN_1417e05c0(param_1 + 0x45,local_res8,&local_38,0);
    }
  }
  return;
}



// FUNCTION 142256780 FUN_142256780 body=176 status=ok
// SIG undefined FUN_142256780(void)

int FUN_142256780(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    FUN_14227dc90(param_1,iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x470 + *param_1);
  if (param_2 != 0) {
    puVar2 = puVar3 + 4;
    do {
      *puVar3 = 0;
      *(undefined8 *)(puVar2 + -3) = 0;
      puVar2[-1] = 0;
      *(undefined2 *)puVar2 = 0xffff;
      puVar2[2] = 0;
      FVectorCurve::FVectorCurve(puVar2 + 4);
      FVectorCurve::FVectorCurve(puVar2 + 0x60);
      FVectorCurve::FVectorCurve(puVar2 + 0xbc);
      puVar3 = puVar3 + 0x11c;
      puVar2 = puVar2 + 0x11c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 142256830 FUN_142256830 body=326 status=ok
// SIG undefined FUN_142256830(void)

void FUN_142256830(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *local_28;
  int local_20;
  
  lVar6 = param_1[4];
  if (lVar6 != 0) {
    lVar5 = FUN_142a07000();
    lVar6 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar6 = param_1[0x72];
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar6;
  }
  uVar2 = *param_2;
  uVar3 = *param_3;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_28,param_4);
  iVar1 = *(int *)(lVar6 + 0x590);
  *(int *)(lVar6 + 0x590) = iVar1 + 1;
  if (*(int *)(lVar6 + 0x594) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow((longlong *)(lVar6 + 0x588),iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)(lVar6 + 0x588));
  *puVar7 = uVar2;
  puVar7[1] = uVar3;
  puVar7[2] = (longlong *)0x0;
  *(undefined4 *)(puVar7 + 3) = 0;
  if (((&local_28 != (longlong **)(puVar7 + 2)) && (local_20 != 0)) && (local_28 != (longlong *)0x0)
     ) {
    (**(code **)(*local_28 + 0x30))();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  return;
}



// FUNCTION 142256980 FUN_142256980 body=326 status=ok
// SIG undefined FUN_142256980(void)

void FUN_142256980(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *local_28;
  int local_20;
  
  lVar6 = param_1[4];
  if (lVar6 != 0) {
    lVar5 = FUN_142a07000();
    lVar6 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar6 = param_1[0x72];
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar6;
  }
  uVar2 = *param_2;
  uVar3 = *param_3;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_28,param_4);
  iVar1 = *(int *)(lVar6 + 0x5a0);
  *(int *)(lVar6 + 0x5a0) = iVar1 + 1;
  if (*(int *)(lVar6 + 0x5a4) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow((longlong *)(lVar6 + 0x598),iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)(lVar6 + 0x598));
  *puVar7 = uVar2;
  puVar7[1] = uVar3;
  puVar7[2] = (longlong *)0x0;
  *(undefined4 *)(puVar7 + 3) = 0;
  if (((&local_28 != (longlong **)(puVar7 + 2)) && (local_20 != 0)) && (local_28 != (longlong *)0x0)
     ) {
    (**(code **)(*local_28 + 0x30))();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  return;
}



// FUNCTION 142256ad0 FUN_142256ad0 body=353 status=ok
// SIG undefined FUN_142256ad0(void)

void FUN_142256ad0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_20;
  int local_18;
  
  lVar8 = param_1[4];
  if (lVar8 != 0) {
    lVar7 = FUN_142a07000();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar8 = param_1[0x72];
  if (lVar8 == 0) {
    lVar8 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar8;
  }
  uVar3 = *param_2;
  uVar4 = *param_3;
  uVar5 = *param_4;
  local_20 = (longlong *)0x0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,param_5);
  iVar2 = *(int *)(lVar8 + 0x580);
  *(int *)(lVar8 + 0x580) = iVar2 + 1;
  if (*(int *)(lVar8 + 0x584) < iVar2 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow((longlong *)(lVar8 + 0x578),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar8 + 0x578) + (longlong)iVar2 * 0x28);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = (longlong *)0x0;
  *(undefined4 *)(puVar1 + 4) = 0;
  if (((&local_20 != (longlong **)(puVar1 + 3)) && (local_18 != 0)) && (local_20 != (longlong *)0x0)
     ) {
    (**(code **)(*local_20 + 0x30))();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return;
}



// FUNCTION 142256c40 FUN_142256c40 body=237 status=ok
// SIG undefined FUN_142256c40(void)

void FUN_142256c40(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0xc0))(param_2);
    lVar4 = param_1[4];
    if (lVar4 != 0) {
      lVar3 = FUN_142a07000();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
    lVar4 = param_1[0x72];
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar4;
    }
    FUN_142276670(lVar4,param_2,param_3);
    iVar1 = *(int *)(lVar4 + 0x5e8);
    *(int *)(lVar4 + 0x5e8) = iVar1 + 1;
    if (*(int *)(lVar4 + 0x5ec) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(lVar4 + 0x5e0),iVar1);
    }
    *(longlong **)(*(longlong *)(lVar4 + 0x5e0) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 142256d30 FUN_142256d30 body=347 status=ok
// SIG undefined FUN_142256d30(void)

void FUN_142256d30(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar2 = uVar7;
  uVar5 = uVar7;
  if (0 < *(int *)(param_1 + 0x80)) {
    do {
      plVar6 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0x78));
      if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) {
        (**(code **)(*param_2 + 0x38))(param_2,plVar6,0,0);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar5 = uVar5 + 8;
    } while ((int)uVar1 < *(int *)(param_1 + 0x80));
  }
  uVar2 = uVar7;
  if (0 < *(int *)(param_1 + 0xe0)) {
    do {
      (**(code **)(*param_2 + 0x38))
                (param_2,(longlong)(int)uVar2 * 0x20 + *(longlong *)(param_1 + 0xd8),0,0);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while ((int)uVar1 < *(int *)(param_1 + 0xe0));
  }
  uVar2 = uVar7;
  if (0 < *(int *)(param_1 + 0xf0)) {
    do {
      (**(code **)(*param_2 + 0x38))
                (param_2,(longlong)(int)uVar2 * 0x20 + *(longlong *)(param_1 + 0xe8),0,0);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while ((int)uVar1 < *(int *)(param_1 + 0xf0));
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x390) + 0xf8);
    do {
      lVar3 = *plVar6;
      lVar4 = (longlong)(int)plVar6[1] * 0x50 + lVar3;
      for (; lVar3 != lVar4; lVar3 = lVar3 + 0x50) {
        (**(code **)(*param_2 + 0x38))(param_2,lVar3,param_1,0);
      }
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
      plVar6 = plVar6 + 2;
    } while (uVar1 < 2);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142256e90 FUN_142256e90 body=2008 status=ok
// SIG undefined FUN_142256e90(void)

void FUN_142256e90(longlong *param_1,float param_2,longlong param_3,char param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_144;
  float local_140 [2];
  longlong local_138;
  longlong *local_130;
  ulonglong local_128;
  undefined4 local_120;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  
  plVar19 = (longlong *)0x0;
  if (((longlong *)*param_1 == (longlong *)0x0) || ((char)param_1[5] == '\0')) goto LAB_1422575aa;
  if (param_3 == 0) {
LAB_142256f02:
    bVar8 = false;
  }
  else {
    cVar9 = (**(code **)(*(longlong *)*param_1 + 0x2e8))();
    bVar8 = true;
    if (cVar9 == '\0') goto LAB_142256f02;
  }
  pfVar1 = (float *)(param_1 + 0x25);
  *(float *)(param_1 + 0x2f) = *pfVar1;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  if (((*(int *)((longlong)param_1 + 0x17c) == -1) || (*(float *)(param_1 + 0x2b) != 0.0)) ||
     (cVar9 = FAlphaBlend::IsComplete(param_1 + 0x26), cVar9 != '\0')) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  *(char *)(param_1 + 10) = cVar9;
  if (cVar9 != '\0') {
    *(undefined4 *)(param_1 + 9) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4c)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 8,0);
    }
  }
  if (*(float *)(param_1 + 0xd) < 10.0) {
    *(float *)(param_1 + 0xd) = *(float *)(param_1 + 0xd) + param_2;
  }
  if ((char)param_1[0x2d] != '\0') {
    FUN_14227c290(param_1);
  }
  cVar9 = (char)param_1[5];
  plVar17 = plVar19;
  while( true ) {
    if (((cVar9 == '\0') || (*(float *)(param_1 + 0xd) <= 1e-08)) ||
       (uVar11 = (int)plVar17 + 1, 9 < (int)uVar11)) goto LAB_142257592;
    if (*(char *)((longlong)param_1 + 0x1ae) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x1ae) = 1;
      if ((((int)param_1[0x37] == 0) || ((longlong *)param_1[0x36] == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*(longlong *)param_1[0x36] + 0x18))(), cVar9 == '\0')) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        local_f0 = 0;
        local_e8 = 0;
        TBaseDelegate<FSlateBrush_const_*>::operator=(&local_f0,param_1 + 0x36);
        local_138 = *param_1;
        local_130 = (longlong *)0x0;
        local_128 = local_128 & 0xffffffff00000000;
        TBaseDelegate<FSlateBrush_const_*>::operator=(&local_130,&local_f0);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f0);
        lVar13 = FWeakObjectPtr::Get(param_1 + 0x21);
        lVar16 = local_138;
        if ((*(byte *)(lVar13 + 0x31) & 8) == 0) {
          if ((((int)local_128 != 0) && (local_130 != (longlong *)0x0)) &&
             (cVar9 = (**(code **)(*local_130 + 0x18))(), cVar9 != '\0')) {
            plVar17 = plVar19;
            if ((int)local_128 != 0) {
              plVar17 = local_130;
            }
            (**(code **)(*plVar17 + 0x40))(plVar17,lVar16);
          }
        }
        else {
          iVar5 = *(int *)(lVar13 + 0x3c0);
          *(int *)(lVar13 + 0x3c0) = iVar5 + 1;
          if (*(int *)(lVar13 + 0x3c4) < iVar5 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow((longlong *)(lVar13 + 0x3b8),iVar5);
          }
          lVar16 = *(longlong *)(lVar13 + 0x3b8);
          *(longlong *)(lVar16 + (longlong)iVar5 * 0x18) = local_138;
          lVar16 = lVar16 + (longlong)iVar5 * 0x18;
          puVar18 = (undefined8 *)(lVar16 + 8);
          *puVar18 = 0;
          *(undefined4 *)(lVar16 + 0x10) = 0;
          TBaseDelegate<FSlateBrush_const_*>::operator=(puVar18,&local_130);
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_130);
      }
    }
    fVar2 = *pfVar1;
    local_f8 = 0;
    cVar9 = FUN_142257670(param_1 + 0xb,pfVar1,&local_f8);
    if ((byte)(cVar9 - 2U) < 2) break;
    fVar3 = *(float *)((longlong)param_1 + 0x74);
    cVar4 = (char)param_1[0xf];
    *(float *)((longlong)param_1 + 0x174) = fVar3 + *(float *)((longlong)param_1 + 0x174);
    cVar10 = FAnimMontageInstance::IsStopped(param_1);
    if ((cVar10 == '\0') && (*(char *)((longlong)param_1 + 0x51) != '\0')) {
      if (cVar4 == '\0') {
        lVar16 = param_1[0x1f];
      }
      else {
        lVar16 = param_1[0x1d];
      }
      if (*(int *)(lVar16 + (longlong)*(int *)((longlong)param_1 + 0x7c) * 4) == -1) {
        if (1e-08 < ABS(*(float *)(param_1 + 0xe))) {
          if ((char)param_1[0xf] == '\0') {
            fVar20 = *(float *)(param_1 + 0x10);
          }
          else {
            fVar20 = *(float *)((longlong)param_1 + 0x84) + *(float *)(param_1 + 0x10);
          }
          if (*(int *)((longlong)param_1 + 0x8c) == -1) {
            fVar22 = ABS((fVar20 - *pfVar1) / *(float *)(param_1 + 0xe));
          }
          else {
            fVar22 = (float)FMontageSubStepper::FindMontagePosition_Target(param_1 + 0xb,*pfVar1);
            if ((char)param_1[0xf] == '\0') {
              if (1e-08 < ABS(fVar20)) {
                fVar20 = *(float *)(param_1[0x12] + (longlong)*(int *)((longlong)param_1 + 0x7c) * 4
                                   );
                if (fVar20 < 0.0) {
                  uVar12 = FTimeStretchCurveInstance::BinarySearchMarkerIndex
                                     (param_1 + 0x17,(int)param_1[0x10],param_1 + 0x19);
                  fVar20 = (float)FTimeStretchCurveInstance::Convert_P_Original_To_Target
                                            (param_1 + 0x17,uVar12,(int)param_1[0x10]);
                  *(float *)(param_1[0x12] + (longlong)*(int *)((longlong)param_1 + 0x7c) * 4) =
                       fVar20;
                }
                fVar22 = fVar22 - fVar20;
              }
            }
            else if (1e-08 < ABS(fVar20 - *(float *)((longlong)param_1 + 0xbc))) {
              fVar20 = *(float *)(param_1[0x14] + (longlong)*(int *)((longlong)param_1 + 0x7c) * 4);
              if (fVar20 < 0.0) {
                fVar20 = *(float *)((longlong)param_1 + 0x84) + *(float *)(param_1 + 0x10);
                uVar12 = FTimeStretchCurveInstance::BinarySearchMarkerIndex
                                   (param_1 + 0x17,fVar20,param_1 + 0x19);
                fVar20 = (float)FTimeStretchCurveInstance::Convert_P_Original_To_Target
                                          (param_1 + 0x17,uVar12,fVar20);
                *(float *)(param_1[0x14] + (longlong)*(int *)((longlong)param_1 + 0x7c) * 4) =
                     fVar20;
              }
              fVar22 = fVar20 - fVar22;
            }
            else {
              fVar22 = *(float *)(param_1 + 0x18) - fVar22;
            }
          }
        }
        else {
          fVar22 = 3.4e+38;
        }
        if ((*(float *)(*param_1 + 0x134) < 0.0) || (*(char *)((longlong)param_1 + 0x1ac) != '\0'))
        {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        fVar21 = *(float *)(param_1 + 0x41) * *(float *)((longlong)param_1 + 0x2c);
        fVar20 = *(float *)(*param_1 + 0x134);
        if (!bVar7) {
          fVar20 = fVar21;
        }
        if (fVar20 <= 0.0001) {
          fVar20 = 0.0001;
        }
        if (fVar22 <= fVar20) {
          if (!bVar7) {
            fVar21 = fVar22;
          }
          if (*(char *)((longlong)param_1 + 0x1ac) == '\0') {
            uVar14 = FAlphaBlend::FAlphaBlend(&local_138,param_1 + 0x3f,fVar21);
            FUN_142281740(param_1,uVar14,0);
          }
          else {
            *(undefined1 *)(param_1 + 5) = 0;
          }
        }
      }
    }
    if (cVar9 == '\0') {
      if ((char)param_1[10] != '\0') {
        FMarkerSyncData::CollectMarkersInRange(*param_1 + 0x148,fVar2,*pfVar1,param_1 + 8,fVar3);
      }
      if (((bVar8) && (cVar9 = FWeakObjectPtr::IsValid(param_1 + 0x21), cVar9 != '\0')) &&
         ((int)param_1[0x31] < 1)) {
        FUN_14225d950(*param_1,&local_138,fVar2,*pfVar1);
        if (param_4 == '\0') {
          FUN_142245a70(param_3,&local_138);
        }
        else {
          lVar16 = param_1[0x2a];
          uVar14 = *(undefined8 *)(*param_1 + 0x178);
          uVar15 = FWeakObjectPtr::Get(param_1 + 0x21);
          FUN_14227c3e0(uVar15,&local_138,uVar14,(int)lVar16);
        }
      }
      lVar16 = local_f8;
      fVar3 = *pfVar1;
      if ((char)param_1[0x2d] == '\0') {
        FUN_1422755f0(param_1,fVar2,fVar3,local_f8);
      }
      if ((((char)param_1[0x11] != '\0') && (lVar16 == 0)) && (fVar3 == *pfVar1)) {
        if (cVar4 == '\0') {
          lVar16 = param_1[0x1f];
        }
        else {
          lVar16 = param_1[0x1d];
        }
        iVar5 = *(int *)(lVar16 + (longlong)*(int *)((longlong)param_1 + 0x7c) * 4);
        if (iVar5 == -1) goto LAB_142257592;
        FUN_142274950(*param_1,iVar5,&local_144,local_140);
        if (cVar4 == '\0') {
          *pfVar1 = local_140[0] - 5e-05;
        }
        else {
          *pfVar1 = local_144;
        }
      }
    }
    else if (cVar9 == '\x01') goto LAB_142257592;
    plVar17 = (longlong *)(ulonglong)uVar11;
    cVar9 = (char)param_1[5];
  }
  uVar14 = FAlphaBlend::FAlphaBlend
                     (&local_138,param_1 + 0x3f,
                      *(float *)(param_1 + 0x41) * *(float *)((longlong)param_1 + 0x2c));
  FUN_142281740(param_1,uVar14,0);
LAB_142257592:
  if (*(char *)((longlong)param_1 + 0x184) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x184) = 0;
  }
LAB_1422575aa:
  if ((*(float *)(param_1 + 0x2b) == 0.0) &&
     (cVar9 = FAlphaBlend::IsComplete(param_1 + 0x26), cVar9 != '\0')) {
    FUN_142281ee0(param_1);
  }
  else if (((char)param_1[0x2d] == '\0') && (plVar17 = plVar19, 0 < (int)param_1[0x24])) {
    do {
      lVar16 = param_1[0x23];
      lVar13 = FWeakObjectPtr::Get(param_1 + 0x21);
      local_138 = *(longlong *)(lVar13 + 0x20);
      local_130 = (longlong *)*param_1;
      local_120 = (undefined4)param_1[0x22];
      plVar6 = *(longlong **)(lVar16 + (longlong)plVar19 + 0x50);
      local_128 = lVar16 + (longlong)plVar19;
      (**(code **)(*plVar6 + 0x2a8))(plVar6,&local_138,param_2);
      uVar11 = (int)plVar17 + 1;
      plVar19 = plVar19 + 0x15;
      plVar17 = (longlong *)(ulonglong)uVar11;
    } while ((int)uVar11 < (int)param_1[0x24]);
  }
  return;
}



// FUNCTION 142257670 FUN_142257670 body=944 status=ok
// SIG undefined FUN_142257670(void)

undefined8 FUN_142257670(longlong *param_1,float *param_2,longlong *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float local_res8 [2];
  
  lVar4 = *param_1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  if ((lVar4 == 0) || (lVar5 = param_1[1], lVar5 == 0)) {
    return 3;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  iVar3 = FUN_14225e640(lVar5,*param_2,local_res8);
  *(int *)((longlong)param_1 + 0x24) = iVar3;
  if ((iVar3 < 0) || (*(int *)(lVar5 + 0x170) <= iVar3)) {
    return 2;
  }
  lVar6 = (longlong)iVar3 * 0x58 + *(longlong *)(lVar5 + 0x168);
  cVar1 = *(char *)(lVar6 + 0x19);
  if (cVar1 == '\0') {
LAB_14225771f:
    fVar7 = *(float *)(lVar6 + 0x24);
  }
  else if (cVar1 == '\x01') {
    fVar7 = *(float *)(lVar6 + 0x24) + *(float *)(lVar6 + 0x1c);
  }
  else {
    if (cVar1 != '\x02') goto LAB_14225771f;
    fVar7 = *(float *)(lVar6 + 0x24) * *(float *)(lVar6 + 0x20) + *(float *)(lVar6 + 0x1c);
  }
  *(float *)(param_1 + 5) = fVar7;
  uVar8 = FUN_142274830(lVar5,iVar3);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
  if (*(char *)(lVar4 + 0x28) == '\0') {
    return 1;
  }
  if (ABS(*(float *)(param_1 + 2)) <= 1e-08) {
    return 1;
  }
  if (*(char *)(lVar4 + 0x184) == '\0') {
    fVar7 = *(float *)(lVar4 + 300) * *(float *)(lVar5 + 0x94);
    *(float *)(param_1 + 3) = fVar7;
    if (ABS(fVar7) <= 1e-08) {
      return 1;
    }
    cVar1 = FUN_141f23b90();
    if (((cVar1 == '\0') || (ABS(*(float *)(param_1 + 3) - 1.0) <= 1e-08)) ||
       (FUN_14225b9d0(), *(char *)((longlong)param_1 + 0x31) == '\0')) {
      fVar7 = *(float *)(param_1 + 3) * *(float *)(param_1 + 2);
      bVar2 = 0.0 < *(float *)(param_1 + 3);
      goto LAB_14225789e;
    }
    fVar9 = (float)FMontageSubStepper::FindMontagePosition_Target(param_1,*param_2);
    fVar7 = *(float *)(param_1 + 2);
    if ((char)param_1[4] == '\0') {
      fVar7 = -fVar7;
    }
    fVar7 = (float)FTimeStretchCurveInstance::Clamp_P_Target(param_1 + 0xc,fVar7 + fVar9);
    if (fVar7 != *(float *)(param_1 + 0xb)) {
      *(float *)(param_1 + 0xb) = fVar7;
      FTimeStretchCurveInstance::UpdateMarkerIndexForPosition
                (param_1 + 0xc,(longlong)param_1 + 0x34,fVar7,param_1 + 0x10);
      uVar8 = FTimeStretchCurveInstance::Convert_P_Target_To_Original
                        (param_1 + 0xc,*(undefined4 *)((longlong)param_1 + 0x34),(int)param_1[0xb]);
      *(undefined4 *)((longlong)param_1 + 0x5c) = uVar8;
    }
    fVar7 = *(float *)((longlong)param_1 + 0x5c) - *param_2;
    *(float *)(param_1 + 3) = fVar7 / *(float *)(param_1 + 2);
  }
  else {
    fVar7 = *(float *)(lVar4 + 0x180) - *param_2;
    bVar2 = 0.0 <= fVar7;
    *(float *)(param_1 + 3) = fVar7 / *(float *)(param_1 + 2);
LAB_14225789e:
    *(bool *)(param_1 + 4) = bVar2;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  }
  *(float *)((longlong)param_1 + 0x1c) = fVar7;
  if (param_3 != (longlong *)0x0) {
    lVar4 = param_1[1];
    fVar9 = *param_2;
    fVar7 = fVar9 + fVar7;
    iVar3 = *(int *)(lVar4 + 0x1a8);
    if (0 < iVar3) {
      if (fVar7 < fVar9) {
        if (-1 < iVar3 + -1) {
          lVar5 = (longlong)(iVar3 + -1);
          lVar4 = *(longlong *)(lVar4 + 0x1a0) + lVar5 * 0xc;
          do {
            if (*(float *)(lVar4 + 4) < fVar9) {
              if (fVar7 <= *(float *)(lVar4 + 4)) goto LAB_142257943;
              break;
            }
            lVar4 = lVar4 + -0xc;
            lVar5 = lVar5 + -1;
          } while (-1 < lVar5);
        }
      }
      else if (0 < iVar3) {
        lVar5 = 0;
        lVar4 = *(longlong *)(lVar4 + 0x1a0);
        do {
          if (fVar9 < *(float *)(lVar4 + 4)) {
            if (*(float *)(lVar4 + 4) <= fVar7) goto LAB_142257943;
            break;
          }
          lVar5 = lVar5 + 1;
          lVar4 = lVar4 + 0xc;
        } while (lVar5 < iVar3);
      }
    }
    lVar4 = 0;
LAB_142257943:
    *param_3 = lVar4;
    if (lVar4 != 0) {
      *(float *)((longlong)param_1 + 0x1c) = *(float *)(lVar4 + 4) - *param_2;
    }
  }
  fVar7 = *(float *)((longlong)param_1 + 0x1c);
  fVar9 = fVar7;
  if ((char)param_1[4] == '\0') {
    local_res8[0] = -local_res8[0];
    if (local_res8[0] < fVar7) goto LAB_142257995;
  }
  else {
    local_res8[0] = *(float *)((longlong)param_1 + 0x2c) - local_res8[0];
    if (fVar7 < local_res8[0]) goto LAB_142257995;
  }
  *(float *)((longlong)param_1 + 0x1c) = local_res8[0];
  *(undefined1 *)(param_1 + 6) = 1;
  fVar9 = local_res8[0];
LAB_142257995:
  if (((param_3 != (longlong *)0x0) && (*param_3 != 0)) && (fVar7 != fVar9)) {
    *param_3 = 0;
    fVar9 = *(float *)((longlong)param_1 + 0x1c);
  }
  if (ABS(fVar9) <= 0.0) {
    return 1;
  }
  *param_2 = fVar9 + *param_2;
  fVar7 = *(float *)(param_1 + 2) - *(float *)((longlong)param_1 + 0x1c) / *(float *)(param_1 + 3);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(param_1 + 2) = fVar7;
  return 0;
}



// FUNCTION 142257a20 FUN_142257a20 body=159 status=ok
// SIG undefined FUN_142257a20(void)

void FUN_142257a20(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined4 param_6)

{
  if (0 < *(int *)(param_3 + 8)) {
    (**(code **)(**(longlong **)(param_5 + 0x140) + 0x20))
              (*(longlong **)(param_5 + 0x140),param_1,param_3,param_5,param_6);
  }
  (**(code **)(**(longlong **)(param_5 + 0x148) + 0x18))
            (*(longlong **)(param_5 + 0x148),param_1,param_2,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x000142257abb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_5 + 0x150) + 0x28))
            (*(longlong **)(param_5 + 0x150),param_1,param_4,param_5);
  return;
}



// FUNCTION 142257ac0 AnimationFormat_GetBoneAtom body=40 status=ok
// SIG undefined AnimationFormat_GetBoneAtom(void)

void AnimationFormat_GetBoneAtom
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(**(longlong **)(param_2 + 0x148) + 0x10))
            (*(longlong **)(param_2 + 0x148),param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142257af0 FUN_142257af0 body=1143 status=ok
// SIG undefined FUN_142257af0(void)

void FUN_142257af0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined **ppuVar10;
  
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  cVar1 = *(char *)(param_1 + 0x130);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0xf0);
    ppuVar10 = &PTR_PTR_1465319c8;
    ppuVar5 = &PTR_PTR_1465319b0;
    ppuVar7 = &PTR_PTR_146531998;
    ppuVar6 = &PTR_PTR_1465319a0;
    if (cVar1 == '\0') {
      *(undefined ***)(param_1 + 0x140) = &PTR_PTR_146531998;
    }
    else if (cVar1 == '\x01') {
      *(undefined ***)(param_1 + 0x140) = &PTR_PTR_1465319a0;
    }
    else if (cVar1 == '\x03') {
      *(undefined ***)(param_1 + 0x140) = &PTR_PTR_1465319b0;
    }
    else if (cVar1 == '\x06') {
      *(undefined ***)(param_1 + 0x140) = &PTR_PTR_1465319c8;
    }
    else {
      LowLevelFatalErrorHandler
                ("Unknown",0x2d8,L"%i: unknown or unsupported translation compression");
      FDebug::AssertFailed
                (&DAT_1450168be,"Unknown",0x2d8,
                 L"%i: unknown or unsupported translation compression",
                 *(undefined1 *)(param_1 + 0xf0));
    }
    switch(*(undefined1 *)(param_1 + 0xf1)) {
    case 0:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_146531998;
      break;
    case 1:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_1465319a0;
      break;
    case 2:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_1465319a8;
      break;
    case 3:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_1465319b0;
      break;
    case 4:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_1465319b8;
      break;
    case 5:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_1465319c0;
      break;
    case 6:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_1465319c8;
      break;
    default:
      LowLevelFatalErrorHandler("Unknown",0x2f5,L"%i: unknown or unsupported rotation compression");
      FDebug::AssertFailed
                (&DAT_1450168bf,"Unknown",0x2f5,L"%i: unknown or unsupported rotation compression",
                 *(undefined1 *)(param_1 + 0xf1));
    }
    cVar1 = *(char *)(param_1 + 0xf2);
    if (cVar1 == '\0') {
LAB_142257ee2:
      *(undefined ***)(param_1 + 0x150) = ppuVar7;
      return;
    }
    if (cVar1 == '\x01') {
LAB_142257d06:
      *(undefined ***)(param_1 + 0x150) = ppuVar6;
      return;
    }
    if (cVar1 == '\x03') {
LAB_142257cfa:
      *(undefined ***)(param_1 + 0x150) = ppuVar5;
      return;
    }
    if (cVar1 == '\x06') {
LAB_142257cee:
      *(undefined ***)(param_1 + 0x150) = ppuVar10;
      return;
    }
    LowLevelFatalErrorHandler("Unknown",0x309,L"%i: unknown or unsupported Scale compression");
    uVar2 = *(undefined1 *)(param_1 + 0xf2);
    pwVar9 = L"%i: unknown or unsupported Scale compression";
    uVar8 = 0x309;
    pcVar4 = "Unknown";
    puVar3 = &DAT_1450169ca;
  }
  else if (cVar1 == '\x01') {
    cVar1 = *(char *)(param_1 + 0xf0);
    ppuVar10 = &PTR_PTR_146531a00;
    ppuVar5 = &PTR_PTR_1465319e8;
    ppuVar7 = &PTR_PTR_1465319d0;
    ppuVar6 = &PTR_PTR_1465319d8;
    if (cVar1 == '\0') {
      *(undefined ***)(param_1 + 0x140) = &PTR_PTR_1465319d0;
    }
    else if (cVar1 == '\x01') {
      *(undefined ***)(param_1 + 0x140) = &PTR_PTR_1465319d8;
    }
    else if (cVar1 == '\x03') {
      *(undefined ***)(param_1 + 0x140) = &PTR_PTR_1465319e8;
    }
    else if (cVar1 == '\x06') {
      *(undefined ***)(param_1 + 0x140) = &PTR_PTR_146531a00;
    }
    else {
      LowLevelFatalErrorHandler
                ("Unknown",0x327,L"%i: unknown or unsupported translation compression");
      FDebug::AssertFailed
                (&DAT_1450169cb,"Unknown",0x327,
                 L"%i: unknown or unsupported translation compression",
                 *(undefined1 *)(param_1 + 0xf0));
    }
    switch(*(undefined1 *)(param_1 + 0xf1)) {
    case 0:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_1465319d0;
      break;
    case 1:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_1465319d8;
      break;
    case 2:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_1465319e0;
      break;
    case 3:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_1465319e8;
      break;
    case 4:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_1465319f0;
      break;
    case 5:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_1465319f8;
      break;
    case 6:
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_146531a00;
      break;
    default:
      LowLevelFatalErrorHandler("Unknown",0x344,L"%i: unknown or unsupported rotation compression");
      FDebug::AssertFailed
                (&DAT_1450169cc,"Unknown",0x344,L"%i: unknown or unsupported rotation compression",
                 *(undefined1 *)(param_1 + 0xf1));
    }
    cVar1 = *(char *)(param_1 + 0xf2);
    if (cVar1 == '\0') goto LAB_142257ee2;
    if (cVar1 == '\x01') goto LAB_142257d06;
    if (cVar1 == '\x03') goto LAB_142257cfa;
    if (cVar1 == '\x06') goto LAB_142257cee;
    LowLevelFatalErrorHandler("Unknown",0x358,L"%i: unknown or unsupported Scale compression");
    uVar2 = *(undefined1 *)(param_1 + 0xf2);
    pwVar9 = L"%i: unknown or unsupported Scale compression";
    uVar8 = 0x358;
    pcVar4 = "Unknown";
    puVar3 = &DAT_1450169cd;
  }
  else {
    if (cVar1 == '\x02') {
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_146531a08;
      *(undefined ***)(param_1 + 0x140) = &PTR_PTR_146531a08;
      *(undefined ***)(param_1 + 0x150) = &PTR_PTR_146531a08;
      return;
    }
    LowLevelFatalErrorHandler("Unknown",0x36c,L"%i: unknown or unsupported animation format",cVar1);
    uVar2 = *(undefined1 *)(param_1 + 0x130);
    pwVar9 = L"%i: unknown or unsupported animation format";
    uVar8 = 0x36c;
    pcVar4 = "Unknown";
    puVar3 = &DAT_1450169ce;
  }
  FDebug::AssertFailed(puVar3,pcVar4,uVar8,pwVar9,uVar2);
  return;
}



// FUNCTION 142257fa0 FUN_142257fa0 body=54 status=ok
// SIG undefined FUN_142257fa0(void)

void FUN_142257fa0(longlong *param_1)

{
  if (param_1[0x72] != 0) {
    (**(code **)(*param_1 + 0x310))();
    param_1[0x72] = 0;
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142257fe0 FUN_142257fe0 body=1074 status=ok
// SIG undefined FUN_142257fe0(void)

void FUN_142257fe0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int local_res10 [2];
  longlong local_res18;
  longlong *local_res20;
  longlong *local_58;
  longlong *local_50;
  
  if ((param_1[0x1b] != 0) && (param_1[0x15] != 0)) {
    plVar9 = (longlong *)param_1[0xaf];
    local_res20 = plVar9 + (longlong)(int)param_1[0xb0] * 5;
    if (plVar9 != local_res20) {
      do {
        plVar1 = (longlong *)param_1[0x15];
        local_58 = param_1;
        local_50 = plVar9;
        plVar3 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
        plVar10 = (longlong *)*plVar3;
        plVar3 = plVar10 + (int)plVar3[1];
        for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
          lVar7 = *plVar10;
          if (lVar7 != 0) {
            lVar4 = FUN_1428f58f0();
            for (lVar2 = *(longlong *)(lVar7 + 0x70); lVar2 != 0;
                lVar2 = *(longlong *)(lVar2 + 0x30)) {
              if (lVar2 == lVar4) {
                lVar7 = (longlong)*(int *)(lVar7 + 0x44) + param_1[0x14];
                if (lVar7 != 0) {
                  plVar5 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1);
                  iVar8 = *(int *)(lVar7 + 0x30);
                  if ((((-1 < iVar8) && (iVar8 < (int)plVar5[1])) &&
                      (plVar5 = (longlong *)((longlong)iVar8 * 0x38 + *plVar5),
                      plVar5 != (longlong *)0x0)) && (*plVar9 == *plVar5)) {
                    plVar6 = (longlong *)plVar5[2];
                    iVar8 = 0;
                    plVar5 = plVar6 + (longlong)(int)plVar5[3] * 0xb;
                    for (; plVar6 != plVar5; plVar6 = plVar6 + 0xb) {
                      if (*plVar6 == plVar9[1]) {
                        local_res10[0] = iVar8;
                        local_res18 = lVar7;
                        FUN_14225aeb0(&local_58,&local_res18,plVar6,local_res10);
                      }
                      iVar8 = iVar8 + 1;
                    }
                  }
                }
                break;
              }
            }
          }
        }
        plVar9 = plVar9 + 5;
      } while (plVar9 != local_res20);
    }
    plVar9 = (longlong *)param_1[0xb1];
    local_58 = plVar9 + (longlong)(int)param_1[0xb2] * 4;
    if (plVar9 != local_58) {
      do {
        plVar1 = (longlong *)param_1[0x15];
        local_res20 = plVar9;
        plVar3 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
        plVar10 = (longlong *)*plVar3;
        plVar3 = plVar10 + (int)plVar3[1];
        for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
          lVar7 = *plVar10;
          if (lVar7 != 0) {
            lVar4 = FUN_1428f58f0();
            for (lVar2 = *(longlong *)(lVar7 + 0x70); lVar2 != 0;
                lVar2 = *(longlong *)(lVar2 + 0x30)) {
              if (lVar2 == lVar4) {
                lVar7 = (longlong)*(int *)(lVar7 + 0x44) + param_1[0x14];
                if (lVar7 != 0) {
                  plVar5 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1);
                  iVar8 = *(int *)(lVar7 + 0x30);
                  if (((-1 < iVar8) && (iVar8 < (int)plVar5[1])) &&
                     ((plVar5 = (longlong *)((longlong)iVar8 * 0x38 + *plVar5),
                      plVar5 != (longlong *)0x0 && (*plVar9 == *plVar5)))) {
                    plVar6 = (longlong *)plVar5[2];
                    iVar8 = 0;
                    plVar5 = plVar6 + (longlong)(int)plVar5[3] * 0xb;
                    for (; plVar6 != plVar5; plVar6 = plVar6 + 0xb) {
                      if (*plVar6 == plVar9[1]) {
                        local_res10[0] = iVar8;
                        local_res18 = lVar7;
                        UE4Function_Private::
                        TFunctionRefCaller<<lambda_bbe5a91fb6063411ec501f93c7967b6f>_const_,void___cdecl(FAnimNode_StateMachine_*,FBakedAnimationState_const_&,int)>
                        ::Call(&local_res20,&local_res18,plVar6,local_res10);
                      }
                      iVar8 = iVar8 + 1;
                    }
                  }
                }
                break;
              }
            }
          }
        }
        plVar9 = plVar9 + 4;
      } while (plVar9 != local_58);
    }
    plVar9 = (longlong *)param_1[0xb3];
    local_58 = plVar9 + (longlong)(int)param_1[0xb4] * 4;
    if (plVar9 != local_58) {
      do {
        plVar1 = (longlong *)param_1[0x15];
        local_res20 = plVar9;
        plVar3 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
        plVar10 = (longlong *)*plVar3;
        plVar3 = plVar10 + (int)plVar3[1];
        for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
          lVar7 = *plVar10;
          if (lVar7 != 0) {
            lVar4 = FUN_1428f58f0();
            for (lVar2 = *(longlong *)(lVar7 + 0x70); lVar2 != 0;
                lVar2 = *(longlong *)(lVar2 + 0x30)) {
              if (lVar2 == lVar4) {
                lVar7 = (longlong)*(int *)(lVar7 + 0x44) + param_1[0x14];
                if (lVar7 != 0) {
                  plVar5 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1);
                  iVar8 = *(int *)(lVar7 + 0x30);
                  if (((-1 < iVar8) && (iVar8 < (int)plVar5[1])) &&
                     ((plVar5 = (longlong *)((longlong)iVar8 * 0x38 + *plVar5),
                      plVar5 != (longlong *)0x0 && (*plVar9 == *plVar5)))) {
                    plVar6 = (longlong *)plVar5[2];
                    iVar8 = 0;
                    plVar5 = plVar6 + (longlong)(int)plVar5[3] * 0xb;
                    for (; plVar6 != plVar5; plVar6 = plVar6 + 0xb) {
                      if (*plVar6 == plVar9[1]) {
                        local_res10[0] = iVar8;
                        local_res18 = lVar7;
                        UE4Function_Private::
                        TFunctionRefCaller<<lambda_fed55315b42289a063e00a6f64ce9cdd>_const_,void___cdecl(FAnimNode_StateMachine_*,FBakedAnimationState_const_&,int)>
                        ::Call(&local_res20,&local_res18,plVar6,local_res10);
                      }
                      iVar8 = iVar8 + 1;
                    }
                  }
                }
                break;
              }
            }
          }
        }
        plVar9 = plVar9 + 4;
      } while (plVar9 != local_58);
    }
  }
  return;
}



// FUNCTION 142258420 FUN_142258420 body=141 status=ok
// SIG undefined FUN_142258420(void)

void FUN_142258420(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_142a07000();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar3 = param_1[0x72];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar3;
  }
  FUN_142257fe0(lVar3);
  return;
}



// FUNCTION 1422584b0 FUN_1422584b0 body=350 status=ok
// SIG undefined FUN_1422584b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422584b0(longlong param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  byte local_fb;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_ec = param_3[1];
  local_f0 = *param_3;
  local_fb = local_fb & 0xfa | 2;
  local_e8 = param_5;
  local_110 = param_9;
  local_d8 = param_10;
  local_108 = param_7;
  local_98 = _DAT_146aeef40 & _DAT_146aeef50;
  uStack_94 = uRam0000000146aeef44 & uRam0000000146aeef54;
  uStack_90 = uRam0000000146aeef48 & uRam0000000146aeef58;
  uStack_8c = uRam0000000146aeef4c & uRam0000000146aeef5c;
  local_fc = param_6;
  local_88 = *(undefined4 *)(param_1 + 0x290);
  local_f8 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8[0] = 0;
  local_c4 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_34 = 0;
  local_2c = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = uRam0000000146aeef4c;
  local_40 = &DAT_146aef328;
  local_38 = param_8;
  local_100 = 0x3f800000;
  local_104 = 0x3f800000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_28 = 0x100;
  local_26 = 1;
  local_118 = param_2;
  local_e0 = param_4;
  (**(code **)(*param_2 + 0x278))(param_2,&local_118,param_1 + 0x1d0,local_c8);
  if (local_80 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142258610 FUN_142258610 body=436 status=ok
// SIG undefined FUN_142258610(void)

void FUN_142258610(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9,undefined1 param_10)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined1 local_68 [80];
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  cVar4 = UActorComponent::IsComponentTickEnabled(plVar3);
  if (cVar4 == '\0') {
    (**(code **)(*plVar3 + 0x358))(plVar3,1);
  }
  lVar5 = operator_new(0x108);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1422a1930(lVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10);
  }
  uVar1 = *(undefined4 *)(lVar5 + 0x20);
  puVar6 = (undefined8 *)FUN_1422ab500(lVar5,local_res8);
  uVar7 = FAlphaBlend::FAlphaBlend(local_68,uVar1);
  FUN_142281be0(param_1,*puVar6,uVar7);
  uVar1 = *(undefined4 *)(lVar5 + 0x20);
  puVar6 = (undefined8 *)FUN_1422ab500(lVar5,local_res8);
  FUN_142281ca0(param_1,*puVar6,uVar1);
  iVar2 = *(int *)(param_1 + 1000);
  *(int *)(param_1 + 1000) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3ec) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x3e0,iVar2);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x3e0) + (longlong)iVar2 * 8) = lVar5;
  if (param_3 != 0) {
    plVar8 = *(longlong **)(param_3 + 200);
    plVar3 = plVar8 + (longlong)*(int *)(param_3 + 0xd0) * 3;
    for (; plVar8 != plVar3; plVar8 = plVar8 + 3) {
      if (((longlong *)*plVar8 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*(longlong *)*plVar8 + 0x2e8))(), cVar4 != '\0')) {
        *(longlong *)(param_1 + 0x3f0) = lVar5;
        return;
      }
    }
  }
  return;
}



// FUNCTION 1422587d0 FUN_1422587d0 body=657 status=ok
// SIG undefined FUN_1422587d0(void)

void FUN_1422587d0(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 local_res8;
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  
  plVar7 = param_1 + 0x21;
  cVar3 = FWeakObjectPtr::IsValid(plVar7);
  if ((((cVar3 != '\0') && (lVar8 = *param_1, lVar8 != 0)) && (param_2 != (int *)0x0)) &&
     ((*param_2 < *(int *)(lVar8 + 0x88) &&
      (lVar8 = (longlong)*param_2 * 0xa8 + *(longlong *)(lVar8 + 0x80), lVar8 != 0)))) {
    if (*(char *)(lVar8 + 0x90) != '\0') {
      local_res8 = 0;
      if (*(longlong *)(lVar8 + 0x40) != 0) {
        puVar4 = (undefined8 *)FName::ToString((longlong *)(lVar8 + 0x40),&local_38);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar4;
        }
        FString::PrintfImpl(&local_48,L"MontageBranchingPoint_%s",puVar9);
        if (local_38 != 0) {
          FMemory::Free();
        }
        puVar9 = &DAT_143f3eda8;
        if (local_40 != 0) {
          puVar9 = local_48;
        }
        FName::FName(&local_res8,puVar9,1);
        uVar5 = FWeakObjectPtr::Get(plVar7);
        lVar6 = UObject::FindFunction(uVar5,local_res8);
        plVar7 = (longlong *)FWeakObjectPtr::Get(plVar7);
        if (lVar6 == 0) {
          FUN_142283b40(plVar7,lVar8);
        }
        else {
          (**(code **)(*plVar7 + 0x208))(plVar7,lVar6,0);
        }
        if (local_48 == (undefined2 *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
    }
    local_28 = lVar8;
    if (*(longlong *)(lVar8 + 0x50) == 0) {
      if (*(longlong *)(lVar8 + 0x48) != 0) {
        lVar6 = FWeakObjectPtr::Get(plVar7);
        local_38 = *(longlong *)(lVar6 + 0x20);
        local_30 = *param_1;
        local_20 = (undefined4)param_1[0x22];
        (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x288))(*(longlong **)(lVar8 + 0x48),&local_38)
        ;
        return;
      }
      uVar5 = FWeakObjectPtr::Get(plVar7);
      FUN_142283b40(uVar5,lVar8);
      return;
    }
    plVar1 = param_1 + 0x23;
    if ((char)param_2[2] == '\0') {
      lVar6 = FWeakObjectPtr::Get(plVar7);
      local_38 = *(longlong *)(lVar6 + 0x20);
      local_30 = *param_1;
      local_20 = (undefined4)param_1[0x22];
      (**(code **)(**(longlong **)(lVar8 + 0x50) + 0x2a0))(*(longlong **)(lVar8 + 0x50),&local_38);
      iVar2 = (int)param_1[0x24];
      *(int *)(param_1 + 0x24) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x124) < iVar2 + 1) {
        TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      FAnimNotifyEvent::FAnimNotifyEvent((longlong)iVar2 * 0xa8 + *plVar1,lVar8);
    }
    else {
      lVar6 = FWeakObjectPtr::Get(plVar7);
      local_38 = *(longlong *)(lVar6 + 0x20);
      local_30 = *param_1;
      local_20 = (undefined4)param_1[0x22];
      (**(code **)(**(longlong **)(lVar8 + 0x50) + 0x2b0))(*(longlong **)(lVar8 + 0x50),&local_38);
      TArray<FAnimNotifyEvent,FDefaultAllocator>::RemoveSingleSwap(plVar1,lVar8,1);
    }
  }
  return;
}



// FUNCTION 142258a70 FUN_142258a70 body=1428 status=ok
// SIG undefined FUN_142258a70(void)

void FUN_142258a70(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  longlong *plVar17;
  char *pcVar18;
  ulonglong uVar19;
  char *pcVar20;
  undefined1 local_res8 [8];
  longlong local_res10;
  ulonglong local_res18;
  undefined1 local_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a0;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  longlong *plStack_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  longlong **local_48;
  longlong **local_40;
  
  plVar2 = (longlong *)(param_1 + 0x600);
  local_res10 = param_2;
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(plVar2);
  uVar19 = 0;
  plVar17 = *(longlong **)(param_2 + 0x418);
  uVar13 = (longlong)*(int *)(param_2 + 0x420) & 0x1fffffffffffffff;
  if (plVar17 + *(int *)(param_2 + 0x420) < plVar17) {
    uVar13 = uVar19;
  }
  local_res18 = uVar13;
  if (uVar13 != 0) {
    do {
      lVar11 = *plVar17;
      if (lVar11 != 0) {
        plVar3 = (longlong *)(lVar11 + 0x88);
        local_c8 = 0;
        uStack_c7 = 0;
        uStack_c6 = 0;
        uStack_c5 = 0;
        uVar5 = *(uint *)(lVar11 + 0xb0);
        puVar1 = (uint *)(lVar11 + 0x98);
        uStack_c4 = 1;
        uStack_c3 = 0;
        uStack_c2 = 0;
        uStack_c1 = 0;
        uStack_b4 = 0;
        iStack_b0 = 0;
        if (uVar5 != 0) {
          puVar16 = *(uint **)(lVar11 + 0xa8);
          if (*(uint **)(lVar11 + 0xa8) == (uint *)0x0) {
            puVar16 = puVar1;
          }
          uVar8 = *puVar16;
          iVar9 = 0;
          while (uVar8 == 0) {
            iStack_b0 = iStack_b0 + 0x20;
            iVar12 = iVar9 + 1;
            local_c8 = (undefined1)iVar12;
            uStack_c7 = (undefined1)((uint)iVar12 >> 8);
            uStack_c6 = (undefined1)((uint)iVar12 >> 0x10);
            uStack_c5 = (undefined1)((uint)iVar12 >> 0x18);
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_142258b9f;
            uVar8 = puVar16[(longlong)iVar9 + 1];
            iVar9 = iVar12;
          }
          uVar8 = -uVar8 & uVar8;
          iVar9 = 0x1f;
          if (uVar8 != 0) {
            for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          uStack_c4 = (undefined1)uVar8;
          uStack_c3 = (undefined1)(uVar8 >> 8);
          uStack_c2 = (undefined1)(uVar8 >> 0x10);
          uStack_c1 = (undefined1)(uVar8 >> 0x18);
          if (uVar8 == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          uStack_b4 = (iStack_b0 - iVar9) + 0x1f;
          if ((int)uVar5 < (int)uStack_b4) {
LAB_142258b9f:
            uStack_b4 = uVar5;
          }
        }
        uVar8 = *(uint *)(lVar11 + 0xb0);
        uStack_90 = 0xffffffff;
        uStack_8c = uStack_b4;
        local_88 = CONCAT44(uStack_ac,iStack_b0);
        uVar7 = CONCAT13(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,local_c8)));
        uVar6 = CONCAT17(uStack_c1,CONCAT16(uStack_c2,CONCAT15(uStack_c3,CONCAT14(uStack_c4,uVar7)))
                        );
        uVar15 = uVar8 & 0xffffffe0;
        uStack_68._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_a0 = CONCAT44(uStack_68._4_4_,uVar7);
        local_98 = puVar1;
        local_70 = plVar3;
        uStack_68 = uVar6;
        puStack_60 = puVar1;
        uStack_50 = local_88;
        uStack_58 = uStack_90;
        uStack_54 = uStack_8c;
        uStack_b4 = uVar8;
        if (uVar8 != uVar5) {
          puVar16 = *(uint **)(lVar11 + 0xa8);
          if (*(uint **)(lVar11 + 0xa8) == (uint *)0x0) {
            puVar16 = puVar1;
          }
          uVar14 = puVar16[(int)uVar8 >> 5] & -1 << ((byte)uVar8 & 0x1f);
          iVar9 = (int)uVar8 >> 5;
          while (uVar14 == 0) {
            uVar15 = uVar15 + 0x20;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_142258c68;
            uVar14 = puVar16[(longlong)iVar9 + 1];
            iVar9 = iVar9 + 1;
          }
          uVar14 = -uVar14 & uVar14;
          iVar9 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uVar14 == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          uStack_b4 = (uVar15 - iVar9) + 0x1f;
          if ((int)uVar5 < (int)uStack_b4) {
LAB_142258c68:
            uStack_b4 = uVar5;
          }
        }
        while ((uStack_8c != uStack_b4 || (uVar13 = local_res18, local_98 != puVar1))) {
          plVar4 = (longlong *)(*plVar3 + (longlong)(int)uStack_8c * 0x18);
          lVar11 = *plVar4;
          if (*(int *)(param_1 + 0x608) != *(int *)(param_1 + 0x634)) {
            lVar10 = *(longlong *)(param_1 + 0x640);
            if (*(longlong *)(param_1 + 0x640) == 0) {
              lVar10 = param_1 + 0x638;
            }
            iVar9 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                                      (longlong)*(int *)(param_1 + 0x648) - 1U) * 4);
            if (iVar9 != -1) {
              do {
                if (*(longlong *)(*plVar2 + (longlong)iVar9 * 0x18) == lVar11) {
                  if (iVar9 != -1) goto LAB_142258d1d;
                  break;
                }
                iVar9 = *(int *)(*plVar2 + 0x10 + (longlong)iVar9 * 0x18);
              } while (iVar9 != -1);
            }
          }
          plStack_78 = plVar4 + 1;
          local_80 = plVar4;
          TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                    (plVar2,local_res8,&local_80,0);
LAB_142258d1d:
          uStack_90 = uStack_90 & ~uStack_a0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
        }
      }
      plVar17 = plVar17 + 1;
      uVar19 = uVar19 + 1;
      param_2 = local_res10;
    } while (uVar19 != uVar13);
  }
  pcVar18 = *(char **)(param_2 + 0x408);
  pcVar20 = pcVar18 + (longlong)*(int *)(param_2 + 0x410) * 0x10;
  do {
    if (pcVar18 == pcVar20) {
      return;
    }
    lVar11 = *(longlong *)(pcVar18 + 8);
    if ((*pcVar18 != '\0') && (lVar11 != 0)) {
      plVar17 = (longlong *)(lVar11 + 0x88);
      local_c8 = 0;
      uStack_c7 = 0;
      uStack_c6 = 0;
      uStack_c5 = 0;
      uVar5 = *(uint *)(lVar11 + 0xb0);
      puVar1 = (uint *)(lVar11 + 0x98);
      uStack_c4 = 1;
      uStack_c3 = 0;
      uStack_c2 = 0;
      uStack_c1 = 0;
      uStack_b4 = 0;
      iStack_b0 = 0;
      if (uVar5 != 0) {
        puVar16 = *(uint **)(lVar11 + 0xa8);
        if (*(uint **)(lVar11 + 0xa8) == (uint *)0x0) {
          puVar16 = puVar1;
        }
        uVar8 = *puVar16;
        iVar9 = 0;
        while (uVar8 == 0) {
          iStack_b0 = iStack_b0 + 0x20;
          iVar12 = iVar9 + 1;
          local_c8 = (undefined1)iVar12;
          uStack_c7 = (undefined1)((uint)iVar12 >> 8);
          uStack_c6 = (undefined1)((uint)iVar12 >> 0x10);
          uStack_c5 = (undefined1)((uint)iVar12 >> 0x18);
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
          goto LAB_142258e3f;
          uVar8 = puVar16[(longlong)iVar9 + 1];
          iVar9 = iVar12;
        }
        uVar8 = -uVar8 & uVar8;
        iVar9 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        uStack_c4 = (undefined1)uVar8;
        uStack_c3 = (undefined1)(uVar8 >> 8);
        uStack_c2 = (undefined1)(uVar8 >> 0x10);
        uStack_c1 = (undefined1)(uVar8 >> 0x18);
        if (uVar8 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uStack_b4 = (iStack_b0 - iVar9) + 0x1f;
        if ((int)uVar5 < (int)uStack_b4) {
LAB_142258e3f:
          uStack_b4 = uVar5;
        }
      }
      uVar8 = *(uint *)(lVar11 + 0xb0);
      uStack_90 = 0xffffffff;
      uStack_8c = uStack_b4;
      local_88 = CONCAT44(uStack_ac,iStack_b0);
      uStack_a0 = CONCAT17(uStack_c1,
                           CONCAT16(uStack_c2,
                                    CONCAT15(uStack_c3,
                                             CONCAT14(uStack_c4,
                                                      CONCAT13(uStack_c5,
                                                               CONCAT12(uStack_c6,
                                                                        CONCAT11(uStack_c7,local_c8)
                                                                       ))))));
      uVar15 = uVar8 & 0xffffffe0;
      local_98 = puVar1;
      local_70 = plVar17;
      uStack_68 = uStack_a0;
      puStack_60 = puVar1;
      uStack_50 = local_88;
      uStack_58 = uStack_90;
      uStack_54 = uStack_8c;
      uStack_b4 = uVar8;
      if (uVar8 != uVar5) {
        puVar16 = *(uint **)(lVar11 + 0xa8);
        if (*(uint **)(lVar11 + 0xa8) == (uint *)0x0) {
          puVar16 = puVar1;
        }
        uVar14 = puVar16[(int)uVar8 >> 5] & -1 << ((byte)uVar8 & 0x1f);
        iVar9 = (int)uVar8 >> 5;
        while (uVar14 == 0) {
          uVar15 = uVar15 + 0x20;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
          goto LAB_142258f08;
          uVar14 = puVar16[(longlong)iVar9 + 1];
          iVar9 = iVar9 + 1;
        }
        uVar14 = -uVar14 & uVar14;
        iVar9 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uVar14 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uStack_b4 = (uVar15 - iVar9) + 0x1f;
        if ((int)uVar5 < (int)uStack_b4) {
LAB_142258f08:
          uStack_b4 = uVar5;
        }
      }
      while ((uStack_8c != uStack_b4 || (local_98 != puVar1))) {
        plVar3 = (longlong *)(*plVar17 + (longlong)(int)uStack_8c * 0x18);
        local_80 = (longlong *)*plVar3;
        plStack_78 = (longlong *)plVar3[1];
        if (*(int *)(param_1 + 0x608) != *(int *)(param_1 + 0x634)) {
          lVar11 = *(longlong *)(param_1 + 0x640);
          if (*(longlong *)(param_1 + 0x640) == 0) {
            lVar11 = param_1 + 0x638;
          }
          iVar9 = *(int *)(lVar11 + ((longlong)(*(int *)((longlong)plVar3 + 4) + (int)*plVar3) &
                                    (longlong)*(int *)(param_1 + 0x648) - 1U) * 4);
          if (iVar9 != -1) {
            do {
              if (*(longlong **)(*plVar2 + (longlong)iVar9 * 0x18) == local_80) {
                if (iVar9 != -1) goto LAB_142258fc1;
                break;
              }
              iVar9 = *(int *)(*plVar2 + 0x10 + (longlong)iVar9 * 0x18);
            } while (iVar9 != -1);
          }
        }
        local_48 = &local_80;
        local_40 = &plStack_78;
        TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                  (plVar2,&local_res10,&local_48,0);
LAB_142258fc1:
        uStack_90 = uStack_90 & ~uStack_a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      }
    }
    pcVar18 = pcVar18 + 0x10;
  } while( true );
}



// FUNCTION 142259010 FUN_142259010 body=263 status=ok
// SIG undefined FUN_142259010(void)

void FUN_142259010(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(*(longlong *)(param_3 + 0x98) + 8);
  uVar6 = *(ulonglong *)(param_3 + 0xa0) & 0xffffffff;
  if ((longlong)(int)uVar1 <= (longlong)*(ulonglong *)(param_3 + 0xa0)) {
    uVar6 = (ulonglong)uVar1;
  }
  uVar5 = 0;
  *(undefined4 *)(param_2 + 0x128) = 0;
  uVar4 = uVar5;
  if (*(int *)(param_2 + 300) != (int)uVar6) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2 + 0x120,uVar6);
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x128);
  }
  iVar2 = (int)uVar4 + (int)uVar6;
  *(int *)(param_2 + 0x128) = iVar2;
  if (*(int *)(param_2 + 300) < iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 0x120);
  }
  iVar2 = *(int *)(param_2 + 0x110);
  iVar3 = *(int *)(param_2 + 0x100) / 2;
  uVar6 = uVar5;
  if (0 < iVar3) {
    do {
      FUN_142253130(param_2,param_3,*(undefined4 *)(*(longlong *)(param_2 + 0xf8) + uVar6 * 8));
      FUN_142253130(param_2,param_3,*(undefined4 *)(*(longlong *)(param_2 + 0xf8) + 4 + uVar6 * 8));
      if (0 < iVar2) {
        FUN_142253130(param_2,param_3,
                      *(undefined4 *)
                       (*(longlong *)(param_2 + 0x108) +
                       (longlong)(*(int *)(param_2 + 0x118) * (int)uVar5) * 4));
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)iVar3);
  }
  return;
}



// FUNCTION 142259120 FUN_142259120 body=936 status=ok
// SIG undefined FUN_142259120(void)

void FUN_142259120(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int local_98;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  iVar1 = *(int *)(param_2 + 0x100);
  iVar4 = FMemoryReader::TotalSize(param_3);
  FUN_14225cd80(param_2 + 0x120,iVar4);
  uVar5 = *(undefined4 *)(param_2 + 0x128);
  iVar4 = *(int *)(param_2 + 0x128) + iVar4;
  *(int *)(param_2 + 0x128) = iVar4;
  if (*(int *)(param_2 + 300) < iVar4) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 0x120,uVar5);
  }
  lVar2 = *(longlong *)(param_2 + 0x120);
  local_38 = lVar2;
  cVar3 = FUN_140e96340(param_2 + 0x108);
  for (local_98 = 0; local_98 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2; local_98 = local_98 + 1) {
    local_30 = *(longlong *)(param_2 + 0xf8);
    local_28 = *(longlong *)(param_2 + 0xf8);
    local_20 = *(longlong *)(param_2 + 0xf8);
    iVar4 = *(int *)(local_20 + (longlong)(local_98 * 4 + 2) * 4);
    local_18 = *(longlong *)(param_2 + 0xf8);
    uVar5 = *(undefined4 *)(local_18 + (longlong)(local_98 * 4 + 3) * 4);
    local_50 = lVar2 + *(int *)(local_30 + (longlong)(local_98 << 2) * 4);
    (**(code **)(**(longlong **)(param_2 + 0x140) + 0x50))
              (*(undefined8 *)(param_2 + 0x140),param_2,param_3,&local_50,
               *(undefined4 *)(local_28 + (longlong)(local_98 * 4 + 1) * 4));
    FUN_1422797d0(param_3,&local_50,4);
    local_48 = lVar2 + iVar4;
    (**(code **)(**(longlong **)(param_2 + 0x148) + 0x48))
              (*(undefined8 *)(param_2 + 0x148),param_2,param_3,&local_48,uVar5);
    FUN_1422797d0(param_3,&local_48,4);
    if (cVar3 != '\0') {
      iVar4 = FUN_142269f20(param_2 + 0x108,local_98,0);
      uVar5 = FUN_142269f20(param_2 + 0x108,local_98,1);
      local_40 = lVar2 + iVar4;
      (**(code **)(**(longlong **)(param_2 + 0x150) + 0x58))
                (*(undefined8 *)(param_2 + 0x150),param_2,param_3,&local_40,uVar5);
      FUN_1422797d0(param_3,&local_40,4);
    }
  }
  return;
}



// FUNCTION 1422594d0 FUN_1422594d0 body=294 status=ok
// SIG undefined FUN_1422594d0(void)

void FUN_1422594d0(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined **local_c8 [5];
  byte local_9f;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar3 = 0;
  FArchive::FArchive(local_c8);
  local_38 = 0;
  local_c8[0] = &PTR_FUN_143f4a100;
  local_28 = 0;
  local_30 = param_3;
  FArchive::SetIsSaving(local_c8,1);
  FArchive::SetIsPersistent(local_c8,1);
  iVar1 = *(int *)(param_2 + 0x110);
  local_9f = local_9f & 0xef | param_4 << 4;
  iVar2 = *(int *)(param_2 + 0x100) / 2;
  uVar4 = uVar3;
  if (0 < iVar2) {
    do {
      FUN_142253470(param_2,local_c8,*(undefined4 *)(*(longlong *)(param_2 + 0xf8) + uVar4 * 8));
      FUN_142253470(param_2,local_c8,*(undefined4 *)(*(longlong *)(param_2 + 0xf8) + 4 + uVar4 * 8))
      ;
      if (0 < iVar1) {
        FUN_142253470(param_2,local_c8,
                      *(undefined4 *)
                       (*(longlong *)(param_2 + 0x108) +
                       (longlong)(*(int *)(param_2 + 0x118) * (int)uVar3) * 4));
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)iVar2);
  }
  FArchive::~FArchive(local_c8);
  return;
}



// FUNCTION 142259600 FUN_142259600 body=837 status=ok
// SIG undefined FUN_142259600(void)

void FUN_142259600(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_res18;
  undefined1 local_res20 [8];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined **local_e8 [5];
  byte local_bf;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar9 = 0;
  FArchive::FArchive(local_e8);
  local_58 = 0;
  local_e8[0] = &PTR_FUN_143f4a100;
  local_48 = 0;
  local_50 = param_3;
  FArchive::SetIsSaving(local_e8,1);
  FArchive::SetIsPersistent(local_e8,1);
  lVar7 = *(longlong *)(param_2 + 0x120);
  local_bf = local_bf & 0xef | param_4 << 4;
  iVar1 = *(int *)(param_2 + 0x110);
  iVar4 = (int)(*(int *)(param_2 + 0x100) + (*(int *)(param_2 + 0x100) >> 0x1f & 3U)) >> 2;
  local_f0 = (longlong)iVar4;
  uVar10 = uVar9;
  local_f8 = lVar7;
  if (0 < iVar4) {
    do {
      lVar5 = *(longlong *)(param_2 + 0xf8);
      plVar3 = *(longlong **)(param_2 + 0x140);
      iVar4 = *(int *)(lVar5 + 8 + uVar10);
      uVar2 = *(undefined4 *)(lVar5 + 0xc + uVar10);
      local_res18 = *(int *)(lVar5 + uVar10) + lVar7;
      if (plVar3 == (longlong *)0x0) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x18b,L"%i: unknown or unsupported animation format",
                   *(undefined1 *)(param_2 + 0x130));
        FDebug::AssertFailed
                  (&DAT_14501683b,"Unknown",0x18b,L"%i: unknown or unsupported animation format",
                   *(undefined1 *)(param_2 + 0x130));
      }
      else {
        (**(code **)(*plVar3 + 0x68))
                  (plVar3,param_2,local_e8,&local_res18,*(undefined4 *)(lVar5 + 4 + uVar10));
      }
      local_res20[0] = 0x55;
      uVar8 = ((int)local_res18 + 3U & 0xfffffffc) - (int)local_res18;
      if (0 < (int)uVar8) {
        uVar6 = (ulonglong)uVar8;
        do {
          (*(code *)local_e8[0][10])(local_e8,local_res20,1);
          uVar6 = uVar6 - 1;
          lVar7 = local_f8;
        } while (uVar6 != 0);
      }
      local_res18 = local_res18 + (int)uVar8;
      local_108 = lVar7 + iVar4;
      (**(code **)(**(longlong **)(param_2 + 0x148) + 0x60))
                (*(longlong **)(param_2 + 0x148),param_2,local_e8,&local_108,uVar2);
      local_res20[0] = 0x55;
      uVar8 = ((int)local_108 + 3U & 0xfffffffc) - (int)local_108;
      if (0 < (int)uVar8) {
        uVar6 = (ulonglong)uVar8;
        do {
          (*(code *)local_e8[0][10])(local_e8,local_res20,1);
          uVar6 = uVar6 - 1;
          lVar7 = local_f8;
        } while (uVar6 != 0);
      }
      local_108 = local_108 + (int)uVar8;
      if (0 < iVar1) {
        lVar5 = (longlong)(*(int *)(param_2 + 0x118) * (int)uVar9);
        local_100 = *(int *)(*(longlong *)(param_2 + 0x108) + lVar5 * 4) + lVar7;
        plVar3 = *(longlong **)(param_2 + 0x150);
        if (plVar3 == (longlong *)0x0) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x1a8,L"%i: unknown or unsupported animation format",
                     *(undefined1 *)(param_2 + 0x130));
          FDebug::AssertFailed
                    (&DAT_14501683c,"Unknown",0x1a8,L"%i: unknown or unsupported animation format",
                     *(undefined1 *)(param_2 + 0x130));
        }
        else {
          (**(code **)(*plVar3 + 0x70))
                    (plVar3,param_2,local_e8,&local_100,
                     *(undefined4 *)(*(longlong *)(param_2 + 0x108) + 4 + lVar5 * 4));
        }
        local_res20[0] = 0x55;
        uVar8 = ((int)local_100 + 3U & 0xfffffffc) - (int)local_100;
        if (0 < (int)uVar8) {
          uVar6 = (ulonglong)uVar8;
          do {
            (*(code *)local_e8[0][10])(local_e8,local_res20,1);
            uVar6 = uVar6 - 1;
            lVar7 = local_f8;
          } while (uVar6 != 0);
        }
        local_100 = local_100 + (int)uVar8;
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
      local_f0 = local_f0 + -1;
      uVar10 = uVar10 + 0x10;
    } while (local_f0 != 0);
    local_f0 = 0;
  }
  FArchive::~FArchive(local_e8);
  return;
}



// FUNCTION 142259950 FUN_142259950 body=775 status=ok
// SIG undefined FUN_142259950(void)

void FUN_142259950(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  uint param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  void *_Dst;
  size_t _Size;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_5;
  uVar5 = 1;
  if (param_5 != 1) {
    uVar5 = (ulonglong)*(byte *)(param_2 + 0xf1);
  }
  iVar1 = *(int *)(&DAT_145018d30 + uVar5 * 4);
  _Size = (size_t)iVar1;
  uVar2 = *(uint *)(&DAT_145018d50 + uVar5 * 4);
  if ((int)uVar5 == 3) {
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar3 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar6 = *(longlong *)(param_3 + 0xa0);
      if (lVar3 <= *(longlong *)(param_3 + 0xa0)) {
        lVar6 = lVar3;
      }
      if (lVar6 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)*param_4 =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar6 = *param_4;
    *param_4 = lVar6 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar6 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar6 = *param_4;
    *param_4 = lVar6 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar6 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar6 = *param_4;
    *param_4 = lVar6 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar6 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar6 = *param_4;
    *param_4 = lVar6 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar6 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar6 = *param_4;
    *param_4 = lVar6 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar6 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    *param_4 = *param_4 + 4;
  }
  if (0 < (int)param_5) {
    do {
      if (0 < (int)uVar2) {
        _Dst = (void *)*param_4;
        uVar5 = (ulonglong)uVar2;
        do {
          if ((iVar1 != 0) && (-1 < (char)*(byte *)(param_3 + 0x28))) {
            lVar3 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
            lVar6 = *(longlong *)(param_3 + 0xa0);
            if (lVar3 <= *(longlong *)(param_3 + 0xa0)) {
              lVar6 = lVar3;
            }
            if (lVar6 < (longlong)(_Size + *(longlong *)(param_3 + 0x90))) {
              *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (_Dst,(void *)((longlong)(int)*(longlong *)(param_3 + 0x90) +
                                      **(longlong **)(param_3 + 0x98)),_Size);
              *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + _Size;
            }
          }
          *param_4 = *param_4 + _Size;
          _Dst = (void *)*param_4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 142259c60 FUN_142259c60 body=231 status=ok
// SIG undefined FUN_142259c60(void)

void FUN_142259c60(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  uint param_5)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  longlong lVar3;
  size_t _Size;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_5;
  FUN_142259950();
  if (1 < (int)param_5) {
    iVar1 = (int)*param_4;
    lVar3 = (longlong)(int)((iVar1 + 3U & 0xfffffffc) - iVar1);
    FMemoryReader::Serialize(param_3,*param_4,lVar3);
    _Dst = (void *)(*param_4 + lVar3);
    *param_4 = (longlong)_Dst;
    _Size = (ulonglong)(0xff < *(int *)(param_2 + 0xb8)) + 1;
    if (0 < (int)param_5) {
      do {
        if (-1 < (char)*(byte *)(param_3 + 0x28)) {
          lVar2 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
          lVar3 = *(longlong *)(param_3 + 0xa0);
          if (lVar2 <= *(longlong *)(param_3 + 0xa0)) {
            lVar3 = lVar2;
          }
          if (lVar3 < (longlong)(*(longlong *)(param_3 + 0x90) + _Size)) {
            *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
          }
          else {
            _guard_xfg_dispatch_icall_nop
                      (_Dst,(void *)((longlong)(int)*(longlong *)(param_3 + 0x90) +
                                    **(longlong **)(param_3 + 0x98)),_Size);
            *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + _Size;
          }
        }
        *param_4 = *param_4 + _Size;
        _Dst = (void *)*param_4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 142259d50 FUN_142259d50 body=205 status=ok
// SIG undefined FUN_142259d50(void)

void FUN_142259d50(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  uint param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (ulonglong)param_5;
  uVar3 = 1;
  if (param_5 != 1) {
    uVar3 = (ulonglong)*(byte *)(param_2 + 0xf1);
  }
  iVar1 = *(int *)(&DAT_145018d30 + uVar3 * 4);
  uVar2 = *(uint *)(&DAT_145018d50 + uVar3 * 4);
  if ((int)uVar3 == 3) {
    lVar5 = 6;
    do {
      (**(code **)(*param_3 + 0x50))(param_3,*param_4,4);
      *param_4 = *param_4 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (0 < (int)param_5) {
    do {
      uVar3 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        do {
          (**(code **)(*param_3 + 0x50))(param_3,*param_4,(longlong)iVar1);
          *param_4 = *param_4 + (longlong)iVar1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 142259e20 FUN_142259e20 body=311 status=ok
// SIG undefined FUN_142259e20(void)

void FUN_142259e20(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  uint param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = (ulonglong)param_5;
  uVar3 = 1;
  if (param_5 != 1) {
    uVar3 = (ulonglong)*(byte *)(param_2 + 0xf1);
  }
  iVar1 = *(int *)(&DAT_145018d30 + uVar3 * 4);
  uVar2 = *(uint *)(&DAT_145018d50 + uVar3 * 4);
  if ((int)uVar3 == 3) {
    lVar6 = 6;
    do {
      (**(code **)(*param_3 + 0x50))(param_3,*param_4,4);
      *param_4 = *param_4 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  uVar3 = uVar5;
  if (0 < (int)param_5) {
    do {
      uVar4 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        do {
          (**(code **)(*param_3 + 0x50))(param_3,*param_4,(longlong)iVar1);
          *param_4 = *param_4 + (longlong)iVar1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (1 < (int)param_5) {
    FUN_142279810(param_3,param_4,4);
    lVar6 = (ulonglong)(0xff < *(int *)(param_2 + 0xb8)) + 1;
    if (0 < (int)param_5) {
      do {
        (**(code **)(*param_3 + 0x50))(param_3,*param_4,lVar6);
        *param_4 = *param_4 + lVar6;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}



// FUNCTION 142259f60 FUN_142259f60 body=760 status=ok
// SIG undefined FUN_142259f60(void)

void FUN_142259f60(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  uint param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  size_t _Size;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_5;
  if (param_5 == 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ulonglong)*(byte *)(param_2 + 0xf2);
  }
  iVar1 = (&DAT_145018d70)[uVar6];
  _Size = (size_t)iVar1;
  uVar2 = (&DAT_145018d90)[uVar6];
  if ((int)uVar6 == 3) {
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar3 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar5 = *(longlong *)(param_3 + 0xa0);
      if (lVar3 <= *(longlong *)(param_3 + 0xa0)) {
        lVar5 = lVar3;
      }
      if (lVar5 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)*param_4 =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar5 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar5 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar5 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar5 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar5 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    *param_4 = *param_4 + 4;
  }
  if (0 < (int)param_5) {
    do {
      if (0 < (int)uVar2) {
        _Dst = (void *)*param_4;
        uVar6 = (ulonglong)uVar2;
        do {
          if ((iVar1 != 0) && (-1 < (char)*(byte *)(param_3 + 0x28))) {
            lVar3 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
            lVar5 = *(longlong *)(param_3 + 0xa0);
            if (lVar3 <= *(longlong *)(param_3 + 0xa0)) {
              lVar5 = lVar3;
            }
            if (lVar5 < (longlong)(_Size + *(longlong *)(param_3 + 0x90))) {
              *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (_Dst,(void *)((longlong)(int)*(longlong *)(param_3 + 0x90) +
                                      **(longlong **)(param_3 + 0x98)),_Size);
              *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + _Size;
            }
          }
          *param_4 = *param_4 + _Size;
          _Dst = (void *)*param_4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 14225a260 FUN_14225a260 body=231 status=ok
// SIG undefined FUN_14225a260(void)

void FUN_14225a260(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  uint param_5)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  longlong lVar3;
  size_t _Size;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_5;
  FUN_142259f60();
  if (1 < (int)param_5) {
    iVar1 = (int)*param_4;
    lVar3 = (longlong)(int)((iVar1 + 3U & 0xfffffffc) - iVar1);
    FMemoryReader::Serialize(param_3,*param_4,lVar3);
    _Dst = (void *)(*param_4 + lVar3);
    *param_4 = (longlong)_Dst;
    _Size = (ulonglong)(0xff < *(int *)(param_2 + 0xb8)) + 1;
    if (0 < (int)param_5) {
      do {
        if (-1 < (char)*(byte *)(param_3 + 0x28)) {
          lVar2 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
          lVar3 = *(longlong *)(param_3 + 0xa0);
          if (lVar2 <= *(longlong *)(param_3 + 0xa0)) {
            lVar3 = lVar2;
          }
          if (lVar3 < (longlong)(*(longlong *)(param_3 + 0x90) + _Size)) {
            *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
          }
          else {
            _guard_xfg_dispatch_icall_nop
                      (_Dst,(void *)((longlong)(int)*(longlong *)(param_3 + 0x90) +
                                    **(longlong **)(param_3 + 0x98)),_Size);
            *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + _Size;
          }
        }
        *param_4 = *param_4 + _Size;
        _Dst = (void *)*param_4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 14225a350 FUN_14225a350 body=205 status=ok
// SIG undefined FUN_14225a350(void)

void FUN_14225a350(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  uint param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar3 = (ulonglong)param_5;
  if (param_5 == 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulonglong)*(byte *)(param_2 + 0xf2);
  }
  iVar1 = (&DAT_145018d70)[uVar4];
  uVar2 = (&DAT_145018d90)[uVar4];
  if ((int)uVar4 == 3) {
    lVar5 = 6;
    do {
      (**(code **)(*param_3 + 0x50))(param_3,*param_4,4);
      *param_4 = *param_4 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (0 < (int)param_5) {
    do {
      uVar4 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        do {
          (**(code **)(*param_3 + 0x50))(param_3,*param_4,(longlong)iVar1);
          *param_4 = *param_4 + (longlong)iVar1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 14225a420 FUN_14225a420 body=329 status=ok
// SIG undefined FUN_14225a420(void)

void FUN_14225a420(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  uint param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_5;
  uVar3 = 0;
  if (param_5 != 1) {
    uVar3 = (ulonglong)*(byte *)(param_2 + 0xf2);
  }
  iVar1 = (&DAT_145018d70)[uVar3];
  uVar2 = (&DAT_145018d90)[uVar3];
  if ((int)uVar3 == 3) {
    lVar4 = 6;
    do {
      (**(code **)(*param_3 + 0x50))(param_3,*param_4,4);
      *param_4 = *param_4 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (0 < (int)param_5) {
    do {
      uVar3 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        do {
          (**(code **)(*param_3 + 0x50))(param_3,*param_4,(longlong)iVar1);
          *param_4 = *param_4 + (longlong)iVar1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (1 < (int)param_5) {
    FUN_142279810(param_3,param_4,4);
    lVar4 = (ulonglong)(0xff < *(int *)(param_2 + 0xb8)) + 1;
    if (0 < (int)param_5) {
      uVar3 = (ulonglong)param_5;
      do {
        (**(code **)(*param_3 + 0x50))(param_3,*param_4,lVar4);
        *param_4 = *param_4 + lVar4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



// FUNCTION 14225a570 FUN_14225a570 body=760 status=ok
// SIG undefined FUN_14225a570(void)

void FUN_14225a570(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  uint param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  size_t _Size;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_5;
  if (param_5 == 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ulonglong)*(byte *)(param_2 + 0xf0);
  }
  iVar1 = (&DAT_145018cf0)[uVar6];
  _Size = (size_t)iVar1;
  uVar2 = (&DAT_145018d10)[uVar6];
  if ((int)uVar6 == 3) {
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar3 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar5 = *(longlong *)(param_3 + 0xa0);
      if (lVar3 <= *(longlong *)(param_3 + 0xa0)) {
        lVar5 = lVar3;
      }
      if (lVar5 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)*param_4 =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar5 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar5 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar5 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar5 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    lVar5 = *param_4;
    *param_4 = lVar5 + 4;
    if (-1 < (char)*(byte *)(param_3 + 0x28)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
      lVar3 = *(longlong *)(param_3 + 0xa0);
      if (lVar4 <= *(longlong *)(param_3 + 0xa0)) {
        lVar3 = lVar4;
      }
      if (lVar3 < *(longlong *)(param_3 + 0x90) + 4) {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
      }
      else {
        *(undefined4 *)(lVar5 + 4) =
             *(undefined4 *)
              ((longlong)(int)*(longlong *)(param_3 + 0x90) + **(longlong **)(param_3 + 0x98));
        *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + 4;
      }
    }
    *param_4 = *param_4 + 4;
  }
  if (0 < (int)param_5) {
    do {
      if (0 < (int)uVar2) {
        _Dst = (void *)*param_4;
        uVar6 = (ulonglong)uVar2;
        do {
          if ((iVar1 != 0) && (-1 < (char)*(byte *)(param_3 + 0x28))) {
            lVar3 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
            lVar5 = *(longlong *)(param_3 + 0xa0);
            if (lVar3 <= *(longlong *)(param_3 + 0xa0)) {
              lVar5 = lVar3;
            }
            if (lVar5 < (longlong)(_Size + *(longlong *)(param_3 + 0x90))) {
              *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (_Dst,(void *)((longlong)(int)*(longlong *)(param_3 + 0x90) +
                                      **(longlong **)(param_3 + 0x98)),_Size);
              *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + _Size;
            }
          }
          *param_4 = *param_4 + _Size;
          _Dst = (void *)*param_4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 14225a870 FUN_14225a870 body=231 status=ok
// SIG undefined FUN_14225a870(void)

void FUN_14225a870(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  uint param_5)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  longlong lVar3;
  size_t _Size;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_5;
  FUN_14225a570();
  if (1 < (int)param_5) {
    iVar1 = (int)*param_4;
    lVar3 = (longlong)(int)((iVar1 + 3U & 0xfffffffc) - iVar1);
    FMemoryReader::Serialize(param_3,*param_4,lVar3);
    _Dst = (void *)(*param_4 + lVar3);
    *param_4 = (longlong)_Dst;
    _Size = (ulonglong)(0xff < *(int *)(param_2 + 0xb8)) + 1;
    if (0 < (int)param_5) {
      do {
        if (-1 < (char)*(byte *)(param_3 + 0x28)) {
          lVar2 = (longlong)(int)(*(longlong **)(param_3 + 0x98))[1];
          lVar3 = *(longlong *)(param_3 + 0xa0);
          if (lVar2 <= *(longlong *)(param_3 + 0xa0)) {
            lVar3 = lVar2;
          }
          if (lVar3 < (longlong)(*(longlong *)(param_3 + 0x90) + _Size)) {
            *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 0x80;
          }
          else {
            _guard_xfg_dispatch_icall_nop
                      (_Dst,(void *)((longlong)(int)*(longlong *)(param_3 + 0x90) +
                                    **(longlong **)(param_3 + 0x98)),_Size);
            *(longlong *)(param_3 + 0x90) = *(longlong *)(param_3 + 0x90) + _Size;
          }
        }
        *param_4 = *param_4 + _Size;
        _Dst = (void *)*param_4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 14225a960 FUN_14225a960 body=205 status=ok
// SIG undefined FUN_14225a960(void)

void FUN_14225a960(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  uint param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar3 = (ulonglong)param_5;
  if (param_5 == 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulonglong)*(byte *)(param_2 + 0xf0);
  }
  iVar1 = (&DAT_145018cf0)[uVar4];
  uVar2 = (&DAT_145018d10)[uVar4];
  if ((int)uVar4 == 3) {
    lVar5 = 6;
    do {
      (**(code **)(*param_3 + 0x50))(param_3,*param_4,4);
      *param_4 = *param_4 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (0 < (int)param_5) {
    do {
      uVar4 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        do {
          (**(code **)(*param_3 + 0x50))(param_3,*param_4,(longlong)iVar1);
          *param_4 = *param_4 + (longlong)iVar1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 14225aa30 FUN_14225aa30 body=329 status=ok
// SIG undefined FUN_14225aa30(void)

void FUN_14225aa30(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  uint param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_5;
  uVar3 = 0;
  if (param_5 != 1) {
    uVar3 = (ulonglong)*(byte *)(param_2 + 0xf0);
  }
  iVar1 = (&DAT_145018cf0)[uVar3];
  uVar2 = (&DAT_145018d10)[uVar3];
  if ((int)uVar3 == 3) {
    lVar4 = 6;
    do {
      (**(code **)(*param_3 + 0x50))(param_3,*param_4,4);
      *param_4 = *param_4 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (0 < (int)param_5) {
    do {
      uVar3 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        do {
          (**(code **)(*param_3 + 0x50))(param_3,*param_4,(longlong)iVar1);
          *param_4 = *param_4 + (longlong)iVar1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (1 < (int)param_5) {
    FUN_142279810(param_3,param_4,4);
    lVar4 = (ulonglong)(0xff < *(int *)(param_2 + 0xb8)) + 1;
    if (0 < (int)param_5) {
      uVar3 = (ulonglong)param_5;
      do {
        (**(code **)(*param_3 + 0x50))(param_3,*param_4,lVar4);
        *param_4 = *param_4 + lVar4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



// FUNCTION 14225ab80 FUN_14225ab80 body=313 status=ok
// SIG undefined FUN_14225ab80(void)

void FUN_14225ab80(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  
  if (((*(byte *)(param_1 + 0x5b8) & 1) != 0) && (*(longlong *)(param_1 + 0xd8) != 0)) {
    *(byte *)(param_1 + 0x5b8) = *(byte *)(param_1 + 0x5b8) & 0xfe;
    *(short *)(param_1 + 800) = *(short *)(param_1 + 800) + 1;
    *(undefined8 *)(param_1 + 0x318) = DAT_1468c21b0;
    if (*(short *)(param_1 + 800) == -1) {
      *(undefined2 *)(param_1 + 800) = 0;
    }
    SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_res8,param_1);
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 8))(*(longlong **)(param_1 + 0xd8),local_res8);
    uVar3 = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x5f0);
    uVar5 = (longlong)*(int *)(param_1 + 0x5f8) & 0x1fffffffffffffff;
    if (puVar1 + *(int *)(param_1 + 0x5f8) < puVar1) {
      uVar5 = uVar3;
    }
    if (uVar5 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,local_res8);
        uVar3 = uVar3 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar3 != uVar5);
    }
    FUN_1422f3ff0(param_1 + 0x668,param_1 + 0x3a0,1);
    lVar2 = *(longlong *)(param_1 + 0x688);
    lVar4 = (longlong)*(int *)(param_1 + 0x690) * 0x20 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x20) {
      FUN_1422f3ff0(lVar2,param_1 + 0x3a0,1);
    }
  }
  return;
}



// FUNCTION 14225acc0 FUN_14225acc0 body=371 status=ok
// SIG undefined FUN_14225acc0(void)

float FUN_14225acc0(undefined8 param_1,float *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_b8;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  undefined1 local_68 [96];
  
  puVar2 = (undefined8 *)FRotationMatrix::FRotationMatrix(local_68,param_3);
  fVar4 = param_2[1];
  fVar3 = *param_2;
  uVar1 = puVar2[2];
  fVar5 = fVar3 * fVar3 + fVar4 * fVar4 + param_2[2] * param_2[2];
  if (fVar5 == 1.0) {
    local_b8 = (float)*(undefined8 *)param_2;
    fVar6 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  }
  else {
    fVar6 = DAT_1468b5d94;
    local_b8 = DAT_1468b5d90;
    if (1e-08 <= fVar5) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      local_b8 = fVar3 * fVar6;
      fVar6 = fVar4 * fVar6;
    }
  }
  local_a8 = (float)*puVar2;
  fStack_a4 = (float)((ulonglong)*puVar2 >> 0x20);
  fVar3 = fStack_a4 * fVar6 + local_a8 * local_b8;
  fVar4 = -1.0;
  if ((-1.0 <= fVar3) && (fVar4 = fVar3, 1.0 <= fVar3)) {
    fVar4 = 1.0;
  }
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar4);
  local_98 = (float)uVar1;
  fStack_94 = (float)((ulonglong)uVar1 >> 0x20);
  fVar4 = fVar4 * 57.295776;
  if (fStack_94 * fVar6 + local_98 * local_b8 < 0.0) {
    fVar4 = -fVar4;
  }
  return fVar4;
}



// FUNCTION 14225ae40 FUN_14225ae40 body=100 status=ok
// SIG undefined FUN_14225ae40(void)

undefined8 FUN_14225ae40(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x180))); iVar2 = iVar2 + 1) {
    if (0 < *(int *)(*(longlong *)(param_1 + 0x178) + 0x10 + (longlong)iVar2 * 0x18)) {
      uVar3 = FAnimTrack::GetLength(*(longlong *)(param_1 + 0x178) + 8 + (longlong)iVar2 * 0x18);
      if ((float)uVar1 < (float)uVar3) {
        uVar1 = uVar3;
      }
    }
  }
  return uVar1;
}



// FUNCTION 14225aeb0 FUN_14225aeb0 body=11 status=ok
// SIG undefined FUN_14225aeb0(void)

void FUN_14225aeb0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  FUN_142255c50(param_1,*param_2,param_3,*param_4);
  return;
}



// FUNCTION 14225aec0 Call body=96 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_fed55315b42289a063e00a6f64ce9cdd>_const_,void___cdecl(FAnimNode_StateMachine_*,FBakedAnimationState_const_&,int)>
     ::Call(longlong *param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_4;
  iVar3 = *(int *)(*param_2 + 0xa0);
  plVar1 = (longlong *)(*param_2 + 0x98);
  iVar4 = iVar2 + 1;
  if (iVar3 <= iVar4) {
    iVar3 = iVar4;
  }
  TArray<TBaseDelegate<void,FAnimNode_StateMachine_const_&,int,int>,FDefaultAllocator>::SetNum
            (plVar1,iVar3,CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1));
  TBaseDelegate<FSlateBrush_const_*>::operator=((longlong)iVar2 * 0x10 + *plVar1,*param_1 + 0x10);
  return;
}



// FUNCTION 14225af20 Call body=96 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_bbe5a91fb6063411ec501f93c7967b6f>_const_,void___cdecl(FAnimNode_StateMachine_*,FBakedAnimationState_const_&,int)>
     ::Call(longlong *param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_4;
  iVar3 = *(int *)(*param_2 + 0x90);
  plVar1 = (longlong *)(*param_2 + 0x88);
  iVar4 = iVar2 + 1;
  if (iVar3 <= iVar4) {
    iVar3 = iVar4;
  }
  TArray<TBaseDelegate<void,FAnimNode_StateMachine_const_&,int,int>,FDefaultAllocator>::SetNum
            (plVar1,iVar3,CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1));
  TBaseDelegate<FSlateBrush_const_*>::operator=((longlong)iVar2 * 0x10 + *plVar1,*param_1 + 0x10);
  return;
}



// FUNCTION 14225af80 FUN_14225af80 body=437 status=ok
// SIG undefined FUN_14225af80(void)

void FUN_14225af80(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  
  if (param_2 == *(byte *)(param_1 + 3)) {
    return;
  }
  cVar1 = *(char *)((longlong)param_1 + 0x19);
  cVar5 = (char)param_2;
  *(char *)(param_1 + 3) = cVar5;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      fVar8 = *(float *)((longlong)param_1 + 0x24) + *(float *)((longlong)param_1 + 0x1c);
      goto LAB_14225afdf;
    }
    if (cVar1 == '\x02') {
      fVar8 = *(float *)((longlong)param_1 + 0x24) * *(float *)(param_1 + 4) +
              *(float *)((longlong)param_1 + 0x1c);
      goto LAB_14225afdf;
    }
  }
  fVar8 = *(float *)((longlong)param_1 + 0x24);
LAB_14225afdf:
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    iVar3 = (int)param_1[2];
    if (iVar3 < 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(lVar2 + 0x180) + -1;
      if (iVar3 < iVar6) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 2) = iVar6;
    if (cVar1 != cVar5) {
      fVar8 = -1.0;
      if (cVar1 == '\0') {
        fVar8 = *(float *)((longlong)param_1 + 0x24);
      }
      else if (cVar1 == '\x01') {
        fVar8 = *(float *)((longlong)param_1 + 0x24) + *(float *)((longlong)param_1 + 0x1c);
      }
      else if (cVar1 == '\x02') {
        fVar8 = *(float *)((longlong)param_1 + 0x24) * *(float *)(param_1 + 4) +
                *(float *)((longlong)param_1 + 0x1c);
      }
      *(char *)((longlong)param_1 + 0x19) = cVar5;
      if (cVar5 == '\0') {
        *(float *)((longlong)param_1 + 0x24) = fVar8;
      }
      else if ((param_2 & 0xff) == 1) {
        *(float *)((longlong)param_1 + 0x24) = fVar8 - *(float *)((longlong)param_1 + 0x1c);
      }
      else if ((param_2 & 0xff) == 2) {
        *(float *)((longlong)param_1 + 0x24) =
             (fVar8 - *(float *)((longlong)param_1 + 0x1c)) / *(float *)(param_1 + 4);
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x178) + (longlong)iVar6 * 0x18;
    iVar3 = FAnimTrack::GetSegmentIndexAtTime(lVar2 + 8,fVar8);
    *(int *)((longlong)param_1 + 0x14) = iVar3;
    if (iVar3 != -1) {
      plVar4 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(lVar2 + 8));
      param_1[5] = *plVar4;
      *(int *)((longlong)param_1 + 0x1c) = (int)plVar4[1];
      uVar7 = FAnimSegment::GetLength();
      *(undefined4 *)(param_1 + 4) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00014225b0ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1,fVar8,0);
      return;
    }
    if (param_1[5] == 0) {
      *(float *)((longlong)param_1 + 0x24) = fVar8;
      FUN_14225af80(param_1,0);
      param_1[5] = 0;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0xbf800000;
      *(undefined4 *)(param_1 + 4) = 0xbf800000;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 14225b140 FUN_14225b140 body=975 status=ok
// SIG undefined FUN_14225b140(void)

void FUN_14225b140(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *local_res8;
  
  lVar6 = param_1[4];
  if (lVar6 != 0) {
    lVar5 = FUN_142a07000();
    lVar6 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar6 = param_1[0x72];
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar6;
  }
  if (*(int *)(lVar6 + 0x5f8) != 0) {
    while( true ) {
      plVar10 = *(longlong **)(lVar6 + 0x5e0);
      plVar1 = plVar10 + *(int *)(lVar6 + 0x5e8);
      if (plVar10 == plVar1) break;
      while (*plVar10 != **(longlong **)(lVar6 + 0x5f0)) {
        plVar10 = plVar10 + 1;
        if (plVar10 == plVar1) goto LAB_14225b2fd;
      }
      lVar5 = param_1[4];
      if (lVar5 != 0) {
        lVar14 = FUN_142a07000();
        lVar5 = *(longlong *)(lVar5 + 0x10);
        if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar14 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
            lVar14 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_1423b2d70(param_1[4],1);
        }
      }
      lVar5 = param_1[0x72];
      if (lVar5 == 0) {
        lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
        param_1[0x72] = lVar5;
      }
      iVar13 = *(int *)(lVar5 + 0x5f8);
      if (iVar13 != 0) {
        plVar1 = *(longlong **)(lVar5 + 0x5f0);
        local_res8 = (longlong *)*plVar1;
        if (local_res8 != (longlong *)0x0) {
          if (iVar13 + -1 != 0) {
            _guard_xfg_dispatch_icall_nop(plVar1,plVar1 + 1,(longlong)(iVar13 + -1) << 3);
            iVar13 = *(int *)(lVar5 + 0x5f8);
          }
          *(int *)(lVar5 + 0x5f8) = iVar13 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar5 + 0x5f0);
          TArray<FName,FDefaultAllocator>::Remove(lVar5 + 0x5e0,&local_res8);
          if (local_res8 != (longlong *)0x0) {
            (**(code **)(*local_res8 + 0x78))(local_res8,1);
          }
        }
      }
      if (*(int *)(lVar6 + 0x5f8) == 0) break;
    }
  }
LAB_14225b2fd:
  plVar1 = (longlong *)(lVar6 + 0x5e0);
LAB_14225b310:
  plVar12 = (longlong *)*plVar1;
  plVar10 = plVar12 + *(int *)(lVar6 + 0x5e8);
  do {
    if (plVar12 == plVar10) {
      iVar13 = *(int *)(lVar6 + 0x5e8) + -1;
      if (-1 < iVar13) {
        lVar5 = (longlong)iVar13 * 8;
        lVar15 = (longlong)*(int *)(lVar6 + 0x5e8) << 3;
        lVar14 = lVar5;
        do {
          plVar10 = *(longlong **)(lVar14 + *plVar1);
          lVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if (lVar7 == 0) {
            iVar4 = *(int *)(lVar6 + 0x5e8);
            iVar11 = (iVar4 - iVar13) + -1;
            if (iVar11 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar5 + *plVar1),(void *)(lVar15 + *plVar1),(longlong)iVar11 << 3)
              ;
              iVar4 = *(int *)(lVar6 + 0x5e8);
            }
            *(int *)(lVar6 + 0x5e8) = iVar4 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
            (**(code **)(*plVar10 + 0x78))(plVar10);
          }
          lVar15 = lVar15 + -8;
          lVar5 = lVar5 + -8;
          lVar14 = lVar14 + -8;
          iVar13 = iVar13 + -1;
        } while (-1 < iVar13);
      }
      plVar10 = *(longlong **)(lVar6 + 0xd8);
      if ((plVar10 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar10 + 0xd8))(plVar10), cVar3 == '\0')) {
        return;
      }
      iVar13 = *(int *)(lVar6 + 0x5e8);
      do {
        if (iVar13 == 0) {
          return;
        }
        if (plVar10 == (longlong *)0x0) {
          return;
        }
        lVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if (lVar5 == 0) {
LAB_14225b4be:
          lVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if (lVar5 == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            uVar8 = (**(code **)(*plVar10 + 0xc0))(plVar10);
            plVar10 = (longlong *)
                      TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                      ::GetBoundProgramCounterForTimerManager(uVar8);
          }
        }
        else {
          uVar8 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          lVar5 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                  ::GetBoundProgramCounterForTimerManager(uVar8);
          if (lVar5 == 0) goto LAB_14225b4be;
          lVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if (lVar5 == 0) {
            lVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar10 + 0xc0))(plVar10);
            lVar5 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                    ::GetBoundProgramCounterForTimerManager(uVar8);
          }
          plVar9 = (longlong *)*plVar1;
          plVar12 = plVar9 + *(int *)(lVar6 + 0x5e8);
          while( true ) {
            if (plVar9 == plVar12) goto LAB_14225b4be;
            if (*plVar9 == lVar5) break;
            plVar9 = plVar9 + 1;
          }
          FUN_14227d590(param_1);
        }
        iVar13 = *(int *)(lVar6 + 0x5e8);
      } while( true );
    }
    if (*plVar12 == *(longlong *)(lVar6 + 0xd8)) break;
    plVar12 = plVar12 + 1;
  } while( true );
  FUN_14227a1d0(param_1);
  goto LAB_14225b310;
}



// FUNCTION 14225b510 Clear body=51 status=ok
// SIG undefined Clear(void)

void FAnimLinkableElement::Clear(longlong param_1)

{
  FUN_14225af80(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x20) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}



// FUNCTION 14225b550 FUN_14225b550 body=567 status=ok
// SIG undefined FUN_14225b550(void)

void FUN_14225b550(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  int local_res8 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  plVar7 = (longlong *)(param_1 + 0x88);
  if (*param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0xb0);
    puStack_30 = (uint *)(param_1 + 0x98);
    local_68 = 0x100000000;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar1 != 0) {
      puVar9 = *(uint **)(param_1 + 0xa8);
      if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
        puVar9 = puStack_30;
      }
      uVar3 = *puVar9;
      uStack_50 = 0;
      iVar4 = 0;
      while (uVar3 == 0) {
        uStack_50 = uStack_50 + 0x20;
        uVar8 = (ulonglong)local_68 >> 0x20;
        local_68 = CONCAT44((int)uVar8,iVar4 + 1);
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14225b67f;
        uVar3 = puVar9[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar3 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      local_68 = CONCAT44(uVar3,(undefined4)local_68);
      if (uVar3 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar1 < local_58._4_4_) {
LAB_14225b67f:
        local_58._4_4_ = iVar1;
      }
    }
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    iStack_20 = uStack_50;
    uStack_38 = local_68;
    uStack_60 = local_68;
    local_48 = uStack_50;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar2 = local_58._4_4_ < iVar1;
    local_40 = plVar7;
    local_58 = puStack_30;
    if (bVar2) {
      do {
        if (*(longlong **)(*plVar7 + 8 + (longlong)iStack_4c * 0x18) == param_2) break;
        uStack_50 = uStack_50 & ~uStack_60._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(plVar7,local_res8,*param_2);
    puVar6 = (undefined8 *)0x0;
    if (local_res8[0] != -1) {
      puVar6 = (undefined8 *)(*plVar7 + (longlong)local_res8[0] * 0x18);
    }
    puVar5 = puVar6 + 1;
    if (puVar6 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    local_58 = (uint *)CONCAT44(local_58._4_4_,(undefined4)local_58);
    if ((puVar5 != (undefined8 *)0x0) &&
       (local_58 = (uint *)CONCAT44(local_58._4_4_,(undefined4)local_58),
       (longlong *)*puVar5 == param_2)) {
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(plVar7,*param_2);
      local_58 = (uint *)CONCAT44(local_58._4_4_,(undefined4)local_58);
    }
  }
  uVar8 = 0;
  if (*(longlong **)(param_1 + 0x338) == param_2) {
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  FAnimMontageInstance::MontageSync_StopFollowing(param_2);
  plVar7 = (longlong *)param_2[0x32];
  uVar10 = (longlong)(int)param_2[0x33] & 0x1fffffffffffffff;
  if (plVar7 + (int)param_2[0x33] < plVar7) {
    uVar10 = uVar8;
  }
  if (uVar10 != 0) {
    do {
      if (*plVar7 != 0) {
        *(undefined8 *)(*plVar7 + 0x1a0) = 0;
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar10);
  }
  *(undefined4 *)(param_2 + 0x33) = 0;
  if (*(int *)((longlong)param_2 + 0x19c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0x32,0);
  }
  return;
}



// FUNCTION 14225b7a0 ClearObjects body=17 status=ok
// SIG undefined ClearObjects(void)

void FAnimInstanceProxy::ClearObjects(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 14225b7c0 FUN_14225b7c0 body=516 status=ok
// SIG undefined FUN_14225b7c0(void)

void FUN_14225b7c0(longlong param_1)

{
  float *pfVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  longlong lVar14;
  undefined8 uVar15;
  bool bVar16;
  longlong lVar17;
  float *pfVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined4 uStack_3c;
  
  plVar2 = (longlong *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x154)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar2,0);
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    iVar11 = *(int *)(param_1 + 0x140);
    if ((iVar11 < 0) || (*(int *)(param_1 + 0x180) <= iVar11)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (bVar16) {
      pfVar13 = *(float **)(*(longlong *)(param_1 + 0x178) + 8 + (longlong)iVar11 * 0x18);
      iVar11 = *(int *)(*(longlong *)(param_1 + 0x178) + 0x10 + (longlong)iVar11 * 0x18);
      if (pfVar13 != pfVar13 + (longlong)iVar11 * 8) {
        pfVar18 = pfVar13 + 3;
        do {
          lVar14 = *(longlong *)(pfVar18 + -3);
          if (lVar14 != 0) {
            lVar17 = UAnimMontage::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
              bVar16 = false;
            }
            else {
              bVar16 = true;
            }
            if ((bVar16) && (0 < *(int *)(lVar14 + 0x1a8))) {
              puVar20 = *(undefined8 **)(lVar14 + 0x1a0);
              puVar21 = puVar20 + (longlong)*(int *)(lVar14 + 0x1a8) * 2;
              for (; puVar20 != puVar21; puVar20 = puVar20 + 2) {
                fVar4 = *pfVar18;
                if ((fVar4 <= *(float *)(puVar20 + 1)) &&
                   (fVar5 = pfVar18[1], *(float *)(puVar20 + 1) <= fVar5)) {
                  iVar19 = 0;
                  fVar6 = pfVar18[2];
                  if (0 < (int)pfVar18[3]) {
                    do {
                      uVar15 = *puVar20;
                      fVar7 = *(float *)(puVar20 + 1);
                      fVar8 = *pfVar18;
                      iVar12 = *(int *)(param_1 + 0x150);
                      fVar22 = (float)iVar19;
                      fVar9 = pfVar18[2];
                      fVar10 = pfVar18[-1];
                      *(int *)(param_1 + 0x150) = iVar12 + 1;
                      if (*(int *)(param_1 + 0x154) < iVar12 + 1) {
                        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar12);
                      }
                      iVar19 = iVar19 + 1;
                      puVar3 = (undefined8 *)(*plVar2 + (longlong)iVar12 * 0x10);
                      *puVar3 = uVar15;
                      puVar3[1] = CONCAT44(uStack_3c,
                                           (fVar7 - fVar8) * fVar9 + fVar10 +
                                           fVar22 * (fVar5 - fVar4) * fVar6);
                    } while (iVar19 < (int)pfVar18[3]);
                  }
                }
              }
            }
          }
          pfVar1 = pfVar18 + 5;
          pfVar18 = pfVar18 + 8;
        } while (pfVar1 != pfVar13 + (longlong)iVar11 * 8);
      }
      FMarkerSyncData::CollectUniqueNames(plVar2);
    }
  }
  return;
}



// FUNCTION 14225b9d0 FUN_14225b9d0 body=377 status=ok
// SIG undefined FUN_14225b9d0(void)

void FUN_14225b9d0(longlong *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1[1] + 0x94) * *(float *)(*param_1 + 300);
  if (fVar6 != *(float *)((longlong)param_1 + 0x14)) {
    *(undefined1 *)((longlong)param_1 + 0x31) = 0;
    *(float *)((longlong)param_1 + 0x14) = fVar6;
    *(bool *)(param_1 + 4) = 0.0 < fVar6;
    FTimeStretchCurveInstance::InitializeFromPlayRate(param_1 + 0xc,fVar6,param_1[1] + 0x1c0);
    uVar2 = *(uint *)(param_1[1] + 0x170);
    uVar5 = (ulonglong)uVar2;
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0x44) < (int)uVar2) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 7,uVar2);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(uint *)((longlong)param_1 + 0x44) != uVar2) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 7,uVar2);
    }
    uVar4 = uVar5;
    if (0 < (int)uVar2) {
      do {
        iVar3 = (int)param_1[8];
        *(int *)(param_1 + 8) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 7,iVar3);
        }
        puVar1 = (undefined4 *)(param_1[7] + (longlong)iVar3 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0xbf800000;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    *(undefined4 *)(param_1 + 10) = 0;
    if (*(int *)((longlong)param_1 + 0x54) < (int)uVar2) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 9,uVar2);
    }
    *(undefined4 *)(param_1 + 10) = 0;
    if (*(uint *)((longlong)param_1 + 0x54) != uVar2) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 9,uVar2);
    }
    if (0 < (int)uVar2) {
      do {
        iVar3 = (int)param_1[10];
        *(int *)(param_1 + 10) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x54) < iVar3 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 9,iVar3);
        }
        puVar1 = (undefined4 *)(param_1[9] + (longlong)iVar3 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0xbf800000;
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    *(char *)((longlong)param_1 + 0x31) = (char)param_1[0xc];
  }
  return;
}



// FUNCTION 14225bb50 FUN_14225bb50 body=171 status=ok
// SIG undefined FUN_14225bb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_14225bb50(longlong param_1,undefined1 *param_2,float param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_3 < 1e-05) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    uVar9 = uRam0000000146aeef4c;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(uint *)(param_2 + 0x1c) = uVar9;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    uVar9 = uRam0000000146aeef44 & uRam0000000146aeef54;
    uVar10 = uRam0000000146aeef48 & uRam0000000146aeef58;
    uVar11 = uRam0000000146aeef4c & uRam0000000146aeef5c;
    *(uint *)(param_2 + 0x30) = _DAT_146aeef40 & _DAT_146aeef50;
    *(uint *)(param_2 + 0x34) = uVar9;
    *(uint *)(param_2 + 0x38) = uVar10;
    *(uint *)(param_2 + 0x3c) = uVar11;
    return param_2;
  }
  if (0.99999 < param_3) {
    uVar2 = *(undefined1 *)(param_1 + 0x350);
    uVar1 = *(undefined4 *)(param_1 + 0x354);
    uVar3 = *(undefined8 *)(param_1 + 0x360);
    uVar4 = *(undefined8 *)(param_1 + 0x368);
    uVar5 = *(undefined8 *)(param_1 + 0x370);
    uVar6 = *(undefined8 *)(param_1 + 0x378);
    uVar7 = *(undefined8 *)(param_1 + 0x380);
    uVar8 = *(undefined8 *)(param_1 + 0x388);
    *(undefined1 *)(param_1 + 0x350) = 0;
    *(undefined4 *)(param_1 + 0x354) = 0;
    *param_2 = uVar2;
    *(undefined4 *)(param_2 + 4) = uVar1;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + 0x18) = uVar4;
    *(undefined8 *)(param_2 + 0x20) = uVar5;
    *(undefined8 *)(param_2 + 0x28) = uVar6;
    *(undefined8 *)(param_2 + 0x30) = uVar7;
    *(undefined8 *)(param_2 + 0x38) = uVar8;
    return param_2;
  }
  FUN_14225bc00();
  return param_2;
}



// FUNCTION 14225bc00 FUN_14225bc00 body=522 status=ok
// SIG undefined FUN_14225bc00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_14225bc00(longlong param_1,undefined1 *param_2,float param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  float *pfVar5;
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
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  pfVar1 = (float *)(param_1 + 0x10);
  local_78 = *(float *)(param_1 + 0x20) * param_3;
  fStack_74 = *(float *)(param_1 + 0x24) * param_3;
  fStack_70 = *(float *)(param_1 + 0x28) * param_3;
  fStack_6c = *(float *)(param_1 + 0x2c) * param_3;
  fVar24 = *pfVar1 * param_3;
  fVar25 = *(float *)(param_1 + 0x14) * param_3;
  fVar26 = *(float *)(param_1 + 0x18) * param_3;
  param_3 = *(float *)(param_1 + 0x1c) * param_3;
  local_68._4_4_ = DAT_146531a94;
  local_68._0_4_ = DAT_146531a90;
  local_68._8_4_ = DAT_146531a98;
  local_68._12_4_ = 0;
  auVar6._0_4_ = fVar24 * fVar24 + fVar26 * fVar26;
  auVar6._4_4_ = fVar25 * fVar25 + param_3 * param_3;
  auVar6._8_4_ = fVar26 * fVar26 + fVar24 * fVar24;
  auVar6._12_4_ = param_3 * param_3 + fVar25 * fVar25;
  fVar16 = auVar6._4_4_ + auVar6._0_4_;
  fVar18 = auVar6._8_4_ + auVar6._4_4_;
  fVar19 = auVar6._12_4_ + auVar6._8_4_;
  fVar20 = auVar6._0_4_ + auVar6._12_4_;
  auVar2._4_4_ = fVar18;
  auVar2._0_4_ = fVar16;
  auVar2._8_4_ = fVar19;
  auVar2._12_4_ = fVar20;
  auVar7 = rsqrtps(auVar6,auVar2);
  fVar8 = auVar7._0_4_;
  fVar10 = auVar7._4_4_;
  fVar12 = auVar7._8_4_;
  fVar14 = auVar7._12_4_;
  fVar8 = (_DAT_146aeef30 - fVar8 * fVar8 * _DAT_146aeef30 * fVar16) * fVar8 + fVar8;
  fVar10 = (fRam0000000146aeef34 - fVar10 * fVar10 * fRam0000000146aeef34 * fVar18) * fVar10 +
           fVar10;
  fVar12 = (fRam0000000146aeef38 - fVar12 * fVar12 * fRam0000000146aeef38 * fVar19) * fVar12 +
           fVar12;
  fVar14 = (fRam0000000146aeef3c - fVar14 * fVar14 * fRam0000000146aeef3c * fVar20) * fVar14 +
           fVar14;
  local_88 = ((uint)(((_DAT_146aeef30 - fVar8 * fVar8 * _DAT_146aeef30 * fVar16) * fVar8 + fVar8) *
                    fVar24) ^ _DAT_146aeef20) & -(uint)(_DAT_146aeef60 <= fVar16) ^ _DAT_146aeef20;
  uStack_84 = ((uint)(((fRam0000000146aeef34 - fVar10 * fVar10 * fRam0000000146aeef34 * fVar18) *
                       fVar10 + fVar10) * fVar25) ^ uRam0000000146aeef24) &
              -(uint)(fRam0000000146aeef64 <= fVar18) ^ uRam0000000146aeef24;
  uStack_80 = ((uint)(((fRam0000000146aeef38 - fVar12 * fVar12 * fRam0000000146aeef38 * fVar19) *
                       fVar12 + fVar12) * fVar26) ^ uRam0000000146aeef28) &
              -(uint)(fRam0000000146aeef68 <= fVar19) ^ uRam0000000146aeef28;
  uStack_7c = ((uint)(((fRam0000000146aeef3c - fVar14 * fVar14 * fRam0000000146aeef3c * fVar20) *
                       fVar14 + fVar14) * param_3) ^ uRam0000000146aeef2c) &
              -(uint)(fRam0000000146aeef6c <= fVar20) ^ uRam0000000146aeef2c;
  pfVar5 = (float *)FUN_14162bcf0(pfVar1,local_58,&local_88);
  fVar20 = fRam0000000146aeef3c;
  fVar19 = fRam0000000146aeef38;
  fVar18 = fRam0000000146aeef34;
  fVar16 = _DAT_146aeef30;
  fVar8 = *pfVar5;
  fVar10 = pfVar5[1];
  fVar12 = pfVar5[2];
  fVar14 = pfVar5[3];
  *pfVar1 = fVar8;
  *(float *)(param_1 + 0x14) = fVar10;
  *(float *)(param_1 + 0x18) = fVar12;
  *(float *)(param_1 + 0x1c) = fVar14;
  uVar4 = *(undefined8 *)(pfVar5 + 6);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(pfVar5 + 4);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  auVar7 = *(undefined1 (*) [16])(pfVar5 + 8);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar7;
  fVar9 = fVar8 * fVar8 + fVar12 * fVar12;
  fVar11 = fVar10 * fVar10 + fVar14 * fVar14;
  fVar13 = fVar12 * fVar12 + fVar8 * fVar8;
  fVar24 = fVar14 * fVar14 + fVar10 * fVar10;
  fVar17 = fVar11 + fVar9;
  fVar11 = fVar13 + fVar11;
  fVar13 = fVar24 + fVar13;
  fVar9 = fVar9 + fVar24;
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar17;
  auVar3._8_4_ = fVar13;
  auVar3._12_4_ = fVar9;
  auVar7 = rsqrtps(auVar7,auVar3);
  fVar24 = auVar7._0_4_;
  fVar25 = auVar7._4_4_;
  fVar26 = auVar7._8_4_;
  fVar15 = auVar7._12_4_;
  fVar24 = (fVar16 - fVar24 * fVar24 * fVar17 * fVar16) * fVar24 + fVar24;
  fVar25 = (fVar18 - fVar25 * fVar25 * fVar11 * fVar18) * fVar25 + fVar25;
  fVar26 = (fVar19 - fVar26 * fVar26 * fVar13 * fVar19) * fVar26 + fVar26;
  fVar15 = (fVar20 - fVar15 * fVar15 * fVar9 * fVar20) * fVar15 + fVar15;
  uVar21 = ((uint)(((fVar18 - fVar25 * fVar25 * fVar11 * fVar18) * fVar25 + fVar25) * fVar10) ^
           uRam0000000146aeef24) & -(uint)(fRam0000000146aeef64 <= fVar11) ^ uRam0000000146aeef24;
  uVar22 = ((uint)(((fVar19 - fVar26 * fVar26 * fVar13 * fVar19) * fVar26 + fVar26) * fVar12) ^
           uRam0000000146aeef28) & -(uint)(fRam0000000146aeef68 <= fVar13) ^ uRam0000000146aeef28;
  uVar23 = ((uint)(((fVar20 - fVar15 * fVar15 * fVar9 * fVar20) * fVar15 + fVar15) * fVar14) ^
           uRam0000000146aeef2c) & -(uint)(fRam0000000146aeef6c <= fVar9) ^ uRam0000000146aeef2c;
  *pfVar1 = (float)(((uint)(((fVar16 - fVar24 * fVar24 * fVar17 * fVar16) * fVar24 + fVar24) * fVar8
                           ) ^ _DAT_146aeef20) & -(uint)(_DAT_146aeef60 <= fVar17) ^ _DAT_146aeef20)
  ;
  *(uint *)(param_1 + 0x14) = uVar21;
  *(uint *)(param_1 + 0x18) = uVar22;
  *(uint *)(param_1 + 0x1c) = uVar23;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = 1;
  *(ulonglong *)(param_2 + 0x10) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(param_2 + 0x18) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(param_2 + 0x30) = local_68._0_8_;
  *(undefined8 *)(param_2 + 0x38) = local_68._8_8_;
  *(ulonglong *)(param_2 + 0x20) = CONCAT44(fStack_74,local_78);
  *(ulonglong *)(param_2 + 0x28) = CONCAT44(fStack_6c,fStack_70);
  auVar7._4_4_ = DAT_146531a94;
  auVar7._0_4_ = DAT_146531a90;
  auVar7._8_4_ = DAT_146531a98;
  auVar7._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x30) = auVar7;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  return param_2;
}



// FUNCTION 14225be10 FUN_14225be10 body=176 status=ok
// SIG undefined FUN_14225be10(void)

undefined8 FUN_14225be10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)*param_2;
  iVar3 = (int)param_2[1];
  plVar1 = plVar6 + iVar3;
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    if (*plVar6 == param_1) {
      return 1;
    }
  }
  *(int *)(param_2 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
  }
  *(longlong *)((longlong)iVar3 * 8 + *param_2) = param_1;
  lVar5 = *(longlong *)(param_1 + 0x178);
  lVar2 = lVar5 + (longlong)*(int *)(param_1 + 0x180) * 0x18;
  while( true ) {
    if (lVar5 == lVar2) {
      return 0;
    }
    cVar4 = FUN_14224bd60(lVar5 + 8,param_2);
    if (cVar4 != '\0') break;
    lVar5 = lVar5 + 0x18;
  }
  return 1;
}



// FUNCTION 14225bec0 FUN_14225bec0 body=845 status=ok
// SIG undefined FUN_14225bec0(void)

void FUN_14225bec0(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined **local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined2 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined2 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  
  if (0 < *(int *)(param_1 + 400)) {
    lVar10 = *(longlong *)(param_1 + 0x188);
    uVar9 = (ulonglong)*(int *)(param_1 + 400);
    lVar11 = uVar9 * 0x40 + lVar10;
    if (lVar10 != lVar11) {
      do {
        if (*(float *)(lVar10 + 0x38) == 0.0) {
          cVar4 = *(char *)(lVar10 + 0x19);
          if (cVar4 == '\0') {
LAB_14225bf92:
            fVar13 = *(float *)(lVar10 + 0x24);
          }
          else if (cVar4 == '\x01') {
            fVar13 = *(float *)(lVar10 + 0x24) + *(float *)(lVar10 + 0x1c);
          }
          else {
            if (cVar4 != '\x02') goto LAB_14225bf92;
            fVar13 = *(float *)(lVar10 + 0x24) * *(float *)(lVar10 + 0x20) +
                     *(float *)(lVar10 + 0x1c);
          }
        }
        else {
          FUN_14225af80(lVar10,0);
          fVar13 = *(float *)(lVar10 + 0x38);
          *(undefined8 *)(lVar10 + 0x28) = 0;
          *(undefined4 *)(lVar10 + 0x1c) = 0xbf800000;
          *(undefined4 *)(lVar10 + 0x20) = 0xbf800000;
          *(undefined4 *)(lVar10 + 0x14) = 0xffffffff;
        }
        FUN_142277610(lVar10,param_1,fVar13,0);
        lVar10 = lVar10 + 0x40;
      } while (lVar10 != lVar11);
      uVar9 = (ulonglong)*(uint *)(param_1 + 400);
    }
    lVar10 = *(longlong *)(param_1 + 0x188);
    lVar11 = (longlong)(int)uVar9 * 0x40 + lVar10;
    if (lVar10 != lVar11) {
      plVar1 = (longlong *)(param_1 + 0x80);
      do {
        iVar5 = *(int *)(param_1 + 0x88);
        cVar4 = *(char *)(lVar10 + 0x19);
        fVar13 = *(float *)(lVar10 + 0x1c);
        fVar2 = *(float *)(lVar10 + 0x20);
        fVar14 = *(float *)(lVar10 + 0x24);
        uVar6 = *(undefined8 *)(lVar10 + 0x30);
        fVar3 = *(float *)(lVar10 + 0x3c);
        local_128 = &PTR__scalar_deleting_destructor__145013ea0;
        local_f8 = 0;
        uStack_f0 = 0x3727c5ac00000000;
        local_120 = 0;
        local_118 = 0;
        local_114 = 0xffffffff;
        local_110 = 0;
        local_10c = 0;
        local_104 = 0;
        local_100 = 0;
        local_e8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        local_c8 = &PTR_FUN_14410b0e0;
        local_c0 = 0;
        local_b8 = 0;
        local_b4 = 0xffffffff;
        local_b0 = 0;
        local_ac = 0;
        local_a4 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_94 = 0x3f800000;
        local_90 = 0;
        local_8c = 0;
        local_88 = 1;
        local_84 = 0;
        *(int *)(param_1 + 0x88) = iVar5 + 1;
        if (*(int *)(param_1 + 0x8c) < iVar5 + 1) {
          TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
        }
        FAnimNotifyEvent::FAnimNotifyEvent(*plVar1 + (longlong)iVar5 * 0xa8,&local_128);
        lVar12 = (longlong)iVar5 * 0xa8 + *plVar1;
        *(undefined8 *)(lVar12 + 0x40) = uVar6;
        if (cVar4 != '\0') {
          if (cVar4 != '\x01') {
            if (cVar4 != '\x02') goto LAB_14225c11f;
            fVar14 = fVar14 * fVar2;
          }
          fVar14 = fVar14 + fVar13;
        }
LAB_14225c11f:
        FUN_142277610(lVar12,param_1,fVar3 + fVar14,0);
        *(undefined2 *)(lVar12 + 0x90) = 0x101;
        lVar10 = lVar10 + 0x40;
        *(undefined8 *)(lVar12 + 0x48) = 0;
        *(undefined8 *)(lVar12 + 0x50) = 0;
      } while (lVar10 != lVar11);
      uVar9 = (ulonglong)*(uint *)(param_1 + 400);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x188);
    uVar8 = (uint)uVar9;
    while (uVar8 != 0) {
      *puVar7 = &PTR_FUN_14410b0e0;
      puVar7 = puVar7 + 8;
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar8;
    }
    *(undefined4 *)(param_1 + 400) = 0;
    if (*(int *)(param_1 + 0x194) != 0) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0x188),0);
    }
    FUN_14227c940(param_1);
  }
  return;
}



// FUNCTION 14225c210 FUN_14225c210 body=86 status=ok
// SIG undefined FUN_14225c210(void)

void FUN_14225c210(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  param_1 = param_1 + 0x1d8;
  lVar1 = 3;
  param_2 = param_2 - param_1;
  do {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    operator=(param_1,param_2 + 0x1d8 + param_1);
    param_1 = param_1 + 0x50;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14225c270 CreateAnimInstanceProxy body=46 status=ok
// SIG undefined CreateAnimInstanceProxy(void)

void UAnimSingleNodeInstance::CreateAnimInstanceProxy(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x6c0);
  if (lVar1 != 0) {
    FUN_14083cb80(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 14225c2a0 FUN_14225c2a0 body=1057 status=ok
// SIG undefined FUN_14225c2a0(void)

longlong FUN_14225c2a0(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                      undefined8 param_5,float param_6,undefined4 param_7)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 local_res8;
  float fStack_ac;
  undefined **local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 local_90;
  undefined8 local_8c;
  float local_84;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  
  if (param_1 != (longlong *)0x0) {
    lVar11 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) {
      lVar11 = 0;
      local_res8 = 0;
      if (param_2 != 0) {
        lVar3 = param_1[7];
        cVar8 = (**(code **)(*param_1 + 0x338))(param_1);
        if (cVar8 != '\0') {
          if (DAT_146aef098 != 0) {
            iVar14 = DAT_146aef098 + -1;
            lVar4 = *(longlong *)(DAT_146aef090 + (longlong)iVar14 * 8);
            iVar9 = (DAT_146aef098 - iVar14) + -1;
            if (iVar9 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(DAT_146aef090 + (longlong)iVar14 * 8),
                         (void *)(DAT_146aef090 + (longlong)DAT_146aef098 * 8),(longlong)iVar9 << 3)
              ;
            }
            DAT_146aef098 = DAT_146aef098 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_146aef090);
            iVar9 = *(int *)(lVar4 + 0xc);
            if (iVar9 < (int)DAT_1469e91c4) {
              uVar13 = iVar9 >> 0x1f & 0xffff;
              uVar10 = iVar9 + uVar13;
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                       (longlong)(int)((uVar10 & 0xffff) - uVar13) * 0x18;
            }
            *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) & 0xbfffffff;
            UAnimationAsset::SetSkeleton(lVar4,lVar3);
            puVar5 = (undefined8 *)(*(longlong **)(lVar4 + 0x178))[1];
            **(longlong **)(lVar4 + 0x178) = param_2;
            *puVar5 = param_1;
            *(int *)(puVar5 + 2) = (int)param_1[0x12];
            *(float *)(puVar5 + 3) = param_6;
            uVar15 = FAnimSegment::GetLength();
            plVar6 = *(longlong **)(lVar4 + 0x168);
            *(undefined4 *)(lVar4 + 0x90) = uVar15;
            FAnimLinkableElement::LinkSequence(plVar6,param_1,(int)param_1[0x12]);
            (**(code **)(*plVar6 + 8))(plVar6,0,0);
            FAlphaBlend::SetBlendTime(lVar4 + 0xb8,param_3);
            FAlphaBlend::SetBlendTime(lVar4 + 0xf8,param_4);
            *(undefined4 *)(lVar4 + 0x134) = param_7;
            return lVar4;
          }
          uVar12 = GetTransientPackage();
          lVar11 = FUN_142254910(uVar12);
          UAnimationAsset::SetSkeleton(lVar11,lVar3);
          plVar6 = *(longlong **)(lVar11 + 0x178);
          *plVar6 = param_2;
          fVar2 = *(float *)(param_1 + 0x12);
          fStack_ac = (float)CONCAT31(fStack_ac._1_3_,1);
          fVar16 = 1.0;
          if (1e-08 < ABS(*(float *)((longlong)param_1 + 0x94))) {
            fVar16 = *(float *)((longlong)param_1 + 0x94);
          }
          *(float *)(lVar11 + 0x90) = ((float)(int)param_6 * fVar2) / ABS(fVar16);
          iVar9 = (int)plVar6[2];
          *(int *)(plVar6 + 2) = iVar9 + 1;
          if (*(int *)((longlong)plVar6 + 0x14) < iVar9 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(plVar6 + 1,iVar9);
          }
          lVar3 = plVar6[1];
          puVar5 = (undefined8 *)((longlong)iVar9 * 0x20 + lVar3);
          *puVar5 = param_1;
          puVar5[1] = 0;
          pfVar1 = (float *)((longlong)iVar9 * 0x20 + 0x10 + lVar3);
          *pfVar1 = fVar2;
          pfVar1[1] = 1.0;
          pfVar1[2] = param_6;
          pfVar1[3] = fStack_ac;
          local_a0 = 0;
          local_a8 = &PTR_FUN_14501bd70;
          local_98 = 0;
          local_94 = 0xffffffff;
          local_90 = 0;
          local_8c = 0;
          local_84 = 0.0;
          local_80 = (longlong *)0x0;
          local_70 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          FName::FName(&local_res8,L"Default",1);
          fVar2 = *(float *)(param_1 + 0x12);
          local_78 = local_res8;
          if (0.0 < fVar2) {
            local_8c = CONCAT44(fVar2,(float)local_8c);
            local_94 = 0;
            local_80 = param_1;
            (*(code *)local_a8[1])(&local_a8,fVar2,0);
          }
          if (local_90._1_1_ == '\0') {
            local_84 = 0.0;
          }
          else if (local_90._1_1_ == '\x01') {
            local_84 = -(float)local_8c;
          }
          else if (local_90._1_1_ == '\x02') {
            local_84 = -((float)local_8c / local_8c._4_4_);
          }
          iVar9 = *(int *)(lVar11 + 0x170);
          *(int *)(lVar11 + 0x170) = iVar9 + 1;
          if (*(int *)(lVar11 + 0x174) < iVar9 + 1) {
            TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(lVar11 + 0x168,iVar9);
          }
          FCompositeSection::FCompositeSection
                    ((longlong)iVar9 * 0x58 + *(longlong *)(lVar11 + 0x168),&local_a8);
          FAlphaBlend::SetBlendTime(lVar11 + 0xb8,param_3);
          FAlphaBlend::SetBlendTime(lVar11 + 0xf8,param_4);
          *(undefined4 *)(lVar11 + 0x134) = param_7;
          if (local_60 == 0) {
            return lVar11;
          }
          FMemory::Free();
          return lVar11;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14225c6d0 FUN_14225c6d0 body=380 status=ok
// SIG undefined FUN_14225c6d0(void)

undefined8 * FUN_14225c6d0(longlong param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_3 = 0;
  if (-1 < param_2) {
    plVar3 = (longlong *)(param_1 + 0x118 + (longlong)*(int *)(param_1 + 0x1c8) * 0x10);
    iVar1 = (int)plVar3[1];
    while (iVar1 <= param_2) {
      *(int *)(plVar3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
        TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                  (plVar3,iVar1);
      }
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x78 + *plVar3);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0xffffffff;
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined1 *)(puVar2 + 5) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        *(undefined4 *)(puVar2 + 10) = 0;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        *(undefined4 *)(puVar2 + 0xd) = 0;
        puVar2[0xe] = &DAT_146aef328;
      }
      iVar1 = (int)plVar3[1];
    }
    plVar3 = (longlong *)(*plVar3 + (longlong)param_2 * 0x78);
    *param_3 = plVar3;
    if (plVar3 != (longlong *)0x0) goto LAB_14225c7c5;
  }
  plVar3 = (longlong *)(param_1 + 0xf8 + (longlong)*(int *)(param_1 + 0x1c8) * 0x10);
LAB_14225c7c5:
  iVar1 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x50 + *plVar3);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(byte *)((longlong)puVar2 + 0x1d) = *(byte *)((longlong)puVar2 + 0x1d) & 0xfa | 2;
    puVar2[2] = 0x3f800000;
    *(undefined4 *)(puVar2 + 3) = 0x3f800000;
    *(undefined1 *)((longlong)puVar2 + 0x1c) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[8] = 0;
    *(undefined1 *)(puVar2 + 9) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14225c850 FUN_14225c850 body=63 status=ok
// SIG undefined FUN_14225c850(void)

void FUN_14225c850(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = *(char **)(param_1 + 0x408);
  pcVar2 = pcVar1 + (longlong)*(int *)(param_1 + 0x410) * 0x10;
  for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 0x10) {
    if ((*(longlong *)(pcVar1 + 8) == param_2) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
      *(undefined1 *)(param_1 + 0x428) = 1;
    }
  }
  return;
}



// FUNCTION 14225c890 FUN_14225c890 body=198 status=ok
// SIG undefined FUN_14225c890(void)

void FUN_14225c890(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = *(char **)(param_1 + 0x408);
  pcVar4 = pcVar5 + (longlong)*(int *)(param_1 + 0x410) * 0x10;
  do {
    if (pcVar5 == pcVar4) {
      return;
    }
    lVar1 = *(longlong *)(pcVar5 + 8);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x40) != *(int *)(lVar1 + 0x6c))) {
      lVar3 = *(longlong *)(lVar1 + 0x78);
      if (*(longlong *)(lVar1 + 0x78) == 0) {
        lVar3 = lVar1 + 0x70;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                               (longlong)*(int *)(lVar1 + 0x80) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar2 * 0x10) == param_2) {
            if ((iVar2 != -1) && (*pcVar5 != '\0')) {
              *pcVar5 = '\0';
              *(undefined1 *)(param_1 + 0x428) = 1;
            }
            break;
          }
          iVar2 = *(int *)(*(longlong *)(lVar1 + 0x38) + 8 + (longlong)iVar2 * 0x10);
        } while (iVar2 != -1);
      }
    }
    pcVar5 = pcVar5 + 0x10;
  } while( true );
}



// FUNCTION 14225c960 FUN_14225c960 body=390 status=ok
// SIG undefined FUN_14225c960(void)

void FUN_14225c960(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    lVar4 = FUN_142a07000();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  FUN_142282da0(param_1,*(undefined4 *)(lVar5 + 0xc0));
  FUN_1422838e0(param_1);
  iVar6 = (int)param_1[0x10];
  iVar8 = 0;
  if (0 < iVar6) {
    iVar7 = 1;
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + param_1[0xf]);
      if ((plVar1 != (longlong *)0x0) && (*plVar1 == 0)) {
        FUN_14225b550(param_1,plVar1);
        FUN_142255e70(plVar1,1);
        iVar6 = (int)param_1[0x10];
        iVar3 = (iVar6 - iVar8) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[0xf] + (longlong)iVar8 * 8),
                     (void *)(param_1[0xf] + (longlong)iVar7 * 8),(longlong)iVar3 << 3);
          iVar6 = (int)param_1[0x10];
        }
        *(int *)(param_1 + 0x10) = iVar6 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0xf);
        iVar6 = (int)param_1[0x10];
        iVar8 = iVar8 + -1;
        iVar7 = iVar7 + -1;
        lVar5 = lVar5 + -8;
        if (iVar6 == 0) {
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0xd,0);
          iVar6 = (int)param_1[0x10];
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar8 < iVar6);
  }
  return;
}



// FUNCTION 14225caf0 FUN_14225caf0 body=498 status=ok
// SIG undefined FUN_14225caf0(void)

void FUN_14225caf0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  (**(code **)(*param_2 + 0x20))(param_2,&DAT_1464aa700);
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x888) == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x888) + 0x40) + 8) + -1;
    }
    if (lVar2 != 0) {
      lVar6 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
    lVar6 = param_1[0x72];
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar6;
    }
    iVar7 = (int)*(short *)(lVar6 + 800);
    iVar5 = (int)*(short *)(lVar6 + 0x310);
    dVar9 = (double)*(float *)(lVar6 + 0xc0);
    FString::PrintfImpl(&local_28,
                        L"LOD(%d/%d) UpdateCounter(%d) EvalCounter(%d) CacheBoneCounter(%d) InitCounter(%d) DeltaSeconds(%.3f)"
                        ,*(undefined4 *)(lVar2 + 0x83c),iVar8,(int)*(short *)(lVar6 + 0x330),
                        (int)*(short *)(lVar6 + 0x340),iVar7,iVar5,dVar9);
    FUN_1428a6fb0(param_2,&local_28,param_3);
    cVar4 = FUN_1423bdc20(lVar2);
    if ((cVar4 != '\0') && (lVar2 = *(longlong *)(lVar2 + 0x8f0), lVar2 != 0)) {
      bVar1 = *(byte *)(lVar2 + 2);
      FString::PrintfImpl(&local_18,L"URO Rate(%d) SkipUpdate(%d) SkipEval(%d) Interp(%d)",
                          *(undefined4 *)(lVar2 + 4),bVar1 >> 3 & 1,bVar1 >> 4 & 1,bVar1 & 1,iVar7,
                          iVar5,dVar9);
      if (local_28 != 0) {
        FMemory::Free();
      }
      local_28 = local_18;
      local_20 = local_10;
      local_1c = local_c;
      FUN_1428a6fb0(param_2,&local_28,param_3);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14225ccf0 FUN_14225ccf0 body=131 status=ok
// SIG undefined FUN_14225ccf0(void)

ulonglong FUN_14225ccf0(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (*(int *)(param_1 + 0x1e0) != *(int *)(param_1 + 0x20c)) {
    lVar3 = *(longlong *)(param_1 + 0x218);
    if (*(longlong *)(param_1 + 0x218) == 0) {
      lVar3 = param_1 + 0x210;
    }
    uVar1 = *(uint *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                              (longlong)*(int *)(param_1 + 0x220) - 1U) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        uVar2 = (ulonglong)uVar1;
        if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)(int)uVar1 * 0x18) == param_2)
        goto LAB_14225cd6c;
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1d8) + 0x10 + (longlong)(int)uVar1 * 0x18);
      } while (uVar1 != 0xffffffff);
    }
  }
  uVar2 = 0xffffffff;
LAB_14225cd6c:
  return CONCAT71((int7)(uVar2 >> 8),(int)uVar2 != -1);
}



// FUNCTION 14225cd80 FUN_14225cd80 body=17 status=ok
// SIG undefined FUN_14225cd80(void)

void FUN_14225cd80(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    iVar1 = 0;
    if ((param_2 != 0) && (iVar1 = FMemory::QuantizeSize((longlong)param_2,0), iVar1 < param_2)) {
      iVar1 = 0x7fffffff;
    }
    if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
      *(int *)((longlong)param_1 + 0xc) = iVar1;
      if ((*param_1 != 0) || (iVar1 != 0)) {
        lVar2 = FMemory::Realloc(*param_1,(longlong)iVar1,0);
        *param_1 = lVar2;
      }
    }
    return;
  }
  return;
}



// FUNCTION 14225cda0 FUN_14225cda0 body=63 status=ok
// SIG undefined FUN_14225cda0(void)

void FUN_14225cda0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = *(char **)(param_1 + 0x408);
  pcVar2 = pcVar1 + (longlong)*(int *)(param_1 + 0x410) * 0x10;
  for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 0x10) {
    if ((*(longlong *)(pcVar1 + 8) == param_2) && (*pcVar1 == '\0')) {
      *pcVar1 = '\x01';
      *(undefined1 *)(param_1 + 0x428) = 1;
    }
  }
  return;
}



// FUNCTION 14225cde0 FUN_14225cde0 body=198 status=ok
// SIG undefined FUN_14225cde0(void)

void FUN_14225cde0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = *(char **)(param_1 + 0x408);
  pcVar4 = pcVar5 + (longlong)*(int *)(param_1 + 0x410) * 0x10;
  do {
    if (pcVar5 == pcVar4) {
      return;
    }
    lVar1 = *(longlong *)(pcVar5 + 8);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x40) != *(int *)(lVar1 + 0x6c))) {
      lVar3 = *(longlong *)(lVar1 + 0x78);
      if (*(longlong *)(lVar1 + 0x78) == 0) {
        lVar3 = lVar1 + 0x70;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                               (longlong)*(int *)(lVar1 + 0x80) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar2 * 0x10) == param_2) {
            if ((iVar2 != -1) && (*pcVar5 == '\0')) {
              *pcVar5 = '\x01';
              *(undefined1 *)(param_1 + 0x428) = 1;
            }
            break;
          }
          iVar2 = *(int *)(*(longlong *)(lVar1 + 0x38) + 8 + (longlong)iVar2 * 0x10);
        } while (iVar2 != -1);
      }
    }
    pcVar5 = pcVar5 + 0x10;
  } while( true );
}



// FUNCTION 14225ceb0 FUN_14225ceb0 body=205 status=ok
// SIG undefined FUN_14225ceb0(void)

void FUN_14225ceb0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar5 = *(longlong *)(param_1 + 0x1c8);
  lVar6 = (longlong)*(int *)(param_1 + 0x1d0) * 0xa8 + lVar5;
  do {
    if (lVar5 == lVar6) {
      TArray<FAnimNotifyEvent,FDefaultAllocator>::Reset((longlong *)(param_1 + 0x1c8),0);
      return;
    }
    plVar2 = *(longlong **)(lVar5 + 0x50);
    if (plVar2 != (longlong *)0x0) {
      lVar7 = plVar2[4];
      if (lVar7 == 0) {
LAB_14225cf38:
        lVar7 = 0;
      }
      else {
        lVar4 = UTextureRenderTarget::StaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14225cf38;
      }
      (**(code **)(*plVar2 + 0x298))(plVar2,uVar1,lVar7,4);
    }
    lVar5 = lVar5 + 0xa8;
  } while( true );
}



// FUNCTION 14225cf80 Evaluate body=12 status=ok
// SIG undefined Evaluate(void)

void FFloatCurve::Evaluate(longlong param_1,undefined8 param_2)

{
  FRichCurve::Eval(param_1 + 0x20,param_2,0);
  return;
}



// FUNCTION 14225cf90 Evaluate body=521 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FTransformCurve::Evaluate(longlong param_1,undefined8 *param_2,undefined8 param_3,float param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float local_68;
  float local_64;
  float local_60;
  undefined1 local_58 [80];
  
  uVar5 = uRam0000000146aeef4c;
  uVar11 = _DAT_146aeef40 & _DAT_146aeef50;
  uVar12 = uRam0000000146aeef44 & uRam0000000146aeef54;
  uVar13 = uRam0000000146aeef48 & uRam0000000146aeef58;
  uVar14 = uRam0000000146aeef4c & uRam0000000146aeef5c;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(uint *)((longlong)param_2 + 0xc) = uVar5;
  param_2[2] = 0;
  param_2[3] = 0;
  *(uint *)(param_2 + 4) = uVar11;
  *(uint *)((longlong)param_2 + 0x24) = uVar12;
  *(uint *)(param_2 + 5) = uVar13;
  *(uint *)((longlong)param_2 + 0x2c) = uVar14;
  fVar8 = (float)FRichCurve::Eval(param_1 + 0x40,param_3);
  fVar9 = (float)FRichCurve::Eval(param_1 + 0xb0,param_3);
  fVar10 = (float)FRichCurve::Eval(param_1 + 0x120,param_3);
  lVar1 = *(longlong *)(param_1 + 800);
  auVar2._4_4_ = fVar9 * param_4;
  auVar2._0_4_ = fVar8 * param_4;
  auVar2._8_4_ = fVar10 * param_4;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 2) = auVar2;
  iVar6 = (**(code **)(lVar1 + 8))(param_1 + 800);
  if (iVar6 < 1) {
    iVar6 = (**(code **)(*(longlong *)(param_1 + 0x390) + 8))();
    if (iVar6 < 1) {
      iVar6 = (**(code **)(*(longlong *)(param_1 + 0x400) + 8))();
      if (iVar6 < 1) {
        *(undefined4 *)(param_2 + 4) = 0x3f800000;
        *(undefined4 *)((longlong)param_2 + 0x24) = 0x3f800000;
        *(undefined4 *)(param_2 + 5) = 0x3f800000;
        *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
        goto LAB_14225d0f8;
      }
    }
  }
  fVar8 = (float)FRichCurve::Eval(param_1 + 800,param_3);
  fVar9 = (float)FRichCurve::Eval(param_1 + 0x390,param_3);
  fVar10 = (float)FRichCurve::Eval(param_1 + 0x400,param_3);
  auVar3._4_4_ = fVar9 * param_4;
  auVar3._0_4_ = fVar8 * param_4;
  auVar3._8_4_ = fVar10 * param_4;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar3;
LAB_14225d0f8:
  fVar8 = (float)FRichCurve::Eval(param_1 + 0x1b0,param_3,0);
  fVar9 = (float)FRichCurve::Eval(param_1 + 0x220,param_3,0);
  local_64 = (float)FRichCurve::Eval(param_1 + 0x290,param_3,0);
  local_64 = local_64 * param_4;
  local_68 = fVar9 * param_4;
  local_60 = fVar8 * param_4;
  puVar7 = (undefined8 *)FRotator::Quaternion(&local_68,local_58);
  uVar4 = puVar7[1];
  *param_2 = *puVar7;
  param_2[1] = uVar4;
  return param_2;
}



// FUNCTION 14225d1a0 FUN_14225d1a0 body=557 status=ok
// SIG undefined FUN_14225d1a0(void)

void FUN_14225d1a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined1 *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  
  (**(code **)(*param_1 + 0x48))();
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
  if (cVar1 == '\0') {
    if (param_1[0x1b] == 0) {
      if (*(char *)(param_2 + 0x40) == '\0') {
        FUN_1408488d0(param_2 + 8,*(undefined8 *)(param_2 + 0x18));
      }
      else {
        FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
      }
    }
    else {
      *(short *)(param_1 + 0x68) = (short)param_1[0x68] + 1;
      param_1[0x67] = DAT_1468c21b0;
      if ((short)param_1[0x68] == -1) {
        *(undefined2 *)(param_1 + 0x68) = 0;
      }
      (**(code **)(*(longlong *)param_1[0x1b] + 0x18))((longlong *)param_1[0x1b],param_2);
    }
  }
  if ((int)param_1[0xbf] != 0) {
    SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_88,param_1);
    local_70 = *(longlong *)(param_2 + 0x18);
    uVar6 = 0;
    local_80 = 0;
    local_78 = 0;
    local_68 = (undefined1 *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1e = 0;
    iVar2 = *(int *)(local_70 + 8);
    uVar5 = uVar6;
    iVar3 = 0;
    if (0 < iVar2) {
      FUN_140848c80(&local_80,iVar2);
      uVar5 = local_78 & 0xffffffff;
      iVar3 = local_78._4_4_;
    }
    iVar2 = iVar2 + (int)uVar5;
    local_78 = CONCAT44(local_78._4_4_,iVar2);
    if (iVar3 < iVar2) {
      TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_80);
    }
    TArray<FTransform,TMemStackAllocator<0>_>::operator=(&local_80);
    uVar4 = local_60._4_4_;
    local_60 = (ulonglong)local_60._4_4_ << 0x20;
    iVar2 = 0;
    uVar8 = (uint)local_78;
    if (uVar4 != (uint)local_78) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_68);
      uVar4 = local_60._4_4_;
      iVar2 = (int)local_60;
      uVar8 = (uint)local_78;
    }
    local_60 = CONCAT44(local_60._4_4_,iVar2 + uVar8);
    if ((int)uVar4 < (int)(iVar2 + uVar8)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_68);
    }
    _guard_xfg_dispatch_icall_nop(local_68 + iVar2,0,(longlong)(int)uVar8);
    *local_68 = 1;
    puVar7 = (undefined8 *)param_1[0xbe];
    uVar5 = (longlong)(int)param_1[0xbf] & 0x1fffffffffffffff;
    if (puVar7 + (int)param_1[0xbf] < puVar7) {
      uVar5 = uVar6;
    }
    if (uVar5 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar7 + 0x28))((longlong *)*puVar7,local_88);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 != uVar5);
    }
    FUN_14060d7a0(&local_80,param_2 + 8);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_68 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14225d3d0 EvaluateCurveData body=193 status=ok
// SIG undefined EvaluateCurveData(void)

void FRawCurveTracks::EvaluateCurveData(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if ((short)param_2[3] != 0) {
    for (iVar2 = 0; (-1 < iVar2 && (iVar2 < (int)param_1[1])); iVar2 = iVar2 + 1) {
      lVar3 = (longlong)iVar2 * 0x90 + *param_1;
      if (*(short *)(*(longlong *)param_2[2] + (ulonglong)*(ushort *)(lVar3 + 0x10) * 2) != -1) {
        uVar4 = FRichCurve::Eval(lVar3 + 0x20,param_3,0);
        uVar1 = *(ushort *)(*(longlong *)param_2[2] + (ulonglong)*(ushort *)(lVar3 + 0x10) * 2);
        if (uVar1 != 0xffff) {
          lVar3 = *param_2;
          *(undefined4 *)(lVar3 + (ulonglong)uVar1 * 8) = uVar4;
          *(undefined1 *)(lVar3 + 4 + (ulonglong)uVar1 * 8) = 1;
        }
      }
    }
  }
  return;
}


